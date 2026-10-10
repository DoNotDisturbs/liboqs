// SPDX-License-Identifier: MIT
/**
 * \file sig_sqisign.h
 * \brief SQIsign v3 reference and Intel Broadwell liboqs wrappers.
 */

#ifndef OQS_SIG_SQISIGN_H
#define OQS_SIG_SQISIGN_H

#include <oqs/oqs.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(OQS_ENABLE_SIG_sqisign_p324_3_ref)
#define OQS_SIG_sqisign_p324_3_ref_length_public_key 83
#define OQS_SIG_sqisign_p324_3_ref_length_secret_key 270
#define OQS_SIG_sqisign_p324_3_ref_length_signature 200

OQS_SIG *OQS_SIG_sqisign_p324_3_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sqisign_p324_3_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p324_3_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p324_3_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p324_3_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p324_3_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sqisign_p324_3_broadwell)
#define OQS_SIG_sqisign_p324_3_broadwell_length_public_key 83
#define OQS_SIG_sqisign_p324_3_broadwell_length_secret_key 270
#define OQS_SIG_sqisign_p324_3_broadwell_length_signature 200

OQS_SIG *OQS_SIG_sqisign_p324_3_broadwell_new(void);
OQS_API OQS_STATUS OQS_SIG_sqisign_p324_3_broadwell_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p324_3_broadwell_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p324_3_broadwell_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p324_3_broadwell_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p324_3_broadwell_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sqisign_p500_27_ref)
#define OQS_SIG_sqisign_p500_27_ref_length_public_key 129
#define OQS_SIG_sqisign_p500_27_ref_length_secret_key 417
#define OQS_SIG_sqisign_p500_27_ref_length_signature 306

OQS_SIG *OQS_SIG_sqisign_p500_27_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sqisign_p500_27_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p500_27_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p500_27_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p500_27_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p500_27_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sqisign_p500_27_broadwell)
#define OQS_SIG_sqisign_p500_27_broadwell_length_public_key 129
#define OQS_SIG_sqisign_p500_27_broadwell_length_secret_key 417
#define OQS_SIG_sqisign_p500_27_broadwell_length_signature 306

OQS_SIG *OQS_SIG_sqisign_p500_27_broadwell_new(void);
OQS_API OQS_STATUS OQS_SIG_sqisign_p500_27_broadwell_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p500_27_broadwell_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p500_27_broadwell_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p500_27_broadwell_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p500_27_broadwell_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sqisign_p664_17_ref)
#define OQS_SIG_sqisign_p664_17_ref_length_public_key 169
#define OQS_SIG_sqisign_p664_17_ref_length_secret_key 549
#define OQS_SIG_sqisign_p664_17_ref_length_signature 406

OQS_SIG *OQS_SIG_sqisign_p664_17_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_sqisign_p664_17_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p664_17_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p664_17_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p664_17_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p664_17_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#if defined(OQS_ENABLE_SIG_sqisign_p664_17_broadwell)
#define OQS_SIG_sqisign_p664_17_broadwell_length_public_key 169
#define OQS_SIG_sqisign_p664_17_broadwell_length_secret_key 549
#define OQS_SIG_sqisign_p664_17_broadwell_length_signature 406

OQS_SIG *OQS_SIG_sqisign_p664_17_broadwell_new(void);
OQS_API OQS_STATUS OQS_SIG_sqisign_p664_17_broadwell_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p664_17_broadwell_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p664_17_broadwell_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p664_17_broadwell_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_sqisign_p664_17_broadwell_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);
#endif

#ifdef __cplusplus
} // extern "C"
#endif

#endif // OQS_SIG_SQISIGN_H
