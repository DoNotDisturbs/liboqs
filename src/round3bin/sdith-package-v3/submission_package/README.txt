SDitH -- round-3 NIST submission package
========================================

This package contains the 12 parameter sets of the VOLE-in-the-Head variant of
SDitH, each as two standalone folders:

  Reference_Implementation/<set>/   portable C only (built with -DONLY_REF_IMPLEMENTATION)
  Optimized_Implementation/<set>/   the same code plus an avx2/aes-ni backend for x86-64

Both produce identical keys and signatures; the optimized folder simply picks the faster
backend at run time via __builtin_cpu_supports, so its binaries also run on machines
without avx2.

Building one folder
-------------------

  cd Optimized_Implementation/cat1_short
  mkdir build && cd build && cmake .. && make
  ./bench_sdith                        # keygen/sign/verify timings
  ./generator/PQCgenKAT_cat1_short      # writes PQCsignKAT_*.req and .rsp

CMake >= 3.10 and a C compiler are enough for the library and the benchmark.  The KAT
generator additionally needs libcrypto (OpenSSL) for NIST's AES-256-CTR-DRBG; configure
with -DBUILD_KATS=OFF to skip it.

Layout of an implementation folder
----------------------------------

  CMakeLists.txt   standalone build of the library, bench_sdith and the KAT generator
  src/             the signature scheme
  lib/aes/         AES-128 and Rijndael-256 block ciphers
  lib/sha3/        Keccak / SHAKE
  test/            bench_sdith.c, the C benchmark, and its cycle counter
  generator/       NIST's PQCgenKAT_sign.c, rng.c and sign.c, with api.h pinned to
                   this parameter set

Known answer tests
------------------

  KAT/sdith_<set>/PQCsignKAT_<CRYPTO_SECRETKEYBYTES>.req
  KAT/sdith_<set>/PQCsignKAT_<CRYPTO_SECRETKEYBYTES>.rsp

100 records per set, as produced by the generator in the matching implementation folder.

Parameter sets
--------------

  SDiTH-CAT1-SHORT        sk  147 B   pk   70 B   sig   3721 B
  SDiTH-CAT1-FAST         sk  147 B   pk   70 B   sig   4914 B
  SDiTH-CAT3-SHORT        sk  208 B   pk   98 B   sig   8484 B
  SDiTH-CAT3-FAST         sk  208 B   pk   98 B   sig  10852 B
  SDiTH-CAT5-SHORT        sk  275 B   pk  132 B   sig  15147 B
  SDiTH-CAT5-FAST         sk  275 B   pk  132 B   sig  19144 B
  SDiTH-CAT1-SHORT-CIPHERPOW  sk  147 B   pk   70 B   sig   3721 B
  SDiTH-CAT1-FAST-CIPHERPOW  sk  147 B   pk   70 B   sig   4643 B
  SDiTH-CAT3-SHORT-CIPHERPOW  sk  208 B   pk   98 B   sig   8484 B
  SDiTH-CAT3-FAST-CIPHERPOW  sk  208 B   pk   98 B   sig  10452 B
  SDiTH-CAT5-SHORT-CIPHERPOW  sk  275 B   pk  132 B   sig  15147 B
  SDiTH-CAT5-FAST-CIPHERPOW  sk  275 B   pk  132 B   sig  19144 B
