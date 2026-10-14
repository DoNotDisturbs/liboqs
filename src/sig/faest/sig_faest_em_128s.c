// SPDX-License-Identifier: MIT
#include <oqs/sig_faest.h>
#include <oqs/common.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#if defined(OQS_FAEST_EM_128S_REF)
#define FAEST_METHOD_NAME OQS_SIG_alg_faest_em_128s_ref
#define FAEST_LENGTH_PUBLIC_KEY OQS_SIG_faest_em_128s_ref_length_public_key
#define FAEST_LENGTH_SECRET_KEY OQS_SIG_faest_em_128s_ref_length_secret_key
#define FAEST_LENGTH_SIGNATURE OQS_SIG_faest_em_128s_ref_length_signature
#define FAEST_NEW OQS_SIG_faest_em_128s_ref_new
#define FAEST_KEYPAIR OQS_SIG_faest_em_128s_ref_keypair
#define FAEST_SIGN OQS_SIG_faest_em_128s_ref_sign
#define FAEST_VERIFY OQS_SIG_faest_em_128s_ref_verify
#define FAEST_SIGN_CTX OQS_SIG_faest_em_128s_ref_sign_with_ctx_str
#define FAEST_VERIFY_CTX OQS_SIG_faest_em_128s_ref_verify_with_ctx_str
#define FAEST_REF_BACKEND 1
extern int faest_em_128s_keygen(uint8_t *, uint8_t *);
extern int faest_em_128s_sign(const uint8_t *, const uint8_t *, size_t, uint8_t *, size_t *);
extern int faest_em_128s_verify(const uint8_t *, const uint8_t *, size_t, const uint8_t *, size_t);
#elif defined(OQS_FAEST_EM_128S_AVX2)
#define FAEST_METHOD_NAME OQS_SIG_alg_faest_em_128s_avx2
#define FAEST_LENGTH_PUBLIC_KEY OQS_SIG_faest_em_128s_avx2_length_public_key
#define FAEST_LENGTH_SECRET_KEY OQS_SIG_faest_em_128s_avx2_length_secret_key
#define FAEST_LENGTH_SIGNATURE OQS_SIG_faest_em_128s_avx2_length_signature
#define FAEST_NEW OQS_SIG_faest_em_128s_avx2_new
#define FAEST_KEYPAIR OQS_SIG_faest_em_128s_avx2_keypair
#define FAEST_SIGN OQS_SIG_faest_em_128s_avx2_sign
#define FAEST_VERIFY OQS_SIG_faest_em_128s_avx2_verify
#define FAEST_SIGN_CTX OQS_SIG_faest_em_128s_avx2_sign_with_ctx_str
#define FAEST_VERIFY_CTX OQS_SIG_faest_em_128s_avx2_verify_with_ctx_str
#define FAEST_REF_BACKEND 0
#define BACKEND_KEYPAIR oqs_sig_private_faest_em_128s_avx2_crypto_sign_keypair
#define BACKEND_SIGN oqs_sig_private_faest_em_128s_avx2_crypto_sign
#define BACKEND_OPEN oqs_sig_private_faest_em_128s_avx2_crypto_sign_open
extern int BACKEND_KEYPAIR(unsigned char *, unsigned char *);
extern int BACKEND_SIGN(unsigned char *, unsigned long long *, const unsigned char *, unsigned long long, const unsigned char *);
extern int BACKEND_OPEN(unsigned char *, unsigned long long *, const unsigned char *, unsigned long long, const unsigned char *);
#else
#error "FAEST wrapper compiled without REF/AVX2 selector"
#endif

OQS_SIG *FAEST_NEW(void) {
    OQS_SIG *sig = OQS_MEM_calloc(1, sizeof(OQS_SIG));
    if (sig == NULL) return NULL;
    sig->method_name = FAEST_METHOD_NAME;
    sig->alg_version = "3.0";
    sig->claimed_nist_level = 1;
    sig->euf_cma = true; sig->suf_cma = false; sig->sig_with_ctx_support = false;
    sig->length_public_key = FAEST_LENGTH_PUBLIC_KEY;
    sig->length_secret_key = FAEST_LENGTH_SECRET_KEY;
    sig->length_signature = FAEST_LENGTH_SIGNATURE;
    sig->keypair = FAEST_KEYPAIR; sig->sign = FAEST_SIGN; sig->verify = FAEST_VERIFY;
    sig->sign_with_ctx_str = FAEST_SIGN_CTX; sig->verify_with_ctx_str = FAEST_VERIFY_CTX;
    return sig;
}

OQS_API OQS_STATUS FAEST_KEYPAIR(uint8_t *pk, uint8_t *sk) {
    if (!pk || !sk) return OQS_ERROR;
#if FAEST_REF_BACKEND
    return faest_em_128s_keygen(pk, sk) == 0 ? OQS_SUCCESS : OQS_ERROR;
#else
    return BACKEND_KEYPAIR(pk, sk) == 0 ? OQS_SUCCESS : OQS_ERROR;
#endif
}

OQS_API OQS_STATUS FAEST_SIGN(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key) {
    if (!signature || !signature_len || !secret_key || (!message && message_len)) return OQS_ERROR;
#if FAEST_REF_BACKEND
    size_t len = FAEST_LENGTH_SIGNATURE;
    const uint8_t empty = 0; const uint8_t *msg = message_len ? message : &empty;
    int rc = faest_em_128s_sign(secret_key, msg, message_len, signature, &len);
    if (rc != 0 || len != FAEST_LENGTH_SIGNATURE) { *signature_len = 0; return OQS_ERROR; }
    *signature_len = len; return OQS_SUCCESS;
#else
    if (message_len > SIZE_MAX - FAEST_LENGTH_SIGNATURE) return OQS_ERROR;
    size_t total = message_len + FAEST_LENGTH_SIGNATURE;
    uint8_t *sm = OQS_MEM_malloc(total ? total : 1); if (!sm) return OQS_ERROR;
    const uint8_t empty = 0; const uint8_t *msg = message_len ? message : &empty; unsigned long long smlen = 0;
    int rc = BACKEND_SIGN(sm, &smlen, msg, (unsigned long long)message_len, secret_key);
    if (rc != 0 || smlen != (unsigned long long)total) { OQS_MEM_insecure_free(sm); *signature_len = 0; return OQS_ERROR; }
    memcpy(signature, sm + message_len, FAEST_LENGTH_SIGNATURE); *signature_len = FAEST_LENGTH_SIGNATURE; OQS_MEM_insecure_free(sm); return OQS_SUCCESS;
#endif
}

OQS_API OQS_STATUS FAEST_VERIFY(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key) {
    if (!signature || !public_key || (!message && message_len) || signature_len != FAEST_LENGTH_SIGNATURE) return OQS_ERROR;
#if FAEST_REF_BACKEND
    const uint8_t empty = 0; const uint8_t *msg = message_len ? message : &empty;
    return faest_em_128s_verify(public_key, msg, message_len, signature, signature_len) == 0 ? OQS_SUCCESS : OQS_ERROR;
#else
    if (message_len > SIZE_MAX - signature_len) return OQS_ERROR;
    size_t total = message_len + signature_len; uint8_t *sm = OQS_MEM_malloc(total ? total : 1); uint8_t *rec = OQS_MEM_malloc(message_len ? message_len : 1);
    if (!sm || !rec) { OQS_MEM_insecure_free(sm); OQS_MEM_insecure_free(rec); return OQS_ERROR; }
    if (message_len) memcpy(sm, message, message_len); memcpy(sm + message_len, signature, signature_len); unsigned long long rlen = 0;
    int rc = BACKEND_OPEN(rec, &rlen, sm, (unsigned long long)total, public_key);
    int bad = rc != 0 || rlen != (unsigned long long)message_len || (message_len && memcmp(rec, message, message_len) != 0);
    OQS_MEM_insecure_free(sm); OQS_MEM_insecure_free(rec); return bad ? OQS_ERROR : OQS_SUCCESS;
#endif
}

OQS_API OQS_STATUS FAEST_SIGN_CTX(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *ctx, size_t ctx_len, const uint8_t *sk) {
    (void)ctx; if (ctx_len != 0) return OQS_ERROR; return FAEST_SIGN(signature, signature_len, message, message_len, sk);
}
OQS_API OQS_STATUS FAEST_VERIFY_CTX(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *ctx, size_t ctx_len, const uint8_t *pk) {
    (void)ctx; if (ctx_len != 0) return OQS_ERROR; return FAEST_VERIFY(message, message_len, signature, signature_len, pk);
}
