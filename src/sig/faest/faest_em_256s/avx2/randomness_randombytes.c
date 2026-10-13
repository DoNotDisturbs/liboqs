/*
 * SPDX-License-Identifier: MIT
 * liboqs integration: route FAEST randomness through OQS_randombytes.
 */
#include "randomness.h"
#include <oqs/rand.h>

int rand_bytes(uint8_t *dst, size_t len) {
    OQS_randombytes(dst, len);
    return 0;
}
