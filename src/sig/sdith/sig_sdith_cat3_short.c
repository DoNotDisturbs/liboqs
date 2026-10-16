// SPDX-License-Identifier: MIT
/**
 * \file sig_sdith_cat3_short.c
 * \brief liboqs wrapper for SDitH cat3_short: REF and AVX2 backends.
 *
 * This wrapper is compiled twice by CMake, once with OQS_SDITH_CAT3_SHORT_REF
 * and once with OQS_SDITH_CAT3_SHORT_AVX2.
 */

#include <oqs/sig_sdith.h>
#include <oqs/common.h>
#include <oqs/rand.h>

#include <stddef.h>
#include <stdint.h>

#include "sdith_signature.h"

#if defined(OQS_SDITH_CAT3_SHORT_REF)

#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat3_short_ref
#define SDITH_NEW OQS_SIG_sdith_cat3_short_ref_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat3_short_ref_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat3_short_ref_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat3_short_ref_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat3_short_ref_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat3_short_ref_verify_with_ctx_str
#define SDITH_ALG_VERSION "NIST Round 3 reference"

#elif defined(OQS_SDITH_CAT3_SHORT_AVX2)

#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat3_short_avx2
#define SDITH_NEW OQS_SIG_sdith_cat3_short_avx2_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat3_short_avx2_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat3_short_avx2_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat3_short_avx2_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat3_short_avx2_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat3_short_avx2_verify_with_ctx_str
#define SDITH_ALG_VERSION "NIST Round 3 AVX2"

#else
#error "SDitH wrapper compiled without REF/AVX2 selector"
#endif

#define SDITH_NIST_LEVEL 3
#define SDITH_PUBLIC_KEY_BYTES 98
#define SDITH_SECRET_KEY_BYTES 208
#define SDITH_SIGNATURE_BYTES 8484
#define SDITH_PARAMS CAT3_SHORT_PARAMETERS

OQS_SIG *SDITH_NEW(void) {
    OQS_SIG *sig = OQS_MEM_calloc(1, sizeof(OQS_SIG));
    if (sig == NULL) {
        return NULL;
    }

    sig->method_name = SDITH_METHOD_NAME;
    sig->alg_version = SDITH_ALG_VERSION;
    sig->claimed_nist_level = SDITH_NIST_LEVEL;
    sig->euf_cma = true;
    sig->suf_cma = false;
    sig->sig_with_ctx_support = false;

    sig->length_public_key = SDITH_PUBLIC_KEY_BYTES;
    sig->length_secret_key = SDITH_SECRET_KEY_BYTES;
    sig->length_signature = SDITH_SIGNATURE_BYTES;

    sig->keypair = SDITH_KEYPAIR;
    sig->sign = SDITH_SIGN;
    sig->verify = SDITH_VERIFY;
    sig->sign_with_ctx_str = SDITH_SIGN_CTX;
    sig->verify_with_ctx_str = SDITH_VERIFY_CTX;
    return sig;
}

OQS_API OQS_STATUS SDITH_KEYPAIR(uint8_t *public_key, uint8_t *secret_key) {
    if (public_key == NULL || secret_key == NULL) {
        return OQS_ERROR;
    }

    if (SDITH_SIGNATURE_BYTES != sdith_signature_bytes(&SDITH_PARAMS) ||
        SDITH_PUBLIC_KEY_BYTES != sdith_public_key_bytes(&SDITH_PARAMS) ||
        SDITH_SECRET_KEY_BYTES != sdith_secret_key_bytes(&SDITH_PARAMS)) {
        return OQS_ERROR;
    }

    const uint64_t entropy_bytes = sdith_keygen_entropy_bytes(&SDITH_PARAMS);
    const uint64_t tmp_bytes = sdith_keygen_tmp_bytes(&SDITH_PARAMS);

    uint8_t *entropy = OQS_MEM_malloc((size_t) entropy_bytes);
    if (entropy == NULL) {
        return OQS_ERROR;
    }
    uint8_t *tmp_space = OQS_MEM_malloc((size_t) tmp_bytes);
    if (tmp_space == NULL) {
        OQS_MEM_secure_free(entropy, (size_t) entropy_bytes);
        return OQS_ERROR;
    }

    OQS_randombytes(entropy, (size_t) entropy_bytes);
    sdith_keygen(&SDITH_PARAMS, secret_key, public_key, entropy, tmp_space);

    OQS_MEM_secure_free(tmp_space, (size_t) tmp_bytes);
    OQS_MEM_secure_free(entropy, (size_t) entropy_bytes);
    return OQS_SUCCESS;
}

OQS_API OQS_STATUS SDITH_SIGN(uint8_t *signature, size_t *signature_len,
                              const uint8_t *message, size_t message_len,
                              const uint8_t *secret_key) {
    if (signature == NULL || signature_len == NULL || secret_key == NULL ||
        (message == NULL && message_len != 0)) {
        return OQS_ERROR;
    }

    const uint64_t entropy_bytes = sdith_signature_entropy_bytes(&SDITH_PARAMS);
    const uint64_t tmp_bytes = sdith_signature_tmp_bytes(&SDITH_PARAMS);

    uint8_t *entropy = OQS_MEM_malloc((size_t) entropy_bytes);
    if (entropy == NULL) {
        return OQS_ERROR;
    }
    uint8_t *tmp_space = OQS_MEM_malloc((size_t) tmp_bytes);
    if (tmp_space == NULL) {
        OQS_MEM_secure_free(entropy, (size_t) entropy_bytes);
        return OQS_ERROR;
    }

    OQS_randombytes(entropy, (size_t) entropy_bytes);
    sdith_sign(&SDITH_PARAMS, signature, message, (uint64_t) message_len,
               secret_key, entropy, tmp_space);
    *signature_len = SDITH_SIGNATURE_BYTES;

    OQS_MEM_secure_free(tmp_space, (size_t) tmp_bytes);
    OQS_MEM_secure_free(entropy, (size_t) entropy_bytes);
    return OQS_SUCCESS;
}

OQS_API OQS_STATUS SDITH_VERIFY(const uint8_t *message, size_t message_len,
                                const uint8_t *signature, size_t signature_len,
                                const uint8_t *public_key) {
    if (signature == NULL || public_key == NULL ||
        (message == NULL && message_len != 0) ||
        signature_len != SDITH_SIGNATURE_BYTES) {
        return OQS_ERROR;
    }

    const uint64_t tmp_bytes = sdith_verify_tmp_bytes(&SDITH_PARAMS);
    uint8_t *tmp_space = OQS_MEM_malloc((size_t) tmp_bytes);
    if (tmp_space == NULL) {
        return OQS_ERROR;
    }

    const uint8_t ok = sdith_verify(&SDITH_PARAMS, signature, message,
                                    (uint64_t) message_len, public_key, tmp_space);

    OQS_MEM_secure_free(tmp_space, (size_t) tmp_bytes);
    return ok ? OQS_SUCCESS : OQS_ERROR;
}

OQS_API OQS_STATUS SDITH_SIGN_CTX(uint8_t *signature, size_t *signature_len,
                                  const uint8_t *message, size_t message_len,
                                  const uint8_t *ctx_str, size_t ctx_str_len,
                                  const uint8_t *secret_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return SDITH_SIGN(signature, signature_len, message, message_len, secret_key);
    }
    return OQS_ERROR;
}

OQS_API OQS_STATUS SDITH_VERIFY_CTX(const uint8_t *message, size_t message_len,
                                    const uint8_t *signature, size_t signature_len,
                                    const uint8_t *ctx_str, size_t ctx_str_len,
                                    const uint8_t *public_key) {
    if (ctx_str == NULL && ctx_str_len == 0) {
        return SDITH_VERIFY(message, message_len, signature, signature_len, public_key);
    }
    return OQS_ERROR;
}
