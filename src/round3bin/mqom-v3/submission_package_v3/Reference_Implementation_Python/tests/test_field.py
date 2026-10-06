def run_test_field():
    try:
        from sage.all import FiniteField, PolynomialRing
    except ModuleNotFoundError:
        print(' - Tests "Field": Sage Library not found, skiping the tests')
        return

    print(' - Tests "Field":')
    SAGE_F2 = FiniteField(2)
    SAGE_R_F2 = PolynomialRing(SAGE_F2, 'X')
    SAGE_X_F2 = SAGE_R_F2.gen()
    SAGE_F2to4 = SAGE_R_F2.quotient_ring(SAGE_R_F2.ideal(
        SAGE_X_F2**4 + SAGE_X_F2 + 1
    ))
    SAGE_F2to8 = SAGE_R_F2.quotient_ring(SAGE_R_F2.ideal(
        SAGE_X_F2**8 + SAGE_X_F2**4 + SAGE_X_F2**3 + SAGE_X_F2 + 1
    ))
    SAGE_R_F2to8 = PolynomialRing(SAGE_F2to8, 'X')
    SAGE_X_F2to8 = SAGE_R_F2to8.gen()
    SAGE_F2to16 = SAGE_R_F2to8.quotient_ring(SAGE_R_F2to8.ideal(
        SAGE_X_F2to8**2 + SAGE_X_F2to8 + SAGE_F2to8([0, 0, 0, 0, 0, 1])
    ))

    from mqom.field import F2, F2to4, F2to8, F2to16

    # Test F2
    print('   - Test GF(2)')
    for i in range(2):
        for j in range(2):
            assert SAGE_F2(i)+SAGE_F2(j) == SAGE_F2((F2(i)+F2(j)).repr)
            assert SAGE_F2(i)*SAGE_F2(j) == SAGE_F2((F2(i)*F2(j)).repr)

    # Test F2to4
    print('   - Test GF(2^4)')
    to_SAGE_F2to4 = lambda x: SAGE_F2to4([int(v) for v in bin(x)[2:][::-1]])
    for i in range(16):
        for j in range(16):
            assert to_SAGE_F2to4(i)+to_SAGE_F2to4(j) == to_SAGE_F2to4((F2to4(i)+F2to4(j)).repr)
            assert to_SAGE_F2to4(i)*to_SAGE_F2to4(j) == to_SAGE_F2to4((F2to4(i)*F2to4(j)).repr)

    # Test F2to8
    print('   - Test GF(2^8)')
    to_SAGE_F2to8 = lambda x: SAGE_F2to8([int(v) for v in bin(x)[2:][::-1]])
    for i in range(256):
        for j in range(256):
            assert to_SAGE_F2to8(i)+to_SAGE_F2to8(j) == to_SAGE_F2to8((F2to8(i)+F2to8(j)).repr)
            assert to_SAGE_F2to8(i)*to_SAGE_F2to8(j) == to_SAGE_F2to8((F2to8(i)*F2to8(j)).repr)

    # Test F2to16
    print('   - Test GF(2^16)')
    def to_SAGE_F2to16(x):
        v0 = x % 256
        v1 = x // 256
        return SAGE_F2to16([
            to_SAGE_F2to8(v0),
            to_SAGE_F2to8(v1),
        ])
    import random
    rnd = [0, 1] + [random.randint(2, 2**16-1) for _ in range(256-2)]
    for i in rnd:
        for j in rnd:
            assert to_SAGE_F2to16(i)+to_SAGE_F2to16(j) == to_SAGE_F2to16((F2to16(i)+F2to16(j)).repr)
            assert to_SAGE_F2to16(i)*to_SAGE_F2to16(j) == to_SAGE_F2to16((F2to16(i)*F2to16(j)).repr)
