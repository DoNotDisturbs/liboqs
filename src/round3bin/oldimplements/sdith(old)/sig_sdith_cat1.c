// SPDX-License-Identifier: MIT
/**
 * \file sig_sdith_cat1.c
 * \brief OQS_SIG wrapper plus native SDitH adapter for Category 1.
 */

#include <oqs/sig_sdith.h>
#include <oqs/common.h>
#include <oqs/rand.h>

#include <stddef.h>
#include <stdint.h>

#include "sdith_signature.h"

#ifndef CRYPTO_PUBLICKEYBYTES
#error "CRYPTO_PUBLICKEYBYTES is not defined"
#endif
#ifndef CRYPTO_SECRETKEYBYTES
#error "CRYPTO_SECRETKEYBYTES is not defined"
#endif
#ifndef CRYPTO_BYTES
#error "CRYPTO_BYTES is not defined"
#endif
#ifndef SIGNATURE_PARAMS
#error "SIGNATURE_PARAMS is not defined"
#endif

#if defined(OQS_SDITH_CAT1_FAST_CIPHERPOW_OPT)
#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat1_fast_cipherpow_opt
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat1_fast_cipherpow_opt_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat1_fast_cipherpow_opt_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat1_fast_cipherpow_opt_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat1_fast_cipherpow_opt_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat1_fast_cipherpow_opt_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat1_fast_cipherpow_opt_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat1_fast_cipherpow_opt_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat1_fast_cipherpow_opt_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat1_fast_cipherpow_opt_verify_with_ctx_str
#define SDITH_ALG_VERSION "round3-avx2"

#elif defined(OQS_SDITH_CAT1_FAST_CIPHERPOW_REF)
#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat1_fast_cipherpow_ref
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat1_fast_cipherpow_ref_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat1_fast_cipherpow_ref_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat1_fast_cipherpow_ref_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat1_fast_cipherpow_ref_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat1_fast_cipherpow_ref_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat1_fast_cipherpow_ref_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat1_fast_cipherpow_ref_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat1_fast_cipherpow_ref_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat1_fast_cipherpow_ref_verify_with_ctx_str
#define SDITH_ALG_VERSION "round3-ref"

#elif defined(OQS_SDITH_CAT1_FAST_OPT)
#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat1_fast_opt
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat1_fast_opt_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat1_fast_opt_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat1_fast_opt_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat1_fast_opt_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat1_fast_opt_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat1_fast_opt_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat1_fast_opt_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat1_fast_opt_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat1_fast_opt_verify_with_ctx_str
#define SDITH_ALG_VERSION "round3-avx2"

#elif defined(OQS_SDITH_CAT1_FAST_REF)
#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat1_fast_ref
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat1_fast_ref_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat1_fast_ref_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat1_fast_ref_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat1_fast_ref_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat1_fast_ref_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat1_fast_ref_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat1_fast_ref_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat1_fast_ref_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat1_fast_ref_verify_with_ctx_str
#define SDITH_ALG_VERSION "round3-ref"

#elif defined(OQS_SDITH_CAT1_SHORT_CIPHERPOW_OPT)
#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat1_short_cipherpow_opt
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat1_short_cipherpow_opt_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat1_short_cipherpow_opt_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat1_short_cipherpow_opt_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat1_short_cipherpow_opt_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat1_short_cipherpow_opt_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat1_short_cipherpow_opt_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat1_short_cipherpow_opt_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat1_short_cipherpow_opt_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat1_short_cipherpow_opt_verify_with_ctx_str
#define SDITH_ALG_VERSION "round3-avx2"

#elif defined(OQS_SDITH_CAT1_SHORT_CIPHERPOW_REF)
#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat1_short_cipherpow_ref
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat1_short_cipherpow_ref_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat1_short_cipherpow_ref_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat1_short_cipherpow_ref_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat1_short_cipherpow_ref_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat1_short_cipherpow_ref_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat1_short_cipherpow_ref_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat1_short_cipherpow_ref_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat1_short_cipherpow_ref_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat1_short_cipherpow_ref_verify_with_ctx_str
#define SDITH_ALG_VERSION "round3-ref"

#elif defined(OQS_SDITH_CAT1_SHORT_OPT)
#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat1_short_opt
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat1_short_opt_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat1_short_opt_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat1_short_opt_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat1_short_opt_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat1_short_opt_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat1_short_opt_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat1_short_opt_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat1_short_opt_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat1_short_opt_verify_with_ctx_str
#define SDITH_ALG_VERSION "round3-avx2"

#elif defined(OQS_SDITH_CAT1_SHORT_REF)
#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat1_short_ref
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat1_short_ref_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat1_short_ref_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat1_short_ref_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat1_short_ref_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat1_short_ref_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat1_short_ref_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat1_short_ref_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat1_short_ref_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat1_short_ref_verify_with_ctx_str
#define SDITH_ALG_VERSION "round3-ref"

#else
#error "No SDitH CAT1 wrapper variant selected"
#endif


OQS_SIG *SDITH_NEW(void) {
    OQS_SIG *sig = OQS_MEM_calloc(1, sizeof(OQS_SIG));
    if (sig == NULL) {
        return NULL;
    }

    sig->method_name = SDITH_METHOD_NAME;
    sig->alg_version = SDITH_ALG_VERSION;
    sig->claimed_nist_level = 1;
    sig->euf_cma = true;
    sig->suf_cma = false;
    sig->sig_with_ctx_support = false;

    sig->length_public_key = SDITH_LENGTH_PUBLIC_KEY;
    sig->length_secret_key = SDITH_LENGTH_SECRET_KEY;
    sig->length_signature = SDITH_LENGTH_SIGNATURE;

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

    if (CRYPTO_BYTES != sdith_signature_bytes(&SIGNATURE_PARAMS) ||
        CRYPTO_PUBLICKEYBYTES != sdith_public_key_bytes(&SIGNATURE_PARAMS) ||
        CRYPTO_SECRETKEYBYTES != sdith_secret_key_bytes(&SIGNATURE_PARAMS)) {
        return OQS_ERROR;
    }

    const uint64_t entropy_bytes = sdith_keygen_entropy_bytes(&SIGNATURE_PARAMS);
    const uint64_t tmp_bytes = sdith_keygen_tmp_bytes(&SIGNATURE_PARAMS);

    uint8_t *entropy = OQS_MEM_malloc(entropy_bytes);
    if (entropy == NULL) {
        return OQS_ERROR;
    }

    uint8_t *tmp_space = OQS_MEM_malloc(tmp_bytes);
    if (tmp_space == NULL) {
        OQS_MEM_secure_free(entropy, entropy_bytes);
        return OQS_ERROR;
    }

    OQS_randombytes(entropy, entropy_bytes);
    sdith_keygen(&SIGNATURE_PARAMS, secret_key, public_key, entropy, tmp_space);

    OQS_MEM_secure_free(tmp_space, tmp_bytes);
    OQS_MEM_secure_free(entropy, entropy_bytes);
    return OQS_SUCCESS;
}

OQS_API OQS_STATUS SDITH_SIGN(uint8_t *signature, size_t *signature_len,
                              const uint8_t *message, size_t message_len,
                              const uint8_t *secret_key) {
    if (signature == NULL || signature_len == NULL || secret_key == NULL ||
        (message == NULL && message_len != 0)) {
        return OQS_ERROR;
    }

    const uint64_t entropy_bytes = sdith_signature_entropy_bytes(&SIGNATURE_PARAMS);
    const uint64_t tmp_bytes = sdith_signature_tmp_bytes(&SIGNATURE_PARAMS);

    uint8_t *entropy = OQS_MEM_malloc(entropy_bytes);
    if (entropy == NULL) {
        return OQS_ERROR;
    }

    uint8_t *tmp_space = OQS_MEM_malloc(tmp_bytes);
    if (tmp_space == NULL) {
        OQS_MEM_secure_free(entropy, entropy_bytes);
        return OQS_ERROR;
    }

    OQS_randombytes(entropy, entropy_bytes);
    sdith_sign(&SIGNATURE_PARAMS, signature, message, message_len,
               secret_key, entropy, tmp_space);
    *signature_len = CRYPTO_BYTES;

    OQS_MEM_secure_free(tmp_space, tmp_bytes);
    OQS_MEM_secure_free(entropy, entropy_bytes);
    return OQS_SUCCESS;
}

OQS_API OQS_STATUS SDITH_VERIFY(const uint8_t *message, size_t message_len,
                                const uint8_t *signature, size_t signature_len,
                                const uint8_t *public_key) {
    if (signature == NULL || public_key == NULL ||
        (message == NULL && message_len != 0)) {
        return OQS_ERROR;
    }
    if (signature_len != CRYPTO_BYTES) {
        return OQS_ERROR;
    }

    const uint64_t tmp_bytes = sdith_verify_tmp_bytes(&SIGNATURE_PARAMS);
    uint8_t *tmp_space = OQS_MEM_malloc(tmp_bytes);
    if (tmp_space == NULL) {
        return OQS_ERROR;
    }

    const uint8_t ok = sdith_verify(&SIGNATURE_PARAMS, signature, message,
                                    message_len, public_key, tmp_space);

    OQS_MEM_secure_free(tmp_space, tmp_bytes);
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
