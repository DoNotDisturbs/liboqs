def run_test_blc():
    from mqom.blc import BLC
    from mqom.params import MQOM3Parameters, Category, TradeOff, Variant
    from mqom.parsing import VectorFrmt, ArrayFrmt

    def random_bytes(n):
        import random
        return bytes([random.randint(0,255) for _ in range(n)])

    print(' - Tests "BLC"')
    print('   - Tests "BLC-CT"')
    par = MQOM3Parameters.get(Category.I, 2, TradeOff.FAST, Variant.CORRELATED_TREE)
    #par._tau = 2 # Speed up the test

    blc = par._blc_cls(par)

    x_format = VectorFrmt(par.base_field, par.n)
    alpha_format = ArrayFrmt(*[
        VectorFrmt(par.extension_field, par.eta)
        for _ in range(par.tau)
    ])

    for _ in range(1):
        mseed = random_bytes(par.lda)
        salt = random_bytes(par.lda)
        x = x_format.parse(random_bytes(x_format.get_bytesize()))
        alpha1 = alpha_format.parse(random_bytes(alpha_format.get_bytesize()))

        (com, key, x0, u0, u1) = blc.commit(mseed, salt, x)

        def random_i_star():
            import random
            return [random.randint(0, par.N-1) for _ in range(par.tau)]    
        while True:
            i_star = random_i_star()
            if blc.is_valid_challenge(i_star):
                break

        decom = blc.open(salt, key, i_star, alpha1)

        (com_, x_eval, u_eval, alpha1_) = blc.eval(salt, decom, i_star)
        for e in range(par.tau):
            for j in range(par.n):
                assert x_eval[e][j] == x[j]*par.omega[i_star[e]] + x0[e][j], (e,j)
            for j in range(par.eta):
                assert u_eval[e][j] == u1[e][j]*par.omega[i_star[e]] + u0[e][j], (e,j)
            assert alpha1[e] == alpha1_[e]
            assert com[e] == com_[e]

    print('   - Tests "BLC-OT"')
    par = MQOM3Parameters.get(Category.I, 2, TradeOff.FAST, Variant.ONE_TREE)
    #par._tau = 2 # Speed up the test

    blc = par._blc_cls(par)

    x_format = VectorFrmt(par.base_field, par.n)
    alpha_format = ArrayFrmt(*[
        VectorFrmt(par.extension_field, par.eta)
        for _ in range(par.tau)
    ])

    for _ in range(1):
        mseed = random_bytes(par.lda)
        salt = random_bytes(par.lda)
        x = x_format.parse(random_bytes(x_format.get_bytesize()))
        alpha1 = alpha_format.parse(random_bytes(alpha_format.get_bytesize()))

        (com, key, x0, u0, u1) = blc.commit(mseed, salt, x)

        def random_i_star():
            import random
            return [random.randint(0, par.N-1) for _ in range(par.tau)]    
        while True:
            i_star = random_i_star()
            if blc.is_valid_challenge(i_star):
                break

        decom = blc.open(salt, key, i_star, alpha1)

        (com_, x_eval, u_eval, alpha1_) = blc.eval(salt, decom, i_star)
        for e in range(par.tau):
            for j in range(par.n):
                assert x_eval[e][j] == x[j]*par.omega[i_star[e]] + x0[e][j], (e,j)
            for j in range(par.eta):
                assert u_eval[e][j] == u1[e][j]*par.omega[i_star[e]] + u0[e][j], (e,j)
            assert alpha1[e] == alpha1_[e]
            assert com[e] == com_[e]
