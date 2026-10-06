def run_test_piop():
    from mqom.piop import PIOP
    from mqom.params import MQOM3Parameters, Category, TradeOff, Variant
    from mqom.parsing import expand_seed, VectorFrmt, ArrayFrmt
    from mqom.mqom import MQOM3
    from mqom.utils import MultiDimArray

    print(' - Tests "PIOP"')

    def random_bytes(n):
        import random
        return bytes([random.randint(0,255) for _ in range(n)])

    def trg(seed, n_bytes):
        assert seed is None
        return random_bytes(n_bytes)

    par = MQOM3Parameters.get(Category.I, 2, TradeOff.FAST, Variant.CORRELATED_TREE)
    par._tau = 2 # Speed up the test

    piop = PIOP(par)

    x_format = VectorFrmt(par.base_field, par.n)
    x0_format = ArrayFrmt(*[
        VectorFrmt(par.extension_field, par.n)
        for _ in range(par.tau)
    ])
    u1_format = ArrayFrmt(*[
        VectorFrmt(par.extension_field, par.eta)
        for _ in range(par.tau)
    ])
    u0_format = ArrayFrmt(*[
        VectorFrmt(par.extension_field, par.eta)
        for _ in range(par.tau)
    ])

    for _ in range(1):
        com = [
            random_bytes(2*par.lda)
            for _ in range(par.tau)
        ]
        mseed_eq = random_bytes(2*par.lda)
        x, x0, u1, u0 = expand_seed(trg, None, x_format, x0_format, u1_format, u0_format)    

        (A, b) = par.mq_eqns.expand_equations(mseed_eq)
        y = par.mq_eqns.compute_y(x, A, b)

        (alpha0, alpha1) = piop.compute_alpha_lines(com, x, x0, u0, u1, mseed_eq)

        def random_i_star():
            import random
            return [random.randint(0, par.N-1) for _ in range(par.tau)]
        i_star = random_i_star()

        x_eval = MultiDimArray((par.tau, par.n))
        u_eval = MultiDimArray((par.tau, par.eta))
        for e in range(par.tau):
            for j in range(par.n):
                x_eval[e][j] = x[j]*par.omega[i_star[e]] + x0[e][j]
            for j in range(par.eta):
                u_eval[e][j] = u1[e][j]*par.omega[i_star[e]] + u0[e][j]

        alpha0_ = piop.recompute_alpha_lines(com, alpha1, i_star, x_eval, u_eval, mseed_eq, y)
        for e in range(par.tau):
            for j in range(par.eta):
                assert alpha0[e][j] == alpha0_[e][j], (e, j)
