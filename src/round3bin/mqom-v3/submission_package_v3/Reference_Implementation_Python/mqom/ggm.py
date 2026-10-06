from .bits import xor, split_in_two
from .seeds import tweak_salt, seed_derive, index_identifier
from .domains import SALT_SEL_GGM

class CT_SmallGGMTree:
    def __init__(self, params):
        self._params = params

    @property
    def params(self):
        return self._params

    ########################################
    #####         SUB-ROUTINES         #####
    ########################################

    def _tweak_salt(self, salt, idx_rep, j):
        return tweak_salt(self.params, salt, SALT_SEL_GGM, index_identifier(idx_rep, j))
    
    def _seed_derive(self, salt, seed):
        return seed_derive(self.params, salt, seed)

    ########################################
    #####            EXPAND            #####
    ########################################

    def expand(self, salt, mseed, idx_rep, delta):
        par = self.params
        tree = [None]*(2*par.N)
        # First level
        twk_salt = self._tweak_salt(salt, idx_rep, 0)
        tree[2] = self._seed_derive(twk_salt, mseed)
        tree[3] = xor(tree[2], delta)
        # Other levels
        for j in range(1, par.log2N):
            twk_salt = self._tweak_salt(salt, idx_rep, j)
            for k in range(2**j, 2**(j+1)):
                tree[2*k] = self._seed_derive(twk_salt, tree[k])
                tree[2*k+1] = xor(tree[2*k], tree[k])
        # Get leaves
        lseeds = tree[par.N:]
        return (tree, lseeds)
    
    ########################################
    #####             OPEN             #####
    ########################################

    def open(self, tree, hidden_idx):
        par = self.params
        path = b''
        hidden_node = par.N + hidden_idx
        for _ in range(par.log2N):
            path += tree[hidden_node ^ 0x01]
            hidden_node = hidden_node//2
        return path

    ########################################
    #####       PARTIALLY EXPAND       #####
    ########################################
        
    def partially_expand(self, salt, path, idx_rep, hidden_idx):
        par = self.params
        # Expand the GGM tree
        tree = [None]*(2*par.N)
        hidden_node = par.N + hidden_idx
        for _ in range(par.log2N):
            tree[hidden_node ^ 0x01], path = split_in_two(path, par.lda)
            hidden_node = hidden_node//2
        for j in range(1, par.log2N):
            twk_salt = self._tweak_salt(salt, idx_rep, j)
            for k in range(2**j, 2**(j+1)):
                if tree[k] != None:
                    tree[2*k] = self._seed_derive(twk_salt, tree[k])
                    tree[2*k+1] = xor(tree[2*k], tree[k])
        lseeds = tree[par.N:]
        return lseeds


class OT_BigTree:
    def __init__(self, params):
        self._params = params

    @property
    def params(self):
        return self._params
    
    ########################################
    #####         SUB-ROUTINES         #####
    ########################################

    def _tweak_salt(self, salt, k):
        return tweak_salt(self.params, salt, SALT_SEL_GGM, k)
    
    def _seed_derive(self, salt, seed):
        return seed_derive(self.params, salt, seed)

    def _is_leaf(self, node_idx):
        par = self.params
        return (node_idx >= par.tau*par.N)

    def _leaf_position(self, leaf_idx):
        par = self.params
        nb_deeper_leaves = 2*par.tau*par.N - 2**par.h
        if leaf_idx < nb_deeper_leaves:
            return 2**par.h + leaf_idx
        else:
            return par.tau*par.N + (leaf_idx - nb_deeper_leaves)
        
    def _leaf_depth(self, leaf_idx):
        par = self.params
        nb_deeper_leaves = 2*par.tau*par.N - 2**par.h
        if leaf_idx < nb_deeper_leaves:
            return par.h
        else:
            return par.h-1
        
    def _from_leaf_position(self, node_idx):
        par = self.params
        nb_deeper_leaves = 2*par.tau*par.N - 2**par.h
        if node_idx >= 2**par.h:
            return node_idx - 2**par.h
        else:
            return nb_deeper_leaves + (node_idx - par.tau*par.N)

    def _get_sensitive_node_indexes(self, hidden_leaves_idxs):
        par = self.params

        sorted_hidden_leaves_idxs = sorted(hidden_leaves_idxs)
        hidden_nodes = []
        leaf_path = [0]*(par.h+1)
        for e in range(par.tau):

            # Collect leaf informations
            leaf_idx = sorted_hidden_leaves_idxs[e]
            node_idx = self._leaf_position(leaf_idx)
            depth = self._leaf_depth(leaf_idx)

            # Compute the index path until merging with the previous path
            merge_pos = depth
            while merge_pos >= 0 and leaf_path[merge_pos] != node_idx:
                leaf_path[merge_pos] = node_idx
                node_idx = node_idx // 2
                merge_pos -= 1
            
            # Append the new indexes into the list of hidden nodes
            for j in range(merge_pos+1, depth+1):
                hidden_nodes.append(leaf_path[j])

        return hidden_nodes

    def _get_node_indexes_in_path(self, hidden_nodes):
        par = self.params

        pos = 0
        size = len(hidden_nodes) - 2*par.tau + 1
        assert (size <= par.Topen)

        stack = [1]
        path_node_idxs = [None]*par.Topen
        while len(stack) > 0:
            k = stack.pop()

            # Add to the path when it is not hidden
            if len(hidden_nodes) == 0 or k != hidden_nodes[0]:
                if size < par.Topen and not self._is_leaf(k):
                    size += 1 # We await to have exactly Topen nodes
                else:
                    path_node_idxs[pos] = k
                    pos += 1
                    continue
            else:
                hidden_nodes.pop(0)

            # Derive the child nodes
            if not self._is_leaf(k):
                stack.append(2*k+1)
                stack.append(2*k+0)

        return path_node_idxs

    ########################################
    #####            EXPAND            #####
    ########################################

    def expand(self, salt, root_seed):
        par = self.params

        # Expand the GGM tree
        tree = [None]*(2*par.tau*par.N)
        tree[1] = root_seed
        for k in range(1, par.tau*par.N):
            twk_salt = self._tweak_salt(salt, k)
            tree[2*k] = self._seed_derive(twk_salt, tree[k])
            tree[2*k+1] = xor(tree[2*k], tree[k])

        # Get the leaves
        lseeds = [None]*(par.tau*par.N)
        for i in range(par.tau*par.N):
            lseeds[i] = tree[self._leaf_position(i)]

        return (tree, lseeds)
    
    ########################################
    #####             OPEN             #####
    ########################################

    def is_valid_opening_set(self, hidden_leaves_idxs):
        par = self.params
        hidden_nodes = self._get_sensitive_node_indexes(hidden_leaves_idxs)
        size = len(hidden_nodes) - 2*par.tau + 1
        return (size <= par.Topen)

    def open(self, tree, hidden_leaves_idxs):
        par = self.params

        # Get indexes of the sensitive nodes
        hidden_nodes = self._get_sensitive_node_indexes(hidden_leaves_idxs)

        # Get indexes of the Topen nodes to be revealed
        path_node_idxs = self._get_node_indexes_in_path(hidden_nodes)

        # Collect the Topen nodes to be revealed
        path = b''
        for pos in range(par.Topen):
            path += tree[path_node_idxs[pos]]
        return path

    ########################################
    #####       PARTIALLY EXPAND       #####
    ########################################
        
    def partially_expand(self, salt, path, hidden_leaves_idxs):
        par = self.params

        # Get indexes of the sensitive nodes
        hidden_nodes = self._get_sensitive_node_indexes(hidden_leaves_idxs)

        # Get indexes of the Topen nodes in the path
        path_node_idxs = self._get_node_indexes_in_path(hidden_nodes)

        # Assign nodes with sibling path
        tree = [None]*(2*par.N*par.tau)
        for pos in range(par.Topen):
            tree[path_node_idxs[pos]], path = split_in_two(path, par.lda)

        # Derive nodes from sibling path
        for k in range(1, par.tau*par.N):
            if tree[k] != None:
                twk_salt = self._tweak_salt(salt, k)
                tree[2*k] = self._seed_derive(twk_salt, tree[k])
                tree[2*k+1] = xor(tree[2*k], tree[k])

        # Get the leaves
        lseeds = [None]*(par.tau*par.N)
        for i in range(par.tau*par.N):
            lseeds[i] = tree[self._leaf_position(i)]
            
        return lseeds
