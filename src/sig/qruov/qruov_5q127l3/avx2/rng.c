/* SPDX-License-Identifier: MIT
 * liboqs integration adapter for QR-UOV randomness.
 */
#include "rng.h"
#include <oqs/rand.h>

void randombytes_init(unsigned char *entropy_input,
                      unsigned char *personalization_string,
                      int security_strength) {
    (void)entropy_input;
    (void)personalization_string;
    (void)security_strength;
}

void randombytes(unsigned char *x, unsigned long long xlen) {
    OQS_randombytes(x, (size_t)xlen);
}
