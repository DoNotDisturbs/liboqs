# SPDX-License-Identifier: MIT
#
# SDitH Round 3 liboqs integration for the per-variant source layout.
#
# *_ref : portable/reference implementation only
# *_opt : x86-64 AVX2/AES-NI optimized implementation
#
# Native keygen/sign/verify adaptation is integrated into sig_sdith_cat*.c.

set(_SDITH_OBJS "")

set(SDITH_PORTABLE_REL_SOURCES
        commons.c
        ct_utils.c
        gf128.c
        gf192.c
        gf256.c
        ggm.c
        matrix_transpose_f2.c
        matrix_vector_products_f2.c
        piop_circuit.c
        rsd.c
        sdith_prng.c
        sdith_signature.c
        sdith_signature_parameters.c
        vole_expansion.c
        vole_parameters.c
        vole_to_piop.c

        lib/aes/aes_ansi_littleendian_ref.c
        lib/aes/aes128_ctrle_special_ref.c
        lib/aes/rijndael256.c
        lib/aes/rijndael256_ctrle_special_ref.c

        lib/sha3/KeccakHash.c
        lib/sha3/KeccakHashtimes4.c
        lib/sha3/KeccakSponge.c
        lib/sha3/KeccakSpongetimes4.c
)

set(SDITH_AVX2_REL_SOURCES
        ct_utils_avx2.c
        gf128_avx2.c
        gf192_avx2.c
        gf256_avx2.c
        matrix_vector_products_f2_avx2.c
        sdith_prng_avx2.c
        vole_parameters_avx2.c

        lib/aes/aes128_ctrle_special_avx2.c
        lib/aes/rijndael256_avx.c
        lib/aes/rijndael256_ctrle_special_avx2.c

        lib/sha3/avx2/KeccakP-1600-times4-SIMD256.c
)

set(SDITH_SHA3_REF_REL_SOURCES
        lib/sha3/opt64/KeccakP-1600-opt64.c
        lib/sha3/opt64/KeccakP-1600-times4-on1.c
)

set(SDITH_SHA3_AVX2_SINGLE_REL_SOURCES
        lib/sha3/opt64/KeccakP-1600-opt64.c
)

function(sdith_add_variant NAME LEVEL PK SK SIG_BYTES PARAMS BACKEND WRAPPER SELECTOR)
    set(DIR ${CMAKE_CURRENT_LIST_DIR}/${NAME})
    set(NAMESPACE_HEADER ${DIR}/namespace_${NAME}.h)

    set(CORE_SOURCES "")
    foreach(SRC IN LISTS SDITH_PORTABLE_REL_SOURCES)
        list(APPEND CORE_SOURCES ${NAME}/${SRC})
    endforeach()

    if(BACKEND STREQUAL "REF")
        foreach(SRC IN LISTS SDITH_SHA3_REF_REL_SOURCES)
            list(APPEND CORE_SOURCES ${NAME}/${SRC})
        endforeach()
    elseif(BACKEND STREQUAL "AVX2")
        foreach(SRC IN LISTS SDITH_AVX2_REL_SOURCES)
            list(APPEND CORE_SOURCES ${NAME}/${SRC})
        endforeach()
        foreach(SRC IN LISTS SDITH_SHA3_AVX2_SINGLE_REL_SOURCES)
            list(APPEND CORE_SOURCES ${NAME}/${SRC})
        endforeach()
    else()
        message(FATAL_ERROR "Unknown SDitH backend '${BACKEND}' for ${NAME}")
    endif()

    add_library(${NAME}_core OBJECT ${CORE_SOURCES})
    target_include_directories(${NAME}_core PRIVATE
        ${DIR}
        ${DIR}/lib
        ${DIR}/lib/aes
        ${DIR}/lib/sha3
    )

    if(BACKEND STREQUAL "REF")
        target_include_directories(${NAME}_core PRIVATE ${DIR}/lib/sha3/opt64)
        target_compile_definitions(${NAME}_core PRIVATE
            ONLY_REF_IMPLEMENTATION
            NDEBUG
        )
    else()
        target_include_directories(${NAME}_core PRIVATE
            ${DIR}/lib/sha3/avx2
            ${DIR}/lib/sha3/opt64
        )
        target_compile_definitions(${NAME}_core PRIVATE NDEBUG)
        target_compile_options(${NAME}_core PRIVATE
            -mavx2 -mavx -maes -mpclmul
        )
    endif()

    target_compile_options(${NAME}_core PRIVATE
        "-include" ${NAMESPACE_HEADER}
    )

    add_library(${NAME}_glue OBJECT ${WRAPPER})
    target_include_directories(${NAME}_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${DIR}
    )
    target_compile_options(${NAME}_glue PRIVATE
        "-include" ${NAMESPACE_HEADER}
    )
    target_compile_definitions(${NAME}_glue PRIVATE
        ${SELECTOR}
        CRYPTO_PUBLICKEYBYTES=${PK}
        CRYPTO_SECRETKEYBYTES=${SK}
        CRYPTO_BYTES=${SIG_BYTES}
        SIGNATURE_PARAMS=${PARAMS}
    )

    if(BACKEND STREQUAL "REF")
        target_compile_definitions(${NAME}_glue PRIVATE ONLY_REF_IMPLEMENTATION)
    else()
        target_compile_options(${NAME}_glue PRIVATE
            -mavx2 -mavx -maes -mpclmul
        )
    endif()

    set(_SDITH_OBJS ${_SDITH_OBJS}
        $<TARGET_OBJECTS:${NAME}_core>
        $<TARGET_OBJECTS:${NAME}_glue>
        PARENT_SCOPE
    )
endfunction()

if(OQS_ENABLE_SIG_sdith_cat1_fast_cipherpow_opt)
    sdith_add_variant(sdith_cat1_fast_cipherpow_opt 1 70 147 4643 CAT1_FAST_CIPHERPOW_PARAMETERS AVX2 sig_sdith_cat1.c OQS_SDITH_CAT1_FAST_CIPHERPOW_OPT)
endif()

if(OQS_ENABLE_SIG_sdith_cat1_fast_cipherpow_ref)
    sdith_add_variant(sdith_cat1_fast_cipherpow_ref 1 70 147 4643 CAT1_FAST_CIPHERPOW_PARAMETERS REF sig_sdith_cat1.c OQS_SDITH_CAT1_FAST_CIPHERPOW_REF)
endif()

if(OQS_ENABLE_SIG_sdith_cat1_fast_opt)
    sdith_add_variant(sdith_cat1_fast_opt 1 70 147 4914 CAT1_FAST_PARAMETERS AVX2 sig_sdith_cat1.c OQS_SDITH_CAT1_FAST_OPT)
endif()

if(OQS_ENABLE_SIG_sdith_cat1_fast_ref)
    sdith_add_variant(sdith_cat1_fast_ref 1 70 147 4914 CAT1_FAST_PARAMETERS REF sig_sdith_cat1.c OQS_SDITH_CAT1_FAST_REF)
endif()

if(OQS_ENABLE_SIG_sdith_cat1_short_cipherpow_opt)
    sdith_add_variant(sdith_cat1_short_cipherpow_opt 1 70 147 3721 CAT1_SHORT_CIPHERPOW_PARAMETERS AVX2 sig_sdith_cat1.c OQS_SDITH_CAT1_SHORT_CIPHERPOW_OPT)
endif()

if(OQS_ENABLE_SIG_sdith_cat1_short_cipherpow_ref)
    sdith_add_variant(sdith_cat1_short_cipherpow_ref 1 70 147 3721 CAT1_SHORT_CIPHERPOW_PARAMETERS REF sig_sdith_cat1.c OQS_SDITH_CAT1_SHORT_CIPHERPOW_REF)
endif()

if(OQS_ENABLE_SIG_sdith_cat1_short_opt)
    sdith_add_variant(sdith_cat1_short_opt 1 70 147 3721 CAT1_SHORT_PARAMETERS AVX2 sig_sdith_cat1.c OQS_SDITH_CAT1_SHORT_OPT)
endif()

if(OQS_ENABLE_SIG_sdith_cat1_short_ref)
    sdith_add_variant(sdith_cat1_short_ref 1 70 147 3721 CAT1_SHORT_PARAMETERS REF sig_sdith_cat1.c OQS_SDITH_CAT1_SHORT_REF)
endif()

if(OQS_ENABLE_SIG_sdith_cat3_fast_cipherpow_opt)
    sdith_add_variant(sdith_cat3_fast_cipherpow_opt 3 98 208 10452 CAT3_FAST_CIPHERPOW_PARAMETERS AVX2 sig_sdith_cat3.c OQS_SDITH_CAT3_FAST_CIPHERPOW_OPT)
endif()

if(OQS_ENABLE_SIG_sdith_cat3_fast_cipherpow_ref)
    sdith_add_variant(sdith_cat3_fast_cipherpow_ref 3 98 208 10452 CAT3_FAST_CIPHERPOW_PARAMETERS REF sig_sdith_cat3.c OQS_SDITH_CAT3_FAST_CIPHERPOW_REF)
endif()

if(OQS_ENABLE_SIG_sdith_cat3_fast_opt)
    sdith_add_variant(sdith_cat3_fast_opt 3 98 208 10852 CAT3_FAST_PARAMETERS AVX2 sig_sdith_cat3.c OQS_SDITH_CAT3_FAST_OPT)
endif()

if(OQS_ENABLE_SIG_sdith_cat3_fast_ref)
    sdith_add_variant(sdith_cat3_fast_ref 3 98 208 10852 CAT3_FAST_PARAMETERS REF sig_sdith_cat3.c OQS_SDITH_CAT3_FAST_REF)
endif()

if(OQS_ENABLE_SIG_sdith_cat3_short_cipherpow_opt)
    sdith_add_variant(sdith_cat3_short_cipherpow_opt 3 98 208 8484 CAT3_SHORT_CIPHERPOW_PARAMETERS AVX2 sig_sdith_cat3.c OQS_SDITH_CAT3_SHORT_CIPHERPOW_OPT)
endif()

if(OQS_ENABLE_SIG_sdith_cat3_short_cipherpow_ref)
    sdith_add_variant(sdith_cat3_short_cipherpow_ref 3 98 208 8484 CAT3_SHORT_CIPHERPOW_PARAMETERS REF sig_sdith_cat3.c OQS_SDITH_CAT3_SHORT_CIPHERPOW_REF)
endif()

if(OQS_ENABLE_SIG_sdith_cat3_short_opt)
    sdith_add_variant(sdith_cat3_short_opt 3 98 208 8484 CAT3_SHORT_PARAMETERS AVX2 sig_sdith_cat3.c OQS_SDITH_CAT3_SHORT_OPT)
endif()

if(OQS_ENABLE_SIG_sdith_cat3_short_ref)
    sdith_add_variant(sdith_cat3_short_ref 3 98 208 8484 CAT3_SHORT_PARAMETERS REF sig_sdith_cat3.c OQS_SDITH_CAT3_SHORT_REF)
endif()

if(OQS_ENABLE_SIG_sdith_cat5_fast_cipherpow_opt)
    sdith_add_variant(sdith_cat5_fast_cipherpow_opt 5 132 275 19144 CAT5_FAST_CIPHERPOW_PARAMETERS AVX2 sig_sdith_cat5.c OQS_SDITH_CAT5_FAST_CIPHERPOW_OPT)
endif()

if(OQS_ENABLE_SIG_sdith_cat5_fast_cipherpow_ref)
    sdith_add_variant(sdith_cat5_fast_cipherpow_ref 5 132 275 19144 CAT5_FAST_CIPHERPOW_PARAMETERS REF sig_sdith_cat5.c OQS_SDITH_CAT5_FAST_CIPHERPOW_REF)
endif()

if(OQS_ENABLE_SIG_sdith_cat5_fast_opt)
    sdith_add_variant(sdith_cat5_fast_opt 5 132 275 19144 CAT5_FAST_PARAMETERS AVX2 sig_sdith_cat5.c OQS_SDITH_CAT5_FAST_OPT)
endif()

if(OQS_ENABLE_SIG_sdith_cat5_fast_ref)
    sdith_add_variant(sdith_cat5_fast_ref 5 132 275 19144 CAT5_FAST_PARAMETERS REF sig_sdith_cat5.c OQS_SDITH_CAT5_FAST_REF)
endif()

if(OQS_ENABLE_SIG_sdith_cat5_short_cipherpow_opt)
    sdith_add_variant(sdith_cat5_short_cipherpow_opt 5 132 275 15147 CAT5_SHORT_CIPHERPOW_PARAMETERS AVX2 sig_sdith_cat5.c OQS_SDITH_CAT5_SHORT_CIPHERPOW_OPT)
endif()

if(OQS_ENABLE_SIG_sdith_cat5_short_cipherpow_ref)
    sdith_add_variant(sdith_cat5_short_cipherpow_ref 5 132 275 15147 CAT5_SHORT_CIPHERPOW_PARAMETERS REF sig_sdith_cat5.c OQS_SDITH_CAT5_SHORT_CIPHERPOW_REF)
endif()

if(OQS_ENABLE_SIG_sdith_cat5_short_opt)
    sdith_add_variant(sdith_cat5_short_opt 5 132 275 15147 CAT5_SHORT_PARAMETERS AVX2 sig_sdith_cat5.c OQS_SDITH_CAT5_SHORT_OPT)
endif()

if(OQS_ENABLE_SIG_sdith_cat5_short_ref)
    sdith_add_variant(sdith_cat5_short_ref 5 132 275 15147 CAT5_SHORT_PARAMETERS REF sig_sdith_cat5.c OQS_SDITH_CAT5_SHORT_REF)
endif()

set(SDITH_OBJS ${_SDITH_OBJS} PARENT_SCOPE)
