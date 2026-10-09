/**
 * \file sig_sdith_cat3.c
 * \brief OQS_SIG wrappers for all SDitH Category 3 variants.
 *
 * This source file is compiled once per CAT3 variant. CMake defines
 * exactly one OQS_SDITH_CAT3_* selector and force-includes the
 * corresponding namespace header for that build target.
 */

#include <oqs/sig_sdith.h>

#include <oqs/common.h>
#include <oqs/rand.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#if defined(OQS_SDITH_CAT3_FAST_CIPHERPOW_OPT)

#include "sdith_cat3_fast_cipherpow_opt/api.h"
#include "sdith_cat3_fast_cipherpow_opt/rng.h"

#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat3_fast_cipherpow_opt
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat3_fast_cipherpow_opt_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat3_fast_cipherpow_opt_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat3_fast_cipherpow_opt_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat3_fast_cipherpow_opt_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat3_fast_cipherpow_opt_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat3_fast_cipherpow_opt_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat3_fast_cipherpow_opt_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat3_fast_cipherpow_opt_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat3_fast_cipherpow_opt_verify_with_ctx_str
#define SDITH_ALG_VERSION "NIST SDitH Round 3 optimized"

#elif defined(OQS_SDITH_CAT3_FAST_CIPHERPOW_REF)

#include "sdith_cat3_fast_cipherpow_ref/api.h"
#include "sdith_cat3_fast_cipherpow_ref/rng.h"

#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat3_fast_cipherpow_ref
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat3_fast_cipherpow_ref_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat3_fast_cipherpow_ref_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat3_fast_cipherpow_ref_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat3_fast_cipherpow_ref_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat3_fast_cipherpow_ref_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat3_fast_cipherpow_ref_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat3_fast_cipherpow_ref_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat3_fast_cipherpow_ref_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat3_fast_cipherpow_ref_verify_with_ctx_str
#define SDITH_ALG_VERSION "NIST SDitH Round 3 reference"

#elif defined(OQS_SDITH_CAT3_FAST_OPT)

#include "sdith_cat3_fast_opt/api.h"
#include "sdith_cat3_fast_opt/rng.h"

#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat3_fast_opt
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat3_fast_opt_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat3_fast_opt_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat3_fast_opt_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat3_fast_opt_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat3_fast_opt_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat3_fast_opt_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat3_fast_opt_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat3_fast_opt_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat3_fast_opt_verify_with_ctx_str
#define SDITH_ALG_VERSION "NIST SDitH Round 3 optimized"

#elif defined(OQS_SDITH_CAT3_FAST_REF)

#include "sdith_cat3_fast_ref/api.h"
#include "sdith_cat3_fast_ref/rng.h"

#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat3_fast_ref
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat3_fast_ref_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat3_fast_ref_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat3_fast_ref_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat3_fast_ref_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat3_fast_ref_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat3_fast_ref_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat3_fast_ref_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat3_fast_ref_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat3_fast_ref_verify_with_ctx_str
#define SDITH_ALG_VERSION "NIST SDitH Round 3 reference"

#elif defined(OQS_SDITH_CAT3_SHORT_CIPHERPOW_OPT)

#include "sdith_cat3_short_cipherpow_opt/api.h"
#include "sdith_cat3_short_cipherpow_opt/rng.h"

#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat3_short_cipherpow_opt
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat3_short_cipherpow_opt_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat3_short_cipherpow_opt_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat3_short_cipherpow_opt_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat3_short_cipherpow_opt_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat3_short_cipherpow_opt_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat3_short_cipherpow_opt_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat3_short_cipherpow_opt_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat3_short_cipherpow_opt_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat3_short_cipherpow_opt_verify_with_ctx_str
#define SDITH_ALG_VERSION "NIST SDitH Round 3 optimized"

#elif defined(OQS_SDITH_CAT3_SHORT_CIPHERPOW_REF)

#include "sdith_cat3_short_cipherpow_ref/api.h"
#include "sdith_cat3_short_cipherpow_ref/rng.h"

#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat3_short_cipherpow_ref
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat3_short_cipherpow_ref_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat3_short_cipherpow_ref_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat3_short_cipherpow_ref_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat3_short_cipherpow_ref_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat3_short_cipherpow_ref_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat3_short_cipherpow_ref_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat3_short_cipherpow_ref_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat3_short_cipherpow_ref_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat3_short_cipherpow_ref_verify_with_ctx_str
#define SDITH_ALG_VERSION "NIST SDitH Round 3 reference"

#elif defined(OQS_SDITH_CAT3_SHORT_OPT)

#include "sdith_cat3_short_opt/api.h"
#include "sdith_cat3_short_opt/rng.h"

#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat3_short_opt
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat3_short_opt_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat3_short_opt_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat3_short_opt_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat3_short_opt_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat3_short_opt_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat3_short_opt_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat3_short_opt_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat3_short_opt_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat3_short_opt_verify_with_ctx_str
#define SDITH_ALG_VERSION "NIST SDitH Round 3 optimized"

#elif defined(OQS_SDITH_CAT3_SHORT_REF)

#include "sdith_cat3_short_ref/api.h"
#include "sdith_cat3_short_ref/rng.h"

#define SDITH_METHOD_NAME OQS_SIG_alg_sdith_cat3_short_ref
#define SDITH_LENGTH_PUBLIC_KEY OQS_SIG_sdith_cat3_short_ref_length_public_key
#define SDITH_LENGTH_SECRET_KEY OQS_SIG_sdith_cat3_short_ref_length_secret_key
#define SDITH_LENGTH_SIGNATURE OQS_SIG_sdith_cat3_short_ref_length_signature
#define SDITH_NEW OQS_SIG_sdith_cat3_short_ref_new
#define SDITH_KEYPAIR OQS_SIG_sdith_cat3_short_ref_keypair
#define SDITH_SIGN OQS_SIG_sdith_cat3_short_ref_sign
#define SDITH_VERIFY OQS_SIG_sdith_cat3_short_ref_verify
#define SDITH_SIGN_CTX OQS_SIG_sdith_cat3_short_ref_sign_with_ctx_str
#define SDITH_VERIFY_CTX OQS_SIG_sdith_cat3_short_ref_verify_with_ctx_str
#define SDITH_ALG_VERSION "NIST SDitH Round 3 reference"

#else
#error "No SDitH CAT3 wrapper variant selected"
#endif


static void oqs_sdith_cat3_ensure_rng(void) {
        static bool is_seeded = false;
        if (!is_seeded) {
                unsigned char entropy[48];
                OQS_randombytes(entropy, sizeof(entropy));
                randombytes_init(entropy, NULL, 256);
                memset(entropy, 0, sizeof(entropy));
                is_seeded = true;
        }
}

OQS_SIG *SDITH_NEW(void) {
        OQS_SIG *sig = malloc(sizeof(OQS_SIG));
        if (sig == NULL) {
                return NULL;
        }
        memset(sig, 0, sizeof(OQS_SIG));

        sig->method_name = SDITH_METHOD_NAME;
        sig->alg_version = SDITH_ALG_VERSION;
        sig->claimed_nist_level = 3;
        sig->euf_cma = true;
        sig->sig_with_ctx_support = false;

        sig->length_public_key = SDITH_LENGTH_PUBLIC_KEY;
        sig->length_secret_key = SDITH_LENGTH_SECRET_KEY;
        sig->length_signature = SDITH_LENGTH_SIGNATURE;

        sig->keypair = (OQS_STATUS (*)(uint8_t *, uint8_t *)) SDITH_KEYPAIR;
        sig->sign = (OQS_STATUS (*)(uint8_t *, size_t *, const uint8_t *, size_t, const uint8_t *)) SDITH_SIGN;
        sig->verify = (OQS_STATUS (*)(const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *)) SDITH_VERIFY;
        sig->sign_with_ctx_str = (OQS_STATUS (*)(uint8_t *, size_t *, const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *)) SDITH_SIGN_CTX;
        sig->verify_with_ctx_str = (OQS_STATUS (*)(const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *, size_t, const uint8_t *)) SDITH_VERIFY_CTX;

        return sig;
}

OQS_API OQS_STATUS SDITH_KEYPAIR(uint8_t *public_key, uint8_t *secret_key) {
        if (public_key == NULL || secret_key == NULL) {
                return OQS_ERROR;
        }

        oqs_sdith_cat3_ensure_rng();

        if (crypto_sign_keypair(public_key, secret_key) != 0) {
                memset(public_key, 0, SDITH_LENGTH_PUBLIC_KEY);
                memset(secret_key, 0, SDITH_LENGTH_SECRET_KEY);
                return OQS_ERROR;
        }

        return OQS_SUCCESS;
}

OQS_API OQS_STATUS SDITH_SIGN(uint8_t *signature, size_t *signature_len,
                              const uint8_t *message, size_t message_len,
                              const uint8_t *secret_key) {
        if (signature == NULL || signature_len == NULL ||
            message == NULL || secret_key == NULL) {
                return OQS_ERROR;
        }

        if (message_len > SIZE_MAX - SDITH_LENGTH_SIGNATURE) {
                return OQS_ERROR;
        }

        oqs_sdith_cat3_ensure_rng();

        const size_t sm_target_len = message_len + SDITH_LENGTH_SIGNATURE;
        uint8_t *sm = OQS_MEM_malloc(sm_target_len);
        if (sm == NULL) {
                return OQS_ERROR;
        }

        unsigned long long sm_len = 0;
        const int ret = crypto_sign(sm, &sm_len, message,
                                    (unsigned long long) message_len,
                                    secret_key);

        if (ret != 0 || sm_len != sm_target_len) {
                memset(signature, 0, SDITH_LENGTH_SIGNATURE);
                OQS_MEM_insecure_free(sm);
                return OQS_ERROR;
        }

        memcpy(signature, sm + message_len, SDITH_LENGTH_SIGNATURE);
        *signature_len = SDITH_LENGTH_SIGNATURE;

        OQS_MEM_insecure_free(sm);
        return OQS_SUCCESS;
}

OQS_API OQS_STATUS SDITH_VERIFY(const uint8_t *message, size_t message_len,
                                const uint8_t *signature, size_t signature_len,
                                const uint8_t *public_key) {
        if (message == NULL || signature == NULL || public_key == NULL) {
                return OQS_ERROR;
        }

        if (signature_len != SDITH_LENGTH_SIGNATURE) {
                return OQS_ERROR;
        }

        if (message_len > SIZE_MAX - signature_len) {
                return OQS_ERROR;
        }

        const size_t sm_len = message_len + signature_len;
        uint8_t *sm = OQS_MEM_malloc(sm_len);
        uint8_t *recovered = OQS_MEM_malloc(message_len > 0 ? message_len : 1);

        if (sm == NULL || recovered == NULL) {
                OQS_MEM_insecure_free(sm);
                OQS_MEM_insecure_free(recovered);
                return OQS_ERROR;
        }

        memcpy(sm, message, message_len);
        memcpy(sm + message_len, signature, signature_len);

        unsigned long long recovered_len = 0;
        const int ret = crypto_sign_open(recovered, &recovered_len, sm,
                                         (unsigned long long) sm_len,
                                         public_key);

        OQS_MEM_insecure_free(sm);
        OQS_MEM_insecure_free(recovered);

        return ret == 0 ? OQS_SUCCESS : OQS_ERROR;
}

OQS_API OQS_STATUS SDITH_SIGN_CTX(uint8_t *signature, size_t *signature_len,
                                  const uint8_t *message, size_t message_len,
                                  const uint8_t *ctx_str, size_t ctx_str_len,
                                  const uint8_t *secret_key) {
        if (ctx_str != NULL && ctx_str_len > 0) {
                return OQS_ERROR;
        }

        return SDITH_SIGN(signature, signature_len, message, message_len, secret_key);
}

OQS_API OQS_STATUS SDITH_VERIFY_CTX(const uint8_t *message, size_t message_len,
                                    const uint8_t *signature, size_t signature_len,
                                    const uint8_t *ctx_str, size_t ctx_str_len,
                                    const uint8_t *public_key) {
        if (ctx_str != NULL && ctx_str_len > 0) {
                return OQS_ERROR;
        }

        return SDITH_VERIFY(message, message_len, signature, signature_len, public_key);
}
