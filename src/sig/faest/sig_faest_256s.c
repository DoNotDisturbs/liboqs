// SPDX-License-Identifier: MIT
/**
 * \file sig_faest_256s.c
 * \brief liboqs wrapper for FAEST-256s Round-3 REF/AVX2.
 */

#include <oqs/sig_faest.h>
#include <oqs/common.h>

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#if defined(OQS_FAEST_256S_REF)
#define FAEST_METHOD_NAME OQS_SIG_alg_faest_256s_ref
#define FAEST_LENGTH_PUBLIC_KEY OQS_SIG_faest_256s_ref_length_public_key
#define FAEST_LENGTH_SECRET_KEY OQS_SIG_faest_256s_ref_length_secret_key
#define FAEST_LENGTH_SIGNATURE OQS_SIG_faest_256s_ref_length_signature
#define FAEST_NEW OQS_SIG_faest_256s_ref_new
#define FAEST_KEYPAIR OQS_SIG_faest_256s_ref_keypair
#define FAEST_SIGN OQS_SIG_faest_256s_ref_sign
#define FAEST_VERIFY OQS_SIG_faest_256s_ref_verify
#define FAEST_SIGN_CTX OQS_SIG_faest_256s_ref_sign_with_ctx_str
#define FAEST_VERIFY_CTX OQS_SIG_faest_256s_ref_verify_with_ctx_str
#define BACKEND_KEYPAIR oqs_sig_private_faest_256s_ref_crypto_sign_keypair
#define BACKEND_SIGN oqs_sig_private_faest_256s_ref_crypto_sign
#define BACKEND_OPEN oqs_sig_private_faest_256s_ref_crypto_sign_open
#elif defined(OQS_FAEST_256S_AVX2)
#define FAEST_METHOD_NAME OQS_SIG_alg_faest_256s_avx2
#define FAEST_LENGTH_PUBLIC_KEY OQS_SIG_faest_256s_avx2_length_public_key
#define FAEST_LENGTH_SECRET_KEY OQS_SIG_faest_256s_avx2_length_secret_key
#define FAEST_LENGTH_SIGNATURE OQS_SIG_faest_256s_avx2_length_signature
#define FAEST_NEW OQS_SIG_faest_256s_avx2_new
#define FAEST_KEYPAIR OQS_SIG_faest_256s_avx2_keypair
#define FAEST_SIGN OQS_SIG_faest_256s_avx2_sign
#define FAEST_VERIFY OQS_SIG_faest_256s_avx2_verify
#define FAEST_SIGN_CTX OQS_SIG_faest_256s_avx2_sign_with_ctx_str
#define FAEST_VERIFY_CTX OQS_SIG_faest_256s_avx2_verify_with_ctx_str
#define BACKEND_KEYPAIR oqs_sig_private_faest_256s_avx2_crypto_sign_keypair
#define BACKEND_SIGN oqs_sig_private_faest_256s_avx2_crypto_sign
#define BACKEND_OPEN oqs_sig_private_faest_256s_avx2_crypto_sign_open
#else
#error "FAEST wrapper compiled without REF/AVX2 selector"
#endif

extern int BACKEND_KEYPAIR(unsigned char *pk, unsigned char *sk);
extern int BACKEND_SIGN(unsigned char *sm, unsigned long long *smlen,
                        const unsigned char *m, unsigned long long mlen,
                        const unsigned char *sk);
extern int BACKEND_OPEN(unsigned char *m, unsigned long long *mlen,
                        const unsigned char *sm, unsigned long long smlen,
                        const unsigned char *pk);

OQS_SIG *FAEST_NEW(void) {
    OQS_SIG *sig = OQS_MEM_calloc(1, sizeof(OQS_SIG));
    if (sig == NULL) {
        return NULL;
    }
    sig->method_name = FAEST_METHOD_NAME;
    sig->alg_version = "3.0";
    sig->claimed_nist_level = 5;
    sig->euf_cma = true;
    sig->suf_cma = false;
    sig->sig_with_ctx_support = false;
    sig->length_public_key = FAEST_LENGTH_PUBLIC_KEY;
    sig->length_secret_key = FAEST_LENGTH_SECRET_KEY;
    sig->length_signature = FAEST_LENGTH_SIGNATURE;
    sig->keypair = FAEST_KEYPAIR;
    sig->sign = FAEST_SIGN;
    sig->verify = FAEST_VERIFY;
    sig->sign_with_ctx_str = FAEST_SIGN_CTX;
    sig->verify_with_ctx_str = FAEST_VERIFY_CTX;
    return sig;
}

OQS_API OQS_STATUS FAEST_KEYPAIR(uint8_t *public_key, uint8_t *secret_key) {
    if (public_key == NULL || secret_key == NULL) {
        return OQS_ERROR;
    }
    return BACKEND_KEYPAIR(public_key, secret_key) == 0 ? OQS_SUCCESS : OQS_ERROR;
}

OQS_API OQS_STATUS FAEST_SIGN(uint8_t *signature, size_t *signature_len,
                              const uint8_t *message, size_t message_len,
                              const uint8_t *secret_key) {
    if (signature == NULL || signature_len == NULL || secret_key == NULL ||
        (message == NULL && message_len != 0) ||
        message_len > SIZE_MAX - FAEST_LENGTH_SIGNATURE) {
        return OQS_ERROR;
    }
    const size_t total = message_len + FAEST_LENGTH_SIGNATURE;
    uint8_t *sm = OQS_MEM_malloc(total);
    if (sm == NULL) {
        return OQS_ERROR;
    }
    const uint8_t empty_message = 0;
    const uint8_t *msg = message_len == 0 ? &empty_message : message;
    unsigned long long smlen = 0;
    const int rc = BACKEND_SIGN(sm, &smlen, msg,
                                (unsigned long long)message_len, secret_key);
    if (rc != 0 || smlen != (unsigned long long)total) {
        OQS_MEM_insecure_free(sm);
        *signature_len = 0;
        return OQS_ERROR;
    }
    memcpy(signature, sm + message_len, FAEST_LENGTH_SIGNATURE);
    *signature_len = FAEST_LENGTH_SIGNATURE;
    OQS_MEM_insecure_free(sm);
    return OQS_SUCCESS;
}

OQS_API OQS_STATUS FAEST_VERIFY(const uint8_t *message, size_t message_len,
                                const uint8_t *signature, size_t signature_len,
                                const uint8_t *public_key) {
    if (signature == NULL || public_key == NULL ||
        (message == NULL && message_len != 0) ||
        signature_len != FAEST_LENGTH_SIGNATURE ||
        message_len > SIZE_MAX - signature_len) {
        return OQS_ERROR;
    }
    const size_t total = message_len + signature_len;
    uint8_t *sm = OQS_MEM_malloc(total);
    uint8_t *recovered = OQS_MEM_malloc(message_len == 0 ? 1 : message_len);
    if (sm == NULL || recovered == NULL) {
        OQS_MEM_insecure_free(sm);
        OQS_MEM_insecure_free(recovered);
        return OQS_ERROR;
    }
    if (message_len != 0) {
        memcpy(sm, message, message_len);
    }
    memcpy(sm + message_len, signature, signature_len);

    unsigned long long recovered_len = 0;
    const int rc = BACKEND_OPEN(recovered, &recovered_len, sm,
                                (unsigned long long)total, public_key);
    const int bad = rc != 0 ||
                    recovered_len != (unsigned long long)message_len ||
                    (message_len != 0 &&
                     memcmp(recovered, message, message_len) != 0);

    OQS_MEM_insecure_free(sm);
    OQS_MEM_insecure_free(recovered);
    return bad ? OQS_ERROR : OQS_SUCCESS;
}

OQS_API OQS_STATUS FAEST_SIGN_CTX(uint8_t *signature, size_t *signature_len,
                                  const uint8_t *message, size_t message_len,
                                  const uint8_t *ctx_str, size_t ctx_str_len,
                                  const uint8_t *secret_key) {
    (void)ctx_str;
    if (ctx_str_len != 0) {
        return OQS_ERROR;
    }
    return FAEST_SIGN(signature, signature_len, message, message_len, secret_key);
}

OQS_API OQS_STATUS FAEST_VERIFY_CTX(const uint8_t *message, size_t message_len,
                                    const uint8_t *signature, size_t signature_len,
                                    const uint8_t *ctx_str, size_t ctx_str_len,
                                    const uint8_t *public_key) {
    (void)ctx_str;
    if (ctx_str_len != 0) {
        return OQS_ERROR;
    }
    return FAEST_VERIFY(message, message_len, signature, signature_len, public_key);
}
