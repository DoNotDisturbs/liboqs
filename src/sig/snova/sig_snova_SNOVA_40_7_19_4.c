// SPDX-License-Identifier: MIT

#include <stdlib.h>
#include <oqs/sig_snova.h>

#if defined(OQS_ENABLE_SIG_snova_SNOVA_40_7_19_4) || defined(OQS_ENABLE_SIG_snova_SNOVA_40_7_19_4_avx2)

static OQS_SIG *snova_SNOVA_40_7_19_4_new_common(
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
    sig->alg_version = "SNOVA 2.3";
    sig->claimed_nist_level = 3;
    sig->euf_cma = true;
    sig->suf_cma = false;
    sig->sig_with_ctx_support = false;

    sig->length_public_key = 1532;
    sig->length_secret_key = 48;
    sig->length_signature = 418;

    sig->keypair = keypair;
    sig->sign = sign;
    sig->verify = verify;
    sig->sign_with_ctx_str = sign_with_ctx;
    sig->verify_with_ctx_str = verify_with_ctx;

    return sig;
}

#if defined(OQS_ENABLE_SIG_snova_SNOVA_40_7_19_4)

extern OQS_STATUS _snova_40_7_19_4_ref_oqs_keypair(uint8_t *pk, uint8_t *sk);
extern OQS_STATUS _snova_40_7_19_4_ref_oqs_sign(uint8_t *sig, size_t *siglen, const uint8_t *m, size_t mlen, const uint8_t *sk);
extern OQS_STATUS _snova_40_7_19_4_ref_oqs_verify(const uint8_t *sig, size_t siglen, const uint8_t *m, size_t mlen, const uint8_t *pk);

OQS_SIG *OQS_SIG_snova_SNOVA_40_7_19_4_ref_new(void) {
    return snova_SNOVA_40_7_19_4_new_common(
        "SNOVA_40_7_19_4-ref",
        OQS_SIG_snova_SNOVA_40_7_19_4_ref_keypair,
        OQS_SIG_snova_SNOVA_40_7_19_4_ref_sign,
        OQS_SIG_snova_SNOVA_40_7_19_4_ref_verify,
        OQS_SIG_snova_SNOVA_40_7_19_4_ref_sign_with_ctx_str,
        OQS_SIG_snova_SNOVA_40_7_19_4_ref_verify_with_ctx_str);
}

OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_ref_keypair(uint8_t *public_key, uint8_t *secret_key) {
    return _snova_40_7_19_4_ref_oqs_keypair(public_key, secret_key);
}

OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_ref_sign(
        uint8_t *signature, size_t *signature_len,
        const uint8_t *message, size_t message_len,
        const uint8_t *secret_key) {
    return _snova_40_7_19_4_ref_oqs_sign(signature, signature_len, message, message_len, secret_key);
}

OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_ref_verify(
        const uint8_t *message, size_t message_len,
        const uint8_t *signature, size_t signature_len,
        const uint8_t *public_key) {
    return _snova_40_7_19_4_ref_oqs_verify(signature, signature_len, message, message_len, public_key);
}

OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_ref_sign_with_ctx_str(
        uint8_t *signature, size_t *signature_len,
        const uint8_t *message, size_t message_len,
        const uint8_t *ctx_str, size_t ctx_str_len,
        const uint8_t *secret_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return OQS_SIG_snova_SNOVA_40_7_19_4_ref_sign(signature, signature_len, message, message_len, secret_key);
    }
    return OQS_ERROR;
}

OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_ref_verify_with_ctx_str(
        const uint8_t *message, size_t message_len,
        const uint8_t *signature, size_t signature_len,
        const uint8_t *ctx_str, size_t ctx_str_len,
        const uint8_t *public_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return OQS_SIG_snova_SNOVA_40_7_19_4_ref_verify(message, message_len, signature, signature_len, public_key);
    }
    return OQS_ERROR;
}

#endif /* OQS_ENABLE_SIG_snova_SNOVA_40_7_19_4 */

#if defined(OQS_ENABLE_SIG_snova_SNOVA_40_7_19_4_avx2)

extern OQS_STATUS _snova_40_7_19_4_avx2_oqs_keypair(uint8_t *pk, uint8_t *sk);
extern OQS_STATUS _snova_40_7_19_4_avx2_oqs_sign(uint8_t *sig, size_t *siglen, const uint8_t *m, size_t mlen, const uint8_t *sk);
extern OQS_STATUS _snova_40_7_19_4_avx2_oqs_verify(const uint8_t *sig, size_t siglen, const uint8_t *m, size_t mlen, const uint8_t *pk);

OQS_SIG *OQS_SIG_snova_SNOVA_40_7_19_4_avx2_new(void) {
    return snova_SNOVA_40_7_19_4_new_common(
        "SNOVA_40_7_19_4-avx2",
        OQS_SIG_snova_SNOVA_40_7_19_4_avx2_keypair,
        OQS_SIG_snova_SNOVA_40_7_19_4_avx2_sign,
        OQS_SIG_snova_SNOVA_40_7_19_4_avx2_verify,
        OQS_SIG_snova_SNOVA_40_7_19_4_avx2_sign_with_ctx_str,
        OQS_SIG_snova_SNOVA_40_7_19_4_avx2_verify_with_ctx_str);
}

OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_avx2_keypair(uint8_t *public_key, uint8_t *secret_key) {
    return _snova_40_7_19_4_avx2_oqs_keypair(public_key, secret_key);
}

OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_avx2_sign(
        uint8_t *signature, size_t *signature_len,
        const uint8_t *message, size_t message_len,
        const uint8_t *secret_key) {
    return _snova_40_7_19_4_avx2_oqs_sign(signature, signature_len, message, message_len, secret_key);
}

OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_avx2_verify(
        const uint8_t *message, size_t message_len,
        const uint8_t *signature, size_t signature_len,
        const uint8_t *public_key) {
    return _snova_40_7_19_4_avx2_oqs_verify(signature, signature_len, message, message_len, public_key);
}

OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_avx2_sign_with_ctx_str(
        uint8_t *signature, size_t *signature_len,
        const uint8_t *message, size_t message_len,
        const uint8_t *ctx_str, size_t ctx_str_len,
        const uint8_t *secret_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return OQS_SIG_snova_SNOVA_40_7_19_4_avx2_sign(signature, signature_len, message, message_len, secret_key);
    }
    return OQS_ERROR;
}

OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_avx2_verify_with_ctx_str(
        const uint8_t *message, size_t message_len,
        const uint8_t *signature, size_t signature_len,
        const uint8_t *ctx_str, size_t ctx_str_len,
        const uint8_t *public_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return OQS_SIG_snova_SNOVA_40_7_19_4_avx2_verify(message, message_len, signature, signature_len, public_key);
    }
    return OQS_ERROR;
}

#endif /* OQS_ENABLE_SIG_snova_SNOVA_40_7_19_4_avx2 */

#endif /* REF or AVX2 */
