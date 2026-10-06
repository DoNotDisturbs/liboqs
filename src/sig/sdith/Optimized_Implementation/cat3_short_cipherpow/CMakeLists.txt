cmake_minimum_required(VERSION 3.10)
project(sdith_cat3_short_cipherpow C)

# Standalone build of the SDitH optimized implementation, parameter set SDiTH-CAT3-SHORT-CIPHERPOW.
# Generated from the reference repository by utils/make_nist_package.py.
#
#   mkdir build && cd build && cmake .. && make
#   ./bench_sdith                    -- keygen/sign/verify timings
#   ./generator/PQCgenKAT_cat3_short_cipherpow  -- writes PQCsignKAT_208.req and .rsp

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Default build type: Release" FORCE)
endif ()

set(CMAKE_C_FLAGS_DEBUG "-O0 -g3 -Wall -Werror")
set(CMAKE_C_FLAGS_RELEASE "-O3 -g3 -Wall -Werror -DNDEBUG")
enable_language(ASM)

set(BUILD_KATS ON CACHE BOOL "Build the NIST KAT generator (needs libcrypto)")

# The avx2/aes-ni backend is x86-64 only.  It is selected at run time through
# __builtin_cpu_supports, so one binary still runs on machines without it.
if (CMAKE_SYSTEM_PROCESSOR MATCHES "(x86)|(X86_LINUX)|(amd64)|(AMD64)")
    set(X86_LINUX ON)
else ()
    set(X86_LINUX OFF)
endif ()
if (CMAKE_SYSTEM_NAME MATCHES "(Windows)|(MSYS)")
    set(X86_LINUX OFF)
endif ()
message(STATUS "--> X86_LINUX: ${X86_LINUX}")

add_subdirectory(lib/sha3)
add_subdirectory(lib/aes)

set(SDITH_SRCS
        src/commons.c
        src/vole_private.h
        src/sdith_prng.h
        src/sdith_prng.c
        src/gf256.c
        src/gf192.c
        src/matrix_vector_products_f2.c
        src/matrix_transpose_f2.c
        src/ggm.c
        src/ggm.h
        src/vole_expansion.c
        src/piop_circuit.c
        src/gf128.c
        src/rsd.c
        src/ct_utils.c
        src/sdith_ct_utils.h
        src/sdith_prng_private.h
        src/commons.h
        src/sdith_signature.c
        src/sdith_signature_parameters.c
        src/vole_to_piop.c
        src/vole_parameters.c
        src/sdith_arithmetic.h
        src/sdith_algebra.h
        src/sdith_vole_to_piop.h
        src/sdith_rsd.h
        src/sdith_piop_circuits.h
        src/vole_parameters.h
        src/vole_generation.h
        src/sdith_signature.h
)
set(SDITH_SRCS_AVX2
        src/ct_utils_avx2.c
        src/gf128_avx2.c
        src/gf192_avx2.c
        src/gf256_avx2.c
        src/matrix_vector_products_f2_avx2.c
        src/sdith_prng_avx2.c
        src/vole_parameters_avx2.c
)
# -maes: sdith_prng_avx2.c fuses aes128 row generation with the gf128 reduction, so it
# needs the AES-NI intrinsics as well (same set as the lib/aes AVX2 sources).
set_source_files_properties(${SDITH_SRCS_AVX2} PROPERTIES COMPILE_FLAGS "-mpclmul -msse2 -mavx2 -maes")

if (NOT X86_LINUX)
    set(SDITH_SRCS_AVX2)
endif ()

add_library(sdith STATIC ${SDITH_SRCS} ${SDITH_SRCS_AVX2})
target_include_directories(sdith PUBLIC src)
target_link_libraries(sdith sha3 aes m)

# The one C test shipped with the package: signs and verifies in a loop and prints a
# percentile histogram of the timings for this parameter set.
add_executable(bench_sdith test/bench_sdith.c)
target_link_libraries(bench_sdith sdith)
target_include_directories(bench_sdith PRIVATE test)

if (BUILD_KATS)
    add_subdirectory(generator)
endif (BUILD_KATS)
