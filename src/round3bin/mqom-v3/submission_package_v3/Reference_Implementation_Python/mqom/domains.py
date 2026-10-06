""" Domain separation values used throughout the scheme.

    Two independent mechanisms are used:
    - a one-byte prefix fed into the XOF calls (par.xof(...));
    - a small integer ("sel") fed into seeds.tweak_salt(), selecting which
      part of the scheme is tweaking the salt.
"""

# XOF domain separation (first argument to par.xof(...))
DOM_MQ_EQUATION_SEED = b'\x00'  # Expansion of one MQ equation's seed (mq.py)
DOM_COM2             = b'\x01'  # Second-level commitment com2 (mqom.py)
DOM_PRESIG_ID        = b'\x02'  # Pre-signature identifier presig_id (mqom.py)
DOM_MSG_HASH         = b'\x03'  # Hash of the signed message (mqom.py)
DOM_SIG_ID           = b'\x04'  # Signature identifier sig_id (mqom.py)
DOM_CHALLENGE        = b'\x05'  # Challenge derivation input (mqom.py)
DOM_ISTAR            = b'\x06'  # i_star sampling (mqom.py)
DOM_COM1             = b'\x07'  # Line-commitment compression com1 (blc.py)
DOM_GAMMA            = b'\x08'  # Batching matrix Gamma (piop.py)

# tweak_salt() "sel" domain separation (seeds.py)
SALT_SEL_BLC_LEFT    = 0  # Line commitment, left (blc.py)
SALT_SEL_BLC_RIGHT   = 1  # Line commitment, right (blc.py)
SALT_SEL_GGM         = 2  # GGM tree node derivation (ggm.py)
SALT_SEL_SEED_EXPAND = 3  # Leaf-seed expansion (seeds.py: seed_expand)
