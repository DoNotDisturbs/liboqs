# Reference package: the avx2/aes-ni sources of this library are not shipped.
# aes_ansi_ref.c is the original big-endian public reference implementation; it is
# kept for documentation and is deliberately not compiled.
set(AES_SRCS_GENERIC
        rijndael256.c
        rijndael256.h
        aes_ansi_littleendian_ref.c
        aes128_ctrle.h
        aes128_ctrle_special_ref.c
        rijndael256_ctrle.h
        rijndael256_ctrle_special_ref.c
)
add_library(aes STATIC ${AES_SRCS_GENERIC})
target_include_directories(aes PUBLIC .)
