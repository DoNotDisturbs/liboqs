def run_test_sign():
    from mqom.mqom import MQOM3
    from mqom.params import MQOM3Parameters, Category, TradeOff, Variant
    import time

    print(' - Tests "Sign"')

    def random_bytes(n):
        import random
        return bytes([random.randint(0,255) for _ in range(n)])

    for num in range(2):
        if num == 0:
            par = MQOM3Parameters.get(Category.I, 16, TradeOff.FAST, Variant.CORRELATED_TREE)
        if num == 1:
            par = MQOM3Parameters.get(Category.I, 16, TradeOff.FAST, Variant.ONE_TREE)

        mqom = MQOM3(par, random_bytes)
        msg = random_bytes(16)

        ## Key Generation
        pk_size = mqom.get_public_key_bytesize()
        sk_size = mqom.get_secret_key_bytesize()
        sig_size = mqom.get_signature_bytesize()
        #print(f'pk_size = {pk_size} bytes')
        #print(f'sk_size = {sk_size} bytes')
        #print(f'sig_size = {sig_size} bytes (msg_size = {len(msg)} bytes)')

        start_time = time.time()
        (pk, sk) = mqom.generate_keys()
        assert sk_size == len(sk)
        assert pk_size == len(pk)
        #print(f'KeyGen Timing: {time.time() - start_time}')

        ## Signature
        start_time = time.time()
        sig = mqom.sign(sk, msg)
        #print(f'Signing Timing: {time.time() - start_time}')
        assert sig_size == len(sig)

        start_time = time.time()
        ret = mqom.verify(pk, msg, sig)
        #print(f'Verify Timing: {time.time() - start_time}')
        assert ret is True
