def run_test_rijndael():
    import os
    from mqom.rijndael import AES128, AES192, AES256, Rijndael256_256
    try:
        from Crypto.Cipher import AES
    except ModuleNotFoundError:
        print(' - Tests "Rijndael": Crypto Library not found, skiping the tests')
        return

    print(f' - Tests "Rijndael"')

    def random_bytes(n):
        import random
        return bytes([random.randint(0,255) for _ in range(n)])

    ############################################
    #####     Tests -- AES 128/192/256     #####
    ############################################

    ## AES-128
    for _ in range(1000):
        key = random_bytes(16)
        ptx = random_bytes(16)

        ciphertext_1 = AES128(key=key, ptx=ptx)
        ciphertext_2 = AES.new(key, AES.MODE_ECB).encrypt(ptx)
        assert ciphertext_1 == ciphertext_2

    ## AES-192
    for _ in range(1000):
        key = random_bytes(24)
        ptx = random_bytes(16)

        ciphertext_1 = AES192(key=key, ptx=ptx)
        ciphertext_2 = AES.new(key, AES.MODE_ECB).encrypt(ptx)
        assert ciphertext_1 == ciphertext_2

    ## AES-256
    for _ in range(1000):
        key = random_bytes(32)
        ptx = random_bytes(16)

        ciphertext_1 = AES256(key=key, ptx=ptx)
        ciphertext_2 = AES.new(key, AES.MODE_ECB).encrypt(ptx)
        assert ciphertext_1 == ciphertext_2

    ############################################
    #####    Tests -- Rijndael-256-256     #####
    ############################################

    test_sources_dir = os.environ.get('RIJNDAEL_TEST_SOURCES')
    if not test_sources_dir:
        print(' - Tests "Rijndael-256-256": RIJNDAEL_TEST_SOURCES is not set, skiping the tests')
        return

    test_files = [
        ('nk', os.path.join(test_sources_dir, 'ecbnk88.txt')),
        ('nt', os.path.join(test_sources_dir, 'ecbnt88.txt')),
        ('vk', os.path.join(test_sources_dir, 'ecbvk88.txt')),
        ('vt', os.path.join(test_sources_dir, 'ecbvt88.txt')),
    ]

    import re
    regex_test = re.compile(r'TEST=\s*(\S+)')
    regex_key = re.compile(r'KEY=\s*(\S+)')
    regex_pt = re.compile(r'PT=\s*(\S+)')
    regex_ct = re.compile(r'CT=\s*(\S+)')

    class RijndaelTest:
        def __init__(self, label, key, pt, ct):
            self.label = label
            self.key = key
            self.pt = pt
            self.ct = ct
            
    test_vectors = []
    try:
        for label, test_file in test_files:
            with open(test_file) as _file:
                lines = _file.readlines()
            data = {}
            data['test'] = None
            data['key'] = None
            data['pt'] = None
            data['ct'] = None
            for line in lines:
                line = line.strip()
                ## TEST
                res = regex_test.fullmatch(line)
                if res is not None:
                    if data['test'] is not None:
                        test_vectors.append(RijndaelTest(
                            label=f"{label}-{data['test']}",
                            key=data['key'],
                            pt=data['pt'],
                            ct=data['ct'],
                        ))
                    data['test'] = int(res.group(1))
                ## KEY
                res = regex_key.fullmatch(line)
                if res is not None:
                    text = res.group(1)
                    data['key'] = bytes([int(text[i:i+2], base=16) for i in range(0,len(text),2)])
                ## PT
                res = regex_pt.fullmatch(line)
                if res is not None:
                    text = res.group(1)
                    data['pt'] = bytes([int(text[i:i+2], base=16) for i in range(0,len(text),2)])
                ## CT
                res = regex_ct.fullmatch(line)
                if res is not None:
                    text = res.group(1)
                    data['ct'] = bytes([int(text[i:i+2], base=16) for i in range(0,len(text),2)])
            test_vectors.append(RijndaelTest(
                label=f"{label}-{data['test']}",
                key=data['key'],
                pt=data['pt'],
                ct=data['ct'],
            ))
    except FileNotFoundError as e:
        print(f' - Tests "Rijndael-256-256": test vectors not found under RIJNDAEL_TEST_SOURCES ({e}), skiping the tests')
        return

    for test in test_vectors:
        ciphertext = Rijndael256_256(key=test.key, ptx=test.pt)
        assert ciphertext == test.ct
    #print(f'Nb tests: {len(test_vectors)}')
