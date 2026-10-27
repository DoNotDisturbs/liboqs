// SPDX-License-Identifier: MIT

#include <stdlib.h>

#include <oqs/sig_uov.h>

#if defined(OQS_ENABLE_SIG_uov_ov_III_pkc)

extern int pqov_uov_III_pkc_ref_keypair(uint8_t *pk, uint8_t *sk);
extern int pqov_uov_III_pkc_ref_signature(uint8_t *sig, size_t *siglen, const uint8_t *m, size_t mlen, const uint8_t *sk);
extern int pqov_uov_III_pkc_ref_verify(const uint8_t *sig, size_t siglen, const uint8_t *m, size_t mlen, const uint8_t *pk);

#if defined(OQS_ENABLE_SIG_uov_ov_III_pkc_neon)
extern int pqov_uov_III_pkc_neon_keypair(uint8_t *pk, uint8_t *sk);
extern int pqov_uov_III_pkc_neon_signature(uint8_t *sig, size_t *siglen, const uint8_t *m, size_t mlen, const uint8_t *sk);
extern int pqov_uov_III_pkc_neon_verify(const uint8_t *sig, size_t siglen, const uint8_t *m, size_t mlen, const uint8_t *pk);
#endif

#if defined(OQS_ENABLE_SIG_uov_ov_III_pkc_avx2)
extern int pqov_uov_III_pkc_avx2_keypair(uint8_t *pk, uint8_t *sk);
extern int pqov_uov_III_pkc_avx2_signature(uint8_t *sig, size_t *siglen, const uint8_t *m, size_t mlen, const uint8_t *sk);
extern int pqov_uov_III_pkc_avx2_verify(const uint8_t *sig, size_t siglen, const uint8_t *m, size_t mlen, const uint8_t *pk);
#endif

static OQS_SIG *uov_ov_III_pkc_new_common(
        const char *method_name,
        OQS_STATUS (*keypair)(uint8_t *, uint8_t *),
        OQS_STATUS (*sign)(uint8_t *, size_t *, const uint8_t *, size_t, const uint8_t *),
        OQS_STATUS (*verify)(const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *),
        OQS_STATUS (*sign_with_ctx)(uint8_t *, size_t *, const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *),
        OQS_STATUS (*verify_with_ctx)(const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *)) {

    OQS_SIG *sig = OQS_MEM_malloc(sizeof(OQS_SIG));
    if (sig == NULL) {
        return NULL;
    }

    sig->method_name = method_name;
    sig->alg_version = "Round 2";
    sig->claimed_nist_level = 3;
    sig->euf_cma = true;
    sig->suf_cma = false;
    sig->sig_with_ctx_support = false;

    sig->length_public_key = OQS_SIG_uov_ov_III_pkc_length_public_key;
    sig->length_secret_key = OQS_SIG_uov_ov_III_pkc_length_secret_key;
    sig->length_signature = OQS_SIG_uov_ov_III_pkc_length_signature;

    sig->keypair = keypair;
    sig->sign = sign;
    sig->verify = verify;
    sig->sign_with_ctx_str = sign_with_ctx;
    sig->verify_with_ctx_str = verify_with_ctx;

    return sig;
}

/* Historical liboqs runtime-dispatched method, retained for compatibility. */
OQS_SIG *OQS_SIG_uov_ov_III_pkc_new(void) {
    return uov_ov_III_pkc_new_common(
        "OV-III-pkc",
        OQS_SIG_uov_ov_III_pkc_keypair,
        OQS_SIG_uov_ov_III_pkc_sign,
        OQS_SIG_uov_ov_III_pkc_verify,
        OQS_SIG_uov_ov_III_pkc_sign_with_ctx_str,
        OQS_SIG_uov_ov_III_pkc_verify_with_ctx_str);
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_keypair(uint8_t *public_key, uint8_t *secret_key) {
#if defined(OQS_ENABLE_SIG_uov_ov_III_pkc_neon)
#if defined(OQS_DIST_BUILD)
    if (OQS_CPU_has_extension(OQS_CPU_EXT_ARM_NEON)) {
#endif
        return (OQS_STATUS)pqov_uov_III_pkc_neon_keypair(public_key, secret_key);
#if defined(OQS_DIST_BUILD)
    } else {
        return (OQS_STATUS)pqov_uov_III_pkc_ref_keypair(public_key, secret_key);
    }
#endif
#elif defined(OQS_ENABLE_SIG_uov_ov_III_pkc_avx2)
#if defined(OQS_DIST_BUILD)
    if (OQS_CPU_has_extension(OQS_CPU_EXT_AVX2)) {
#endif
        return (OQS_STATUS)pqov_uov_III_pkc_avx2_keypair(public_key, secret_key);
#if defined(OQS_DIST_BUILD)
    } else {
        return (OQS_STATUS)pqov_uov_III_pkc_ref_keypair(public_key, secret_key);
    }
#endif
#else
    return (OQS_STATUS)pqov_uov_III_pkc_ref_keypair(public_key, secret_key);
#endif
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_sign(
        uint8_t *signature, size_t *signature_len,
        const uint8_t *message, size_t message_len,
        const uint8_t *secret_key) {
#if defined(OQS_ENABLE_SIG_uov_ov_III_pkc_neon)
#if defined(OQS_DIST_BUILD)
    if (OQS_CPU_has_extension(OQS_CPU_EXT_ARM_NEON)) {
#endif
        return (OQS_STATUS)pqov_uov_III_pkc_neon_signature(signature, signature_len, message, message_len, secret_key);
#if defined(OQS_DIST_BUILD)
    } else {
        return (OQS_STATUS)pqov_uov_III_pkc_ref_signature(signature, signature_len, message, message_len, secret_key);
    }
#endif
#elif defined(OQS_ENABLE_SIG_uov_ov_III_pkc_avx2)
#if defined(OQS_DIST_BUILD)
    if (OQS_CPU_has_extension(OQS_CPU_EXT_AVX2)) {
#endif
        return (OQS_STATUS)pqov_uov_III_pkc_avx2_signature(signature, signature_len, message, message_len, secret_key);
#if defined(OQS_DIST_BUILD)
    } else {
        return (OQS_STATUS)pqov_uov_III_pkc_ref_signature(signature, signature_len, message, message_len, secret_key);
    }
#endif
#else
    return (OQS_STATUS)pqov_uov_III_pkc_ref_signature(signature, signature_len, message, message_len, secret_key);
#endif
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_verify(
        const uint8_t *message, size_t message_len,
        const uint8_t *signature, size_t signature_len,
        const uint8_t *public_key) {
#if defined(OQS_ENABLE_SIG_uov_ov_III_pkc_neon)
#if defined(OQS_DIST_BUILD)
    if (OQS_CPU_has_extension(OQS_CPU_EXT_ARM_NEON)) {
#endif
        return (OQS_STATUS)pqov_uov_III_pkc_neon_verify(signature, signature_len, message, message_len, public_key);
#if defined(OQS_DIST_BUILD)
    } else {
        return (OQS_STATUS)pqov_uov_III_pkc_ref_verify(signature, signature_len, message, message_len, public_key);
    }
#endif
#elif defined(OQS_ENABLE_SIG_uov_ov_III_pkc_avx2)
#if defined(OQS_DIST_BUILD)
    if (OQS_CPU_has_extension(OQS_CPU_EXT_AVX2)) {
#endif
        return (OQS_STATUS)pqov_uov_III_pkc_avx2_verify(signature, signature_len, message, message_len, public_key);
#if defined(OQS_DIST_BUILD)
    } else {
        return (OQS_STATUS)pqov_uov_III_pkc_ref_verify(signature, signature_len, message, message_len, public_key);
    }
#endif
#else
    return (OQS_STATUS)pqov_uov_III_pkc_ref_verify(signature, signature_len, message, message_len, public_key);
#endif
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_sign_with_ctx_str(
        uint8_t *signature, size_t *signature_len,
        const uint8_t *message, size_t message_len,
        const uint8_t *ctx_str, size_t ctx_str_len,
        const uint8_t *secret_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return OQS_SIG_uov_ov_III_pkc_sign(signature, signature_len, message, message_len, secret_key);
    }
    return OQS_ERROR;
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_verify_with_ctx_str(
        const uint8_t *message, size_t message_len,
        const uint8_t *signature, size_t signature_len,
        const uint8_t *ctx_str, size_t ctx_str_len,
        const uint8_t *public_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return OQS_SIG_uov_ov_III_pkc_verify(message, message_len, signature, signature_len, public_key);
    }
    return OQS_ERROR;
}

/* Explicit reference method. Direct official ref backend, no dispatch. */
OQS_SIG *OQS_SIG_uov_ov_III_pkc_ref_new(void) {
    return uov_ov_III_pkc_new_common(
        "OV-III-pkc-ref",
        OQS_SIG_uov_ov_III_pkc_ref_keypair,
        OQS_SIG_uov_ov_III_pkc_ref_sign,
        OQS_SIG_uov_ov_III_pkc_ref_verify,
        OQS_SIG_uov_ov_III_pkc_ref_sign_with_ctx_str,
        OQS_SIG_uov_ov_III_pkc_ref_verify_with_ctx_str);
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_ref_keypair(uint8_t *public_key, uint8_t *secret_key) {
    return (OQS_STATUS)pqov_uov_III_pkc_ref_keypair(public_key, secret_key);
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_ref_sign(
        uint8_t *signature, size_t *signature_len,
        const uint8_t *message, size_t message_len,
        const uint8_t *secret_key) {
    return (OQS_STATUS)pqov_uov_III_pkc_ref_signature(signature, signature_len, message, message_len, secret_key);
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_ref_verify(
        const uint8_t *message, size_t message_len,
        const uint8_t *signature, size_t signature_len,
        const uint8_t *public_key) {
    return (OQS_STATUS)pqov_uov_III_pkc_ref_verify(signature, signature_len, message, message_len, public_key);
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_ref_sign_with_ctx_str(
        uint8_t *signature, size_t *signature_len,
        const uint8_t *message, size_t message_len,
        const uint8_t *ctx_str, size_t ctx_str_len,
        const uint8_t *secret_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return OQS_SIG_uov_ov_III_pkc_ref_sign(signature, signature_len, message, message_len, secret_key);
    }
    return OQS_ERROR;
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_ref_verify_with_ctx_str(
        const uint8_t *message, size_t message_len,
        const uint8_t *signature, size_t signature_len,
        const uint8_t *ctx_str, size_t ctx_str_len,
        const uint8_t *public_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return OQS_SIG_uov_ov_III_pkc_ref_verify(message, message_len, signature, signature_len, public_key);
    }
    return OQS_ERROR;
}

/* Explicit AVX2 method. Direct official AVX2 backend, no fallback. */
#if defined(OQS_ENABLE_SIG_uov_ov_III_pkc_avx2)

OQS_SIG *OQS_SIG_uov_ov_III_pkc_avx2_new(void) {
    return uov_ov_III_pkc_new_common(
        "OV-III-pkc-avx2",
        OQS_SIG_uov_ov_III_pkc_avx2_keypair,
        OQS_SIG_uov_ov_III_pkc_avx2_sign,
        OQS_SIG_uov_ov_III_pkc_avx2_verify,
        OQS_SIG_uov_ov_III_pkc_avx2_sign_with_ctx_str,
        OQS_SIG_uov_ov_III_pkc_avx2_verify_with_ctx_str);
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_avx2_keypair(uint8_t *public_key, uint8_t *secret_key) {
    return (OQS_STATUS)pqov_uov_III_pkc_avx2_keypair(public_key, secret_key);
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_avx2_sign(
        uint8_t *signature, size_t *signature_len,
        const uint8_t *message, size_t message_len,
        const uint8_t *secret_key) {
    return (OQS_STATUS)pqov_uov_III_pkc_avx2_signature(signature, signature_len, message, message_len, secret_key);
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_avx2_verify(
        const uint8_t *message, size_t message_len,
        const uint8_t *signature, size_t signature_len,
        const uint8_t *public_key) {
    return (OQS_STATUS)pqov_uov_III_pkc_avx2_verify(signature, signature_len, message, message_len, public_key);
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_avx2_sign_with_ctx_str(
        uint8_t *signature, size_t *signature_len,
        const uint8_t *message, size_t message_len,
        const uint8_t *ctx_str, size_t ctx_str_len,
        const uint8_t *secret_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return OQS_SIG_uov_ov_III_pkc_avx2_sign(signature, signature_len, message, message_len, secret_key);
    }
    return OQS_ERROR;
}

OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_avx2_verify_with_ctx_str(
        const uint8_t *message, size_t message_len,
        const uint8_t *signature, size_t signature_len,
        const uint8_t *ctx_str, size_t ctx_str_len,
        const uint8_t *public_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return OQS_SIG_uov_ov_III_pkc_avx2_verify(message, message_len, signature, signature_len, public_key);
    }
    return OQS_ERROR;
}

#endif /* OQS_ENABLE_SIG_uov_ov_III_pkc_avx2 */
#endif /* OQS_ENABLE_SIG_uov_ov_III_pkc */
