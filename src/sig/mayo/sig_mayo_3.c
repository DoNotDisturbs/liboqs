// SPDX-License-Identifier: MIT

#include <stdlib.h>
#include <oqs/sig_mayo.h>

/* Compiled with MAYO_BUILD_TYPE_REF + ENABLE_PARAMS_DYNAMIC. */
#include "mayo.h"

#if defined(OQS_ENABLE_SIG_mayo_3)

extern int pqmayo_MAYO_3_opt_crypto_sign_keypair(uint8_t *, uint8_t *);
extern int pqmayo_MAYO_3_opt_crypto_sign_signature(uint8_t *, size_t *, const uint8_t *, size_t, const uint8_t *);
extern int pqmayo_MAYO_3_opt_crypto_sign_verify(const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *);
#if defined(OQS_ENABLE_SIG_mayo_3_avx2)
extern int pqmayo_MAYO_3_avx2_crypto_sign_keypair(uint8_t *, uint8_t *);
extern int pqmayo_MAYO_3_avx2_crypto_sign_signature(uint8_t *, size_t *, const uint8_t *, size_t, const uint8_t *);
extern int pqmayo_MAYO_3_avx2_crypto_sign_verify(const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *);
#endif
#if defined(OQS_ENABLE_SIG_mayo_3_neon)
extern int pqmayo_MAYO_3_neon_crypto_sign_keypair(uint8_t *, uint8_t *);
extern int pqmayo_MAYO_3_neon_crypto_sign_signature(uint8_t *, size_t *, const uint8_t *, size_t, const uint8_t *);
extern int pqmayo_MAYO_3_neon_crypto_sign_verify(const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *);
#endif

static OQS_SIG *mayo_3_new_common(
    const char *name,
    OQS_STATUS (*keypair)(uint8_t *, uint8_t *),
    OQS_STATUS (*sign)(uint8_t *, size_t *, const uint8_t *, size_t, const uint8_t *),
    OQS_STATUS (*verify)(const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *),
    OQS_STATUS (*sign_ctx)(uint8_t *, size_t *, const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *),
    OQS_STATUS (*verify_ctx)(const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *)) {
    OQS_SIG *sig = OQS_MEM_malloc(sizeof(OQS_SIG));
    if (sig == NULL) return NULL;
    sig->method_name = name;
    sig->alg_version = "round2";
    sig->claimed_nist_level = 3;
    sig->euf_cma = true;
    sig->suf_cma = false;
    sig->sig_with_ctx_support = false;
    sig->length_public_key = OQS_SIG_mayo_3_length_public_key;
    sig->length_secret_key = OQS_SIG_mayo_3_length_secret_key;
    sig->length_signature = OQS_SIG_mayo_3_length_signature;
    sig->keypair = keypair;
    sig->sign = sign;
    sig->verify = verify;
    sig->sign_with_ctx_str = sign_ctx;
    sig->verify_with_ctx_str = verify_ctx;
    return sig;
}

/* Historical liboqs MAYO-3: runtime dispatch preserved. */
OQS_SIG *OQS_SIG_mayo_3_new(void) {
    return mayo_3_new_common("MAYO-3", OQS_SIG_mayo_3_keypair,
        OQS_SIG_mayo_3_sign, OQS_SIG_mayo_3_verify,
        OQS_SIG_mayo_3_sign_with_ctx_str, OQS_SIG_mayo_3_verify_with_ctx_str);
}

OQS_API OQS_STATUS OQS_SIG_mayo_3_keypair(uint8_t *pk, uint8_t *sk) {
#if defined(OQS_ENABLE_SIG_mayo_3_avx2)
#if defined(OQS_DIST_BUILD)
    if (OQS_CPU_has_extension(OQS_CPU_EXT_AVX2)) {
#endif
        return (OQS_STATUS)pqmayo_MAYO_3_avx2_crypto_sign_keypair(pk, sk);
#if defined(OQS_DIST_BUILD)
    } else return (OQS_STATUS)pqmayo_MAYO_3_opt_crypto_sign_keypair(pk, sk);
#endif
#elif defined(OQS_ENABLE_SIG_mayo_3_neon)
#if defined(OQS_DIST_BUILD)
    if (OQS_CPU_has_extension(OQS_CPU_EXT_ARM_NEON)) {
#endif
        return (OQS_STATUS)pqmayo_MAYO_3_neon_crypto_sign_keypair(pk, sk);
#if defined(OQS_DIST_BUILD)
    } else return (OQS_STATUS)pqmayo_MAYO_3_opt_crypto_sign_keypair(pk, sk);
#endif
#else
    return (OQS_STATUS)pqmayo_MAYO_3_opt_crypto_sign_keypair(pk, sk);
#endif
}

OQS_API OQS_STATUS OQS_SIG_mayo_3_sign(uint8_t *sig, size_t *siglen, const uint8_t *m, size_t mlen, const uint8_t *sk) {
#if defined(OQS_ENABLE_SIG_mayo_3_avx2)
#if defined(OQS_DIST_BUILD)
    if (OQS_CPU_has_extension(OQS_CPU_EXT_AVX2)) {
#endif
        return (OQS_STATUS)pqmayo_MAYO_3_avx2_crypto_sign_signature(sig, siglen, m, mlen, sk);
#if defined(OQS_DIST_BUILD)
    } else return (OQS_STATUS)pqmayo_MAYO_3_opt_crypto_sign_signature(sig, siglen, m, mlen, sk);
#endif
#elif defined(OQS_ENABLE_SIG_mayo_3_neon)
#if defined(OQS_DIST_BUILD)
    if (OQS_CPU_has_extension(OQS_CPU_EXT_ARM_NEON)) {
#endif
        return (OQS_STATUS)pqmayo_MAYO_3_neon_crypto_sign_signature(sig, siglen, m, mlen, sk);
#if defined(OQS_DIST_BUILD)
    } else return (OQS_STATUS)pqmayo_MAYO_3_opt_crypto_sign_signature(sig, siglen, m, mlen, sk);
#endif
#else
    return (OQS_STATUS)pqmayo_MAYO_3_opt_crypto_sign_signature(sig, siglen, m, mlen, sk);
#endif
}

OQS_API OQS_STATUS OQS_SIG_mayo_3_verify(const uint8_t *m, size_t mlen, const uint8_t *sig, size_t siglen, const uint8_t *pk) {
#if defined(OQS_ENABLE_SIG_mayo_3_avx2)
#if defined(OQS_DIST_BUILD)
    if (OQS_CPU_has_extension(OQS_CPU_EXT_AVX2)) {
#endif
        return (OQS_STATUS)pqmayo_MAYO_3_avx2_crypto_sign_verify(sig, siglen, m, mlen, pk);
#if defined(OQS_DIST_BUILD)
    } else return (OQS_STATUS)pqmayo_MAYO_3_opt_crypto_sign_verify(sig, siglen, m, mlen, pk);
#endif
#elif defined(OQS_ENABLE_SIG_mayo_3_neon)
#if defined(OQS_DIST_BUILD)
    if (OQS_CPU_has_extension(OQS_CPU_EXT_ARM_NEON)) {
#endif
        return (OQS_STATUS)pqmayo_MAYO_3_neon_crypto_sign_verify(sig, siglen, m, mlen, pk);
#if defined(OQS_DIST_BUILD)
    } else return (OQS_STATUS)pqmayo_MAYO_3_opt_crypto_sign_verify(sig, siglen, m, mlen, pk);
#endif
#else
    return (OQS_STATUS)pqmayo_MAYO_3_opt_crypto_sign_verify(sig, siglen, m, mlen, pk);
#endif
}

OQS_API OQS_STATUS OQS_SIG_mayo_3_sign_with_ctx_str(uint8_t *sig, size_t *siglen, const uint8_t *m, size_t mlen, const uint8_t *ctx, size_t ctxlen, const uint8_t *sk) {
    return (ctx == NULL && ctxlen == 0) ? OQS_SIG_mayo_3_sign(sig, siglen, m, mlen, sk) : OQS_ERROR;
}
OQS_API OQS_STATUS OQS_SIG_mayo_3_verify_with_ctx_str(const uint8_t *m, size_t mlen, const uint8_t *sig, size_t siglen, const uint8_t *ctx, size_t ctxlen, const uint8_t *pk) {
    return (ctx == NULL && ctxlen == 0) ? OQS_SIG_mayo_3_verify(m, mlen, sig, siglen, pk) : OQS_ERROR;
}

/* Genuine upstream reference path. No CPU dispatch or fallback. */
OQS_SIG *OQS_SIG_mayo_3_ref_new(void) {
    return mayo_3_new_common("MAYO-3-ref", OQS_SIG_mayo_3_ref_keypair,
        OQS_SIG_mayo_3_ref_sign, OQS_SIG_mayo_3_ref_verify,
        OQS_SIG_mayo_3_ref_sign_with_ctx_str, OQS_SIG_mayo_3_ref_verify_with_ctx_str);
}
OQS_API OQS_STATUS OQS_SIG_mayo_3_ref_keypair(uint8_t *pk, uint8_t *sk) {
    return (OQS_STATUS)mayo_keypair(&MAYO_3, pk, sk);
}
OQS_API OQS_STATUS OQS_SIG_mayo_3_ref_sign(uint8_t *sig, size_t *siglen, const uint8_t *m, size_t mlen, const uint8_t *sk) {
    return (OQS_STATUS)mayo_sign_signature(&MAYO_3, sig, siglen, m, mlen, sk);
}
OQS_API OQS_STATUS OQS_SIG_mayo_3_ref_verify(const uint8_t *m, size_t mlen, const uint8_t *sig, size_t siglen, const uint8_t *pk) {
    if (siglen != OQS_SIG_mayo_3_length_signature) return OQS_ERROR;
    return (OQS_STATUS)mayo_verify(&MAYO_3, m, mlen, sig, pk);
}
OQS_API OQS_STATUS OQS_SIG_mayo_3_ref_sign_with_ctx_str(uint8_t *sig, size_t *siglen, const uint8_t *m, size_t mlen, const uint8_t *ctx, size_t ctxlen, const uint8_t *sk) {
    return (ctx == NULL && ctxlen == 0) ? OQS_SIG_mayo_3_ref_sign(sig, siglen, m, mlen, sk) : OQS_ERROR;
}
OQS_API OQS_STATUS OQS_SIG_mayo_3_ref_verify_with_ctx_str(const uint8_t *m, size_t mlen, const uint8_t *sig, size_t siglen, const uint8_t *ctx, size_t ctxlen, const uint8_t *pk) {
    return (ctx == NULL && ctxlen == 0) ? OQS_SIG_mayo_3_ref_verify(m, mlen, sig, siglen, pk) : OQS_ERROR;
}

#if defined(OQS_ENABLE_SIG_mayo_3_avx2)
/* Direct AVX2 path. No runtime dispatch or fallback. */
OQS_SIG *OQS_SIG_mayo_3_avx2_new(void) {
    return mayo_3_new_common("MAYO-3-avx2", OQS_SIG_mayo_3_avx2_keypair,
        OQS_SIG_mayo_3_avx2_sign, OQS_SIG_mayo_3_avx2_verify,
        OQS_SIG_mayo_3_avx2_sign_with_ctx_str, OQS_SIG_mayo_3_avx2_verify_with_ctx_str);
}
OQS_API OQS_STATUS OQS_SIG_mayo_3_avx2_keypair(uint8_t *pk, uint8_t *sk) {
    return (OQS_STATUS)pqmayo_MAYO_3_avx2_crypto_sign_keypair(pk, sk);
}
OQS_API OQS_STATUS OQS_SIG_mayo_3_avx2_sign(uint8_t *sig, size_t *siglen, const uint8_t *m, size_t mlen, const uint8_t *sk) {
    return (OQS_STATUS)pqmayo_MAYO_3_avx2_crypto_sign_signature(sig, siglen, m, mlen, sk);
}
OQS_API OQS_STATUS OQS_SIG_mayo_3_avx2_verify(const uint8_t *m, size_t mlen, const uint8_t *sig, size_t siglen, const uint8_t *pk) {
    return (OQS_STATUS)pqmayo_MAYO_3_avx2_crypto_sign_verify(sig, siglen, m, mlen, pk);
}
OQS_API OQS_STATUS OQS_SIG_mayo_3_avx2_sign_with_ctx_str(uint8_t *sig, size_t *siglen, const uint8_t *m, size_t mlen, const uint8_t *ctx, size_t ctxlen, const uint8_t *sk) {
    return (ctx == NULL && ctxlen == 0) ? OQS_SIG_mayo_3_avx2_sign(sig, siglen, m, mlen, sk) : OQS_ERROR;
}
OQS_API OQS_STATUS OQS_SIG_mayo_3_avx2_verify_with_ctx_str(const uint8_t *m, size_t mlen, const uint8_t *sig, size_t siglen, const uint8_t *ctx, size_t ctxlen, const uint8_t *pk) {
    return (ctx == NULL && ctxlen == 0) ? OQS_SIG_mayo_3_avx2_verify(m, mlen, sig, siglen, pk) : OQS_ERROR;
}
#endif

#endif
