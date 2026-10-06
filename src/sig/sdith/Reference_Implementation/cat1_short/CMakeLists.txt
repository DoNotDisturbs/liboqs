cmake_minimum_required(VERSION 3.10)
project(sdith_cat1_short C)

# Standalone build of the SDitH reference implementation, parameter set SDiTH-CAT1-SHORT.
# Generated from the reference repository by utils/make_nist_package.py.
#
#   mkdir build && cd build && cmake .. && make
#   ./bench_sdith                    -- keygen/sign/verify timings
#   ./generator/PQCgenKAT_cat1_short  -- writes PQCsignKAT_147.req and .rsp

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Default build type: Release" FORCE)
endif ()

set(CMAKE_C_FLAGS_DEBUG "-O0 -g3 -Wall -Werror")
set(CMAKE_C_FLAGS_RELEASE "-O3 -g3 -Wall -Werror -DNDEBUG")

set(BUILD_KATS ON CACHE BOOL "Build the NIST KAT generator (needs libcrypto)")

# This package ships the portable C reference code only: the avx2/aes-ni sources are
# not part of it, so the run-time dispatch in vole_parameters.c is compiled out.
set(USE_REFERENCE_CODE_ONLY ON CACHE BOOL "Reference package: portable C only" FORCE)
add_definitions(-DONLY_REF_IMPLEMENTATION)

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

add_library(sdith STATIC ${SDITH_SRCS})
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
