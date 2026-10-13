// SPDX-License-Identifier: MIT
/**
 * \file sig_qruov.h
 * \brief QR-UOV Round-3 REF/AVX2 liboqs wrappers.
 */

#ifndef OQS_SIG_QRUOV_H
#define OQS_SIG_QRUOV_H

#include <oqs/oqs.h>

#ifdef __cplusplus
extern "C" {
#endif

#define OQS_SIG_qruov_1q7l10_aes_ref_length_public_key 20641
#define OQS_SIG_qruov_1q7l10_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_1q7l10_aes_ref_length_signature 331
OQS_SIG *OQS_SIG_qruov_1q7l10_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_1q7l10_aes_avx2_length_public_key 20641
#define OQS_SIG_qruov_1q7l10_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_1q7l10_aes_avx2_length_signature 331
OQS_SIG *OQS_SIG_qruov_1q7l10_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_1q7l10_shake_ref_length_public_key 20641
#define OQS_SIG_qruov_1q7l10_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_1q7l10_shake_ref_length_signature 331
OQS_SIG *OQS_SIG_qruov_1q7l10_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_1q7l10_shake_avx2_length_public_key 20641
#define OQS_SIG_qruov_1q7l10_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_1q7l10_shake_avx2_length_signature 331
OQS_SIG *OQS_SIG_qruov_1q7l10_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q7l10_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_3q7l10_aes_ref_length_public_key 55141
#define OQS_SIG_qruov_3q7l10_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_3q7l10_aes_ref_length_signature 489
OQS_SIG *OQS_SIG_qruov_3q7l10_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_3q7l10_aes_avx2_length_public_key 55141
#define OQS_SIG_qruov_3q7l10_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_3q7l10_aes_avx2_length_signature 489
OQS_SIG *OQS_SIG_qruov_3q7l10_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_3q7l10_shake_ref_length_public_key 55141
#define OQS_SIG_qruov_3q7l10_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_3q7l10_shake_ref_length_signature 489
OQS_SIG *OQS_SIG_qruov_3q7l10_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_3q7l10_shake_avx2_length_public_key 55141
#define OQS_SIG_qruov_3q7l10_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_3q7l10_shake_avx2_length_signature 489
OQS_SIG *OQS_SIG_qruov_3q7l10_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q7l10_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_5q7l10_aes_ref_length_public_key 135391
#define OQS_SIG_qruov_5q7l10_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_5q7l10_aes_ref_length_signature 662
OQS_SIG *OQS_SIG_qruov_5q7l10_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_5q7l10_aes_avx2_length_public_key 135391
#define OQS_SIG_qruov_5q7l10_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_5q7l10_aes_avx2_length_signature 662
OQS_SIG *OQS_SIG_qruov_5q7l10_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_5q7l10_shake_ref_length_public_key 135391
#define OQS_SIG_qruov_5q7l10_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_5q7l10_shake_ref_length_signature 662
OQS_SIG *OQS_SIG_qruov_5q7l10_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_5q7l10_shake_avx2_length_public_key 135391
#define OQS_SIG_qruov_5q7l10_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_5q7l10_shake_avx2_length_signature 662
OQS_SIG *OQS_SIG_qruov_5q7l10_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q7l10_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_1q31l3_aes_ref_length_public_key 23641
#define OQS_SIG_qruov_1q31l3_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_1q31l3_aes_ref_length_signature 157
OQS_SIG *OQS_SIG_qruov_1q31l3_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_1q31l3_aes_avx2_length_public_key 23641
#define OQS_SIG_qruov_1q31l3_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_1q31l3_aes_avx2_length_signature 157
OQS_SIG *OQS_SIG_qruov_1q31l3_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_1q31l3_shake_ref_length_public_key 23641
#define OQS_SIG_qruov_1q31l3_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_1q31l3_shake_ref_length_signature 157
OQS_SIG *OQS_SIG_qruov_1q31l3_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_1q31l3_shake_avx2_length_public_key 23641
#define OQS_SIG_qruov_1q31l3_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_1q31l3_shake_avx2_length_signature 157
OQS_SIG *OQS_SIG_qruov_1q31l3_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l3_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_3q31l3_aes_ref_length_public_key 70976
#define OQS_SIG_qruov_3q31l3_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_3q31l3_aes_ref_length_signature 233
OQS_SIG *OQS_SIG_qruov_3q31l3_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_3q31l3_aes_avx2_length_public_key 70976
#define OQS_SIG_qruov_3q31l3_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_3q31l3_aes_avx2_length_signature 233
OQS_SIG *OQS_SIG_qruov_3q31l3_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_3q31l3_shake_ref_length_public_key 70976
#define OQS_SIG_qruov_3q31l3_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_3q31l3_shake_ref_length_signature 233
OQS_SIG *OQS_SIG_qruov_3q31l3_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_3q31l3_shake_avx2_length_public_key 70976
#define OQS_SIG_qruov_3q31l3_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_3q31l3_shake_avx2_length_signature 233
OQS_SIG *OQS_SIG_qruov_3q31l3_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l3_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_5q31l3_aes_ref_length_public_key 158405
#define OQS_SIG_qruov_5q31l3_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_5q31l3_aes_ref_length_signature 306
OQS_SIG *OQS_SIG_qruov_5q31l3_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_5q31l3_aes_avx2_length_public_key 158405
#define OQS_SIG_qruov_5q31l3_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_5q31l3_aes_avx2_length_signature 306
OQS_SIG *OQS_SIG_qruov_5q31l3_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_5q31l3_shake_ref_length_public_key 158405
#define OQS_SIG_qruov_5q31l3_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_5q31l3_shake_ref_length_signature 306
OQS_SIG *OQS_SIG_qruov_5q31l3_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_5q31l3_shake_avx2_length_public_key 158405
#define OQS_SIG_qruov_5q31l3_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_5q31l3_shake_avx2_length_signature 306
OQS_SIG *OQS_SIG_qruov_5q31l3_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l3_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_1q31l10_aes_ref_length_public_key 12266
#define OQS_SIG_qruov_1q31l10_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_1q31l10_aes_ref_length_signature 435
OQS_SIG *OQS_SIG_qruov_1q31l10_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_1q31l10_aes_avx2_length_public_key 12266
#define OQS_SIG_qruov_1q31l10_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_1q31l10_aes_avx2_length_signature 435
OQS_SIG *OQS_SIG_qruov_1q31l10_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_1q31l10_shake_ref_length_public_key 12266
#define OQS_SIG_qruov_1q31l10_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_1q31l10_shake_ref_length_signature 435
OQS_SIG *OQS_SIG_qruov_1q31l10_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_1q31l10_shake_avx2_length_public_key 12266
#define OQS_SIG_qruov_1q31l10_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_1q31l10_shake_avx2_length_signature 435
OQS_SIG *OQS_SIG_qruov_1q31l10_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q31l10_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_3q31l10_aes_ref_length_public_key 34391
#define OQS_SIG_qruov_3q31l10_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_3q31l10_aes_ref_length_signature 643
OQS_SIG *OQS_SIG_qruov_3q31l10_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_3q31l10_aes_avx2_length_public_key 34391
#define OQS_SIG_qruov_3q31l10_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_3q31l10_aes_avx2_length_signature 643
OQS_SIG *OQS_SIG_qruov_3q31l10_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_3q31l10_shake_ref_length_public_key 34391
#define OQS_SIG_qruov_3q31l10_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_3q31l10_shake_ref_length_signature 643
OQS_SIG *OQS_SIG_qruov_3q31l10_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_3q31l10_shake_avx2_length_public_key 34391
#define OQS_SIG_qruov_3q31l10_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_3q31l10_shake_avx2_length_signature 643
OQS_SIG *OQS_SIG_qruov_3q31l10_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q31l10_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_5q31l10_aes_ref_length_public_key 58516
#define OQS_SIG_qruov_5q31l10_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_5q31l10_aes_ref_length_signature 807
OQS_SIG *OQS_SIG_qruov_5q31l10_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_5q31l10_aes_avx2_length_public_key 58516
#define OQS_SIG_qruov_5q31l10_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_5q31l10_aes_avx2_length_signature 807
OQS_SIG *OQS_SIG_qruov_5q31l10_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_5q31l10_shake_ref_length_public_key 58516
#define OQS_SIG_qruov_5q31l10_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_5q31l10_shake_ref_length_signature 807
OQS_SIG *OQS_SIG_qruov_5q31l10_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_5q31l10_shake_avx2_length_public_key 58516
#define OQS_SIG_qruov_5q31l10_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_5q31l10_shake_avx2_length_signature 807
OQS_SIG *OQS_SIG_qruov_5q31l10_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q31l10_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_1q127l3_aes_ref_length_public_key 24256
#define OQS_SIG_qruov_1q127l3_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_1q127l3_aes_ref_length_signature 200
OQS_SIG *OQS_SIG_qruov_1q127l3_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_1q127l3_aes_avx2_length_public_key 24256
#define OQS_SIG_qruov_1q127l3_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_1q127l3_aes_avx2_length_signature 200
OQS_SIG *OQS_SIG_qruov_1q127l3_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_1q127l3_shake_ref_length_public_key 24256
#define OQS_SIG_qruov_1q127l3_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_1q127l3_shake_ref_length_signature 200
OQS_SIG *OQS_SIG_qruov_1q127l3_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_1q127l3_shake_avx2_length_public_key 24256
#define OQS_SIG_qruov_1q127l3_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_1q127l3_shake_avx2_length_signature 200
OQS_SIG *OQS_SIG_qruov_1q127l3_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l3_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_3q127l3_aes_ref_length_public_key 71884
#define OQS_SIG_qruov_3q127l3_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_3q127l3_aes_ref_length_signature 292
OQS_SIG *OQS_SIG_qruov_3q127l3_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_3q127l3_aes_avx2_length_public_key 71884
#define OQS_SIG_qruov_3q127l3_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_3q127l3_aes_avx2_length_signature 292
OQS_SIG *OQS_SIG_qruov_3q127l3_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_3q127l3_shake_ref_length_public_key 71884
#define OQS_SIG_qruov_3q127l3_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_3q127l3_shake_ref_length_signature 292
OQS_SIG *OQS_SIG_qruov_3q127l3_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_3q127l3_shake_avx2_length_public_key 71884
#define OQS_SIG_qruov_3q127l3_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_3q127l3_shake_avx2_length_signature 292
OQS_SIG *OQS_SIG_qruov_3q127l3_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l3_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_5q127l3_aes_ref_length_public_key 173660
#define OQS_SIG_qruov_5q127l3_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_5q127l3_aes_ref_length_signature 392
OQS_SIG *OQS_SIG_qruov_5q127l3_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_5q127l3_aes_avx2_length_public_key 173660
#define OQS_SIG_qruov_5q127l3_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_5q127l3_aes_avx2_length_signature 392
OQS_SIG *OQS_SIG_qruov_5q127l3_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_5q127l3_shake_ref_length_public_key 173660
#define OQS_SIG_qruov_5q127l3_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_5q127l3_shake_ref_length_signature 392
OQS_SIG *OQS_SIG_qruov_5q127l3_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_5q127l3_shake_avx2_length_public_key 173660
#define OQS_SIG_qruov_5q127l3_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_5q127l3_shake_avx2_length_signature 392
OQS_SIG *OQS_SIG_qruov_5q127l3_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l3_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_1q127l10_aes_ref_length_public_key 11041
#define OQS_SIG_qruov_1q127l10_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_1q127l10_aes_ref_length_signature 541
OQS_SIG *OQS_SIG_qruov_1q127l10_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_1q127l10_aes_avx2_length_public_key 11041
#define OQS_SIG_qruov_1q127l10_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_1q127l10_aes_avx2_length_signature 541
OQS_SIG *OQS_SIG_qruov_1q127l10_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_1q127l10_shake_ref_length_public_key 11041
#define OQS_SIG_qruov_1q127l10_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_1q127l10_shake_ref_length_signature 541
OQS_SIG *OQS_SIG_qruov_1q127l10_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_1q127l10_shake_avx2_length_public_key 11041
#define OQS_SIG_qruov_1q127l10_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_1q127l10_shake_avx2_length_signature 541
OQS_SIG *OQS_SIG_qruov_1q127l10_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_1q127l10_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_3q127l10_aes_ref_length_public_key 35454
#define OQS_SIG_qruov_3q127l10_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_3q127l10_aes_ref_length_signature 821
OQS_SIG *OQS_SIG_qruov_3q127l10_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_3q127l10_aes_avx2_length_public_key 35454
#define OQS_SIG_qruov_3q127l10_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_3q127l10_aes_avx2_length_signature 821
OQS_SIG *OQS_SIG_qruov_3q127l10_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_3q127l10_shake_ref_length_public_key 35454
#define OQS_SIG_qruov_3q127l10_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_3q127l10_shake_ref_length_signature 821
OQS_SIG *OQS_SIG_qruov_3q127l10_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_3q127l10_shake_avx2_length_public_key 35454
#define OQS_SIG_qruov_3q127l10_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_3q127l10_shake_avx2_length_signature 821
OQS_SIG *OQS_SIG_qruov_3q127l10_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_3q127l10_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_5q127l10_aes_ref_length_public_key 63541
#define OQS_SIG_qruov_5q127l10_aes_ref_length_secret_key 32
#define OQS_SIG_qruov_5q127l10_aes_ref_length_signature 1039
OQS_SIG *OQS_SIG_qruov_5q127l10_aes_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_aes_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_aes_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_aes_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_aes_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_aes_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_5q127l10_aes_avx2_length_public_key 63541
#define OQS_SIG_qruov_5q127l10_aes_avx2_length_secret_key 32
#define OQS_SIG_qruov_5q127l10_aes_avx2_length_signature 1039
OQS_SIG *OQS_SIG_qruov_5q127l10_aes_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_aes_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_aes_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_aes_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_aes_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_aes_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_qruov_5q127l10_shake_ref_length_public_key 63541
#define OQS_SIG_qruov_5q127l10_shake_ref_length_secret_key 32
#define OQS_SIG_qruov_5q127l10_shake_ref_length_signature 1039
OQS_SIG *OQS_SIG_qruov_5q127l10_shake_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_shake_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_shake_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_shake_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_shake_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_shake_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);


#define OQS_SIG_qruov_5q127l10_shake_avx2_length_public_key 63541
#define OQS_SIG_qruov_5q127l10_shake_avx2_length_secret_key 32
#define OQS_SIG_qruov_5q127l10_shake_avx2_length_signature 1039
OQS_SIG *OQS_SIG_qruov_5q127l10_shake_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_shake_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_shake_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_shake_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_shake_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_qruov_5q127l10_shake_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // OQS_SIG_QRUOV_H
