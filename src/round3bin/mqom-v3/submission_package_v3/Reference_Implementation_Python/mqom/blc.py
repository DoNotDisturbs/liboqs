from .parsing import parse, serialize, ByteStrFrmt, VectorFrmt, ArrayFrmt
from .bits import split_in_two, pad_left, map_to_bits
from .utils import MultiDimArrays, Arrays, Array
from .seeds import tweak_salt, seed_commit, seed_expand
from .domains import DOM_COM1, SALT_SEL_BLC_LEFT, SALT_SEL_BLC_RIGHT
from abc import ABC, abstractmethod

class BLC:
    def __init__(self, params):
        self._params = params

        par = self.params
        mq_solution_format = VectorFrmt(par.base_field, par.n)
        self._x_format = mq_solution_format
        self._u_format = VectorFrmt(par.extension_field, par.eta)

    @property
    def params(self):
        return self._params

    @property
    def ggmtree(self):
        return self.params.ggmtree

    @property
    def x_format(self):
        return self._x_format

    @property
    def u_format(self):
        return self._u_format
    
    @abstractmethod
    def get_opening_bytesize(self):
        raise NotImplementedError

    @abstractmethod
    def commit(self, mseed, salt, x):
        raise NotImplementedError

    @abstractmethod
    def is_valid_challenge(self, i_star):
        raise NotImplementedError

    @abstractmethod
    def open(self, key, i_star, alpha1):
        raise NotImplementedError

    @abstractmethod
    def eval(self, salt, opening, i_star):
        raise NotImplementedError

    ########################################
    #####         SUB-ROUTINES         #####
    ########################################
    
    def _seed_commit(self, salt_l, salt_r, seed):
        return seed_commit(self.params, salt_l, salt_r, seed)

    def _seed_expand(self, salt, e, seed):
        return seed_expand(self.params, salt, e, seed, self.x_format.get_bytesize() + self.u_format.get_bytesize())

    ########################################
    #####       CONVERT TO LINE        #####
    ########################################

    def convert_to_line(self, salt, e, lseed, x):
        par = self.params
        ls_com, bar_x, bar_u = Arrays(3, par.N)

        # Commit all the seeds and expand them
        tweaked_salt_l = tweak_salt(self.params, salt, SALT_SEL_BLC_LEFT, e)
        tweaked_salt_r = tweak_salt(self.params, salt, SALT_SEL_BLC_RIGHT, e)
        for i in range(par.N):
            ls_com[i] = self._seed_commit(tweaked_salt_l, tweaked_salt_r, lseed[i])
            bar_x[i], bar_u[i] = parse(self._seed_expand(salt, e, lseed[i]), self.x_format, self.u_format)

        # Compute P_u
        u0 = [
            - sum(par.omega[i]*bar_u[i][j] for i in range(par.N))
            for j in range(par.eta)
        ]
        u1 = [
            sum(bar_u[i][j] for i in range(par.N))
            for j in range(par.eta)
        ]

        # Compute P_x
        x0 = [
            - sum(par.omega[i]*bar_x[i][j] for i in range(par.N))
            for j in range(par.n)
        ]
        Delta_x = [
            x[j] - sum(bar_x[i][j] for i in range(par.N))
            for j in range(par.n)
        ]

        return (ls_com, Delta_x, x0, u0, u1)
    
    def convert_to_line_evaluation(self, salt, e, lseed, Delta_x, i_star):
        par = self.params
        ls_com, bar_x, bar_u = Arrays(3, par.N)

        tweaked_salt_l = tweak_salt(self.params, salt, SALT_SEL_BLC_LEFT, e)
        tweaked_salt_r = tweak_salt(self.params, salt, SALT_SEL_BLC_RIGHT, e)
        for i in range(par.N):
            if i != i_star:
                ls_com[i] = self._seed_commit(tweaked_salt_l, tweaked_salt_r, lseed[i])
                bar_x[i], bar_u[i] = parse(self._seed_expand(salt, e, lseed[i]), self.x_format, self.u_format)

        r = par.omega[i_star]
        x_eval = [
            Delta_x[j]*r + sum(bar_x[i][j]*(r-par.omega[i]) for i in range(par.N) if i != i_star)
            for j in range(par.n)
        ]
        u_eval = [
            sum(bar_u[i][j]*(r-par.omega[i]) for i in range(par.N) if i != i_star)
            for j in range(par.eta)
        ]

        return (ls_com, x_eval, u_eval)


class CT_BLC(BLC):
    def __init__(self, params):
        super().__init__(params)

        # Define the opening format
        par = params
        self._rep_opening_format = ArrayFrmt( # decom
            ByteStrFrmt(par.log2N*par.lda), # path
            ByteStrFrmt(2*par.lda), # out_ls_com
            ByteStrFrmt(self.x_format.get_bytesize()-par.lda), # Delta_x_
            VectorFrmt(par.extension_field, par.eta), # alpha1
        )

        self._opening_format = ArrayFrmt(*[
            ByteStrFrmt(self._rep_opening_format.get_bytesize())
            for _ in range(par.tau)
        ])

    def get_opening_bytesize(self):
        return self._opening_format.get_bytesize()

    ########################################
    #####            COMMIT            #####
    ########################################

    def commit(self, mseed, salt, x):
        par = self.params
        delta, x_ = split_in_two(serialize(x), par.lda)

        # Expand the randomness for all the parallel seed trees
        tree, u0, u1, x0, Delta_x, Delta_x_, com1 = Arrays(7, par.tau)
        ls_com, lseed = MultiDimArrays(2, (par.tau, par.N))
        for e in range(par.tau):
            # Expand the tree
            (tree[e], lseed[e]) = self.ggmtree.expand(salt, mseed, e, delta)

            # Convert leaf seeds to line
            ls_com[e], Delta_x[e], x0[e], u0[e], u1[e] = self.convert_to_line(salt, e, lseed[e], x)
            zero, Delta_x_[e] = split_in_two(serialize(Delta_x[e]), par.lda)
            assert zero == b'\x00'*len(zero)

            # Compress the public proving data
            com1[e] = par.xof((DOM_COM1, map_to_bits(e, 1), salt, ls_com[e], Delta_x_[e]), len=2*par.lda)

        key = (tree, ls_com, Delta_x_)
        return (com1, key, x0, u0, u1)
    
    ########################################
    #####             OPEN             #####
    ########################################
    
    def is_valid_challenge(self, i_star):
        return True

    def open(self, salt, key, i_star, alpha1):
        """ Open evaluation of index i_star[e] for the e-th parallel commitment """
        (tree, ls_com, Delta_x_) = key
        par = self.params

        chunk, path, out_ls_com = Arrays(3, par.tau)
        for e in range(par.tau):
            path[e] = self.ggmtree.open(tree[e], i_star[e])
            out_ls_com[e] = ls_com[e][i_star[e]]
            chunk[e] = serialize(path[e], out_ls_com[e], Delta_x_[e], alpha1[e])

        opening = serialize(chunk)
        return opening
    
    ########################################
    #####             OPEN             #####
    ########################################

    def eval(self, salt, opening, i_star):
        """ Get the opened evaluations """
        chunk = self._opening_format.parse(opening)
        par = self.params

        com1, x_eval, u_eval, Delta_x, Delta_x_, path, out_ls_com, alpha1 = Arrays(8, par.tau)
        ls_com, lseed = MultiDimArrays(2, (par.tau, par.N))
        for e in range(par.tau):
            (path[e], out_ls_com[e], Delta_x_[e], alpha1[e]) = self._rep_opening_format.parse(chunk[e])
            lseed[e] = self.ggmtree.partially_expand(salt, path[e], e, i_star[e])

            Delta_x[e] = self.x_format.parse(pad_left(Delta_x_[e], par.lda))
            ls_com[e], x_eval[e], u_eval[e] = self.convert_to_line_evaluation(salt, e, lseed[e], Delta_x[e], i_star[e])

            ls_com[e][i_star[e]] = out_ls_com[e]
            com1[e] = par.xof((DOM_COM1, map_to_bits(e, 1), salt, ls_com[e], Delta_x_[e]), len=2*par.lda)
        
        return (com1, x_eval, u_eval, alpha1)



class OT_BLC(BLC):
    def __init__(self, params):
        super().__init__(params)

        # Define the opening format
        par = params
        self._opening_format = ArrayFrmt( # decom
            ByteStrFrmt(par.Topen*par.lda), # path
            ArrayFrmt(*[
                ByteStrFrmt(2*par.lda) # out_ls_com
                for _ in range(par.tau)
            ]),
            ArrayFrmt(*[
                self.x_format # Delta_x
                for _ in range(par.tau)
            ]),
            ArrayFrmt(*[
                VectorFrmt(par.extension_field, par.eta) # alpha1
                for _ in range(par.tau)
            ]),
        )

    def get_opening_bytesize(self):
        return self._opening_format.get_bytesize()

    ########################################
    #####            COMMIT            #####
    ########################################

    def commit(self, mseed, salt, x):
        par = self.params

        # Expand the randomness for all the parallel seed trees
        u0, u1, x0, Delta_x, com1 = Arrays(5, par.tau)
        ls_com, lseed = MultiDimArrays(2, (par.tau, par.N))

        (tree, lseed_all) = self.ggmtree.expand(salt, mseed)
        for e in range(par.tau):
            # Extract leaf seeds
            lseed[e] = [lseed_all[par.tau*i+e] for i in range(par.N)]

            # Convert leaf seeds to line
            ls_com[e], Delta_x[e], x0[e], u0[e], u1[e] = self.convert_to_line(salt, e, lseed[e], x)

            # Compress the public proving data
            com1[e] = par.xof((DOM_COM1, map_to_bits(e, 1), salt, ls_com[e], serialize(Delta_x[e])), len=2*par.lda)

        key = (tree, ls_com, Delta_x)
        return (com1, key, x0, u0, u1)
    
    ########################################
    #####             OPEN             #####
    ########################################
    
    def is_valid_challenge(self, i_star):
        par = self.params
        hidden_leaf_idxs = [i_star[e]*par.tau + e for e in range(par.tau)]
        return self.ggmtree.is_valid_opening_set(hidden_leaf_idxs)

    def open(self, salt, key, i_star, alpha1):
        """ Open evaluation of index i_star[e] for the e-th parallel commitment """
        par = self.params
        (tree, ls_com, Delta_x) = key

        hidden_leaf_idxs = [i_star[e]*par.tau + e for e in range(par.tau)]
        path = self.ggmtree.open(tree, hidden_leaf_idxs)

        out_ls_com = Array(par.tau)
        for e in range(par.tau):
            out_ls_com[e] = ls_com[e][i_star[e]]
        
        opening = serialize(path, out_ls_com, Delta_x, alpha1)
        return opening
    
    ########################################
    #####             OPEN             #####
    ########################################

    def eval(self, salt, opening, i_star):
        """ Get the opened evaluations """
        (path, out_ls_com, Delta_x, alpha1) = self._opening_format.parse(opening)
        par = self.params
        hidden_leaf_idxs = [i_star[e]*par.tau + e for e in range(par.tau)]

        com1, x_eval, u_eval = Arrays(3, par.tau)
        ls_com, lseed = MultiDimArrays(2, (par.tau, par.N))

        lseed_all = self.ggmtree.partially_expand(salt, path, hidden_leaf_idxs)
        for e in range(par.tau):
            # Extract leaf seeds
            lseed[e] = [lseed_all[par.tau*i+e] for i in range(par.N)]
            ls_com[e], x_eval[e], u_eval[e] = self.convert_to_line_evaluation(salt, e, lseed[e], Delta_x[e], i_star[e])

            ls_com[e][i_star[e]] = out_ls_com[e]
            com1[e] = par.xof((DOM_COM1, map_to_bits(e, 1), salt, ls_com[e], serialize(Delta_x[e])), len=2*par.lda)
        
        return (com1, x_eval, u_eval, alpha1)
