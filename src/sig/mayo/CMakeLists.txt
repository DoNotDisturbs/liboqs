# SPDX-License-Identifier: MIT

# Round-2 MAYO integration for explicit reference and AVX2 benchmarking.
#
# The official MAYO Round-2 reference configuration is one generic C core
# using dynamic parameter selection. liboqs historically imported per-parameter
# opt/AVX2/NEON implementations, but not that genuine reference configuration.
#
# This file therefore compiles the upstream reference core once and compiles
# the liboqs wrappers separately. Historical liboqs methods remain available.
# Official MAYO algorithm source files are not modified here.

set(_MAYO_OBJS "")

# Genuine upstream Round-2 reference core: generic C, dynamic parameters,
# no AVX2, no AES-NI enable define, no -march=native.
if(OQS_ENABLE_SIG_MAYO)
    add_library(mayo_ref_core OBJECT
        pqmayo_mayo-1_opt/arithmetic.c
        pqmayo_mayo-1_opt/mayo.c
        pqmayo_mayo-1_opt/params.c
    )
    target_include_directories(mayo_ref_core PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-1_opt
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_definitions(mayo_ref_core PRIVATE
        MAYO_BUILD_TYPE_REF
        ENABLE_PARAMS_DYNAMIC
        HAVE_RANDOMBYTES_NORETVAL
    )

    add_library(mayo_wrappers OBJECT
        sig_mayo_1.c
        sig_mayo_2.c
        sig_mayo_3.c
        sig_mayo_5.c
    )
    target_include_directories(mayo_wrappers PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-1_opt
    )
    target_compile_definitions(mayo_wrappers PRIVATE
        MAYO_BUILD_TYPE_REF
        ENABLE_PARAMS_DYNAMIC
    )

    set(_MAYO_OBJS ${_MAYO_OBJS}
        $<TARGET_OBJECTS:mayo_ref_core>
        $<TARGET_OBJECTS:mayo_wrappers>
    )
endif()

if(OQS_ENABLE_SIG_mayo_1)
    add_library(mayo_1_opt OBJECT
        pqmayo_mayo-1_opt/api.c
        pqmayo_mayo-1_opt/arithmetic.c
        pqmayo_mayo-1_opt/mayo.c
        pqmayo_mayo-1_opt/params.c
    )
    target_include_directories(mayo_1_opt PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-1_opt
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_definitions(mayo_1_opt PRIVATE
        MAYO_VARIANT=MAYO_1 MAYO_BUILD_TYPE_OPT
        HAVE_RANDOMBYTES_NORETVAL HAVE_STACKEFFICIENT
    )
    set(_MAYO_OBJS ${_MAYO_OBJS} $<TARGET_OBJECTS:mayo_1_opt>)
endif()

if(OQS_ENABLE_SIG_mayo_1_avx2)
    add_library(mayo_1_avx2 OBJECT
        pqmayo_mayo-1_avx2/api.c
        pqmayo_mayo-1_avx2/arithmetic.c
        pqmayo_mayo-1_avx2/mayo.c
        pqmayo_mayo-1_avx2/params.c
    )
    target_include_directories(mayo_1_avx2 PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-1_avx2
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_options(mayo_1_avx2 PRIVATE -mavx2)
    target_compile_definitions(mayo_1_avx2 PRIVATE
        MAYO_VARIANT=MAYO_1 MAYO_BUILD_TYPE_AVX2 MAYO_AVX
        HAVE_RANDOMBYTES_NORETVAL
    )
    set(_MAYO_OBJS ${_MAYO_OBJS} $<TARGET_OBJECTS:mayo_1_avx2>)
endif()

if(OQS_ENABLE_SIG_mayo_1_neon)
    add_library(mayo_1_neon OBJECT
        pqmayo_mayo-1_neon/api.c
        pqmayo_mayo-1_neon/arithmetic.c
        pqmayo_mayo-1_neon/mayo.c
        pqmayo_mayo-1_neon/params.c
    )
    target_include_directories(mayo_1_neon PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-1_neon
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_definitions(mayo_1_neon PRIVATE
        MAYO_VARIANT=MAYO_1 MAYO_BUILD_TYPE_NEON MAYO_NEON
        HAVE_RANDOMBYTES_NORETVAL
    )
    set(_MAYO_OBJS ${_MAYO_OBJS} $<TARGET_OBJECTS:mayo_1_neon>)
endif()

if(OQS_ENABLE_SIG_mayo_2)
    add_library(mayo_2_opt OBJECT
        pqmayo_mayo-2_opt/api.c
        pqmayo_mayo-2_opt/arithmetic.c
        pqmayo_mayo-2_opt/mayo.c
        pqmayo_mayo-2_opt/params.c
    )
    target_include_directories(mayo_2_opt PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-2_opt
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_definitions(mayo_2_opt PRIVATE
        MAYO_VARIANT=MAYO_2 MAYO_BUILD_TYPE_OPT HAVE_RANDOMBYTES_NORETVAL
    )
    set(_MAYO_OBJS ${_MAYO_OBJS} $<TARGET_OBJECTS:mayo_2_opt>)
endif()

if(OQS_ENABLE_SIG_mayo_2_avx2)
    add_library(mayo_2_avx2 OBJECT
        pqmayo_mayo-2_avx2/api.c
        pqmayo_mayo-2_avx2/arithmetic.c
        pqmayo_mayo-2_avx2/mayo.c
        pqmayo_mayo-2_avx2/params.c
    )
    target_include_directories(mayo_2_avx2 PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-2_avx2
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_options(mayo_2_avx2 PRIVATE -mavx2)
    target_compile_definitions(mayo_2_avx2 PRIVATE
        MAYO_VARIANT=MAYO_2 MAYO_BUILD_TYPE_AVX2 MAYO_AVX
        HAVE_RANDOMBYTES_NORETVAL
    )
    set(_MAYO_OBJS ${_MAYO_OBJS} $<TARGET_OBJECTS:mayo_2_avx2>)
endif()

if(OQS_ENABLE_SIG_mayo_2_neon)
    add_library(mayo_2_neon OBJECT
        pqmayo_mayo-2_neon/api.c
        pqmayo_mayo-2_neon/arithmetic.c
        pqmayo_mayo-2_neon/mayo.c
        pqmayo_mayo-2_neon/params.c
    )
    target_include_directories(mayo_2_neon PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-2_neon
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_definitions(mayo_2_neon PRIVATE
        MAYO_VARIANT=MAYO_2 MAYO_BUILD_TYPE_NEON MAYO_NEON
        HAVE_RANDOMBYTES_NORETVAL
    )
    set(_MAYO_OBJS ${_MAYO_OBJS} $<TARGET_OBJECTS:mayo_2_neon>)
endif()

if(OQS_ENABLE_SIG_mayo_3)
    add_library(mayo_3_opt OBJECT
        pqmayo_mayo-3_opt/api.c
        pqmayo_mayo-3_opt/arithmetic.c
        pqmayo_mayo-3_opt/mayo.c
        pqmayo_mayo-3_opt/params.c
    )
    target_include_directories(mayo_3_opt PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-3_opt
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_definitions(mayo_3_opt PRIVATE
        MAYO_VARIANT=MAYO_3 MAYO_BUILD_TYPE_OPT
        HAVE_RANDOMBYTES_NORETVAL HAVE_STACKEFFICIENT
    )
    set(_MAYO_OBJS ${_MAYO_OBJS} $<TARGET_OBJECTS:mayo_3_opt>)
endif()

if(OQS_ENABLE_SIG_mayo_3_avx2)
    add_library(mayo_3_avx2 OBJECT
        pqmayo_mayo-3_avx2/api.c
        pqmayo_mayo-3_avx2/arithmetic.c
        pqmayo_mayo-3_avx2/mayo.c
        pqmayo_mayo-3_avx2/params.c
    )
    target_include_directories(mayo_3_avx2 PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-3_avx2
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_options(mayo_3_avx2 PRIVATE -mavx2)
    target_compile_definitions(mayo_3_avx2 PRIVATE
        MAYO_VARIANT=MAYO_3 MAYO_BUILD_TYPE_AVX2 MAYO_AVX
        HAVE_RANDOMBYTES_NORETVAL
    )
    set(_MAYO_OBJS ${_MAYO_OBJS} $<TARGET_OBJECTS:mayo_3_avx2>)
endif()

if(OQS_ENABLE_SIG_mayo_3_neon)
    add_library(mayo_3_neon OBJECT
        pqmayo_mayo-3_neon/api.c
        pqmayo_mayo-3_neon/arithmetic.c
        pqmayo_mayo-3_neon/mayo.c
        pqmayo_mayo-3_neon/params.c
    )
    target_include_directories(mayo_3_neon PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-3_neon
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_definitions(mayo_3_neon PRIVATE
        MAYO_VARIANT=MAYO_3 MAYO_BUILD_TYPE_NEON MAYO_NEON
        HAVE_RANDOMBYTES_NORETVAL
    )
    set(_MAYO_OBJS ${_MAYO_OBJS} $<TARGET_OBJECTS:mayo_3_neon>)
endif()

if(OQS_ENABLE_SIG_mayo_5)
    add_library(mayo_5_opt OBJECT
        pqmayo_mayo-5_opt/api.c
        pqmayo_mayo-5_opt/arithmetic.c
        pqmayo_mayo-5_opt/mayo.c
        pqmayo_mayo-5_opt/params.c
    )
    target_include_directories(mayo_5_opt PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-5_opt
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_definitions(mayo_5_opt PRIVATE
        MAYO_VARIANT=MAYO_5 MAYO_BUILD_TYPE_OPT
        HAVE_RANDOMBYTES_NORETVAL HAVE_STACKEFFICIENT
    )
    set(_MAYO_OBJS ${_MAYO_OBJS} $<TARGET_OBJECTS:mayo_5_opt>)
endif()

if(OQS_ENABLE_SIG_mayo_5_avx2)
    add_library(mayo_5_avx2 OBJECT
        pqmayo_mayo-5_avx2/api.c
        pqmayo_mayo-5_avx2/arithmetic.c
        pqmayo_mayo-5_avx2/mayo.c
        pqmayo_mayo-5_avx2/params.c
    )
    target_include_directories(mayo_5_avx2 PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-5_avx2
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_options(mayo_5_avx2 PRIVATE -mavx2)
    target_compile_definitions(mayo_5_avx2 PRIVATE
        MAYO_VARIANT=MAYO_5 MAYO_BUILD_TYPE_AVX2 MAYO_AVX
        HAVE_RANDOMBYTES_NORETVAL
    )
    set(_MAYO_OBJS ${_MAYO_OBJS} $<TARGET_OBJECTS:mayo_5_avx2>)
endif()

if(OQS_ENABLE_SIG_mayo_5_neon)
    add_library(mayo_5_neon OBJECT
        pqmayo_mayo-5_neon/api.c
        pqmayo_mayo-5_neon/arithmetic.c
        pqmayo_mayo-5_neon/mayo.c
        pqmayo_mayo-5_neon/params.c
    )
    target_include_directories(mayo_5_neon PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/pqmayo_mayo-5_neon
        ${PROJECT_SOURCE_DIR}/src/common/pqclean_shims
    )
    target_compile_definitions(mayo_5_neon PRIVATE
        MAYO_VARIANT=MAYO_5 MAYO_BUILD_TYPE_NEON MAYO_NEON
        HAVE_RANDOMBYTES_NORETVAL
    )
    set(_MAYO_OBJS ${_MAYO_OBJS} $<TARGET_OBJECTS:mayo_5_neon>)
endif()

set(MAYO_OBJS ${_MAYO_OBJS} PARENT_SCOPE)
