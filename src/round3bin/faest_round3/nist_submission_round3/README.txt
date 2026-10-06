.
├── Additional_Implementations
│   ├── aarch64
│   │   ├── faest_128f
│   │   │   ├── aarch64
│   │   │   │   ├── aes_impl.cpp
│   │   │   │   ├── aes_impl.hpp
│   │   │   │   ├── block_impl.hpp
│   │   │   │   ├── constants_impl.hpp
│   │   │   │   ├── gfsmall_impl.hpp
│   │   │   │   ├── polynomials_impl.hpp
│   │   │   │   ├── transpose_impl.hpp
│   │   │   │   └── transpose_secpar_impl.hpp
│   │   │   ├── aes_defs.hpp
│   │   │   ├── aes.cpp
│   │   │   ├── aes.hpp
│   │   │   ├── all.inc
│   │   │   ├── api.cpp
│   │   │   ├── api.h
│   │   │   ├── api.hpp
│   │   │   ├── block.hpp
│   │   │   ├── common
│   │   │   │   ├── aes_impl.inc
│   │   │   │   ├── aes_utils.inc
│   │   │   │   └── block192_impl.inc
│   │   │   ├── constants.hpp
│   │   │   ├── crt_constants_128f.cpp
│   │   │   ├── crt_constants_128f.hpp
│   │   │   ├── crt_constants_128s.hpp
│   │   │   ├── crt_constants_192f_em.hpp
│   │   │   ├── crt_constants_192f.hpp
│   │   │   ├── crt_constants_192s_em.hpp
│   │   │   ├── crt_constants_192s.hpp
│   │   │   ├── crt_constants_256f.hpp
│   │   │   ├── crt_constants_256s.hpp
│   │   │   ├── crt_constants.hpp
│   │   │   ├── crt_vole_helpers.inc
│   │   │   ├── debug.hpp
│   │   │   ├── faest_keys.hpp
│   │   │   ├── faest_keys.inc
│   │   │   ├── faest_sig.hpp
│   │   │   ├── faest.cpp
│   │   │   ├── faest.hpp
│   │   │   ├── faest.inc
│   │   │   ├── generated_crt_constants.hpp
│   │   │   ├── gfsmall.hpp
│   │   │   ├── hash.hpp
│   │   │   ├── kos_vole_check.hpp
│   │   │   ├── Makefile
│   │   │   ├── NIST-KATs
│   │   │   │   ├── PQCgenKAT_sign.c
│   │   │   │   ├── rng.c
│   │   │   │   └── rng.h
│   │   │   ├── owf_proof_enc_v1.inc
│   │   │   ├── owf_proof_enc_v2.inc
│   │   │   ├── owf_proof_enc_v3.cpp
│   │   │   ├── owf_proof_enc_v3.inc
│   │   │   ├── owf_proof_key_sched.cpp
│   │   │   ├── owf_proof_key_sched.inc
│   │   │   ├── owf_proof_tools.hpp
│   │   │   ├── owf_proof_v3_deg3.cpp
│   │   │   ├── owf_proof_v3_em_deg3.cpp
│   │   │   ├── owf_proof_v3_em.cpp
│   │   │   ├── owf_proof_v3.cpp
│   │   │   ├── owf_proof.hpp
│   │   │   ├── owf_proof.inc
│   │   │   ├── parameters.hpp
│   │   │   ├── poly2d.hpp
│   │   │   ├── polynomials_constants.cpp
│   │   │   ├── polynomials_constants.hpp
│   │   │   ├── polynomials.hpp
│   │   │   ├── prgs.hpp
│   │   │   ├── print_parameters.cpp
│   │   │   ├── quicksilver.hpp
│   │   │   ├── randomness_os.c
│   │   │   ├── randomness_randombytes.c
│   │   │   ├── randomness.h
│   │   │   ├── sha3
│   │   │   │   ├── align.h
│   │   │   │   ├── brg_endian.h
│   │   │   │   ├── config.h
│   │   │   │   ├── KeccakDuplex.c
│   │   │   │   ├── KeccakDuplex.h
│   │   │   │   ├── KeccakDuplex.inc
│   │   │   │   ├── KeccakHash-times4.c
│   │   │   │   ├── KeccakHash-times4.h
│   │   │   │   ├── KeccakHash.c
│   │   │   │   ├── KeccakHash.h
│   │   │   │   ├── KeccakOD.c
│   │   │   │   ├── KeccakOD.h
│   │   │   │   ├── KeccakOD.inc
│   │   │   │   ├── KeccakP-1600-64.macros
│   │   │   │   ├── KeccakP-1600-opt64.c
│   │   │   │   ├── KeccakP-1600-plain64.h
│   │   │   │   ├── KeccakP-1600-SnP.h
│   │   │   │   ├── KeccakP-1600-times4-on1.c
│   │   │   │   ├── KeccakP-1600-times4-SnP.h
│   │   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   │   ├── KeccakSponge-times4.c
│   │   │   │   ├── KeccakSponge-times4.h
│   │   │   │   ├── KeccakSponge-times4.inc
│   │   │   │   ├── KeccakSponge.c
│   │   │   │   ├── KeccakSponge.h
│   │   │   │   ├── KeccakSponge.inc
│   │   │   │   ├── load-store.h
│   │   │   │   ├── PlSnP-common.h
│   │   │   │   ├── PlSnP-Fallback.inc
│   │   │   │   ├── SIMD-types.h
│   │   │   │   ├── SimpleFIPS202.c
│   │   │   │   ├── SimpleFIPS202.h
│   │   │   │   ├── SnP-common.h
│   │   │   │   ├── SnP-implementations.h
│   │   │   │   └── SnP-Relaned.h
│   │   │   ├── small_vole.cpp
│   │   │   ├── small_vole.hpp
│   │   │   ├── small_vole.inc
│   │   │   ├── tests
│   │   │   │   └── api_test.c
│   │   │   ├── transpose_secpar.hpp
│   │   │   ├── transpose.hpp
│   │   │   ├── universal_hash.hpp
│   │   │   ├── util.hpp
│   │   │   ├── vector_com.cpp
│   │   │   ├── vector_com.hpp
│   │   │   ├── vector_com.inc
│   │   │   ├── vole_check.hpp
│   │   │   ├── vole_commit.cpp
│   │   │   ├── vole_commit.hpp
│   │   │   ├── vole_commit.inc
│   │   │   └── vole_key_index_permutation.hpp
│   │   ├── faest_128s
│   │   │   ├── aarch64
│   │   │   │   ├── aes_impl.cpp
│   │   │   │   ├── aes_impl.hpp
│   │   │   │   ├── block_impl.hpp
│   │   │   │   ├── constants_impl.hpp
│   │   │   │   ├── gfsmall_impl.hpp
│   │   │   │   ├── polynomials_impl.hpp
│   │   │   │   ├── transpose_impl.hpp
│   │   │   │   └── transpose_secpar_impl.hpp
│   │   │   ├── aes_defs.hpp
│   │   │   ├── aes.cpp
│   │   │   ├── aes.hpp
│   │   │   ├── all.inc
│   │   │   ├── api.cpp
│   │   │   ├── api.h
│   │   │   ├── api.hpp
│   │   │   ├── block.hpp
│   │   │   ├── common
│   │   │   │   ├── aes_impl.inc
│   │   │   │   ├── aes_utils.inc
│   │   │   │   └── block192_impl.inc
│   │   │   ├── constants.hpp
│   │   │   ├── crt_constants_128f.hpp
│   │   │   ├── crt_constants_128s.cpp
│   │   │   ├── crt_constants_128s.hpp
│   │   │   ├── crt_constants_192f_em.hpp
│   │   │   ├── crt_constants_192f.hpp
│   │   │   ├── crt_constants_192s_em.hpp
│   │   │   ├── crt_constants_192s.hpp
│   │   │   ├── crt_constants_256f.hpp
│   │   │   ├── crt_constants_256s.hpp
│   │   │   ├── crt_constants.hpp
│   │   │   ├── crt_vole_helpers.inc
│   │   │   ├── debug.hpp
│   │   │   ├── faest_keys.hpp
│   │   │   ├── faest_keys.inc
│   │   │   ├── faest_sig.hpp
│   │   │   ├── faest.cpp
│   │   │   ├── faest.hpp
│   │   │   ├── faest.inc
│   │   │   ├── generated_crt_constants.hpp
│   │   │   ├── gfsmall.hpp
│   │   │   ├── hash.hpp
│   │   │   ├── kos_vole_check.hpp
│   │   │   ├── Makefile
│   │   │   ├── NIST-KATs
│   │   │   │   ├── PQCgenKAT_sign.c
│   │   │   │   ├── rng.c
│   │   │   │   └── rng.h
│   │   │   ├── owf_proof_enc_v1.inc
│   │   │   ├── owf_proof_enc_v2.inc
│   │   │   ├── owf_proof_enc_v3.cpp
│   │   │   ├── owf_proof_enc_v3.inc
│   │   │   ├── owf_proof_key_sched.cpp
│   │   │   ├── owf_proof_key_sched.inc
│   │   │   ├── owf_proof_tools.hpp
│   │   │   ├── owf_proof_v3_deg3.cpp
│   │   │   ├── owf_proof_v3_em_deg3.cpp
│   │   │   ├── owf_proof_v3_em.cpp
│   │   │   ├── owf_proof_v3.cpp
│   │   │   ├── owf_proof.hpp
│   │   │   ├── owf_proof.inc
│   │   │   ├── parameters.hpp
│   │   │   ├── poly2d.hpp
│   │   │   ├── polynomials_constants.cpp
│   │   │   ├── polynomials_constants.hpp
│   │   │   ├── polynomials.hpp
│   │   │   ├── prgs.hpp
│   │   │   ├── print_parameters.cpp
│   │   │   ├── quicksilver.hpp
│   │   │   ├── randomness_os.c
│   │   │   ├── randomness_randombytes.c
│   │   │   ├── randomness.h
│   │   │   ├── sha3
│   │   │   │   ├── align.h
│   │   │   │   ├── brg_endian.h
│   │   │   │   ├── config.h
│   │   │   │   ├── KeccakDuplex.c
│   │   │   │   ├── KeccakDuplex.h
│   │   │   │   ├── KeccakDuplex.inc
│   │   │   │   ├── KeccakHash-times4.c
│   │   │   │   ├── KeccakHash-times4.h
│   │   │   │   ├── KeccakHash.c
│   │   │   │   ├── KeccakHash.h
│   │   │   │   ├── KeccakOD.c
│   │   │   │   ├── KeccakOD.h
│   │   │   │   ├── KeccakOD.inc
│   │   │   │   ├── KeccakP-1600-64.macros
│   │   │   │   ├── KeccakP-1600-opt64.c
│   │   │   │   ├── KeccakP-1600-plain64.h
│   │   │   │   ├── KeccakP-1600-SnP.h
│   │   │   │   ├── KeccakP-1600-times4-on1.c
│   │   │   │   ├── KeccakP-1600-times4-SnP.h
│   │   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   │   ├── KeccakSponge-times4.c
│   │   │   │   ├── KeccakSponge-times4.h
│   │   │   │   ├── KeccakSponge-times4.inc
│   │   │   │   ├── KeccakSponge.c
│   │   │   │   ├── KeccakSponge.h
│   │   │   │   ├── KeccakSponge.inc
│   │   │   │   ├── load-store.h
│   │   │   │   ├── PlSnP-common.h
│   │   │   │   ├── PlSnP-Fallback.inc
│   │   │   │   ├── SIMD-types.h
│   │   │   │   ├── SimpleFIPS202.c
│   │   │   │   ├── SimpleFIPS202.h
│   │   │   │   ├── SnP-common.h
│   │   │   │   ├── SnP-implementations.h
│   │   │   │   └── SnP-Relaned.h
│   │   │   ├── small_vole.cpp
│   │   │   ├── small_vole.hpp
│   │   │   ├── small_vole.inc
│   │   │   ├── tests
│   │   │   │   └── api_test.c
│   │   │   ├── transpose_secpar.hpp
│   │   │   ├── transpose.hpp
│   │   │   ├── universal_hash.hpp
│   │   │   ├── util.hpp
│   │   │   ├── vector_com.cpp
│   │   │   ├── vector_com.hpp
│   │   │   ├── vector_com.inc
│   │   │   ├── vole_check.hpp
│   │   │   ├── vole_commit.cpp
│   │   │   ├── vole_commit.hpp
│   │   │   ├── vole_commit.inc
│   │   │   └── vole_key_index_permutation.hpp
│   │   ├── faest_192f
│   │   │   ├── aarch64
│   │   │   │   ├── aes_impl.cpp
│   │   │   │   ├── aes_impl.hpp
│   │   │   │   ├── block_impl.hpp
│   │   │   │   ├── constants_impl.hpp
│   │   │   │   ├── gfsmall_impl.hpp
│   │   │   │   ├── polynomials_impl.hpp
│   │   │   │   ├── transpose_impl.hpp
│   │   │   │   └── transpose_secpar_impl.hpp
│   │   │   ├── aes_defs.hpp
│   │   │   ├── aes.cpp
│   │   │   ├── aes.hpp
│   │   │   ├── all.inc
│   │   │   ├── api.cpp
│   │   │   ├── api.h
│   │   │   ├── api.hpp
│   │   │   ├── block.hpp
│   │   │   ├── common
│   │   │   │   ├── aes_impl.inc
│   │   │   │   ├── aes_utils.inc
│   │   │   │   └── block192_impl.inc
│   │   │   ├── constants.hpp
│   │   │   ├── crt_constants_128f.hpp
│   │   │   ├── crt_constants_128s.hpp
│   │   │   ├── crt_constants_192f_em.hpp
│   │   │   ├── crt_constants_192f.cpp
│   │   │   ├── crt_constants_192f.hpp
│   │   │   ├── crt_constants_192s_em.hpp
│   │   │   ├── crt_constants_192s.hpp
│   │   │   ├── crt_constants_256f.hpp
│   │   │   ├── crt_constants_256s.hpp
│   │   │   ├── crt_constants.hpp
│   │   │   ├── crt_vole_helpers.inc
│   │   │   ├── debug.hpp
│   │   │   ├── faest_keys.hpp
│   │   │   ├── faest_keys.inc
│   │   │   ├── faest_sig.hpp
│   │   │   ├── faest.cpp
│   │   │   ├── faest.hpp
│   │   │   ├── faest.inc
│   │   │   ├── generated_crt_constants.hpp
│   │   │   ├── gfsmall.hpp
│   │   │   ├── hash.hpp
│   │   │   ├── kos_vole_check.hpp
│   │   │   ├── Makefile
│   │   │   ├── NIST-KATs
│   │   │   │   ├── PQCgenKAT_sign.c
│   │   │   │   ├── rng.c
│   │   │   │   └── rng.h
│   │   │   ├── owf_proof_enc_v1.inc
│   │   │   ├── owf_proof_enc_v2.inc
│   │   │   ├── owf_proof_enc_v3.cpp
│   │   │   ├── owf_proof_enc_v3.inc
│   │   │   ├── owf_proof_key_sched.cpp
│   │   │   ├── owf_proof_key_sched.inc
│   │   │   ├── owf_proof_tools.hpp
│   │   │   ├── owf_proof_v3_deg3.cpp
│   │   │   ├── owf_proof_v3_em_deg3.cpp
│   │   │   ├── owf_proof_v3_em.cpp
│   │   │   ├── owf_proof_v3.cpp
│   │   │   ├── owf_proof.hpp
│   │   │   ├── owf_proof.inc
│   │   │   ├── parameters.hpp
│   │   │   ├── poly2d.hpp
│   │   │   ├── polynomials_constants.cpp
│   │   │   ├── polynomials_constants.hpp
│   │   │   ├── polynomials.hpp
│   │   │   ├── prgs.hpp
│   │   │   ├── print_parameters.cpp
│   │   │   ├── quicksilver.hpp
│   │   │   ├── randomness_os.c
│   │   │   ├── randomness_randombytes.c
│   │   │   ├── randomness.h
│   │   │   ├── sha3
│   │   │   │   ├── align.h
│   │   │   │   ├── brg_endian.h
│   │   │   │   ├── config.h
│   │   │   │   ├── KeccakDuplex.c
│   │   │   │   ├── KeccakDuplex.h
│   │   │   │   ├── KeccakDuplex.inc
│   │   │   │   ├── KeccakHash-times4.c
│   │   │   │   ├── KeccakHash-times4.h
│   │   │   │   ├── KeccakHash.c
│   │   │   │   ├── KeccakHash.h
│   │   │   │   ├── KeccakOD.c
│   │   │   │   ├── KeccakOD.h
│   │   │   │   ├── KeccakOD.inc
│   │   │   │   ├── KeccakP-1600-64.macros
│   │   │   │   ├── KeccakP-1600-opt64.c
│   │   │   │   ├── KeccakP-1600-plain64.h
│   │   │   │   ├── KeccakP-1600-SnP.h
│   │   │   │   ├── KeccakP-1600-times4-on1.c
│   │   │   │   ├── KeccakP-1600-times4-SnP.h
│   │   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   │   ├── KeccakSponge-times4.c
│   │   │   │   ├── KeccakSponge-times4.h
│   │   │   │   ├── KeccakSponge-times4.inc
│   │   │   │   ├── KeccakSponge.c
│   │   │   │   ├── KeccakSponge.h
│   │   │   │   ├── KeccakSponge.inc
│   │   │   │   ├── load-store.h
│   │   │   │   ├── PlSnP-common.h
│   │   │   │   ├── PlSnP-Fallback.inc
│   │   │   │   ├── SIMD-types.h
│   │   │   │   ├── SimpleFIPS202.c
│   │   │   │   ├── SimpleFIPS202.h
│   │   │   │   ├── SnP-common.h
│   │   │   │   ├── SnP-implementations.h
│   │   │   │   └── SnP-Relaned.h
│   │   │   ├── small_vole.cpp
│   │   │   ├── small_vole.hpp
│   │   │   ├── small_vole.inc
│   │   │   ├── tests
│   │   │   │   └── api_test.c
│   │   │   ├── transpose_secpar.hpp
│   │   │   ├── transpose.hpp
│   │   │   ├── universal_hash.hpp
│   │   │   ├── util.hpp
│   │   │   ├── vector_com.cpp
│   │   │   ├── vector_com.hpp
│   │   │   ├── vector_com.inc
│   │   │   ├── vole_check.hpp
│   │   │   ├── vole_commit.cpp
│   │   │   ├── vole_commit.hpp
│   │   │   ├── vole_commit.inc
│   │   │   └── vole_key_index_permutation.hpp
│   │   ├── faest_192s
│   │   │   ├── aarch64
│   │   │   │   ├── aes_impl.cpp
│   │   │   │   ├── aes_impl.hpp
│   │   │   │   ├── block_impl.hpp
│   │   │   │   ├── constants_impl.hpp
│   │   │   │   ├── gfsmall_impl.hpp
│   │   │   │   ├── polynomials_impl.hpp
│   │   │   │   ├── transpose_impl.hpp
│   │   │   │   └── transpose_secpar_impl.hpp
│   │   │   ├── aes_defs.hpp
│   │   │   ├── aes.cpp
│   │   │   ├── aes.hpp
│   │   │   ├── all.inc
│   │   │   ├── api.cpp
│   │   │   ├── api.h
│   │   │   ├── api.hpp
│   │   │   ├── block.hpp
│   │   │   ├── common
│   │   │   │   ├── aes_impl.inc
│   │   │   │   ├── aes_utils.inc
│   │   │   │   └── block192_impl.inc
│   │   │   ├── constants.hpp
│   │   │   ├── crt_constants_128f.hpp
│   │   │   ├── crt_constants_128s.hpp
│   │   │   ├── crt_constants_192f_em.hpp
│   │   │   ├── crt_constants_192f.hpp
│   │   │   ├── crt_constants_192s_em.hpp
│   │   │   ├── crt_constants_192s.cpp
│   │   │   ├── crt_constants_192s.hpp
│   │   │   ├── crt_constants_256f.hpp
│   │   │   ├── crt_constants_256s.hpp
│   │   │   ├── crt_constants.hpp
│   │   │   ├── crt_vole_helpers.inc
│   │   │   ├── debug.hpp
│   │   │   ├── faest_keys.hpp
│   │   │   ├── faest_keys.inc
│   │   │   ├── faest_sig.hpp
│   │   │   ├── faest.cpp
│   │   │   ├── faest.hpp
│   │   │   ├── faest.inc
│   │   │   ├── generated_crt_constants.hpp
│   │   │   ├── gfsmall.hpp
│   │   │   ├── hash.hpp
│   │   │   ├── kos_vole_check.hpp
│   │   │   ├── Makefile
│   │   │   ├── NIST-KATs
│   │   │   │   ├── PQCgenKAT_sign.c
│   │   │   │   ├── rng.c
│   │   │   │   └── rng.h
│   │   │   ├── owf_proof_enc_v1.inc
│   │   │   ├── owf_proof_enc_v2.inc
│   │   │   ├── owf_proof_enc_v3.cpp
│   │   │   ├── owf_proof_enc_v3.inc
│   │   │   ├── owf_proof_key_sched.cpp
│   │   │   ├── owf_proof_key_sched.inc
│   │   │   ├── owf_proof_tools.hpp
│   │   │   ├── owf_proof_v3_deg3.cpp
│   │   │   ├── owf_proof_v3_em_deg3.cpp
│   │   │   ├── owf_proof_v3_em.cpp
│   │   │   ├── owf_proof_v3.cpp
│   │   │   ├── owf_proof.hpp
│   │   │   ├── owf_proof.inc
│   │   │   ├── parameters.hpp
│   │   │   ├── poly2d.hpp
│   │   │   ├── polynomials_constants.cpp
│   │   │   ├── polynomials_constants.hpp
│   │   │   ├── polynomials.hpp
│   │   │   ├── prgs.hpp
│   │   │   ├── print_parameters.cpp
│   │   │   ├── quicksilver.hpp
│   │   │   ├── randomness_os.c
│   │   │   ├── randomness_randombytes.c
│   │   │   ├── randomness.h
│   │   │   ├── sha3
│   │   │   │   ├── align.h
│   │   │   │   ├── brg_endian.h
│   │   │   │   ├── config.h
│   │   │   │   ├── KeccakDuplex.c
│   │   │   │   ├── KeccakDuplex.h
│   │   │   │   ├── KeccakDuplex.inc
│   │   │   │   ├── KeccakHash-times4.c
│   │   │   │   ├── KeccakHash-times4.h
│   │   │   │   ├── KeccakHash.c
│   │   │   │   ├── KeccakHash.h
│   │   │   │   ├── KeccakOD.c
│   │   │   │   ├── KeccakOD.h
│   │   │   │   ├── KeccakOD.inc
│   │   │   │   ├── KeccakP-1600-64.macros
│   │   │   │   ├── KeccakP-1600-opt64.c
│   │   │   │   ├── KeccakP-1600-plain64.h
│   │   │   │   ├── KeccakP-1600-SnP.h
│   │   │   │   ├── KeccakP-1600-times4-on1.c
│   │   │   │   ├── KeccakP-1600-times4-SnP.h
│   │   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   │   ├── KeccakSponge-times4.c
│   │   │   │   ├── KeccakSponge-times4.h
│   │   │   │   ├── KeccakSponge-times4.inc
│   │   │   │   ├── KeccakSponge.c
│   │   │   │   ├── KeccakSponge.h
│   │   │   │   ├── KeccakSponge.inc
│   │   │   │   ├── load-store.h
│   │   │   │   ├── PlSnP-common.h
│   │   │   │   ├── PlSnP-Fallback.inc
│   │   │   │   ├── SIMD-types.h
│   │   │   │   ├── SimpleFIPS202.c
│   │   │   │   ├── SimpleFIPS202.h
│   │   │   │   ├── SnP-common.h
│   │   │   │   ├── SnP-implementations.h
│   │   │   │   └── SnP-Relaned.h
│   │   │   ├── small_vole.cpp
│   │   │   ├── small_vole.hpp
│   │   │   ├── small_vole.inc
│   │   │   ├── tests
│   │   │   │   └── api_test.c
│   │   │   ├── transpose_secpar.hpp
│   │   │   ├── transpose.hpp
│   │   │   ├── universal_hash.hpp
│   │   │   ├── util.hpp
│   │   │   ├── vector_com.cpp
│   │   │   ├── vector_com.hpp
│   │   │   ├── vector_com.inc
│   │   │   ├── vole_check.hpp
│   │   │   ├── vole_commit.cpp
│   │   │   ├── vole_commit.hpp
│   │   │   ├── vole_commit.inc
│   │   │   └── vole_key_index_permutation.hpp
│   │   ├── faest_256f
│   │   │   ├── aarch64
│   │   │   │   ├── aes_impl.cpp
│   │   │   │   ├── aes_impl.hpp
│   │   │   │   ├── block_impl.hpp
│   │   │   │   ├── constants_impl.hpp
│   │   │   │   ├── gfsmall_impl.hpp
│   │   │   │   ├── polynomials_impl.hpp
│   │   │   │   ├── transpose_impl.hpp
│   │   │   │   └── transpose_secpar_impl.hpp
│   │   │   ├── aes_defs.hpp
│   │   │   ├── aes.cpp
│   │   │   ├── aes.hpp
│   │   │   ├── all.inc
│   │   │   ├── api.cpp
│   │   │   ├── api.h
│   │   │   ├── api.hpp
│   │   │   ├── block.hpp
│   │   │   ├── common
│   │   │   │   ├── aes_impl.inc
│   │   │   │   ├── aes_utils.inc
│   │   │   │   └── block192_impl.inc
│   │   │   ├── constants.hpp
│   │   │   ├── crt_constants_128f.hpp
│   │   │   ├── crt_constants_128s.hpp
│   │   │   ├── crt_constants_192f_em.hpp
│   │   │   ├── crt_constants_192f.hpp
│   │   │   ├── crt_constants_192s_em.hpp
│   │   │   ├── crt_constants_192s.hpp
│   │   │   ├── crt_constants_256f.cpp
│   │   │   ├── crt_constants_256f.hpp
│   │   │   ├── crt_constants_256s.hpp
│   │   │   ├── crt_constants.hpp
│   │   │   ├── crt_vole_helpers.inc
│   │   │   ├── debug.hpp
│   │   │   ├── faest_keys.hpp
│   │   │   ├── faest_keys.inc
│   │   │   ├── faest_sig.hpp
│   │   │   ├── faest.cpp
│   │   │   ├── faest.hpp
│   │   │   ├── faest.inc
│   │   │   ├── generated_crt_constants.hpp
│   │   │   ├── gfsmall.hpp
│   │   │   ├── hash.hpp
│   │   │   ├── kos_vole_check.hpp
│   │   │   ├── Makefile
│   │   │   ├── NIST-KATs
│   │   │   │   ├── PQCgenKAT_sign.c
│   │   │   │   ├── rng.c
│   │   │   │   └── rng.h
│   │   │   ├── owf_proof_enc_v1.inc
│   │   │   ├── owf_proof_enc_v2.inc
│   │   │   ├── owf_proof_enc_v3.cpp
│   │   │   ├── owf_proof_enc_v3.inc
│   │   │   ├── owf_proof_key_sched.cpp
│   │   │   ├── owf_proof_key_sched.inc
│   │   │   ├── owf_proof_tools.hpp
│   │   │   ├── owf_proof_v3_deg3.cpp
│   │   │   ├── owf_proof_v3_em_deg3.cpp
│   │   │   ├── owf_proof_v3_em.cpp
│   │   │   ├── owf_proof_v3.cpp
│   │   │   ├── owf_proof.hpp
│   │   │   ├── owf_proof.inc
│   │   │   ├── parameters.hpp
│   │   │   ├── poly2d.hpp
│   │   │   ├── polynomials_constants.cpp
│   │   │   ├── polynomials_constants.hpp
│   │   │   ├── polynomials.hpp
│   │   │   ├── prgs.hpp
│   │   │   ├── print_parameters.cpp
│   │   │   ├── quicksilver.hpp
│   │   │   ├── randomness_os.c
│   │   │   ├── randomness_randombytes.c
│   │   │   ├── randomness.h
│   │   │   ├── sha3
│   │   │   │   ├── align.h
│   │   │   │   ├── brg_endian.h
│   │   │   │   ├── config.h
│   │   │   │   ├── KeccakDuplex.c
│   │   │   │   ├── KeccakDuplex.h
│   │   │   │   ├── KeccakDuplex.inc
│   │   │   │   ├── KeccakHash-times4.c
│   │   │   │   ├── KeccakHash-times4.h
│   │   │   │   ├── KeccakHash.c
│   │   │   │   ├── KeccakHash.h
│   │   │   │   ├── KeccakOD.c
│   │   │   │   ├── KeccakOD.h
│   │   │   │   ├── KeccakOD.inc
│   │   │   │   ├── KeccakP-1600-64.macros
│   │   │   │   ├── KeccakP-1600-opt64.c
│   │   │   │   ├── KeccakP-1600-plain64.h
│   │   │   │   ├── KeccakP-1600-SnP.h
│   │   │   │   ├── KeccakP-1600-times4-on1.c
│   │   │   │   ├── KeccakP-1600-times4-SnP.h
│   │   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   │   ├── KeccakSponge-times4.c
│   │   │   │   ├── KeccakSponge-times4.h
│   │   │   │   ├── KeccakSponge-times4.inc
│   │   │   │   ├── KeccakSponge.c
│   │   │   │   ├── KeccakSponge.h
│   │   │   │   ├── KeccakSponge.inc
│   │   │   │   ├── load-store.h
│   │   │   │   ├── PlSnP-common.h
│   │   │   │   ├── PlSnP-Fallback.inc
│   │   │   │   ├── SIMD-types.h
│   │   │   │   ├── SimpleFIPS202.c
│   │   │   │   ├── SimpleFIPS202.h
│   │   │   │   ├── SnP-common.h
│   │   │   │   ├── SnP-implementations.h
│   │   │   │   └── SnP-Relaned.h
│   │   │   ├── small_vole.cpp
│   │   │   ├── small_vole.hpp
│   │   │   ├── small_vole.inc
│   │   │   ├── tests
│   │   │   │   └── api_test.c
│   │   │   ├── transpose_secpar.hpp
│   │   │   ├── transpose.hpp
│   │   │   ├── universal_hash.hpp
│   │   │   ├── util.hpp
│   │   │   ├── vector_com.cpp
│   │   │   ├── vector_com.hpp
│   │   │   ├── vector_com.inc
│   │   │   ├── vole_check.hpp
│   │   │   ├── vole_commit.cpp
│   │   │   ├── vole_commit.hpp
│   │   │   ├── vole_commit.inc
│   │   │   └── vole_key_index_permutation.hpp
│   │   ├── faest_256s
│   │   │   ├── aarch64
│   │   │   │   ├── aes_impl.cpp
│   │   │   │   ├── aes_impl.hpp
│   │   │   │   ├── block_impl.hpp
│   │   │   │   ├── constants_impl.hpp
│   │   │   │   ├── gfsmall_impl.hpp
│   │   │   │   ├── polynomials_impl.hpp
│   │   │   │   ├── transpose_impl.hpp
│   │   │   │   └── transpose_secpar_impl.hpp
│   │   │   ├── aes_defs.hpp
│   │   │   ├── aes.cpp
│   │   │   ├── aes.hpp
│   │   │   ├── all.inc
│   │   │   ├── api.cpp
│   │   │   ├── api.h
│   │   │   ├── api.hpp
│   │   │   ├── block.hpp
│   │   │   ├── common
│   │   │   │   ├── aes_impl.inc
│   │   │   │   ├── aes_utils.inc
│   │   │   │   └── block192_impl.inc
│   │   │   ├── constants.hpp
│   │   │   ├── crt_constants_128f.hpp
│   │   │   ├── crt_constants_128s.hpp
│   │   │   ├── crt_constants_192f_em.hpp
│   │   │   ├── crt_constants_192f.hpp
│   │   │   ├── crt_constants_192s_em.hpp
│   │   │   ├── crt_constants_192s.hpp
│   │   │   ├── crt_constants_256f.hpp
│   │   │   ├── crt_constants_256s.cpp
│   │   │   ├── crt_constants_256s.hpp
│   │   │   ├── crt_constants.hpp
│   │   │   ├── crt_vole_helpers.inc
│   │   │   ├── debug.hpp
│   │   │   ├── faest_keys.hpp
│   │   │   ├── faest_keys.inc
│   │   │   ├── faest_sig.hpp
│   │   │   ├── faest.cpp
│   │   │   ├── faest.hpp
│   │   │   ├── faest.inc
│   │   │   ├── generated_crt_constants.hpp
│   │   │   ├── gfsmall.hpp
│   │   │   ├── hash.hpp
│   │   │   ├── kos_vole_check.hpp
│   │   │   ├── Makefile
│   │   │   ├── NIST-KATs
│   │   │   │   ├── PQCgenKAT_sign.c
│   │   │   │   ├── rng.c
│   │   │   │   └── rng.h
│   │   │   ├── owf_proof_enc_v1.inc
│   │   │   ├── owf_proof_enc_v2.inc
│   │   │   ├── owf_proof_enc_v3.cpp
│   │   │   ├── owf_proof_enc_v3.inc
│   │   │   ├── owf_proof_key_sched.cpp
│   │   │   ├── owf_proof_key_sched.inc
│   │   │   ├── owf_proof_tools.hpp
│   │   │   ├── owf_proof_v3_deg3.cpp
│   │   │   ├── owf_proof_v3_em_deg3.cpp
│   │   │   ├── owf_proof_v3_em.cpp
│   │   │   ├── owf_proof_v3.cpp
│   │   │   ├── owf_proof.hpp
│   │   │   ├── owf_proof.inc
│   │   │   ├── parameters.hpp
│   │   │   ├── poly2d.hpp
│   │   │   ├── polynomials_constants.cpp
│   │   │   ├── polynomials_constants.hpp
│   │   │   ├── polynomials.hpp
│   │   │   ├── prgs.hpp
│   │   │   ├── print_parameters.cpp
│   │   │   ├── quicksilver.hpp
│   │   │   ├── randomness_os.c
│   │   │   ├── randomness_randombytes.c
│   │   │   ├── randomness.h
│   │   │   ├── sha3
│   │   │   │   ├── align.h
│   │   │   │   ├── brg_endian.h
│   │   │   │   ├── config.h
│   │   │   │   ├── KeccakDuplex.c
│   │   │   │   ├── KeccakDuplex.h
│   │   │   │   ├── KeccakDuplex.inc
│   │   │   │   ├── KeccakHash-times4.c
│   │   │   │   ├── KeccakHash-times4.h
│   │   │   │   ├── KeccakHash.c
│   │   │   │   ├── KeccakHash.h
│   │   │   │   ├── KeccakOD.c
│   │   │   │   ├── KeccakOD.h
│   │   │   │   ├── KeccakOD.inc
│   │   │   │   ├── KeccakP-1600-64.macros
│   │   │   │   ├── KeccakP-1600-opt64.c
│   │   │   │   ├── KeccakP-1600-plain64.h
│   │   │   │   ├── KeccakP-1600-SnP.h
│   │   │   │   ├── KeccakP-1600-times4-on1.c
│   │   │   │   ├── KeccakP-1600-times4-SnP.h
│   │   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   │   ├── KeccakSponge-times4.c
│   │   │   │   ├── KeccakSponge-times4.h
│   │   │   │   ├── KeccakSponge-times4.inc
│   │   │   │   ├── KeccakSponge.c
│   │   │   │   ├── KeccakSponge.h
│   │   │   │   ├── KeccakSponge.inc
│   │   │   │   ├── load-store.h
│   │   │   │   ├── PlSnP-common.h
│   │   │   │   ├── PlSnP-Fallback.inc
│   │   │   │   ├── SIMD-types.h
│   │   │   │   ├── SimpleFIPS202.c
│   │   │   │   ├── SimpleFIPS202.h
│   │   │   │   ├── SnP-common.h
│   │   │   │   ├── SnP-implementations.h
│   │   │   │   └── SnP-Relaned.h
│   │   │   ├── small_vole.cpp
│   │   │   ├── small_vole.hpp
│   │   │   ├── small_vole.inc
│   │   │   ├── tests
│   │   │   │   └── api_test.c
│   │   │   ├── transpose_secpar.hpp
│   │   │   ├── transpose.hpp
│   │   │   ├── universal_hash.hpp
│   │   │   ├── util.hpp
│   │   │   ├── vector_com.cpp
│   │   │   ├── vector_com.hpp
│   │   │   ├── vector_com.inc
│   │   │   ├── vole_check.hpp
│   │   │   ├── vole_commit.cpp
│   │   │   ├── vole_commit.hpp
│   │   │   ├── vole_commit.inc
│   │   │   └── vole_key_index_permutation.hpp
│   │   ├── faest_em_128f
│   │   │   ├── aarch64
│   │   │   │   ├── aes_impl.cpp
│   │   │   │   ├── aes_impl.hpp
│   │   │   │   ├── block_impl.hpp
│   │   │   │   ├── constants_impl.hpp
│   │   │   │   ├── gfsmall_impl.hpp
│   │   │   │   ├── polynomials_impl.hpp
│   │   │   │   ├── transpose_impl.hpp
│   │   │   │   └── transpose_secpar_impl.hpp
│   │   │   ├── aes_defs.hpp
│   │   │   ├── aes.cpp
│   │   │   ├── aes.hpp
│   │   │   ├── all.inc
│   │   │   ├── api.cpp
│   │   │   ├── api.h
│   │   │   ├── api.hpp
│   │   │   ├── block.hpp
│   │   │   ├── common
│   │   │   │   ├── aes_impl.inc
│   │   │   │   ├── aes_utils.inc
│   │   │   │   └── block192_impl.inc
│   │   │   ├── constants.hpp
│   │   │   ├── crt_constants_128f.cpp
│   │   │   ├── crt_constants_128f.hpp
│   │   │   ├── crt_constants_128s.hpp
│   │   │   ├── crt_constants_192f_em.hpp
│   │   │   ├── crt_constants_192f.hpp
│   │   │   ├── crt_constants_192s_em.hpp
│   │   │   ├── crt_constants_192s.hpp
│   │   │   ├── crt_constants_256f.hpp
│   │   │   ├── crt_constants_256s.hpp
│   │   │   ├── crt_constants.hpp
│   │   │   ├── crt_vole_helpers.inc
│   │   │   ├── debug.hpp
│   │   │   ├── faest_keys.hpp
│   │   │   ├── faest_keys.inc
│   │   │   ├── faest_sig.hpp
│   │   │   ├── faest.cpp
│   │   │   ├── faest.hpp
│   │   │   ├── faest.inc
│   │   │   ├── generated_crt_constants.hpp
│   │   │   ├── gfsmall.hpp
│   │   │   ├── hash.hpp
│   │   │   ├── kos_vole_check.hpp
│   │   │   ├── Makefile
│   │   │   ├── NIST-KATs
│   │   │   │   ├── PQCgenKAT_sign.c
│   │   │   │   ├── rng.c
│   │   │   │   └── rng.h
│   │   │   ├── owf_proof_enc_v1.inc
│   │   │   ├── owf_proof_enc_v2.inc
│   │   │   ├── owf_proof_enc_v3.cpp
│   │   │   ├── owf_proof_enc_v3.inc
│   │   │   ├── owf_proof_key_sched.cpp
│   │   │   ├── owf_proof_key_sched.inc
│   │   │   ├── owf_proof_tools.hpp
│   │   │   ├── owf_proof_v3_deg3.cpp
│   │   │   ├── owf_proof_v3_em_deg3.cpp
│   │   │   ├── owf_proof_v3_em.cpp
│   │   │   ├── owf_proof_v3.cpp
│   │   │   ├── owf_proof.hpp
│   │   │   ├── owf_proof.inc
│   │   │   ├── parameters.hpp
│   │   │   ├── poly2d.hpp
│   │   │   ├── polynomials_constants.cpp
│   │   │   ├── polynomials_constants.hpp
│   │   │   ├── polynomials.hpp
│   │   │   ├── prgs.hpp
│   │   │   ├── print_parameters.cpp
│   │   │   ├── quicksilver.hpp
│   │   │   ├── randomness_os.c
│   │   │   ├── randomness_randombytes.c
│   │   │   ├── randomness.h
│   │   │   ├── sha3
│   │   │   │   ├── align.h
│   │   │   │   ├── brg_endian.h
│   │   │   │   ├── config.h
│   │   │   │   ├── KeccakDuplex.c
│   │   │   │   ├── KeccakDuplex.h
│   │   │   │   ├── KeccakDuplex.inc
│   │   │   │   ├── KeccakHash-times4.c
│   │   │   │   ├── KeccakHash-times4.h
│   │   │   │   ├── KeccakHash.c
│   │   │   │   ├── KeccakHash.h
│   │   │   │   ├── KeccakOD.c
│   │   │   │   ├── KeccakOD.h
│   │   │   │   ├── KeccakOD.inc
│   │   │   │   ├── KeccakP-1600-64.macros
│   │   │   │   ├── KeccakP-1600-opt64.c
│   │   │   │   ├── KeccakP-1600-plain64.h
│   │   │   │   ├── KeccakP-1600-SnP.h
│   │   │   │   ├── KeccakP-1600-times4-on1.c
│   │   │   │   ├── KeccakP-1600-times4-SnP.h
│   │   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   │   ├── KeccakSponge-times4.c
│   │   │   │   ├── KeccakSponge-times4.h
│   │   │   │   ├── KeccakSponge-times4.inc
│   │   │   │   ├── KeccakSponge.c
│   │   │   │   ├── KeccakSponge.h
│   │   │   │   ├── KeccakSponge.inc
│   │   │   │   ├── load-store.h
│   │   │   │   ├── PlSnP-common.h
│   │   │   │   ├── PlSnP-Fallback.inc
│   │   │   │   ├── SIMD-types.h
│   │   │   │   ├── SimpleFIPS202.c
│   │   │   │   ├── SimpleFIPS202.h
│   │   │   │   ├── SnP-common.h
│   │   │   │   ├── SnP-implementations.h
│   │   │   │   └── SnP-Relaned.h
│   │   │   ├── small_vole.cpp
│   │   │   ├── small_vole.hpp
│   │   │   ├── small_vole.inc
│   │   │   ├── tests
│   │   │   │   └── api_test.c
│   │   │   ├── transpose_secpar.hpp
│   │   │   ├── transpose.hpp
│   │   │   ├── universal_hash.hpp
│   │   │   ├── util.hpp
│   │   │   ├── vector_com.cpp
│   │   │   ├── vector_com.hpp
│   │   │   ├── vector_com.inc
│   │   │   ├── vole_check.hpp
│   │   │   ├── vole_commit.cpp
│   │   │   ├── vole_commit.hpp
│   │   │   ├── vole_commit.inc
│   │   │   └── vole_key_index_permutation.hpp
│   │   ├── faest_em_128s
│   │   │   ├── aarch64
│   │   │   │   ├── aes_impl.cpp
│   │   │   │   ├── aes_impl.hpp
│   │   │   │   ├── block_impl.hpp
│   │   │   │   ├── constants_impl.hpp
│   │   │   │   ├── gfsmall_impl.hpp
│   │   │   │   ├── polynomials_impl.hpp
│   │   │   │   ├── transpose_impl.hpp
│   │   │   │   └── transpose_secpar_impl.hpp
│   │   │   ├── aes_defs.hpp
│   │   │   ├── aes.cpp
│   │   │   ├── aes.hpp
│   │   │   ├── all.inc
│   │   │   ├── api.cpp
│   │   │   ├── api.h
│   │   │   ├── api.hpp
│   │   │   ├── block.hpp
│   │   │   ├── common
│   │   │   │   ├── aes_impl.inc
│   │   │   │   ├── aes_utils.inc
│   │   │   │   └── block192_impl.inc
│   │   │   ├── constants.hpp
│   │   │   ├── crt_constants_128f.hpp
│   │   │   ├── crt_constants_128s.cpp
│   │   │   ├── crt_constants_128s.hpp
│   │   │   ├── crt_constants_192f_em.hpp
│   │   │   ├── crt_constants_192f.hpp
│   │   │   ├── crt_constants_192s_em.hpp
│   │   │   ├── crt_constants_192s.hpp
│   │   │   ├── crt_constants_256f.hpp
│   │   │   ├── crt_constants_256s.hpp
│   │   │   ├── crt_constants.hpp
│   │   │   ├── crt_vole_helpers.inc
│   │   │   ├── debug.hpp
│   │   │   ├── faest_keys.hpp
│   │   │   ├── faest_keys.inc
│   │   │   ├── faest_sig.hpp
│   │   │   ├── faest.cpp
│   │   │   ├── faest.hpp
│   │   │   ├── faest.inc
│   │   │   ├── generated_crt_constants.hpp
│   │   │   ├── gfsmall.hpp
│   │   │   ├── hash.hpp
│   │   │   ├── kos_vole_check.hpp
│   │   │   ├── Makefile
│   │   │   ├── NIST-KATs
│   │   │   │   ├── PQCgenKAT_sign.c
│   │   │   │   ├── rng.c
│   │   │   │   └── rng.h
│   │   │   ├── owf_proof_enc_v1.inc
│   │   │   ├── owf_proof_enc_v2.inc
│   │   │   ├── owf_proof_enc_v3.cpp
│   │   │   ├── owf_proof_enc_v3.inc
│   │   │   ├── owf_proof_key_sched.cpp
│   │   │   ├── owf_proof_key_sched.inc
│   │   │   ├── owf_proof_tools.hpp
│   │   │   ├── owf_proof_v3_deg3.cpp
│   │   │   ├── owf_proof_v3_em_deg3.cpp
│   │   │   ├── owf_proof_v3_em.cpp
│   │   │   ├── owf_proof_v3.cpp
│   │   │   ├── owf_proof.hpp
│   │   │   ├── owf_proof.inc
│   │   │   ├── parameters.hpp
│   │   │   ├── poly2d.hpp
│   │   │   ├── polynomials_constants.cpp
│   │   │   ├── polynomials_constants.hpp
│   │   │   ├── polynomials.hpp
│   │   │   ├── prgs.hpp
│   │   │   ├── print_parameters.cpp
│   │   │   ├── quicksilver.hpp
│   │   │   ├── randomness_os.c
│   │   │   ├── randomness_randombytes.c
│   │   │   ├── randomness.h
│   │   │   ├── sha3
│   │   │   │   ├── align.h
│   │   │   │   ├── brg_endian.h
│   │   │   │   ├── config.h
│   │   │   │   ├── KeccakDuplex.c
│   │   │   │   ├── KeccakDuplex.h
│   │   │   │   ├── KeccakDuplex.inc
│   │   │   │   ├── KeccakHash-times4.c
│   │   │   │   ├── KeccakHash-times4.h
│   │   │   │   ├── KeccakHash.c
│   │   │   │   ├── KeccakHash.h
│   │   │   │   ├── KeccakOD.c
│   │   │   │   ├── KeccakOD.h
│   │   │   │   ├── KeccakOD.inc
│   │   │   │   ├── KeccakP-1600-64.macros
│   │   │   │   ├── KeccakP-1600-opt64.c
│   │   │   │   ├── KeccakP-1600-plain64.h
│   │   │   │   ├── KeccakP-1600-SnP.h
│   │   │   │   ├── KeccakP-1600-times4-on1.c
│   │   │   │   ├── KeccakP-1600-times4-SnP.h
│   │   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   │   ├── KeccakSponge-times4.c
│   │   │   │   ├── KeccakSponge-times4.h
│   │   │   │   ├── KeccakSponge-times4.inc
│   │   │   │   ├── KeccakSponge.c
│   │   │   │   ├── KeccakSponge.h
│   │   │   │   ├── KeccakSponge.inc
│   │   │   │   ├── load-store.h
│   │   │   │   ├── PlSnP-common.h
│   │   │   │   ├── PlSnP-Fallback.inc
│   │   │   │   ├── SIMD-types.h
│   │   │   │   ├── SimpleFIPS202.c
│   │   │   │   ├── SimpleFIPS202.h
│   │   │   │   ├── SnP-common.h
│   │   │   │   ├── SnP-implementations.h
│   │   │   │   └── SnP-Relaned.h
│   │   │   ├── small_vole.cpp
│   │   │   ├── small_vole.hpp
│   │   │   ├── small_vole.inc
│   │   │   ├── tests
│   │   │   │   └── api_test.c
│   │   │   ├── transpose_secpar.hpp
│   │   │   ├── transpose.hpp
│   │   │   ├── universal_hash.hpp
│   │   │   ├── util.hpp
│   │   │   ├── vector_com.cpp
│   │   │   ├── vector_com.hpp
│   │   │   ├── vector_com.inc
│   │   │   ├── vole_check.hpp
│   │   │   ├── vole_commit.cpp
│   │   │   ├── vole_commit.hpp
│   │   │   ├── vole_commit.inc
│   │   │   └── vole_key_index_permutation.hpp
│   │   ├── faest_em_192f
│   │   │   ├── aarch64
│   │   │   │   ├── aes_impl.cpp
│   │   │   │   ├── aes_impl.hpp
│   │   │   │   ├── block_impl.hpp
│   │   │   │   ├── constants_impl.hpp
│   │   │   │   ├── gfsmall_impl.hpp
│   │   │   │   ├── polynomials_impl.hpp
│   │   │   │   ├── transpose_impl.hpp
│   │   │   │   └── transpose_secpar_impl.hpp
│   │   │   ├── aes_defs.hpp
│   │   │   ├── aes.cpp
│   │   │   ├── aes.hpp
│   │   │   ├── all.inc
│   │   │   ├── api.cpp
│   │   │   ├── api.h
│   │   │   ├── api.hpp
│   │   │   ├── block.hpp
│   │   │   ├── common
│   │   │   │   ├── aes_impl.inc
│   │   │   │   ├── aes_utils.inc
│   │   │   │   └── block192_impl.inc
│   │   │   ├── constants.hpp
│   │   │   ├── crt_constants_128f.hpp
│   │   │   ├── crt_constants_128s.hpp
│   │   │   ├── crt_constants_192f_em.cpp
│   │   │   ├── crt_constants_192f_em.hpp
│   │   │   ├── crt_constants_192f.hpp
│   │   │   ├── crt_constants_192s_em.hpp
│   │   │   ├── crt_constants_192s.hpp
│   │   │   ├── crt_constants_256f.hpp
│   │   │   ├── crt_constants_256s.hpp
│   │   │   ├── crt_constants.hpp
│   │   │   ├── crt_vole_helpers.inc
│   │   │   ├── debug.hpp
│   │   │   ├── faest_keys.hpp
│   │   │   ├── faest_keys.inc
│   │   │   ├── faest_sig.hpp
│   │   │   ├── faest.cpp
│   │   │   ├── faest.hpp
│   │   │   ├── faest.inc
│   │   │   ├── generated_crt_constants.hpp
│   │   │   ├── gfsmall.hpp
│   │   │   ├── hash.hpp
│   │   │   ├── kos_vole_check.hpp
│   │   │   ├── Makefile
│   │   │   ├── NIST-KATs
│   │   │   │   ├── PQCgenKAT_sign.c
│   │   │   │   ├── rng.c
│   │   │   │   └── rng.h
│   │   │   ├── owf_proof_enc_v1.inc
│   │   │   ├── owf_proof_enc_v2.inc
│   │   │   ├── owf_proof_enc_v3.cpp
│   │   │   ├── owf_proof_enc_v3.inc
│   │   │   ├── owf_proof_key_sched.cpp
│   │   │   ├── owf_proof_key_sched.inc
│   │   │   ├── owf_proof_tools.hpp
│   │   │   ├── owf_proof_v3_deg3.cpp
│   │   │   ├── owf_proof_v3_em_deg3.cpp
│   │   │   ├── owf_proof_v3_em.cpp
│   │   │   ├── owf_proof_v3.cpp
│   │   │   ├── owf_proof.hpp
│   │   │   ├── owf_proof.inc
│   │   │   ├── parameters.hpp
│   │   │   ├── poly2d.hpp
│   │   │   ├── polynomials_constants.cpp
│   │   │   ├── polynomials_constants.hpp
│   │   │   ├── polynomials.hpp
│   │   │   ├── prgs.hpp
│   │   │   ├── print_parameters.cpp
│   │   │   ├── quicksilver.hpp
│   │   │   ├── randomness_os.c
│   │   │   ├── randomness_randombytes.c
│   │   │   ├── randomness.h
│   │   │   ├── sha3
│   │   │   │   ├── align.h
│   │   │   │   ├── brg_endian.h
│   │   │   │   ├── config.h
│   │   │   │   ├── KeccakDuplex.c
│   │   │   │   ├── KeccakDuplex.h
│   │   │   │   ├── KeccakDuplex.inc
│   │   │   │   ├── KeccakHash-times4.c
│   │   │   │   ├── KeccakHash-times4.h
│   │   │   │   ├── KeccakHash.c
│   │   │   │   ├── KeccakHash.h
│   │   │   │   ├── KeccakOD.c
│   │   │   │   ├── KeccakOD.h
│   │   │   │   ├── KeccakOD.inc
│   │   │   │   ├── KeccakP-1600-64.macros
│   │   │   │   ├── KeccakP-1600-opt64.c
│   │   │   │   ├── KeccakP-1600-plain64.h
│   │   │   │   ├── KeccakP-1600-SnP.h
│   │   │   │   ├── KeccakP-1600-times4-on1.c
│   │   │   │   ├── KeccakP-1600-times4-SnP.h
│   │   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   │   ├── KeccakSponge-times4.c
│   │   │   │   ├── KeccakSponge-times4.h
│   │   │   │   ├── KeccakSponge-times4.inc
│   │   │   │   ├── KeccakSponge.c
│   │   │   │   ├── KeccakSponge.h
│   │   │   │   ├── KeccakSponge.inc
│   │   │   │   ├── load-store.h
│   │   │   │   ├── PlSnP-common.h
│   │   │   │   ├── PlSnP-Fallback.inc
│   │   │   │   ├── SIMD-types.h
│   │   │   │   ├── SimpleFIPS202.c
│   │   │   │   ├── SimpleFIPS202.h
│   │   │   │   ├── SnP-common.h
│   │   │   │   ├── SnP-implementations.h
│   │   │   │   └── SnP-Relaned.h
│   │   │   ├── small_vole.cpp
│   │   │   ├── small_vole.hpp
│   │   │   ├── small_vole.inc
│   │   │   ├── tests
│   │   │   │   └── api_test.c
│   │   │   ├── transpose_secpar.hpp
│   │   │   ├── transpose.hpp
│   │   │   ├── universal_hash.hpp
│   │   │   ├── util.hpp
│   │   │   ├── vector_com.cpp
│   │   │   ├── vector_com.hpp
│   │   │   ├── vector_com.inc
│   │   │   ├── vole_check.hpp
│   │   │   ├── vole_commit.cpp
│   │   │   ├── vole_commit.hpp
│   │   │   ├── vole_commit.inc
│   │   │   └── vole_key_index_permutation.hpp
│   │   ├── faest_em_192s
│   │   │   ├── aarch64
│   │   │   │   ├── aes_impl.cpp
│   │   │   │   ├── aes_impl.hpp
│   │   │   │   ├── block_impl.hpp
│   │   │   │   ├── constants_impl.hpp
│   │   │   │   ├── gfsmall_impl.hpp
│   │   │   │   ├── polynomials_impl.hpp
│   │   │   │   ├── transpose_impl.hpp
│   │   │   │   └── transpose_secpar_impl.hpp
│   │   │   ├── aes_defs.hpp
│   │   │   ├── aes.cpp
│   │   │   ├── aes.hpp
│   │   │   ├── all.inc
│   │   │   ├── api.cpp
│   │   │   ├── api.h
│   │   │   ├── api.hpp
│   │   │   ├── block.hpp
│   │   │   ├── common
│   │   │   │   ├── aes_impl.inc
│   │   │   │   ├── aes_utils.inc
│   │   │   │   └── block192_impl.inc
│   │   │   ├── constants.hpp
│   │   │   ├── crt_constants_128f.hpp
│   │   │   ├── crt_constants_128s.hpp
│   │   │   ├── crt_constants_192f_em.hpp
│   │   │   ├── crt_constants_192f.hpp
│   │   │   ├── crt_constants_192s_em.cpp
│   │   │   ├── crt_constants_192s_em.hpp
│   │   │   ├── crt_constants_192s.hpp
│   │   │   ├── crt_constants_256f.hpp
│   │   │   ├── crt_constants_256s.hpp
│   │   │   ├── crt_constants.hpp
│   │   │   ├── crt_vole_helpers.inc
│   │   │   ├── debug.hpp
│   │   │   ├── faest_keys.hpp
│   │   │   ├── faest_keys.inc
│   │   │   ├── faest_sig.hpp
│   │   │   ├── faest.cpp
│   │   │   ├── faest.hpp
│   │   │   ├── faest.inc
│   │   │   ├── generated_crt_constants.hpp
│   │   │   ├── gfsmall.hpp
│   │   │   ├── hash.hpp
│   │   │   ├── kos_vole_check.hpp
│   │   │   ├── Makefile
│   │   │   ├── NIST-KATs
│   │   │   │   ├── PQCgenKAT_sign.c
│   │   │   │   ├── rng.c
│   │   │   │   └── rng.h
│   │   │   ├── owf_proof_enc_v1.inc
│   │   │   ├── owf_proof_enc_v2.inc
│   │   │   ├── owf_proof_enc_v3.cpp
│   │   │   ├── owf_proof_enc_v3.inc
│   │   │   ├── owf_proof_key_sched.cpp
│   │   │   ├── owf_proof_key_sched.inc
│   │   │   ├── owf_proof_tools.hpp
│   │   │   ├── owf_proof_v3_deg3.cpp
│   │   │   ├── owf_proof_v3_em_deg3.cpp
│   │   │   ├── owf_proof_v3_em.cpp
│   │   │   ├── owf_proof_v3.cpp
│   │   │   ├── owf_proof.hpp
│   │   │   ├── owf_proof.inc
│   │   │   ├── parameters.hpp
│   │   │   ├── poly2d.hpp
│   │   │   ├── polynomials_constants.cpp
│   │   │   ├── polynomials_constants.hpp
│   │   │   ├── polynomials.hpp
│   │   │   ├── prgs.hpp
│   │   │   ├── print_parameters.cpp
│   │   │   ├── quicksilver.hpp
│   │   │   ├── randomness_os.c
│   │   │   ├── randomness_randombytes.c
│   │   │   ├── randomness.h
│   │   │   ├── sha3
│   │   │   │   ├── align.h
│   │   │   │   ├── brg_endian.h
│   │   │   │   ├── config.h
│   │   │   │   ├── KeccakDuplex.c
│   │   │   │   ├── KeccakDuplex.h
│   │   │   │   ├── KeccakDuplex.inc
│   │   │   │   ├── KeccakHash-times4.c
│   │   │   │   ├── KeccakHash-times4.h
│   │   │   │   ├── KeccakHash.c
│   │   │   │   ├── KeccakHash.h
│   │   │   │   ├── KeccakOD.c
│   │   │   │   ├── KeccakOD.h
│   │   │   │   ├── KeccakOD.inc
│   │   │   │   ├── KeccakP-1600-64.macros
│   │   │   │   ├── KeccakP-1600-opt64.c
│   │   │   │   ├── KeccakP-1600-plain64.h
│   │   │   │   ├── KeccakP-1600-SnP.h
│   │   │   │   ├── KeccakP-1600-times4-on1.c
│   │   │   │   ├── KeccakP-1600-times4-SnP.h
│   │   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   │   ├── KeccakSponge-times4.c
│   │   │   │   ├── KeccakSponge-times4.h
│   │   │   │   ├── KeccakSponge-times4.inc
│   │   │   │   ├── KeccakSponge.c
│   │   │   │   ├── KeccakSponge.h
│   │   │   │   ├── KeccakSponge.inc
│   │   │   │   ├── load-store.h
│   │   │   │   ├── PlSnP-common.h
│   │   │   │   ├── PlSnP-Fallback.inc
│   │   │   │   ├── SIMD-types.h
│   │   │   │   ├── SimpleFIPS202.c
│   │   │   │   ├── SimpleFIPS202.h
│   │   │   │   ├── SnP-common.h
│   │   │   │   ├── SnP-implementations.h
│   │   │   │   └── SnP-Relaned.h
│   │   │   ├── small_vole.cpp
│   │   │   ├── small_vole.hpp
│   │   │   ├── small_vole.inc
│   │   │   ├── tests
│   │   │   │   └── api_test.c
│   │   │   ├── transpose_secpar.hpp
│   │   │   ├── transpose.hpp
│   │   │   ├── universal_hash.hpp
│   │   │   ├── util.hpp
│   │   │   ├── vector_com.cpp
│   │   │   ├── vector_com.hpp
│   │   │   ├── vector_com.inc
│   │   │   ├── vole_check.hpp
│   │   │   ├── vole_commit.cpp
│   │   │   ├── vole_commit.hpp
│   │   │   ├── vole_commit.inc
│   │   │   └── vole_key_index_permutation.hpp
│   │   ├── faest_em_256f
│   │   │   ├── aarch64
│   │   │   │   ├── aes_impl.cpp
│   │   │   │   ├── aes_impl.hpp
│   │   │   │   ├── block_impl.hpp
│   │   │   │   ├── constants_impl.hpp
│   │   │   │   ├── gfsmall_impl.hpp
│   │   │   │   ├── polynomials_impl.hpp
│   │   │   │   ├── transpose_impl.hpp
│   │   │   │   └── transpose_secpar_impl.hpp
│   │   │   ├── aes_defs.hpp
│   │   │   ├── aes.cpp
│   │   │   ├── aes.hpp
│   │   │   ├── all.inc
│   │   │   ├── api.cpp
│   │   │   ├── api.h
│   │   │   ├── api.hpp
│   │   │   ├── block.hpp
│   │   │   ├── common
│   │   │   │   ├── aes_impl.inc
│   │   │   │   ├── aes_utils.inc
│   │   │   │   └── block192_impl.inc
│   │   │   ├── constants.hpp
│   │   │   ├── crt_constants_128f.hpp
│   │   │   ├── crt_constants_128s.hpp
│   │   │   ├── crt_constants_192f_em.hpp
│   │   │   ├── crt_constants_192f.hpp
│   │   │   ├── crt_constants_192s_em.hpp
│   │   │   ├── crt_constants_192s.hpp
│   │   │   ├── crt_constants_256f.cpp
│   │   │   ├── crt_constants_256f.hpp
│   │   │   ├── crt_constants_256s.hpp
│   │   │   ├── crt_constants.hpp
│   │   │   ├── crt_vole_helpers.inc
│   │   │   ├── debug.hpp
│   │   │   ├── faest_keys.hpp
│   │   │   ├── faest_keys.inc
│   │   │   ├── faest_sig.hpp
│   │   │   ├── faest.cpp
│   │   │   ├── faest.hpp
│   │   │   ├── faest.inc
│   │   │   ├── generated_crt_constants.hpp
│   │   │   ├── gfsmall.hpp
│   │   │   ├── hash.hpp
│   │   │   ├── kos_vole_check.hpp
│   │   │   ├── Makefile
│   │   │   ├── NIST-KATs
│   │   │   │   ├── PQCgenKAT_sign.c
│   │   │   │   ├── rng.c
│   │   │   │   └── rng.h
│   │   │   ├── owf_proof_enc_v1.inc
│   │   │   ├── owf_proof_enc_v2.inc
│   │   │   ├── owf_proof_enc_v3.cpp
│   │   │   ├── owf_proof_enc_v3.inc
│   │   │   ├── owf_proof_key_sched.cpp
│   │   │   ├── owf_proof_key_sched.inc
│   │   │   ├── owf_proof_tools.hpp
│   │   │   ├── owf_proof_v3_deg3.cpp
│   │   │   ├── owf_proof_v3_em_deg3.cpp
│   │   │   ├── owf_proof_v3_em.cpp
│   │   │   ├── owf_proof_v3.cpp
│   │   │   ├── owf_proof.hpp
│   │   │   ├── owf_proof.inc
│   │   │   ├── parameters.hpp
│   │   │   ├── poly2d.hpp
│   │   │   ├── polynomials_constants.cpp
│   │   │   ├── polynomials_constants.hpp
│   │   │   ├── polynomials.hpp
│   │   │   ├── prgs.hpp
│   │   │   ├── print_parameters.cpp
│   │   │   ├── quicksilver.hpp
│   │   │   ├── randomness_os.c
│   │   │   ├── randomness_randombytes.c
│   │   │   ├── randomness.h
│   │   │   ├── sha3
│   │   │   │   ├── align.h
│   │   │   │   ├── brg_endian.h
│   │   │   │   ├── config.h
│   │   │   │   ├── KeccakDuplex.c
│   │   │   │   ├── KeccakDuplex.h
│   │   │   │   ├── KeccakDuplex.inc
│   │   │   │   ├── KeccakHash-times4.c
│   │   │   │   ├── KeccakHash-times4.h
│   │   │   │   ├── KeccakHash.c
│   │   │   │   ├── KeccakHash.h
│   │   │   │   ├── KeccakOD.c
│   │   │   │   ├── KeccakOD.h
│   │   │   │   ├── KeccakOD.inc
│   │   │   │   ├── KeccakP-1600-64.macros
│   │   │   │   ├── KeccakP-1600-opt64.c
│   │   │   │   ├── KeccakP-1600-plain64.h
│   │   │   │   ├── KeccakP-1600-SnP.h
│   │   │   │   ├── KeccakP-1600-times4-on1.c
│   │   │   │   ├── KeccakP-1600-times4-SnP.h
│   │   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   │   ├── KeccakSponge-times4.c
│   │   │   │   ├── KeccakSponge-times4.h
│   │   │   │   ├── KeccakSponge-times4.inc
│   │   │   │   ├── KeccakSponge.c
│   │   │   │   ├── KeccakSponge.h
│   │   │   │   ├── KeccakSponge.inc
│   │   │   │   ├── load-store.h
│   │   │   │   ├── PlSnP-common.h
│   │   │   │   ├── PlSnP-Fallback.inc
│   │   │   │   ├── SIMD-types.h
│   │   │   │   ├── SimpleFIPS202.c
│   │   │   │   ├── SimpleFIPS202.h
│   │   │   │   ├── SnP-common.h
│   │   │   │   ├── SnP-implementations.h
│   │   │   │   └── SnP-Relaned.h
│   │   │   ├── small_vole.cpp
│   │   │   ├── small_vole.hpp
│   │   │   ├── small_vole.inc
│   │   │   ├── tests
│   │   │   │   └── api_test.c
│   │   │   ├── transpose_secpar.hpp
│   │   │   ├── transpose.hpp
│   │   │   ├── universal_hash.hpp
│   │   │   ├── util.hpp
│   │   │   ├── vector_com.cpp
│   │   │   ├── vector_com.hpp
│   │   │   ├── vector_com.inc
│   │   │   ├── vole_check.hpp
│   │   │   ├── vole_commit.cpp
│   │   │   ├── vole_commit.hpp
│   │   │   ├── vole_commit.inc
│   │   │   └── vole_key_index_permutation.hpp
│   │   └── faest_em_256s
│   │       ├── aarch64
│   │       │   ├── aes_impl.cpp
│   │       │   ├── aes_impl.hpp
│   │       │   ├── block_impl.hpp
│   │       │   ├── constants_impl.hpp
│   │       │   ├── gfsmall_impl.hpp
│   │       │   ├── polynomials_impl.hpp
│   │       │   ├── transpose_impl.hpp
│   │       │   └── transpose_secpar_impl.hpp
│   │       ├── aes_defs.hpp
│   │       ├── aes.cpp
│   │       ├── aes.hpp
│   │       ├── all.inc
│   │       ├── api.cpp
│   │       ├── api.h
│   │       ├── api.hpp
│   │       ├── block.hpp
│   │       ├── common
│   │       │   ├── aes_impl.inc
│   │       │   ├── aes_utils.inc
│   │       │   └── block192_impl.inc
│   │       ├── constants.hpp
│   │       ├── crt_constants_128f.hpp
│   │       ├── crt_constants_128s.hpp
│   │       ├── crt_constants_192f_em.hpp
│   │       ├── crt_constants_192f.hpp
│   │       ├── crt_constants_192s_em.hpp
│   │       ├── crt_constants_192s.hpp
│   │       ├── crt_constants_256f.hpp
│   │       ├── crt_constants_256s.cpp
│   │       ├── crt_constants_256s.hpp
│   │       ├── crt_constants.hpp
│   │       ├── crt_vole_helpers.inc
│   │       ├── debug.hpp
│   │       ├── faest_keys.hpp
│   │       ├── faest_keys.inc
│   │       ├── faest_sig.hpp
│   │       ├── faest.cpp
│   │       ├── faest.hpp
│   │       ├── faest.inc
│   │       ├── generated_crt_constants.hpp
│   │       ├── gfsmall.hpp
│   │       ├── hash.hpp
│   │       ├── kos_vole_check.hpp
│   │       ├── Makefile
│   │       ├── NIST-KATs
│   │       │   ├── PQCgenKAT_sign.c
│   │       │   ├── rng.c
│   │       │   └── rng.h
│   │       ├── owf_proof_enc_v1.inc
│   │       ├── owf_proof_enc_v2.inc
│   │       ├── owf_proof_enc_v3.cpp
│   │       ├── owf_proof_enc_v3.inc
│   │       ├── owf_proof_key_sched.cpp
│   │       ├── owf_proof_key_sched.inc
│   │       ├── owf_proof_tools.hpp
│   │       ├── owf_proof_v3_deg3.cpp
│   │       ├── owf_proof_v3_em_deg3.cpp
│   │       ├── owf_proof_v3_em.cpp
│   │       ├── owf_proof_v3.cpp
│   │       ├── owf_proof.hpp
│   │       ├── owf_proof.inc
│   │       ├── parameters.hpp
│   │       ├── poly2d.hpp
│   │       ├── polynomials_constants.cpp
│   │       ├── polynomials_constants.hpp
│   │       ├── polynomials.hpp
│   │       ├── prgs.hpp
│   │       ├── print_parameters.cpp
│   │       ├── quicksilver.hpp
│   │       ├── randomness_os.c
│   │       ├── randomness_randombytes.c
│   │       ├── randomness.h
│   │       ├── sha3
│   │       │   ├── align.h
│   │       │   ├── brg_endian.h
│   │       │   ├── config.h
│   │       │   ├── KeccakDuplex.c
│   │       │   ├── KeccakDuplex.h
│   │       │   ├── KeccakDuplex.inc
│   │       │   ├── KeccakHash-times4.c
│   │       │   ├── KeccakHash-times4.h
│   │       │   ├── KeccakHash.c
│   │       │   ├── KeccakHash.h
│   │       │   ├── KeccakOD.c
│   │       │   ├── KeccakOD.h
│   │       │   ├── KeccakOD.inc
│   │       │   ├── KeccakP-1600-64.macros
│   │       │   ├── KeccakP-1600-opt64.c
│   │       │   ├── KeccakP-1600-plain64.h
│   │       │   ├── KeccakP-1600-SnP.h
│   │       │   ├── KeccakP-1600-times4-on1.c
│   │       │   ├── KeccakP-1600-times4-SnP.h
│   │       │   ├── KeccakP-1600-unrolling.macros
│   │       │   ├── KeccakSponge-times4.c
│   │       │   ├── KeccakSponge-times4.h
│   │       │   ├── KeccakSponge-times4.inc
│   │       │   ├── KeccakSponge.c
│   │       │   ├── KeccakSponge.h
│   │       │   ├── KeccakSponge.inc
│   │       │   ├── load-store.h
│   │       │   ├── PlSnP-common.h
│   │       │   ├── PlSnP-Fallback.inc
│   │       │   ├── SIMD-types.h
│   │       │   ├── SimpleFIPS202.c
│   │       │   ├── SimpleFIPS202.h
│   │       │   ├── SnP-common.h
│   │       │   ├── SnP-implementations.h
│   │       │   └── SnP-Relaned.h
│   │       ├── small_vole.cpp
│   │       ├── small_vole.hpp
│   │       ├── small_vole.inc
│   │       ├── tests
│   │       │   └── api_test.c
│   │       ├── transpose_secpar.hpp
│   │       ├── transpose.hpp
│   │       ├── universal_hash.hpp
│   │       ├── util.hpp
│   │       ├── vector_com.cpp
│   │       ├── vector_com.hpp
│   │       ├── vector_com.inc
│   │       ├── vole_check.hpp
│   │       ├── vole_commit.cpp
│   │       ├── vole_commit.hpp
│   │       ├── vole_commit.inc
│   │       └── vole_key_index_permutation.hpp
│   └── avx2
│       ├── faest_128f
│       │   ├── aes_defs.hpp
│       │   ├── aes.cpp
│       │   ├── aes.hpp
│       │   ├── all.inc
│       │   ├── api.cpp
│       │   ├── api.h
│       │   ├── api.hpp
│       │   ├── avx2
│       │   │   ├── aes_impl.cpp
│       │   │   ├── aes_impl.hpp
│       │   │   ├── block_impl.hpp
│       │   │   ├── constants_impl.hpp
│       │   │   ├── gfsmall_impl.hpp
│       │   │   ├── polynomials_impl.hpp
│       │   │   ├── transpose_impl.hpp
│       │   │   └── transpose_secpar_impl.hpp
│       │   ├── block.hpp
│       │   ├── common
│       │   │   ├── aes_impl.inc
│       │   │   ├── aes_utils.inc
│       │   │   └── block192_impl.inc
│       │   ├── constants.hpp
│       │   ├── crt_constants_128f.cpp
│       │   ├── crt_constants_128f.hpp
│       │   ├── crt_constants_128s.hpp
│       │   ├── crt_constants_192f_em.hpp
│       │   ├── crt_constants_192f.hpp
│       │   ├── crt_constants_192s_em.hpp
│       │   ├── crt_constants_192s.hpp
│       │   ├── crt_constants_256f.hpp
│       │   ├── crt_constants_256s.hpp
│       │   ├── crt_constants.hpp
│       │   ├── crt_vole_helpers.inc
│       │   ├── debug.hpp
│       │   ├── faest_keys.hpp
│       │   ├── faest_keys.inc
│       │   ├── faest_sig.hpp
│       │   ├── faest.cpp
│       │   ├── faest.hpp
│       │   ├── faest.inc
│       │   ├── generated_crt_constants.hpp
│       │   ├── gfsmall.hpp
│       │   ├── hash.hpp
│       │   ├── kos_vole_check.hpp
│       │   ├── Makefile
│       │   ├── NIST-KATs
│       │   │   ├── PQCgenKAT_sign.c
│       │   │   ├── rng.c
│       │   │   └── rng.h
│       │   ├── owf_proof_enc_v1.inc
│       │   ├── owf_proof_enc_v2.inc
│       │   ├── owf_proof_enc_v3.cpp
│       │   ├── owf_proof_enc_v3.inc
│       │   ├── owf_proof_key_sched.cpp
│       │   ├── owf_proof_key_sched.inc
│       │   ├── owf_proof_tools.hpp
│       │   ├── owf_proof_v3_deg3.cpp
│       │   ├── owf_proof_v3_em_deg3.cpp
│       │   ├── owf_proof_v3_em.cpp
│       │   ├── owf_proof_v3.cpp
│       │   ├── owf_proof.hpp
│       │   ├── owf_proof.inc
│       │   ├── parameters.hpp
│       │   ├── poly2d.hpp
│       │   ├── polynomials_constants.cpp
│       │   ├── polynomials_constants.hpp
│       │   ├── polynomials.hpp
│       │   ├── prgs.hpp
│       │   ├── print_parameters.cpp
│       │   ├── quicksilver.hpp
│       │   ├── randomness_os.c
│       │   ├── randomness_randombytes.c
│       │   ├── randomness.h
│       │   ├── sha3
│       │   │   ├── align.h
│       │   │   ├── brg_endian.h
│       │   │   ├── config.h
│       │   │   ├── KeccakDuplex.c
│       │   │   ├── KeccakDuplex.h
│       │   │   ├── KeccakDuplex.inc
│       │   │   ├── KeccakHash-times4.c
│       │   │   ├── KeccakHash-times4.h
│       │   │   ├── KeccakHash.c
│       │   │   ├── KeccakHash.h
│       │   │   ├── KeccakOD.c
│       │   │   ├── KeccakOD.h
│       │   │   ├── KeccakOD.inc
│       │   │   ├── KeccakP-1600-64.macros
│       │   │   ├── KeccakP-1600-AVX2.h
│       │   │   ├── KeccakP-1600-AVX2.s
│       │   │   ├── KeccakP-1600-SnP.h
│       │   │   ├── KeccakP-1600-times4-AVX2.c
│       │   │   ├── KeccakP-1600-times4-AVX2.h
│       │   │   ├── KeccakP-1600-times4-SnP.h
│       │   │   ├── KeccakP-1600-unrolling.macros
│       │   │   ├── KeccakSponge-times4.c
│       │   │   ├── KeccakSponge-times4.h
│       │   │   ├── KeccakSponge-times4.inc
│       │   │   ├── KeccakSponge.c
│       │   │   ├── KeccakSponge.h
│       │   │   ├── KeccakSponge.inc
│       │   │   ├── load-store.h
│       │   │   ├── PlSnP-common.h
│       │   │   ├── PlSnP-Fallback.inc
│       │   │   ├── SIMD-types.h
│       │   │   ├── SimpleFIPS202.c
│       │   │   ├── SimpleFIPS202.h
│       │   │   ├── SnP-common.h
│       │   │   ├── SnP-implementations.h
│       │   │   └── SnP-Relaned.h
│       │   ├── small_vole.cpp
│       │   ├── small_vole.hpp
│       │   ├── small_vole.inc
│       │   ├── tests
│       │   │   └── api_test.c
│       │   ├── transpose_secpar.hpp
│       │   ├── transpose.hpp
│       │   ├── universal_hash.hpp
│       │   ├── util.hpp
│       │   ├── vector_com.cpp
│       │   ├── vector_com.hpp
│       │   ├── vector_com.inc
│       │   ├── vole_check.hpp
│       │   ├── vole_commit.cpp
│       │   ├── vole_commit.hpp
│       │   ├── vole_commit.inc
│       │   └── vole_key_index_permutation.hpp
│       ├── faest_128s
│       │   ├── aes_defs.hpp
│       │   ├── aes.cpp
│       │   ├── aes.hpp
│       │   ├── all.inc
│       │   ├── api.cpp
│       │   ├── api.h
│       │   ├── api.hpp
│       │   ├── avx2
│       │   │   ├── aes_impl.cpp
│       │   │   ├── aes_impl.hpp
│       │   │   ├── block_impl.hpp
│       │   │   ├── constants_impl.hpp
│       │   │   ├── gfsmall_impl.hpp
│       │   │   ├── polynomials_impl.hpp
│       │   │   ├── transpose_impl.hpp
│       │   │   └── transpose_secpar_impl.hpp
│       │   ├── block.hpp
│       │   ├── common
│       │   │   ├── aes_impl.inc
│       │   │   ├── aes_utils.inc
│       │   │   └── block192_impl.inc
│       │   ├── constants.hpp
│       │   ├── crt_constants_128f.hpp
│       │   ├── crt_constants_128s.cpp
│       │   ├── crt_constants_128s.hpp
│       │   ├── crt_constants_192f_em.hpp
│       │   ├── crt_constants_192f.hpp
│       │   ├── crt_constants_192s_em.hpp
│       │   ├── crt_constants_192s.hpp
│       │   ├── crt_constants_256f.hpp
│       │   ├── crt_constants_256s.hpp
│       │   ├── crt_constants.hpp
│       │   ├── crt_vole_helpers.inc
│       │   ├── debug.hpp
│       │   ├── faest_keys.hpp
│       │   ├── faest_keys.inc
│       │   ├── faest_sig.hpp
│       │   ├── faest.cpp
│       │   ├── faest.hpp
│       │   ├── faest.inc
│       │   ├── generated_crt_constants.hpp
│       │   ├── gfsmall.hpp
│       │   ├── hash.hpp
│       │   ├── kos_vole_check.hpp
│       │   ├── Makefile
│       │   ├── NIST-KATs
│       │   │   ├── PQCgenKAT_sign.c
│       │   │   ├── rng.c
│       │   │   └── rng.h
│       │   ├── owf_proof_enc_v1.inc
│       │   ├── owf_proof_enc_v2.inc
│       │   ├── owf_proof_enc_v3.cpp
│       │   ├── owf_proof_enc_v3.inc
│       │   ├── owf_proof_key_sched.cpp
│       │   ├── owf_proof_key_sched.inc
│       │   ├── owf_proof_tools.hpp
│       │   ├── owf_proof_v3_deg3.cpp
│       │   ├── owf_proof_v3_em_deg3.cpp
│       │   ├── owf_proof_v3_em.cpp
│       │   ├── owf_proof_v3.cpp
│       │   ├── owf_proof.hpp
│       │   ├── owf_proof.inc
│       │   ├── parameters.hpp
│       │   ├── poly2d.hpp
│       │   ├── polynomials_constants.cpp
│       │   ├── polynomials_constants.hpp
│       │   ├── polynomials.hpp
│       │   ├── prgs.hpp
│       │   ├── print_parameters.cpp
│       │   ├── quicksilver.hpp
│       │   ├── randomness_os.c
│       │   ├── randomness_randombytes.c
│       │   ├── randomness.h
│       │   ├── sha3
│       │   │   ├── align.h
│       │   │   ├── brg_endian.h
│       │   │   ├── config.h
│       │   │   ├── KeccakDuplex.c
│       │   │   ├── KeccakDuplex.h
│       │   │   ├── KeccakDuplex.inc
│       │   │   ├── KeccakHash-times4.c
│       │   │   ├── KeccakHash-times4.h
│       │   │   ├── KeccakHash.c
│       │   │   ├── KeccakHash.h
│       │   │   ├── KeccakOD.c
│       │   │   ├── KeccakOD.h
│       │   │   ├── KeccakOD.inc
│       │   │   ├── KeccakP-1600-64.macros
│       │   │   ├── KeccakP-1600-AVX2.h
│       │   │   ├── KeccakP-1600-AVX2.s
│       │   │   ├── KeccakP-1600-SnP.h
│       │   │   ├── KeccakP-1600-times4-AVX2.c
│       │   │   ├── KeccakP-1600-times4-AVX2.h
│       │   │   ├── KeccakP-1600-times4-SnP.h
│       │   │   ├── KeccakP-1600-unrolling.macros
│       │   │   ├── KeccakSponge-times4.c
│       │   │   ├── KeccakSponge-times4.h
│       │   │   ├── KeccakSponge-times4.inc
│       │   │   ├── KeccakSponge.c
│       │   │   ├── KeccakSponge.h
│       │   │   ├── KeccakSponge.inc
│       │   │   ├── load-store.h
│       │   │   ├── PlSnP-common.h
│       │   │   ├── PlSnP-Fallback.inc
│       │   │   ├── SIMD-types.h
│       │   │   ├── SimpleFIPS202.c
│       │   │   ├── SimpleFIPS202.h
│       │   │   ├── SnP-common.h
│       │   │   ├── SnP-implementations.h
│       │   │   └── SnP-Relaned.h
│       │   ├── small_vole.cpp
│       │   ├── small_vole.hpp
│       │   ├── small_vole.inc
│       │   ├── tests
│       │   │   └── api_test.c
│       │   ├── transpose_secpar.hpp
│       │   ├── transpose.hpp
│       │   ├── universal_hash.hpp
│       │   ├── util.hpp
│       │   ├── vector_com.cpp
│       │   ├── vector_com.hpp
│       │   ├── vector_com.inc
│       │   ├── vole_check.hpp
│       │   ├── vole_commit.cpp
│       │   ├── vole_commit.hpp
│       │   ├── vole_commit.inc
│       │   └── vole_key_index_permutation.hpp
│       ├── faest_192f
│       │   ├── aes_defs.hpp
│       │   ├── aes.cpp
│       │   ├── aes.hpp
│       │   ├── all.inc
│       │   ├── api.cpp
│       │   ├── api.h
│       │   ├── api.hpp
│       │   ├── avx2
│       │   │   ├── aes_impl.cpp
│       │   │   ├── aes_impl.hpp
│       │   │   ├── block_impl.hpp
│       │   │   ├── constants_impl.hpp
│       │   │   ├── gfsmall_impl.hpp
│       │   │   ├── polynomials_impl.hpp
│       │   │   ├── transpose_impl.hpp
│       │   │   └── transpose_secpar_impl.hpp
│       │   ├── block.hpp
│       │   ├── common
│       │   │   ├── aes_impl.inc
│       │   │   ├── aes_utils.inc
│       │   │   └── block192_impl.inc
│       │   ├── constants.hpp
│       │   ├── crt_constants_128f.hpp
│       │   ├── crt_constants_128s.hpp
│       │   ├── crt_constants_192f_em.hpp
│       │   ├── crt_constants_192f.cpp
│       │   ├── crt_constants_192f.hpp
│       │   ├── crt_constants_192s_em.hpp
│       │   ├── crt_constants_192s.hpp
│       │   ├── crt_constants_256f.hpp
│       │   ├── crt_constants_256s.hpp
│       │   ├── crt_constants.hpp
│       │   ├── crt_vole_helpers.inc
│       │   ├── debug.hpp
│       │   ├── faest_keys.hpp
│       │   ├── faest_keys.inc
│       │   ├── faest_sig.hpp
│       │   ├── faest.cpp
│       │   ├── faest.hpp
│       │   ├── faest.inc
│       │   ├── generated_crt_constants.hpp
│       │   ├── gfsmall.hpp
│       │   ├── hash.hpp
│       │   ├── kos_vole_check.hpp
│       │   ├── Makefile
│       │   ├── NIST-KATs
│       │   │   ├── PQCgenKAT_sign.c
│       │   │   ├── rng.c
│       │   │   └── rng.h
│       │   ├── owf_proof_enc_v1.inc
│       │   ├── owf_proof_enc_v2.inc
│       │   ├── owf_proof_enc_v3.cpp
│       │   ├── owf_proof_enc_v3.inc
│       │   ├── owf_proof_key_sched.cpp
│       │   ├── owf_proof_key_sched.inc
│       │   ├── owf_proof_tools.hpp
│       │   ├── owf_proof_v3_deg3.cpp
│       │   ├── owf_proof_v3_em_deg3.cpp
│       │   ├── owf_proof_v3_em.cpp
│       │   ├── owf_proof_v3.cpp
│       │   ├── owf_proof.hpp
│       │   ├── owf_proof.inc
│       │   ├── parameters.hpp
│       │   ├── poly2d.hpp
│       │   ├── polynomials_constants.cpp
│       │   ├── polynomials_constants.hpp
│       │   ├── polynomials.hpp
│       │   ├── prgs.hpp
│       │   ├── print_parameters.cpp
│       │   ├── quicksilver.hpp
│       │   ├── randomness_os.c
│       │   ├── randomness_randombytes.c
│       │   ├── randomness.h
│       │   ├── sha3
│       │   │   ├── align.h
│       │   │   ├── brg_endian.h
│       │   │   ├── config.h
│       │   │   ├── KeccakDuplex.c
│       │   │   ├── KeccakDuplex.h
│       │   │   ├── KeccakDuplex.inc
│       │   │   ├── KeccakHash-times4.c
│       │   │   ├── KeccakHash-times4.h
│       │   │   ├── KeccakHash.c
│       │   │   ├── KeccakHash.h
│       │   │   ├── KeccakOD.c
│       │   │   ├── KeccakOD.h
│       │   │   ├── KeccakOD.inc
│       │   │   ├── KeccakP-1600-64.macros
│       │   │   ├── KeccakP-1600-AVX2.h
│       │   │   ├── KeccakP-1600-AVX2.s
│       │   │   ├── KeccakP-1600-SnP.h
│       │   │   ├── KeccakP-1600-times4-AVX2.c
│       │   │   ├── KeccakP-1600-times4-AVX2.h
│       │   │   ├── KeccakP-1600-times4-SnP.h
│       │   │   ├── KeccakP-1600-unrolling.macros
│       │   │   ├── KeccakSponge-times4.c
│       │   │   ├── KeccakSponge-times4.h
│       │   │   ├── KeccakSponge-times4.inc
│       │   │   ├── KeccakSponge.c
│       │   │   ├── KeccakSponge.h
│       │   │   ├── KeccakSponge.inc
│       │   │   ├── load-store.h
│       │   │   ├── PlSnP-common.h
│       │   │   ├── PlSnP-Fallback.inc
│       │   │   ├── SIMD-types.h
│       │   │   ├── SimpleFIPS202.c
│       │   │   ├── SimpleFIPS202.h
│       │   │   ├── SnP-common.h
│       │   │   ├── SnP-implementations.h
│       │   │   └── SnP-Relaned.h
│       │   ├── small_vole.cpp
│       │   ├── small_vole.hpp
│       │   ├── small_vole.inc
│       │   ├── tests
│       │   │   └── api_test.c
│       │   ├── transpose_secpar.hpp
│       │   ├── transpose.hpp
│       │   ├── universal_hash.hpp
│       │   ├── util.hpp
│       │   ├── vector_com.cpp
│       │   ├── vector_com.hpp
│       │   ├── vector_com.inc
│       │   ├── vole_check.hpp
│       │   ├── vole_commit.cpp
│       │   ├── vole_commit.hpp
│       │   ├── vole_commit.inc
│       │   └── vole_key_index_permutation.hpp
│       ├── faest_192s
│       │   ├── aes_defs.hpp
│       │   ├── aes.cpp
│       │   ├── aes.hpp
│       │   ├── all.inc
│       │   ├── api.cpp
│       │   ├── api.h
│       │   ├── api.hpp
│       │   ├── avx2
│       │   │   ├── aes_impl.cpp
│       │   │   ├── aes_impl.hpp
│       │   │   ├── block_impl.hpp
│       │   │   ├── constants_impl.hpp
│       │   │   ├── gfsmall_impl.hpp
│       │   │   ├── polynomials_impl.hpp
│       │   │   ├── transpose_impl.hpp
│       │   │   └── transpose_secpar_impl.hpp
│       │   ├── block.hpp
│       │   ├── common
│       │   │   ├── aes_impl.inc
│       │   │   ├── aes_utils.inc
│       │   │   └── block192_impl.inc
│       │   ├── constants.hpp
│       │   ├── crt_constants_128f.hpp
│       │   ├── crt_constants_128s.hpp
│       │   ├── crt_constants_192f_em.hpp
│       │   ├── crt_constants_192f.hpp
│       │   ├── crt_constants_192s_em.hpp
│       │   ├── crt_constants_192s.cpp
│       │   ├── crt_constants_192s.hpp
│       │   ├── crt_constants_256f.hpp
│       │   ├── crt_constants_256s.hpp
│       │   ├── crt_constants.hpp
│       │   ├── crt_vole_helpers.inc
│       │   ├── debug.hpp
│       │   ├── faest_keys.hpp
│       │   ├── faest_keys.inc
│       │   ├── faest_sig.hpp
│       │   ├── faest.cpp
│       │   ├── faest.hpp
│       │   ├── faest.inc
│       │   ├── generated_crt_constants.hpp
│       │   ├── gfsmall.hpp
│       │   ├── hash.hpp
│       │   ├── kos_vole_check.hpp
│       │   ├── Makefile
│       │   ├── NIST-KATs
│       │   │   ├── PQCgenKAT_sign.c
│       │   │   ├── rng.c
│       │   │   └── rng.h
│       │   ├── owf_proof_enc_v1.inc
│       │   ├── owf_proof_enc_v2.inc
│       │   ├── owf_proof_enc_v3.cpp
│       │   ├── owf_proof_enc_v3.inc
│       │   ├── owf_proof_key_sched.cpp
│       │   ├── owf_proof_key_sched.inc
│       │   ├── owf_proof_tools.hpp
│       │   ├── owf_proof_v3_deg3.cpp
│       │   ├── owf_proof_v3_em_deg3.cpp
│       │   ├── owf_proof_v3_em.cpp
│       │   ├── owf_proof_v3.cpp
│       │   ├── owf_proof.hpp
│       │   ├── owf_proof.inc
│       │   ├── parameters.hpp
│       │   ├── poly2d.hpp
│       │   ├── polynomials_constants.cpp
│       │   ├── polynomials_constants.hpp
│       │   ├── polynomials.hpp
│       │   ├── prgs.hpp
│       │   ├── print_parameters.cpp
│       │   ├── quicksilver.hpp
│       │   ├── randomness_os.c
│       │   ├── randomness_randombytes.c
│       │   ├── randomness.h
│       │   ├── sha3
│       │   │   ├── align.h
│       │   │   ├── brg_endian.h
│       │   │   ├── config.h
│       │   │   ├── KeccakDuplex.c
│       │   │   ├── KeccakDuplex.h
│       │   │   ├── KeccakDuplex.inc
│       │   │   ├── KeccakHash-times4.c
│       │   │   ├── KeccakHash-times4.h
│       │   │   ├── KeccakHash.c
│       │   │   ├── KeccakHash.h
│       │   │   ├── KeccakOD.c
│       │   │   ├── KeccakOD.h
│       │   │   ├── KeccakOD.inc
│       │   │   ├── KeccakP-1600-64.macros
│       │   │   ├── KeccakP-1600-AVX2.h
│       │   │   ├── KeccakP-1600-AVX2.s
│       │   │   ├── KeccakP-1600-SnP.h
│       │   │   ├── KeccakP-1600-times4-AVX2.c
│       │   │   ├── KeccakP-1600-times4-AVX2.h
│       │   │   ├── KeccakP-1600-times4-SnP.h
│       │   │   ├── KeccakP-1600-unrolling.macros
│       │   │   ├── KeccakSponge-times4.c
│       │   │   ├── KeccakSponge-times4.h
│       │   │   ├── KeccakSponge-times4.inc
│       │   │   ├── KeccakSponge.c
│       │   │   ├── KeccakSponge.h
│       │   │   ├── KeccakSponge.inc
│       │   │   ├── load-store.h
│       │   │   ├── PlSnP-common.h
│       │   │   ├── PlSnP-Fallback.inc
│       │   │   ├── SIMD-types.h
│       │   │   ├── SimpleFIPS202.c
│       │   │   ├── SimpleFIPS202.h
│       │   │   ├── SnP-common.h
│       │   │   ├── SnP-implementations.h
│       │   │   └── SnP-Relaned.h
│       │   ├── small_vole.cpp
│       │   ├── small_vole.hpp
│       │   ├── small_vole.inc
│       │   ├── tests
│       │   │   └── api_test.c
│       │   ├── transpose_secpar.hpp
│       │   ├── transpose.hpp
│       │   ├── universal_hash.hpp
│       │   ├── util.hpp
│       │   ├── vector_com.cpp
│       │   ├── vector_com.hpp
│       │   ├── vector_com.inc
│       │   ├── vole_check.hpp
│       │   ├── vole_commit.cpp
│       │   ├── vole_commit.hpp
│       │   ├── vole_commit.inc
│       │   └── vole_key_index_permutation.hpp
│       ├── faest_256f
│       │   ├── aes_defs.hpp
│       │   ├── aes.cpp
│       │   ├── aes.hpp
│       │   ├── all.inc
│       │   ├── api.cpp
│       │   ├── api.h
│       │   ├── api.hpp
│       │   ├── avx2
│       │   │   ├── aes_impl.cpp
│       │   │   ├── aes_impl.hpp
│       │   │   ├── block_impl.hpp
│       │   │   ├── constants_impl.hpp
│       │   │   ├── gfsmall_impl.hpp
│       │   │   ├── polynomials_impl.hpp
│       │   │   ├── transpose_impl.hpp
│       │   │   └── transpose_secpar_impl.hpp
│       │   ├── block.hpp
│       │   ├── common
│       │   │   ├── aes_impl.inc
│       │   │   ├── aes_utils.inc
│       │   │   └── block192_impl.inc
│       │   ├── constants.hpp
│       │   ├── crt_constants_128f.hpp
│       │   ├── crt_constants_128s.hpp
│       │   ├── crt_constants_192f_em.hpp
│       │   ├── crt_constants_192f.hpp
│       │   ├── crt_constants_192s_em.hpp
│       │   ├── crt_constants_192s.hpp
│       │   ├── crt_constants_256f.cpp
│       │   ├── crt_constants_256f.hpp
│       │   ├── crt_constants_256s.hpp
│       │   ├── crt_constants.hpp
│       │   ├── crt_vole_helpers.inc
│       │   ├── debug.hpp
│       │   ├── faest_keys.hpp
│       │   ├── faest_keys.inc
│       │   ├── faest_sig.hpp
│       │   ├── faest.cpp
│       │   ├── faest.hpp
│       │   ├── faest.inc
│       │   ├── generated_crt_constants.hpp
│       │   ├── gfsmall.hpp
│       │   ├── hash.hpp
│       │   ├── kos_vole_check.hpp
│       │   ├── Makefile
│       │   ├── NIST-KATs
│       │   │   ├── PQCgenKAT_sign.c
│       │   │   ├── rng.c
│       │   │   └── rng.h
│       │   ├── owf_proof_enc_v1.inc
│       │   ├── owf_proof_enc_v2.inc
│       │   ├── owf_proof_enc_v3.cpp
│       │   ├── owf_proof_enc_v3.inc
│       │   ├── owf_proof_key_sched.cpp
│       │   ├── owf_proof_key_sched.inc
│       │   ├── owf_proof_tools.hpp
│       │   ├── owf_proof_v3_deg3.cpp
│       │   ├── owf_proof_v3_em_deg3.cpp
│       │   ├── owf_proof_v3_em.cpp
│       │   ├── owf_proof_v3.cpp
│       │   ├── owf_proof.hpp
│       │   ├── owf_proof.inc
│       │   ├── parameters.hpp
│       │   ├── poly2d.hpp
│       │   ├── polynomials_constants.cpp
│       │   ├── polynomials_constants.hpp
│       │   ├── polynomials.hpp
│       │   ├── prgs.hpp
│       │   ├── print_parameters.cpp
│       │   ├── quicksilver.hpp
│       │   ├── randomness_os.c
│       │   ├── randomness_randombytes.c
│       │   ├── randomness.h
│       │   ├── sha3
│       │   │   ├── align.h
│       │   │   ├── brg_endian.h
│       │   │   ├── config.h
│       │   │   ├── KeccakDuplex.c
│       │   │   ├── KeccakDuplex.h
│       │   │   ├── KeccakDuplex.inc
│       │   │   ├── KeccakHash-times4.c
│       │   │   ├── KeccakHash-times4.h
│       │   │   ├── KeccakHash.c
│       │   │   ├── KeccakHash.h
│       │   │   ├── KeccakOD.c
│       │   │   ├── KeccakOD.h
│       │   │   ├── KeccakOD.inc
│       │   │   ├── KeccakP-1600-64.macros
│       │   │   ├── KeccakP-1600-AVX2.h
│       │   │   ├── KeccakP-1600-AVX2.s
│       │   │   ├── KeccakP-1600-SnP.h
│       │   │   ├── KeccakP-1600-times4-AVX2.c
│       │   │   ├── KeccakP-1600-times4-AVX2.h
│       │   │   ├── KeccakP-1600-times4-SnP.h
│       │   │   ├── KeccakP-1600-unrolling.macros
│       │   │   ├── KeccakSponge-times4.c
│       │   │   ├── KeccakSponge-times4.h
│       │   │   ├── KeccakSponge-times4.inc
│       │   │   ├── KeccakSponge.c
│       │   │   ├── KeccakSponge.h
│       │   │   ├── KeccakSponge.inc
│       │   │   ├── load-store.h
│       │   │   ├── PlSnP-common.h
│       │   │   ├── PlSnP-Fallback.inc
│       │   │   ├── SIMD-types.h
│       │   │   ├── SimpleFIPS202.c
│       │   │   ├── SimpleFIPS202.h
│       │   │   ├── SnP-common.h
│       │   │   ├── SnP-implementations.h
│       │   │   └── SnP-Relaned.h
│       │   ├── small_vole.cpp
│       │   ├── small_vole.hpp
│       │   ├── small_vole.inc
│       │   ├── tests
│       │   │   └── api_test.c
│       │   ├── transpose_secpar.hpp
│       │   ├── transpose.hpp
│       │   ├── universal_hash.hpp
│       │   ├── util.hpp
│       │   ├── vector_com.cpp
│       │   ├── vector_com.hpp
│       │   ├── vector_com.inc
│       │   ├── vole_check.hpp
│       │   ├── vole_commit.cpp
│       │   ├── vole_commit.hpp
│       │   ├── vole_commit.inc
│       │   └── vole_key_index_permutation.hpp
│       ├── faest_256s
│       │   ├── aes_defs.hpp
│       │   ├── aes.cpp
│       │   ├── aes.hpp
│       │   ├── all.inc
│       │   ├── api.cpp
│       │   ├── api.h
│       │   ├── api.hpp
│       │   ├── avx2
│       │   │   ├── aes_impl.cpp
│       │   │   ├── aes_impl.hpp
│       │   │   ├── block_impl.hpp
│       │   │   ├── constants_impl.hpp
│       │   │   ├── gfsmall_impl.hpp
│       │   │   ├── polynomials_impl.hpp
│       │   │   ├── transpose_impl.hpp
│       │   │   └── transpose_secpar_impl.hpp
│       │   ├── block.hpp
│       │   ├── common
│       │   │   ├── aes_impl.inc
│       │   │   ├── aes_utils.inc
│       │   │   └── block192_impl.inc
│       │   ├── constants.hpp
│       │   ├── crt_constants_128f.hpp
│       │   ├── crt_constants_128s.hpp
│       │   ├── crt_constants_192f_em.hpp
│       │   ├── crt_constants_192f.hpp
│       │   ├── crt_constants_192s_em.hpp
│       │   ├── crt_constants_192s.hpp
│       │   ├── crt_constants_256f.hpp
│       │   ├── crt_constants_256s.cpp
│       │   ├── crt_constants_256s.hpp
│       │   ├── crt_constants.hpp
│       │   ├── crt_vole_helpers.inc
│       │   ├── debug.hpp
│       │   ├── faest_keys.hpp
│       │   ├── faest_keys.inc
│       │   ├── faest_sig.hpp
│       │   ├── faest.cpp
│       │   ├── faest.hpp
│       │   ├── faest.inc
│       │   ├── generated_crt_constants.hpp
│       │   ├── gfsmall.hpp
│       │   ├── hash.hpp
│       │   ├── kos_vole_check.hpp
│       │   ├── Makefile
│       │   ├── NIST-KATs
│       │   │   ├── PQCgenKAT_sign.c
│       │   │   ├── rng.c
│       │   │   └── rng.h
│       │   ├── owf_proof_enc_v1.inc
│       │   ├── owf_proof_enc_v2.inc
│       │   ├── owf_proof_enc_v3.cpp
│       │   ├── owf_proof_enc_v3.inc
│       │   ├── owf_proof_key_sched.cpp
│       │   ├── owf_proof_key_sched.inc
│       │   ├── owf_proof_tools.hpp
│       │   ├── owf_proof_v3_deg3.cpp
│       │   ├── owf_proof_v3_em_deg3.cpp
│       │   ├── owf_proof_v3_em.cpp
│       │   ├── owf_proof_v3.cpp
│       │   ├── owf_proof.hpp
│       │   ├── owf_proof.inc
│       │   ├── parameters.hpp
│       │   ├── poly2d.hpp
│       │   ├── polynomials_constants.cpp
│       │   ├── polynomials_constants.hpp
│       │   ├── polynomials.hpp
│       │   ├── prgs.hpp
│       │   ├── print_parameters.cpp
│       │   ├── quicksilver.hpp
│       │   ├── randomness_os.c
│       │   ├── randomness_randombytes.c
│       │   ├── randomness.h
│       │   ├── sha3
│       │   │   ├── align.h
│       │   │   ├── brg_endian.h
│       │   │   ├── config.h
│       │   │   ├── KeccakDuplex.c
│       │   │   ├── KeccakDuplex.h
│       │   │   ├── KeccakDuplex.inc
│       │   │   ├── KeccakHash-times4.c
│       │   │   ├── KeccakHash-times4.h
│       │   │   ├── KeccakHash.c
│       │   │   ├── KeccakHash.h
│       │   │   ├── KeccakOD.c
│       │   │   ├── KeccakOD.h
│       │   │   ├── KeccakOD.inc
│       │   │   ├── KeccakP-1600-64.macros
│       │   │   ├── KeccakP-1600-AVX2.h
│       │   │   ├── KeccakP-1600-AVX2.s
│       │   │   ├── KeccakP-1600-SnP.h
│       │   │   ├── KeccakP-1600-times4-AVX2.c
│       │   │   ├── KeccakP-1600-times4-AVX2.h
│       │   │   ├── KeccakP-1600-times4-SnP.h
│       │   │   ├── KeccakP-1600-unrolling.macros
│       │   │   ├── KeccakSponge-times4.c
│       │   │   ├── KeccakSponge-times4.h
│       │   │   ├── KeccakSponge-times4.inc
│       │   │   ├── KeccakSponge.c
│       │   │   ├── KeccakSponge.h
│       │   │   ├── KeccakSponge.inc
│       │   │   ├── load-store.h
│       │   │   ├── PlSnP-common.h
│       │   │   ├── PlSnP-Fallback.inc
│       │   │   ├── SIMD-types.h
│       │   │   ├── SimpleFIPS202.c
│       │   │   ├── SimpleFIPS202.h
│       │   │   ├── SnP-common.h
│       │   │   ├── SnP-implementations.h
│       │   │   └── SnP-Relaned.h
│       │   ├── small_vole.cpp
│       │   ├── small_vole.hpp
│       │   ├── small_vole.inc
│       │   ├── tests
│       │   │   └── api_test.c
│       │   ├── transpose_secpar.hpp
│       │   ├── transpose.hpp
│       │   ├── universal_hash.hpp
│       │   ├── util.hpp
│       │   ├── vector_com.cpp
│       │   ├── vector_com.hpp
│       │   ├── vector_com.inc
│       │   ├── vole_check.hpp
│       │   ├── vole_commit.cpp
│       │   ├── vole_commit.hpp
│       │   ├── vole_commit.inc
│       │   └── vole_key_index_permutation.hpp
│       ├── faest_em_128f
│       │   ├── aes_defs.hpp
│       │   ├── aes.cpp
│       │   ├── aes.hpp
│       │   ├── all.inc
│       │   ├── api.cpp
│       │   ├── api.h
│       │   ├── api.hpp
│       │   ├── avx2
│       │   │   ├── aes_impl.cpp
│       │   │   ├── aes_impl.hpp
│       │   │   ├── block_impl.hpp
│       │   │   ├── constants_impl.hpp
│       │   │   ├── gfsmall_impl.hpp
│       │   │   ├── polynomials_impl.hpp
│       │   │   ├── transpose_impl.hpp
│       │   │   └── transpose_secpar_impl.hpp
│       │   ├── block.hpp
│       │   ├── common
│       │   │   ├── aes_impl.inc
│       │   │   ├── aes_utils.inc
│       │   │   └── block192_impl.inc
│       │   ├── constants.hpp
│       │   ├── crt_constants_128f.cpp
│       │   ├── crt_constants_128f.hpp
│       │   ├── crt_constants_128s.hpp
│       │   ├── crt_constants_192f_em.hpp
│       │   ├── crt_constants_192f.hpp
│       │   ├── crt_constants_192s_em.hpp
│       │   ├── crt_constants_192s.hpp
│       │   ├── crt_constants_256f.hpp
│       │   ├── crt_constants_256s.hpp
│       │   ├── crt_constants.hpp
│       │   ├── crt_vole_helpers.inc
│       │   ├── debug.hpp
│       │   ├── faest_keys.hpp
│       │   ├── faest_keys.inc
│       │   ├── faest_sig.hpp
│       │   ├── faest.cpp
│       │   ├── faest.hpp
│       │   ├── faest.inc
│       │   ├── generated_crt_constants.hpp
│       │   ├── gfsmall.hpp
│       │   ├── hash.hpp
│       │   ├── kos_vole_check.hpp
│       │   ├── Makefile
│       │   ├── NIST-KATs
│       │   │   ├── PQCgenKAT_sign.c
│       │   │   ├── rng.c
│       │   │   └── rng.h
│       │   ├── owf_proof_enc_v1.inc
│       │   ├── owf_proof_enc_v2.inc
│       │   ├── owf_proof_enc_v3.cpp
│       │   ├── owf_proof_enc_v3.inc
│       │   ├── owf_proof_key_sched.cpp
│       │   ├── owf_proof_key_sched.inc
│       │   ├── owf_proof_tools.hpp
│       │   ├── owf_proof_v3_deg3.cpp
│       │   ├── owf_proof_v3_em_deg3.cpp
│       │   ├── owf_proof_v3_em.cpp
│       │   ├── owf_proof_v3.cpp
│       │   ├── owf_proof.hpp
│       │   ├── owf_proof.inc
│       │   ├── parameters.hpp
│       │   ├── poly2d.hpp
│       │   ├── polynomials_constants.cpp
│       │   ├── polynomials_constants.hpp
│       │   ├── polynomials.hpp
│       │   ├── prgs.hpp
│       │   ├── print_parameters.cpp
│       │   ├── quicksilver.hpp
│       │   ├── randomness_os.c
│       │   ├── randomness_randombytes.c
│       │   ├── randomness.h
│       │   ├── sha3
│       │   │   ├── align.h
│       │   │   ├── brg_endian.h
│       │   │   ├── config.h
│       │   │   ├── KeccakDuplex.c
│       │   │   ├── KeccakDuplex.h
│       │   │   ├── KeccakDuplex.inc
│       │   │   ├── KeccakHash-times4.c
│       │   │   ├── KeccakHash-times4.h
│       │   │   ├── KeccakHash.c
│       │   │   ├── KeccakHash.h
│       │   │   ├── KeccakOD.c
│       │   │   ├── KeccakOD.h
│       │   │   ├── KeccakOD.inc
│       │   │   ├── KeccakP-1600-64.macros
│       │   │   ├── KeccakP-1600-AVX2.h
│       │   │   ├── KeccakP-1600-AVX2.s
│       │   │   ├── KeccakP-1600-SnP.h
│       │   │   ├── KeccakP-1600-times4-AVX2.c
│       │   │   ├── KeccakP-1600-times4-AVX2.h
│       │   │   ├── KeccakP-1600-times4-SnP.h
│       │   │   ├── KeccakP-1600-unrolling.macros
│       │   │   ├── KeccakSponge-times4.c
│       │   │   ├── KeccakSponge-times4.h
│       │   │   ├── KeccakSponge-times4.inc
│       │   │   ├── KeccakSponge.c
│       │   │   ├── KeccakSponge.h
│       │   │   ├── KeccakSponge.inc
│       │   │   ├── load-store.h
│       │   │   ├── PlSnP-common.h
│       │   │   ├── PlSnP-Fallback.inc
│       │   │   ├── SIMD-types.h
│       │   │   ├── SimpleFIPS202.c
│       │   │   ├── SimpleFIPS202.h
│       │   │   ├── SnP-common.h
│       │   │   ├── SnP-implementations.h
│       │   │   └── SnP-Relaned.h
│       │   ├── small_vole.cpp
│       │   ├── small_vole.hpp
│       │   ├── small_vole.inc
│       │   ├── tests
│       │   │   └── api_test.c
│       │   ├── transpose_secpar.hpp
│       │   ├── transpose.hpp
│       │   ├── universal_hash.hpp
│       │   ├── util.hpp
│       │   ├── vector_com.cpp
│       │   ├── vector_com.hpp
│       │   ├── vector_com.inc
│       │   ├── vole_check.hpp
│       │   ├── vole_commit.cpp
│       │   ├── vole_commit.hpp
│       │   ├── vole_commit.inc
│       │   └── vole_key_index_permutation.hpp
│       ├── faest_em_128s
│       │   ├── aes_defs.hpp
│       │   ├── aes.cpp
│       │   ├── aes.hpp
│       │   ├── all.inc
│       │   ├── api.cpp
│       │   ├── api.h
│       │   ├── api.hpp
│       │   ├── avx2
│       │   │   ├── aes_impl.cpp
│       │   │   ├── aes_impl.hpp
│       │   │   ├── block_impl.hpp
│       │   │   ├── constants_impl.hpp
│       │   │   ├── gfsmall_impl.hpp
│       │   │   ├── polynomials_impl.hpp
│       │   │   ├── transpose_impl.hpp
│       │   │   └── transpose_secpar_impl.hpp
│       │   ├── block.hpp
│       │   ├── common
│       │   │   ├── aes_impl.inc
│       │   │   ├── aes_utils.inc
│       │   │   └── block192_impl.inc
│       │   ├── constants.hpp
│       │   ├── crt_constants_128f.hpp
│       │   ├── crt_constants_128s.cpp
│       │   ├── crt_constants_128s.hpp
│       │   ├── crt_constants_192f_em.hpp
│       │   ├── crt_constants_192f.hpp
│       │   ├── crt_constants_192s_em.hpp
│       │   ├── crt_constants_192s.hpp
│       │   ├── crt_constants_256f.hpp
│       │   ├── crt_constants_256s.hpp
│       │   ├── crt_constants.hpp
│       │   ├── crt_vole_helpers.inc
│       │   ├── debug.hpp
│       │   ├── faest_keys.hpp
│       │   ├── faest_keys.inc
│       │   ├── faest_sig.hpp
│       │   ├── faest.cpp
│       │   ├── faest.hpp
│       │   ├── faest.inc
│       │   ├── generated_crt_constants.hpp
│       │   ├── gfsmall.hpp
│       │   ├── hash.hpp
│       │   ├── kos_vole_check.hpp
│       │   ├── Makefile
│       │   ├── NIST-KATs
│       │   │   ├── PQCgenKAT_sign.c
│       │   │   ├── rng.c
│       │   │   └── rng.h
│       │   ├── owf_proof_enc_v1.inc
│       │   ├── owf_proof_enc_v2.inc
│       │   ├── owf_proof_enc_v3.cpp
│       │   ├── owf_proof_enc_v3.inc
│       │   ├── owf_proof_key_sched.cpp
│       │   ├── owf_proof_key_sched.inc
│       │   ├── owf_proof_tools.hpp
│       │   ├── owf_proof_v3_deg3.cpp
│       │   ├── owf_proof_v3_em_deg3.cpp
│       │   ├── owf_proof_v3_em.cpp
│       │   ├── owf_proof_v3.cpp
│       │   ├── owf_proof.hpp
│       │   ├── owf_proof.inc
│       │   ├── parameters.hpp
│       │   ├── poly2d.hpp
│       │   ├── polynomials_constants.cpp
│       │   ├── polynomials_constants.hpp
│       │   ├── polynomials.hpp
│       │   ├── prgs.hpp
│       │   ├── print_parameters.cpp
│       │   ├── quicksilver.hpp
│       │   ├── randomness_os.c
│       │   ├── randomness_randombytes.c
│       │   ├── randomness.h
│       │   ├── sha3
│       │   │   ├── align.h
│       │   │   ├── brg_endian.h
│       │   │   ├── config.h
│       │   │   ├── KeccakDuplex.c
│       │   │   ├── KeccakDuplex.h
│       │   │   ├── KeccakDuplex.inc
│       │   │   ├── KeccakHash-times4.c
│       │   │   ├── KeccakHash-times4.h
│       │   │   ├── KeccakHash.c
│       │   │   ├── KeccakHash.h
│       │   │   ├── KeccakOD.c
│       │   │   ├── KeccakOD.h
│       │   │   ├── KeccakOD.inc
│       │   │   ├── KeccakP-1600-64.macros
│       │   │   ├── KeccakP-1600-AVX2.h
│       │   │   ├── KeccakP-1600-AVX2.s
│       │   │   ├── KeccakP-1600-SnP.h
│       │   │   ├── KeccakP-1600-times4-AVX2.c
│       │   │   ├── KeccakP-1600-times4-AVX2.h
│       │   │   ├── KeccakP-1600-times4-SnP.h
│       │   │   ├── KeccakP-1600-unrolling.macros
│       │   │   ├── KeccakSponge-times4.c
│       │   │   ├── KeccakSponge-times4.h
│       │   │   ├── KeccakSponge-times4.inc
│       │   │   ├── KeccakSponge.c
│       │   │   ├── KeccakSponge.h
│       │   │   ├── KeccakSponge.inc
│       │   │   ├── load-store.h
│       │   │   ├── PlSnP-common.h
│       │   │   ├── PlSnP-Fallback.inc
│       │   │   ├── SIMD-types.h
│       │   │   ├── SimpleFIPS202.c
│       │   │   ├── SimpleFIPS202.h
│       │   │   ├── SnP-common.h
│       │   │   ├── SnP-implementations.h
│       │   │   └── SnP-Relaned.h
│       │   ├── small_vole.cpp
│       │   ├── small_vole.hpp
│       │   ├── small_vole.inc
│       │   ├── tests
│       │   │   └── api_test.c
│       │   ├── transpose_secpar.hpp
│       │   ├── transpose.hpp
│       │   ├── universal_hash.hpp
│       │   ├── util.hpp
│       │   ├── vector_com.cpp
│       │   ├── vector_com.hpp
│       │   ├── vector_com.inc
│       │   ├── vole_check.hpp
│       │   ├── vole_commit.cpp
│       │   ├── vole_commit.hpp
│       │   ├── vole_commit.inc
│       │   └── vole_key_index_permutation.hpp
│       ├── faest_em_192f
│       │   ├── aes_defs.hpp
│       │   ├── aes.cpp
│       │   ├── aes.hpp
│       │   ├── all.inc
│       │   ├── api.cpp
│       │   ├── api.h
│       │   ├── api.hpp
│       │   ├── avx2
│       │   │   ├── aes_impl.cpp
│       │   │   ├── aes_impl.hpp
│       │   │   ├── block_impl.hpp
│       │   │   ├── constants_impl.hpp
│       │   │   ├── gfsmall_impl.hpp
│       │   │   ├── polynomials_impl.hpp
│       │   │   ├── transpose_impl.hpp
│       │   │   └── transpose_secpar_impl.hpp
│       │   ├── block.hpp
│       │   ├── common
│       │   │   ├── aes_impl.inc
│       │   │   ├── aes_utils.inc
│       │   │   └── block192_impl.inc
│       │   ├── constants.hpp
│       │   ├── crt_constants_128f.hpp
│       │   ├── crt_constants_128s.hpp
│       │   ├── crt_constants_192f_em.cpp
│       │   ├── crt_constants_192f_em.hpp
│       │   ├── crt_constants_192f.hpp
│       │   ├── crt_constants_192s_em.hpp
│       │   ├── crt_constants_192s.hpp
│       │   ├── crt_constants_256f.hpp
│       │   ├── crt_constants_256s.hpp
│       │   ├── crt_constants.hpp
│       │   ├── crt_vole_helpers.inc
│       │   ├── debug.hpp
│       │   ├── faest_keys.hpp
│       │   ├── faest_keys.inc
│       │   ├── faest_sig.hpp
│       │   ├── faest.cpp
│       │   ├── faest.hpp
│       │   ├── faest.inc
│       │   ├── generated_crt_constants.hpp
│       │   ├── gfsmall.hpp
│       │   ├── hash.hpp
│       │   ├── kos_vole_check.hpp
│       │   ├── Makefile
│       │   ├── NIST-KATs
│       │   │   ├── PQCgenKAT_sign.c
│       │   │   ├── rng.c
│       │   │   └── rng.h
│       │   ├── owf_proof_enc_v1.inc
│       │   ├── owf_proof_enc_v2.inc
│       │   ├── owf_proof_enc_v3.cpp
│       │   ├── owf_proof_enc_v3.inc
│       │   ├── owf_proof_key_sched.cpp
│       │   ├── owf_proof_key_sched.inc
│       │   ├── owf_proof_tools.hpp
│       │   ├── owf_proof_v3_deg3.cpp
│       │   ├── owf_proof_v3_em_deg3.cpp
│       │   ├── owf_proof_v3_em.cpp
│       │   ├── owf_proof_v3.cpp
│       │   ├── owf_proof.hpp
│       │   ├── owf_proof.inc
│       │   ├── parameters.hpp
│       │   ├── poly2d.hpp
│       │   ├── polynomials_constants.cpp
│       │   ├── polynomials_constants.hpp
│       │   ├── polynomials.hpp
│       │   ├── prgs.hpp
│       │   ├── print_parameters.cpp
│       │   ├── quicksilver.hpp
│       │   ├── randomness_os.c
│       │   ├── randomness_randombytes.c
│       │   ├── randomness.h
│       │   ├── sha3
│       │   │   ├── align.h
│       │   │   ├── brg_endian.h
│       │   │   ├── config.h
│       │   │   ├── KeccakDuplex.c
│       │   │   ├── KeccakDuplex.h
│       │   │   ├── KeccakDuplex.inc
│       │   │   ├── KeccakHash-times4.c
│       │   │   ├── KeccakHash-times4.h
│       │   │   ├── KeccakHash.c
│       │   │   ├── KeccakHash.h
│       │   │   ├── KeccakOD.c
│       │   │   ├── KeccakOD.h
│       │   │   ├── KeccakOD.inc
│       │   │   ├── KeccakP-1600-64.macros
│       │   │   ├── KeccakP-1600-AVX2.h
│       │   │   ├── KeccakP-1600-AVX2.s
│       │   │   ├── KeccakP-1600-SnP.h
│       │   │   ├── KeccakP-1600-times4-AVX2.c
│       │   │   ├── KeccakP-1600-times4-AVX2.h
│       │   │   ├── KeccakP-1600-times4-SnP.h
│       │   │   ├── KeccakP-1600-unrolling.macros
│       │   │   ├── KeccakSponge-times4.c
│       │   │   ├── KeccakSponge-times4.h
│       │   │   ├── KeccakSponge-times4.inc
│       │   │   ├── KeccakSponge.c
│       │   │   ├── KeccakSponge.h
│       │   │   ├── KeccakSponge.inc
│       │   │   ├── load-store.h
│       │   │   ├── PlSnP-common.h
│       │   │   ├── PlSnP-Fallback.inc
│       │   │   ├── SIMD-types.h
│       │   │   ├── SimpleFIPS202.c
│       │   │   ├── SimpleFIPS202.h
│       │   │   ├── SnP-common.h
│       │   │   ├── SnP-implementations.h
│       │   │   └── SnP-Relaned.h
│       │   ├── small_vole.cpp
│       │   ├── small_vole.hpp
│       │   ├── small_vole.inc
│       │   ├── tests
│       │   │   └── api_test.c
│       │   ├── transpose_secpar.hpp
│       │   ├── transpose.hpp
│       │   ├── universal_hash.hpp
│       │   ├── util.hpp
│       │   ├── vector_com.cpp
│       │   ├── vector_com.hpp
│       │   ├── vector_com.inc
│       │   ├── vole_check.hpp
│       │   ├── vole_commit.cpp
│       │   ├── vole_commit.hpp
│       │   ├── vole_commit.inc
│       │   └── vole_key_index_permutation.hpp
│       ├── faest_em_192s
│       │   ├── aes_defs.hpp
│       │   ├── aes.cpp
│       │   ├── aes.hpp
│       │   ├── all.inc
│       │   ├── api.cpp
│       │   ├── api.h
│       │   ├── api.hpp
│       │   ├── avx2
│       │   │   ├── aes_impl.cpp
│       │   │   ├── aes_impl.hpp
│       │   │   ├── block_impl.hpp
│       │   │   ├── constants_impl.hpp
│       │   │   ├── gfsmall_impl.hpp
│       │   │   ├── polynomials_impl.hpp
│       │   │   ├── transpose_impl.hpp
│       │   │   └── transpose_secpar_impl.hpp
│       │   ├── block.hpp
│       │   ├── common
│       │   │   ├── aes_impl.inc
│       │   │   ├── aes_utils.inc
│       │   │   └── block192_impl.inc
│       │   ├── constants.hpp
│       │   ├── crt_constants_128f.hpp
│       │   ├── crt_constants_128s.hpp
│       │   ├── crt_constants_192f_em.hpp
│       │   ├── crt_constants_192f.hpp
│       │   ├── crt_constants_192s_em.cpp
│       │   ├── crt_constants_192s_em.hpp
│       │   ├── crt_constants_192s.hpp
│       │   ├── crt_constants_256f.hpp
│       │   ├── crt_constants_256s.hpp
│       │   ├── crt_constants.hpp
│       │   ├── crt_vole_helpers.inc
│       │   ├── debug.hpp
│       │   ├── faest_keys.hpp
│       │   ├── faest_keys.inc
│       │   ├── faest_sig.hpp
│       │   ├── faest.cpp
│       │   ├── faest.hpp
│       │   ├── faest.inc
│       │   ├── generated_crt_constants.hpp
│       │   ├── gfsmall.hpp
│       │   ├── hash.hpp
│       │   ├── kos_vole_check.hpp
│       │   ├── Makefile
│       │   ├── NIST-KATs
│       │   │   ├── PQCgenKAT_sign.c
│       │   │   ├── rng.c
│       │   │   └── rng.h
│       │   ├── owf_proof_enc_v1.inc
│       │   ├── owf_proof_enc_v2.inc
│       │   ├── owf_proof_enc_v3.cpp
│       │   ├── owf_proof_enc_v3.inc
│       │   ├── owf_proof_key_sched.cpp
│       │   ├── owf_proof_key_sched.inc
│       │   ├── owf_proof_tools.hpp
│       │   ├── owf_proof_v3_deg3.cpp
│       │   ├── owf_proof_v3_em_deg3.cpp
│       │   ├── owf_proof_v3_em.cpp
│       │   ├── owf_proof_v3.cpp
│       │   ├── owf_proof.hpp
│       │   ├── owf_proof.inc
│       │   ├── parameters.hpp
│       │   ├── poly2d.hpp
│       │   ├── polynomials_constants.cpp
│       │   ├── polynomials_constants.hpp
│       │   ├── polynomials.hpp
│       │   ├── prgs.hpp
│       │   ├── print_parameters.cpp
│       │   ├── quicksilver.hpp
│       │   ├── randomness_os.c
│       │   ├── randomness_randombytes.c
│       │   ├── randomness.h
│       │   ├── sha3
│       │   │   ├── align.h
│       │   │   ├── brg_endian.h
│       │   │   ├── config.h
│       │   │   ├── KeccakDuplex.c
│       │   │   ├── KeccakDuplex.h
│       │   │   ├── KeccakDuplex.inc
│       │   │   ├── KeccakHash-times4.c
│       │   │   ├── KeccakHash-times4.h
│       │   │   ├── KeccakHash.c
│       │   │   ├── KeccakHash.h
│       │   │   ├── KeccakOD.c
│       │   │   ├── KeccakOD.h
│       │   │   ├── KeccakOD.inc
│       │   │   ├── KeccakP-1600-64.macros
│       │   │   ├── KeccakP-1600-AVX2.h
│       │   │   ├── KeccakP-1600-AVX2.s
│       │   │   ├── KeccakP-1600-SnP.h
│       │   │   ├── KeccakP-1600-times4-AVX2.c
│       │   │   ├── KeccakP-1600-times4-AVX2.h
│       │   │   ├── KeccakP-1600-times4-SnP.h
│       │   │   ├── KeccakP-1600-unrolling.macros
│       │   │   ├── KeccakSponge-times4.c
│       │   │   ├── KeccakSponge-times4.h
│       │   │   ├── KeccakSponge-times4.inc
│       │   │   ├── KeccakSponge.c
│       │   │   ├── KeccakSponge.h
│       │   │   ├── KeccakSponge.inc
│       │   │   ├── load-store.h
│       │   │   ├── PlSnP-common.h
│       │   │   ├── PlSnP-Fallback.inc
│       │   │   ├── SIMD-types.h
│       │   │   ├── SimpleFIPS202.c
│       │   │   ├── SimpleFIPS202.h
│       │   │   ├── SnP-common.h
│       │   │   ├── SnP-implementations.h
│       │   │   └── SnP-Relaned.h
│       │   ├── small_vole.cpp
│       │   ├── small_vole.hpp
│       │   ├── small_vole.inc
│       │   ├── tests
│       │   │   └── api_test.c
│       │   ├── transpose_secpar.hpp
│       │   ├── transpose.hpp
│       │   ├── universal_hash.hpp
│       │   ├── util.hpp
│       │   ├── vector_com.cpp
│       │   ├── vector_com.hpp
│       │   ├── vector_com.inc
│       │   ├── vole_check.hpp
│       │   ├── vole_commit.cpp
│       │   ├── vole_commit.hpp
│       │   ├── vole_commit.inc
│       │   └── vole_key_index_permutation.hpp
│       ├── faest_em_256f
│       │   ├── aes_defs.hpp
│       │   ├── aes.cpp
│       │   ├── aes.hpp
│       │   ├── all.inc
│       │   ├── api.cpp
│       │   ├── api.h
│       │   ├── api.hpp
│       │   ├── avx2
│       │   │   ├── aes_impl.cpp
│       │   │   ├── aes_impl.hpp
│       │   │   ├── block_impl.hpp
│       │   │   ├── constants_impl.hpp
│       │   │   ├── gfsmall_impl.hpp
│       │   │   ├── polynomials_impl.hpp
│       │   │   ├── transpose_impl.hpp
│       │   │   └── transpose_secpar_impl.hpp
│       │   ├── block.hpp
│       │   ├── common
│       │   │   ├── aes_impl.inc
│       │   │   ├── aes_utils.inc
│       │   │   └── block192_impl.inc
│       │   ├── constants.hpp
│       │   ├── crt_constants_128f.hpp
│       │   ├── crt_constants_128s.hpp
│       │   ├── crt_constants_192f_em.hpp
│       │   ├── crt_constants_192f.hpp
│       │   ├── crt_constants_192s_em.hpp
│       │   ├── crt_constants_192s.hpp
│       │   ├── crt_constants_256f.cpp
│       │   ├── crt_constants_256f.hpp
│       │   ├── crt_constants_256s.hpp
│       │   ├── crt_constants.hpp
│       │   ├── crt_vole_helpers.inc
│       │   ├── debug.hpp
│       │   ├── faest_keys.hpp
│       │   ├── faest_keys.inc
│       │   ├── faest_sig.hpp
│       │   ├── faest.cpp
│       │   ├── faest.hpp
│       │   ├── faest.inc
│       │   ├── generated_crt_constants.hpp
│       │   ├── gfsmall.hpp
│       │   ├── hash.hpp
│       │   ├── kos_vole_check.hpp
│       │   ├── Makefile
│       │   ├── NIST-KATs
│       │   │   ├── PQCgenKAT_sign.c
│       │   │   ├── rng.c
│       │   │   └── rng.h
│       │   ├── owf_proof_enc_v1.inc
│       │   ├── owf_proof_enc_v2.inc
│       │   ├── owf_proof_enc_v3.cpp
│       │   ├── owf_proof_enc_v3.inc
│       │   ├── owf_proof_key_sched.cpp
│       │   ├── owf_proof_key_sched.inc
│       │   ├── owf_proof_tools.hpp
│       │   ├── owf_proof_v3_deg3.cpp
│       │   ├── owf_proof_v3_em_deg3.cpp
│       │   ├── owf_proof_v3_em.cpp
│       │   ├── owf_proof_v3.cpp
│       │   ├── owf_proof.hpp
│       │   ├── owf_proof.inc
│       │   ├── parameters.hpp
│       │   ├── poly2d.hpp
│       │   ├── polynomials_constants.cpp
│       │   ├── polynomials_constants.hpp
│       │   ├── polynomials.hpp
│       │   ├── prgs.hpp
│       │   ├── print_parameters.cpp
│       │   ├── quicksilver.hpp
│       │   ├── randomness_os.c
│       │   ├── randomness_randombytes.c
│       │   ├── randomness.h
│       │   ├── sha3
│       │   │   ├── align.h
│       │   │   ├── brg_endian.h
│       │   │   ├── config.h
│       │   │   ├── KeccakDuplex.c
│       │   │   ├── KeccakDuplex.h
│       │   │   ├── KeccakDuplex.inc
│       │   │   ├── KeccakHash-times4.c
│       │   │   ├── KeccakHash-times4.h
│       │   │   ├── KeccakHash.c
│       │   │   ├── KeccakHash.h
│       │   │   ├── KeccakOD.c
│       │   │   ├── KeccakOD.h
│       │   │   ├── KeccakOD.inc
│       │   │   ├── KeccakP-1600-64.macros
│       │   │   ├── KeccakP-1600-AVX2.h
│       │   │   ├── KeccakP-1600-AVX2.s
│       │   │   ├── KeccakP-1600-SnP.h
│       │   │   ├── KeccakP-1600-times4-AVX2.c
│       │   │   ├── KeccakP-1600-times4-AVX2.h
│       │   │   ├── KeccakP-1600-times4-SnP.h
│       │   │   ├── KeccakP-1600-unrolling.macros
│       │   │   ├── KeccakSponge-times4.c
│       │   │   ├── KeccakSponge-times4.h
│       │   │   ├── KeccakSponge-times4.inc
│       │   │   ├── KeccakSponge.c
│       │   │   ├── KeccakSponge.h
│       │   │   ├── KeccakSponge.inc
│       │   │   ├── load-store.h
│       │   │   ├── PlSnP-common.h
│       │   │   ├── PlSnP-Fallback.inc
│       │   │   ├── SIMD-types.h
│       │   │   ├── SimpleFIPS202.c
│       │   │   ├── SimpleFIPS202.h
│       │   │   ├── SnP-common.h
│       │   │   ├── SnP-implementations.h
│       │   │   └── SnP-Relaned.h
│       │   ├── small_vole.cpp
│       │   ├── small_vole.hpp
│       │   ├── small_vole.inc
│       │   ├── tests
│       │   │   └── api_test.c
│       │   ├── transpose_secpar.hpp
│       │   ├── transpose.hpp
│       │   ├── universal_hash.hpp
│       │   ├── util.hpp
│       │   ├── vector_com.cpp
│       │   ├── vector_com.hpp
│       │   ├── vector_com.inc
│       │   ├── vole_check.hpp
│       │   ├── vole_commit.cpp
│       │   ├── vole_commit.hpp
│       │   ├── vole_commit.inc
│       │   └── vole_key_index_permutation.hpp
│       └── faest_em_256s
│           ├── aes_defs.hpp
│           ├── aes.cpp
│           ├── aes.hpp
│           ├── all.inc
│           ├── api.cpp
│           ├── api.h
│           ├── api.hpp
│           ├── avx2
│           │   ├── aes_impl.cpp
│           │   ├── aes_impl.hpp
│           │   ├── block_impl.hpp
│           │   ├── constants_impl.hpp
│           │   ├── gfsmall_impl.hpp
│           │   ├── polynomials_impl.hpp
│           │   ├── transpose_impl.hpp
│           │   └── transpose_secpar_impl.hpp
│           ├── block.hpp
│           ├── common
│           │   ├── aes_impl.inc
│           │   ├── aes_utils.inc
│           │   └── block192_impl.inc
│           ├── constants.hpp
│           ├── crt_constants_128f.hpp
│           ├── crt_constants_128s.hpp
│           ├── crt_constants_192f_em.hpp
│           ├── crt_constants_192f.hpp
│           ├── crt_constants_192s_em.hpp
│           ├── crt_constants_192s.hpp
│           ├── crt_constants_256f.hpp
│           ├── crt_constants_256s.cpp
│           ├── crt_constants_256s.hpp
│           ├── crt_constants.hpp
│           ├── crt_vole_helpers.inc
│           ├── debug.hpp
│           ├── faest_keys.hpp
│           ├── faest_keys.inc
│           ├── faest_sig.hpp
│           ├── faest.cpp
│           ├── faest.hpp
│           ├── faest.inc
│           ├── generated_crt_constants.hpp
│           ├── gfsmall.hpp
│           ├── hash.hpp
│           ├── kos_vole_check.hpp
│           ├── Makefile
│           ├── NIST-KATs
│           │   ├── PQCgenKAT_sign.c
│           │   ├── rng.c
│           │   └── rng.h
│           ├── owf_proof_enc_v1.inc
│           ├── owf_proof_enc_v2.inc
│           ├── owf_proof_enc_v3.cpp
│           ├── owf_proof_enc_v3.inc
│           ├── owf_proof_key_sched.cpp
│           ├── owf_proof_key_sched.inc
│           ├── owf_proof_tools.hpp
│           ├── owf_proof_v3_deg3.cpp
│           ├── owf_proof_v3_em_deg3.cpp
│           ├── owf_proof_v3_em.cpp
│           ├── owf_proof_v3.cpp
│           ├── owf_proof.hpp
│           ├── owf_proof.inc
│           ├── parameters.hpp
│           ├── poly2d.hpp
│           ├── polynomials_constants.cpp
│           ├── polynomials_constants.hpp
│           ├── polynomials.hpp
│           ├── prgs.hpp
│           ├── print_parameters.cpp
│           ├── quicksilver.hpp
│           ├── randomness_os.c
│           ├── randomness_randombytes.c
│           ├── randomness.h
│           ├── sha3
│           │   ├── align.h
│           │   ├── brg_endian.h
│           │   ├── config.h
│           │   ├── KeccakDuplex.c
│           │   ├── KeccakDuplex.h
│           │   ├── KeccakDuplex.inc
│           │   ├── KeccakHash-times4.c
│           │   ├── KeccakHash-times4.h
│           │   ├── KeccakHash.c
│           │   ├── KeccakHash.h
│           │   ├── KeccakOD.c
│           │   ├── KeccakOD.h
│           │   ├── KeccakOD.inc
│           │   ├── KeccakP-1600-64.macros
│           │   ├── KeccakP-1600-AVX2.h
│           │   ├── KeccakP-1600-AVX2.s
│           │   ├── KeccakP-1600-SnP.h
│           │   ├── KeccakP-1600-times4-AVX2.c
│           │   ├── KeccakP-1600-times4-AVX2.h
│           │   ├── KeccakP-1600-times4-SnP.h
│           │   ├── KeccakP-1600-unrolling.macros
│           │   ├── KeccakSponge-times4.c
│           │   ├── KeccakSponge-times4.h
│           │   ├── KeccakSponge-times4.inc
│           │   ├── KeccakSponge.c
│           │   ├── KeccakSponge.h
│           │   ├── KeccakSponge.inc
│           │   ├── load-store.h
│           │   ├── PlSnP-common.h
│           │   ├── PlSnP-Fallback.inc
│           │   ├── SIMD-types.h
│           │   ├── SimpleFIPS202.c
│           │   ├── SimpleFIPS202.h
│           │   ├── SnP-common.h
│           │   ├── SnP-implementations.h
│           │   └── SnP-Relaned.h
│           ├── small_vole.cpp
│           ├── small_vole.hpp
│           ├── small_vole.inc
│           ├── tests
│           │   └── api_test.c
│           ├── transpose_secpar.hpp
│           ├── transpose.hpp
│           ├── universal_hash.hpp
│           ├── util.hpp
│           ├── vector_com.cpp
│           ├── vector_com.hpp
│           ├── vector_com.inc
│           ├── vole_check.hpp
│           ├── vole_commit.cpp
│           ├── vole_commit.hpp
│           ├── vole_commit.inc
│           └── vole_key_index_permutation.hpp
├── cover_sheet.pdf
├── IP_Statements
│   ├── carstenbaum.pdf
│   ├── christianmajenz.pdf
│   ├── ChristianRechberger-IP-Statement-2D1.pdf
│   ├── cypriendelpechdesaintguilhem.pdf
│   ├── EmmanuelaOrsini-IP-Statement-2D1.pdf
│   ├── lawrence roy imp signed.pdf
│   ├── lawrence roy signed.pdf
│   ├── lennartbraun.pdf
│   ├── Michael-IP-Statement-2D1.pdf
│   ├── peterscholl.pdf
│   ├── SebastianRamacher-2D1.pdf
│   ├── SebastianRamacher-2D3.pdf
│   ├── Shibam-IP-Statement-2D1.pdf
│   ├── Shibam-IP-Statement-2D3.pdf
│   └── Ward_Beullens.pdf
├── KAT
│   ├── faest_128f
│   │   ├── PQCsignKAT_faest_128f.req
│   │   └── PQCsignKAT_faest_128f.rsp
│   ├── faest_128s
│   │   ├── PQCsignKAT_faest_128s.req
│   │   └── PQCsignKAT_faest_128s.rsp
│   ├── faest_192f
│   │   ├── PQCsignKAT_faest_192f.req
│   │   └── PQCsignKAT_faest_192f.rsp
│   ├── faest_192s
│   │   ├── PQCsignKAT_faest_192s.req
│   │   └── PQCsignKAT_faest_192s.rsp
│   ├── faest_256f
│   │   ├── PQCsignKAT_faest_256f.req
│   │   └── PQCsignKAT_faest_256f.rsp
│   ├── faest_256s
│   │   ├── PQCsignKAT_faest_256s.req
│   │   └── PQCsignKAT_faest_256s.rsp
│   ├── faest_em_128f
│   │   ├── PQCsignKAT_faest_em_128f.req
│   │   └── PQCsignKAT_faest_em_128f.rsp
│   ├── faest_em_128s
│   │   ├── PQCsignKAT_faest_em_128s.req
│   │   └── PQCsignKAT_faest_em_128s.rsp
│   ├── faest_em_192f
│   │   ├── PQCsignKAT_faest_em_192f.req
│   │   └── PQCsignKAT_faest_em_192f.rsp
│   ├── faest_em_192s
│   │   ├── PQCsignKAT_faest_em_192s.req
│   │   └── PQCsignKAT_faest_em_192s.rsp
│   ├── faest_em_256f
│   │   ├── PQCsignKAT_faest_em_256f.req
│   │   └── PQCsignKAT_faest_em_256f.rsp
│   └── faest_em_256s
│       ├── PQCsignKAT_faest_em_256s.req
│       └── PQCsignKAT_faest_em_256s.rsp
├── Optimized_Implementation
│   └── README
├── README.txt
├── Reference_Implementation
│   ├── faest_128f
│   │   ├── aes.c
│   │   ├── aes.h
│   │   ├── aesni.h
│   │   ├── api.h
│   │   ├── bavc.c
│   │   ├── bavc.h
│   │   ├── compat.c
│   │   ├── compat.h
│   │   ├── cpu.c
│   │   ├── cpu.h
│   │   ├── crypto_sign.c
│   │   ├── crypto_sign.h
│   │   ├── endian_compat.h
│   │   ├── faest_128f.c
│   │   ├── faest_128f.h
│   │   ├── faest_aes_128.c
│   │   ├── faest_aes_192.c
│   │   ├── faest_aes_256.c
│   │   ├── faest_aes.h
│   │   ├── faest_defines.h
│   │   ├── faest_impl.c
│   │   ├── faest_impl.h
│   │   ├── faest.h
│   │   ├── fields.c
│   │   ├── fields.h
│   │   ├── hash_shake.h
│   │   ├── instances.c
│   │   ├── instances.h
│   │   ├── macros.h
│   │   ├── Makefile
│   │   ├── NIST-KATs
│   │   │   ├── PQCgenKAT_sign.c
│   │   │   ├── rng.c
│   │   │   └── rng.h
│   │   ├── owf.c
│   │   ├── owf.h
│   │   ├── parameters.h
│   │   ├── random_oracle.c
│   │   ├── random_oracle.h
│   │   ├── randomness.c
│   │   ├── randomness.h
│   │   ├── sha3
│   │   │   ├── align.h
│   │   │   ├── brg_endian.h
│   │   │   ├── config.h
│   │   │   ├── KeccakHash.c
│   │   │   ├── KeccakHash.h
│   │   │   ├── KeccakP-1600-64.macros
│   │   │   ├── KeccakP-1600-opt64-config.h
│   │   │   ├── KeccakP-1600-opt64.c
│   │   │   ├── KeccakP-1600-SnP.h
│   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   ├── KeccakSponge.c
│   │   │   ├── KeccakSponge.h
│   │   │   ├── KeccakSponge.inc
│   │   │   ├── PlSnP-Fallback.inc
│   │   │   └── SnP-Relaned.h
│   │   ├── tables
│   │   │   ├── tables_128f.h
│   │   │   ├── tables_128s.h
│   │   │   ├── tables_192f.h
│   │   │   ├── tables_192s.h
│   │   │   ├── tables_256f.h
│   │   │   ├── tables_256s.h
│   │   │   ├── tables_em_192f.h
│   │   │   └── tables_em_192s.h
│   │   ├── tests
│   │   │   └── api_test.c
│   │   ├── universal_hashing.c
│   │   ├── universal_hashing.h
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── vole.c
│   │   └── vole.h
│   ├── faest_128s
│   │   ├── aes.c
│   │   ├── aes.h
│   │   ├── aesni.h
│   │   ├── api.h
│   │   ├── bavc.c
│   │   ├── bavc.h
│   │   ├── compat.c
│   │   ├── compat.h
│   │   ├── cpu.c
│   │   ├── cpu.h
│   │   ├── crypto_sign.c
│   │   ├── crypto_sign.h
│   │   ├── endian_compat.h
│   │   ├── faest_128s.c
│   │   ├── faest_128s.h
│   │   ├── faest_aes_128.c
│   │   ├── faest_aes_192.c
│   │   ├── faest_aes_256.c
│   │   ├── faest_aes.h
│   │   ├── faest_defines.h
│   │   ├── faest_impl.c
│   │   ├── faest_impl.h
│   │   ├── faest.h
│   │   ├── fields.c
│   │   ├── fields.h
│   │   ├── hash_shake.h
│   │   ├── instances.c
│   │   ├── instances.h
│   │   ├── macros.h
│   │   ├── Makefile
│   │   ├── NIST-KATs
│   │   │   ├── PQCgenKAT_sign.c
│   │   │   ├── rng.c
│   │   │   └── rng.h
│   │   ├── owf.c
│   │   ├── owf.h
│   │   ├── parameters.h
│   │   ├── random_oracle.c
│   │   ├── random_oracle.h
│   │   ├── randomness.c
│   │   ├── randomness.h
│   │   ├── sha3
│   │   │   ├── align.h
│   │   │   ├── brg_endian.h
│   │   │   ├── config.h
│   │   │   ├── KeccakHash.c
│   │   │   ├── KeccakHash.h
│   │   │   ├── KeccakP-1600-64.macros
│   │   │   ├── KeccakP-1600-opt64-config.h
│   │   │   ├── KeccakP-1600-opt64.c
│   │   │   ├── KeccakP-1600-SnP.h
│   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   ├── KeccakSponge.c
│   │   │   ├── KeccakSponge.h
│   │   │   ├── KeccakSponge.inc
│   │   │   ├── PlSnP-Fallback.inc
│   │   │   └── SnP-Relaned.h
│   │   ├── tables
│   │   │   ├── tables_128f.h
│   │   │   ├── tables_128s.h
│   │   │   ├── tables_192f.h
│   │   │   ├── tables_192s.h
│   │   │   ├── tables_256f.h
│   │   │   ├── tables_256s.h
│   │   │   ├── tables_em_192f.h
│   │   │   └── tables_em_192s.h
│   │   ├── tests
│   │   │   └── api_test.c
│   │   ├── universal_hashing.c
│   │   ├── universal_hashing.h
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── vole.c
│   │   └── vole.h
│   ├── faest_192f
│   │   ├── aes.c
│   │   ├── aes.h
│   │   ├── aesni.h
│   │   ├── api.h
│   │   ├── bavc.c
│   │   ├── bavc.h
│   │   ├── compat.c
│   │   ├── compat.h
│   │   ├── cpu.c
│   │   ├── cpu.h
│   │   ├── crypto_sign.c
│   │   ├── crypto_sign.h
│   │   ├── endian_compat.h
│   │   ├── faest_192f.c
│   │   ├── faest_192f.h
│   │   ├── faest_aes_128.c
│   │   ├── faest_aes_192.c
│   │   ├── faest_aes_256.c
│   │   ├── faest_aes.h
│   │   ├── faest_defines.h
│   │   ├── faest_impl.c
│   │   ├── faest_impl.h
│   │   ├── faest.h
│   │   ├── fields.c
│   │   ├── fields.h
│   │   ├── hash_shake.h
│   │   ├── instances.c
│   │   ├── instances.h
│   │   ├── macros.h
│   │   ├── Makefile
│   │   ├── NIST-KATs
│   │   │   ├── PQCgenKAT_sign.c
│   │   │   ├── rng.c
│   │   │   └── rng.h
│   │   ├── owf.c
│   │   ├── owf.h
│   │   ├── parameters.h
│   │   ├── random_oracle.c
│   │   ├── random_oracle.h
│   │   ├── randomness.c
│   │   ├── randomness.h
│   │   ├── sha3
│   │   │   ├── align.h
│   │   │   ├── brg_endian.h
│   │   │   ├── config.h
│   │   │   ├── KeccakHash.c
│   │   │   ├── KeccakHash.h
│   │   │   ├── KeccakP-1600-64.macros
│   │   │   ├── KeccakP-1600-opt64-config.h
│   │   │   ├── KeccakP-1600-opt64.c
│   │   │   ├── KeccakP-1600-SnP.h
│   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   ├── KeccakSponge.c
│   │   │   ├── KeccakSponge.h
│   │   │   ├── KeccakSponge.inc
│   │   │   ├── PlSnP-Fallback.inc
│   │   │   └── SnP-Relaned.h
│   │   ├── tables
│   │   │   ├── tables_128f.h
│   │   │   ├── tables_128s.h
│   │   │   ├── tables_192f.h
│   │   │   ├── tables_192s.h
│   │   │   ├── tables_256f.h
│   │   │   ├── tables_256s.h
│   │   │   ├── tables_em_192f.h
│   │   │   └── tables_em_192s.h
│   │   ├── tests
│   │   │   └── api_test.c
│   │   ├── universal_hashing.c
│   │   ├── universal_hashing.h
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── vole.c
│   │   └── vole.h
│   ├── faest_192s
│   │   ├── aes.c
│   │   ├── aes.h
│   │   ├── aesni.h
│   │   ├── api.h
│   │   ├── bavc.c
│   │   ├── bavc.h
│   │   ├── compat.c
│   │   ├── compat.h
│   │   ├── cpu.c
│   │   ├── cpu.h
│   │   ├── crypto_sign.c
│   │   ├── crypto_sign.h
│   │   ├── endian_compat.h
│   │   ├── faest_192s.c
│   │   ├── faest_192s.h
│   │   ├── faest_aes_128.c
│   │   ├── faest_aes_192.c
│   │   ├── faest_aes_256.c
│   │   ├── faest_aes.h
│   │   ├── faest_defines.h
│   │   ├── faest_impl.c
│   │   ├── faest_impl.h
│   │   ├── faest.h
│   │   ├── fields.c
│   │   ├── fields.h
│   │   ├── hash_shake.h
│   │   ├── instances.c
│   │   ├── instances.h
│   │   ├── macros.h
│   │   ├── Makefile
│   │   ├── NIST-KATs
│   │   │   ├── PQCgenKAT_sign.c
│   │   │   ├── rng.c
│   │   │   └── rng.h
│   │   ├── owf.c
│   │   ├── owf.h
│   │   ├── parameters.h
│   │   ├── random_oracle.c
│   │   ├── random_oracle.h
│   │   ├── randomness.c
│   │   ├── randomness.h
│   │   ├── sha3
│   │   │   ├── align.h
│   │   │   ├── brg_endian.h
│   │   │   ├── config.h
│   │   │   ├── KeccakHash.c
│   │   │   ├── KeccakHash.h
│   │   │   ├── KeccakP-1600-64.macros
│   │   │   ├── KeccakP-1600-opt64-config.h
│   │   │   ├── KeccakP-1600-opt64.c
│   │   │   ├── KeccakP-1600-SnP.h
│   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   ├── KeccakSponge.c
│   │   │   ├── KeccakSponge.h
│   │   │   ├── KeccakSponge.inc
│   │   │   ├── PlSnP-Fallback.inc
│   │   │   └── SnP-Relaned.h
│   │   ├── tables
│   │   │   ├── tables_128f.h
│   │   │   ├── tables_128s.h
│   │   │   ├── tables_192f.h
│   │   │   ├── tables_192s.h
│   │   │   ├── tables_256f.h
│   │   │   ├── tables_256s.h
│   │   │   ├── tables_em_192f.h
│   │   │   └── tables_em_192s.h
│   │   ├── tests
│   │   │   └── api_test.c
│   │   ├── universal_hashing.c
│   │   ├── universal_hashing.h
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── vole.c
│   │   └── vole.h
│   ├── faest_256f
│   │   ├── aes.c
│   │   ├── aes.h
│   │   ├── aesni.h
│   │   ├── api.h
│   │   ├── bavc.c
│   │   ├── bavc.h
│   │   ├── compat.c
│   │   ├── compat.h
│   │   ├── cpu.c
│   │   ├── cpu.h
│   │   ├── crypto_sign.c
│   │   ├── crypto_sign.h
│   │   ├── endian_compat.h
│   │   ├── faest_256f.c
│   │   ├── faest_256f.h
│   │   ├── faest_aes_128.c
│   │   ├── faest_aes_192.c
│   │   ├── faest_aes_256.c
│   │   ├── faest_aes.h
│   │   ├── faest_defines.h
│   │   ├── faest_impl.c
│   │   ├── faest_impl.h
│   │   ├── faest.h
│   │   ├── fields.c
│   │   ├── fields.h
│   │   ├── hash_shake.h
│   │   ├── instances.c
│   │   ├── instances.h
│   │   ├── macros.h
│   │   ├── Makefile
│   │   ├── NIST-KATs
│   │   │   ├── PQCgenKAT_sign.c
│   │   │   ├── rng.c
│   │   │   └── rng.h
│   │   ├── owf.c
│   │   ├── owf.h
│   │   ├── parameters.h
│   │   ├── random_oracle.c
│   │   ├── random_oracle.h
│   │   ├── randomness.c
│   │   ├── randomness.h
│   │   ├── sha3
│   │   │   ├── align.h
│   │   │   ├── brg_endian.h
│   │   │   ├── config.h
│   │   │   ├── KeccakHash.c
│   │   │   ├── KeccakHash.h
│   │   │   ├── KeccakP-1600-64.macros
│   │   │   ├── KeccakP-1600-opt64-config.h
│   │   │   ├── KeccakP-1600-opt64.c
│   │   │   ├── KeccakP-1600-SnP.h
│   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   ├── KeccakSponge.c
│   │   │   ├── KeccakSponge.h
│   │   │   ├── KeccakSponge.inc
│   │   │   ├── PlSnP-Fallback.inc
│   │   │   └── SnP-Relaned.h
│   │   ├── tables
│   │   │   ├── tables_128f.h
│   │   │   ├── tables_128s.h
│   │   │   ├── tables_192f.h
│   │   │   ├── tables_192s.h
│   │   │   ├── tables_256f.h
│   │   │   ├── tables_256s.h
│   │   │   ├── tables_em_192f.h
│   │   │   └── tables_em_192s.h
│   │   ├── tests
│   │   │   └── api_test.c
│   │   ├── universal_hashing.c
│   │   ├── universal_hashing.h
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── vole.c
│   │   └── vole.h
│   ├── faest_256s
│   │   ├── aes.c
│   │   ├── aes.h
│   │   ├── aesni.h
│   │   ├── api.h
│   │   ├── bavc.c
│   │   ├── bavc.h
│   │   ├── compat.c
│   │   ├── compat.h
│   │   ├── cpu.c
│   │   ├── cpu.h
│   │   ├── crypto_sign.c
│   │   ├── crypto_sign.h
│   │   ├── endian_compat.h
│   │   ├── faest_256s.c
│   │   ├── faest_256s.h
│   │   ├── faest_aes_128.c
│   │   ├── faest_aes_192.c
│   │   ├── faest_aes_256.c
│   │   ├── faest_aes.h
│   │   ├── faest_defines.h
│   │   ├── faest_impl.c
│   │   ├── faest_impl.h
│   │   ├── faest.h
│   │   ├── fields.c
│   │   ├── fields.h
│   │   ├── hash_shake.h
│   │   ├── instances.c
│   │   ├── instances.h
│   │   ├── macros.h
│   │   ├── Makefile
│   │   ├── NIST-KATs
│   │   │   ├── PQCgenKAT_sign.c
│   │   │   ├── rng.c
│   │   │   └── rng.h
│   │   ├── owf.c
│   │   ├── owf.h
│   │   ├── parameters.h
│   │   ├── random_oracle.c
│   │   ├── random_oracle.h
│   │   ├── randomness.c
│   │   ├── randomness.h
│   │   ├── sha3
│   │   │   ├── align.h
│   │   │   ├── brg_endian.h
│   │   │   ├── config.h
│   │   │   ├── KeccakHash.c
│   │   │   ├── KeccakHash.h
│   │   │   ├── KeccakP-1600-64.macros
│   │   │   ├── KeccakP-1600-opt64-config.h
│   │   │   ├── KeccakP-1600-opt64.c
│   │   │   ├── KeccakP-1600-SnP.h
│   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   ├── KeccakSponge.c
│   │   │   ├── KeccakSponge.h
│   │   │   ├── KeccakSponge.inc
│   │   │   ├── PlSnP-Fallback.inc
│   │   │   └── SnP-Relaned.h
│   │   ├── tables
│   │   │   ├── tables_128f.h
│   │   │   ├── tables_128s.h
│   │   │   ├── tables_192f.h
│   │   │   ├── tables_192s.h
│   │   │   ├── tables_256f.h
│   │   │   ├── tables_256s.h
│   │   │   ├── tables_em_192f.h
│   │   │   └── tables_em_192s.h
│   │   ├── tests
│   │   │   └── api_test.c
│   │   ├── universal_hashing.c
│   │   ├── universal_hashing.h
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── vole.c
│   │   └── vole.h
│   ├── faest_em_128f
│   │   ├── aes.c
│   │   ├── aes.h
│   │   ├── aesni.h
│   │   ├── api.h
│   │   ├── bavc.c
│   │   ├── bavc.h
│   │   ├── compat.c
│   │   ├── compat.h
│   │   ├── cpu.c
│   │   ├── cpu.h
│   │   ├── crypto_sign.c
│   │   ├── crypto_sign.h
│   │   ├── endian_compat.h
│   │   ├── faest_aes_128.c
│   │   ├── faest_aes_192.c
│   │   ├── faest_aes_256.c
│   │   ├── faest_aes.h
│   │   ├── faest_defines.h
│   │   ├── faest_em_128f.c
│   │   ├── faest_em_128f.h
│   │   ├── faest_impl.c
│   │   ├── faest_impl.h
│   │   ├── faest.h
│   │   ├── fields.c
│   │   ├── fields.h
│   │   ├── hash_shake.h
│   │   ├── instances.c
│   │   ├── instances.h
│   │   ├── macros.h
│   │   ├── Makefile
│   │   ├── NIST-KATs
│   │   │   ├── PQCgenKAT_sign.c
│   │   │   ├── rng.c
│   │   │   └── rng.h
│   │   ├── owf.c
│   │   ├── owf.h
│   │   ├── parameters.h
│   │   ├── random_oracle.c
│   │   ├── random_oracle.h
│   │   ├── randomness.c
│   │   ├── randomness.h
│   │   ├── sha3
│   │   │   ├── align.h
│   │   │   ├── brg_endian.h
│   │   │   ├── config.h
│   │   │   ├── KeccakHash.c
│   │   │   ├── KeccakHash.h
│   │   │   ├── KeccakP-1600-64.macros
│   │   │   ├── KeccakP-1600-opt64-config.h
│   │   │   ├── KeccakP-1600-opt64.c
│   │   │   ├── KeccakP-1600-SnP.h
│   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   ├── KeccakSponge.c
│   │   │   ├── KeccakSponge.h
│   │   │   ├── KeccakSponge.inc
│   │   │   ├── PlSnP-Fallback.inc
│   │   │   └── SnP-Relaned.h
│   │   ├── tables
│   │   │   ├── tables_128f.h
│   │   │   ├── tables_128s.h
│   │   │   ├── tables_192f.h
│   │   │   ├── tables_192s.h
│   │   │   ├── tables_256f.h
│   │   │   ├── tables_256s.h
│   │   │   ├── tables_em_192f.h
│   │   │   └── tables_em_192s.h
│   │   ├── tests
│   │   │   └── api_test.c
│   │   ├── universal_hashing.c
│   │   ├── universal_hashing.h
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── vole.c
│   │   └── vole.h
│   ├── faest_em_128s
│   │   ├── aes.c
│   │   ├── aes.h
│   │   ├── aesni.h
│   │   ├── api.h
│   │   ├── bavc.c
│   │   ├── bavc.h
│   │   ├── compat.c
│   │   ├── compat.h
│   │   ├── cpu.c
│   │   ├── cpu.h
│   │   ├── crypto_sign.c
│   │   ├── crypto_sign.h
│   │   ├── endian_compat.h
│   │   ├── faest_aes_128.c
│   │   ├── faest_aes_192.c
│   │   ├── faest_aes_256.c
│   │   ├── faest_aes.h
│   │   ├── faest_defines.h
│   │   ├── faest_em_128s.c
│   │   ├── faest_em_128s.h
│   │   ├── faest_impl.c
│   │   ├── faest_impl.h
│   │   ├── faest.h
│   │   ├── fields.c
│   │   ├── fields.h
│   │   ├── hash_shake.h
│   │   ├── instances.c
│   │   ├── instances.h
│   │   ├── macros.h
│   │   ├── Makefile
│   │   ├── NIST-KATs
│   │   │   ├── PQCgenKAT_sign.c
│   │   │   ├── rng.c
│   │   │   └── rng.h
│   │   ├── owf.c
│   │   ├── owf.h
│   │   ├── parameters.h
│   │   ├── random_oracle.c
│   │   ├── random_oracle.h
│   │   ├── randomness.c
│   │   ├── randomness.h
│   │   ├── sha3
│   │   │   ├── align.h
│   │   │   ├── brg_endian.h
│   │   │   ├── config.h
│   │   │   ├── KeccakHash.c
│   │   │   ├── KeccakHash.h
│   │   │   ├── KeccakP-1600-64.macros
│   │   │   ├── KeccakP-1600-opt64-config.h
│   │   │   ├── KeccakP-1600-opt64.c
│   │   │   ├── KeccakP-1600-SnP.h
│   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   ├── KeccakSponge.c
│   │   │   ├── KeccakSponge.h
│   │   │   ├── KeccakSponge.inc
│   │   │   ├── PlSnP-Fallback.inc
│   │   │   └── SnP-Relaned.h
│   │   ├── tables
│   │   │   ├── tables_128f.h
│   │   │   ├── tables_128s.h
│   │   │   ├── tables_192f.h
│   │   │   ├── tables_192s.h
│   │   │   ├── tables_256f.h
│   │   │   ├── tables_256s.h
│   │   │   ├── tables_em_192f.h
│   │   │   └── tables_em_192s.h
│   │   ├── tests
│   │   │   └── api_test.c
│   │   ├── universal_hashing.c
│   │   ├── universal_hashing.h
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── vole.c
│   │   └── vole.h
│   ├── faest_em_192f
│   │   ├── aes.c
│   │   ├── aes.h
│   │   ├── aesni.h
│   │   ├── api.h
│   │   ├── bavc.c
│   │   ├── bavc.h
│   │   ├── compat.c
│   │   ├── compat.h
│   │   ├── cpu.c
│   │   ├── cpu.h
│   │   ├── crypto_sign.c
│   │   ├── crypto_sign.h
│   │   ├── endian_compat.h
│   │   ├── faest_aes_128.c
│   │   ├── faest_aes_192.c
│   │   ├── faest_aes_256.c
│   │   ├── faest_aes.h
│   │   ├── faest_defines.h
│   │   ├── faest_em_192f.c
│   │   ├── faest_em_192f.h
│   │   ├── faest_impl.c
│   │   ├── faest_impl.h
│   │   ├── faest.h
│   │   ├── fields.c
│   │   ├── fields.h
│   │   ├── hash_shake.h
│   │   ├── instances.c
│   │   ├── instances.h
│   │   ├── macros.h
│   │   ├── Makefile
│   │   ├── NIST-KATs
│   │   │   ├── PQCgenKAT_sign.c
│   │   │   ├── rng.c
│   │   │   └── rng.h
│   │   ├── owf.c
│   │   ├── owf.h
│   │   ├── parameters.h
│   │   ├── random_oracle.c
│   │   ├── random_oracle.h
│   │   ├── randomness.c
│   │   ├── randomness.h
│   │   ├── sha3
│   │   │   ├── align.h
│   │   │   ├── brg_endian.h
│   │   │   ├── config.h
│   │   │   ├── KeccakHash.c
│   │   │   ├── KeccakHash.h
│   │   │   ├── KeccakP-1600-64.macros
│   │   │   ├── KeccakP-1600-opt64-config.h
│   │   │   ├── KeccakP-1600-opt64.c
│   │   │   ├── KeccakP-1600-SnP.h
│   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   ├── KeccakSponge.c
│   │   │   ├── KeccakSponge.h
│   │   │   ├── KeccakSponge.inc
│   │   │   ├── PlSnP-Fallback.inc
│   │   │   └── SnP-Relaned.h
│   │   ├── tables
│   │   │   ├── tables_128f.h
│   │   │   ├── tables_128s.h
│   │   │   ├── tables_192f.h
│   │   │   ├── tables_192s.h
│   │   │   ├── tables_256f.h
│   │   │   ├── tables_256s.h
│   │   │   ├── tables_em_192f.h
│   │   │   └── tables_em_192s.h
│   │   ├── tests
│   │   │   └── api_test.c
│   │   ├── universal_hashing.c
│   │   ├── universal_hashing.h
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── vole.c
│   │   └── vole.h
│   ├── faest_em_192s
│   │   ├── aes.c
│   │   ├── aes.h
│   │   ├── aesni.h
│   │   ├── api.h
│   │   ├── bavc.c
│   │   ├── bavc.h
│   │   ├── compat.c
│   │   ├── compat.h
│   │   ├── cpu.c
│   │   ├── cpu.h
│   │   ├── crypto_sign.c
│   │   ├── crypto_sign.h
│   │   ├── endian_compat.h
│   │   ├── faest_aes_128.c
│   │   ├── faest_aes_192.c
│   │   ├── faest_aes_256.c
│   │   ├── faest_aes.h
│   │   ├── faest_defines.h
│   │   ├── faest_em_192s.c
│   │   ├── faest_em_192s.h
│   │   ├── faest_impl.c
│   │   ├── faest_impl.h
│   │   ├── faest.h
│   │   ├── fields.c
│   │   ├── fields.h
│   │   ├── hash_shake.h
│   │   ├── instances.c
│   │   ├── instances.h
│   │   ├── macros.h
│   │   ├── Makefile
│   │   ├── NIST-KATs
│   │   │   ├── PQCgenKAT_sign.c
│   │   │   ├── rng.c
│   │   │   └── rng.h
│   │   ├── owf.c
│   │   ├── owf.h
│   │   ├── parameters.h
│   │   ├── random_oracle.c
│   │   ├── random_oracle.h
│   │   ├── randomness.c
│   │   ├── randomness.h
│   │   ├── sha3
│   │   │   ├── align.h
│   │   │   ├── brg_endian.h
│   │   │   ├── config.h
│   │   │   ├── KeccakHash.c
│   │   │   ├── KeccakHash.h
│   │   │   ├── KeccakP-1600-64.macros
│   │   │   ├── KeccakP-1600-opt64-config.h
│   │   │   ├── KeccakP-1600-opt64.c
│   │   │   ├── KeccakP-1600-SnP.h
│   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   ├── KeccakSponge.c
│   │   │   ├── KeccakSponge.h
│   │   │   ├── KeccakSponge.inc
│   │   │   ├── PlSnP-Fallback.inc
│   │   │   └── SnP-Relaned.h
│   │   ├── tables
│   │   │   ├── tables_128f.h
│   │   │   ├── tables_128s.h
│   │   │   ├── tables_192f.h
│   │   │   ├── tables_192s.h
│   │   │   ├── tables_256f.h
│   │   │   ├── tables_256s.h
│   │   │   ├── tables_em_192f.h
│   │   │   └── tables_em_192s.h
│   │   ├── tests
│   │   │   └── api_test.c
│   │   ├── universal_hashing.c
│   │   ├── universal_hashing.h
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── vole.c
│   │   └── vole.h
│   ├── faest_em_256f
│   │   ├── aes.c
│   │   ├── aes.h
│   │   ├── aesni.h
│   │   ├── api.h
│   │   ├── bavc.c
│   │   ├── bavc.h
│   │   ├── compat.c
│   │   ├── compat.h
│   │   ├── cpu.c
│   │   ├── cpu.h
│   │   ├── crypto_sign.c
│   │   ├── crypto_sign.h
│   │   ├── endian_compat.h
│   │   ├── faest_aes_128.c
│   │   ├── faest_aes_192.c
│   │   ├── faest_aes_256.c
│   │   ├── faest_aes.h
│   │   ├── faest_defines.h
│   │   ├── faest_em_256f.c
│   │   ├── faest_em_256f.h
│   │   ├── faest_impl.c
│   │   ├── faest_impl.h
│   │   ├── faest.h
│   │   ├── fields.c
│   │   ├── fields.h
│   │   ├── hash_shake.h
│   │   ├── instances.c
│   │   ├── instances.h
│   │   ├── macros.h
│   │   ├── Makefile
│   │   ├── NIST-KATs
│   │   │   ├── PQCgenKAT_sign.c
│   │   │   ├── rng.c
│   │   │   └── rng.h
│   │   ├── owf.c
│   │   ├── owf.h
│   │   ├── parameters.h
│   │   ├── random_oracle.c
│   │   ├── random_oracle.h
│   │   ├── randomness.c
│   │   ├── randomness.h
│   │   ├── sha3
│   │   │   ├── align.h
│   │   │   ├── brg_endian.h
│   │   │   ├── config.h
│   │   │   ├── KeccakHash.c
│   │   │   ├── KeccakHash.h
│   │   │   ├── KeccakP-1600-64.macros
│   │   │   ├── KeccakP-1600-opt64-config.h
│   │   │   ├── KeccakP-1600-opt64.c
│   │   │   ├── KeccakP-1600-SnP.h
│   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   ├── KeccakSponge.c
│   │   │   ├── KeccakSponge.h
│   │   │   ├── KeccakSponge.inc
│   │   │   ├── PlSnP-Fallback.inc
│   │   │   └── SnP-Relaned.h
│   │   ├── tables
│   │   │   ├── tables_128f.h
│   │   │   ├── tables_128s.h
│   │   │   ├── tables_192f.h
│   │   │   ├── tables_192s.h
│   │   │   ├── tables_256f.h
│   │   │   ├── tables_256s.h
│   │   │   ├── tables_em_192f.h
│   │   │   └── tables_em_192s.h
│   │   ├── tests
│   │   │   └── api_test.c
│   │   ├── universal_hashing.c
│   │   ├── universal_hashing.h
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── vole.c
│   │   └── vole.h
│   ├── faest_em_256s
│   │   ├── aes.c
│   │   ├── aes.h
│   │   ├── aesni.h
│   │   ├── api.h
│   │   ├── bavc.c
│   │   ├── bavc.h
│   │   ├── compat.c
│   │   ├── compat.h
│   │   ├── cpu.c
│   │   ├── cpu.h
│   │   ├── crypto_sign.c
│   │   ├── crypto_sign.h
│   │   ├── endian_compat.h
│   │   ├── faest_aes_128.c
│   │   ├── faest_aes_192.c
│   │   ├── faest_aes_256.c
│   │   ├── faest_aes.h
│   │   ├── faest_defines.h
│   │   ├── faest_em_256s.c
│   │   ├── faest_em_256s.h
│   │   ├── faest_impl.c
│   │   ├── faest_impl.h
│   │   ├── faest.h
│   │   ├── fields.c
│   │   ├── fields.h
│   │   ├── hash_shake.h
│   │   ├── instances.c
│   │   ├── instances.h
│   │   ├── macros.h
│   │   ├── Makefile
│   │   ├── NIST-KATs
│   │   │   ├── PQCgenKAT_sign.c
│   │   │   ├── rng.c
│   │   │   └── rng.h
│   │   ├── owf.c
│   │   ├── owf.h
│   │   ├── parameters.h
│   │   ├── random_oracle.c
│   │   ├── random_oracle.h
│   │   ├── randomness.c
│   │   ├── randomness.h
│   │   ├── sha3
│   │   │   ├── align.h
│   │   │   ├── brg_endian.h
│   │   │   ├── config.h
│   │   │   ├── KeccakHash.c
│   │   │   ├── KeccakHash.h
│   │   │   ├── KeccakP-1600-64.macros
│   │   │   ├── KeccakP-1600-opt64-config.h
│   │   │   ├── KeccakP-1600-opt64.c
│   │   │   ├── KeccakP-1600-SnP.h
│   │   │   ├── KeccakP-1600-unrolling.macros
│   │   │   ├── KeccakSponge.c
│   │   │   ├── KeccakSponge.h
│   │   │   ├── KeccakSponge.inc
│   │   │   ├── PlSnP-Fallback.inc
│   │   │   └── SnP-Relaned.h
│   │   ├── tables
│   │   │   ├── tables_128f.h
│   │   │   ├── tables_128s.h
│   │   │   ├── tables_192f.h
│   │   │   ├── tables_192s.h
│   │   │   ├── tables_256f.h
│   │   │   ├── tables_256s.h
│   │   │   ├── tables_em_192f.h
│   │   │   └── tables_em_192s.h
│   │   ├── tests
│   │   │   └── api_test.c
│   │   ├── universal_hashing.c
│   │   ├── universal_hashing.h
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── vole.c
│   │   └── vole.h
│   └── table_generator
│       └── vole_mult_tables.py
└── Supporting_Documentation
    └── FAESTv3.pdf

226 directories, 3800 files
