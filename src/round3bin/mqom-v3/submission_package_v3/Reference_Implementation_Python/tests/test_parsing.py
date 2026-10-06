def run_test_parsing():
    from mqom.parsing import VectorFrmt

    def random_bytes(n):
        import random
        return bytes([random.randint(0,255) for _ in range(n)])

    n = 16
    from mqom.field import F2, F2to8, F2to16

    vec = VectorFrmt(F2to16, n)


    print(' - Tests "Parsing"')
    bytestr = random_bytes(vec.get_bytesize())
    vec.parse(bytestr)
    #print(type(vec.parse(bytestr)[0]))
    assert len(vec.parse(bytestr)) == n

