# SPDX-License-Identifier: MIT
# FAEST Round-3 REF + AVX2 integration in the existing liboqs FAEST layout.
#
# No helper adapter/namespace source files are added at this directory level.
# Existing OQS_ENABLE_SIG_faest_* options build both explicit implementations.

enable_language(CXX)

set(_FAEST_OBJS "")

set(FAEST_REF_PRIVATE_SYMBOLS
    faest_verify
    faest_sign
    faest_get_paramset
    H0_final
    H0_init
    H0_update
    H1_final
    H1_init
    H1_update
    H2_0_final
    H2_1_final
    H2_2_final
    H2_3_final
    H2_copy
    H2_init
    H2_update
    H2_update_u32_le
    H3_final
    H3_init
    H3_update
    H4
    H5
    aes128_init_round_keys
    aes192_init_round_keys
    aes256_init_round_keys
    aes_128_prover
    aes_128_verifier
    aes_192_prover
    aes_192_verifier
    aes_256_prover
    aes_256_verifier
    aes_extend_witness_7
    alloc_pointer_array
    bavc_clear
    bavc_commit
    bavc_open
    bavc_reconstruct
    bf128_byte_combine
    bf128_byte_combine_bits
    bf128_byte_combine_sq
    bf128_mul
    bf128_mul_64_inplace
    bf128_mul_inplace
    bf128_sq_bit
    bf128_sq_bit_inplace
    bf128_square
    bf128_sum_poly_bits
    bf192_byte_combine
    bf192_byte_combine_bits
    bf192_byte_combine_sq
    bf192_mul
    bf192_mul_64_inplace
    bf192_mul_inplace
    bf192_sq_bit
    bf192_sq_bit_inplace
    bf192_square
    bf192_sum_poly_bits
    bf256_byte_combine
    bf256_byte_combine_bits
    bf256_byte_combine_sq
    bf256_mul
    bf256_mul_64_inplace
    bf256_mul_inplace
    bf256_sq_bit
    bf256_sq_bit_inplace
    bf256_square
    bf256_sum_poly_bits
    bf2_matrix_mul_tbl
    bf2_poly_mul
    bf2_poly_reduce
    bf384_mul_128_inplace
    bf576_mul_192_inplace
    bf768_mul_256_inplace
    bf8_inv
    bf8_mul
    bf8_square
    decode_all_chall_3
    expand_key
    extract_bit_slice
    free_pointer_array
    generic_aes_ecb_encrypt
    generic_aes_ecb_free
    generic_aes_ecb_new
    leaf_hash_128
    leaf_hash_192
    leaf_hash_256
    masked_xor_u8_array
    owf_128
    owf_192
    owf_256
    owf_em_128
    owf_em_192
    owf_em_256
    prg
    prg_2_lambda
    prg_4_lambda
    rijndael192_encrypt_block
    rijndael192_init_round_keys
    rijndael256_encrypt_block
    rijndael256_init_round_keys
    transpose_matrix
    vole_commit
    vole_hash
    vole_hash_128
    vole_hash_192
    vole_hash_256
    vole_reconstruct
    xor_u8_array
    xor_u8_array_inplace
    zk_hash_128_7_finalize
    zk_hash_128_7_init
    zk_hash_128_7_raise_and_update
    zk_hash_128_7_update
    zk_hash_128_finalize
    zk_hash_128_init
    zk_hash_128_update
    zk_hash_192_7_finalize
    zk_hash_192_7_init
    zk_hash_192_7_raise_and_update
    zk_hash_192_7_update
    zk_hash_192_finalize
    zk_hash_192_init
    zk_hash_192_update
    zk_hash_256_7_finalize
    zk_hash_256_7_init
    zk_hash_256_7_raise_and_update
    zk_hash_256_7_update
    zk_hash_256_finalize
    zk_hash_256_init
    zk_hash_256_update
    rand_bytes
)

set(FAEST_AVX2_KECCAK_SYMBOLS
    KeccakF1600_AVX2_FastLoop_Absorb
    KeccakF1600times4_AVX2_FastLoop_Absorb
    KeccakP1600_12rounds_AVX2_FastLoop_Absorb
    KeccakP1600_AVX2_AddByte
    KeccakP1600_AVX2_AddBytes
    KeccakP1600_AVX2_ExtractAndAddBytes
    KeccakP1600_AVX2_ExtractBytes
    KeccakP1600_AVX2_Initialize
    KeccakP1600_AVX2_OverwriteBytes
    KeccakP1600_AVX2_OverwriteWithZeroes
    KeccakP1600_AVX2_Permute_12rounds
    KeccakP1600_AVX2_Permute_24rounds
    KeccakP1600_AVX2_Permute_Nrounds
    KeccakP1600times4_12rounds_AVX2_FastLoop_Absorb
    KeccakP1600times4_AVX2_AddBytes
    KeccakP1600times4_AVX2_AddLanesAll
    KeccakP1600times4_AVX2_ExtractAndAddBytes
    KeccakP1600times4_AVX2_ExtractAndAddLanesAll
    KeccakP1600times4_AVX2_ExtractBytes
    KeccakP1600times4_AVX2_ExtractLanesAll
    KeccakP1600times4_AVX2_InitializeAll
    KeccakP1600times4_AVX2_KT128ProcessLeaves
    KeccakP1600times4_AVX2_KT256ProcessLeaves
    KeccakP1600times4_AVX2_KravatteCompress
    KeccakP1600times4_AVX2_KravatteExpand
    KeccakP1600times4_AVX2_OverwriteBytes
    KeccakP1600times4_AVX2_OverwriteLanesAll
    KeccakP1600times4_AVX2_OverwriteWithZeroes
    KeccakP1600times4_AVX2_PermuteAll_12rounds
    KeccakP1600times4_AVX2_PermuteAll_24rounds
    KeccakP1600times4_AVX2_PermuteAll_4rounds
    KeccakP1600times4_AVX2_PermuteAll_6rounds
    KeccakWidth1600_DuplexInitialize
    KeccakWidth1600_Duplexing
    KeccakWidth1600_DuplexingFeedPartialInput
    KeccakWidth1600_DuplexingFeedZeroes
    KeccakWidth1600_DuplexingGetFurtherOutput
    KeccakWidth1600_DuplexingGetFurtherOutputAndAdd
    KeccakWidth1600_DuplexingOverwritePartialInput
    KeccakWidth1600_DuplexingOverwriteWithZeroes
    KeccakWidth1600_Sponge
    KeccakWidth1600_SpongeAbsorb
    KeccakWidth1600_SpongeAbsorbLastFewBits
    KeccakWidth1600_SpongeInitialize
    KeccakWidth1600_SpongeSqueeze
    KeccakWidth1600x4_SpongeAbsorb
    KeccakWidth1600x4_SpongeAbsorbLastFewBits
    KeccakWidth1600x4_SpongeInitialize
    KeccakWidth1600x4_SpongeSqueeze
    Keccak_HashFinal
    Keccak_HashFinal_x4
    Keccak_HashInitialize
    Keccak_HashInitialize_x4
    Keccak_HashSqueeze
    Keccak_HashSqueeze_x4
    Keccak_HashUpdate
    Keccak_HashUpdate_x4
    SHA3_224
    SHA3_256
    SHA3_384
    SHA3_512
    SHAKE128
    SHAKE256
    SHAKE_OD_Clone
    SHAKE_OD_CloneCompact
    SHAKE_OD_Duplexing
    SHAKE_OD_DuplexingFast
    SHAKE_OD_DuplexingFastOnlyIn
    SHAKE_OD_DuplexingFastOnlyOut
    SHAKE_OD_Initialize
    SHAKE_OD_Squeezing
    TurboSHAKE_OD_Clone
    TurboSHAKE_OD_CloneCompact
    TurboSHAKE_OD_Duplexing
    TurboSHAKE_OD_DuplexingFast
    TurboSHAKE_OD_DuplexingFastOnlyIn
    TurboSHAKE_OD_DuplexingFastOnlyOut
    TurboSHAKE_OD_Initialize
    TurboSHAKE_OD_Squeezing
)

function(faest_add_ref PARAM WRAPPER SELECTOR)
    set(BASE_DIR ${CMAKE_CURRENT_LIST_DIR}/faest_${PARAM}/ref)
    file(GLOB REF_SOURCES CONFIGURE_DEPENDS "${BASE_DIR}/*.c")

    add_library(faest_${PARAM}_ref_core OBJECT ${REF_SOURCES})
    target_include_directories(faest_${PARAM}_ref_core PRIVATE ${BASE_DIR})
    target_compile_definitions(faest_${PARAM}_ref_core PRIVATE
        OQS=1
        NDEBUG=1
        crypto_sign_keypair=oqs_sig_private_faest_${PARAM}_ref_crypto_sign_keypair
        crypto_sign=oqs_sig_private_faest_${PARAM}_ref_crypto_sign
        crypto_sign_open=oqs_sig_private_faest_${PARAM}_ref_crypto_sign_open)

    foreach(sym IN LISTS FAEST_REF_PRIVATE_SYMBOLS)
        target_compile_definitions(faest_${PARAM}_ref_core PRIVATE
            "${sym}=oqs_sig_private_faest_${PARAM}_ref_${sym}")
    endforeach()

    if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
        if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|amd64|AMD64")
            target_compile_options(faest_${PARAM}_ref_core PRIVATE
                -O3 -march=x86-64 -mtune=generic -fno-strict-aliasing -Wno-psabi)
        else()
            target_compile_options(faest_${PARAM}_ref_core PRIVATE
                -O3 -fno-strict-aliasing -Wno-psabi)
        endif()
    endif()

    add_library(faest_${PARAM}_ref_glue OBJECT ${WRAPPER})
    target_compile_definitions(faest_${PARAM}_ref_glue PRIVATE ${SELECTOR})

    set(_FAEST_OBJS ${_FAEST_OBJS}
        $<TARGET_OBJECTS:faest_${PARAM}_ref_core>
        $<TARGET_OBJECTS:faest_${PARAM}_ref_glue>
        PARENT_SCOPE)
endfunction()

function(faest_add_avx2 PARAM WRAPPER SELECTOR)
    if(NOT CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|amd64|AMD64")
        message(FATAL_ERROR "FAEST-${PARAM}-AVX2 requires x86-64")
    endif()

    set(BASE_DIR ${CMAKE_CURRENT_LIST_DIR}/faest_${PARAM}/avx2)
    file(GLOB_RECURSE AVX2_SOURCES CONFIGURE_DEPENDS
        "${BASE_DIR}/*.c"
        "${BASE_DIR}/*.cpp"
        "${BASE_DIR}/*.s")
    list(FILTER AVX2_SOURCES EXCLUDE REGEX "/avx2/aes_impl\\.cpp$")

    add_library(faest_${PARAM}_avx2_core OBJECT ${AVX2_SOURCES})
    target_include_directories(faest_${PARAM}_avx2_core PRIVATE
        ${BASE_DIR}
        ${BASE_DIR}/sha3)
    target_compile_features(faest_${PARAM}_avx2_core PRIVATE cxx_std_23)
    target_compile_definitions(faest_${PARAM}_avx2_core PRIVATE
        NDEBUG=1
        faest=oqs_sig_private_faest_${PARAM}_avx2_cpp
        crypto_sign_keypair=oqs_sig_private_faest_${PARAM}_avx2_crypto_sign_keypair
        crypto_sign=oqs_sig_private_faest_${PARAM}_avx2_crypto_sign
        crypto_sign_open=oqs_sig_private_faest_${PARAM}_avx2_crypto_sign_open
        rand_bytes=oqs_sig_private_faest_${PARAM}_avx2_rand_bytes)

    foreach(sym IN LISTS FAEST_AVX2_KECCAK_SYMBOLS)
        target_compile_definitions(faest_${PARAM}_avx2_core PRIVATE
            "${sym}=oqs_sig_private_faest_${PARAM}_avx2_${sym}")
    endforeach()

    if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang" AND
       CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
        target_compile_options(faest_${PARAM}_avx2_core PRIVATE
            $<$<COMPILE_LANGUAGE:C,CXX>:-O3>
            $<$<COMPILE_LANGUAGE:C,CXX>:-march=x86-64>
            $<$<COMPILE_LANGUAGE:C,CXX>:-mtune=generic>
            $<$<COMPILE_LANGUAGE:C,CXX>:-mavx2>
            $<$<COMPILE_LANGUAGE:C,CXX>:-maes>
            $<$<COMPILE_LANGUAGE:C,CXX>:-mpclmul>
            $<$<COMPILE_LANGUAGE:C,CXX>:-fno-strict-aliasing>
            $<$<COMPILE_LANGUAGE:CXX>:-fno-exceptions>
            $<$<COMPILE_LANGUAGE:CXX>:-fno-rtti>)
    else()
        message(FATAL_ERROR "FAEST AVX2 integration expects GCC/Clang-style x86 flags")
    endif()

    add_library(faest_${PARAM}_avx2_glue OBJECT ${WRAPPER})
    target_compile_definitions(faest_${PARAM}_avx2_glue PRIVATE ${SELECTOR})

    set(_FAEST_OBJS ${_FAEST_OBJS}
        $<TARGET_OBJECTS:faest_${PARAM}_avx2_core>
        $<TARGET_OBJECTS:faest_${PARAM}_avx2_glue>
        PARENT_SCOPE)
endfunction()

if(OQS_ENABLE_SIG_faest_128s)
    faest_add_ref(128s sig_faest_128s.c OQS_FAEST_128S_REF)
    faest_add_avx2(128s sig_faest_128s.c OQS_FAEST_128S_AVX2)
endif()

if(OQS_ENABLE_SIG_faest_128f)
    faest_add_ref(128f sig_faest_128f.c OQS_FAEST_128F_REF)
    faest_add_avx2(128f sig_faest_128f.c OQS_FAEST_128F_AVX2)
endif()

if(OQS_ENABLE_SIG_faest_192s)
    faest_add_ref(192s sig_faest_192s.c OQS_FAEST_192S_REF)
    faest_add_avx2(192s sig_faest_192s.c OQS_FAEST_192S_AVX2)
endif()

if(OQS_ENABLE_SIG_faest_192f)
    faest_add_ref(192f sig_faest_192f.c OQS_FAEST_192F_REF)
    faest_add_avx2(192f sig_faest_192f.c OQS_FAEST_192F_AVX2)
endif()

if(OQS_ENABLE_SIG_faest_256s)
    faest_add_ref(256s sig_faest_256s.c OQS_FAEST_256S_REF)
    faest_add_avx2(256s sig_faest_256s.c OQS_FAEST_256S_AVX2)
endif()

if(OQS_ENABLE_SIG_faest_256f)
    faest_add_ref(256f sig_faest_256f.c OQS_FAEST_256F_REF)
    faest_add_avx2(256f sig_faest_256f.c OQS_FAEST_256F_AVX2)
endif()

if(OQS_ENABLE_SIG_faest_em_128s)
    faest_add_ref(em_128s sig_faest_em_128s.c OQS_FAEST_EM_128S_REF)
    faest_add_avx2(em_128s sig_faest_em_128s.c OQS_FAEST_EM_128S_AVX2)
endif()

if(OQS_ENABLE_SIG_faest_em_128f)
    faest_add_ref(em_128f sig_faest_em_128f.c OQS_FAEST_EM_128F_REF)
    faest_add_avx2(em_128f sig_faest_em_128f.c OQS_FAEST_EM_128F_AVX2)
endif()

if(OQS_ENABLE_SIG_faest_em_192s)
    faest_add_ref(em_192s sig_faest_em_192s.c OQS_FAEST_EM_192S_REF)
    faest_add_avx2(em_192s sig_faest_em_192s.c OQS_FAEST_EM_192S_AVX2)
endif()

if(OQS_ENABLE_SIG_faest_em_192f)
    faest_add_ref(em_192f sig_faest_em_192f.c OQS_FAEST_EM_192F_REF)
    faest_add_avx2(em_192f sig_faest_em_192f.c OQS_FAEST_EM_192F_AVX2)
endif()

if(OQS_ENABLE_SIG_faest_em_256s)
    faest_add_ref(em_256s sig_faest_em_256s.c OQS_FAEST_EM_256S_REF)
    faest_add_avx2(em_256s sig_faest_em_256s.c OQS_FAEST_EM_256S_AVX2)
endif()

if(OQS_ENABLE_SIG_faest_em_256f)
    faest_add_ref(em_256f sig_faest_em_256f.c OQS_FAEST_EM_256F_REF)
    faest_add_avx2(em_256f sig_faest_em_256f.c OQS_FAEST_EM_256F_AVX2)
endif()

set(FAEST_OBJS ${_FAEST_OBJS} PARENT_SCOPE)
