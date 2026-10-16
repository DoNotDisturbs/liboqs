# SPDX-License-Identifier: MIT
#
# SDitH NIST Round-3 liboqs integration.
#
# Layout:
#   - 12 top-level sig_sdith_<parameter>.c wrapper files.
#   - each wrapper is compiled twice: REF and AVX2.
#   - 24 explicit native source directories remain, one per public method.
#   - official source under each variant's src/ and lib/ is byte-for-byte NIST.
#   - one internal sdith_namespace.h is force-included by CMake.
#

set(_SDITH_OBJS "")
set(SDITH_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/sdith_namespace.h)
set(SDITH_FORCE_AVX2_HEADER ${CMAKE_CURRENT_LIST_DIR}/sdith_force_avx2.h)

set(SDITH_PORTABLE_REL_SOURCES
    src/commons.c
    src/ct_utils.c
    src/gf128.c
    src/gf192.c
    src/gf256.c
    src/ggm.c
    src/matrix_transpose_f2.c
    src/matrix_vector_products_f2.c
    src/piop_circuit.c
    src/rsd.c
    src/sdith_prng.c
    src/sdith_signature.c
    src/sdith_signature_parameters.c
    src/vole_expansion.c
    src/vole_parameters.c
    src/vole_to_piop.c
    lib/aes/rijndael256.c
    lib/aes/aes_ansi_littleendian_ref.c
    lib/aes/aes128_ctrle_special_ref.c
    lib/aes/rijndael256_ctrle_special_ref.c
    lib/sha3/KeccakHash.c
    lib/sha3/KeccakSponge.c
    lib/sha3/KeccakSpongetimes4.c
    lib/sha3/KeccakHashtimes4.c
)

set(SDITH_REF_EXTRA_REL_SOURCES
    lib/sha3/opt64/KeccakP-1600-opt64.c
    lib/sha3/opt64/KeccakP-1600-times4-on1.c
)

set(SDITH_AVX2_EXTRA_REL_SOURCES
    src/ct_utils_avx2.c
    src/gf128_avx2.c
    src/gf192_avx2.c
    src/gf256_avx2.c
    src/matrix_vector_products_f2_avx2.c
    src/sdith_prng_avx2.c
    src/vole_parameters_avx2.c
    lib/aes/rijndael256_avx.c
    lib/aes/aes128_ctrle_special_avx2.c
    lib/aes/rijndael256_ctrle_special_avx2.c
    lib/sha3/avx2/KeccakP-1600-AVX2.s
    lib/sha3/avx2/KeccakP-1600-times4-SIMD256.c
)

function(sdith_add_variant NAME PARAM BACKEND WRAPPER SELECTOR)
    set(DIR ${CMAKE_CURRENT_LIST_DIR}/${NAME})
    set(NS_PREFIX oqs_${NAME}_)

    set(CORE_SOURCES "")
    foreach(SRC IN LISTS SDITH_PORTABLE_REL_SOURCES)
        list(APPEND CORE_SOURCES ${DIR}/${SRC})
    endforeach()

    if(BACKEND STREQUAL "REF")
        foreach(SRC IN LISTS SDITH_REF_EXTRA_REL_SOURCES)
            list(APPEND CORE_SOURCES ${DIR}/${SRC})
        endforeach()
    elseif(BACKEND STREQUAL "AVX2")
        if(NOT CMAKE_SYSTEM_PROCESSOR MATCHES "(x86_64|amd64|AMD64)")
            message(FATAL_ERROR "${NAME} requires x86-64 AVX2/AES-NI/PCLMUL")
        endif()
        if(WIN32)
            message(FATAL_ERROR "${NAME} is currently wired for Unix-like x86-64 builds")
        endif()
        enable_language(ASM)
        foreach(SRC IN LISTS SDITH_AVX2_EXTRA_REL_SOURCES)
            list(APPEND CORE_SOURCES ${DIR}/${SRC})
        endforeach()
    else()
        message(FATAL_ERROR "Unknown SDitH backend '${BACKEND}'")
    endif()

    add_library(${NAME}_core OBJECT ${CORE_SOURCES})
    target_include_directories(${NAME}_core PRIVATE
        ${DIR}/src
        ${DIR}/lib/aes
        ${DIR}/lib/sha3
    )
    target_compile_definitions(${NAME}_core PRIVATE
        NDEBUG
        OQS_SDITH_NAMESPACE_PREFIX=${NS_PREFIX}
    )
    target_compile_options(${NAME}_core PRIVATE
        "-include" "${SDITH_NAMESPACE_HEADER}"
    )

    if(BACKEND STREQUAL "REF")
        target_include_directories(${NAME}_core PRIVATE ${DIR}/lib/sha3/opt64)
        target_compile_definitions(${NAME}_core PRIVATE ONLY_REF_IMPLEMENTATION)
    else()
        target_include_directories(${NAME}_core PRIVATE ${DIR}/lib/sha3/avx2)
        target_compile_definitions(${NAME}_core PRIVATE OQS_SDITH_AVX2_BACKEND=1)

        # Force only sdith_signature.c onto the official AVX2 initializer.
        # Both headers are integration-only forced includes. No NIST source edit.
        set_source_files_properties(
            ${DIR}/src/sdith_signature.c
            PROPERTIES COMPILE_OPTIONS "-include;${SDITH_FORCE_AVX2_HEADER}"
        )

        set(_SDITH_AVX2_C_FILES
            ${DIR}/src/ct_utils_avx2.c
            ${DIR}/src/gf128_avx2.c
            ${DIR}/src/gf192_avx2.c
            ${DIR}/src/gf256_avx2.c
            ${DIR}/src/matrix_vector_products_f2_avx2.c
            ${DIR}/src/sdith_prng_avx2.c
            ${DIR}/src/vole_parameters_avx2.c
            ${DIR}/lib/aes/rijndael256_avx.c
            ${DIR}/lib/aes/aes128_ctrle_special_avx2.c
            ${DIR}/lib/aes/rijndael256_ctrle_special_avx2.c
            ${DIR}/lib/sha3/avx2/KeccakP-1600-times4-SIMD256.c
        )
        set_source_files_properties(
            ${_SDITH_AVX2_C_FILES}
            PROPERTIES COMPILE_OPTIONS "-mavx2;-maes;-mpclmul;-msse2"
        )

        # Official source uses lower-case .s. Force the C preprocessor so the
        # shared namespace header can rename assembly globals without editing it.
        set_source_files_properties(
            ${DIR}/lib/sha3/avx2/KeccakP-1600-AVX2.s
            PROPERTIES COMPILE_OPTIONS "-x;assembler-with-cpp;-mavx2;-mpclmul;-msse2"
        )
    endif()

    add_library(${NAME}_glue OBJECT ${CMAKE_CURRENT_LIST_DIR}/${WRAPPER})
    target_include_directories(${NAME}_glue PRIVATE
        ${DIR}/src
        ${CMAKE_CURRENT_LIST_DIR}
    )
    target_compile_definitions(${NAME}_glue PRIVATE
        ${SELECTOR}
        OQS_SDITH_NAMESPACE_PREFIX=${NS_PREFIX}
    )
    target_compile_options(${NAME}_glue PRIVATE
        "-include" "${SDITH_NAMESPACE_HEADER}"
    )
    if(BACKEND STREQUAL "AVX2")
        target_compile_options(${NAME}_glue PRIVATE -mavx2 -maes -mpclmul -msse2)
    endif()

    set(_SDITH_OBJS ${_SDITH_OBJS}
        $<TARGET_OBJECTS:${NAME}_core>
        $<TARGET_OBJECTS:${NAME}_glue>
        PARENT_SCOPE
    )
endfunction()

if(OQS_ENABLE_SIG_sdith_cat1_fast_cipherpow_ref)
    sdith_add_variant(sdith_cat1_fast_cipherpow_ref cat1_fast_cipherpow REF sig_sdith_cat1_fast_cipherpow.c OQS_SDITH_CAT1_FAST_CIPHERPOW_REF)
endif()
if(OQS_ENABLE_SIG_sdith_cat1_fast_cipherpow_avx2)
    sdith_add_variant(sdith_cat1_fast_cipherpow_avx2 cat1_fast_cipherpow AVX2 sig_sdith_cat1_fast_cipherpow.c OQS_SDITH_CAT1_FAST_CIPHERPOW_AVX2)
endif()

if(OQS_ENABLE_SIG_sdith_cat1_fast_ref)
    sdith_add_variant(sdith_cat1_fast_ref cat1_fast REF sig_sdith_cat1_fast.c OQS_SDITH_CAT1_FAST_REF)
endif()
if(OQS_ENABLE_SIG_sdith_cat1_fast_avx2)
    sdith_add_variant(sdith_cat1_fast_avx2 cat1_fast AVX2 sig_sdith_cat1_fast.c OQS_SDITH_CAT1_FAST_AVX2)
endif()

if(OQS_ENABLE_SIG_sdith_cat1_short_cipherpow_ref)
    sdith_add_variant(sdith_cat1_short_cipherpow_ref cat1_short_cipherpow REF sig_sdith_cat1_short_cipherpow.c OQS_SDITH_CAT1_SHORT_CIPHERPOW_REF)
endif()
if(OQS_ENABLE_SIG_sdith_cat1_short_cipherpow_avx2)
    sdith_add_variant(sdith_cat1_short_cipherpow_avx2 cat1_short_cipherpow AVX2 sig_sdith_cat1_short_cipherpow.c OQS_SDITH_CAT1_SHORT_CIPHERPOW_AVX2)
endif()

if(OQS_ENABLE_SIG_sdith_cat1_short_ref)
    sdith_add_variant(sdith_cat1_short_ref cat1_short REF sig_sdith_cat1_short.c OQS_SDITH_CAT1_SHORT_REF)
endif()
if(OQS_ENABLE_SIG_sdith_cat1_short_avx2)
    sdith_add_variant(sdith_cat1_short_avx2 cat1_short AVX2 sig_sdith_cat1_short.c OQS_SDITH_CAT1_SHORT_AVX2)
endif()

if(OQS_ENABLE_SIG_sdith_cat3_fast_cipherpow_ref)
    sdith_add_variant(sdith_cat3_fast_cipherpow_ref cat3_fast_cipherpow REF sig_sdith_cat3_fast_cipherpow.c OQS_SDITH_CAT3_FAST_CIPHERPOW_REF)
endif()
if(OQS_ENABLE_SIG_sdith_cat3_fast_cipherpow_avx2)
    sdith_add_variant(sdith_cat3_fast_cipherpow_avx2 cat3_fast_cipherpow AVX2 sig_sdith_cat3_fast_cipherpow.c OQS_SDITH_CAT3_FAST_CIPHERPOW_AVX2)
endif()

if(OQS_ENABLE_SIG_sdith_cat3_fast_ref)
    sdith_add_variant(sdith_cat3_fast_ref cat3_fast REF sig_sdith_cat3_fast.c OQS_SDITH_CAT3_FAST_REF)
endif()
if(OQS_ENABLE_SIG_sdith_cat3_fast_avx2)
    sdith_add_variant(sdith_cat3_fast_avx2 cat3_fast AVX2 sig_sdith_cat3_fast.c OQS_SDITH_CAT3_FAST_AVX2)
endif()

if(OQS_ENABLE_SIG_sdith_cat3_short_cipherpow_ref)
    sdith_add_variant(sdith_cat3_short_cipherpow_ref cat3_short_cipherpow REF sig_sdith_cat3_short_cipherpow.c OQS_SDITH_CAT3_SHORT_CIPHERPOW_REF)
endif()
if(OQS_ENABLE_SIG_sdith_cat3_short_cipherpow_avx2)
    sdith_add_variant(sdith_cat3_short_cipherpow_avx2 cat3_short_cipherpow AVX2 sig_sdith_cat3_short_cipherpow.c OQS_SDITH_CAT3_SHORT_CIPHERPOW_AVX2)
endif()

if(OQS_ENABLE_SIG_sdith_cat3_short_ref)
    sdith_add_variant(sdith_cat3_short_ref cat3_short REF sig_sdith_cat3_short.c OQS_SDITH_CAT3_SHORT_REF)
endif()
if(OQS_ENABLE_SIG_sdith_cat3_short_avx2)
    sdith_add_variant(sdith_cat3_short_avx2 cat3_short AVX2 sig_sdith_cat3_short.c OQS_SDITH_CAT3_SHORT_AVX2)
endif()

if(OQS_ENABLE_SIG_sdith_cat5_fast_cipherpow_ref)
    sdith_add_variant(sdith_cat5_fast_cipherpow_ref cat5_fast_cipherpow REF sig_sdith_cat5_fast_cipherpow.c OQS_SDITH_CAT5_FAST_CIPHERPOW_REF)
endif()
if(OQS_ENABLE_SIG_sdith_cat5_fast_cipherpow_avx2)
    sdith_add_variant(sdith_cat5_fast_cipherpow_avx2 cat5_fast_cipherpow AVX2 sig_sdith_cat5_fast_cipherpow.c OQS_SDITH_CAT5_FAST_CIPHERPOW_AVX2)
endif()

if(OQS_ENABLE_SIG_sdith_cat5_fast_ref)
    sdith_add_variant(sdith_cat5_fast_ref cat5_fast REF sig_sdith_cat5_fast.c OQS_SDITH_CAT5_FAST_REF)
endif()
if(OQS_ENABLE_SIG_sdith_cat5_fast_avx2)
    sdith_add_variant(sdith_cat5_fast_avx2 cat5_fast AVX2 sig_sdith_cat5_fast.c OQS_SDITH_CAT5_FAST_AVX2)
endif()

if(OQS_ENABLE_SIG_sdith_cat5_short_cipherpow_ref)
    sdith_add_variant(sdith_cat5_short_cipherpow_ref cat5_short_cipherpow REF sig_sdith_cat5_short_cipherpow.c OQS_SDITH_CAT5_SHORT_CIPHERPOW_REF)
endif()
if(OQS_ENABLE_SIG_sdith_cat5_short_cipherpow_avx2)
    sdith_add_variant(sdith_cat5_short_cipherpow_avx2 cat5_short_cipherpow AVX2 sig_sdith_cat5_short_cipherpow.c OQS_SDITH_CAT5_SHORT_CIPHERPOW_AVX2)
endif()

if(OQS_ENABLE_SIG_sdith_cat5_short_ref)
    sdith_add_variant(sdith_cat5_short_ref cat5_short REF sig_sdith_cat5_short.c OQS_SDITH_CAT5_SHORT_REF)
endif()
if(OQS_ENABLE_SIG_sdith_cat5_short_avx2)
    sdith_add_variant(sdith_cat5_short_avx2 cat5_short AVX2 sig_sdith_cat5_short.c OQS_SDITH_CAT5_SHORT_AVX2)
endif()

set(SDITH_OBJS ${_SDITH_OBJS} PARENT_SCOPE)
