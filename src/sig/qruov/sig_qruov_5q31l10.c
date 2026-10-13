// SPDX-License-Identifier: MIT
/**
 * \file sig_qruov_5q31l10.c
 * \brief liboqs wrapper for QR-UOV Round-3 5q31L10 (AES/SHAKE, REF/AVX2).
 */

#include <oqs/sig_qruov.h>
#include <oqs/common.h>

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#if defined(OQS_QRUOV_5Q31L10_AES_REF)
#define QRUOV_METHOD_NAME OQS_SIG_alg_qruov_5q31l10_aes_ref
#define QRUOV_LENGTH_PUBLIC_KEY OQS_SIG_qruov_5q31l10_aes_ref_length_public_key
#define QRUOV_LENGTH_SECRET_KEY OQS_SIG_qruov_5q31l10_aes_ref_length_secret_key
#define QRUOV_LENGTH_SIGNATURE OQS_SIG_qruov_5q31l10_aes_ref_length_signature
#define QRUOV_NEW OQS_SIG_qruov_5q31l10_aes_ref_new
#define QRUOV_KEYPAIR OQS_SIG_qruov_5q31l10_aes_ref_keypair
#define QRUOV_SIGN OQS_SIG_qruov_5q31l10_aes_ref_sign
#define QRUOV_VERIFY OQS_SIG_qruov_5q31l10_aes_ref_verify
#define QRUOV_SIGN_CTX OQS_SIG_qruov_5q31l10_aes_ref_sign_with_ctx_str
#define QRUOV_VERIFY_CTX OQS_SIG_qruov_5q31l10_aes_ref_verify_with_ctx_str
#define BACKEND_KEYPAIR oqs_sig_private_qruov_5q31l10_aes_ref_crypto_sign_keypair
#define BACKEND_SIGN oqs_sig_private_qruov_5q31l10_aes_ref_crypto_sign
#define BACKEND_OPEN oqs_sig_private_qruov_5q31l10_aes_ref_crypto_sign_open
#elif defined(OQS_QRUOV_5Q31L10_AES_AVX2)
#define QRUOV_METHOD_NAME OQS_SIG_alg_qruov_5q31l10_aes_avx2
#define QRUOV_LENGTH_PUBLIC_KEY OQS_SIG_qruov_5q31l10_aes_avx2_length_public_key
#define QRUOV_LENGTH_SECRET_KEY OQS_SIG_qruov_5q31l10_aes_avx2_length_secret_key
#define QRUOV_LENGTH_SIGNATURE OQS_SIG_qruov_5q31l10_aes_avx2_length_signature
#define QRUOV_NEW OQS_SIG_qruov_5q31l10_aes_avx2_new
#define QRUOV_KEYPAIR OQS_SIG_qruov_5q31l10_aes_avx2_keypair
#define QRUOV_SIGN OQS_SIG_qruov_5q31l10_aes_avx2_sign
#define QRUOV_VERIFY OQS_SIG_qruov_5q31l10_aes_avx2_verify
#define QRUOV_SIGN_CTX OQS_SIG_qruov_5q31l10_aes_avx2_sign_with_ctx_str
#define QRUOV_VERIFY_CTX OQS_SIG_qruov_5q31l10_aes_avx2_verify_with_ctx_str
#define BACKEND_KEYPAIR oqs_sig_private_qruov_5q31l10_aes_avx2_crypto_sign_keypair
#define BACKEND_SIGN oqs_sig_private_qruov_5q31l10_aes_avx2_crypto_sign
#define BACKEND_OPEN oqs_sig_private_qruov_5q31l10_aes_avx2_crypto_sign_open
#elif defined(OQS_QRUOV_5Q31L10_SHAKE_REF)
#define QRUOV_METHOD_NAME OQS_SIG_alg_qruov_5q31l10_shake_ref
#define QRUOV_LENGTH_PUBLIC_KEY OQS_SIG_qruov_5q31l10_shake_ref_length_public_key
#define QRUOV_LENGTH_SECRET_KEY OQS_SIG_qruov_5q31l10_shake_ref_length_secret_key
#define QRUOV_LENGTH_SIGNATURE OQS_SIG_qruov_5q31l10_shake_ref_length_signature
#define QRUOV_NEW OQS_SIG_qruov_5q31l10_shake_ref_new
#define QRUOV_KEYPAIR OQS_SIG_qruov_5q31l10_shake_ref_keypair
#define QRUOV_SIGN OQS_SIG_qruov_5q31l10_shake_ref_sign
#define QRUOV_VERIFY OQS_SIG_qruov_5q31l10_shake_ref_verify
#define QRUOV_SIGN_CTX OQS_SIG_qruov_5q31l10_shake_ref_sign_with_ctx_str
#define QRUOV_VERIFY_CTX OQS_SIG_qruov_5q31l10_shake_ref_verify_with_ctx_str
#define BACKEND_KEYPAIR oqs_sig_private_qruov_5q31l10_shake_ref_crypto_sign_keypair
#define BACKEND_SIGN oqs_sig_private_qruov_5q31l10_shake_ref_crypto_sign
#define BACKEND_OPEN oqs_sig_private_qruov_5q31l10_shake_ref_crypto_sign_open
#elif defined(OQS_QRUOV_5Q31L10_SHAKE_AVX2)
#define QRUOV_METHOD_NAME OQS_SIG_alg_qruov_5q31l10_shake_avx2
#define QRUOV_LENGTH_PUBLIC_KEY OQS_SIG_qruov_5q31l10_shake_avx2_length_public_key
#define QRUOV_LENGTH_SECRET_KEY OQS_SIG_qruov_5q31l10_shake_avx2_length_secret_key
#define QRUOV_LENGTH_SIGNATURE OQS_SIG_qruov_5q31l10_shake_avx2_length_signature
#define QRUOV_NEW OQS_SIG_qruov_5q31l10_shake_avx2_new
#define QRUOV_KEYPAIR OQS_SIG_qruov_5q31l10_shake_avx2_keypair
#define QRUOV_SIGN OQS_SIG_qruov_5q31l10_shake_avx2_sign
#define QRUOV_VERIFY OQS_SIG_qruov_5q31l10_shake_avx2_verify
#define QRUOV_SIGN_CTX OQS_SIG_qruov_5q31l10_shake_avx2_sign_with_ctx_str
#define QRUOV_VERIFY_CTX OQS_SIG_qruov_5q31l10_shake_avx2_verify_with_ctx_str
#define BACKEND_KEYPAIR oqs_sig_private_qruov_5q31l10_shake_avx2_crypto_sign_keypair
#define BACKEND_SIGN oqs_sig_private_qruov_5q31l10_shake_avx2_crypto_sign
#define BACKEND_OPEN oqs_sig_private_qruov_5q31l10_shake_avx2_crypto_sign_open
#else
#error "QR-UOV wrapper compiled without implementation selector"
#endif

extern int BACKEND_KEYPAIR(unsigned char *pk, unsigned char *sk);
extern int BACKEND_SIGN(unsigned char *sm, unsigned long long *smlen,
                        const unsigned char *m, unsigned long long mlen,
                        const unsigned char *sk);
extern int BACKEND_OPEN(unsigned char *m, unsigned long long *mlen,
                        const unsigned char *sm, unsigned long long smlen,
                        const unsigned char *pk);

OQS_SIG *QRUOV_NEW(void) {
    OQS_SIG *sig = OQS_MEM_calloc(1, sizeof(OQS_SIG));
    if (sig == NULL) return NULL;
    sig->method_name = QRUOV_METHOD_NAME;
    sig->alg_version = "round3";
    sig->claimed_nist_level = 5;
    sig->euf_cma = true;
    sig->suf_cma = false;
    sig->sig_with_ctx_support = false;
    sig->length_public_key = QRUOV_LENGTH_PUBLIC_KEY;
    sig->length_secret_key = QRUOV_LENGTH_SECRET_KEY;
    sig->length_signature = QRUOV_LENGTH_SIGNATURE;
    sig->keypair = QRUOV_KEYPAIR;
    sig->sign = QRUOV_SIGN;
    sig->verify = QRUOV_VERIFY;
    sig->sign_with_ctx_str = QRUOV_SIGN_CTX;
    sig->verify_with_ctx_str = QRUOV_VERIFY_CTX;
    return sig;
}

OQS_API OQS_STATUS QRUOV_KEYPAIR(uint8_t *public_key, uint8_t *secret_key) {
    if (public_key == NULL || secret_key == NULL) return OQS_ERROR;
    return BACKEND_KEYPAIR(public_key, secret_key) == 0 ? OQS_SUCCESS : OQS_ERROR;
}

OQS_API OQS_STATUS QRUOV_SIGN(uint8_t *signature, size_t *signature_len,
                              const uint8_t *message, size_t message_len,
                              const uint8_t *secret_key) {
    if (signature == NULL || signature_len == NULL || secret_key == NULL ||
        (message == NULL && message_len != 0) ||
        message_len > SIZE_MAX - QRUOV_LENGTH_SIGNATURE) return OQS_ERROR;

    const size_t total = QRUOV_LENGTH_SIGNATURE + message_len;
    uint8_t *sm = OQS_MEM_malloc(total == 0 ? 1 : total);
    if (sm == NULL) return OQS_ERROR;

    const uint8_t empty_message = 0;
    const uint8_t *msg = message_len == 0 ? &empty_message : message;
    unsigned long long smlen = 0;
    const int rc = BACKEND_SIGN(sm, &smlen, msg, (unsigned long long)message_len, secret_key);
    if (rc != 0 || smlen != (unsigned long long)total) {
        *signature_len = 0;
        OQS_MEM_insecure_free(sm);
        return OQS_ERROR;
    }

    memcpy(signature, sm, QRUOV_LENGTH_SIGNATURE);
    *signature_len = QRUOV_LENGTH_SIGNATURE;
    OQS_MEM_insecure_free(sm);
    return OQS_SUCCESS;
}

OQS_API OQS_STATUS QRUOV_VERIFY(const uint8_t *message, size_t message_len,
                                const uint8_t *signature, size_t signature_len,
                                const uint8_t *public_key) {
    if (signature == NULL || public_key == NULL ||
        (message == NULL && message_len != 0) ||
        signature_len != QRUOV_LENGTH_SIGNATURE ||
        message_len > SIZE_MAX - signature_len) return OQS_ERROR;

    const size_t total = signature_len + message_len;
    uint8_t *sm = OQS_MEM_malloc(total == 0 ? 1 : total);
    uint8_t *recovered = OQS_MEM_malloc(message_len == 0 ? 1 : message_len);
    if (sm == NULL || recovered == NULL) {
        OQS_MEM_insecure_free(sm);
        OQS_MEM_insecure_free(recovered);
        return OQS_ERROR;
    }
    memcpy(sm, signature, signature_len);
    if (message_len != 0) memcpy(sm + signature_len, message, message_len);

    unsigned long long recovered_len = 0;
    const int rc = BACKEND_OPEN(recovered, &recovered_len, sm, (unsigned long long)total, public_key);
    const int bad = rc != 0 || recovered_len != (unsigned long long)message_len ||
                    (message_len != 0 && memcmp(recovered, message, message_len) != 0);
    OQS_MEM_insecure_free(sm);
    OQS_MEM_insecure_free(recovered);
    return bad ? OQS_ERROR : OQS_SUCCESS;
}

OQS_API OQS_STATUS QRUOV_SIGN_CTX(uint8_t *signature, size_t *signature_len,
                                  const uint8_t *message, size_t message_len,
                                  const uint8_t *ctx_str, size_t ctx_str_len,
                                  const uint8_t *secret_key) {
    (void)ctx_str;
    if (ctx_str_len != 0) return OQS_ERROR;
    return QRUOV_SIGN(signature, signature_len, message, message_len, secret_key);
}

OQS_API OQS_STATUS QRUOV_VERIFY_CTX(const uint8_t *message, size_t message_len,
                                    const uint8_t *signature, size_t signature_len,
                                    const uint8_t *ctx_str, size_t ctx_str_len,
                                    const uint8_t *public_key) {
    (void)ctx_str;
    if (ctx_str_len != 0) return OQS_ERROR;
    return QRUOV_VERIFY(message, message_len, signature, signature_len, public_key);
}
