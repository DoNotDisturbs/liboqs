def run_test_ggm():
    from mqom.params import MQOM3Parameters, Category, TradeOff, Variant
    from mqom.bits import xor

    def random_bytes(n):
        import random
        return bytes([random.randint(0,255) for _ in range(n)])

    if False:
        par_ct = MQOM3Parameters.get(Category.V, 2, TradeOff.SHORT, Variant.CORRELATED_TREE)
        par_ot = MQOM3Parameters.get(Category.V, 2, TradeOff.FAST, Variant.ONE_TREE)

    elif False:
        par_ct = MQOM3Parameters.get(Category.III, 2, TradeOff.SHORT, Variant.CORRELATED_TREE)
        par_ot = MQOM3Parameters.get(Category.III, 2, TradeOff.FAST, Variant.ONE_TREE)

    else:
        par_ct = MQOM3Parameters.get(Category.I, 2, TradeOff.SHORT, Variant.CORRELATED_TREE)
        par_ot = MQOM3Parameters.get(Category.I, 2, TradeOff.FAST, Variant.ONE_TREE)

    print(' - Tests "GGM"')
    print('   - Test SmallGGM')
    import random
    for _ in range(10):
        salt = random_bytes(par_ct.lda)
        root_seed = random_bytes(par_ct.lda)
        delta = random_bytes(par_ct.lda)
        idx_e = 1

        (tree, lseeds) = par_ct.ggmtree.expand(salt, root_seed, idx_e, delta)
        sum_ = lseeds[0]
        for i in range(1, par_ct.N):
            sum_ = xor(sum_, lseeds[i])
        assert sum_ == delta

        hidden_idx = random.randint(0, par_ct.N-1)
        path = par_ct.ggmtree.open(tree, hidden_idx)

        lseeds_ = par_ct.ggmtree.partially_expand(salt, path, idx_e, hidden_idx)
        for i in range(par_ct.N):
            if i != hidden_idx:
                assert lseeds_[i] == lseeds[i]
            else:
                assert lseeds_[i] is None

    print('   - Test LargeGGM')
    import random
    for _ in range(10):
        salt = random_bytes(par_ot.lda)
        root_seed = random_bytes(par_ot.lda)
        idx_e = 1

        (tree, lseeds) = par_ot.ggmtree.expand(salt, root_seed)
        sum_ = lseeds[0]
        for i in range(1, par_ot.N*par_ot.tau):
            sum_ = xor(sum_, lseeds[i])
        assert sum_ == root_seed

        while True:
            hidden_leaves_idxs = []
            while len(hidden_leaves_idxs) < par_ot.tau:
                hidden_idx = random.randint(0, par_ot.N*par_ot.tau-1)
                if hidden_idx not in hidden_leaves_idxs:
                    hidden_leaves_idxs.append(hidden_idx)
            if par_ot.ggmtree.is_valid_opening_set(hidden_leaves_idxs):
                break
        path = par_ot.ggmtree.open(tree, hidden_leaves_idxs)

        lseeds_ = par_ot.ggmtree.partially_expand(salt, path, hidden_leaves_idxs)
        for i in range(par_ot.N*par_ot.tau):
            if i not in hidden_leaves_idxs:
                assert lseeds_[i] == lseeds[i], (i, lseeds_[i], lseeds[i])
            else:
                assert lseeds_[i] is None
