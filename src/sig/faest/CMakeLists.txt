# SPDX-License-Identifier: MIT

set(_FAEST_OBJS "")
set(_FAEST_LIBS "")

# FAEST-128s bundled dependencies (namespaced to avoid conflicts)
set(FAEST_128S_LIB_SOURCES
    faest_128s/lib/KeccakHash.c
    faest_128s/lib/KeccakP-1600-opt64.c
    faest_128s/lib/KeccakSponge.c
)

# FAEST-128f bundled dependencies (namespaced to avoid conflicts)
set(FAEST_128F_LIB_SOURCES
    faest_128f/lib/KeccakHash.c
    faest_128f/lib/KeccakP-1600-opt64.c
    faest_128f/lib/KeccakSponge.c
)

# FAEST-192s bundled dependencies (namespaced to avoid conflicts)
set(FAEST_192S_LIB_SOURCES
    faest_192s/lib/KeccakHash.c
    faest_192s/lib/KeccakP-1600-opt64.c
    faest_192s/lib/KeccakSponge.c
)

# FAEST-192f bundled dependencies (namespaced to avoid conflicts)
set(FAEST_192F_LIB_SOURCES
    faest_192f/lib/KeccakHash.c
    faest_192f/lib/KeccakP-1600-opt64.c
    faest_192f/lib/KeccakSponge.c
)

# FAEST-256s bundled dependencies (namespaced to avoid conflicts)
set(FAEST_256S_LIB_SOURCES
    faest_256s/lib/KeccakHash.c
    faest_256s/lib/KeccakP-1600-opt64.c
    faest_256s/lib/KeccakSponge.c
)

# FAEST-256f bundled dependencies (namespaced to avoid conflicts)
set(FAEST_256F_LIB_SOURCES
    faest_256f/lib/KeccakHash.c
    faest_256f/lib/KeccakP-1600-opt64.c
    faest_256f/lib/KeccakSponge.c
)

# FAEST-EM-128s bundled dependencies (namespaced to avoid conflicts)
set(FAEST_EM_128S_LIB_SOURCES
    faest_em_128s/lib/KeccakHash.c
    faest_em_128s/lib/KeccakP-1600-opt64.c
    faest_em_128s/lib/KeccakSponge.c
)

# FAEST-EM-128f bundled dependencies (namespaced to avoid conflicts)
set(FAEST_EM_128F_LIB_SOURCES
    faest_em_128f/lib/KeccakHash.c
    faest_em_128f/lib/KeccakP-1600-opt64.c
    faest_em_128f/lib/KeccakSponge.c
)

# FAEST-EM-192s bundled dependencies (namespaced to avoid conflicts)
set(FAEST_EM_192S_LIB_SOURCES
    faest_em_192s/lib/KeccakHash.c
    faest_em_192s/lib/KeccakP-1600-opt64.c
    faest_em_192s/lib/KeccakSponge.c
)

# FAEST-EM-192f bundled dependencies (namespaced to avoid conflicts)
set(FAEST_EM_192F_LIB_SOURCES
    faest_em_192f/lib/KeccakHash.c
    faest_em_192f/lib/KeccakP-1600-opt64.c
    faest_em_192f/lib/KeccakSponge.c
)

# FAEST-EM-256s bundled dependencies (namespaced to avoid conflicts)
set(FAEST_EM_256S_LIB_SOURCES
    faest_em_256s/lib/KeccakHash.c
    faest_em_256s/lib/KeccakP-1600-opt64.c
    faest_em_256s/lib/KeccakSponge.c
)

# FAEST-EM-256f bundled dependencies (namespaced to avoid conflicts)
set(FAEST_EM_256F_LIB_SOURCES
    faest_em_256f/lib/KeccakHash.c
    faest_em_256f/lib/KeccakP-1600-opt64.c
    faest_em_256f/lib/KeccakSponge.c
)

if(OQS_ENABLE_SIG_faest_128s)
    set(FAEST_128S_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/faest_128s/namespace_faest_128s.h)

    set(FAEST_128S_SOURCES
        ${FAEST_128S_LIB_SOURCES}
        faest_128s/aes.c
        faest_128s/bavc.c
        faest_128s/compat.c
        faest_128s/cpu.c
        faest_128s/crypto_sign.c
        faest_128s/faest_128s.c
        faest_128s/faest_aes_128.c
        faest_128s/faest_aes_192.c
        faest_128s/faest_aes_256.c
        faest_128s/faest_impl.c
        faest_128s/fields.c
        faest_128s/instances.c
        faest_128s/owf.c
        faest_128s/random_oracle.c
        faest_128s/randomness.c
        faest_128s/universal_hashing.c
        faest_128s/utils.c
        faest_128s/vole.c
    )

    add_library(faest_128s_ref OBJECT ${FAEST_128S_SOURCES})
    target_include_directories(faest_128s_ref PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/faest_128s
        ${CMAKE_CURRENT_LIST_DIR}/faest_128s/lib)
    target_compile_options(faest_128s_ref PRIVATE "-include" ${FAEST_128S_NAMESPACE_HEADER})
    target_compile_definitions(faest_128s_ref PRIVATE OQS_FAEST_DISABLE_VECTOR_ATTR)

    add_library(faest_128s_glue OBJECT sig_faest_128s.c)
    target_include_directories(faest_128s_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/faest_128s)
    target_compile_options(faest_128s_glue PRIVATE "-include" ${FAEST_128S_NAMESPACE_HEADER})

    set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_128s_ref> $<TARGET_OBJECTS:faest_128s_glue>)
endif()

if(OQS_ENABLE_SIG_faest_128f)
    set(FAEST_128F_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/faest_128f/namespace_faest_128f.h)

    set(FAEST_128F_SOURCES
        ${FAEST_128F_LIB_SOURCES}
        faest_128f/aes.c
        faest_128f/bavc.c
        faest_128f/compat.c
        faest_128f/cpu.c
        faest_128f/crypto_sign.c
        faest_128f/faest_128f.c
        faest_128f/faest_aes_128.c
        faest_128f/faest_aes_192.c
        faest_128f/faest_aes_256.c
        faest_128f/faest_impl.c
        faest_128f/fields.c
        faest_128f/instances.c
        faest_128f/owf.c
        faest_128f/random_oracle.c
        faest_128f/randomness.c
        faest_128f/universal_hashing.c
        faest_128f/utils.c
        faest_128f/vole.c
    )

    add_library(faest_128f_ref OBJECT ${FAEST_128F_SOURCES})
    target_include_directories(faest_128f_ref PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/faest_128f
        ${CMAKE_CURRENT_LIST_DIR}/faest_128f/lib)
    target_compile_options(faest_128f_ref PRIVATE "-include" ${FAEST_128F_NAMESPACE_HEADER})
    target_compile_definitions(faest_128f_ref PRIVATE OQS_FAEST_DISABLE_VECTOR_ATTR)

    add_library(faest_128f_glue OBJECT sig_faest_128f.c)
    target_include_directories(faest_128f_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/faest_128f)
    target_compile_options(faest_128f_glue PRIVATE "-include" ${FAEST_128F_NAMESPACE_HEADER})

    set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_128f_ref> $<TARGET_OBJECTS:faest_128f_glue>)
endif()

if(OQS_ENABLE_SIG_faest_192s)
    set(FAEST_192S_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/faest_192s/namespace_faest_192s.h)

    set(FAEST_192S_SOURCES
        ${FAEST_192S_LIB_SOURCES}
        faest_192s/aes.c
        faest_192s/bavc.c
        faest_192s/compat.c
        faest_192s/cpu.c
        faest_192s/crypto_sign.c
        faest_192s/faest_192s.c
        faest_192s/faest_aes_128.c
        faest_192s/faest_aes_192.c
        faest_192s/faest_aes_256.c
        faest_192s/faest_impl.c
        faest_192s/fields.c
        faest_192s/instances.c
        faest_192s/owf.c
        faest_192s/random_oracle.c
        faest_192s/randomness.c
        faest_192s/universal_hashing.c
        faest_192s/utils.c
        faest_192s/vole.c
    )

    add_library(faest_192s_ref OBJECT ${FAEST_192S_SOURCES})
    target_include_directories(faest_192s_ref PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/faest_192s
        ${CMAKE_CURRENT_LIST_DIR}/faest_192s/lib)
    target_compile_options(faest_192s_ref PRIVATE "-include" ${FAEST_192S_NAMESPACE_HEADER})
    target_compile_definitions(faest_192s_ref PRIVATE OQS_FAEST_DISABLE_VECTOR_ATTR)

    add_library(faest_192s_glue OBJECT sig_faest_192s.c)
    target_include_directories(faest_192s_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/faest_192s)
    target_compile_options(faest_192s_glue PRIVATE "-include" ${FAEST_192S_NAMESPACE_HEADER})

    set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_192s_ref> $<TARGET_OBJECTS:faest_192s_glue>)
endif()

if(OQS_ENABLE_SIG_faest_192f)
    set(FAEST_192F_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/faest_192f/namespace_faest_192f.h)

    set(FAEST_192F_SOURCES
        ${FAEST_192F_LIB_SOURCES}
        faest_192f/aes.c
        faest_192f/bavc.c
        faest_192f/compat.c
        faest_192f/cpu.c
        faest_192f/crypto_sign.c
        faest_192f/faest_192f.c
        faest_192f/faest_aes_128.c
        faest_192f/faest_aes_192.c
        faest_192f/faest_aes_256.c
        faest_192f/faest_impl.c
        faest_192f/fields.c
        faest_192f/instances.c
        faest_192f/owf.c
        faest_192f/random_oracle.c
        faest_192f/randomness.c
        faest_192f/universal_hashing.c
        faest_192f/utils.c
        faest_192f/vole.c
    )

    add_library(faest_192f_ref OBJECT ${FAEST_192F_SOURCES})
    target_include_directories(faest_192f_ref PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/faest_192f
        ${CMAKE_CURRENT_LIST_DIR}/faest_192f/lib)
    target_compile_options(faest_192f_ref PRIVATE "-include" ${FAEST_192F_NAMESPACE_HEADER})
    target_compile_definitions(faest_192f_ref PRIVATE OQS_FAEST_DISABLE_VECTOR_ATTR)

    add_library(faest_192f_glue OBJECT sig_faest_192f.c)
    target_include_directories(faest_192f_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/faest_192f)
    target_compile_options(faest_192f_glue PRIVATE "-include" ${FAEST_192F_NAMESPACE_HEADER})

    set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_192f_ref> $<TARGET_OBJECTS:faest_192f_glue>)
endif()

if(OQS_ENABLE_SIG_faest_256s)
    set(FAEST_256S_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/faest_256s/namespace_faest_256s.h)

    set(FAEST_256S_SOURCES
        ${FAEST_256S_LIB_SOURCES}
        faest_256s/aes.c
        faest_256s/bavc.c
        faest_256s/compat.c
        faest_256s/cpu.c
        faest_256s/crypto_sign.c
        faest_256s/faest_256s.c
        faest_256s/faest_aes_128.c
        faest_256s/faest_aes_192.c
        faest_256s/faest_aes_256.c
        faest_256s/faest_impl.c
        faest_256s/fields.c
        faest_256s/instances.c
        faest_256s/owf.c
        faest_256s/random_oracle.c
        faest_256s/randomness.c
        faest_256s/universal_hashing.c
        faest_256s/utils.c
        faest_256s/vole.c
    )

    add_library(faest_256s_ref OBJECT ${FAEST_256S_SOURCES})
    target_include_directories(faest_256s_ref PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/faest_256s
        ${CMAKE_CURRENT_LIST_DIR}/faest_256s/lib)
    target_compile_options(faest_256s_ref PRIVATE "-include" ${FAEST_256S_NAMESPACE_HEADER})
    target_compile_definitions(faest_256s_ref PRIVATE OQS_FAEST_DISABLE_VECTOR_ATTR)

    add_library(faest_256s_glue OBJECT sig_faest_256s.c)
    target_include_directories(faest_256s_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/faest_256s)
    target_compile_options(faest_256s_glue PRIVATE "-include" ${FAEST_256S_NAMESPACE_HEADER})

    set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_256s_ref> $<TARGET_OBJECTS:faest_256s_glue>)
endif()

if(OQS_ENABLE_SIG_faest_256f)
    set(FAEST_256F_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/faest_256f/namespace_faest_256f.h)

    set(FAEST_256F_SOURCES
        ${FAEST_256F_LIB_SOURCES}
        faest_256f/aes.c
        faest_256f/bavc.c
        faest_256f/compat.c
        faest_256f/cpu.c
        faest_256f/crypto_sign.c
        faest_256f/faest_256f.c
        faest_256f/faest_aes_128.c
        faest_256f/faest_aes_192.c
        faest_256f/faest_aes_256.c
        faest_256f/faest_impl.c
        faest_256f/fields.c
        faest_256f/instances.c
        faest_256f/owf.c
        faest_256f/random_oracle.c
        faest_256f/randomness.c
        faest_256f/universal_hashing.c
        faest_256f/utils.c
        faest_256f/vole.c
    )

    add_library(faest_256f_ref OBJECT ${FAEST_256F_SOURCES})
    target_include_directories(faest_256f_ref PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/faest_256f
        ${CMAKE_CURRENT_LIST_DIR}/faest_256f/lib)
    target_compile_options(faest_256f_ref PRIVATE "-include" ${FAEST_256F_NAMESPACE_HEADER})
    target_compile_definitions(faest_256f_ref PRIVATE OQS_FAEST_DISABLE_VECTOR_ATTR)

    add_library(faest_256f_glue OBJECT sig_faest_256f.c)
    target_include_directories(faest_256f_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/faest_256f)
    target_compile_options(faest_256f_glue PRIVATE "-include" ${FAEST_256F_NAMESPACE_HEADER})

    set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_256f_ref> $<TARGET_OBJECTS:faest_256f_glue>)
endif()

if(OQS_ENABLE_SIG_faest_em_128s)
    set(FAEST_EM_128S_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/faest_em_128s/namespace_faest_em_128s.h)

    set(FAEST_EM_128S_SOURCES
        ${FAEST_EM_128S_LIB_SOURCES}
        faest_em_128s/aes.c
        faest_em_128s/bavc.c
        faest_em_128s/compat.c
        faest_em_128s/cpu.c
        faest_em_128s/crypto_sign.c
        faest_em_128s/faest_em_128s.c
        faest_em_128s/faest_aes_128.c
        faest_em_128s/faest_aes_192.c
        faest_em_128s/faest_aes_256.c
        faest_em_128s/faest_impl.c
        faest_em_128s/fields.c
        faest_em_128s/instances.c
        faest_em_128s/owf.c
        faest_em_128s/random_oracle.c
        faest_em_128s/randomness.c
        faest_em_128s/universal_hashing.c
        faest_em_128s/utils.c
        faest_em_128s/vole.c
    )

    add_library(faest_em_128s_ref OBJECT ${FAEST_EM_128S_SOURCES})
    target_include_directories(faest_em_128s_ref PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_128s
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_128s/lib)
    target_compile_options(faest_em_128s_ref PRIVATE "-include" ${FAEST_EM_128S_NAMESPACE_HEADER})
    target_compile_definitions(faest_em_128s_ref PRIVATE OQS_FAEST_DISABLE_VECTOR_ATTR)

    add_library(faest_em_128s_glue OBJECT sig_faest_em_128s.c)
    target_include_directories(faest_em_128s_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_128s)
    target_compile_options(faest_em_128s_glue PRIVATE "-include" ${FAEST_EM_128S_NAMESPACE_HEADER})

    set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_em_128s_ref> $<TARGET_OBJECTS:faest_em_128s_glue>)
endif()

if(OQS_ENABLE_SIG_faest_em_128f)
    set(FAEST_EM_128F_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/faest_em_128f/namespace_faest_em_128f.h)

    set(FAEST_EM_128F_SOURCES
        ${FAEST_EM_128F_LIB_SOURCES}
        faest_em_128f/aes.c
        faest_em_128f/bavc.c
        faest_em_128f/compat.c
        faest_em_128f/cpu.c
        faest_em_128f/crypto_sign.c
        faest_em_128f/faest_em_128f.c
        faest_em_128f/faest_aes_128.c
        faest_em_128f/faest_aes_192.c
        faest_em_128f/faest_aes_256.c
        faest_em_128f/faest_impl.c
        faest_em_128f/fields.c
        faest_em_128f/instances.c
        faest_em_128f/owf.c
        faest_em_128f/random_oracle.c
        faest_em_128f/randomness.c
        faest_em_128f/universal_hashing.c
        faest_em_128f/utils.c
        faest_em_128f/vole.c
    )

    add_library(faest_em_128f_ref OBJECT ${FAEST_EM_128F_SOURCES})
    target_include_directories(faest_em_128f_ref PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_128f
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_128f/lib)
    target_compile_options(faest_em_128f_ref PRIVATE "-include" ${FAEST_EM_128F_NAMESPACE_HEADER})
    target_compile_definitions(faest_em_128f_ref PRIVATE OQS_FAEST_DISABLE_VECTOR_ATTR)

    add_library(faest_em_128f_glue OBJECT sig_faest_em_128f.c)
    target_include_directories(faest_em_128f_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_128f)
    target_compile_options(faest_em_128f_glue PRIVATE "-include" ${FAEST_EM_128F_NAMESPACE_HEADER})

    set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_em_128f_ref> $<TARGET_OBJECTS:faest_em_128f_glue>)
endif()

if(OQS_ENABLE_SIG_faest_em_192s)
    set(FAEST_EM_192S_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/faest_em_192s/namespace_faest_em_192s.h)

    set(FAEST_EM_192S_SOURCES
        ${FAEST_EM_192S_LIB_SOURCES}
        faest_em_192s/aes.c
        faest_em_192s/bavc.c
        faest_em_192s/compat.c
        faest_em_192s/cpu.c
        faest_em_192s/crypto_sign.c
        faest_em_192s/faest_em_192s.c
        faest_em_192s/faest_aes_128.c
        faest_em_192s/faest_aes_192.c
        faest_em_192s/faest_aes_256.c
        faest_em_192s/faest_impl.c
        faest_em_192s/fields.c
        faest_em_192s/instances.c
        faest_em_192s/owf.c
        faest_em_192s/random_oracle.c
        faest_em_192s/randomness.c
        faest_em_192s/universal_hashing.c
        faest_em_192s/utils.c
        faest_em_192s/vole.c
    )

    add_library(faest_em_192s_ref OBJECT ${FAEST_EM_192S_SOURCES})
    target_include_directories(faest_em_192s_ref PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_192s
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_192s/lib)
    target_compile_options(faest_em_192s_ref PRIVATE "-include" ${FAEST_EM_192S_NAMESPACE_HEADER})
    target_compile_definitions(faest_em_192s_ref PRIVATE OQS_FAEST_DISABLE_VECTOR_ATTR)

    add_library(faest_em_192s_glue OBJECT sig_faest_em_192s.c)
    target_include_directories(faest_em_192s_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_192s)
    target_compile_options(faest_em_192s_glue PRIVATE "-include" ${FAEST_EM_192S_NAMESPACE_HEADER})

    set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_em_192s_ref> $<TARGET_OBJECTS:faest_em_192s_glue>)
endif()

if(OQS_ENABLE_SIG_faest_em_192f)
    set(FAEST_EM_192F_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/faest_em_192f/namespace_faest_em_192f.h)

    set(FAEST_EM_192F_SOURCES
        ${FAEST_EM_192F_LIB_SOURCES}
        faest_em_192f/aes.c
        faest_em_192f/bavc.c
        faest_em_192f/compat.c
        faest_em_192f/cpu.c
        faest_em_192f/crypto_sign.c
        faest_em_192f/faest_em_192f.c
        faest_em_192f/faest_aes_128.c
        faest_em_192f/faest_aes_192.c
        faest_em_192f/faest_aes_256.c
        faest_em_192f/faest_impl.c
        faest_em_192f/fields.c
        faest_em_192f/instances.c
        faest_em_192f/owf.c
        faest_em_192f/random_oracle.c
        faest_em_192f/randomness.c
        faest_em_192f/universal_hashing.c
        faest_em_192f/utils.c
        faest_em_192f/vole.c
    )

    add_library(faest_em_192f_ref OBJECT ${FAEST_EM_192F_SOURCES})
    target_include_directories(faest_em_192f_ref PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_192f
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_192f/lib)
    target_compile_options(faest_em_192f_ref PRIVATE "-include" ${FAEST_EM_192F_NAMESPACE_HEADER})
    target_compile_definitions(faest_em_192f_ref PRIVATE OQS_FAEST_DISABLE_VECTOR_ATTR)

    add_library(faest_em_192f_glue OBJECT sig_faest_em_192f.c)
    target_include_directories(faest_em_192f_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_192f)
    target_compile_options(faest_em_192f_glue PRIVATE "-include" ${FAEST_EM_192F_NAMESPACE_HEADER})

    set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_em_192f_ref> $<TARGET_OBJECTS:faest_em_192f_glue>)
endif()

if(OQS_ENABLE_SIG_faest_em_256s)
    set(FAEST_EM_256S_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/faest_em_256s/namespace_faest_em_256s.h)

    set(FAEST_EM_256S_SOURCES
        ${FAEST_EM_256S_LIB_SOURCES}
        faest_em_256s/aes.c
        faest_em_256s/bavc.c
        faest_em_256s/compat.c
        faest_em_256s/cpu.c
        faest_em_256s/crypto_sign.c
        faest_em_256s/faest_em_256s.c
        faest_em_256s/faest_aes_128.c
        faest_em_256s/faest_aes_192.c
        faest_em_256s/faest_aes_256.c
        faest_em_256s/faest_impl.c
        faest_em_256s/fields.c
        faest_em_256s/instances.c
        faest_em_256s/owf.c
        faest_em_256s/random_oracle.c
        faest_em_256s/randomness.c
        faest_em_256s/universal_hashing.c
        faest_em_256s/utils.c
        faest_em_256s/vole.c
    )

    add_library(faest_em_256s_ref OBJECT ${FAEST_EM_256S_SOURCES})
    target_include_directories(faest_em_256s_ref PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_256s
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_256s/lib)
    target_compile_options(faest_em_256s_ref PRIVATE "-include" ${FAEST_EM_256S_NAMESPACE_HEADER})
    target_compile_definitions(faest_em_256s_ref PRIVATE OQS_FAEST_DISABLE_VECTOR_ATTR)

    add_library(faest_em_256s_glue OBJECT sig_faest_em_256s.c)
    target_include_directories(faest_em_256s_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_256s)
    target_compile_options(faest_em_256s_glue PRIVATE "-include" ${FAEST_EM_256S_NAMESPACE_HEADER})

    set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_em_256s_ref> $<TARGET_OBJECTS:faest_em_256s_glue>)
endif()

if(OQS_ENABLE_SIG_faest_em_256f)
    set(FAEST_EM_256F_NAMESPACE_HEADER ${CMAKE_CURRENT_LIST_DIR}/faest_em_256f/namespace_faest_em_256f.h)

    set(FAEST_EM_256F_SOURCES
        ${FAEST_EM_256F_LIB_SOURCES}
        faest_em_256f/aes.c
        faest_em_256f/bavc.c
        faest_em_256f/compat.c
        faest_em_256f/cpu.c
        faest_em_256f/crypto_sign.c
        faest_em_256f/faest_em_256f.c
        faest_em_256f/faest_aes_128.c
        faest_em_256f/faest_aes_192.c
        faest_em_256f/faest_aes_256.c
        faest_em_256f/faest_impl.c
        faest_em_256f/fields.c
        faest_em_256f/instances.c
        faest_em_256f/owf.c
        faest_em_256f/random_oracle.c
        faest_em_256f/randomness.c
        faest_em_256f/universal_hashing.c
        faest_em_256f/utils.c
        faest_em_256f/vole.c
    )

    add_library(faest_em_256f_ref OBJECT ${FAEST_EM_256F_SOURCES})
    target_include_directories(faest_em_256f_ref PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_256f
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_256f/lib)
    target_compile_options(faest_em_256f_ref PRIVATE "-include" ${FAEST_EM_256F_NAMESPACE_HEADER})
    target_compile_definitions(faest_em_256f_ref PRIVATE OQS_FAEST_DISABLE_VECTOR_ATTR)

    add_library(faest_em_256f_glue OBJECT sig_faest_em_256f.c)
    target_include_directories(faest_em_256f_glue PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/faest_em_256f)
    target_compile_options(faest_em_256f_glue PRIVATE "-include" ${FAEST_EM_256F_NAMESPACE_HEADER})

    set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_em_256f_ref> $<TARGET_OBJECTS:faest_em_256f_glue>)
endif()

set(FAEST_OBJS ${_FAEST_OBJS} PARENT_SCOPE)
set(FAEST_LIBS ${_FAEST_LIBS} PARENT_SCOPE)