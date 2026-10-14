# SPDX-License-Identifier: MIT
# QR-UOV Round-3 strict-source REF+AVX2 integration. Official files inside qruov_*/{ref,avx2} are byte-for-byte unchanged.

if(NOT OQS_USE_OPENSSL)
  message(FATAL_ERROR "QR-UOV Round-3 requires OQS_USE_OPENSSL=ON")
endif()
find_package(OpenSSL 3.0 REQUIRED)
set(_QRUOV_OBJS "")

set(QRUOV_PRIVATE_SYMBOLS
    AES128_CTR_Stream
    AES128_Key_Expansion
    MAT_EVAL
    MAT_INTERP
    MAT_REEVAL
    aes128ctr_free
    aes128ctr_init
    aes128ctr_stream
    compute_hash
    compute_mu
    compute_mu_and_hash
    crypto_sign
    crypto_sign_keypair
    crypto_sign_open
    evaluate
    evaluate_q7_q7L10
    evaluate_scalar_q7L10
    fq_eval_transpose_planes
    fql_aos_to_eval_transposed_soa
    fql_aos_to_eval_vnni
    fql_aos_to_soa
    fql_aos_to_vnni
    fql_compact_sym_aos_to_eval_vnni
    fql_compact_sym_aos_to_vnni
    fql_matmul_eval_vnni_fast
    fql_matmul_vnni_fast
    fql_soa_to_aos_permute
    fql_soa_to_aos_permute_double
    interpolate
    interpolate_avx2_q127L10
    interpolate_avx2_q127L3
    interpolate_q31_q31L10
    interpolate_q31_q31L3
    interpolate_q7_q7L10
    interpolate_scalar_q127L10
    interpolate_scalar_q127L3
    interpolate_scalar_q31L10
    interpolate_scalar_q31L3
    interpolate_scalar_q7L10
    linsys_check_consistency
    linsys_check_prepared_consistency
    linsys_lu_decompose
    linsys_prepare_consistency
    linsys_sample_solution
    load_fq_checked
    matmulfq_vnni_4x16
    matmulfq_vnni_4x4
    matmulfq_vnni_4x6
    matmulfq_vnni_4x7
    matmulfq_vnni_4x8
    matmulfql_symmetric_upper
    matmulfql_vnni_1x4
    matmulfql_vnni_1x6
    matmulfql_vnni_1x7
    matmulfql_vnni_1x8
    p3_store_upper_MxM
    prepare_pi1_coeffs_from_prg
    prepare_pi1_from_prg
    prepare_pi1_raw_from_prg
    prepare_pi2_coeffs_from_prg
    prepare_pi2_raw_from_prg
    prepare_pi2t_from_prg
    prepare_sd_from_seed
    prepare_sdt_from_sd
    prepare_sdt_from_seed
    prepare_seed_pk_from_seed
    prepare_sol_from_seed
    prepare_y_from_seed
    prg_free
    prg_init
    prg_yield
    qruov_avx2_bdepmask
    qruov_avx2_bextmask
    qruov_common_canonicalize_s
    qruov_common_is_canonical_s
    qruov_common_sig_s
    qruov_common_sign_scalar
    qruov_common_sign_solve_oil
    qruov_init
    qruov_keygen
    qruov_sign
    qruov_verify
    reevaluate
    reevaluate_avx2_q127L10
    reevaluate_avx2_q127L3
    reevaluate_q31_q31L10
    reevaluate_q31_q31L3
    reevaluate_q7_q7L10
    reevaluate_scalar_q127L10
    reevaluate_scalar_q127L3
    reevaluate_scalar_q31L10
    reevaluate_scalar_q31L3
    reevaluate_scalar_q7L10
    rejection_sample
    shake128_digestfinal
    shake128_free
    shake128_init
    shake128_update
    shake256_digestfinal
    shake256_free
    shake256_init
    shake256_reset
    shake256_squeeze
    shake256_update
    unpack_upper_to_symm_MxM
    unpack_upper_to_symm_VxV
)

function(qruov_add_variant NAME PARAM PRG BACKEND WRAPPER SELECTOR)
  string(TOLOWER "${PARAM}" PARAM_DIR)
  string(TOLOWER "${BACKEND}" BACKEND_DIR)
  set(BASE_DIR ${CMAKE_CURRENT_LIST_DIR}/qruov_${PARAM_DIR}/${BACKEND_DIR})
  file(GLOB BACKEND_SOURCES CONFIGURE_DEPENDS "${BASE_DIR}/*.c")
  add_library(${NAME}_core OBJECT ${BACKEND_SOURCES})
  target_include_directories(${NAME}_core PRIVATE ${BASE_DIR})
  target_link_libraries(${NAME}_core PRIVATE OpenSSL::Crypto)
  if(PRG STREQUAL "AES")
    set(PRG_VALUE 1)
  else()
    set(PRG_VALUE 0)
  endif()
  target_compile_definitions(${NAME}_core PRIVATE _DEFAULT_SOURCE=1 QRUOV_PARAM_${PARAM}=1 PRG_IS_AES=${PRG_VALUE}
    randombytes=oqs_sig_private_${NAME}_randombytes)
  if(BACKEND STREQUAL "AVX2")
    target_compile_definitions(${NAME}_core PRIVATE PRIM_AES_BACKEND_X86AESNI=1)
  endif()
  foreach(sym IN LISTS QRUOV_PRIVATE_SYMBOLS)
    target_compile_definitions(${NAME}_core PRIVATE "${sym}=oqs_sig_private_${NAME}_${sym}")
  endforeach()
  if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    if(BACKEND STREQUAL "AVX2")
      target_compile_options(${NAME}_core PRIVATE -O3 -march=x86-64 -mtune=generic -mavx2 -mbmi2 -maes -fno-strict-aliasing)
    elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|amd64|AMD64")
      target_compile_options(${NAME}_core PRIVATE -O3 -march=x86-64 -mtune=generic -fno-strict-aliasing)
    else()
      target_compile_options(${NAME}_core PRIVATE -O3 -fno-strict-aliasing)
    endif()
  endif()
  add_library(${NAME}_glue OBJECT ${WRAPPER})
  target_compile_definitions(${NAME}_glue PRIVATE
    ${SELECTOR}
    QRUOV_RANDOMBYTES_SYMBOL=oqs_sig_private_${NAME}_randombytes)
  set(_QRUOV_OBJS ${_QRUOV_OBJS} $<TARGET_OBJECTS:${NAME}_core> $<TARGET_OBJECTS:${NAME}_glue> PARENT_SCOPE)
endfunction()

if(OQS_ENABLE_SIG_QRUOV)
  qruov_add_variant(qruov_1q7l10_aes_ref 1q7L10 AES REF sig_qruov_1q7l10.c OQS_QRUOV_1Q7L10_AES_REF)
  qruov_add_variant(qruov_1q7l10_aes_avx2 1q7L10 AES AVX2 sig_qruov_1q7l10.c OQS_QRUOV_1Q7L10_AES_AVX2)
  qruov_add_variant(qruov_1q7l10_shake_ref 1q7L10 SHAKE REF sig_qruov_1q7l10.c OQS_QRUOV_1Q7L10_SHAKE_REF)
  qruov_add_variant(qruov_1q7l10_shake_avx2 1q7L10 SHAKE AVX2 sig_qruov_1q7l10.c OQS_QRUOV_1Q7L10_SHAKE_AVX2)
  qruov_add_variant(qruov_3q7l10_aes_ref 3q7L10 AES REF sig_qruov_3q7l10.c OQS_QRUOV_3Q7L10_AES_REF)
  qruov_add_variant(qruov_3q7l10_aes_avx2 3q7L10 AES AVX2 sig_qruov_3q7l10.c OQS_QRUOV_3Q7L10_AES_AVX2)
  qruov_add_variant(qruov_3q7l10_shake_ref 3q7L10 SHAKE REF sig_qruov_3q7l10.c OQS_QRUOV_3Q7L10_SHAKE_REF)
  qruov_add_variant(qruov_3q7l10_shake_avx2 3q7L10 SHAKE AVX2 sig_qruov_3q7l10.c OQS_QRUOV_3Q7L10_SHAKE_AVX2)
  qruov_add_variant(qruov_5q7l10_aes_ref 5q7L10 AES REF sig_qruov_5q7l10.c OQS_QRUOV_5Q7L10_AES_REF)
  qruov_add_variant(qruov_5q7l10_aes_avx2 5q7L10 AES AVX2 sig_qruov_5q7l10.c OQS_QRUOV_5Q7L10_AES_AVX2)
  qruov_add_variant(qruov_5q7l10_shake_ref 5q7L10 SHAKE REF sig_qruov_5q7l10.c OQS_QRUOV_5Q7L10_SHAKE_REF)
  qruov_add_variant(qruov_5q7l10_shake_avx2 5q7L10 SHAKE AVX2 sig_qruov_5q7l10.c OQS_QRUOV_5Q7L10_SHAKE_AVX2)
  qruov_add_variant(qruov_1q31l3_aes_ref 1q31L3 AES REF sig_qruov_1q31l3.c OQS_QRUOV_1Q31L3_AES_REF)
  qruov_add_variant(qruov_1q31l3_aes_avx2 1q31L3 AES AVX2 sig_qruov_1q31l3.c OQS_QRUOV_1Q31L3_AES_AVX2)
  qruov_add_variant(qruov_1q31l3_shake_ref 1q31L3 SHAKE REF sig_qruov_1q31l3.c OQS_QRUOV_1Q31L3_SHAKE_REF)
  qruov_add_variant(qruov_1q31l3_shake_avx2 1q31L3 SHAKE AVX2 sig_qruov_1q31l3.c OQS_QRUOV_1Q31L3_SHAKE_AVX2)
  qruov_add_variant(qruov_3q31l3_aes_ref 3q31L3 AES REF sig_qruov_3q31l3.c OQS_QRUOV_3Q31L3_AES_REF)
  qruov_add_variant(qruov_3q31l3_aes_avx2 3q31L3 AES AVX2 sig_qruov_3q31l3.c OQS_QRUOV_3Q31L3_AES_AVX2)
  qruov_add_variant(qruov_3q31l3_shake_ref 3q31L3 SHAKE REF sig_qruov_3q31l3.c OQS_QRUOV_3Q31L3_SHAKE_REF)
  qruov_add_variant(qruov_3q31l3_shake_avx2 3q31L3 SHAKE AVX2 sig_qruov_3q31l3.c OQS_QRUOV_3Q31L3_SHAKE_AVX2)
  qruov_add_variant(qruov_5q31l3_aes_ref 5q31L3 AES REF sig_qruov_5q31l3.c OQS_QRUOV_5Q31L3_AES_REF)
  qruov_add_variant(qruov_5q31l3_aes_avx2 5q31L3 AES AVX2 sig_qruov_5q31l3.c OQS_QRUOV_5Q31L3_AES_AVX2)
  qruov_add_variant(qruov_5q31l3_shake_ref 5q31L3 SHAKE REF sig_qruov_5q31l3.c OQS_QRUOV_5Q31L3_SHAKE_REF)
  qruov_add_variant(qruov_5q31l3_shake_avx2 5q31L3 SHAKE AVX2 sig_qruov_5q31l3.c OQS_QRUOV_5Q31L3_SHAKE_AVX2)
  qruov_add_variant(qruov_1q31l10_aes_ref 1q31L10 AES REF sig_qruov_1q31l10.c OQS_QRUOV_1Q31L10_AES_REF)
  qruov_add_variant(qruov_1q31l10_aes_avx2 1q31L10 AES AVX2 sig_qruov_1q31l10.c OQS_QRUOV_1Q31L10_AES_AVX2)
  qruov_add_variant(qruov_1q31l10_shake_ref 1q31L10 SHAKE REF sig_qruov_1q31l10.c OQS_QRUOV_1Q31L10_SHAKE_REF)
  qruov_add_variant(qruov_1q31l10_shake_avx2 1q31L10 SHAKE AVX2 sig_qruov_1q31l10.c OQS_QRUOV_1Q31L10_SHAKE_AVX2)
  qruov_add_variant(qruov_3q31l10_aes_ref 3q31L10 AES REF sig_qruov_3q31l10.c OQS_QRUOV_3Q31L10_AES_REF)
  qruov_add_variant(qruov_3q31l10_aes_avx2 3q31L10 AES AVX2 sig_qruov_3q31l10.c OQS_QRUOV_3Q31L10_AES_AVX2)
  qruov_add_variant(qruov_3q31l10_shake_ref 3q31L10 SHAKE REF sig_qruov_3q31l10.c OQS_QRUOV_3Q31L10_SHAKE_REF)
  qruov_add_variant(qruov_3q31l10_shake_avx2 3q31L10 SHAKE AVX2 sig_qruov_3q31l10.c OQS_QRUOV_3Q31L10_SHAKE_AVX2)
  qruov_add_variant(qruov_5q31l10_aes_ref 5q31L10 AES REF sig_qruov_5q31l10.c OQS_QRUOV_5Q31L10_AES_REF)
  qruov_add_variant(qruov_5q31l10_aes_avx2 5q31L10 AES AVX2 sig_qruov_5q31l10.c OQS_QRUOV_5Q31L10_AES_AVX2)
  qruov_add_variant(qruov_5q31l10_shake_ref 5q31L10 SHAKE REF sig_qruov_5q31l10.c OQS_QRUOV_5Q31L10_SHAKE_REF)
  qruov_add_variant(qruov_5q31l10_shake_avx2 5q31L10 SHAKE AVX2 sig_qruov_5q31l10.c OQS_QRUOV_5Q31L10_SHAKE_AVX2)
  qruov_add_variant(qruov_1q127l3_aes_ref 1q127L3 AES REF sig_qruov_1q127l3.c OQS_QRUOV_1Q127L3_AES_REF)
  qruov_add_variant(qruov_1q127l3_aes_avx2 1q127L3 AES AVX2 sig_qruov_1q127l3.c OQS_QRUOV_1Q127L3_AES_AVX2)
  qruov_add_variant(qruov_1q127l3_shake_ref 1q127L3 SHAKE REF sig_qruov_1q127l3.c OQS_QRUOV_1Q127L3_SHAKE_REF)
  qruov_add_variant(qruov_1q127l3_shake_avx2 1q127L3 SHAKE AVX2 sig_qruov_1q127l3.c OQS_QRUOV_1Q127L3_SHAKE_AVX2)
  qruov_add_variant(qruov_3q127l3_aes_ref 3q127L3 AES REF sig_qruov_3q127l3.c OQS_QRUOV_3Q127L3_AES_REF)
  qruov_add_variant(qruov_3q127l3_aes_avx2 3q127L3 AES AVX2 sig_qruov_3q127l3.c OQS_QRUOV_3Q127L3_AES_AVX2)
  qruov_add_variant(qruov_3q127l3_shake_ref 3q127L3 SHAKE REF sig_qruov_3q127l3.c OQS_QRUOV_3Q127L3_SHAKE_REF)
  qruov_add_variant(qruov_3q127l3_shake_avx2 3q127L3 SHAKE AVX2 sig_qruov_3q127l3.c OQS_QRUOV_3Q127L3_SHAKE_AVX2)
  qruov_add_variant(qruov_5q127l3_aes_ref 5q127L3 AES REF sig_qruov_5q127l3.c OQS_QRUOV_5Q127L3_AES_REF)
  qruov_add_variant(qruov_5q127l3_aes_avx2 5q127L3 AES AVX2 sig_qruov_5q127l3.c OQS_QRUOV_5Q127L3_AES_AVX2)
  qruov_add_variant(qruov_5q127l3_shake_ref 5q127L3 SHAKE REF sig_qruov_5q127l3.c OQS_QRUOV_5Q127L3_SHAKE_REF)
  qruov_add_variant(qruov_5q127l3_shake_avx2 5q127L3 SHAKE AVX2 sig_qruov_5q127l3.c OQS_QRUOV_5Q127L3_SHAKE_AVX2)
  qruov_add_variant(qruov_1q127l10_aes_ref 1q127L10 AES REF sig_qruov_1q127l10.c OQS_QRUOV_1Q127L10_AES_REF)
  qruov_add_variant(qruov_1q127l10_aes_avx2 1q127L10 AES AVX2 sig_qruov_1q127l10.c OQS_QRUOV_1Q127L10_AES_AVX2)
  qruov_add_variant(qruov_1q127l10_shake_ref 1q127L10 SHAKE REF sig_qruov_1q127l10.c OQS_QRUOV_1Q127L10_SHAKE_REF)
  qruov_add_variant(qruov_1q127l10_shake_avx2 1q127L10 SHAKE AVX2 sig_qruov_1q127l10.c OQS_QRUOV_1Q127L10_SHAKE_AVX2)
  qruov_add_variant(qruov_3q127l10_aes_ref 3q127L10 AES REF sig_qruov_3q127l10.c OQS_QRUOV_3Q127L10_AES_REF)
  qruov_add_variant(qruov_3q127l10_aes_avx2 3q127L10 AES AVX2 sig_qruov_3q127l10.c OQS_QRUOV_3Q127L10_AES_AVX2)
  qruov_add_variant(qruov_3q127l10_shake_ref 3q127L10 SHAKE REF sig_qruov_3q127l10.c OQS_QRUOV_3Q127L10_SHAKE_REF)
  qruov_add_variant(qruov_3q127l10_shake_avx2 3q127L10 SHAKE AVX2 sig_qruov_3q127l10.c OQS_QRUOV_3Q127L10_SHAKE_AVX2)
  qruov_add_variant(qruov_5q127l10_aes_ref 5q127L10 AES REF sig_qruov_5q127l10.c OQS_QRUOV_5Q127L10_AES_REF)
  qruov_add_variant(qruov_5q127l10_aes_avx2 5q127L10 AES AVX2 sig_qruov_5q127l10.c OQS_QRUOV_5Q127L10_AES_AVX2)
  qruov_add_variant(qruov_5q127l10_shake_ref 5q127L10 SHAKE REF sig_qruov_5q127l10.c OQS_QRUOV_5Q127L10_SHAKE_REF)
  qruov_add_variant(qruov_5q127l10_shake_avx2 5q127L10 SHAKE AVX2 sig_qruov_5q127l10.c OQS_QRUOV_5Q127L10_SHAKE_AVX2)
endif()
set(QRUOV_OBJS ${_QRUOV_OBJS} PARENT_SCOPE)
