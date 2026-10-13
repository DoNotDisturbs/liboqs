// SPDX-License-Identifier: MIT
/**
 * \file sig_faest.h
 * \brief FAEST Round-3 REF and AVX2 liboqs wrappers.
 */

#ifndef OQS_SIG_FAEST_H
#define OQS_SIG_FAEST_H

#include <oqs/oqs.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(OQS_ENABLE_SIG_faest_128s)
#define OQS_SIG_faest_128s_ref_length_public_key 32
#define OQS_SIG_faest_128s_ref_length_secret_key 32
#define OQS_SIG_faest_128s_ref_length_signature 4066
OQS_SIG *OQS_SIG_faest_128s_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_128s_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_128s_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_128s_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_128s_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_128s_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_faest_128s_avx2_length_public_key 32
#define OQS_SIG_faest_128s_avx2_length_secret_key 32
#define OQS_SIG_faest_128s_avx2_length_signature 4066
OQS_SIG *OQS_SIG_faest_128s_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_128s_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_128s_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_128s_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_128s_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_128s_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#endif

#if defined(OQS_ENABLE_SIG_faest_128f)
#define OQS_SIG_faest_128f_ref_length_public_key 32
#define OQS_SIG_faest_128f_ref_length_secret_key 32
#define OQS_SIG_faest_128f_ref_length_signature 5170
OQS_SIG *OQS_SIG_faest_128f_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_128f_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_128f_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_128f_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_128f_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_128f_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_faest_128f_avx2_length_public_key 32
#define OQS_SIG_faest_128f_avx2_length_secret_key 32
#define OQS_SIG_faest_128f_avx2_length_signature 5170
OQS_SIG *OQS_SIG_faest_128f_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_128f_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_128f_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_128f_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_128f_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_128f_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#endif

#if defined(OQS_ENABLE_SIG_faest_192s)
#define OQS_SIG_faest_192s_ref_length_public_key 48
#define OQS_SIG_faest_192s_ref_length_secret_key 40
#define OQS_SIG_faest_192s_ref_length_signature 9410
OQS_SIG *OQS_SIG_faest_192s_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_192s_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_192s_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_192s_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_192s_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_192s_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_faest_192s_avx2_length_public_key 48
#define OQS_SIG_faest_192s_avx2_length_secret_key 40
#define OQS_SIG_faest_192s_avx2_length_signature 9410
OQS_SIG *OQS_SIG_faest_192s_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_192s_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_192s_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_192s_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_192s_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_192s_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#endif

#if defined(OQS_ENABLE_SIG_faest_192f)
#define OQS_SIG_faest_192f_ref_length_public_key 48
#define OQS_SIG_faest_192f_ref_length_secret_key 40
#define OQS_SIG_faest_192f_ref_length_signature 11738
OQS_SIG *OQS_SIG_faest_192f_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_192f_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_192f_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_192f_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_192f_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_192f_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_faest_192f_avx2_length_public_key 48
#define OQS_SIG_faest_192f_avx2_length_secret_key 40
#define OQS_SIG_faest_192f_avx2_length_signature 11738
OQS_SIG *OQS_SIG_faest_192f_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_192f_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_192f_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_192f_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_192f_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_192f_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#endif

#if defined(OQS_ENABLE_SIG_faest_256s)
#define OQS_SIG_faest_256s_ref_length_public_key 48
#define OQS_SIG_faest_256s_ref_length_secret_key 48
#define OQS_SIG_faest_256s_ref_length_signature 16626
OQS_SIG *OQS_SIG_faest_256s_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_256s_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_256s_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_256s_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_256s_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_256s_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_faest_256s_avx2_length_public_key 48
#define OQS_SIG_faest_256s_avx2_length_secret_key 48
#define OQS_SIG_faest_256s_avx2_length_signature 16626
OQS_SIG *OQS_SIG_faest_256s_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_256s_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_256s_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_256s_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_256s_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_256s_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#endif

#if defined(OQS_ENABLE_SIG_faest_256f)
#define OQS_SIG_faest_256f_ref_length_public_key 48
#define OQS_SIG_faest_256f_ref_length_secret_key 48
#define OQS_SIG_faest_256f_ref_length_signature 20856
OQS_SIG *OQS_SIG_faest_256f_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_256f_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_256f_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_256f_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_256f_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_256f_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_faest_256f_avx2_length_public_key 48
#define OQS_SIG_faest_256f_avx2_length_secret_key 48
#define OQS_SIG_faest_256f_avx2_length_signature 20856
OQS_SIG *OQS_SIG_faest_256f_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_256f_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_256f_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_256f_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_256f_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_256f_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#endif

#if defined(OQS_ENABLE_SIG_faest_em_128s)
#define OQS_SIG_faest_em_128s_ref_length_public_key 32
#define OQS_SIG_faest_em_128s_ref_length_secret_key 32
#define OQS_SIG_faest_em_128s_ref_length_signature 3466
OQS_SIG *OQS_SIG_faest_em_128s_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_em_128s_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128s_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128s_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128s_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128s_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_faest_em_128s_avx2_length_public_key 32
#define OQS_SIG_faest_em_128s_avx2_length_secret_key 32
#define OQS_SIG_faest_em_128s_avx2_length_signature 3466
OQS_SIG *OQS_SIG_faest_em_128s_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_em_128s_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128s_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128s_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128s_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128s_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#endif

#if defined(OQS_ENABLE_SIG_faest_em_128f)
#define OQS_SIG_faest_em_128f_ref_length_public_key 32
#define OQS_SIG_faest_em_128f_ref_length_secret_key 32
#define OQS_SIG_faest_em_128f_ref_length_signature 4170
OQS_SIG *OQS_SIG_faest_em_128f_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_em_128f_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128f_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128f_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128f_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128f_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_faest_em_128f_avx2_length_public_key 32
#define OQS_SIG_faest_em_128f_avx2_length_secret_key 32
#define OQS_SIG_faest_em_128f_avx2_length_signature 4170
OQS_SIG *OQS_SIG_faest_em_128f_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_em_128f_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128f_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128f_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128f_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_128f_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#endif

#if defined(OQS_ENABLE_SIG_faest_em_192s)
#define OQS_SIG_faest_em_192s_ref_length_public_key 48
#define OQS_SIG_faest_em_192s_ref_length_secret_key 48
#define OQS_SIG_faest_em_192s_ref_length_signature 7874
OQS_SIG *OQS_SIG_faest_em_192s_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_em_192s_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192s_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192s_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192s_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192s_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_faest_em_192s_avx2_length_public_key 48
#define OQS_SIG_faest_em_192s_avx2_length_secret_key 48
#define OQS_SIG_faest_em_192s_avx2_length_signature 7874
OQS_SIG *OQS_SIG_faest_em_192s_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_em_192s_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192s_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192s_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192s_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192s_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#endif

#if defined(OQS_ENABLE_SIG_faest_em_192f)
#define OQS_SIG_faest_em_192f_ref_length_public_key 48
#define OQS_SIG_faest_em_192f_ref_length_secret_key 48
#define OQS_SIG_faest_em_192f_ref_length_signature 9818
OQS_SIG *OQS_SIG_faest_em_192f_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_em_192f_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192f_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192f_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192f_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192f_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_faest_em_192f_avx2_length_public_key 48
#define OQS_SIG_faest_em_192f_avx2_length_secret_key 48
#define OQS_SIG_faest_em_192f_avx2_length_signature 9818
OQS_SIG *OQS_SIG_faest_em_192f_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_em_192f_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192f_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192f_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192f_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_192f_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#endif

#if defined(OQS_ENABLE_SIG_faest_em_256s)
#define OQS_SIG_faest_em_256s_ref_length_public_key 64
#define OQS_SIG_faest_em_256s_ref_length_secret_key 64
#define OQS_SIG_faest_em_256s_ref_length_signature 14554
OQS_SIG *OQS_SIG_faest_em_256s_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_em_256s_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256s_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256s_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256s_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256s_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_faest_em_256s_avx2_length_public_key 64
#define OQS_SIG_faest_em_256s_avx2_length_secret_key 64
#define OQS_SIG_faest_em_256s_avx2_length_signature 14554
OQS_SIG *OQS_SIG_faest_em_256s_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_em_256s_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256s_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256s_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256s_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256s_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#endif

#if defined(OQS_ENABLE_SIG_faest_em_256f)
#define OQS_SIG_faest_em_256f_ref_length_public_key 64
#define OQS_SIG_faest_em_256f_ref_length_secret_key 64
#define OQS_SIG_faest_em_256f_ref_length_signature 18084
OQS_SIG *OQS_SIG_faest_em_256f_ref_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_em_256f_ref_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256f_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256f_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256f_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256f_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#define OQS_SIG_faest_em_256f_avx2_length_public_key 64
#define OQS_SIG_faest_em_256f_avx2_length_secret_key 64
#define OQS_SIG_faest_em_256f_avx2_length_signature 18084
OQS_SIG *OQS_SIG_faest_em_256f_avx2_new(void);
OQS_API OQS_STATUS OQS_SIG_faest_em_256f_avx2_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256f_avx2_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256f_avx2_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256f_avx2_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_faest_em_256f_avx2_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#endif

#ifdef __cplusplus
} // extern "C"
#endif

#endif // OQS_SIG_FAEST_H
