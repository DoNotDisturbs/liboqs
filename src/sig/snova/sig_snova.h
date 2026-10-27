// SPDX-License-Identifier: MIT

#ifndef OQS_SIG_SNOVA_H
#define OQS_SIG_SNOVA_H

#include <oqs/oqs.h>

/*
 * SNOVA 2.3
 * Upstream: https://github.com/PQCLAB-SNOVA/SNOVA
 * Commit: 9da14981336ede257c41ef53cc069989051e8181
 *
 * Explicit benchmark backends:
 *   <SNOVA parameter set>-ref
 *   <SNOVA parameter set>-avx2
 *
 * Global OQS_SIG algorithm-name registration is intentionally deferred until
 * all Round-2 candidate families have been integrated.
 */

#if defined(OQS_ENABLE_SIG_snova_SNOVA_24_5_16_4)
#define OQS_SIG_snova_SNOVA_24_5_16_4_length_public_key 1016
#define OQS_SIG_snova_SNOVA_24_5_16_4_length_secret_key 48
#define OQS_SIG_snova_SNOVA_24_5_16_4_length_signature 248

OQS_SIG *OQS_SIG_snova_SNOVA_24_5_16_4_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_24_5_16_4_avx2)
#ifndef OQS_SIG_snova_SNOVA_24_5_16_4_length_public_key
#define OQS_SIG_snova_SNOVA_24_5_16_4_length_public_key 1016
#define OQS_SIG_snova_SNOVA_24_5_16_4_length_secret_key 48
#define OQS_SIG_snova_SNOVA_24_5_16_4_length_signature 248
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_24_5_16_4_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_24_5_16_4_AES)
#define OQS_SIG_snova_SNOVA_24_5_16_4_AES_length_public_key 1016
#define OQS_SIG_snova_SNOVA_24_5_16_4_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_24_5_16_4_AES_length_signature 248

OQS_SIG *OQS_SIG_snova_SNOVA_24_5_16_4_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_24_5_16_4_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_24_5_16_4_AES_length_public_key
#define OQS_SIG_snova_SNOVA_24_5_16_4_AES_length_public_key 1016
#define OQS_SIG_snova_SNOVA_24_5_16_4_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_24_5_16_4_AES_length_signature 248
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_24_5_16_4_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_24_5_16_4_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_28_4_16_4x5)
#define OQS_SIG_snova_SNOVA_28_4_16_4x5_length_public_key 656
#define OQS_SIG_snova_SNOVA_28_4_16_4x5_length_secret_key 48
#define OQS_SIG_snova_SNOVA_28_4_16_4x5_length_signature 336

OQS_SIG *OQS_SIG_snova_SNOVA_28_4_16_4x5_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_28_4_16_4x5_avx2)
#ifndef OQS_SIG_snova_SNOVA_28_4_16_4x5_length_public_key
#define OQS_SIG_snova_SNOVA_28_4_16_4x5_length_public_key 656
#define OQS_SIG_snova_SNOVA_28_4_16_4x5_length_secret_key 48
#define OQS_SIG_snova_SNOVA_28_4_16_4x5_length_signature 336
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_28_4_16_4x5_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_28_4_16_4x5_AES)
#define OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_length_public_key 656
#define OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_length_signature 336

OQS_SIG *OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_28_4_16_4x5_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_length_public_key
#define OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_length_public_key 656
#define OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_length_signature 336
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_16_4x5_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_28_4_19_4x5)
#define OQS_SIG_snova_SNOVA_28_4_19_4x5_length_public_key 379
#define OQS_SIG_snova_SNOVA_28_4_19_4x5_length_secret_key 48
#define OQS_SIG_snova_SNOVA_28_4_19_4x5_length_signature 358

OQS_SIG *OQS_SIG_snova_SNOVA_28_4_19_4x5_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_28_4_19_4x5_avx2)
#ifndef OQS_SIG_snova_SNOVA_28_4_19_4x5_length_public_key
#define OQS_SIG_snova_SNOVA_28_4_19_4x5_length_public_key 379
#define OQS_SIG_snova_SNOVA_28_4_19_4x5_length_secret_key 48
#define OQS_SIG_snova_SNOVA_28_4_19_4x5_length_signature 358
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_28_4_19_4x5_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_28_4_19_4x5_AES)
#define OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_length_public_key 379
#define OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_length_signature 358

OQS_SIG *OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_28_4_19_4x5_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_length_public_key
#define OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_length_public_key 379
#define OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_length_signature 358
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_4_19_4x5_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_28_5_19_4)
#define OQS_SIG_snova_SNOVA_28_5_19_4_length_public_key 576
#define OQS_SIG_snova_SNOVA_28_5_19_4_length_secret_key 48
#define OQS_SIG_snova_SNOVA_28_5_19_4_length_signature 298

OQS_SIG *OQS_SIG_snova_SNOVA_28_5_19_4_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_28_5_19_4_avx2)
#ifndef OQS_SIG_snova_SNOVA_28_5_19_4_length_public_key
#define OQS_SIG_snova_SNOVA_28_5_19_4_length_public_key 576
#define OQS_SIG_snova_SNOVA_28_5_19_4_length_secret_key 48
#define OQS_SIG_snova_SNOVA_28_5_19_4_length_signature 298
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_28_5_19_4_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_28_5_19_4_AES)
#define OQS_SIG_snova_SNOVA_28_5_19_4_AES_length_public_key 576
#define OQS_SIG_snova_SNOVA_28_5_19_4_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_28_5_19_4_AES_length_signature 298

OQS_SIG *OQS_SIG_snova_SNOVA_28_5_19_4_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_28_5_19_4_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_28_5_19_4_AES_length_public_key
#define OQS_SIG_snova_SNOVA_28_5_19_4_AES_length_public_key 576
#define OQS_SIG_snova_SNOVA_28_5_19_4_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_28_5_19_4_AES_length_signature 298
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_28_5_19_4_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_28_5_19_4_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_48_16_19_2)
#define OQS_SIG_snova_SNOVA_48_16_19_2_length_public_key 4522
#define OQS_SIG_snova_SNOVA_48_16_19_2_length_secret_key 48
#define OQS_SIG_snova_SNOVA_48_16_19_2_length_signature 153

OQS_SIG *OQS_SIG_snova_SNOVA_48_16_19_2_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_48_16_19_2_avx2)
#ifndef OQS_SIG_snova_SNOVA_48_16_19_2_length_public_key
#define OQS_SIG_snova_SNOVA_48_16_19_2_length_public_key 4522
#define OQS_SIG_snova_SNOVA_48_16_19_2_length_secret_key 48
#define OQS_SIG_snova_SNOVA_48_16_19_2_length_signature 153
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_48_16_19_2_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_48_16_19_2_AES)
#define OQS_SIG_snova_SNOVA_48_16_19_2_AES_length_public_key 4522
#define OQS_SIG_snova_SNOVA_48_16_19_2_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_48_16_19_2_AES_length_signature 153

OQS_SIG *OQS_SIG_snova_SNOVA_48_16_19_2_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_48_16_19_2_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_48_16_19_2_AES_length_public_key
#define OQS_SIG_snova_SNOVA_48_16_19_2_AES_length_public_key 4522
#define OQS_SIG_snova_SNOVA_48_16_19_2_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_48_16_19_2_AES_length_signature 153
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_48_16_19_2_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_16_19_2_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_48_17_16_2)
#define OQS_SIG_snova_SNOVA_48_17_16_2_length_public_key 9842
#define OQS_SIG_snova_SNOVA_48_17_16_2_length_secret_key 48
#define OQS_SIG_snova_SNOVA_48_17_16_2_length_signature 146

OQS_SIG *OQS_SIG_snova_SNOVA_48_17_16_2_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_48_17_16_2_avx2)
#ifndef OQS_SIG_snova_SNOVA_48_17_16_2_length_public_key
#define OQS_SIG_snova_SNOVA_48_17_16_2_length_public_key 9842
#define OQS_SIG_snova_SNOVA_48_17_16_2_length_secret_key 48
#define OQS_SIG_snova_SNOVA_48_17_16_2_length_signature 146
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_48_17_16_2_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_48_17_16_2_AES)
#define OQS_SIG_snova_SNOVA_48_17_16_2_AES_length_public_key 9842
#define OQS_SIG_snova_SNOVA_48_17_16_2_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_48_17_16_2_AES_length_signature 146

OQS_SIG *OQS_SIG_snova_SNOVA_48_17_16_2_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_48_17_16_2_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_48_17_16_2_AES_length_public_key
#define OQS_SIG_snova_SNOVA_48_17_16_2_AES_length_public_key 9842
#define OQS_SIG_snova_SNOVA_48_17_16_2_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_48_17_16_2_AES_length_signature 146
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_48_17_16_2_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_48_17_16_2_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_37_8_16_4)
#define OQS_SIG_snova_SNOVA_37_8_16_4_length_public_key 4112
#define OQS_SIG_snova_SNOVA_37_8_16_4_length_secret_key 48
#define OQS_SIG_snova_SNOVA_37_8_16_4_length_signature 376

OQS_SIG *OQS_SIG_snova_SNOVA_37_8_16_4_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_37_8_16_4_avx2)
#ifndef OQS_SIG_snova_SNOVA_37_8_16_4_length_public_key
#define OQS_SIG_snova_SNOVA_37_8_16_4_length_public_key 4112
#define OQS_SIG_snova_SNOVA_37_8_16_4_length_secret_key 48
#define OQS_SIG_snova_SNOVA_37_8_16_4_length_signature 376
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_37_8_16_4_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_37_8_16_4_AES)
#define OQS_SIG_snova_SNOVA_37_8_16_4_AES_length_public_key 4112
#define OQS_SIG_snova_SNOVA_37_8_16_4_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_37_8_16_4_AES_length_signature 376

OQS_SIG *OQS_SIG_snova_SNOVA_37_8_16_4_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_37_8_16_4_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_37_8_16_4_AES_length_public_key
#define OQS_SIG_snova_SNOVA_37_8_16_4_AES_length_public_key 4112
#define OQS_SIG_snova_SNOVA_37_8_16_4_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_37_8_16_4_AES_length_signature 376
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_37_8_16_4_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_37_8_16_4_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_38_5_16_4x5)
#define OQS_SIG_snova_SNOVA_38_5_16_4x5_length_public_key 1416
#define OQS_SIG_snova_SNOVA_38_5_16_4x5_length_secret_key 48
#define OQS_SIG_snova_SNOVA_38_5_16_4x5_length_signature 446

OQS_SIG *OQS_SIG_snova_SNOVA_38_5_16_4x5_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_38_5_16_4x5_avx2)
#ifndef OQS_SIG_snova_SNOVA_38_5_16_4x5_length_public_key
#define OQS_SIG_snova_SNOVA_38_5_16_4x5_length_public_key 1416
#define OQS_SIG_snova_SNOVA_38_5_16_4x5_length_secret_key 48
#define OQS_SIG_snova_SNOVA_38_5_16_4x5_length_signature 446
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_38_5_16_4x5_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_38_5_16_4x5_AES)
#define OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_length_public_key 1416
#define OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_length_signature 446

OQS_SIG *OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_38_5_16_4x5_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_length_public_key
#define OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_length_public_key 1416
#define OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_length_signature 446
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_16_4x5_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_38_5_19_4x5)
#define OQS_SIG_snova_SNOVA_38_5_19_4x5_length_public_key 800
#define OQS_SIG_snova_SNOVA_38_5_19_4x5_length_secret_key 48
#define OQS_SIG_snova_SNOVA_38_5_19_4x5_length_signature 475

OQS_SIG *OQS_SIG_snova_SNOVA_38_5_19_4x5_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_38_5_19_4x5_avx2)
#ifndef OQS_SIG_snova_SNOVA_38_5_19_4x5_length_public_key
#define OQS_SIG_snova_SNOVA_38_5_19_4x5_length_public_key 800
#define OQS_SIG_snova_SNOVA_38_5_19_4x5_length_secret_key 48
#define OQS_SIG_snova_SNOVA_38_5_19_4x5_length_signature 475
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_38_5_19_4x5_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_38_5_19_4x5_AES)
#define OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_length_public_key 800
#define OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_length_signature 475

OQS_SIG *OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_38_5_19_4x5_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_length_public_key
#define OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_length_public_key 800
#define OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_length_signature 475
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_38_5_19_4x5_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_40_7_19_4)
#define OQS_SIG_snova_SNOVA_40_7_19_4_length_public_key 1532
#define OQS_SIG_snova_SNOVA_40_7_19_4_length_secret_key 48
#define OQS_SIG_snova_SNOVA_40_7_19_4_length_signature 418

OQS_SIG *OQS_SIG_snova_SNOVA_40_7_19_4_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_40_7_19_4_avx2)
#ifndef OQS_SIG_snova_SNOVA_40_7_19_4_length_public_key
#define OQS_SIG_snova_SNOVA_40_7_19_4_length_public_key 1532
#define OQS_SIG_snova_SNOVA_40_7_19_4_length_secret_key 48
#define OQS_SIG_snova_SNOVA_40_7_19_4_length_signature 418
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_40_7_19_4_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_40_7_19_4_AES)
#define OQS_SIG_snova_SNOVA_40_7_19_4_AES_length_public_key 1532
#define OQS_SIG_snova_SNOVA_40_7_19_4_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_40_7_19_4_AES_length_signature 418

OQS_SIG *OQS_SIG_snova_SNOVA_40_7_19_4_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_40_7_19_4_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_40_7_19_4_AES_length_public_key
#define OQS_SIG_snova_SNOVA_40_7_19_4_AES_length_public_key 1532
#define OQS_SIG_snova_SNOVA_40_7_19_4_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_40_7_19_4_AES_length_signature 418
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_40_7_19_4_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_40_7_19_4_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_72_25_16_2)
#define OQS_SIG_snova_SNOVA_72_25_16_2_length_public_key 31266
#define OQS_SIG_snova_SNOVA_72_25_16_2_length_secret_key 48
#define OQS_SIG_snova_SNOVA_72_25_16_2_length_signature 210

OQS_SIG *OQS_SIG_snova_SNOVA_72_25_16_2_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_72_25_16_2_avx2)
#ifndef OQS_SIG_snova_SNOVA_72_25_16_2_length_public_key
#define OQS_SIG_snova_SNOVA_72_25_16_2_length_public_key 31266
#define OQS_SIG_snova_SNOVA_72_25_16_2_length_secret_key 48
#define OQS_SIG_snova_SNOVA_72_25_16_2_length_signature 210
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_72_25_16_2_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_72_25_16_2_AES)
#define OQS_SIG_snova_SNOVA_72_25_16_2_AES_length_public_key 31266
#define OQS_SIG_snova_SNOVA_72_25_16_2_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_72_25_16_2_AES_length_signature 210

OQS_SIG *OQS_SIG_snova_SNOVA_72_25_16_2_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_72_25_16_2_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_72_25_16_2_AES_length_public_key
#define OQS_SIG_snova_SNOVA_72_25_16_2_AES_length_public_key 31266
#define OQS_SIG_snova_SNOVA_72_25_16_2_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_72_25_16_2_AES_length_signature 210
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_72_25_16_2_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_72_25_16_2_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_50_9_19_4)
#define OQS_SIG_snova_SNOVA_50_9_19_4_length_public_key 3213
#define OQS_SIG_snova_SNOVA_50_9_19_4_length_secret_key 48
#define OQS_SIG_snova_SNOVA_50_9_19_4_length_signature 520

OQS_SIG *OQS_SIG_snova_SNOVA_50_9_19_4_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_50_9_19_4_avx2)
#ifndef OQS_SIG_snova_SNOVA_50_9_19_4_length_public_key
#define OQS_SIG_snova_SNOVA_50_9_19_4_length_public_key 3213
#define OQS_SIG_snova_SNOVA_50_9_19_4_length_secret_key 48
#define OQS_SIG_snova_SNOVA_50_9_19_4_length_signature 520
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_50_9_19_4_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_50_9_19_4_AES)
#define OQS_SIG_snova_SNOVA_50_9_19_4_AES_length_public_key 3213
#define OQS_SIG_snova_SNOVA_50_9_19_4_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_50_9_19_4_AES_length_signature 520

OQS_SIG *OQS_SIG_snova_SNOVA_50_9_19_4_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_50_9_19_4_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_50_9_19_4_AES_length_public_key
#define OQS_SIG_snova_SNOVA_50_9_19_4_AES_length_public_key 3213
#define OQS_SIG_snova_SNOVA_50_9_19_4_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_50_9_19_4_AES_length_signature 520
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_50_9_19_4_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_50_9_19_4_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_60_10_16_4)
#define OQS_SIG_snova_SNOVA_60_10_16_4_length_public_key 8016
#define OQS_SIG_snova_SNOVA_60_10_16_4_length_secret_key 48
#define OQS_SIG_snova_SNOVA_60_10_16_4_length_signature 576

OQS_SIG *OQS_SIG_snova_SNOVA_60_10_16_4_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_60_10_16_4_avx2)
#ifndef OQS_SIG_snova_SNOVA_60_10_16_4_length_public_key
#define OQS_SIG_snova_SNOVA_60_10_16_4_length_public_key 8016
#define OQS_SIG_snova_SNOVA_60_10_16_4_length_secret_key 48
#define OQS_SIG_snova_SNOVA_60_10_16_4_length_signature 576
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_60_10_16_4_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_60_10_16_4_AES)
#define OQS_SIG_snova_SNOVA_60_10_16_4_AES_length_public_key 8016
#define OQS_SIG_snova_SNOVA_60_10_16_4_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_60_10_16_4_AES_length_signature 576

OQS_SIG *OQS_SIG_snova_SNOVA_60_10_16_4_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_60_10_16_4_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_60_10_16_4_AES_length_public_key
#define OQS_SIG_snova_SNOVA_60_10_16_4_AES_length_public_key 8016
#define OQS_SIG_snova_SNOVA_60_10_16_4_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_60_10_16_4_AES_length_signature 576
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_60_10_16_4_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_60_10_16_4_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_97_33_16_2)
#define OQS_SIG_snova_SNOVA_97_33_16_2_length_public_key 71890
#define OQS_SIG_snova_SNOVA_97_33_16_2_length_secret_key 48
#define OQS_SIG_snova_SNOVA_97_33_16_2_length_signature 276

OQS_SIG *OQS_SIG_snova_SNOVA_97_33_16_2_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_97_33_16_2_avx2)
#ifndef OQS_SIG_snova_SNOVA_97_33_16_2_length_public_key
#define OQS_SIG_snova_SNOVA_97_33_16_2_length_public_key 71890
#define OQS_SIG_snova_SNOVA_97_33_16_2_length_secret_key 48
#define OQS_SIG_snova_SNOVA_97_33_16_2_length_signature 276
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_97_33_16_2_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_97_33_16_2_AES)
#define OQS_SIG_snova_SNOVA_97_33_16_2_AES_length_public_key 71890
#define OQS_SIG_snova_SNOVA_97_33_16_2_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_97_33_16_2_AES_length_signature 276

OQS_SIG *OQS_SIG_snova_SNOVA_97_33_16_2_AES_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_AES_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_AES_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_AES_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_AES_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_AES_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_snova_SNOVA_97_33_16_2_AES_avx2)
#ifndef OQS_SIG_snova_SNOVA_97_33_16_2_AES_length_public_key
#define OQS_SIG_snova_SNOVA_97_33_16_2_AES_length_public_key 71890
#define OQS_SIG_snova_SNOVA_97_33_16_2_AES_length_secret_key 48
#define OQS_SIG_snova_SNOVA_97_33_16_2_AES_length_signature 276
#endif

OQS_SIG *OQS_SIG_snova_SNOVA_97_33_16_2_AES_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_AES_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_AES_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_AES_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_AES_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_snova_SNOVA_97_33_16_2_AES_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#endif /* OQS_SIG_SNOVA_H */
