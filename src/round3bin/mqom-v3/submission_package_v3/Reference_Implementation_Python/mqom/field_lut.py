def _gf_mul(a, b, degree, modulus):
    """ Multiplication in GF(2^degree), where field elements are represented
        as integers (bit i of the integer is the coefficient of X^i), via
        peasant multiplication followed by reduction modulo `modulus`
        (also encoded as an integer, of degree exactly `degree`).
    """
    r = 0
    for i in range(degree):
        if (b >> i) & 1:
            r ^= a << i
    for i in range(2*degree - 2, degree - 1, -1):
        if (r >> i) & 1:
            r ^= modulus << (i - degree)
    return r

# GF(2^4), reduction polynomial X^4 + X + 1
LUT_F16 = [[_gf_mul(a, b, 4, 0b10011) for b in range(16)] for a in range(16)]

# GF(2^8), reduction polynomial X^8 + X^4 + X^3 + X + 1
LUT_F256 = [[_gf_mul(a, b, 8, 0b100011011) for b in range(256)] for a in range(256)]

# Canonical embedding of GF(2^4) into GF(2^8) (subfield embedding, since 4 | 8).
# Kept as an explicit table rather than re-derived algorithmically: picking a
# compatible generator/root mapping is easy to get subtly wrong, and this table
# is cross-checked against Sage in tests/test_field.py.
LUT_LIFTING_F16_F256 = [0, 1, 224, 225, 93, 92, 189, 188, 176, 177, 80, 81, 237, 236, 13, 12]
