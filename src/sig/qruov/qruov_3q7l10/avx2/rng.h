#ifndef QRUOV_RNG_H
#define QRUOV_RNG_H

#include <stddef.h>
#include <stdint.h>

void randombytes_init(unsigned char *entropy_input,
                      unsigned char *personalization_string,
                      int security_strength);
void randombytes(unsigned char *x, unsigned long long xlen);

#endif /* QRUOV_RNG_H */
