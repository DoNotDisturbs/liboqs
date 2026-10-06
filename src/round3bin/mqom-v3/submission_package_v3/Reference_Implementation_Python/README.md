# MQOM: MQ on my Mind (Version 3)

This repository contains a Python reference implementation of *MQOM v3*, a
post-quantum signature scheme based on the MQ (Multivariate Quadratic)
problem, combined with a VOLE-in-the-head-style Polynomial IOP.

The authors are the [MQOM Team](https://mqom.org/team.html).

This implementation favors clarity over speed: it aims to be read side by
side with the specification, and to reliably reproduce Known Answer Tests
(KATs), rather than to be fast.

## Requirements

- Python 3 (tested with Python 3.12)
- Dependencies listed in `requirements.txt` (`numba`, `numpy`, `pycryptodome`, `joblib`):
  ```
  pip install -r requirements.txt
  ```
- [SageMath](https://www.sagemath.org/) is *optional*: it is only used by
  `tests/test_field.py` to cross-check the finite field arithmetic against an
  independent implementation. If Sage is not available, that test is skipped
  and everything else runs under plain CPython.

## Organization

```
mqom3/
├── mqom/                Core cryptographic package
│   ├── params.py           Parameter sets: Category (I/III/V) x field size (2/16)
│   │                       x trade-off (shorter/short/fast) x variant (correlated-tree/one-tree)
│   ├── mqom.py             Top-level protocol: KeyGen / Sign / Verify
│   ├── mq.py               MQ equations: expansion from a seed, evaluation
│   ├── piop.py             Polynomial IOP: alpha lines and their batching (Gamma)
│   ├── blc.py              Batched Line Commitment (BLC_CorrelatedTree / BLC_OneTree)
│   ├── ggm.py              GGM seed trees (SmallGGMTree / LargeGGMTree)
│   ├── seeds.py            Seed derivation/commitment (tweak_seed, seed_commit, seed_expand, PRG)
│   ├── field.py             GF(2), GF(2^4), GF(2^8), GF(2^16) arithmetic
│   ├── field_lut.py         Multiplication tables for GF(2^4)/GF(2^8) (generated at import time)
│   │                        and the canonical GF(2^4) -> GF(2^8) embedding
│   ├── rijndael.py          AES-128/192/256 and Rijndael-256-256 (numba-accelerated)
│   ├── shake.py             SHAKE128/SHAKE256 XOFs
│   ├── parsing.py           (De)serialization formats (ByteStrFrmt, VectorFrmt, MatrixFrmt, ArrayFrmt)
│   ├── bits.py              Low-level bit/byte helpers
│   └── utils.py             Multi-dimensional array helpers
├── kats/                 NIST-style KAT generation (pqcgenkat_sign.py, rng.py)
├── tests/                Unit tests, one `run_test_<name>()` per module
├── labels.py             Conversion between parameter tuples and instance labels
│                         (e.g. `MQOM3-L1-gf16-fast-ct`)
├── run.py                Run KeyGen/Sign/Verify (with timings) for one or all instances
├── sizes.py              Print public key / secret key / signature sizes for all instances
├── test.py               Test suite entry point
├── kat.py                KAT generation entry point
├── requirements.txt
└── build/                KAT output, created by kat.py (git-ignored)
```

## How to use

### As a library

```python
import os
from mqom import MQOM3Parameters, MQOM3, Category, TradeOff, Variant

params = MQOM3Parameters.get(Category.I, 16, TradeOff.FAST, Variant.CORRELATED_TREE)
mqom = MQOM3(params, os.urandom)  # any random_bytes(n) -> n random bytes works

(pk, sk) = mqom.generate_keys()
sig = mqom.sign(sk, b'a message')
assert mqom.verify(pk, b'a message', sig) is True
```

An instance is fully described by four axes: security category (`Category.I`
/ `III` / `V`), base field size (`2` or `16`), trade-off
(`TradeOff.SHORTER` / `SHORT` / `FAST`) and variant
(`Variant.CORRELATED_TREE` / `ONE_TREE`). `labels.py` converts between this
tuple and the corresponding instance label, e.g. `MQOM3-L1-gf16-fast-ct`.

### Command-line scripts

```
python3 sizes.py                        # pk/sk/signature sizes, all 36 instances
python3 run.py                          # KeyGen/Sign/Verify + timings, all 36 instances
python3 run.py MQOM3-L1-gf16-fast-ct    # ... for a specific instance only
python3 test.py all                     # run the full test suite
python3 test.py sign blc                # run only a subset of tests
python3 kat.py                          # generate KATs for all instances into build/
python3 kat.py -l MQOM3-L1-gf16-fast-ct # ... for a specific instance only
python3 kat.py -p -1                    # ... in parallel (joblib), -1 = all cores
```

### Optional: cross-checking Rijndael-256-256 against the C reference vectors

`tests/test_rijndael.py` can cross-check the Rijndael-256-256 implementation
against the test vectors of the companion C reference implementation. This is
optional and skipped by default; to enable it, set `RIJNDAEL_TEST_SOURCES` to
the directory containing the vector files (`ecbnk88.txt`, `ecbnt88.txt`,
`ecbvk88.txt`, `ecbvt88.txt`) before running the tests:

```
RIJNDAEL_TEST_SOURCES=/path/to/mqom3_ref/rijndael/tests/test_sources python3 test.py rijndael
```

## License

This project is distributed under the MIT License, see [LICENSE](LICENSE).
