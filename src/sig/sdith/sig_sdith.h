/**
 * \file sig_sdith.h
 * \brief SDitH signature algorithm family
 *
 * SDitH is a post-quantum digital signature scheme based on
 * syndrome decoding with iterative trapdoor hiding.
 *
 * \author liboqs team
 */

#ifndef OQS_SIG_SDITH_H
#define OQS_SIG_SDITH_H

#include <oqs/oqs.h>

#ifdef __cplusplus
extern "C" {
#endif

/* sdith_cat1_fast_cipherpow_opt */

/** Algorithm identifier for SDitH-CAT1-FAST-CIPHERPOW-OPT */
#define OQS_SIG_alg_sdith_cat1_fast_cipherpow_opt "SDitH-CAT1-FAST-CIPHERPOW-OPT"

/** SDitH-CAT1-FAST-CIPHERPOW-OPT public key length, in bytes */
#define OQS_SIG_sdith_cat1_fast_cipherpow_opt_length_public_key 70

/** SDitH-CAT1-FAST-CIPHERPOW-OPT secret key length, in bytes */
#define OQS_SIG_sdith_cat1_fast_cipherpow_opt_length_secret_key 147

/** SDitH-CAT1-FAST-CIPHERPOW-OPT signature length, in bytes */
#define OQS_SIG_sdith_cat1_fast_cipherpow_opt_length_signature 4643

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_opt_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat1_fast_cipherpow_opt)
OQS_SIG *OQS_SIG_sdith_cat1_fast_cipherpow_opt_new(void);
#endif

/* sdith_cat1_fast_cipherpow_ref */

/** Algorithm identifier for SDitH-CAT1-FAST-CIPHERPOW-REF */
#define OQS_SIG_alg_sdith_cat1_fast_cipherpow_ref "SDitH-CAT1-FAST-CIPHERPOW-REF"

/** SDitH-CAT1-FAST-CIPHERPOW-REF public key length, in bytes */
#define OQS_SIG_sdith_cat1_fast_cipherpow_ref_length_public_key 70

/** SDitH-CAT1-FAST-CIPHERPOW-REF secret key length, in bytes */
#define OQS_SIG_sdith_cat1_fast_cipherpow_ref_length_secret_key 147

/** SDitH-CAT1-FAST-CIPHERPOW-REF signature length, in bytes */
#define OQS_SIG_sdith_cat1_fast_cipherpow_ref_length_signature 4643

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_ref_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_cipherpow_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat1_fast_cipherpow_ref)
OQS_SIG *OQS_SIG_sdith_cat1_fast_cipherpow_ref_new(void);
#endif

/* sdith_cat1_fast_opt */

/** Algorithm identifier for SDitH-CAT1-FAST-OPT */
#define OQS_SIG_alg_sdith_cat1_fast_opt "SDitH-CAT1-FAST-OPT"

/** SDitH-CAT1-FAST-OPT public key length, in bytes */
#define OQS_SIG_sdith_cat1_fast_opt_length_public_key 70

/** SDitH-CAT1-FAST-OPT secret key length, in bytes */
#define OQS_SIG_sdith_cat1_fast_opt_length_secret_key 147

/** SDitH-CAT1-FAST-OPT signature length, in bytes */
#define OQS_SIG_sdith_cat1_fast_opt_length_signature 4914

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_opt_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat1_fast_opt)
OQS_SIG *OQS_SIG_sdith_cat1_fast_opt_new(void);
#endif

/* sdith_cat1_fast_ref */

/** Algorithm identifier for SDitH-CAT1-FAST-REF */
#define OQS_SIG_alg_sdith_cat1_fast_ref "SDitH-CAT1-FAST-REF"

/** SDitH-CAT1-FAST-REF public key length, in bytes */
#define OQS_SIG_sdith_cat1_fast_ref_length_public_key 70

/** SDitH-CAT1-FAST-REF secret key length, in bytes */
#define OQS_SIG_sdith_cat1_fast_ref_length_secret_key 147

/** SDitH-CAT1-FAST-REF signature length, in bytes */
#define OQS_SIG_sdith_cat1_fast_ref_length_signature 4914

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_ref_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_fast_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat1_fast_ref)
OQS_SIG *OQS_SIG_sdith_cat1_fast_ref_new(void);
#endif

/* sdith_cat1_short_cipherpow_opt */

/** Algorithm identifier for SDitH-CAT1-SHORT-CIPHERPOW-OPT */
#define OQS_SIG_alg_sdith_cat1_short_cipherpow_opt "SDitH-CAT1-SHORT-CIPHERPOW-OPT"

/** SDitH-CAT1-SHORT-CIPHERPOW-OPT public key length, in bytes */
#define OQS_SIG_sdith_cat1_short_cipherpow_opt_length_public_key 70

/** SDitH-CAT1-SHORT-CIPHERPOW-OPT secret key length, in bytes */
#define OQS_SIG_sdith_cat1_short_cipherpow_opt_length_secret_key 147

/** SDitH-CAT1-SHORT-CIPHERPOW-OPT signature length, in bytes */
#define OQS_SIG_sdith_cat1_short_cipherpow_opt_length_signature 3721

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_opt_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat1_short_cipherpow_opt)
OQS_SIG *OQS_SIG_sdith_cat1_short_cipherpow_opt_new(void);
#endif

/* sdith_cat1_short_cipherpow_ref */

/** Algorithm identifier for SDitH-CAT1-SHORT-CIPHERPOW-REF */
#define OQS_SIG_alg_sdith_cat1_short_cipherpow_ref "SDitH-CAT1-SHORT-CIPHERPOW-REF"

/** SDitH-CAT1-SHORT-CIPHERPOW-REF public key length, in bytes */
#define OQS_SIG_sdith_cat1_short_cipherpow_ref_length_public_key 70

/** SDitH-CAT1-SHORT-CIPHERPOW-REF secret key length, in bytes */
#define OQS_SIG_sdith_cat1_short_cipherpow_ref_length_secret_key 147

/** SDitH-CAT1-SHORT-CIPHERPOW-REF signature length, in bytes */
#define OQS_SIG_sdith_cat1_short_cipherpow_ref_length_signature 3721

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_ref_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_cipherpow_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat1_short_cipherpow_ref)
OQS_SIG *OQS_SIG_sdith_cat1_short_cipherpow_ref_new(void);
#endif

/* sdith_cat1_short_opt */

/** Algorithm identifier for SDitH-CAT1-SHORT-OPT */
#define OQS_SIG_alg_sdith_cat1_short_opt "SDitH-CAT1-SHORT-OPT"

/** SDitH-CAT1-SHORT-OPT public key length, in bytes */
#define OQS_SIG_sdith_cat1_short_opt_length_public_key 70

/** SDitH-CAT1-SHORT-OPT secret key length, in bytes */
#define OQS_SIG_sdith_cat1_short_opt_length_secret_key 147

/** SDitH-CAT1-SHORT-OPT signature length, in bytes */
#define OQS_SIG_sdith_cat1_short_opt_length_signature 3721

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_opt_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat1_short_opt)
OQS_SIG *OQS_SIG_sdith_cat1_short_opt_new(void);
#endif

/* sdith_cat1_short_ref */

/** Algorithm identifier for SDitH-CAT1-SHORT-REF */
#define OQS_SIG_alg_sdith_cat1_short_ref "SDitH-CAT1-SHORT-REF"

/** SDitH-CAT1-SHORT-REF public key length, in bytes */
#define OQS_SIG_sdith_cat1_short_ref_length_public_key 70

/** SDitH-CAT1-SHORT-REF secret key length, in bytes */
#define OQS_SIG_sdith_cat1_short_ref_length_secret_key 147

/** SDitH-CAT1-SHORT-REF signature length, in bytes */
#define OQS_SIG_sdith_cat1_short_ref_length_signature 3721

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_ref_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat1_short_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat1_short_ref)
OQS_SIG *OQS_SIG_sdith_cat1_short_ref_new(void);
#endif

/* sdith_cat3_fast_cipherpow_opt */

/** Algorithm identifier for SDitH-CAT3-FAST-CIPHERPOW-OPT */
#define OQS_SIG_alg_sdith_cat3_fast_cipherpow_opt "SDitH-CAT3-FAST-CIPHERPOW-OPT"

/** SDitH-CAT3-FAST-CIPHERPOW-OPT public key length, in bytes */
#define OQS_SIG_sdith_cat3_fast_cipherpow_opt_length_public_key 98

/** SDitH-CAT3-FAST-CIPHERPOW-OPT secret key length, in bytes */
#define OQS_SIG_sdith_cat3_fast_cipherpow_opt_length_secret_key 208

/** SDitH-CAT3-FAST-CIPHERPOW-OPT signature length, in bytes */
#define OQS_SIG_sdith_cat3_fast_cipherpow_opt_length_signature 10452

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_opt_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat3_fast_cipherpow_opt)
OQS_SIG *OQS_SIG_sdith_cat3_fast_cipherpow_opt_new(void);
#endif

/* sdith_cat3_fast_cipherpow_ref */

/** Algorithm identifier for SDitH-CAT3-FAST-CIPHERPOW-REF */
#define OQS_SIG_alg_sdith_cat3_fast_cipherpow_ref "SDitH-CAT3-FAST-CIPHERPOW-REF"

/** SDitH-CAT3-FAST-CIPHERPOW-REF public key length, in bytes */
#define OQS_SIG_sdith_cat3_fast_cipherpow_ref_length_public_key 98

/** SDitH-CAT3-FAST-CIPHERPOW-REF secret key length, in bytes */
#define OQS_SIG_sdith_cat3_fast_cipherpow_ref_length_secret_key 208

/** SDitH-CAT3-FAST-CIPHERPOW-REF signature length, in bytes */
#define OQS_SIG_sdith_cat3_fast_cipherpow_ref_length_signature 10452

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_ref_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_cipherpow_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat3_fast_cipherpow_ref)
OQS_SIG *OQS_SIG_sdith_cat3_fast_cipherpow_ref_new(void);
#endif

/* sdith_cat3_fast_opt */

/** Algorithm identifier for SDitH-CAT3-FAST-OPT */
#define OQS_SIG_alg_sdith_cat3_fast_opt "SDitH-CAT3-FAST-OPT"

/** SDitH-CAT3-FAST-OPT public key length, in bytes */
#define OQS_SIG_sdith_cat3_fast_opt_length_public_key 98

/** SDitH-CAT3-FAST-OPT secret key length, in bytes */
#define OQS_SIG_sdith_cat3_fast_opt_length_secret_key 208

/** SDitH-CAT3-FAST-OPT signature length, in bytes */
#define OQS_SIG_sdith_cat3_fast_opt_length_signature 10852

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_opt_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat3_fast_opt)
OQS_SIG *OQS_SIG_sdith_cat3_fast_opt_new(void);
#endif

/* sdith_cat3_fast_ref */

/** Algorithm identifier for SDitH-CAT3-FAST-REF */
#define OQS_SIG_alg_sdith_cat3_fast_ref "SDitH-CAT3-FAST-REF"

/** SDitH-CAT3-FAST-REF public key length, in bytes */
#define OQS_SIG_sdith_cat3_fast_ref_length_public_key 98

/** SDitH-CAT3-FAST-REF secret key length, in bytes */
#define OQS_SIG_sdith_cat3_fast_ref_length_secret_key 208

/** SDitH-CAT3-FAST-REF signature length, in bytes */
#define OQS_SIG_sdith_cat3_fast_ref_length_signature 10852

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_ref_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_fast_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat3_fast_ref)
OQS_SIG *OQS_SIG_sdith_cat3_fast_ref_new(void);
#endif

/* sdith_cat3_short_cipherpow_opt */

/** Algorithm identifier for SDitH-CAT3-SHORT-CIPHERPOW-OPT */
#define OQS_SIG_alg_sdith_cat3_short_cipherpow_opt "SDitH-CAT3-SHORT-CIPHERPOW-OPT"

/** SDitH-CAT3-SHORT-CIPHERPOW-OPT public key length, in bytes */
#define OQS_SIG_sdith_cat3_short_cipherpow_opt_length_public_key 98

/** SDitH-CAT3-SHORT-CIPHERPOW-OPT secret key length, in bytes */
#define OQS_SIG_sdith_cat3_short_cipherpow_opt_length_secret_key 208

/** SDitH-CAT3-SHORT-CIPHERPOW-OPT signature length, in bytes */
#define OQS_SIG_sdith_cat3_short_cipherpow_opt_length_signature 8484

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_opt_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat3_short_cipherpow_opt)
OQS_SIG *OQS_SIG_sdith_cat3_short_cipherpow_opt_new(void);
#endif

/* sdith_cat3_short_cipherpow_ref */

/** Algorithm identifier for SDitH-CAT3-SHORT-CIPHERPOW-REF */
#define OQS_SIG_alg_sdith_cat3_short_cipherpow_ref "SDitH-CAT3-SHORT-CIPHERPOW-REF"

/** SDitH-CAT3-SHORT-CIPHERPOW-REF public key length, in bytes */
#define OQS_SIG_sdith_cat3_short_cipherpow_ref_length_public_key 98

/** SDitH-CAT3-SHORT-CIPHERPOW-REF secret key length, in bytes */
#define OQS_SIG_sdith_cat3_short_cipherpow_ref_length_secret_key 208

/** SDitH-CAT3-SHORT-CIPHERPOW-REF signature length, in bytes */
#define OQS_SIG_sdith_cat3_short_cipherpow_ref_length_signature 8484

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_ref_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_cipherpow_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat3_short_cipherpow_ref)
OQS_SIG *OQS_SIG_sdith_cat3_short_cipherpow_ref_new(void);
#endif

/* sdith_cat3_short_opt */

/** Algorithm identifier for SDitH-CAT3-SHORT-OPT */
#define OQS_SIG_alg_sdith_cat3_short_opt "SDitH-CAT3-SHORT-OPT"

/** SDitH-CAT3-SHORT-OPT public key length, in bytes */
#define OQS_SIG_sdith_cat3_short_opt_length_public_key 98

/** SDitH-CAT3-SHORT-OPT secret key length, in bytes */
#define OQS_SIG_sdith_cat3_short_opt_length_secret_key 208

/** SDitH-CAT3-SHORT-OPT signature length, in bytes */
#define OQS_SIG_sdith_cat3_short_opt_length_signature 8484

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_opt_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat3_short_opt)
OQS_SIG *OQS_SIG_sdith_cat3_short_opt_new(void);
#endif

/* sdith_cat3_short_ref */

/** Algorithm identifier for SDitH-CAT3-SHORT-REF */
#define OQS_SIG_alg_sdith_cat3_short_ref "SDitH-CAT3-SHORT-REF"

/** SDitH-CAT3-SHORT-REF public key length, in bytes */
#define OQS_SIG_sdith_cat3_short_ref_length_public_key 98

/** SDitH-CAT3-SHORT-REF secret key length, in bytes */
#define OQS_SIG_sdith_cat3_short_ref_length_secret_key 208

/** SDitH-CAT3-SHORT-REF signature length, in bytes */
#define OQS_SIG_sdith_cat3_short_ref_length_signature 8484

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_ref_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat3_short_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat3_short_ref)
OQS_SIG *OQS_SIG_sdith_cat3_short_ref_new(void);
#endif

/* sdith_cat5_fast_cipherpow_opt */

/** Algorithm identifier for SDitH-CAT5-FAST-CIPHERPOW-OPT */
#define OQS_SIG_alg_sdith_cat5_fast_cipherpow_opt "SDitH-CAT5-FAST-CIPHERPOW-OPT"

/** SDitH-CAT5-FAST-CIPHERPOW-OPT public key length, in bytes */
#define OQS_SIG_sdith_cat5_fast_cipherpow_opt_length_public_key 132

/** SDitH-CAT5-FAST-CIPHERPOW-OPT secret key length, in bytes */
#define OQS_SIG_sdith_cat5_fast_cipherpow_opt_length_secret_key 275

/** SDitH-CAT5-FAST-CIPHERPOW-OPT signature length, in bytes */
#define OQS_SIG_sdith_cat5_fast_cipherpow_opt_length_signature 19144

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_opt_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat5_fast_cipherpow_opt)
OQS_SIG *OQS_SIG_sdith_cat5_fast_cipherpow_opt_new(void);
#endif

/* sdith_cat5_fast_cipherpow_ref */

/** Algorithm identifier for SDitH-CAT5-FAST-CIPHERPOW-REF */
#define OQS_SIG_alg_sdith_cat5_fast_cipherpow_ref "SDitH-CAT5-FAST-CIPHERPOW-REF"

/** SDitH-CAT5-FAST-CIPHERPOW-REF public key length, in bytes */
#define OQS_SIG_sdith_cat5_fast_cipherpow_ref_length_public_key 132

/** SDitH-CAT5-FAST-CIPHERPOW-REF secret key length, in bytes */
#define OQS_SIG_sdith_cat5_fast_cipherpow_ref_length_secret_key 275

/** SDitH-CAT5-FAST-CIPHERPOW-REF signature length, in bytes */
#define OQS_SIG_sdith_cat5_fast_cipherpow_ref_length_signature 19144

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_ref_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_cipherpow_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat5_fast_cipherpow_ref)
OQS_SIG *OQS_SIG_sdith_cat5_fast_cipherpow_ref_new(void);
#endif

/* sdith_cat5_fast_opt */

/** Algorithm identifier for SDitH-CAT5-FAST-OPT */
#define OQS_SIG_alg_sdith_cat5_fast_opt "SDitH-CAT5-FAST-OPT"

/** SDitH-CAT5-FAST-OPT public key length, in bytes */
#define OQS_SIG_sdith_cat5_fast_opt_length_public_key 132

/** SDitH-CAT5-FAST-OPT secret key length, in bytes */
#define OQS_SIG_sdith_cat5_fast_opt_length_secret_key 275

/** SDitH-CAT5-FAST-OPT signature length, in bytes */
#define OQS_SIG_sdith_cat5_fast_opt_length_signature 19144

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_opt_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat5_fast_opt)
OQS_SIG *OQS_SIG_sdith_cat5_fast_opt_new(void);
#endif

/* sdith_cat5_fast_ref */

/** Algorithm identifier for SDitH-CAT5-FAST-REF */
#define OQS_SIG_alg_sdith_cat5_fast_ref "SDitH-CAT5-FAST-REF"

/** SDitH-CAT5-FAST-REF public key length, in bytes */
#define OQS_SIG_sdith_cat5_fast_ref_length_public_key 132

/** SDitH-CAT5-FAST-REF secret key length, in bytes */
#define OQS_SIG_sdith_cat5_fast_ref_length_secret_key 275

/** SDitH-CAT5-FAST-REF signature length, in bytes */
#define OQS_SIG_sdith_cat5_fast_ref_length_signature 19144

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_ref_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_fast_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat5_fast_ref)
OQS_SIG *OQS_SIG_sdith_cat5_fast_ref_new(void);
#endif

/* sdith_cat5_short_cipherpow_opt */

/** Algorithm identifier for SDitH-CAT5-SHORT-CIPHERPOW-OPT */
#define OQS_SIG_alg_sdith_cat5_short_cipherpow_opt "SDitH-CAT5-SHORT-CIPHERPOW-OPT"

/** SDitH-CAT5-SHORT-CIPHERPOW-OPT public key length, in bytes */
#define OQS_SIG_sdith_cat5_short_cipherpow_opt_length_public_key 132

/** SDitH-CAT5-SHORT-CIPHERPOW-OPT secret key length, in bytes */
#define OQS_SIG_sdith_cat5_short_cipherpow_opt_length_secret_key 275

/** SDitH-CAT5-SHORT-CIPHERPOW-OPT signature length, in bytes */
#define OQS_SIG_sdith_cat5_short_cipherpow_opt_length_signature 15147

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_opt_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat5_short_cipherpow_opt)
OQS_SIG *OQS_SIG_sdith_cat5_short_cipherpow_opt_new(void);
#endif

/* sdith_cat5_short_cipherpow_ref */

/** Algorithm identifier for SDitH-CAT5-SHORT-CIPHERPOW-REF */
#define OQS_SIG_alg_sdith_cat5_short_cipherpow_ref "SDitH-CAT5-SHORT-CIPHERPOW-REF"

/** SDitH-CAT5-SHORT-CIPHERPOW-REF public key length, in bytes */
#define OQS_SIG_sdith_cat5_short_cipherpow_ref_length_public_key 132

/** SDitH-CAT5-SHORT-CIPHERPOW-REF secret key length, in bytes */
#define OQS_SIG_sdith_cat5_short_cipherpow_ref_length_secret_key 275

/** SDitH-CAT5-SHORT-CIPHERPOW-REF signature length, in bytes */
#define OQS_SIG_sdith_cat5_short_cipherpow_ref_length_signature 15147

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_ref_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_cipherpow_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat5_short_cipherpow_ref)
OQS_SIG *OQS_SIG_sdith_cat5_short_cipherpow_ref_new(void);
#endif

/* sdith_cat5_short_opt */

/** Algorithm identifier for SDitH-CAT5-SHORT-OPT */
#define OQS_SIG_alg_sdith_cat5_short_opt "SDitH-CAT5-SHORT-OPT"

/** SDitH-CAT5-SHORT-OPT public key length, in bytes */
#define OQS_SIG_sdith_cat5_short_opt_length_public_key 132

/** SDitH-CAT5-SHORT-OPT secret key length, in bytes */
#define OQS_SIG_sdith_cat5_short_opt_length_secret_key 275

/** SDitH-CAT5-SHORT-OPT signature length, in bytes */
#define OQS_SIG_sdith_cat5_short_opt_length_signature 15147

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_opt_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_opt_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_opt_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_opt_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_opt_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat5_short_opt)
OQS_SIG *OQS_SIG_sdith_cat5_short_opt_new(void);
#endif

/* sdith_cat5_short_ref */

/** Algorithm identifier for SDitH-CAT5-SHORT-REF */
#define OQS_SIG_alg_sdith_cat5_short_ref "SDitH-CAT5-SHORT-REF"

/** SDitH-CAT5-SHORT-REF public key length, in bytes */
#define OQS_SIG_sdith_cat5_short_ref_length_public_key 132

/** SDitH-CAT5-SHORT-REF secret key length, in bytes */
#define OQS_SIG_sdith_cat5_short_ref_length_secret_key 275

/** SDitH-CAT5-SHORT-REF signature length, in bytes */
#define OQS_SIG_sdith_cat5_short_ref_length_signature 15147

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_ref_keypair(uint8_t *public_key, uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_ref_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_ref_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_ref_sign_with_ctx_str(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *secret_key);

OQS_API OQS_STATUS OQS_SIG_sdith_cat5_short_ref_verify_with_ctx_str(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx_str, size_t ctx_str_len, const uint8_t *public_key);

#if defined(OQS_ENABLE_SIG_sdith_cat5_short_ref)
OQS_SIG *OQS_SIG_sdith_cat5_short_ref_new(void);
#endif

#ifdef __cplusplus
} // extern "C"
#endif

#endif // OQS_SIG_SDITH_H
