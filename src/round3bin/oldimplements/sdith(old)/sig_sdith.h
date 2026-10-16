// SPDX-License-Identifier: MIT
/**
 * \file sig_sdith.h
 * \brief SDitH Round-3 signature family
 */

#ifndef OQS_SIG_SDITH_H
#define OQS_SIG_SDITH_H

#include <oqs/oqs.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat1_fast_cipherpow_opt)
#define OQS_SIG_sdith_cat1_fast_cipherpow_opt_length_public_key 70
#define OQS_SIG_sdith_cat1_fast_cipherpow_opt_length_secret_key 147
#define OQS_SIG_sdith_cat1_fast_cipherpow_opt_length_signature 4643

OQS_SIG *OQS_SIG_sdith_cat1_fast_cipherpow_opt_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_opt_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat1_fast_cipherpow_ref)
#define OQS_SIG_sdith_cat1_fast_cipherpow_ref_length_public_key 70
#define OQS_SIG_sdith_cat1_fast_cipherpow_ref_length_secret_key 147
#define OQS_SIG_sdith_cat1_fast_cipherpow_ref_length_signature 4643

OQS_SIG *OQS_SIG_sdith_cat1_fast_cipherpow_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat1_fast_opt)
#define OQS_SIG_sdith_cat1_fast_opt_length_public_key 70
#define OQS_SIG_sdith_cat1_fast_opt_length_secret_key 147
#define OQS_SIG_sdith_cat1_fast_opt_length_signature 4914

OQS_SIG *OQS_SIG_sdith_cat1_fast_opt_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_opt_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat1_fast_ref)
#define OQS_SIG_sdith_cat1_fast_ref_length_public_key 70
#define OQS_SIG_sdith_cat1_fast_ref_length_secret_key 147
#define OQS_SIG_sdith_cat1_fast_ref_length_signature 4914

OQS_SIG *OQS_SIG_sdith_cat1_fast_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat1_short_cipherpow_opt)
#define OQS_SIG_sdith_cat1_short_cipherpow_opt_length_public_key 70
#define OQS_SIG_sdith_cat1_short_cipherpow_opt_length_secret_key 147
#define OQS_SIG_sdith_cat1_short_cipherpow_opt_length_signature 3721

OQS_SIG *OQS_SIG_sdith_cat1_short_cipherpow_opt_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_opt_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat1_short_cipherpow_ref)
#define OQS_SIG_sdith_cat1_short_cipherpow_ref_length_public_key 70
#define OQS_SIG_sdith_cat1_short_cipherpow_ref_length_secret_key 147
#define OQS_SIG_sdith_cat1_short_cipherpow_ref_length_signature 3721

OQS_SIG *OQS_SIG_sdith_cat1_short_cipherpow_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat1_short_opt)
#define OQS_SIG_sdith_cat1_short_opt_length_public_key 70
#define OQS_SIG_sdith_cat1_short_opt_length_secret_key 147
#define OQS_SIG_sdith_cat1_short_opt_length_signature 3721

OQS_SIG *OQS_SIG_sdith_cat1_short_opt_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_opt_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat1_short_ref)
#define OQS_SIG_sdith_cat1_short_ref_length_public_key 70
#define OQS_SIG_sdith_cat1_short_ref_length_secret_key 147
#define OQS_SIG_sdith_cat1_short_ref_length_signature 3721

OQS_SIG *OQS_SIG_sdith_cat1_short_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat3_fast_cipherpow_opt)
#define OQS_SIG_sdith_cat3_fast_cipherpow_opt_length_public_key 98
#define OQS_SIG_sdith_cat3_fast_cipherpow_opt_length_secret_key 208
#define OQS_SIG_sdith_cat3_fast_cipherpow_opt_length_signature 10452

OQS_SIG *OQS_SIG_sdith_cat3_fast_cipherpow_opt_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_opt_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat3_fast_cipherpow_ref)
#define OQS_SIG_sdith_cat3_fast_cipherpow_ref_length_public_key 98
#define OQS_SIG_sdith_cat3_fast_cipherpow_ref_length_secret_key 208
#define OQS_SIG_sdith_cat3_fast_cipherpow_ref_length_signature 10452

OQS_SIG *OQS_SIG_sdith_cat3_fast_cipherpow_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat3_fast_opt)
#define OQS_SIG_sdith_cat3_fast_opt_length_public_key 98
#define OQS_SIG_sdith_cat3_fast_opt_length_secret_key 208
#define OQS_SIG_sdith_cat3_fast_opt_length_signature 10852

OQS_SIG *OQS_SIG_sdith_cat3_fast_opt_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_opt_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat3_fast_ref)
#define OQS_SIG_sdith_cat3_fast_ref_length_public_key 98
#define OQS_SIG_sdith_cat3_fast_ref_length_secret_key 208
#define OQS_SIG_sdith_cat3_fast_ref_length_signature 10852

OQS_SIG *OQS_SIG_sdith_cat3_fast_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat3_short_cipherpow_opt)
#define OQS_SIG_sdith_cat3_short_cipherpow_opt_length_public_key 98
#define OQS_SIG_sdith_cat3_short_cipherpow_opt_length_secret_key 208
#define OQS_SIG_sdith_cat3_short_cipherpow_opt_length_signature 8484

OQS_SIG *OQS_SIG_sdith_cat3_short_cipherpow_opt_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_opt_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat3_short_cipherpow_ref)
#define OQS_SIG_sdith_cat3_short_cipherpow_ref_length_public_key 98
#define OQS_SIG_sdith_cat3_short_cipherpow_ref_length_secret_key 208
#define OQS_SIG_sdith_cat3_short_cipherpow_ref_length_signature 8484

OQS_SIG *OQS_SIG_sdith_cat3_short_cipherpow_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat3_short_opt)
#define OQS_SIG_sdith_cat3_short_opt_length_public_key 98
#define OQS_SIG_sdith_cat3_short_opt_length_secret_key 208
#define OQS_SIG_sdith_cat3_short_opt_length_signature 8484

OQS_SIG *OQS_SIG_sdith_cat3_short_opt_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_opt_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat3_short_ref)
#define OQS_SIG_sdith_cat3_short_ref_length_public_key 98
#define OQS_SIG_sdith_cat3_short_ref_length_secret_key 208
#define OQS_SIG_sdith_cat3_short_ref_length_signature 8484

OQS_SIG *OQS_SIG_sdith_cat3_short_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat5_fast_cipherpow_opt)
#define OQS_SIG_sdith_cat5_fast_cipherpow_opt_length_public_key 132
#define OQS_SIG_sdith_cat5_fast_cipherpow_opt_length_secret_key 275
#define OQS_SIG_sdith_cat5_fast_cipherpow_opt_length_signature 19144

OQS_SIG *OQS_SIG_sdith_cat5_fast_cipherpow_opt_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_opt_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat5_fast_cipherpow_ref)
#define OQS_SIG_sdith_cat5_fast_cipherpow_ref_length_public_key 132
#define OQS_SIG_sdith_cat5_fast_cipherpow_ref_length_secret_key 275
#define OQS_SIG_sdith_cat5_fast_cipherpow_ref_length_signature 19144

OQS_SIG *OQS_SIG_sdith_cat5_fast_cipherpow_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat5_fast_opt)
#define OQS_SIG_sdith_cat5_fast_opt_length_public_key 132
#define OQS_SIG_sdith_cat5_fast_opt_length_secret_key 275
#define OQS_SIG_sdith_cat5_fast_opt_length_signature 19144

OQS_SIG *OQS_SIG_sdith_cat5_fast_opt_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_opt_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat5_fast_ref)
#define OQS_SIG_sdith_cat5_fast_ref_length_public_key 132
#define OQS_SIG_sdith_cat5_fast_ref_length_secret_key 275
#define OQS_SIG_sdith_cat5_fast_ref_length_signature 19144

OQS_SIG *OQS_SIG_sdith_cat5_fast_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat5_short_cipherpow_opt)
#define OQS_SIG_sdith_cat5_short_cipherpow_opt_length_public_key 132
#define OQS_SIG_sdith_cat5_short_cipherpow_opt_length_secret_key 275
#define OQS_SIG_sdith_cat5_short_cipherpow_opt_length_signature 15147

OQS_SIG *OQS_SIG_sdith_cat5_short_cipherpow_opt_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_opt_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat5_short_cipherpow_ref)
#define OQS_SIG_sdith_cat5_short_cipherpow_ref_length_public_key 132
#define OQS_SIG_sdith_cat5_short_cipherpow_ref_length_secret_key 275
#define OQS_SIG_sdith_cat5_short_cipherpow_ref_length_signature 15147

OQS_SIG *OQS_SIG_sdith_cat5_short_cipherpow_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat5_short_opt)
#define OQS_SIG_sdith_cat5_short_opt_length_public_key 132
#define OQS_SIG_sdith_cat5_short_opt_length_secret_key 275
#define OQS_SIG_sdith_cat5_short_opt_length_signature 15147

OQS_SIG *OQS_SIG_sdith_cat5_short_opt_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_opt_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sdith_cat5_short_ref)
#define OQS_SIG_sdith_cat5_short_ref_length_public_key 132
#define OQS_SIG_sdith_cat5_short_ref_length_secret_key 275
#define OQS_SIG_sdith_cat5_short_ref_length_signature 15147

OQS_SIG *OQS_SIG_sdith_cat5_short_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#ifdef __cplusplus
} // extern "C"
#endif

#endif // OQS_SIG_SDITH_H
