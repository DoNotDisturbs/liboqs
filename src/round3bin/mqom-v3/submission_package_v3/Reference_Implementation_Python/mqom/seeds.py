from .bits import xor, map_to_bits, split_in_two, pad_left
from .domains import SALT_SEL_SEED_EXPAND

def lin_ortho(bytestr):
    """ Linear orthomorphism """
    left, right = split_in_two(bytestr, len(bytestr)//2)
    return xor(left, right) + left

def index_identifier(e, j):
    return e + 64*j

def tweak_salt(params, salt, sel, v):
    """ Return a tweak of the salt using the
        repetition index e and the tree depth j
    """
    n_sep = params.domain_separation_bytesize
    tweak = map_to_bits(sel + 4*v, n_sep)
    truncated_salt = salt[:-n_sep] # Truncate of two bytes
    return truncated_salt + tweak

def seed_derive(params, salt, seed):
    """ Derive the left child of a seed node """
    seed_ = lin_ortho(seed)
    return xor(params.enc(key=salt, ptx=seed), seed_)

def seed_commit(params, salt_l, salt_r, seed):
    seed_ = lin_ortho(seed)
    com1 = xor(params.enc(key=salt_l, ptx=seed), seed_)
    com2 = xor(params.enc(key=salt_r, ptx=seed), seed_)
    seed_com = com1 + com2
    return seed_com

def seed_expand(params, salt, e, seed, n_bytes):
    from math import ceil
    n_blocks = ceil(n_bytes / params.lda)

    from .params import Variant
    if params.variant == Variant.CORRELATED_TREE: # correlated trees
        stream = seed
        tweaked_salt = tweak_salt(params, salt, SALT_SEL_SEED_EXPAND, index_identifier(e, 0))
        seed_ = params.enc(key=tweaked_salt, ptx=seed)
        for i in range(1, n_blocks):
            tweaked_salt = tweak_salt(params, salt, SALT_SEL_SEED_EXPAND, index_identifier(e, i))
            stream += xor(params.enc(key=tweaked_salt, ptx=seed), seed_)

    else: # one-tree
        stream = b''
        seed_ = lin_ortho(seed)
        for i in range(n_blocks):
            tweaked_salt = tweak_salt(params, salt, SALT_SEL_SEED_EXPAND, index_identifier(e, i))
            stream += xor(params.enc(key=tweaked_salt, ptx=seed), seed_)

    return stream[:n_bytes]

class PRG:
    def __init__(self, params):
        self._params = params

    @property
    def params(self):
        return self._params
    
    def __call__(self, seed, n_bytes):
        par = self.params
        from math import ceil
        n_blocks = ceil(n_bytes / par.lda)
        stream = b''
        for i in range(n_blocks):
            stream += par.enc(key=seed, ptx=map_to_bits(i, par.lda))
        return stream[:n_bytes]
