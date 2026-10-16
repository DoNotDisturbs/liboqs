/* SPDX-License-Identifier: MIT */
/*
 * Internal build adapter.
 * Forces the NIST optimized implementation's AVX2 parameter initializer.
 * Official NIST source files remain unchanged.
 */
#ifndef OQS_SDITH_FORCE_AVX2_INTERNAL_H
#define OQS_SDITH_FORCE_AVX2_INTERNAL_H

#ifdef vole_parameters_init_with_variant
#undef vole_parameters_init_with_variant
#endif
#define vole_parameters_init_with_variant vole_parameters_init_with_variant_avx

#endif /* OQS_SDITH_FORCE_AVX2_INTERNAL_H */
