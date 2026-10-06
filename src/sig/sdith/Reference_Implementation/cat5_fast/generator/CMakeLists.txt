# NIST's KAT generator for SDiTH-CAT5-FAST.  rng.c is NIST's AES-256-CTR-DRBG, which calls
# into libcrypto; nothing else in the package needs it.
find_path(crypto_inc NAMES openssl/conf.h)
find_library(crypto NAMES crypto)
if (NOT (crypto_inc AND crypto))
    message(FATAL_ERROR "libcrypto not found (required by the NIST KAT generator): I=${crypto_inc} L=${crypto}")
endif ()
message(STATUS "Found libcrypto: I=${crypto_inc} L=${crypto}")

add_executable(PQCgenKAT_cat5_fast PQCgenKAT_sign.c rng.c rng.h sign.c api.h)
target_link_libraries(PQCgenKAT_cat5_fast sdith ${crypto})
target_include_directories(PQCgenKAT_cat5_fast PRIVATE ${crypto_inc})
set_source_files_properties(PQCgenKAT_sign.c PROPERTIES COMPILE_FLAGS "-Wno-unused-result")
set_source_files_properties(rng.c PROPERTIES COMPILE_FLAGS "-Wno-unused-but-set-variable")
