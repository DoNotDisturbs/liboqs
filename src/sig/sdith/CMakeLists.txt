# SPDX-License-Identifier: MIT

set(_SDITH_OBJS "")
set(_SDITH_LIBS "")

if(OQS_ENABLE_SIG_sdith_cat1_fast_cipherpow_opt)
        set(SDITH_CAT1_FAST_CIPHERPOW_OPT_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/sdith_cat1_fast_cipherpow_opt/namespace_sdith_cat1_fast_cipherpow_opt.h)

        set(SDITH_CAT1_FAST_CIPHERPOW_OPT_LIB_SOURCES
                sdith_cat1_fast_cipherpow_opt/commons.c
                sdith_cat1_fast_cipherpow_opt/gf128.c
                sdith_cat1_fast_cipherpow_opt/gf192.c
                sdith_cat1_fast_cipherpow_opt/gf256.c
                sdith_cat1_fast_cipherpow_opt/ggm.c
                sdith_cat1_fast_cipherpow_opt/matrix_transpose_f2.c
                sdith_cat1_fast_cipherpow_opt/matrix_vector_products_f2.c
                sdith_cat1_fast_cipherpow_opt/piop_circuit.c
                sdith_cat1_fast_cipherpow_opt/rng.c
                sdith_cat1_fast_cipherpow_opt/rsd.c
                sdith_cat1_fast_cipherpow_opt/sdith_prng.c
                sdith_cat1_fast_cipherpow_opt/sdith_signature.c
                sdith_cat1_fast_cipherpow_opt/sdith_signature_parameters.c
                sdith_cat1_fast_cipherpow_opt/sign.c
                sdith_cat1_fast_cipherpow_opt/vole_expansion.c
                sdith_cat1_fast_cipherpow_opt/vole_parameters.c
                sdith_cat1_fast_cipherpow_opt/vole_to_piop.c
                sdith_cat1_fast_cipherpow_opt/lib/aes/aes128_ctrle_ref.c
                sdith_cat1_fast_cipherpow_opt/lib/aes/aes128_ctrle_special_ref.c
                sdith_cat1_fast_cipherpow_opt/lib/aes/aes_ansi_ref.c
                sdith_cat1_fast_cipherpow_opt/lib/aes/rijndael256.c
                sdith_cat1_fast_cipherpow_opt/lib/aes/rijndael256_ctrle_ref.c
                sdith_cat1_fast_cipherpow_opt/lib/aes/rijndael256_ctrle_special_ref.c
                sdith_cat1_fast_cipherpow_opt/lib/sha3/KeccakHash.c
                sdith_cat1_fast_cipherpow_opt/lib/sha3/KeccakHashtimes4.c
                sdith_cat1_fast_cipherpow_opt/lib/sha3/KeccakSponge.c
                sdith_cat1_fast_cipherpow_opt/lib/sha3/KeccakSpongetimes4.c
                sdith_cat1_fast_cipherpow_opt/lib/sha3/opt64/KeccakP-1600-opt64.c
                sdith_cat1_fast_cipherpow_opt/lib/sha3/opt64/KeccakP-1600-times4-on1.c
        )

        add_library(sdith_cat1_fast_cipherpow_opt_ref OBJECT ${SDITH_CAT1_FAST_CIPHERPOW_OPT_LIB_SOURCES})
        target_include_directories(sdith_cat1_fast_cipherpow_opt_ref PRIVATE
                ${CMAKE_CURRENT_LIST_DIR}/sdith_cat1_fast_cipherpow_opt
                ${CMAKE_CURRENT_LIST_DIR}/sdith_cat1_fast_cipherpow_opt/lib
                ${CMAKE_CURRENT_LIST_DIR}/sdith_cat1_fast_cipherpow_opt/lib/aes
                ${CMAKE_CURRENT_LIST_DIR}/sdith_cat1_fast_cipherpow_opt/lib/sha3
                ${CMAKE_CURRENT_LIST_DIR}/sdith_cat1_fast_cipherpow_opt/lib/sha3/opt64)
        target_compile_options(sdith_cat1_fast_cipherpow_opt_ref PRIVATE "-include" ${SDITH_CAT1_FAST_CIPHERPOW_OPT_NAMESPACE_HEADER})
        target_compile_definitions(sdith_cat1_fast_cipherpow_opt_ref PRIVATE ONLY_REF_IMPLEMENTATION)

        add_library(sdith_cat1_fast_cipherpow_opt_glue OBJECT sig_sdith_cat1_fast_cipherpow_opt.c)
        target_include_directories(sdith_cat1_fast_cipherpow_opt_glue PRIVATE
                ${CMAKE_CURRENT_LIST_DIR}
                ${CMAKE_CURRENT_LIST_DIR}/sdith_cat1_fast_cipherpow_opt)
        target_compile_options(sdith_cat1_fast_cipherpow_opt_glue PRIVATE "-include" ${SDITH_CAT1_FAST_CIPHERPOW_OPT_NAMESPACE_HEADER})

        set(_SDITH_OBJS ${_SDITH_OBJS}
                $<TARGET_OBJECTS:sdith_cat1_fast_cipherpow_opt_ref>
                $<TARGET_OBJECTS:sdith_cat1_fast_cipherpow_opt_glue>)
endif()







list(REMOVE_DUPLICATES _SDITH_LIBS)

set(SDITH_OBJS ${_SDITH_OBJS} PARENT_SCOPE)
set(SDITH_LIBS ${_SDITH_LIBS} PARENT_SCOPE)
