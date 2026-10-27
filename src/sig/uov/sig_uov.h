// SPDX-License-Identifier: MIT

#ifndef OQS_SIG_UOV_H
#define OQS_SIG_UOV_H

#include <oqs/oqs.h>

/*
 * UOV NIST Additional Signatures Round 2.
 *
 * Historical liboqs methods are retained for compatibility.
 * Explicit benchmark methods are additionally exposed locally as:
 *
 *   <parameter-set>-ref
 *   <parameter-set>-avx2
 *
 * The ref methods directly call the official upstream reference backend.
 * The avx2 methods directly call the official upstream AVX2 backend and
 * never perform runtime fallback.
 *
 * Global OQS_SIG registry entries are intentionally deferred until all
 * Round-2 candidates have been locally integrated.
 */

#if defined(OQS_ENABLE_SIG_uov_ov_Is)
#define OQS_SIG_uov_ov_Is_length_public_key 412160
#define OQS_SIG_uov_ov_Is_length_secret_key 348704
#define OQS_SIG_uov_ov_Is_length_signature 96

#define OQS_SIG_uov_ov_Is_ref_length_public_key OQS_SIG_uov_ov_Is_length_public_key
#define OQS_SIG_uov_ov_Is_ref_length_secret_key OQS_SIG_uov_ov_Is_length_secret_key
#define OQS_SIG_uov_ov_Is_ref_length_signature OQS_SIG_uov_ov_Is_length_signature

OQS_SIG *OQS_SIG_uov_ov_Is_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

OQS_SIG *OQS_SIG_uov_ov_Is_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_uov_ov_Is_avx2)
#define OQS_SIG_uov_ov_Is_avx2_length_public_key OQS_SIG_uov_ov_Is_length_public_key
#define OQS_SIG_uov_ov_Is_avx2_length_secret_key OQS_SIG_uov_ov_Is_length_secret_key
#define OQS_SIG_uov_ov_Is_avx2_length_signature OQS_SIG_uov_ov_Is_length_signature

OQS_SIG *OQS_SIG_uov_ov_Is_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);
#endif
#endif

#if defined(OQS_ENABLE_SIG_uov_ov_Ip)
#define OQS_SIG_uov_ov_Ip_length_public_key 278432
#define OQS_SIG_uov_ov_Ip_length_secret_key 237896
#define OQS_SIG_uov_ov_Ip_length_signature 128

#define OQS_SIG_uov_ov_Ip_ref_length_public_key OQS_SIG_uov_ov_Ip_length_public_key
#define OQS_SIG_uov_ov_Ip_ref_length_secret_key OQS_SIG_uov_ov_Ip_length_secret_key
#define OQS_SIG_uov_ov_Ip_ref_length_signature OQS_SIG_uov_ov_Ip_length_signature

OQS_SIG *OQS_SIG_uov_ov_Ip_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

OQS_SIG *OQS_SIG_uov_ov_Ip_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_uov_ov_Ip_avx2)
#define OQS_SIG_uov_ov_Ip_avx2_length_public_key OQS_SIG_uov_ov_Ip_length_public_key
#define OQS_SIG_uov_ov_Ip_avx2_length_secret_key OQS_SIG_uov_ov_Ip_length_secret_key
#define OQS_SIG_uov_ov_Ip_avx2_length_signature OQS_SIG_uov_ov_Ip_length_signature

OQS_SIG *OQS_SIG_uov_ov_Ip_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);
#endif
#endif

#if defined(OQS_ENABLE_SIG_uov_ov_III)
#define OQS_SIG_uov_ov_III_length_public_key 1225440
#define OQS_SIG_uov_ov_III_length_secret_key 1044320
#define OQS_SIG_uov_ov_III_length_signature 200

#define OQS_SIG_uov_ov_III_ref_length_public_key OQS_SIG_uov_ov_III_length_public_key
#define OQS_SIG_uov_ov_III_ref_length_secret_key OQS_SIG_uov_ov_III_length_secret_key
#define OQS_SIG_uov_ov_III_ref_length_signature OQS_SIG_uov_ov_III_length_signature

OQS_SIG *OQS_SIG_uov_ov_III_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

OQS_SIG *OQS_SIG_uov_ov_III_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_uov_ov_III_avx2)
#define OQS_SIG_uov_ov_III_avx2_length_public_key OQS_SIG_uov_ov_III_length_public_key
#define OQS_SIG_uov_ov_III_avx2_length_secret_key OQS_SIG_uov_ov_III_length_secret_key
#define OQS_SIG_uov_ov_III_avx2_length_signature OQS_SIG_uov_ov_III_length_signature

OQS_SIG *OQS_SIG_uov_ov_III_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);
#endif
#endif

#if defined(OQS_ENABLE_SIG_uov_ov_V)
#define OQS_SIG_uov_ov_V_length_public_key 2869440
#define OQS_SIG_uov_ov_V_length_secret_key 2436704
#define OQS_SIG_uov_ov_V_length_signature 260

#define OQS_SIG_uov_ov_V_ref_length_public_key OQS_SIG_uov_ov_V_length_public_key
#define OQS_SIG_uov_ov_V_ref_length_secret_key OQS_SIG_uov_ov_V_length_secret_key
#define OQS_SIG_uov_ov_V_ref_length_signature OQS_SIG_uov_ov_V_length_signature

OQS_SIG *OQS_SIG_uov_ov_V_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

OQS_SIG *OQS_SIG_uov_ov_V_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_uov_ov_V_avx2)
#define OQS_SIG_uov_ov_V_avx2_length_public_key OQS_SIG_uov_ov_V_length_public_key
#define OQS_SIG_uov_ov_V_avx2_length_secret_key OQS_SIG_uov_ov_V_length_secret_key
#define OQS_SIG_uov_ov_V_avx2_length_signature OQS_SIG_uov_ov_V_length_signature

OQS_SIG *OQS_SIG_uov_ov_V_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);
#endif
#endif

#if defined(OQS_ENABLE_SIG_uov_ov_Is_pkc)
#define OQS_SIG_uov_ov_Is_pkc_length_public_key 66576
#define OQS_SIG_uov_ov_Is_pkc_length_secret_key 348704
#define OQS_SIG_uov_ov_Is_pkc_length_signature 96

#define OQS_SIG_uov_ov_Is_pkc_ref_length_public_key OQS_SIG_uov_ov_Is_pkc_length_public_key
#define OQS_SIG_uov_ov_Is_pkc_ref_length_secret_key OQS_SIG_uov_ov_Is_pkc_length_secret_key
#define OQS_SIG_uov_ov_Is_pkc_ref_length_signature OQS_SIG_uov_ov_Is_pkc_length_signature

OQS_SIG *OQS_SIG_uov_ov_Is_pkc_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

OQS_SIG *OQS_SIG_uov_ov_Is_pkc_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_uov_ov_Is_pkc_avx2)
#define OQS_SIG_uov_ov_Is_pkc_avx2_length_public_key OQS_SIG_uov_ov_Is_pkc_length_public_key
#define OQS_SIG_uov_ov_Is_pkc_avx2_length_secret_key OQS_SIG_uov_ov_Is_pkc_length_secret_key
#define OQS_SIG_uov_ov_Is_pkc_avx2_length_signature OQS_SIG_uov_ov_Is_pkc_length_signature

OQS_SIG *OQS_SIG_uov_ov_Is_pkc_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);
#endif
#endif

#if defined(OQS_ENABLE_SIG_uov_ov_Ip_pkc)
#define OQS_SIG_uov_ov_Ip_pkc_length_public_key 43576
#define OQS_SIG_uov_ov_Ip_pkc_length_secret_key 237896
#define OQS_SIG_uov_ov_Ip_pkc_length_signature 128

#define OQS_SIG_uov_ov_Ip_pkc_ref_length_public_key OQS_SIG_uov_ov_Ip_pkc_length_public_key
#define OQS_SIG_uov_ov_Ip_pkc_ref_length_secret_key OQS_SIG_uov_ov_Ip_pkc_length_secret_key
#define OQS_SIG_uov_ov_Ip_pkc_ref_length_signature OQS_SIG_uov_ov_Ip_pkc_length_signature

OQS_SIG *OQS_SIG_uov_ov_Ip_pkc_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

OQS_SIG *OQS_SIG_uov_ov_Ip_pkc_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_uov_ov_Ip_pkc_avx2)
#define OQS_SIG_uov_ov_Ip_pkc_avx2_length_public_key OQS_SIG_uov_ov_Ip_pkc_length_public_key
#define OQS_SIG_uov_ov_Ip_pkc_avx2_length_secret_key OQS_SIG_uov_ov_Ip_pkc_length_secret_key
#define OQS_SIG_uov_ov_Ip_pkc_avx2_length_signature OQS_SIG_uov_ov_Ip_pkc_length_signature

OQS_SIG *OQS_SIG_uov_ov_Ip_pkc_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);
#endif
#endif

#if defined(OQS_ENABLE_SIG_uov_ov_III_pkc)
#define OQS_SIG_uov_ov_III_pkc_length_public_key 189232
#define OQS_SIG_uov_ov_III_pkc_length_secret_key 1044320
#define OQS_SIG_uov_ov_III_pkc_length_signature 200

#define OQS_SIG_uov_ov_III_pkc_ref_length_public_key OQS_SIG_uov_ov_III_pkc_length_public_key
#define OQS_SIG_uov_ov_III_pkc_ref_length_secret_key OQS_SIG_uov_ov_III_pkc_length_secret_key
#define OQS_SIG_uov_ov_III_pkc_ref_length_signature OQS_SIG_uov_ov_III_pkc_length_signature

OQS_SIG *OQS_SIG_uov_ov_III_pkc_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

OQS_SIG *OQS_SIG_uov_ov_III_pkc_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_uov_ov_III_pkc_avx2)
#define OQS_SIG_uov_ov_III_pkc_avx2_length_public_key OQS_SIG_uov_ov_III_pkc_length_public_key
#define OQS_SIG_uov_ov_III_pkc_avx2_length_secret_key OQS_SIG_uov_ov_III_pkc_length_secret_key
#define OQS_SIG_uov_ov_III_pkc_avx2_length_signature OQS_SIG_uov_ov_III_pkc_length_signature

OQS_SIG *OQS_SIG_uov_ov_III_pkc_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);
#endif
#endif

#if defined(OQS_ENABLE_SIG_uov_ov_V_pkc)
#define OQS_SIG_uov_ov_V_pkc_length_public_key 446992
#define OQS_SIG_uov_ov_V_pkc_length_secret_key 2436704
#define OQS_SIG_uov_ov_V_pkc_length_signature 260

#define OQS_SIG_uov_ov_V_pkc_ref_length_public_key OQS_SIG_uov_ov_V_pkc_length_public_key
#define OQS_SIG_uov_ov_V_pkc_ref_length_secret_key OQS_SIG_uov_ov_V_pkc_length_secret_key
#define OQS_SIG_uov_ov_V_pkc_ref_length_signature OQS_SIG_uov_ov_V_pkc_length_signature

OQS_SIG *OQS_SIG_uov_ov_V_pkc_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

OQS_SIG *OQS_SIG_uov_ov_V_pkc_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_uov_ov_V_pkc_avx2)
#define OQS_SIG_uov_ov_V_pkc_avx2_length_public_key OQS_SIG_uov_ov_V_pkc_length_public_key
#define OQS_SIG_uov_ov_V_pkc_avx2_length_secret_key OQS_SIG_uov_ov_V_pkc_length_secret_key
#define OQS_SIG_uov_ov_V_pkc_avx2_length_signature OQS_SIG_uov_ov_V_pkc_length_signature

OQS_SIG *OQS_SIG_uov_ov_V_pkc_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);
#endif
#endif

#if defined(OQS_ENABLE_SIG_uov_ov_Is_pkc_skc)
#define OQS_SIG_uov_ov_Is_pkc_skc_length_public_key 66576
#define OQS_SIG_uov_ov_Is_pkc_skc_length_secret_key 32
#define OQS_SIG_uov_ov_Is_pkc_skc_length_signature 96

#define OQS_SIG_uov_ov_Is_pkc_skc_ref_length_public_key OQS_SIG_uov_ov_Is_pkc_skc_length_public_key
#define OQS_SIG_uov_ov_Is_pkc_skc_ref_length_secret_key OQS_SIG_uov_ov_Is_pkc_skc_length_secret_key
#define OQS_SIG_uov_ov_Is_pkc_skc_ref_length_signature OQS_SIG_uov_ov_Is_pkc_skc_length_signature

OQS_SIG *OQS_SIG_uov_ov_Is_pkc_skc_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

OQS_SIG *OQS_SIG_uov_ov_Is_pkc_skc_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_uov_ov_Is_pkc_skc_avx2)
#define OQS_SIG_uov_ov_Is_pkc_skc_avx2_length_public_key OQS_SIG_uov_ov_Is_pkc_skc_length_public_key
#define OQS_SIG_uov_ov_Is_pkc_skc_avx2_length_secret_key OQS_SIG_uov_ov_Is_pkc_skc_length_secret_key
#define OQS_SIG_uov_ov_Is_pkc_skc_avx2_length_signature OQS_SIG_uov_ov_Is_pkc_skc_length_signature

OQS_SIG *OQS_SIG_uov_ov_Is_pkc_skc_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Is_pkc_skc_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);
#endif
#endif

#if defined(OQS_ENABLE_SIG_uov_ov_Ip_pkc_skc)
#define OQS_SIG_uov_ov_Ip_pkc_skc_length_public_key 43576
#define OQS_SIG_uov_ov_Ip_pkc_skc_length_secret_key 32
#define OQS_SIG_uov_ov_Ip_pkc_skc_length_signature 128

#define OQS_SIG_uov_ov_Ip_pkc_skc_ref_length_public_key OQS_SIG_uov_ov_Ip_pkc_skc_length_public_key
#define OQS_SIG_uov_ov_Ip_pkc_skc_ref_length_secret_key OQS_SIG_uov_ov_Ip_pkc_skc_length_secret_key
#define OQS_SIG_uov_ov_Ip_pkc_skc_ref_length_signature OQS_SIG_uov_ov_Ip_pkc_skc_length_signature

OQS_SIG *OQS_SIG_uov_ov_Ip_pkc_skc_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

OQS_SIG *OQS_SIG_uov_ov_Ip_pkc_skc_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_uov_ov_Ip_pkc_skc_avx2)
#define OQS_SIG_uov_ov_Ip_pkc_skc_avx2_length_public_key OQS_SIG_uov_ov_Ip_pkc_skc_length_public_key
#define OQS_SIG_uov_ov_Ip_pkc_skc_avx2_length_secret_key OQS_SIG_uov_ov_Ip_pkc_skc_length_secret_key
#define OQS_SIG_uov_ov_Ip_pkc_skc_avx2_length_signature OQS_SIG_uov_ov_Ip_pkc_skc_length_signature

OQS_SIG *OQS_SIG_uov_ov_Ip_pkc_skc_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_Ip_pkc_skc_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);
#endif
#endif

#if defined(OQS_ENABLE_SIG_uov_ov_III_pkc_skc)
#define OQS_SIG_uov_ov_III_pkc_skc_length_public_key 189232
#define OQS_SIG_uov_ov_III_pkc_skc_length_secret_key 32
#define OQS_SIG_uov_ov_III_pkc_skc_length_signature 200

#define OQS_SIG_uov_ov_III_pkc_skc_ref_length_public_key OQS_SIG_uov_ov_III_pkc_skc_length_public_key
#define OQS_SIG_uov_ov_III_pkc_skc_ref_length_secret_key OQS_SIG_uov_ov_III_pkc_skc_length_secret_key
#define OQS_SIG_uov_ov_III_pkc_skc_ref_length_signature OQS_SIG_uov_ov_III_pkc_skc_length_signature

OQS_SIG *OQS_SIG_uov_ov_III_pkc_skc_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

OQS_SIG *OQS_SIG_uov_ov_III_pkc_skc_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_uov_ov_III_pkc_skc_avx2)
#define OQS_SIG_uov_ov_III_pkc_skc_avx2_length_public_key OQS_SIG_uov_ov_III_pkc_skc_length_public_key
#define OQS_SIG_uov_ov_III_pkc_skc_avx2_length_secret_key OQS_SIG_uov_ov_III_pkc_skc_length_secret_key
#define OQS_SIG_uov_ov_III_pkc_skc_avx2_length_signature OQS_SIG_uov_ov_III_pkc_skc_length_signature

OQS_SIG *OQS_SIG_uov_ov_III_pkc_skc_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_III_pkc_skc_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);
#endif
#endif

#if defined(OQS_ENABLE_SIG_uov_ov_V_pkc_skc)
#define OQS_SIG_uov_ov_V_pkc_skc_length_public_key 446992
#define OQS_SIG_uov_ov_V_pkc_skc_length_secret_key 32
#define OQS_SIG_uov_ov_V_pkc_skc_length_signature 260

#define OQS_SIG_uov_ov_V_pkc_skc_ref_length_public_key OQS_SIG_uov_ov_V_pkc_skc_length_public_key
#define OQS_SIG_uov_ov_V_pkc_skc_ref_length_secret_key OQS_SIG_uov_ov_V_pkc_skc_length_secret_key
#define OQS_SIG_uov_ov_V_pkc_skc_ref_length_signature OQS_SIG_uov_ov_V_pkc_skc_length_signature

OQS_SIG *OQS_SIG_uov_ov_V_pkc_skc_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

OQS_SIG *OQS_SIG_uov_ov_V_pkc_skc_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_uov_ov_V_pkc_skc_avx2)
#define OQS_SIG_uov_ov_V_pkc_skc_avx2_length_public_key OQS_SIG_uov_ov_V_pkc_skc_length_public_key
#define OQS_SIG_uov_ov_V_pkc_skc_avx2_length_secret_key OQS_SIG_uov_ov_V_pkc_skc_length_secret_key
#define OQS_SIG_uov_ov_V_pkc_skc_avx2_length_signature OQS_SIG_uov_ov_V_pkc_skc_length_signature

OQS_SIG *OQS_SIG_uov_ov_V_pkc_skc_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_uov_ov_V_pkc_skc_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctxlen, const uint8_t *public_key);
#endif
#endif

#endif
