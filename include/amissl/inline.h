/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (C) 1999-2006 Andrija Antonijevic, Stefan Burstroem
 Copyright (C) 2006-2016 AmiSSL Open Source Team

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 3 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 AmiSSL Official Support Site:  https://github.com/jens-maus/amissl

***************************************************************************/

#if !defined(AMISSL_INLINE_H) && !defined(AMISSL_COMPILE)
#define AMISSL_INLINE_H

# undef SKM_DEFINE_STACK_OF
# define SKM_DEFINE_STACK_OF(t1, t2, t3) \
    STACK_OF(t1); \
    static ossl_inline int sk_##t1##_num(const STACK_OF(t1) *sk) \
    { \
        return sk_num((_STACK *)sk); \
    } \
    static ossl_inline t2 *sk_##t1##_value(const STACK_OF(t1) *sk, int idx) \
    { \
        return (t2 *)sk_value((_STACK *)sk, idx); \
    } \
    static ossl_inline STACK_OF(t1) *sk_##t1##_new(int (*cmpf)(const t3 * const *a, const t3 * const *b)) \
    { \
        return (STACK_OF(t1) *)sk_new((int (*)(const void *a, const void *b))cmpf); \
    } \
    static ossl_inline STACK_OF(t1) *sk_##t1##_new_null(void) \
    { \
        return (STACK_OF(t1) *)sk_new_null(); \
    } \
    static ossl_inline void sk_##t1##_free(const STACK_OF(t1) *sk) \
    { \
        sk_free((_STACK *)sk); \
    } \
    static ossl_inline void sk_##t1##_zero(const STACK_OF(t1) *sk) \
    { \
        sk_zero((_STACK *)sk); \
    } \
    static ossl_inline t2 *sk_##t1##_delete(STACK_OF(t1) *sk, int i) \
    { \
        return (t2 *)sk_delete((_STACK *)sk, i); \
    } \
    static ossl_inline t2 *sk_##t1##_delete_ptr(STACK_OF(t1) *sk, t2 *ptr) \
    { \
        return (t2 *)sk_delete_ptr((_STACK *)sk, (void *)ptr); \
    } \
    static ossl_inline int sk_##t1##_push(STACK_OF(t1) *sk, t2 *ptr) \
    { \
        return sk_push((_STACK *)sk, (void *)ptr); \
    } \
    static ossl_inline int sk_##t1##_unshift(STACK_OF(t1) *sk, t2 *ptr) \
    { \
        return sk_unshift((_STACK *)sk, (void *)ptr); \
    } \
    static ossl_inline t2 *sk_##t1##_pop(STACK_OF(t1) *sk) \
    { \
        return (t2 *)sk_pop((_STACK *)sk); \
    } \
    static ossl_inline t2 *sk_##t1##_shift(STACK_OF(t1) *sk) \
    { \
        return (t2 *)sk_shift((_STACK *)sk); \
    } \
    static ossl_inline void sk_##t1##_pop_free(STACK_OF(t1) *sk, void (*func)(t3 *a)) \
    { \
        sk_pop_free((_STACK *)sk, (void (*)(void *))func); \
    } \
    static ossl_inline int sk_##t1##_insert(STACK_OF(t1) *sk, t2 *ptr, int idx) \
    { \
        return sk_insert((_STACK *)sk, (void *)ptr, idx); \
    } \
    static ossl_inline t2 *sk_##t1##_set(STACK_OF(t1) *sk, int idx, t2 *ptr) \
    { \
        return (t2 *)sk_set((_STACK *)sk, idx, (void *)ptr); \
    } \
    static ossl_inline int sk_##t1##_find(STACK_OF(t1) *sk, t2 *ptr) \
    { \
        return sk_find((_STACK *)sk, (void *)ptr); \
    } \
    static ossl_inline int sk_##t1##_find_ex(STACK_OF(t1) *sk, t2 *ptr) \
    { \
        return sk_find_ex((_STACK *)sk, (void *)ptr); \
    } \
    static ossl_inline void sk_##t1##_sort(const STACK_OF(t1) *sk) \
    { \
        sk_sort((_STACK *)sk); \
    } \
    static ossl_inline int sk_##t1##_is_sorted(const STACK_OF(t1) *sk) \
    { \
        return sk_is_sorted((_STACK *)sk); \
    } \
    static ossl_inline STACK_OF(t1) * sk_##t1##_dup(STACK_OF(t1) *sk) \
    { \
        return (STACK_OF(t1) *)sk_dup((_STACK *)sk); \
    } \
    static ossl_inline STACK_OF(t1) *sk_##t1##_deep_copy(STACK_OF(t1) *sk, \
                                                    t3 *(*copyfn)(const t3 *), \
                                                    void (*freefn)(t3 *)) \
    { \
        return (STACK_OF(t1) *)sk_deep_copy((_STACK *)sk, \
                                            (void * (*)(void *a))copyfn, \
                                            (void (*)(void *a))freefn); \
    } \
    static ossl_inline int (*sk_##t1##_set_cmp_func(STACK_OF(t1) *sk, int (*cmpf)(const t3 * const *a, const t3 * const *b)))(const t3 * const *, const t3 * const *) \
    { \
        return (int (*)(const t3 * const *,const t3 * const *))sk_set_cmp_func((_STACK *)sk, (int (*)(const void *a, const void *b))cmpf); \
    }

DEFINE_STACK_OF(X509_ALGOR)
DEFINE_STACK_OF(ASN1_STRING_TABLE)
DEFINE_STACK_OF(ASN1_INTEGER)
DEFINE_STACK_OF(ASN1_GENERALSTRING)
DEFINE_STACK_OF(ASN1_TYPE)
DEFINE_STACK_OF(ASN1_OBJECT)
DEFINE_STACK_OF(ASN1_VALUE)
DEFINE_STACK_OF(BIO)
DEFINE_STACK_OF(CMS_SignerInfo)
DEFINE_STACK_OF(CMS_RecipientEncryptedKey)
DEFINE_STACK_OF(CMS_RecipientInfo)
DEFINE_STACK_OF(CMS_RevocationInfoChoice)
DEFINE_STACK_OF(CONF_VALUE)
DEFINE_STACK_OF(CONF_MODULE)
DEFINE_STACK_OF(CONF_IMODULE)
DEFINE_STACK_OF(void)
DEFINE_STACK_OF(SCT)
DEFINE_STACK_OF(CTLOG)
DEFINE_STACK_OF(OCSP_CERTID)
DEFINE_STACK_OF(OCSP_ONEREQ)
DEFINE_STACK_OF(OCSP_RESPID)
DEFINE_STACK_OF(OCSP_SINGLERESP)
DEFINE_STACK_OF(PKCS12_SAFEBAG)
DEFINE_STACK_OF(PKCS7_SIGNER_INFO)
DEFINE_STACK_OF(PKCS7_RECIP_INFO)
DEFINE_STACK_OF(PKCS7)
DEFINE_STACK_OF(SRP_gN_cache)
DEFINE_STACK_OF(SRP_user_pwd)
DEFINE_STACK_OF(SRP_gN)
DEFINE_STACK_OF(SRTP_PROTECTION_PROFILE)
DEFINE_STACK_OF_CONST(SSL_CIPHER)
DEFINE_STACK_OF(SSL_COMP)
DEFINE_STACK_OF(ESS_CERT_ID)
DEFINE_STACK_OF(EVP_MD)
DEFINE_STACK_OF(UI_STRING)
DEFINE_STACK_OF(X509_NAME_ENTRY)
DEFINE_STACK_OF(X509_NAME)
DEFINE_STACK_OF(X509_EXTENSION)
DEFINE_STACK_OF(X509_ATTRIBUTE)
DEFINE_STACK_OF(X509)
DEFINE_STACK_OF(X509_TRUST)
DEFINE_STACK_OF(X509_REVOKED)
DEFINE_STACK_OF(X509_CRL)
DEFINE_STACK_OF(X509_INFO)
DEFINE_STACK_OF(X509_LOOKUP)
DEFINE_STACK_OF(X509_OBJECT)
DEFINE_STACK_OF(X509_VERIFY_PARAM)
DEFINE_STACK_OF(X509V3_EXT_METHOD)
DEFINE_STACK_OF(GENERAL_NAME)
DEFINE_STACK_OF(GENERAL_NAMES)
DEFINE_STACK_OF(ACCESS_DESCRIPTION)
DEFINE_STACK_OF(DIST_POINT)
DEFINE_STACK_OF(SXNETID)
DEFINE_STACK_OF(POLICYQUALINFO)
DEFINE_STACK_OF(POLICYINFO)
DEFINE_STACK_OF(POLICY_MAPPING)
DEFINE_STACK_OF(GENERAL_SUBTREE)
DEFINE_STACK_OF(X509_PURPOSE)
DEFINE_STACK_OF(X509_POLICY_NODE)
DEFINE_STACK_OF(ASIdOrRange)
DEFINE_STACK_OF(IPAddressOrRange)
DEFINE_STACK_OF(IPAddressFamily)
DEFINE_SPECIAL_STACK_OF(OPENSSL_PSTRING, OPENSSL_STRING)
DEFINE_SPECIAL_STACK_OF(OPENSSL_STRING, char)
DEFINE_SPECIAL_STACK_OF(OPENSSL_BLOCK, void)

# undef DEFINE_LHASH_OF
# define DEFINE_LHASH_OF(type) \
    LHASH_OF(type) { int dummy; }; \
    static ossl_inline LHASH_OF(type) * \
        lh_##type##_new(unsigned long (*hfn)(const type *), \
                        int (*cfn)(const type *, const type *)) \
    { \
        return (LHASH_OF(type) *) \
            lh_new((LHASH_HASH_FN_TYPE) hfn, (LHASH_COMP_FN_TYPE)cfn); \
    } \
    static ossl_inline void lh_##type##_free(LHASH_OF(type) *lh) \
    { \
        lh_free((_LHASH *)lh); \
    } \
    static ossl_inline type *lh_##type##_insert(LHASH_OF(type) *lh, type *d) \
    { \
        return (type *)lh_insert((_LHASH *)lh, d); \
    } \
    static ossl_inline type *lh_##type##_delete(LHASH_OF(type) *lh, const type *d) \
    { \
        return (type *)lh_delete((_LHASH *)lh, d); \
    } \
    static ossl_inline type *lh_##type##_retrieve(LHASH_OF(type) *lh, const type *d) \
    { \
        return (type *)lh_retrieve((_LHASH *)lh, d); \
    } \
    static ossl_inline int lh_##type##_error(LHASH_OF(type) *lh) \
    { \
        return lh_error((_LHASH *)lh); \
    } \
    static ossl_inline unsigned long lh_##type##_num_items(LHASH_OF(type) *lh) \
    { \
        return lh_num_items((_LHASH *)lh); \
    } \
    static ossl_inline void lh_##type##_node_stats_bio(const LHASH_OF(type) *lh, BIO *out) \
    { \
        lh_node_stats_bio((_LHASH *)lh, out); \
    } \
    static ossl_inline void lh_##type##_node_usage_stats_bio(const LHASH_OF(type) *lh, BIO *out) \
    { \
        lh_node_usage_stats_bio((_LHASH *)lh, out); \
    } \
    static ossl_inline void lh_##type##_stats_bio(const LHASH_OF(type) *lh, BIO *out) \
    { \
        lh_stats_bio((_LHASH *)lh, out); \
    } \
    static ossl_inline unsigned long lh_##type##_get_down_load(LHASH_OF(type) *lh) \
    { \
        return lh_get_down_load((_LHASH *)lh); \
    } \
    static ossl_inline void lh_##type##_set_down_load(LHASH_OF(type) *lh, unsigned long dl) \
    { \
        lh_set_down_load((_LHASH *)lh, dl); \
    } \
    static ossl_inline void lh_##type##_doall(LHASH_OF(type) *lh, \
                                         void (*doall)(type *)) \
    { \
        lh_doall((_LHASH *)lh, (LHASH_DOALL_FN_TYPE)doall); \
    } \
    LHASH_OF(type)

DEFINE_LHASH_OF(CONF_VALUE);
DEFINE_LHASH_OF(ERR_STRING_DATA);
DEFINE_LHASH_OF(OPENSSL_CSTRING);

#endif
