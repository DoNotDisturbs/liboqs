from .parsing import serialize, ByteStrFrmt, VectorFrmt, ArrayFrmt
from .utils import Array
from .bits import map_to_bits
from .domains import DOM_MSG_HASH, DOM_COM2, DOM_PRESIG_ID, DOM_SIG_ID, DOM_CHALLENGE, DOM_ISTAR

class SigningFailure(Exception):
    pass

class MQOM3:
    def __init__(self, params, random_bytes):
        self.params = params
        self.random_bytes = random_bytes

        par = params

        ### Define all the data format we use in the scheme
        # Format of the unitary data
        mq_solution_format = VectorFrmt(par.base_field, par.n) # x
        mq_output_format = VectorFrmt(par.extension_field, par.m_hat) # y
        mseed_eq_format = ByteStrFrmt(2*par.lda) # mseed_eq
        digest_format = ByteStrFrmt(2*par.lda)
        salt_format = ByteStrFrmt(par.lda)
        nonce_format = ByteStrFrmt(4)
        
        # Format of the structures (pk, sk, sig, ...)
        self.pk_format = ArrayFrmt(
            mseed_eq_format, # mseed_eq
            mq_output_format, # y
        )
        self.sk_format = ArrayFrmt(
            ByteStrFrmt(self.pk_format.get_bytesize()), # pk
            mq_solution_format, # x
        )
        self.sig_format = ArrayFrmt(
            digest_format, # sig_id
            salt_format, # salt
            nonce_format, # nonce
            ByteStrFrmt(self.blc.get_opening_bytesize()), # opening
        )
        self.mq_solution_format = mq_solution_format

    @property
    def blc(self):
        return self.params.blc
    
    @property
    def piop(self):
        return self.params.piop
    
    @property
    def mq_eqns(self):
        return self.params.mq_eqns
    
    ########################################
    #####        KEY GENERATION        #####
    ########################################

    def generate_keys(self, bitstr_x=None, mseed_eq=None):
        """ MQOM3 -- Key Generation """
        par = self.params
        
        # Randomness
        bitstr_x = bitstr_x or self.random_bytes(self.mq_solution_format.get_bytesize())
        mseed_eq = mseed_eq or self.random_bytes(2*par.lda)
        x = self.mq_solution_format.parse(bitstr_x)

        # Expand the MQ instance
        (A, b) = self.mq_eqns.expand_equations(mseed_eq)
        y = self.mq_eqns.compute_y(x, A, b)

        # Serialize and define keys
        pk = serialize(mseed_eq, y)
        sk = serialize(pk, x)
        return (pk, sk)
    
    def get_public_key_bytesize(self):
        return self.pk_format.get_bytesize()
    
    def get_secret_key_bytesize(self):
        return self.sk_format.get_bytesize()
    
    ########################################
    #####             SIGN             #####
    ########################################

    def _derive_challenge(self, sig_id, nonce_bytes):
        par = self.params

        expanded_bytes = par.xof(
            (DOM_CHALLENGE, sig_id),
            len=(par.lda*4 - 2*4),
        )
        g0 = expanded_bytes[:par.lda - 4]
        g1 = expanded_bytes[par.lda - 4:(par.lda - 4)*2]
        k0 = expanded_bytes[(par.lda - 4)*2:(par.lda - 4)*2+par.lda]
        k1 = expanded_bytes[(par.lda - 4)*2+par.lda:(par.lda - 4)*2+par.lda*2]

        k0 = k0[:-1] + bytes([(k0[-1] & 0x3F) ^ 0x80]) # We force two bits
        k1 = k1[:-1] + bytes([(k1[-1] & 0x3F) ^ 0xC0]) # We force two bits

        c0 = par.enc(key=k0, ptx=g0+nonce_bytes)
        c1 = par.enc(key=k1, ptx=g1+nonce_bytes)
        # It supports w-1 <= 24
        val = ((c0[0] ^ c1[0]) + 256*(c0[1] ^ c1[1]) + 65536*(c0[2] ^ c1[2])) % (2**(par.w-1))

        if val == 0:
            unred_i_star = par.xof(
                (DOM_ISTAR, sig_id, nonce_bytes, c0, c1),
                len=(par.tau*2),
            )
            unred_i_star = [unred_i_star[2*e] + 256*unred_i_star[2*e+1] for e in range(par.tau)]
            i_star = [(unred_i_star[e] % par.N) for e in range(par.tau)]
            
            if self.blc.is_valid_challenge(i_star):
                return i_star

        return None

    def _sample_challenge(self, sig_id):
        for nonce in range(2**32):
            i_star = self._derive_challenge(sig_id, map_to_bits(nonce, 4))
            if i_star is not None:
                return (i_star, map_to_bits(nonce, 4))
        raise SigningFailure('There exists no nonce that produces a valid signature.')

    def sign(self, sk, msg, mseed=None, salt=None):
        """ MQOM3 -- Signing Algorithm """
        par = self.params

        # Key Parsing & Expansion
        pk, x = self.sk_format.parse(sk)
        mseed_eq, _ = self.pk_format.parse(pk)

        # Initialization
        mseed = mseed or self.random_bytes(par.lda)
        salt = salt or self.random_bytes(par.lda)

        # Line/Polynomial Commitment
        (com1, key, x0, u0, u1) = self.blc.commit(mseed, salt, x)

        # PIOP Protocol: Compute Alpha Line
        (alpha0, alpha1) = self.piop.compute_alpha_lines(com1, x, x0, u0, u1, mseed_eq)
        
        # PIOP Queries & Opening
        com2 = par.xof(DOM_COM2, serialize([(alpha0[e], alpha1[e]) for e in range(par.tau)]), len=2*par.lda)
        msg_hash = par.xof(DOM_MSG_HASH, msg, len=2*par.lda)
        presig_id = par.xof((DOM_PRESIG_ID, pk, com1, com2), len=2*par.lda)
        sig_id = par.xof((DOM_SIG_ID, presig_id, msg_hash), len=2*par.lda)
        (i_star, nonce_bytes) = self._sample_challenge(sig_id)
        opening = self.blc.open(salt, key, i_star, alpha1)

        # Serialization
        sig = serialize(sig_id, salt, nonce_bytes, opening)
        return sig
    
    def get_signature_bytesize(self):
        return self.sig_format.get_bytesize()
    
    ########################################
    #####            VERIFY            #####
    ########################################

    def verify(self, pk, msg, sig):
        """ MQOM3 -- Verification Algorithm """
        par = self.params
        mseed_eq, y = self.pk_format.parse(pk)
        (sig_id, salt, nonce_bytes, opening) = self.sig_format.parse(sig)

        i_star = self._derive_challenge(sig_id, nonce_bytes)
        if i_star == None:
            return False
        
        (com1, x_eval, u_eval, alpha1) = self.blc.eval(salt, opening, i_star)        
        alpha0 = self.piop.recompute_alpha_lines(com1, alpha1, i_star, x_eval, u_eval,mseed_eq, y)

        com2 = par.xof(DOM_COM2, serialize([(alpha0[e], alpha1[e]) for e in range(par.tau)]), len=2*par.lda)
        msg_hash = par.xof(DOM_MSG_HASH, msg, len=2*par.lda)
        presig_id = par.xof((DOM_PRESIG_ID, pk, com1, com2), len=2*par.lda)
        sig_id_ = par.xof((DOM_SIG_ID, presig_id, msg_hash), len=2*par.lda)
        if sig_id_ != sig_id:
            return False
        
        return True
