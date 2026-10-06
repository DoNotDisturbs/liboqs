from enum import Enum

class Category(Enum):
    I   = 'CAT-I'
    III = 'CAT-III'
    V   = 'CAT-V'

class Variant(Enum):
    ONE_TREE = 'one-tree'
    CORRELATED_TREE = 'correlated-tree'

class TradeOff(Enum):
    SHORTER = 'shorter'
    SHORT   = 'short'
    FAST    = 'fast'

VALID_FIELD_TRADEOFF = {
    2:  [TradeOff.SHORTER],
    16: [TradeOff.SHORT, TradeOff.FAST],
}

class MQOM3Parameters:
    def __init__(self, lda, base_field, n, tau, N, extension_field, w, variant, Topen=None):
        assert lda in [16, 24, 32]
        self._lda = lda
        self._base_field = base_field
        self._n = n
        self._tau = tau
        self._N = N
        self._extension_field = extension_field
        self._variant = variant
        self._w = w
        self._Topen = Topen
        assert (variant == Variant.ONE_TREE) or (Topen == None)
        self._domain_separation_bytesize = {
            Variant.CORRELATED_TREE: 2,
            Variant.ONE_TREE: 3,
        }[variant]

        from .field import BinaryField
        assert issubclass(base_field, BinaryField)
        assert issubclass(extension_field, BinaryField)
        assert extension_field.bitsize % base_field.bitsize == 0

        from math import log2
        q = base_field.order()
        log2q = base_field.bitsize
        mu = extension_field.bitsize // base_field.bitsize
        self._q = q
        self._log2q = log2q
        self._mu = mu
        assert (8*lda) % (mu*log2q) == 0, 'lda should be a multiple of mu*log2q'
        self._eta = (8*lda) // (mu*log2q)
        assert n % mu == 0, 'n should be a multiple mu'
        from math import log2, ceil
        self._log2N = round(log2(N))
        assert N == 2**self._log2N
        self._h = {
            Variant.CORRELATED_TREE: self._log2N,
            Variant.ONE_TREE: self._log2N + ceil(log2(tau)),
        }[variant]

        from .ggm import CT_SmallGGMTree, OT_BigTree
        from .seeds import PRG
        from .blc import CT_BLC, OT_BLC
        from .piop import PIOP
        from .mq import MQEquations
        from .rijndael import AES128, Rijndael256_256_Trun192, Rijndael256_256
        from .shake import SHAKE128, SHAKE256
        self._enc = {
            16: AES128,
            24: Rijndael256_256_Trun192,
            32: Rijndael256_256,
        }[lda]
        self._tree_cls = CT_SmallGGMTree if variant == Variant.CORRELATED_TREE else OT_BigTree
        self._ggmtree = self._tree_cls(params=self)
        self._prg = PRG(params=self)
        self._xof = {
            16: SHAKE128,
            24: SHAKE256,
            32: SHAKE256,
        }[lda]
        self._blc_cls = CT_BLC if variant == Variant.CORRELATED_TREE else OT_BLC
        self._blc = self._blc_cls(params=self)
        self._piop = PIOP(params=self)
        self._mq_eqns = MQEquations(params=self)

        if self.extension_field is not None:
            self._omega = []
            for i in range(N):
                self._omega.append(extension_field(i^(i>>1))) # Gray code
            assert len(self.omega) == N
        else:
            self._omega = None

    @property
    def lda(self):
        return self._lda
     
    @property
    def base_field(self):
        return self._base_field
     
    @property
    def n(self):
        return self._n
     
    @property
    def m(self):
        # The number of MQ equations is the same than the number of MQ unknowns
        return self._n
     
    @property
    def m_hat(self):
        return self.m // self.mu
     
    @property
    def tau(self):
        return self._tau
    
    @property
    def N(self):
        return self._N

    @property
    def extension_field(self):
        return self._extension_field
    
    @property
    def eta(self):
        return self._eta
    
    @property
    def w(self):
        return self._w
    
    @property
    def variant(self):
        return self._variant
    
    @property
    def Topen(self):
        return self._Topen
    
    @property
    def domain_separation_bytesize(self):
        return self._domain_separation_bytesize
    
    @property
    def q(self):
        return self._q
    
    @property
    def log2q(self):
        return self._log2q
    
    @property
    def mu(self):
        return self._mu
    
    @property
    def log2N(self):
        return self._log2N
    
    @property
    def h(self):
        return self._h
    
    @property
    def enc(self):
        return self._enc
    
    @property
    def ggmtree(self):
        return self._ggmtree

    @property
    def prg(self):
        return self._prg
    
    @property
    def xof(self):
        return self._xof
    
    @property
    def blc(self):
        return self._blc
    
    @property
    def piop(self):
        return self._piop
    
    @property
    def mq_eqns(self):
        return self._mq_eqns
    
    @property
    def omega(self):
        return self._omega

    @classmethod
    def get(cls, cat, field_size, tradeoff, variant):
        from .field import F2, F2to4, F2to8, F2to16

        lda = {
            Category.I: 16,
            Category.III: 24,
            Category.V: 32,
        }[cat]

        # Base Field
        if field_size == 2:
            F = F2
            n = {
                Category.I:   160,
                Category.III: 240,
                Category.V:   320,
            }[cat]
        elif field_size == 16:
            F = F2to4
            n = {
                Category.I:   64,
                Category.III: 96,
                Category.V:   128,
            }[cat]
        else:
            raise ValueError(f'No instance with |F|={field_size}')

        # Trade-off
        Topen = None
        if cat == Category.I:
            if tradeoff == TradeOff.SHORTER:
                K = F2to16
                N = 4096
                if variant == Variant.CORRELATED_TREE:
                    tau = 10
                    w = 18
                else: # One-Tree
                    N = 8192 # Exception
                    tau = 10
                    w = 8
                    Topen = 110
            elif tradeoff == TradeOff.SHORT:
                K = F2to16
                N = 2048
                if variant == Variant.CORRELATED_TREE:
                    tau = 12
                    w = 8
                else: # One-Tree
                    tau = 12
                    w = 8
                    Topen = 120
            elif tradeoff == TradeOff.FAST:
                K = F2to8
                N = 256
                if variant == Variant.CORRELATED_TREE:
                    tau = 17
                    w = 9
                else: # One-Tree
                    tau = 17
                    w = 9
                    Topen = 119
            else:
                raise ValueError(f'Unknown tradeoff: {tradeoff}')
            
        elif cat == Category.III:
            if tradeoff == TradeOff.SHORTER:
                K = F2to16
                N = 4096
                if variant == Variant.CORRELATED_TREE:
                    tau = 16
                    w = 16
                else: # One-Tree
                    tau = 17
                    w = 5
                    Topen = 170
            elif tradeoff == TradeOff.SHORT:
                K = F2to16
                N = 2048
                if variant == Variant.CORRELATED_TREE:
                    tau = 18
                    w = 12
                else: # One-Tree
                    tau = 19
                    w = 2
                    Topen = 175
            elif tradeoff == TradeOff.FAST:
                K = F2to8
                N = 256
                if variant == Variant.CORRELATED_TREE:
                    tau = 26
                    w = 10
                else: # One-Tree
                    tau = 26
                    w = 10
                    Topen = 186
            else:
                raise ValueError(f'Unknown tradeoff: {tradeoff}')
            
        elif cat == Category.V:
            if tradeoff == TradeOff.SHORTER:
                K = F2to16
                N = 4096
                if variant == Variant.CORRELATED_TREE:
                    tau = 22
                    w = 14
                else: # One-Tree
                    tau = 22
                    w = 14
                    Topen = 241
            elif tradeoff == TradeOff.SHORT:
                K = F2to16
                N = 2048
                if variant == Variant.CORRELATED_TREE:
                    tau = 25
                    w = 6
                else: # One-Tree
                    tau = 25
                    w = 6
                    Topen = 238
            elif tradeoff == TradeOff.FAST:
                K = F2to8
                N = 256
                if variant == Variant.CORRELATED_TREE:
                    tau = 35
                    w = 11
                else: # One-Tree
                    tau = 36
                    w = 4
                    Topen = 235
            else:
                raise ValueError(f'Unknown tradeoff: {tradeoff}')

        else:
            raise ValueError(f'Unknown category: {cat}')

        return cls(
            lda=lda, base_field=F, n=n, tau=tau, N=N,
            extension_field=K, w=w, variant=variant, Topen=Topen
        )
