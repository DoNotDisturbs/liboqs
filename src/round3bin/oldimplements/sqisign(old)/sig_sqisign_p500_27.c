// SPDX-License-Identifier: MIT
/**
 * \file sig_sqisign_p500_27.c
 * \brief liboqs wrappers for SQIsign-p500-27 v3 REF/Broadwell.
 */

#include <oqs/sig_sqisign.h>
#include <oqs/common.h>

#include <stddef.h>
#include <stdint.h>

#if defined(OQS_SQISIGN_P500_27_REF)
#define SQI_METHOD_NAME OQS_SIG_alg_sqisign_p500_27_ref
#define SQI_LENGTH_PUBLIC_KEY OQS_SIG_sqisign_p500_27_ref_length_public_key
#define SQI_LENGTH_SECRET_KEY OQS_SIG_sqisign_p500_27_ref_length_secret_key
#define SQI_LENGTH_SIGNATURE OQS_SIG_sqisign_p500_27_ref_length_signature
#define SQI_NEW OQS_SIG_sqisign_p500_27_ref_new
#define SQI_KEYPAIR OQS_SIG_sqisign_p500_27_ref_keypair
#define SQI_SIGN OQS_SIG_sqisign_p500_27_ref_sign
#define SQI_VERIFY OQS_SIG_sqisign_p500_27_ref_verify
#define SQI_SIGN_CTX OQS_SIG_sqisign_p500_27_ref_sign_with_ctx_str
#define SQI_VERIFY_CTX OQS_SIG_sqisign_p500_27_ref_verify_with_ctx_str
#define SQI_BACKEND_KEYPAIR sqisign_p500_27_ref_crypto_sign_keypair
#define SQI_BACKEND_SIGN sqisign_p500_27_ref_crypto_sign_signature
#define SQI_BACKEND_VERIFY sqisign_p500_27_ref_crypto_sign_verify
#define SQI_ALG_VERSION "round3-ref"

#elif defined(OQS_SQISIGN_P500_27_BROADWELL)
#define SQI_METHOD_NAME OQS_SIG_alg_sqisign_p500_27_broadwell
#define SQI_LENGTH_PUBLIC_KEY OQS_SIG_sqisign_p500_27_broadwell_length_public_key
#define SQI_LENGTH_SECRET_KEY OQS_SIG_sqisign_p500_27_broadwell_length_secret_key
#define SQI_LENGTH_SIGNATURE OQS_SIG_sqisign_p500_27_broadwell_length_signature
#define SQI_NEW OQS_SIG_sqisign_p500_27_broadwell_new
#define SQI_KEYPAIR OQS_SIG_sqisign_p500_27_broadwell_keypair
#define SQI_SIGN OQS_SIG_sqisign_p500_27_broadwell_sign
#define SQI_VERIFY OQS_SIG_sqisign_p500_27_broadwell_verify
#define SQI_SIGN_CTX OQS_SIG_sqisign_p500_27_broadwell_sign_with_ctx_str
#define SQI_VERIFY_CTX OQS_SIG_sqisign_p500_27_broadwell_verify_with_ctx_str
#define SQI_BACKEND_KEYPAIR sqisign_p500_27_broadwell_crypto_sign_keypair
#define SQI_BACKEND_SIGN sqisign_p500_27_broadwell_crypto_sign_signature
#define SQI_BACKEND_VERIFY sqisign_p500_27_broadwell_crypto_sign_verify
#define SQI_ALG_VERSION "round3-broadwell-avx2-bmi2-adx"

#else
#error "No SQIsign backend selector was provided"
#endif


extern int SQI_BACKEND_KEYPAIR(unsigned char *pk, unsigned char *sk);
extern int SQI_BACKEND_SIGN(unsigned char *sig,
                            unsigned long long *siglen,
                            const unsigned char *m,
                            unsigned long long mlen,
                            const unsigned char *sk);
extern int SQI_BACKEND_VERIFY(const unsigned char *sig,
                              unsigned long long siglen,
                              const unsigned char *m,
                              unsigned long long mlen,
                              const unsigned char *pk);

OQS_SIG *SQI_NEW(void) {
    OQS_SIG *sig = OQS_MEM_calloc(1, sizeof(OQS_SIG));
    if (sig == NULL) {
        return NULL;
    }

    sig->method_name = SQI_METHOD_NAME;
    sig->alg_version = SQI_ALG_VERSION;
    sig->claimed_nist_level = 3;
    sig->euf_cma = true;
    sig->suf_cma = false;
    sig->sig_with_ctx_support = false;

    sig->length_public_key = SQI_LENGTH_PUBLIC_KEY;
    sig->length_secret_key = SQI_LENGTH_SECRET_KEY;
    sig->length_signature = SQI_LENGTH_SIGNATURE;

    sig->keypair = SQI_KEYPAIR;
    sig->sign = SQI_SIGN;
    sig->verify = SQI_VERIFY;
    sig->sign_with_ctx_str = SQI_SIGN_CTX;
    sig->verify_with_ctx_str = SQI_VERIFY_CTX;

    return sig;
}

OQS_API OQS_STATUS SQI_KEYPAIR(uint8_t *public_key, uint8_t *secret_key) {
    if (public_key == NULL || secret_key == NULL) {
        return OQS_ERROR;
    }
    return SQI_BACKEND_KEYPAIR(public_key, secret_key) == 0 ? OQS_SUCCESS : OQS_ERROR;
}

OQS_API OQS_STATUS SQI_SIGN(uint8_t *signature, size_t *signature_len,
                            const uint8_t *message, size_t message_len,
                            const uint8_t *secret_key) {
    if (signature == NULL || signature_len == NULL || secret_key == NULL ||
        (message == NULL && message_len != 0)) {
        return OQS_ERROR;
    }

    unsigned long long backend_siglen = 0;
    const int rc = SQI_BACKEND_SIGN(signature,
                                    &backend_siglen,
                                    message,
                                    (unsigned long long)message_len,
                                    secret_key);
    if (rc != 0 || backend_siglen > (unsigned long long)SQI_LENGTH_SIGNATURE) {
        *signature_len = 0;
        return OQS_ERROR;
    }

    *signature_len = (size_t)backend_siglen;
    return OQS_SUCCESS;
}

OQS_API OQS_STATUS SQI_VERIFY(const uint8_t *message, size_t message_len,
                              const uint8_t *signature, size_t signature_len,
                              const uint8_t *public_key) {
    if (signature == NULL || public_key == NULL ||
        (message == NULL && message_len != 0)) {
        return OQS_ERROR;
    }

    return SQI_BACKEND_VERIFY(signature,
                              (unsigned long long)signature_len,
                              message,
                              (unsigned long long)message_len,
                              public_key) == 0 ? OQS_SUCCESS : OQS_ERROR;
}

OQS_API OQS_STATUS SQI_SIGN_CTX(uint8_t *signature, size_t *signature_len,
                                const uint8_t *message, size_t message_len,
                                const uint8_t *ctx_str, size_t ctx_str_len,
                                const uint8_t *secret_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return SQI_SIGN(signature, signature_len, message, message_len, secret_key);
    }
    return OQS_ERROR;
}

OQS_API OQS_STATUS SQI_VERIFY_CTX(const uint8_t *message, size_t message_len,
                                  const uint8_t *signature, size_t signature_len,
                                  const uint8_t *ctx_str, size_t ctx_str_len,
                                  const uint8_t *public_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return SQI_VERIFY(message, message_len, signature, signature_len, public_key);
    }
    return OQS_ERROR;
}
