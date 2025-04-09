/* Automatically generated header (sfdc 1.12)! Do not edit! */

#ifndef _INLINE_AMISSLEXT_H
#define _INLINE_AMISSLEXT_H

#ifndef _SFDC_VARARG_DEFINED
#define _SFDC_VARARG_DEFINED
#ifdef __HAVE_IPTR_ATTR__
typedef APTR _sfdc_vararg __attribute__((iptr));
#else
typedef ULONG _sfdc_vararg;
#endif /* __HAVE_IPTR_ATTR__ */
#endif /* _SFDC_VARARG_DEFINED */

#ifndef __INLINE_MACROS_H
#include <inline/macros.h>
#endif /* !__INLINE_MACROS_H */

#ifndef AMISSLEXT_BASE_NAME
#define AMISSLEXT_BASE_NAME AmiSSLExtBase
#endif /* !AMISSLEXT_BASE_NAME */

#define OSSL_trace_enabled(___category) \
      LP1(0x1e, int, OSSL_trace_enabled , int, ___category, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_trace_begin(___category) \
      LP1(0x24, BIO *, OSSL_trace_begin , int, ___category, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_trace_end(___category, ___channel) \
      LP2NR(0x2a, OSSL_trace_end , int, ___category, d0, BIO *, ___channel, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_load(___a, ___name) \
      LP2(0x30, OSSL_PROVIDER *, OSSL_PROVIDER_load , OSSL_LIB_CTX *, ___a, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_try_load(___a, ___name, ___retain_fallbacks) \
      LP3(0x36, OSSL_PROVIDER *, OSSL_PROVIDER_try_load , OSSL_LIB_CTX *, ___a, a0, const char *, ___name, a1, int, ___retain_fallbacks, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_unload(___prov) \
      LP1(0x3c, int, OSSL_PROVIDER_unload , OSSL_PROVIDER *, ___prov, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_add_builtin(___a, ___name, ___init_fn) \
      LP3(0x42, int, OSSL_PROVIDER_add_builtin , OSSL_LIB_CTX *, ___a, a0, const char *, ___name, a1, OSSL_provider_init_fn *, ___init_fn, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_gettable_params(___prov) \
      LP1(0x48, const OSSL_PARAM *, OSSL_PROVIDER_gettable_params , const OSSL_PROVIDER *, ___prov, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_get_params(___prov, ___params) \
      LP2(0x4e, int, OSSL_PROVIDER_get_params , const OSSL_PROVIDER *, ___prov, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CRMF_ENCRYPTEDVALUE(___a, ___in, ___len) \
      LP3(0x54, OSSL_CRMF_ENCRYPTEDVALUE *, d2i_OSSL_CRMF_ENCRYPTEDVALUE , OSSL_CRMF_ENCRYPTEDVALUE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CRMF_ENCRYPTEDVALUE(___a, ___out) \
      LP2(0x5a, int, i2d_OSSL_CRMF_ENCRYPTEDVALUE , const OSSL_CRMF_ENCRYPTEDVALUE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ENCRYPTEDVALUE_free(___a) \
      LP1NR(0x60, OSSL_CRMF_ENCRYPTEDVALUE_free , OSSL_CRMF_ENCRYPTEDVALUE *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ENCRYPTEDVALUE_new() \
      LP0(0x66, OSSL_CRMF_ENCRYPTEDVALUE *, OSSL_CRMF_ENCRYPTEDVALUE_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ENCRYPTEDVALUE_it() \
      LP0(0x6c, const ASN1_ITEM *, OSSL_CRMF_ENCRYPTEDVALUE_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CRMF_MSG(___a, ___in, ___len) \
      LP3(0x72, OSSL_CRMF_MSG *, d2i_OSSL_CRMF_MSG , OSSL_CRMF_MSG **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CRMF_MSG(___a, ___out) \
      LP2(0x78, int, i2d_OSSL_CRMF_MSG , const OSSL_CRMF_MSG *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_dup(___a) \
      LP1(0x7e, OSSL_CRMF_MSG *, OSSL_CRMF_MSG_dup , const OSSL_CRMF_MSG *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_free(___a) \
      LP1NR(0x84, OSSL_CRMF_MSG_free , OSSL_CRMF_MSG *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_new() \
      LP0(0x8a, OSSL_CRMF_MSG *, OSSL_CRMF_MSG_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_it() \
      LP0(0x90, const ASN1_ITEM *, OSSL_CRMF_MSG_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CRMF_PBMPARAMETER(___a, ___in, ___len) \
      LP3(0x96, OSSL_CRMF_PBMPARAMETER *, d2i_OSSL_CRMF_PBMPARAMETER , OSSL_CRMF_PBMPARAMETER **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CRMF_PBMPARAMETER(___a, ___out) \
      LP2(0x9c, int, i2d_OSSL_CRMF_PBMPARAMETER , const OSSL_CRMF_PBMPARAMETER *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_PBMPARAMETER_free(___a) \
      LP1NR(0xa2, OSSL_CRMF_PBMPARAMETER_free , OSSL_CRMF_PBMPARAMETER *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_PBMPARAMETER_new() \
      LP0(0xa8, OSSL_CRMF_PBMPARAMETER *, OSSL_CRMF_PBMPARAMETER_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_PBMPARAMETER_it() \
      LP0(0xae, const ASN1_ITEM *, OSSL_CRMF_PBMPARAMETER_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CRMF_CERTID(___a, ___in, ___len) \
      LP3(0xb4, OSSL_CRMF_CERTID *, d2i_OSSL_CRMF_CERTID , OSSL_CRMF_CERTID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CRMF_CERTID(___a, ___out) \
      LP2(0xba, int, i2d_OSSL_CRMF_CERTID , const OSSL_CRMF_CERTID *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTID_dup(___a) \
      LP1(0xc0, OSSL_CRMF_CERTID *, OSSL_CRMF_CERTID_dup , const OSSL_CRMF_CERTID *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTID_free(___a) \
      LP1NR(0xc6, OSSL_CRMF_CERTID_free , OSSL_CRMF_CERTID *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTID_new() \
      LP0(0xcc, OSSL_CRMF_CERTID *, OSSL_CRMF_CERTID_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTID_it() \
      LP0(0xd2, const ASN1_ITEM *, OSSL_CRMF_CERTID_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CRMF_PKIPUBLICATIONINFO(___a, ___in, ___len) \
      LP3(0xd8, OSSL_CRMF_PKIPUBLICATIONINFO *, d2i_OSSL_CRMF_PKIPUBLICATIONINFO , OSSL_CRMF_PKIPUBLICATIONINFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CRMF_PKIPUBLICATIONINFO(___a, ___out) \
      LP2(0xde, int, i2d_OSSL_CRMF_PKIPUBLICATIONINFO , const OSSL_CRMF_PKIPUBLICATIONINFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_PKIPUBLICATIONINFO_free(___a) \
      LP1NR(0xe4, OSSL_CRMF_PKIPUBLICATIONINFO_free , OSSL_CRMF_PKIPUBLICATIONINFO *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_PKIPUBLICATIONINFO_new() \
      LP0(0xea, OSSL_CRMF_PKIPUBLICATIONINFO *, OSSL_CRMF_PKIPUBLICATIONINFO_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_PKIPUBLICATIONINFO_it() \
      LP0(0xf0, const ASN1_ITEM *, OSSL_CRMF_PKIPUBLICATIONINFO_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CRMF_SINGLEPUBINFO(___a, ___in, ___len) \
      LP3(0xf6, OSSL_CRMF_SINGLEPUBINFO *, d2i_OSSL_CRMF_SINGLEPUBINFO , OSSL_CRMF_SINGLEPUBINFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CRMF_SINGLEPUBINFO(___a, ___out) \
      LP2(0xfc, int, i2d_OSSL_CRMF_SINGLEPUBINFO , const OSSL_CRMF_SINGLEPUBINFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_SINGLEPUBINFO_free(___a) \
      LP1NR(0x102, OSSL_CRMF_SINGLEPUBINFO_free , OSSL_CRMF_SINGLEPUBINFO *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_SINGLEPUBINFO_new() \
      LP0(0x108, OSSL_CRMF_SINGLEPUBINFO *, OSSL_CRMF_SINGLEPUBINFO_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_SINGLEPUBINFO_it() \
      LP0(0x10e, const ASN1_ITEM *, OSSL_CRMF_SINGLEPUBINFO_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CRMF_CERTTEMPLATE(___a, ___in, ___len) \
      LP3(0x114, OSSL_CRMF_CERTTEMPLATE *, d2i_OSSL_CRMF_CERTTEMPLATE , OSSL_CRMF_CERTTEMPLATE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CRMF_CERTTEMPLATE(___a, ___out) \
      LP2(0x11a, int, i2d_OSSL_CRMF_CERTTEMPLATE , const OSSL_CRMF_CERTTEMPLATE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTTEMPLATE_free(___a) \
      LP1NR(0x120, OSSL_CRMF_CERTTEMPLATE_free , OSSL_CRMF_CERTTEMPLATE *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTTEMPLATE_new() \
      LP0(0x126, OSSL_CRMF_CERTTEMPLATE *, OSSL_CRMF_CERTTEMPLATE_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTTEMPLATE_it() \
      LP0(0x12c, const ASN1_ITEM *, OSSL_CRMF_CERTTEMPLATE_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CRMF_MSGS(___a, ___in, ___len) \
      LP3(0x132, OSSL_CRMF_MSGS *, d2i_OSSL_CRMF_MSGS , OSSL_CRMF_MSGS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CRMF_MSGS(___a, ___out) \
      LP2(0x138, int, i2d_OSSL_CRMF_MSGS , const OSSL_CRMF_MSGS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSGS_free(___a) \
      LP1NR(0x13e, OSSL_CRMF_MSGS_free , OSSL_CRMF_MSGS *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSGS_new() \
      LP0(0x144, OSSL_CRMF_MSGS *, OSSL_CRMF_MSGS_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSGS_it() \
      LP0(0x14a, const ASN1_ITEM *, OSSL_CRMF_MSGS_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_pbmp_new(___libctx, ___slen, ___owfnid, ___itercnt, ___macnid) \
      LP5(0x150, OSSL_CRMF_PBMPARAMETER *, OSSL_CRMF_pbmp_new , OSSL_LIB_CTX *, ___libctx, a0, size_t, ___slen, d0, int, ___owfnid, d1, size_t, ___itercnt, d2, int, ___macnid, d3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_pbm_new(___libctx, ___propq, ___pbmp, ___msg, ___msglen, ___sec, ___seclen, ___mac, ___maclen) \
      LP9(0x156, int, OSSL_CRMF_pbm_new , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1, const OSSL_CRMF_PBMPARAMETER *, ___pbmp, a2, const unsigned char *, ___msg, a3, size_t, ___msglen, d0, const unsigned char *, ___sec, d1, size_t, ___seclen, d2, unsigned char **, ___mac, d3, size_t *, ___maclen, d4,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_get0_regCtrl_regToken(___msg) \
      LP1(0x15c, ASN1_UTF8STRING *, OSSL_CRMF_MSG_get0_regCtrl_regToken , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_set1_regCtrl_regToken(___msg, ___tok) \
      LP2(0x162, int, OSSL_CRMF_MSG_set1_regCtrl_regToken , OSSL_CRMF_MSG *, ___msg, a0, const ASN1_UTF8STRING *, ___tok, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_get0_regCtrl_authenticator(___msg) \
      LP1(0x168, ASN1_UTF8STRING *, OSSL_CRMF_MSG_get0_regCtrl_authenticator , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_set1_regCtrl_authenticator(___msg, ___auth) \
      LP2(0x16e, int, OSSL_CRMF_MSG_set1_regCtrl_authenticator , OSSL_CRMF_MSG *, ___msg, a0, const ASN1_UTF8STRING *, ___auth, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo(___pi, ___spi) \
      LP2(0x174, int, OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo , OSSL_CRMF_PKIPUBLICATIONINFO *, ___pi, a0, OSSL_CRMF_SINGLEPUBINFO *, ___spi, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_set0_SinglePubInfo(___spi, ___method, ___nm) \
      LP3(0x17a, int, OSSL_CRMF_MSG_set0_SinglePubInfo , OSSL_CRMF_SINGLEPUBINFO *, ___spi, a0, int, ___method, d0, GENERAL_NAME *, ___nm, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo(___msg) \
      LP1(0x180, OSSL_CRMF_PKIPUBLICATIONINFO *, OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_set_PKIPublicationInfo_action(___pi, ___action) \
      LP2(0x186, int, OSSL_CRMF_MSG_set_PKIPublicationInfo_action , OSSL_CRMF_PKIPUBLICATIONINFO *, ___pi, a0, int, ___action, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo(___msg, ___pi) \
      LP2(0x18c, int, OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo , OSSL_CRMF_MSG *, ___msg, a0, const OSSL_CRMF_PKIPUBLICATIONINFO *, ___pi, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey(___msg) \
      LP1(0x192, X509_PUBKEY *, OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey(___msg, ___pubkey) \
      LP2(0x198, int, OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey , OSSL_CRMF_MSG *, ___msg, a0, const X509_PUBKEY *, ___pubkey, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_get0_regCtrl_oldCertID(___msg) \
      LP1(0x19e, OSSL_CRMF_CERTID *, OSSL_CRMF_MSG_get0_regCtrl_oldCertID , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_set1_regCtrl_oldCertID(___msg, ___cid) \
      LP2(0x1a4, int, OSSL_CRMF_MSG_set1_regCtrl_oldCertID , OSSL_CRMF_MSG *, ___msg, a0, const OSSL_CRMF_CERTID *, ___cid, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTID_gen(___issuer, ___serial) \
      LP2(0x1aa, OSSL_CRMF_CERTID *, OSSL_CRMF_CERTID_gen , const X509_NAME *, ___issuer, a0, const ASN1_INTEGER *, ___serial, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_get0_regInfo_utf8Pairs(___msg) \
      LP1(0x1b0, ASN1_UTF8STRING *, OSSL_CRMF_MSG_get0_regInfo_utf8Pairs , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_set1_regInfo_utf8Pairs(___msg, ___utf8pairs) \
      LP2(0x1b6, int, OSSL_CRMF_MSG_set1_regInfo_utf8Pairs , OSSL_CRMF_MSG *, ___msg, a0, const ASN1_UTF8STRING *, ___utf8pairs, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_get0_regInfo_certReq(___msg) \
      LP1(0x1bc, OSSL_CRMF_CERTREQUEST *, OSSL_CRMF_MSG_get0_regInfo_certReq , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_set1_regInfo_certReq(___msg, ___cr) \
      LP2(0x1c2, int, OSSL_CRMF_MSG_set1_regInfo_certReq , OSSL_CRMF_MSG *, ___msg, a0, const OSSL_CRMF_CERTREQUEST *, ___cr, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_set0_validity(___crm, ___notBefore, ___notAfter) \
      LP3(0x1c8, int, OSSL_CRMF_MSG_set0_validity , OSSL_CRMF_MSG *, ___crm, a0, ASN1_TIME *, ___notBefore, a1, ASN1_TIME *, ___notAfter, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_set_certReqId(___crm, ___rid) \
      LP2(0x1ce, int, OSSL_CRMF_MSG_set_certReqId , OSSL_CRMF_MSG *, ___crm, a0, int, ___rid, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_get_certReqId(___crm) \
      LP1(0x1d4, int, OSSL_CRMF_MSG_get_certReqId , const OSSL_CRMF_MSG *, ___crm, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_set0_extensions(___crm, ___exts) \
      LP2(0x1da, int, OSSL_CRMF_MSG_set0_extensions , OSSL_CRMF_MSG *, ___crm, a0, X509_EXTENSIONS *, ___exts, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_push0_extension(___crm, ___ext) \
      LP2(0x1e0, int, OSSL_CRMF_MSG_push0_extension , OSSL_CRMF_MSG *, ___crm, a0, X509_EXTENSION *, ___ext, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_create_popo(___meth, ___crm, ___pkey, ___digest, ___libctx, ___propq) \
      LP6(0x1e6, int, OSSL_CRMF_MSG_create_popo , int, ___meth, d0, OSSL_CRMF_MSG *, ___crm, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___digest, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSGS_verify_popo(___reqs, ___rid, ___acceptRAVerified, ___libctx, ___propq) \
      LP5(0x1ec, int, OSSL_CRMF_MSGS_verify_popo , const OSSL_CRMF_MSGS *, ___reqs, a0, int, ___rid, d0, int, ___acceptRAVerified, d1, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_get0_tmpl(___crm) \
      LP1(0x1f2, OSSL_CRMF_CERTTEMPLATE *, OSSL_CRMF_MSG_get0_tmpl , const OSSL_CRMF_MSG *, ___crm, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(___tmpl) \
      LP1(0x1f8, const ASN1_INTEGER *, OSSL_CRMF_CERTTEMPLATE_get0_serialNumber , const OSSL_CRMF_CERTTEMPLATE *, ___tmpl, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTTEMPLATE_get0_subject(___tmpl) \
      LP1(0x1fe, const X509_NAME *, OSSL_CRMF_CERTTEMPLATE_get0_subject , const OSSL_CRMF_CERTTEMPLATE *, ___tmpl, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTTEMPLATE_get0_issuer(___tmpl) \
      LP1(0x204, const X509_NAME *, OSSL_CRMF_CERTTEMPLATE_get0_issuer , const OSSL_CRMF_CERTTEMPLATE *, ___tmpl, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTTEMPLATE_get0_extensions(___tmpl) \
      LP1(0x20a, X509_EXTENSIONS *, OSSL_CRMF_CERTTEMPLATE_get0_extensions , const OSSL_CRMF_CERTTEMPLATE *, ___tmpl, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTTEMPLATE_fill(___tmpl, ___pubkey, ___subject, ___issuer, ___serial) \
      LP5(0x210, int, OSSL_CRMF_CERTTEMPLATE_fill , OSSL_CRMF_CERTTEMPLATE *, ___tmpl, a0, EVP_PKEY *, ___pubkey, a1, const X509_NAME *, ___subject, a2, const X509_NAME *, ___issuer, a3, const ASN1_INTEGER *, ___serial, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert(___ecert, ___libctx, ___propq, ___pkey) \
      LP4(0x216, X509 *, OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert , const OSSL_CRMF_ENCRYPTEDVALUE *, ___ecert, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2, EVP_PKEY *, ___pkey, a3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_locate(___p, ___key) \
      LP2(0x21c, OSSL_PARAM *, OSSL_PARAM_locate , OSSL_PARAM *, ___p, a0, const char *, ___key, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_int_amiga(___result, ___key, ___buf) \
      LP3NR(0x222, OSSL_PARAM_construct_int_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, int *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_uint_amiga(___result, ___key, ___buf) \
      LP3NR(0x228, OSSL_PARAM_construct_uint_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, unsigned int *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_long_amiga(___result, ___key, ___buf) \
      LP3NR(0x22e, OSSL_PARAM_construct_long_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, long int *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_ulong_amiga(___result, ___key, ___buf) \
      LP3NR(0x234, OSSL_PARAM_construct_ulong_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, unsigned long int *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_int32_amiga(___result, ___key, ___buf) \
      LP3NR(0x23a, OSSL_PARAM_construct_int32_amiga , OSSL_PARAM *, ___result, a1, const char *, ___key, a2, int32_t *, ___buf, a3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_uint32_amiga(___result, ___key, ___buf) \
      LP3NR(0x240, OSSL_PARAM_construct_uint32_amiga , OSSL_PARAM *, ___result, a1, const char *, ___key, a2, uint32_t *, ___buf, a3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_int64_amiga(___result, ___key, ___buf) \
      LP3NR(0x246, OSSL_PARAM_construct_int64_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, int64_t *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_uint64_amiga(___result, ___key, ___buf) \
      LP3NR(0x24c, OSSL_PARAM_construct_uint64_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, uint64_t *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_size_t_amiga(___result, ___key, ___buf) \
      LP3NR(0x252, OSSL_PARAM_construct_size_t_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, size_t *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_BN_amiga(___result, ___key, ___buf, ___bsize) \
      LP4NR(0x258, OSSL_PARAM_construct_BN_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, unsigned char *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_double_amiga(___result, ___key, ___buf) \
      LP3NR(0x25e, OSSL_PARAM_construct_double_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, double *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_utf8_string_amiga(___result, ___key, ___buf, ___bsize) \
      LP4NR(0x264, OSSL_PARAM_construct_utf8_string_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, char *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_utf8_ptr_amiga(___result, ___key, ___buf, ___bsize) \
      LP4NR(0x26a, OSSL_PARAM_construct_utf8_ptr_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, char **, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_octet_string_amiga(___result, ___key, ___buf, ___bsize) \
      LP4NR(0x270, OSSL_PARAM_construct_octet_string_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, void *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_octet_ptr_amiga(___result, ___key, ___buf, ___bsize) \
      LP4NR(0x276, OSSL_PARAM_construct_octet_ptr_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, void **, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_int(___p, ___val) \
      LP2(0x27c, int, OSSL_PARAM_get_int , const OSSL_PARAM *, ___p, a0, int *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_uint(___p, ___val) \
      LP2(0x282, int, OSSL_PARAM_get_uint , const OSSL_PARAM *, ___p, a0, unsigned int *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_long(___p, ___val) \
      LP2(0x288, int, OSSL_PARAM_get_long , const OSSL_PARAM *, ___p, a0, long int *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_ulong(___p, ___val) \
      LP2(0x28e, int, OSSL_PARAM_get_ulong , const OSSL_PARAM *, ___p, a0, unsigned long int *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_int32(___p, ___val) \
      LP2(0x294, int, OSSL_PARAM_get_int32 , const OSSL_PARAM *, ___p, a0, int32_t *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_uint32(___p, ___val) \
      LP2(0x29a, int, OSSL_PARAM_get_uint32 , const OSSL_PARAM *, ___p, a0, uint32_t *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_int64(___p, ___val) \
      LP2(0x2a0, int, OSSL_PARAM_get_int64 , const OSSL_PARAM *, ___p, a0, int64_t *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_uint64(___p, ___val) \
      LP2(0x2a6, int, OSSL_PARAM_get_uint64 , const OSSL_PARAM *, ___p, a0, uint64_t *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_size_t(___p, ___val) \
      LP2(0x2ac, int, OSSL_PARAM_get_size_t , const OSSL_PARAM *, ___p, a0, size_t *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_int(___p, ___val) \
      LP2(0x2b2, int, OSSL_PARAM_set_int , OSSL_PARAM *, ___p, a0, int, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_uint(___p, ___val) \
      LP2(0x2b8, int, OSSL_PARAM_set_uint , OSSL_PARAM *, ___p, a0, unsigned int, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_long(___p, ___val) \
      LP2(0x2be, int, OSSL_PARAM_set_long , OSSL_PARAM *, ___p, a0, long int, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_ulong(___p, ___val) \
      LP2(0x2c4, int, OSSL_PARAM_set_ulong , OSSL_PARAM *, ___p, a0, unsigned long int, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_int32(___p, ___val) \
      LP2(0x2ca, int, OSSL_PARAM_set_int32 , OSSL_PARAM *, ___p, a0, int32_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_uint32(___p, ___val) \
      LP2(0x2d0, int, OSSL_PARAM_set_uint32 , OSSL_PARAM *, ___p, a0, uint32_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_int64(___p, ___val) \
      LP2(0x2d6, int, OSSL_PARAM_set_int64 , OSSL_PARAM *, ___p, a0, int64_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_uint64(___p, ___val) \
      LP2(0x2dc, int, OSSL_PARAM_set_uint64 , OSSL_PARAM *, ___p, a0, uint64_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_size_t(___p, ___val) \
      LP2(0x2e2, int, OSSL_PARAM_set_size_t , OSSL_PARAM *, ___p, a0, size_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_double(___p, ___val) \
      LP2(0x2e8, int, OSSL_PARAM_get_double , const OSSL_PARAM *, ___p, a0, double *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_double(___p, ___val) \
      LP2(0x2ee, int, OSSL_PARAM_set_double , OSSL_PARAM *, ___p, a0, double, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_BN(___p, ___val) \
      LP2(0x2f4, int, OSSL_PARAM_get_BN , const OSSL_PARAM *, ___p, a0, BIGNUM **, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_BN(___p, ___val) \
      LP2(0x2fa, int, OSSL_PARAM_set_BN , OSSL_PARAM *, ___p, a0, const BIGNUM *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_utf8_string(___p, ___val, ___max_len) \
      LP3(0x300, int, OSSL_PARAM_get_utf8_string , const OSSL_PARAM *, ___p, a0, char **, ___val, a1, size_t, ___max_len, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_utf8_string(___p, ___val) \
      LP2(0x306, int, OSSL_PARAM_set_utf8_string , OSSL_PARAM *, ___p, a0, const char *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_octet_string(___p, ___val, ___max_len, ___used_len) \
      LP4(0x30c, int, OSSL_PARAM_get_octet_string , const OSSL_PARAM *, ___p, a0, void **, ___val, a1, size_t, ___max_len, d0, size_t *, ___used_len, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_octet_string(___p, ___val, ___len) \
      LP3(0x312, int, OSSL_PARAM_set_octet_string , OSSL_PARAM *, ___p, a0, const void *, ___val, a1, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_utf8_ptr(___p, ___val) \
      LP2(0x318, int, OSSL_PARAM_get_utf8_ptr , const OSSL_PARAM *, ___p, a0, const char **, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_utf8_ptr(___p, ___val) \
      LP2(0x31e, int, OSSL_PARAM_set_utf8_ptr , OSSL_PARAM *, ___p, a0, const char *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_octet_ptr(___p, ___val, ___used_len) \
      LP3(0x324, int, OSSL_PARAM_get_octet_ptr , const OSSL_PARAM *, ___p, a0, const void **, ___val, a1, size_t *, ___used_len, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_octet_ptr(___p, ___val, ___used_len) \
      LP3(0x32a, int, OSSL_PARAM_set_octet_ptr , OSSL_PARAM *, ___p, a0, const void *, ___val, a1, size_t, ___used_len, d0,\
      , AMISSLEXT_BASE_NAME)

#define X509_set0_distinguishing_id(___x, ___d_id) \
      LP2NR(0x330, X509_set0_distinguishing_id , X509 *, ___x, a0, ASN1_OCTET_STRING *, ___d_id, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_get0_distinguishing_id(___x) \
      LP1(0x336, ASN1_OCTET_STRING *, X509_get0_distinguishing_id , X509 *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_up_ref(___md) \
      LP1(0x33c, int, EVP_MD_up_ref , EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x342, EVP_MD *, EVP_MD_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_set_default_properties(___libctx, ___propq) \
      LP2(0x348, int, EVP_set_default_properties , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_end_amiga(___result) \
      LP1NR(0x34e, OSSL_PARAM_construct_end_amiga , OSSL_PARAM *, ___result, a0,\
      , AMISSLEXT_BASE_NAME)

#define EC_GROUP_check_named_curve(___group, ___nist_only, ___ctx) \
      LP3(0x354, int, EC_GROUP_check_named_curve , const EC_GROUP *, ___group, a0, int, ___nist_only, d0, BN_CTX *, ___ctx, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_up_ref(___cipher) \
      LP1(0x35a, int, EVP_CIPHER_up_ref , EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x360, EVP_CIPHER *, EVP_CIPHER_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_get_mode(___cipher) \
      LP1(0x366, int, EVP_CIPHER_get_mode , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define OPENSSL_info(___type) \
      LP1(0x36c, const char *, OPENSSL_info , int, ___type, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_CTX_new(___kdf) \
      LP1(0x372, EVP_KDF_CTX *, EVP_KDF_CTX_new , EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_CTX_kdf(___ctx) \
      LP1(0x378, const EVP_KDF *, EVP_KDF_CTX_kdf , EVP_KDF_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_KeyParams(___a, ___pp) \
      LP2(0x37e, int, i2d_KeyParams , const EVP_PKEY *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSLEXT_BASE_NAME)

#define d2i_KeyParams(___type, ___a, ___pp, ___length) \
      LP4(0x384, EVP_PKEY *, d2i_KeyParams , int, ___type, d0, EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d1,\
      , AMISSLEXT_BASE_NAME)

#define i2d_KeyParams_bio(___bp, ___pkey) \
      LP2(0x38a, int, i2d_KeyParams_bio , BIO *, ___bp, a0, const EVP_PKEY *, ___pkey, a1,\
      , AMISSLEXT_BASE_NAME)

#define d2i_KeyParams_bio(___type, ___a, ___in) \
      LP3(0x390, EVP_PKEY *, d2i_KeyParams_bio , int, ___type, d0, EVP_PKEY **, ___a, a0, BIO *, ___in, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_PKISTATUS_it() \
      LP0(0x396, const ASN1_ITEM *, OSSL_CMP_PKISTATUS_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CMP_PKIHEADER(___a, ___in, ___len) \
      LP3(0x39c, OSSL_CMP_PKIHEADER *, d2i_OSSL_CMP_PKIHEADER , OSSL_CMP_PKIHEADER **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CMP_PKIHEADER(___a, ___out) \
      LP2(0x3a2, int, i2d_OSSL_CMP_PKIHEADER , const OSSL_CMP_PKIHEADER *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_PKIHEADER_free(___a) \
      LP1NR(0x3a8, OSSL_CMP_PKIHEADER_free , OSSL_CMP_PKIHEADER *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_PKIHEADER_new() \
      LP0(0x3ae, OSSL_CMP_PKIHEADER *, OSSL_CMP_PKIHEADER_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_PKIHEADER_it() \
      LP0(0x3b4, const ASN1_ITEM *, OSSL_CMP_PKIHEADER_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CMP_MSG(___a, ___in, ___len) \
      LP3(0x3ba, OSSL_CMP_MSG *, d2i_OSSL_CMP_MSG , OSSL_CMP_MSG **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CMP_MSG(___a, ___out) \
      LP2(0x3c0, int, i2d_OSSL_CMP_MSG , const OSSL_CMP_MSG *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_MSG_it() \
      LP0(0x3c6, const ASN1_ITEM *, OSSL_CMP_MSG_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_create(___type, ___value) \
      LP2(0x3cc, OSSL_CMP_ITAV *, OSSL_CMP_ITAV_create , ASN1_OBJECT *, ___type, a0, ASN1_TYPE *, ___value, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_set0(___itav, ___type, ___value) \
      LP3NR(0x3d2, OSSL_CMP_ITAV_set0 , OSSL_CMP_ITAV *, ___itav, a0, ASN1_OBJECT *, ___type, a1, ASN1_TYPE *, ___value, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_get0_type(___itav) \
      LP1(0x3d8, ASN1_OBJECT *, OSSL_CMP_ITAV_get0_type , const OSSL_CMP_ITAV *, ___itav, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_get0_value(___itav) \
      LP1(0x3de, ASN1_TYPE *, OSSL_CMP_ITAV_get0_value , const OSSL_CMP_ITAV *, ___itav, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_push0_stack_item(___itav_sk_p, ___itav) \
      LP2(0x3e4, int, OSSL_CMP_ITAV_push0_stack_item , STACK_OF(OSSL_CMP_ITAV) **, ___itav_sk_p, a0, OSSL_CMP_ITAV *, ___itav, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_free(___itav) \
      LP1NR(0x3ea, OSSL_CMP_ITAV_free , OSSL_CMP_ITAV *, ___itav, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_MSG_free(___msg) \
      LP1NR(0x3f0, OSSL_CMP_MSG_free , OSSL_CMP_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_CTX_set_params(___ctx, ___params) \
      LP2(0x3f6, int, EVP_MD_CTX_set_params , EVP_MD_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_CTX_get_params(___ctx, ___params) \
      LP2(0x3fc, int, EVP_MD_CTX_get_params , EVP_MD_CTX *, ___ctx, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define BN_CTX_new_ex(___ctx) \
      LP1(0x402, BN_CTX *, BN_CTX_new_ex , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define BN_CTX_secure_new_ex(___ctx) \
      LP1(0x408, BN_CTX *, BN_CTX_secure_new_ex , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OPENSSL_thread_stop_ex(___ctx) \
      LP1NR(0x40e, OPENSSL_thread_stop_ex , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_locate_const(___p, ___key) \
      LP2(0x414, const OSSL_PARAM *, OSSL_PARAM_locate_const , const OSSL_PARAM *, ___p, a0, const char *, ___key, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_REQ_set0_distinguishing_id(___x, ___d_id) \
      LP2NR(0x41a, X509_REQ_set0_distinguishing_id , X509_REQ *, ___x, a0, ASN1_OCTET_STRING *, ___d_id, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_REQ_get0_distinguishing_id(___x) \
      LP1(0x420, ASN1_OCTET_STRING *, X509_REQ_get0_distinguishing_id , X509_REQ *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define BN_rand_ex(___rnd, ___bits, ___top, ___bottom, ___strength, ___ctx) \
      LP6(0x426, int, BN_rand_ex , BIGNUM *, ___rnd, a0, int, ___bits, d0, int, ___top, d1, int, ___bottom, d2, unsigned int, ___strength, d3, BN_CTX *, ___ctx, a1,\
      , AMISSLEXT_BASE_NAME)

#define BN_priv_rand_ex(___rnd, ___bits, ___top, ___bottom, ___strength, ___ctx) \
      LP6(0x42c, int, BN_priv_rand_ex , BIGNUM *, ___rnd, a0, int, ___bits, d0, int, ___top, d1, int, ___bottom, d2, unsigned int, ___strength, d3, BN_CTX *, ___ctx, a1,\
      , AMISSLEXT_BASE_NAME)

#define BN_rand_range_ex(___r, ___range, ___strength, ___ctx) \
      LP4(0x432, int, BN_rand_range_ex , BIGNUM *, ___r, a0, const BIGNUM *, ___range, a1, unsigned int, ___strength, d0, BN_CTX *, ___ctx, a2,\
      , AMISSLEXT_BASE_NAME)

#define BN_priv_rand_range_ex(___r, ___range, ___strength, ___ctx) \
      LP4(0x438, int, BN_priv_rand_range_ex , BIGNUM *, ___r, a0, const BIGNUM *, ___range, a1, unsigned int, ___strength, d0, BN_CTX *, ___ctx, a2,\
      , AMISSLEXT_BASE_NAME)

#define BN_generate_prime_ex2(___ret, ___bits, ___safe, ___add, ___rem, ___cb, ___ctx) \
      LP7(0x43e, int, BN_generate_prime_ex2 , BIGNUM *, ___ret, a0, int, ___bits, d0, int, ___safe, d1, const BIGNUM *, ___add, a1, const BIGNUM *, ___rem, a2, BN_GENCB *, ___cb, a3, BN_CTX *, ___ctx, d2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYEXCH_free(___exchange) \
      LP1NR(0x444, EVP_KEYEXCH_free , EVP_KEYEXCH *, ___exchange, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYEXCH_up_ref(___exchange) \
      LP1(0x44a, int, EVP_KEYEXCH_up_ref , EVP_KEYEXCH *, ___exchange, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYEXCH_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x450, EVP_KEYEXCH *, EVP_KEYEXCH_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dh_pad(___ctx, ___pad) \
      LP2(0x456, int, EVP_PKEY_CTX_set_dh_pad , EVP_PKEY_CTX *, ___ctx, a0, int, ___pad, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_params(___ctx, ___params) \
      LP2(0x45c, int, EVP_PKEY_CTX_set_params , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYMGMT_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x462, EVP_KEYMGMT *, EVP_KEYMGMT_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYMGMT_up_ref(___keymgmt) \
      LP1(0x468, int, EVP_KEYMGMT_up_ref , EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYMGMT_free(___keymgmt) \
      LP1NR(0x46e, EVP_KEYMGMT_free , EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYMGMT_get0_provider(___keymgmt) \
      LP1(0x474, const OSSL_PROVIDER *, EVP_KEYMGMT_get0_provider , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_PUBKEY_dup(___a) \
      LP1(0x47a, X509_PUBKEY *, X509_PUBKEY_dup , const X509_PUBKEY *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_get0_name(___md) \
      LP1(0x480, const char *, EVP_MD_get0_name , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_get0_name(___cipher) \
      LP1(0x486, const char *, EVP_CIPHER_get0_name , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_get0_provider(___md) \
      LP1(0x48c, const OSSL_PROVIDER *, EVP_MD_get0_provider , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_get0_provider(___cipher) \
      LP1(0x492, const OSSL_PROVIDER *, EVP_CIPHER_get0_provider , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_get0_name(___prov) \
      LP1(0x498, const char *, OSSL_PROVIDER_get0_name , const OSSL_PROVIDER *, ___prov, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x49e, EVP_CIPHER_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_CIPHER *cipher,void *arg))

#define EVP_MD_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x4a4, EVP_MD_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_MD *md,void *arg))

#define EVP_KEYEXCH_get0_provider(___exchange) \
      LP1(0x4aa, OSSL_PROVIDER *, EVP_KEYEXCH_get0_provider , const EVP_KEYEXCH *, ___exchange, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_available(___a, ___name) \
      LP2(0x4b0, int, OSSL_PROVIDER_available , OSSL_LIB_CTX *, ___a, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define ERR_new() \
      LP0NR(0x4b6, ERR_new ,\
      , AMISSLEXT_BASE_NAME)

#define ERR_set_debug(___file, ___line, ___func) \
      LP3NR(0x4bc, ERR_set_debug , const char *, ___file, a0, int, ___line, d0, const char *, ___func, a1,\
      , AMISSLEXT_BASE_NAME)

#define ERR_vset_error(___lib, ___reason, ___fmt, ___args) \
      LP4NR(0x4c2, ERR_vset_error , int, ___lib, d0, int, ___reason, d1, const char *, ___fmt, a0, va_list, ___args, a1,\
      , AMISSLEXT_BASE_NAME)

#ifndef NO_INLINE_VARARGS
#define ERR_set_error(___lib, ___reason, ___fmt, ___dummy, ...) \
    ({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; ERR_vset_error((___lib), (___reason), (___fmt), (va_list) _message); })
#endif /* !NO_INLINE_VARARGS */

#define X509_self_signed(___cert, ___verify_signature) \
      LP2(0x4c8, int, X509_self_signed , X509 *, ___cert, a0, int, ___verify_signature, d0,\
      , AMISSLEXT_BASE_NAME)

#define OPENSSL_hexstr2buf_ex(___buf, ___buf_n, ___buflen, ___str, ___sep) \
      LP5(0x4ce, int, OPENSSL_hexstr2buf_ex , unsigned char *, ___buf, a0, size_t, ___buf_n, d0, size_t *, ___buflen, a1, const char *, ___str, a2, const char, ___sep, d1,\
      , AMISSLEXT_BASE_NAME)

#define OPENSSL_buf2hexstr_ex(___str, ___str_n, ___strlength, ___buf, ___buflen, ___sep) \
      LP6(0x4d4, int, OPENSSL_buf2hexstr_ex , char *, ___str, a0, size_t, ___str_n, d0, size_t *, ___strlength, a1, const unsigned char *, ___buf, a2, size_t, ___buflen, d1, const char, ___sep, d2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_allocate_from_text(___to, ___paramdefs, ___key, ___value, ___value_n, ___found) \
      LP6(0x4da, int, OSSL_PARAM_allocate_from_text , OSSL_PARAM *, ___to, a0, const OSSL_PARAM *, ___paramdefs, a1, const char *, ___key, a2, const char *, ___value, a3, size_t, ___value_n, d0, int *, ___found, d1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_gettable_params(___digest) \
      LP1(0x4e0, const OSSL_PARAM *, EVP_MD_gettable_params , const EVP_MD *, ___digest, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_CTX_settable_params(___ctx) \
      LP1(0x4e6, const OSSL_PARAM *, EVP_MD_CTX_settable_params , EVP_MD_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_CTX_gettable_params(___ctx) \
      LP1(0x4ec, const OSSL_PARAM *, EVP_MD_CTX_gettable_params , EVP_MD_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_get_params(___cipher, ___params) \
      LP2(0x4f2, int, EVP_CIPHER_get_params , EVP_CIPHER *, ___cipher, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_set_params(___ctx, ___params) \
      LP2(0x4f8, int, EVP_CIPHER_CTX_set_params , EVP_CIPHER_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_get_params(___ctx, ___params) \
      LP2(0x4fe, int, EVP_CIPHER_CTX_get_params , EVP_CIPHER_CTX *, ___ctx, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_gettable_params(___cipher) \
      LP1(0x504, const OSSL_PARAM *, EVP_CIPHER_gettable_params , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_settable_ctx_params(___cipher) \
      LP1(0x50a, const OSSL_PARAM *, EVP_CIPHER_settable_ctx_params , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_gettable_ctx_params(___cipher) \
      LP1(0x510, const OSSL_PARAM *, EVP_CIPHER_gettable_ctx_params , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_get_params(___digest, ___params) \
      LP2(0x516, int, EVP_MD_get_params , const EVP_MD *, ___digest, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_fetch(___libctx, ___algorithm, ___properties) \
      LP3(0x51c, EVP_MAC *, EVP_MAC_fetch , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_settable_ctx_params(___mac) \
      LP1(0x522, const OSSL_PARAM *, EVP_MAC_settable_ctx_params , const EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_CTX_set_params(___ctx, ___params) \
      LP2(0x528, int, EVP_MAC_CTX_set_params , EVP_MAC_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_CTX_get_params(___ctx, ___params) \
      LP2(0x52e, int, EVP_MAC_CTX_get_params , EVP_MAC_CTX *, ___ctx, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_gettable_ctx_params(___mac) \
      LP1(0x534, const OSSL_PARAM *, EVP_MAC_gettable_ctx_params , const EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_free(___mac) \
      LP1NR(0x53a, EVP_MAC_free , EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_up_ref(___mac) \
      LP1(0x540, int, EVP_MAC_up_ref , EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_get_params(___mac, ___params) \
      LP2(0x546, int, EVP_MAC_get_params , EVP_MAC *, ___mac, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_gettable_params(___mac) \
      LP1(0x54c, const OSSL_PARAM *, EVP_MAC_gettable_params , const EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_get0_provider(___mac) \
      LP1(0x552, const OSSL_PROVIDER *, EVP_MAC_get0_provider , const EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x558, EVP_MAC_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_MAC *mac,void *arg))

#define EVP_MAC_get0_name(___mac) \
      LP1(0x55e, const char *, EVP_MAC_get0_name , const EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_free(___md) \
      LP1NR(0x564, EVP_MD_free , EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_free(___cipher) \
      LP1NR(0x56a, EVP_CIPHER_free , EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_up_ref(___kdf) \
      LP1(0x570, int, EVP_KDF_up_ref , EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_free(___kdf) \
      LP1NR(0x576, EVP_KDF_free , EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_fetch(___libctx, ___algorithm, ___properties) \
      LP3(0x57c, EVP_KDF *, EVP_KDF_fetch , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_CTX_dup(___src) \
      LP1(0x582, EVP_KDF_CTX *, EVP_KDF_CTX_dup , const EVP_KDF_CTX *, ___src, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_get0_provider(___kdf) \
      LP1(0x588, const OSSL_PROVIDER *, EVP_KDF_get0_provider , const EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_get_params(___kdf, ___params) \
      LP2(0x58e, int, EVP_KDF_get_params , EVP_KDF *, ___kdf, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_CTX_get_params(___ctx, ___params) \
      LP2(0x594, int, EVP_KDF_CTX_get_params , EVP_KDF_CTX *, ___ctx, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_CTX_set_params(___ctx, ___params) \
      LP2(0x59a, int, EVP_KDF_CTX_set_params , EVP_KDF_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_gettable_params(___kdf) \
      LP1(0x5a0, const OSSL_PARAM *, EVP_KDF_gettable_params , const EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_gettable_ctx_params(___kdf) \
      LP1(0x5a6, const OSSL_PARAM *, EVP_KDF_gettable_ctx_params , const EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_settable_ctx_params(___kdf) \
      LP1(0x5ac, const OSSL_PARAM *, EVP_KDF_settable_ctx_params , const EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x5b2, EVP_KDF_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_KDF *kdf,void *arg))

#define EVP_SIGNATURE_free(___signature) \
      LP1NR(0x5b8, EVP_SIGNATURE_free , EVP_SIGNATURE *, ___signature, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SIGNATURE_up_ref(___signature) \
      LP1(0x5be, int, EVP_SIGNATURE_up_ref , EVP_SIGNATURE *, ___signature, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SIGNATURE_get0_provider(___signature) \
      LP1(0x5c4, OSSL_PROVIDER *, EVP_SIGNATURE_get0_provider , const EVP_SIGNATURE *, ___signature, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SIGNATURE_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x5ca, EVP_SIGNATURE *, EVP_SIGNATURE_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_signature_md(___ctx, ___md) \
      LP2(0x5d0, int, EVP_PKEY_CTX_set_signature_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_signature_md(___ctx, ___md) \
      LP2(0x5d6, int, EVP_PKEY_CTX_get_signature_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD **, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_params(___ctx, ___params) \
      LP2(0x5dc, int, EVP_PKEY_CTX_get_params , EVP_PKEY_CTX *, ___ctx, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_gettable_params(___ctx) \
      LP1(0x5e2, const OSSL_PARAM *, EVP_PKEY_CTX_gettable_params , const EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_settable_params(___ctx) \
      LP1(0x5e8, const OSSL_PARAM *, EVP_PKEY_CTX_settable_params , const EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_get_tag_length(___ctx) \
      LP1(0x5ee, int, EVP_CIPHER_CTX_get_tag_length , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define ERR_get_error_all(___file, ___line, ___func, ___data, ___flags) \
      LP5(0x5f4, unsigned long, ERR_get_error_all , const char **, ___file, a0, int *, ___line, a1, const char **, ___func, a2, const char **, ___data, a3, int *, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define ERR_peek_error_func(___func) \
      LP1(0x5fa, unsigned long, ERR_peek_error_func , const char **, ___func, a0,\
      , AMISSLEXT_BASE_NAME)

#define ERR_peek_error_data(___data, ___flags) \
      LP2(0x600, unsigned long, ERR_peek_error_data , const char **, ___data, a0, int *, ___flags, a1,\
      , AMISSLEXT_BASE_NAME)

#define ERR_peek_error_all(___file, ___line, ___func, ___data, ___flags) \
      LP5(0x606, unsigned long, ERR_peek_error_all , const char **, ___file, a0, int *, ___line, a1, const char **, ___func, a2, const char **, ___data, a3, int *, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define ERR_peek_last_error_func(___func) \
      LP1(0x60c, unsigned long, ERR_peek_last_error_func , const char **, ___func, a0,\
      , AMISSLEXT_BASE_NAME)

#define ERR_peek_last_error_data(___data, ___flags) \
      LP2(0x612, unsigned long, ERR_peek_last_error_data , const char **, ___data, a0, int *, ___flags, a1,\
      , AMISSLEXT_BASE_NAME)

#define ERR_peek_last_error_all(___file, ___line, ___func, ___data, ___flags) \
      LP5(0x618, unsigned long, ERR_peek_last_error_all , const char **, ___file, a0, int *, ___line, a1, const char **, ___func, a2, const char **, ___data, a3, int *, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_is_a(___cipher, ___name) \
      LP2(0x61e, int, EVP_CIPHER_is_a , const EVP_CIPHER *, ___cipher, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_is_a(___mac, ___name) \
      LP2(0x624, int, EVP_MAC_is_a , const EVP_MAC *, ___mac, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_settable_ctx_params(___md) \
      LP1(0x62a, const OSSL_PARAM *, EVP_MD_settable_ctx_params , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_gettable_ctx_params(___md) \
      LP1(0x630, const OSSL_PARAM *, EVP_MD_gettable_ctx_params , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_new(___libctx, ___propq) \
      LP2(0x636, OSSL_CMP_CTX *, OSSL_CMP_CTX_new , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_free(___ctx) \
      LP1NR(0x63c, OSSL_CMP_CTX_free , OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_reinit(___ctx) \
      LP1(0x642, int, OSSL_CMP_CTX_reinit , OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set_option(___ctx, ___opt, ___val) \
      LP3(0x648, int, OSSL_CMP_CTX_set_option , OSSL_CMP_CTX *, ___ctx, a0, int, ___opt, d0, int, ___val, d1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get_option(___ctx, ___opt) \
      LP2(0x64e, int, OSSL_CMP_CTX_get_option , const OSSL_CMP_CTX *, ___ctx, a0, int, ___opt, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set_log_cb(___ctx, ___cb) \
      LP2(0x654, int, OSSL_CMP_CTX_set_log_cb , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_log_cb_t, ___cb, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_print_errors(___ctx) \
      LP1NR(0x65a, OSSL_CMP_CTX_print_errors , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_serverPath(___ctx, ___path) \
      LP2(0x660, int, OSSL_CMP_CTX_set1_serverPath , OSSL_CMP_CTX *, ___ctx, a0, const char *, ___path, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_server(___ctx, ___address) \
      LP2(0x666, int, OSSL_CMP_CTX_set1_server , OSSL_CMP_CTX *, ___ctx, a0, const char *, ___address, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set_serverPort(___ctx, ___port) \
      LP2(0x66c, int, OSSL_CMP_CTX_set_serverPort , OSSL_CMP_CTX *, ___ctx, a0, int, ___port, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_proxy(___ctx, ___name) \
      LP2(0x672, int, OSSL_CMP_CTX_set1_proxy , OSSL_CMP_CTX *, ___ctx, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_no_proxy(___ctx, ___names) \
      LP2(0x678, int, OSSL_CMP_CTX_set1_no_proxy , OSSL_CMP_CTX *, ___ctx, a0, const char *, ___names, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set_http_cb(___ctx, ___cb) \
      LP2(0x67e, int, OSSL_CMP_CTX_set_http_cb , OSSL_CMP_CTX *, ___ctx, a0, OSSL_HTTP_bio_cb_t, ___cb, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set_http_cb_arg(___ctx, ___arg) \
      LP2(0x684, int, OSSL_CMP_CTX_set_http_cb_arg , OSSL_CMP_CTX *, ___ctx, a0, void *, ___arg, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get_http_cb_arg(___ctx) \
      LP1(0x68a, void *, OSSL_CMP_CTX_get_http_cb_arg , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set_transfer_cb(___ctx, ___cb) \
      LP2(0x690, int, OSSL_CMP_CTX_set_transfer_cb , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_transfer_cb_t, ___cb, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set_transfer_cb_arg(___ctx, ___arg) \
      LP2(0x696, int, OSSL_CMP_CTX_set_transfer_cb_arg , OSSL_CMP_CTX *, ___ctx, a0, void *, ___arg, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get_transfer_cb_arg(___ctx) \
      LP1(0x69c, void *, OSSL_CMP_CTX_get_transfer_cb_arg , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_srvCert(___ctx, ___cert) \
      LP2(0x6a2, int, OSSL_CMP_CTX_set1_srvCert , OSSL_CMP_CTX *, ___ctx, a0, X509 *, ___cert, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_expected_sender(___ctx, ___name) \
      LP2(0x6a8, int, OSSL_CMP_CTX_set1_expected_sender , OSSL_CMP_CTX *, ___ctx, a0, const X509_NAME *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set0_trustedStore(___ctx, ___store) \
      LP2(0x6ae, int, OSSL_CMP_CTX_set0_trustedStore , OSSL_CMP_CTX *, ___ctx, a0, X509_STORE *, ___store, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get0_trustedStore(___ctx) \
      LP1(0x6b4, X509_STORE *, OSSL_CMP_CTX_get0_trustedStore , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_untrusted(___ctx, ___certs) \
      LP2(0x6ba, int, OSSL_CMP_CTX_set1_untrusted , OSSL_CMP_CTX *, ___ctx, a0, STACK_OF(X509) *, ___certs, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get0_untrusted(___ctx) \
      LP1(0x6c0, STACK_OF(X509) *, OSSL_CMP_CTX_get0_untrusted , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_cert(___ctx, ___cert) \
      LP2(0x6c6, int, OSSL_CMP_CTX_set1_cert , OSSL_CMP_CTX *, ___ctx, a0, X509 *, ___cert, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_pkey(___ctx, ___pkey) \
      LP2(0x6cc, int, OSSL_CMP_CTX_set1_pkey , OSSL_CMP_CTX *, ___ctx, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_build_cert_chain(___ctx, ___own_trusted, ___candidates) \
      LP3(0x6d2, int, OSSL_CMP_CTX_build_cert_chain , OSSL_CMP_CTX *, ___ctx, a0, X509_STORE *, ___own_trusted, a1, STACK_OF(X509) *, ___candidates, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_referenceValue(___ctx, ___ref, ___len) \
      LP3(0x6d8, int, OSSL_CMP_CTX_set1_referenceValue , OSSL_CMP_CTX *, ___ctx, a0, const unsigned char *, ___ref, a1, int, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_secretValue(___ctx, ___sec, ___len) \
      LP3(0x6de, int, OSSL_CMP_CTX_set1_secretValue , OSSL_CMP_CTX *, ___ctx, a0, const unsigned char *, ___sec, a1, const int, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_recipient(___ctx, ___name) \
      LP2(0x6e4, int, OSSL_CMP_CTX_set1_recipient , OSSL_CMP_CTX *, ___ctx, a0, const X509_NAME *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_push0_geninfo_ITAV(___ctx, ___itav) \
      LP2(0x6ea, int, OSSL_CMP_CTX_push0_geninfo_ITAV , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_ITAV *, ___itav, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_extraCertsOut(___ctx, ___extraCertsOut) \
      LP2(0x6f0, int, OSSL_CMP_CTX_set1_extraCertsOut , OSSL_CMP_CTX *, ___ctx, a0, STACK_OF(X509) *, ___extraCertsOut, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set0_newPkey(___ctx, ___priv, ___pkey) \
      LP3(0x6f6, int, OSSL_CMP_CTX_set0_newPkey , OSSL_CMP_CTX *, ___ctx, a0, int, ___priv, d0, EVP_PKEY *, ___pkey, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get0_newPkey(___ctx, ___priv) \
      LP2(0x6fc, EVP_PKEY *, OSSL_CMP_CTX_get0_newPkey , const OSSL_CMP_CTX *, ___ctx, a0, int, ___priv, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_issuer(___ctx, ___name) \
      LP2(0x702, int, OSSL_CMP_CTX_set1_issuer , OSSL_CMP_CTX *, ___ctx, a0, const X509_NAME *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_subjectName(___ctx, ___name) \
      LP2(0x708, int, OSSL_CMP_CTX_set1_subjectName , OSSL_CMP_CTX *, ___ctx, a0, const X509_NAME *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_push1_subjectAltName(___ctx, ___name) \
      LP2(0x70e, int, OSSL_CMP_CTX_push1_subjectAltName , OSSL_CMP_CTX *, ___ctx, a0, const GENERAL_NAME *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set0_reqExtensions(___ctx, ___exts) \
      LP2(0x714, int, OSSL_CMP_CTX_set0_reqExtensions , OSSL_CMP_CTX *, ___ctx, a0, X509_EXTENSIONS *, ___exts, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_reqExtensions_have_SAN(___ctx) \
      LP1(0x71a, int, OSSL_CMP_CTX_reqExtensions_have_SAN , OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_push0_policy(___ctx, ___pinfo) \
      LP2(0x720, int, OSSL_CMP_CTX_push0_policy , OSSL_CMP_CTX *, ___ctx, a0, POLICYINFO *, ___pinfo, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_oldCert(___ctx, ___cert) \
      LP2(0x726, int, OSSL_CMP_CTX_set1_oldCert , OSSL_CMP_CTX *, ___ctx, a0, X509 *, ___cert, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_p10CSR(___ctx, ___csr) \
      LP2(0x72c, int, OSSL_CMP_CTX_set1_p10CSR , OSSL_CMP_CTX *, ___ctx, a0, const X509_REQ *, ___csr, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_push0_genm_ITAV(___ctx, ___itav) \
      LP2(0x732, int, OSSL_CMP_CTX_push0_genm_ITAV , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_ITAV *, ___itav, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set_certConf_cb(___ctx, ___cb) \
      LP2(0x738, int, OSSL_CMP_CTX_set_certConf_cb , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_certConf_cb_t, ___cb, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set_certConf_cb_arg(___ctx, ___arg) \
      LP2(0x73e, int, OSSL_CMP_CTX_set_certConf_cb_arg , OSSL_CMP_CTX *, ___ctx, a0, void *, ___arg, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get_certConf_cb_arg(___ctx) \
      LP1(0x744, void *, OSSL_CMP_CTX_get_certConf_cb_arg , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get_status(___ctx) \
      LP1(0x74a, int, OSSL_CMP_CTX_get_status , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get0_statusString(___ctx) \
      LP1(0x750, OSSL_CMP_PKIFREETEXT *, OSSL_CMP_CTX_get0_statusString , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get_failInfoCode(___ctx) \
      LP1(0x756, int, OSSL_CMP_CTX_get_failInfoCode , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get0_newCert(___ctx) \
      LP1(0x75c, X509 *, OSSL_CMP_CTX_get0_newCert , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get1_newChain(___ctx) \
      LP1(0x762, STACK_OF(X509) *, OSSL_CMP_CTX_get1_newChain , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get1_caPubs(___ctx) \
      LP1(0x768, STACK_OF(X509) *, OSSL_CMP_CTX_get1_caPubs , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get1_extraCertsIn(___ctx) \
      LP1(0x76e, STACK_OF(X509) *, OSSL_CMP_CTX_get1_extraCertsIn , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_transactionID(___ctx, ___id) \
      LP2(0x774, int, OSSL_CMP_CTX_set1_transactionID , OSSL_CMP_CTX *, ___ctx, a0, const ASN1_OCTET_STRING *, ___id, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_senderNonce(___ctx, ___nonce) \
      LP2(0x77a, int, OSSL_CMP_CTX_set1_senderNonce , OSSL_CMP_CTX *, ___ctx, a0, const ASN1_OCTET_STRING *, ___nonce, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_log_open() \
      LP0(0x780, int, OSSL_CMP_log_open ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_log_close() \
      LP0NR(0x786, OSSL_CMP_log_close ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_print_to_bio(___bio, ___component, ___file, ___line, ___level, ___msg) \
      LP6(0x78c, int, OSSL_CMP_print_to_bio , BIO *, ___bio, a0, const char *, ___component, a1, const char *, ___file, a2, int, ___line, d0, OSSL_CMP_severity, ___level, d1, const char *, ___msg, a3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_print_errors_cb(___log_fn) \
      LP1NR(0x792, OSSL_CMP_print_errors_cb , OSSL_CMP_log_cb_t, ___log_fn, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTID_get0_issuer(___cid) \
      LP1(0x798, const X509_NAME *, OSSL_CRMF_CERTID_get0_issuer , const OSSL_CRMF_CERTID *, ___cid, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTID_get0_serialNumber(___cid) \
      LP1(0x79e, const ASN1_INTEGER *, OSSL_CRMF_CERTID_get0_serialNumber , const OSSL_CRMF_CERTID *, ___cid, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_DigestSignUpdate(___ctx, ___data, ___dsize) \
      LP3(0x7a4, int, EVP_DigestSignUpdate , EVP_MD_CTX *, ___ctx, a0, const void *, ___data, a1, size_t, ___dsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_DigestVerifyUpdate(___ctx, ___data, ___dsize) \
      LP3(0x7aa, int, EVP_DigestVerifyUpdate , EVP_MD_CTX *, ___ctx, a0, const void *, ___data, a1, size_t, ___dsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define BN_check_prime(___p, ___ctx, ___cb) \
      LP3(0x7b0, int, BN_check_prime , const BIGNUM *, ___p, a0, BN_CTX *, ___ctx, a1, BN_GENCB *, ___cb, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYMGMT_is_a(___keymgmt, ___name) \
      LP2(0x7b6, int, EVP_KEYMGMT_is_a , const EVP_KEYMGMT *, ___keymgmt, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYMGMT_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x7bc, EVP_KEYMGMT_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_KEYMGMT *keymgmt,void *arg))

#define EVP_KEYEXCH_is_a(___keyexch, ___name) \
      LP2(0x7c2, int, EVP_KEYEXCH_is_a , const EVP_KEYEXCH *, ___keyexch, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYEXCH_do_all_provided(___libctx, ___fn, ___data) \
      LP3NRFP(0x7c8, EVP_KEYEXCH_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_KEYEXCH *keyexch,void *data))

#define EVP_KDF_is_a(___kdf, ___name) \
      LP2(0x7ce, int, EVP_KDF_is_a , const EVP_KDF *, ___kdf, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_is_a(___md, ___name) \
      LP2(0x7d4, int, EVP_MD_is_a , const EVP_MD *, ___md, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SIGNATURE_is_a(___signature, ___name) \
      LP2(0x7da, int, EVP_SIGNATURE_is_a , const EVP_SIGNATURE *, ___signature, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SIGNATURE_do_all_provided(___libctx, ___fn, ___data) \
      LP3NRFP(0x7e0, EVP_SIGNATURE_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_SIGNATURE *signature,void *data))

#define EVP_MD_names_do_all(___md, ___fn, ___data) \
      LP3FP(0x7e6, int, EVP_MD_names_do_all , const EVP_MD *, ___md, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define EVP_CIPHER_names_do_all(___cipher, ___fn, ___data) \
      LP3FP(0x7ec, int, EVP_CIPHER_names_do_all , const EVP_CIPHER *, ___cipher, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define EVP_MAC_names_do_all(___mac, ___fn, ___data) \
      LP3FP(0x7f2, int, EVP_MAC_names_do_all , const EVP_MAC *, ___mac, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define EVP_KEYMGMT_names_do_all(___keymgmt, ___fn, ___data) \
      LP3FP(0x7f8, int, EVP_KEYMGMT_names_do_all , const EVP_KEYMGMT *, ___keymgmt, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define EVP_KEYEXCH_names_do_all(___keyexch, ___fn, ___data) \
      LP3FP(0x7fe, int, EVP_KEYEXCH_names_do_all , const EVP_KEYEXCH *, ___keyexch, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define EVP_KDF_names_do_all(___kdf, ___fn, ___data) \
      LP3FP(0x804, int, EVP_KDF_names_do_all , const EVP_KDF *, ___kdf, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define EVP_SIGNATURE_names_do_all(___signature, ___fn, ___data) \
      LP3FP(0x80a, int, EVP_SIGNATURE_names_do_all , const EVP_SIGNATURE *, ___signature, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define OSSL_CMP_CTX_snprint_PKIStatus(___ctx, ___buf, ___bufsize) \
      LP3(0x810, char *, OSSL_CMP_CTX_snprint_PKIStatus , const OSSL_CMP_CTX *, ___ctx, a0, char *, ___buf, a1, size_t, ___bufsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_HDR_get0_transactionID(___hdr) \
      LP1(0x816, ASN1_OCTET_STRING *, OSSL_CMP_HDR_get0_transactionID , const OSSL_CMP_PKIHEADER *, ___hdr, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_HDR_get0_recipNonce(___hdr) \
      LP1(0x81c, ASN1_OCTET_STRING *, OSSL_CMP_HDR_get0_recipNonce , const OSSL_CMP_PKIHEADER *, ___hdr, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_LOOKUP_store() \
      LP0(0x822, X509_LOOKUP_METHOD *, X509_LOOKUP_store ,\
      , AMISSLEXT_BASE_NAME)

#define X509_add_cert(___sk, ___cert, ___flags) \
      LP3(0x828, int, X509_add_cert , STACK_OF(X509) *, ___sk, a0, X509 *, ___cert, a1, int, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define X509_add_certs(___sk, ___certs, ___flags) \
      LP3(0x82e, int, X509_add_certs , STACK_OF(X509) *, ___sk, a0, STACK_OF(X509) *, ___certs, a1, int, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_load_file(___xs, ___file) \
      LP2(0x834, int, X509_STORE_load_file , X509_STORE *, ___xs, a0, const char *, ___file, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_load_path(___xs, ___path) \
      LP2(0x83a, int, X509_STORE_load_path , X509_STORE *, ___xs, a0, const char *, ___path, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_load_store(___xs, ___store) \
      LP2(0x840, int, X509_STORE_load_store , X509_STORE *, ___xs, a0, const char *, ___store, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_fromdata(___ctx, ___ppkey, ___selection, ___params) \
      LP4(0x846, int, EVP_PKEY_fromdata , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY **, ___ppkey, a1, int, ___selection, d0, OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_ASYM_CIPHER_free(___cipher) \
      LP1NR(0x84c, EVP_ASYM_CIPHER_free , EVP_ASYM_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_ASYM_CIPHER_up_ref(___cipher) \
      LP1(0x852, int, EVP_ASYM_CIPHER_up_ref , EVP_ASYM_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_ASYM_CIPHER_get0_provider(___cipher) \
      LP1(0x858, OSSL_PROVIDER *, EVP_ASYM_CIPHER_get0_provider , const EVP_ASYM_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_ASYM_CIPHER_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x85e, EVP_ASYM_CIPHER *, EVP_ASYM_CIPHER_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_ASYM_CIPHER_is_a(___cipher, ___name) \
      LP2(0x864, int, EVP_ASYM_CIPHER_is_a , const EVP_ASYM_CIPHER *, ___cipher, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_ASYM_CIPHER_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x86a, EVP_ASYM_CIPHER_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_ASYM_CIPHER *cipher,void *arg))

#define EVP_ASYM_CIPHER_names_do_all(___cipher, ___fn, ___data) \
      LP3FP(0x870, int, EVP_ASYM_CIPHER_names_do_all , const EVP_ASYM_CIPHER *, ___cipher, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define EVP_PKEY_CTX_set_rsa_padding(___ctx, ___pad_mode) \
      LP2(0x876, int, EVP_PKEY_CTX_set_rsa_padding , EVP_PKEY_CTX *, ___ctx, a0, int, ___pad_mode, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_rsa_padding(___ctx, ___pad_mode) \
      LP2(0x87c, int, EVP_PKEY_CTX_get_rsa_padding , EVP_PKEY_CTX *, ___ctx, a0, int *, ___pad_mode, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_mgf1_md(___ctx, ___md) \
      LP2(0x882, int, EVP_PKEY_CTX_set_rsa_mgf1_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_mgf1_md_name(___ctx, ___mdname, ___mdprops) \
      LP3(0x888, int, EVP_PKEY_CTX_set_rsa_mgf1_md_name , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___mdname, a1, const char *, ___mdprops, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_rsa_mgf1_md(___ctx, ___md) \
      LP2(0x88e, int, EVP_PKEY_CTX_get_rsa_mgf1_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD **, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_oaep_md(___ctx, ___md) \
      LP2(0x894, int, EVP_PKEY_CTX_set_rsa_oaep_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_oaep_md_name(___ctx, ___mdname, ___mdprops) \
      LP3(0x89a, int, EVP_PKEY_CTX_set_rsa_oaep_md_name , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___mdname, a1, const char *, ___mdprops, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_rsa_oaep_md(___ctx, ___md) \
      LP2(0x8a0, int, EVP_PKEY_CTX_get_rsa_oaep_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD **, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set0_rsa_oaep_label(___ctx, ___label, ___llen) \
      LP3(0x8a6, int, EVP_PKEY_CTX_set0_rsa_oaep_label , EVP_PKEY_CTX *, ___ctx, a0, void *, ___label, a1, int, ___llen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get0_rsa_oaep_label(___ctx, ___label) \
      LP2(0x8ac, int, EVP_PKEY_CTX_get0_rsa_oaep_label , EVP_PKEY_CTX *, ___ctx, a0, unsigned char **, ___label, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_rsa_mgf1_md_name(___ctx, ___name, ___namelen) \
      LP3(0x8b2, int, EVP_PKEY_CTX_get_rsa_mgf1_md_name , EVP_PKEY_CTX *, ___ctx, a0, char *, ___name, a1, size_t, ___namelen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_rsa_oaep_md_name(___ctx, ___name, ___namelen) \
      LP3(0x8b8, int, EVP_PKEY_CTX_get_rsa_oaep_md_name , EVP_PKEY_CTX *, ___ctx, a0, char *, ___name, a1, size_t, ___namelen, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_up_ref(___encoder) \
      LP1(0x8be, int, OSSL_ENCODER_up_ref , OSSL_ENCODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_free(___encoder) \
      LP1NR(0x8c4, OSSL_ENCODER_free , OSSL_ENCODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_fetch(___libctx, ___name, ___properties) \
      LP3(0x8ca, OSSL_ENCODER *, OSSL_ENCODER_fetch , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___name, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_is_a(___encoder, ___name) \
      LP2(0x8d0, int, OSSL_ENCODER_is_a , const OSSL_ENCODER *, ___encoder, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_get0_provider(___encoder) \
      LP1(0x8d6, const OSSL_PROVIDER *, OSSL_ENCODER_get0_provider , const OSSL_ENCODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x8dc, OSSL_ENCODER_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(OSSL_ENCODER *encoder,void *arg))

#define OSSL_ENCODER_names_do_all(___encoder, ___fn, ___data) \
      LP3FP(0x8e2, int, OSSL_ENCODER_names_do_all , const OSSL_ENCODER *, ___encoder, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define OSSL_ENCODER_settable_ctx_params(___encoder) \
      LP1(0x8e8, const OSSL_PARAM *, OSSL_ENCODER_settable_ctx_params , OSSL_ENCODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_new() \
      LP0(0x8ee, OSSL_ENCODER_CTX *, OSSL_ENCODER_CTX_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_set_params(___ctx, ___params) \
      LP2(0x8f4, int, OSSL_ENCODER_CTX_set_params , OSSL_ENCODER_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_free(___ctx) \
      LP1NR(0x8fa, OSSL_ENCODER_CTX_free , OSSL_ENCODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_get0_properties(___encoder) \
      LP1(0x900, const char *, OSSL_ENCODER_get0_properties , const OSSL_ENCODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_to_bio(___ctx, ___out) \
      LP2(0x906, int, OSSL_ENCODER_to_bio , OSSL_ENCODER_CTX *, ___ctx, a0, BIO *, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_new_for_pkey(___pkey, ___selection, ___output_type, ___output_struct, ___propquery) \
      LP5(0x90c, OSSL_ENCODER_CTX *, OSSL_ENCODER_CTX_new_for_pkey , const EVP_PKEY *, ___pkey, a0, int, ___selection, d0, const char *, ___output_type, a1, const char *, ___output_struct, a2, const char *, ___propquery, a3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_set_cipher(___ctx, ___cipher_name, ___propquery) \
      LP3(0x912, int, OSSL_ENCODER_CTX_set_cipher , OSSL_ENCODER_CTX *, ___ctx, a0, const char *, ___cipher_name, a1, const char *, ___propquery, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_set_passphrase(___ctx, ___kstr, ___klen) \
      LP3(0x918, int, OSSL_ENCODER_CTX_set_passphrase , OSSL_ENCODER_CTX *, ___ctx, a0, const unsigned char *, ___kstr, a1, size_t, ___klen, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_set_pem_password_cb(___ctx, ___cb, ___cbarg) \
      LP3(0x91e, int, OSSL_ENCODER_CTX_set_pem_password_cb , OSSL_ENCODER_CTX *, ___ctx, a0, pem_password_cb *, ___cb, a1, void *, ___cbarg, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_set_passphrase_ui(___ctx, ___ui_method, ___ui_data) \
      LP3(0x924, int, OSSL_ENCODER_CTX_set_passphrase_ui , OSSL_ENCODER_CTX *, ___ctx, a0, const UI_METHOD *, ___ui_method, a1, void *, ___ui_data, a2,\
      , AMISSLEXT_BASE_NAME)

#define PEM_read_bio_X509_PUBKEY(___out, ___x, ___cb, ___u) \
      LP4(0x92a, X509_PUBKEY *, PEM_read_bio_X509_PUBKEY , BIO *, ___out, a0, X509_PUBKEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSLEXT_BASE_NAME)

#define PEM_write_bio_X509_PUBKEY(___out, ___x) \
      LP2(0x930, int, PEM_write_bio_X509_PUBKEY , BIO *, ___out, a0, const X509_PUBKEY *, ___x, a1,\
      , AMISSLEXT_BASE_NAME)

#define d2i_X509_PUBKEY_bio(___bp, ___xpk) \
      LP2(0x936, X509_PUBKEY *, d2i_X509_PUBKEY_bio , BIO *, ___bp, a0, X509_PUBKEY **, ___xpk, a1,\
      , AMISSLEXT_BASE_NAME)

#define i2d_X509_PUBKEY_bio(___bp, ___xpk) \
      LP2(0x93c, int, i2d_X509_PUBKEY_bio , BIO *, ___bp, a0, const X509_PUBKEY *, ___xpk, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_cmp_timeframe(___vpm, ___start, ___end) \
      LP3(0x942, int, X509_cmp_timeframe , const X509_VERIFY_PARAM *, ___vpm, a0, const ASN1_TIME *, ___start, a1, const ASN1_TIME *, ___end, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_MSG_get0_header(___msg) \
      LP1(0x948, OSSL_CMP_PKIHEADER *, OSSL_CMP_MSG_get0_header , const OSSL_CMP_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_MSG_get_bodytype(___msg) \
      LP1(0x94e, int, OSSL_CMP_MSG_get_bodytype , const OSSL_CMP_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_MSG_update_transactionID(___ctx, ___msg) \
      LP2(0x954, int, OSSL_CMP_MSG_update_transactionID , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_MSG *, ___msg, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_setup_CRM(___ctx, ___for_KUR, ___rid) \
      LP3(0x95a, OSSL_CRMF_MSG *, OSSL_CMP_CTX_setup_CRM , OSSL_CMP_CTX *, ___ctx, a0, int, ___for_KUR, d0, int, ___rid, d1,\
      , AMISSLEXT_BASE_NAME)

#define BIO_f_prefix() \
      LP0(0x960, const BIO_METHOD *, BIO_f_prefix ,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_new_from_name(___libctx, ___name, ___propquery) \
      LP3(0x966, EVP_PKEY_CTX *, EVP_PKEY_CTX_new_from_name , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___name, a1, const char *, ___propquery, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_new_from_pkey(___libctx, ___pkey, ___propquery) \
      LP3(0x96c, EVP_PKEY_CTX *, EVP_PKEY_CTX_new_from_pkey , OSSL_LIB_CTX *, ___libctx, a0, EVP_PKEY *, ___pkey, a1, const char *, ___propquery, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_SELF_TEST_set_callback(___libctx, ___cb, ___cbarg) \
      LP3NR(0x972, OSSL_SELF_TEST_set_callback , OSSL_LIB_CTX *, ___libctx, a0, OSSL_CALLBACK *, ___cb, a1, void *, ___cbarg, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_SELF_TEST_get_callback(___libctx, ___cb, ___cbarg) \
      LP3NR(0x978, OSSL_SELF_TEST_get_callback , OSSL_LIB_CTX *, ___libctx, a0, OSSL_CALLBACK **, ___cb, a1, void **, ___cbarg, a2,\
      , AMISSLEXT_BASE_NAME)

#define ASN1_TIME_dup(___a) \
      LP1(0x97e, ASN1_TIME *, ASN1_TIME_dup , const ASN1_TIME *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define ASN1_UTCTIME_dup(___a) \
      LP1(0x984, ASN1_UTCTIME *, ASN1_UTCTIME_dup , const ASN1_UTCTIME *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define ASN1_GENERALIZEDTIME_dup(___a) \
      LP1(0x98a, ASN1_GENERALIZEDTIME *, ASN1_GENERALIZEDTIME_dup , const ASN1_GENERALIZEDTIME *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define RAND_priv_bytes_ex(___ctx, ___buf, ___num, ___strength) \
      LP4(0x990, int, RAND_priv_bytes_ex , OSSL_LIB_CTX *, ___ctx, a0, unsigned char *, ___buf, a1, size_t, ___num, d0, unsigned int, ___strength, d1,\
      , AMISSLEXT_BASE_NAME)

#define RAND_bytes_ex(___ctx, ___buf, ___num, ___strength) \
      LP4(0x996, int, RAND_bytes_ex , OSSL_LIB_CTX *, ___ctx, a0, unsigned char *, ___buf, a1, size_t, ___num, d0, unsigned int, ___strength, d1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get_default_digest_name(___pkey, ___mdname, ___mdname_sz) \
      LP3(0x99c, int, EVP_PKEY_get_default_digest_name , EVP_PKEY *, ___pkey, a0, char *, ___mdname, a1, size_t, ___mdname_sz, d0,\
      , AMISSLEXT_BASE_NAME)

#define CMS_decrypt_set1_pkey_and_peer(___cms, ___pk, ___cert, ___peer) \
      LP4(0x9a2, int, CMS_decrypt_set1_pkey_and_peer , CMS_ContentInfo *, ___cms, a0, EVP_PKEY *, ___pk, a1, X509 *, ___cert, a2, X509 *, ___peer, a3,\
      , AMISSLEXT_BASE_NAME)

#define CMS_add1_recipient(___cms, ___recip, ___originatorPrivKey, ___originator, ___flags) \
      LP5(0x9a8, CMS_RecipientInfo *, CMS_add1_recipient , CMS_ContentInfo *, ___cms, a0, X509 *, ___recip, a1, EVP_PKEY *, ___originatorPrivKey, a2, X509 *, ___originator, a3, unsigned int, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define CMS_RecipientInfo_kari_set0_pkey_and_peer(___ri, ___pk, ___peer) \
      LP3(0x9ae, int, CMS_RecipientInfo_kari_set0_pkey_and_peer , CMS_RecipientInfo *, ___ri, a0, EVP_PKEY *, ___pk, a1, X509 *, ___peer, a2,\
      , AMISSLEXT_BASE_NAME)

#define PKCS8_pkey_add1_attr(___p8, ___attr) \
      LP2(0x9b4, int, PKCS8_pkey_add1_attr , PKCS8_PRIV_KEY_INFO *, ___p8, a0, X509_ATTRIBUTE *, ___attr, a1,\
      , AMISSLEXT_BASE_NAME)

#define PKCS8_pkey_add1_attr_by_OBJ(___p8, ___obj, ___type, ___bytes, ___len) \
      LP5(0x9ba, int, PKCS8_pkey_add1_attr_by_OBJ , PKCS8_PRIV_KEY_INFO *, ___p8, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_private_check(___ctx) \
      LP1(0x9c0, int, EVP_PKEY_private_check , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_pairwise_check(___ctx) \
      LP1(0x9c6, int, EVP_PKEY_pairwise_check , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define ASN1_item_verify_ctx(___it, ___alg, ___signature, ___data, ___ctx) \
      LP5(0x9cc, int, ASN1_item_verify_ctx , const ASN1_ITEM *, ___it, a0, const X509_ALGOR *, ___alg, a1, const ASN1_BIT_STRING *, ___signature, a2, const void *, ___data, a3, EVP_MD_CTX *, ___ctx, d0,\
      , AMISSLEXT_BASE_NAME)

#define ASN1_item_sign_ex(___it, ___algor1, ___algor2, ___signature, ___data, ___id, ___pkey, ___md, ___libctx, ___propq) \
      LP10(0x9d2, int, ASN1_item_sign_ex , const ASN1_ITEM *, ___it, a0, X509_ALGOR *, ___algor1, a1, X509_ALGOR *, ___algor2, a2, ASN1_BIT_STRING *, ___signature, a3, const void *, ___data, d0, const ASN1_OCTET_STRING *, ___id, d1, EVP_PKEY *, ___pkey, d2, const EVP_MD *, ___md, d3, OSSL_LIB_CTX *, ___libctx, d4, const char *, ___propq, d5,\
      , AMISSLEXT_BASE_NAME)

#define ASN1_item_verify_ex(___it, ___alg, ___signature, ___data, ___id, ___pkey, ___libctx, ___propq) \
      LP8(0x9d8, int, ASN1_item_verify_ex , const ASN1_ITEM *, ___it, a0, const X509_ALGOR *, ___alg, a1, const ASN1_BIT_STRING *, ___signature, a2, const void *, ___data, a3, const ASN1_OCTET_STRING *, ___id, d0, EVP_PKEY *, ___pkey, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME)

#define BIO_socket_wait(___fd, ___for_read, ___max_time) \
      LP3(0x9de, int, BIO_socket_wait , int, ___fd, d0, int, ___for_read, d1, time_t, ___max_time, d2,\
      , AMISSLEXT_BASE_NAME)

#define BIO_wait(___bio, ___max_time, ___nap_milliseconds) \
      LP3(0x9e4, int, BIO_wait , BIO *, ___bio, a0, time_t, ___max_time, d0, unsigned int, ___nap_milliseconds, d1,\
      , AMISSLEXT_BASE_NAME)

#define BIO_do_connect_retry(___bio, ___timeout, ___nap_milliseconds) \
      LP3(0x9ea, int, BIO_do_connect_retry , BIO *, ___bio, a0, int, ___timeout, d0, int, ___nap_milliseconds, d1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_parse_url(___url, ___pscheme, ___puser, ___phost, ___pport, ___pport_num, ___ppath, ___pquery, ___pfrag) \
      LP9(0x9f0, int, OSSL_parse_url , const char *, ___url, a0, char **, ___pscheme, a1, char **, ___puser, a2, char **, ___phost, a3, char **, ___pport, d0, int *, ___pport_num, d1, char **, ___ppath, d2, char **, ___pquery, d3, char **, ___pfrag, d4,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_adapt_proxy(___proxy, ___no_proxy, ___server, ___use_ssl) \
      LP4(0x9f6, const char *, OSSL_HTTP_adapt_proxy , const char *, ___proxy, a0, const char *, ___no_proxy, a1, const char *, ___server, a2, int, ___use_ssl, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_REQ_CTX_get_resp_len(___rctx) \
      LP1(0x9fc, size_t, OSSL_HTTP_REQ_CTX_get_resp_len , const OSSL_HTTP_REQ_CTX *, ___rctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_REQ_CTX_set_expected(___rctx, ___content_type, ___asn1, ___timeout, ___keep_alive) \
      LP5(0xa02, int, OSSL_HTTP_REQ_CTX_set_expected , OSSL_HTTP_REQ_CTX *, ___rctx, a0, const char *, ___content_type, a1, int, ___asn1, d0, int, ___timeout, d1, int, ___keep_alive, d2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_is_alive(___rctx) \
      LP1(0xa08, int, OSSL_HTTP_is_alive , const OSSL_HTTP_REQ_CTX *, ___rctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_open(___server, ___port, ___proxy, ___no_proxy, ___use_ssl, ___bio, ___rbio, ___bio_update_fn, ___arg, ___buf_size, ___overall_timeout) \
      LP11(0xa0e, OSSL_HTTP_REQ_CTX *, OSSL_HTTP_open , const char *, ___server, a0, const char *, ___port, a1, const char *, ___proxy, a2, const char *, ___no_proxy, a3, int, ___use_ssl, d0, BIO *, ___bio, d1, BIO *, ___rbio, d2, OSSL_HTTP_bio_cb_t, ___bio_update_fn, d3, void *, ___arg, d4, int, ___buf_size, d5, int, ___overall_timeout, d6,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_proxy_connect(___bio, ___server, ___port, ___proxyuser, ___proxypass, ___timeout, ___bio_err, ___prog) \
      LP8(0xa14, int, OSSL_HTTP_proxy_connect , BIO *, ___bio, a0, const char *, ___server, a1, const char *, ___port, a2, const char *, ___proxyuser, a3, const char *, ___proxypass, d0, int, ___timeout, d1, BIO *, ___bio_err, d2, const char *, ___prog, d3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_set1_request(___rctx, ___path, ___headers, ___content_type, ___req, ___expected_content_type, ___expect_asn1, ___max_resp_len, ___timeout, ___keep_alive) \
      LP10(0xa1a, int, OSSL_HTTP_set1_request , OSSL_HTTP_REQ_CTX *, ___rctx, a0, const char *, ___path, a1, const STACK_OF(CONF_VALUE) *, ___headers, a2, const char *, ___content_type, a3, BIO *, ___req, d0, const char *, ___expected_content_type, d1, int, ___expect_asn1, d2, size_t, ___max_resp_len, d3, int, ___timeout, d4, int, ___keep_alive, d5,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_exchange(___rctx, ___redirection_url) \
      LP2(0xa20, BIO *, OSSL_HTTP_exchange , OSSL_HTTP_REQ_CTX *, ___rctx, a0, char **, ___redirection_url, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_get_amiga_1(___url, ___proxy, ___no_proxy, ___bio, ___rbio, ___bio_update_fn, ___moreargs) \
      LP7(0xa26, BIO *, OSSL_HTTP_get_amiga_1 , const char *, ___url, a0, const char *, ___proxy, a1, const char *, ___no_proxy, a2, BIO *, ___bio, d1, BIO *, ___rbio, d2, OSSL_HTTP_bio_cb_t, ___bio_update_fn, a3, void *, ___moreargs, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_get_amiga_2(___arg, ___buf_size, ___headers, ___expected_content_type, ___expect_asn1, ___max_resp_len, ___timeout) \
      LP7(0xa2c, void *, OSSL_HTTP_get_amiga_2 , void *, ___arg, a0, int, ___buf_size, a1, const STACK_OF(CONF_VALUE) *, ___headers, a2, const char *, ___expected_content_type, a3, int, ___expect_asn1, d0, size_t, ___max_resp_len, d1, int, ___timeout, d2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_transfer_amiga_1(___prctx, ___server, ___port, ___path, ___use_ssl, ___proxy, ___no_proxy, ___bio, ___rbio, ___bio_update_fn, ___moreargs) \
      LP11(0xa32, BIO *, OSSL_HTTP_transfer_amiga_1 , OSSL_HTTP_REQ_CTX **, ___prctx, a0, const char *, ___server, a1, const char *, ___port, a2, const char *, ___path, d1, int, ___use_ssl, d2, const char *, ___proxy, d3, const char *, ___no_proxy, d4, BIO *, ___bio, d5, BIO *, ___rbio, d6, OSSL_HTTP_bio_cb_t, ___bio_update_fn, a3, void *, ___moreargs, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_transfer_amiga_2(___arg, ___buf_size, ___headers, ___content_type, ___req, ___expected_content_type, ___expect_asn1, ___max_resp_len, ___timeout, ___keep_alive) \
      LP10(0xa38, void *, OSSL_HTTP_transfer_amiga_2 , void *, ___arg, a0, int, ___buf_size, d0, const STACK_OF(CONF_VALUE) *, ___headers, a1, const char *, ___content_type, a2, BIO *, ___req, a3, const char *, ___expected_content_type, d1, int, ___expect_asn1, d2, size_t, ___max_resp_len, d3, int, ___timeout, d4, int, ___keep_alive, d5,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_close(___rctx, ___ok) \
      LP2(0xa3e, int, OSSL_HTTP_close , OSSL_HTTP_REQ_CTX *, ___rctx, a0, int, ___ok, d0,\
      , AMISSLEXT_BASE_NAME)

#define ASN1_item_i2d_mem_bio(___it, ___val) \
      LP2(0xa44, BIO *, ASN1_item_i2d_mem_bio , const ASN1_ITEM *, ___it, a0, const ASN1_VALUE *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define ERR_add_error_txt(___sepr, ___txt) \
      LP2NR(0xa4a, ERR_add_error_txt , const char *, ___sepr, a0, const char *, ___txt, a1,\
      , AMISSLEXT_BASE_NAME)

#define ERR_add_error_mem_bio(___sep, ___bio) \
      LP2NR(0xa50, ERR_add_error_mem_bio , const char *, ___sep, a0, BIO *, ___bio, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_CTX_print_verify_cb(___ok, ___ctx) \
      LP2(0xa56, int, X509_STORE_CTX_print_verify_cb , int, ___ok, d0, X509_STORE_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_get1_all_certs(___xs) \
      LP1(0xa5c, STACK_OF(X509) *, X509_STORE_get1_all_certs , X509_STORE *, ___xs, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_validate_msg(___ctx, ___msg) \
      LP2(0xa62, int, OSSL_CMP_validate_msg , OSSL_CMP_CTX *, ___ctx, a0, const OSSL_CMP_MSG *, ___msg, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_validate_cert_path(___ctx, ___trusted_store, ___cert) \
      LP3(0xa68, int, OSSL_CMP_validate_cert_path , const OSSL_CMP_CTX *, ___ctx, a0, X509_STORE *, ___trusted_store, a1, X509 *, ___cert, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_ecdh_cofactor_mode(___ctx, ___cofactor_mode) \
      LP2(0xa6e, int, EVP_PKEY_CTX_set_ecdh_cofactor_mode , EVP_PKEY_CTX *, ___ctx, a0, int, ___cofactor_mode, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_ecdh_cofactor_mode(___ctx) \
      LP1(0xa74, int, EVP_PKEY_CTX_get_ecdh_cofactor_mode , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_ecdh_kdf_type(___ctx, ___kdf) \
      LP2(0xa7a, int, EVP_PKEY_CTX_set_ecdh_kdf_type , EVP_PKEY_CTX *, ___ctx, a0, int, ___kdf, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_ecdh_kdf_type(___ctx) \
      LP1(0xa80, int, EVP_PKEY_CTX_get_ecdh_kdf_type , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_ecdh_kdf_md(___ctx, ___md) \
      LP2(0xa86, int, EVP_PKEY_CTX_set_ecdh_kdf_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_ecdh_kdf_md(___ctx, ___md) \
      LP2(0xa8c, int, EVP_PKEY_CTX_get_ecdh_kdf_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD **, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_ecdh_kdf_outlen(___ctx, ___len) \
      LP2(0xa92, int, EVP_PKEY_CTX_set_ecdh_kdf_outlen , EVP_PKEY_CTX *, ___ctx, a0, int, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_ecdh_kdf_outlen(___ctx, ___len) \
      LP2(0xa98, int, EVP_PKEY_CTX_get_ecdh_kdf_outlen , EVP_PKEY_CTX *, ___ctx, a0, int *, ___len, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set0_ecdh_kdf_ukm(___ctx, ___ukm, ___len) \
      LP3(0xa9e, int, EVP_PKEY_CTX_set0_ecdh_kdf_ukm , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___ukm, a1, int, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get0_ecdh_kdf_ukm(___ctx, ___ukm) \
      LP2(0xaa4, int, EVP_PKEY_CTX_get0_ecdh_kdf_ukm , EVP_PKEY_CTX *, ___ctx, a0, unsigned char **, ___ukm, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_pss_saltlen(___ctx, ___saltlen) \
      LP2(0xaaa, int, EVP_PKEY_CTX_set_rsa_pss_saltlen , EVP_PKEY_CTX *, ___ctx, a0, int, ___saltlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_rsa_pss_saltlen(___ctx, ___saltlen) \
      LP2(0xab0, int, EVP_PKEY_CTX_get_rsa_pss_saltlen , EVP_PKEY_CTX *, ___ctx, a0, int *, ___saltlen, a1,\
      , AMISSLEXT_BASE_NAME)

#define d2i_ISSUER_SIGN_TOOL(___a, ___in, ___len) \
      LP3(0xab6, ISSUER_SIGN_TOOL *, d2i_ISSUER_SIGN_TOOL , ISSUER_SIGN_TOOL **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_ISSUER_SIGN_TOOL(___a, ___out) \
      LP2(0xabc, int, i2d_ISSUER_SIGN_TOOL , const ISSUER_SIGN_TOOL *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define ISSUER_SIGN_TOOL_free(___a) \
      LP1NR(0xac2, ISSUER_SIGN_TOOL_free , ISSUER_SIGN_TOOL *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define ISSUER_SIGN_TOOL_new() \
      LP0(0xac8, ISSUER_SIGN_TOOL *, ISSUER_SIGN_TOOL_new ,\
      , AMISSLEXT_BASE_NAME)

#define ISSUER_SIGN_TOOL_it() \
      LP0(0xace, const ASN1_ITEM *, ISSUER_SIGN_TOOL_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_SELF_TEST_new(___cb, ___cbarg) \
      LP2(0xad4, OSSL_SELF_TEST *, OSSL_SELF_TEST_new , OSSL_CALLBACK *, ___cb, a0, void *, ___cbarg, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_SELF_TEST_free(___st) \
      LP1NR(0xada, OSSL_SELF_TEST_free , OSSL_SELF_TEST *, ___st, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_SELF_TEST_onbegin(___st, ___type, ___desc) \
      LP3NR(0xae0, OSSL_SELF_TEST_onbegin , OSSL_SELF_TEST *, ___st, a0, const char *, ___type, a1, const char *, ___desc, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_SELF_TEST_oncorrupt_byte(___st, ___bytes) \
      LP2(0xae6, int, OSSL_SELF_TEST_oncorrupt_byte , OSSL_SELF_TEST *, ___st, a0, unsigned char *, ___bytes, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_SELF_TEST_onend(___st, ___ret) \
      LP2NR(0xaec, OSSL_SELF_TEST_onend , OSSL_SELF_TEST *, ___st, a0, int, ___ret, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_set_default_search_path(___a, ___path) \
      LP2(0xaf2, int, OSSL_PROVIDER_set_default_search_path , OSSL_LIB_CTX *, ___a, a0, const char *, ___path, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_digest_sig(___cert, ___md_used, ___md_is_fallback) \
      LP3(0xaf8, ASN1_OCTET_STRING *, X509_digest_sig , const X509 *, ___cert, a0, EVP_MD **, ___md_used, a1, int *, ___md_is_fallback, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_MSG_dup(___a) \
      LP1(0xafe, OSSL_CMP_MSG *, OSSL_CMP_MSG_dup , const OSSL_CMP_MSG *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_dup(___a) \
      LP1(0xb04, OSSL_CMP_ITAV *, OSSL_CMP_ITAV_dup , const OSSL_CMP_ITAV *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CMP_PKISI(___a, ___in, ___len) \
      LP3(0xb0a, OSSL_CMP_PKISI *, d2i_OSSL_CMP_PKISI , OSSL_CMP_PKISI **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CMP_PKISI(___a, ___out) \
      LP2(0xb10, int, i2d_OSSL_CMP_PKISI , const OSSL_CMP_PKISI *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_PKISI_free(___a) \
      LP1NR(0xb16, OSSL_CMP_PKISI_free , OSSL_CMP_PKISI *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_PKISI_new() \
      LP0(0xb1c, OSSL_CMP_PKISI *, OSSL_CMP_PKISI_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_PKISI_it() \
      LP0(0xb22, const ASN1_ITEM *, OSSL_CMP_PKISI_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_PKISI_dup(___a) \
      LP1(0xb28, OSSL_CMP_PKISI *, OSSL_CMP_PKISI_dup , const OSSL_CMP_PKISI *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_snprint_PKIStatusInfo(___statusInfo, ___buf, ___bufsize) \
      LP3(0xb2e, char *, OSSL_CMP_snprint_PKIStatusInfo , const OSSL_CMP_PKISI *, ___statusInfo, a0, char *, ___buf, a1, size_t, ___bufsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_STATUSINFO_new(___status, ___fail_info, ___text) \
      LP3(0xb34, OSSL_CMP_PKISI *, OSSL_CMP_STATUSINFO_new , int, ___status, d0, int, ___fail_info, d1, const char *, ___text, a0,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CMP_MSG_bio(___bio, ___msg) \
      LP2(0xb3a, OSSL_CMP_MSG *, d2i_OSSL_CMP_MSG_bio , BIO *, ___bio, a0, OSSL_CMP_MSG **, ___msg, a1,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CMP_MSG_bio(___bio, ___msg) \
      LP2(0xb40, int, i2d_OSSL_CMP_MSG_bio , BIO *, ___bio, a0, const OSSL_CMP_MSG *, ___msg, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_SRV_process_request(___srv_ctx, ___req) \
      LP2(0xb46, OSSL_CMP_MSG *, OSSL_CMP_SRV_process_request , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, const OSSL_CMP_MSG *, ___req, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_server_perform(___client_ctx, ___req) \
      LP2(0xb4c, OSSL_CMP_MSG *, OSSL_CMP_CTX_server_perform , OSSL_CMP_CTX *, ___client_ctx, a0, const OSSL_CMP_MSG *, ___req, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_SRV_CTX_new(___libctx, ___propq) \
      LP2(0xb52, OSSL_CMP_SRV_CTX *, OSSL_CMP_SRV_CTX_new , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_SRV_CTX_free(___srv_ctx) \
      LP1NR(0xb58, OSSL_CMP_SRV_CTX_free , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_SRV_CTX_init(___srv_ctx, ___custom_ctx, ___process_cert_request, ___process_rr, ___process_genm, ___process_error, ___process_certConf, ___process_pollReq) \
      LP8(0xb5e, int, OSSL_CMP_SRV_CTX_init , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, void *, ___custom_ctx, a1, OSSL_CMP_SRV_cert_request_cb_t, ___process_cert_request, a2, OSSL_CMP_SRV_rr_cb_t, ___process_rr, a3, OSSL_CMP_SRV_genm_cb_t, ___process_genm, d0, OSSL_CMP_SRV_error_cb_t, ___process_error, d1, OSSL_CMP_SRV_certConf_cb_t, ___process_certConf, d2, OSSL_CMP_SRV_pollReq_cb_t, ___process_pollReq, d3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_SRV_CTX_get0_cmp_ctx(___srv_ctx) \
      LP1(0xb64, OSSL_CMP_CTX *, OSSL_CMP_SRV_CTX_get0_cmp_ctx , const OSSL_CMP_SRV_CTX *, ___srv_ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_SRV_CTX_get0_custom_ctx(___srv_ctx) \
      LP1(0xb6a, void *, OSSL_CMP_SRV_CTX_get0_custom_ctx , const OSSL_CMP_SRV_CTX *, ___srv_ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_SRV_CTX_set_send_unprotected_errors(___srv_ctx, ___val) \
      LP2(0xb70, int, OSSL_CMP_SRV_CTX_set_send_unprotected_errors , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, int, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_SRV_CTX_set_accept_unprotected(___srv_ctx, ___val) \
      LP2(0xb76, int, OSSL_CMP_SRV_CTX_set_accept_unprotected , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, int, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_SRV_CTX_set_accept_raverified(___srv_ctx, ___val) \
      LP2(0xb7c, int, OSSL_CMP_SRV_CTX_set_accept_raverified , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, int, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(___srv_ctx, ___val) \
      LP2(0xb82, int, OSSL_CMP_SRV_CTX_set_grant_implicit_confirm , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, int, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_exec_certreq(___ctx, ___req_type, ___crm) \
      LP3(0xb88, X509 *, OSSL_CMP_exec_certreq , OSSL_CMP_CTX *, ___ctx, a0, int, ___req_type, d0, const OSSL_CRMF_MSG *, ___crm, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_try_certreq(___ctx, ___req_type, ___crm, ___checkAfter) \
      LP4(0xb8e, int, OSSL_CMP_try_certreq , OSSL_CMP_CTX *, ___ctx, a0, int, ___req_type, d0, const OSSL_CRMF_MSG *, ___crm, a1, int *, ___checkAfter, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_certConf_cb(___ctx, ___cert, ___fail_info, ___text) \
      LP4(0xb94, int, OSSL_CMP_certConf_cb , OSSL_CMP_CTX *, ___ctx, a0, X509 *, ___cert, a1, int, ___fail_info, d0, const char **, ___text, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_exec_RR_ses(___ctx) \
      LP1(0xb9a, int, OSSL_CMP_exec_RR_ses , OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_exec_GENM_ses(___ctx) \
      LP1(0xba0, STACK_OF(OSSL_CMP_ITAV) *, OSSL_CMP_exec_GENM_ses , OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_MSG_http_perform(___ctx, ___req) \
      LP2(0xba6, OSSL_CMP_MSG *, OSSL_CMP_MSG_http_perform , OSSL_CMP_CTX *, ___ctx, a0, const OSSL_CMP_MSG *, ___req, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_MSG_read(___file, ___libctx, ___propq) \
      LP3(0xbac, OSSL_CMP_MSG *, OSSL_CMP_MSG_read , const char *, ___file, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_MSG_write(___file, ___msg) \
      LP2(0xbb2, int, OSSL_CMP_MSG_write , const char *, ___file, a0, const OSSL_CMP_MSG *, ___msg, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_Q_vkeygen(___libctx, ___propq, ___type, ___args) \
      LP4(0xbb8, EVP_PKEY *, EVP_PKEY_Q_vkeygen , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1, const char *, ___type, a2, va_list, ___args, a3,\
      , AMISSLEXT_BASE_NAME)

#ifndef NO_INLINE_VARARGS
#define EVP_PKEY_Q_keygen(___libctx, ___propq, ___type, ___dummy, ...) \
    ({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; EVP_PKEY_Q_vkeygen((___libctx), (___propq), (___type), (va_list) _message); })
#endif /* !NO_INLINE_VARARGS */

#define EVP_PKEY_generate(___ctx, ___ppkey) \
      LP2(0xbbe, int, EVP_PKEY_generate , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY **, ___ppkey, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_keygen_bits(___ctx, ___bits) \
      LP2(0xbc4, int, EVP_PKEY_CTX_set_rsa_keygen_bits , EVP_PKEY_CTX *, ___ctx, a0, int, ___bits, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_keygen_pubexp(___ctx, ___pubexp) \
      LP2(0xbca, int, EVP_PKEY_CTX_set_rsa_keygen_pubexp , EVP_PKEY_CTX *, ___ctx, a0, BIGNUM *, ___pubexp, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set1_rsa_keygen_pubexp(___ctx, ___pubexp) \
      LP2(0xbd0, int, EVP_PKEY_CTX_set1_rsa_keygen_pubexp , EVP_PKEY_CTX *, ___ctx, a0, BIGNUM *, ___pubexp, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_keygen_primes(___ctx, ___primes) \
      LP2(0xbd6, int, EVP_PKEY_CTX_set_rsa_keygen_primes , EVP_PKEY_CTX *, ___ctx, a0, int, ___primes, d0,\
      , AMISSLEXT_BASE_NAME)

#define NCONF_new_ex(___libctx, ___meth) \
      LP2(0xbdc, CONF *, NCONF_new_ex , OSSL_LIB_CTX *, ___libctx, a0, CONF_METHOD *, ___meth, a1,\
      , AMISSLEXT_BASE_NAME)

#define CONF_modules_load_file_ex(___libctx, ___filename, ___appname, ___flags) \
      LP4(0xbe2, int, CONF_modules_load_file_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___filename, a1, const char *, ___appname, a2, unsigned long, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_LIB_CTX_load_config(___ctx, ___config_file) \
      LP2(0xbe8, int, OSSL_LIB_CTX_load_config , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___config_file, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_to_param(___bld) \
      LP1(0xbee, OSSL_PARAM *, OSSL_PARAM_BLD_to_param , OSSL_PARAM_BLD *, ___bld, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_int(___bld, ___key, ___val) \
      LP3(0xbf4, int, OSSL_PARAM_BLD_push_int , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, int, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_uint(___bld, ___key, ___val) \
      LP3(0xbfa, int, OSSL_PARAM_BLD_push_uint , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, unsigned int, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_long(___bld, ___key, ___val) \
      LP3(0xc00, int, OSSL_PARAM_BLD_push_long , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, long int, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_ulong(___bld, ___key, ___val) \
      LP3(0xc06, int, OSSL_PARAM_BLD_push_ulong , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, unsigned long int, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_int32(___bld, ___key, ___val) \
      LP3(0xc0c, int, OSSL_PARAM_BLD_push_int32 , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, int32_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_uint32(___bld, ___key, ___val) \
      LP3(0xc12, int, OSSL_PARAM_BLD_push_uint32 , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, uint32_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_int64(___bld, ___key, ___val) \
      LP3(0xc18, int, OSSL_PARAM_BLD_push_int64 , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, int64_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_uint64(___bld, ___key, ___val) \
      LP3(0xc1e, int, OSSL_PARAM_BLD_push_uint64 , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, uint64_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_size_t(___bld, ___key, ___val) \
      LP3(0xc24, int, OSSL_PARAM_BLD_push_size_t , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, size_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_double(___bld, ___key, ___val) \
      LP3(0xc2a, int, OSSL_PARAM_BLD_push_double , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, double, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_BN(___bld, ___key, ___bn) \
      LP3(0xc30, int, OSSL_PARAM_BLD_push_BN , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, const BIGNUM *, ___bn, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_BN_pad(___bld, ___key, ___bn, ___sz) \
      LP4(0xc36, int, OSSL_PARAM_BLD_push_BN_pad , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, const BIGNUM *, ___bn, a2, size_t, ___sz, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_utf8_string(___bld, ___key, ___buf, ___bsize) \
      LP4(0xc3c, int, OSSL_PARAM_BLD_push_utf8_string , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, const char *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_utf8_ptr(___bld, ___key, ___buf, ___bsize) \
      LP4(0xc42, int, OSSL_PARAM_BLD_push_utf8_ptr , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, char *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_octet_string(___bld, ___key, ___buf, ___bsize) \
      LP4(0xc48, int, OSSL_PARAM_BLD_push_octet_string , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, const void *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_octet_ptr(___bld, ___key, ___buf, ___bsize) \
      LP4(0xc4e, int, OSSL_PARAM_BLD_push_octet_ptr , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, void *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_new() \
      LP0(0xc54, OSSL_PARAM_BLD *, OSSL_PARAM_BLD_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_free(___bld) \
      LP1NR(0xc5a, OSSL_PARAM_BLD_free , OSSL_PARAM_BLD *, ___bld, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_set_type_by_keymgmt(___pkey, ___keymgmt) \
      LP2(0xc60, int, EVP_PKEY_set_type_by_keymgmt , EVP_PKEY *, ___pkey, a0, EVP_KEYMGMT *, ___keymgmt, a1,\
      , AMISSLEXT_BASE_NAME)

#define OCSP_RESPID_set_by_key_ex(___respid, ___cert, ___libctx, ___propq) \
      LP4(0xc66, int, OCSP_RESPID_set_by_key_ex , OCSP_RESPID *, ___respid, a0, X509 *, ___cert, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define OCSP_RESPID_match_ex(___respid, ___cert, ___libctx, ___propq) \
      LP4(0xc6c, int, OCSP_RESPID_match_ex , OCSP_RESPID *, ___respid, a0, X509 *, ___cert, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define SRP_create_verifier_ex(___user, ___pass, ___salt, ___verifier, ___N, ___g, ___libctx, ___propq) \
      LP8(0xc72, char *, SRP_create_verifier_ex , const char *, ___user, a0, const char *, ___pass, a1, char **, ___salt, a2, char **, ___verifier, a3, const char *, ___N, d0, const char *, ___g, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME)

#define SRP_create_verifier_BN_ex(___user, ___pass, ___salt, ___verifier, ___N, ___g, ___libctx, ___propq) \
      LP8(0xc78, int, SRP_create_verifier_BN_ex , const char *, ___user, a0, const char *, ___pass, a1, BIGNUM **, ___salt, a2, BIGNUM **, ___verifier, a3, const BIGNUM *, ___N, d0, const BIGNUM *, ___g, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME)

#define SRP_Calc_B_ex(___b, ___N, ___g, ___v, ___libctx, ___propq) \
      LP6(0xc7e, BIGNUM *, SRP_Calc_B_ex , const BIGNUM *, ___b, a0, const BIGNUM *, ___N, a1, const BIGNUM *, ___g, a2, const BIGNUM *, ___v, a3, OSSL_LIB_CTX *, ___libctx, d0, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define SRP_Calc_u_ex(___A, ___B, ___N, ___libctx, ___propq) \
      LP5(0xc84, BIGNUM *, SRP_Calc_u_ex , const BIGNUM *, ___A, a0, const BIGNUM *, ___B, a1, const BIGNUM *, ___N, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d0,\
      , AMISSLEXT_BASE_NAME)

#define SRP_Calc_x_ex(___s, ___user, ___pass, ___libctx, ___propq) \
      LP5(0xc8a, BIGNUM *, SRP_Calc_x_ex , const BIGNUM *, ___s, a0, const char *, ___user, a1, const char *, ___pass, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d0,\
      , AMISSLEXT_BASE_NAME)

#define SRP_Calc_client_key_ex(___N, ___B, ___g, ___x, ___a, ___u, ___libctx, ___propq) \
      LP8(0xc90, BIGNUM *, SRP_Calc_client_key_ex , const BIGNUM *, ___N, a0, const BIGNUM *, ___B, a1, const BIGNUM *, ___g, a2, const BIGNUM *, ___x, a3, const BIGNUM *, ___a, d0, const BIGNUM *, ___u, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_gettable_params(___pkey) \
      LP1(0xc96, const OSSL_PARAM *, EVP_PKEY_gettable_params , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get_int_param(___pkey, ___key_name, ___out) \
      LP3(0xc9c, int, EVP_PKEY_get_int_param , const EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, int *, ___out, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get_size_t_param(___pkey, ___key_name, ___out) \
      LP3(0xca2, int, EVP_PKEY_get_size_t_param , const EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, size_t *, ___out, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get_bn_param(___pkey, ___key_name, ___bn) \
      LP3(0xca8, int, EVP_PKEY_get_bn_param , const EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, BIGNUM **, ___bn, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get_utf8_string_param(___pkey, ___key_name, ___str, ___max_buf_sz, ___out_sz) \
      LP5(0xcae, int, EVP_PKEY_get_utf8_string_param , const EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, char *, ___str, a2, size_t, ___max_buf_sz, d0, size_t *, ___out_sz, a3,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get_octet_string_param(___pkey, ___key_name, ___buf, ___max_buf_sz, ___out_sz) \
      LP5(0xcb4, int, EVP_PKEY_get_octet_string_param , const EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, unsigned char *, ___buf, a2, size_t, ___max_buf_sz, d0, size_t *, ___out_sz, a3,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_is_a(___pkey, ___name) \
      LP2(0xcba, int, EVP_PKEY_is_a , const EVP_PKEY *, ___pkey, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_can_sign(___pkey) \
      LP1(0xcc0, int, EVP_PKEY_can_sign , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_CTX_new_ex(___libctx, ___propq) \
      LP2(0xcc6, X509_STORE_CTX *, X509_STORE_CTX_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_CTX_verify(___ctx) \
      LP1(0xccc, int, X509_STORE_CTX_verify , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define CT_POLICY_EVAL_CTX_new_ex(___libctx, ___propq) \
      LP2(0xcd2, CT_POLICY_EVAL_CTX *, CT_POLICY_EVAL_CTX_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define CTLOG_new_ex(___public_key, ___name, ___libctx, ___propq) \
      LP4(0xcd8, CTLOG *, CTLOG_new_ex , EVP_PKEY *, ___public_key, a0, const char *, ___name, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define CTLOG_new_from_base64_ex(___ct_log, ___pkey_base64, ___name, ___libctx, ___propq) \
      LP5(0xcde, int, CTLOG_new_from_base64_ex , CTLOG **, ___ct_log, a0, const char *, ___pkey_base64, a1, const char *, ___name, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d0,\
      , AMISSLEXT_BASE_NAME)

#define CTLOG_STORE_new_ex(___libctx, ___propq) \
      LP2(0xce4, CTLOG_STORE *, CTLOG_STORE_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_set_ex_data(___key, ___idx, ___arg) \
      LP3(0xcea, int, EVP_PKEY_set_ex_data , EVP_PKEY *, ___key, a0, int, ___idx, d0, void *, ___arg, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get_ex_data(___key, ___idx) \
      LP2(0xcf0, void *, EVP_PKEY_get_ex_data , const EVP_PKEY *, ___key, a0, int, ___idx, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_group_name(___ctx, ___name) \
      LP2(0xcf6, int, EVP_PKEY_CTX_set_group_name , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_group_name(___ctx, ___name, ___namelen) \
      LP3(0xcfc, int, EVP_PKEY_CTX_get_group_name , EVP_PKEY_CTX *, ___ctx, a0, char *, ___name, a1, size_t, ___namelen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_ec_paramgen_curve_nid(___ctx, ___nid) \
      LP2(0xd02, int, EVP_PKEY_CTX_set_ec_paramgen_curve_nid , EVP_PKEY_CTX *, ___ctx, a0, int, ___nid, d0,\
      , AMISSLEXT_BASE_NAME)

#define d2i_PrivateKey_ex(___type, ___a, ___pp, ___length, ___libctx, ___propq) \
      LP6(0xd08, EVP_PKEY *, d2i_PrivateKey_ex , int, ___type, d0, EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define d2i_AutoPrivateKey_ex(___a, ___pp, ___length, ___libctx, ___propq) \
      LP5(0xd0e, EVP_PKEY *, d2i_AutoPrivateKey_ex , EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define d2i_PrivateKey_ex_bio(___bp, ___a, ___libctx, ___propq) \
      LP4(0xd14, EVP_PKEY *, d2i_PrivateKey_ex_bio , BIO *, ___bp, a0, EVP_PKEY **, ___a, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define PEM_read_bio_PrivateKey_ex(___out, ___x, ___cb, ___u, ___libctx, ___propq) \
      LP6(0xd1a, EVP_PKEY *, PEM_read_bio_PrivateKey_ex , BIO *, ___out, a0, EVP_PKEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3, OSSL_LIB_CTX *, ___libctx, d0, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dsa_paramgen_bits(___ctx, ___nbits) \
      LP2(0xd20, int, EVP_PKEY_CTX_set_dsa_paramgen_bits , EVP_PKEY_CTX *, ___ctx, a0, int, ___nbits, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dsa_paramgen_q_bits(___ctx, ___qbits) \
      LP2(0xd26, int, EVP_PKEY_CTX_set_dsa_paramgen_q_bits , EVP_PKEY_CTX *, ___ctx, a0, int, ___qbits, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dsa_paramgen_md_props(___ctx, ___md_name, ___md_properties) \
      LP3(0xd2c, int, EVP_PKEY_CTX_set_dsa_paramgen_md_props , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___md_name, a1, const char *, ___md_properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dsa_paramgen_gindex(___ctx, ___gindex) \
      LP2(0xd32, int, EVP_PKEY_CTX_set_dsa_paramgen_gindex , EVP_PKEY_CTX *, ___ctx, a0, int, ___gindex, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dsa_paramgen_type(___ctx, ___name) \
      LP2(0xd38, int, EVP_PKEY_CTX_set_dsa_paramgen_type , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dsa_paramgen_seed(___ctx, ___seed, ___seedlen) \
      LP3(0xd3e, int, EVP_PKEY_CTX_set_dsa_paramgen_seed , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___seed, a1, size_t, ___seedlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dsa_paramgen_md(___ctx, ___md) \
      LP2(0xd44, int, EVP_PKEY_CTX_set_dsa_paramgen_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dh_paramgen_type(___ctx, ___typ) \
      LP2(0xd4a, int, EVP_PKEY_CTX_set_dh_paramgen_type , EVP_PKEY_CTX *, ___ctx, a0, int, ___typ, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dh_paramgen_gindex(___ctx, ___gindex) \
      LP2(0xd50, int, EVP_PKEY_CTX_set_dh_paramgen_gindex , EVP_PKEY_CTX *, ___ctx, a0, int, ___gindex, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dh_paramgen_seed(___ctx, ___seed, ___seedlen) \
      LP3(0xd56, int, EVP_PKEY_CTX_set_dh_paramgen_seed , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___seed, a1, size_t, ___seedlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dh_paramgen_prime_len(___ctx, ___pbits) \
      LP2(0xd5c, int, EVP_PKEY_CTX_set_dh_paramgen_prime_len , EVP_PKEY_CTX *, ___ctx, a0, int, ___pbits, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dh_paramgen_subprime_len(___ctx, ___qlen) \
      LP2(0xd62, int, EVP_PKEY_CTX_set_dh_paramgen_subprime_len , EVP_PKEY_CTX *, ___ctx, a0, int, ___qlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dh_paramgen_generator(___ctx, ___gen) \
      LP2(0xd68, int, EVP_PKEY_CTX_set_dh_paramgen_generator , EVP_PKEY_CTX *, ___ctx, a0, int, ___gen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dh_nid(___ctx, ___nid) \
      LP2(0xd6e, int, EVP_PKEY_CTX_set_dh_nid , EVP_PKEY_CTX *, ___ctx, a0, int, ___nid, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dh_rfc5114(___ctx, ___gen) \
      LP2(0xd74, int, EVP_PKEY_CTX_set_dh_rfc5114 , EVP_PKEY_CTX *, ___ctx, a0, int, ___gen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dhx_rfc5114(___ctx, ___gen) \
      LP2(0xd7a, int, EVP_PKEY_CTX_set_dhx_rfc5114 , EVP_PKEY_CTX *, ___ctx, a0, int, ___gen, d0,\
      , AMISSLEXT_BASE_NAME)

#define X509_VERIFY_PARAM_get0_host(___param, ___idx) \
      LP2(0xd80, char *, X509_VERIFY_PARAM_get0_host , X509_VERIFY_PARAM *, ___param, a0, int, ___idx, d0,\
      , AMISSLEXT_BASE_NAME)

#define X509_VERIFY_PARAM_get0_email(___param) \
      LP1(0xd86, char *, X509_VERIFY_PARAM_get0_email , X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_VERIFY_PARAM_get1_ip_asc(___param) \
      LP1(0xd8c, char *, X509_VERIFY_PARAM_get1_ip_asc , X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_modified(___p) \
      LP1(0xd92, int, OSSL_PARAM_modified , const OSSL_PARAM *, ___p, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_all_unmodified(___p) \
      LP1NR(0xd98, OSSL_PARAM_set_all_unmodified , OSSL_PARAM *, ___p, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_fetch(___libctx, ___algorithm, ___properties) \
      LP3(0xd9e, EVP_RAND *, EVP_RAND_fetch , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_up_ref(___rand) \
      LP1(0xda4, int, EVP_RAND_up_ref , EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_free(___rand) \
      LP1NR(0xdaa, EVP_RAND_free , EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_get0_name(___rand) \
      LP1(0xdb0, const char *, EVP_RAND_get0_name , const EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_is_a(___rand, ___name) \
      LP2(0xdb6, int, EVP_RAND_is_a , const EVP_RAND *, ___rand, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_get0_provider(___rand) \
      LP1(0xdbc, const OSSL_PROVIDER *, EVP_RAND_get0_provider , const EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_get_params(___rand, ___params) \
      LP2(0xdc2, int, EVP_RAND_get_params , EVP_RAND *, ___rand, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_CTX_new(___rand, ___parent) \
      LP2(0xdc8, EVP_RAND_CTX *, EVP_RAND_CTX_new , EVP_RAND *, ___rand, a0, EVP_RAND_CTX *, ___parent, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_CTX_free(___ctx) \
      LP1NR(0xdce, EVP_RAND_CTX_free , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_CTX_get0_rand(___ctx) \
      LP1(0xdd4, EVP_RAND *, EVP_RAND_CTX_get0_rand , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_CTX_get_params(___ctx, ___params) \
      LP2(0xdda, int, EVP_RAND_CTX_get_params , EVP_RAND_CTX *, ___ctx, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_CTX_set_params(___ctx, ___params) \
      LP2(0xde0, int, EVP_RAND_CTX_set_params , EVP_RAND_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_gettable_params(___rand) \
      LP1(0xde6, const OSSL_PARAM *, EVP_RAND_gettable_params , const EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_gettable_ctx_params(___rand) \
      LP1(0xdec, const OSSL_PARAM *, EVP_RAND_gettable_ctx_params , const EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_settable_ctx_params(___rand) \
      LP1(0xdf2, const OSSL_PARAM *, EVP_RAND_settable_ctx_params , const EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0xdf8, EVP_RAND_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_RAND *rand,void *arg))

#define EVP_RAND_names_do_all(___rand, ___fn, ___data) \
      LP3FP(0xdfe, int, EVP_RAND_names_do_all , const EVP_RAND *, ___rand, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define EVP_RAND_instantiate(___ctx, ___strength, ___prediction_resistance, ___pstr, ___pstr_len, ___params) \
      LP6(0xe04, int, EVP_RAND_instantiate , EVP_RAND_CTX *, ___ctx, a0, unsigned int, ___strength, d0, int, ___prediction_resistance, d1, const unsigned char *, ___pstr, a1, size_t, ___pstr_len, d2, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_uninstantiate(___ctx) \
      LP1(0xe0a, int, EVP_RAND_uninstantiate , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_generate(___ctx, ___out, ___outlen, ___strength, ___prediction_resistance, ___addin, ___addin_len) \
      LP7(0xe10, int, EVP_RAND_generate , EVP_RAND_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t, ___outlen, d0, unsigned int, ___strength, d1, int, ___prediction_resistance, d2, const unsigned char *, ___addin, a2, size_t, ___addin_len, d3,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_reseed(___ctx, ___prediction_resistance, ___ent, ___ent_len, ___addin, ___addin_len) \
      LP6(0xe16, int, EVP_RAND_reseed , EVP_RAND_CTX *, ___ctx, a0, int, ___prediction_resistance, d0, const unsigned char *, ___ent, a1, size_t, ___ent_len, d1, const unsigned char *, ___addin, a2, size_t, ___addin_len, d2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_nonce(___ctx, ___out, ___outlen) \
      LP3(0xe1c, int, EVP_RAND_nonce , EVP_RAND_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t, ___outlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_enable_locking(___ctx) \
      LP1(0xe22, int, EVP_RAND_enable_locking , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_verify_zeroization(___ctx) \
      LP1(0xe28, int, EVP_RAND_verify_zeroization , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_get_strength(___ctx) \
      LP1(0xe2e, unsigned int, EVP_RAND_get_strength , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_get_state(___ctx) \
      LP1(0xe34, int, EVP_RAND_get_state , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_default_properties_is_fips_enabled(___libctx) \
      LP1(0xe3a, int, EVP_default_properties_is_fips_enabled , OSSL_LIB_CTX *, ___libctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_default_properties_enable_fips(___libctx, ___enable) \
      LP2(0xe40, int, EVP_default_properties_enable_fips , OSSL_LIB_CTX *, ___libctx, a0, int, ___enable, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_new_raw_private_key_ex(___libctx, ___keytype, ___propq, ___priv, ___len) \
      LP5(0xe46, EVP_PKEY *, EVP_PKEY_new_raw_private_key_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___keytype, a1, const char *, ___propq, a2, const unsigned char *, ___priv, a3, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_new_raw_public_key_ex(___libctx, ___keytype, ___propq, ___pub, ___len) \
      LP5(0xe4c, EVP_PKEY *, EVP_PKEY_new_raw_public_key_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___keytype, a1, const char *, ___propq, a2, const unsigned char *, ___pub, a3, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_BLD_push_time_t(___bld, ___key, ___val) \
      LP3(0xe52, int, OSSL_PARAM_BLD_push_time_t , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, time_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_construct_time_t_amiga(___result, ___key, ___buf) \
      LP3NR(0xe58, OSSL_PARAM_construct_time_t_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, time_t *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_time_t(___p, ___val) \
      LP2(0xe5e, int, OSSL_PARAM_get_time_t , const OSSL_PARAM *, ___p, a0, time_t *, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_set_time_t(___p, ___val) \
      LP2(0xe64, int, OSSL_PARAM_set_time_t , OSSL_PARAM *, ___p, a0, time_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_attach(___bio, ___scheme, ___libctx, ___propq, ___ui_method, ___ui_data, ___params, ___post_process, ___post_process_data) \
      LP9(0xe6a, OSSL_STORE_CTX *, OSSL_STORE_attach , BIO *, ___bio, a0, const char *, ___scheme, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3, const UI_METHOD *, ___ui_method, d0, void *, ___ui_data, d1, const OSSL_PARAM *, ___params, d2, OSSL_STORE_post_process_info_fn, ___post_process, d3, void *, ___post_process_data, d4,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_LOADER_set_attach(___loader, ___attach_function) \
      LP2(0xe70, int, OSSL_STORE_LOADER_set_attach , OSSL_STORE_LOADER *, ___loader, a0, OSSL_STORE_attach_fn, ___attach_function, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(___ctx, ___saltlen) \
      LP2(0xe76, int, EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen , EVP_PKEY_CTX *, ___ctx, a0, int, ___saltlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(___ctx, ___md) \
      LP2(0xe7c, int, EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(___ctx, ___mdname) \
      LP2(0xe82, int, EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___mdname, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_do_all(___ctx, ___cb, ___cbdata) \
      LP3FP(0xe88, int, OSSL_PROVIDER_do_all , OSSL_LIB_CTX *, ___ctx, a0, __fpt, ___cb, a1, void *, ___cbdata, a2,\
      , AMISSLEXT_BASE_NAME, int (*__fpt)(OSSL_PROVIDER *provider,void *cbdata))

#define EC_GROUP_get_field_type(___group) \
      LP1(0xe8e, int, EC_GROUP_get_field_type , const EC_GROUP *, ___group, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_PUBKEY_eq(___a, ___b) \
      LP2(0xe94, int, X509_PUBKEY_eq , const X509_PUBKEY *, ___a, a0, const X509_PUBKEY *, ___b, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_eq(___a, ___b) \
      LP2(0xe9a, int, EVP_PKEY_eq , const EVP_PKEY *, ___a, a0, const EVP_PKEY *, ___b, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_parameters_eq(___a, ___b) \
      LP2(0xea0, int, EVP_PKEY_parameters_eq , const EVP_PKEY *, ___a, a0, const EVP_PKEY *, ___b, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_query_operation(___prov, ___operation_id, ___no_cache) \
      LP3(0xea6, const OSSL_ALGORITHM *, OSSL_PROVIDER_query_operation , const OSSL_PROVIDER *, ___prov, a0, int, ___operation_id, d0, int *, ___no_cache, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_unquery_operation(___prov, ___operation_id, ___algs) \
      LP3NR(0xeac, OSSL_PROVIDER_unquery_operation , const OSSL_PROVIDER *, ___prov, a0, int, ___operation_id, d0, const OSSL_ALGORITHM *, ___algs, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_get0_provider_ctx(___prov) \
      LP1(0xeb2, void *, OSSL_PROVIDER_get0_provider_ctx , const OSSL_PROVIDER *, ___prov, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_get_capabilities(___prov, ___capability, ___cb, ___arg) \
      LP4(0xeb8, int, OSSL_PROVIDER_get_capabilities , const OSSL_PROVIDER *, ___prov, a0, const char *, ___capability, a1, OSSL_CALLBACK *, ___cb, a2, void *, ___arg, a3,\
      , AMISSLEXT_BASE_NAME)

#define EC_GROUP_new_by_curve_name_ex(___libctx, ___propq, ___nid) \
      LP3(0xebe, EC_GROUP *, EC_GROUP_new_by_curve_name_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1, int, ___nid, d0,\
      , AMISSLEXT_BASE_NAME)

#define EC_KEY_new_ex(___ctx, ___propq) \
      LP2(0xec4, EC_KEY *, EC_KEY_new_ex , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define EC_KEY_new_by_curve_name_ex(___ctx, ___propq, ___nid) \
      LP3(0xeca, EC_KEY *, EC_KEY_new_by_curve_name_ex , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___propq, a1, int, ___nid, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_LIB_CTX_set0_default(___libctx) \
      LP1(0xed0, OSSL_LIB_CTX *, OSSL_LIB_CTX_set0_default , OSSL_LIB_CTX *, ___libctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define PEM_X509_INFO_read_bio_ex(___bp, ___sk, ___cb, ___u, ___libctx, ___propq) \
      LP6(0xed6, STACK_OF(X509_INFO) *, PEM_X509_INFO_read_bio_ex , BIO *, ___bp, a0, STACK_OF(X509_INFO) *, ___sk, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3, OSSL_LIB_CTX *, ___libctx, d0, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define X509_REQ_verify_ex(___a, ___r, ___libctx, ___propq) \
      LP4(0xedc, int, X509_REQ_verify_ex , X509_REQ *, ___a, a0, EVP_PKEY *, ___r, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define X509_new_ex(___libctx, ___propq) \
      LP2(0xee2, X509 *, X509_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_LOOKUP_ctrl_ex(___ctx, ___cmd, ___argc, ___argl, ___ret, ___libctx, ___propq) \
      LP7(0xee8, int, X509_LOOKUP_ctrl_ex , X509_LOOKUP *, ___ctx, a0, int, ___cmd, d0, const char *, ___argc, a1, long, ___argl, d1, char **, ___ret, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME)

#define X509_load_cert_file_ex(___ctx, ___file, ___type, ___libctx, ___propq) \
      LP5(0xeee, int, X509_load_cert_file_ex , X509_LOOKUP *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define X509_load_cert_crl_file_ex(___ctx, ___file, ___type, ___libctx, ___propq) \
      LP5(0xef4, int, X509_load_cert_crl_file_ex , X509_LOOKUP *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define X509_LOOKUP_by_subject_ex(___ctx, ___type, ___name, ___ret, ___libctx, ___propq) \
      LP6(0xefa, int, X509_LOOKUP_by_subject_ex , X509_LOOKUP *, ___ctx, a0, X509_LOOKUP_TYPE, ___type, d0, const X509_NAME *, ___name, a1, X509_OBJECT *, ___ret, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_load_file_ex(___xs, ___file, ___libctx, ___propq) \
      LP4(0xf00, int, X509_STORE_load_file_ex , X509_STORE *, ___xs, a0, const char *, ___file, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_load_store_ex(___xs, ___store, ___libctx, ___propq) \
      LP4(0xf06, int, X509_STORE_load_store_ex , X509_STORE *, ___xs, a0, const char *, ___store, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_load_locations_ex(___xs, ___file, ___dir, ___libctx, ___propq) \
      LP5(0xf0c, int, X509_STORE_load_locations_ex , X509_STORE *, ___xs, a0, const char *, ___file, a1, const char *, ___dir, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d0,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_set_default_paths_ex(___xs, ___libctx, ___propq) \
      LP3(0xf12, int, X509_STORE_set_default_paths_ex , X509_STORE *, ___xs, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define X509_build_chain(___target, ___certs, ___store, ___with_self_signed, ___libctx, ___propq) \
      LP6(0xf18, STACK_OF(X509) *, X509_build_chain , X509 *, ___target, a0, STACK_OF(X509) *, ___certs, a1, X509_STORE *, ___store, a2, int, ___with_self_signed, d0, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define X509V3_set_issuer_pkey(___ctx, ___pkey) \
      LP2(0xf1e, int, X509V3_set_issuer_pkey , X509V3_CTX *, ___ctx, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSLEXT_BASE_NAME)

#define i2s_ASN1_UTF8STRING(___method, ___utf8) \
      LP2(0xf24, char *, i2s_ASN1_UTF8STRING , X509V3_EXT_METHOD *, ___method, a0, ASN1_UTF8STRING *, ___utf8, a1,\
      , AMISSLEXT_BASE_NAME)

#define s2i_ASN1_UTF8STRING(___method, ___ctx, ___str) \
      LP3(0xf2a, ASN1_UTF8STRING *, s2i_ASN1_UTF8STRING , X509V3_EXT_METHOD *, ___method, a0, X509V3_CTX *, ___ctx, a1, const char *, ___str, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_open_ex(___uri, ___libctx, ___propq, ___ui_method, ___ui_data, ___params, ___post_process, ___post_process_data) \
      LP8(0xf30, OSSL_STORE_CTX *, OSSL_STORE_open_ex , const char *, ___uri, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2, const UI_METHOD *, ___ui_method, a3, void *, ___ui_data, d0, const OSSL_PARAM *, ___params, d1, OSSL_STORE_post_process_info_fn, ___post_process, d2, void *, ___post_process_data, d3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_fetch(___libctx, ___name, ___properties) \
      LP3(0xf36, OSSL_DECODER *, OSSL_DECODER_fetch , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___name, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_up_ref(___encoder) \
      LP1(0xf3c, int, OSSL_DECODER_up_ref , OSSL_DECODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_free(___encoder) \
      LP1NR(0xf42, OSSL_DECODER_free , OSSL_DECODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_get0_provider(___encoder) \
      LP1(0xf48, const OSSL_PROVIDER *, OSSL_DECODER_get0_provider , const OSSL_DECODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_get0_properties(___encoder) \
      LP1(0xf4e, const char *, OSSL_DECODER_get0_properties , const OSSL_DECODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_is_a(___encoder, ___name) \
      LP2(0xf54, int, OSSL_DECODER_is_a , const OSSL_DECODER *, ___encoder, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0xf5a, OSSL_DECODER_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(OSSL_DECODER *encoder,void *arg))

#define OSSL_DECODER_names_do_all(___encoder, ___fn, ___data) \
      LP3FP(0xf60, int, OSSL_DECODER_names_do_all , const OSSL_DECODER *, ___encoder, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define OSSL_DECODER_settable_ctx_params(___encoder) \
      LP1(0xf66, const OSSL_PARAM *, OSSL_DECODER_settable_ctx_params , OSSL_DECODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_new() \
      LP0(0xf6c, OSSL_DECODER_CTX *, OSSL_DECODER_CTX_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_set_params(___ctx, ___params) \
      LP2(0xf72, int, OSSL_DECODER_CTX_set_params , OSSL_DECODER_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_free(___ctx) \
      LP1NR(0xf78, OSSL_DECODER_CTX_free , OSSL_DECODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_set_passphrase(___ctx, ___kstr, ___klen) \
      LP3(0xf7e, int, OSSL_DECODER_CTX_set_passphrase , OSSL_DECODER_CTX *, ___ctx, a0, const unsigned char *, ___kstr, a1, size_t, ___klen, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_set_pem_password_cb(___ctx, ___cb, ___cbarg) \
      LP3(0xf84, int, OSSL_DECODER_CTX_set_pem_password_cb , OSSL_DECODER_CTX *, ___ctx, a0, pem_password_cb *, ___cb, a1, void *, ___cbarg, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_set_passphrase_ui(___ctx, ___ui_method, ___ui_data) \
      LP3(0xf8a, int, OSSL_DECODER_CTX_set_passphrase_ui , OSSL_DECODER_CTX *, ___ctx, a0, const UI_METHOD *, ___ui_method, a1, void *, ___ui_data, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_from_bio(___ctx, ___in) \
      LP2(0xf90, int, OSSL_DECODER_from_bio , OSSL_DECODER_CTX *, ___ctx, a0, BIO *, ___in, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_add_decoder(___ctx, ___decoder) \
      LP2(0xf96, int, OSSL_DECODER_CTX_add_decoder , OSSL_DECODER_CTX *, ___ctx, a0, OSSL_DECODER *, ___decoder, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_add_extra(___ctx, ___libctx, ___propq) \
      LP3(0xf9c, int, OSSL_DECODER_CTX_add_extra , OSSL_DECODER_CTX *, ___ctx, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_get_num_decoders(___ctx) \
      LP1(0xfa2, int, OSSL_DECODER_CTX_get_num_decoders , OSSL_DECODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_set_input_type(___ctx, ___input_type) \
      LP2(0xfa8, int, OSSL_DECODER_CTX_set_input_type , OSSL_DECODER_CTX *, ___ctx, a0, const char *, ___input_type, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_export(___decoder_inst, ___reference, ___reference_sz, ___export_cb, ___export_cbarg) \
      LP5(0xfae, int, OSSL_DECODER_export , OSSL_DECODER_INSTANCE *, ___decoder_inst, a0, void *, ___reference, a1, size_t, ___reference_sz, d0, OSSL_CALLBACK *, ___export_cb, a2, void *, ___export_cbarg, a3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_INSTANCE_get_decoder(___decoder_inst) \
      LP1(0xfb4, OSSL_DECODER *, OSSL_DECODER_INSTANCE_get_decoder , OSSL_DECODER_INSTANCE *, ___decoder_inst, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_INSTANCE_get_decoder_ctx(___decoder_inst) \
      LP1(0xfba, void *, OSSL_DECODER_INSTANCE_get_decoder_ctx , OSSL_DECODER_INSTANCE *, ___decoder_inst, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_gettable_params(___decoder) \
      LP1(0xfc0, const OSSL_PARAM *, OSSL_DECODER_gettable_params , OSSL_DECODER *, ___decoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_get_params(___decoder, ___params) \
      LP2(0xfc6, int, OSSL_DECODER_get_params , OSSL_DECODER *, ___decoder, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_new_for_pkey(___pkey, ___input_type, ___input_struct, ___keytype, ___selection, ___libctx, ___propquery) \
      LP7(0xfcc, OSSL_DECODER_CTX *, OSSL_DECODER_CTX_new_for_pkey , EVP_PKEY **, ___pkey, a0, const char *, ___input_type, a1, const char *, ___input_struct, a2, const char *, ___keytype, a3, int, ___selection, d0, OSSL_LIB_CTX *, ___libctx, d1, const char *, ___propquery, d2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_set_construct(___ctx, ___construct) \
      LP2(0xfd2, int, OSSL_DECODER_CTX_set_construct , OSSL_DECODER_CTX *, ___ctx, a0, OSSL_DECODER_CONSTRUCT *, ___construct, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_set_construct_data(___ctx, ___construct_data) \
      LP2(0xfd8, int, OSSL_DECODER_CTX_set_construct_data , OSSL_DECODER_CTX *, ___ctx, a0, void *, ___construct_data, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_set_cleanup(___ctx, ___cleanup) \
      LP2(0xfde, int, OSSL_DECODER_CTX_set_cleanup , OSSL_DECODER_CTX *, ___ctx, a0, OSSL_DECODER_CLEANUP *, ___cleanup, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_get_construct(___ctx) \
      LP1(0xfe4, OSSL_DECODER_CONSTRUCT *, OSSL_DECODER_CTX_get_construct , OSSL_DECODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_get_construct_data(___ctx) \
      LP1(0xfea, void *, OSSL_DECODER_CTX_get_construct_data , OSSL_DECODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_get_cleanup(___ctx) \
      LP1(0xff0, OSSL_DECODER_CLEANUP *, OSSL_DECODER_CTX_get_cleanup , OSSL_DECODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define RAND_get0_primary(___ctx) \
      LP1(0xff6, EVP_RAND_CTX *, RAND_get0_primary , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define RAND_get0_public(___ctx) \
      LP1(0xffc, EVP_RAND_CTX *, RAND_get0_public , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define RAND_get0_private(___ctx) \
      LP1(0x1002, EVP_RAND_CTX *, RAND_get0_private , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_SAFEBAG_get0_bag_obj(___bag) \
      LP1(0x1008, const ASN1_TYPE *, PKCS12_SAFEBAG_get0_bag_obj , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_SAFEBAG_get0_bag_type(___bag) \
      LP1(0x100e, const ASN1_OBJECT *, PKCS12_SAFEBAG_get0_bag_type , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_SAFEBAG_create_secret(___type, ___vtype, ___value, ___len) \
      LP4(0x1014, PKCS12_SAFEBAG *, PKCS12_SAFEBAG_create_secret , int, ___type, d0, int, ___vtype, d1, const unsigned char *, ___value, a0, int, ___len, d2,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_add1_attr_by_NID(___bag, ___nid, ___type, ___bytes, ___len) \
      LP5(0x101a, int, PKCS12_add1_attr_by_NID , PKCS12_SAFEBAG *, ___bag, a0, int, ___nid, d0, int, ___type, d1, const unsigned char *, ___bytes, a1, int, ___len, d2,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_add1_attr_by_txt(___bag, ___attrname, ___type, ___bytes, ___len) \
      LP5(0x1020, int, PKCS12_add1_attr_by_txt , PKCS12_SAFEBAG *, ___bag, a0, const char *, ___attrname, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_add_secret(___pbags, ___nid_type, ___value, ___len) \
      LP4(0x1026, PKCS12_SAFEBAG *, PKCS12_add_secret , STACK_OF(PKCS12_SAFEBAG) **, ___pbags, a0, int, ___nid_type, d0, const unsigned char *, ___value, a1, int, ___len, d1,\
      , AMISSLEXT_BASE_NAME)

#define SMIME_write_ASN1_ex(___bio, ___val, ___data, ___flags, ___ctype_nid, ___econt_nid, ___mdalgs, ___it, ___libctx, ___propq) \
      LP10(0x102c, int, SMIME_write_ASN1_ex , BIO *, ___bio, a0, ASN1_VALUE *, ___val, a1, BIO *, ___data, a2, int, ___flags, d0, int, ___ctype_nid, d1, int, ___econt_nid, d2, STACK_OF(X509_ALGOR) *, ___mdalgs, a3, const ASN1_ITEM *, ___it, d3, OSSL_LIB_CTX *, ___libctx, d4, const char *, ___propq, d5,\
      , AMISSLEXT_BASE_NAME)

#define SMIME_read_ASN1_ex(___bio, ___flags, ___bcont, ___it, ___x, ___libctx, ___propq) \
      LP7(0x1032, ASN1_VALUE *, SMIME_read_ASN1_ex , BIO *, ___bio, a0, int, ___flags, d0, BIO **, ___bcont, a1, const ASN1_ITEM *, ___it, a2, ASN1_VALUE **, ___x, a3, OSSL_LIB_CTX *, ___libctx, d1, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME)

#define CMS_ContentInfo_new_ex(___libctx, ___propq) \
      LP2(0x1038, CMS_ContentInfo *, CMS_ContentInfo_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define SMIME_read_CMS_ex(___bio, ___flags, ___bcont, ___ci) \
      LP4(0x103e, CMS_ContentInfo *, SMIME_read_CMS_ex , BIO *, ___bio, a0, int, ___flags, d0, BIO **, ___bcont, a1, CMS_ContentInfo **, ___ci, a2,\
      , AMISSLEXT_BASE_NAME)

#define CMS_sign_ex(___signcert, ___pkey, ___certs, ___data, ___flags, ___libctx, ___propq) \
      LP7(0x1044, CMS_ContentInfo *, CMS_sign_ex , X509 *, ___signcert, a0, EVP_PKEY *, ___pkey, a1, STACK_OF(X509) *, ___certs, a2, BIO *, ___data, a3, unsigned int, ___flags, d0, OSSL_LIB_CTX *, ___libctx, d1, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME)

#define CMS_data_create_ex(___in, ___flags, ___libctx, ___propq) \
      LP4(0x104a, CMS_ContentInfo *, CMS_data_create_ex , BIO *, ___in, a0, unsigned int, ___flags, d0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define CMS_digest_create_ex(___in, ___md, ___flags, ___libctx, ___propq) \
      LP5(0x1050, CMS_ContentInfo *, CMS_digest_create_ex , BIO *, ___in, a0, const EVP_MD *, ___md, a1, unsigned int, ___flags, d0, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define CMS_EncryptedData_encrypt_ex(___in, ___cipher, ___key, ___keylen, ___flags, ___libctx, ___propq) \
      LP7(0x1056, CMS_ContentInfo *, CMS_EncryptedData_encrypt_ex , BIO *, ___in, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, size_t, ___keylen, d0, unsigned int, ___flags, d1, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME)

#define CMS_encrypt_ex(___certs, ___in, ___cipher, ___flags, ___libctx, ___propq) \
      LP6(0x105c, CMS_ContentInfo *, CMS_encrypt_ex , STACK_OF(X509) *, ___certs, a0, BIO *, ___in, a1, const EVP_CIPHER *, ___cipher, a2, unsigned int, ___flags, d0, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define CMS_EnvelopedData_create_ex(___cipher, ___libctx, ___propq) \
      LP3(0x1062, CMS_ContentInfo *, CMS_EnvelopedData_create_ex , const EVP_CIPHER *, ___cipher, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define CMS_ReceiptRequest_create0_ex(___id, ___idlen, ___allorfirst, ___receiptList, ___receiptsTo, ___libctx) \
      LP6(0x1068, CMS_ReceiptRequest *, CMS_ReceiptRequest_create0_ex , unsigned char *, ___id, a0, int, ___idlen, d0, int, ___allorfirst, d1, STACK_OF(GENERAL_NAMES) *, ___receiptList, a1, STACK_OF(GENERAL_NAMES) *, ___receiptsTo, a2, OSSL_LIB_CTX *, ___libctx, a3,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SignFinal_ex(___ctx, ___md, ___s, ___pkey, ___libctx, ___propq) \
      LP6(0x106e, int, EVP_SignFinal_ex , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___md, a1, unsigned int *, ___s, a2, EVP_PKEY *, ___pkey, a3, OSSL_LIB_CTX *, ___libctx, d0, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_VerifyFinal_ex(___ctx, ___sigbuf, ___siglen, ___pkey, ___libctx, ___propq) \
      LP6(0x1074, int, EVP_VerifyFinal_ex , EVP_MD_CTX *, ___ctx, a0, const unsigned char *, ___sigbuf, a1, unsigned int, ___siglen, d0, EVP_PKEY *, ___pkey, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_DigestSignInit_ex(___ctx, ___pctx, ___mdname, ___libctx, ___props, ___pkey, ___params) \
      LP7(0x107a, int, EVP_DigestSignInit_ex , EVP_MD_CTX *, ___ctx, a0, EVP_PKEY_CTX **, ___pctx, a1, const char *, ___mdname, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___props, d0, EVP_PKEY *, ___pkey, d1, const OSSL_PARAM *, ___params, d2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_DigestVerifyInit_ex(___ctx, ___pctx, ___mdname, ___libctx, ___props, ___pkey, ___params) \
      LP7(0x1080, int, EVP_DigestVerifyInit_ex , EVP_MD_CTX *, ___ctx, a0, EVP_PKEY_CTX **, ___pctx, a1, const char *, ___mdname, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___props, d0, EVP_PKEY *, ___pkey, d1, const OSSL_PARAM *, ___params, d2,\
      , AMISSLEXT_BASE_NAME)

#define PKCS7_new_ex(___libctx, ___propq) \
      LP2(0x1086, PKCS7 *, PKCS7_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define PKCS7_sign_ex(___signcert, ___pkey, ___certs, ___data, ___flags, ___libctx, ___propq) \
      LP7(0x108c, PKCS7 *, PKCS7_sign_ex , X509 *, ___signcert, a0, EVP_PKEY *, ___pkey, a1, STACK_OF(X509) *, ___certs, a2, BIO *, ___data, a3, int, ___flags, d0, OSSL_LIB_CTX *, ___libctx, d1, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME)

#define PKCS7_encrypt_ex(___certs, ___in, ___cipher, ___flags, ___libctx, ___propq) \
      LP6(0x1092, PKCS7 *, PKCS7_encrypt_ex , STACK_OF(X509) *, ___certs, a0, BIO *, ___in, a1, const EVP_CIPHER *, ___cipher, a2, int, ___flags, d0, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define SMIME_read_PKCS7_ex(___bio, ___bcont, ___p7) \
      LP3(0x1098, PKCS7 *, SMIME_read_PKCS7_ex , BIO *, ___bio, a0, BIO **, ___bcont, a1, PKCS7 **, ___p7, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_self_test(___prov) \
      LP1(0x109e, int, OSSL_PROVIDER_self_test , const OSSL_PROVIDER *, ___prov, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_tls1_prf_md(___ctx, ___md) \
      LP2(0x10a4, int, EVP_PKEY_CTX_set_tls1_prf_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set1_tls1_prf_secret(___pctx, ___sec, ___seclen) \
      LP3(0x10aa, int, EVP_PKEY_CTX_set1_tls1_prf_secret , EVP_PKEY_CTX *, ___pctx, a0, const unsigned char *, ___sec, a1, int, ___seclen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_add1_tls1_prf_seed(___pctx, ___seed, ___seedlen) \
      LP3(0x10b0, int, EVP_PKEY_CTX_add1_tls1_prf_seed , EVP_PKEY_CTX *, ___pctx, a0, const unsigned char *, ___seed, a1, int, ___seedlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_hkdf_md(___ctx, ___md) \
      LP2(0x10b6, int, EVP_PKEY_CTX_set_hkdf_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set1_hkdf_salt(___ctx, ___salt, ___saltlen) \
      LP3(0x10bc, int, EVP_PKEY_CTX_set1_hkdf_salt , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___salt, a1, int, ___saltlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set1_hkdf_key(___ctx, ___key, ___keylen) \
      LP3(0x10c2, int, EVP_PKEY_CTX_set1_hkdf_key , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___key, a1, int, ___keylen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_add1_hkdf_info(___ctx, ___info, ___infolen) \
      LP3(0x10c8, int, EVP_PKEY_CTX_add1_hkdf_info , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___info, a1, int, ___infolen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_hkdf_mode(___ctx, ___mode) \
      LP2(0x10ce, int, EVP_PKEY_CTX_set_hkdf_mode , EVP_PKEY_CTX *, ___ctx, a0, int, ___mode, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set1_pbe_pass(___ctx, ___pass, ___passlen) \
      LP3(0x10d4, int, EVP_PKEY_CTX_set1_pbe_pass , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set1_scrypt_salt(___ctx, ___salt, ___saltlen) \
      LP3(0x10da, int, EVP_PKEY_CTX_set1_scrypt_salt , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___salt, a1, int, ___saltlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_scrypt_N(___ctx, ___n) \
      LP2(0x10e0, int, EVP_PKEY_CTX_set_scrypt_N , EVP_PKEY_CTX *, ___ctx, a0, uint64_t, ___n, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_scrypt_r(___ctx, ___r) \
      LP2(0x10e6, int, EVP_PKEY_CTX_set_scrypt_r , EVP_PKEY_CTX *, ___ctx, a0, uint64_t, ___r, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_scrypt_p(___ctx, ___p) \
      LP2(0x10ec, int, EVP_PKEY_CTX_set_scrypt_p , EVP_PKEY_CTX *, ___ctx, a0, uint64_t, ___p, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_scrypt_maxmem_bytes(___ctx, ___maxmem_bytes) \
      LP2(0x10f2, int, EVP_PKEY_CTX_set_scrypt_maxmem_bytes , EVP_PKEY_CTX *, ___ctx, a0, uint64_t, ___maxmem_bytes, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dh_kdf_type(___ctx, ___kdf) \
      LP2(0x10f8, int, EVP_PKEY_CTX_set_dh_kdf_type , EVP_PKEY_CTX *, ___ctx, a0, int, ___kdf, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_dh_kdf_type(___ctx) \
      LP1(0x10fe, int, EVP_PKEY_CTX_get_dh_kdf_type , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set0_dh_kdf_oid(___ctx, ___oid) \
      LP2(0x1104, int, EVP_PKEY_CTX_set0_dh_kdf_oid , EVP_PKEY_CTX *, ___ctx, a0, ASN1_OBJECT *, ___oid, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get0_dh_kdf_oid(___ctx, ___oid) \
      LP2(0x110a, int, EVP_PKEY_CTX_get0_dh_kdf_oid , EVP_PKEY_CTX *, ___ctx, a0, ASN1_OBJECT **, ___oid, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dh_kdf_md(___ctx, ___md) \
      LP2(0x1110, int, EVP_PKEY_CTX_set_dh_kdf_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_dh_kdf_md(___ctx, ___md) \
      LP2(0x1116, int, EVP_PKEY_CTX_get_dh_kdf_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD **, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_dh_kdf_outlen(___ctx, ___len) \
      LP2(0x111c, int, EVP_PKEY_CTX_set_dh_kdf_outlen , EVP_PKEY_CTX *, ___ctx, a0, int, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_dh_kdf_outlen(___ctx, ___len) \
      LP2(0x1122, int, EVP_PKEY_CTX_get_dh_kdf_outlen , EVP_PKEY_CTX *, ___ctx, a0, int *, ___len, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set0_dh_kdf_ukm(___ctx, ___ukm, ___len) \
      LP3(0x1128, int, EVP_PKEY_CTX_set0_dh_kdf_ukm , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___ukm, a1, int, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get0_dh_kdf_ukm(___ctx, ___ukm) \
      LP2(0x112e, int, EVP_PKEY_CTX_get0_dh_kdf_ukm , EVP_PKEY_CTX *, ___ctx, a0, unsigned char **, ___ukm, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_get_updated_iv(___ctx, ___buf, ___len) \
      LP3(0x1134, int, EVP_CIPHER_CTX_get_updated_iv , EVP_CIPHER_CTX *, ___ctx, a0, void *, ___buf, a1, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_get_original_iv(___ctx, ___buf, ___len) \
      LP3(0x113a, int, EVP_CIPHER_CTX_get_original_iv , EVP_CIPHER_CTX *, ___ctx, a0, void *, ___buf, a1, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYMGMT_gettable_params(___keymgmt) \
      LP1(0x1140, const OSSL_PARAM *, EVP_KEYMGMT_gettable_params , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYMGMT_settable_params(___keymgmt) \
      LP1(0x1146, const OSSL_PARAM *, EVP_KEYMGMT_settable_params , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYMGMT_gen_settable_params(___keymgmt) \
      LP1(0x114c, const OSSL_PARAM *, EVP_KEYMGMT_gen_settable_params , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SIGNATURE_gettable_ctx_params(___sig) \
      LP1(0x1152, const OSSL_PARAM *, EVP_SIGNATURE_gettable_ctx_params , const EVP_SIGNATURE *, ___sig, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SIGNATURE_settable_ctx_params(___sig) \
      LP1(0x1158, const OSSL_PARAM *, EVP_SIGNATURE_settable_ctx_params , const EVP_SIGNATURE *, ___sig, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYEXCH_gettable_ctx_params(___keyexch) \
      LP1(0x115e, const OSSL_PARAM *, EVP_KEYEXCH_gettable_ctx_params , const EVP_KEYEXCH *, ___keyexch, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYEXCH_settable_ctx_params(___keyexch) \
      LP1(0x1164, const OSSL_PARAM *, EVP_KEYEXCH_settable_ctx_params , const EVP_KEYEXCH *, ___keyexch, a0,\
      , AMISSLEXT_BASE_NAME)

#define d2i_PUBKEY_ex(___a, ___pp, ___length, ___libctx, ___propq) \
      LP5(0x116a, EVP_PKEY *, d2i_PUBKEY_ex , EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_INFO_new_PUBKEY(___pubkey) \
      LP1(0x1170, OSSL_STORE_INFO *, OSSL_STORE_INFO_new_PUBKEY , EVP_PKEY *, ___pubkey, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_INFO_get0_PUBKEY(___info) \
      LP1(0x1176, EVP_PKEY *, OSSL_STORE_INFO_get0_PUBKEY , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_INFO_get1_PUBKEY(___info) \
      LP1(0x117c, EVP_PKEY *, OSSL_STORE_INFO_get1_PUBKEY , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSLEXT_BASE_NAME)

#define PEM_read_bio_PUBKEY_ex(___out, ___x, ___cb, ___u, ___libctx, ___propq) \
      LP6(0x1182, EVP_PKEY *, PEM_read_bio_PUBKEY_ex , BIO *, ___out, a0, EVP_PKEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3, OSSL_LIB_CTX *, ___libctx, d0, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define PEM_read_bio_Parameters_ex(___bp, ___x, ___libctx, ___propq) \
      LP4(0x1188, EVP_PKEY *, PEM_read_bio_Parameters_ex , BIO *, ___bp, a0, EVP_PKEY **, ___x, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define EC_GROUP_new_from_params(___params, ___libctx, ___propq) \
      LP3(0x118e, EC_GROUP *, EC_GROUP_new_from_params , const OSSL_PARAM *, ___params, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_LOADER_set_open_ex(___loader, ___open_ex_function) \
      LP2(0x1194, int, OSSL_STORE_LOADER_set_open_ex , OSSL_STORE_LOADER *, ___loader, a0, OSSL_STORE_open_ex_fn, ___open_ex_function, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_LOADER_fetch(___libctx, ___scheme, ___properties) \
      LP3(0x119a, OSSL_STORE_LOADER *, OSSL_STORE_LOADER_fetch , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___scheme, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_LOADER_up_ref(___loader) \
      LP1(0x11a0, int, OSSL_STORE_LOADER_up_ref , OSSL_STORE_LOADER *, ___loader, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_LOADER_get0_provider(___loader) \
      LP1(0x11a6, const OSSL_PROVIDER *, OSSL_STORE_LOADER_get0_provider , const OSSL_STORE_LOADER *, ___loader, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_LOADER_get0_properties(___loader) \
      LP1(0x11ac, const char *, OSSL_STORE_LOADER_get0_properties , const OSSL_STORE_LOADER *, ___loader, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_LOADER_is_a(___loader, ___scheme) \
      LP2(0x11b2, int, OSSL_STORE_LOADER_is_a , const OSSL_STORE_LOADER *, ___loader, a0, const char *, ___scheme, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_LOADER_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x11b8, OSSL_STORE_LOADER_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(OSSL_STORE_LOADER *loader,void *arg))

#define OSSL_STORE_LOADER_names_do_all(___loader, ___fn, ___data) \
      LP3FP(0x11be, int, OSSL_STORE_LOADER_names_do_all , const OSSL_STORE_LOADER *, ___loader, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define OSSL_PARAM_get_utf8_string_ptr(___p, ___val) \
      LP2(0x11c4, int, OSSL_PARAM_get_utf8_string_ptr , const OSSL_PARAM *, ___p, a0, const char **, ___val, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_get_octet_string_ptr(___p, ___val, ___used_len) \
      LP3(0x11ca, int, OSSL_PARAM_get_octet_string_ptr , const OSSL_PARAM *, ___p, a0, const void **, ___val, a1, size_t *, ___used_len, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_set_passphrase_cb(___ctx, ___cb, ___cbarg) \
      LP3(0x11d0, int, OSSL_DECODER_CTX_set_passphrase_cb , OSSL_DECODER_CTX *, ___ctx, a0, OSSL_PASSPHRASE_CALLBACK *, ___cb, a1, void *, ___cbarg, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_mac_key(___ctx, ___key, ___keylen) \
      LP3(0x11d6, int, EVP_PKEY_CTX_set_mac_key , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___key, a1, int, ___keylen, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_INFO_new(___type, ___data) \
      LP2(0x11dc, OSSL_STORE_INFO *, OSSL_STORE_INFO_new , int, ___type, d0, void *, ___data, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_INFO_get0_data(___type, ___info) \
      LP2(0x11e2, void *, OSSL_STORE_INFO_get0_data , int, ___type, d0, const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKCS82PKEY_ex(___p8, ___libctx, ___propq) \
      LP3(0x11e8, EVP_PKEY *, EVP_PKCS82PKEY_ex , const PKCS8_PRIV_KEY_INFO *, ___p8, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set1_id(___ctx, ___id, ___len) \
      LP3(0x11ee, int, EVP_PKEY_CTX_set1_id , EVP_PKEY_CTX *, ___ctx, a0, const void *, ___id, a1, int, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get1_id(___ctx, ___id) \
      LP2(0x11f4, int, EVP_PKEY_CTX_get1_id , EVP_PKEY_CTX *, ___ctx, a0, void *, ___id, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get1_id_len(___ctx, ___id_len) \
      LP2(0x11fa, int, EVP_PKEY_CTX_get1_id_len , EVP_PKEY_CTX *, ___ctx, a0, size_t *, ___id_len, a1,\
      , AMISSLEXT_BASE_NAME)

#define CMS_AuthEnvelopedData_create(___cipher) \
      LP1(0x1200, CMS_ContentInfo *, CMS_AuthEnvelopedData_create , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define CMS_AuthEnvelopedData_create_ex(___cipher, ___libctx, ___propq) \
      LP3(0x1206, CMS_ContentInfo *, CMS_AuthEnvelopedData_create_ex , const EVP_CIPHER *, ___cipher, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_ec_param_enc(___ctx, ___param_enc) \
      LP2(0x120c, int, EVP_PKEY_CTX_set_ec_param_enc , EVP_PKEY_CTX *, ___ctx, a0, int, ___param_enc, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get0_type_name(___key) \
      LP1(0x1212, const char *, EVP_PKEY_get0_type_name , const EVP_PKEY *, ___key, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYMGMT_get0_name(___keymgmt) \
      LP1(0x1218, const char *, EVP_KEYMGMT_get0_name , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEM_free(___wrap) \
      LP1NR(0x121e, EVP_KEM_free , EVP_KEM *, ___wrap, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEM_up_ref(___wrap) \
      LP1(0x1224, int, EVP_KEM_up_ref , EVP_KEM *, ___wrap, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEM_get0_provider(___wrap) \
      LP1(0x122a, OSSL_PROVIDER *, EVP_KEM_get0_provider , const EVP_KEM *, ___wrap, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEM_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x1230, EVP_KEM *, EVP_KEM_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEM_is_a(___wrap, ___name) \
      LP2(0x1236, int, EVP_KEM_is_a , const EVP_KEM *, ___wrap, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEM_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x123c, EVP_KEM_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_KEM *wrap,void *arg))

#define EVP_KEM_names_do_all(___wrap, ___fn, ___data) \
      LP3FP(0x1242, int, EVP_KEM_names_do_all , const EVP_KEM *, ___wrap, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define EVP_PKEY_encapsulate_init(___ctx, ___params) \
      LP2(0x1248, int, EVP_PKEY_encapsulate_init , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_encapsulate(___ctx, ___wrappedkey, ___wrappedkeylen, ___genkey, ___genkeylen) \
      LP5(0x124e, int, EVP_PKEY_encapsulate , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___wrappedkey, a1, size_t *, ___wrappedkeylen, a2, unsigned char *, ___genkey, a3, size_t *, ___genkeylen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_decapsulate_init(___ctx, ___params) \
      LP2(0x1254, int, EVP_PKEY_decapsulate_init , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_decapsulate(___ctx, ___unwrapped, ___unwrappedlen, ___wrapped, ___wrappedlen) \
      LP5(0x125a, int, EVP_PKEY_decapsulate , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___unwrapped, a1, size_t *, ___unwrappedlen, a2, const unsigned char *, ___wrapped, a3, size_t, ___wrappedlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_kem_op(___ctx, ___op) \
      LP2(0x1260, int, EVP_PKEY_CTX_set_kem_op , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___op, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_gettable_params(___encoder) \
      LP1(0x1266, const OSSL_PARAM *, OSSL_ENCODER_gettable_params , OSSL_ENCODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_get_params(___encoder, ___params) \
      LP2(0x126c, int, OSSL_ENCODER_get_params , OSSL_ENCODER *, ___encoder, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_set_output_type(___ctx, ___output_type) \
      LP2(0x1272, int, OSSL_ENCODER_CTX_set_output_type , OSSL_ENCODER_CTX *, ___ctx, a0, const char *, ___output_type, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_add_encoder(___ctx, ___encoder) \
      LP2(0x1278, int, OSSL_ENCODER_CTX_add_encoder , OSSL_ENCODER_CTX *, ___ctx, a0, OSSL_ENCODER *, ___encoder, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_add_extra(___ctx, ___libctx, ___propq) \
      LP3(0x127e, int, OSSL_ENCODER_CTX_add_extra , OSSL_ENCODER_CTX *, ___ctx, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_get_num_encoders(___ctx) \
      LP1(0x1284, int, OSSL_ENCODER_CTX_get_num_encoders , OSSL_ENCODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_set_selection(___ctx, ___selection) \
      LP2(0x128a, int, OSSL_ENCODER_CTX_set_selection , OSSL_ENCODER_CTX *, ___ctx, a0, int, ___selection, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_INSTANCE_get_encoder(___encoder_inst) \
      LP1(0x1290, OSSL_ENCODER *, OSSL_ENCODER_INSTANCE_get_encoder , OSSL_ENCODER_INSTANCE *, ___encoder_inst, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_INSTANCE_get_encoder_ctx(___encoder_inst) \
      LP1(0x1296, void *, OSSL_ENCODER_INSTANCE_get_encoder_ctx , OSSL_ENCODER_INSTANCE *, ___encoder_inst, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_INSTANCE_get_output_type(___encoder_inst) \
      LP1(0x129c, const char *, OSSL_ENCODER_INSTANCE_get_output_type , OSSL_ENCODER_INSTANCE *, ___encoder_inst, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_set_construct(___ctx, ___construct) \
      LP2(0x12a2, int, OSSL_ENCODER_CTX_set_construct , OSSL_ENCODER_CTX *, ___ctx, a0, OSSL_ENCODER_CONSTRUCT *, ___construct, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_set_construct_data(___ctx, ___construct_data) \
      LP2(0x12a8, int, OSSL_ENCODER_CTX_set_construct_data , OSSL_ENCODER_CTX *, ___ctx, a0, void *, ___construct_data, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_set_cleanup(___ctx, ___cleanup) \
      LP2(0x12ae, int, OSSL_ENCODER_CTX_set_cleanup , OSSL_ENCODER_CTX *, ___ctx, a0, OSSL_ENCODER_CLEANUP *, ___cleanup, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_set_passphrase_cb(___ctx, ___cb, ___cbarg) \
      LP3(0x12b4, int, OSSL_ENCODER_CTX_set_passphrase_cb , OSSL_ENCODER_CTX *, ___ctx, a0, OSSL_PASSPHRASE_CALLBACK *, ___cb, a1, void *, ___cbarg, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_type_names_do_all(___pkey, ___fn, ___data) \
      LP3FP(0x12ba, int, EVP_PKEY_type_names_do_all , const EVP_PKEY *, ___pkey, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define OSSL_DECODER_INSTANCE_get_input_type(___decoder_inst) \
      LP1(0x12c0, const char *, OSSL_DECODER_INSTANCE_get_input_type , OSSL_DECODER_INSTANCE *, ___decoder_inst, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_ASYM_CIPHER_gettable_ctx_params(___ciph) \
      LP1(0x12c6, const OSSL_PARAM *, EVP_ASYM_CIPHER_gettable_ctx_params , const EVP_ASYM_CIPHER *, ___ciph, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_ASYM_CIPHER_settable_ctx_params(___ciph) \
      LP1(0x12cc, const OSSL_PARAM *, EVP_ASYM_CIPHER_settable_ctx_params , const EVP_ASYM_CIPHER *, ___ciph, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEM_gettable_ctx_params(___kem) \
      LP1(0x12d2, const OSSL_PARAM *, EVP_KEM_gettable_ctx_params , const EVP_KEM *, ___kem, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEM_settable_ctx_params(___kem) \
      LP1(0x12d8, const OSSL_PARAM *, EVP_KEM_settable_ctx_params , const EVP_KEM *, ___kem, a0,\
      , AMISSLEXT_BASE_NAME)

#define PKCS7_type_is_other(___p7) \
      LP1(0x12de, int, PKCS7_type_is_other , PKCS7 *, ___p7, a0,\
      , AMISSLEXT_BASE_NAME)

#define PKCS7_get_octet_string(___p7) \
      LP1(0x12e4, ASN1_OCTET_STRING *, PKCS7_get_octet_string , PKCS7 *, ___p7, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_from_data(___ctx, ___pdata, ___pdata_len) \
      LP3(0x12ea, int, OSSL_DECODER_from_data , OSSL_DECODER_CTX *, ___ctx, a0, const unsigned char **, ___pdata, a1, size_t *, ___pdata_len, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_to_data(___ctx, ___pdata, ___pdata_len) \
      LP3(0x12f0, int, OSSL_ENCODER_to_data , OSSL_ENCODER_CTX *, ___ctx, a0, unsigned char **, ___pdata, a1, size_t *, ___pdata_len, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get0_libctx(___ctx) \
      LP1(0x12f6, OSSL_LIB_CTX *, EVP_PKEY_CTX_get0_libctx , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get0_propq(___ctx) \
      LP1(0x12fc, const char *, EVP_PKEY_CTX_get0_propq , const EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_set_selection(___ctx, ___selection) \
      LP2(0x1302, int, OSSL_DECODER_CTX_set_selection , OSSL_DECODER_CTX *, ___ctx, a0, int, ___selection, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_CTX_set_input_structure(___ctx, ___input_structure) \
      LP2(0x1308, int, OSSL_DECODER_CTX_set_input_structure , OSSL_DECODER_CTX *, ___ctx, a0, const char *, ___input_structure, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_INSTANCE_get_input_structure(___decoder_inst, ___was_set) \
      LP2(0x130e, const char *, OSSL_DECODER_INSTANCE_get_input_structure , OSSL_DECODER_INSTANCE *, ___decoder_inst, a0, int *, ___was_set, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_CTX_set_output_structure(___ctx, ___output_structure) \
      LP2(0x1314, int, OSSL_ENCODER_CTX_set_output_structure , OSSL_ENCODER_CTX *, ___ctx, a0, const char *, ___output_structure, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_INSTANCE_get_output_structure(___encoder_inst) \
      LP1(0x131a, const char *, OSSL_ENCODER_INSTANCE_get_output_structure , OSSL_ENCODER_INSTANCE *, ___encoder_inst, a0,\
      , AMISSLEXT_BASE_NAME)

#define PEM_write_bio_PrivateKey_ex(___out, ___x, ___enc, ___kstr, ___klen, ___cb, ___u, ___libctx, ___propq) \
      LP9(0x1320, int, PEM_write_bio_PrivateKey_ex , BIO *, ___out, a0, const EVP_PKEY *, ___x, a1, const EVP_CIPHER *, ___enc, a2, const unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2, OSSL_LIB_CTX *, ___libctx, d3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME)

#define PEM_write_bio_PUBKEY_ex(___out, ___x, ___libctx, ___propq) \
      LP4(0x1326, int, PEM_write_bio_PUBKEY_ex , BIO *, ___out, a0, const EVP_PKEY *, ___x, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get_group_name(___pkey, ___name, ___name_sz, ___gname_len) \
      LP4(0x132c, int, EVP_PKEY_get_group_name , const EVP_PKEY *, ___pkey, a0, char *, ___name, a1, size_t, ___name_sz, d0, size_t *, ___gname_len, a2,\
      , AMISSLEXT_BASE_NAME)

#define CRYPTO_atomic_or(___val, ___op, ___ret, ___lock) \
      LP4(0x1332, int, CRYPTO_atomic_or , uint64_t *, ___val, a0, uint64_t, ___op, d0, uint64_t *, ___ret, a1, CRYPTO_RWLOCK *, ___lock, a2,\
      , AMISSLEXT_BASE_NAME)

#define CRYPTO_atomic_load(___val, ___ret, ___lock) \
      LP3(0x1338, int, CRYPTO_atomic_load , uint64_t *, ___val, a0, uint64_t *, ___ret, a1, CRYPTO_RWLOCK *, ___lock, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_md(___ctx, ___md) \
      LP2(0x133e, int, EVP_PKEY_CTX_set_rsa_pss_keygen_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(___ctx, ___mdname, ___mdprops) \
      LP3(0x1344, int, EVP_PKEY_CTX_set_rsa_pss_keygen_md_name , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___mdname, a1, const char *, ___mdprops, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_settable_params(___pkey) \
      LP1(0x134a, const OSSL_PARAM *, EVP_PKEY_settable_params , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_set_params(___pkey, ___params) \
      LP2(0x1350, int, EVP_PKEY_set_params , EVP_PKEY *, ___pkey, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_set_int_param(___pkey, ___key_name, ___in) \
      LP3(0x1356, int, EVP_PKEY_set_int_param , EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, int, ___in, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_set_size_t_param(___pkey, ___key_name, ___in) \
      LP3(0x135c, int, EVP_PKEY_set_size_t_param , EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, size_t, ___in, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_set_bn_param(___pkey, ___key_name, ___bn) \
      LP3(0x1362, int, EVP_PKEY_set_bn_param , EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, const BIGNUM *, ___bn, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_set_utf8_string_param(___pkey, ___key_name, ___str) \
      LP3(0x1368, int, EVP_PKEY_set_utf8_string_param , EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, const char *, ___str, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_set_octet_string_param(___pkey, ___key_name, ___buf, ___bsize) \
      LP4(0x136e, int, EVP_PKEY_set_octet_string_param , EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, const unsigned char *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get_ec_point_conv_form(___pkey) \
      LP1(0x1374, int, EVP_PKEY_get_ec_point_conv_form , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get_field_type(___pkey) \
      LP1(0x137a, int, EVP_PKEY_get_field_type , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get_params(___pkey, ___params) \
      LP2(0x1380, int, EVP_PKEY_get_params , const EVP_PKEY *, ___pkey, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_fromdata_init(___ctx) \
      LP1(0x1386, int, EVP_PKEY_fromdata_init , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_fromdata_settable(___ctx, ___selection) \
      LP2(0x138c, const OSSL_PARAM *, EVP_PKEY_fromdata_settable , EVP_PKEY_CTX *, ___ctx, a0, int, ___selection, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_param_check_quick(___ctx) \
      LP1(0x1392, int, EVP_PKEY_param_check_quick , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_public_check_quick(___ctx) \
      LP1(0x1398, int, EVP_PKEY_public_check_quick , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_is_a(___ctx, ___keytype) \
      LP2(0x139e, int, EVP_PKEY_CTX_is_a , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___keytype, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_settable_params(___ctx) \
      LP1(0x13a4, const OSSL_PARAM *, EVP_CIPHER_CTX_settable_params , EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_gettable_params(___ctx) \
      LP1(0x13aa, const OSSL_PARAM *, EVP_CIPHER_CTX_gettable_params , EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_CTX_gettable_params(___ctx) \
      LP1(0x13b0, const OSSL_PARAM *, EVP_KDF_CTX_gettable_params , EVP_KDF_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_CTX_settable_params(___ctx) \
      LP1(0x13b6, const OSSL_PARAM *, EVP_KDF_CTX_settable_params , EVP_KDF_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_CTX_gettable_params(___ctx) \
      LP1(0x13bc, const OSSL_PARAM *, EVP_MAC_CTX_gettable_params , EVP_MAC_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_CTX_settable_params(___ctx) \
      LP1(0x13c2, const OSSL_PARAM *, EVP_MAC_CTX_settable_params , EVP_MAC_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_CTX_gettable_params(___ctx) \
      LP1(0x13c8, const OSSL_PARAM *, EVP_RAND_CTX_gettable_params , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_CTX_settable_params(___ctx) \
      LP1(0x13ce, const OSSL_PARAM *, EVP_RAND_CTX_settable_params , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define RAND_set_DRBG_type(___ctx, ___drbg, ___propq, ___cipher, ___digest) \
      LP5(0x13d4, int, RAND_set_DRBG_type , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___drbg, a1, const char *, ___propq, a2, const char *, ___cipher, a3, const char *, ___digest, d0,\
      , AMISSLEXT_BASE_NAME)

#define RAND_set_seed_source_type(___ctx, ___seed, ___propq) \
      LP3(0x13da, int, RAND_set_seed_source_type , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___seed, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define BN_mod_exp_mont_consttime_x2(___rr1, ___a1, ___p1, ___m1, ___in_mont1, ___rr2, ___a2, ___p2, ___m2, ___in_mont2, ___ctx) \
      LP11(0x13e0, int, BN_mod_exp_mont_consttime_x2 , BIGNUM *, ___rr1, a0, const BIGNUM *, ___a1, a1, const BIGNUM *, ___p1, a2, const BIGNUM *, ___m1, a3, BN_MONT_CTX *, ___in_mont1, d0, BIGNUM *, ___rr2, d1, const BIGNUM *, ___a2, d2, const BIGNUM *, ___p2, d3, const BIGNUM *, ___m2, d4, BN_MONT_CTX *, ___in_mont2, d5, BN_CTX *, ___ctx, d6,\
      , AMISSLEXT_BASE_NAME)

#define BIO_f_readbuffer() \
      LP0(0x13e6, const BIO_METHOD *, BIO_f_readbuffer ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ESS_check_signing_certs(___ss, ___ssv2, ___chain, ___require_signing_cert) \
      LP4(0x13ec, int, OSSL_ESS_check_signing_certs , const ESS_SIGNING_CERT *, ___ss, a0, const ESS_SIGNING_CERT_V2 *, ___ssv2, a1, const STACK_OF(X509) *, ___chain, a2, int, ___require_signing_cert, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ESS_signing_cert_new_init(___signcert, ___certs, ___set_issuer_serial) \
      LP3(0x13f2, ESS_SIGNING_CERT *, OSSL_ESS_signing_cert_new_init , const X509 *, ___signcert, a0, const STACK_OF(X509) *, ___certs, a1, int, ___set_issuer_serial, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ESS_signing_cert_v2_new_init(___hash_alg, ___signcert, ___certs, ___set_issuer_serial) \
      LP4(0x13f8, ESS_SIGNING_CERT_V2 *, OSSL_ESS_signing_cert_v2_new_init , const EVP_MD *, ___hash_alg, a0, const X509 *, ___signcert, a1, const STACK_OF(X509) *, ___certs, a2, int, ___set_issuer_serial, d0,\
      , AMISSLEXT_BASE_NAME)

#define ESS_SIGNING_CERT_it() \
      LP0(0x13fe, const ASN1_ITEM *, ESS_SIGNING_CERT_it ,\
      , AMISSLEXT_BASE_NAME)

#define ESS_SIGNING_CERT_V2_it() \
      LP0(0x1404, const ASN1_ITEM *, ESS_SIGNING_CERT_V2_it ,\
      , AMISSLEXT_BASE_NAME)

#define EVP_Q_digest(___libctx, ___name, ___propq, ___data, ___datalen, ___md, ___mdlen) \
      LP7(0x140a, int, EVP_Q_digest , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___name, a1, const char *, ___propq, a2, const void *, ___data, a3, size_t, ___datalen, d0, unsigned char *, ___md, d1, size_t *, ___mdlen, d2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_DigestInit_ex2(___ctx, ___type, ___params) \
      LP3(0x1410, int, EVP_DigestInit_ex2 , EVP_MD_CTX *, ___ctx, a0, const EVP_MD *, ___type, a1, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_EncryptInit_ex2(___ctx, ___cipher, ___key, ___iv, ___params) \
      LP5(0x1416, int, EVP_EncryptInit_ex2 , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, const unsigned char *, ___iv, a3, const OSSL_PARAM *, ___params, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_DecryptInit_ex2(___ctx, ___cipher, ___key, ___iv, ___params) \
      LP5(0x141c, int, EVP_DecryptInit_ex2 , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, const unsigned char *, ___iv, a3, const OSSL_PARAM *, ___params, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CipherInit_ex2(___ctx, ___cipher, ___key, ___iv, ___enc, ___params) \
      LP6(0x1422, int, EVP_CipherInit_ex2 , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, const unsigned char *, ___iv, a3, int, ___enc, d0, const OSSL_PARAM *, ___params, d1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_sign_init_ex(___ctx, ___params) \
      LP2(0x1428, int, EVP_PKEY_sign_init_ex , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_verify_init_ex(___ctx, ___params) \
      LP2(0x142e, int, EVP_PKEY_verify_init_ex , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_verify_recover_init_ex(___ctx, ___params) \
      LP2(0x1434, int, EVP_PKEY_verify_recover_init_ex , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_encrypt_init_ex(___ctx, ___params) \
      LP2(0x143a, int, EVP_PKEY_encrypt_init_ex , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_decrypt_init_ex(___ctx, ___params) \
      LP2(0x1440, int, EVP_PKEY_decrypt_init_ex , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_derive_init_ex(___ctx, ___params) \
      LP2(0x1446, int, EVP_PKEY_derive_init_ex , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define TS_RESP_CTX_new_ex(___libctx, ___propq) \
      LP2(0x144c, TS_RESP_CTX *, TS_RESP_CTX_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_REQ_new_ex(___libctx, ___propq) \
      LP2(0x1452, X509_REQ *, X509_REQ_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_dup(___pkey) \
      LP1(0x1458, EVP_PKEY *, EVP_PKEY_dup , EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME)

#define RSA_PSS_PARAMS_dup(___a) \
      LP1(0x145e, RSA_PSS_PARAMS *, RSA_PSS_PARAMS_dup , const RSA_PSS_PARAMS *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_derive_set_peer_ex(___ctx, ___peer, ___validate_peer) \
      LP3(0x1464, int, EVP_PKEY_derive_set_peer_ex , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY *, ___peer, a1, int, ___validate_peer, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_get0_name(___decoder) \
      LP1(0x146a, const char *, OSSL_DECODER_get0_name , const OSSL_DECODER *, ___decoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_get0_name(___kdf) \
      LP1(0x1470, const char *, OSSL_ENCODER_get0_name , const OSSL_ENCODER *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DECODER_get0_description(___decoder) \
      LP1(0x1476, const char *, OSSL_DECODER_get0_description , const OSSL_DECODER *, ___decoder, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ENCODER_get0_description(___kdf) \
      LP1(0x147c, const char *, OSSL_ENCODER_get0_description , const OSSL_ENCODER *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_LOADER_get0_description(___loader) \
      LP1(0x1482, const char *, OSSL_STORE_LOADER_get0_description , const OSSL_STORE_LOADER *, ___loader, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_get0_description(___md) \
      LP1(0x1488, const char *, EVP_MD_get0_description , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_get0_description(___cipher) \
      LP1(0x148e, const char *, EVP_CIPHER_get0_description , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_get0_description(___mac) \
      LP1(0x1494, const char *, EVP_MAC_get0_description , const EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_get0_description(___md) \
      LP1(0x149a, const char *, EVP_RAND_get0_description , const EVP_RAND *, ___md, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get0_description(___pkey) \
      LP1(0x14a0, const char *, EVP_PKEY_get0_description , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYMGMT_get0_description(___keymgmt) \
      LP1(0x14a6, const char *, EVP_KEYMGMT_get0_description , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SIGNATURE_get0_description(___signature) \
      LP1(0x14ac, const char *, EVP_SIGNATURE_get0_description , const EVP_SIGNATURE *, ___signature, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_ASYM_CIPHER_get0_description(___cipher) \
      LP1(0x14b2, const char *, EVP_ASYM_CIPHER_get0_description , const EVP_ASYM_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEM_get0_description(___wrap) \
      LP1(0x14b8, const char *, EVP_KEM_get0_description , const EVP_KEM *, ___wrap, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYEXCH_get0_description(___keyexch) \
      LP1(0x14be, const char *, EVP_KEYEXCH_get0_description , const EVP_KEYEXCH *, ___keyexch, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KDF_get0_description(___kdf) \
      LP1(0x14c4, const char *, EVP_KDF_get0_description , const EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME)

#define OPENSSL_sk_find_all(___st, ___data, ___pnum) \
      LP3(0x14ca, int, OPENSSL_sk_find_all , OPENSSL_STACK *, ___st, a0, const void *, ___data, a1, int *, ___pnum, a2,\
      , AMISSLEXT_BASE_NAME)

#define X509_CRL_new_ex(___libctx, ___propq) \
      LP2(0x14d0, X509_CRL *, X509_CRL_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_dup(___p) \
      LP1(0x14d6, OSSL_PARAM *, OSSL_PARAM_dup , const OSSL_PARAM *, ___p, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_merge(___p1, ___p2) \
      LP2(0x14dc, OSSL_PARAM *, OSSL_PARAM_merge , const OSSL_PARAM *, ___p1, a0, const OSSL_PARAM *, ___p2, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_free(___p) \
      LP1NR(0x14e2, OSSL_PARAM_free , OSSL_PARAM *, ___p, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_todata(___pkey, ___selection, ___params) \
      LP3(0x14e8, int, EVP_PKEY_todata , const EVP_PKEY *, ___pkey, a0, int, ___selection, d0, OSSL_PARAM **, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_export(___pkey, ___selection, ___export_cb, ___export_cbarg) \
      LP4(0x14ee, int, EVP_PKEY_export , const EVP_PKEY *, ___pkey, a0, int, ___selection, d0, OSSL_CALLBACK *, ___export_cb, a1, void *, ___export_cbarg, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_CTX_get0_md(___ctx) \
      LP1(0x14f4, const EVP_MD *, EVP_MD_CTX_get0_md , const EVP_MD_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_CTX_get1_md(___ctx) \
      LP1(0x14fa, EVP_MD *, EVP_MD_CTX_get1_md , EVP_MD_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_get0_cipher(___ctx) \
      LP1(0x1500, const EVP_CIPHER *, EVP_CIPHER_CTX_get0_cipher , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_get1_cipher(___ctx) \
      LP1(0x1506, EVP_CIPHER *, EVP_CIPHER_CTX_get1_cipher , EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_LIB_CTX_get0_global_default() \
      LP0(0x150c, OSSL_LIB_CTX *, OSSL_LIB_CTX_get0_global_default ,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SIGNATURE_get0_name(___signature) \
      LP1(0x1512, const char *, EVP_SIGNATURE_get0_name , const EVP_SIGNATURE *, ___signature, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_ASYM_CIPHER_get0_name(___cipher) \
      LP1(0x1518, const char *, EVP_ASYM_CIPHER_get0_name , const EVP_ASYM_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEM_get0_name(___wrap) \
      LP1(0x151e, const char *, EVP_KEM_get0_name , const EVP_KEM *, ___wrap, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYEXCH_get0_name(___keyexch) \
      LP1(0x1524, const char *, EVP_KEYEXCH_get0_name , const EVP_KEYEXCH *, ___keyexch, a0,\
      , AMISSLEXT_BASE_NAME)

#define PKCS5_v2_PBE_keyivgen_ex(___ctx, ___pass, ___passlen, ___param, ___cipher, ___md, ___en_de, ___libctx, ___propq) \
      LP9(0x152a, int, PKCS5_v2_PBE_keyivgen_ex , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___cipher, a3, const EVP_MD *, ___md, d1, int, ___en_de, d2, OSSL_LIB_CTX *, ___libctx, d3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PBE_scrypt_amiga_1(___pass, ___passlen, ___salt, ___N, ___r, ___p, ___maxmem, ___moreargs) \
      LP8(0x1530, int, EVP_PBE_scrypt_amiga_1 , const char *, ___pass, a0, size_t, ___passlen, a1, const unsigned char *, ___salt, a2, uint64_t, ___N, d0, uint64_t, ___r, d2, uint64_t, ___p, d4, uint64_t, ___maxmem, d6, void *, ___moreargs, a3,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PBE_scrypt_amiga_2(___saltlen, ___key, ___keylen) \
      LP3(0x1536, void *, EVP_PBE_scrypt_amiga_2 , size_t, ___saltlen, d0, unsigned char *, ___key, a0, size_t, ___keylen, d1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PBE_scrypt_ex_amiga_2(___saltlen, ___key, ___keylen, ___ctx, ___propq) \
      LP5(0x153c, void *, EVP_PBE_scrypt_ex_amiga_2 , size_t, ___saltlen, d0, unsigned char *, ___key, a0, size_t, ___keylen, d1, OSSL_LIB_CTX *, ___ctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define PKCS5_v2_scrypt_keyivgen_ex(___ctx, ___pass, ___passlen, ___param, ___c, ___md, ___en_de, ___libctx, ___propq) \
      LP9(0x1542, int, PKCS5_v2_scrypt_keyivgen_ex , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___c, a3, const EVP_MD *, ___md, d1, int, ___en_de, d2, OSSL_LIB_CTX *, ___libctx, d3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PBE_CipherInit_ex(___pbe_obj, ___pass, ___passlen, ___param, ___ctx, ___en_de, ___libctx, ___propq) \
      LP8(0x1548, int, EVP_PBE_CipherInit_ex , ASN1_OBJECT *, ___pbe_obj, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, EVP_CIPHER_CTX *, ___ctx, a3, int, ___en_de, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PBE_find_ex(___type, ___pbe_nid, ___pcnid, ___pmnid, ___pkeygen, ___pkeygen_ex) \
      LP6(0x154e, int, EVP_PBE_find_ex , int, ___type, d0, int, ___pbe_nid, d1, int *, ___pcnid, a0, int *, ___pmnid, a1, EVP_PBE_KEYGEN **, ___pkeygen, a2, EVP_PBE_KEYGEN_EX **, ___pkeygen_ex, a3,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_SAFEBAG_create_pkcs8_encrypt_ex(___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8inf, ___ctx, ___propq) \
      LP9(0x1554, PKCS12_SAFEBAG *, PKCS12_SAFEBAG_create_pkcs8_encrypt_ex , int, ___pbe_nid, d0, const char *, ___pass, a0, int, ___passlen, d1, unsigned char *, ___salt, a1, int, ___saltlen, d2, int, ___iter, d3, PKCS8_PRIV_KEY_INFO *, ___p8inf, a2, OSSL_LIB_CTX *, ___ctx, a3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME)

#define PKCS8_decrypt_ex(___p8, ___pass, ___passlen, ___ctx, ___propq) \
      LP5(0x155a, PKCS8_PRIV_KEY_INFO *, PKCS8_decrypt_ex , const X509_SIG *, ___p8, a0, const char *, ___pass, a1, int, ___passlen, d0, OSSL_LIB_CTX *, ___ctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_decrypt_skey_ex(___bag, ___pass, ___passlen, ___ctx, ___propq) \
      LP5(0x1560, PKCS8_PRIV_KEY_INFO *, PKCS12_decrypt_skey_ex , const PKCS12_SAFEBAG *, ___bag, a0, const char *, ___pass, a1, int, ___passlen, d0, OSSL_LIB_CTX *, ___ctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define PKCS8_encrypt_ex(___pbe_nid, ___cipher, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8, ___ctx, ___propq) \
      LP10(0x1566, X509_SIG *, PKCS8_encrypt_ex , int, ___pbe_nid, d0, const EVP_CIPHER *, ___cipher, a0, const char *, ___pass, a1, int, ___passlen, d1, unsigned char *, ___salt, a2, int, ___saltlen, d2, int, ___iter, d3, PKCS8_PRIV_KEY_INFO *, ___p8, a3, OSSL_LIB_CTX *, ___ctx, d4, const char *, ___propq, d5,\
      , AMISSLEXT_BASE_NAME)

#define PKCS8_set0_pbe_ex(___pass, ___passlen, ___p8inf, ___pbe, ___ctx, ___propq) \
      LP6(0x156c, X509_SIG *, PKCS8_set0_pbe_ex , const char *, ___pass, a0, int, ___passlen, d0, PKCS8_PRIV_KEY_INFO *, ___p8inf, a1, X509_ALGOR *, ___pbe, a2, OSSL_LIB_CTX *, ___ctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_pack_p7encdata_ex(___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___bags, ___ctx, ___propq) \
      LP9(0x1572, PKCS7 *, PKCS12_pack_p7encdata_ex , int, ___pbe_nid, d0, const char *, ___pass, a0, int, ___passlen, d1, unsigned char *, ___salt, a1, int, ___saltlen, d2, int, ___iter, d3, STACK_OF(PKCS12_SAFEBAG) *, ___bags, a2, OSSL_LIB_CTX *, ___ctx, a3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_pbe_crypt_ex(___algor, ___pass, ___passlen, ___in, ___inlen, ___data, ___datalen, ___en_de, ___libctx, ___propq) \
      LP10(0x1578, unsigned char *, PKCS12_pbe_crypt_ex , const X509_ALGOR *, ___algor, a0, const char *, ___pass, a1, int, ___passlen, d0, const unsigned char *, ___in, a2, int, ___inlen, d1, unsigned char **, ___data, a3, int *, ___datalen, d2, int, ___en_de, d3, OSSL_LIB_CTX *, ___libctx, d4, const char *, ___propq, d5,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_item_decrypt_d2i_ex(___algor, ___it, ___pass, ___passlen, ___oct, ___zbuf, ___libctx, ___propq) \
      LP8(0x157e, void *, PKCS12_item_decrypt_d2i_ex , const X509_ALGOR *, ___algor, a0, const ASN1_ITEM *, ___it, a1, const char *, ___pass, a2, int, ___passlen, d0, const ASN1_OCTET_STRING *, ___oct, a3, int, ___zbuf, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_item_i2d_encrypt_ex(___algor, ___it, ___pass, ___passlen, ___obj, ___zbuf, ___ctx, ___propq) \
      LP8(0x1584, ASN1_OCTET_STRING *, PKCS12_item_i2d_encrypt_ex , X509_ALGOR *, ___algor, a0, const ASN1_ITEM *, ___it, a1, const char *, ___pass, a2, int, ___passlen, d0, void *, ___obj, a3, int, ___zbuf, d1, OSSL_LIB_CTX *, ___ctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_init_ex(___mode, ___ctx, ___propq) \
      LP3(0x158a, PKCS12 *, PKCS12_init_ex , int, ___mode, d0, OSSL_LIB_CTX *, ___ctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_key_gen_asc_ex(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type, ___ctx, ___propq) \
      LP11(0x1590, int, PKCS12_key_gen_asc_ex , const char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___id, d2, int, ___iter, d3, int, ___n, d4, unsigned char *, ___out, a2, const EVP_MD *, ___md_type, a3, OSSL_LIB_CTX *, ___ctx, d5, const char *, ___propq, d6,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_key_gen_uni_ex(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type, ___ctx, ___propq) \
      LP11(0x1596, int, PKCS12_key_gen_uni_ex , unsigned char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___id, d2, int, ___iter, d3, int, ___n, d4, unsigned char *, ___out, a2, const EVP_MD *, ___md_type, a3, OSSL_LIB_CTX *, ___ctx, d5, const char *, ___propq, d6,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_key_gen_utf8_ex(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type, ___ctx, ___propq) \
      LP11(0x159c, int, PKCS12_key_gen_utf8_ex , const char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___id, d2, int, ___iter, d3, int, ___n, d4, unsigned char *, ___out, a2, const EVP_MD *, ___md_type, a3, OSSL_LIB_CTX *, ___ctx, d5, const char *, ___propq, d6,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_PBE_keyivgen_ex(___ctx, ___pass, ___passlen, ___param, ___cipher, ___md_type, ___en_de, ___libctx, ___propq) \
      LP9(0x15a2, int, PKCS12_PBE_keyivgen_ex , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___cipher, a3, const EVP_MD *, ___md_type, d1, int, ___en_de, d2, OSSL_LIB_CTX *, ___libctx, d3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_create_ex(___pass, ___name, ___pkey, ___cert, ___ca, ___nid_key, ___nid_cert, ___iter, ___mac_iter, ___keytype, ___ctx, ___propq) \
      LP12(0x15a8, PKCS12 *, PKCS12_create_ex , const char *, ___pass, a0, const char *, ___name, a1, EVP_PKEY *, ___pkey, a2, X509 *, ___cert, a3, STACK_OF(X509) *, ___ca, d0, int, ___nid_key, d1, int, ___nid_cert, d2, int, ___iter, d3, int, ___mac_iter, d4, int, ___keytype, d5, OSSL_LIB_CTX *, ___ctx, d6, const char *, ___propq, d7,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_add_key_ex(___pbags, ___key, ___key_usage, ___iter, ___key_nid, ___pass, ___ctx, ___propq) \
      LP8(0x15ae, PKCS12_SAFEBAG *, PKCS12_add_key_ex , STACK_OF(PKCS12_SAFEBAG) **, ___pbags, a0, EVP_PKEY *, ___key, a1, int, ___key_usage, d0, int, ___iter, d1, int, ___key_nid, d2, const char *, ___pass, a2, OSSL_LIB_CTX *, ___ctx, a3, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_add_safe_ex(___psafes, ___bags, ___safe_nid, ___iter, ___pass, ___ctx, ___propq) \
      LP7(0x15b4, int, PKCS12_add_safe_ex , STACK_OF(PKCS7) **, ___psafes, a0, STACK_OF(PKCS12_SAFEBAG) *, ___bags, a1, int, ___safe_nid, d0, int, ___iter, d1, const char *, ___pass, a2, OSSL_LIB_CTX *, ___ctx, a3, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_add_safes_ex(___safes, ___p7_nid, ___ctx, ___propq) \
      LP4(0x15ba, PKCS12 *, PKCS12_add_safes_ex , STACK_OF(PKCS7) *, ___safes, a0, int, ___p7_nid, d0, OSSL_LIB_CTX *, ___ctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define PKCS5_pbe_set0_algor_ex(___algor, ___alg, ___iter, ___salt, ___saltlen, ___libctx) \
      LP6(0x15c0, int, PKCS5_pbe_set0_algor_ex , X509_ALGOR *, ___algor, a0, int, ___alg, d0, int, ___iter, d1, const unsigned char *, ___salt, a1, int, ___saltlen, d2, OSSL_LIB_CTX *, ___libctx, a2,\
      , AMISSLEXT_BASE_NAME)

#define PKCS5_pbe_set_ex(___alg, ___iter, ___salt, ___saltlen, ___libctx) \
      LP5(0x15c6, X509_ALGOR *, PKCS5_pbe_set_ex , int, ___alg, d0, int, ___iter, d1, const unsigned char *, ___salt, a0, int, ___saltlen, d2, OSSL_LIB_CTX *, ___libctx, a1,\
      , AMISSLEXT_BASE_NAME)

#define PKCS5_pbe2_set_iv_ex(___cipher, ___iter, ___salt, ___saltlen, ___aiv, ___prf_nid, ___libctx) \
      LP7(0x15cc, X509_ALGOR *, PKCS5_pbe2_set_iv_ex , const EVP_CIPHER *, ___cipher, a0, int, ___iter, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, unsigned char *, ___aiv, a2, int, ___prf_nid, d2, OSSL_LIB_CTX *, ___libctx, a3,\
      , AMISSLEXT_BASE_NAME)

#define PKCS5_pbkdf2_set_ex(___iter, ___salt, ___saltlen, ___prf_nid, ___keylen, ___libctx) \
      LP6(0x15d2, X509_ALGOR *, PKCS5_pbkdf2_set_ex , int, ___iter, d0, unsigned char *, ___salt, a0, int, ___saltlen, d1, int, ___prf_nid, d2, int, ___keylen, d3, OSSL_LIB_CTX *, ___libctx, a1,\
      , AMISSLEXT_BASE_NAME)

#define BIO_new_from_core_bio(___libctx, ___corebio) \
      LP2(0x15d8, BIO *, BIO_new_from_core_bio , OSSL_LIB_CTX *, ___libctx, a0, OSSL_CORE_BIO *, ___corebio, a1,\
      , AMISSLEXT_BASE_NAME)

#define BIO_new_ex(___libctx, ___method) \
      LP2(0x15de, BIO *, BIO_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const BIO_METHOD *, ___method, a1,\
      , AMISSLEXT_BASE_NAME)

#define BIO_s_core() \
      LP0(0x15e4, const BIO_METHOD *, BIO_s_core ,\
      , AMISSLEXT_BASE_NAME)

#define BIO_get_line(___bio, ___buf, ___size) \
      LP3(0x15ea, int, BIO_get_line , BIO *, ___bio, a0, char *, ___buf, a1, int, ___size, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_LIB_CTX_new_from_dispatch(___handle, ___in) \
      LP2(0x15f0, OSSL_LIB_CTX *, OSSL_LIB_CTX_new_from_dispatch , const OSSL_CORE_HANDLE *, ___handle, a0, const OSSL_DISPATCH *, ___in, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_LIB_CTX_new_child(___handle, ___in) \
      LP2(0x15f6, OSSL_LIB_CTX *, OSSL_LIB_CTX_new_child , const OSSL_CORE_HANDLE *, ___handle, a0, const OSSL_DISPATCH *, ___in, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_get0_dispatch(___prov) \
      LP1(0x15fc, const OSSL_DISPATCH *, OSSL_PROVIDER_get0_dispatch , const OSSL_PROVIDER *, ___prov, a0,\
      , AMISSLEXT_BASE_NAME)

#define PKCS5_PBE_keyivgen_ex(___cctx, ___pass, ___passlen, ___param, ___cipher, ___md, ___en_de, ___libctx, ___propq) \
      LP9(0x1602, int, PKCS5_PBE_keyivgen_ex , EVP_CIPHER_CTX *, ___cctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___cipher, a3, const EVP_MD *, ___md, d1, int, ___en_de, d2, OSSL_LIB_CTX *, ___libctx, d3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MAC_CTX_get_block_size(___ctx) \
      LP1(0x1608, size_t, EVP_MAC_CTX_get_block_size , EVP_MAC_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define BIO_debug_callback_ex(___bio, ___oper, ___argp, ___len, ___argi, ___argl, ___ret, ___processed) \
      LP8(0x160e, long, BIO_debug_callback_ex , BIO *, ___bio, a0, int, ___oper, d0, const char *, ___argp, a1, size_t, ___len, d1, int, ___argi, d2, long, ___argl, d3, int, ___ret, d4, size_t *, ___processed, a2,\
      , AMISSLEXT_BASE_NAME)

#define b2i_PVK_bio_ex(___in, ___cb, ___u, ___libctx, ___propq) \
      LP5(0x1614, EVP_PKEY *, b2i_PVK_bio_ex , BIO *, ___in, a0, pem_password_cb *, ___cb, a1, void *, ___u, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2b_PVK_bio_ex(___out, ___pk, ___enclevel, ___cb, ___u, ___libctx, ___propq) \
      LP7(0x161a, int, i2b_PVK_bio_ex , BIO *, ___out, a0, const EVP_PKEY *, ___pk, a1, int, ___enclevel, d0, pem_password_cb *, ___cb, a2, void *, ___u, a3, OSSL_LIB_CTX *, ___libctx, d1, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME)

#define NCONF_get0_libctx(___conf) \
      LP1(0x1620, OSSL_LIB_CTX *, NCONF_get0_libctx , const CONF *, ___conf, a0,\
      , AMISSLEXT_BASE_NAME)

#define NCONF_get_section_names(___conf) \
      LP1(0x1626, STACK_OF(OPENSSL_CSTRING) *, NCONF_get_section_names , const CONF *, ___conf, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_PUBKEY_new_ex(___libctx, ___propq) \
      LP2(0x162c, X509_PUBKEY *, X509_PUBKEY_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME)

#define ASN1_item_new_ex(___it, ___libctx, ___propq) \
      LP3(0x1632, ASN1_VALUE *, ASN1_item_new_ex , const ASN1_ITEM *, ___it, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define ASN1_item_d2i_bio_ex(___it, ___in, ___pval, ___libctx, ___propq) \
      LP5(0x1638, void *, ASN1_item_d2i_bio_ex , const ASN1_ITEM *, ___it, a0, BIO *, ___in, a1, void *, ___pval, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d0,\
      , AMISSLEXT_BASE_NAME)

#define ASN1_item_d2i_ex(___val, ___in, ___len, ___it, ___libctx, ___propq) \
      LP6(0x163e, ASN1_VALUE *, ASN1_item_d2i_ex , ASN1_VALUE **, ___val, a0, const unsigned char **, ___in, a1, long, ___len, d0, const ASN1_ITEM *, ___it, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME)

#define ASN1_TIME_print_ex(___bp, ___tm, ___flags) \
      LP3(0x1644, int, ASN1_TIME_print_ex , BIO *, ___bp, a0, const ASN1_TIME *, ___tm, a1, unsigned long, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_get0_provider(___key) \
      LP1(0x164a, const OSSL_PROVIDER *, EVP_PKEY_get0_provider , const EVP_PKEY *, ___key, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get0_provider(___ctx) \
      LP1(0x1650, const OSSL_PROVIDER *, EVP_PKEY_CTX_get0_provider , const EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OPENSSL_strcasecmp(___s1, ___s2) \
      LP2(0x1656, int, OPENSSL_strcasecmp , const char *, ___s1, a0, const char *, ___s2, a1,\
      , AMISSLEXT_BASE_NAME)

#define OPENSSL_strncasecmp(___s1, ___s2, ___n) \
      LP3(0x165c, int, OPENSSL_strncasecmp , const char *, ___s1, a0, const char *, ___s2, a1, size_t, ___n, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_reset_geninfo_ITAVs(___ctx) \
      LP1(0x1662, int, OSSL_CMP_CTX_reset_geninfo_ITAVs , OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_RAND_CTX_up_ref(___ctx) \
      LP1(0x1668, int, EVP_RAND_CTX_up_ref , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define RAND_set0_public(___ctx, ___rand) \
      LP2(0x166e, int, RAND_set0_public , OSSL_LIB_CTX *, ___ctx, a0, EVP_RAND_CTX *, ___rand, a1,\
      , AMISSLEXT_BASE_NAME)

#define RAND_set0_private(___ctx, ___rand) \
      LP2(0x1674, int, RAND_set0_private , OSSL_LIB_CTX *, ___ctx, a0, EVP_RAND_CTX *, ___rand, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_CTX_dup(___in) \
      LP1(0x167a, EVP_MD_CTX *, EVP_MD_CTX_dup , const EVP_MD_CTX *, ___in, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_dup(___in) \
      LP1(0x1680, EVP_CIPHER_CTX *, EVP_CIPHER_CTX_dup , const EVP_CIPHER_CTX *, ___in, a0,\
      , AMISSLEXT_BASE_NAME)

#define BN_are_coprime(___a, ___b, ___ctx) \
      LP3(0x1686, int, BN_are_coprime , BIGNUM *, ___a, a0, const BIGNUM *, ___b, a1, BN_CTX *, ___ctx, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_MSG_update_recipNonce(___ctx, ___msg) \
      LP2(0x168c, int, OSSL_CMP_MSG_update_recipNonce , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_MSG *, ___msg, a1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_client_hello_get_extension_order(___s, ___exts, ___num_exts) \
      LP3(0x1692, int, SSL_client_hello_get_extension_order , SSL *, ___s, a0, uint16_t *, ___exts, a1, size_t *, ___num_exts, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_QUIC_client_method() \
      LP0(0x1698, const SSL_METHOD *, OSSL_QUIC_client_method ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_QUIC_client_thread_method() \
      LP0(0x169e, const SSL_METHOD *, OSSL_QUIC_client_thread_method ,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_set1_cert_comp_preference(___ctx, ___algs, ___len) \
      LP3(0x16a4, int, SSL_CTX_set1_cert_comp_preference , SSL_CTX *, ___ctx, a0, int *, ___algs, a1, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set1_cert_comp_preference(___ssl, ___algs, ___len) \
      LP3(0x16aa, int, SSL_set1_cert_comp_preference , SSL *, ___ssl, a0, int *, ___algs, a1, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_compress_certs(___ctx, ___alg) \
      LP2(0x16b0, int, SSL_CTX_compress_certs , SSL_CTX *, ___ctx, a0, int, ___alg, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_compress_certs(___ssl, ___alg) \
      LP2(0x16b6, int, SSL_compress_certs , SSL *, ___ssl, a0, int, ___alg, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_set1_compressed_cert(___ctx, ___algorithm, ___comp_data, ___comp_length, ___orig_length) \
      LP5(0x16bc, int, SSL_CTX_set1_compressed_cert , SSL_CTX *, ___ctx, a0, int, ___algorithm, d0, unsigned char *, ___comp_data, a1, size_t, ___comp_length, d1, size_t, ___orig_length, d2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set1_compressed_cert(___ssl, ___algorithm, ___comp_data, ___comp_length, ___orig_length) \
      LP5(0x16c2, int, SSL_set1_compressed_cert , SSL *, ___ssl, a0, int, ___algorithm, d0, unsigned char *, ___comp_data, a1, size_t, ___comp_length, d1, size_t, ___orig_length, d2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_get1_compressed_cert(___ctx, ___alg, ___data, ___orig_len) \
      LP4(0x16c8, size_t, SSL_CTX_get1_compressed_cert , SSL_CTX *, ___ctx, a0, int, ___alg, d0, unsigned char **, ___data, a1, size_t *, ___orig_len, a2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get1_compressed_cert(___ssl, ___alg, ___data, ___orig_len) \
      LP4(0x16ce, size_t, SSL_get1_compressed_cert , SSL *, ___ssl, a0, int, ___alg, d0, unsigned char **, ___data, a1, size_t *, ___orig_len, a2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_rpoll_descriptor(___s, ___desc) \
      LP2(0x16d4, int, SSL_get_rpoll_descriptor , SSL *, ___s, a0, BIO_POLL_DESCRIPTOR *, ___desc, a1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_wpoll_descriptor(___s, ___desc) \
      LP2(0x16da, int, SSL_get_wpoll_descriptor , SSL *, ___s, a0, BIO_POLL_DESCRIPTOR *, ___desc, a1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set_blocking_mode(___s, ___blocking) \
      LP2(0x16e0, int, SSL_set_blocking_mode , SSL *, ___s, a0, int, ___blocking, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_blocking_mode(___s) \
      LP1(0x16e6, int, SSL_get_blocking_mode , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set1_initial_peer_addr(___s, ___peer_addr) \
      LP2(0x16ec, int, SSL_set1_initial_peer_addr , SSL *, ___s, a0, const BIO_ADDR *, ___peer_addr, a1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_net_read_desired(___s) \
      LP1(0x16f2, int, SSL_net_read_desired , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_net_write_desired(___s) \
      LP1(0x16f8, int, SSL_net_write_desired , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_shutdown_ex(___ssl, ___flags, ___args, ___args_len) \
      LP4(0x16fe, int, SSL_shutdown_ex , SSL *, ___ssl, a0, uint64_t, ___flags, d0, const SSL_SHUTDOWN_EX_ARGS *, ___args, a1, size_t, ___args_len, d2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_stream_conclude(___ssl, ___flags) \
      LP2(0x1704, int, SSL_stream_conclude , SSL *, ___ssl, a0, uint64_t, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_inject_net_dgram(___s, ___buf, ___buf_len, ___peer, ___local) \
      LP5(0x170a, int, SSL_inject_net_dgram , SSL *, ___s, a0, const unsigned char *, ___buf, a1, size_t, ___buf_len, d0, const BIO_ADDR *, ___peer, a2, const BIO_ADDR *, ___local, a3,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get0_peer_rpk(___s) \
      LP1(0x1710, EVP_PKEY *, SSL_get0_peer_rpk , const SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_SESSION_get0_peer_rpk(___s) \
      LP1(0x1716, EVP_PKEY *, SSL_SESSION_get0_peer_rpk , SSL_SESSION *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set1_client_cert_type(___s, ___val, ___len) \
      LP3(0x171c, int, SSL_set1_client_cert_type , SSL *, ___s, a0, const unsigned char *, ___val, a1, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get0_client_cert_type(___s, ___t, ___len) \
      LP3(0x1722, int, SSL_get0_client_cert_type , const SSL *, ___s, a0, unsigned char **, ___t, a1, size_t *, ___len, a2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set1_server_cert_type(___s, ___val, ___len) \
      LP3(0x1728, int, SSL_set1_server_cert_type , SSL *, ___s, a0, const unsigned char *, ___val, a1, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get0_server_cert_type(___s, ___t, ___len) \
      LP3(0x172e, int, SSL_get0_server_cert_type , const SSL *, ___s, a0, unsigned char **, ___t, a1, size_t *, ___len, a2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_set1_client_cert_type(___ctx, ___val, ___len) \
      LP3(0x1734, int, SSL_CTX_set1_client_cert_type , SSL_CTX *, ___ctx, a0, const unsigned char *, ___val, a1, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_get0_client_cert_type(___ctx, ___t, ___len) \
      LP3(0x173a, int, SSL_CTX_get0_client_cert_type , const SSL_CTX *, ___ctx, a0, unsigned char **, ___t, a1, size_t *, ___len, a2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_set1_server_cert_type(___ctx, ___val, ___len) \
      LP3(0x1740, int, SSL_CTX_set1_server_cert_type , SSL_CTX *, ___ctx, a0, const unsigned char *, ___val, a1, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_get0_server_cert_type(___s, ___t, ___len) \
      LP3(0x1746, int, SSL_CTX_get0_server_cert_type , const SSL_CTX *, ___s, a0, unsigned char **, ___t, a1, size_t *, ___len, a2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_negotiated_client_cert_type(___s) \
      LP1(0x174c, int, SSL_get_negotiated_client_cert_type , const SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_negotiated_server_cert_type(___s) \
      LP1(0x1752, int, SSL_get_negotiated_server_cert_type , const SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_add_expected_rpk(___s, ___rpk) \
      LP2(0x1758, int, SSL_add_expected_rpk , SSL *, ___s, a0, EVP_PKEY *, ___rpk, a1,\
      , AMISSLEXT_BASE_NAME)

#define d2i_SSL_SESSION_ex(___a, ___pp, ___length, ___libctx, ___propq) \
      LP5(0x175e, SSL_SESSION *, d2i_SSL_SESSION_ex , SSL_SESSION **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define SSL_is_tls(___s) \
      LP1(0x1764, int, SSL_is_tls , const SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_is_quic(___s) \
      LP1(0x176a, int, SSL_is_quic , const SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_handshake_rtt(___s, ___rtt) \
      LP2(0x1770, int, SSL_get_handshake_rtt , const SSL *, ___s, a0, uint64_t *, ___rtt, a1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_new_stream(___s, ___flags) \
      LP2(0x1776, SSL *, SSL_new_stream , SSL *, ___s, a0, uint64_t, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get0_connection(___s) \
      LP1(0x177c, SSL *, SSL_get0_connection , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_is_connection(___s) \
      LP1(0x1782, int, SSL_is_connection , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_stream_type(___s) \
      LP1(0x1788, int, SSL_get_stream_type , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_stream_id(___s) \
      LP1(0x178e, uint64_t, SSL_get_stream_id , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set_default_stream_mode(___s, ___mode) \
      LP2(0x1794, int, SSL_set_default_stream_mode , SSL *, ___s, a0, uint32_t, ___mode, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_accept_stream(___s, ___flags) \
      LP2(0x179a, SSL *, SSL_accept_stream , SSL *, ___s, a0, uint64_t, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_accept_stream_queue_len(___s) \
      LP1(0x17a0, size_t, SSL_get_accept_stream_queue_len , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_stream_reset(___ssl, ___args, ___args_len) \
      LP3(0x17a6, int, SSL_stream_reset , SSL *, ___ssl, a0, const SSL_STREAM_RESET_ARGS *, ___args, a1, size_t, ___args_len, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_stream_read_state(___ssl) \
      LP1(0x17ac, int, SSL_get_stream_read_state , SSL *, ___ssl, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_stream_write_state(___ssl) \
      LP1(0x17b2, int, SSL_get_stream_write_state , SSL *, ___ssl, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_stream_read_error_code(___ssl, ___app_error_code) \
      LP2(0x17b8, int, SSL_get_stream_read_error_code , SSL *, ___ssl, a0, uint64_t *, ___app_error_code, a1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_stream_write_error_code(___ssl, ___app_error_code) \
      LP2(0x17be, int, SSL_get_stream_write_error_code , SSL *, ___ssl, a0, uint64_t *, ___app_error_code, a1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_conn_close_info(___ssl, ___info, ___info_len) \
      LP3(0x17c4, int, SSL_get_conn_close_info , SSL *, ___ssl, a0, SSL_CONN_CLOSE_INFO *, ___info, a1, size_t, ___info_len, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set_incoming_stream_policy(___s, ___policy, ___aec) \
      LP3(0x17ca, int, SSL_set_incoming_stream_policy , SSL *, ___s, a0, int, ___policy, d2, uint64_t, ___aec, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_handle_events(___s) \
      LP1(0x17d0, int, SSL_handle_events , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_event_timeout(___s, ___tv, ___is_infinite) \
      LP3(0x17d6, int, SSL_get_event_timeout , SSL *, ___s, a0, struct timeval *, ___tv, a1, int *, ___is_infinite, a2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get0_group_name(___s) \
      LP1(0x17dc, const char *, SSL_get0_group_name , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_is_stream_local(___s) \
      LP1(0x17e2, int, SSL_is_stream_local , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define BIO_f_zlib() \
      LP0(0x17e8, const BIO_METHOD *, BIO_f_zlib ,\
      , AMISSLEXT_BASE_NAME)

#define X509_PUBKEY_set0_public_key(___pub, ___penc, ___penclen) \
      LP3NR(0x17ee, X509_PUBKEY_set0_public_key , X509_PUBKEY *, ___pub, a0, unsigned char *, ___penc, a1, int, ___penclen, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STACK_OF_X509_free(___certs) \
      LP1NR(0x17f4, OSSL_STACK_OF_X509_free , STACK_OF(X509) *, ___certs, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_trace_string(___out, ___text, ___full, ___data, ___size) \
      LP5(0x17fa, int, OSSL_trace_string , BIO *, ___out, a0, int, ___text, d0, int, ___full, d1, const unsigned char *, ___data, a1, size_t, ___size, d2,\
      , AMISSLEXT_BASE_NAME)

#define BN_signed_bin2bn(___s, ___len, ___ret) \
      LP3(0x1800, BIGNUM *, BN_signed_bin2bn , const unsigned char *, ___s, a0, int, ___len, d0, BIGNUM *, ___ret, a1,\
      , AMISSLEXT_BASE_NAME)

#define BN_signed_bn2bin(___a, ___to, ___tolen) \
      LP3(0x1806, int, BN_signed_bn2bin , const BIGNUM *, ___a, a0, unsigned char *, ___to, a1, int, ___tolen, d0,\
      , AMISSLEXT_BASE_NAME)

#define BN_signed_lebin2bn(___s, ___len, ___ret) \
      LP3(0x180c, BIGNUM *, BN_signed_lebin2bn , const unsigned char *, ___s, a0, int, ___len, d0, BIGNUM *, ___ret, a1,\
      , AMISSLEXT_BASE_NAME)

#define BN_signed_bn2lebin(___a, ___to, ___tolen) \
      LP3(0x1812, int, BN_signed_bn2lebin , const BIGNUM *, ___a, a0, unsigned char *, ___to, a1, int, ___tolen, d0,\
      , AMISSLEXT_BASE_NAME)

#define BN_signed_native2bn(___s, ___len, ___ret) \
      LP3(0x1818, BIGNUM *, BN_signed_native2bn , const unsigned char *, ___s, a0, int, ___len, d0, BIGNUM *, ___ret, a1,\
      , AMISSLEXT_BASE_NAME)

#define BN_signed_bn2native(___a, ___to, ___tolen) \
      LP3(0x181e, int, BN_signed_bn2native , const BIGNUM *, ___a, a0, unsigned char *, ___to, a1, int, ___tolen, d0,\
      , AMISSLEXT_BASE_NAME)

#define ASYNC_set_mem_functions(___alloc_fn, ___free_fn) \
      LP2(0x1824, int, ASYNC_set_mem_functions , ASYNC_stack_alloc_fn, ___alloc_fn, a0, ASYNC_stack_free_fn, ___free_fn, a1,\
      , AMISSLEXT_BASE_NAME)

#define ASYNC_get_mem_functions(___alloc_fn, ___free_fn) \
      LP2NR(0x182a, ASYNC_get_mem_functions , ASYNC_stack_alloc_fn *, ___alloc_fn, a0, ASYNC_stack_free_fn *, ___free_fn, a1,\
      , AMISSLEXT_BASE_NAME)

#define BIO_ADDR_dup(___ap) \
      LP1(0x1830, BIO_ADDR *, BIO_ADDR_dup , const BIO_ADDR *, ___ap, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_new_caCerts(___caCerts) \
      LP1(0x1836, OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new_caCerts , const STACK_OF(X509) *, ___caCerts, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_get0_caCerts(___itav, ___out) \
      LP2(0x183c, int, OSSL_CMP_ITAV_get0_caCerts , const OSSL_CMP_ITAV *, ___itav, a0, STACK_OF(X509) **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_get1_caCerts(___ctx, ___out) \
      LP2(0x1842, int, OSSL_CMP_get1_caCerts , OSSL_CMP_CTX *, ___ctx, a0, STACK_OF(X509) **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_new_rootCaCert(___rootCaCert) \
      LP1(0x1848, OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new_rootCaCert , const X509 *, ___rootCaCert, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_get0_rootCaCert(___itav, ___out) \
      LP2(0x184e, int, OSSL_CMP_ITAV_get0_rootCaCert , const OSSL_CMP_ITAV *, ___itav, a0, X509 **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_new_rootCaKeyUpdate(___newWithNew, ___newWithOld, ___oldWithNew) \
      LP3(0x1854, OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new_rootCaKeyUpdate , const X509 *, ___newWithNew, a0, const X509 *, ___newWithOld, a1, const X509 *, ___oldWithNew, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_get0_rootCaKeyUpdate(___itav, ___newWithNew, ___newWithOld, ___oldWithNew) \
      LP4(0x185a, int, OSSL_CMP_ITAV_get0_rootCaKeyUpdate , const OSSL_CMP_ITAV *, ___itav, a0, X509 **, ___newWithNew, a1, X509 **, ___newWithOld, a2, X509 **, ___oldWithNew, a3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_get1_rootCaKeyUpdate(___ctx, ___oldWithOld, ___newWithNew, ___newWithOld, ___oldWithNew) \
      LP5(0x1860, int, OSSL_CMP_get1_rootCaKeyUpdate , OSSL_CMP_CTX *, ___ctx, a0, const X509 *, ___oldWithOld, a1, X509 **, ___newWithNew, a2, X509 **, ___newWithOld, a3, X509 **, ___oldWithNew, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get0_libctx(___ctx) \
      LP1(0x1866, OSSL_LIB_CTX *, OSSL_CMP_CTX_get0_libctx , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get0_propq(___ctx) \
      LP1(0x186c, const char *, OSSL_CMP_CTX_get0_propq , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get0_validatedSrvCert(___ctx) \
      LP1(0x1872, X509 *, OSSL_CMP_CTX_get0_validatedSrvCert , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_set1_serialNumber(___ctx, ___sn) \
      LP2(0x1878, int, OSSL_CMP_CTX_set1_serialNumber , OSSL_CMP_CTX *, ___ctx, a0, const ASN1_INTEGER *, ___sn, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTTEMPLATE_get0_publicKey(___tmpl) \
      LP1(0x187e, X509_PUBKEY *, OSSL_CRMF_CERTTEMPLATE_get0_publicKey , const OSSL_CRMF_CERTTEMPLATE *, ___tmpl, a0,\
      , AMISSLEXT_BASE_NAME)

#define CMS_final_digest(___cms, ___md, ___mdlen, ___dcont, ___flags) \
      LP5(0x1884, int, CMS_final_digest , CMS_ContentInfo *, ___cms, a0, const unsigned char *, ___md, a1, unsigned int, ___mdlen, d0, BIO *, ___dcont, a2, unsigned int, ___flags, d1,\
      , AMISSLEXT_BASE_NAME)

#define CMS_EnvelopedData_it() \
      LP0(0x188a, const ASN1_ITEM *, CMS_EnvelopedData_it ,\
      , AMISSLEXT_BASE_NAME)

#define CMS_EnvelopedData_decrypt(___env, ___detached_data, ___pkey, ___cert, ___secret, ___flags, ___libctx, ___propq) \
      LP8(0x1890, BIO *, CMS_EnvelopedData_decrypt , CMS_EnvelopedData *, ___env, a0, BIO *, ___detached_data, a1, EVP_PKEY *, ___pkey, a2, X509 *, ___cert, a3, ASN1_OCTET_STRING *, ___secret, d0, unsigned int, ___flags, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME)

#define CMS_SignedData_free(___a) \
      LP1NR(0x1896, CMS_SignedData_free , CMS_SignedData *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define CMS_SignedData_new() \
      LP0(0x189c, CMS_SignedData *, CMS_SignedData_new ,\
      , AMISSLEXT_BASE_NAME)

#define CMS_SignedData_verify(___sd, ___detached_data, ___scerts, ___store, ___extra, ___crls, ___flags, ___libctx, ___propq) \
      LP9(0x18a2, BIO *, CMS_SignedData_verify , CMS_SignedData *, ___sd, a0, BIO *, ___detached_data, a1, STACK_OF(X509) *, ___scerts, a2, X509_STORE *, ___store, a3, STACK_OF(X509) *, ___extra, d0, STACK_OF(X509_CRL) *, ___crls, d1, unsigned int, ___flags, d2, OSSL_LIB_CTX *, ___libctx, d3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME)

#define BIO_s_dgram_mem() \
      LP0(0x18a8, const BIO_METHOD *, BIO_s_dgram_mem ,\
      , AMISSLEXT_BASE_NAME)

#define BIO_recvmmsg(___b, ___msg, ___stride, ___num_msg, ___flags, ___msgs_processed) \
      LP6(0x18ae, int, BIO_recvmmsg , BIO *, ___b, a0, BIO_MSG *, ___msg, a1, size_t, ___stride, d0, size_t, ___num_msg, d1, uint64_t, ___flags, d2, size_t *, ___msgs_processed, a2,\
      , AMISSLEXT_BASE_NAME)

#define BIO_sendmmsg(___b, ___msg, ___stride, ___num_msg, ___flags, ___msgs_processed) \
      LP6(0x18b4, int, BIO_sendmmsg , BIO *, ___b, a0, BIO_MSG *, ___msg, a1, size_t, ___stride, d0, size_t, ___num_msg, d1, uint64_t, ___flags, d2, size_t *, ___msgs_processed, a2,\
      , AMISSLEXT_BASE_NAME)

#define BIO_meth_set_sendmmsg(___biom, ___f) \
      LP2FP(0x18ba, int, BIO_meth_set_sendmmsg , BIO_METHOD *, ___biom, a0, __fpt, ___f, a1,\
      , AMISSLEXT_BASE_NAME, int (*__fpt)(BIO *,BIO_MSG *,size_t,size_t,uint64_t,size_t *))

#define BIO_meth_get_sendmmsg(___biom) \
      LP1FR(0x18c0, __fpr, BIO_meth_get_sendmmsg , const BIO_METHOD *, ___biom, a0,\
      , AMISSLEXT_BASE_NAME, int (*__fpr)(BIO *, BIO_MSG *, size_t, size_t, uint64_t, size_t *))

#define BIO_meth_set_recvmmsg(___biom, ___f) \
      LP2FP(0x18c6, int, BIO_meth_set_recvmmsg , BIO_METHOD *, ___biom, a0, __fpt, ___f, a1,\
      , AMISSLEXT_BASE_NAME, int (*__fpt)(BIO *,BIO_MSG *,size_t,size_t,uint64_t,size_t *))

#define BIO_meth_get_recvmmsg(___biom) \
      LP1FR(0x18cc, __fpr, BIO_meth_get_recvmmsg , const BIO_METHOD *, ___biom, a0,\
      , AMISSLEXT_BASE_NAME, int (*__fpr)(BIO *, BIO_MSG *, size_t, size_t, uint64_t, size_t *))

#define BIO_err_is_non_fatal(___errcode) \
      LP1(0x18d2, int, BIO_err_is_non_fatal , unsigned int, ___errcode, d0,\
      , AMISSLEXT_BASE_NAME)

#define BIO_s_dgram_pair() \
      LP0(0x18d8, const BIO_METHOD *, BIO_s_dgram_pair ,\
      , AMISSLEXT_BASE_NAME)

#define BIO_new_bio_dgram_pair(___bio1, ___writebuf1, ___bio2, ___writebuf2) \
      LP4(0x18de, int, BIO_new_bio_dgram_pair , BIO **, ___bio1, a0, size_t, ___writebuf1, d0, BIO **, ___bio2, a1, size_t, ___writebuf2, d1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_auth_encapsulate_init(___ctx, ___authpriv, ___params) \
      LP3(0x18e4, int, EVP_PKEY_auth_encapsulate_init , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY *, ___authpriv, a1, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_auth_decapsulate_init(___ctx, ___authpub, ___params) \
      LP3(0x18ea, int, EVP_PKEY_auth_decapsulate_init , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY *, ___authpub, a1, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_SAFEBAG_set0_attrs(___bag, ___attrs) \
      LP2NR(0x18f0, PKCS12_SAFEBAG_set0_attrs , PKCS12_SAFEBAG *, ___bag, a0, STACK_OF(X509_ATTRIBUTE) *, ___attrs, a1,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_create_ex2_amiga_1(___pass, ___name, ___pkey, ___cert, ___ca, ___nid_key, ___nid_cert, ___moreargs) \
      LP8(0x18f6, PKCS12 *, PKCS12_create_ex2_amiga_1 , const char *, ___pass, a0, const char *, ___name, a1, EVP_PKEY *, ___pkey, a2, X509 *, ___cert, a3, STACK_OF(X509) *, ___ca, d0, int, ___nid_key, d1, int, ___nid_cert, d2, void *, ___moreargs, d3,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_create_ex2_amiga_2(___iter, ___mac_iter, ___keytype, ___ctx, ___propq, ___cb, ___cbarg) \
      LP7(0x18fc, void *, PKCS12_create_ex2_amiga_2 , int, ___iter, d0, int, ___mac_iter, d1, int, ___keytype, d2, OSSL_LIB_CTX *, ___ctx, a1, const char *, ___propq, a2, PKCS12_create_cb *, ___cb, a3, void *, ___cbarg, d3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_sleep(___millis) \
      LP1NR(0x1902, OSSL_sleep , uint64_t, ___millis, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_get_thread_support_flags() \
      LP0(0x1908, uint32_t, OSSL_get_thread_support_flags ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_set_max_threads(___ctx, ___max_threads) \
      LP2(0x190e, int, OSSL_set_max_threads , OSSL_LIB_CTX *, ___ctx, a0, uint64_t, ___max_threads, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_get_max_threads(___ctx) \
      LP1(0x1914, uint64_t, OSSL_get_max_threads , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define COMP_brotli() \
      LP0(0x191a, COMP_METHOD *, COMP_brotli ,\
      , AMISSLEXT_BASE_NAME)

#define COMP_brotli_oneshot() \
      LP0(0x1920, COMP_METHOD *, COMP_brotli_oneshot ,\
      , AMISSLEXT_BASE_NAME)

#define BIO_f_brotli() \
      LP0(0x1926, const BIO_METHOD *, BIO_f_brotli ,\
      , AMISSLEXT_BASE_NAME)

#define COMP_zstd() \
      LP0(0x192c, COMP_METHOD *, COMP_zstd ,\
      , AMISSLEXT_BASE_NAME)

#define COMP_zstd_oneshot() \
      LP0(0x1932, COMP_METHOD *, COMP_zstd_oneshot ,\
      , AMISSLEXT_BASE_NAME)

#define BIO_f_zstd() \
      LP0(0x1938, const BIO_METHOD *, BIO_f_zstd ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_PUBKEY_ex_bio(___bp, ___a, ___libctx, ___propq) \
      LP4(0x193e, EVP_PKEY *, d2i_PUBKEY_ex_bio , BIO *, ___bp, a0, EVP_PKEY **, ___a, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define COMP_zlib_oneshot() \
      LP0(0x1944, COMP_METHOD *, COMP_zlib_oneshot ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_keygen_amiga(___suite, ___pub, ___publen, ___priv, ___ikm, ___ikmlen, ___libctx, ___propq) \
      LP8(0x194a, int, OSSL_HPKE_keygen_amiga , OSSL_HPKE_SUITE *, ___suite, a0, unsigned char *, ___pub, a1, size_t *, ___publen, a2, EVP_PKEY **, ___priv, a3, const unsigned char *, ___ikm, d0, size_t, ___ikmlen, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_suite_check_amiga(___suite) \
      LP1(0x1950, int, OSSL_HPKE_suite_check_amiga , OSSL_HPKE_SUITE *, ___suite, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_get_grease_value(___suite_in, ___suite, ___enc, ___enclen, ___ct, ___ctlen, ___libctx, ___propq) \
      LP8(0x1956, int, OSSL_HPKE_get_grease_value , const OSSL_HPKE_SUITE *, ___suite_in, a0, OSSL_HPKE_SUITE *, ___suite, a1, unsigned char *, ___enc, a2, size_t *, ___enclen, a3, unsigned char *, ___ct, d0, size_t, ___ctlen, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_str2suite(___str, ___suite) \
      LP2(0x195c, int, OSSL_HPKE_str2suite , const char *, ___str, a0, OSSL_HPKE_SUITE *, ___suite, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_CTX_free(___ctx) \
      LP1NR(0x1962, OSSL_HPKE_CTX_free , OSSL_HPKE_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_CTX_new_amiga(___mode, ___suite, ___role, ___libctx, ___propq) \
      LP5(0x1968, OSSL_HPKE_CTX *, OSSL_HPKE_CTX_new_amiga , int, ___mode, d0, OSSL_HPKE_SUITE *, ___suite, a0, int, ___role, d1, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_CTX_set1_authpriv(___ctx, ___priv) \
      LP2(0x196e, int, OSSL_HPKE_CTX_set1_authpriv , OSSL_HPKE_CTX *, ___ctx, a0, EVP_PKEY *, ___priv, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_CTX_set1_authpub(___ctx, ___pub, ___publen) \
      LP3(0x1974, int, OSSL_HPKE_CTX_set1_authpub , OSSL_HPKE_CTX *, ___ctx, a0, const unsigned char *, ___pub, a1, size_t, ___publen, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_CTX_set1_psk(___ctx, ___pskid, ___psk, ___psklen) \
      LP4(0x197a, int, OSSL_HPKE_CTX_set1_psk , OSSL_HPKE_CTX *, ___ctx, a0, const char *, ___pskid, a1, const unsigned char *, ___psk, a2, size_t, ___psklen, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_CTX_set1_ikme(___ctx, ___ikme, ___ikmelen) \
      LP3(0x1980, int, OSSL_HPKE_CTX_set1_ikme , OSSL_HPKE_CTX *, ___ctx, a0, const unsigned char *, ___ikme, a1, size_t, ___ikmelen, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_get_ciphertext_size_amiga(___suite, ___clearlen) \
      LP2(0x1986, size_t, OSSL_HPKE_get_ciphertext_size_amiga , OSSL_HPKE_SUITE *, ___suite, a0, size_t, ___clearlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_get_public_encap_size_amiga(___suite) \
      LP1(0x198c, size_t, OSSL_HPKE_get_public_encap_size_amiga , OSSL_HPKE_SUITE *, ___suite, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_export(___ctx, ___secret, ___secretlen, ___label, ___labellen) \
      LP5(0x1992, int, OSSL_HPKE_export , OSSL_HPKE_CTX *, ___ctx, a0, unsigned char *, ___secret, a1, size_t, ___secretlen, d0, const unsigned char *, ___label, a2, size_t, ___labellen, d1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_encap(___ctx, ___enc, ___enclen, ___pub, ___publen, ___info, ___infolen) \
      LP7(0x1998, int, OSSL_HPKE_encap , OSSL_HPKE_CTX *, ___ctx, a0, unsigned char *, ___enc, a1, size_t *, ___enclen, a2, const unsigned char *, ___pub, a3, size_t, ___publen, d0, const unsigned char *, ___info, d1, size_t, ___infolen, d2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_decap(___ctx, ___enc, ___enclen, ___recippriv, ___info, ___infolen) \
      LP6(0x199e, int, OSSL_HPKE_decap , OSSL_HPKE_CTX *, ___ctx, a0, const unsigned char *, ___enc, a1, size_t, ___enclen, d0, EVP_PKEY *, ___recippriv, a2, const unsigned char *, ___info, a3, size_t, ___infolen, d1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_seal(___ctx, ___ct, ___ctlen, ___aad, ___aadlen, ___pt, ___ptlen) \
      LP7(0x19a4, int, OSSL_HPKE_seal , OSSL_HPKE_CTX *, ___ctx, a0, unsigned char *, ___ct, a1, size_t *, ___ctlen, a2, const unsigned char *, ___aad, a3, size_t, ___aadlen, d0, const unsigned char *, ___pt, d1, size_t, ___ptlen, d2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_open(___ctx, ___pt, ___ptlen, ___aad, ___aadlen, ___ct, ___ctlen) \
      LP7(0x19aa, int, OSSL_HPKE_open , OSSL_HPKE_CTX *, ___ctx, a0, unsigned char *, ___pt, a1, size_t *, ___ptlen, a2, const unsigned char *, ___aad, a3, size_t, ___aadlen, d0, const unsigned char *, ___ct, d1, size_t, ___ctlen, d2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_CTX_get_seq(___ctx, ___seq) \
      LP2(0x19b0, int, OSSL_HPKE_CTX_get_seq , OSSL_HPKE_CTX *, ___ctx, a0, uint64_t *, ___seq, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_CTX_set_seq(___ctx, ___seq) \
      LP2(0x19b6, int, OSSL_HPKE_CTX_set_seq , OSSL_HPKE_CTX *, ___ctx, a0, uint64_t, ___seq, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HPKE_get_recommended_ikmelen_amiga(___suite) \
      LP1(0x19bc, size_t, OSSL_HPKE_get_recommended_ikmelen_amiga , OSSL_HPKE_SUITE *, ___suite, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_get0_default_search_path(___libctx) \
      LP1(0x19c2, const char *, OSSL_PROVIDER_get0_default_search_path , OSSL_LIB_CTX *, ___libctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define BIO_get_rpoll_descriptor(___b, ___desc) \
      LP2(0x19c8, int, BIO_get_rpoll_descriptor , BIO *, ___b, a0, BIO_POLL_DESCRIPTOR *, ___desc, a1,\
      , AMISSLEXT_BASE_NAME)

#define BIO_get_wpoll_descriptor(___b, ___desc) \
      LP2(0x19ce, int, BIO_get_wpoll_descriptor , BIO *, ___b, a0, BIO_POLL_DESCRIPTOR *, ___desc, a1,\
      , AMISSLEXT_BASE_NAME)

#define ASN1_item_unpack_ex(___oct, ___it, ___libctx, ___propq) \
      LP4(0x19d4, void *, ASN1_item_unpack_ex , const ASN1_STRING *, ___oct, a0, const ASN1_ITEM *, ___it, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_SAFEBAG_get1_cert_ex(___bag, ___libctx, ___propq) \
      LP3(0x19da, X509 *, PKCS12_SAFEBAG_get1_cert_ex , const PKCS12_SAFEBAG *, ___bag, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_SAFEBAG_get1_crl_ex(___bag, ___libctx, ___propq) \
      LP3(0x19e0, X509_CRL *, PKCS12_SAFEBAG_get1_crl_ex , const PKCS12_SAFEBAG *, ___bag, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME)

#define EC_GROUP_to_params(___group, ___libctx, ___propq, ___bnctx) \
      LP4(0x19e6, OSSL_PARAM *, EC_GROUP_to_params , const EC_GROUP *, ___group, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2, BN_CTX *, ___bnctx, a3,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_CTX_init_rpk(___ctx, ___trust_store, ___rpk) \
      LP3(0x19ec, int, X509_STORE_CTX_init_rpk , X509_STORE_CTX *, ___ctx, a0, X509_STORE *, ___trust_store, a1, EVP_PKEY*, ___rpk, a2,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_CTX_get0_rpk(___ctx) \
      LP1(0x19f2, EVP_PKEY *, X509_STORE_CTX_get0_rpk , const X509_STORE_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_CTX_set0_rpk(___ctx, ___target) \
      LP2NR(0x19f8, X509_STORE_CTX_set0_rpk , X509_STORE_CTX *, ___ctx, a0, EVP_PKEY *, ___target, a1,\
      , AMISSLEXT_BASE_NAME)

#define CRYPTO_atomic_load_int(___val, ___ret, ___lock) \
      LP3(0x19fe, int, CRYPTO_atomic_load_int , int *, ___val, a0, int *, ___ret, a1, CRYPTO_RWLOCK *, ___lock, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ERR_STATE_new() \
      LP0(0x1a04, ERR_STATE *, OSSL_ERR_STATE_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ERR_STATE_save(___es) \
      LP1NR(0x1a0a, OSSL_ERR_STATE_save , ERR_STATE *, ___es, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ERR_STATE_restore(___es) \
      LP1NR(0x1a10, OSSL_ERR_STATE_restore , const ERR_STATE *, ___es, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ERR_STATE_free(___es) \
      LP1NR(0x1a16, OSSL_ERR_STATE_free , ERR_STATE *, ___es, a0,\
      , AMISSLEXT_BASE_NAME)

#define ERR_count_to_mark() \
      LP0(0x1a1c, int, ERR_count_to_mark ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_load_ex(___a, ___name, ___params) \
      LP3(0x1a22, OSSL_PROVIDER *, OSSL_PROVIDER_load_ex , OSSL_LIB_CTX *, ___a, a0, const char *, ___name, a1, OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_try_load_ex(___a, ___name, ___params, ___retain_fallbacks) \
      LP4(0x1a28, OSSL_PROVIDER *, OSSL_PROVIDER_try_load_ex , OSSL_LIB_CTX *, ___a, a0, const char *, ___name, a1, OSSL_PARAM *, ___params, a2, int, ___retain_fallbacks, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ERR_STATE_save_to_mark(___es) \
      LP1NR(0x1a2e, OSSL_ERR_STATE_save_to_mark , ERR_STATE *, ___es, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_CTX_set_get_crl(___ctx, ___get_crl) \
      LP2NR(0x1a34, X509_STORE_CTX_set_get_crl , X509_STORE_CTX *, ___ctx, a0, X509_STORE_CTX_get_crl_fn, ___get_crl, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_CTX_set_current_reasons(___ctx, ___current_reasons) \
      LP2NR(0x1a3a, X509_STORE_CTX_set_current_reasons , X509_STORE_CTX *, ___ctx, a0, unsigned int, ___current_reasons, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_STORE_delete(___uri, ___libctx, ___propq, ___ui_method, ___ui_data, ___params) \
      LP6(0x1a40, int, OSSL_STORE_delete , const char *, ___uri, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2, const UI_METHOD *, ___ui_method, a3, void *, ___ui_data, d0, const OSSL_PARAM *, ___params, d1,\
      , AMISSLEXT_BASE_NAME)

#define BIO_ADDR_copy(___dst, ___src) \
      LP2(0x1a46, int, BIO_ADDR_copy , BIO_ADDR *, ___dst, a0, const BIO_ADDR *, ___src, a1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_write_ex2(___s, ___buf, ___num, ___flags, ___written) \
      LP5(0x1a4c, int, SSL_write_ex2 , SSL *, ___s, a0, const void *, ___buf, a1, size_t, ___num, d2, uint64_t, ___flags, d0, size_t *, ___written, a2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_value_uint(___s, ___class_, ___id, ___v) \
      LP4(0x1a52, int, SSL_get_value_uint , SSL *, ___s, a0, uint32_t, ___class_, d0, uint32_t, ___id, d1, uint64_t *, ___v, a1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set_value_uint(___s, ___class_, ___id, ___v) \
      LP4(0x1a58, int, SSL_set_value_uint , SSL *, ___s, a0, uint32_t, ___class_, d0, uint32_t, ___id, d1, uint64_t, ___v, d2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_poll(___items, ___num_items, ___stride, ___timeout, ___flags, ___result_count) \
      LP6(0x1a5e, int, SSL_poll , SSL_POLL_ITEM *, ___items, a0, size_t, ___num_items, d0, size_t, ___stride, d1, const struct timeval *, ___timeout, a1, uint64_t, ___flags, d2, size_t *, ___result_count, a2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_SESSION_get_time_ex(___s) \
      LP1(0x1a64, time_t, SSL_SESSION_get_time_ex , const SSL_SESSION *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_SESSION_set_time_ex(___s, ___t) \
      LP2(0x1a6a, time_t, SSL_SESSION_set_time_ex , SSL_SESSION *, ___s, a0, time_t, ___t, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CTX_get0_geninfo_ITAVs(___ctx) \
      LP1(0x1a70, STACK_OF(OSSL_CMP_ITAV) *, OSSL_CMP_CTX_get0_geninfo_ITAVs , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_HDR_get0_geninfo_ITAVs(___hdr) \
      LP1(0x1a76, STACK_OF(OSSL_CMP_ITAV) *, OSSL_CMP_HDR_get0_geninfo_ITAVs , const OSSL_CMP_PKIHEADER *, ___hdr, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_new0_certProfile(___certProfile) \
      LP1(0x1a7c, OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new0_certProfile , STACK_OF(ASN1_UTF8STRING) *, ___certProfile, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_get0_certProfile(___itav, ___out) \
      LP2(0x1a82, int, OSSL_CMP_ITAV_get0_certProfile , const OSSL_CMP_ITAV *, ___itav, a0, STACK_OF(ASN1_UTF8STRING) **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_MSG_get0_certreq_publickey(___msg) \
      LP1(0x1a88, X509_PUBKEY *, OSSL_CMP_MSG_get0_certreq_publickey , const OSSL_CMP_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_SRV_CTX_init_trans(___srv_ctx, ___delay, ___clean) \
      LP3(0x1a8e, int, OSSL_CMP_SRV_CTX_init_trans , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, OSSL_CMP_SRV_delayed_delivery_cb_t, ___delay, a1, OSSL_CMP_SRV_clean_transaction_cb_t, ___clean, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_DigestSqueeze(___ctx, ___out, ___outlen) \
      LP3(0x1a94, int, EVP_DigestSqueeze , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t, ___outlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define ERR_pop() \
      LP0(0x1a9a, int, ERR_pop ,\
      , AMISSLEXT_BASE_NAME)

#define X509_STORE_get1_objects(___xs) \
      LP1(0x1aa0, STACK_OF(X509_OBJECT) *, X509_STORE_get1_objects , X509_STORE *, ___xs, a0,\
      , AMISSLEXT_BASE_NAME)

#define OPENSSL_LH_set_thunks(___lh, ___hw, ___cw, ___daw, ___daaw) \
      LP5(0x1aa6, OPENSSL_LHASH *, OPENSSL_LH_set_thunks , OPENSSL_LHASH *, ___lh, a0, OPENSSL_LH_HASHFUNCTHUNK, ___hw, a1, OPENSSL_LH_COMPFUNCTHUNK, ___cw, a2, OPENSSL_LH_DOALL_FUNC_THUNK, ___daw, a3, OPENSSL_LH_DOALL_FUNCARG_THUNK, ___daaw, d0,\
      , AMISSLEXT_BASE_NAME)

#define OPENSSL_LH_doall_arg_thunk(___lh, ___daaw, ___fn, ___arg) \
      LP4NR(0x1aac, OPENSSL_LH_doall_arg_thunk , OPENSSL_LHASH *, ___lh, a0, OPENSSL_LH_DOALL_FUNCARG_THUNK, ___daaw, d0, OPENSSL_LH_DOALL_FUNCARG, ___fn, d1, void *, ___arg, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(___rctx, ___count) \
      LP2NR(0x1ab2, OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines , OSSL_HTTP_REQ_CTX *, ___rctx, a0, size_t, ___count, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_flush_sessions_ex(___ctx, ___tm) \
      LP2NR(0x1ab8, SSL_CTX_flush_sessions_ex , SSL_CTX *, ___ctx, a0, time_t, ___tm, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_set_block_padding_ex(___ctx, ___app_block_size, ___hs_block_size) \
      LP3(0x1abe, int, SSL_CTX_set_block_padding_ex , SSL_CTX *, ___ctx, a0, size_t, ___app_block_size, d0, size_t, ___hs_block_size, d1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set_block_padding_ex(___ssl, ___app_block_size, ___hs_block_size) \
      LP3(0x1ac4, int, SSL_set_block_padding_ex , SSL *, ___ssl, a0, size_t, ___app_block_size, d0, size_t, ___hs_block_size, d1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get1_builtin_sigalgs(___libctx) \
      LP1(0x1aca, char *, SSL_get1_builtin_sigalgs , OSSL_LIB_CTX *, ___libctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define DIST_POINT_NAME_dup(___a) \
      LP1(0x1ad0, DIST_POINT_NAME *, DIST_POINT_NAME_dup , const DIST_POINT_NAME *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define GENERAL_NAME_set1_X509_NAME(___tgt, ___src) \
      LP2(0x1ad6, int, GENERAL_NAME_set1_X509_NAME , GENERAL_NAME **, ___tgt, a0, const X509_NAME *, ___src, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CRLSTATUS_create(___crl, ___cert, ___only_DN) \
      LP3(0x1adc, OSSL_CMP_CRLSTATUS *, OSSL_CMP_CRLSTATUS_create , const X509_CRL *, ___crl, a0, const X509 *, ___cert, a1, int, ___only_DN, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CRLSTATUS_free(___crlstatus) \
      LP1NR(0x1ae2, OSSL_CMP_CRLSTATUS_free , OSSL_CMP_CRLSTATUS *, ___crlstatus, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CRLSTATUS_get0(___crlstatus, ___dpn, ___issuer, ___thisUpdate) \
      LP4(0x1ae8, int, OSSL_CMP_CRLSTATUS_get0 , const OSSL_CMP_CRLSTATUS *, ___crlstatus, a0, DIST_POINT_NAME **, ___dpn, a1, GENERAL_NAMES **, ___issuer, a2, ASN1_TIME **, ___thisUpdate, a3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_CRLSTATUS_new1(___dpn, ___issuer, ___thisUpdate) \
      LP3(0x1aee, OSSL_CMP_CRLSTATUS *, OSSL_CMP_CRLSTATUS_new1 , const DIST_POINT_NAME *, ___dpn, a0, const GENERAL_NAMES *, ___issuer, a1, const ASN1_TIME *, ___thisUpdate, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_get0_crlStatusList(___itav, ___out) \
      LP2(0x1af4, int, OSSL_CMP_ITAV_get0_crlStatusList , const OSSL_CMP_ITAV *, ___itav, a0, STACK_OF(OSSL_CMP_CRLSTATUS) **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_get0_crls(___it, ___out) \
      LP2(0x1afa, int, OSSL_CMP_ITAV_get0_crls , const OSSL_CMP_ITAV *, ___it, a0, STACK_OF(X509_CRL) **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_new0_crlStatusList(___crlStatusList) \
      LP1(0x1b00, OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new0_crlStatusList , STACK_OF(OSSL_CMP_CRLSTATUS) *, ___crlStatusList, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_new_crls(___crls) \
      LP1(0x1b06, OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new_crls , const X509_CRL *, ___crls, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_get1_crlUpdate(___ctx, ___crlcert, ___last_crl, ___crl) \
      LP4(0x1b0c, int, OSSL_CMP_get1_crlUpdate , OSSL_CMP_CTX *, ___ctx, a0, const X509 *, ___crlcert, a1, const X509_CRL *, ___last_crl, a2, X509_CRL **, ___crl, a3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_new0_certReqTemplate(___certTemplate, ___keySpec) \
      LP2(0x1b12, OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new0_certReqTemplate , OSSL_CRMF_CERTTEMPLATE *, ___certTemplate, a0, OSSL_CMP_ATAVS *, ___keySpec, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ITAV_get1_certReqTemplate(___itav, ___certTemplate, ___keySpec) \
      LP3(0x1b18, int, OSSL_CMP_ITAV_get1_certReqTemplate , const OSSL_CMP_ITAV *, ___itav, a0, OSSL_CRMF_CERTTEMPLATE **, ___certTemplate, a1, OSSL_CMP_ATAVS **, ___keySpec, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ATAV_create(___type, ___value) \
      LP2(0x1b1e, OSSL_CMP_ATAV *, OSSL_CMP_ATAV_create , ASN1_OBJECT *, ___type, a0, ASN1_TYPE *, ___value, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ATAV_set0(___itav, ___type, ___value) \
      LP3NR(0x1b24, OSSL_CMP_ATAV_set0 , OSSL_CMP_ATAV *, ___itav, a0, ASN1_OBJECT *, ___type, a1, ASN1_TYPE *, ___value, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ATAV_get0_type(___itav) \
      LP1(0x1b2a, ASN1_OBJECT *, OSSL_CMP_ATAV_get0_type , const OSSL_CMP_ATAV *, ___itav, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ATAV_get0_value(___itav) \
      LP1(0x1b30, ASN1_TYPE *, OSSL_CMP_ATAV_get0_value , const OSSL_CMP_ATAV *, ___itav, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ATAV_new_algId(___alg) \
      LP1(0x1b36, OSSL_CMP_ATAV *, OSSL_CMP_ATAV_new_algId , const X509_ALGOR *, ___alg, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ATAV_get0_algId(___atav) \
      LP1(0x1b3c, X509_ALGOR *, OSSL_CMP_ATAV_get0_algId , const OSSL_CMP_ATAV *, ___atav, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ATAV_new_rsaKeyLen(___len) \
      LP1(0x1b42, OSSL_CMP_ATAV *, OSSL_CMP_ATAV_new_rsaKeyLen , int, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ATAV_get_rsaKeyLen(___atav) \
      LP1(0x1b48, int, OSSL_CMP_ATAV_get_rsaKeyLen , const OSSL_CMP_ATAV *, ___atav, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ATAV_push1(___sk_p, ___atav) \
      LP2(0x1b4e, int, OSSL_CMP_ATAV_push1 , OSSL_CMP_ATAVS **, ___sk_p, a0, const OSSL_CMP_ATAV *, ___atav, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_get1_certReqTemplate(___ctx, ___certTemplate, ___keySpec) \
      LP3(0x1b54, int, OSSL_CMP_get1_certReqTemplate , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CRMF_CERTTEMPLATE **, ___certTemplate, a1, OSSL_CMP_ATAVS **, ___keySpec, a2,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CMP_ATAVS(___a, ___in, ___len) \
      LP3(0x1b5a, OSSL_CMP_ATAVS *, d2i_OSSL_CMP_ATAVS , OSSL_CMP_ATAVS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CMP_ATAVS(___a, ___out) \
      LP2(0x1b60, int, i2d_OSSL_CMP_ATAVS , const OSSL_CMP_ATAVS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ATAVS_free(___a) \
      LP1NR(0x1b66, OSSL_CMP_ATAVS_free , OSSL_CMP_ATAVS *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ATAVS_new() \
      LP0(0x1b6c, OSSL_CMP_ATAVS *, OSSL_CMP_ATAVS_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CMP_ATAVS_it() \
      LP0(0x1b72, const ASN1_ITEM *, OSSL_CMP_ATAVS_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(___v) \
      LP1NR(0x1b78, OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free , OSSL_CRMF_ATTRIBUTETYPEANDVALUE *, ___v, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup(___a) \
      LP1(0x1b7e, OSSL_CRMF_ATTRIBUTETYPEANDVALUE *, OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup , const OSSL_CRMF_ATTRIBUTETYPEANDVALUE *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_CERTTEMPLATE_dup(___a) \
      LP1(0x1b84, OSSL_CRMF_CERTTEMPLATE *, OSSL_CRMF_CERTTEMPLATE_dup , const OSSL_CRMF_CERTTEMPLATE *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define CRYPTO_atomic_store(___dst, ___val, ___lock) \
      LP3(0x1b8a, int, CRYPTO_atomic_store , uint64_t *, ___dst, a0, uint64_t, ___val, d0, CRYPTO_RWLOCK *, ___lock, a1,\
      , AMISSLEXT_BASE_NAME)

#define CRYPTO_aligned_alloc(___num, ___align, ___freeptr, ___file, ___line) \
      LP5(0x1b90, void *, CRYPTO_aligned_alloc , size_t, ___num, d0, size_t, ___align, d1, void **, ___freeptr, a0, const char *, ___file, a1, int, ___line, d2,\
      , AMISSLEXT_BASE_NAME)

#define X509v3_add_extensions(___target, ___exts) \
      LP2(0x1b96, STACK_OF(X509_EXTENSION) *, X509v3_add_extensions , STACK_OF(X509_EXTENSION) **, ___target, a0, const STACK_OF(X509_EXTENSION) *, ___exts, a1,\
      , AMISSLEXT_BASE_NAME)

#define PKCS12_set_pbmac1_pbkdf2(___p12, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___md_type, ___prf_md_name) \
      LP8(0x1b9c, int, PKCS12_set_pbmac1_pbkdf2 , PKCS12 *, ___p12, a0, const char *, ___pass, a1, int, ___passlen, d0, unsigned char *, ___salt, a2, int, ___saltlen, d1, int, ___iter, d2, const EVP_MD *, ___md_type, a3, const char *, ___prf_md_name, d3,\
      , AMISSLEXT_BASE_NAME)

#define PBMAC1_get1_pbkdf2_param(___macalg) \
      LP1(0x1ba2, PBKDF2PARAM *, PBMAC1_get1_pbkdf2_param , const X509_ALGOR *, ___macalg, a0,\
      , AMISSLEXT_BASE_NAME)

#define d2i_PBMAC1PARAM(___a, ___in, ___len) \
      LP3(0x1ba8, PBMAC1PARAM *, d2i_PBMAC1PARAM , PBMAC1PARAM **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_PBMAC1PARAM(___a, ___out) \
      LP2(0x1bae, int, i2d_PBMAC1PARAM , const PBMAC1PARAM *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define PBMAC1PARAM_free(___a) \
      LP1NR(0x1bb4, PBMAC1PARAM_free , PBMAC1PARAM *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define PBMAC1PARAM_new() \
      LP0(0x1bba, PBMAC1PARAM *, PBMAC1PARAM_new ,\
      , AMISSLEXT_BASE_NAME)

#define PBMAC1PARAM_it() \
      LP0(0x1bc0, const ASN1_ITEM *, PBMAC1PARAM_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_LIB_CTX_get_conf_diagnostics(___ctx) \
      LP1(0x1bc6, int, OSSL_LIB_CTX_get_conf_diagnostics , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_LIB_CTX_set_conf_diagnostics(___ctx, ___value) \
      LP2NR(0x1bcc, OSSL_LIB_CTX_set_conf_diagnostics , OSSL_LIB_CTX *, ___ctx, a0, int, ___value, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_LIB_CTX_get_data(___ctx, ___index) \
      LP2(0x1bd2, void *, OSSL_LIB_CTX_get_data , OSSL_LIB_CTX *, ___ctx, a0, int, ___index, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_GENERAL_NAMES_print(___out, ___gens, ___indent) \
      LP3(0x1bd8, int, OSSL_GENERAL_NAMES_print , BIO *, ___out, a0, GENERAL_NAMES *, ___gens, a1, int, ___indent, d0,\
      , AMISSLEXT_BASE_NAME)

#define TS_VERIFY_CTX_set0_data(___ctx, ___b) \
      LP2(0x1bde, int, TS_VERIFY_CTX_set0_data , TS_VERIFY_CTX *, ___ctx, a0, BIO *, ___b, a1,\
      , AMISSLEXT_BASE_NAME)

#define TS_VERIFY_CTX_set0_imprint(___ctx, ___hexstr, ___len) \
      LP3(0x1be4, int, TS_VERIFY_CTX_set0_imprint , TS_VERIFY_CTX *, ___ctx, a0, unsigned char *, ___hexstr, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define TS_VERIFY_CTX_set0_store(___ctx, ___s) \
      LP2(0x1bea, int, TS_VERIFY_CTX_set0_store , TS_VERIFY_CTX *, ___ctx, a0, X509_STORE *, ___s, a1,\
      , AMISSLEXT_BASE_NAME)

#define TS_VERIFY_CTX_set0_certs(___ctx, ___certs) \
      LP2(0x1bf0, int, TS_VERIFY_CTX_set0_certs , TS_VERIFY_CTX *, ___ctx, a0, STACK_OF(X509) *, ___certs, a1,\
      , AMISSLEXT_BASE_NAME)

#define CRYPTO_atomic_add64(___val, ___op, ___ret, ___lock) \
      LP4(0x1bf6, int, CRYPTO_atomic_add64 , uint64_t *, ___val, a0, uint64_t, ___op, d0, uint64_t *, ___ret, a1, CRYPTO_RWLOCK *, ___lock, a2,\
      , AMISSLEXT_BASE_NAME)

#define CRYPTO_atomic_and(___val, ___op, ___ret, ___lock) \
      LP4(0x1bfc, int, CRYPTO_atomic_and , uint64_t *, ___val, a0, uint64_t, ___op, d0, uint64_t *, ___ret, a1, CRYPTO_RWLOCK *, ___lock, a2,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_ATTRIBUTES_SYNTAX(___a, ___in, ___len) \
      LP3(0x1c02, OSSL_ATTRIBUTES_SYNTAX *, d2i_OSSL_ATTRIBUTES_SYNTAX , OSSL_ATTRIBUTES_SYNTAX **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_ATTRIBUTES_SYNTAX(___a, ___out) \
      LP2(0x1c08, int, i2d_OSSL_ATTRIBUTES_SYNTAX , const OSSL_ATTRIBUTES_SYNTAX *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTES_SYNTAX_free(___a) \
      LP1NR(0x1c0e, OSSL_ATTRIBUTES_SYNTAX_free , OSSL_ATTRIBUTES_SYNTAX *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTES_SYNTAX_new() \
      LP0(0x1c14, OSSL_ATTRIBUTES_SYNTAX *, OSSL_ATTRIBUTES_SYNTAX_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTES_SYNTAX_it() \
      LP0(0x1c1a, const ASN1_ITEM *, OSSL_ATTRIBUTES_SYNTAX_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_USER_NOTICE_SYNTAX(___a, ___in, ___len) \
      LP3(0x1c20, OSSL_USER_NOTICE_SYNTAX *, d2i_OSSL_USER_NOTICE_SYNTAX , OSSL_USER_NOTICE_SYNTAX **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_USER_NOTICE_SYNTAX(___a, ___out) \
      LP2(0x1c26, int, i2d_OSSL_USER_NOTICE_SYNTAX , const OSSL_USER_NOTICE_SYNTAX *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_USER_NOTICE_SYNTAX_free(___a) \
      LP1NR(0x1c2c, OSSL_USER_NOTICE_SYNTAX_free , OSSL_USER_NOTICE_SYNTAX *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_USER_NOTICE_SYNTAX_new() \
      LP0(0x1c32, OSSL_USER_NOTICE_SYNTAX *, OSSL_USER_NOTICE_SYNTAX_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_USER_NOTICE_SYNTAX_it() \
      LP0(0x1c38, const ASN1_ITEM *, OSSL_USER_NOTICE_SYNTAX_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_INDICATOR_set_callback(___libctx, ___cb) \
      LP2NR(0x1c3e, OSSL_INDICATOR_set_callback , OSSL_LIB_CTX *, ___libctx, a0, OSSL_INDICATOR_CALLBACK *, ___cb, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_INDICATOR_get_callback(___libctx, ___cb) \
      LP2NR(0x1c44, OSSL_INDICATOR_get_callback , OSSL_LIB_CTX *, ___libctx, a0, OSSL_INDICATOR_CALLBACK **, ___cb, a1,\
      , AMISSLEXT_BASE_NAME)

#define OPENSSL_strtoul(___str, ___endptr, ___base, ___num) \
      LP4(0x1c4a, int, OPENSSL_strtoul , const char *, ___str, a0, char **, ___endptr, a1, int, ___base, d0, unsigned long *, ___num, a2,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_BASIC_ATTR_CONSTRAINTS(___a, ___in, ___len) \
      LP3(0x1c50, OSSL_BASIC_ATTR_CONSTRAINTS *, d2i_OSSL_BASIC_ATTR_CONSTRAINTS , OSSL_BASIC_ATTR_CONSTRAINTS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_BASIC_ATTR_CONSTRAINTS(___a, ___out) \
      LP2(0x1c56, int, i2d_OSSL_BASIC_ATTR_CONSTRAINTS , const OSSL_BASIC_ATTR_CONSTRAINTS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_BASIC_ATTR_CONSTRAINTS_free(___a) \
      LP1NR(0x1c5c, OSSL_BASIC_ATTR_CONSTRAINTS_free , OSSL_BASIC_ATTR_CONSTRAINTS *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_BASIC_ATTR_CONSTRAINTS_new() \
      LP0(0x1c62, OSSL_BASIC_ATTR_CONSTRAINTS *, OSSL_BASIC_ATTR_CONSTRAINTS_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_BASIC_ATTR_CONSTRAINTS_it() \
      LP0(0x1c68, const ASN1_ITEM *, OSSL_BASIC_ATTR_CONSTRAINTS_it ,\
      , AMISSLEXT_BASE_NAME)

#define EVP_KEYMGMT_gen_gettable_params(___keymgmt) \
      LP1(0x1c6e, const OSSL_PARAM *, EVP_KEYMGMT_gen_gettable_params , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_signature(___pctx, ___sig, ___siglen) \
      LP3(0x1c74, int, EVP_PKEY_CTX_set_signature , EVP_PKEY_CTX *, ___pctx, a0, const unsigned char *, ___sig, a1, size_t, ___siglen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_sign_init_ex2(___ctx, ___algo, ___params) \
      LP3(0x1c7a, int, EVP_PKEY_sign_init_ex2 , EVP_PKEY_CTX *, ___ctx, a0, EVP_SIGNATURE *, ___algo, a1, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_sign_message_init(___ctx, ___algo, ___params) \
      LP3(0x1c80, int, EVP_PKEY_sign_message_init , EVP_PKEY_CTX *, ___ctx, a0, EVP_SIGNATURE *, ___algo, a1, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_sign_message_update(___ctx, ___in, ___inlen) \
      LP3(0x1c86, int, EVP_PKEY_sign_message_update , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___in, a1, size_t, ___inlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_sign_message_final(___ctx, ___sig, ___siglen) \
      LP3(0x1c8c, int, EVP_PKEY_sign_message_final , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___sig, a1, size_t *, ___siglen, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_verify_init_ex2(___ctx, ___algo, ___params) \
      LP3(0x1c92, int, EVP_PKEY_verify_init_ex2 , EVP_PKEY_CTX *, ___ctx, a0, EVP_SIGNATURE *, ___algo, a1, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_verify_message_init(___ctx, ___algo, ___params) \
      LP3(0x1c98, int, EVP_PKEY_verify_message_init , EVP_PKEY_CTX *, ___ctx, a0, EVP_SIGNATURE *, ___algo, a1, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_verify_message_update(___ctx, ___in, ___inlen) \
      LP3(0x1c9e, int, EVP_PKEY_verify_message_update , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___in, a1, size_t, ___inlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_verify_message_final(___ctx) \
      LP1(0x1ca4, int, EVP_PKEY_verify_message_final , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_verify_recover_init_ex2(___ctx, ___algo, ___params) \
      LP3(0x1caa, int, EVP_PKEY_verify_recover_init_ex2 , EVP_PKEY_CTX *, ___ctx, a0, EVP_SIGNATURE *, ___algo, a1, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_xof(___md) \
      LP1(0x1cb0, int, EVP_MD_xof , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_MD_CTX_get_size_ex(___ctx) \
      LP1(0x1cb6, int, EVP_MD_CTX_get_size_ex , const EVP_MD_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_set_algor_params(___ctx, ___alg) \
      LP2(0x1cbc, int, EVP_CIPHER_CTX_set_algor_params , EVP_CIPHER_CTX *, ___ctx, a0, const X509_ALGOR *, ___alg, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_get_algor_params(___ctx, ___alg) \
      LP2(0x1cc2, int, EVP_CIPHER_CTX_get_algor_params , EVP_CIPHER_CTX *, ___ctx, a0, X509_ALGOR *, ___alg, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_CTX_get_algor(___ctx, ___alg) \
      LP2(0x1cc8, int, EVP_CIPHER_CTX_get_algor , EVP_CIPHER_CTX *, ___ctx, a0, X509_ALGOR **, ___alg, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_set_algor_params(___ctx, ___alg) \
      LP2(0x1cce, int, EVP_PKEY_CTX_set_algor_params , EVP_PKEY_CTX *, ___ctx, a0, const X509_ALGOR *, ___alg, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_algor_params(___ctx, ___alg) \
      LP2(0x1cd4, int, EVP_PKEY_CTX_get_algor_params , EVP_PKEY_CTX *, ___ctx, a0, X509_ALGOR *, ___alg, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_PKEY_CTX_get_algor(___ctx, ___alg) \
      LP2(0x1cda, int, EVP_PKEY_CTX_get_algor , EVP_PKEY_CTX *, ___ctx, a0, X509_ALGOR **, ___alg, a1,\
      , AMISSLEXT_BASE_NAME)

#define d2i_X509_ACERT(___a, ___in, ___len) \
      LP3(0x1ce0, X509_ACERT *, d2i_X509_ACERT , X509_ACERT **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_X509_ACERT(___a, ___out) \
      LP2(0x1ce6, int, i2d_X509_ACERT , const X509_ACERT *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_free(___a) \
      LP1NR(0x1cec, X509_ACERT_free , X509_ACERT *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_new() \
      LP0(0x1cf2, X509_ACERT *, X509_ACERT_new ,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_it() \
      LP0(0x1cf8, const ASN1_ITEM *, X509_ACERT_it ,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_dup(___a) \
      LP1(0x1cfe, X509_ACERT *, X509_ACERT_dup , const X509_ACERT *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_INFO_it() \
      LP0(0x1d04, const ASN1_ITEM *, X509_ACERT_INFO_it ,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_INFO_free(___a) \
      LP1NR(0x1d0a, X509_ACERT_INFO_free , X509_ACERT_INFO *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_INFO_new() \
      LP0(0x1d10, X509_ACERT_INFO *, X509_ACERT_INFO_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_OBJECT_DIGEST_INFO_free(___a) \
      LP1NR(0x1d16, OSSL_OBJECT_DIGEST_INFO_free , OSSL_OBJECT_DIGEST_INFO *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_OBJECT_DIGEST_INFO_new() \
      LP0(0x1d1c, OSSL_OBJECT_DIGEST_INFO *, OSSL_OBJECT_DIGEST_INFO_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ISSUER_SERIAL_free(___a) \
      LP1NR(0x1d22, OSSL_ISSUER_SERIAL_free , OSSL_ISSUER_SERIAL *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ISSUER_SERIAL_new() \
      LP0(0x1d28, OSSL_ISSUER_SERIAL *, OSSL_ISSUER_SERIAL_new ,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_ISSUER_V2FORM_free(___a) \
      LP1NR(0x1d2e, X509_ACERT_ISSUER_V2FORM_free , X509_ACERT_ISSUER_V2FORM *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_ISSUER_V2FORM_new() \
      LP0(0x1d34, X509_ACERT_ISSUER_V2FORM *, X509_ACERT_ISSUER_V2FORM_new ,\
      , AMISSLEXT_BASE_NAME)

#define PEM_read_bio_X509_ACERT(___out, ___x, ___cb, ___u) \
      LP4(0x1d3a, X509_ACERT *, PEM_read_bio_X509_ACERT , BIO *, ___out, a0, X509_ACERT **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSLEXT_BASE_NAME)

#define PEM_write_bio_X509_ACERT(___out, ___x) \
      LP2(0x1d40, int, PEM_write_bio_X509_ACERT , BIO *, ___out, a0, const X509_ACERT *, ___x, a1,\
      , AMISSLEXT_BASE_NAME)

#define d2i_X509_ACERT_bio(___bp, ___acert) \
      LP2(0x1d46, X509_ACERT *, d2i_X509_ACERT_bio , BIO *, ___bp, a0, X509_ACERT **, ___acert, a1,\
      , AMISSLEXT_BASE_NAME)

#define i2d_X509_ACERT_bio(___bp, ___acert) \
      LP2(0x1d4c, int, i2d_X509_ACERT_bio , BIO *, ___bp, a0, const X509_ACERT *, ___acert, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get0_holder_entityName(___x) \
      LP1(0x1d52, const GENERAL_NAMES *, X509_ACERT_get0_holder_entityName , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get0_holder_baseCertId(___x) \
      LP1(0x1d58, const OSSL_ISSUER_SERIAL *, X509_ACERT_get0_holder_baseCertId , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get0_holder_digest(___x) \
      LP1(0x1d5e, const OSSL_OBJECT_DIGEST_INFO *, X509_ACERT_get0_holder_digest , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get0_issuerName(___x) \
      LP1(0x1d64, const X509_NAME *, X509_ACERT_get0_issuerName , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get_version(___x) \
      LP1(0x1d6a, long, X509_ACERT_get_version , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get0_signature(___x, ___psig, ___palg) \
      LP3NR(0x1d70, X509_ACERT_get0_signature , const X509_ACERT *, ___x, a0, const ASN1_BIT_STRING **, ___psig, a1, const X509_ALGOR **, ___palg, a2,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get_signature_nid(___x) \
      LP1(0x1d76, int, X509_ACERT_get_signature_nid , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get0_info_sigalg(___x) \
      LP1(0x1d7c, const X509_ALGOR *, X509_ACERT_get0_info_sigalg , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get0_serialNumber(___x) \
      LP1(0x1d82, const ASN1_INTEGER *, X509_ACERT_get0_serialNumber , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get0_notBefore(___x) \
      LP1(0x1d88, const ASN1_TIME *, X509_ACERT_get0_notBefore , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get0_notAfter(___x) \
      LP1(0x1d8e, const ASN1_TIME *, X509_ACERT_get0_notAfter , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get0_issuerUID(___x) \
      LP1(0x1d94, const ASN1_BIT_STRING *, X509_ACERT_get0_issuerUID , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_set_version(___x, ___version) \
      LP2(0x1d9a, int, X509_ACERT_set_version , X509_ACERT *, ___x, a0, long, ___version, d0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_set0_holder_entityName(___x, ___name) \
      LP2NR(0x1da0, X509_ACERT_set0_holder_entityName , X509_ACERT *, ___x, a0, GENERAL_NAMES *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_set0_holder_baseCertId(___x, ___isss) \
      LP2NR(0x1da6, X509_ACERT_set0_holder_baseCertId , X509_ACERT *, ___x, a0, OSSL_ISSUER_SERIAL *, ___isss, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_set0_holder_digest(___x, ___dinfo) \
      LP2NR(0x1dac, X509_ACERT_set0_holder_digest , X509_ACERT *, ___x, a0, OSSL_OBJECT_DIGEST_INFO *, ___dinfo, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_set1_issuerName(___x, ___name) \
      LP2(0x1db2, int, X509_ACERT_set1_issuerName , X509_ACERT *, ___x, a0, const X509_NAME *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_set1_serialNumber(___x, ___serial) \
      LP2(0x1db8, int, X509_ACERT_set1_serialNumber , X509_ACERT *, ___x, a0, const ASN1_INTEGER *, ___serial, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_set1_notBefore(___x, ___time) \
      LP2(0x1dbe, int, X509_ACERT_set1_notBefore , X509_ACERT *, ___x, a0, const ASN1_GENERALIZEDTIME *, ___time, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_set1_notAfter(___x, ___time) \
      LP2(0x1dc4, int, X509_ACERT_set1_notAfter , X509_ACERT *, ___x, a0, const ASN1_GENERALIZEDTIME *, ___time, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_OBJECT_DIGEST_INFO_get0_digest(___o, ___digestedObjectType, ___digestAlgorithm, ___digest) \
      LP4NR(0x1dca, OSSL_OBJECT_DIGEST_INFO_get0_digest , const OSSL_OBJECT_DIGEST_INFO *, ___o, a0, int *, ___digestedObjectType, a1, const X509_ALGOR **, ___digestAlgorithm, a2, const ASN1_BIT_STRING **, ___digest, a3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_OBJECT_DIGEST_INFO_set1_digest(___o, ___digestedObjectType, ___digestAlgorithm, ___digest) \
      LP4(0x1dd0, int, OSSL_OBJECT_DIGEST_INFO_set1_digest , OSSL_OBJECT_DIGEST_INFO *, ___o, a0, int, ___digestedObjectType, d0, X509_ALGOR *, ___digestAlgorithm, a1, ASN1_BIT_STRING *, ___digest, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ISSUER_SERIAL_get0_issuer(___isss) \
      LP1(0x1dd6, const X509_NAME *, OSSL_ISSUER_SERIAL_get0_issuer , const OSSL_ISSUER_SERIAL *, ___isss, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ISSUER_SERIAL_get0_serial(___isss) \
      LP1(0x1ddc, const ASN1_INTEGER *, OSSL_ISSUER_SERIAL_get0_serial , const OSSL_ISSUER_SERIAL *, ___isss, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ISSUER_SERIAL_get0_issuerUID(___isss) \
      LP1(0x1de2, const ASN1_BIT_STRING *, OSSL_ISSUER_SERIAL_get0_issuerUID , const OSSL_ISSUER_SERIAL *, ___isss, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ISSUER_SERIAL_set1_issuer(___isss, ___issuer) \
      LP2(0x1de8, int, OSSL_ISSUER_SERIAL_set1_issuer , OSSL_ISSUER_SERIAL *, ___isss, a0, const X509_NAME *, ___issuer, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ISSUER_SERIAL_set1_serial(___isss, ___serial) \
      LP2(0x1dee, int, OSSL_ISSUER_SERIAL_set1_serial , OSSL_ISSUER_SERIAL *, ___isss, a0, const ASN1_INTEGER *, ___serial, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ISSUER_SERIAL_set1_issuerUID(___isss, ___uid) \
      LP2(0x1df4, int, OSSL_ISSUER_SERIAL_set1_issuerUID , OSSL_ISSUER_SERIAL *, ___isss, a0, const ASN1_BIT_STRING *, ___uid, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_print(___bp, ___x) \
      LP2(0x1dfa, int, X509_ACERT_print , BIO *, ___bp, a0, X509_ACERT *, ___x, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_print_ex(___bp, ___x, ___nmflags, ___cflag) \
      LP4(0x1e00, int, X509_ACERT_print_ex , BIO *, ___bp, a0, X509_ACERT *, ___x, a1, unsigned long, ___nmflags, d0, unsigned long, ___cflag, d1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get_attr_count(___x) \
      LP1(0x1e06, int, X509_ACERT_get_attr_count , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get_attr_by_NID(___x, ___nid, ___lastpos) \
      LP3(0x1e0c, int, X509_ACERT_get_attr_by_NID , const X509_ACERT *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get_attr_by_OBJ(___x, ___obj, ___lastpos) \
      LP3(0x1e12, int, X509_ACERT_get_attr_by_OBJ , const X509_ACERT *, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get_attr(___x, ___loc) \
      LP2(0x1e18, X509_ATTRIBUTE *, X509_ACERT_get_attr , const X509_ACERT *, ___x, a0, int, ___loc, d0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_delete_attr(___x, ___loc) \
      LP2(0x1e1e, X509_ATTRIBUTE *, X509_ACERT_delete_attr , X509_ACERT *, ___x, a0, int, ___loc, d0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_add1_attr(___x, ___attr) \
      LP2(0x1e24, int, X509_ACERT_add1_attr , X509_ACERT *, ___x, a0, X509_ATTRIBUTE *, ___attr, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_add1_attr_by_OBJ(___x, ___obj, ___type, ___bytes, ___len) \
      LP5(0x1e2a, int, X509_ACERT_add1_attr_by_OBJ , X509_ACERT *, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const void *, ___bytes, a2, int, ___len, d1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_add1_attr_by_NID(___x, ___nid, ___type, ___bytes, ___len) \
      LP5(0x1e30, int, X509_ACERT_add1_attr_by_NID , X509_ACERT *, ___x, a0, int, ___nid, d0, int, ___type, d1, const void *, ___bytes, a1, int, ___len, d2,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_add1_attr_by_txt(___x, ___attrname, ___type, ___bytes, ___len) \
      LP5(0x1e36, int, X509_ACERT_add1_attr_by_txt , X509_ACERT *, ___x, a0, const char *, ___attrname, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_sign(___x, ___pkey, ___md) \
      LP3(0x1e3c, int, X509_ACERT_sign , X509_ACERT *, ___x, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___md, a2,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_sign_ctx(___x, ___ctx) \
      LP2(0x1e42, int, X509_ACERT_sign_ctx , X509_ACERT *, ___x, a0, EVP_MD_CTX *, ___ctx, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_verify(___a, ___r) \
      LP2(0x1e48, int, X509_ACERT_verify , X509_ACERT *, ___a, a0, EVP_PKEY *, ___r, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get_ext_d2i(___x, ___nid, ___crit, ___idx) \
      LP4(0x1e4e, void *, X509_ACERT_get_ext_d2i , const X509_ACERT *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
      LP5(0x1e54, int, X509_ACERT_add1_ext_i2d , X509_ACERT *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_get0_extensions(___x) \
      LP1(0x1e5a, const struct stack_st_X509_EXTENSION *, X509_ACERT_get0_extensions , const X509_ACERT *, ___x, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_IETF_ATTR_SYNTAX_VALUE_it() \
      LP0(0x1e60, const ASN1_ITEM *, OSSL_IETF_ATTR_SYNTAX_VALUE_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_IETF_ATTR_SYNTAX_VALUE_free(___a) \
      LP1NR(0x1e66, OSSL_IETF_ATTR_SYNTAX_VALUE_free , OSSL_IETF_ATTR_SYNTAX_VALUE *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_IETF_ATTR_SYNTAX_VALUE_new() \
      LP0(0x1e6c, OSSL_IETF_ATTR_SYNTAX_VALUE *, OSSL_IETF_ATTR_SYNTAX_VALUE_new ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_IETF_ATTR_SYNTAX(___a, ___in, ___len) \
      LP3(0x1e72, OSSL_IETF_ATTR_SYNTAX *, d2i_OSSL_IETF_ATTR_SYNTAX , OSSL_IETF_ATTR_SYNTAX **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_IETF_ATTR_SYNTAX(___a, ___out) \
      LP2(0x1e78, int, i2d_OSSL_IETF_ATTR_SYNTAX , const OSSL_IETF_ATTR_SYNTAX *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_IETF_ATTR_SYNTAX_free(___a) \
      LP1NR(0x1e7e, OSSL_IETF_ATTR_SYNTAX_free , OSSL_IETF_ATTR_SYNTAX *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_IETF_ATTR_SYNTAX_new() \
      LP0(0x1e84, OSSL_IETF_ATTR_SYNTAX *, OSSL_IETF_ATTR_SYNTAX_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_IETF_ATTR_SYNTAX_it() \
      LP0(0x1e8a, const ASN1_ITEM *, OSSL_IETF_ATTR_SYNTAX_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_IETF_ATTR_SYNTAX_get0_policyAuthority(___a) \
      LP1(0x1e90, const GENERAL_NAMES *, OSSL_IETF_ATTR_SYNTAX_get0_policyAuthority , const OSSL_IETF_ATTR_SYNTAX *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_IETF_ATTR_SYNTAX_set0_policyAuthority(___a, ___names) \
      LP2NR(0x1e96, OSSL_IETF_ATTR_SYNTAX_set0_policyAuthority , OSSL_IETF_ATTR_SYNTAX *, ___a, a0, GENERAL_NAMES *, ___names, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_IETF_ATTR_SYNTAX_get_value_num(___a) \
      LP1(0x1e9c, int, OSSL_IETF_ATTR_SYNTAX_get_value_num , const OSSL_IETF_ATTR_SYNTAX *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_IETF_ATTR_SYNTAX_get0_value(___a, ___ind, ___type) \
      LP3(0x1ea2, void *, OSSL_IETF_ATTR_SYNTAX_get0_value , const OSSL_IETF_ATTR_SYNTAX *, ___a, a0, int, ___ind, d0, int *, ___type, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_IETF_ATTR_SYNTAX_add1_value(___a, ___type, ___data) \
      LP3(0x1ea8, int, OSSL_IETF_ATTR_SYNTAX_add1_value , OSSL_IETF_ATTR_SYNTAX *, ___a, a0, int, ___type, d0, void *, ___data, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_IETF_ATTR_SYNTAX_print(___bp, ___a, ___indent) \
      LP3(0x1eae, int, OSSL_IETF_ATTR_SYNTAX_print , BIO *, ___bp, a0, OSSL_IETF_ATTR_SYNTAX *, ___a, a1, int, ___indent, d0,\
      , AMISSLEXT_BASE_NAME)

#define X509_ACERT_add_attr_nconf(___conf, ___section, ___acert) \
      LP3(0x1eb4, int, X509_ACERT_add_attr_nconf , CONF *, ___conf, a0, const char *, ___section, a1, X509_ACERT *, ___acert, a2,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_TARGET(___a, ___in, ___len) \
      LP3(0x1eba, OSSL_TARGET *, d2i_OSSL_TARGET , OSSL_TARGET **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_TARGET(___a, ___out) \
      LP2(0x1ec0, int, i2d_OSSL_TARGET , const OSSL_TARGET *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TARGET_free(___a) \
      LP1NR(0x1ec6, OSSL_TARGET_free , OSSL_TARGET *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TARGET_new() \
      LP0(0x1ecc, OSSL_TARGET *, OSSL_TARGET_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TARGET_it() \
      LP0(0x1ed2, const ASN1_ITEM *, OSSL_TARGET_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_TARGETS(___a, ___in, ___len) \
      LP3(0x1ed8, OSSL_TARGETS *, d2i_OSSL_TARGETS , OSSL_TARGETS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_TARGETS(___a, ___out) \
      LP2(0x1ede, int, i2d_OSSL_TARGETS , const OSSL_TARGETS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TARGETS_free(___a) \
      LP1NR(0x1ee4, OSSL_TARGETS_free , OSSL_TARGETS *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TARGETS_new() \
      LP0(0x1eea, OSSL_TARGETS *, OSSL_TARGETS_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TARGETS_it() \
      LP0(0x1ef0, const ASN1_ITEM *, OSSL_TARGETS_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_TARGETING_INFORMATION(___a, ___in, ___len) \
      LP3(0x1ef6, OSSL_TARGETING_INFORMATION *, d2i_OSSL_TARGETING_INFORMATION , OSSL_TARGETING_INFORMATION **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_TARGETING_INFORMATION(___a, ___out) \
      LP2(0x1efc, int, i2d_OSSL_TARGETING_INFORMATION , const OSSL_TARGETING_INFORMATION *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TARGETING_INFORMATION_free(___a) \
      LP1NR(0x1f02, OSSL_TARGETING_INFORMATION_free , OSSL_TARGETING_INFORMATION *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TARGETING_INFORMATION_new() \
      LP0(0x1f08, OSSL_TARGETING_INFORMATION *, OSSL_TARGETING_INFORMATION_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TARGETING_INFORMATION_it() \
      LP0(0x1f0e, const ASN1_ITEM *, OSSL_TARGETING_INFORMATION_it ,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set_quic_tls_cbs(___s, ___qtdis, ___arg) \
      LP3(0x1f14, int, SSL_set_quic_tls_cbs , SSL *, ___s, a0, const OSSL_DISPATCH *, ___qtdis, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set_quic_tls_transport_params(___s, ___params, ___params_len) \
      LP3(0x1f1a, int, SSL_set_quic_tls_transport_params , SSL *, ___s, a0, const unsigned char *, ___params, a1, size_t, ___params_len, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_set_quic_tls_early_data_enabled(___s, ___enabled) \
      LP2(0x1f20, int, SSL_set_quic_tls_early_data_enabled , SSL *, ___s, a0, int, ___enabled, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_QUIC_server_method() \
      LP0(0x1f26, const SSL_METHOD *, OSSL_QUIC_server_method ,\
      , AMISSLEXT_BASE_NAME)

#define SSL_is_listener(___ssl) \
      LP1(0x1f2c, int, SSL_is_listener , SSL *, ___ssl, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get0_listener(___s) \
      LP1(0x1f32, SSL *, SSL_get0_listener , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_new_listener(___ctx, ___flags) \
      LP2(0x1f38, SSL *, SSL_new_listener , SSL_CTX *, ___ctx, a0, uint64_t, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_accept_connection(___ssl, ___flags) \
      LP2(0x1f3e, SSL *, SSL_accept_connection , SSL *, ___ssl, a0, uint64_t, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_accept_connection_queue_len(___ssl) \
      LP1(0x1f44, size_t, SSL_get_accept_connection_queue_len , SSL *, ___ssl, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_listen(___ssl) \
      LP1(0x1f4a, int, SSL_listen , SSL *, ___ssl, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_new_from_listener(___ssl, ___flags) \
      LP2(0x1f50, SSL *, SSL_new_from_listener , SSL *, ___ssl, a0, uint64_t, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_new_listener_from(___ssl, ___flags) \
      LP2(0x1f56, SSL *, SSL_new_listener_from , SSL *, ___ssl, a0, uint64_t, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_is_domain(___s) \
      LP1(0x1f5c, int, SSL_is_domain , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get0_domain(___s) \
      LP1(0x1f62, SSL *, SSL_get0_domain , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_new_domain(___ctx, ___flags) \
      LP2(0x1f68, SSL *, SSL_new_domain , SSL_CTX *, ___ctx, a0, uint64_t, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_set_domain_flags(___ctx, ___domain_flags) \
      LP2(0x1f6e, int, SSL_CTX_set_domain_flags , SSL_CTX *, ___ctx, a0, uint64_t, ___domain_flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_get_domain_flags(___ctx, ___domain_flags) \
      LP2(0x1f74, int, SSL_CTX_get_domain_flags , const SSL_CTX *, ___ctx, a0, uint64_t *, ___domain_flags, a1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_get_domain_flags(___ssl, ___domain_flags) \
      LP2(0x1f7a, int, SSL_get_domain_flags , const SSL *, ___ssl, a0, uint64_t *, ___domain_flags, a1,\
      , AMISSLEXT_BASE_NAME)

#define SSL_CTX_set_new_pending_conn_cb(___c, ___cb, ___arg) \
      LP3NR(0x1f80, SSL_CTX_set_new_pending_conn_cb , SSL_CTX *, ___c, a0, SSL_new_pending_conn_cb_fn, ___cb, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME)

#define X509_VERIFY_PARAM_get_purpose(___param) \
      LP1(0x1f86, int, X509_VERIFY_PARAM_get_purpose , const X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_CRMF_ENCRYPTEDKEY(___a, ___in, ___len) \
      LP3(0x1f8c, OSSL_CRMF_ENCRYPTEDKEY *, d2i_OSSL_CRMF_ENCRYPTEDKEY , OSSL_CRMF_ENCRYPTEDKEY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_CRMF_ENCRYPTEDKEY(___a, ___out) \
      LP2(0x1f92, int, i2d_OSSL_CRMF_ENCRYPTEDKEY , const OSSL_CRMF_ENCRYPTEDKEY *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ENCRYPTEDKEY_free(___a) \
      LP1NR(0x1f98, OSSL_CRMF_ENCRYPTEDKEY_free , OSSL_CRMF_ENCRYPTEDKEY *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ENCRYPTEDKEY_new() \
      LP0(0x1f9e, OSSL_CRMF_ENCRYPTEDKEY *, OSSL_CRMF_ENCRYPTEDKEY_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ENCRYPTEDKEY_it() \
      LP0(0x1fa4, const ASN1_ITEM *, OSSL_CRMF_ENCRYPTEDKEY_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ENCRYPTEDKEY_get1_encCert(___ecert, ___libctx, ___propq, ___pkey, ___flags) \
      LP5(0x1faa, X509 *, OSSL_CRMF_ENCRYPTEDKEY_get1_encCert , const OSSL_CRMF_ENCRYPTEDKEY *, ___ecert, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2, EVP_PKEY *, ___pkey, a3, unsigned int, ___flags, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ENCRYPTEDVALUE_decrypt(___enc, ___libctx, ___propq, ___pkey, ___outlen) \
      LP5(0x1fb0, unsigned char *, OSSL_CRMF_ENCRYPTEDVALUE_decrypt , const OSSL_CRMF_ENCRYPTEDVALUE *, ___enc, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2, EVP_PKEY *, ___pkey, a3, int *, ___outlen, d0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ENCRYPTEDKEY_get1_pkey(___encryptedKey, ___ts, ___extra, ___pkey, ___cert, ___secret, ___libctx, ___propq) \
      LP8(0x1fb6, EVP_PKEY *, OSSL_CRMF_ENCRYPTEDKEY_get1_pkey , const OSSL_CRMF_ENCRYPTEDKEY *, ___encryptedKey, a0, X509_STORE *, ___ts, a1, STACK_OF(X509) *, ___extra, a2, EVP_PKEY *, ___pkey, a3, X509 *, ___cert, d0, ASN1_OCTET_STRING *, ___secret, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_MSG_centralkeygen_requested(___crm, ___p10cr) \
      LP2(0x1fbc, int, OSSL_CRMF_MSG_centralkeygen_requested , const OSSL_CRMF_MSG *, ___crm, a0, const X509_REQ *, ___p10cr, a1,\
      , AMISSLEXT_BASE_NAME)

#define CMS_EnvelopedData_dup(___a) \
      LP1(0x1fc2, CMS_EnvelopedData *, CMS_EnvelopedData_dup , const CMS_EnvelopedData *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_CRMF_ENCRYPTEDKEY_init_envdata(___envdata) \
      LP1(0x1fc8, OSSL_CRMF_ENCRYPTEDKEY *, OSSL_CRMF_ENCRYPTEDKEY_init_envdata , CMS_EnvelopedData *, ___envdata, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_get1_default_properties(___libctx) \
      LP1(0x1fce, char *, EVP_get1_default_properties , OSSL_LIB_CTX *, ___libctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define RAND_set1_random_provider(___ctx, ___p) \
      LP2(0x1fd4, int, RAND_set1_random_provider , OSSL_LIB_CTX *, ___ctx, a0, OSSL_PROVIDER *, ___p, a1,\
      , AMISSLEXT_BASE_NAME)

#define X509_PURPOSE_get_unused_id(___libctx) \
      LP1(0x1fda, int, X509_PURPOSE_get_unused_id , OSSL_LIB_CTX *, ___libctx, a0,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(___a, ___in, ___len) \
      LP3(0x1fe0, OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *, d2i_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX , OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(___a, ___out) \
      LP2(0x1fe6, int, i2d_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX , const OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_free(___a) \
      LP1NR(0x1fec, OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_free , OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_new() \
      LP0(0x1ff2, OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *, OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it() \
      LP0(0x1ff8, const ASN1_ITEM *, OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_ROLE_SPEC_CERT_ID(___a, ___in, ___len) \
      LP3(0x1ffe, OSSL_ROLE_SPEC_CERT_ID *, d2i_OSSL_ROLE_SPEC_CERT_ID , OSSL_ROLE_SPEC_CERT_ID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_ROLE_SPEC_CERT_ID(___a, ___out) \
      LP2(0x2004, int, i2d_OSSL_ROLE_SPEC_CERT_ID , const OSSL_ROLE_SPEC_CERT_ID *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ROLE_SPEC_CERT_ID_free(___a) \
      LP1NR(0x200a, OSSL_ROLE_SPEC_CERT_ID_free , OSSL_ROLE_SPEC_CERT_ID *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ROLE_SPEC_CERT_ID_new() \
      LP0(0x2010, OSSL_ROLE_SPEC_CERT_ID *, OSSL_ROLE_SPEC_CERT_ID_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ROLE_SPEC_CERT_ID_it() \
      LP0(0x2016, const ASN1_ITEM *, OSSL_ROLE_SPEC_CERT_ID_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(___a, ___in, ___len) \
      LP3(0x201c, OSSL_ROLE_SPEC_CERT_ID_SYNTAX *, d2i_OSSL_ROLE_SPEC_CERT_ID_SYNTAX , OSSL_ROLE_SPEC_CERT_ID_SYNTAX **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(___a, ___out) \
      LP2(0x2022, int, i2d_OSSL_ROLE_SPEC_CERT_ID_SYNTAX , const OSSL_ROLE_SPEC_CERT_ID_SYNTAX *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ROLE_SPEC_CERT_ID_SYNTAX_free(___a) \
      LP1NR(0x2028, OSSL_ROLE_SPEC_CERT_ID_SYNTAX_free , OSSL_ROLE_SPEC_CERT_ID_SYNTAX *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ROLE_SPEC_CERT_ID_SYNTAX_new() \
      LP0(0x202e, OSSL_ROLE_SPEC_CERT_ID_SYNTAX *, OSSL_ROLE_SPEC_CERT_ID_SYNTAX_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it() \
      LP0(0x2034, const ASN1_ITEM *, OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_ATTRIBUTE_DESCRIPTOR(___a, ___in, ___len) \
      LP3(0x203a, OSSL_ATTRIBUTE_DESCRIPTOR *, d2i_OSSL_ATTRIBUTE_DESCRIPTOR , OSSL_ATTRIBUTE_DESCRIPTOR **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_ATTRIBUTE_DESCRIPTOR(___a, ___out) \
      LP2(0x2040, int, i2d_OSSL_ATTRIBUTE_DESCRIPTOR , const OSSL_ATTRIBUTE_DESCRIPTOR *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_DESCRIPTOR_free(___a) \
      LP1NR(0x2046, OSSL_ATTRIBUTE_DESCRIPTOR_free , OSSL_ATTRIBUTE_DESCRIPTOR *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_DESCRIPTOR_new() \
      LP0(0x204c, OSSL_ATTRIBUTE_DESCRIPTOR *, OSSL_ATTRIBUTE_DESCRIPTOR_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_DESCRIPTOR_it() \
      LP0(0x2052, const ASN1_ITEM *, OSSL_ATTRIBUTE_DESCRIPTOR_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HASH_it() \
      LP0(0x2058, const ASN1_ITEM *, OSSL_HASH_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_INFO_SYNTAX_it() \
      LP0(0x205e, const ASN1_ITEM *, OSSL_INFO_SYNTAX_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_INFO_SYNTAX_POINTER_it() \
      LP0(0x2064, const ASN1_ITEM *, OSSL_INFO_SYNTAX_POINTER_it ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PRIVILEGE_POLICY_ID_it() \
      LP0(0x206a, const ASN1_ITEM *, OSSL_PRIVILEGE_POLICY_ID_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_HASH(___a, ___in, ___len) \
      LP3(0x2070, OSSL_HASH *, d2i_OSSL_HASH , OSSL_HASH **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_HASH(___a, ___out) \
      LP2(0x2076, int, i2d_OSSL_HASH , const OSSL_HASH *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HASH_free(___a) \
      LP1NR(0x207c, OSSL_HASH_free , OSSL_HASH *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_HASH_new() \
      LP0(0x2082, OSSL_HASH *, OSSL_HASH_new ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_INFO_SYNTAX(___a, ___in, ___len) \
      LP3(0x2088, OSSL_INFO_SYNTAX *, d2i_OSSL_INFO_SYNTAX , OSSL_INFO_SYNTAX **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_INFO_SYNTAX(___a, ___out) \
      LP2(0x208e, int, i2d_OSSL_INFO_SYNTAX , const OSSL_INFO_SYNTAX *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_INFO_SYNTAX_free(___a) \
      LP1NR(0x2094, OSSL_INFO_SYNTAX_free , OSSL_INFO_SYNTAX *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_INFO_SYNTAX_new() \
      LP0(0x209a, OSSL_INFO_SYNTAX *, OSSL_INFO_SYNTAX_new ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_INFO_SYNTAX_POINTER(___a, ___in, ___len) \
      LP3(0x20a0, OSSL_INFO_SYNTAX_POINTER *, d2i_OSSL_INFO_SYNTAX_POINTER , OSSL_INFO_SYNTAX_POINTER **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_INFO_SYNTAX_POINTER(___a, ___out) \
      LP2(0x20a6, int, i2d_OSSL_INFO_SYNTAX_POINTER , const OSSL_INFO_SYNTAX_POINTER *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_INFO_SYNTAX_POINTER_free(___a) \
      LP1NR(0x20ac, OSSL_INFO_SYNTAX_POINTER_free , OSSL_INFO_SYNTAX_POINTER *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_INFO_SYNTAX_POINTER_new() \
      LP0(0x20b2, OSSL_INFO_SYNTAX_POINTER *, OSSL_INFO_SYNTAX_POINTER_new ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_PRIVILEGE_POLICY_ID(___a, ___in, ___len) \
      LP3(0x20b8, OSSL_PRIVILEGE_POLICY_ID *, d2i_OSSL_PRIVILEGE_POLICY_ID , OSSL_PRIVILEGE_POLICY_ID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_PRIVILEGE_POLICY_ID(___a, ___out) \
      LP2(0x20be, int, i2d_OSSL_PRIVILEGE_POLICY_ID , const OSSL_PRIVILEGE_POLICY_ID *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PRIVILEGE_POLICY_ID_free(___a) \
      LP1NR(0x20c4, OSSL_PRIVILEGE_POLICY_ID_free , OSSL_PRIVILEGE_POLICY_ID *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PRIVILEGE_POLICY_ID_new() \
      LP0(0x20ca, OSSL_PRIVILEGE_POLICY_ID *, OSSL_PRIVILEGE_POLICY_ID_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PARAM_print_to_bio(___params, ___bio, ___print_values) \
      LP3(0x20d0, int, OSSL_PARAM_print_to_bio , const OSSL_PARAM *, ___params, a0, BIO *, ___bio, a1, int, ___print_values, d0,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_DAY_TIME(___a, ___in, ___len) \
      LP3(0x20d6, OSSL_DAY_TIME *, d2i_OSSL_DAY_TIME , OSSL_DAY_TIME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_DAY_TIME(___a, ___out) \
      LP2(0x20dc, int, i2d_OSSL_DAY_TIME , const OSSL_DAY_TIME *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DAY_TIME_free(___a) \
      LP1NR(0x20e2, OSSL_DAY_TIME_free , OSSL_DAY_TIME *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DAY_TIME_new() \
      LP0(0x20e8, OSSL_DAY_TIME *, OSSL_DAY_TIME_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DAY_TIME_it() \
      LP0(0x20ee, const ASN1_ITEM *, OSSL_DAY_TIME_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_DAY_TIME_BAND(___a, ___in, ___len) \
      LP3(0x20f4, OSSL_DAY_TIME_BAND *, d2i_OSSL_DAY_TIME_BAND , OSSL_DAY_TIME_BAND **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_DAY_TIME_BAND(___a, ___out) \
      LP2(0x20fa, int, i2d_OSSL_DAY_TIME_BAND , const OSSL_DAY_TIME_BAND *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DAY_TIME_BAND_free(___a) \
      LP1NR(0x2100, OSSL_DAY_TIME_BAND_free , OSSL_DAY_TIME_BAND *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DAY_TIME_BAND_new() \
      LP0(0x2106, OSSL_DAY_TIME_BAND *, OSSL_DAY_TIME_BAND_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_DAY_TIME_BAND_it() \
      LP0(0x210c, const ASN1_ITEM *, OSSL_DAY_TIME_BAND_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_TIME_SPEC_DAY(___a, ___in, ___len) \
      LP3(0x2112, OSSL_TIME_SPEC_DAY *, d2i_OSSL_TIME_SPEC_DAY , OSSL_TIME_SPEC_DAY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_TIME_SPEC_DAY(___a, ___out) \
      LP2(0x2118, int, i2d_OSSL_TIME_SPEC_DAY , const OSSL_TIME_SPEC_DAY *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_DAY_free(___a) \
      LP1NR(0x211e, OSSL_TIME_SPEC_DAY_free , OSSL_TIME_SPEC_DAY *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_DAY_new() \
      LP0(0x2124, OSSL_TIME_SPEC_DAY *, OSSL_TIME_SPEC_DAY_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_DAY_it() \
      LP0(0x212a, const ASN1_ITEM *, OSSL_TIME_SPEC_DAY_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_TIME_SPEC_WEEKS(___a, ___in, ___len) \
      LP3(0x2130, OSSL_TIME_SPEC_WEEKS *, d2i_OSSL_TIME_SPEC_WEEKS , OSSL_TIME_SPEC_WEEKS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_TIME_SPEC_WEEKS(___a, ___out) \
      LP2(0x2136, int, i2d_OSSL_TIME_SPEC_WEEKS , const OSSL_TIME_SPEC_WEEKS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_WEEKS_free(___a) \
      LP1NR(0x213c, OSSL_TIME_SPEC_WEEKS_free , OSSL_TIME_SPEC_WEEKS *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_WEEKS_new() \
      LP0(0x2142, OSSL_TIME_SPEC_WEEKS *, OSSL_TIME_SPEC_WEEKS_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_WEEKS_it() \
      LP0(0x2148, const ASN1_ITEM *, OSSL_TIME_SPEC_WEEKS_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_TIME_SPEC_MONTH(___a, ___in, ___len) \
      LP3(0x214e, OSSL_TIME_SPEC_MONTH *, d2i_OSSL_TIME_SPEC_MONTH , OSSL_TIME_SPEC_MONTH **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_TIME_SPEC_MONTH(___a, ___out) \
      LP2(0x2154, int, i2d_OSSL_TIME_SPEC_MONTH , const OSSL_TIME_SPEC_MONTH *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_MONTH_free(___a) \
      LP1NR(0x215a, OSSL_TIME_SPEC_MONTH_free , OSSL_TIME_SPEC_MONTH *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_MONTH_new() \
      LP0(0x2160, OSSL_TIME_SPEC_MONTH *, OSSL_TIME_SPEC_MONTH_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_MONTH_it() \
      LP0(0x2166, const ASN1_ITEM *, OSSL_TIME_SPEC_MONTH_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_NAMED_DAY(___a, ___in, ___len) \
      LP3(0x216c, OSSL_NAMED_DAY *, d2i_OSSL_NAMED_DAY , OSSL_NAMED_DAY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_NAMED_DAY(___a, ___out) \
      LP2(0x2172, int, i2d_OSSL_NAMED_DAY , const OSSL_NAMED_DAY *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_NAMED_DAY_free(___a) \
      LP1NR(0x2178, OSSL_NAMED_DAY_free , OSSL_NAMED_DAY *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_NAMED_DAY_new() \
      LP0(0x217e, OSSL_NAMED_DAY *, OSSL_NAMED_DAY_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_NAMED_DAY_it() \
      LP0(0x2184, const ASN1_ITEM *, OSSL_NAMED_DAY_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_TIME_SPEC_X_DAY_OF(___a, ___in, ___len) \
      LP3(0x218a, OSSL_TIME_SPEC_X_DAY_OF *, d2i_OSSL_TIME_SPEC_X_DAY_OF , OSSL_TIME_SPEC_X_DAY_OF **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_TIME_SPEC_X_DAY_OF(___a, ___out) \
      LP2(0x2190, int, i2d_OSSL_TIME_SPEC_X_DAY_OF , const OSSL_TIME_SPEC_X_DAY_OF *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_X_DAY_OF_free(___a) \
      LP1NR(0x2196, OSSL_TIME_SPEC_X_DAY_OF_free , OSSL_TIME_SPEC_X_DAY_OF *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_X_DAY_OF_new() \
      LP0(0x219c, OSSL_TIME_SPEC_X_DAY_OF *, OSSL_TIME_SPEC_X_DAY_OF_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_X_DAY_OF_it() \
      LP0(0x21a2, const ASN1_ITEM *, OSSL_TIME_SPEC_X_DAY_OF_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_TIME_SPEC_ABSOLUTE(___a, ___in, ___len) \
      LP3(0x21a8, OSSL_TIME_SPEC_ABSOLUTE *, d2i_OSSL_TIME_SPEC_ABSOLUTE , OSSL_TIME_SPEC_ABSOLUTE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_TIME_SPEC_ABSOLUTE(___a, ___out) \
      LP2(0x21ae, int, i2d_OSSL_TIME_SPEC_ABSOLUTE , const OSSL_TIME_SPEC_ABSOLUTE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_ABSOLUTE_free(___a) \
      LP1NR(0x21b4, OSSL_TIME_SPEC_ABSOLUTE_free , OSSL_TIME_SPEC_ABSOLUTE *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_ABSOLUTE_new() \
      LP0(0x21ba, OSSL_TIME_SPEC_ABSOLUTE *, OSSL_TIME_SPEC_ABSOLUTE_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_ABSOLUTE_it() \
      LP0(0x21c0, const ASN1_ITEM *, OSSL_TIME_SPEC_ABSOLUTE_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_TIME_SPEC_TIME(___a, ___in, ___len) \
      LP3(0x21c6, OSSL_TIME_SPEC_TIME *, d2i_OSSL_TIME_SPEC_TIME , OSSL_TIME_SPEC_TIME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_TIME_SPEC_TIME(___a, ___out) \
      LP2(0x21cc, int, i2d_OSSL_TIME_SPEC_TIME , const OSSL_TIME_SPEC_TIME *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_TIME_free(___a) \
      LP1NR(0x21d2, OSSL_TIME_SPEC_TIME_free , OSSL_TIME_SPEC_TIME *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_TIME_new() \
      LP0(0x21d8, OSSL_TIME_SPEC_TIME *, OSSL_TIME_SPEC_TIME_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_TIME_it() \
      LP0(0x21de, const ASN1_ITEM *, OSSL_TIME_SPEC_TIME_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_TIME_SPEC(___a, ___in, ___len) \
      LP3(0x21e4, OSSL_TIME_SPEC *, d2i_OSSL_TIME_SPEC , OSSL_TIME_SPEC **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_TIME_SPEC(___a, ___out) \
      LP2(0x21ea, int, i2d_OSSL_TIME_SPEC , const OSSL_TIME_SPEC *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_free(___a) \
      LP1NR(0x21f0, OSSL_TIME_SPEC_free , OSSL_TIME_SPEC *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_new() \
      LP0(0x21f6, OSSL_TIME_SPEC *, OSSL_TIME_SPEC_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_SPEC_it() \
      LP0(0x21fc, const ASN1_ITEM *, OSSL_TIME_SPEC_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_TIME_PERIOD(___a, ___in, ___len) \
      LP3(0x2202, OSSL_TIME_PERIOD *, d2i_OSSL_TIME_PERIOD , OSSL_TIME_PERIOD **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_TIME_PERIOD(___a, ___out) \
      LP2(0x2208, int, i2d_OSSL_TIME_PERIOD , const OSSL_TIME_PERIOD *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_PERIOD_free(___a) \
      LP1NR(0x220e, OSSL_TIME_PERIOD_free , OSSL_TIME_PERIOD *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_PERIOD_new() \
      LP0(0x2214, OSSL_TIME_PERIOD *, OSSL_TIME_PERIOD_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_TIME_PERIOD_it() \
      LP0(0x221a, const ASN1_ITEM *, OSSL_TIME_PERIOD_it ,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CIPHER_can_pipeline(___cipher, ___enc) \
      LP2(0x2220, int, EVP_CIPHER_can_pipeline , const EVP_CIPHER *, ___cipher, a0, int, ___enc, d0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CipherPipelineEncryptInit(___ctx, ___cipher, ___key, ___keylen, ___numpipes, ___iv, ___ivlen) \
      LP7(0x2226, int, EVP_CipherPipelineEncryptInit , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, size_t, ___keylen, d0, size_t, ___numpipes, d1, const unsigned char **, ___iv, a3, size_t, ___ivlen, d2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CipherPipelineDecryptInit(___ctx, ___cipher, ___key, ___keylen, ___numpipes, ___iv, ___ivlen) \
      LP7(0x222c, int, EVP_CipherPipelineDecryptInit , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, size_t, ___keylen, d0, size_t, ___numpipes, d1, const unsigned char **, ___iv, a3, size_t, ___ivlen, d2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CipherPipelineUpdate(___ctx, ___out, ___outl, ___outsize, ___in, ___inl) \
      LP6(0x2232, int, EVP_CipherPipelineUpdate , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char **, ___out, a1, size_t *, ___outl, a2, const size_t *, ___outsize, a3, const unsigned char **, ___in, d0, const size_t *, ___inl, d1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CipherPipelineFinal(___ctx, ___outm, ___outl, ___outsize) \
      LP4(0x2238, int, EVP_CipherPipelineFinal , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char **, ___outm, a1, size_t *, ___outl, a2, const size_t *, ___outsize, a3,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_ATTRIBUTE_TYPE_MAPPING(___a, ___in, ___len) \
      LP3(0x223e, OSSL_ATTRIBUTE_TYPE_MAPPING *, d2i_OSSL_ATTRIBUTE_TYPE_MAPPING , OSSL_ATTRIBUTE_TYPE_MAPPING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_ATTRIBUTE_TYPE_MAPPING(___a, ___out) \
      LP2(0x2244, int, i2d_OSSL_ATTRIBUTE_TYPE_MAPPING , const OSSL_ATTRIBUTE_TYPE_MAPPING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_TYPE_MAPPING_free(___a) \
      LP1NR(0x224a, OSSL_ATTRIBUTE_TYPE_MAPPING_free , OSSL_ATTRIBUTE_TYPE_MAPPING *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_TYPE_MAPPING_new() \
      LP0(0x2250, OSSL_ATTRIBUTE_TYPE_MAPPING *, OSSL_ATTRIBUTE_TYPE_MAPPING_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_TYPE_MAPPING_it() \
      LP0(0x2256, const ASN1_ITEM *, OSSL_ATTRIBUTE_TYPE_MAPPING_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_ATTRIBUTE_VALUE_MAPPING(___a, ___in, ___len) \
      LP3(0x225c, OSSL_ATTRIBUTE_VALUE_MAPPING *, d2i_OSSL_ATTRIBUTE_VALUE_MAPPING , OSSL_ATTRIBUTE_VALUE_MAPPING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_ATTRIBUTE_VALUE_MAPPING(___a, ___out) \
      LP2(0x2262, int, i2d_OSSL_ATTRIBUTE_VALUE_MAPPING , const OSSL_ATTRIBUTE_VALUE_MAPPING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_VALUE_MAPPING_free(___a) \
      LP1NR(0x2268, OSSL_ATTRIBUTE_VALUE_MAPPING_free , OSSL_ATTRIBUTE_VALUE_MAPPING *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_VALUE_MAPPING_new() \
      LP0(0x226e, OSSL_ATTRIBUTE_VALUE_MAPPING *, OSSL_ATTRIBUTE_VALUE_MAPPING_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_VALUE_MAPPING_it() \
      LP0(0x2274, const ASN1_ITEM *, OSSL_ATTRIBUTE_VALUE_MAPPING_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_ATTRIBUTE_MAPPING(___a, ___in, ___len) \
      LP3(0x227a, OSSL_ATTRIBUTE_MAPPING *, d2i_OSSL_ATTRIBUTE_MAPPING , OSSL_ATTRIBUTE_MAPPING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_ATTRIBUTE_MAPPING(___a, ___out) \
      LP2(0x2280, int, i2d_OSSL_ATTRIBUTE_MAPPING , const OSSL_ATTRIBUTE_MAPPING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_MAPPING_free(___a) \
      LP1NR(0x2286, OSSL_ATTRIBUTE_MAPPING_free , OSSL_ATTRIBUTE_MAPPING *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_MAPPING_new() \
      LP0(0x228c, OSSL_ATTRIBUTE_MAPPING *, OSSL_ATTRIBUTE_MAPPING_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_MAPPING_it() \
      LP0(0x2292, const ASN1_ITEM *, OSSL_ATTRIBUTE_MAPPING_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_ATTRIBUTE_MAPPINGS(___a, ___in, ___len) \
      LP3(0x2298, OSSL_ATTRIBUTE_MAPPINGS *, d2i_OSSL_ATTRIBUTE_MAPPINGS , OSSL_ATTRIBUTE_MAPPINGS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_ATTRIBUTE_MAPPINGS(___a, ___out) \
      LP2(0x229e, int, i2d_OSSL_ATTRIBUTE_MAPPINGS , const OSSL_ATTRIBUTE_MAPPINGS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_MAPPINGS_free(___a) \
      LP1NR(0x22a4, OSSL_ATTRIBUTE_MAPPINGS_free , OSSL_ATTRIBUTE_MAPPINGS *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_MAPPINGS_new() \
      LP0(0x22aa, OSSL_ATTRIBUTE_MAPPINGS *, OSSL_ATTRIBUTE_MAPPINGS_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATTRIBUTE_MAPPINGS_it() \
      LP0(0x22b0, const ASN1_ITEM *, OSSL_ATTRIBUTE_MAPPINGS_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_ATAV(___a, ___in, ___len) \
      LP3(0x22b6, OSSL_ATAV *, d2i_OSSL_ATAV , OSSL_ATAV **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_ATAV(___a, ___out) \
      LP2(0x22bc, int, i2d_OSSL_ATAV , const OSSL_ATAV *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATAV_free(___a) \
      LP1NR(0x22c2, OSSL_ATAV_free , OSSL_ATAV *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATAV_new() \
      LP0(0x22c8, OSSL_ATAV *, OSSL_ATAV_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ATAV_it() \
      LP0(0x22ce, const ASN1_ITEM *, OSSL_ATAV_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_ALLOWED_ATTRIBUTES_CHOICE(___a, ___in, ___len) \
      LP3(0x22d4, OSSL_ALLOWED_ATTRIBUTES_CHOICE *, d2i_OSSL_ALLOWED_ATTRIBUTES_CHOICE , OSSL_ALLOWED_ATTRIBUTES_CHOICE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_ALLOWED_ATTRIBUTES_CHOICE(___a, ___out) \
      LP2(0x22da, int, i2d_OSSL_ALLOWED_ATTRIBUTES_CHOICE , const OSSL_ALLOWED_ATTRIBUTES_CHOICE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ALLOWED_ATTRIBUTES_CHOICE_free(___a) \
      LP1NR(0x22e0, OSSL_ALLOWED_ATTRIBUTES_CHOICE_free , OSSL_ALLOWED_ATTRIBUTES_CHOICE *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ALLOWED_ATTRIBUTES_CHOICE_new() \
      LP0(0x22e6, OSSL_ALLOWED_ATTRIBUTES_CHOICE *, OSSL_ALLOWED_ATTRIBUTES_CHOICE_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ALLOWED_ATTRIBUTES_CHOICE_it() \
      LP0(0x22ec, const ASN1_ITEM *, OSSL_ALLOWED_ATTRIBUTES_CHOICE_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_ALLOWED_ATTRIBUTES_ITEM(___a, ___in, ___len) \
      LP3(0x22f2, OSSL_ALLOWED_ATTRIBUTES_ITEM *, d2i_OSSL_ALLOWED_ATTRIBUTES_ITEM , OSSL_ALLOWED_ATTRIBUTES_ITEM **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_ALLOWED_ATTRIBUTES_ITEM(___a, ___out) \
      LP2(0x22f8, int, i2d_OSSL_ALLOWED_ATTRIBUTES_ITEM , const OSSL_ALLOWED_ATTRIBUTES_ITEM *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ALLOWED_ATTRIBUTES_ITEM_free(___a) \
      LP1NR(0x22fe, OSSL_ALLOWED_ATTRIBUTES_ITEM_free , OSSL_ALLOWED_ATTRIBUTES_ITEM *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ALLOWED_ATTRIBUTES_ITEM_new() \
      LP0(0x2304, OSSL_ALLOWED_ATTRIBUTES_ITEM *, OSSL_ALLOWED_ATTRIBUTES_ITEM_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ALLOWED_ATTRIBUTES_ITEM_it() \
      LP0(0x230a, const ASN1_ITEM *, OSSL_ALLOWED_ATTRIBUTES_ITEM_it ,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(___a, ___in, ___len) \
      LP3(0x2310, OSSL_ALLOWED_ATTRIBUTES_SYNTAX *, d2i_OSSL_ALLOWED_ATTRIBUTES_SYNTAX , OSSL_ALLOWED_ATTRIBUTES_SYNTAX **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(___a, ___out) \
      LP2(0x2316, int, i2d_OSSL_ALLOWED_ATTRIBUTES_SYNTAX , const OSSL_ALLOWED_ATTRIBUTES_SYNTAX *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ALLOWED_ATTRIBUTES_SYNTAX_free(___a) \
      LP1NR(0x231c, OSSL_ALLOWED_ATTRIBUTES_SYNTAX_free , OSSL_ALLOWED_ATTRIBUTES_SYNTAX *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ALLOWED_ATTRIBUTES_SYNTAX_new() \
      LP0(0x2322, OSSL_ALLOWED_ATTRIBUTES_SYNTAX *, OSSL_ALLOWED_ATTRIBUTES_SYNTAX_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it() \
      LP0(0x2328, const ASN1_ITEM *, OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it ,\
      , AMISSLEXT_BASE_NAME)

#define EVP_CipherInit_SKEY(___ctx, ___cipher, ___skey, ___iv, ___iv_len, ___enc, ___params) \
      LP7(0x232e, int, EVP_CipherInit_SKEY , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, EVP_SKEY *, ___skey, a2, const unsigned char *, ___iv, a3, size_t, ___iv_len, d0, int, ___enc, d1, const OSSL_PARAM *, ___params, d2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEY_import(___libctx, ___skeymgmtname, ___propquery, ___selection, ___params) \
      LP5(0x2334, EVP_SKEY *, EVP_SKEY_import , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___skeymgmtname, a1, const char *, ___propquery, a2, int, ___selection, d0, const OSSL_PARAM *, ___params, a3,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEY_generate(___libctx, ___skeymgmtname, ___propquery, ___params) \
      LP4(0x233a, EVP_SKEY *, EVP_SKEY_generate , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___skeymgmtname, a1, const char *, ___propquery, a2, const OSSL_PARAM *, ___params, a3,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEY_import_raw_key(___libctx, ___skeymgmtname, ___key, ___keylen, ___propquery) \
      LP5(0x2340, EVP_SKEY *, EVP_SKEY_import_raw_key , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___skeymgmtname, a1, unsigned char *, ___key, a2, size_t, ___keylen, d0, const char *, ___propquery, a3,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEY_get0_raw_key(___skey, ___key, ___len) \
      LP3(0x2346, int, EVP_SKEY_get0_raw_key , const EVP_SKEY *, ___skey, a0, const unsigned char **, ___key, a1, size_t *, ___len, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEY_export(___skey, ___selection, ___export_cb, ___export_cbarg) \
      LP4(0x234c, int, EVP_SKEY_export , const EVP_SKEY *, ___skey, a0, int, ___selection, d0, OSSL_CALLBACK *, ___export_cb, a1, void *, ___export_cbarg, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEY_up_ref(___skey) \
      LP1(0x2352, int, EVP_SKEY_up_ref , EVP_SKEY *, ___skey, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEY_free(___skey) \
      LP1NR(0x2358, EVP_SKEY_free , EVP_SKEY *, ___skey, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEYMGMT_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x235e, EVP_SKEYMGMT *, EVP_SKEYMGMT_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEYMGMT_up_ref(___keymgmt) \
      LP1(0x2364, int, EVP_SKEYMGMT_up_ref , EVP_SKEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEYMGMT_free(___keymgmt) \
      LP1NR(0x236a, EVP_SKEYMGMT_free , EVP_SKEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEYMGMT_get0_provider(___keymgmt) \
      LP1(0x2370, const OSSL_PROVIDER *, EVP_SKEYMGMT_get0_provider , const EVP_SKEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEYMGMT_get0_name(___keymgmt) \
      LP1(0x2376, const char *, EVP_SKEYMGMT_get0_name , const EVP_SKEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEYMGMT_get0_description(___keymgmt) \
      LP1(0x237c, const char *, EVP_SKEYMGMT_get0_description , const EVP_SKEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEYMGMT_is_a(___keymgmt, ___name) \
      LP2(0x2382, int, EVP_SKEYMGMT_is_a , const EVP_SKEYMGMT *, ___keymgmt, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEYMGMT_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x2388, EVP_SKEYMGMT_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_SKEYMGMT *keymgmt,void *arg))

#define EVP_SKEYMGMT_names_do_all(___keymgmt, ___fn, ___data) \
      LP3FP(0x238e, int, EVP_SKEYMGMT_names_do_all , const EVP_SKEYMGMT *, ___keymgmt, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data))

#define EVP_MAC_init_SKEY(___ctx, ___skey, ___params) \
      LP3(0x2394, int, EVP_MAC_init_SKEY , EVP_MAC_CTX *, ___ctx, a0, EVP_SKEY *, ___skey, a1, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEY_get0_key_id(___skey) \
      LP1(0x239a, const char *, EVP_SKEY_get0_key_id , const EVP_SKEY *, ___skey, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEY_get0_skeymgmt_name(___skey) \
      LP1(0x23a0, const char *, EVP_SKEY_get0_skeymgmt_name , const EVP_SKEY *, ___skey, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEY_get0_provider_name(___skey) \
      LP1(0x23a6, const char *, EVP_SKEY_get0_provider_name , const EVP_SKEY *, ___skey, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEYMGMT_get0_gen_settable_params(___skeymgmt) \
      LP1(0x23ac, const OSSL_PARAM *, EVP_SKEYMGMT_get0_gen_settable_params , const EVP_SKEYMGMT *, ___skeymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEYMGMT_get0_imp_settable_params(___skeymgmt) \
      LP1(0x23b2, const OSSL_PARAM *, EVP_SKEYMGMT_get0_imp_settable_params , const EVP_SKEYMGMT *, ___skeymgmt, a0,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEY_is_a(___skey, ___name) \
      LP2(0x23b8, int, EVP_SKEY_is_a , const EVP_SKEY *, ___skey, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME)

#define EVP_SKEY_to_provider(___skey, ___libctx, ___prov, ___propquery) \
      LP4(0x23be, EVP_SKEY *, EVP_SKEY_to_provider , EVP_SKEY *, ___skey, a0, OSSL_LIB_CTX *, ___libctx, a1, OSSL_PROVIDER *, ___prov, a2, const char *, ___propquery, a3,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_add_conf_parameter(___prov, ___name, ___value) \
      LP3(0x23c4, int, OSSL_PROVIDER_add_conf_parameter , OSSL_PROVIDER *, ___prov, a0, const char *, ___name, a1, const char *, ___value, a2,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_get_conf_parameters(___prov, ___params) \
      LP2(0x23ca, int, OSSL_PROVIDER_get_conf_parameters , const OSSL_PROVIDER *, ___prov, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_PROVIDER_conf_get_bool(___prov, ___name, ___defval) \
      LP3(0x23d0, int, OSSL_PROVIDER_conf_get_bool , const OSSL_PROVIDER *, ___prov, a0, const char *, ___name, a1, int, ___defval, d0,\
      , AMISSLEXT_BASE_NAME)

#define d2i_OSSL_AA_DIST_POINT(___a, ___in, ___len) \
      LP3(0x23d6, OSSL_AA_DIST_POINT *, d2i_OSSL_AA_DIST_POINT , OSSL_AA_DIST_POINT **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME)

#define i2d_OSSL_AA_DIST_POINT(___a, ___out) \
      LP2(0x23dc, int, i2d_OSSL_AA_DIST_POINT , const OSSL_AA_DIST_POINT *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_AA_DIST_POINT_free(___a) \
      LP1NR(0x23e2, OSSL_AA_DIST_POINT_free , OSSL_AA_DIST_POINT *, ___a, a0,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_AA_DIST_POINT_new() \
      LP0(0x23e8, OSSL_AA_DIST_POINT *, OSSL_AA_DIST_POINT_new ,\
      , AMISSLEXT_BASE_NAME)

#define OSSL_AA_DIST_POINT_it() \
      LP0(0x23ee, const ASN1_ITEM *, OSSL_AA_DIST_POINT_it ,\
      , AMISSLEXT_BASE_NAME)

#define PEM_ASN1_write_bio_ctx(___i2d, ___vctx, ___name, ___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
      LP10(0x23f4, int, PEM_ASN1_write_bio_ctx , OSSL_i2d_of_void_ctx *, ___i2d, a0, void *, ___vctx, a1, const char *, ___name, a2, BIO *, ___bp, a3, const void *, ___x, d0, const EVP_CIPHER *, ___enc, d1, const unsigned char *, ___kstr, d2, int, ___klen, d3, pem_password_cb *, ___cb, d4, void *, ___u, d5,\
      , AMISSLEXT_BASE_NAME)

#endif /* !_INLINE_AMISSLEXT_H */
