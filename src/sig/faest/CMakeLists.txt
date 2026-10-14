# SPDX-License-Identifier: MIT
# FAEST Round-3 strict-source integration. Official upstream files under upstream/ are byte-for-byte unchanged.

enable_language(CXX)
if(NOT OQS_USE_OPENSSL)
    message(FATAL_ERROR "FAEST strict integration requires OQS_USE_OPENSSL=ON")
endif()
find_package(OpenSSL 3.0 REQUIRED)
set(_FAEST_OBJS "")
set(REF_COMMON ${CMAKE_CURRENT_LIST_DIR}/upstream/ref/common)
set(AVX_COMMON ${CMAKE_CURRENT_LIST_DIR}/upstream/avx2/common)


set(FAEST_REF_COMMON_SOURCES
    ${REF_COMMON}/aes.c ${REF_COMMON}/bavc.c ${REF_COMMON}/compat.c ${REF_COMMON}/cpu.c
    ${REF_COMMON}/faest_aes_128.c ${REF_COMMON}/faest_aes_192.c ${REF_COMMON}/faest_aes_256.c
    ${REF_COMMON}/faest_impl.c ${REF_COMMON}/fields.c ${REF_COMMON}/instances.c ${REF_COMMON}/owf.c
    ${REF_COMMON}/random_oracle.c ${REF_COMMON}/randomness.c ${REF_COMMON}/universal_hashing.c
    ${REF_COMMON}/utils.c ${REF_COMMON}/vole.c)
add_library(faest_ref_common OBJECT ${FAEST_REF_COMMON_SOURCES})
target_include_directories(faest_ref_common PRIVATE ${REF_COMMON})
target_compile_definitions(faest_ref_common PRIVATE NDEBUG=1 FAEST_EXPORT= OQS=1 WITH_SHAKE_OPENSSL=1
    rand_bytes=oqs_sig_private_faest_ref_rand_bytes)
target_link_libraries(faest_ref_common PRIVATE OpenSSL::Crypto)
if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
  if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|amd64|AMD64")
    target_compile_options(faest_ref_common PRIVATE -O3 -march=x86-64 -mtune=generic -fno-strict-aliasing -Wno-psabi)
  else()
    target_compile_options(faest_ref_common PRIVATE -O3 -fno-strict-aliasing -Wno-psabi)
  endif()
endif()
set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_ref_common>)

file(GLOB FAEST_AVX_CPP CONFIGURE_DEPENDS "${AVX_COMMON}/*.cpp")
file(GLOB FAEST_AVX_SHA3_C CONFIGURE_DEPENDS "${AVX_COMMON}/sha3/*.c")
file(GLOB FAEST_AVX_SHA3_S CONFIGURE_DEPENDS "${AVX_COMMON}/sha3/*.s")
add_library(faest_avx2_common OBJECT ${FAEST_AVX_CPP} ${AVX_COMMON}/randomness_randombytes.c ${FAEST_AVX_SHA3_C} ${FAEST_AVX_SHA3_S})
target_include_directories(faest_avx2_common PRIVATE ${AVX_COMMON} ${AVX_COMMON}/sha3)
target_compile_features(faest_avx2_common PRIVATE cxx_std_23)
target_compile_definitions(faest_avx2_common PRIVATE NDEBUG=1 PQCLEAN=1 randombytes=OQS_randombytes rand_bytes=oqs_sig_private_faest_avx2_rand_bytes)
if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang" AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  target_compile_options(faest_avx2_common PRIVATE
    $<$<COMPILE_LANGUAGE:C,CXX>:-O3> $<$<COMPILE_LANGUAGE:C,CXX>:-march=x86-64>
    $<$<COMPILE_LANGUAGE:C,CXX>:-mtune=generic> $<$<COMPILE_LANGUAGE:C,CXX>:-mavx2>
    $<$<COMPILE_LANGUAGE:C,CXX>:-maes> $<$<COMPILE_LANGUAGE:C,CXX>:-mpclmul>
    $<$<COMPILE_LANGUAGE:C,CXX>:-flto=auto> $<$<COMPILE_LANGUAGE:C,CXX>:-fno-strict-aliasing>)
else()
  message(FATAL_ERROR "FAEST AVX2 integration expects GCC/Clang-style x86 flags")
endif()
set(_FAEST_OBJS ${_FAEST_OBJS} $<TARGET_OBJECTS:faest_avx2_common>)

function(faest_add_pair PARAM SELECTOR)
  set(PARAM_DIR ${CMAKE_CURRENT_LIST_DIR}/upstream/ref/params/${PARAM})
  add_library(faest_${PARAM}_ref_param OBJECT ${PARAM_DIR}/faest_${PARAM}.c)
  target_include_directories(faest_${PARAM}_ref_param PRIVATE ${PARAM_DIR} ${REF_COMMON})
  target_compile_definitions(faest_${PARAM}_ref_param PRIVATE NDEBUG=1 FAEST_EXPORT= OQS=1 WITH_SHAKE_OPENSSL=1
    rand_bytes=oqs_sig_private_faest_ref_rand_bytes)
  if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(faest_${PARAM}_ref_param PRIVATE -O3 -fno-strict-aliasing -Wno-psabi)
  endif()

  set(API ${CMAKE_CURRENT_LIST_DIR}/upstream/avx2/api/${PARAM}/api.cpp)
  add_library(faest_${PARAM}_avx2_api OBJECT ${API})
  target_include_directories(faest_${PARAM}_avx2_api PRIVATE ${AVX_COMMON} ${AVX_COMMON}/sha3)
  target_compile_features(faest_${PARAM}_avx2_api PRIVATE cxx_std_23)
  target_compile_definitions(faest_${PARAM}_avx2_api PRIVATE NDEBUG=1 PQCLEAN=1
    randombytes=OQS_randombytes rand_bytes=oqs_sig_private_faest_avx2_rand_bytes
    crypto_sign_keypair=oqs_sig_private_faest_${PARAM}_avx2_crypto_sign_keypair
    crypto_sign=oqs_sig_private_faest_${PARAM}_avx2_crypto_sign
    crypto_sign_open=oqs_sig_private_faest_${PARAM}_avx2_crypto_sign_open)
  if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(faest_${PARAM}_avx2_api PRIVATE -O3 -march=x86-64 -mtune=generic -mavx2 -maes -mpclmul -flto=auto -fno-strict-aliasing)
  endif()

  add_library(faest_${PARAM}_ref_glue OBJECT sig_faest_${PARAM}.c)
  target_compile_definitions(faest_${PARAM}_ref_glue PRIVATE OQS_ENABLE_SIG_faest_${PARAM}=1 OQS_FAEST_${SELECTOR}_REF)
  add_library(faest_${PARAM}_avx2_glue OBJECT sig_faest_${PARAM}.c)
  target_compile_definitions(faest_${PARAM}_avx2_glue PRIVATE OQS_ENABLE_SIG_faest_${PARAM}=1 OQS_FAEST_${SELECTOR}_AVX2)
  set(_FAEST_OBJS ${_FAEST_OBJS}
    $<TARGET_OBJECTS:faest_${PARAM}_ref_param> $<TARGET_OBJECTS:faest_${PARAM}_avx2_api>
    $<TARGET_OBJECTS:faest_${PARAM}_ref_glue> $<TARGET_OBJECTS:faest_${PARAM}_avx2_glue> PARENT_SCOPE)
endfunction()

if(OQS_ENABLE_SIG_faest_128s)
  faest_add_pair(128s 128S)
endif()
if(OQS_ENABLE_SIG_faest_128f)
  faest_add_pair(128f 128F)
endif()
if(OQS_ENABLE_SIG_faest_192s)
  faest_add_pair(192s 192S)
endif()
if(OQS_ENABLE_SIG_faest_192f)
  faest_add_pair(192f 192F)
endif()
if(OQS_ENABLE_SIG_faest_256s)
  faest_add_pair(256s 256S)
endif()
if(OQS_ENABLE_SIG_faest_256f)
  faest_add_pair(256f 256F)
endif()
if(OQS_ENABLE_SIG_faest_em_128s)
  faest_add_pair(em_128s EM_128S)
endif()
if(OQS_ENABLE_SIG_faest_em_128f)
  faest_add_pair(em_128f EM_128F)
endif()
if(OQS_ENABLE_SIG_faest_em_192s)
  faest_add_pair(em_192s EM_192S)
endif()
if(OQS_ENABLE_SIG_faest_em_192f)
  faest_add_pair(em_192f EM_192F)
endif()
if(OQS_ENABLE_SIG_faest_em_256s)
  faest_add_pair(em_256s EM_256S)
endif()
if(OQS_ENABLE_SIG_faest_em_256f)
  faest_add_pair(em_256f EM_256F)
endif()

set(FAEST_OBJS ${_FAEST_OBJS} PARENT_SCOPE)
