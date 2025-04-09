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

#ifndef AROS_LIBCALL_H
#include <aros/libcall.h>
#endif /* !AROS_LIBCALL_H */

#ifndef AMISSLEXT_BASE_NAME
#define AMISSLEXT_BASE_NAME AmiSSLExtBase
#endif /* !AMISSLEXT_BASE_NAME */

#define OSSL_trace_enabled(___category) \
      AROS_LC1(int, OSSL_trace_enabled, \
 AROS_LCA(int, (___category), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 5, Amisslext)

#define OSSL_trace_begin(___category) \
      AROS_LC1(BIO *, OSSL_trace_begin, \
 AROS_LCA(int, (___category), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 6, Amisslext)

#define OSSL_trace_end(___category, ___channel) \
      AROS_LC2(void, OSSL_trace_end, \
 AROS_LCA(int, (___category), D0), \
 AROS_LCA(BIO *, (___channel), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 7, Amisslext)

#define OSSL_PROVIDER_load(___a, ___name) \
      AROS_LC2(OSSL_PROVIDER *, OSSL_PROVIDER_load, \
 AROS_LCA(OSSL_LIB_CTX *, (___a), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 8, Amisslext)

#define OSSL_PROVIDER_try_load(___a, ___name, ___retain_fallbacks) \
      AROS_LC3(OSSL_PROVIDER *, OSSL_PROVIDER_try_load, \
 AROS_LCA(OSSL_LIB_CTX *, (___a), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(int, (___retain_fallbacks), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 9, Amisslext)

#define OSSL_PROVIDER_unload(___prov) \
      AROS_LC1(int, OSSL_PROVIDER_unload, \
 AROS_LCA(OSSL_PROVIDER *, (___prov), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 10, Amisslext)

#define OSSL_PROVIDER_add_builtin(___a, ___name, ___init_fn) \
      AROS_LC3(int, OSSL_PROVIDER_add_builtin, \
 AROS_LCA(OSSL_LIB_CTX *, (___a), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(OSSL_provider_init_fn *, (___init_fn), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 11, Amisslext)

#define OSSL_PROVIDER_gettable_params(___prov) \
      AROS_LC1(const OSSL_PARAM *, OSSL_PROVIDER_gettable_params, \
 AROS_LCA(const OSSL_PROVIDER *, (___prov), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 12, Amisslext)

#define OSSL_PROVIDER_get_params(___prov, ___params) \
      AROS_LC2(int, OSSL_PROVIDER_get_params, \
 AROS_LCA(const OSSL_PROVIDER *, (___prov), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 13, Amisslext)

#define d2i_OSSL_CRMF_ENCRYPTEDVALUE(___a, ___in, ___len) \
      AROS_LC3(OSSL_CRMF_ENCRYPTEDVALUE *, d2i_OSSL_CRMF_ENCRYPTEDVALUE, \
 AROS_LCA(OSSL_CRMF_ENCRYPTEDVALUE **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 14, Amisslext)

#define i2d_OSSL_CRMF_ENCRYPTEDVALUE(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CRMF_ENCRYPTEDVALUE, \
 AROS_LCA(const OSSL_CRMF_ENCRYPTEDVALUE *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 15, Amisslext)

#define OSSL_CRMF_ENCRYPTEDVALUE_free(___a) \
      AROS_LC1(void, OSSL_CRMF_ENCRYPTEDVALUE_free, \
 AROS_LCA(OSSL_CRMF_ENCRYPTEDVALUE *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 16, Amisslext)

#define OSSL_CRMF_ENCRYPTEDVALUE_new() \
      AROS_LC0(OSSL_CRMF_ENCRYPTEDVALUE *, OSSL_CRMF_ENCRYPTEDVALUE_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 17, Amisslext)

#define OSSL_CRMF_ENCRYPTEDVALUE_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CRMF_ENCRYPTEDVALUE_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 18, Amisslext)

#define d2i_OSSL_CRMF_MSG(___a, ___in, ___len) \
      AROS_LC3(OSSL_CRMF_MSG *, d2i_OSSL_CRMF_MSG, \
 AROS_LCA(OSSL_CRMF_MSG **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 19, Amisslext)

#define i2d_OSSL_CRMF_MSG(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CRMF_MSG, \
 AROS_LCA(const OSSL_CRMF_MSG *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 20, Amisslext)

#define OSSL_CRMF_MSG_dup(___a) \
      AROS_LC1(OSSL_CRMF_MSG *, OSSL_CRMF_MSG_dup, \
 AROS_LCA(const OSSL_CRMF_MSG *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 21, Amisslext)

#define OSSL_CRMF_MSG_free(___a) \
      AROS_LC1(void, OSSL_CRMF_MSG_free, \
 AROS_LCA(OSSL_CRMF_MSG *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 22, Amisslext)

#define OSSL_CRMF_MSG_new() \
      AROS_LC0(OSSL_CRMF_MSG *, OSSL_CRMF_MSG_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 23, Amisslext)

#define OSSL_CRMF_MSG_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CRMF_MSG_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 24, Amisslext)

#define d2i_OSSL_CRMF_PBMPARAMETER(___a, ___in, ___len) \
      AROS_LC3(OSSL_CRMF_PBMPARAMETER *, d2i_OSSL_CRMF_PBMPARAMETER, \
 AROS_LCA(OSSL_CRMF_PBMPARAMETER **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 25, Amisslext)

#define i2d_OSSL_CRMF_PBMPARAMETER(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CRMF_PBMPARAMETER, \
 AROS_LCA(const OSSL_CRMF_PBMPARAMETER *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 26, Amisslext)

#define OSSL_CRMF_PBMPARAMETER_free(___a) \
      AROS_LC1(void, OSSL_CRMF_PBMPARAMETER_free, \
 AROS_LCA(OSSL_CRMF_PBMPARAMETER *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 27, Amisslext)

#define OSSL_CRMF_PBMPARAMETER_new() \
      AROS_LC0(OSSL_CRMF_PBMPARAMETER *, OSSL_CRMF_PBMPARAMETER_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 28, Amisslext)

#define OSSL_CRMF_PBMPARAMETER_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CRMF_PBMPARAMETER_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 29, Amisslext)

#define d2i_OSSL_CRMF_CERTID(___a, ___in, ___len) \
      AROS_LC3(OSSL_CRMF_CERTID *, d2i_OSSL_CRMF_CERTID, \
 AROS_LCA(OSSL_CRMF_CERTID **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 30, Amisslext)

#define i2d_OSSL_CRMF_CERTID(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CRMF_CERTID, \
 AROS_LCA(const OSSL_CRMF_CERTID *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 31, Amisslext)

#define OSSL_CRMF_CERTID_dup(___a) \
      AROS_LC1(OSSL_CRMF_CERTID *, OSSL_CRMF_CERTID_dup, \
 AROS_LCA(const OSSL_CRMF_CERTID *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 32, Amisslext)

#define OSSL_CRMF_CERTID_free(___a) \
      AROS_LC1(void, OSSL_CRMF_CERTID_free, \
 AROS_LCA(OSSL_CRMF_CERTID *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 33, Amisslext)

#define OSSL_CRMF_CERTID_new() \
      AROS_LC0(OSSL_CRMF_CERTID *, OSSL_CRMF_CERTID_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 34, Amisslext)

#define OSSL_CRMF_CERTID_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CRMF_CERTID_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 35, Amisslext)

#define d2i_OSSL_CRMF_PKIPUBLICATIONINFO(___a, ___in, ___len) \
      AROS_LC3(OSSL_CRMF_PKIPUBLICATIONINFO *, d2i_OSSL_CRMF_PKIPUBLICATIONINFO, \
 AROS_LCA(OSSL_CRMF_PKIPUBLICATIONINFO **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 36, Amisslext)

#define i2d_OSSL_CRMF_PKIPUBLICATIONINFO(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CRMF_PKIPUBLICATIONINFO, \
 AROS_LCA(const OSSL_CRMF_PKIPUBLICATIONINFO *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 37, Amisslext)

#define OSSL_CRMF_PKIPUBLICATIONINFO_free(___a) \
      AROS_LC1(void, OSSL_CRMF_PKIPUBLICATIONINFO_free, \
 AROS_LCA(OSSL_CRMF_PKIPUBLICATIONINFO *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 38, Amisslext)

#define OSSL_CRMF_PKIPUBLICATIONINFO_new() \
      AROS_LC0(OSSL_CRMF_PKIPUBLICATIONINFO *, OSSL_CRMF_PKIPUBLICATIONINFO_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 39, Amisslext)

#define OSSL_CRMF_PKIPUBLICATIONINFO_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CRMF_PKIPUBLICATIONINFO_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 40, Amisslext)

#define d2i_OSSL_CRMF_SINGLEPUBINFO(___a, ___in, ___len) \
      AROS_LC3(OSSL_CRMF_SINGLEPUBINFO *, d2i_OSSL_CRMF_SINGLEPUBINFO, \
 AROS_LCA(OSSL_CRMF_SINGLEPUBINFO **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 41, Amisslext)

#define i2d_OSSL_CRMF_SINGLEPUBINFO(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CRMF_SINGLEPUBINFO, \
 AROS_LCA(const OSSL_CRMF_SINGLEPUBINFO *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 42, Amisslext)

#define OSSL_CRMF_SINGLEPUBINFO_free(___a) \
      AROS_LC1(void, OSSL_CRMF_SINGLEPUBINFO_free, \
 AROS_LCA(OSSL_CRMF_SINGLEPUBINFO *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 43, Amisslext)

#define OSSL_CRMF_SINGLEPUBINFO_new() \
      AROS_LC0(OSSL_CRMF_SINGLEPUBINFO *, OSSL_CRMF_SINGLEPUBINFO_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 44, Amisslext)

#define OSSL_CRMF_SINGLEPUBINFO_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CRMF_SINGLEPUBINFO_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 45, Amisslext)

#define d2i_OSSL_CRMF_CERTTEMPLATE(___a, ___in, ___len) \
      AROS_LC3(OSSL_CRMF_CERTTEMPLATE *, d2i_OSSL_CRMF_CERTTEMPLATE, \
 AROS_LCA(OSSL_CRMF_CERTTEMPLATE **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 46, Amisslext)

#define i2d_OSSL_CRMF_CERTTEMPLATE(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CRMF_CERTTEMPLATE, \
 AROS_LCA(const OSSL_CRMF_CERTTEMPLATE *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 47, Amisslext)

#define OSSL_CRMF_CERTTEMPLATE_free(___a) \
      AROS_LC1(void, OSSL_CRMF_CERTTEMPLATE_free, \
 AROS_LCA(OSSL_CRMF_CERTTEMPLATE *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 48, Amisslext)

#define OSSL_CRMF_CERTTEMPLATE_new() \
      AROS_LC0(OSSL_CRMF_CERTTEMPLATE *, OSSL_CRMF_CERTTEMPLATE_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 49, Amisslext)

#define OSSL_CRMF_CERTTEMPLATE_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CRMF_CERTTEMPLATE_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 50, Amisslext)

#define d2i_OSSL_CRMF_MSGS(___a, ___in, ___len) \
      AROS_LC3(OSSL_CRMF_MSGS *, d2i_OSSL_CRMF_MSGS, \
 AROS_LCA(OSSL_CRMF_MSGS **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 51, Amisslext)

#define i2d_OSSL_CRMF_MSGS(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CRMF_MSGS, \
 AROS_LCA(const OSSL_CRMF_MSGS *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 52, Amisslext)

#define OSSL_CRMF_MSGS_free(___a) \
      AROS_LC1(void, OSSL_CRMF_MSGS_free, \
 AROS_LCA(OSSL_CRMF_MSGS *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 53, Amisslext)

#define OSSL_CRMF_MSGS_new() \
      AROS_LC0(OSSL_CRMF_MSGS *, OSSL_CRMF_MSGS_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 54, Amisslext)

#define OSSL_CRMF_MSGS_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CRMF_MSGS_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 55, Amisslext)

#define OSSL_CRMF_pbmp_new(___libctx, ___slen, ___owfnid, ___itercnt, ___macnid) \
      AROS_LC5(OSSL_CRMF_PBMPARAMETER *, OSSL_CRMF_pbmp_new, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(size_t, (___slen), D0), \
 AROS_LCA(int, (___owfnid), D1), \
 AROS_LCA(size_t, (___itercnt), D2), \
 AROS_LCA(int, (___macnid), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 56, Amisslext)

#define OSSL_CRMF_pbm_new(___libctx, ___propq, ___pbmp, ___msg, ___msglen, ___sec, ___seclen, ___mac, ___maclen) \
      AROS_LC9(int, OSSL_CRMF_pbm_new, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
 AROS_LCA(const OSSL_CRMF_PBMPARAMETER *, (___pbmp), A2), \
 AROS_LCA(const unsigned char *, (___msg), A3), \
 AROS_LCA(size_t, (___msglen), D0), \
 AROS_LCA(const unsigned char *, (___sec), D1), \
 AROS_LCA(size_t, (___seclen), D2), \
 AROS_LCA(unsigned char **, (___mac), D3), \
 AROS_LCA(size_t *, (___maclen), D4), \
     struct Library *, AMISSLEXT_BASE_NAME, 57, Amisslext)

#define OSSL_CRMF_MSG_get0_regCtrl_regToken(___msg) \
      AROS_LC1(ASN1_UTF8STRING *, OSSL_CRMF_MSG_get0_regCtrl_regToken, \
 AROS_LCA(const OSSL_CRMF_MSG *, (___msg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 58, Amisslext)

#define OSSL_CRMF_MSG_set1_regCtrl_regToken(___msg, ___tok) \
      AROS_LC2(int, OSSL_CRMF_MSG_set1_regCtrl_regToken, \
 AROS_LCA(OSSL_CRMF_MSG *, (___msg), A0), \
 AROS_LCA(const ASN1_UTF8STRING *, (___tok), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 59, Amisslext)

#define OSSL_CRMF_MSG_get0_regCtrl_authenticator(___msg) \
      AROS_LC1(ASN1_UTF8STRING *, OSSL_CRMF_MSG_get0_regCtrl_authenticator, \
 AROS_LCA(const OSSL_CRMF_MSG *, (___msg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 60, Amisslext)

#define OSSL_CRMF_MSG_set1_regCtrl_authenticator(___msg, ___auth) \
      AROS_LC2(int, OSSL_CRMF_MSG_set1_regCtrl_authenticator, \
 AROS_LCA(OSSL_CRMF_MSG *, (___msg), A0), \
 AROS_LCA(const ASN1_UTF8STRING *, (___auth), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 61, Amisslext)

#define OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo(___pi, ___spi) \
      AROS_LC2(int, OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo, \
 AROS_LCA(OSSL_CRMF_PKIPUBLICATIONINFO *, (___pi), A0), \
 AROS_LCA(OSSL_CRMF_SINGLEPUBINFO *, (___spi), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 62, Amisslext)

#define OSSL_CRMF_MSG_set0_SinglePubInfo(___spi, ___method, ___nm) \
      AROS_LC3(int, OSSL_CRMF_MSG_set0_SinglePubInfo, \
 AROS_LCA(OSSL_CRMF_SINGLEPUBINFO *, (___spi), A0), \
 AROS_LCA(int, (___method), D0), \
 AROS_LCA(GENERAL_NAME *, (___nm), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 63, Amisslext)

#define OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo(___msg) \
      AROS_LC1(OSSL_CRMF_PKIPUBLICATIONINFO *, OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo, \
 AROS_LCA(const OSSL_CRMF_MSG *, (___msg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 64, Amisslext)

#define OSSL_CRMF_MSG_set_PKIPublicationInfo_action(___pi, ___action) \
      AROS_LC2(int, OSSL_CRMF_MSG_set_PKIPublicationInfo_action, \
 AROS_LCA(OSSL_CRMF_PKIPUBLICATIONINFO *, (___pi), A0), \
 AROS_LCA(int, (___action), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 65, Amisslext)

#define OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo(___msg, ___pi) \
      AROS_LC2(int, OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo, \
 AROS_LCA(OSSL_CRMF_MSG *, (___msg), A0), \
 AROS_LCA(const OSSL_CRMF_PKIPUBLICATIONINFO *, (___pi), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 66, Amisslext)

#define OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey(___msg) \
      AROS_LC1(X509_PUBKEY *, OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey, \
 AROS_LCA(const OSSL_CRMF_MSG *, (___msg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 67, Amisslext)

#define OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey(___msg, ___pubkey) \
      AROS_LC2(int, OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey, \
 AROS_LCA(OSSL_CRMF_MSG *, (___msg), A0), \
 AROS_LCA(const X509_PUBKEY *, (___pubkey), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 68, Amisslext)

#define OSSL_CRMF_MSG_get0_regCtrl_oldCertID(___msg) \
      AROS_LC1(OSSL_CRMF_CERTID *, OSSL_CRMF_MSG_get0_regCtrl_oldCertID, \
 AROS_LCA(const OSSL_CRMF_MSG *, (___msg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 69, Amisslext)

#define OSSL_CRMF_MSG_set1_regCtrl_oldCertID(___msg, ___cid) \
      AROS_LC2(int, OSSL_CRMF_MSG_set1_regCtrl_oldCertID, \
 AROS_LCA(OSSL_CRMF_MSG *, (___msg), A0), \
 AROS_LCA(const OSSL_CRMF_CERTID *, (___cid), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 70, Amisslext)

#define OSSL_CRMF_CERTID_gen(___issuer, ___serial) \
      AROS_LC2(OSSL_CRMF_CERTID *, OSSL_CRMF_CERTID_gen, \
 AROS_LCA(const X509_NAME *, (___issuer), A0), \
 AROS_LCA(const ASN1_INTEGER *, (___serial), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 71, Amisslext)

#define OSSL_CRMF_MSG_get0_regInfo_utf8Pairs(___msg) \
      AROS_LC1(ASN1_UTF8STRING *, OSSL_CRMF_MSG_get0_regInfo_utf8Pairs, \
 AROS_LCA(const OSSL_CRMF_MSG *, (___msg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 72, Amisslext)

#define OSSL_CRMF_MSG_set1_regInfo_utf8Pairs(___msg, ___utf8pairs) \
      AROS_LC2(int, OSSL_CRMF_MSG_set1_regInfo_utf8Pairs, \
 AROS_LCA(OSSL_CRMF_MSG *, (___msg), A0), \
 AROS_LCA(const ASN1_UTF8STRING *, (___utf8pairs), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 73, Amisslext)

#define OSSL_CRMF_MSG_get0_regInfo_certReq(___msg) \
      AROS_LC1(OSSL_CRMF_CERTREQUEST *, OSSL_CRMF_MSG_get0_regInfo_certReq, \
 AROS_LCA(const OSSL_CRMF_MSG *, (___msg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 74, Amisslext)

#define OSSL_CRMF_MSG_set1_regInfo_certReq(___msg, ___cr) \
      AROS_LC2(int, OSSL_CRMF_MSG_set1_regInfo_certReq, \
 AROS_LCA(OSSL_CRMF_MSG *, (___msg), A0), \
 AROS_LCA(const OSSL_CRMF_CERTREQUEST *, (___cr), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 75, Amisslext)

#define OSSL_CRMF_MSG_set0_validity(___crm, ___notBefore, ___notAfter) \
      AROS_LC3(int, OSSL_CRMF_MSG_set0_validity, \
 AROS_LCA(OSSL_CRMF_MSG *, (___crm), A0), \
 AROS_LCA(ASN1_TIME *, (___notBefore), A1), \
 AROS_LCA(ASN1_TIME *, (___notAfter), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 76, Amisslext)

#define OSSL_CRMF_MSG_set_certReqId(___crm, ___rid) \
      AROS_LC2(int, OSSL_CRMF_MSG_set_certReqId, \
 AROS_LCA(OSSL_CRMF_MSG *, (___crm), A0), \
 AROS_LCA(int, (___rid), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 77, Amisslext)

#define OSSL_CRMF_MSG_get_certReqId(___crm) \
      AROS_LC1(int, OSSL_CRMF_MSG_get_certReqId, \
 AROS_LCA(const OSSL_CRMF_MSG *, (___crm), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 78, Amisslext)

#define OSSL_CRMF_MSG_set0_extensions(___crm, ___exts) \
      AROS_LC2(int, OSSL_CRMF_MSG_set0_extensions, \
 AROS_LCA(OSSL_CRMF_MSG *, (___crm), A0), \
 AROS_LCA(X509_EXTENSIONS *, (___exts), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 79, Amisslext)

#define OSSL_CRMF_MSG_push0_extension(___crm, ___ext) \
      AROS_LC2(int, OSSL_CRMF_MSG_push0_extension, \
 AROS_LCA(OSSL_CRMF_MSG *, (___crm), A0), \
 AROS_LCA(X509_EXTENSION *, (___ext), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 80, Amisslext)

#define OSSL_CRMF_MSG_create_popo(___meth, ___crm, ___pkey, ___digest, ___libctx, ___propq) \
      AROS_LC6(int, OSSL_CRMF_MSG_create_popo, \
 AROS_LCA(int, (___meth), D0), \
 AROS_LCA(OSSL_CRMF_MSG *, (___crm), A0), \
 AROS_LCA(EVP_PKEY *, (___pkey), A1), \
 AROS_LCA(const EVP_MD *, (___digest), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 81, Amisslext)

#define OSSL_CRMF_MSGS_verify_popo(___reqs, ___rid, ___acceptRAVerified, ___libctx, ___propq) \
      AROS_LC5(int, OSSL_CRMF_MSGS_verify_popo, \
 AROS_LCA(const OSSL_CRMF_MSGS *, (___reqs), A0), \
 AROS_LCA(int, (___rid), D0), \
 AROS_LCA(int, (___acceptRAVerified), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 82, Amisslext)

#define OSSL_CRMF_MSG_get0_tmpl(___crm) \
      AROS_LC1(OSSL_CRMF_CERTTEMPLATE *, OSSL_CRMF_MSG_get0_tmpl, \
 AROS_LCA(const OSSL_CRMF_MSG *, (___crm), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 83, Amisslext)

#define OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(___tmpl) \
      AROS_LC1(const ASN1_INTEGER *, OSSL_CRMF_CERTTEMPLATE_get0_serialNumber, \
 AROS_LCA(const OSSL_CRMF_CERTTEMPLATE *, (___tmpl), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 84, Amisslext)

#define OSSL_CRMF_CERTTEMPLATE_get0_subject(___tmpl) \
      AROS_LC1(const X509_NAME *, OSSL_CRMF_CERTTEMPLATE_get0_subject, \
 AROS_LCA(const OSSL_CRMF_CERTTEMPLATE *, (___tmpl), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 85, Amisslext)

#define OSSL_CRMF_CERTTEMPLATE_get0_issuer(___tmpl) \
      AROS_LC1(const X509_NAME *, OSSL_CRMF_CERTTEMPLATE_get0_issuer, \
 AROS_LCA(const OSSL_CRMF_CERTTEMPLATE *, (___tmpl), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 86, Amisslext)

#define OSSL_CRMF_CERTTEMPLATE_get0_extensions(___tmpl) \
      AROS_LC1(X509_EXTENSIONS *, OSSL_CRMF_CERTTEMPLATE_get0_extensions, \
 AROS_LCA(const OSSL_CRMF_CERTTEMPLATE *, (___tmpl), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 87, Amisslext)

#define OSSL_CRMF_CERTTEMPLATE_fill(___tmpl, ___pubkey, ___subject, ___issuer, ___serial) \
      AROS_LC5(int, OSSL_CRMF_CERTTEMPLATE_fill, \
 AROS_LCA(OSSL_CRMF_CERTTEMPLATE *, (___tmpl), A0), \
 AROS_LCA(EVP_PKEY *, (___pubkey), A1), \
 AROS_LCA(const X509_NAME *, (___subject), A2), \
 AROS_LCA(const X509_NAME *, (___issuer), A3), \
 AROS_LCA(const ASN1_INTEGER *, (___serial), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 88, Amisslext)

#define OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert(___ecert, ___libctx, ___propq, ___pkey) \
      AROS_LC4(X509 *, OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert, \
 AROS_LCA(const OSSL_CRMF_ENCRYPTEDVALUE *, (___ecert), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
 AROS_LCA(EVP_PKEY *, (___pkey), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 89, Amisslext)

#define OSSL_PARAM_locate(___p, ___key) \
      AROS_LC2(OSSL_PARAM *, OSSL_PARAM_locate, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(const char *, (___key), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 90, Amisslext)

#define OSSL_PARAM_construct_int_amiga(___result, ___key, ___buf) \
      AROS_LC3(void, OSSL_PARAM_construct_int_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(int *, (___buf), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 91, Amisslext)

#define OSSL_PARAM_construct_uint_amiga(___result, ___key, ___buf) \
      AROS_LC3(void, OSSL_PARAM_construct_uint_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(unsigned int *, (___buf), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 92, Amisslext)

#define OSSL_PARAM_construct_long_amiga(___result, ___key, ___buf) \
      AROS_LC3(void, OSSL_PARAM_construct_long_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(long int *, (___buf), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 93, Amisslext)

#define OSSL_PARAM_construct_ulong_amiga(___result, ___key, ___buf) \
      AROS_LC3(void, OSSL_PARAM_construct_ulong_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(unsigned long int *, (___buf), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 94, Amisslext)

#define OSSL_PARAM_construct_int32_amiga(___result, ___key, ___buf) \
      AROS_LC3(void, OSSL_PARAM_construct_int32_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A1), \
 AROS_LCA(const char *, (___key), A2), \
 AROS_LCA(int32_t *, (___buf), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 95, Amisslext)

#define OSSL_PARAM_construct_uint32_amiga(___result, ___key, ___buf) \
      AROS_LC3(void, OSSL_PARAM_construct_uint32_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A1), \
 AROS_LCA(const char *, (___key), A2), \
 AROS_LCA(uint32_t *, (___buf), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 96, Amisslext)

#define OSSL_PARAM_construct_int64_amiga(___result, ___key, ___buf) \
      AROS_LC3(void, OSSL_PARAM_construct_int64_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(int64_t *, (___buf), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 97, Amisslext)

#define OSSL_PARAM_construct_uint64_amiga(___result, ___key, ___buf) \
      AROS_LC3(void, OSSL_PARAM_construct_uint64_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(uint64_t *, (___buf), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 98, Amisslext)

#define OSSL_PARAM_construct_size_t_amiga(___result, ___key, ___buf) \
      AROS_LC3(void, OSSL_PARAM_construct_size_t_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(size_t *, (___buf), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 99, Amisslext)

#define OSSL_PARAM_construct_BN_amiga(___result, ___key, ___buf, ___bsize) \
      AROS_LC4(void, OSSL_PARAM_construct_BN_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(unsigned char *, (___buf), A2), \
 AROS_LCA(size_t, (___bsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 100, Amisslext)

#define OSSL_PARAM_construct_double_amiga(___result, ___key, ___buf) \
      AROS_LC3(void, OSSL_PARAM_construct_double_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(double *, (___buf), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 101, Amisslext)

#define OSSL_PARAM_construct_utf8_string_amiga(___result, ___key, ___buf, ___bsize) \
      AROS_LC4(void, OSSL_PARAM_construct_utf8_string_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(char *, (___buf), A2), \
 AROS_LCA(size_t, (___bsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 102, Amisslext)

#define OSSL_PARAM_construct_utf8_ptr_amiga(___result, ___key, ___buf, ___bsize) \
      AROS_LC4(void, OSSL_PARAM_construct_utf8_ptr_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(char **, (___buf), A2), \
 AROS_LCA(size_t, (___bsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 103, Amisslext)

#define OSSL_PARAM_construct_octet_string_amiga(___result, ___key, ___buf, ___bsize) \
      AROS_LC4(void, OSSL_PARAM_construct_octet_string_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(void *, (___buf), A2), \
 AROS_LCA(size_t, (___bsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 104, Amisslext)

#define OSSL_PARAM_construct_octet_ptr_amiga(___result, ___key, ___buf, ___bsize) \
      AROS_LC4(void, OSSL_PARAM_construct_octet_ptr_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(void **, (___buf), A2), \
 AROS_LCA(size_t, (___bsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 105, Amisslext)

#define OSSL_PARAM_get_int(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_int, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(int *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 106, Amisslext)

#define OSSL_PARAM_get_uint(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_uint, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(unsigned int *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 107, Amisslext)

#define OSSL_PARAM_get_long(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_long, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(long int *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 108, Amisslext)

#define OSSL_PARAM_get_ulong(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_ulong, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(unsigned long int *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 109, Amisslext)

#define OSSL_PARAM_get_int32(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_int32, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(int32_t *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 110, Amisslext)

#define OSSL_PARAM_get_uint32(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_uint32, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(uint32_t *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 111, Amisslext)

#define OSSL_PARAM_get_int64(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_int64, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(int64_t *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 112, Amisslext)

#define OSSL_PARAM_get_uint64(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_uint64, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(uint64_t *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 113, Amisslext)

#define OSSL_PARAM_get_size_t(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_size_t, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(size_t *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 114, Amisslext)

#define OSSL_PARAM_set_int(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_int, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(int, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 115, Amisslext)

#define OSSL_PARAM_set_uint(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_uint, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(unsigned int, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 116, Amisslext)

#define OSSL_PARAM_set_long(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_long, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(long int, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 117, Amisslext)

#define OSSL_PARAM_set_ulong(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_ulong, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(unsigned long int, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 118, Amisslext)

#define OSSL_PARAM_set_int32(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_int32, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(int32_t, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 119, Amisslext)

#define OSSL_PARAM_set_uint32(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_uint32, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(uint32_t, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 120, Amisslext)

#define OSSL_PARAM_set_int64(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_int64, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(int64_t, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 121, Amisslext)

#define OSSL_PARAM_set_uint64(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_uint64, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(uint64_t, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 122, Amisslext)

#define OSSL_PARAM_set_size_t(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_size_t, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(size_t, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 123, Amisslext)

#define OSSL_PARAM_get_double(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_double, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(double *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 124, Amisslext)

#define OSSL_PARAM_set_double(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_double, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(double, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 125, Amisslext)

#define OSSL_PARAM_get_BN(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_BN, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(BIGNUM **, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 126, Amisslext)

#define OSSL_PARAM_set_BN(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_BN, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(const BIGNUM *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 127, Amisslext)

#define OSSL_PARAM_get_utf8_string(___p, ___val, ___max_len) \
      AROS_LC3(int, OSSL_PARAM_get_utf8_string, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(char **, (___val), A1), \
 AROS_LCA(size_t, (___max_len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 128, Amisslext)

#define OSSL_PARAM_set_utf8_string(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_utf8_string, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(const char *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 129, Amisslext)

#define OSSL_PARAM_get_octet_string(___p, ___val, ___max_len, ___used_len) \
      AROS_LC4(int, OSSL_PARAM_get_octet_string, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(void **, (___val), A1), \
 AROS_LCA(size_t, (___max_len), D0), \
 AROS_LCA(size_t *, (___used_len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 130, Amisslext)

#define OSSL_PARAM_set_octet_string(___p, ___val, ___len) \
      AROS_LC3(int, OSSL_PARAM_set_octet_string, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(const void *, (___val), A1), \
 AROS_LCA(size_t, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 131, Amisslext)

#define OSSL_PARAM_get_utf8_ptr(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_utf8_ptr, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(const char **, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 132, Amisslext)

#define OSSL_PARAM_set_utf8_ptr(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_utf8_ptr, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(const char *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 133, Amisslext)

#define OSSL_PARAM_get_octet_ptr(___p, ___val, ___used_len) \
      AROS_LC3(int, OSSL_PARAM_get_octet_ptr, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(const void **, (___val), A1), \
 AROS_LCA(size_t *, (___used_len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 134, Amisslext)

#define OSSL_PARAM_set_octet_ptr(___p, ___val, ___used_len) \
      AROS_LC3(int, OSSL_PARAM_set_octet_ptr, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(const void *, (___val), A1), \
 AROS_LCA(size_t, (___used_len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 135, Amisslext)

#define X509_set0_distinguishing_id(___x, ___d_id) \
      AROS_LC2(void, X509_set0_distinguishing_id, \
 AROS_LCA(X509 *, (___x), A0), \
 AROS_LCA(ASN1_OCTET_STRING *, (___d_id), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 136, Amisslext)

#define X509_get0_distinguishing_id(___x) \
      AROS_LC1(ASN1_OCTET_STRING *, X509_get0_distinguishing_id, \
 AROS_LCA(X509 *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 137, Amisslext)

#define EVP_MD_up_ref(___md) \
      AROS_LC1(int, EVP_MD_up_ref, \
 AROS_LCA(EVP_MD *, (___md), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 138, Amisslext)

#define EVP_MD_fetch(___ctx, ___algorithm, ___properties) \
      AROS_LC3(EVP_MD *, EVP_MD_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___algorithm), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 139, Amisslext)

#define EVP_set_default_properties(___libctx, ___propq) \
      AROS_LC2(int, EVP_set_default_properties, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 140, Amisslext)

#define OSSL_PARAM_construct_end_amiga(___result) \
      AROS_LC1(void, OSSL_PARAM_construct_end_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 141, Amisslext)

#define EC_GROUP_check_named_curve(___group, ___nist_only, ___ctx) \
      AROS_LC3(int, EC_GROUP_check_named_curve, \
 AROS_LCA(const EC_GROUP *, (___group), A0), \
 AROS_LCA(int, (___nist_only), D0), \
 AROS_LCA(BN_CTX *, (___ctx), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 142, Amisslext)

#define EVP_CIPHER_up_ref(___cipher) \
      AROS_LC1(int, EVP_CIPHER_up_ref, \
 AROS_LCA(EVP_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 143, Amisslext)

#define EVP_CIPHER_fetch(___ctx, ___algorithm, ___properties) \
      AROS_LC3(EVP_CIPHER *, EVP_CIPHER_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___algorithm), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 144, Amisslext)

#define EVP_CIPHER_get_mode(___cipher) \
      AROS_LC1(int, EVP_CIPHER_get_mode, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 145, Amisslext)

#define OPENSSL_info(___type) \
      AROS_LC1(const char *, OPENSSL_info, \
 AROS_LCA(int, (___type), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 146, Amisslext)

#define EVP_KDF_CTX_new(___kdf) \
      AROS_LC1(EVP_KDF_CTX *, EVP_KDF_CTX_new, \
 AROS_LCA(EVP_KDF *, (___kdf), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 147, Amisslext)

#define EVP_KDF_CTX_kdf(___ctx) \
      AROS_LC1(const EVP_KDF *, EVP_KDF_CTX_kdf, \
 AROS_LCA(EVP_KDF_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 148, Amisslext)

#define i2d_KeyParams(___a, ___pp) \
      AROS_LC2(int, i2d_KeyParams, \
 AROS_LCA(const EVP_PKEY *, (___a), A0), \
 AROS_LCA(unsigned char **, (___pp), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 149, Amisslext)

#define d2i_KeyParams(___type, ___a, ___pp, ___length) \
      AROS_LC4(EVP_PKEY *, d2i_KeyParams, \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(EVP_PKEY **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___pp), A1), \
 AROS_LCA(long, (___length), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 150, Amisslext)

#define i2d_KeyParams_bio(___bp, ___pkey) \
      AROS_LC2(int, i2d_KeyParams_bio, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(const EVP_PKEY *, (___pkey), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 151, Amisslext)

#define d2i_KeyParams_bio(___type, ___a, ___in) \
      AROS_LC3(EVP_PKEY *, d2i_KeyParams_bio, \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(EVP_PKEY **, (___a), A0), \
 AROS_LCA(BIO *, (___in), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 152, Amisslext)

#define OSSL_CMP_PKISTATUS_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CMP_PKISTATUS_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 153, Amisslext)

#define d2i_OSSL_CMP_PKIHEADER(___a, ___in, ___len) \
      AROS_LC3(OSSL_CMP_PKIHEADER *, d2i_OSSL_CMP_PKIHEADER, \
 AROS_LCA(OSSL_CMP_PKIHEADER **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 154, Amisslext)

#define i2d_OSSL_CMP_PKIHEADER(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CMP_PKIHEADER, \
 AROS_LCA(const OSSL_CMP_PKIHEADER *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 155, Amisslext)

#define OSSL_CMP_PKIHEADER_free(___a) \
      AROS_LC1(void, OSSL_CMP_PKIHEADER_free, \
 AROS_LCA(OSSL_CMP_PKIHEADER *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 156, Amisslext)

#define OSSL_CMP_PKIHEADER_new() \
      AROS_LC0(OSSL_CMP_PKIHEADER *, OSSL_CMP_PKIHEADER_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 157, Amisslext)

#define OSSL_CMP_PKIHEADER_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CMP_PKIHEADER_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 158, Amisslext)

#define d2i_OSSL_CMP_MSG(___a, ___in, ___len) \
      AROS_LC3(OSSL_CMP_MSG *, d2i_OSSL_CMP_MSG, \
 AROS_LCA(OSSL_CMP_MSG **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 159, Amisslext)

#define i2d_OSSL_CMP_MSG(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CMP_MSG, \
 AROS_LCA(const OSSL_CMP_MSG *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 160, Amisslext)

#define OSSL_CMP_MSG_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CMP_MSG_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 161, Amisslext)

#define OSSL_CMP_ITAV_create(___type, ___value) \
      AROS_LC2(OSSL_CMP_ITAV *, OSSL_CMP_ITAV_create, \
 AROS_LCA(ASN1_OBJECT *, (___type), A0), \
 AROS_LCA(ASN1_TYPE *, (___value), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 162, Amisslext)

#define OSSL_CMP_ITAV_set0(___itav, ___type, ___value) \
      AROS_LC3(void, OSSL_CMP_ITAV_set0, \
 AROS_LCA(OSSL_CMP_ITAV *, (___itav), A0), \
 AROS_LCA(ASN1_OBJECT *, (___type), A1), \
 AROS_LCA(ASN1_TYPE *, (___value), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 163, Amisslext)

#define OSSL_CMP_ITAV_get0_type(___itav) \
      AROS_LC1(ASN1_OBJECT *, OSSL_CMP_ITAV_get0_type, \
 AROS_LCA(const OSSL_CMP_ITAV *, (___itav), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 164, Amisslext)

#define OSSL_CMP_ITAV_get0_value(___itav) \
      AROS_LC1(ASN1_TYPE *, OSSL_CMP_ITAV_get0_value, \
 AROS_LCA(const OSSL_CMP_ITAV *, (___itav), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 165, Amisslext)

#define OSSL_CMP_ITAV_push0_stack_item(___itav_sk_p, ___itav) \
      AROS_LC2(int, OSSL_CMP_ITAV_push0_stack_item, \
 AROS_LCA(STACK_OF(OSSL_CMP_ITAV) **, (___itav_sk_p), A0), \
 AROS_LCA(OSSL_CMP_ITAV *, (___itav), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 166, Amisslext)

#define OSSL_CMP_ITAV_free(___itav) \
      AROS_LC1(void, OSSL_CMP_ITAV_free, \
 AROS_LCA(OSSL_CMP_ITAV *, (___itav), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 167, Amisslext)

#define OSSL_CMP_MSG_free(___msg) \
      AROS_LC1(void, OSSL_CMP_MSG_free, \
 AROS_LCA(OSSL_CMP_MSG *, (___msg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 168, Amisslext)

#define EVP_MD_CTX_set_params(___ctx, ___params) \
      AROS_LC2(int, EVP_MD_CTX_set_params, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 169, Amisslext)

#define EVP_MD_CTX_get_params(___ctx, ___params) \
      AROS_LC2(int, EVP_MD_CTX_get_params, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 170, Amisslext)

#define BN_CTX_new_ex(___ctx) \
      AROS_LC1(BN_CTX *, BN_CTX_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 171, Amisslext)

#define BN_CTX_secure_new_ex(___ctx) \
      AROS_LC1(BN_CTX *, BN_CTX_secure_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 172, Amisslext)

#define OPENSSL_thread_stop_ex(___ctx) \
      AROS_LC1(void, OPENSSL_thread_stop_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 173, Amisslext)

#define OSSL_PARAM_locate_const(___p, ___key) \
      AROS_LC2(const OSSL_PARAM *, OSSL_PARAM_locate_const, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(const char *, (___key), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 174, Amisslext)

#define X509_REQ_set0_distinguishing_id(___x, ___d_id) \
      AROS_LC2(void, X509_REQ_set0_distinguishing_id, \
 AROS_LCA(X509_REQ *, (___x), A0), \
 AROS_LCA(ASN1_OCTET_STRING *, (___d_id), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 175, Amisslext)

#define X509_REQ_get0_distinguishing_id(___x) \
      AROS_LC1(ASN1_OCTET_STRING *, X509_REQ_get0_distinguishing_id, \
 AROS_LCA(X509_REQ *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 176, Amisslext)

#define BN_rand_ex(___rnd, ___bits, ___top, ___bottom, ___strength, ___ctx) \
      AROS_LC6(int, BN_rand_ex, \
 AROS_LCA(BIGNUM *, (___rnd), A0), \
 AROS_LCA(int, (___bits), D0), \
 AROS_LCA(int, (___top), D1), \
 AROS_LCA(int, (___bottom), D2), \
 AROS_LCA(unsigned int, (___strength), D3), \
 AROS_LCA(BN_CTX *, (___ctx), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 177, Amisslext)

#define BN_priv_rand_ex(___rnd, ___bits, ___top, ___bottom, ___strength, ___ctx) \
      AROS_LC6(int, BN_priv_rand_ex, \
 AROS_LCA(BIGNUM *, (___rnd), A0), \
 AROS_LCA(int, (___bits), D0), \
 AROS_LCA(int, (___top), D1), \
 AROS_LCA(int, (___bottom), D2), \
 AROS_LCA(unsigned int, (___strength), D3), \
 AROS_LCA(BN_CTX *, (___ctx), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 178, Amisslext)

#define BN_rand_range_ex(___r, ___range, ___strength, ___ctx) \
      AROS_LC4(int, BN_rand_range_ex, \
 AROS_LCA(BIGNUM *, (___r), A0), \
 AROS_LCA(const BIGNUM *, (___range), A1), \
 AROS_LCA(unsigned int, (___strength), D0), \
 AROS_LCA(BN_CTX *, (___ctx), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 179, Amisslext)

#define BN_priv_rand_range_ex(___r, ___range, ___strength, ___ctx) \
      AROS_LC4(int, BN_priv_rand_range_ex, \
 AROS_LCA(BIGNUM *, (___r), A0), \
 AROS_LCA(const BIGNUM *, (___range), A1), \
 AROS_LCA(unsigned int, (___strength), D0), \
 AROS_LCA(BN_CTX *, (___ctx), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 180, Amisslext)

#define BN_generate_prime_ex2(___ret, ___bits, ___safe, ___add, ___rem, ___cb, ___ctx) \
      AROS_LC7(int, BN_generate_prime_ex2, \
 AROS_LCA(BIGNUM *, (___ret), A0), \
 AROS_LCA(int, (___bits), D0), \
 AROS_LCA(int, (___safe), D1), \
 AROS_LCA(const BIGNUM *, (___add), A1), \
 AROS_LCA(const BIGNUM *, (___rem), A2), \
 AROS_LCA(BN_GENCB *, (___cb), A3), \
 AROS_LCA(BN_CTX *, (___ctx), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 181, Amisslext)

#define EVP_KEYEXCH_free(___exchange) \
      AROS_LC1(void, EVP_KEYEXCH_free, \
 AROS_LCA(EVP_KEYEXCH *, (___exchange), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 182, Amisslext)

#define EVP_KEYEXCH_up_ref(___exchange) \
      AROS_LC1(int, EVP_KEYEXCH_up_ref, \
 AROS_LCA(EVP_KEYEXCH *, (___exchange), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 183, Amisslext)

#define EVP_KEYEXCH_fetch(___ctx, ___algorithm, ___properties) \
      AROS_LC3(EVP_KEYEXCH *, EVP_KEYEXCH_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___algorithm), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 184, Amisslext)

#define EVP_PKEY_CTX_set_dh_pad(___ctx, ___pad) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dh_pad, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___pad), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 185, Amisslext)

#define EVP_PKEY_CTX_set_params(___ctx, ___params) \
      AROS_LC2(int, EVP_PKEY_CTX_set_params, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 186, Amisslext)

#define EVP_KEYMGMT_fetch(___ctx, ___algorithm, ___properties) \
      AROS_LC3(EVP_KEYMGMT *, EVP_KEYMGMT_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___algorithm), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 187, Amisslext)

#define EVP_KEYMGMT_up_ref(___keymgmt) \
      AROS_LC1(int, EVP_KEYMGMT_up_ref, \
 AROS_LCA(EVP_KEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 188, Amisslext)

#define EVP_KEYMGMT_free(___keymgmt) \
      AROS_LC1(void, EVP_KEYMGMT_free, \
 AROS_LCA(EVP_KEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 189, Amisslext)

#define EVP_KEYMGMT_get0_provider(___keymgmt) \
      AROS_LC1(const OSSL_PROVIDER *, EVP_KEYMGMT_get0_provider, \
 AROS_LCA(const EVP_KEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 190, Amisslext)

#define X509_PUBKEY_dup(___a) \
      AROS_LC1(X509_PUBKEY *, X509_PUBKEY_dup, \
 AROS_LCA(const X509_PUBKEY *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 191, Amisslext)

#define EVP_MD_get0_name(___md) \
      AROS_LC1(const char *, EVP_MD_get0_name, \
 AROS_LCA(const EVP_MD *, (___md), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 192, Amisslext)

#define EVP_CIPHER_get0_name(___cipher) \
      AROS_LC1(const char *, EVP_CIPHER_get0_name, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 193, Amisslext)

#define EVP_MD_get0_provider(___md) \
      AROS_LC1(const OSSL_PROVIDER *, EVP_MD_get0_provider, \
 AROS_LCA(const EVP_MD *, (___md), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 194, Amisslext)

#define EVP_CIPHER_get0_provider(___cipher) \
      AROS_LC1(const OSSL_PROVIDER *, EVP_CIPHER_get0_provider, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 195, Amisslext)

#define OSSL_PROVIDER_get0_name(___prov) \
      AROS_LC1(const char *, OSSL_PROVIDER_get0_name, \
 AROS_LCA(const OSSL_PROVIDER *, (___prov), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 196, Amisslext)

#define EVP_CIPHER_do_all_provided(___libctx, ___fn, ___arg) \
      AROS_LC3(void, EVP_CIPHER_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(EVP_CIPHER *cipher,void *arg), (___fn), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 197, Amisslext)

#define EVP_MD_do_all_provided(___libctx, ___fn, ___arg) \
      AROS_LC3(void, EVP_MD_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(EVP_MD *md,void *arg), (___fn), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 198, Amisslext)

#define EVP_KEYEXCH_get0_provider(___exchange) \
      AROS_LC1(OSSL_PROVIDER *, EVP_KEYEXCH_get0_provider, \
 AROS_LCA(const EVP_KEYEXCH *, (___exchange), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 199, Amisslext)

#define OSSL_PROVIDER_available(___a, ___name) \
      AROS_LC2(int, OSSL_PROVIDER_available, \
 AROS_LCA(OSSL_LIB_CTX *, (___a), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 200, Amisslext)

#define ERR_new() \
      AROS_LC0(void, ERR_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 201, Amisslext)

#define ERR_set_debug(___file, ___line, ___func) \
      AROS_LC3(void, ERR_set_debug, \
 AROS_LCA(const char *, (___file), A0), \
 AROS_LCA(int, (___line), D0), \
 AROS_LCA(const char *, (___func), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 202, Amisslext)

#define ERR_vset_error(___lib, ___reason, ___fmt, ___args) \
      AROS_LC4(void, ERR_vset_error, \
 AROS_LCA(int, (___lib), D0), \
 AROS_LCA(int, (___reason), D1), \
 AROS_LCA(const char *, (___fmt), A0), \
 AROS_LCA(va_list, (___args), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 203, Amisslext)

#ifndef NO_INLINE_VARARGS
#define ERR_set_error(___lib, ___reason, ___fmt, ___dummy, ...) \
    ({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; ERR_vset_error((___lib), (___reason), (___fmt), (va_list) _message); })
#endif /* !NO_INLINE_VARARGS */

#define X509_self_signed(___cert, ___verify_signature) \
      AROS_LC2(int, X509_self_signed, \
 AROS_LCA(X509 *, (___cert), A0), \
 AROS_LCA(int, (___verify_signature), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 204, Amisslext)

#define OPENSSL_hexstr2buf_ex(___buf, ___buf_n, ___buflen, ___str, ___sep) \
      AROS_LC5(int, OPENSSL_hexstr2buf_ex, \
 AROS_LCA(unsigned char *, (___buf), A0), \
 AROS_LCA(size_t, (___buf_n), D0), \
 AROS_LCA(size_t *, (___buflen), A1), \
 AROS_LCA(const char *, (___str), A2), \
 AROS_LCA(const char, (___sep), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 205, Amisslext)

#define OPENSSL_buf2hexstr_ex(___str, ___str_n, ___strlength, ___buf, ___buflen, ___sep) \
      AROS_LC6(int, OPENSSL_buf2hexstr_ex, \
 AROS_LCA(char *, (___str), A0), \
 AROS_LCA(size_t, (___str_n), D0), \
 AROS_LCA(size_t *, (___strlength), A1), \
 AROS_LCA(const unsigned char *, (___buf), A2), \
 AROS_LCA(size_t, (___buflen), D1), \
 AROS_LCA(const char, (___sep), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 206, Amisslext)

#define OSSL_PARAM_allocate_from_text(___to, ___paramdefs, ___key, ___value, ___value_n, ___found) \
      AROS_LC6(int, OSSL_PARAM_allocate_from_text, \
 AROS_LCA(OSSL_PARAM *, (___to), A0), \
 AROS_LCA(const OSSL_PARAM *, (___paramdefs), A1), \
 AROS_LCA(const char *, (___key), A2), \
 AROS_LCA(const char *, (___value), A3), \
 AROS_LCA(size_t, (___value_n), D0), \
 AROS_LCA(int *, (___found), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 207, Amisslext)

#define EVP_MD_gettable_params(___digest) \
      AROS_LC1(const OSSL_PARAM *, EVP_MD_gettable_params, \
 AROS_LCA(const EVP_MD *, (___digest), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 208, Amisslext)

#define EVP_MD_CTX_settable_params(___ctx) \
      AROS_LC1(const OSSL_PARAM *, EVP_MD_CTX_settable_params, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 209, Amisslext)

#define EVP_MD_CTX_gettable_params(___ctx) \
      AROS_LC1(const OSSL_PARAM *, EVP_MD_CTX_gettable_params, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 210, Amisslext)

#define EVP_CIPHER_get_params(___cipher, ___params) \
      AROS_LC2(int, EVP_CIPHER_get_params, \
 AROS_LCA(EVP_CIPHER *, (___cipher), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 211, Amisslext)

#define EVP_CIPHER_CTX_set_params(___ctx, ___params) \
      AROS_LC2(int, EVP_CIPHER_CTX_set_params, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 212, Amisslext)

#define EVP_CIPHER_CTX_get_params(___ctx, ___params) \
      AROS_LC2(int, EVP_CIPHER_CTX_get_params, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 213, Amisslext)

#define EVP_CIPHER_gettable_params(___cipher) \
      AROS_LC1(const OSSL_PARAM *, EVP_CIPHER_gettable_params, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 214, Amisslext)

#define EVP_CIPHER_settable_ctx_params(___cipher) \
      AROS_LC1(const OSSL_PARAM *, EVP_CIPHER_settable_ctx_params, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 215, Amisslext)

#define EVP_CIPHER_gettable_ctx_params(___cipher) \
      AROS_LC1(const OSSL_PARAM *, EVP_CIPHER_gettable_ctx_params, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 216, Amisslext)

#define EVP_MD_get_params(___digest, ___params) \
      AROS_LC2(int, EVP_MD_get_params, \
 AROS_LCA(const EVP_MD *, (___digest), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 217, Amisslext)

#define EVP_MAC_fetch(___libctx, ___algorithm, ___properties) \
      AROS_LC3(EVP_MAC *, EVP_MAC_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___algorithm), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 218, Amisslext)

#define EVP_MAC_settable_ctx_params(___mac) \
      AROS_LC1(const OSSL_PARAM *, EVP_MAC_settable_ctx_params, \
 AROS_LCA(const EVP_MAC *, (___mac), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 219, Amisslext)

#define EVP_MAC_CTX_set_params(___ctx, ___params) \
      AROS_LC2(int, EVP_MAC_CTX_set_params, \
 AROS_LCA(EVP_MAC_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 220, Amisslext)

#define EVP_MAC_CTX_get_params(___ctx, ___params) \
      AROS_LC2(int, EVP_MAC_CTX_get_params, \
 AROS_LCA(EVP_MAC_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 221, Amisslext)

#define EVP_MAC_gettable_ctx_params(___mac) \
      AROS_LC1(const OSSL_PARAM *, EVP_MAC_gettable_ctx_params, \
 AROS_LCA(const EVP_MAC *, (___mac), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 222, Amisslext)

#define EVP_MAC_free(___mac) \
      AROS_LC1(void, EVP_MAC_free, \
 AROS_LCA(EVP_MAC *, (___mac), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 223, Amisslext)

#define EVP_MAC_up_ref(___mac) \
      AROS_LC1(int, EVP_MAC_up_ref, \
 AROS_LCA(EVP_MAC *, (___mac), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 224, Amisslext)

#define EVP_MAC_get_params(___mac, ___params) \
      AROS_LC2(int, EVP_MAC_get_params, \
 AROS_LCA(EVP_MAC *, (___mac), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 225, Amisslext)

#define EVP_MAC_gettable_params(___mac) \
      AROS_LC1(const OSSL_PARAM *, EVP_MAC_gettable_params, \
 AROS_LCA(const EVP_MAC *, (___mac), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 226, Amisslext)

#define EVP_MAC_get0_provider(___mac) \
      AROS_LC1(const OSSL_PROVIDER *, EVP_MAC_get0_provider, \
 AROS_LCA(const EVP_MAC *, (___mac), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 227, Amisslext)

#define EVP_MAC_do_all_provided(___libctx, ___fn, ___arg) \
      AROS_LC3(void, EVP_MAC_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(EVP_MAC *mac,void *arg), (___fn), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 228, Amisslext)

#define EVP_MAC_get0_name(___mac) \
      AROS_LC1(const char *, EVP_MAC_get0_name, \
 AROS_LCA(const EVP_MAC *, (___mac), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 229, Amisslext)

#define EVP_MD_free(___md) \
      AROS_LC1(void, EVP_MD_free, \
 AROS_LCA(EVP_MD *, (___md), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 230, Amisslext)

#define EVP_CIPHER_free(___cipher) \
      AROS_LC1(void, EVP_CIPHER_free, \
 AROS_LCA(EVP_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 231, Amisslext)

#define EVP_KDF_up_ref(___kdf) \
      AROS_LC1(int, EVP_KDF_up_ref, \
 AROS_LCA(EVP_KDF *, (___kdf), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 232, Amisslext)

#define EVP_KDF_free(___kdf) \
      AROS_LC1(void, EVP_KDF_free, \
 AROS_LCA(EVP_KDF *, (___kdf), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 233, Amisslext)

#define EVP_KDF_fetch(___libctx, ___algorithm, ___properties) \
      AROS_LC3(EVP_KDF *, EVP_KDF_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___algorithm), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 234, Amisslext)

#define EVP_KDF_CTX_dup(___src) \
      AROS_LC1(EVP_KDF_CTX *, EVP_KDF_CTX_dup, \
 AROS_LCA(const EVP_KDF_CTX *, (___src), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 235, Amisslext)

#define EVP_KDF_get0_provider(___kdf) \
      AROS_LC1(const OSSL_PROVIDER *, EVP_KDF_get0_provider, \
 AROS_LCA(const EVP_KDF *, (___kdf), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 236, Amisslext)

#define EVP_KDF_get_params(___kdf, ___params) \
      AROS_LC2(int, EVP_KDF_get_params, \
 AROS_LCA(EVP_KDF *, (___kdf), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 237, Amisslext)

#define EVP_KDF_CTX_get_params(___ctx, ___params) \
      AROS_LC2(int, EVP_KDF_CTX_get_params, \
 AROS_LCA(EVP_KDF_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 238, Amisslext)

#define EVP_KDF_CTX_set_params(___ctx, ___params) \
      AROS_LC2(int, EVP_KDF_CTX_set_params, \
 AROS_LCA(EVP_KDF_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 239, Amisslext)

#define EVP_KDF_gettable_params(___kdf) \
      AROS_LC1(const OSSL_PARAM *, EVP_KDF_gettable_params, \
 AROS_LCA(const EVP_KDF *, (___kdf), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 240, Amisslext)

#define EVP_KDF_gettable_ctx_params(___kdf) \
      AROS_LC1(const OSSL_PARAM *, EVP_KDF_gettable_ctx_params, \
 AROS_LCA(const EVP_KDF *, (___kdf), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 241, Amisslext)

#define EVP_KDF_settable_ctx_params(___kdf) \
      AROS_LC1(const OSSL_PARAM *, EVP_KDF_settable_ctx_params, \
 AROS_LCA(const EVP_KDF *, (___kdf), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 242, Amisslext)

#define EVP_KDF_do_all_provided(___libctx, ___fn, ___arg) \
      AROS_LC3(void, EVP_KDF_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(EVP_KDF *kdf,void *arg), (___fn), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 243, Amisslext)

#define EVP_SIGNATURE_free(___signature) \
      AROS_LC1(void, EVP_SIGNATURE_free, \
 AROS_LCA(EVP_SIGNATURE *, (___signature), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 244, Amisslext)

#define EVP_SIGNATURE_up_ref(___signature) \
      AROS_LC1(int, EVP_SIGNATURE_up_ref, \
 AROS_LCA(EVP_SIGNATURE *, (___signature), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 245, Amisslext)

#define EVP_SIGNATURE_get0_provider(___signature) \
      AROS_LC1(OSSL_PROVIDER *, EVP_SIGNATURE_get0_provider, \
 AROS_LCA(const EVP_SIGNATURE *, (___signature), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 246, Amisslext)

#define EVP_SIGNATURE_fetch(___ctx, ___algorithm, ___properties) \
      AROS_LC3(EVP_SIGNATURE *, EVP_SIGNATURE_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___algorithm), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 247, Amisslext)

#define EVP_PKEY_CTX_set_signature_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_set_signature_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD *, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 248, Amisslext)

#define EVP_PKEY_CTX_get_signature_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_get_signature_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD **, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 249, Amisslext)

#define EVP_PKEY_CTX_get_params(___ctx, ___params) \
      AROS_LC2(int, EVP_PKEY_CTX_get_params, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 250, Amisslext)

#define EVP_PKEY_CTX_gettable_params(___ctx) \
      AROS_LC1(const OSSL_PARAM *, EVP_PKEY_CTX_gettable_params, \
 AROS_LCA(const EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 251, Amisslext)

#define EVP_PKEY_CTX_settable_params(___ctx) \
      AROS_LC1(const OSSL_PARAM *, EVP_PKEY_CTX_settable_params, \
 AROS_LCA(const EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 252, Amisslext)

#define EVP_CIPHER_CTX_get_tag_length(___ctx) \
      AROS_LC1(int, EVP_CIPHER_CTX_get_tag_length, \
 AROS_LCA(const EVP_CIPHER_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 253, Amisslext)

#define ERR_get_error_all(___file, ___line, ___func, ___data, ___flags) \
      AROS_LC5(unsigned long, ERR_get_error_all, \
 AROS_LCA(const char **, (___file), A0), \
 AROS_LCA(int *, (___line), A1), \
 AROS_LCA(const char **, (___func), A2), \
 AROS_LCA(const char **, (___data), A3), \
 AROS_LCA(int *, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 254, Amisslext)

#define ERR_peek_error_func(___func) \
      AROS_LC1(unsigned long, ERR_peek_error_func, \
 AROS_LCA(const char **, (___func), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 255, Amisslext)

#define ERR_peek_error_data(___data, ___flags) \
      AROS_LC2(unsigned long, ERR_peek_error_data, \
 AROS_LCA(const char **, (___data), A0), \
 AROS_LCA(int *, (___flags), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 256, Amisslext)

#define ERR_peek_error_all(___file, ___line, ___func, ___data, ___flags) \
      AROS_LC5(unsigned long, ERR_peek_error_all, \
 AROS_LCA(const char **, (___file), A0), \
 AROS_LCA(int *, (___line), A1), \
 AROS_LCA(const char **, (___func), A2), \
 AROS_LCA(const char **, (___data), A3), \
 AROS_LCA(int *, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 257, Amisslext)

#define ERR_peek_last_error_func(___func) \
      AROS_LC1(unsigned long, ERR_peek_last_error_func, \
 AROS_LCA(const char **, (___func), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 258, Amisslext)

#define ERR_peek_last_error_data(___data, ___flags) \
      AROS_LC2(unsigned long, ERR_peek_last_error_data, \
 AROS_LCA(const char **, (___data), A0), \
 AROS_LCA(int *, (___flags), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 259, Amisslext)

#define ERR_peek_last_error_all(___file, ___line, ___func, ___data, ___flags) \
      AROS_LC5(unsigned long, ERR_peek_last_error_all, \
 AROS_LCA(const char **, (___file), A0), \
 AROS_LCA(int *, (___line), A1), \
 AROS_LCA(const char **, (___func), A2), \
 AROS_LCA(const char **, (___data), A3), \
 AROS_LCA(int *, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 260, Amisslext)

#define EVP_CIPHER_is_a(___cipher, ___name) \
      AROS_LC2(int, EVP_CIPHER_is_a, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 261, Amisslext)

#define EVP_MAC_is_a(___mac, ___name) \
      AROS_LC2(int, EVP_MAC_is_a, \
 AROS_LCA(const EVP_MAC *, (___mac), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 262, Amisslext)

#define EVP_MD_settable_ctx_params(___md) \
      AROS_LC1(const OSSL_PARAM *, EVP_MD_settable_ctx_params, \
 AROS_LCA(const EVP_MD *, (___md), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 263, Amisslext)

#define EVP_MD_gettable_ctx_params(___md) \
      AROS_LC1(const OSSL_PARAM *, EVP_MD_gettable_ctx_params, \
 AROS_LCA(const EVP_MD *, (___md), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 264, Amisslext)

#define OSSL_CMP_CTX_new(___libctx, ___propq) \
      AROS_LC2(OSSL_CMP_CTX *, OSSL_CMP_CTX_new, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 265, Amisslext)

#define OSSL_CMP_CTX_free(___ctx) \
      AROS_LC1(void, OSSL_CMP_CTX_free, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 266, Amisslext)

#define OSSL_CMP_CTX_reinit(___ctx) \
      AROS_LC1(int, OSSL_CMP_CTX_reinit, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 267, Amisslext)

#define OSSL_CMP_CTX_set_option(___ctx, ___opt, ___val) \
      AROS_LC3(int, OSSL_CMP_CTX_set_option, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___opt), D0), \
 AROS_LCA(int, (___val), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 268, Amisslext)

#define OSSL_CMP_CTX_get_option(___ctx, ___opt) \
      AROS_LC2(int, OSSL_CMP_CTX_get_option, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___opt), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 269, Amisslext)

#define OSSL_CMP_CTX_set_log_cb(___ctx, ___cb) \
      AROS_LC2(int, OSSL_CMP_CTX_set_log_cb, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_CMP_log_cb_t, (___cb), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 270, Amisslext)

#define OSSL_CMP_CTX_print_errors(___ctx) \
      AROS_LC1(void, OSSL_CMP_CTX_print_errors, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 271, Amisslext)

#define OSSL_CMP_CTX_set1_serverPath(___ctx, ___path) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_serverPath, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___path), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 272, Amisslext)

#define OSSL_CMP_CTX_set1_server(___ctx, ___address) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_server, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___address), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 273, Amisslext)

#define OSSL_CMP_CTX_set_serverPort(___ctx, ___port) \
      AROS_LC2(int, OSSL_CMP_CTX_set_serverPort, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___port), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 274, Amisslext)

#define OSSL_CMP_CTX_set1_proxy(___ctx, ___name) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_proxy, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 275, Amisslext)

#define OSSL_CMP_CTX_set1_no_proxy(___ctx, ___names) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_no_proxy, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___names), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 276, Amisslext)

#define OSSL_CMP_CTX_set_http_cb(___ctx, ___cb) \
      AROS_LC2(int, OSSL_CMP_CTX_set_http_cb, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_HTTP_bio_cb_t, (___cb), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 277, Amisslext)

#define OSSL_CMP_CTX_set_http_cb_arg(___ctx, ___arg) \
      AROS_LC2(int, OSSL_CMP_CTX_set_http_cb_arg, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(void *, (___arg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 278, Amisslext)

#define OSSL_CMP_CTX_get_http_cb_arg(___ctx) \
      AROS_LC1(void *, OSSL_CMP_CTX_get_http_cb_arg, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 279, Amisslext)

#define OSSL_CMP_CTX_set_transfer_cb(___ctx, ___cb) \
      AROS_LC2(int, OSSL_CMP_CTX_set_transfer_cb, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_CMP_transfer_cb_t, (___cb), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 280, Amisslext)

#define OSSL_CMP_CTX_set_transfer_cb_arg(___ctx, ___arg) \
      AROS_LC2(int, OSSL_CMP_CTX_set_transfer_cb_arg, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(void *, (___arg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 281, Amisslext)

#define OSSL_CMP_CTX_get_transfer_cb_arg(___ctx) \
      AROS_LC1(void *, OSSL_CMP_CTX_get_transfer_cb_arg, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 282, Amisslext)

#define OSSL_CMP_CTX_set1_srvCert(___ctx, ___cert) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_srvCert, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(X509 *, (___cert), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 283, Amisslext)

#define OSSL_CMP_CTX_set1_expected_sender(___ctx, ___name) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_expected_sender, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const X509_NAME *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 284, Amisslext)

#define OSSL_CMP_CTX_set0_trustedStore(___ctx, ___store) \
      AROS_LC2(int, OSSL_CMP_CTX_set0_trustedStore, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(X509_STORE *, (___store), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 285, Amisslext)

#define OSSL_CMP_CTX_get0_trustedStore(___ctx) \
      AROS_LC1(X509_STORE *, OSSL_CMP_CTX_get0_trustedStore, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 286, Amisslext)

#define OSSL_CMP_CTX_set1_untrusted(___ctx, ___certs) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_untrusted, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(STACK_OF(X509) *, (___certs), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 287, Amisslext)

#define OSSL_CMP_CTX_get0_untrusted(___ctx) \
      AROS_LC1(STACK_OF(X509) *, OSSL_CMP_CTX_get0_untrusted, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 288, Amisslext)

#define OSSL_CMP_CTX_set1_cert(___ctx, ___cert) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_cert, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(X509 *, (___cert), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 289, Amisslext)

#define OSSL_CMP_CTX_set1_pkey(___ctx, ___pkey) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_pkey, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_PKEY *, (___pkey), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 290, Amisslext)

#define OSSL_CMP_CTX_build_cert_chain(___ctx, ___own_trusted, ___candidates) \
      AROS_LC3(int, OSSL_CMP_CTX_build_cert_chain, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(X509_STORE *, (___own_trusted), A1), \
 AROS_LCA(STACK_OF(X509) *, (___candidates), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 291, Amisslext)

#define OSSL_CMP_CTX_set1_referenceValue(___ctx, ___ref, ___len) \
      AROS_LC3(int, OSSL_CMP_CTX_set1_referenceValue, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___ref), A1), \
 AROS_LCA(int, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 292, Amisslext)

#define OSSL_CMP_CTX_set1_secretValue(___ctx, ___sec, ___len) \
      AROS_LC3(int, OSSL_CMP_CTX_set1_secretValue, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___sec), A1), \
 AROS_LCA(const int, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 293, Amisslext)

#define OSSL_CMP_CTX_set1_recipient(___ctx, ___name) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_recipient, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const X509_NAME *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 294, Amisslext)

#define OSSL_CMP_CTX_push0_geninfo_ITAV(___ctx, ___itav) \
      AROS_LC2(int, OSSL_CMP_CTX_push0_geninfo_ITAV, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_CMP_ITAV *, (___itav), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 295, Amisslext)

#define OSSL_CMP_CTX_set1_extraCertsOut(___ctx, ___extraCertsOut) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_extraCertsOut, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(STACK_OF(X509) *, (___extraCertsOut), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 296, Amisslext)

#define OSSL_CMP_CTX_set0_newPkey(___ctx, ___priv, ___pkey) \
      AROS_LC3(int, OSSL_CMP_CTX_set0_newPkey, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___priv), D0), \
 AROS_LCA(EVP_PKEY *, (___pkey), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 297, Amisslext)

#define OSSL_CMP_CTX_get0_newPkey(___ctx, ___priv) \
      AROS_LC2(EVP_PKEY *, OSSL_CMP_CTX_get0_newPkey, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___priv), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 298, Amisslext)

#define OSSL_CMP_CTX_set1_issuer(___ctx, ___name) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_issuer, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const X509_NAME *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 299, Amisslext)

#define OSSL_CMP_CTX_set1_subjectName(___ctx, ___name) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_subjectName, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const X509_NAME *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 300, Amisslext)

#define OSSL_CMP_CTX_push1_subjectAltName(___ctx, ___name) \
      AROS_LC2(int, OSSL_CMP_CTX_push1_subjectAltName, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const GENERAL_NAME *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 301, Amisslext)

#define OSSL_CMP_CTX_set0_reqExtensions(___ctx, ___exts) \
      AROS_LC2(int, OSSL_CMP_CTX_set0_reqExtensions, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(X509_EXTENSIONS *, (___exts), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 302, Amisslext)

#define OSSL_CMP_CTX_reqExtensions_have_SAN(___ctx) \
      AROS_LC1(int, OSSL_CMP_CTX_reqExtensions_have_SAN, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 303, Amisslext)

#define OSSL_CMP_CTX_push0_policy(___ctx, ___pinfo) \
      AROS_LC2(int, OSSL_CMP_CTX_push0_policy, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(POLICYINFO *, (___pinfo), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 304, Amisslext)

#define OSSL_CMP_CTX_set1_oldCert(___ctx, ___cert) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_oldCert, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(X509 *, (___cert), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 305, Amisslext)

#define OSSL_CMP_CTX_set1_p10CSR(___ctx, ___csr) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_p10CSR, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const X509_REQ *, (___csr), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 306, Amisslext)

#define OSSL_CMP_CTX_push0_genm_ITAV(___ctx, ___itav) \
      AROS_LC2(int, OSSL_CMP_CTX_push0_genm_ITAV, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_CMP_ITAV *, (___itav), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 307, Amisslext)

#define OSSL_CMP_CTX_set_certConf_cb(___ctx, ___cb) \
      AROS_LC2(int, OSSL_CMP_CTX_set_certConf_cb, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_CMP_certConf_cb_t, (___cb), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 308, Amisslext)

#define OSSL_CMP_CTX_set_certConf_cb_arg(___ctx, ___arg) \
      AROS_LC2(int, OSSL_CMP_CTX_set_certConf_cb_arg, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(void *, (___arg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 309, Amisslext)

#define OSSL_CMP_CTX_get_certConf_cb_arg(___ctx) \
      AROS_LC1(void *, OSSL_CMP_CTX_get_certConf_cb_arg, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 310, Amisslext)

#define OSSL_CMP_CTX_get_status(___ctx) \
      AROS_LC1(int, OSSL_CMP_CTX_get_status, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 311, Amisslext)

#define OSSL_CMP_CTX_get0_statusString(___ctx) \
      AROS_LC1(OSSL_CMP_PKIFREETEXT *, OSSL_CMP_CTX_get0_statusString, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 312, Amisslext)

#define OSSL_CMP_CTX_get_failInfoCode(___ctx) \
      AROS_LC1(int, OSSL_CMP_CTX_get_failInfoCode, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 313, Amisslext)

#define OSSL_CMP_CTX_get0_newCert(___ctx) \
      AROS_LC1(X509 *, OSSL_CMP_CTX_get0_newCert, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 314, Amisslext)

#define OSSL_CMP_CTX_get1_newChain(___ctx) \
      AROS_LC1(STACK_OF(X509) *, OSSL_CMP_CTX_get1_newChain, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 315, Amisslext)

#define OSSL_CMP_CTX_get1_caPubs(___ctx) \
      AROS_LC1(STACK_OF(X509) *, OSSL_CMP_CTX_get1_caPubs, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 316, Amisslext)

#define OSSL_CMP_CTX_get1_extraCertsIn(___ctx) \
      AROS_LC1(STACK_OF(X509) *, OSSL_CMP_CTX_get1_extraCertsIn, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 317, Amisslext)

#define OSSL_CMP_CTX_set1_transactionID(___ctx, ___id) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_transactionID, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const ASN1_OCTET_STRING *, (___id), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 318, Amisslext)

#define OSSL_CMP_CTX_set1_senderNonce(___ctx, ___nonce) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_senderNonce, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const ASN1_OCTET_STRING *, (___nonce), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 319, Amisslext)

#define OSSL_CMP_log_open() \
      AROS_LC0(int, OSSL_CMP_log_open, \
     struct Library *, AMISSLEXT_BASE_NAME, 320, Amisslext)

#define OSSL_CMP_log_close() \
      AROS_LC0(void, OSSL_CMP_log_close, \
     struct Library *, AMISSLEXT_BASE_NAME, 321, Amisslext)

#define OSSL_CMP_print_to_bio(___bio, ___component, ___file, ___line, ___level, ___msg) \
      AROS_LC6(int, OSSL_CMP_print_to_bio, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(const char *, (___component), A1), \
 AROS_LCA(const char *, (___file), A2), \
 AROS_LCA(int, (___line), D0), \
 AROS_LCA(OSSL_CMP_severity, (___level), D1), \
 AROS_LCA(const char *, (___msg), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 322, Amisslext)

#define OSSL_CMP_print_errors_cb(___log_fn) \
      AROS_LC1(void, OSSL_CMP_print_errors_cb, \
 AROS_LCA(OSSL_CMP_log_cb_t, (___log_fn), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 323, Amisslext)

#define OSSL_CRMF_CERTID_get0_issuer(___cid) \
      AROS_LC1(const X509_NAME *, OSSL_CRMF_CERTID_get0_issuer, \
 AROS_LCA(const OSSL_CRMF_CERTID *, (___cid), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 324, Amisslext)

#define OSSL_CRMF_CERTID_get0_serialNumber(___cid) \
      AROS_LC1(const ASN1_INTEGER *, OSSL_CRMF_CERTID_get0_serialNumber, \
 AROS_LCA(const OSSL_CRMF_CERTID *, (___cid), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 325, Amisslext)

#define EVP_DigestSignUpdate(___ctx, ___data, ___dsize) \
      AROS_LC3(int, EVP_DigestSignUpdate, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
 AROS_LCA(const void *, (___data), A1), \
 AROS_LCA(size_t, (___dsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 326, Amisslext)

#define EVP_DigestVerifyUpdate(___ctx, ___data, ___dsize) \
      AROS_LC3(int, EVP_DigestVerifyUpdate, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
 AROS_LCA(const void *, (___data), A1), \
 AROS_LCA(size_t, (___dsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 327, Amisslext)

#define BN_check_prime(___p, ___ctx, ___cb) \
      AROS_LC3(int, BN_check_prime, \
 AROS_LCA(const BIGNUM *, (___p), A0), \
 AROS_LCA(BN_CTX *, (___ctx), A1), \
 AROS_LCA(BN_GENCB *, (___cb), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 328, Amisslext)

#define EVP_KEYMGMT_is_a(___keymgmt, ___name) \
      AROS_LC2(int, EVP_KEYMGMT_is_a, \
 AROS_LCA(const EVP_KEYMGMT *, (___keymgmt), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 329, Amisslext)

#define EVP_KEYMGMT_do_all_provided(___libctx, ___fn, ___arg) \
      AROS_LC3(void, EVP_KEYMGMT_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(EVP_KEYMGMT *keymgmt,void *arg), (___fn), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 330, Amisslext)

#define EVP_KEYEXCH_is_a(___keyexch, ___name) \
      AROS_LC2(int, EVP_KEYEXCH_is_a, \
 AROS_LCA(const EVP_KEYEXCH *, (___keyexch), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 331, Amisslext)

#define EVP_KEYEXCH_do_all_provided(___libctx, ___fn, ___data) \
      AROS_LC3(void, EVP_KEYEXCH_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(EVP_KEYEXCH *keyexch,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 332, Amisslext)

#define EVP_KDF_is_a(___kdf, ___name) \
      AROS_LC2(int, EVP_KDF_is_a, \
 AROS_LCA(const EVP_KDF *, (___kdf), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 333, Amisslext)

#define EVP_MD_is_a(___md, ___name) \
      AROS_LC2(int, EVP_MD_is_a, \
 AROS_LCA(const EVP_MD *, (___md), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 334, Amisslext)

#define EVP_SIGNATURE_is_a(___signature, ___name) \
      AROS_LC2(int, EVP_SIGNATURE_is_a, \
 AROS_LCA(const EVP_SIGNATURE *, (___signature), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 335, Amisslext)

#define EVP_SIGNATURE_do_all_provided(___libctx, ___fn, ___data) \
      AROS_LC3(void, EVP_SIGNATURE_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(EVP_SIGNATURE *signature,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 336, Amisslext)

#define EVP_MD_names_do_all(___md, ___fn, ___data) \
      AROS_LC3(int, EVP_MD_names_do_all, \
 AROS_LCA(const EVP_MD *, (___md), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 337, Amisslext)

#define EVP_CIPHER_names_do_all(___cipher, ___fn, ___data) \
      AROS_LC3(int, EVP_CIPHER_names_do_all, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 338, Amisslext)

#define EVP_MAC_names_do_all(___mac, ___fn, ___data) \
      AROS_LC3(int, EVP_MAC_names_do_all, \
 AROS_LCA(const EVP_MAC *, (___mac), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 339, Amisslext)

#define EVP_KEYMGMT_names_do_all(___keymgmt, ___fn, ___data) \
      AROS_LC3(int, EVP_KEYMGMT_names_do_all, \
 AROS_LCA(const EVP_KEYMGMT *, (___keymgmt), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 340, Amisslext)

#define EVP_KEYEXCH_names_do_all(___keyexch, ___fn, ___data) \
      AROS_LC3(int, EVP_KEYEXCH_names_do_all, \
 AROS_LCA(const EVP_KEYEXCH *, (___keyexch), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 341, Amisslext)

#define EVP_KDF_names_do_all(___kdf, ___fn, ___data) \
      AROS_LC3(int, EVP_KDF_names_do_all, \
 AROS_LCA(const EVP_KDF *, (___kdf), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 342, Amisslext)

#define EVP_SIGNATURE_names_do_all(___signature, ___fn, ___data) \
      AROS_LC3(int, EVP_SIGNATURE_names_do_all, \
 AROS_LCA(const EVP_SIGNATURE *, (___signature), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 343, Amisslext)

#define OSSL_CMP_CTX_snprint_PKIStatus(___ctx, ___buf, ___bufsize) \
      AROS_LC3(char *, OSSL_CMP_CTX_snprint_PKIStatus, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(char *, (___buf), A1), \
 AROS_LCA(size_t, (___bufsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 344, Amisslext)

#define OSSL_CMP_HDR_get0_transactionID(___hdr) \
      AROS_LC1(ASN1_OCTET_STRING *, OSSL_CMP_HDR_get0_transactionID, \
 AROS_LCA(const OSSL_CMP_PKIHEADER *, (___hdr), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 345, Amisslext)

#define OSSL_CMP_HDR_get0_recipNonce(___hdr) \
      AROS_LC1(ASN1_OCTET_STRING *, OSSL_CMP_HDR_get0_recipNonce, \
 AROS_LCA(const OSSL_CMP_PKIHEADER *, (___hdr), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 346, Amisslext)

#define X509_LOOKUP_store() \
      AROS_LC0(X509_LOOKUP_METHOD *, X509_LOOKUP_store, \
     struct Library *, AMISSLEXT_BASE_NAME, 347, Amisslext)

#define X509_add_cert(___sk, ___cert, ___flags) \
      AROS_LC3(int, X509_add_cert, \
 AROS_LCA(STACK_OF(X509) *, (___sk), A0), \
 AROS_LCA(X509 *, (___cert), A1), \
 AROS_LCA(int, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 348, Amisslext)

#define X509_add_certs(___sk, ___certs, ___flags) \
      AROS_LC3(int, X509_add_certs, \
 AROS_LCA(STACK_OF(X509) *, (___sk), A0), \
 AROS_LCA(STACK_OF(X509) *, (___certs), A1), \
 AROS_LCA(int, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 349, Amisslext)

#define X509_STORE_load_file(___xs, ___file) \
      AROS_LC2(int, X509_STORE_load_file, \
 AROS_LCA(X509_STORE *, (___xs), A0), \
 AROS_LCA(const char *, (___file), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 350, Amisslext)

#define X509_STORE_load_path(___xs, ___path) \
      AROS_LC2(int, X509_STORE_load_path, \
 AROS_LCA(X509_STORE *, (___xs), A0), \
 AROS_LCA(const char *, (___path), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 351, Amisslext)

#define X509_STORE_load_store(___xs, ___store) \
      AROS_LC2(int, X509_STORE_load_store, \
 AROS_LCA(X509_STORE *, (___xs), A0), \
 AROS_LCA(const char *, (___store), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 352, Amisslext)

#define EVP_PKEY_fromdata(___ctx, ___ppkey, ___selection, ___params) \
      AROS_LC4(int, EVP_PKEY_fromdata, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_PKEY **, (___ppkey), A1), \
 AROS_LCA(int, (___selection), D0), \
 AROS_LCA(OSSL_PARAM *, (___params), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 353, Amisslext)

#define EVP_ASYM_CIPHER_free(___cipher) \
      AROS_LC1(void, EVP_ASYM_CIPHER_free, \
 AROS_LCA(EVP_ASYM_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 354, Amisslext)

#define EVP_ASYM_CIPHER_up_ref(___cipher) \
      AROS_LC1(int, EVP_ASYM_CIPHER_up_ref, \
 AROS_LCA(EVP_ASYM_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 355, Amisslext)

#define EVP_ASYM_CIPHER_get0_provider(___cipher) \
      AROS_LC1(OSSL_PROVIDER *, EVP_ASYM_CIPHER_get0_provider, \
 AROS_LCA(const EVP_ASYM_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 356, Amisslext)

#define EVP_ASYM_CIPHER_fetch(___ctx, ___algorithm, ___properties) \
      AROS_LC3(EVP_ASYM_CIPHER *, EVP_ASYM_CIPHER_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___algorithm), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 357, Amisslext)

#define EVP_ASYM_CIPHER_is_a(___cipher, ___name) \
      AROS_LC2(int, EVP_ASYM_CIPHER_is_a, \
 AROS_LCA(const EVP_ASYM_CIPHER *, (___cipher), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 358, Amisslext)

#define EVP_ASYM_CIPHER_do_all_provided(___libctx, ___fn, ___arg) \
      AROS_LC3(void, EVP_ASYM_CIPHER_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(EVP_ASYM_CIPHER *cipher,void *arg), (___fn), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 359, Amisslext)

#define EVP_ASYM_CIPHER_names_do_all(___cipher, ___fn, ___data) \
      AROS_LC3(int, EVP_ASYM_CIPHER_names_do_all, \
 AROS_LCA(const EVP_ASYM_CIPHER *, (___cipher), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 360, Amisslext)

#define EVP_PKEY_CTX_set_rsa_padding(___ctx, ___pad_mode) \
      AROS_LC2(int, EVP_PKEY_CTX_set_rsa_padding, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___pad_mode), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 361, Amisslext)

#define EVP_PKEY_CTX_get_rsa_padding(___ctx, ___pad_mode) \
      AROS_LC2(int, EVP_PKEY_CTX_get_rsa_padding, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int *, (___pad_mode), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 362, Amisslext)

#define EVP_PKEY_CTX_set_rsa_mgf1_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_set_rsa_mgf1_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD *, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 363, Amisslext)

#define EVP_PKEY_CTX_set_rsa_mgf1_md_name(___ctx, ___mdname, ___mdprops) \
      AROS_LC3(int, EVP_PKEY_CTX_set_rsa_mgf1_md_name, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___mdname), A1), \
 AROS_LCA(const char *, (___mdprops), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 364, Amisslext)

#define EVP_PKEY_CTX_get_rsa_mgf1_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_get_rsa_mgf1_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD **, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 365, Amisslext)

#define EVP_PKEY_CTX_set_rsa_oaep_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_set_rsa_oaep_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD *, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 366, Amisslext)

#define EVP_PKEY_CTX_set_rsa_oaep_md_name(___ctx, ___mdname, ___mdprops) \
      AROS_LC3(int, EVP_PKEY_CTX_set_rsa_oaep_md_name, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___mdname), A1), \
 AROS_LCA(const char *, (___mdprops), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 367, Amisslext)

#define EVP_PKEY_CTX_get_rsa_oaep_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_get_rsa_oaep_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD **, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 368, Amisslext)

#define EVP_PKEY_CTX_set0_rsa_oaep_label(___ctx, ___label, ___llen) \
      AROS_LC3(int, EVP_PKEY_CTX_set0_rsa_oaep_label, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(void *, (___label), A1), \
 AROS_LCA(int, (___llen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 369, Amisslext)

#define EVP_PKEY_CTX_get0_rsa_oaep_label(___ctx, ___label) \
      AROS_LC2(int, EVP_PKEY_CTX_get0_rsa_oaep_label, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char **, (___label), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 370, Amisslext)

#define EVP_PKEY_CTX_get_rsa_mgf1_md_name(___ctx, ___name, ___namelen) \
      AROS_LC3(int, EVP_PKEY_CTX_get_rsa_mgf1_md_name, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(char *, (___name), A1), \
 AROS_LCA(size_t, (___namelen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 371, Amisslext)

#define EVP_PKEY_CTX_get_rsa_oaep_md_name(___ctx, ___name, ___namelen) \
      AROS_LC3(int, EVP_PKEY_CTX_get_rsa_oaep_md_name, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(char *, (___name), A1), \
 AROS_LCA(size_t, (___namelen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 372, Amisslext)

#define OSSL_ENCODER_up_ref(___encoder) \
      AROS_LC1(int, OSSL_ENCODER_up_ref, \
 AROS_LCA(OSSL_ENCODER *, (___encoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 373, Amisslext)

#define OSSL_ENCODER_free(___encoder) \
      AROS_LC1(void, OSSL_ENCODER_free, \
 AROS_LCA(OSSL_ENCODER *, (___encoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 374, Amisslext)

#define OSSL_ENCODER_fetch(___libctx, ___name, ___properties) \
      AROS_LC3(OSSL_ENCODER *, OSSL_ENCODER_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 375, Amisslext)

#define OSSL_ENCODER_is_a(___encoder, ___name) \
      AROS_LC2(int, OSSL_ENCODER_is_a, \
 AROS_LCA(const OSSL_ENCODER *, (___encoder), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 376, Amisslext)

#define OSSL_ENCODER_get0_provider(___encoder) \
      AROS_LC1(const OSSL_PROVIDER *, OSSL_ENCODER_get0_provider, \
 AROS_LCA(const OSSL_ENCODER *, (___encoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 377, Amisslext)

#define OSSL_ENCODER_do_all_provided(___libctx, ___fn, ___arg) \
      AROS_LC3(void, OSSL_ENCODER_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(OSSL_ENCODER *encoder,void *arg), (___fn), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 378, Amisslext)

#define OSSL_ENCODER_names_do_all(___encoder, ___fn, ___data) \
      AROS_LC3(int, OSSL_ENCODER_names_do_all, \
 AROS_LCA(const OSSL_ENCODER *, (___encoder), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 379, Amisslext)

#define OSSL_ENCODER_settable_ctx_params(___encoder) \
      AROS_LC1(const OSSL_PARAM *, OSSL_ENCODER_settable_ctx_params, \
 AROS_LCA(OSSL_ENCODER *, (___encoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 380, Amisslext)

#define OSSL_ENCODER_CTX_new() \
      AROS_LC0(OSSL_ENCODER_CTX *, OSSL_ENCODER_CTX_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 381, Amisslext)

#define OSSL_ENCODER_CTX_set_params(___ctx, ___params) \
      AROS_LC2(int, OSSL_ENCODER_CTX_set_params, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 382, Amisslext)

#define OSSL_ENCODER_CTX_free(___ctx) \
      AROS_LC1(void, OSSL_ENCODER_CTX_free, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 383, Amisslext)

#define OSSL_ENCODER_get0_properties(___encoder) \
      AROS_LC1(const char *, OSSL_ENCODER_get0_properties, \
 AROS_LCA(const OSSL_ENCODER *, (___encoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 384, Amisslext)

#define OSSL_ENCODER_to_bio(___ctx, ___out) \
      AROS_LC2(int, OSSL_ENCODER_to_bio, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(BIO *, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 385, Amisslext)

#define OSSL_ENCODER_CTX_new_for_pkey(___pkey, ___selection, ___output_type, ___output_struct, ___propquery) \
      AROS_LC5(OSSL_ENCODER_CTX *, OSSL_ENCODER_CTX_new_for_pkey, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(int, (___selection), D0), \
 AROS_LCA(const char *, (___output_type), A1), \
 AROS_LCA(const char *, (___output_struct), A2), \
 AROS_LCA(const char *, (___propquery), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 386, Amisslext)

#define OSSL_ENCODER_CTX_set_cipher(___ctx, ___cipher_name, ___propquery) \
      AROS_LC3(int, OSSL_ENCODER_CTX_set_cipher, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___cipher_name), A1), \
 AROS_LCA(const char *, (___propquery), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 387, Amisslext)

#define OSSL_ENCODER_CTX_set_passphrase(___ctx, ___kstr, ___klen) \
      AROS_LC3(int, OSSL_ENCODER_CTX_set_passphrase, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___kstr), A1), \
 AROS_LCA(size_t, (___klen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 388, Amisslext)

#define OSSL_ENCODER_CTX_set_pem_password_cb(___ctx, ___cb, ___cbarg) \
      AROS_LC3(int, OSSL_ENCODER_CTX_set_pem_password_cb, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(pem_password_cb *, (___cb), A1), \
 AROS_LCA(void *, (___cbarg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 389, Amisslext)

#define OSSL_ENCODER_CTX_set_passphrase_ui(___ctx, ___ui_method, ___ui_data) \
      AROS_LC3(int, OSSL_ENCODER_CTX_set_passphrase_ui, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(const UI_METHOD *, (___ui_method), A1), \
 AROS_LCA(void *, (___ui_data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 390, Amisslext)

#define PEM_read_bio_X509_PUBKEY(___out, ___x, ___cb, ___u) \
      AROS_LC4(X509_PUBKEY *, PEM_read_bio_X509_PUBKEY, \
 AROS_LCA(BIO *, (___out), A0), \
 AROS_LCA(X509_PUBKEY **, (___x), A1), \
 AROS_LCA(pem_password_cb *, (___cb), A2), \
 AROS_LCA(void *, (___u), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 391, Amisslext)

#define PEM_write_bio_X509_PUBKEY(___out, ___x) \
      AROS_LC2(int, PEM_write_bio_X509_PUBKEY, \
 AROS_LCA(BIO *, (___out), A0), \
 AROS_LCA(const X509_PUBKEY *, (___x), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 392, Amisslext)

#define d2i_X509_PUBKEY_bio(___bp, ___xpk) \
      AROS_LC2(X509_PUBKEY *, d2i_X509_PUBKEY_bio, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(X509_PUBKEY **, (___xpk), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 393, Amisslext)

#define i2d_X509_PUBKEY_bio(___bp, ___xpk) \
      AROS_LC2(int, i2d_X509_PUBKEY_bio, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(const X509_PUBKEY *, (___xpk), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 394, Amisslext)

#define X509_cmp_timeframe(___vpm, ___start, ___end) \
      AROS_LC3(int, X509_cmp_timeframe, \
 AROS_LCA(const X509_VERIFY_PARAM *, (___vpm), A0), \
 AROS_LCA(const ASN1_TIME *, (___start), A1), \
 AROS_LCA(const ASN1_TIME *, (___end), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 395, Amisslext)

#define OSSL_CMP_MSG_get0_header(___msg) \
      AROS_LC1(OSSL_CMP_PKIHEADER *, OSSL_CMP_MSG_get0_header, \
 AROS_LCA(const OSSL_CMP_MSG *, (___msg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 396, Amisslext)

#define OSSL_CMP_MSG_get_bodytype(___msg) \
      AROS_LC1(int, OSSL_CMP_MSG_get_bodytype, \
 AROS_LCA(const OSSL_CMP_MSG *, (___msg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 397, Amisslext)

#define OSSL_CMP_MSG_update_transactionID(___ctx, ___msg) \
      AROS_LC2(int, OSSL_CMP_MSG_update_transactionID, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_CMP_MSG *, (___msg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 398, Amisslext)

#define OSSL_CMP_CTX_setup_CRM(___ctx, ___for_KUR, ___rid) \
      AROS_LC3(OSSL_CRMF_MSG *, OSSL_CMP_CTX_setup_CRM, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___for_KUR), D0), \
 AROS_LCA(int, (___rid), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 399, Amisslext)

#define BIO_f_prefix() \
      AROS_LC0(const BIO_METHOD *, BIO_f_prefix, \
     struct Library *, AMISSLEXT_BASE_NAME, 400, Amisslext)

#define EVP_PKEY_CTX_new_from_name(___libctx, ___name, ___propquery) \
      AROS_LC3(EVP_PKEY_CTX *, EVP_PKEY_CTX_new_from_name, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(const char *, (___propquery), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 401, Amisslext)

#define EVP_PKEY_CTX_new_from_pkey(___libctx, ___pkey, ___propquery) \
      AROS_LC3(EVP_PKEY_CTX *, EVP_PKEY_CTX_new_from_pkey, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(EVP_PKEY *, (___pkey), A1), \
 AROS_LCA(const char *, (___propquery), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 402, Amisslext)

#define OSSL_SELF_TEST_set_callback(___libctx, ___cb, ___cbarg) \
      AROS_LC3(void, OSSL_SELF_TEST_set_callback, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(OSSL_CALLBACK *, (___cb), A1), \
 AROS_LCA(void *, (___cbarg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 403, Amisslext)

#define OSSL_SELF_TEST_get_callback(___libctx, ___cb, ___cbarg) \
      AROS_LC3(void, OSSL_SELF_TEST_get_callback, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(OSSL_CALLBACK **, (___cb), A1), \
 AROS_LCA(void **, (___cbarg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 404, Amisslext)

#define ASN1_TIME_dup(___a) \
      AROS_LC1(ASN1_TIME *, ASN1_TIME_dup, \
 AROS_LCA(const ASN1_TIME *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 405, Amisslext)

#define ASN1_UTCTIME_dup(___a) \
      AROS_LC1(ASN1_UTCTIME *, ASN1_UTCTIME_dup, \
 AROS_LCA(const ASN1_UTCTIME *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 406, Amisslext)

#define ASN1_GENERALIZEDTIME_dup(___a) \
      AROS_LC1(ASN1_GENERALIZEDTIME *, ASN1_GENERALIZEDTIME_dup, \
 AROS_LCA(const ASN1_GENERALIZEDTIME *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 407, Amisslext)

#define RAND_priv_bytes_ex(___ctx, ___buf, ___num, ___strength) \
      AROS_LC4(int, RAND_priv_bytes_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___buf), A1), \
 AROS_LCA(size_t, (___num), D0), \
 AROS_LCA(unsigned int, (___strength), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 408, Amisslext)

#define RAND_bytes_ex(___ctx, ___buf, ___num, ___strength) \
      AROS_LC4(int, RAND_bytes_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___buf), A1), \
 AROS_LCA(size_t, (___num), D0), \
 AROS_LCA(unsigned int, (___strength), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 409, Amisslext)

#define EVP_PKEY_get_default_digest_name(___pkey, ___mdname, ___mdname_sz) \
      AROS_LC3(int, EVP_PKEY_get_default_digest_name, \
 AROS_LCA(EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(char *, (___mdname), A1), \
 AROS_LCA(size_t, (___mdname_sz), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 410, Amisslext)

#define CMS_decrypt_set1_pkey_and_peer(___cms, ___pk, ___cert, ___peer) \
      AROS_LC4(int, CMS_decrypt_set1_pkey_and_peer, \
 AROS_LCA(CMS_ContentInfo *, (___cms), A0), \
 AROS_LCA(EVP_PKEY *, (___pk), A1), \
 AROS_LCA(X509 *, (___cert), A2), \
 AROS_LCA(X509 *, (___peer), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 411, Amisslext)

#define CMS_add1_recipient(___cms, ___recip, ___originatorPrivKey, ___originator, ___flags) \
      AROS_LC5(CMS_RecipientInfo *, CMS_add1_recipient, \
 AROS_LCA(CMS_ContentInfo *, (___cms), A0), \
 AROS_LCA(X509 *, (___recip), A1), \
 AROS_LCA(EVP_PKEY *, (___originatorPrivKey), A2), \
 AROS_LCA(X509 *, (___originator), A3), \
 AROS_LCA(unsigned int, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 412, Amisslext)

#define CMS_RecipientInfo_kari_set0_pkey_and_peer(___ri, ___pk, ___peer) \
      AROS_LC3(int, CMS_RecipientInfo_kari_set0_pkey_and_peer, \
 AROS_LCA(CMS_RecipientInfo *, (___ri), A0), \
 AROS_LCA(EVP_PKEY *, (___pk), A1), \
 AROS_LCA(X509 *, (___peer), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 413, Amisslext)

#define PKCS8_pkey_add1_attr(___p8, ___attr) \
      AROS_LC2(int, PKCS8_pkey_add1_attr, \
 AROS_LCA(PKCS8_PRIV_KEY_INFO *, (___p8), A0), \
 AROS_LCA(X509_ATTRIBUTE *, (___attr), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 414, Amisslext)

#define PKCS8_pkey_add1_attr_by_OBJ(___p8, ___obj, ___type, ___bytes, ___len) \
      AROS_LC5(int, PKCS8_pkey_add1_attr_by_OBJ, \
 AROS_LCA(PKCS8_PRIV_KEY_INFO *, (___p8), A0), \
 AROS_LCA(const ASN1_OBJECT *, (___obj), A1), \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(const unsigned char *, (___bytes), A2), \
 AROS_LCA(int, (___len), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 415, Amisslext)

#define EVP_PKEY_private_check(___ctx) \
      AROS_LC1(int, EVP_PKEY_private_check, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 416, Amisslext)

#define EVP_PKEY_pairwise_check(___ctx) \
      AROS_LC1(int, EVP_PKEY_pairwise_check, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 417, Amisslext)

#define ASN1_item_verify_ctx(___it, ___alg, ___signature, ___data, ___ctx) \
      AROS_LC5(int, ASN1_item_verify_ctx, \
 AROS_LCA(const ASN1_ITEM *, (___it), A0), \
 AROS_LCA(const X509_ALGOR *, (___alg), A1), \
 AROS_LCA(const ASN1_BIT_STRING *, (___signature), A2), \
 AROS_LCA(const void *, (___data), A3), \
 AROS_LCA(EVP_MD_CTX *, (___ctx), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 418, Amisslext)

#define ASN1_item_sign_ex(___it, ___algor1, ___algor2, ___signature, ___data, ___id, ___pkey, ___md, ___libctx, ___propq) \
      AROS_LC10(int, ASN1_item_sign_ex, \
 AROS_LCA(const ASN1_ITEM *, (___it), A0), \
 AROS_LCA(X509_ALGOR *, (___algor1), A1), \
 AROS_LCA(X509_ALGOR *, (___algor2), A2), \
 AROS_LCA(ASN1_BIT_STRING *, (___signature), A3), \
 AROS_LCA(const void *, (___data), D0), \
 AROS_LCA(const ASN1_OCTET_STRING *, (___id), D1), \
 AROS_LCA(EVP_PKEY *, (___pkey), D2), \
 AROS_LCA(const EVP_MD *, (___md), D3), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D4), \
 AROS_LCA(const char *, (___propq), D5), \
     struct Library *, AMISSLEXT_BASE_NAME, 419, Amisslext)

#define ASN1_item_verify_ex(___it, ___alg, ___signature, ___data, ___id, ___pkey, ___libctx, ___propq) \
      AROS_LC8(int, ASN1_item_verify_ex, \
 AROS_LCA(const ASN1_ITEM *, (___it), A0), \
 AROS_LCA(const X509_ALGOR *, (___alg), A1), \
 AROS_LCA(const ASN1_BIT_STRING *, (___signature), A2), \
 AROS_LCA(const void *, (___data), A3), \
 AROS_LCA(const ASN1_OCTET_STRING *, (___id), D0), \
 AROS_LCA(EVP_PKEY *, (___pkey), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D2), \
 AROS_LCA(const char *, (___propq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 420, Amisslext)

#define BIO_socket_wait(___fd, ___for_read, ___max_time) \
      AROS_LC3(int, BIO_socket_wait, \
 AROS_LCA(int, (___fd), D0), \
 AROS_LCA(int, (___for_read), D1), \
 AROS_LCA(time_t, (___max_time), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 421, Amisslext)

#define BIO_wait(___bio, ___max_time, ___nap_milliseconds) \
      AROS_LC3(int, BIO_wait, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(time_t, (___max_time), D0), \
 AROS_LCA(unsigned int, (___nap_milliseconds), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 422, Amisslext)

#define BIO_do_connect_retry(___bio, ___timeout, ___nap_milliseconds) \
      AROS_LC3(int, BIO_do_connect_retry, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(int, (___timeout), D0), \
 AROS_LCA(int, (___nap_milliseconds), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 423, Amisslext)

#define OSSL_parse_url(___url, ___pscheme, ___puser, ___phost, ___pport, ___pport_num, ___ppath, ___pquery, ___pfrag) \
      AROS_LC9(int, OSSL_parse_url, \
 AROS_LCA(const char *, (___url), A0), \
 AROS_LCA(char **, (___pscheme), A1), \
 AROS_LCA(char **, (___puser), A2), \
 AROS_LCA(char **, (___phost), A3), \
 AROS_LCA(char **, (___pport), D0), \
 AROS_LCA(int *, (___pport_num), D1), \
 AROS_LCA(char **, (___ppath), D2), \
 AROS_LCA(char **, (___pquery), D3), \
 AROS_LCA(char **, (___pfrag), D4), \
     struct Library *, AMISSLEXT_BASE_NAME, 424, Amisslext)

#define OSSL_HTTP_adapt_proxy(___proxy, ___no_proxy, ___server, ___use_ssl) \
      AROS_LC4(const char *, OSSL_HTTP_adapt_proxy, \
 AROS_LCA(const char *, (___proxy), A0), \
 AROS_LCA(const char *, (___no_proxy), A1), \
 AROS_LCA(const char *, (___server), A2), \
 AROS_LCA(int, (___use_ssl), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 425, Amisslext)

#define OSSL_HTTP_REQ_CTX_get_resp_len(___rctx) \
      AROS_LC1(size_t, OSSL_HTTP_REQ_CTX_get_resp_len, \
 AROS_LCA(const OSSL_HTTP_REQ_CTX *, (___rctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 426, Amisslext)

#define OSSL_HTTP_REQ_CTX_set_expected(___rctx, ___content_type, ___asn1, ___timeout, ___keep_alive) \
      AROS_LC5(int, OSSL_HTTP_REQ_CTX_set_expected, \
 AROS_LCA(OSSL_HTTP_REQ_CTX *, (___rctx), A0), \
 AROS_LCA(const char *, (___content_type), A1), \
 AROS_LCA(int, (___asn1), D0), \
 AROS_LCA(int, (___timeout), D1), \
 AROS_LCA(int, (___keep_alive), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 427, Amisslext)

#define OSSL_HTTP_is_alive(___rctx) \
      AROS_LC1(int, OSSL_HTTP_is_alive, \
 AROS_LCA(const OSSL_HTTP_REQ_CTX *, (___rctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 428, Amisslext)

#define OSSL_HTTP_open(___server, ___port, ___proxy, ___no_proxy, ___use_ssl, ___bio, ___rbio, ___bio_update_fn, ___arg, ___buf_size, ___overall_timeout) \
      AROS_LC11(OSSL_HTTP_REQ_CTX *, OSSL_HTTP_open, \
 AROS_LCA(const char *, (___server), A0), \
 AROS_LCA(const char *, (___port), A1), \
 AROS_LCA(const char *, (___proxy), A2), \
 AROS_LCA(const char *, (___no_proxy), A3), \
 AROS_LCA(int, (___use_ssl), D0), \
 AROS_LCA(BIO *, (___bio), D1), \
 AROS_LCA(BIO *, (___rbio), D2), \
 AROS_LCA(OSSL_HTTP_bio_cb_t, (___bio_update_fn), D3), \
 AROS_LCA(void *, (___arg), D4), \
 AROS_LCA(int, (___buf_size), D5), \
 AROS_LCA(int, (___overall_timeout), D6), \
     struct Library *, AMISSLEXT_BASE_NAME, 429, Amisslext)

#define OSSL_HTTP_proxy_connect(___bio, ___server, ___port, ___proxyuser, ___proxypass, ___timeout, ___bio_err, ___prog) \
      AROS_LC8(int, OSSL_HTTP_proxy_connect, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(const char *, (___server), A1), \
 AROS_LCA(const char *, (___port), A2), \
 AROS_LCA(const char *, (___proxyuser), A3), \
 AROS_LCA(const char *, (___proxypass), D0), \
 AROS_LCA(int, (___timeout), D1), \
 AROS_LCA(BIO *, (___bio_err), D2), \
 AROS_LCA(const char *, (___prog), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 430, Amisslext)

#define OSSL_HTTP_set1_request(___rctx, ___path, ___headers, ___content_type, ___req, ___expected_content_type, ___expect_asn1, ___max_resp_len, ___timeout, ___keep_alive) \
      AROS_LC10(int, OSSL_HTTP_set1_request, \
 AROS_LCA(OSSL_HTTP_REQ_CTX *, (___rctx), A0), \
 AROS_LCA(const char *, (___path), A1), \
 AROS_LCA(const STACK_OF(CONF_VALUE) *, (___headers), A2), \
 AROS_LCA(const char *, (___content_type), A3), \
 AROS_LCA(BIO *, (___req), D0), \
 AROS_LCA(const char *, (___expected_content_type), D1), \
 AROS_LCA(int, (___expect_asn1), D2), \
 AROS_LCA(size_t, (___max_resp_len), D3), \
 AROS_LCA(int, (___timeout), D4), \
 AROS_LCA(int, (___keep_alive), D5), \
     struct Library *, AMISSLEXT_BASE_NAME, 431, Amisslext)

#define OSSL_HTTP_exchange(___rctx, ___redirection_url) \
      AROS_LC2(BIO *, OSSL_HTTP_exchange, \
 AROS_LCA(OSSL_HTTP_REQ_CTX *, (___rctx), A0), \
 AROS_LCA(char **, (___redirection_url), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 432, Amisslext)

#define OSSL_HTTP_get_amiga_1(___url, ___proxy, ___no_proxy, ___bio, ___rbio, ___bio_update_fn, ___moreargs) \
      AROS_LC7(BIO *, OSSL_HTTP_get_amiga_1, \
 AROS_LCA(const char *, (___url), A0), \
 AROS_LCA(const char *, (___proxy), A1), \
 AROS_LCA(const char *, (___no_proxy), A2), \
 AROS_LCA(BIO *, (___bio), D1), \
 AROS_LCA(BIO *, (___rbio), D2), \
 AROS_LCA(OSSL_HTTP_bio_cb_t, (___bio_update_fn), A3), \
 AROS_LCA(void *, (___moreargs), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 433, Amisslext)

#define OSSL_HTTP_get_amiga_2(___arg, ___buf_size, ___headers, ___expected_content_type, ___expect_asn1, ___max_resp_len, ___timeout) \
      AROS_LC7(void *, OSSL_HTTP_get_amiga_2, \
 AROS_LCA(void *, (___arg), A0), \
 AROS_LCA(int, (___buf_size), A1), \
 AROS_LCA(const STACK_OF(CONF_VALUE) *, (___headers), A2), \
 AROS_LCA(const char *, (___expected_content_type), A3), \
 AROS_LCA(int, (___expect_asn1), D0), \
 AROS_LCA(size_t, (___max_resp_len), D1), \
 AROS_LCA(int, (___timeout), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 434, Amisslext)

#define OSSL_HTTP_transfer_amiga_1(___prctx, ___server, ___port, ___path, ___use_ssl, ___proxy, ___no_proxy, ___bio, ___rbio, ___bio_update_fn, ___moreargs) \
      AROS_LC11(BIO *, OSSL_HTTP_transfer_amiga_1, \
 AROS_LCA(OSSL_HTTP_REQ_CTX **, (___prctx), A0), \
 AROS_LCA(const char *, (___server), A1), \
 AROS_LCA(const char *, (___port), A2), \
 AROS_LCA(const char *, (___path), D1), \
 AROS_LCA(int, (___use_ssl), D2), \
 AROS_LCA(const char *, (___proxy), D3), \
 AROS_LCA(const char *, (___no_proxy), D4), \
 AROS_LCA(BIO *, (___bio), D5), \
 AROS_LCA(BIO *, (___rbio), D6), \
 AROS_LCA(OSSL_HTTP_bio_cb_t, (___bio_update_fn), A3), \
 AROS_LCA(void *, (___moreargs), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 435, Amisslext)

#define OSSL_HTTP_transfer_amiga_2(___arg, ___buf_size, ___headers, ___content_type, ___req, ___expected_content_type, ___expect_asn1, ___max_resp_len, ___timeout, ___keep_alive) \
      AROS_LC10(void *, OSSL_HTTP_transfer_amiga_2, \
 AROS_LCA(void *, (___arg), A0), \
 AROS_LCA(int, (___buf_size), D0), \
 AROS_LCA(const STACK_OF(CONF_VALUE) *, (___headers), A1), \
 AROS_LCA(const char *, (___content_type), A2), \
 AROS_LCA(BIO *, (___req), A3), \
 AROS_LCA(const char *, (___expected_content_type), D1), \
 AROS_LCA(int, (___expect_asn1), D2), \
 AROS_LCA(size_t, (___max_resp_len), D3), \
 AROS_LCA(int, (___timeout), D4), \
 AROS_LCA(int, (___keep_alive), D5), \
     struct Library *, AMISSLEXT_BASE_NAME, 436, Amisslext)

#define OSSL_HTTP_close(___rctx, ___ok) \
      AROS_LC2(int, OSSL_HTTP_close, \
 AROS_LCA(OSSL_HTTP_REQ_CTX *, (___rctx), A0), \
 AROS_LCA(int, (___ok), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 437, Amisslext)

#define ASN1_item_i2d_mem_bio(___it, ___val) \
      AROS_LC2(BIO *, ASN1_item_i2d_mem_bio, \
 AROS_LCA(const ASN1_ITEM *, (___it), A0), \
 AROS_LCA(const ASN1_VALUE *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 438, Amisslext)

#define ERR_add_error_txt(___sepr, ___txt) \
      AROS_LC2(void, ERR_add_error_txt, \
 AROS_LCA(const char *, (___sepr), A0), \
 AROS_LCA(const char *, (___txt), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 439, Amisslext)

#define ERR_add_error_mem_bio(___sep, ___bio) \
      AROS_LC2(void, ERR_add_error_mem_bio, \
 AROS_LCA(const char *, (___sep), A0), \
 AROS_LCA(BIO *, (___bio), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 440, Amisslext)

#define X509_STORE_CTX_print_verify_cb(___ok, ___ctx) \
      AROS_LC2(int, X509_STORE_CTX_print_verify_cb, \
 AROS_LCA(int, (___ok), D0), \
 AROS_LCA(X509_STORE_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 441, Amisslext)

#define X509_STORE_get1_all_certs(___xs) \
      AROS_LC1(STACK_OF(X509) *, X509_STORE_get1_all_certs, \
 AROS_LCA(X509_STORE *, (___xs), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 442, Amisslext)

#define OSSL_CMP_validate_msg(___ctx, ___msg) \
      AROS_LC2(int, OSSL_CMP_validate_msg, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_CMP_MSG *, (___msg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 443, Amisslext)

#define OSSL_CMP_validate_cert_path(___ctx, ___trusted_store, ___cert) \
      AROS_LC3(int, OSSL_CMP_validate_cert_path, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(X509_STORE *, (___trusted_store), A1), \
 AROS_LCA(X509 *, (___cert), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 444, Amisslext)

#define EVP_PKEY_CTX_set_ecdh_cofactor_mode(___ctx, ___cofactor_mode) \
      AROS_LC2(int, EVP_PKEY_CTX_set_ecdh_cofactor_mode, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___cofactor_mode), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 445, Amisslext)

#define EVP_PKEY_CTX_get_ecdh_cofactor_mode(___ctx) \
      AROS_LC1(int, EVP_PKEY_CTX_get_ecdh_cofactor_mode, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 446, Amisslext)

#define EVP_PKEY_CTX_set_ecdh_kdf_type(___ctx, ___kdf) \
      AROS_LC2(int, EVP_PKEY_CTX_set_ecdh_kdf_type, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___kdf), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 447, Amisslext)

#define EVP_PKEY_CTX_get_ecdh_kdf_type(___ctx) \
      AROS_LC1(int, EVP_PKEY_CTX_get_ecdh_kdf_type, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 448, Amisslext)

#define EVP_PKEY_CTX_set_ecdh_kdf_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_set_ecdh_kdf_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD *, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 449, Amisslext)

#define EVP_PKEY_CTX_get_ecdh_kdf_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_get_ecdh_kdf_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD **, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 450, Amisslext)

#define EVP_PKEY_CTX_set_ecdh_kdf_outlen(___ctx, ___len) \
      AROS_LC2(int, EVP_PKEY_CTX_set_ecdh_kdf_outlen, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 451, Amisslext)

#define EVP_PKEY_CTX_get_ecdh_kdf_outlen(___ctx, ___len) \
      AROS_LC2(int, EVP_PKEY_CTX_get_ecdh_kdf_outlen, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int *, (___len), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 452, Amisslext)

#define EVP_PKEY_CTX_set0_ecdh_kdf_ukm(___ctx, ___ukm, ___len) \
      AROS_LC3(int, EVP_PKEY_CTX_set0_ecdh_kdf_ukm, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___ukm), A1), \
 AROS_LCA(int, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 453, Amisslext)

#define EVP_PKEY_CTX_get0_ecdh_kdf_ukm(___ctx, ___ukm) \
      AROS_LC2(int, EVP_PKEY_CTX_get0_ecdh_kdf_ukm, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char **, (___ukm), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 454, Amisslext)

#define EVP_PKEY_CTX_set_rsa_pss_saltlen(___ctx, ___saltlen) \
      AROS_LC2(int, EVP_PKEY_CTX_set_rsa_pss_saltlen, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___saltlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 455, Amisslext)

#define EVP_PKEY_CTX_get_rsa_pss_saltlen(___ctx, ___saltlen) \
      AROS_LC2(int, EVP_PKEY_CTX_get_rsa_pss_saltlen, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int *, (___saltlen), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 456, Amisslext)

#define d2i_ISSUER_SIGN_TOOL(___a, ___in, ___len) \
      AROS_LC3(ISSUER_SIGN_TOOL *, d2i_ISSUER_SIGN_TOOL, \
 AROS_LCA(ISSUER_SIGN_TOOL **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 457, Amisslext)

#define i2d_ISSUER_SIGN_TOOL(___a, ___out) \
      AROS_LC2(int, i2d_ISSUER_SIGN_TOOL, \
 AROS_LCA(const ISSUER_SIGN_TOOL *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 458, Amisslext)

#define ISSUER_SIGN_TOOL_free(___a) \
      AROS_LC1(void, ISSUER_SIGN_TOOL_free, \
 AROS_LCA(ISSUER_SIGN_TOOL *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 459, Amisslext)

#define ISSUER_SIGN_TOOL_new() \
      AROS_LC0(ISSUER_SIGN_TOOL *, ISSUER_SIGN_TOOL_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 460, Amisslext)

#define ISSUER_SIGN_TOOL_it() \
      AROS_LC0(const ASN1_ITEM *, ISSUER_SIGN_TOOL_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 461, Amisslext)

#define OSSL_SELF_TEST_new(___cb, ___cbarg) \
      AROS_LC2(OSSL_SELF_TEST *, OSSL_SELF_TEST_new, \
 AROS_LCA(OSSL_CALLBACK *, (___cb), A0), \
 AROS_LCA(void *, (___cbarg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 462, Amisslext)

#define OSSL_SELF_TEST_free(___st) \
      AROS_LC1(void, OSSL_SELF_TEST_free, \
 AROS_LCA(OSSL_SELF_TEST *, (___st), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 463, Amisslext)

#define OSSL_SELF_TEST_onbegin(___st, ___type, ___desc) \
      AROS_LC3(void, OSSL_SELF_TEST_onbegin, \
 AROS_LCA(OSSL_SELF_TEST *, (___st), A0), \
 AROS_LCA(const char *, (___type), A1), \
 AROS_LCA(const char *, (___desc), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 464, Amisslext)

#define OSSL_SELF_TEST_oncorrupt_byte(___st, ___bytes) \
      AROS_LC2(int, OSSL_SELF_TEST_oncorrupt_byte, \
 AROS_LCA(OSSL_SELF_TEST *, (___st), A0), \
 AROS_LCA(unsigned char *, (___bytes), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 465, Amisslext)

#define OSSL_SELF_TEST_onend(___st, ___ret) \
      AROS_LC2(void, OSSL_SELF_TEST_onend, \
 AROS_LCA(OSSL_SELF_TEST *, (___st), A0), \
 AROS_LCA(int, (___ret), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 466, Amisslext)

#define OSSL_PROVIDER_set_default_search_path(___a, ___path) \
      AROS_LC2(int, OSSL_PROVIDER_set_default_search_path, \
 AROS_LCA(OSSL_LIB_CTX *, (___a), A0), \
 AROS_LCA(const char *, (___path), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 467, Amisslext)

#define X509_digest_sig(___cert, ___md_used, ___md_is_fallback) \
      AROS_LC3(ASN1_OCTET_STRING *, X509_digest_sig, \
 AROS_LCA(const X509 *, (___cert), A0), \
 AROS_LCA(EVP_MD **, (___md_used), A1), \
 AROS_LCA(int *, (___md_is_fallback), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 468, Amisslext)

#define OSSL_CMP_MSG_dup(___a) \
      AROS_LC1(OSSL_CMP_MSG *, OSSL_CMP_MSG_dup, \
 AROS_LCA(const OSSL_CMP_MSG *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 469, Amisslext)

#define OSSL_CMP_ITAV_dup(___a) \
      AROS_LC1(OSSL_CMP_ITAV *, OSSL_CMP_ITAV_dup, \
 AROS_LCA(const OSSL_CMP_ITAV *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 470, Amisslext)

#define d2i_OSSL_CMP_PKISI(___a, ___in, ___len) \
      AROS_LC3(OSSL_CMP_PKISI *, d2i_OSSL_CMP_PKISI, \
 AROS_LCA(OSSL_CMP_PKISI **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 471, Amisslext)

#define i2d_OSSL_CMP_PKISI(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CMP_PKISI, \
 AROS_LCA(const OSSL_CMP_PKISI *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 472, Amisslext)

#define OSSL_CMP_PKISI_free(___a) \
      AROS_LC1(void, OSSL_CMP_PKISI_free, \
 AROS_LCA(OSSL_CMP_PKISI *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 473, Amisslext)

#define OSSL_CMP_PKISI_new() \
      AROS_LC0(OSSL_CMP_PKISI *, OSSL_CMP_PKISI_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 474, Amisslext)

#define OSSL_CMP_PKISI_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CMP_PKISI_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 475, Amisslext)

#define OSSL_CMP_PKISI_dup(___a) \
      AROS_LC1(OSSL_CMP_PKISI *, OSSL_CMP_PKISI_dup, \
 AROS_LCA(const OSSL_CMP_PKISI *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 476, Amisslext)

#define OSSL_CMP_snprint_PKIStatusInfo(___statusInfo, ___buf, ___bufsize) \
      AROS_LC3(char *, OSSL_CMP_snprint_PKIStatusInfo, \
 AROS_LCA(const OSSL_CMP_PKISI *, (___statusInfo), A0), \
 AROS_LCA(char *, (___buf), A1), \
 AROS_LCA(size_t, (___bufsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 477, Amisslext)

#define OSSL_CMP_STATUSINFO_new(___status, ___fail_info, ___text) \
      AROS_LC3(OSSL_CMP_PKISI *, OSSL_CMP_STATUSINFO_new, \
 AROS_LCA(int, (___status), D0), \
 AROS_LCA(int, (___fail_info), D1), \
 AROS_LCA(const char *, (___text), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 478, Amisslext)

#define d2i_OSSL_CMP_MSG_bio(___bio, ___msg) \
      AROS_LC2(OSSL_CMP_MSG *, d2i_OSSL_CMP_MSG_bio, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(OSSL_CMP_MSG **, (___msg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 479, Amisslext)

#define i2d_OSSL_CMP_MSG_bio(___bio, ___msg) \
      AROS_LC2(int, i2d_OSSL_CMP_MSG_bio, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(const OSSL_CMP_MSG *, (___msg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 480, Amisslext)

#define OSSL_CMP_SRV_process_request(___srv_ctx, ___req) \
      AROS_LC2(OSSL_CMP_MSG *, OSSL_CMP_SRV_process_request, \
 AROS_LCA(OSSL_CMP_SRV_CTX *, (___srv_ctx), A0), \
 AROS_LCA(const OSSL_CMP_MSG *, (___req), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 481, Amisslext)

#define OSSL_CMP_CTX_server_perform(___client_ctx, ___req) \
      AROS_LC2(OSSL_CMP_MSG *, OSSL_CMP_CTX_server_perform, \
 AROS_LCA(OSSL_CMP_CTX *, (___client_ctx), A0), \
 AROS_LCA(const OSSL_CMP_MSG *, (___req), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 482, Amisslext)

#define OSSL_CMP_SRV_CTX_new(___libctx, ___propq) \
      AROS_LC2(OSSL_CMP_SRV_CTX *, OSSL_CMP_SRV_CTX_new, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 483, Amisslext)

#define OSSL_CMP_SRV_CTX_free(___srv_ctx) \
      AROS_LC1(void, OSSL_CMP_SRV_CTX_free, \
 AROS_LCA(OSSL_CMP_SRV_CTX *, (___srv_ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 484, Amisslext)

#define OSSL_CMP_SRV_CTX_init(___srv_ctx, ___custom_ctx, ___process_cert_request, ___process_rr, ___process_genm, ___process_error, ___process_certConf, ___process_pollReq) \
      AROS_LC8(int, OSSL_CMP_SRV_CTX_init, \
 AROS_LCA(OSSL_CMP_SRV_CTX *, (___srv_ctx), A0), \
 AROS_LCA(void *, (___custom_ctx), A1), \
 AROS_LCA(OSSL_CMP_SRV_cert_request_cb_t, (___process_cert_request), A2), \
 AROS_LCA(OSSL_CMP_SRV_rr_cb_t, (___process_rr), A3), \
 AROS_LCA(OSSL_CMP_SRV_genm_cb_t, (___process_genm), D0), \
 AROS_LCA(OSSL_CMP_SRV_error_cb_t, (___process_error), D1), \
 AROS_LCA(OSSL_CMP_SRV_certConf_cb_t, (___process_certConf), D2), \
 AROS_LCA(OSSL_CMP_SRV_pollReq_cb_t, (___process_pollReq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 485, Amisslext)

#define OSSL_CMP_SRV_CTX_get0_cmp_ctx(___srv_ctx) \
      AROS_LC1(OSSL_CMP_CTX *, OSSL_CMP_SRV_CTX_get0_cmp_ctx, \
 AROS_LCA(const OSSL_CMP_SRV_CTX *, (___srv_ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 486, Amisslext)

#define OSSL_CMP_SRV_CTX_get0_custom_ctx(___srv_ctx) \
      AROS_LC1(void *, OSSL_CMP_SRV_CTX_get0_custom_ctx, \
 AROS_LCA(const OSSL_CMP_SRV_CTX *, (___srv_ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 487, Amisslext)

#define OSSL_CMP_SRV_CTX_set_send_unprotected_errors(___srv_ctx, ___val) \
      AROS_LC2(int, OSSL_CMP_SRV_CTX_set_send_unprotected_errors, \
 AROS_LCA(OSSL_CMP_SRV_CTX *, (___srv_ctx), A0), \
 AROS_LCA(int, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 488, Amisslext)

#define OSSL_CMP_SRV_CTX_set_accept_unprotected(___srv_ctx, ___val) \
      AROS_LC2(int, OSSL_CMP_SRV_CTX_set_accept_unprotected, \
 AROS_LCA(OSSL_CMP_SRV_CTX *, (___srv_ctx), A0), \
 AROS_LCA(int, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 489, Amisslext)

#define OSSL_CMP_SRV_CTX_set_accept_raverified(___srv_ctx, ___val) \
      AROS_LC2(int, OSSL_CMP_SRV_CTX_set_accept_raverified, \
 AROS_LCA(OSSL_CMP_SRV_CTX *, (___srv_ctx), A0), \
 AROS_LCA(int, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 490, Amisslext)

#define OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(___srv_ctx, ___val) \
      AROS_LC2(int, OSSL_CMP_SRV_CTX_set_grant_implicit_confirm, \
 AROS_LCA(OSSL_CMP_SRV_CTX *, (___srv_ctx), A0), \
 AROS_LCA(int, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 491, Amisslext)

#define OSSL_CMP_exec_certreq(___ctx, ___req_type, ___crm) \
      AROS_LC3(X509 *, OSSL_CMP_exec_certreq, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___req_type), D0), \
 AROS_LCA(const OSSL_CRMF_MSG *, (___crm), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 492, Amisslext)

#define OSSL_CMP_try_certreq(___ctx, ___req_type, ___crm, ___checkAfter) \
      AROS_LC4(int, OSSL_CMP_try_certreq, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___req_type), D0), \
 AROS_LCA(const OSSL_CRMF_MSG *, (___crm), A1), \
 AROS_LCA(int *, (___checkAfter), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 493, Amisslext)

#define OSSL_CMP_certConf_cb(___ctx, ___cert, ___fail_info, ___text) \
      AROS_LC4(int, OSSL_CMP_certConf_cb, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(X509 *, (___cert), A1), \
 AROS_LCA(int, (___fail_info), D0), \
 AROS_LCA(const char **, (___text), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 494, Amisslext)

#define OSSL_CMP_exec_RR_ses(___ctx) \
      AROS_LC1(int, OSSL_CMP_exec_RR_ses, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 495, Amisslext)

#define OSSL_CMP_exec_GENM_ses(___ctx) \
      AROS_LC1(STACK_OF(OSSL_CMP_ITAV) *, OSSL_CMP_exec_GENM_ses, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 496, Amisslext)

#define OSSL_CMP_MSG_http_perform(___ctx, ___req) \
      AROS_LC2(OSSL_CMP_MSG *, OSSL_CMP_MSG_http_perform, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_CMP_MSG *, (___req), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 497, Amisslext)

#define OSSL_CMP_MSG_read(___file, ___libctx, ___propq) \
      AROS_LC3(OSSL_CMP_MSG *, OSSL_CMP_MSG_read, \
 AROS_LCA(const char *, (___file), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 498, Amisslext)

#define OSSL_CMP_MSG_write(___file, ___msg) \
      AROS_LC2(int, OSSL_CMP_MSG_write, \
 AROS_LCA(const char *, (___file), A0), \
 AROS_LCA(const OSSL_CMP_MSG *, (___msg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 499, Amisslext)

#define EVP_PKEY_Q_vkeygen(___libctx, ___propq, ___type, ___args) \
      AROS_LC4(EVP_PKEY *, EVP_PKEY_Q_vkeygen, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
 AROS_LCA(const char *, (___type), A2), \
 AROS_LCA(va_list, (___args), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 500, Amisslext)

#ifndef NO_INLINE_VARARGS
#define EVP_PKEY_Q_keygen(___libctx, ___propq, ___type, ___dummy, ...) \
    ({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; EVP_PKEY_Q_vkeygen((___libctx), (___propq), (___type), (va_list) _message); })
#endif /* !NO_INLINE_VARARGS */

#define EVP_PKEY_generate(___ctx, ___ppkey) \
      AROS_LC2(int, EVP_PKEY_generate, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_PKEY **, (___ppkey), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 501, Amisslext)

#define EVP_PKEY_CTX_set_rsa_keygen_bits(___ctx, ___bits) \
      AROS_LC2(int, EVP_PKEY_CTX_set_rsa_keygen_bits, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___bits), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 502, Amisslext)

#define EVP_PKEY_CTX_set_rsa_keygen_pubexp(___ctx, ___pubexp) \
      AROS_LC2(int, EVP_PKEY_CTX_set_rsa_keygen_pubexp, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(BIGNUM *, (___pubexp), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 503, Amisslext)

#define EVP_PKEY_CTX_set1_rsa_keygen_pubexp(___ctx, ___pubexp) \
      AROS_LC2(int, EVP_PKEY_CTX_set1_rsa_keygen_pubexp, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(BIGNUM *, (___pubexp), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 504, Amisslext)

#define EVP_PKEY_CTX_set_rsa_keygen_primes(___ctx, ___primes) \
      AROS_LC2(int, EVP_PKEY_CTX_set_rsa_keygen_primes, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___primes), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 505, Amisslext)

#define NCONF_new_ex(___libctx, ___meth) \
      AROS_LC2(CONF *, NCONF_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(CONF_METHOD *, (___meth), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 506, Amisslext)

#define CONF_modules_load_file_ex(___libctx, ___filename, ___appname, ___flags) \
      AROS_LC4(int, CONF_modules_load_file_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___filename), A1), \
 AROS_LCA(const char *, (___appname), A2), \
 AROS_LCA(unsigned long, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 507, Amisslext)

#define OSSL_LIB_CTX_load_config(___ctx, ___config_file) \
      AROS_LC2(int, OSSL_LIB_CTX_load_config, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___config_file), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 508, Amisslext)

#define OSSL_PARAM_BLD_to_param(___bld) \
      AROS_LC1(OSSL_PARAM *, OSSL_PARAM_BLD_to_param, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 509, Amisslext)

#define OSSL_PARAM_BLD_push_int(___bld, ___key, ___val) \
      AROS_LC3(int, OSSL_PARAM_BLD_push_int, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(int, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 510, Amisslext)

#define OSSL_PARAM_BLD_push_uint(___bld, ___key, ___val) \
      AROS_LC3(int, OSSL_PARAM_BLD_push_uint, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(unsigned int, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 511, Amisslext)

#define OSSL_PARAM_BLD_push_long(___bld, ___key, ___val) \
      AROS_LC3(int, OSSL_PARAM_BLD_push_long, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(long int, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 512, Amisslext)

#define OSSL_PARAM_BLD_push_ulong(___bld, ___key, ___val) \
      AROS_LC3(int, OSSL_PARAM_BLD_push_ulong, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(unsigned long int, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 513, Amisslext)

#define OSSL_PARAM_BLD_push_int32(___bld, ___key, ___val) \
      AROS_LC3(int, OSSL_PARAM_BLD_push_int32, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(int32_t, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 514, Amisslext)

#define OSSL_PARAM_BLD_push_uint32(___bld, ___key, ___val) \
      AROS_LC3(int, OSSL_PARAM_BLD_push_uint32, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(uint32_t, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 515, Amisslext)

#define OSSL_PARAM_BLD_push_int64(___bld, ___key, ___val) \
      AROS_LC3(int, OSSL_PARAM_BLD_push_int64, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(int64_t, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 516, Amisslext)

#define OSSL_PARAM_BLD_push_uint64(___bld, ___key, ___val) \
      AROS_LC3(int, OSSL_PARAM_BLD_push_uint64, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(uint64_t, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 517, Amisslext)

#define OSSL_PARAM_BLD_push_size_t(___bld, ___key, ___val) \
      AROS_LC3(int, OSSL_PARAM_BLD_push_size_t, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(size_t, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 518, Amisslext)

#define OSSL_PARAM_BLD_push_double(___bld, ___key, ___val) \
      AROS_LC3(int, OSSL_PARAM_BLD_push_double, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(double, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 519, Amisslext)

#define OSSL_PARAM_BLD_push_BN(___bld, ___key, ___bn) \
      AROS_LC3(int, OSSL_PARAM_BLD_push_BN, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(const BIGNUM *, (___bn), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 520, Amisslext)

#define OSSL_PARAM_BLD_push_BN_pad(___bld, ___key, ___bn, ___sz) \
      AROS_LC4(int, OSSL_PARAM_BLD_push_BN_pad, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(const BIGNUM *, (___bn), A2), \
 AROS_LCA(size_t, (___sz), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 521, Amisslext)

#define OSSL_PARAM_BLD_push_utf8_string(___bld, ___key, ___buf, ___bsize) \
      AROS_LC4(int, OSSL_PARAM_BLD_push_utf8_string, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(const char *, (___buf), A2), \
 AROS_LCA(size_t, (___bsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 522, Amisslext)

#define OSSL_PARAM_BLD_push_utf8_ptr(___bld, ___key, ___buf, ___bsize) \
      AROS_LC4(int, OSSL_PARAM_BLD_push_utf8_ptr, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(char *, (___buf), A2), \
 AROS_LCA(size_t, (___bsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 523, Amisslext)

#define OSSL_PARAM_BLD_push_octet_string(___bld, ___key, ___buf, ___bsize) \
      AROS_LC4(int, OSSL_PARAM_BLD_push_octet_string, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(const void *, (___buf), A2), \
 AROS_LCA(size_t, (___bsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 524, Amisslext)

#define OSSL_PARAM_BLD_push_octet_ptr(___bld, ___key, ___buf, ___bsize) \
      AROS_LC4(int, OSSL_PARAM_BLD_push_octet_ptr, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(void *, (___buf), A2), \
 AROS_LCA(size_t, (___bsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 525, Amisslext)

#define OSSL_PARAM_BLD_new() \
      AROS_LC0(OSSL_PARAM_BLD *, OSSL_PARAM_BLD_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 526, Amisslext)

#define OSSL_PARAM_BLD_free(___bld) \
      AROS_LC1(void, OSSL_PARAM_BLD_free, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 527, Amisslext)

#define EVP_PKEY_set_type_by_keymgmt(___pkey, ___keymgmt) \
      AROS_LC2(int, EVP_PKEY_set_type_by_keymgmt, \
 AROS_LCA(EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(EVP_KEYMGMT *, (___keymgmt), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 528, Amisslext)

#define OCSP_RESPID_set_by_key_ex(___respid, ___cert, ___libctx, ___propq) \
      AROS_LC4(int, OCSP_RESPID_set_by_key_ex, \
 AROS_LCA(OCSP_RESPID *, (___respid), A0), \
 AROS_LCA(X509 *, (___cert), A1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 529, Amisslext)

#define OCSP_RESPID_match_ex(___respid, ___cert, ___libctx, ___propq) \
      AROS_LC4(int, OCSP_RESPID_match_ex, \
 AROS_LCA(OCSP_RESPID *, (___respid), A0), \
 AROS_LCA(X509 *, (___cert), A1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 530, Amisslext)

#define SRP_create_verifier_ex(___user, ___pass, ___salt, ___verifier, ___N, ___g, ___libctx, ___propq) \
      AROS_LC8(char *, SRP_create_verifier_ex, \
 AROS_LCA(const char *, (___user), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(char **, (___salt), A2), \
 AROS_LCA(char **, (___verifier), A3), \
 AROS_LCA(const char *, (___N), D0), \
 AROS_LCA(const char *, (___g), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D2), \
 AROS_LCA(const char *, (___propq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 531, Amisslext)

#define SRP_create_verifier_BN_ex(___user, ___pass, ___salt, ___verifier, ___N, ___g, ___libctx, ___propq) \
      AROS_LC8(int, SRP_create_verifier_BN_ex, \
 AROS_LCA(const char *, (___user), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(BIGNUM **, (___salt), A2), \
 AROS_LCA(BIGNUM **, (___verifier), A3), \
 AROS_LCA(const BIGNUM *, (___N), D0), \
 AROS_LCA(const BIGNUM *, (___g), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D2), \
 AROS_LCA(const char *, (___propq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 532, Amisslext)

#define SRP_Calc_B_ex(___b, ___N, ___g, ___v, ___libctx, ___propq) \
      AROS_LC6(BIGNUM *, SRP_Calc_B_ex, \
 AROS_LCA(const BIGNUM *, (___b), A0), \
 AROS_LCA(const BIGNUM *, (___N), A1), \
 AROS_LCA(const BIGNUM *, (___g), A2), \
 AROS_LCA(const BIGNUM *, (___v), A3), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D0), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 533, Amisslext)

#define SRP_Calc_u_ex(___A, ___B, ___N, ___libctx, ___propq) \
      AROS_LC5(BIGNUM *, SRP_Calc_u_ex, \
 AROS_LCA(const BIGNUM *, (___A), A0), \
 AROS_LCA(const BIGNUM *, (___B), A1), \
 AROS_LCA(const BIGNUM *, (___N), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 534, Amisslext)

#define SRP_Calc_x_ex(___s, ___user, ___pass, ___libctx, ___propq) \
      AROS_LC5(BIGNUM *, SRP_Calc_x_ex, \
 AROS_LCA(const BIGNUM *, (___s), A0), \
 AROS_LCA(const char *, (___user), A1), \
 AROS_LCA(const char *, (___pass), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 535, Amisslext)

#define SRP_Calc_client_key_ex(___N, ___B, ___g, ___x, ___a, ___u, ___libctx, ___propq) \
      AROS_LC8(BIGNUM *, SRP_Calc_client_key_ex, \
 AROS_LCA(const BIGNUM *, (___N), A0), \
 AROS_LCA(const BIGNUM *, (___B), A1), \
 AROS_LCA(const BIGNUM *, (___g), A2), \
 AROS_LCA(const BIGNUM *, (___x), A3), \
 AROS_LCA(const BIGNUM *, (___a), D0), \
 AROS_LCA(const BIGNUM *, (___u), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D2), \
 AROS_LCA(const char *, (___propq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 536, Amisslext)

#define EVP_PKEY_gettable_params(___pkey) \
      AROS_LC1(const OSSL_PARAM *, EVP_PKEY_gettable_params, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 537, Amisslext)

#define EVP_PKEY_get_int_param(___pkey, ___key_name, ___out) \
      AROS_LC3(int, EVP_PKEY_get_int_param, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(const char *, (___key_name), A1), \
 AROS_LCA(int *, (___out), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 538, Amisslext)

#define EVP_PKEY_get_size_t_param(___pkey, ___key_name, ___out) \
      AROS_LC3(int, EVP_PKEY_get_size_t_param, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(const char *, (___key_name), A1), \
 AROS_LCA(size_t *, (___out), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 539, Amisslext)

#define EVP_PKEY_get_bn_param(___pkey, ___key_name, ___bn) \
      AROS_LC3(int, EVP_PKEY_get_bn_param, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(const char *, (___key_name), A1), \
 AROS_LCA(BIGNUM **, (___bn), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 540, Amisslext)

#define EVP_PKEY_get_utf8_string_param(___pkey, ___key_name, ___str, ___max_buf_sz, ___out_sz) \
      AROS_LC5(int, EVP_PKEY_get_utf8_string_param, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(const char *, (___key_name), A1), \
 AROS_LCA(char *, (___str), A2), \
 AROS_LCA(size_t, (___max_buf_sz), D0), \
 AROS_LCA(size_t *, (___out_sz), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 541, Amisslext)

#define EVP_PKEY_get_octet_string_param(___pkey, ___key_name, ___buf, ___max_buf_sz, ___out_sz) \
      AROS_LC5(int, EVP_PKEY_get_octet_string_param, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(const char *, (___key_name), A1), \
 AROS_LCA(unsigned char *, (___buf), A2), \
 AROS_LCA(size_t, (___max_buf_sz), D0), \
 AROS_LCA(size_t *, (___out_sz), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 542, Amisslext)

#define EVP_PKEY_is_a(___pkey, ___name) \
      AROS_LC2(int, EVP_PKEY_is_a, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 543, Amisslext)

#define EVP_PKEY_can_sign(___pkey) \
      AROS_LC1(int, EVP_PKEY_can_sign, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 544, Amisslext)

#define X509_STORE_CTX_new_ex(___libctx, ___propq) \
      AROS_LC2(X509_STORE_CTX *, X509_STORE_CTX_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 545, Amisslext)

#define X509_STORE_CTX_verify(___ctx) \
      AROS_LC1(int, X509_STORE_CTX_verify, \
 AROS_LCA(X509_STORE_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 546, Amisslext)

#define CT_POLICY_EVAL_CTX_new_ex(___libctx, ___propq) \
      AROS_LC2(CT_POLICY_EVAL_CTX *, CT_POLICY_EVAL_CTX_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 547, Amisslext)

#define CTLOG_new_ex(___public_key, ___name, ___libctx, ___propq) \
      AROS_LC4(CTLOG *, CTLOG_new_ex, \
 AROS_LCA(EVP_PKEY *, (___public_key), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 548, Amisslext)

#define CTLOG_new_from_base64_ex(___ct_log, ___pkey_base64, ___name, ___libctx, ___propq) \
      AROS_LC5(int, CTLOG_new_from_base64_ex, \
 AROS_LCA(CTLOG **, (___ct_log), A0), \
 AROS_LCA(const char *, (___pkey_base64), A1), \
 AROS_LCA(const char *, (___name), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 549, Amisslext)

#define CTLOG_STORE_new_ex(___libctx, ___propq) \
      AROS_LC2(CTLOG_STORE *, CTLOG_STORE_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 550, Amisslext)

#define EVP_PKEY_set_ex_data(___key, ___idx, ___arg) \
      AROS_LC3(int, EVP_PKEY_set_ex_data, \
 AROS_LCA(EVP_PKEY *, (___key), A0), \
 AROS_LCA(int, (___idx), D0), \
 AROS_LCA(void *, (___arg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 551, Amisslext)

#define EVP_PKEY_get_ex_data(___key, ___idx) \
      AROS_LC2(void *, EVP_PKEY_get_ex_data, \
 AROS_LCA(const EVP_PKEY *, (___key), A0), \
 AROS_LCA(int, (___idx), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 552, Amisslext)

#define EVP_PKEY_CTX_set_group_name(___ctx, ___name) \
      AROS_LC2(int, EVP_PKEY_CTX_set_group_name, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 553, Amisslext)

#define EVP_PKEY_CTX_get_group_name(___ctx, ___name, ___namelen) \
      AROS_LC3(int, EVP_PKEY_CTX_get_group_name, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(char *, (___name), A1), \
 AROS_LCA(size_t, (___namelen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 554, Amisslext)

#define EVP_PKEY_CTX_set_ec_paramgen_curve_nid(___ctx, ___nid) \
      AROS_LC2(int, EVP_PKEY_CTX_set_ec_paramgen_curve_nid, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___nid), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 555, Amisslext)

#define d2i_PrivateKey_ex(___type, ___a, ___pp, ___length, ___libctx, ___propq) \
      AROS_LC6(EVP_PKEY *, d2i_PrivateKey_ex, \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(EVP_PKEY **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___pp), A1), \
 AROS_LCA(long, (___length), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 556, Amisslext)

#define d2i_AutoPrivateKey_ex(___a, ___pp, ___length, ___libctx, ___propq) \
      AROS_LC5(EVP_PKEY *, d2i_AutoPrivateKey_ex, \
 AROS_LCA(EVP_PKEY **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___pp), A1), \
 AROS_LCA(long, (___length), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 557, Amisslext)

#define d2i_PrivateKey_ex_bio(___bp, ___a, ___libctx, ___propq) \
      AROS_LC4(EVP_PKEY *, d2i_PrivateKey_ex_bio, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(EVP_PKEY **, (___a), A1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 558, Amisslext)

#define PEM_read_bio_PrivateKey_ex(___out, ___x, ___cb, ___u, ___libctx, ___propq) \
      AROS_LC6(EVP_PKEY *, PEM_read_bio_PrivateKey_ex, \
 AROS_LCA(BIO *, (___out), A0), \
 AROS_LCA(EVP_PKEY **, (___x), A1), \
 AROS_LCA(pem_password_cb *, (___cb), A2), \
 AROS_LCA(void *, (___u), A3), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D0), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 559, Amisslext)

#define EVP_PKEY_CTX_set_dsa_paramgen_bits(___ctx, ___nbits) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dsa_paramgen_bits, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___nbits), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 560, Amisslext)

#define EVP_PKEY_CTX_set_dsa_paramgen_q_bits(___ctx, ___qbits) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dsa_paramgen_q_bits, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___qbits), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 561, Amisslext)

#define EVP_PKEY_CTX_set_dsa_paramgen_md_props(___ctx, ___md_name, ___md_properties) \
      AROS_LC3(int, EVP_PKEY_CTX_set_dsa_paramgen_md_props, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___md_name), A1), \
 AROS_LCA(const char *, (___md_properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 562, Amisslext)

#define EVP_PKEY_CTX_set_dsa_paramgen_gindex(___ctx, ___gindex) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dsa_paramgen_gindex, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___gindex), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 563, Amisslext)

#define EVP_PKEY_CTX_set_dsa_paramgen_type(___ctx, ___name) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dsa_paramgen_type, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 564, Amisslext)

#define EVP_PKEY_CTX_set_dsa_paramgen_seed(___ctx, ___seed, ___seedlen) \
      AROS_LC3(int, EVP_PKEY_CTX_set_dsa_paramgen_seed, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___seed), A1), \
 AROS_LCA(size_t, (___seedlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 565, Amisslext)

#define EVP_PKEY_CTX_set_dsa_paramgen_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dsa_paramgen_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD *, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 566, Amisslext)

#define EVP_PKEY_CTX_set_dh_paramgen_type(___ctx, ___typ) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dh_paramgen_type, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___typ), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 567, Amisslext)

#define EVP_PKEY_CTX_set_dh_paramgen_gindex(___ctx, ___gindex) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dh_paramgen_gindex, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___gindex), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 568, Amisslext)

#define EVP_PKEY_CTX_set_dh_paramgen_seed(___ctx, ___seed, ___seedlen) \
      AROS_LC3(int, EVP_PKEY_CTX_set_dh_paramgen_seed, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___seed), A1), \
 AROS_LCA(size_t, (___seedlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 569, Amisslext)

#define EVP_PKEY_CTX_set_dh_paramgen_prime_len(___ctx, ___pbits) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dh_paramgen_prime_len, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___pbits), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 570, Amisslext)

#define EVP_PKEY_CTX_set_dh_paramgen_subprime_len(___ctx, ___qlen) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dh_paramgen_subprime_len, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___qlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 571, Amisslext)

#define EVP_PKEY_CTX_set_dh_paramgen_generator(___ctx, ___gen) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dh_paramgen_generator, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___gen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 572, Amisslext)

#define EVP_PKEY_CTX_set_dh_nid(___ctx, ___nid) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dh_nid, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___nid), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 573, Amisslext)

#define EVP_PKEY_CTX_set_dh_rfc5114(___ctx, ___gen) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dh_rfc5114, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___gen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 574, Amisslext)

#define EVP_PKEY_CTX_set_dhx_rfc5114(___ctx, ___gen) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dhx_rfc5114, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___gen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 575, Amisslext)

#define X509_VERIFY_PARAM_get0_host(___param, ___idx) \
      AROS_LC2(char *, X509_VERIFY_PARAM_get0_host, \
 AROS_LCA(X509_VERIFY_PARAM *, (___param), A0), \
 AROS_LCA(int, (___idx), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 576, Amisslext)

#define X509_VERIFY_PARAM_get0_email(___param) \
      AROS_LC1(char *, X509_VERIFY_PARAM_get0_email, \
 AROS_LCA(X509_VERIFY_PARAM *, (___param), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 577, Amisslext)

#define X509_VERIFY_PARAM_get1_ip_asc(___param) \
      AROS_LC1(char *, X509_VERIFY_PARAM_get1_ip_asc, \
 AROS_LCA(X509_VERIFY_PARAM *, (___param), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 578, Amisslext)

#define OSSL_PARAM_modified(___p) \
      AROS_LC1(int, OSSL_PARAM_modified, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 579, Amisslext)

#define OSSL_PARAM_set_all_unmodified(___p) \
      AROS_LC1(void, OSSL_PARAM_set_all_unmodified, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 580, Amisslext)

#define EVP_RAND_fetch(___libctx, ___algorithm, ___properties) \
      AROS_LC3(EVP_RAND *, EVP_RAND_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___algorithm), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 581, Amisslext)

#define EVP_RAND_up_ref(___rand) \
      AROS_LC1(int, EVP_RAND_up_ref, \
 AROS_LCA(EVP_RAND *, (___rand), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 582, Amisslext)

#define EVP_RAND_free(___rand) \
      AROS_LC1(void, EVP_RAND_free, \
 AROS_LCA(EVP_RAND *, (___rand), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 583, Amisslext)

#define EVP_RAND_get0_name(___rand) \
      AROS_LC1(const char *, EVP_RAND_get0_name, \
 AROS_LCA(const EVP_RAND *, (___rand), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 584, Amisslext)

#define EVP_RAND_is_a(___rand, ___name) \
      AROS_LC2(int, EVP_RAND_is_a, \
 AROS_LCA(const EVP_RAND *, (___rand), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 585, Amisslext)

#define EVP_RAND_get0_provider(___rand) \
      AROS_LC1(const OSSL_PROVIDER *, EVP_RAND_get0_provider, \
 AROS_LCA(const EVP_RAND *, (___rand), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 586, Amisslext)

#define EVP_RAND_get_params(___rand, ___params) \
      AROS_LC2(int, EVP_RAND_get_params, \
 AROS_LCA(EVP_RAND *, (___rand), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 587, Amisslext)

#define EVP_RAND_CTX_new(___rand, ___parent) \
      AROS_LC2(EVP_RAND_CTX *, EVP_RAND_CTX_new, \
 AROS_LCA(EVP_RAND *, (___rand), A0), \
 AROS_LCA(EVP_RAND_CTX *, (___parent), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 588, Amisslext)

#define EVP_RAND_CTX_free(___ctx) \
      AROS_LC1(void, EVP_RAND_CTX_free, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 589, Amisslext)

#define EVP_RAND_CTX_get0_rand(___ctx) \
      AROS_LC1(EVP_RAND *, EVP_RAND_CTX_get0_rand, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 590, Amisslext)

#define EVP_RAND_CTX_get_params(___ctx, ___params) \
      AROS_LC2(int, EVP_RAND_CTX_get_params, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 591, Amisslext)

#define EVP_RAND_CTX_set_params(___ctx, ___params) \
      AROS_LC2(int, EVP_RAND_CTX_set_params, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 592, Amisslext)

#define EVP_RAND_gettable_params(___rand) \
      AROS_LC1(const OSSL_PARAM *, EVP_RAND_gettable_params, \
 AROS_LCA(const EVP_RAND *, (___rand), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 593, Amisslext)

#define EVP_RAND_gettable_ctx_params(___rand) \
      AROS_LC1(const OSSL_PARAM *, EVP_RAND_gettable_ctx_params, \
 AROS_LCA(const EVP_RAND *, (___rand), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 594, Amisslext)

#define EVP_RAND_settable_ctx_params(___rand) \
      AROS_LC1(const OSSL_PARAM *, EVP_RAND_settable_ctx_params, \
 AROS_LCA(const EVP_RAND *, (___rand), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 595, Amisslext)

#define EVP_RAND_do_all_provided(___libctx, ___fn, ___arg) \
      AROS_LC3(void, EVP_RAND_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(EVP_RAND *rand,void *arg), (___fn), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 596, Amisslext)

#define EVP_RAND_names_do_all(___rand, ___fn, ___data) \
      AROS_LC3(int, EVP_RAND_names_do_all, \
 AROS_LCA(const EVP_RAND *, (___rand), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 597, Amisslext)

#define EVP_RAND_instantiate(___ctx, ___strength, ___prediction_resistance, ___pstr, ___pstr_len, ___params) \
      AROS_LC6(int, EVP_RAND_instantiate, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned int, (___strength), D0), \
 AROS_LCA(int, (___prediction_resistance), D1), \
 AROS_LCA(const unsigned char *, (___pstr), A1), \
 AROS_LCA(size_t, (___pstr_len), D2), \
 AROS_LCA(const OSSL_PARAM *, (___params), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 598, Amisslext)

#define EVP_RAND_uninstantiate(___ctx) \
      AROS_LC1(int, EVP_RAND_uninstantiate, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 599, Amisslext)

#define EVP_RAND_generate(___ctx, ___out, ___outlen, ___strength, ___prediction_resistance, ___addin, ___addin_len) \
      AROS_LC7(int, EVP_RAND_generate, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___out), A1), \
 AROS_LCA(size_t, (___outlen), D0), \
 AROS_LCA(unsigned int, (___strength), D1), \
 AROS_LCA(int, (___prediction_resistance), D2), \
 AROS_LCA(const unsigned char *, (___addin), A2), \
 AROS_LCA(size_t, (___addin_len), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 600, Amisslext)

#define EVP_RAND_reseed(___ctx, ___prediction_resistance, ___ent, ___ent_len, ___addin, ___addin_len) \
      AROS_LC6(int, EVP_RAND_reseed, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___prediction_resistance), D0), \
 AROS_LCA(const unsigned char *, (___ent), A1), \
 AROS_LCA(size_t, (___ent_len), D1), \
 AROS_LCA(const unsigned char *, (___addin), A2), \
 AROS_LCA(size_t, (___addin_len), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 601, Amisslext)

#define EVP_RAND_nonce(___ctx, ___out, ___outlen) \
      AROS_LC3(int, EVP_RAND_nonce, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___out), A1), \
 AROS_LCA(size_t, (___outlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 602, Amisslext)

#define EVP_RAND_enable_locking(___ctx) \
      AROS_LC1(int, EVP_RAND_enable_locking, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 603, Amisslext)

#define EVP_RAND_verify_zeroization(___ctx) \
      AROS_LC1(int, EVP_RAND_verify_zeroization, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 604, Amisslext)

#define EVP_RAND_get_strength(___ctx) \
      AROS_LC1(unsigned int, EVP_RAND_get_strength, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 605, Amisslext)

#define EVP_RAND_get_state(___ctx) \
      AROS_LC1(int, EVP_RAND_get_state, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 606, Amisslext)

#define EVP_default_properties_is_fips_enabled(___libctx) \
      AROS_LC1(int, EVP_default_properties_is_fips_enabled, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 607, Amisslext)

#define EVP_default_properties_enable_fips(___libctx, ___enable) \
      AROS_LC2(int, EVP_default_properties_enable_fips, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(int, (___enable), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 608, Amisslext)

#define EVP_PKEY_new_raw_private_key_ex(___libctx, ___keytype, ___propq, ___priv, ___len) \
      AROS_LC5(EVP_PKEY *, EVP_PKEY_new_raw_private_key_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___keytype), A1), \
 AROS_LCA(const char *, (___propq), A2), \
 AROS_LCA(const unsigned char *, (___priv), A3), \
 AROS_LCA(size_t, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 609, Amisslext)

#define EVP_PKEY_new_raw_public_key_ex(___libctx, ___keytype, ___propq, ___pub, ___len) \
      AROS_LC5(EVP_PKEY *, EVP_PKEY_new_raw_public_key_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___keytype), A1), \
 AROS_LCA(const char *, (___propq), A2), \
 AROS_LCA(const unsigned char *, (___pub), A3), \
 AROS_LCA(size_t, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 610, Amisslext)

#define OSSL_PARAM_BLD_push_time_t(___bld, ___key, ___val) \
      AROS_LC3(int, OSSL_PARAM_BLD_push_time_t, \
 AROS_LCA(OSSL_PARAM_BLD *, (___bld), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(time_t, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 611, Amisslext)

#define OSSL_PARAM_construct_time_t_amiga(___result, ___key, ___buf) \
      AROS_LC3(void, OSSL_PARAM_construct_time_t_amiga, \
 AROS_LCA(OSSL_PARAM *, (___result), A0), \
 AROS_LCA(const char *, (___key), A1), \
 AROS_LCA(time_t *, (___buf), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 612, Amisslext)

#define OSSL_PARAM_get_time_t(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_time_t, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(time_t *, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 613, Amisslext)

#define OSSL_PARAM_set_time_t(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_set_time_t, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
 AROS_LCA(time_t, (___val), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 614, Amisslext)

#define OSSL_STORE_attach(___bio, ___scheme, ___libctx, ___propq, ___ui_method, ___ui_data, ___params, ___post_process, ___post_process_data) \
      AROS_LC9(OSSL_STORE_CTX *, OSSL_STORE_attach, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(const char *, (___scheme), A1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
 AROS_LCA(const UI_METHOD *, (___ui_method), D0), \
 AROS_LCA(void *, (___ui_data), D1), \
 AROS_LCA(const OSSL_PARAM *, (___params), D2), \
 AROS_LCA(OSSL_STORE_post_process_info_fn, (___post_process), D3), \
 AROS_LCA(void *, (___post_process_data), D4), \
     struct Library *, AMISSLEXT_BASE_NAME, 615, Amisslext)

#define OSSL_STORE_LOADER_set_attach(___loader, ___attach_function) \
      AROS_LC2(int, OSSL_STORE_LOADER_set_attach, \
 AROS_LCA(OSSL_STORE_LOADER *, (___loader), A0), \
 AROS_LCA(OSSL_STORE_attach_fn, (___attach_function), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 616, Amisslext)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(___ctx, ___saltlen) \
      AROS_LC2(int, EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___saltlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 617, Amisslext)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD *, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 618, Amisslext)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(___ctx, ___mdname) \
      AROS_LC2(int, EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___mdname), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 619, Amisslext)

#define OSSL_PROVIDER_do_all(___ctx, ___cb, ___cbdata) \
      AROS_LC3(int, OSSL_PROVIDER_do_all, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(int (*)(OSSL_PROVIDER *provider,void *cbdata), (___cb), A1), \
 AROS_LCA(void *, (___cbdata), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 620, Amisslext)

#define EC_GROUP_get_field_type(___group) \
      AROS_LC1(int, EC_GROUP_get_field_type, \
 AROS_LCA(const EC_GROUP *, (___group), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 621, Amisslext)

#define X509_PUBKEY_eq(___a, ___b) \
      AROS_LC2(int, X509_PUBKEY_eq, \
 AROS_LCA(const X509_PUBKEY *, (___a), A0), \
 AROS_LCA(const X509_PUBKEY *, (___b), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 622, Amisslext)

#define EVP_PKEY_eq(___a, ___b) \
      AROS_LC2(int, EVP_PKEY_eq, \
 AROS_LCA(const EVP_PKEY *, (___a), A0), \
 AROS_LCA(const EVP_PKEY *, (___b), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 623, Amisslext)

#define EVP_PKEY_parameters_eq(___a, ___b) \
      AROS_LC2(int, EVP_PKEY_parameters_eq, \
 AROS_LCA(const EVP_PKEY *, (___a), A0), \
 AROS_LCA(const EVP_PKEY *, (___b), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 624, Amisslext)

#define OSSL_PROVIDER_query_operation(___prov, ___operation_id, ___no_cache) \
      AROS_LC3(const OSSL_ALGORITHM *, OSSL_PROVIDER_query_operation, \
 AROS_LCA(const OSSL_PROVIDER *, (___prov), A0), \
 AROS_LCA(int, (___operation_id), D0), \
 AROS_LCA(int *, (___no_cache), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 625, Amisslext)

#define OSSL_PROVIDER_unquery_operation(___prov, ___operation_id, ___algs) \
      AROS_LC3(void, OSSL_PROVIDER_unquery_operation, \
 AROS_LCA(const OSSL_PROVIDER *, (___prov), A0), \
 AROS_LCA(int, (___operation_id), D0), \
 AROS_LCA(const OSSL_ALGORITHM *, (___algs), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 626, Amisslext)

#define OSSL_PROVIDER_get0_provider_ctx(___prov) \
      AROS_LC1(void *, OSSL_PROVIDER_get0_provider_ctx, \
 AROS_LCA(const OSSL_PROVIDER *, (___prov), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 627, Amisslext)

#define OSSL_PROVIDER_get_capabilities(___prov, ___capability, ___cb, ___arg) \
      AROS_LC4(int, OSSL_PROVIDER_get_capabilities, \
 AROS_LCA(const OSSL_PROVIDER *, (___prov), A0), \
 AROS_LCA(const char *, (___capability), A1), \
 AROS_LCA(OSSL_CALLBACK *, (___cb), A2), \
 AROS_LCA(void *, (___arg), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 628, Amisslext)

#define EC_GROUP_new_by_curve_name_ex(___libctx, ___propq, ___nid) \
      AROS_LC3(EC_GROUP *, EC_GROUP_new_by_curve_name_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
 AROS_LCA(int, (___nid), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 629, Amisslext)

#define EC_KEY_new_ex(___ctx, ___propq) \
      AROS_LC2(EC_KEY *, EC_KEY_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 630, Amisslext)

#define EC_KEY_new_by_curve_name_ex(___ctx, ___propq, ___nid) \
      AROS_LC3(EC_KEY *, EC_KEY_new_by_curve_name_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
 AROS_LCA(int, (___nid), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 631, Amisslext)

#define OSSL_LIB_CTX_set0_default(___libctx) \
      AROS_LC1(OSSL_LIB_CTX *, OSSL_LIB_CTX_set0_default, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 632, Amisslext)

#define PEM_X509_INFO_read_bio_ex(___bp, ___sk, ___cb, ___u, ___libctx, ___propq) \
      AROS_LC6(STACK_OF(X509_INFO) *, PEM_X509_INFO_read_bio_ex, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(STACK_OF(X509_INFO) *, (___sk), A1), \
 AROS_LCA(pem_password_cb *, (___cb), A2), \
 AROS_LCA(void *, (___u), A3), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D0), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 633, Amisslext)

#define X509_REQ_verify_ex(___a, ___r, ___libctx, ___propq) \
      AROS_LC4(int, X509_REQ_verify_ex, \
 AROS_LCA(X509_REQ *, (___a), A0), \
 AROS_LCA(EVP_PKEY *, (___r), A1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 634, Amisslext)

#define X509_new_ex(___libctx, ___propq) \
      AROS_LC2(X509 *, X509_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 635, Amisslext)

#define X509_LOOKUP_ctrl_ex(___ctx, ___cmd, ___argc, ___argl, ___ret, ___libctx, ___propq) \
      AROS_LC7(int, X509_LOOKUP_ctrl_ex, \
 AROS_LCA(X509_LOOKUP *, (___ctx), A0), \
 AROS_LCA(int, (___cmd), D0), \
 AROS_LCA(const char *, (___argc), A1), \
 AROS_LCA(long, (___argl), D1), \
 AROS_LCA(char **, (___ret), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 636, Amisslext)

#define X509_load_cert_file_ex(___ctx, ___file, ___type, ___libctx, ___propq) \
      AROS_LC5(int, X509_load_cert_file_ex, \
 AROS_LCA(X509_LOOKUP *, (___ctx), A0), \
 AROS_LCA(const char *, (___file), A1), \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 637, Amisslext)

#define X509_load_cert_crl_file_ex(___ctx, ___file, ___type, ___libctx, ___propq) \
      AROS_LC5(int, X509_load_cert_crl_file_ex, \
 AROS_LCA(X509_LOOKUP *, (___ctx), A0), \
 AROS_LCA(const char *, (___file), A1), \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 638, Amisslext)

#define X509_LOOKUP_by_subject_ex(___ctx, ___type, ___name, ___ret, ___libctx, ___propq) \
      AROS_LC6(int, X509_LOOKUP_by_subject_ex, \
 AROS_LCA(X509_LOOKUP *, (___ctx), A0), \
 AROS_LCA(X509_LOOKUP_TYPE, (___type), D0), \
 AROS_LCA(const X509_NAME *, (___name), A1), \
 AROS_LCA(X509_OBJECT *, (___ret), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 639, Amisslext)

#define X509_STORE_load_file_ex(___xs, ___file, ___libctx, ___propq) \
      AROS_LC4(int, X509_STORE_load_file_ex, \
 AROS_LCA(X509_STORE *, (___xs), A0), \
 AROS_LCA(const char *, (___file), A1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 640, Amisslext)

#define X509_STORE_load_store_ex(___xs, ___store, ___libctx, ___propq) \
      AROS_LC4(int, X509_STORE_load_store_ex, \
 AROS_LCA(X509_STORE *, (___xs), A0), \
 AROS_LCA(const char *, (___store), A1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 641, Amisslext)

#define X509_STORE_load_locations_ex(___xs, ___file, ___dir, ___libctx, ___propq) \
      AROS_LC5(int, X509_STORE_load_locations_ex, \
 AROS_LCA(X509_STORE *, (___xs), A0), \
 AROS_LCA(const char *, (___file), A1), \
 AROS_LCA(const char *, (___dir), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 642, Amisslext)

#define X509_STORE_set_default_paths_ex(___xs, ___libctx, ___propq) \
      AROS_LC3(int, X509_STORE_set_default_paths_ex, \
 AROS_LCA(X509_STORE *, (___xs), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 643, Amisslext)

#define X509_build_chain(___target, ___certs, ___store, ___with_self_signed, ___libctx, ___propq) \
      AROS_LC6(STACK_OF(X509) *, X509_build_chain, \
 AROS_LCA(X509 *, (___target), A0), \
 AROS_LCA(STACK_OF(X509) *, (___certs), A1), \
 AROS_LCA(X509_STORE *, (___store), A2), \
 AROS_LCA(int, (___with_self_signed), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 644, Amisslext)

#define X509V3_set_issuer_pkey(___ctx, ___pkey) \
      AROS_LC2(int, X509V3_set_issuer_pkey, \
 AROS_LCA(X509V3_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_PKEY *, (___pkey), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 645, Amisslext)

#define i2s_ASN1_UTF8STRING(___method, ___utf8) \
      AROS_LC2(char *, i2s_ASN1_UTF8STRING, \
 AROS_LCA(X509V3_EXT_METHOD *, (___method), A0), \
 AROS_LCA(ASN1_UTF8STRING *, (___utf8), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 646, Amisslext)

#define s2i_ASN1_UTF8STRING(___method, ___ctx, ___str) \
      AROS_LC3(ASN1_UTF8STRING *, s2i_ASN1_UTF8STRING, \
 AROS_LCA(X509V3_EXT_METHOD *, (___method), A0), \
 AROS_LCA(X509V3_CTX *, (___ctx), A1), \
 AROS_LCA(const char *, (___str), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 647, Amisslext)

#define OSSL_STORE_open_ex(___uri, ___libctx, ___propq, ___ui_method, ___ui_data, ___params, ___post_process, ___post_process_data) \
      AROS_LC8(OSSL_STORE_CTX *, OSSL_STORE_open_ex, \
 AROS_LCA(const char *, (___uri), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
 AROS_LCA(const UI_METHOD *, (___ui_method), A3), \
 AROS_LCA(void *, (___ui_data), D0), \
 AROS_LCA(const OSSL_PARAM *, (___params), D1), \
 AROS_LCA(OSSL_STORE_post_process_info_fn, (___post_process), D2), \
 AROS_LCA(void *, (___post_process_data), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 648, Amisslext)

#define OSSL_DECODER_fetch(___libctx, ___name, ___properties) \
      AROS_LC3(OSSL_DECODER *, OSSL_DECODER_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 649, Amisslext)

#define OSSL_DECODER_up_ref(___encoder) \
      AROS_LC1(int, OSSL_DECODER_up_ref, \
 AROS_LCA(OSSL_DECODER *, (___encoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 650, Amisslext)

#define OSSL_DECODER_free(___encoder) \
      AROS_LC1(void, OSSL_DECODER_free, \
 AROS_LCA(OSSL_DECODER *, (___encoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 651, Amisslext)

#define OSSL_DECODER_get0_provider(___encoder) \
      AROS_LC1(const OSSL_PROVIDER *, OSSL_DECODER_get0_provider, \
 AROS_LCA(const OSSL_DECODER *, (___encoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 652, Amisslext)

#define OSSL_DECODER_get0_properties(___encoder) \
      AROS_LC1(const char *, OSSL_DECODER_get0_properties, \
 AROS_LCA(const OSSL_DECODER *, (___encoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 653, Amisslext)

#define OSSL_DECODER_is_a(___encoder, ___name) \
      AROS_LC2(int, OSSL_DECODER_is_a, \
 AROS_LCA(const OSSL_DECODER *, (___encoder), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 654, Amisslext)

#define OSSL_DECODER_do_all_provided(___libctx, ___fn, ___arg) \
      AROS_LC3(void, OSSL_DECODER_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(OSSL_DECODER *encoder,void *arg), (___fn), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 655, Amisslext)

#define OSSL_DECODER_names_do_all(___encoder, ___fn, ___data) \
      AROS_LC3(int, OSSL_DECODER_names_do_all, \
 AROS_LCA(const OSSL_DECODER *, (___encoder), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 656, Amisslext)

#define OSSL_DECODER_settable_ctx_params(___encoder) \
      AROS_LC1(const OSSL_PARAM *, OSSL_DECODER_settable_ctx_params, \
 AROS_LCA(OSSL_DECODER *, (___encoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 657, Amisslext)

#define OSSL_DECODER_CTX_new() \
      AROS_LC0(OSSL_DECODER_CTX *, OSSL_DECODER_CTX_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 658, Amisslext)

#define OSSL_DECODER_CTX_set_params(___ctx, ___params) \
      AROS_LC2(int, OSSL_DECODER_CTX_set_params, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 659, Amisslext)

#define OSSL_DECODER_CTX_free(___ctx) \
      AROS_LC1(void, OSSL_DECODER_CTX_free, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 660, Amisslext)

#define OSSL_DECODER_CTX_set_passphrase(___ctx, ___kstr, ___klen) \
      AROS_LC3(int, OSSL_DECODER_CTX_set_passphrase, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___kstr), A1), \
 AROS_LCA(size_t, (___klen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 661, Amisslext)

#define OSSL_DECODER_CTX_set_pem_password_cb(___ctx, ___cb, ___cbarg) \
      AROS_LC3(int, OSSL_DECODER_CTX_set_pem_password_cb, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(pem_password_cb *, (___cb), A1), \
 AROS_LCA(void *, (___cbarg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 662, Amisslext)

#define OSSL_DECODER_CTX_set_passphrase_ui(___ctx, ___ui_method, ___ui_data) \
      AROS_LC3(int, OSSL_DECODER_CTX_set_passphrase_ui, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(const UI_METHOD *, (___ui_method), A1), \
 AROS_LCA(void *, (___ui_data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 663, Amisslext)

#define OSSL_DECODER_from_bio(___ctx, ___in) \
      AROS_LC2(int, OSSL_DECODER_from_bio, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(BIO *, (___in), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 664, Amisslext)

#define OSSL_DECODER_CTX_add_decoder(___ctx, ___decoder) \
      AROS_LC2(int, OSSL_DECODER_CTX_add_decoder, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_DECODER *, (___decoder), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 665, Amisslext)

#define OSSL_DECODER_CTX_add_extra(___ctx, ___libctx, ___propq) \
      AROS_LC3(int, OSSL_DECODER_CTX_add_extra, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 666, Amisslext)

#define OSSL_DECODER_CTX_get_num_decoders(___ctx) \
      AROS_LC1(int, OSSL_DECODER_CTX_get_num_decoders, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 667, Amisslext)

#define OSSL_DECODER_CTX_set_input_type(___ctx, ___input_type) \
      AROS_LC2(int, OSSL_DECODER_CTX_set_input_type, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___input_type), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 668, Amisslext)

#define OSSL_DECODER_export(___decoder_inst, ___reference, ___reference_sz, ___export_cb, ___export_cbarg) \
      AROS_LC5(int, OSSL_DECODER_export, \
 AROS_LCA(OSSL_DECODER_INSTANCE *, (___decoder_inst), A0), \
 AROS_LCA(void *, (___reference), A1), \
 AROS_LCA(size_t, (___reference_sz), D0), \
 AROS_LCA(OSSL_CALLBACK *, (___export_cb), A2), \
 AROS_LCA(void *, (___export_cbarg), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 669, Amisslext)

#define OSSL_DECODER_INSTANCE_get_decoder(___decoder_inst) \
      AROS_LC1(OSSL_DECODER *, OSSL_DECODER_INSTANCE_get_decoder, \
 AROS_LCA(OSSL_DECODER_INSTANCE *, (___decoder_inst), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 670, Amisslext)

#define OSSL_DECODER_INSTANCE_get_decoder_ctx(___decoder_inst) \
      AROS_LC1(void *, OSSL_DECODER_INSTANCE_get_decoder_ctx, \
 AROS_LCA(OSSL_DECODER_INSTANCE *, (___decoder_inst), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 671, Amisslext)

#define OSSL_DECODER_gettable_params(___decoder) \
      AROS_LC1(const OSSL_PARAM *, OSSL_DECODER_gettable_params, \
 AROS_LCA(OSSL_DECODER *, (___decoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 672, Amisslext)

#define OSSL_DECODER_get_params(___decoder, ___params) \
      AROS_LC2(int, OSSL_DECODER_get_params, \
 AROS_LCA(OSSL_DECODER *, (___decoder), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 673, Amisslext)

#define OSSL_DECODER_CTX_new_for_pkey(___pkey, ___input_type, ___input_struct, ___keytype, ___selection, ___libctx, ___propquery) \
      AROS_LC7(OSSL_DECODER_CTX *, OSSL_DECODER_CTX_new_for_pkey, \
 AROS_LCA(EVP_PKEY **, (___pkey), A0), \
 AROS_LCA(const char *, (___input_type), A1), \
 AROS_LCA(const char *, (___input_struct), A2), \
 AROS_LCA(const char *, (___keytype), A3), \
 AROS_LCA(int, (___selection), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D1), \
 AROS_LCA(const char *, (___propquery), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 674, Amisslext)

#define OSSL_DECODER_CTX_set_construct(___ctx, ___construct) \
      AROS_LC2(int, OSSL_DECODER_CTX_set_construct, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_DECODER_CONSTRUCT *, (___construct), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 675, Amisslext)

#define OSSL_DECODER_CTX_set_construct_data(___ctx, ___construct_data) \
      AROS_LC2(int, OSSL_DECODER_CTX_set_construct_data, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(void *, (___construct_data), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 676, Amisslext)

#define OSSL_DECODER_CTX_set_cleanup(___ctx, ___cleanup) \
      AROS_LC2(int, OSSL_DECODER_CTX_set_cleanup, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_DECODER_CLEANUP *, (___cleanup), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 677, Amisslext)

#define OSSL_DECODER_CTX_get_construct(___ctx) \
      AROS_LC1(OSSL_DECODER_CONSTRUCT *, OSSL_DECODER_CTX_get_construct, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 678, Amisslext)

#define OSSL_DECODER_CTX_get_construct_data(___ctx) \
      AROS_LC1(void *, OSSL_DECODER_CTX_get_construct_data, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 679, Amisslext)

#define OSSL_DECODER_CTX_get_cleanup(___ctx) \
      AROS_LC1(OSSL_DECODER_CLEANUP *, OSSL_DECODER_CTX_get_cleanup, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 680, Amisslext)

#define RAND_get0_primary(___ctx) \
      AROS_LC1(EVP_RAND_CTX *, RAND_get0_primary, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 681, Amisslext)

#define RAND_get0_public(___ctx) \
      AROS_LC1(EVP_RAND_CTX *, RAND_get0_public, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 682, Amisslext)

#define RAND_get0_private(___ctx) \
      AROS_LC1(EVP_RAND_CTX *, RAND_get0_private, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 683, Amisslext)

#define PKCS12_SAFEBAG_get0_bag_obj(___bag) \
      AROS_LC1(const ASN1_TYPE *, PKCS12_SAFEBAG_get0_bag_obj, \
 AROS_LCA(const PKCS12_SAFEBAG *, (___bag), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 684, Amisslext)

#define PKCS12_SAFEBAG_get0_bag_type(___bag) \
      AROS_LC1(const ASN1_OBJECT *, PKCS12_SAFEBAG_get0_bag_type, \
 AROS_LCA(const PKCS12_SAFEBAG *, (___bag), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 685, Amisslext)

#define PKCS12_SAFEBAG_create_secret(___type, ___vtype, ___value, ___len) \
      AROS_LC4(PKCS12_SAFEBAG *, PKCS12_SAFEBAG_create_secret, \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(int, (___vtype), D1), \
 AROS_LCA(const unsigned char *, (___value), A0), \
 AROS_LCA(int, (___len), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 686, Amisslext)

#define PKCS12_add1_attr_by_NID(___bag, ___nid, ___type, ___bytes, ___len) \
      AROS_LC5(int, PKCS12_add1_attr_by_NID, \
 AROS_LCA(PKCS12_SAFEBAG *, (___bag), A0), \
 AROS_LCA(int, (___nid), D0), \
 AROS_LCA(int, (___type), D1), \
 AROS_LCA(const unsigned char *, (___bytes), A1), \
 AROS_LCA(int, (___len), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 687, Amisslext)

#define PKCS12_add1_attr_by_txt(___bag, ___attrname, ___type, ___bytes, ___len) \
      AROS_LC5(int, PKCS12_add1_attr_by_txt, \
 AROS_LCA(PKCS12_SAFEBAG *, (___bag), A0), \
 AROS_LCA(const char *, (___attrname), A1), \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(const unsigned char *, (___bytes), A2), \
 AROS_LCA(int, (___len), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 688, Amisslext)

#define PKCS12_add_secret(___pbags, ___nid_type, ___value, ___len) \
      AROS_LC4(PKCS12_SAFEBAG *, PKCS12_add_secret, \
 AROS_LCA(STACK_OF(PKCS12_SAFEBAG) **, (___pbags), A0), \
 AROS_LCA(int, (___nid_type), D0), \
 AROS_LCA(const unsigned char *, (___value), A1), \
 AROS_LCA(int, (___len), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 689, Amisslext)

#define SMIME_write_ASN1_ex(___bio, ___val, ___data, ___flags, ___ctype_nid, ___econt_nid, ___mdalgs, ___it, ___libctx, ___propq) \
      AROS_LC10(int, SMIME_write_ASN1_ex, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(ASN1_VALUE *, (___val), A1), \
 AROS_LCA(BIO *, (___data), A2), \
 AROS_LCA(int, (___flags), D0), \
 AROS_LCA(int, (___ctype_nid), D1), \
 AROS_LCA(int, (___econt_nid), D2), \
 AROS_LCA(STACK_OF(X509_ALGOR) *, (___mdalgs), A3), \
 AROS_LCA(const ASN1_ITEM *, (___it), D3), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D4), \
 AROS_LCA(const char *, (___propq), D5), \
     struct Library *, AMISSLEXT_BASE_NAME, 690, Amisslext)

#define SMIME_read_ASN1_ex(___bio, ___flags, ___bcont, ___it, ___x, ___libctx, ___propq) \
      AROS_LC7(ASN1_VALUE *, SMIME_read_ASN1_ex, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(int, (___flags), D0), \
 AROS_LCA(BIO **, (___bcont), A1), \
 AROS_LCA(const ASN1_ITEM *, (___it), A2), \
 AROS_LCA(ASN1_VALUE **, (___x), A3), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D1), \
 AROS_LCA(const char *, (___propq), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 691, Amisslext)

#define CMS_ContentInfo_new_ex(___libctx, ___propq) \
      AROS_LC2(CMS_ContentInfo *, CMS_ContentInfo_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 692, Amisslext)

#define SMIME_read_CMS_ex(___bio, ___flags, ___bcont, ___ci) \
      AROS_LC4(CMS_ContentInfo *, SMIME_read_CMS_ex, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(int, (___flags), D0), \
 AROS_LCA(BIO **, (___bcont), A1), \
 AROS_LCA(CMS_ContentInfo **, (___ci), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 693, Amisslext)

#define CMS_sign_ex(___signcert, ___pkey, ___certs, ___data, ___flags, ___libctx, ___propq) \
      AROS_LC7(CMS_ContentInfo *, CMS_sign_ex, \
 AROS_LCA(X509 *, (___signcert), A0), \
 AROS_LCA(EVP_PKEY *, (___pkey), A1), \
 AROS_LCA(STACK_OF(X509) *, (___certs), A2), \
 AROS_LCA(BIO *, (___data), A3), \
 AROS_LCA(unsigned int, (___flags), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D1), \
 AROS_LCA(const char *, (___propq), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 694, Amisslext)

#define CMS_data_create_ex(___in, ___flags, ___libctx, ___propq) \
      AROS_LC4(CMS_ContentInfo *, CMS_data_create_ex, \
 AROS_LCA(BIO *, (___in), A0), \
 AROS_LCA(unsigned int, (___flags), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 695, Amisslext)

#define CMS_digest_create_ex(___in, ___md, ___flags, ___libctx, ___propq) \
      AROS_LC5(CMS_ContentInfo *, CMS_digest_create_ex, \
 AROS_LCA(BIO *, (___in), A0), \
 AROS_LCA(const EVP_MD *, (___md), A1), \
 AROS_LCA(unsigned int, (___flags), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 696, Amisslext)

#define CMS_EncryptedData_encrypt_ex(___in, ___cipher, ___key, ___keylen, ___flags, ___libctx, ___propq) \
      AROS_LC7(CMS_ContentInfo *, CMS_EncryptedData_encrypt_ex, \
 AROS_LCA(BIO *, (___in), A0), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A1), \
 AROS_LCA(const unsigned char *, (___key), A2), \
 AROS_LCA(size_t, (___keylen), D0), \
 AROS_LCA(unsigned int, (___flags), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 697, Amisslext)

#define CMS_encrypt_ex(___certs, ___in, ___cipher, ___flags, ___libctx, ___propq) \
      AROS_LC6(CMS_ContentInfo *, CMS_encrypt_ex, \
 AROS_LCA(STACK_OF(X509) *, (___certs), A0), \
 AROS_LCA(BIO *, (___in), A1), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A2), \
 AROS_LCA(unsigned int, (___flags), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 698, Amisslext)

#define CMS_EnvelopedData_create_ex(___cipher, ___libctx, ___propq) \
      AROS_LC3(CMS_ContentInfo *, CMS_EnvelopedData_create_ex, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 699, Amisslext)

#define CMS_ReceiptRequest_create0_ex(___id, ___idlen, ___allorfirst, ___receiptList, ___receiptsTo, ___libctx) \
      AROS_LC6(CMS_ReceiptRequest *, CMS_ReceiptRequest_create0_ex, \
 AROS_LCA(unsigned char *, (___id), A0), \
 AROS_LCA(int, (___idlen), D0), \
 AROS_LCA(int, (___allorfirst), D1), \
 AROS_LCA(STACK_OF(GENERAL_NAMES) *, (___receiptList), A1), \
 AROS_LCA(STACK_OF(GENERAL_NAMES) *, (___receiptsTo), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 700, Amisslext)

#define EVP_SignFinal_ex(___ctx, ___md, ___s, ___pkey, ___libctx, ___propq) \
      AROS_LC6(int, EVP_SignFinal_ex, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___md), A1), \
 AROS_LCA(unsigned int *, (___s), A2), \
 AROS_LCA(EVP_PKEY *, (___pkey), A3), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D0), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 701, Amisslext)

#define EVP_VerifyFinal_ex(___ctx, ___sigbuf, ___siglen, ___pkey, ___libctx, ___propq) \
      AROS_LC6(int, EVP_VerifyFinal_ex, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___sigbuf), A1), \
 AROS_LCA(unsigned int, (___siglen), D0), \
 AROS_LCA(EVP_PKEY *, (___pkey), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 702, Amisslext)

#define EVP_DigestSignInit_ex(___ctx, ___pctx, ___mdname, ___libctx, ___props, ___pkey, ___params) \
      AROS_LC7(int, EVP_DigestSignInit_ex, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_PKEY_CTX **, (___pctx), A1), \
 AROS_LCA(const char *, (___mdname), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___props), D0), \
 AROS_LCA(EVP_PKEY *, (___pkey), D1), \
 AROS_LCA(const OSSL_PARAM *, (___params), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 703, Amisslext)

#define EVP_DigestVerifyInit_ex(___ctx, ___pctx, ___mdname, ___libctx, ___props, ___pkey, ___params) \
      AROS_LC7(int, EVP_DigestVerifyInit_ex, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_PKEY_CTX **, (___pctx), A1), \
 AROS_LCA(const char *, (___mdname), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___props), D0), \
 AROS_LCA(EVP_PKEY *, (___pkey), D1), \
 AROS_LCA(const OSSL_PARAM *, (___params), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 704, Amisslext)

#define PKCS7_new_ex(___libctx, ___propq) \
      AROS_LC2(PKCS7 *, PKCS7_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 705, Amisslext)

#define PKCS7_sign_ex(___signcert, ___pkey, ___certs, ___data, ___flags, ___libctx, ___propq) \
      AROS_LC7(PKCS7 *, PKCS7_sign_ex, \
 AROS_LCA(X509 *, (___signcert), A0), \
 AROS_LCA(EVP_PKEY *, (___pkey), A1), \
 AROS_LCA(STACK_OF(X509) *, (___certs), A2), \
 AROS_LCA(BIO *, (___data), A3), \
 AROS_LCA(int, (___flags), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D1), \
 AROS_LCA(const char *, (___propq), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 706, Amisslext)

#define PKCS7_encrypt_ex(___certs, ___in, ___cipher, ___flags, ___libctx, ___propq) \
      AROS_LC6(PKCS7 *, PKCS7_encrypt_ex, \
 AROS_LCA(STACK_OF(X509) *, (___certs), A0), \
 AROS_LCA(BIO *, (___in), A1), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A2), \
 AROS_LCA(int, (___flags), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 707, Amisslext)

#define SMIME_read_PKCS7_ex(___bio, ___bcont, ___p7) \
      AROS_LC3(PKCS7 *, SMIME_read_PKCS7_ex, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(BIO **, (___bcont), A1), \
 AROS_LCA(PKCS7 **, (___p7), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 708, Amisslext)

#define OSSL_PROVIDER_self_test(___prov) \
      AROS_LC1(int, OSSL_PROVIDER_self_test, \
 AROS_LCA(const OSSL_PROVIDER *, (___prov), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 709, Amisslext)

#define EVP_PKEY_CTX_set_tls1_prf_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_set_tls1_prf_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD *, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 710, Amisslext)

#define EVP_PKEY_CTX_set1_tls1_prf_secret(___pctx, ___sec, ___seclen) \
      AROS_LC3(int, EVP_PKEY_CTX_set1_tls1_prf_secret, \
 AROS_LCA(EVP_PKEY_CTX *, (___pctx), A0), \
 AROS_LCA(const unsigned char *, (___sec), A1), \
 AROS_LCA(int, (___seclen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 711, Amisslext)

#define EVP_PKEY_CTX_add1_tls1_prf_seed(___pctx, ___seed, ___seedlen) \
      AROS_LC3(int, EVP_PKEY_CTX_add1_tls1_prf_seed, \
 AROS_LCA(EVP_PKEY_CTX *, (___pctx), A0), \
 AROS_LCA(const unsigned char *, (___seed), A1), \
 AROS_LCA(int, (___seedlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 712, Amisslext)

#define EVP_PKEY_CTX_set_hkdf_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_set_hkdf_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD *, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 713, Amisslext)

#define EVP_PKEY_CTX_set1_hkdf_salt(___ctx, ___salt, ___saltlen) \
      AROS_LC3(int, EVP_PKEY_CTX_set1_hkdf_salt, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___salt), A1), \
 AROS_LCA(int, (___saltlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 714, Amisslext)

#define EVP_PKEY_CTX_set1_hkdf_key(___ctx, ___key, ___keylen) \
      AROS_LC3(int, EVP_PKEY_CTX_set1_hkdf_key, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___key), A1), \
 AROS_LCA(int, (___keylen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 715, Amisslext)

#define EVP_PKEY_CTX_add1_hkdf_info(___ctx, ___info, ___infolen) \
      AROS_LC3(int, EVP_PKEY_CTX_add1_hkdf_info, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___info), A1), \
 AROS_LCA(int, (___infolen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 716, Amisslext)

#define EVP_PKEY_CTX_set_hkdf_mode(___ctx, ___mode) \
      AROS_LC2(int, EVP_PKEY_CTX_set_hkdf_mode, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___mode), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 717, Amisslext)

#define EVP_PKEY_CTX_set1_pbe_pass(___ctx, ___pass, ___passlen) \
      AROS_LC3(int, EVP_PKEY_CTX_set1_pbe_pass, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(int, (___passlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 718, Amisslext)

#define EVP_PKEY_CTX_set1_scrypt_salt(___ctx, ___salt, ___saltlen) \
      AROS_LC3(int, EVP_PKEY_CTX_set1_scrypt_salt, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___salt), A1), \
 AROS_LCA(int, (___saltlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 719, Amisslext)

#define EVP_PKEY_CTX_set_scrypt_N(___ctx, ___n) \
      AROS_LC2(int, EVP_PKEY_CTX_set_scrypt_N, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(uint64_t, (___n), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 720, Amisslext)

#define EVP_PKEY_CTX_set_scrypt_r(___ctx, ___r) \
      AROS_LC2(int, EVP_PKEY_CTX_set_scrypt_r, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(uint64_t, (___r), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 721, Amisslext)

#define EVP_PKEY_CTX_set_scrypt_p(___ctx, ___p) \
      AROS_LC2(int, EVP_PKEY_CTX_set_scrypt_p, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(uint64_t, (___p), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 722, Amisslext)

#define EVP_PKEY_CTX_set_scrypt_maxmem_bytes(___ctx, ___maxmem_bytes) \
      AROS_LC2(int, EVP_PKEY_CTX_set_scrypt_maxmem_bytes, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(uint64_t, (___maxmem_bytes), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 723, Amisslext)

#define EVP_PKEY_CTX_set_dh_kdf_type(___ctx, ___kdf) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dh_kdf_type, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___kdf), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 724, Amisslext)

#define EVP_PKEY_CTX_get_dh_kdf_type(___ctx) \
      AROS_LC1(int, EVP_PKEY_CTX_get_dh_kdf_type, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 725, Amisslext)

#define EVP_PKEY_CTX_set0_dh_kdf_oid(___ctx, ___oid) \
      AROS_LC2(int, EVP_PKEY_CTX_set0_dh_kdf_oid, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(ASN1_OBJECT *, (___oid), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 726, Amisslext)

#define EVP_PKEY_CTX_get0_dh_kdf_oid(___ctx, ___oid) \
      AROS_LC2(int, EVP_PKEY_CTX_get0_dh_kdf_oid, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(ASN1_OBJECT **, (___oid), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 727, Amisslext)

#define EVP_PKEY_CTX_set_dh_kdf_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dh_kdf_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD *, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 728, Amisslext)

#define EVP_PKEY_CTX_get_dh_kdf_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_get_dh_kdf_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD **, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 729, Amisslext)

#define EVP_PKEY_CTX_set_dh_kdf_outlen(___ctx, ___len) \
      AROS_LC2(int, EVP_PKEY_CTX_set_dh_kdf_outlen, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 730, Amisslext)

#define EVP_PKEY_CTX_get_dh_kdf_outlen(___ctx, ___len) \
      AROS_LC2(int, EVP_PKEY_CTX_get_dh_kdf_outlen, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int *, (___len), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 731, Amisslext)

#define EVP_PKEY_CTX_set0_dh_kdf_ukm(___ctx, ___ukm, ___len) \
      AROS_LC3(int, EVP_PKEY_CTX_set0_dh_kdf_ukm, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___ukm), A1), \
 AROS_LCA(int, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 732, Amisslext)

#define EVP_PKEY_CTX_get0_dh_kdf_ukm(___ctx, ___ukm) \
      AROS_LC2(int, EVP_PKEY_CTX_get0_dh_kdf_ukm, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char **, (___ukm), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 733, Amisslext)

#define EVP_CIPHER_CTX_get_updated_iv(___ctx, ___buf, ___len) \
      AROS_LC3(int, EVP_CIPHER_CTX_get_updated_iv, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(void *, (___buf), A1), \
 AROS_LCA(size_t, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 734, Amisslext)

#define EVP_CIPHER_CTX_get_original_iv(___ctx, ___buf, ___len) \
      AROS_LC3(int, EVP_CIPHER_CTX_get_original_iv, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(void *, (___buf), A1), \
 AROS_LCA(size_t, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 735, Amisslext)

#define EVP_KEYMGMT_gettable_params(___keymgmt) \
      AROS_LC1(const OSSL_PARAM *, EVP_KEYMGMT_gettable_params, \
 AROS_LCA(const EVP_KEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 736, Amisslext)

#define EVP_KEYMGMT_settable_params(___keymgmt) \
      AROS_LC1(const OSSL_PARAM *, EVP_KEYMGMT_settable_params, \
 AROS_LCA(const EVP_KEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 737, Amisslext)

#define EVP_KEYMGMT_gen_settable_params(___keymgmt) \
      AROS_LC1(const OSSL_PARAM *, EVP_KEYMGMT_gen_settable_params, \
 AROS_LCA(const EVP_KEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 738, Amisslext)

#define EVP_SIGNATURE_gettable_ctx_params(___sig) \
      AROS_LC1(const OSSL_PARAM *, EVP_SIGNATURE_gettable_ctx_params, \
 AROS_LCA(const EVP_SIGNATURE *, (___sig), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 739, Amisslext)

#define EVP_SIGNATURE_settable_ctx_params(___sig) \
      AROS_LC1(const OSSL_PARAM *, EVP_SIGNATURE_settable_ctx_params, \
 AROS_LCA(const EVP_SIGNATURE *, (___sig), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 740, Amisslext)

#define EVP_KEYEXCH_gettable_ctx_params(___keyexch) \
      AROS_LC1(const OSSL_PARAM *, EVP_KEYEXCH_gettable_ctx_params, \
 AROS_LCA(const EVP_KEYEXCH *, (___keyexch), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 741, Amisslext)

#define EVP_KEYEXCH_settable_ctx_params(___keyexch) \
      AROS_LC1(const OSSL_PARAM *, EVP_KEYEXCH_settable_ctx_params, \
 AROS_LCA(const EVP_KEYEXCH *, (___keyexch), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 742, Amisslext)

#define d2i_PUBKEY_ex(___a, ___pp, ___length, ___libctx, ___propq) \
      AROS_LC5(EVP_PKEY *, d2i_PUBKEY_ex, \
 AROS_LCA(EVP_PKEY **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___pp), A1), \
 AROS_LCA(long, (___length), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 743, Amisslext)

#define OSSL_STORE_INFO_new_PUBKEY(___pubkey) \
      AROS_LC1(OSSL_STORE_INFO *, OSSL_STORE_INFO_new_PUBKEY, \
 AROS_LCA(EVP_PKEY *, (___pubkey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 744, Amisslext)

#define OSSL_STORE_INFO_get0_PUBKEY(___info) \
      AROS_LC1(EVP_PKEY *, OSSL_STORE_INFO_get0_PUBKEY, \
 AROS_LCA(const OSSL_STORE_INFO *, (___info), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 745, Amisslext)

#define OSSL_STORE_INFO_get1_PUBKEY(___info) \
      AROS_LC1(EVP_PKEY *, OSSL_STORE_INFO_get1_PUBKEY, \
 AROS_LCA(const OSSL_STORE_INFO *, (___info), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 746, Amisslext)

#define PEM_read_bio_PUBKEY_ex(___out, ___x, ___cb, ___u, ___libctx, ___propq) \
      AROS_LC6(EVP_PKEY *, PEM_read_bio_PUBKEY_ex, \
 AROS_LCA(BIO *, (___out), A0), \
 AROS_LCA(EVP_PKEY **, (___x), A1), \
 AROS_LCA(pem_password_cb *, (___cb), A2), \
 AROS_LCA(void *, (___u), A3), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D0), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 747, Amisslext)

#define PEM_read_bio_Parameters_ex(___bp, ___x, ___libctx, ___propq) \
      AROS_LC4(EVP_PKEY *, PEM_read_bio_Parameters_ex, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(EVP_PKEY **, (___x), A1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 748, Amisslext)

#define EC_GROUP_new_from_params(___params, ___libctx, ___propq) \
      AROS_LC3(EC_GROUP *, EC_GROUP_new_from_params, \
 AROS_LCA(const OSSL_PARAM *, (___params), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 749, Amisslext)

#define OSSL_STORE_LOADER_set_open_ex(___loader, ___open_ex_function) \
      AROS_LC2(int, OSSL_STORE_LOADER_set_open_ex, \
 AROS_LCA(OSSL_STORE_LOADER *, (___loader), A0), \
 AROS_LCA(OSSL_STORE_open_ex_fn, (___open_ex_function), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 750, Amisslext)

#define OSSL_STORE_LOADER_fetch(___libctx, ___scheme, ___properties) \
      AROS_LC3(OSSL_STORE_LOADER *, OSSL_STORE_LOADER_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___scheme), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 751, Amisslext)

#define OSSL_STORE_LOADER_up_ref(___loader) \
      AROS_LC1(int, OSSL_STORE_LOADER_up_ref, \
 AROS_LCA(OSSL_STORE_LOADER *, (___loader), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 752, Amisslext)

#define OSSL_STORE_LOADER_get0_provider(___loader) \
      AROS_LC1(const OSSL_PROVIDER *, OSSL_STORE_LOADER_get0_provider, \
 AROS_LCA(const OSSL_STORE_LOADER *, (___loader), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 753, Amisslext)

#define OSSL_STORE_LOADER_get0_properties(___loader) \
      AROS_LC1(const char *, OSSL_STORE_LOADER_get0_properties, \
 AROS_LCA(const OSSL_STORE_LOADER *, (___loader), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 754, Amisslext)

#define OSSL_STORE_LOADER_is_a(___loader, ___scheme) \
      AROS_LC2(int, OSSL_STORE_LOADER_is_a, \
 AROS_LCA(const OSSL_STORE_LOADER *, (___loader), A0), \
 AROS_LCA(const char *, (___scheme), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 755, Amisslext)

#define OSSL_STORE_LOADER_do_all_provided(___libctx, ___fn, ___arg) \
      AROS_LC3(void, OSSL_STORE_LOADER_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(OSSL_STORE_LOADER *loader,void *arg), (___fn), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 756, Amisslext)

#define OSSL_STORE_LOADER_names_do_all(___loader, ___fn, ___data) \
      AROS_LC3(int, OSSL_STORE_LOADER_names_do_all, \
 AROS_LCA(const OSSL_STORE_LOADER *, (___loader), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 757, Amisslext)

#define OSSL_PARAM_get_utf8_string_ptr(___p, ___val) \
      AROS_LC2(int, OSSL_PARAM_get_utf8_string_ptr, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(const char **, (___val), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 758, Amisslext)

#define OSSL_PARAM_get_octet_string_ptr(___p, ___val, ___used_len) \
      AROS_LC3(int, OSSL_PARAM_get_octet_string_ptr, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
 AROS_LCA(const void **, (___val), A1), \
 AROS_LCA(size_t *, (___used_len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 759, Amisslext)

#define OSSL_DECODER_CTX_set_passphrase_cb(___ctx, ___cb, ___cbarg) \
      AROS_LC3(int, OSSL_DECODER_CTX_set_passphrase_cb, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_PASSPHRASE_CALLBACK *, (___cb), A1), \
 AROS_LCA(void *, (___cbarg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 760, Amisslext)

#define EVP_PKEY_CTX_set_mac_key(___ctx, ___key, ___keylen) \
      AROS_LC3(int, EVP_PKEY_CTX_set_mac_key, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___key), A1), \
 AROS_LCA(int, (___keylen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 761, Amisslext)

#define OSSL_STORE_INFO_new(___type, ___data) \
      AROS_LC2(OSSL_STORE_INFO *, OSSL_STORE_INFO_new, \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(void *, (___data), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 762, Amisslext)

#define OSSL_STORE_INFO_get0_data(___type, ___info) \
      AROS_LC2(void *, OSSL_STORE_INFO_get0_data, \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(const OSSL_STORE_INFO *, (___info), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 763, Amisslext)

#define EVP_PKCS82PKEY_ex(___p8, ___libctx, ___propq) \
      AROS_LC3(EVP_PKEY *, EVP_PKCS82PKEY_ex, \
 AROS_LCA(const PKCS8_PRIV_KEY_INFO *, (___p8), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 764, Amisslext)

#define EVP_PKEY_CTX_set1_id(___ctx, ___id, ___len) \
      AROS_LC3(int, EVP_PKEY_CTX_set1_id, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const void *, (___id), A1), \
 AROS_LCA(int, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 765, Amisslext)

#define EVP_PKEY_CTX_get1_id(___ctx, ___id) \
      AROS_LC2(int, EVP_PKEY_CTX_get1_id, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(void *, (___id), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 766, Amisslext)

#define EVP_PKEY_CTX_get1_id_len(___ctx, ___id_len) \
      AROS_LC2(int, EVP_PKEY_CTX_get1_id_len, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(size_t *, (___id_len), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 767, Amisslext)

#define CMS_AuthEnvelopedData_create(___cipher) \
      AROS_LC1(CMS_ContentInfo *, CMS_AuthEnvelopedData_create, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 768, Amisslext)

#define CMS_AuthEnvelopedData_create_ex(___cipher, ___libctx, ___propq) \
      AROS_LC3(CMS_ContentInfo *, CMS_AuthEnvelopedData_create_ex, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 769, Amisslext)

#define EVP_PKEY_CTX_set_ec_param_enc(___ctx, ___param_enc) \
      AROS_LC2(int, EVP_PKEY_CTX_set_ec_param_enc, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___param_enc), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 770, Amisslext)

#define EVP_PKEY_get0_type_name(___key) \
      AROS_LC1(const char *, EVP_PKEY_get0_type_name, \
 AROS_LCA(const EVP_PKEY *, (___key), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 771, Amisslext)

#define EVP_KEYMGMT_get0_name(___keymgmt) \
      AROS_LC1(const char *, EVP_KEYMGMT_get0_name, \
 AROS_LCA(const EVP_KEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 772, Amisslext)

#define EVP_KEM_free(___wrap) \
      AROS_LC1(void, EVP_KEM_free, \
 AROS_LCA(EVP_KEM *, (___wrap), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 773, Amisslext)

#define EVP_KEM_up_ref(___wrap) \
      AROS_LC1(int, EVP_KEM_up_ref, \
 AROS_LCA(EVP_KEM *, (___wrap), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 774, Amisslext)

#define EVP_KEM_get0_provider(___wrap) \
      AROS_LC1(OSSL_PROVIDER *, EVP_KEM_get0_provider, \
 AROS_LCA(const EVP_KEM *, (___wrap), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 775, Amisslext)

#define EVP_KEM_fetch(___ctx, ___algorithm, ___properties) \
      AROS_LC3(EVP_KEM *, EVP_KEM_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___algorithm), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 776, Amisslext)

#define EVP_KEM_is_a(___wrap, ___name) \
      AROS_LC2(int, EVP_KEM_is_a, \
 AROS_LCA(const EVP_KEM *, (___wrap), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 777, Amisslext)

#define EVP_KEM_do_all_provided(___libctx, ___fn, ___arg) \
      AROS_LC3(void, EVP_KEM_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(EVP_KEM *wrap,void *arg), (___fn), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 778, Amisslext)

#define EVP_KEM_names_do_all(___wrap, ___fn, ___data) \
      AROS_LC3(int, EVP_KEM_names_do_all, \
 AROS_LCA(const EVP_KEM *, (___wrap), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 779, Amisslext)

#define EVP_PKEY_encapsulate_init(___ctx, ___params) \
      AROS_LC2(int, EVP_PKEY_encapsulate_init, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 780, Amisslext)

#define EVP_PKEY_encapsulate(___ctx, ___wrappedkey, ___wrappedkeylen, ___genkey, ___genkeylen) \
      AROS_LC5(int, EVP_PKEY_encapsulate, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___wrappedkey), A1), \
 AROS_LCA(size_t *, (___wrappedkeylen), A2), \
 AROS_LCA(unsigned char *, (___genkey), A3), \
 AROS_LCA(size_t *, (___genkeylen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 781, Amisslext)

#define EVP_PKEY_decapsulate_init(___ctx, ___params) \
      AROS_LC2(int, EVP_PKEY_decapsulate_init, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 782, Amisslext)

#define EVP_PKEY_decapsulate(___ctx, ___unwrapped, ___unwrappedlen, ___wrapped, ___wrappedlen) \
      AROS_LC5(int, EVP_PKEY_decapsulate, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___unwrapped), A1), \
 AROS_LCA(size_t *, (___unwrappedlen), A2), \
 AROS_LCA(const unsigned char *, (___wrapped), A3), \
 AROS_LCA(size_t, (___wrappedlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 783, Amisslext)

#define EVP_PKEY_CTX_set_kem_op(___ctx, ___op) \
      AROS_LC2(int, EVP_PKEY_CTX_set_kem_op, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___op), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 784, Amisslext)

#define OSSL_ENCODER_gettable_params(___encoder) \
      AROS_LC1(const OSSL_PARAM *, OSSL_ENCODER_gettable_params, \
 AROS_LCA(OSSL_ENCODER *, (___encoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 785, Amisslext)

#define OSSL_ENCODER_get_params(___encoder, ___params) \
      AROS_LC2(int, OSSL_ENCODER_get_params, \
 AROS_LCA(OSSL_ENCODER *, (___encoder), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 786, Amisslext)

#define OSSL_ENCODER_CTX_set_output_type(___ctx, ___output_type) \
      AROS_LC2(int, OSSL_ENCODER_CTX_set_output_type, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___output_type), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 787, Amisslext)

#define OSSL_ENCODER_CTX_add_encoder(___ctx, ___encoder) \
      AROS_LC2(int, OSSL_ENCODER_CTX_add_encoder, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_ENCODER *, (___encoder), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 788, Amisslext)

#define OSSL_ENCODER_CTX_add_extra(___ctx, ___libctx, ___propq) \
      AROS_LC3(int, OSSL_ENCODER_CTX_add_extra, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 789, Amisslext)

#define OSSL_ENCODER_CTX_get_num_encoders(___ctx) \
      AROS_LC1(int, OSSL_ENCODER_CTX_get_num_encoders, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 790, Amisslext)

#define OSSL_ENCODER_CTX_set_selection(___ctx, ___selection) \
      AROS_LC2(int, OSSL_ENCODER_CTX_set_selection, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___selection), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 791, Amisslext)

#define OSSL_ENCODER_INSTANCE_get_encoder(___encoder_inst) \
      AROS_LC1(OSSL_ENCODER *, OSSL_ENCODER_INSTANCE_get_encoder, \
 AROS_LCA(OSSL_ENCODER_INSTANCE *, (___encoder_inst), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 792, Amisslext)

#define OSSL_ENCODER_INSTANCE_get_encoder_ctx(___encoder_inst) \
      AROS_LC1(void *, OSSL_ENCODER_INSTANCE_get_encoder_ctx, \
 AROS_LCA(OSSL_ENCODER_INSTANCE *, (___encoder_inst), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 793, Amisslext)

#define OSSL_ENCODER_INSTANCE_get_output_type(___encoder_inst) \
      AROS_LC1(const char *, OSSL_ENCODER_INSTANCE_get_output_type, \
 AROS_LCA(OSSL_ENCODER_INSTANCE *, (___encoder_inst), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 794, Amisslext)

#define OSSL_ENCODER_CTX_set_construct(___ctx, ___construct) \
      AROS_LC2(int, OSSL_ENCODER_CTX_set_construct, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_ENCODER_CONSTRUCT *, (___construct), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 795, Amisslext)

#define OSSL_ENCODER_CTX_set_construct_data(___ctx, ___construct_data) \
      AROS_LC2(int, OSSL_ENCODER_CTX_set_construct_data, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(void *, (___construct_data), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 796, Amisslext)

#define OSSL_ENCODER_CTX_set_cleanup(___ctx, ___cleanup) \
      AROS_LC2(int, OSSL_ENCODER_CTX_set_cleanup, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_ENCODER_CLEANUP *, (___cleanup), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 797, Amisslext)

#define OSSL_ENCODER_CTX_set_passphrase_cb(___ctx, ___cb, ___cbarg) \
      AROS_LC3(int, OSSL_ENCODER_CTX_set_passphrase_cb, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_PASSPHRASE_CALLBACK *, (___cb), A1), \
 AROS_LCA(void *, (___cbarg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 798, Amisslext)

#define EVP_PKEY_type_names_do_all(___pkey, ___fn, ___data) \
      AROS_LC3(int, EVP_PKEY_type_names_do_all, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 799, Amisslext)

#define OSSL_DECODER_INSTANCE_get_input_type(___decoder_inst) \
      AROS_LC1(const char *, OSSL_DECODER_INSTANCE_get_input_type, \
 AROS_LCA(OSSL_DECODER_INSTANCE *, (___decoder_inst), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 800, Amisslext)

#define EVP_ASYM_CIPHER_gettable_ctx_params(___ciph) \
      AROS_LC1(const OSSL_PARAM *, EVP_ASYM_CIPHER_gettable_ctx_params, \
 AROS_LCA(const EVP_ASYM_CIPHER *, (___ciph), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 801, Amisslext)

#define EVP_ASYM_CIPHER_settable_ctx_params(___ciph) \
      AROS_LC1(const OSSL_PARAM *, EVP_ASYM_CIPHER_settable_ctx_params, \
 AROS_LCA(const EVP_ASYM_CIPHER *, (___ciph), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 802, Amisslext)

#define EVP_KEM_gettable_ctx_params(___kem) \
      AROS_LC1(const OSSL_PARAM *, EVP_KEM_gettable_ctx_params, \
 AROS_LCA(const EVP_KEM *, (___kem), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 803, Amisslext)

#define EVP_KEM_settable_ctx_params(___kem) \
      AROS_LC1(const OSSL_PARAM *, EVP_KEM_settable_ctx_params, \
 AROS_LCA(const EVP_KEM *, (___kem), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 804, Amisslext)

#define PKCS7_type_is_other(___p7) \
      AROS_LC1(int, PKCS7_type_is_other, \
 AROS_LCA(PKCS7 *, (___p7), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 805, Amisslext)

#define PKCS7_get_octet_string(___p7) \
      AROS_LC1(ASN1_OCTET_STRING *, PKCS7_get_octet_string, \
 AROS_LCA(PKCS7 *, (___p7), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 806, Amisslext)

#define OSSL_DECODER_from_data(___ctx, ___pdata, ___pdata_len) \
      AROS_LC3(int, OSSL_DECODER_from_data, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char **, (___pdata), A1), \
 AROS_LCA(size_t *, (___pdata_len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 807, Amisslext)

#define OSSL_ENCODER_to_data(___ctx, ___pdata, ___pdata_len) \
      AROS_LC3(int, OSSL_ENCODER_to_data, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char **, (___pdata), A1), \
 AROS_LCA(size_t *, (___pdata_len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 808, Amisslext)

#define EVP_PKEY_CTX_get0_libctx(___ctx) \
      AROS_LC1(OSSL_LIB_CTX *, EVP_PKEY_CTX_get0_libctx, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 809, Amisslext)

#define EVP_PKEY_CTX_get0_propq(___ctx) \
      AROS_LC1(const char *, EVP_PKEY_CTX_get0_propq, \
 AROS_LCA(const EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 810, Amisslext)

#define OSSL_DECODER_CTX_set_selection(___ctx, ___selection) \
      AROS_LC2(int, OSSL_DECODER_CTX_set_selection, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___selection), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 811, Amisslext)

#define OSSL_DECODER_CTX_set_input_structure(___ctx, ___input_structure) \
      AROS_LC2(int, OSSL_DECODER_CTX_set_input_structure, \
 AROS_LCA(OSSL_DECODER_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___input_structure), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 812, Amisslext)

#define OSSL_DECODER_INSTANCE_get_input_structure(___decoder_inst, ___was_set) \
      AROS_LC2(const char *, OSSL_DECODER_INSTANCE_get_input_structure, \
 AROS_LCA(OSSL_DECODER_INSTANCE *, (___decoder_inst), A0), \
 AROS_LCA(int *, (___was_set), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 813, Amisslext)

#define OSSL_ENCODER_CTX_set_output_structure(___ctx, ___output_structure) \
      AROS_LC2(int, OSSL_ENCODER_CTX_set_output_structure, \
 AROS_LCA(OSSL_ENCODER_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___output_structure), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 814, Amisslext)

#define OSSL_ENCODER_INSTANCE_get_output_structure(___encoder_inst) \
      AROS_LC1(const char *, OSSL_ENCODER_INSTANCE_get_output_structure, \
 AROS_LCA(OSSL_ENCODER_INSTANCE *, (___encoder_inst), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 815, Amisslext)

#define PEM_write_bio_PrivateKey_ex(___out, ___x, ___enc, ___kstr, ___klen, ___cb, ___u, ___libctx, ___propq) \
      AROS_LC9(int, PEM_write_bio_PrivateKey_ex, \
 AROS_LCA(BIO *, (___out), A0), \
 AROS_LCA(const EVP_PKEY *, (___x), A1), \
 AROS_LCA(const EVP_CIPHER *, (___enc), A2), \
 AROS_LCA(const unsigned char *, (___kstr), A3), \
 AROS_LCA(int, (___klen), D0), \
 AROS_LCA(pem_password_cb *, (___cb), D1), \
 AROS_LCA(void *, (___u), D2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D3), \
 AROS_LCA(const char *, (___propq), D4), \
     struct Library *, AMISSLEXT_BASE_NAME, 816, Amisslext)

#define PEM_write_bio_PUBKEY_ex(___out, ___x, ___libctx, ___propq) \
      AROS_LC4(int, PEM_write_bio_PUBKEY_ex, \
 AROS_LCA(BIO *, (___out), A0), \
 AROS_LCA(const EVP_PKEY *, (___x), A1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 817, Amisslext)

#define EVP_PKEY_get_group_name(___pkey, ___name, ___name_sz, ___gname_len) \
      AROS_LC4(int, EVP_PKEY_get_group_name, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(char *, (___name), A1), \
 AROS_LCA(size_t, (___name_sz), D0), \
 AROS_LCA(size_t *, (___gname_len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 818, Amisslext)

#define CRYPTO_atomic_or(___val, ___op, ___ret, ___lock) \
      AROS_LC4(int, CRYPTO_atomic_or, \
 AROS_LCA(uint64_t *, (___val), A0), \
 AROS_LCA(uint64_t, (___op), D0), \
 AROS_LCA(uint64_t *, (___ret), A1), \
 AROS_LCA(CRYPTO_RWLOCK *, (___lock), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 819, Amisslext)

#define CRYPTO_atomic_load(___val, ___ret, ___lock) \
      AROS_LC3(int, CRYPTO_atomic_load, \
 AROS_LCA(uint64_t *, (___val), A0), \
 AROS_LCA(uint64_t *, (___ret), A1), \
 AROS_LCA(CRYPTO_RWLOCK *, (___lock), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 820, Amisslext)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_md(___ctx, ___md) \
      AROS_LC2(int, EVP_PKEY_CTX_set_rsa_pss_keygen_md, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD *, (___md), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 821, Amisslext)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(___ctx, ___mdname, ___mdprops) \
      AROS_LC3(int, EVP_PKEY_CTX_set_rsa_pss_keygen_md_name, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___mdname), A1), \
 AROS_LCA(const char *, (___mdprops), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 822, Amisslext)

#define EVP_PKEY_settable_params(___pkey) \
      AROS_LC1(const OSSL_PARAM *, EVP_PKEY_settable_params, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 823, Amisslext)

#define EVP_PKEY_set_params(___pkey, ___params) \
      AROS_LC2(int, EVP_PKEY_set_params, \
 AROS_LCA(EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 824, Amisslext)

#define EVP_PKEY_set_int_param(___pkey, ___key_name, ___in) \
      AROS_LC3(int, EVP_PKEY_set_int_param, \
 AROS_LCA(EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(const char *, (___key_name), A1), \
 AROS_LCA(int, (___in), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 825, Amisslext)

#define EVP_PKEY_set_size_t_param(___pkey, ___key_name, ___in) \
      AROS_LC3(int, EVP_PKEY_set_size_t_param, \
 AROS_LCA(EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(const char *, (___key_name), A1), \
 AROS_LCA(size_t, (___in), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 826, Amisslext)

#define EVP_PKEY_set_bn_param(___pkey, ___key_name, ___bn) \
      AROS_LC3(int, EVP_PKEY_set_bn_param, \
 AROS_LCA(EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(const char *, (___key_name), A1), \
 AROS_LCA(const BIGNUM *, (___bn), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 827, Amisslext)

#define EVP_PKEY_set_utf8_string_param(___pkey, ___key_name, ___str) \
      AROS_LC3(int, EVP_PKEY_set_utf8_string_param, \
 AROS_LCA(EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(const char *, (___key_name), A1), \
 AROS_LCA(const char *, (___str), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 828, Amisslext)

#define EVP_PKEY_set_octet_string_param(___pkey, ___key_name, ___buf, ___bsize) \
      AROS_LC4(int, EVP_PKEY_set_octet_string_param, \
 AROS_LCA(EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(const char *, (___key_name), A1), \
 AROS_LCA(const unsigned char *, (___buf), A2), \
 AROS_LCA(size_t, (___bsize), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 829, Amisslext)

#define EVP_PKEY_get_ec_point_conv_form(___pkey) \
      AROS_LC1(int, EVP_PKEY_get_ec_point_conv_form, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 830, Amisslext)

#define EVP_PKEY_get_field_type(___pkey) \
      AROS_LC1(int, EVP_PKEY_get_field_type, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 831, Amisslext)

#define EVP_PKEY_get_params(___pkey, ___params) \
      AROS_LC2(int, EVP_PKEY_get_params, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 832, Amisslext)

#define EVP_PKEY_fromdata_init(___ctx) \
      AROS_LC1(int, EVP_PKEY_fromdata_init, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 833, Amisslext)

#define EVP_PKEY_fromdata_settable(___ctx, ___selection) \
      AROS_LC2(const OSSL_PARAM *, EVP_PKEY_fromdata_settable, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___selection), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 834, Amisslext)

#define EVP_PKEY_param_check_quick(___ctx) \
      AROS_LC1(int, EVP_PKEY_param_check_quick, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 835, Amisslext)

#define EVP_PKEY_public_check_quick(___ctx) \
      AROS_LC1(int, EVP_PKEY_public_check_quick, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 836, Amisslext)

#define EVP_PKEY_CTX_is_a(___ctx, ___keytype) \
      AROS_LC2(int, EVP_PKEY_CTX_is_a, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___keytype), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 837, Amisslext)

#define EVP_CIPHER_CTX_settable_params(___ctx) \
      AROS_LC1(const OSSL_PARAM *, EVP_CIPHER_CTX_settable_params, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 838, Amisslext)

#define EVP_CIPHER_CTX_gettable_params(___ctx) \
      AROS_LC1(const OSSL_PARAM *, EVP_CIPHER_CTX_gettable_params, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 839, Amisslext)

#define EVP_KDF_CTX_gettable_params(___ctx) \
      AROS_LC1(const OSSL_PARAM *, EVP_KDF_CTX_gettable_params, \
 AROS_LCA(EVP_KDF_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 840, Amisslext)

#define EVP_KDF_CTX_settable_params(___ctx) \
      AROS_LC1(const OSSL_PARAM *, EVP_KDF_CTX_settable_params, \
 AROS_LCA(EVP_KDF_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 841, Amisslext)

#define EVP_MAC_CTX_gettable_params(___ctx) \
      AROS_LC1(const OSSL_PARAM *, EVP_MAC_CTX_gettable_params, \
 AROS_LCA(EVP_MAC_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 842, Amisslext)

#define EVP_MAC_CTX_settable_params(___ctx) \
      AROS_LC1(const OSSL_PARAM *, EVP_MAC_CTX_settable_params, \
 AROS_LCA(EVP_MAC_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 843, Amisslext)

#define EVP_RAND_CTX_gettable_params(___ctx) \
      AROS_LC1(const OSSL_PARAM *, EVP_RAND_CTX_gettable_params, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 844, Amisslext)

#define EVP_RAND_CTX_settable_params(___ctx) \
      AROS_LC1(const OSSL_PARAM *, EVP_RAND_CTX_settable_params, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 845, Amisslext)

#define RAND_set_DRBG_type(___ctx, ___drbg, ___propq, ___cipher, ___digest) \
      AROS_LC5(int, RAND_set_DRBG_type, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___drbg), A1), \
 AROS_LCA(const char *, (___propq), A2), \
 AROS_LCA(const char *, (___cipher), A3), \
 AROS_LCA(const char *, (___digest), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 846, Amisslext)

#define RAND_set_seed_source_type(___ctx, ___seed, ___propq) \
      AROS_LC3(int, RAND_set_seed_source_type, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___seed), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 847, Amisslext)

#define BN_mod_exp_mont_consttime_x2(___rr1, ___a1, ___p1, ___m1, ___in_mont1, ___rr2, ___a2, ___p2, ___m2, ___in_mont2, ___ctx) \
      AROS_LC11(int, BN_mod_exp_mont_consttime_x2, \
 AROS_LCA(BIGNUM *, (___rr1), A0), \
 AROS_LCA(const BIGNUM *, (___a1), A1), \
 AROS_LCA(const BIGNUM *, (___p1), A2), \
 AROS_LCA(const BIGNUM *, (___m1), A3), \
 AROS_LCA(BN_MONT_CTX *, (___in_mont1), D0), \
 AROS_LCA(BIGNUM *, (___rr2), D1), \
 AROS_LCA(const BIGNUM *, (___a2), D2), \
 AROS_LCA(const BIGNUM *, (___p2), D3), \
 AROS_LCA(const BIGNUM *, (___m2), D4), \
 AROS_LCA(BN_MONT_CTX *, (___in_mont2), D5), \
 AROS_LCA(BN_CTX *, (___ctx), D6), \
     struct Library *, AMISSLEXT_BASE_NAME, 848, Amisslext)

#define BIO_f_readbuffer() \
      AROS_LC0(const BIO_METHOD *, BIO_f_readbuffer, \
     struct Library *, AMISSLEXT_BASE_NAME, 849, Amisslext)

#define OSSL_ESS_check_signing_certs(___ss, ___ssv2, ___chain, ___require_signing_cert) \
      AROS_LC4(int, OSSL_ESS_check_signing_certs, \
 AROS_LCA(const ESS_SIGNING_CERT *, (___ss), A0), \
 AROS_LCA(const ESS_SIGNING_CERT_V2 *, (___ssv2), A1), \
 AROS_LCA(const STACK_OF(X509) *, (___chain), A2), \
 AROS_LCA(int, (___require_signing_cert), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 850, Amisslext)

#define OSSL_ESS_signing_cert_new_init(___signcert, ___certs, ___set_issuer_serial) \
      AROS_LC3(ESS_SIGNING_CERT *, OSSL_ESS_signing_cert_new_init, \
 AROS_LCA(const X509 *, (___signcert), A0), \
 AROS_LCA(const STACK_OF(X509) *, (___certs), A1), \
 AROS_LCA(int, (___set_issuer_serial), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 851, Amisslext)

#define OSSL_ESS_signing_cert_v2_new_init(___hash_alg, ___signcert, ___certs, ___set_issuer_serial) \
      AROS_LC4(ESS_SIGNING_CERT_V2 *, OSSL_ESS_signing_cert_v2_new_init, \
 AROS_LCA(const EVP_MD *, (___hash_alg), A0), \
 AROS_LCA(const X509 *, (___signcert), A1), \
 AROS_LCA(const STACK_OF(X509) *, (___certs), A2), \
 AROS_LCA(int, (___set_issuer_serial), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 852, Amisslext)

#define ESS_SIGNING_CERT_it() \
      AROS_LC0(const ASN1_ITEM *, ESS_SIGNING_CERT_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 853, Amisslext)

#define ESS_SIGNING_CERT_V2_it() \
      AROS_LC0(const ASN1_ITEM *, ESS_SIGNING_CERT_V2_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 854, Amisslext)

#define EVP_Q_digest(___libctx, ___name, ___propq, ___data, ___datalen, ___md, ___mdlen) \
      AROS_LC7(int, EVP_Q_digest, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(const char *, (___propq), A2), \
 AROS_LCA(const void *, (___data), A3), \
 AROS_LCA(size_t, (___datalen), D0), \
 AROS_LCA(unsigned char *, (___md), D1), \
 AROS_LCA(size_t *, (___mdlen), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 855, Amisslext)

#define EVP_DigestInit_ex2(___ctx, ___type, ___params) \
      AROS_LC3(int, EVP_DigestInit_ex2, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_MD *, (___type), A1), \
 AROS_LCA(const OSSL_PARAM *, (___params), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 856, Amisslext)

#define EVP_EncryptInit_ex2(___ctx, ___cipher, ___key, ___iv, ___params) \
      AROS_LC5(int, EVP_EncryptInit_ex2, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A1), \
 AROS_LCA(const unsigned char *, (___key), A2), \
 AROS_LCA(const unsigned char *, (___iv), A3), \
 AROS_LCA(const OSSL_PARAM *, (___params), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 857, Amisslext)

#define EVP_DecryptInit_ex2(___ctx, ___cipher, ___key, ___iv, ___params) \
      AROS_LC5(int, EVP_DecryptInit_ex2, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A1), \
 AROS_LCA(const unsigned char *, (___key), A2), \
 AROS_LCA(const unsigned char *, (___iv), A3), \
 AROS_LCA(const OSSL_PARAM *, (___params), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 858, Amisslext)

#define EVP_CipherInit_ex2(___ctx, ___cipher, ___key, ___iv, ___enc, ___params) \
      AROS_LC6(int, EVP_CipherInit_ex2, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A1), \
 AROS_LCA(const unsigned char *, (___key), A2), \
 AROS_LCA(const unsigned char *, (___iv), A3), \
 AROS_LCA(int, (___enc), D0), \
 AROS_LCA(const OSSL_PARAM *, (___params), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 859, Amisslext)

#define EVP_PKEY_sign_init_ex(___ctx, ___params) \
      AROS_LC2(int, EVP_PKEY_sign_init_ex, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 860, Amisslext)

#define EVP_PKEY_verify_init_ex(___ctx, ___params) \
      AROS_LC2(int, EVP_PKEY_verify_init_ex, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 861, Amisslext)

#define EVP_PKEY_verify_recover_init_ex(___ctx, ___params) \
      AROS_LC2(int, EVP_PKEY_verify_recover_init_ex, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 862, Amisslext)

#define EVP_PKEY_encrypt_init_ex(___ctx, ___params) \
      AROS_LC2(int, EVP_PKEY_encrypt_init_ex, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 863, Amisslext)

#define EVP_PKEY_decrypt_init_ex(___ctx, ___params) \
      AROS_LC2(int, EVP_PKEY_decrypt_init_ex, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 864, Amisslext)

#define EVP_PKEY_derive_init_ex(___ctx, ___params) \
      AROS_LC2(int, EVP_PKEY_derive_init_ex, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 865, Amisslext)

#define TS_RESP_CTX_new_ex(___libctx, ___propq) \
      AROS_LC2(TS_RESP_CTX *, TS_RESP_CTX_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 866, Amisslext)

#define X509_REQ_new_ex(___libctx, ___propq) \
      AROS_LC2(X509_REQ *, X509_REQ_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 867, Amisslext)

#define EVP_PKEY_dup(___pkey) \
      AROS_LC1(EVP_PKEY *, EVP_PKEY_dup, \
 AROS_LCA(EVP_PKEY *, (___pkey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 868, Amisslext)

#define RSA_PSS_PARAMS_dup(___a) \
      AROS_LC1(RSA_PSS_PARAMS *, RSA_PSS_PARAMS_dup, \
 AROS_LCA(const RSA_PSS_PARAMS *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 869, Amisslext)

#define EVP_PKEY_derive_set_peer_ex(___ctx, ___peer, ___validate_peer) \
      AROS_LC3(int, EVP_PKEY_derive_set_peer_ex, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_PKEY *, (___peer), A1), \
 AROS_LCA(int, (___validate_peer), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 870, Amisslext)

#define OSSL_DECODER_get0_name(___decoder) \
      AROS_LC1(const char *, OSSL_DECODER_get0_name, \
 AROS_LCA(const OSSL_DECODER *, (___decoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 871, Amisslext)

#define OSSL_ENCODER_get0_name(___kdf) \
      AROS_LC1(const char *, OSSL_ENCODER_get0_name, \
 AROS_LCA(const OSSL_ENCODER *, (___kdf), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 872, Amisslext)

#define OSSL_DECODER_get0_description(___decoder) \
      AROS_LC1(const char *, OSSL_DECODER_get0_description, \
 AROS_LCA(const OSSL_DECODER *, (___decoder), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 873, Amisslext)

#define OSSL_ENCODER_get0_description(___kdf) \
      AROS_LC1(const char *, OSSL_ENCODER_get0_description, \
 AROS_LCA(const OSSL_ENCODER *, (___kdf), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 874, Amisslext)

#define OSSL_STORE_LOADER_get0_description(___loader) \
      AROS_LC1(const char *, OSSL_STORE_LOADER_get0_description, \
 AROS_LCA(const OSSL_STORE_LOADER *, (___loader), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 875, Amisslext)

#define EVP_MD_get0_description(___md) \
      AROS_LC1(const char *, EVP_MD_get0_description, \
 AROS_LCA(const EVP_MD *, (___md), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 876, Amisslext)

#define EVP_CIPHER_get0_description(___cipher) \
      AROS_LC1(const char *, EVP_CIPHER_get0_description, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 877, Amisslext)

#define EVP_MAC_get0_description(___mac) \
      AROS_LC1(const char *, EVP_MAC_get0_description, \
 AROS_LCA(const EVP_MAC *, (___mac), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 878, Amisslext)

#define EVP_RAND_get0_description(___md) \
      AROS_LC1(const char *, EVP_RAND_get0_description, \
 AROS_LCA(const EVP_RAND *, (___md), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 879, Amisslext)

#define EVP_PKEY_get0_description(___pkey) \
      AROS_LC1(const char *, EVP_PKEY_get0_description, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 880, Amisslext)

#define EVP_KEYMGMT_get0_description(___keymgmt) \
      AROS_LC1(const char *, EVP_KEYMGMT_get0_description, \
 AROS_LCA(const EVP_KEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 881, Amisslext)

#define EVP_SIGNATURE_get0_description(___signature) \
      AROS_LC1(const char *, EVP_SIGNATURE_get0_description, \
 AROS_LCA(const EVP_SIGNATURE *, (___signature), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 882, Amisslext)

#define EVP_ASYM_CIPHER_get0_description(___cipher) \
      AROS_LC1(const char *, EVP_ASYM_CIPHER_get0_description, \
 AROS_LCA(const EVP_ASYM_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 883, Amisslext)

#define EVP_KEM_get0_description(___wrap) \
      AROS_LC1(const char *, EVP_KEM_get0_description, \
 AROS_LCA(const EVP_KEM *, (___wrap), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 884, Amisslext)

#define EVP_KEYEXCH_get0_description(___keyexch) \
      AROS_LC1(const char *, EVP_KEYEXCH_get0_description, \
 AROS_LCA(const EVP_KEYEXCH *, (___keyexch), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 885, Amisslext)

#define EVP_KDF_get0_description(___kdf) \
      AROS_LC1(const char *, EVP_KDF_get0_description, \
 AROS_LCA(const EVP_KDF *, (___kdf), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 886, Amisslext)

#define OPENSSL_sk_find_all(___st, ___data, ___pnum) \
      AROS_LC3(int, OPENSSL_sk_find_all, \
 AROS_LCA(OPENSSL_STACK *, (___st), A0), \
 AROS_LCA(const void *, (___data), A1), \
 AROS_LCA(int *, (___pnum), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 887, Amisslext)

#define X509_CRL_new_ex(___libctx, ___propq) \
      AROS_LC2(X509_CRL *, X509_CRL_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 888, Amisslext)

#define OSSL_PARAM_dup(___p) \
      AROS_LC1(OSSL_PARAM *, OSSL_PARAM_dup, \
 AROS_LCA(const OSSL_PARAM *, (___p), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 889, Amisslext)

#define OSSL_PARAM_merge(___p1, ___p2) \
      AROS_LC2(OSSL_PARAM *, OSSL_PARAM_merge, \
 AROS_LCA(const OSSL_PARAM *, (___p1), A0), \
 AROS_LCA(const OSSL_PARAM *, (___p2), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 890, Amisslext)

#define OSSL_PARAM_free(___p) \
      AROS_LC1(void, OSSL_PARAM_free, \
 AROS_LCA(OSSL_PARAM *, (___p), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 891, Amisslext)

#define EVP_PKEY_todata(___pkey, ___selection, ___params) \
      AROS_LC3(int, EVP_PKEY_todata, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(int, (___selection), D0), \
 AROS_LCA(OSSL_PARAM **, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 892, Amisslext)

#define EVP_PKEY_export(___pkey, ___selection, ___export_cb, ___export_cbarg) \
      AROS_LC4(int, EVP_PKEY_export, \
 AROS_LCA(const EVP_PKEY *, (___pkey), A0), \
 AROS_LCA(int, (___selection), D0), \
 AROS_LCA(OSSL_CALLBACK *, (___export_cb), A1), \
 AROS_LCA(void *, (___export_cbarg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 893, Amisslext)

#define EVP_MD_CTX_get0_md(___ctx) \
      AROS_LC1(const EVP_MD *, EVP_MD_CTX_get0_md, \
 AROS_LCA(const EVP_MD_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 894, Amisslext)

#define EVP_MD_CTX_get1_md(___ctx) \
      AROS_LC1(EVP_MD *, EVP_MD_CTX_get1_md, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 895, Amisslext)

#define EVP_CIPHER_CTX_get0_cipher(___ctx) \
      AROS_LC1(const EVP_CIPHER *, EVP_CIPHER_CTX_get0_cipher, \
 AROS_LCA(const EVP_CIPHER_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 896, Amisslext)

#define EVP_CIPHER_CTX_get1_cipher(___ctx) \
      AROS_LC1(EVP_CIPHER *, EVP_CIPHER_CTX_get1_cipher, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 897, Amisslext)

#define OSSL_LIB_CTX_get0_global_default() \
      AROS_LC0(OSSL_LIB_CTX *, OSSL_LIB_CTX_get0_global_default, \
     struct Library *, AMISSLEXT_BASE_NAME, 898, Amisslext)

#define EVP_SIGNATURE_get0_name(___signature) \
      AROS_LC1(const char *, EVP_SIGNATURE_get0_name, \
 AROS_LCA(const EVP_SIGNATURE *, (___signature), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 899, Amisslext)

#define EVP_ASYM_CIPHER_get0_name(___cipher) \
      AROS_LC1(const char *, EVP_ASYM_CIPHER_get0_name, \
 AROS_LCA(const EVP_ASYM_CIPHER *, (___cipher), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 900, Amisslext)

#define EVP_KEM_get0_name(___wrap) \
      AROS_LC1(const char *, EVP_KEM_get0_name, \
 AROS_LCA(const EVP_KEM *, (___wrap), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 901, Amisslext)

#define EVP_KEYEXCH_get0_name(___keyexch) \
      AROS_LC1(const char *, EVP_KEYEXCH_get0_name, \
 AROS_LCA(const EVP_KEYEXCH *, (___keyexch), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 902, Amisslext)

#define PKCS5_v2_PBE_keyivgen_ex(___ctx, ___pass, ___passlen, ___param, ___cipher, ___md, ___en_de, ___libctx, ___propq) \
      AROS_LC9(int, PKCS5_v2_PBE_keyivgen_ex, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(ASN1_TYPE *, (___param), A2), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A3), \
 AROS_LCA(const EVP_MD *, (___md), D1), \
 AROS_LCA(int, (___en_de), D2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D3), \
 AROS_LCA(const char *, (___propq), D4), \
     struct Library *, AMISSLEXT_BASE_NAME, 903, Amisslext)

#define EVP_PBE_scrypt_amiga_1(___pass, ___passlen, ___salt, ___N, ___r, ___p, ___maxmem, ___moreargs) \
      AROS_LC8(int, EVP_PBE_scrypt_amiga_1, \
 AROS_LCA(const char *, (___pass), A0), \
 AROS_LCA(size_t, (___passlen), A1), \
 AROS_LCA(const unsigned char *, (___salt), A2), \
 AROS_LCA(uint64_t, (___N), D0), \
 AROS_LCA(uint64_t, (___r), D2), \
 AROS_LCA(uint64_t, (___p), D4), \
 AROS_LCA(uint64_t, (___maxmem), D6), \
 AROS_LCA(void *, (___moreargs), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 904, Amisslext)

#define EVP_PBE_scrypt_amiga_2(___saltlen, ___key, ___keylen) \
      AROS_LC3(void *, EVP_PBE_scrypt_amiga_2, \
 AROS_LCA(size_t, (___saltlen), D0), \
 AROS_LCA(unsigned char *, (___key), A0), \
 AROS_LCA(size_t, (___keylen), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 905, Amisslext)

#define EVP_PBE_scrypt_ex_amiga_2(___saltlen, ___key, ___keylen, ___ctx, ___propq) \
      AROS_LC5(void *, EVP_PBE_scrypt_ex_amiga_2, \
 AROS_LCA(size_t, (___saltlen), D0), \
 AROS_LCA(unsigned char *, (___key), A0), \
 AROS_LCA(size_t, (___keylen), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 906, Amisslext)

#define PKCS5_v2_scrypt_keyivgen_ex(___ctx, ___pass, ___passlen, ___param, ___c, ___md, ___en_de, ___libctx, ___propq) \
      AROS_LC9(int, PKCS5_v2_scrypt_keyivgen_ex, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(ASN1_TYPE *, (___param), A2), \
 AROS_LCA(const EVP_CIPHER *, (___c), A3), \
 AROS_LCA(const EVP_MD *, (___md), D1), \
 AROS_LCA(int, (___en_de), D2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D3), \
 AROS_LCA(const char *, (___propq), D4), \
     struct Library *, AMISSLEXT_BASE_NAME, 907, Amisslext)

#define EVP_PBE_CipherInit_ex(___pbe_obj, ___pass, ___passlen, ___param, ___ctx, ___en_de, ___libctx, ___propq) \
      AROS_LC8(int, EVP_PBE_CipherInit_ex, \
 AROS_LCA(ASN1_OBJECT *, (___pbe_obj), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(ASN1_TYPE *, (___param), A2), \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A3), \
 AROS_LCA(int, (___en_de), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D2), \
 AROS_LCA(const char *, (___propq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 908, Amisslext)

#define EVP_PBE_find_ex(___type, ___pbe_nid, ___pcnid, ___pmnid, ___pkeygen, ___pkeygen_ex) \
      AROS_LC6(int, EVP_PBE_find_ex, \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(int, (___pbe_nid), D1), \
 AROS_LCA(int *, (___pcnid), A0), \
 AROS_LCA(int *, (___pmnid), A1), \
 AROS_LCA(EVP_PBE_KEYGEN **, (___pkeygen), A2), \
 AROS_LCA(EVP_PBE_KEYGEN_EX **, (___pkeygen_ex), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 909, Amisslext)

#define PKCS12_SAFEBAG_create_pkcs8_encrypt_ex(___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8inf, ___ctx, ___propq) \
      AROS_LC9(PKCS12_SAFEBAG *, PKCS12_SAFEBAG_create_pkcs8_encrypt_ex, \
 AROS_LCA(int, (___pbe_nid), D0), \
 AROS_LCA(const char *, (___pass), A0), \
 AROS_LCA(int, (___passlen), D1), \
 AROS_LCA(unsigned char *, (___salt), A1), \
 AROS_LCA(int, (___saltlen), D2), \
 AROS_LCA(int, (___iter), D3), \
 AROS_LCA(PKCS8_PRIV_KEY_INFO *, (___p8inf), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A3), \
 AROS_LCA(const char *, (___propq), D4), \
     struct Library *, AMISSLEXT_BASE_NAME, 910, Amisslext)

#define PKCS8_decrypt_ex(___p8, ___pass, ___passlen, ___ctx, ___propq) \
      AROS_LC5(PKCS8_PRIV_KEY_INFO *, PKCS8_decrypt_ex, \
 AROS_LCA(const X509_SIG *, (___p8), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 911, Amisslext)

#define PKCS12_decrypt_skey_ex(___bag, ___pass, ___passlen, ___ctx, ___propq) \
      AROS_LC5(PKCS8_PRIV_KEY_INFO *, PKCS12_decrypt_skey_ex, \
 AROS_LCA(const PKCS12_SAFEBAG *, (___bag), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 912, Amisslext)

#define PKCS8_encrypt_ex(___pbe_nid, ___cipher, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8, ___ctx, ___propq) \
      AROS_LC10(X509_SIG *, PKCS8_encrypt_ex, \
 AROS_LCA(int, (___pbe_nid), D0), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(int, (___passlen), D1), \
 AROS_LCA(unsigned char *, (___salt), A2), \
 AROS_LCA(int, (___saltlen), D2), \
 AROS_LCA(int, (___iter), D3), \
 AROS_LCA(PKCS8_PRIV_KEY_INFO *, (___p8), A3), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), D4), \
 AROS_LCA(const char *, (___propq), D5), \
     struct Library *, AMISSLEXT_BASE_NAME, 913, Amisslext)

#define PKCS8_set0_pbe_ex(___pass, ___passlen, ___p8inf, ___pbe, ___ctx, ___propq) \
      AROS_LC6(X509_SIG *, PKCS8_set0_pbe_ex, \
 AROS_LCA(const char *, (___pass), A0), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(PKCS8_PRIV_KEY_INFO *, (___p8inf), A1), \
 AROS_LCA(X509_ALGOR *, (___pbe), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A3), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 914, Amisslext)

#define PKCS12_pack_p7encdata_ex(___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___bags, ___ctx, ___propq) \
      AROS_LC9(PKCS7 *, PKCS12_pack_p7encdata_ex, \
 AROS_LCA(int, (___pbe_nid), D0), \
 AROS_LCA(const char *, (___pass), A0), \
 AROS_LCA(int, (___passlen), D1), \
 AROS_LCA(unsigned char *, (___salt), A1), \
 AROS_LCA(int, (___saltlen), D2), \
 AROS_LCA(int, (___iter), D3), \
 AROS_LCA(STACK_OF(PKCS12_SAFEBAG) *, (___bags), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A3), \
 AROS_LCA(const char *, (___propq), D4), \
     struct Library *, AMISSLEXT_BASE_NAME, 915, Amisslext)

#define PKCS12_pbe_crypt_ex(___algor, ___pass, ___passlen, ___in, ___inlen, ___data, ___datalen, ___en_de, ___libctx, ___propq) \
      AROS_LC10(unsigned char *, PKCS12_pbe_crypt_ex, \
 AROS_LCA(const X509_ALGOR *, (___algor), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(const unsigned char *, (___in), A2), \
 AROS_LCA(int, (___inlen), D1), \
 AROS_LCA(unsigned char **, (___data), A3), \
 AROS_LCA(int *, (___datalen), D2), \
 AROS_LCA(int, (___en_de), D3), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D4), \
 AROS_LCA(const char *, (___propq), D5), \
     struct Library *, AMISSLEXT_BASE_NAME, 916, Amisslext)

#define PKCS12_item_decrypt_d2i_ex(___algor, ___it, ___pass, ___passlen, ___oct, ___zbuf, ___libctx, ___propq) \
      AROS_LC8(void *, PKCS12_item_decrypt_d2i_ex, \
 AROS_LCA(const X509_ALGOR *, (___algor), A0), \
 AROS_LCA(const ASN1_ITEM *, (___it), A1), \
 AROS_LCA(const char *, (___pass), A2), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(const ASN1_OCTET_STRING *, (___oct), A3), \
 AROS_LCA(int, (___zbuf), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D2), \
 AROS_LCA(const char *, (___propq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 917, Amisslext)

#define PKCS12_item_i2d_encrypt_ex(___algor, ___it, ___pass, ___passlen, ___obj, ___zbuf, ___ctx, ___propq) \
      AROS_LC8(ASN1_OCTET_STRING *, PKCS12_item_i2d_encrypt_ex, \
 AROS_LCA(X509_ALGOR *, (___algor), A0), \
 AROS_LCA(const ASN1_ITEM *, (___it), A1), \
 AROS_LCA(const char *, (___pass), A2), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(void *, (___obj), A3), \
 AROS_LCA(int, (___zbuf), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), D2), \
 AROS_LCA(const char *, (___propq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 918, Amisslext)

#define PKCS12_init_ex(___mode, ___ctx, ___propq) \
      AROS_LC3(PKCS12 *, PKCS12_init_ex, \
 AROS_LCA(int, (___mode), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 919, Amisslext)

#define PKCS12_key_gen_asc_ex(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type, ___ctx, ___propq) \
      AROS_LC11(int, PKCS12_key_gen_asc_ex, \
 AROS_LCA(const char *, (___pass), A0), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(unsigned char *, (___salt), A1), \
 AROS_LCA(int, (___saltlen), D1), \
 AROS_LCA(int, (___id), D2), \
 AROS_LCA(int, (___iter), D3), \
 AROS_LCA(int, (___n), D4), \
 AROS_LCA(unsigned char *, (___out), A2), \
 AROS_LCA(const EVP_MD *, (___md_type), A3), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), D5), \
 AROS_LCA(const char *, (___propq), D6), \
     struct Library *, AMISSLEXT_BASE_NAME, 920, Amisslext)

#define PKCS12_key_gen_uni_ex(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type, ___ctx, ___propq) \
      AROS_LC11(int, PKCS12_key_gen_uni_ex, \
 AROS_LCA(unsigned char *, (___pass), A0), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(unsigned char *, (___salt), A1), \
 AROS_LCA(int, (___saltlen), D1), \
 AROS_LCA(int, (___id), D2), \
 AROS_LCA(int, (___iter), D3), \
 AROS_LCA(int, (___n), D4), \
 AROS_LCA(unsigned char *, (___out), A2), \
 AROS_LCA(const EVP_MD *, (___md_type), A3), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), D5), \
 AROS_LCA(const char *, (___propq), D6), \
     struct Library *, AMISSLEXT_BASE_NAME, 921, Amisslext)

#define PKCS12_key_gen_utf8_ex(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type, ___ctx, ___propq) \
      AROS_LC11(int, PKCS12_key_gen_utf8_ex, \
 AROS_LCA(const char *, (___pass), A0), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(unsigned char *, (___salt), A1), \
 AROS_LCA(int, (___saltlen), D1), \
 AROS_LCA(int, (___id), D2), \
 AROS_LCA(int, (___iter), D3), \
 AROS_LCA(int, (___n), D4), \
 AROS_LCA(unsigned char *, (___out), A2), \
 AROS_LCA(const EVP_MD *, (___md_type), A3), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), D5), \
 AROS_LCA(const char *, (___propq), D6), \
     struct Library *, AMISSLEXT_BASE_NAME, 922, Amisslext)

#define PKCS12_PBE_keyivgen_ex(___ctx, ___pass, ___passlen, ___param, ___cipher, ___md_type, ___en_de, ___libctx, ___propq) \
      AROS_LC9(int, PKCS12_PBE_keyivgen_ex, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(ASN1_TYPE *, (___param), A2), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A3), \
 AROS_LCA(const EVP_MD *, (___md_type), D1), \
 AROS_LCA(int, (___en_de), D2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D3), \
 AROS_LCA(const char *, (___propq), D4), \
     struct Library *, AMISSLEXT_BASE_NAME, 923, Amisslext)

#define PKCS12_create_ex(___pass, ___name, ___pkey, ___cert, ___ca, ___nid_key, ___nid_cert, ___iter, ___mac_iter, ___keytype, ___ctx, ___propq) \
      AROS_LC12(PKCS12 *, PKCS12_create_ex, \
 AROS_LCA(const char *, (___pass), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(EVP_PKEY *, (___pkey), A2), \
 AROS_LCA(X509 *, (___cert), A3), \
 AROS_LCA(STACK_OF(X509) *, (___ca), D0), \
 AROS_LCA(int, (___nid_key), D1), \
 AROS_LCA(int, (___nid_cert), D2), \
 AROS_LCA(int, (___iter), D3), \
 AROS_LCA(int, (___mac_iter), D4), \
 AROS_LCA(int, (___keytype), D5), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), D6), \
 AROS_LCA(const char *, (___propq), D7), \
     struct Library *, AMISSLEXT_BASE_NAME, 924, Amisslext)

#define PKCS12_add_key_ex(___pbags, ___key, ___key_usage, ___iter, ___key_nid, ___pass, ___ctx, ___propq) \
      AROS_LC8(PKCS12_SAFEBAG *, PKCS12_add_key_ex, \
 AROS_LCA(STACK_OF(PKCS12_SAFEBAG) **, (___pbags), A0), \
 AROS_LCA(EVP_PKEY *, (___key), A1), \
 AROS_LCA(int, (___key_usage), D0), \
 AROS_LCA(int, (___iter), D1), \
 AROS_LCA(int, (___key_nid), D2), \
 AROS_LCA(const char *, (___pass), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A3), \
 AROS_LCA(const char *, (___propq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 925, Amisslext)

#define PKCS12_add_safe_ex(___psafes, ___bags, ___safe_nid, ___iter, ___pass, ___ctx, ___propq) \
      AROS_LC7(int, PKCS12_add_safe_ex, \
 AROS_LCA(STACK_OF(PKCS7) **, (___psafes), A0), \
 AROS_LCA(STACK_OF(PKCS12_SAFEBAG) *, (___bags), A1), \
 AROS_LCA(int, (___safe_nid), D0), \
 AROS_LCA(int, (___iter), D1), \
 AROS_LCA(const char *, (___pass), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A3), \
 AROS_LCA(const char *, (___propq), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 926, Amisslext)

#define PKCS12_add_safes_ex(___safes, ___p7_nid, ___ctx, ___propq) \
      AROS_LC4(PKCS12 *, PKCS12_add_safes_ex, \
 AROS_LCA(STACK_OF(PKCS7) *, (___safes), A0), \
 AROS_LCA(int, (___p7_nid), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 927, Amisslext)

#define PKCS5_pbe_set0_algor_ex(___algor, ___alg, ___iter, ___salt, ___saltlen, ___libctx) \
      AROS_LC6(int, PKCS5_pbe_set0_algor_ex, \
 AROS_LCA(X509_ALGOR *, (___algor), A0), \
 AROS_LCA(int, (___alg), D0), \
 AROS_LCA(int, (___iter), D1), \
 AROS_LCA(const unsigned char *, (___salt), A1), \
 AROS_LCA(int, (___saltlen), D2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 928, Amisslext)

#define PKCS5_pbe_set_ex(___alg, ___iter, ___salt, ___saltlen, ___libctx) \
      AROS_LC5(X509_ALGOR *, PKCS5_pbe_set_ex, \
 AROS_LCA(int, (___alg), D0), \
 AROS_LCA(int, (___iter), D1), \
 AROS_LCA(const unsigned char *, (___salt), A0), \
 AROS_LCA(int, (___saltlen), D2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 929, Amisslext)

#define PKCS5_pbe2_set_iv_ex(___cipher, ___iter, ___salt, ___saltlen, ___aiv, ___prf_nid, ___libctx) \
      AROS_LC7(X509_ALGOR *, PKCS5_pbe2_set_iv_ex, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
 AROS_LCA(int, (___iter), D0), \
 AROS_LCA(unsigned char *, (___salt), A1), \
 AROS_LCA(int, (___saltlen), D1), \
 AROS_LCA(unsigned char *, (___aiv), A2), \
 AROS_LCA(int, (___prf_nid), D2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 930, Amisslext)

#define PKCS5_pbkdf2_set_ex(___iter, ___salt, ___saltlen, ___prf_nid, ___keylen, ___libctx) \
      AROS_LC6(X509_ALGOR *, PKCS5_pbkdf2_set_ex, \
 AROS_LCA(int, (___iter), D0), \
 AROS_LCA(unsigned char *, (___salt), A0), \
 AROS_LCA(int, (___saltlen), D1), \
 AROS_LCA(int, (___prf_nid), D2), \
 AROS_LCA(int, (___keylen), D3), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 931, Amisslext)

#define BIO_new_from_core_bio(___libctx, ___corebio) \
      AROS_LC2(BIO *, BIO_new_from_core_bio, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(OSSL_CORE_BIO *, (___corebio), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 932, Amisslext)

#define BIO_new_ex(___libctx, ___method) \
      AROS_LC2(BIO *, BIO_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const BIO_METHOD *, (___method), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 933, Amisslext)

#define BIO_s_core() \
      AROS_LC0(const BIO_METHOD *, BIO_s_core, \
     struct Library *, AMISSLEXT_BASE_NAME, 934, Amisslext)

#define BIO_get_line(___bio, ___buf, ___size) \
      AROS_LC3(int, BIO_get_line, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(char *, (___buf), A1), \
 AROS_LCA(int, (___size), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 935, Amisslext)

#define OSSL_LIB_CTX_new_from_dispatch(___handle, ___in) \
      AROS_LC2(OSSL_LIB_CTX *, OSSL_LIB_CTX_new_from_dispatch, \
 AROS_LCA(const OSSL_CORE_HANDLE *, (___handle), A0), \
 AROS_LCA(const OSSL_DISPATCH *, (___in), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 936, Amisslext)

#define OSSL_LIB_CTX_new_child(___handle, ___in) \
      AROS_LC2(OSSL_LIB_CTX *, OSSL_LIB_CTX_new_child, \
 AROS_LCA(const OSSL_CORE_HANDLE *, (___handle), A0), \
 AROS_LCA(const OSSL_DISPATCH *, (___in), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 937, Amisslext)

#define OSSL_PROVIDER_get0_dispatch(___prov) \
      AROS_LC1(const OSSL_DISPATCH *, OSSL_PROVIDER_get0_dispatch, \
 AROS_LCA(const OSSL_PROVIDER *, (___prov), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 938, Amisslext)

#define PKCS5_PBE_keyivgen_ex(___cctx, ___pass, ___passlen, ___param, ___cipher, ___md, ___en_de, ___libctx, ___propq) \
      AROS_LC9(int, PKCS5_PBE_keyivgen_ex, \
 AROS_LCA(EVP_CIPHER_CTX *, (___cctx), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(ASN1_TYPE *, (___param), A2), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A3), \
 AROS_LCA(const EVP_MD *, (___md), D1), \
 AROS_LCA(int, (___en_de), D2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D3), \
 AROS_LCA(const char *, (___propq), D4), \
     struct Library *, AMISSLEXT_BASE_NAME, 939, Amisslext)

#define EVP_MAC_CTX_get_block_size(___ctx) \
      AROS_LC1(size_t, EVP_MAC_CTX_get_block_size, \
 AROS_LCA(EVP_MAC_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 940, Amisslext)

#define BIO_debug_callback_ex(___bio, ___oper, ___argp, ___len, ___argi, ___argl, ___ret, ___processed) \
      AROS_LC8(long, BIO_debug_callback_ex, \
 AROS_LCA(BIO *, (___bio), A0), \
 AROS_LCA(int, (___oper), D0), \
 AROS_LCA(const char *, (___argp), A1), \
 AROS_LCA(size_t, (___len), D1), \
 AROS_LCA(int, (___argi), D2), \
 AROS_LCA(long, (___argl), D3), \
 AROS_LCA(int, (___ret), D4), \
 AROS_LCA(size_t *, (___processed), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 941, Amisslext)

#define b2i_PVK_bio_ex(___in, ___cb, ___u, ___libctx, ___propq) \
      AROS_LC5(EVP_PKEY *, b2i_PVK_bio_ex, \
 AROS_LCA(BIO *, (___in), A0), \
 AROS_LCA(pem_password_cb *, (___cb), A1), \
 AROS_LCA(void *, (___u), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 942, Amisslext)

#define i2b_PVK_bio_ex(___out, ___pk, ___enclevel, ___cb, ___u, ___libctx, ___propq) \
      AROS_LC7(int, i2b_PVK_bio_ex, \
 AROS_LCA(BIO *, (___out), A0), \
 AROS_LCA(const EVP_PKEY *, (___pk), A1), \
 AROS_LCA(int, (___enclevel), D0), \
 AROS_LCA(pem_password_cb *, (___cb), A2), \
 AROS_LCA(void *, (___u), A3), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D1), \
 AROS_LCA(const char *, (___propq), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 943, Amisslext)

#define NCONF_get0_libctx(___conf) \
      AROS_LC1(OSSL_LIB_CTX *, NCONF_get0_libctx, \
 AROS_LCA(const CONF *, (___conf), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 944, Amisslext)

#define NCONF_get_section_names(___conf) \
      AROS_LC1(STACK_OF(OPENSSL_CSTRING) *, NCONF_get_section_names, \
 AROS_LCA(const CONF *, (___conf), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 945, Amisslext)

#define X509_PUBKEY_new_ex(___libctx, ___propq) \
      AROS_LC2(X509_PUBKEY *, X509_PUBKEY_new_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___propq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 946, Amisslext)

#define ASN1_item_new_ex(___it, ___libctx, ___propq) \
      AROS_LC3(ASN1_VALUE *, ASN1_item_new_ex, \
 AROS_LCA(const ASN1_ITEM *, (___it), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 947, Amisslext)

#define ASN1_item_d2i_bio_ex(___it, ___in, ___pval, ___libctx, ___propq) \
      AROS_LC5(void *, ASN1_item_d2i_bio_ex, \
 AROS_LCA(const ASN1_ITEM *, (___it), A0), \
 AROS_LCA(BIO *, (___in), A1), \
 AROS_LCA(void *, (___pval), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 948, Amisslext)

#define ASN1_item_d2i_ex(___val, ___in, ___len, ___it, ___libctx, ___propq) \
      AROS_LC6(ASN1_VALUE *, ASN1_item_d2i_ex, \
 AROS_LCA(ASN1_VALUE **, (___val), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
 AROS_LCA(const ASN1_ITEM *, (___it), A2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A3), \
 AROS_LCA(const char *, (___propq), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 949, Amisslext)

#define ASN1_TIME_print_ex(___bp, ___tm, ___flags) \
      AROS_LC3(int, ASN1_TIME_print_ex, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(const ASN1_TIME *, (___tm), A1), \
 AROS_LCA(unsigned long, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 950, Amisslext)

#define EVP_PKEY_get0_provider(___key) \
      AROS_LC1(const OSSL_PROVIDER *, EVP_PKEY_get0_provider, \
 AROS_LCA(const EVP_PKEY *, (___key), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 951, Amisslext)

#define EVP_PKEY_CTX_get0_provider(___ctx) \
      AROS_LC1(const OSSL_PROVIDER *, EVP_PKEY_CTX_get0_provider, \
 AROS_LCA(const EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 952, Amisslext)

#define OPENSSL_strcasecmp(___s1, ___s2) \
      AROS_LC2(int, OPENSSL_strcasecmp, \
 AROS_LCA(const char *, (___s1), A0), \
 AROS_LCA(const char *, (___s2), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 953, Amisslext)

#define OPENSSL_strncasecmp(___s1, ___s2, ___n) \
      AROS_LC3(int, OPENSSL_strncasecmp, \
 AROS_LCA(const char *, (___s1), A0), \
 AROS_LCA(const char *, (___s2), A1), \
 AROS_LCA(size_t, (___n), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 954, Amisslext)

#define OSSL_CMP_CTX_reset_geninfo_ITAVs(___ctx) \
      AROS_LC1(int, OSSL_CMP_CTX_reset_geninfo_ITAVs, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 955, Amisslext)

#define EVP_RAND_CTX_up_ref(___ctx) \
      AROS_LC1(int, EVP_RAND_CTX_up_ref, \
 AROS_LCA(EVP_RAND_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 956, Amisslext)

#define RAND_set0_public(___ctx, ___rand) \
      AROS_LC2(int, RAND_set0_public, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_RAND_CTX *, (___rand), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 957, Amisslext)

#define RAND_set0_private(___ctx, ___rand) \
      AROS_LC2(int, RAND_set0_private, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_RAND_CTX *, (___rand), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 958, Amisslext)

#define EVP_MD_CTX_dup(___in) \
      AROS_LC1(EVP_MD_CTX *, EVP_MD_CTX_dup, \
 AROS_LCA(const EVP_MD_CTX *, (___in), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 959, Amisslext)

#define EVP_CIPHER_CTX_dup(___in) \
      AROS_LC1(EVP_CIPHER_CTX *, EVP_CIPHER_CTX_dup, \
 AROS_LCA(const EVP_CIPHER_CTX *, (___in), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 960, Amisslext)

#define BN_are_coprime(___a, ___b, ___ctx) \
      AROS_LC3(int, BN_are_coprime, \
 AROS_LCA(BIGNUM *, (___a), A0), \
 AROS_LCA(const BIGNUM *, (___b), A1), \
 AROS_LCA(BN_CTX *, (___ctx), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 961, Amisslext)

#define OSSL_CMP_MSG_update_recipNonce(___ctx, ___msg) \
      AROS_LC2(int, OSSL_CMP_MSG_update_recipNonce, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_CMP_MSG *, (___msg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 962, Amisslext)

#define SSL_client_hello_get_extension_order(___s, ___exts, ___num_exts) \
      AROS_LC3(int, SSL_client_hello_get_extension_order, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(uint16_t *, (___exts), A1), \
 AROS_LCA(size_t *, (___num_exts), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 963, Amisslext)

#define OSSL_QUIC_client_method() \
      AROS_LC0(const SSL_METHOD *, OSSL_QUIC_client_method, \
     struct Library *, AMISSLEXT_BASE_NAME, 964, Amisslext)

#define OSSL_QUIC_client_thread_method() \
      AROS_LC0(const SSL_METHOD *, OSSL_QUIC_client_thread_method, \
     struct Library *, AMISSLEXT_BASE_NAME, 965, Amisslext)

#define SSL_CTX_set1_cert_comp_preference(___ctx, ___algs, ___len) \
      AROS_LC3(int, SSL_CTX_set1_cert_comp_preference, \
 AROS_LCA(SSL_CTX *, (___ctx), A0), \
 AROS_LCA(int *, (___algs), A1), \
 AROS_LCA(size_t, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 966, Amisslext)

#define SSL_set1_cert_comp_preference(___ssl, ___algs, ___len) \
      AROS_LC3(int, SSL_set1_cert_comp_preference, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(int *, (___algs), A1), \
 AROS_LCA(size_t, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 967, Amisslext)

#define SSL_CTX_compress_certs(___ctx, ___alg) \
      AROS_LC2(int, SSL_CTX_compress_certs, \
 AROS_LCA(SSL_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___alg), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 968, Amisslext)

#define SSL_compress_certs(___ssl, ___alg) \
      AROS_LC2(int, SSL_compress_certs, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(int, (___alg), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 969, Amisslext)

#define SSL_CTX_set1_compressed_cert(___ctx, ___algorithm, ___comp_data, ___comp_length, ___orig_length) \
      AROS_LC5(int, SSL_CTX_set1_compressed_cert, \
 AROS_LCA(SSL_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___algorithm), D0), \
 AROS_LCA(unsigned char *, (___comp_data), A1), \
 AROS_LCA(size_t, (___comp_length), D1), \
 AROS_LCA(size_t, (___orig_length), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 970, Amisslext)

#define SSL_set1_compressed_cert(___ssl, ___algorithm, ___comp_data, ___comp_length, ___orig_length) \
      AROS_LC5(int, SSL_set1_compressed_cert, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(int, (___algorithm), D0), \
 AROS_LCA(unsigned char *, (___comp_data), A1), \
 AROS_LCA(size_t, (___comp_length), D1), \
 AROS_LCA(size_t, (___orig_length), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 971, Amisslext)

#define SSL_CTX_get1_compressed_cert(___ctx, ___alg, ___data, ___orig_len) \
      AROS_LC4(size_t, SSL_CTX_get1_compressed_cert, \
 AROS_LCA(SSL_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___alg), D0), \
 AROS_LCA(unsigned char **, (___data), A1), \
 AROS_LCA(size_t *, (___orig_len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 972, Amisslext)

#define SSL_get1_compressed_cert(___ssl, ___alg, ___data, ___orig_len) \
      AROS_LC4(size_t, SSL_get1_compressed_cert, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(int, (___alg), D0), \
 AROS_LCA(unsigned char **, (___data), A1), \
 AROS_LCA(size_t *, (___orig_len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 973, Amisslext)

#define SSL_get_rpoll_descriptor(___s, ___desc) \
      AROS_LC2(int, SSL_get_rpoll_descriptor, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(BIO_POLL_DESCRIPTOR *, (___desc), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 974, Amisslext)

#define SSL_get_wpoll_descriptor(___s, ___desc) \
      AROS_LC2(int, SSL_get_wpoll_descriptor, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(BIO_POLL_DESCRIPTOR *, (___desc), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 975, Amisslext)

#define SSL_set_blocking_mode(___s, ___blocking) \
      AROS_LC2(int, SSL_set_blocking_mode, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(int, (___blocking), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 976, Amisslext)

#define SSL_get_blocking_mode(___s) \
      AROS_LC1(int, SSL_get_blocking_mode, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 977, Amisslext)

#define SSL_set1_initial_peer_addr(___s, ___peer_addr) \
      AROS_LC2(int, SSL_set1_initial_peer_addr, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(const BIO_ADDR *, (___peer_addr), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 978, Amisslext)

#define SSL_net_read_desired(___s) \
      AROS_LC1(int, SSL_net_read_desired, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 979, Amisslext)

#define SSL_net_write_desired(___s) \
      AROS_LC1(int, SSL_net_write_desired, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 980, Amisslext)

#define SSL_shutdown_ex(___ssl, ___flags, ___args, ___args_len) \
      AROS_LC4(int, SSL_shutdown_ex, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(uint64_t, (___flags), D0), \
 AROS_LCA(const SSL_SHUTDOWN_EX_ARGS *, (___args), A1), \
 AROS_LCA(size_t, (___args_len), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 981, Amisslext)

#define SSL_stream_conclude(___ssl, ___flags) \
      AROS_LC2(int, SSL_stream_conclude, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(uint64_t, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 982, Amisslext)

#define SSL_inject_net_dgram(___s, ___buf, ___buf_len, ___peer, ___local) \
      AROS_LC5(int, SSL_inject_net_dgram, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(const unsigned char *, (___buf), A1), \
 AROS_LCA(size_t, (___buf_len), D0), \
 AROS_LCA(const BIO_ADDR *, (___peer), A2), \
 AROS_LCA(const BIO_ADDR *, (___local), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 983, Amisslext)

#define SSL_get0_peer_rpk(___s) \
      AROS_LC1(EVP_PKEY *, SSL_get0_peer_rpk, \
 AROS_LCA(const SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 984, Amisslext)

#define SSL_SESSION_get0_peer_rpk(___s) \
      AROS_LC1(EVP_PKEY *, SSL_SESSION_get0_peer_rpk, \
 AROS_LCA(SSL_SESSION *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 985, Amisslext)

#define SSL_set1_client_cert_type(___s, ___val, ___len) \
      AROS_LC3(int, SSL_set1_client_cert_type, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(const unsigned char *, (___val), A1), \
 AROS_LCA(size_t, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 986, Amisslext)

#define SSL_get0_client_cert_type(___s, ___t, ___len) \
      AROS_LC3(int, SSL_get0_client_cert_type, \
 AROS_LCA(const SSL *, (___s), A0), \
 AROS_LCA(unsigned char **, (___t), A1), \
 AROS_LCA(size_t *, (___len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 987, Amisslext)

#define SSL_set1_server_cert_type(___s, ___val, ___len) \
      AROS_LC3(int, SSL_set1_server_cert_type, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(const unsigned char *, (___val), A1), \
 AROS_LCA(size_t, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 988, Amisslext)

#define SSL_get0_server_cert_type(___s, ___t, ___len) \
      AROS_LC3(int, SSL_get0_server_cert_type, \
 AROS_LCA(const SSL *, (___s), A0), \
 AROS_LCA(unsigned char **, (___t), A1), \
 AROS_LCA(size_t *, (___len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 989, Amisslext)

#define SSL_CTX_set1_client_cert_type(___ctx, ___val, ___len) \
      AROS_LC3(int, SSL_CTX_set1_client_cert_type, \
 AROS_LCA(SSL_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___val), A1), \
 AROS_LCA(size_t, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 990, Amisslext)

#define SSL_CTX_get0_client_cert_type(___ctx, ___t, ___len) \
      AROS_LC3(int, SSL_CTX_get0_client_cert_type, \
 AROS_LCA(const SSL_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char **, (___t), A1), \
 AROS_LCA(size_t *, (___len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 991, Amisslext)

#define SSL_CTX_set1_server_cert_type(___ctx, ___val, ___len) \
      AROS_LC3(int, SSL_CTX_set1_server_cert_type, \
 AROS_LCA(SSL_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___val), A1), \
 AROS_LCA(size_t, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 992, Amisslext)

#define SSL_CTX_get0_server_cert_type(___s, ___t, ___len) \
      AROS_LC3(int, SSL_CTX_get0_server_cert_type, \
 AROS_LCA(const SSL_CTX *, (___s), A0), \
 AROS_LCA(unsigned char **, (___t), A1), \
 AROS_LCA(size_t *, (___len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 993, Amisslext)

#define SSL_get_negotiated_client_cert_type(___s) \
      AROS_LC1(int, SSL_get_negotiated_client_cert_type, \
 AROS_LCA(const SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 994, Amisslext)

#define SSL_get_negotiated_server_cert_type(___s) \
      AROS_LC1(int, SSL_get_negotiated_server_cert_type, \
 AROS_LCA(const SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 995, Amisslext)

#define SSL_add_expected_rpk(___s, ___rpk) \
      AROS_LC2(int, SSL_add_expected_rpk, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(EVP_PKEY *, (___rpk), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 996, Amisslext)

#define d2i_SSL_SESSION_ex(___a, ___pp, ___length, ___libctx, ___propq) \
      AROS_LC5(SSL_SESSION *, d2i_SSL_SESSION_ex, \
 AROS_LCA(SSL_SESSION **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___pp), A1), \
 AROS_LCA(long, (___length), D0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 997, Amisslext)

#define SSL_is_tls(___s) \
      AROS_LC1(int, SSL_is_tls, \
 AROS_LCA(const SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 998, Amisslext)

#define SSL_is_quic(___s) \
      AROS_LC1(int, SSL_is_quic, \
 AROS_LCA(const SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 999, Amisslext)

#define SSL_get_handshake_rtt(___s, ___rtt) \
      AROS_LC2(int, SSL_get_handshake_rtt, \
 AROS_LCA(const SSL *, (___s), A0), \
 AROS_LCA(uint64_t *, (___rtt), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1000, Amisslext)

#define SSL_new_stream(___s, ___flags) \
      AROS_LC2(SSL *, SSL_new_stream, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(uint64_t, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1001, Amisslext)

#define SSL_get0_connection(___s) \
      AROS_LC1(SSL *, SSL_get0_connection, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1002, Amisslext)

#define SSL_is_connection(___s) \
      AROS_LC1(int, SSL_is_connection, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1003, Amisslext)

#define SSL_get_stream_type(___s) \
      AROS_LC1(int, SSL_get_stream_type, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1004, Amisslext)

#define SSL_get_stream_id(___s) \
      AROS_LC1(uint64_t, SSL_get_stream_id, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1005, Amisslext)

#define SSL_set_default_stream_mode(___s, ___mode) \
      AROS_LC2(int, SSL_set_default_stream_mode, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(uint32_t, (___mode), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1006, Amisslext)

#define SSL_accept_stream(___s, ___flags) \
      AROS_LC2(SSL *, SSL_accept_stream, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(uint64_t, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1007, Amisslext)

#define SSL_get_accept_stream_queue_len(___s) \
      AROS_LC1(size_t, SSL_get_accept_stream_queue_len, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1008, Amisslext)

#define SSL_stream_reset(___ssl, ___args, ___args_len) \
      AROS_LC3(int, SSL_stream_reset, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(const SSL_STREAM_RESET_ARGS *, (___args), A1), \
 AROS_LCA(size_t, (___args_len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1009, Amisslext)

#define SSL_get_stream_read_state(___ssl) \
      AROS_LC1(int, SSL_get_stream_read_state, \
 AROS_LCA(SSL *, (___ssl), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1010, Amisslext)

#define SSL_get_stream_write_state(___ssl) \
      AROS_LC1(int, SSL_get_stream_write_state, \
 AROS_LCA(SSL *, (___ssl), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1011, Amisslext)

#define SSL_get_stream_read_error_code(___ssl, ___app_error_code) \
      AROS_LC2(int, SSL_get_stream_read_error_code, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(uint64_t *, (___app_error_code), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1012, Amisslext)

#define SSL_get_stream_write_error_code(___ssl, ___app_error_code) \
      AROS_LC2(int, SSL_get_stream_write_error_code, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(uint64_t *, (___app_error_code), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1013, Amisslext)

#define SSL_get_conn_close_info(___ssl, ___info, ___info_len) \
      AROS_LC3(int, SSL_get_conn_close_info, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(SSL_CONN_CLOSE_INFO *, (___info), A1), \
 AROS_LCA(size_t, (___info_len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1014, Amisslext)

#define SSL_set_incoming_stream_policy(___s, ___policy, ___aec) \
      AROS_LC3(int, SSL_set_incoming_stream_policy, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(int, (___policy), D2), \
 AROS_LCA(uint64_t, (___aec), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1015, Amisslext)

#define SSL_handle_events(___s) \
      AROS_LC1(int, SSL_handle_events, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1016, Amisslext)

#define SSL_get_event_timeout(___s, ___tv, ___is_infinite) \
      AROS_LC3(int, SSL_get_event_timeout, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(struct timeval *, (___tv), A1), \
 AROS_LCA(int *, (___is_infinite), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1017, Amisslext)

#define SSL_get0_group_name(___s) \
      AROS_LC1(const char *, SSL_get0_group_name, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1018, Amisslext)

#define SSL_is_stream_local(___s) \
      AROS_LC1(int, SSL_is_stream_local, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1019, Amisslext)

#define BIO_f_zlib() \
      AROS_LC0(const BIO_METHOD *, BIO_f_zlib, \
     struct Library *, AMISSLEXT_BASE_NAME, 1020, Amisslext)

#define X509_PUBKEY_set0_public_key(___pub, ___penc, ___penclen) \
      AROS_LC3(void, X509_PUBKEY_set0_public_key, \
 AROS_LCA(X509_PUBKEY *, (___pub), A0), \
 AROS_LCA(unsigned char *, (___penc), A1), \
 AROS_LCA(int, (___penclen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1021, Amisslext)

#define OSSL_STACK_OF_X509_free(___certs) \
      AROS_LC1(void, OSSL_STACK_OF_X509_free, \
 AROS_LCA(STACK_OF(X509) *, (___certs), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1022, Amisslext)

#define OSSL_trace_string(___out, ___text, ___full, ___data, ___size) \
      AROS_LC5(int, OSSL_trace_string, \
 AROS_LCA(BIO *, (___out), A0), \
 AROS_LCA(int, (___text), D0), \
 AROS_LCA(int, (___full), D1), \
 AROS_LCA(const unsigned char *, (___data), A1), \
 AROS_LCA(size_t, (___size), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1023, Amisslext)

#define BN_signed_bin2bn(___s, ___len, ___ret) \
      AROS_LC3(BIGNUM *, BN_signed_bin2bn, \
 AROS_LCA(const unsigned char *, (___s), A0), \
 AROS_LCA(int, (___len), D0), \
 AROS_LCA(BIGNUM *, (___ret), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1024, Amisslext)

#define BN_signed_bn2bin(___a, ___to, ___tolen) \
      AROS_LC3(int, BN_signed_bn2bin, \
 AROS_LCA(const BIGNUM *, (___a), A0), \
 AROS_LCA(unsigned char *, (___to), A1), \
 AROS_LCA(int, (___tolen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1025, Amisslext)

#define BN_signed_lebin2bn(___s, ___len, ___ret) \
      AROS_LC3(BIGNUM *, BN_signed_lebin2bn, \
 AROS_LCA(const unsigned char *, (___s), A0), \
 AROS_LCA(int, (___len), D0), \
 AROS_LCA(BIGNUM *, (___ret), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1026, Amisslext)

#define BN_signed_bn2lebin(___a, ___to, ___tolen) \
      AROS_LC3(int, BN_signed_bn2lebin, \
 AROS_LCA(const BIGNUM *, (___a), A0), \
 AROS_LCA(unsigned char *, (___to), A1), \
 AROS_LCA(int, (___tolen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1027, Amisslext)

#define BN_signed_native2bn(___s, ___len, ___ret) \
      AROS_LC3(BIGNUM *, BN_signed_native2bn, \
 AROS_LCA(const unsigned char *, (___s), A0), \
 AROS_LCA(int, (___len), D0), \
 AROS_LCA(BIGNUM *, (___ret), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1028, Amisslext)

#define BN_signed_bn2native(___a, ___to, ___tolen) \
      AROS_LC3(int, BN_signed_bn2native, \
 AROS_LCA(const BIGNUM *, (___a), A0), \
 AROS_LCA(unsigned char *, (___to), A1), \
 AROS_LCA(int, (___tolen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1029, Amisslext)

#define ASYNC_set_mem_functions(___alloc_fn, ___free_fn) \
      AROS_LC2(int, ASYNC_set_mem_functions, \
 AROS_LCA(ASYNC_stack_alloc_fn, (___alloc_fn), A0), \
 AROS_LCA(ASYNC_stack_free_fn, (___free_fn), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1030, Amisslext)

#define ASYNC_get_mem_functions(___alloc_fn, ___free_fn) \
      AROS_LC2(void, ASYNC_get_mem_functions, \
 AROS_LCA(ASYNC_stack_alloc_fn *, (___alloc_fn), A0), \
 AROS_LCA(ASYNC_stack_free_fn *, (___free_fn), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1031, Amisslext)

#define BIO_ADDR_dup(___ap) \
      AROS_LC1(BIO_ADDR *, BIO_ADDR_dup, \
 AROS_LCA(const BIO_ADDR *, (___ap), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1032, Amisslext)

#define OSSL_CMP_ITAV_new_caCerts(___caCerts) \
      AROS_LC1(OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new_caCerts, \
 AROS_LCA(const STACK_OF(X509) *, (___caCerts), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1033, Amisslext)

#define OSSL_CMP_ITAV_get0_caCerts(___itav, ___out) \
      AROS_LC2(int, OSSL_CMP_ITAV_get0_caCerts, \
 AROS_LCA(const OSSL_CMP_ITAV *, (___itav), A0), \
 AROS_LCA(STACK_OF(X509) **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1034, Amisslext)

#define OSSL_CMP_get1_caCerts(___ctx, ___out) \
      AROS_LC2(int, OSSL_CMP_get1_caCerts, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(STACK_OF(X509) **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1035, Amisslext)

#define OSSL_CMP_ITAV_new_rootCaCert(___rootCaCert) \
      AROS_LC1(OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new_rootCaCert, \
 AROS_LCA(const X509 *, (___rootCaCert), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1036, Amisslext)

#define OSSL_CMP_ITAV_get0_rootCaCert(___itav, ___out) \
      AROS_LC2(int, OSSL_CMP_ITAV_get0_rootCaCert, \
 AROS_LCA(const OSSL_CMP_ITAV *, (___itav), A0), \
 AROS_LCA(X509 **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1037, Amisslext)

#define OSSL_CMP_ITAV_new_rootCaKeyUpdate(___newWithNew, ___newWithOld, ___oldWithNew) \
      AROS_LC3(OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new_rootCaKeyUpdate, \
 AROS_LCA(const X509 *, (___newWithNew), A0), \
 AROS_LCA(const X509 *, (___newWithOld), A1), \
 AROS_LCA(const X509 *, (___oldWithNew), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1038, Amisslext)

#define OSSL_CMP_ITAV_get0_rootCaKeyUpdate(___itav, ___newWithNew, ___newWithOld, ___oldWithNew) \
      AROS_LC4(int, OSSL_CMP_ITAV_get0_rootCaKeyUpdate, \
 AROS_LCA(const OSSL_CMP_ITAV *, (___itav), A0), \
 AROS_LCA(X509 **, (___newWithNew), A1), \
 AROS_LCA(X509 **, (___newWithOld), A2), \
 AROS_LCA(X509 **, (___oldWithNew), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1039, Amisslext)

#define OSSL_CMP_get1_rootCaKeyUpdate(___ctx, ___oldWithOld, ___newWithNew, ___newWithOld, ___oldWithNew) \
      AROS_LC5(int, OSSL_CMP_get1_rootCaKeyUpdate, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const X509 *, (___oldWithOld), A1), \
 AROS_LCA(X509 **, (___newWithNew), A2), \
 AROS_LCA(X509 **, (___newWithOld), A3), \
 AROS_LCA(X509 **, (___oldWithNew), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1040, Amisslext)

#define OSSL_CMP_CTX_get0_libctx(___ctx) \
      AROS_LC1(OSSL_LIB_CTX *, OSSL_CMP_CTX_get0_libctx, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1041, Amisslext)

#define OSSL_CMP_CTX_get0_propq(___ctx) \
      AROS_LC1(const char *, OSSL_CMP_CTX_get0_propq, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1042, Amisslext)

#define OSSL_CMP_CTX_get0_validatedSrvCert(___ctx) \
      AROS_LC1(X509 *, OSSL_CMP_CTX_get0_validatedSrvCert, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1043, Amisslext)

#define OSSL_CMP_CTX_set1_serialNumber(___ctx, ___sn) \
      AROS_LC2(int, OSSL_CMP_CTX_set1_serialNumber, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const ASN1_INTEGER *, (___sn), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1044, Amisslext)

#define OSSL_CRMF_CERTTEMPLATE_get0_publicKey(___tmpl) \
      AROS_LC1(X509_PUBKEY *, OSSL_CRMF_CERTTEMPLATE_get0_publicKey, \
 AROS_LCA(const OSSL_CRMF_CERTTEMPLATE *, (___tmpl), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1045, Amisslext)

#define CMS_final_digest(___cms, ___md, ___mdlen, ___dcont, ___flags) \
      AROS_LC5(int, CMS_final_digest, \
 AROS_LCA(CMS_ContentInfo *, (___cms), A0), \
 AROS_LCA(const unsigned char *, (___md), A1), \
 AROS_LCA(unsigned int, (___mdlen), D0), \
 AROS_LCA(BIO *, (___dcont), A2), \
 AROS_LCA(unsigned int, (___flags), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1046, Amisslext)

#define CMS_EnvelopedData_it() \
      AROS_LC0(const ASN1_ITEM *, CMS_EnvelopedData_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1047, Amisslext)

#define CMS_EnvelopedData_decrypt(___env, ___detached_data, ___pkey, ___cert, ___secret, ___flags, ___libctx, ___propq) \
      AROS_LC8(BIO *, CMS_EnvelopedData_decrypt, \
 AROS_LCA(CMS_EnvelopedData *, (___env), A0), \
 AROS_LCA(BIO *, (___detached_data), A1), \
 AROS_LCA(EVP_PKEY *, (___pkey), A2), \
 AROS_LCA(X509 *, (___cert), A3), \
 AROS_LCA(ASN1_OCTET_STRING *, (___secret), D0), \
 AROS_LCA(unsigned int, (___flags), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D2), \
 AROS_LCA(const char *, (___propq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1048, Amisslext)

#define CMS_SignedData_free(___a) \
      AROS_LC1(void, CMS_SignedData_free, \
 AROS_LCA(CMS_SignedData *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1049, Amisslext)

#define CMS_SignedData_new() \
      AROS_LC0(CMS_SignedData *, CMS_SignedData_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1050, Amisslext)

#define CMS_SignedData_verify(___sd, ___detached_data, ___scerts, ___store, ___extra, ___crls, ___flags, ___libctx, ___propq) \
      AROS_LC9(BIO *, CMS_SignedData_verify, \
 AROS_LCA(CMS_SignedData *, (___sd), A0), \
 AROS_LCA(BIO *, (___detached_data), A1), \
 AROS_LCA(STACK_OF(X509) *, (___scerts), A2), \
 AROS_LCA(X509_STORE *, (___store), A3), \
 AROS_LCA(STACK_OF(X509) *, (___extra), D0), \
 AROS_LCA(STACK_OF(X509_CRL) *, (___crls), D1), \
 AROS_LCA(unsigned int, (___flags), D2), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D3), \
 AROS_LCA(const char *, (___propq), D4), \
     struct Library *, AMISSLEXT_BASE_NAME, 1051, Amisslext)

#define BIO_s_dgram_mem() \
      AROS_LC0(const BIO_METHOD *, BIO_s_dgram_mem, \
     struct Library *, AMISSLEXT_BASE_NAME, 1052, Amisslext)

#define BIO_recvmmsg(___b, ___msg, ___stride, ___num_msg, ___flags, ___msgs_processed) \
      AROS_LC6(int, BIO_recvmmsg, \
 AROS_LCA(BIO *, (___b), A0), \
 AROS_LCA(BIO_MSG *, (___msg), A1), \
 AROS_LCA(size_t, (___stride), D0), \
 AROS_LCA(size_t, (___num_msg), D1), \
 AROS_LCA(uint64_t, (___flags), D2), \
 AROS_LCA(size_t *, (___msgs_processed), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1053, Amisslext)

#define BIO_sendmmsg(___b, ___msg, ___stride, ___num_msg, ___flags, ___msgs_processed) \
      AROS_LC6(int, BIO_sendmmsg, \
 AROS_LCA(BIO *, (___b), A0), \
 AROS_LCA(BIO_MSG *, (___msg), A1), \
 AROS_LCA(size_t, (___stride), D0), \
 AROS_LCA(size_t, (___num_msg), D1), \
 AROS_LCA(uint64_t, (___flags), D2), \
 AROS_LCA(size_t *, (___msgs_processed), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1054, Amisslext)

#define BIO_meth_set_sendmmsg(___biom, ___f) \
      AROS_LC2(int, BIO_meth_set_sendmmsg, \
 AROS_LCA(BIO_METHOD *, (___biom), A0), \
 AROS_LCA(int (*)(BIO *,BIO_MSG *,size_t,size_t,uint64_t,size_t *), (___f), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1055, Amisslext)

#define BIO_meth_get_sendmmsg(___biom) \
      AROS_LC1(int (*)(BIO *, BIO_MSG *, size_t, size_t, uint64_t, size_t *), BIO_meth_get_sendmmsg, \
 AROS_LCA(const BIO_METHOD *, (___biom), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1056, Amisslext)

#define BIO_meth_set_recvmmsg(___biom, ___f) \
      AROS_LC2(int, BIO_meth_set_recvmmsg, \
 AROS_LCA(BIO_METHOD *, (___biom), A0), \
 AROS_LCA(int (*)(BIO *,BIO_MSG *,size_t,size_t,uint64_t,size_t *), (___f), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1057, Amisslext)

#define BIO_meth_get_recvmmsg(___biom) \
      AROS_LC1(int (*)(BIO *, BIO_MSG *, size_t, size_t, uint64_t, size_t *), BIO_meth_get_recvmmsg, \
 AROS_LCA(const BIO_METHOD *, (___biom), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1058, Amisslext)

#define BIO_err_is_non_fatal(___errcode) \
      AROS_LC1(int, BIO_err_is_non_fatal, \
 AROS_LCA(unsigned int, (___errcode), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1059, Amisslext)

#define BIO_s_dgram_pair() \
      AROS_LC0(const BIO_METHOD *, BIO_s_dgram_pair, \
     struct Library *, AMISSLEXT_BASE_NAME, 1060, Amisslext)

#define BIO_new_bio_dgram_pair(___bio1, ___writebuf1, ___bio2, ___writebuf2) \
      AROS_LC4(int, BIO_new_bio_dgram_pair, \
 AROS_LCA(BIO **, (___bio1), A0), \
 AROS_LCA(size_t, (___writebuf1), D0), \
 AROS_LCA(BIO **, (___bio2), A1), \
 AROS_LCA(size_t, (___writebuf2), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1061, Amisslext)

#define EVP_PKEY_auth_encapsulate_init(___ctx, ___authpriv, ___params) \
      AROS_LC3(int, EVP_PKEY_auth_encapsulate_init, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_PKEY *, (___authpriv), A1), \
 AROS_LCA(const OSSL_PARAM *, (___params), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1062, Amisslext)

#define EVP_PKEY_auth_decapsulate_init(___ctx, ___authpub, ___params) \
      AROS_LC3(int, EVP_PKEY_auth_decapsulate_init, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_PKEY *, (___authpub), A1), \
 AROS_LCA(const OSSL_PARAM *, (___params), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1063, Amisslext)

#define PKCS12_SAFEBAG_set0_attrs(___bag, ___attrs) \
      AROS_LC2(void, PKCS12_SAFEBAG_set0_attrs, \
 AROS_LCA(PKCS12_SAFEBAG *, (___bag), A0), \
 AROS_LCA(STACK_OF(X509_ATTRIBUTE) *, (___attrs), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1064, Amisslext)

#define PKCS12_create_ex2_amiga_1(___pass, ___name, ___pkey, ___cert, ___ca, ___nid_key, ___nid_cert, ___moreargs) \
      AROS_LC8(PKCS12 *, PKCS12_create_ex2_amiga_1, \
 AROS_LCA(const char *, (___pass), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(EVP_PKEY *, (___pkey), A2), \
 AROS_LCA(X509 *, (___cert), A3), \
 AROS_LCA(STACK_OF(X509) *, (___ca), D0), \
 AROS_LCA(int, (___nid_key), D1), \
 AROS_LCA(int, (___nid_cert), D2), \
 AROS_LCA(void *, (___moreargs), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1065, Amisslext)

#define PKCS12_create_ex2_amiga_2(___iter, ___mac_iter, ___keytype, ___ctx, ___propq, ___cb, ___cbarg) \
      AROS_LC7(void *, PKCS12_create_ex2_amiga_2, \
 AROS_LCA(int, (___iter), D0), \
 AROS_LCA(int, (___mac_iter), D1), \
 AROS_LCA(int, (___keytype), D2), \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
 AROS_LCA(PKCS12_create_cb *, (___cb), A3), \
 AROS_LCA(void *, (___cbarg), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1066, Amisslext)

#define OSSL_sleep(___millis) \
      AROS_LC1(void, OSSL_sleep, \
 AROS_LCA(uint64_t, (___millis), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1067, Amisslext)

#define OSSL_get_thread_support_flags() \
      AROS_LC0(uint32_t, OSSL_get_thread_support_flags, \
     struct Library *, AMISSLEXT_BASE_NAME, 1068, Amisslext)

#define OSSL_set_max_threads(___ctx, ___max_threads) \
      AROS_LC2(int, OSSL_set_max_threads, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(uint64_t, (___max_threads), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1069, Amisslext)

#define OSSL_get_max_threads(___ctx) \
      AROS_LC1(uint64_t, OSSL_get_max_threads, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1070, Amisslext)

#define COMP_brotli() \
      AROS_LC0(COMP_METHOD *, COMP_brotli, \
     struct Library *, AMISSLEXT_BASE_NAME, 1071, Amisslext)

#define COMP_brotli_oneshot() \
      AROS_LC0(COMP_METHOD *, COMP_brotli_oneshot, \
     struct Library *, AMISSLEXT_BASE_NAME, 1072, Amisslext)

#define BIO_f_brotli() \
      AROS_LC0(const BIO_METHOD *, BIO_f_brotli, \
     struct Library *, AMISSLEXT_BASE_NAME, 1073, Amisslext)

#define COMP_zstd() \
      AROS_LC0(COMP_METHOD *, COMP_zstd, \
     struct Library *, AMISSLEXT_BASE_NAME, 1074, Amisslext)

#define COMP_zstd_oneshot() \
      AROS_LC0(COMP_METHOD *, COMP_zstd_oneshot, \
     struct Library *, AMISSLEXT_BASE_NAME, 1075, Amisslext)

#define BIO_f_zstd() \
      AROS_LC0(const BIO_METHOD *, BIO_f_zstd, \
     struct Library *, AMISSLEXT_BASE_NAME, 1076, Amisslext)

#define d2i_PUBKEY_ex_bio(___bp, ___a, ___libctx, ___propq) \
      AROS_LC4(EVP_PKEY *, d2i_PUBKEY_ex_bio, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(EVP_PKEY **, (___a), A1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1077, Amisslext)

#define COMP_zlib_oneshot() \
      AROS_LC0(COMP_METHOD *, COMP_zlib_oneshot, \
     struct Library *, AMISSLEXT_BASE_NAME, 1078, Amisslext)

#define OSSL_HPKE_keygen_amiga(___suite, ___pub, ___publen, ___priv, ___ikm, ___ikmlen, ___libctx, ___propq) \
      AROS_LC8(int, OSSL_HPKE_keygen_amiga, \
 AROS_LCA(OSSL_HPKE_SUITE *, (___suite), A0), \
 AROS_LCA(unsigned char *, (___pub), A1), \
 AROS_LCA(size_t *, (___publen), A2), \
 AROS_LCA(EVP_PKEY **, (___priv), A3), \
 AROS_LCA(const unsigned char *, (___ikm), D0), \
 AROS_LCA(size_t, (___ikmlen), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D2), \
 AROS_LCA(const char *, (___propq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1079, Amisslext)

#define OSSL_HPKE_suite_check_amiga(___suite) \
      AROS_LC1(int, OSSL_HPKE_suite_check_amiga, \
 AROS_LCA(OSSL_HPKE_SUITE *, (___suite), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1080, Amisslext)

#define OSSL_HPKE_get_grease_value(___suite_in, ___suite, ___enc, ___enclen, ___ct, ___ctlen, ___libctx, ___propq) \
      AROS_LC8(int, OSSL_HPKE_get_grease_value, \
 AROS_LCA(const OSSL_HPKE_SUITE *, (___suite_in), A0), \
 AROS_LCA(OSSL_HPKE_SUITE *, (___suite), A1), \
 AROS_LCA(unsigned char *, (___enc), A2), \
 AROS_LCA(size_t *, (___enclen), A3), \
 AROS_LCA(unsigned char *, (___ct), D0), \
 AROS_LCA(size_t, (___ctlen), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D2), \
 AROS_LCA(const char *, (___propq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1081, Amisslext)

#define OSSL_HPKE_str2suite(___str, ___suite) \
      AROS_LC2(int, OSSL_HPKE_str2suite, \
 AROS_LCA(const char *, (___str), A0), \
 AROS_LCA(OSSL_HPKE_SUITE *, (___suite), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1082, Amisslext)

#define OSSL_HPKE_CTX_free(___ctx) \
      AROS_LC1(void, OSSL_HPKE_CTX_free, \
 AROS_LCA(OSSL_HPKE_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1083, Amisslext)

#define OSSL_HPKE_CTX_new_amiga(___mode, ___suite, ___role, ___libctx, ___propq) \
      AROS_LC5(OSSL_HPKE_CTX *, OSSL_HPKE_CTX_new_amiga, \
 AROS_LCA(int, (___mode), D0), \
 AROS_LCA(OSSL_HPKE_SUITE *, (___suite), A0), \
 AROS_LCA(int, (___role), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1084, Amisslext)

#define OSSL_HPKE_CTX_set1_authpriv(___ctx, ___priv) \
      AROS_LC2(int, OSSL_HPKE_CTX_set1_authpriv, \
 AROS_LCA(OSSL_HPKE_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_PKEY *, (___priv), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1085, Amisslext)

#define OSSL_HPKE_CTX_set1_authpub(___ctx, ___pub, ___publen) \
      AROS_LC3(int, OSSL_HPKE_CTX_set1_authpub, \
 AROS_LCA(OSSL_HPKE_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___pub), A1), \
 AROS_LCA(size_t, (___publen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1086, Amisslext)

#define OSSL_HPKE_CTX_set1_psk(___ctx, ___pskid, ___psk, ___psklen) \
      AROS_LC4(int, OSSL_HPKE_CTX_set1_psk, \
 AROS_LCA(OSSL_HPKE_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___pskid), A1), \
 AROS_LCA(const unsigned char *, (___psk), A2), \
 AROS_LCA(size_t, (___psklen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1087, Amisslext)

#define OSSL_HPKE_CTX_set1_ikme(___ctx, ___ikme, ___ikmelen) \
      AROS_LC3(int, OSSL_HPKE_CTX_set1_ikme, \
 AROS_LCA(OSSL_HPKE_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___ikme), A1), \
 AROS_LCA(size_t, (___ikmelen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1088, Amisslext)

#define OSSL_HPKE_get_ciphertext_size_amiga(___suite, ___clearlen) \
      AROS_LC2(size_t, OSSL_HPKE_get_ciphertext_size_amiga, \
 AROS_LCA(OSSL_HPKE_SUITE *, (___suite), A0), \
 AROS_LCA(size_t, (___clearlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1089, Amisslext)

#define OSSL_HPKE_get_public_encap_size_amiga(___suite) \
      AROS_LC1(size_t, OSSL_HPKE_get_public_encap_size_amiga, \
 AROS_LCA(OSSL_HPKE_SUITE *, (___suite), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1090, Amisslext)

#define OSSL_HPKE_export(___ctx, ___secret, ___secretlen, ___label, ___labellen) \
      AROS_LC5(int, OSSL_HPKE_export, \
 AROS_LCA(OSSL_HPKE_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___secret), A1), \
 AROS_LCA(size_t, (___secretlen), D0), \
 AROS_LCA(const unsigned char *, (___label), A2), \
 AROS_LCA(size_t, (___labellen), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1091, Amisslext)

#define OSSL_HPKE_encap(___ctx, ___enc, ___enclen, ___pub, ___publen, ___info, ___infolen) \
      AROS_LC7(int, OSSL_HPKE_encap, \
 AROS_LCA(OSSL_HPKE_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___enc), A1), \
 AROS_LCA(size_t *, (___enclen), A2), \
 AROS_LCA(const unsigned char *, (___pub), A3), \
 AROS_LCA(size_t, (___publen), D0), \
 AROS_LCA(const unsigned char *, (___info), D1), \
 AROS_LCA(size_t, (___infolen), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1092, Amisslext)

#define OSSL_HPKE_decap(___ctx, ___enc, ___enclen, ___recippriv, ___info, ___infolen) \
      AROS_LC6(int, OSSL_HPKE_decap, \
 AROS_LCA(OSSL_HPKE_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___enc), A1), \
 AROS_LCA(size_t, (___enclen), D0), \
 AROS_LCA(EVP_PKEY *, (___recippriv), A2), \
 AROS_LCA(const unsigned char *, (___info), A3), \
 AROS_LCA(size_t, (___infolen), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1093, Amisslext)

#define OSSL_HPKE_seal(___ctx, ___ct, ___ctlen, ___aad, ___aadlen, ___pt, ___ptlen) \
      AROS_LC7(int, OSSL_HPKE_seal, \
 AROS_LCA(OSSL_HPKE_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___ct), A1), \
 AROS_LCA(size_t *, (___ctlen), A2), \
 AROS_LCA(const unsigned char *, (___aad), A3), \
 AROS_LCA(size_t, (___aadlen), D0), \
 AROS_LCA(const unsigned char *, (___pt), D1), \
 AROS_LCA(size_t, (___ptlen), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1094, Amisslext)

#define OSSL_HPKE_open(___ctx, ___pt, ___ptlen, ___aad, ___aadlen, ___ct, ___ctlen) \
      AROS_LC7(int, OSSL_HPKE_open, \
 AROS_LCA(OSSL_HPKE_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___pt), A1), \
 AROS_LCA(size_t *, (___ptlen), A2), \
 AROS_LCA(const unsigned char *, (___aad), A3), \
 AROS_LCA(size_t, (___aadlen), D0), \
 AROS_LCA(const unsigned char *, (___ct), D1), \
 AROS_LCA(size_t, (___ctlen), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1095, Amisslext)

#define OSSL_HPKE_CTX_get_seq(___ctx, ___seq) \
      AROS_LC2(int, OSSL_HPKE_CTX_get_seq, \
 AROS_LCA(OSSL_HPKE_CTX *, (___ctx), A0), \
 AROS_LCA(uint64_t *, (___seq), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1096, Amisslext)

#define OSSL_HPKE_CTX_set_seq(___ctx, ___seq) \
      AROS_LC2(int, OSSL_HPKE_CTX_set_seq, \
 AROS_LCA(OSSL_HPKE_CTX *, (___ctx), A0), \
 AROS_LCA(uint64_t, (___seq), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1097, Amisslext)

#define OSSL_HPKE_get_recommended_ikmelen_amiga(___suite) \
      AROS_LC1(size_t, OSSL_HPKE_get_recommended_ikmelen_amiga, \
 AROS_LCA(OSSL_HPKE_SUITE *, (___suite), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1098, Amisslext)

#define OSSL_PROVIDER_get0_default_search_path(___libctx) \
      AROS_LC1(const char *, OSSL_PROVIDER_get0_default_search_path, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1099, Amisslext)

#define BIO_get_rpoll_descriptor(___b, ___desc) \
      AROS_LC2(int, BIO_get_rpoll_descriptor, \
 AROS_LCA(BIO *, (___b), A0), \
 AROS_LCA(BIO_POLL_DESCRIPTOR *, (___desc), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1100, Amisslext)

#define BIO_get_wpoll_descriptor(___b, ___desc) \
      AROS_LC2(int, BIO_get_wpoll_descriptor, \
 AROS_LCA(BIO *, (___b), A0), \
 AROS_LCA(BIO_POLL_DESCRIPTOR *, (___desc), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1101, Amisslext)

#define ASN1_item_unpack_ex(___oct, ___it, ___libctx, ___propq) \
      AROS_LC4(void *, ASN1_item_unpack_ex, \
 AROS_LCA(const ASN1_STRING *, (___oct), A0), \
 AROS_LCA(const ASN1_ITEM *, (___it), A1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A2), \
 AROS_LCA(const char *, (___propq), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1102, Amisslext)

#define PKCS12_SAFEBAG_get1_cert_ex(___bag, ___libctx, ___propq) \
      AROS_LC3(X509 *, PKCS12_SAFEBAG_get1_cert_ex, \
 AROS_LCA(const PKCS12_SAFEBAG *, (___bag), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1103, Amisslext)

#define PKCS12_SAFEBAG_get1_crl_ex(___bag, ___libctx, ___propq) \
      AROS_LC3(X509_CRL *, PKCS12_SAFEBAG_get1_crl_ex, \
 AROS_LCA(const PKCS12_SAFEBAG *, (___bag), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1104, Amisslext)

#define EC_GROUP_to_params(___group, ___libctx, ___propq, ___bnctx) \
      AROS_LC4(OSSL_PARAM *, EC_GROUP_to_params, \
 AROS_LCA(const EC_GROUP *, (___group), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
 AROS_LCA(BN_CTX *, (___bnctx), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1105, Amisslext)

#define X509_STORE_CTX_init_rpk(___ctx, ___trust_store, ___rpk) \
      AROS_LC3(int, X509_STORE_CTX_init_rpk, \
 AROS_LCA(X509_STORE_CTX *, (___ctx), A0), \
 AROS_LCA(X509_STORE *, (___trust_store), A1), \
 AROS_LCA(EVP_PKEY*, (___rpk), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1106, Amisslext)

#define X509_STORE_CTX_get0_rpk(___ctx) \
      AROS_LC1(EVP_PKEY *, X509_STORE_CTX_get0_rpk, \
 AROS_LCA(const X509_STORE_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1107, Amisslext)

#define X509_STORE_CTX_set0_rpk(___ctx, ___target) \
      AROS_LC2(void, X509_STORE_CTX_set0_rpk, \
 AROS_LCA(X509_STORE_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_PKEY *, (___target), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1108, Amisslext)

#define CRYPTO_atomic_load_int(___val, ___ret, ___lock) \
      AROS_LC3(int, CRYPTO_atomic_load_int, \
 AROS_LCA(int *, (___val), A0), \
 AROS_LCA(int *, (___ret), A1), \
 AROS_LCA(CRYPTO_RWLOCK *, (___lock), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1109, Amisslext)

#define OSSL_ERR_STATE_new() \
      AROS_LC0(ERR_STATE *, OSSL_ERR_STATE_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1110, Amisslext)

#define OSSL_ERR_STATE_save(___es) \
      AROS_LC1(void, OSSL_ERR_STATE_save, \
 AROS_LCA(ERR_STATE *, (___es), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1111, Amisslext)

#define OSSL_ERR_STATE_restore(___es) \
      AROS_LC1(void, OSSL_ERR_STATE_restore, \
 AROS_LCA(const ERR_STATE *, (___es), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1112, Amisslext)

#define OSSL_ERR_STATE_free(___es) \
      AROS_LC1(void, OSSL_ERR_STATE_free, \
 AROS_LCA(ERR_STATE *, (___es), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1113, Amisslext)

#define ERR_count_to_mark() \
      AROS_LC0(int, ERR_count_to_mark, \
     struct Library *, AMISSLEXT_BASE_NAME, 1114, Amisslext)

#define OSSL_PROVIDER_load_ex(___a, ___name, ___params) \
      AROS_LC3(OSSL_PROVIDER *, OSSL_PROVIDER_load_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___a), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(OSSL_PARAM *, (___params), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1115, Amisslext)

#define OSSL_PROVIDER_try_load_ex(___a, ___name, ___params, ___retain_fallbacks) \
      AROS_LC4(OSSL_PROVIDER *, OSSL_PROVIDER_try_load_ex, \
 AROS_LCA(OSSL_LIB_CTX *, (___a), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(OSSL_PARAM *, (___params), A2), \
 AROS_LCA(int, (___retain_fallbacks), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1116, Amisslext)

#define OSSL_ERR_STATE_save_to_mark(___es) \
      AROS_LC1(void, OSSL_ERR_STATE_save_to_mark, \
 AROS_LCA(ERR_STATE *, (___es), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1117, Amisslext)

#define X509_STORE_CTX_set_get_crl(___ctx, ___get_crl) \
      AROS_LC2(void, X509_STORE_CTX_set_get_crl, \
 AROS_LCA(X509_STORE_CTX *, (___ctx), A0), \
 AROS_LCA(X509_STORE_CTX_get_crl_fn, (___get_crl), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1118, Amisslext)

#define X509_STORE_CTX_set_current_reasons(___ctx, ___current_reasons) \
      AROS_LC2(void, X509_STORE_CTX_set_current_reasons, \
 AROS_LCA(X509_STORE_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned int, (___current_reasons), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1119, Amisslext)

#define OSSL_STORE_delete(___uri, ___libctx, ___propq, ___ui_method, ___ui_data, ___params) \
      AROS_LC6(int, OSSL_STORE_delete, \
 AROS_LCA(const char *, (___uri), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
 AROS_LCA(const UI_METHOD *, (___ui_method), A3), \
 AROS_LCA(void *, (___ui_data), D0), \
 AROS_LCA(const OSSL_PARAM *, (___params), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1120, Amisslext)

#define BIO_ADDR_copy(___dst, ___src) \
      AROS_LC2(int, BIO_ADDR_copy, \
 AROS_LCA(BIO_ADDR *, (___dst), A0), \
 AROS_LCA(const BIO_ADDR *, (___src), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1121, Amisslext)

#define SSL_write_ex2(___s, ___buf, ___num, ___flags, ___written) \
      AROS_LC5(int, SSL_write_ex2, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(const void *, (___buf), A1), \
 AROS_LCA(size_t, (___num), D2), \
 AROS_LCA(uint64_t, (___flags), D0), \
 AROS_LCA(size_t *, (___written), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1122, Amisslext)

#define SSL_get_value_uint(___s, ___class_, ___id, ___v) \
      AROS_LC4(int, SSL_get_value_uint, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(uint32_t, (___class_), D0), \
 AROS_LCA(uint32_t, (___id), D1), \
 AROS_LCA(uint64_t *, (___v), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1123, Amisslext)

#define SSL_set_value_uint(___s, ___class_, ___id, ___v) \
      AROS_LC4(int, SSL_set_value_uint, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(uint32_t, (___class_), D0), \
 AROS_LCA(uint32_t, (___id), D1), \
 AROS_LCA(uint64_t, (___v), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1124, Amisslext)

#define SSL_poll(___items, ___num_items, ___stride, ___timeout, ___flags, ___result_count) \
      AROS_LC6(int, SSL_poll, \
 AROS_LCA(SSL_POLL_ITEM *, (___items), A0), \
 AROS_LCA(size_t, (___num_items), D0), \
 AROS_LCA(size_t, (___stride), D1), \
 AROS_LCA(const struct timeval *, (___timeout), A1), \
 AROS_LCA(uint64_t, (___flags), D2), \
 AROS_LCA(size_t *, (___result_count), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1125, Amisslext)

#define SSL_SESSION_get_time_ex(___s) \
      AROS_LC1(time_t, SSL_SESSION_get_time_ex, \
 AROS_LCA(const SSL_SESSION *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1126, Amisslext)

#define SSL_SESSION_set_time_ex(___s, ___t) \
      AROS_LC2(time_t, SSL_SESSION_set_time_ex, \
 AROS_LCA(SSL_SESSION *, (___s), A0), \
 AROS_LCA(time_t, (___t), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1127, Amisslext)

#define OSSL_CMP_CTX_get0_geninfo_ITAVs(___ctx) \
      AROS_LC1(STACK_OF(OSSL_CMP_ITAV) *, OSSL_CMP_CTX_get0_geninfo_ITAVs, \
 AROS_LCA(const OSSL_CMP_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1128, Amisslext)

#define OSSL_CMP_HDR_get0_geninfo_ITAVs(___hdr) \
      AROS_LC1(STACK_OF(OSSL_CMP_ITAV) *, OSSL_CMP_HDR_get0_geninfo_ITAVs, \
 AROS_LCA(const OSSL_CMP_PKIHEADER *, (___hdr), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1129, Amisslext)

#define OSSL_CMP_ITAV_new0_certProfile(___certProfile) \
      AROS_LC1(OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new0_certProfile, \
 AROS_LCA(STACK_OF(ASN1_UTF8STRING) *, (___certProfile), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1130, Amisslext)

#define OSSL_CMP_ITAV_get0_certProfile(___itav, ___out) \
      AROS_LC2(int, OSSL_CMP_ITAV_get0_certProfile, \
 AROS_LCA(const OSSL_CMP_ITAV *, (___itav), A0), \
 AROS_LCA(STACK_OF(ASN1_UTF8STRING) **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1131, Amisslext)

#define OSSL_CMP_MSG_get0_certreq_publickey(___msg) \
      AROS_LC1(X509_PUBKEY *, OSSL_CMP_MSG_get0_certreq_publickey, \
 AROS_LCA(const OSSL_CMP_MSG *, (___msg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1132, Amisslext)

#define OSSL_CMP_SRV_CTX_init_trans(___srv_ctx, ___delay, ___clean) \
      AROS_LC3(int, OSSL_CMP_SRV_CTX_init_trans, \
 AROS_LCA(OSSL_CMP_SRV_CTX *, (___srv_ctx), A0), \
 AROS_LCA(OSSL_CMP_SRV_delayed_delivery_cb_t, (___delay), A1), \
 AROS_LCA(OSSL_CMP_SRV_clean_transaction_cb_t, (___clean), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1133, Amisslext)

#define EVP_DigestSqueeze(___ctx, ___out, ___outlen) \
      AROS_LC3(int, EVP_DigestSqueeze, \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___out), A1), \
 AROS_LCA(size_t, (___outlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1134, Amisslext)

#define ERR_pop() \
      AROS_LC0(int, ERR_pop, \
     struct Library *, AMISSLEXT_BASE_NAME, 1135, Amisslext)

#define X509_STORE_get1_objects(___xs) \
      AROS_LC1(STACK_OF(X509_OBJECT) *, X509_STORE_get1_objects, \
 AROS_LCA(X509_STORE *, (___xs), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1136, Amisslext)

#define OPENSSL_LH_set_thunks(___lh, ___hw, ___cw, ___daw, ___daaw) \
      AROS_LC5(OPENSSL_LHASH *, OPENSSL_LH_set_thunks, \
 AROS_LCA(OPENSSL_LHASH *, (___lh), A0), \
 AROS_LCA(OPENSSL_LH_HASHFUNCTHUNK, (___hw), A1), \
 AROS_LCA(OPENSSL_LH_COMPFUNCTHUNK, (___cw), A2), \
 AROS_LCA(OPENSSL_LH_DOALL_FUNC_THUNK, (___daw), A3), \
 AROS_LCA(OPENSSL_LH_DOALL_FUNCARG_THUNK, (___daaw), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1137, Amisslext)

#define OPENSSL_LH_doall_arg_thunk(___lh, ___daaw, ___fn, ___arg) \
      AROS_LC4(void, OPENSSL_LH_doall_arg_thunk, \
 AROS_LCA(OPENSSL_LHASH *, (___lh), A0), \
 AROS_LCA(OPENSSL_LH_DOALL_FUNCARG_THUNK, (___daaw), D0), \
 AROS_LCA(OPENSSL_LH_DOALL_FUNCARG, (___fn), D1), \
 AROS_LCA(void *, (___arg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1138, Amisslext)

#define OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(___rctx, ___count) \
      AROS_LC2(void, OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines, \
 AROS_LCA(OSSL_HTTP_REQ_CTX *, (___rctx), A0), \
 AROS_LCA(size_t, (___count), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1139, Amisslext)

#define SSL_CTX_flush_sessions_ex(___ctx, ___tm) \
      AROS_LC2(void, SSL_CTX_flush_sessions_ex, \
 AROS_LCA(SSL_CTX *, (___ctx), A0), \
 AROS_LCA(time_t, (___tm), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1140, Amisslext)

#define SSL_CTX_set_block_padding_ex(___ctx, ___app_block_size, ___hs_block_size) \
      AROS_LC3(int, SSL_CTX_set_block_padding_ex, \
 AROS_LCA(SSL_CTX *, (___ctx), A0), \
 AROS_LCA(size_t, (___app_block_size), D0), \
 AROS_LCA(size_t, (___hs_block_size), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1141, Amisslext)

#define SSL_set_block_padding_ex(___ssl, ___app_block_size, ___hs_block_size) \
      AROS_LC3(int, SSL_set_block_padding_ex, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(size_t, (___app_block_size), D0), \
 AROS_LCA(size_t, (___hs_block_size), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1142, Amisslext)

#define SSL_get1_builtin_sigalgs(___libctx) \
      AROS_LC1(char *, SSL_get1_builtin_sigalgs, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1143, Amisslext)

#define DIST_POINT_NAME_dup(___a) \
      AROS_LC1(DIST_POINT_NAME *, DIST_POINT_NAME_dup, \
 AROS_LCA(const DIST_POINT_NAME *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1144, Amisslext)

#define GENERAL_NAME_set1_X509_NAME(___tgt, ___src) \
      AROS_LC2(int, GENERAL_NAME_set1_X509_NAME, \
 AROS_LCA(GENERAL_NAME **, (___tgt), A0), \
 AROS_LCA(const X509_NAME *, (___src), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1145, Amisslext)

#define OSSL_CMP_CRLSTATUS_create(___crl, ___cert, ___only_DN) \
      AROS_LC3(OSSL_CMP_CRLSTATUS *, OSSL_CMP_CRLSTATUS_create, \
 AROS_LCA(const X509_CRL *, (___crl), A0), \
 AROS_LCA(const X509 *, (___cert), A1), \
 AROS_LCA(int, (___only_DN), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1146, Amisslext)

#define OSSL_CMP_CRLSTATUS_free(___crlstatus) \
      AROS_LC1(void, OSSL_CMP_CRLSTATUS_free, \
 AROS_LCA(OSSL_CMP_CRLSTATUS *, (___crlstatus), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1147, Amisslext)

#define OSSL_CMP_CRLSTATUS_get0(___crlstatus, ___dpn, ___issuer, ___thisUpdate) \
      AROS_LC4(int, OSSL_CMP_CRLSTATUS_get0, \
 AROS_LCA(const OSSL_CMP_CRLSTATUS *, (___crlstatus), A0), \
 AROS_LCA(DIST_POINT_NAME **, (___dpn), A1), \
 AROS_LCA(GENERAL_NAMES **, (___issuer), A2), \
 AROS_LCA(ASN1_TIME **, (___thisUpdate), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1148, Amisslext)

#define OSSL_CMP_CRLSTATUS_new1(___dpn, ___issuer, ___thisUpdate) \
      AROS_LC3(OSSL_CMP_CRLSTATUS *, OSSL_CMP_CRLSTATUS_new1, \
 AROS_LCA(const DIST_POINT_NAME *, (___dpn), A0), \
 AROS_LCA(const GENERAL_NAMES *, (___issuer), A1), \
 AROS_LCA(const ASN1_TIME *, (___thisUpdate), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1149, Amisslext)

#define OSSL_CMP_ITAV_get0_crlStatusList(___itav, ___out) \
      AROS_LC2(int, OSSL_CMP_ITAV_get0_crlStatusList, \
 AROS_LCA(const OSSL_CMP_ITAV *, (___itav), A0), \
 AROS_LCA(STACK_OF(OSSL_CMP_CRLSTATUS) **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1150, Amisslext)

#define OSSL_CMP_ITAV_get0_crls(___it, ___out) \
      AROS_LC2(int, OSSL_CMP_ITAV_get0_crls, \
 AROS_LCA(const OSSL_CMP_ITAV *, (___it), A0), \
 AROS_LCA(STACK_OF(X509_CRL) **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1151, Amisslext)

#define OSSL_CMP_ITAV_new0_crlStatusList(___crlStatusList) \
      AROS_LC1(OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new0_crlStatusList, \
 AROS_LCA(STACK_OF(OSSL_CMP_CRLSTATUS) *, (___crlStatusList), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1152, Amisslext)

#define OSSL_CMP_ITAV_new_crls(___crls) \
      AROS_LC1(OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new_crls, \
 AROS_LCA(const X509_CRL *, (___crls), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1153, Amisslext)

#define OSSL_CMP_get1_crlUpdate(___ctx, ___crlcert, ___last_crl, ___crl) \
      AROS_LC4(int, OSSL_CMP_get1_crlUpdate, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(const X509 *, (___crlcert), A1), \
 AROS_LCA(const X509_CRL *, (___last_crl), A2), \
 AROS_LCA(X509_CRL **, (___crl), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1154, Amisslext)

#define OSSL_CMP_ITAV_new0_certReqTemplate(___certTemplate, ___keySpec) \
      AROS_LC2(OSSL_CMP_ITAV *, OSSL_CMP_ITAV_new0_certReqTemplate, \
 AROS_LCA(OSSL_CRMF_CERTTEMPLATE *, (___certTemplate), A0), \
 AROS_LCA(OSSL_CMP_ATAVS *, (___keySpec), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1155, Amisslext)

#define OSSL_CMP_ITAV_get1_certReqTemplate(___itav, ___certTemplate, ___keySpec) \
      AROS_LC3(int, OSSL_CMP_ITAV_get1_certReqTemplate, \
 AROS_LCA(const OSSL_CMP_ITAV *, (___itav), A0), \
 AROS_LCA(OSSL_CRMF_CERTTEMPLATE **, (___certTemplate), A1), \
 AROS_LCA(OSSL_CMP_ATAVS **, (___keySpec), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1156, Amisslext)

#define OSSL_CMP_ATAV_create(___type, ___value) \
      AROS_LC2(OSSL_CMP_ATAV *, OSSL_CMP_ATAV_create, \
 AROS_LCA(ASN1_OBJECT *, (___type), A0), \
 AROS_LCA(ASN1_TYPE *, (___value), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1157, Amisslext)

#define OSSL_CMP_ATAV_set0(___itav, ___type, ___value) \
      AROS_LC3(void, OSSL_CMP_ATAV_set0, \
 AROS_LCA(OSSL_CMP_ATAV *, (___itav), A0), \
 AROS_LCA(ASN1_OBJECT *, (___type), A1), \
 AROS_LCA(ASN1_TYPE *, (___value), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1158, Amisslext)

#define OSSL_CMP_ATAV_get0_type(___itav) \
      AROS_LC1(ASN1_OBJECT *, OSSL_CMP_ATAV_get0_type, \
 AROS_LCA(const OSSL_CMP_ATAV *, (___itav), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1159, Amisslext)

#define OSSL_CMP_ATAV_get0_value(___itav) \
      AROS_LC1(ASN1_TYPE *, OSSL_CMP_ATAV_get0_value, \
 AROS_LCA(const OSSL_CMP_ATAV *, (___itav), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1160, Amisslext)

#define OSSL_CMP_ATAV_new_algId(___alg) \
      AROS_LC1(OSSL_CMP_ATAV *, OSSL_CMP_ATAV_new_algId, \
 AROS_LCA(const X509_ALGOR *, (___alg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1161, Amisslext)

#define OSSL_CMP_ATAV_get0_algId(___atav) \
      AROS_LC1(X509_ALGOR *, OSSL_CMP_ATAV_get0_algId, \
 AROS_LCA(const OSSL_CMP_ATAV *, (___atav), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1162, Amisslext)

#define OSSL_CMP_ATAV_new_rsaKeyLen(___len) \
      AROS_LC1(OSSL_CMP_ATAV *, OSSL_CMP_ATAV_new_rsaKeyLen, \
 AROS_LCA(int, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1163, Amisslext)

#define OSSL_CMP_ATAV_get_rsaKeyLen(___atav) \
      AROS_LC1(int, OSSL_CMP_ATAV_get_rsaKeyLen, \
 AROS_LCA(const OSSL_CMP_ATAV *, (___atav), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1164, Amisslext)

#define OSSL_CMP_ATAV_push1(___sk_p, ___atav) \
      AROS_LC2(int, OSSL_CMP_ATAV_push1, \
 AROS_LCA(OSSL_CMP_ATAVS **, (___sk_p), A0), \
 AROS_LCA(const OSSL_CMP_ATAV *, (___atav), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1165, Amisslext)

#define OSSL_CMP_get1_certReqTemplate(___ctx, ___certTemplate, ___keySpec) \
      AROS_LC3(int, OSSL_CMP_get1_certReqTemplate, \
 AROS_LCA(OSSL_CMP_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_CRMF_CERTTEMPLATE **, (___certTemplate), A1), \
 AROS_LCA(OSSL_CMP_ATAVS **, (___keySpec), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1166, Amisslext)

#define d2i_OSSL_CMP_ATAVS(___a, ___in, ___len) \
      AROS_LC3(OSSL_CMP_ATAVS *, d2i_OSSL_CMP_ATAVS, \
 AROS_LCA(OSSL_CMP_ATAVS **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1167, Amisslext)

#define i2d_OSSL_CMP_ATAVS(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CMP_ATAVS, \
 AROS_LCA(const OSSL_CMP_ATAVS *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1168, Amisslext)

#define OSSL_CMP_ATAVS_free(___a) \
      AROS_LC1(void, OSSL_CMP_ATAVS_free, \
 AROS_LCA(OSSL_CMP_ATAVS *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1169, Amisslext)

#define OSSL_CMP_ATAVS_new() \
      AROS_LC0(OSSL_CMP_ATAVS *, OSSL_CMP_ATAVS_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1170, Amisslext)

#define OSSL_CMP_ATAVS_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CMP_ATAVS_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1171, Amisslext)

#define OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(___v) \
      AROS_LC1(void, OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free, \
 AROS_LCA(OSSL_CRMF_ATTRIBUTETYPEANDVALUE *, (___v), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1172, Amisslext)

#define OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup(___a) \
      AROS_LC1(OSSL_CRMF_ATTRIBUTETYPEANDVALUE *, OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup, \
 AROS_LCA(const OSSL_CRMF_ATTRIBUTETYPEANDVALUE *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1173, Amisslext)

#define OSSL_CRMF_CERTTEMPLATE_dup(___a) \
      AROS_LC1(OSSL_CRMF_CERTTEMPLATE *, OSSL_CRMF_CERTTEMPLATE_dup, \
 AROS_LCA(const OSSL_CRMF_CERTTEMPLATE *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1174, Amisslext)

#define CRYPTO_atomic_store(___dst, ___val, ___lock) \
      AROS_LC3(int, CRYPTO_atomic_store, \
 AROS_LCA(uint64_t *, (___dst), A0), \
 AROS_LCA(uint64_t, (___val), D0), \
 AROS_LCA(CRYPTO_RWLOCK *, (___lock), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1175, Amisslext)

#define CRYPTO_aligned_alloc(___num, ___align, ___freeptr, ___file, ___line) \
      AROS_LC5(void *, CRYPTO_aligned_alloc, \
 AROS_LCA(size_t, (___num), D0), \
 AROS_LCA(size_t, (___align), D1), \
 AROS_LCA(void **, (___freeptr), A0), \
 AROS_LCA(const char *, (___file), A1), \
 AROS_LCA(int, (___line), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1176, Amisslext)

#define X509v3_add_extensions(___target, ___exts) \
      AROS_LC2(STACK_OF(X509_EXTENSION) *, X509v3_add_extensions, \
 AROS_LCA(STACK_OF(X509_EXTENSION) **, (___target), A0), \
 AROS_LCA(const STACK_OF(X509_EXTENSION) *, (___exts), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1177, Amisslext)

#define PKCS12_set_pbmac1_pbkdf2(___p12, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___md_type, ___prf_md_name) \
      AROS_LC8(int, PKCS12_set_pbmac1_pbkdf2, \
 AROS_LCA(PKCS12 *, (___p12), A0), \
 AROS_LCA(const char *, (___pass), A1), \
 AROS_LCA(int, (___passlen), D0), \
 AROS_LCA(unsigned char *, (___salt), A2), \
 AROS_LCA(int, (___saltlen), D1), \
 AROS_LCA(int, (___iter), D2), \
 AROS_LCA(const EVP_MD *, (___md_type), A3), \
 AROS_LCA(const char *, (___prf_md_name), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1178, Amisslext)

#define PBMAC1_get1_pbkdf2_param(___macalg) \
      AROS_LC1(PBKDF2PARAM *, PBMAC1_get1_pbkdf2_param, \
 AROS_LCA(const X509_ALGOR *, (___macalg), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1179, Amisslext)

#define d2i_PBMAC1PARAM(___a, ___in, ___len) \
      AROS_LC3(PBMAC1PARAM *, d2i_PBMAC1PARAM, \
 AROS_LCA(PBMAC1PARAM **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1180, Amisslext)

#define i2d_PBMAC1PARAM(___a, ___out) \
      AROS_LC2(int, i2d_PBMAC1PARAM, \
 AROS_LCA(const PBMAC1PARAM *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1181, Amisslext)

#define PBMAC1PARAM_free(___a) \
      AROS_LC1(void, PBMAC1PARAM_free, \
 AROS_LCA(PBMAC1PARAM *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1182, Amisslext)

#define PBMAC1PARAM_new() \
      AROS_LC0(PBMAC1PARAM *, PBMAC1PARAM_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1183, Amisslext)

#define PBMAC1PARAM_it() \
      AROS_LC0(const ASN1_ITEM *, PBMAC1PARAM_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1184, Amisslext)

#define OSSL_LIB_CTX_get_conf_diagnostics(___ctx) \
      AROS_LC1(int, OSSL_LIB_CTX_get_conf_diagnostics, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1185, Amisslext)

#define OSSL_LIB_CTX_set_conf_diagnostics(___ctx, ___value) \
      AROS_LC2(void, OSSL_LIB_CTX_set_conf_diagnostics, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___value), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1186, Amisslext)

#define OSSL_LIB_CTX_get_data(___ctx, ___index) \
      AROS_LC2(void *, OSSL_LIB_CTX_get_data, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(int, (___index), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1187, Amisslext)

#define OSSL_GENERAL_NAMES_print(___out, ___gens, ___indent) \
      AROS_LC3(int, OSSL_GENERAL_NAMES_print, \
 AROS_LCA(BIO *, (___out), A0), \
 AROS_LCA(GENERAL_NAMES *, (___gens), A1), \
 AROS_LCA(int, (___indent), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1188, Amisslext)

#define TS_VERIFY_CTX_set0_data(___ctx, ___b) \
      AROS_LC2(int, TS_VERIFY_CTX_set0_data, \
 AROS_LCA(TS_VERIFY_CTX *, (___ctx), A0), \
 AROS_LCA(BIO *, (___b), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1189, Amisslext)

#define TS_VERIFY_CTX_set0_imprint(___ctx, ___hexstr, ___len) \
      AROS_LC3(int, TS_VERIFY_CTX_set0_imprint, \
 AROS_LCA(TS_VERIFY_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___hexstr), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1190, Amisslext)

#define TS_VERIFY_CTX_set0_store(___ctx, ___s) \
      AROS_LC2(int, TS_VERIFY_CTX_set0_store, \
 AROS_LCA(TS_VERIFY_CTX *, (___ctx), A0), \
 AROS_LCA(X509_STORE *, (___s), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1191, Amisslext)

#define TS_VERIFY_CTX_set0_certs(___ctx, ___certs) \
      AROS_LC2(int, TS_VERIFY_CTX_set0_certs, \
 AROS_LCA(TS_VERIFY_CTX *, (___ctx), A0), \
 AROS_LCA(STACK_OF(X509) *, (___certs), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1192, Amisslext)

#define CRYPTO_atomic_add64(___val, ___op, ___ret, ___lock) \
      AROS_LC4(int, CRYPTO_atomic_add64, \
 AROS_LCA(uint64_t *, (___val), A0), \
 AROS_LCA(uint64_t, (___op), D0), \
 AROS_LCA(uint64_t *, (___ret), A1), \
 AROS_LCA(CRYPTO_RWLOCK *, (___lock), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1193, Amisslext)

#define CRYPTO_atomic_and(___val, ___op, ___ret, ___lock) \
      AROS_LC4(int, CRYPTO_atomic_and, \
 AROS_LCA(uint64_t *, (___val), A0), \
 AROS_LCA(uint64_t, (___op), D0), \
 AROS_LCA(uint64_t *, (___ret), A1), \
 AROS_LCA(CRYPTO_RWLOCK *, (___lock), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1194, Amisslext)

#define d2i_OSSL_ATTRIBUTES_SYNTAX(___a, ___in, ___len) \
      AROS_LC3(OSSL_ATTRIBUTES_SYNTAX *, d2i_OSSL_ATTRIBUTES_SYNTAX, \
 AROS_LCA(OSSL_ATTRIBUTES_SYNTAX **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1195, Amisslext)

#define i2d_OSSL_ATTRIBUTES_SYNTAX(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_ATTRIBUTES_SYNTAX, \
 AROS_LCA(const OSSL_ATTRIBUTES_SYNTAX *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1196, Amisslext)

#define OSSL_ATTRIBUTES_SYNTAX_free(___a) \
      AROS_LC1(void, OSSL_ATTRIBUTES_SYNTAX_free, \
 AROS_LCA(OSSL_ATTRIBUTES_SYNTAX *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1197, Amisslext)

#define OSSL_ATTRIBUTES_SYNTAX_new() \
      AROS_LC0(OSSL_ATTRIBUTES_SYNTAX *, OSSL_ATTRIBUTES_SYNTAX_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1198, Amisslext)

#define OSSL_ATTRIBUTES_SYNTAX_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_ATTRIBUTES_SYNTAX_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1199, Amisslext)

#define d2i_OSSL_USER_NOTICE_SYNTAX(___a, ___in, ___len) \
      AROS_LC3(OSSL_USER_NOTICE_SYNTAX *, d2i_OSSL_USER_NOTICE_SYNTAX, \
 AROS_LCA(OSSL_USER_NOTICE_SYNTAX **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1200, Amisslext)

#define i2d_OSSL_USER_NOTICE_SYNTAX(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_USER_NOTICE_SYNTAX, \
 AROS_LCA(const OSSL_USER_NOTICE_SYNTAX *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1201, Amisslext)

#define OSSL_USER_NOTICE_SYNTAX_free(___a) \
      AROS_LC1(void, OSSL_USER_NOTICE_SYNTAX_free, \
 AROS_LCA(OSSL_USER_NOTICE_SYNTAX *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1202, Amisslext)

#define OSSL_USER_NOTICE_SYNTAX_new() \
      AROS_LC0(OSSL_USER_NOTICE_SYNTAX *, OSSL_USER_NOTICE_SYNTAX_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1203, Amisslext)

#define OSSL_USER_NOTICE_SYNTAX_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_USER_NOTICE_SYNTAX_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1204, Amisslext)

#define OSSL_INDICATOR_set_callback(___libctx, ___cb) \
      AROS_LC2(void, OSSL_INDICATOR_set_callback, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(OSSL_INDICATOR_CALLBACK *, (___cb), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1205, Amisslext)

#define OSSL_INDICATOR_get_callback(___libctx, ___cb) \
      AROS_LC2(void, OSSL_INDICATOR_get_callback, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(OSSL_INDICATOR_CALLBACK **, (___cb), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1206, Amisslext)

#define OPENSSL_strtoul(___str, ___endptr, ___base, ___num) \
      AROS_LC4(int, OPENSSL_strtoul, \
 AROS_LCA(const char *, (___str), A0), \
 AROS_LCA(char **, (___endptr), A1), \
 AROS_LCA(int, (___base), D0), \
 AROS_LCA(unsigned long *, (___num), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1207, Amisslext)

#define d2i_OSSL_BASIC_ATTR_CONSTRAINTS(___a, ___in, ___len) \
      AROS_LC3(OSSL_BASIC_ATTR_CONSTRAINTS *, d2i_OSSL_BASIC_ATTR_CONSTRAINTS, \
 AROS_LCA(OSSL_BASIC_ATTR_CONSTRAINTS **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1208, Amisslext)

#define i2d_OSSL_BASIC_ATTR_CONSTRAINTS(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_BASIC_ATTR_CONSTRAINTS, \
 AROS_LCA(const OSSL_BASIC_ATTR_CONSTRAINTS *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1209, Amisslext)

#define OSSL_BASIC_ATTR_CONSTRAINTS_free(___a) \
      AROS_LC1(void, OSSL_BASIC_ATTR_CONSTRAINTS_free, \
 AROS_LCA(OSSL_BASIC_ATTR_CONSTRAINTS *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1210, Amisslext)

#define OSSL_BASIC_ATTR_CONSTRAINTS_new() \
      AROS_LC0(OSSL_BASIC_ATTR_CONSTRAINTS *, OSSL_BASIC_ATTR_CONSTRAINTS_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1211, Amisslext)

#define OSSL_BASIC_ATTR_CONSTRAINTS_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_BASIC_ATTR_CONSTRAINTS_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1212, Amisslext)

#define EVP_KEYMGMT_gen_gettable_params(___keymgmt) \
      AROS_LC1(const OSSL_PARAM *, EVP_KEYMGMT_gen_gettable_params, \
 AROS_LCA(const EVP_KEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1213, Amisslext)

#define EVP_PKEY_CTX_set_signature(___pctx, ___sig, ___siglen) \
      AROS_LC3(int, EVP_PKEY_CTX_set_signature, \
 AROS_LCA(EVP_PKEY_CTX *, (___pctx), A0), \
 AROS_LCA(const unsigned char *, (___sig), A1), \
 AROS_LCA(size_t, (___siglen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1214, Amisslext)

#define EVP_PKEY_sign_init_ex2(___ctx, ___algo, ___params) \
      AROS_LC3(int, EVP_PKEY_sign_init_ex2, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_SIGNATURE *, (___algo), A1), \
 AROS_LCA(const OSSL_PARAM *, (___params), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1215, Amisslext)

#define EVP_PKEY_sign_message_init(___ctx, ___algo, ___params) \
      AROS_LC3(int, EVP_PKEY_sign_message_init, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_SIGNATURE *, (___algo), A1), \
 AROS_LCA(const OSSL_PARAM *, (___params), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1216, Amisslext)

#define EVP_PKEY_sign_message_update(___ctx, ___in, ___inlen) \
      AROS_LC3(int, EVP_PKEY_sign_message_update, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___in), A1), \
 AROS_LCA(size_t, (___inlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1217, Amisslext)

#define EVP_PKEY_sign_message_final(___ctx, ___sig, ___siglen) \
      AROS_LC3(int, EVP_PKEY_sign_message_final, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char *, (___sig), A1), \
 AROS_LCA(size_t *, (___siglen), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1218, Amisslext)

#define EVP_PKEY_verify_init_ex2(___ctx, ___algo, ___params) \
      AROS_LC3(int, EVP_PKEY_verify_init_ex2, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_SIGNATURE *, (___algo), A1), \
 AROS_LCA(const OSSL_PARAM *, (___params), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1219, Amisslext)

#define EVP_PKEY_verify_message_init(___ctx, ___algo, ___params) \
      AROS_LC3(int, EVP_PKEY_verify_message_init, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_SIGNATURE *, (___algo), A1), \
 AROS_LCA(const OSSL_PARAM *, (___params), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1220, Amisslext)

#define EVP_PKEY_verify_message_update(___ctx, ___in, ___inlen) \
      AROS_LC3(int, EVP_PKEY_verify_message_update, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const unsigned char *, (___in), A1), \
 AROS_LCA(size_t, (___inlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1221, Amisslext)

#define EVP_PKEY_verify_message_final(___ctx) \
      AROS_LC1(int, EVP_PKEY_verify_message_final, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1222, Amisslext)

#define EVP_PKEY_verify_recover_init_ex2(___ctx, ___algo, ___params) \
      AROS_LC3(int, EVP_PKEY_verify_recover_init_ex2, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_SIGNATURE *, (___algo), A1), \
 AROS_LCA(const OSSL_PARAM *, (___params), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1223, Amisslext)

#define EVP_MD_xof(___md) \
      AROS_LC1(int, EVP_MD_xof, \
 AROS_LCA(const EVP_MD *, (___md), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1224, Amisslext)

#define EVP_MD_CTX_get_size_ex(___ctx) \
      AROS_LC1(int, EVP_MD_CTX_get_size_ex, \
 AROS_LCA(const EVP_MD_CTX *, (___ctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1225, Amisslext)

#define EVP_CIPHER_CTX_set_algor_params(___ctx, ___alg) \
      AROS_LC2(int, EVP_CIPHER_CTX_set_algor_params, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(const X509_ALGOR *, (___alg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1226, Amisslext)

#define EVP_CIPHER_CTX_get_algor_params(___ctx, ___alg) \
      AROS_LC2(int, EVP_CIPHER_CTX_get_algor_params, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(X509_ALGOR *, (___alg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1227, Amisslext)

#define EVP_CIPHER_CTX_get_algor(___ctx, ___alg) \
      AROS_LC2(int, EVP_CIPHER_CTX_get_algor, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(X509_ALGOR **, (___alg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1228, Amisslext)

#define EVP_PKEY_CTX_set_algor_params(___ctx, ___alg) \
      AROS_LC2(int, EVP_PKEY_CTX_set_algor_params, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(const X509_ALGOR *, (___alg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1229, Amisslext)

#define EVP_PKEY_CTX_get_algor_params(___ctx, ___alg) \
      AROS_LC2(int, EVP_PKEY_CTX_get_algor_params, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(X509_ALGOR *, (___alg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1230, Amisslext)

#define EVP_PKEY_CTX_get_algor(___ctx, ___alg) \
      AROS_LC2(int, EVP_PKEY_CTX_get_algor, \
 AROS_LCA(EVP_PKEY_CTX *, (___ctx), A0), \
 AROS_LCA(X509_ALGOR **, (___alg), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1231, Amisslext)

#define d2i_X509_ACERT(___a, ___in, ___len) \
      AROS_LC3(X509_ACERT *, d2i_X509_ACERT, \
 AROS_LCA(X509_ACERT **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1232, Amisslext)

#define i2d_X509_ACERT(___a, ___out) \
      AROS_LC2(int, i2d_X509_ACERT, \
 AROS_LCA(const X509_ACERT *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1233, Amisslext)

#define X509_ACERT_free(___a) \
      AROS_LC1(void, X509_ACERT_free, \
 AROS_LCA(X509_ACERT *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1234, Amisslext)

#define X509_ACERT_new() \
      AROS_LC0(X509_ACERT *, X509_ACERT_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1235, Amisslext)

#define X509_ACERT_it() \
      AROS_LC0(const ASN1_ITEM *, X509_ACERT_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1236, Amisslext)

#define X509_ACERT_dup(___a) \
      AROS_LC1(X509_ACERT *, X509_ACERT_dup, \
 AROS_LCA(const X509_ACERT *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1237, Amisslext)

#define X509_ACERT_INFO_it() \
      AROS_LC0(const ASN1_ITEM *, X509_ACERT_INFO_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1238, Amisslext)

#define X509_ACERT_INFO_free(___a) \
      AROS_LC1(void, X509_ACERT_INFO_free, \
 AROS_LCA(X509_ACERT_INFO *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1239, Amisslext)

#define X509_ACERT_INFO_new() \
      AROS_LC0(X509_ACERT_INFO *, X509_ACERT_INFO_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1240, Amisslext)

#define OSSL_OBJECT_DIGEST_INFO_free(___a) \
      AROS_LC1(void, OSSL_OBJECT_DIGEST_INFO_free, \
 AROS_LCA(OSSL_OBJECT_DIGEST_INFO *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1241, Amisslext)

#define OSSL_OBJECT_DIGEST_INFO_new() \
      AROS_LC0(OSSL_OBJECT_DIGEST_INFO *, OSSL_OBJECT_DIGEST_INFO_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1242, Amisslext)

#define OSSL_ISSUER_SERIAL_free(___a) \
      AROS_LC1(void, OSSL_ISSUER_SERIAL_free, \
 AROS_LCA(OSSL_ISSUER_SERIAL *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1243, Amisslext)

#define OSSL_ISSUER_SERIAL_new() \
      AROS_LC0(OSSL_ISSUER_SERIAL *, OSSL_ISSUER_SERIAL_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1244, Amisslext)

#define X509_ACERT_ISSUER_V2FORM_free(___a) \
      AROS_LC1(void, X509_ACERT_ISSUER_V2FORM_free, \
 AROS_LCA(X509_ACERT_ISSUER_V2FORM *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1245, Amisslext)

#define X509_ACERT_ISSUER_V2FORM_new() \
      AROS_LC0(X509_ACERT_ISSUER_V2FORM *, X509_ACERT_ISSUER_V2FORM_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1246, Amisslext)

#define PEM_read_bio_X509_ACERT(___out, ___x, ___cb, ___u) \
      AROS_LC4(X509_ACERT *, PEM_read_bio_X509_ACERT, \
 AROS_LCA(BIO *, (___out), A0), \
 AROS_LCA(X509_ACERT **, (___x), A1), \
 AROS_LCA(pem_password_cb *, (___cb), A2), \
 AROS_LCA(void *, (___u), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1247, Amisslext)

#define PEM_write_bio_X509_ACERT(___out, ___x) \
      AROS_LC2(int, PEM_write_bio_X509_ACERT, \
 AROS_LCA(BIO *, (___out), A0), \
 AROS_LCA(const X509_ACERT *, (___x), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1248, Amisslext)

#define d2i_X509_ACERT_bio(___bp, ___acert) \
      AROS_LC2(X509_ACERT *, d2i_X509_ACERT_bio, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(X509_ACERT **, (___acert), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1249, Amisslext)

#define i2d_X509_ACERT_bio(___bp, ___acert) \
      AROS_LC2(int, i2d_X509_ACERT_bio, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(const X509_ACERT *, (___acert), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1250, Amisslext)

#define X509_ACERT_get0_holder_entityName(___x) \
      AROS_LC1(const GENERAL_NAMES *, X509_ACERT_get0_holder_entityName, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1251, Amisslext)

#define X509_ACERT_get0_holder_baseCertId(___x) \
      AROS_LC1(const OSSL_ISSUER_SERIAL *, X509_ACERT_get0_holder_baseCertId, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1252, Amisslext)

#define X509_ACERT_get0_holder_digest(___x) \
      AROS_LC1(const OSSL_OBJECT_DIGEST_INFO *, X509_ACERT_get0_holder_digest, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1253, Amisslext)

#define X509_ACERT_get0_issuerName(___x) \
      AROS_LC1(const X509_NAME *, X509_ACERT_get0_issuerName, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1254, Amisslext)

#define X509_ACERT_get_version(___x) \
      AROS_LC1(long, X509_ACERT_get_version, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1255, Amisslext)

#define X509_ACERT_get0_signature(___x, ___psig, ___palg) \
      AROS_LC3(void, X509_ACERT_get0_signature, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
 AROS_LCA(const ASN1_BIT_STRING **, (___psig), A1), \
 AROS_LCA(const X509_ALGOR **, (___palg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1256, Amisslext)

#define X509_ACERT_get_signature_nid(___x) \
      AROS_LC1(int, X509_ACERT_get_signature_nid, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1257, Amisslext)

#define X509_ACERT_get0_info_sigalg(___x) \
      AROS_LC1(const X509_ALGOR *, X509_ACERT_get0_info_sigalg, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1258, Amisslext)

#define X509_ACERT_get0_serialNumber(___x) \
      AROS_LC1(const ASN1_INTEGER *, X509_ACERT_get0_serialNumber, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1259, Amisslext)

#define X509_ACERT_get0_notBefore(___x) \
      AROS_LC1(const ASN1_TIME *, X509_ACERT_get0_notBefore, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1260, Amisslext)

#define X509_ACERT_get0_notAfter(___x) \
      AROS_LC1(const ASN1_TIME *, X509_ACERT_get0_notAfter, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1261, Amisslext)

#define X509_ACERT_get0_issuerUID(___x) \
      AROS_LC1(const ASN1_BIT_STRING *, X509_ACERT_get0_issuerUID, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1262, Amisslext)

#define X509_ACERT_set_version(___x, ___version) \
      AROS_LC2(int, X509_ACERT_set_version, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(long, (___version), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1263, Amisslext)

#define X509_ACERT_set0_holder_entityName(___x, ___name) \
      AROS_LC2(void, X509_ACERT_set0_holder_entityName, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(GENERAL_NAMES *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1264, Amisslext)

#define X509_ACERT_set0_holder_baseCertId(___x, ___isss) \
      AROS_LC2(void, X509_ACERT_set0_holder_baseCertId, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(OSSL_ISSUER_SERIAL *, (___isss), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1265, Amisslext)

#define X509_ACERT_set0_holder_digest(___x, ___dinfo) \
      AROS_LC2(void, X509_ACERT_set0_holder_digest, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(OSSL_OBJECT_DIGEST_INFO *, (___dinfo), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1266, Amisslext)

#define X509_ACERT_set1_issuerName(___x, ___name) \
      AROS_LC2(int, X509_ACERT_set1_issuerName, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(const X509_NAME *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1267, Amisslext)

#define X509_ACERT_set1_serialNumber(___x, ___serial) \
      AROS_LC2(int, X509_ACERT_set1_serialNumber, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(const ASN1_INTEGER *, (___serial), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1268, Amisslext)

#define X509_ACERT_set1_notBefore(___x, ___time) \
      AROS_LC2(int, X509_ACERT_set1_notBefore, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(const ASN1_GENERALIZEDTIME *, (___time), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1269, Amisslext)

#define X509_ACERT_set1_notAfter(___x, ___time) \
      AROS_LC2(int, X509_ACERT_set1_notAfter, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(const ASN1_GENERALIZEDTIME *, (___time), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1270, Amisslext)

#define OSSL_OBJECT_DIGEST_INFO_get0_digest(___o, ___digestedObjectType, ___digestAlgorithm, ___digest) \
      AROS_LC4(void, OSSL_OBJECT_DIGEST_INFO_get0_digest, \
 AROS_LCA(const OSSL_OBJECT_DIGEST_INFO *, (___o), A0), \
 AROS_LCA(int *, (___digestedObjectType), A1), \
 AROS_LCA(const X509_ALGOR **, (___digestAlgorithm), A2), \
 AROS_LCA(const ASN1_BIT_STRING **, (___digest), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1271, Amisslext)

#define OSSL_OBJECT_DIGEST_INFO_set1_digest(___o, ___digestedObjectType, ___digestAlgorithm, ___digest) \
      AROS_LC4(int, OSSL_OBJECT_DIGEST_INFO_set1_digest, \
 AROS_LCA(OSSL_OBJECT_DIGEST_INFO *, (___o), A0), \
 AROS_LCA(int, (___digestedObjectType), D0), \
 AROS_LCA(X509_ALGOR *, (___digestAlgorithm), A1), \
 AROS_LCA(ASN1_BIT_STRING *, (___digest), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1272, Amisslext)

#define OSSL_ISSUER_SERIAL_get0_issuer(___isss) \
      AROS_LC1(const X509_NAME *, OSSL_ISSUER_SERIAL_get0_issuer, \
 AROS_LCA(const OSSL_ISSUER_SERIAL *, (___isss), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1273, Amisslext)

#define OSSL_ISSUER_SERIAL_get0_serial(___isss) \
      AROS_LC1(const ASN1_INTEGER *, OSSL_ISSUER_SERIAL_get0_serial, \
 AROS_LCA(const OSSL_ISSUER_SERIAL *, (___isss), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1274, Amisslext)

#define OSSL_ISSUER_SERIAL_get0_issuerUID(___isss) \
      AROS_LC1(const ASN1_BIT_STRING *, OSSL_ISSUER_SERIAL_get0_issuerUID, \
 AROS_LCA(const OSSL_ISSUER_SERIAL *, (___isss), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1275, Amisslext)

#define OSSL_ISSUER_SERIAL_set1_issuer(___isss, ___issuer) \
      AROS_LC2(int, OSSL_ISSUER_SERIAL_set1_issuer, \
 AROS_LCA(OSSL_ISSUER_SERIAL *, (___isss), A0), \
 AROS_LCA(const X509_NAME *, (___issuer), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1276, Amisslext)

#define OSSL_ISSUER_SERIAL_set1_serial(___isss, ___serial) \
      AROS_LC2(int, OSSL_ISSUER_SERIAL_set1_serial, \
 AROS_LCA(OSSL_ISSUER_SERIAL *, (___isss), A0), \
 AROS_LCA(const ASN1_INTEGER *, (___serial), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1277, Amisslext)

#define OSSL_ISSUER_SERIAL_set1_issuerUID(___isss, ___uid) \
      AROS_LC2(int, OSSL_ISSUER_SERIAL_set1_issuerUID, \
 AROS_LCA(OSSL_ISSUER_SERIAL *, (___isss), A0), \
 AROS_LCA(const ASN1_BIT_STRING *, (___uid), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1278, Amisslext)

#define X509_ACERT_print(___bp, ___x) \
      AROS_LC2(int, X509_ACERT_print, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(X509_ACERT *, (___x), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1279, Amisslext)

#define X509_ACERT_print_ex(___bp, ___x, ___nmflags, ___cflag) \
      AROS_LC4(int, X509_ACERT_print_ex, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(X509_ACERT *, (___x), A1), \
 AROS_LCA(unsigned long, (___nmflags), D0), \
 AROS_LCA(unsigned long, (___cflag), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1280, Amisslext)

#define X509_ACERT_get_attr_count(___x) \
      AROS_LC1(int, X509_ACERT_get_attr_count, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1281, Amisslext)

#define X509_ACERT_get_attr_by_NID(___x, ___nid, ___lastpos) \
      AROS_LC3(int, X509_ACERT_get_attr_by_NID, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
 AROS_LCA(int, (___nid), D0), \
 AROS_LCA(int, (___lastpos), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1282, Amisslext)

#define X509_ACERT_get_attr_by_OBJ(___x, ___obj, ___lastpos) \
      AROS_LC3(int, X509_ACERT_get_attr_by_OBJ, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
 AROS_LCA(const ASN1_OBJECT *, (___obj), A1), \
 AROS_LCA(int, (___lastpos), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1283, Amisslext)

#define X509_ACERT_get_attr(___x, ___loc) \
      AROS_LC2(X509_ATTRIBUTE *, X509_ACERT_get_attr, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
 AROS_LCA(int, (___loc), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1284, Amisslext)

#define X509_ACERT_delete_attr(___x, ___loc) \
      AROS_LC2(X509_ATTRIBUTE *, X509_ACERT_delete_attr, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(int, (___loc), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1285, Amisslext)

#define X509_ACERT_add1_attr(___x, ___attr) \
      AROS_LC2(int, X509_ACERT_add1_attr, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(X509_ATTRIBUTE *, (___attr), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1286, Amisslext)

#define X509_ACERT_add1_attr_by_OBJ(___x, ___obj, ___type, ___bytes, ___len) \
      AROS_LC5(int, X509_ACERT_add1_attr_by_OBJ, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(const ASN1_OBJECT *, (___obj), A1), \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(const void *, (___bytes), A2), \
 AROS_LCA(int, (___len), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1287, Amisslext)

#define X509_ACERT_add1_attr_by_NID(___x, ___nid, ___type, ___bytes, ___len) \
      AROS_LC5(int, X509_ACERT_add1_attr_by_NID, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(int, (___nid), D0), \
 AROS_LCA(int, (___type), D1), \
 AROS_LCA(const void *, (___bytes), A1), \
 AROS_LCA(int, (___len), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1288, Amisslext)

#define X509_ACERT_add1_attr_by_txt(___x, ___attrname, ___type, ___bytes, ___len) \
      AROS_LC5(int, X509_ACERT_add1_attr_by_txt, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(const char *, (___attrname), A1), \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(const unsigned char *, (___bytes), A2), \
 AROS_LCA(int, (___len), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1289, Amisslext)

#define X509_ACERT_sign(___x, ___pkey, ___md) \
      AROS_LC3(int, X509_ACERT_sign, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(EVP_PKEY *, (___pkey), A1), \
 AROS_LCA(const EVP_MD *, (___md), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1290, Amisslext)

#define X509_ACERT_sign_ctx(___x, ___ctx) \
      AROS_LC2(int, X509_ACERT_sign_ctx, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(EVP_MD_CTX *, (___ctx), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1291, Amisslext)

#define X509_ACERT_verify(___a, ___r) \
      AROS_LC2(int, X509_ACERT_verify, \
 AROS_LCA(X509_ACERT *, (___a), A0), \
 AROS_LCA(EVP_PKEY *, (___r), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1292, Amisslext)

#define X509_ACERT_get_ext_d2i(___x, ___nid, ___crit, ___idx) \
      AROS_LC4(void *, X509_ACERT_get_ext_d2i, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
 AROS_LCA(int, (___nid), D0), \
 AROS_LCA(int *, (___crit), A1), \
 AROS_LCA(int *, (___idx), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1293, Amisslext)

#define X509_ACERT_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
      AROS_LC5(int, X509_ACERT_add1_ext_i2d, \
 AROS_LCA(X509_ACERT *, (___x), A0), \
 AROS_LCA(int, (___nid), D0), \
 AROS_LCA(void *, (___value), A1), \
 AROS_LCA(int, (___crit), D1), \
 AROS_LCA(unsigned long, (___flags), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1294, Amisslext)

#define X509_ACERT_get0_extensions(___x) \
      AROS_LC1(const struct stack_st_X509_EXTENSION *, X509_ACERT_get0_extensions, \
 AROS_LCA(const X509_ACERT *, (___x), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1295, Amisslext)

#define OSSL_IETF_ATTR_SYNTAX_VALUE_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_IETF_ATTR_SYNTAX_VALUE_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1296, Amisslext)

#define OSSL_IETF_ATTR_SYNTAX_VALUE_free(___a) \
      AROS_LC1(void, OSSL_IETF_ATTR_SYNTAX_VALUE_free, \
 AROS_LCA(OSSL_IETF_ATTR_SYNTAX_VALUE *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1297, Amisslext)

#define OSSL_IETF_ATTR_SYNTAX_VALUE_new() \
      AROS_LC0(OSSL_IETF_ATTR_SYNTAX_VALUE *, OSSL_IETF_ATTR_SYNTAX_VALUE_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1298, Amisslext)

#define d2i_OSSL_IETF_ATTR_SYNTAX(___a, ___in, ___len) \
      AROS_LC3(OSSL_IETF_ATTR_SYNTAX *, d2i_OSSL_IETF_ATTR_SYNTAX, \
 AROS_LCA(OSSL_IETF_ATTR_SYNTAX **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1299, Amisslext)

#define i2d_OSSL_IETF_ATTR_SYNTAX(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_IETF_ATTR_SYNTAX, \
 AROS_LCA(const OSSL_IETF_ATTR_SYNTAX *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1300, Amisslext)

#define OSSL_IETF_ATTR_SYNTAX_free(___a) \
      AROS_LC1(void, OSSL_IETF_ATTR_SYNTAX_free, \
 AROS_LCA(OSSL_IETF_ATTR_SYNTAX *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1301, Amisslext)

#define OSSL_IETF_ATTR_SYNTAX_new() \
      AROS_LC0(OSSL_IETF_ATTR_SYNTAX *, OSSL_IETF_ATTR_SYNTAX_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1302, Amisslext)

#define OSSL_IETF_ATTR_SYNTAX_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_IETF_ATTR_SYNTAX_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1303, Amisslext)

#define OSSL_IETF_ATTR_SYNTAX_get0_policyAuthority(___a) \
      AROS_LC1(const GENERAL_NAMES *, OSSL_IETF_ATTR_SYNTAX_get0_policyAuthority, \
 AROS_LCA(const OSSL_IETF_ATTR_SYNTAX *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1304, Amisslext)

#define OSSL_IETF_ATTR_SYNTAX_set0_policyAuthority(___a, ___names) \
      AROS_LC2(void, OSSL_IETF_ATTR_SYNTAX_set0_policyAuthority, \
 AROS_LCA(OSSL_IETF_ATTR_SYNTAX *, (___a), A0), \
 AROS_LCA(GENERAL_NAMES *, (___names), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1305, Amisslext)

#define OSSL_IETF_ATTR_SYNTAX_get_value_num(___a) \
      AROS_LC1(int, OSSL_IETF_ATTR_SYNTAX_get_value_num, \
 AROS_LCA(const OSSL_IETF_ATTR_SYNTAX *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1306, Amisslext)

#define OSSL_IETF_ATTR_SYNTAX_get0_value(___a, ___ind, ___type) \
      AROS_LC3(void *, OSSL_IETF_ATTR_SYNTAX_get0_value, \
 AROS_LCA(const OSSL_IETF_ATTR_SYNTAX *, (___a), A0), \
 AROS_LCA(int, (___ind), D0), \
 AROS_LCA(int *, (___type), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1307, Amisslext)

#define OSSL_IETF_ATTR_SYNTAX_add1_value(___a, ___type, ___data) \
      AROS_LC3(int, OSSL_IETF_ATTR_SYNTAX_add1_value, \
 AROS_LCA(OSSL_IETF_ATTR_SYNTAX *, (___a), A0), \
 AROS_LCA(int, (___type), D0), \
 AROS_LCA(void *, (___data), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1308, Amisslext)

#define OSSL_IETF_ATTR_SYNTAX_print(___bp, ___a, ___indent) \
      AROS_LC3(int, OSSL_IETF_ATTR_SYNTAX_print, \
 AROS_LCA(BIO *, (___bp), A0), \
 AROS_LCA(OSSL_IETF_ATTR_SYNTAX *, (___a), A1), \
 AROS_LCA(int, (___indent), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1309, Amisslext)

#define X509_ACERT_add_attr_nconf(___conf, ___section, ___acert) \
      AROS_LC3(int, X509_ACERT_add_attr_nconf, \
 AROS_LCA(CONF *, (___conf), A0), \
 AROS_LCA(const char *, (___section), A1), \
 AROS_LCA(X509_ACERT *, (___acert), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1310, Amisslext)

#define d2i_OSSL_TARGET(___a, ___in, ___len) \
      AROS_LC3(OSSL_TARGET *, d2i_OSSL_TARGET, \
 AROS_LCA(OSSL_TARGET **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1311, Amisslext)

#define i2d_OSSL_TARGET(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_TARGET, \
 AROS_LCA(const OSSL_TARGET *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1312, Amisslext)

#define OSSL_TARGET_free(___a) \
      AROS_LC1(void, OSSL_TARGET_free, \
 AROS_LCA(OSSL_TARGET *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1313, Amisslext)

#define OSSL_TARGET_new() \
      AROS_LC0(OSSL_TARGET *, OSSL_TARGET_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1314, Amisslext)

#define OSSL_TARGET_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_TARGET_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1315, Amisslext)

#define d2i_OSSL_TARGETS(___a, ___in, ___len) \
      AROS_LC3(OSSL_TARGETS *, d2i_OSSL_TARGETS, \
 AROS_LCA(OSSL_TARGETS **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1316, Amisslext)

#define i2d_OSSL_TARGETS(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_TARGETS, \
 AROS_LCA(const OSSL_TARGETS *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1317, Amisslext)

#define OSSL_TARGETS_free(___a) \
      AROS_LC1(void, OSSL_TARGETS_free, \
 AROS_LCA(OSSL_TARGETS *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1318, Amisslext)

#define OSSL_TARGETS_new() \
      AROS_LC0(OSSL_TARGETS *, OSSL_TARGETS_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1319, Amisslext)

#define OSSL_TARGETS_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_TARGETS_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1320, Amisslext)

#define d2i_OSSL_TARGETING_INFORMATION(___a, ___in, ___len) \
      AROS_LC3(OSSL_TARGETING_INFORMATION *, d2i_OSSL_TARGETING_INFORMATION, \
 AROS_LCA(OSSL_TARGETING_INFORMATION **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1321, Amisslext)

#define i2d_OSSL_TARGETING_INFORMATION(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_TARGETING_INFORMATION, \
 AROS_LCA(const OSSL_TARGETING_INFORMATION *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1322, Amisslext)

#define OSSL_TARGETING_INFORMATION_free(___a) \
      AROS_LC1(void, OSSL_TARGETING_INFORMATION_free, \
 AROS_LCA(OSSL_TARGETING_INFORMATION *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1323, Amisslext)

#define OSSL_TARGETING_INFORMATION_new() \
      AROS_LC0(OSSL_TARGETING_INFORMATION *, OSSL_TARGETING_INFORMATION_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1324, Amisslext)

#define OSSL_TARGETING_INFORMATION_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_TARGETING_INFORMATION_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1325, Amisslext)

#define SSL_set_quic_tls_cbs(___s, ___qtdis, ___arg) \
      AROS_LC3(int, SSL_set_quic_tls_cbs, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(const OSSL_DISPATCH *, (___qtdis), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1326, Amisslext)

#define SSL_set_quic_tls_transport_params(___s, ___params, ___params_len) \
      AROS_LC3(int, SSL_set_quic_tls_transport_params, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(const unsigned char *, (___params), A1), \
 AROS_LCA(size_t, (___params_len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1327, Amisslext)

#define SSL_set_quic_tls_early_data_enabled(___s, ___enabled) \
      AROS_LC2(int, SSL_set_quic_tls_early_data_enabled, \
 AROS_LCA(SSL *, (___s), A0), \
 AROS_LCA(int, (___enabled), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1328, Amisslext)

#define OSSL_QUIC_server_method() \
      AROS_LC0(const SSL_METHOD *, OSSL_QUIC_server_method, \
     struct Library *, AMISSLEXT_BASE_NAME, 1329, Amisslext)

#define SSL_is_listener(___ssl) \
      AROS_LC1(int, SSL_is_listener, \
 AROS_LCA(SSL *, (___ssl), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1330, Amisslext)

#define SSL_get0_listener(___s) \
      AROS_LC1(SSL *, SSL_get0_listener, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1331, Amisslext)

#define SSL_new_listener(___ctx, ___flags) \
      AROS_LC2(SSL *, SSL_new_listener, \
 AROS_LCA(SSL_CTX *, (___ctx), A0), \
 AROS_LCA(uint64_t, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1332, Amisslext)

#define SSL_accept_connection(___ssl, ___flags) \
      AROS_LC2(SSL *, SSL_accept_connection, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(uint64_t, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1333, Amisslext)

#define SSL_get_accept_connection_queue_len(___ssl) \
      AROS_LC1(size_t, SSL_get_accept_connection_queue_len, \
 AROS_LCA(SSL *, (___ssl), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1334, Amisslext)

#define SSL_listen(___ssl) \
      AROS_LC1(int, SSL_listen, \
 AROS_LCA(SSL *, (___ssl), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1335, Amisslext)

#define SSL_new_from_listener(___ssl, ___flags) \
      AROS_LC2(SSL *, SSL_new_from_listener, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(uint64_t, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1336, Amisslext)

#define SSL_new_listener_from(___ssl, ___flags) \
      AROS_LC2(SSL *, SSL_new_listener_from, \
 AROS_LCA(SSL *, (___ssl), A0), \
 AROS_LCA(uint64_t, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1337, Amisslext)

#define SSL_is_domain(___s) \
      AROS_LC1(int, SSL_is_domain, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1338, Amisslext)

#define SSL_get0_domain(___s) \
      AROS_LC1(SSL *, SSL_get0_domain, \
 AROS_LCA(SSL *, (___s), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1339, Amisslext)

#define SSL_new_domain(___ctx, ___flags) \
      AROS_LC2(SSL *, SSL_new_domain, \
 AROS_LCA(SSL_CTX *, (___ctx), A0), \
 AROS_LCA(uint64_t, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1340, Amisslext)

#define SSL_CTX_set_domain_flags(___ctx, ___domain_flags) \
      AROS_LC2(int, SSL_CTX_set_domain_flags, \
 AROS_LCA(SSL_CTX *, (___ctx), A0), \
 AROS_LCA(uint64_t, (___domain_flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1341, Amisslext)

#define SSL_CTX_get_domain_flags(___ctx, ___domain_flags) \
      AROS_LC2(int, SSL_CTX_get_domain_flags, \
 AROS_LCA(const SSL_CTX *, (___ctx), A0), \
 AROS_LCA(uint64_t *, (___domain_flags), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1342, Amisslext)

#define SSL_get_domain_flags(___ssl, ___domain_flags) \
      AROS_LC2(int, SSL_get_domain_flags, \
 AROS_LCA(const SSL *, (___ssl), A0), \
 AROS_LCA(uint64_t *, (___domain_flags), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1343, Amisslext)

#define SSL_CTX_set_new_pending_conn_cb(___c, ___cb, ___arg) \
      AROS_LC3(void, SSL_CTX_set_new_pending_conn_cb, \
 AROS_LCA(SSL_CTX *, (___c), A0), \
 AROS_LCA(SSL_new_pending_conn_cb_fn, (___cb), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1344, Amisslext)

#define X509_VERIFY_PARAM_get_purpose(___param) \
      AROS_LC1(int, X509_VERIFY_PARAM_get_purpose, \
 AROS_LCA(const X509_VERIFY_PARAM *, (___param), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1345, Amisslext)

#define d2i_OSSL_CRMF_ENCRYPTEDKEY(___a, ___in, ___len) \
      AROS_LC3(OSSL_CRMF_ENCRYPTEDKEY *, d2i_OSSL_CRMF_ENCRYPTEDKEY, \
 AROS_LCA(OSSL_CRMF_ENCRYPTEDKEY **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1346, Amisslext)

#define i2d_OSSL_CRMF_ENCRYPTEDKEY(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_CRMF_ENCRYPTEDKEY, \
 AROS_LCA(const OSSL_CRMF_ENCRYPTEDKEY *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1347, Amisslext)

#define OSSL_CRMF_ENCRYPTEDKEY_free(___a) \
      AROS_LC1(void, OSSL_CRMF_ENCRYPTEDKEY_free, \
 AROS_LCA(OSSL_CRMF_ENCRYPTEDKEY *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1348, Amisslext)

#define OSSL_CRMF_ENCRYPTEDKEY_new() \
      AROS_LC0(OSSL_CRMF_ENCRYPTEDKEY *, OSSL_CRMF_ENCRYPTEDKEY_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1349, Amisslext)

#define OSSL_CRMF_ENCRYPTEDKEY_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_CRMF_ENCRYPTEDKEY_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1350, Amisslext)

#define OSSL_CRMF_ENCRYPTEDKEY_get1_encCert(___ecert, ___libctx, ___propq, ___pkey, ___flags) \
      AROS_LC5(X509 *, OSSL_CRMF_ENCRYPTEDKEY_get1_encCert, \
 AROS_LCA(const OSSL_CRMF_ENCRYPTEDKEY *, (___ecert), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
 AROS_LCA(EVP_PKEY *, (___pkey), A3), \
 AROS_LCA(unsigned int, (___flags), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1351, Amisslext)

#define OSSL_CRMF_ENCRYPTEDVALUE_decrypt(___enc, ___libctx, ___propq, ___pkey, ___outlen) \
      AROS_LC5(unsigned char *, OSSL_CRMF_ENCRYPTEDVALUE_decrypt, \
 AROS_LCA(const OSSL_CRMF_ENCRYPTEDVALUE *, (___enc), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(const char *, (___propq), A2), \
 AROS_LCA(EVP_PKEY *, (___pkey), A3), \
 AROS_LCA(int *, (___outlen), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1352, Amisslext)

#define OSSL_CRMF_ENCRYPTEDKEY_get1_pkey(___encryptedKey, ___ts, ___extra, ___pkey, ___cert, ___secret, ___libctx, ___propq) \
      AROS_LC8(EVP_PKEY *, OSSL_CRMF_ENCRYPTEDKEY_get1_pkey, \
 AROS_LCA(const OSSL_CRMF_ENCRYPTEDKEY *, (___encryptedKey), A0), \
 AROS_LCA(X509_STORE *, (___ts), A1), \
 AROS_LCA(STACK_OF(X509) *, (___extra), A2), \
 AROS_LCA(EVP_PKEY *, (___pkey), A3), \
 AROS_LCA(X509 *, (___cert), D0), \
 AROS_LCA(ASN1_OCTET_STRING *, (___secret), D1), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), D2), \
 AROS_LCA(const char *, (___propq), D3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1353, Amisslext)

#define OSSL_CRMF_MSG_centralkeygen_requested(___crm, ___p10cr) \
      AROS_LC2(int, OSSL_CRMF_MSG_centralkeygen_requested, \
 AROS_LCA(const OSSL_CRMF_MSG *, (___crm), A0), \
 AROS_LCA(const X509_REQ *, (___p10cr), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1354, Amisslext)

#define CMS_EnvelopedData_dup(___a) \
      AROS_LC1(CMS_EnvelopedData *, CMS_EnvelopedData_dup, \
 AROS_LCA(const CMS_EnvelopedData *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1355, Amisslext)

#define OSSL_CRMF_ENCRYPTEDKEY_init_envdata(___envdata) \
      AROS_LC1(OSSL_CRMF_ENCRYPTEDKEY *, OSSL_CRMF_ENCRYPTEDKEY_init_envdata, \
 AROS_LCA(CMS_EnvelopedData *, (___envdata), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1356, Amisslext)

#define EVP_get1_default_properties(___libctx) \
      AROS_LC1(char *, EVP_get1_default_properties, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1357, Amisslext)

#define RAND_set1_random_provider(___ctx, ___p) \
      AROS_LC2(int, RAND_set1_random_provider, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(OSSL_PROVIDER *, (___p), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1358, Amisslext)

#define X509_PURPOSE_get_unused_id(___libctx) \
      AROS_LC1(int, X509_PURPOSE_get_unused_id, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1359, Amisslext)

#define d2i_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(___a, ___in, ___len) \
      AROS_LC3(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *, d2i_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX, \
 AROS_LCA(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1360, Amisslext)

#define i2d_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX, \
 AROS_LCA(const OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1361, Amisslext)

#define OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_free(___a) \
      AROS_LC1(void, OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_free, \
 AROS_LCA(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1362, Amisslext)

#define OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_new() \
      AROS_LC0(OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *, OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1363, Amisslext)

#define OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1364, Amisslext)

#define d2i_OSSL_ROLE_SPEC_CERT_ID(___a, ___in, ___len) \
      AROS_LC3(OSSL_ROLE_SPEC_CERT_ID *, d2i_OSSL_ROLE_SPEC_CERT_ID, \
 AROS_LCA(OSSL_ROLE_SPEC_CERT_ID **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1365, Amisslext)

#define i2d_OSSL_ROLE_SPEC_CERT_ID(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_ROLE_SPEC_CERT_ID, \
 AROS_LCA(const OSSL_ROLE_SPEC_CERT_ID *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1366, Amisslext)

#define OSSL_ROLE_SPEC_CERT_ID_free(___a) \
      AROS_LC1(void, OSSL_ROLE_SPEC_CERT_ID_free, \
 AROS_LCA(OSSL_ROLE_SPEC_CERT_ID *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1367, Amisslext)

#define OSSL_ROLE_SPEC_CERT_ID_new() \
      AROS_LC0(OSSL_ROLE_SPEC_CERT_ID *, OSSL_ROLE_SPEC_CERT_ID_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1368, Amisslext)

#define OSSL_ROLE_SPEC_CERT_ID_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_ROLE_SPEC_CERT_ID_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1369, Amisslext)

#define d2i_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(___a, ___in, ___len) \
      AROS_LC3(OSSL_ROLE_SPEC_CERT_ID_SYNTAX *, d2i_OSSL_ROLE_SPEC_CERT_ID_SYNTAX, \
 AROS_LCA(OSSL_ROLE_SPEC_CERT_ID_SYNTAX **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1370, Amisslext)

#define i2d_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_ROLE_SPEC_CERT_ID_SYNTAX, \
 AROS_LCA(const OSSL_ROLE_SPEC_CERT_ID_SYNTAX *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1371, Amisslext)

#define OSSL_ROLE_SPEC_CERT_ID_SYNTAX_free(___a) \
      AROS_LC1(void, OSSL_ROLE_SPEC_CERT_ID_SYNTAX_free, \
 AROS_LCA(OSSL_ROLE_SPEC_CERT_ID_SYNTAX *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1372, Amisslext)

#define OSSL_ROLE_SPEC_CERT_ID_SYNTAX_new() \
      AROS_LC0(OSSL_ROLE_SPEC_CERT_ID_SYNTAX *, OSSL_ROLE_SPEC_CERT_ID_SYNTAX_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1373, Amisslext)

#define OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1374, Amisslext)

#define d2i_OSSL_ATTRIBUTE_DESCRIPTOR(___a, ___in, ___len) \
      AROS_LC3(OSSL_ATTRIBUTE_DESCRIPTOR *, d2i_OSSL_ATTRIBUTE_DESCRIPTOR, \
 AROS_LCA(OSSL_ATTRIBUTE_DESCRIPTOR **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1375, Amisslext)

#define i2d_OSSL_ATTRIBUTE_DESCRIPTOR(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_ATTRIBUTE_DESCRIPTOR, \
 AROS_LCA(const OSSL_ATTRIBUTE_DESCRIPTOR *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1376, Amisslext)

#define OSSL_ATTRIBUTE_DESCRIPTOR_free(___a) \
      AROS_LC1(void, OSSL_ATTRIBUTE_DESCRIPTOR_free, \
 AROS_LCA(OSSL_ATTRIBUTE_DESCRIPTOR *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1377, Amisslext)

#define OSSL_ATTRIBUTE_DESCRIPTOR_new() \
      AROS_LC0(OSSL_ATTRIBUTE_DESCRIPTOR *, OSSL_ATTRIBUTE_DESCRIPTOR_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1378, Amisslext)

#define OSSL_ATTRIBUTE_DESCRIPTOR_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_ATTRIBUTE_DESCRIPTOR_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1379, Amisslext)

#define OSSL_HASH_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_HASH_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1380, Amisslext)

#define OSSL_INFO_SYNTAX_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_INFO_SYNTAX_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1381, Amisslext)

#define OSSL_INFO_SYNTAX_POINTER_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_INFO_SYNTAX_POINTER_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1382, Amisslext)

#define OSSL_PRIVILEGE_POLICY_ID_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_PRIVILEGE_POLICY_ID_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1383, Amisslext)

#define d2i_OSSL_HASH(___a, ___in, ___len) \
      AROS_LC3(OSSL_HASH *, d2i_OSSL_HASH, \
 AROS_LCA(OSSL_HASH **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1384, Amisslext)

#define i2d_OSSL_HASH(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_HASH, \
 AROS_LCA(const OSSL_HASH *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1385, Amisslext)

#define OSSL_HASH_free(___a) \
      AROS_LC1(void, OSSL_HASH_free, \
 AROS_LCA(OSSL_HASH *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1386, Amisslext)

#define OSSL_HASH_new() \
      AROS_LC0(OSSL_HASH *, OSSL_HASH_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1387, Amisslext)

#define d2i_OSSL_INFO_SYNTAX(___a, ___in, ___len) \
      AROS_LC3(OSSL_INFO_SYNTAX *, d2i_OSSL_INFO_SYNTAX, \
 AROS_LCA(OSSL_INFO_SYNTAX **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1388, Amisslext)

#define i2d_OSSL_INFO_SYNTAX(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_INFO_SYNTAX, \
 AROS_LCA(const OSSL_INFO_SYNTAX *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1389, Amisslext)

#define OSSL_INFO_SYNTAX_free(___a) \
      AROS_LC1(void, OSSL_INFO_SYNTAX_free, \
 AROS_LCA(OSSL_INFO_SYNTAX *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1390, Amisslext)

#define OSSL_INFO_SYNTAX_new() \
      AROS_LC0(OSSL_INFO_SYNTAX *, OSSL_INFO_SYNTAX_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1391, Amisslext)

#define d2i_OSSL_INFO_SYNTAX_POINTER(___a, ___in, ___len) \
      AROS_LC3(OSSL_INFO_SYNTAX_POINTER *, d2i_OSSL_INFO_SYNTAX_POINTER, \
 AROS_LCA(OSSL_INFO_SYNTAX_POINTER **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1392, Amisslext)

#define i2d_OSSL_INFO_SYNTAX_POINTER(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_INFO_SYNTAX_POINTER, \
 AROS_LCA(const OSSL_INFO_SYNTAX_POINTER *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1393, Amisslext)

#define OSSL_INFO_SYNTAX_POINTER_free(___a) \
      AROS_LC1(void, OSSL_INFO_SYNTAX_POINTER_free, \
 AROS_LCA(OSSL_INFO_SYNTAX_POINTER *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1394, Amisslext)

#define OSSL_INFO_SYNTAX_POINTER_new() \
      AROS_LC0(OSSL_INFO_SYNTAX_POINTER *, OSSL_INFO_SYNTAX_POINTER_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1395, Amisslext)

#define d2i_OSSL_PRIVILEGE_POLICY_ID(___a, ___in, ___len) \
      AROS_LC3(OSSL_PRIVILEGE_POLICY_ID *, d2i_OSSL_PRIVILEGE_POLICY_ID, \
 AROS_LCA(OSSL_PRIVILEGE_POLICY_ID **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1396, Amisslext)

#define i2d_OSSL_PRIVILEGE_POLICY_ID(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_PRIVILEGE_POLICY_ID, \
 AROS_LCA(const OSSL_PRIVILEGE_POLICY_ID *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1397, Amisslext)

#define OSSL_PRIVILEGE_POLICY_ID_free(___a) \
      AROS_LC1(void, OSSL_PRIVILEGE_POLICY_ID_free, \
 AROS_LCA(OSSL_PRIVILEGE_POLICY_ID *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1398, Amisslext)

#define OSSL_PRIVILEGE_POLICY_ID_new() \
      AROS_LC0(OSSL_PRIVILEGE_POLICY_ID *, OSSL_PRIVILEGE_POLICY_ID_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1399, Amisslext)

#define OSSL_PARAM_print_to_bio(___params, ___bio, ___print_values) \
      AROS_LC3(int, OSSL_PARAM_print_to_bio, \
 AROS_LCA(const OSSL_PARAM *, (___params), A0), \
 AROS_LCA(BIO *, (___bio), A1), \
 AROS_LCA(int, (___print_values), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1400, Amisslext)

#define d2i_OSSL_DAY_TIME(___a, ___in, ___len) \
      AROS_LC3(OSSL_DAY_TIME *, d2i_OSSL_DAY_TIME, \
 AROS_LCA(OSSL_DAY_TIME **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1401, Amisslext)

#define i2d_OSSL_DAY_TIME(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_DAY_TIME, \
 AROS_LCA(const OSSL_DAY_TIME *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1402, Amisslext)

#define OSSL_DAY_TIME_free(___a) \
      AROS_LC1(void, OSSL_DAY_TIME_free, \
 AROS_LCA(OSSL_DAY_TIME *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1403, Amisslext)

#define OSSL_DAY_TIME_new() \
      AROS_LC0(OSSL_DAY_TIME *, OSSL_DAY_TIME_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1404, Amisslext)

#define OSSL_DAY_TIME_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_DAY_TIME_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1405, Amisslext)

#define d2i_OSSL_DAY_TIME_BAND(___a, ___in, ___len) \
      AROS_LC3(OSSL_DAY_TIME_BAND *, d2i_OSSL_DAY_TIME_BAND, \
 AROS_LCA(OSSL_DAY_TIME_BAND **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1406, Amisslext)

#define i2d_OSSL_DAY_TIME_BAND(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_DAY_TIME_BAND, \
 AROS_LCA(const OSSL_DAY_TIME_BAND *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1407, Amisslext)

#define OSSL_DAY_TIME_BAND_free(___a) \
      AROS_LC1(void, OSSL_DAY_TIME_BAND_free, \
 AROS_LCA(OSSL_DAY_TIME_BAND *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1408, Amisslext)

#define OSSL_DAY_TIME_BAND_new() \
      AROS_LC0(OSSL_DAY_TIME_BAND *, OSSL_DAY_TIME_BAND_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1409, Amisslext)

#define OSSL_DAY_TIME_BAND_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_DAY_TIME_BAND_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1410, Amisslext)

#define d2i_OSSL_TIME_SPEC_DAY(___a, ___in, ___len) \
      AROS_LC3(OSSL_TIME_SPEC_DAY *, d2i_OSSL_TIME_SPEC_DAY, \
 AROS_LCA(OSSL_TIME_SPEC_DAY **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1411, Amisslext)

#define i2d_OSSL_TIME_SPEC_DAY(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_TIME_SPEC_DAY, \
 AROS_LCA(const OSSL_TIME_SPEC_DAY *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1412, Amisslext)

#define OSSL_TIME_SPEC_DAY_free(___a) \
      AROS_LC1(void, OSSL_TIME_SPEC_DAY_free, \
 AROS_LCA(OSSL_TIME_SPEC_DAY *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1413, Amisslext)

#define OSSL_TIME_SPEC_DAY_new() \
      AROS_LC0(OSSL_TIME_SPEC_DAY *, OSSL_TIME_SPEC_DAY_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1414, Amisslext)

#define OSSL_TIME_SPEC_DAY_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_TIME_SPEC_DAY_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1415, Amisslext)

#define d2i_OSSL_TIME_SPEC_WEEKS(___a, ___in, ___len) \
      AROS_LC3(OSSL_TIME_SPEC_WEEKS *, d2i_OSSL_TIME_SPEC_WEEKS, \
 AROS_LCA(OSSL_TIME_SPEC_WEEKS **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1416, Amisslext)

#define i2d_OSSL_TIME_SPEC_WEEKS(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_TIME_SPEC_WEEKS, \
 AROS_LCA(const OSSL_TIME_SPEC_WEEKS *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1417, Amisslext)

#define OSSL_TIME_SPEC_WEEKS_free(___a) \
      AROS_LC1(void, OSSL_TIME_SPEC_WEEKS_free, \
 AROS_LCA(OSSL_TIME_SPEC_WEEKS *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1418, Amisslext)

#define OSSL_TIME_SPEC_WEEKS_new() \
      AROS_LC0(OSSL_TIME_SPEC_WEEKS *, OSSL_TIME_SPEC_WEEKS_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1419, Amisslext)

#define OSSL_TIME_SPEC_WEEKS_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_TIME_SPEC_WEEKS_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1420, Amisslext)

#define d2i_OSSL_TIME_SPEC_MONTH(___a, ___in, ___len) \
      AROS_LC3(OSSL_TIME_SPEC_MONTH *, d2i_OSSL_TIME_SPEC_MONTH, \
 AROS_LCA(OSSL_TIME_SPEC_MONTH **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1421, Amisslext)

#define i2d_OSSL_TIME_SPEC_MONTH(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_TIME_SPEC_MONTH, \
 AROS_LCA(const OSSL_TIME_SPEC_MONTH *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1422, Amisslext)

#define OSSL_TIME_SPEC_MONTH_free(___a) \
      AROS_LC1(void, OSSL_TIME_SPEC_MONTH_free, \
 AROS_LCA(OSSL_TIME_SPEC_MONTH *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1423, Amisslext)

#define OSSL_TIME_SPEC_MONTH_new() \
      AROS_LC0(OSSL_TIME_SPEC_MONTH *, OSSL_TIME_SPEC_MONTH_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1424, Amisslext)

#define OSSL_TIME_SPEC_MONTH_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_TIME_SPEC_MONTH_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1425, Amisslext)

#define d2i_OSSL_NAMED_DAY(___a, ___in, ___len) \
      AROS_LC3(OSSL_NAMED_DAY *, d2i_OSSL_NAMED_DAY, \
 AROS_LCA(OSSL_NAMED_DAY **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1426, Amisslext)

#define i2d_OSSL_NAMED_DAY(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_NAMED_DAY, \
 AROS_LCA(const OSSL_NAMED_DAY *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1427, Amisslext)

#define OSSL_NAMED_DAY_free(___a) \
      AROS_LC1(void, OSSL_NAMED_DAY_free, \
 AROS_LCA(OSSL_NAMED_DAY *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1428, Amisslext)

#define OSSL_NAMED_DAY_new() \
      AROS_LC0(OSSL_NAMED_DAY *, OSSL_NAMED_DAY_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1429, Amisslext)

#define OSSL_NAMED_DAY_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_NAMED_DAY_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1430, Amisslext)

#define d2i_OSSL_TIME_SPEC_X_DAY_OF(___a, ___in, ___len) \
      AROS_LC3(OSSL_TIME_SPEC_X_DAY_OF *, d2i_OSSL_TIME_SPEC_X_DAY_OF, \
 AROS_LCA(OSSL_TIME_SPEC_X_DAY_OF **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1431, Amisslext)

#define i2d_OSSL_TIME_SPEC_X_DAY_OF(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_TIME_SPEC_X_DAY_OF, \
 AROS_LCA(const OSSL_TIME_SPEC_X_DAY_OF *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1432, Amisslext)

#define OSSL_TIME_SPEC_X_DAY_OF_free(___a) \
      AROS_LC1(void, OSSL_TIME_SPEC_X_DAY_OF_free, \
 AROS_LCA(OSSL_TIME_SPEC_X_DAY_OF *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1433, Amisslext)

#define OSSL_TIME_SPEC_X_DAY_OF_new() \
      AROS_LC0(OSSL_TIME_SPEC_X_DAY_OF *, OSSL_TIME_SPEC_X_DAY_OF_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1434, Amisslext)

#define OSSL_TIME_SPEC_X_DAY_OF_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_TIME_SPEC_X_DAY_OF_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1435, Amisslext)

#define d2i_OSSL_TIME_SPEC_ABSOLUTE(___a, ___in, ___len) \
      AROS_LC3(OSSL_TIME_SPEC_ABSOLUTE *, d2i_OSSL_TIME_SPEC_ABSOLUTE, \
 AROS_LCA(OSSL_TIME_SPEC_ABSOLUTE **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1436, Amisslext)

#define i2d_OSSL_TIME_SPEC_ABSOLUTE(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_TIME_SPEC_ABSOLUTE, \
 AROS_LCA(const OSSL_TIME_SPEC_ABSOLUTE *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1437, Amisslext)

#define OSSL_TIME_SPEC_ABSOLUTE_free(___a) \
      AROS_LC1(void, OSSL_TIME_SPEC_ABSOLUTE_free, \
 AROS_LCA(OSSL_TIME_SPEC_ABSOLUTE *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1438, Amisslext)

#define OSSL_TIME_SPEC_ABSOLUTE_new() \
      AROS_LC0(OSSL_TIME_SPEC_ABSOLUTE *, OSSL_TIME_SPEC_ABSOLUTE_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1439, Amisslext)

#define OSSL_TIME_SPEC_ABSOLUTE_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_TIME_SPEC_ABSOLUTE_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1440, Amisslext)

#define d2i_OSSL_TIME_SPEC_TIME(___a, ___in, ___len) \
      AROS_LC3(OSSL_TIME_SPEC_TIME *, d2i_OSSL_TIME_SPEC_TIME, \
 AROS_LCA(OSSL_TIME_SPEC_TIME **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1441, Amisslext)

#define i2d_OSSL_TIME_SPEC_TIME(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_TIME_SPEC_TIME, \
 AROS_LCA(const OSSL_TIME_SPEC_TIME *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1442, Amisslext)

#define OSSL_TIME_SPEC_TIME_free(___a) \
      AROS_LC1(void, OSSL_TIME_SPEC_TIME_free, \
 AROS_LCA(OSSL_TIME_SPEC_TIME *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1443, Amisslext)

#define OSSL_TIME_SPEC_TIME_new() \
      AROS_LC0(OSSL_TIME_SPEC_TIME *, OSSL_TIME_SPEC_TIME_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1444, Amisslext)

#define OSSL_TIME_SPEC_TIME_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_TIME_SPEC_TIME_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1445, Amisslext)

#define d2i_OSSL_TIME_SPEC(___a, ___in, ___len) \
      AROS_LC3(OSSL_TIME_SPEC *, d2i_OSSL_TIME_SPEC, \
 AROS_LCA(OSSL_TIME_SPEC **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1446, Amisslext)

#define i2d_OSSL_TIME_SPEC(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_TIME_SPEC, \
 AROS_LCA(const OSSL_TIME_SPEC *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1447, Amisslext)

#define OSSL_TIME_SPEC_free(___a) \
      AROS_LC1(void, OSSL_TIME_SPEC_free, \
 AROS_LCA(OSSL_TIME_SPEC *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1448, Amisslext)

#define OSSL_TIME_SPEC_new() \
      AROS_LC0(OSSL_TIME_SPEC *, OSSL_TIME_SPEC_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1449, Amisslext)

#define OSSL_TIME_SPEC_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_TIME_SPEC_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1450, Amisslext)

#define d2i_OSSL_TIME_PERIOD(___a, ___in, ___len) \
      AROS_LC3(OSSL_TIME_PERIOD *, d2i_OSSL_TIME_PERIOD, \
 AROS_LCA(OSSL_TIME_PERIOD **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1451, Amisslext)

#define i2d_OSSL_TIME_PERIOD(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_TIME_PERIOD, \
 AROS_LCA(const OSSL_TIME_PERIOD *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1452, Amisslext)

#define OSSL_TIME_PERIOD_free(___a) \
      AROS_LC1(void, OSSL_TIME_PERIOD_free, \
 AROS_LCA(OSSL_TIME_PERIOD *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1453, Amisslext)

#define OSSL_TIME_PERIOD_new() \
      AROS_LC0(OSSL_TIME_PERIOD *, OSSL_TIME_PERIOD_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1454, Amisslext)

#define OSSL_TIME_PERIOD_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_TIME_PERIOD_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1455, Amisslext)

#define EVP_CIPHER_can_pipeline(___cipher, ___enc) \
      AROS_LC2(int, EVP_CIPHER_can_pipeline, \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A0), \
 AROS_LCA(int, (___enc), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1456, Amisslext)

#define EVP_CipherPipelineEncryptInit(___ctx, ___cipher, ___key, ___keylen, ___numpipes, ___iv, ___ivlen) \
      AROS_LC7(int, EVP_CipherPipelineEncryptInit, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A1), \
 AROS_LCA(const unsigned char *, (___key), A2), \
 AROS_LCA(size_t, (___keylen), D0), \
 AROS_LCA(size_t, (___numpipes), D1), \
 AROS_LCA(const unsigned char **, (___iv), A3), \
 AROS_LCA(size_t, (___ivlen), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1457, Amisslext)

#define EVP_CipherPipelineDecryptInit(___ctx, ___cipher, ___key, ___keylen, ___numpipes, ___iv, ___ivlen) \
      AROS_LC7(int, EVP_CipherPipelineDecryptInit, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A1), \
 AROS_LCA(const unsigned char *, (___key), A2), \
 AROS_LCA(size_t, (___keylen), D0), \
 AROS_LCA(size_t, (___numpipes), D1), \
 AROS_LCA(const unsigned char **, (___iv), A3), \
 AROS_LCA(size_t, (___ivlen), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1458, Amisslext)

#define EVP_CipherPipelineUpdate(___ctx, ___out, ___outl, ___outsize, ___in, ___inl) \
      AROS_LC6(int, EVP_CipherPipelineUpdate, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
 AROS_LCA(size_t *, (___outl), A2), \
 AROS_LCA(const size_t *, (___outsize), A3), \
 AROS_LCA(const unsigned char **, (___in), D0), \
 AROS_LCA(const size_t *, (___inl), D1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1459, Amisslext)

#define EVP_CipherPipelineFinal(___ctx, ___outm, ___outl, ___outsize) \
      AROS_LC4(int, EVP_CipherPipelineFinal, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(unsigned char **, (___outm), A1), \
 AROS_LCA(size_t *, (___outl), A2), \
 AROS_LCA(const size_t *, (___outsize), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1460, Amisslext)

#define d2i_OSSL_ATTRIBUTE_TYPE_MAPPING(___a, ___in, ___len) \
      AROS_LC3(OSSL_ATTRIBUTE_TYPE_MAPPING *, d2i_OSSL_ATTRIBUTE_TYPE_MAPPING, \
 AROS_LCA(OSSL_ATTRIBUTE_TYPE_MAPPING **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1461, Amisslext)

#define i2d_OSSL_ATTRIBUTE_TYPE_MAPPING(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_ATTRIBUTE_TYPE_MAPPING, \
 AROS_LCA(const OSSL_ATTRIBUTE_TYPE_MAPPING *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1462, Amisslext)

#define OSSL_ATTRIBUTE_TYPE_MAPPING_free(___a) \
      AROS_LC1(void, OSSL_ATTRIBUTE_TYPE_MAPPING_free, \
 AROS_LCA(OSSL_ATTRIBUTE_TYPE_MAPPING *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1463, Amisslext)

#define OSSL_ATTRIBUTE_TYPE_MAPPING_new() \
      AROS_LC0(OSSL_ATTRIBUTE_TYPE_MAPPING *, OSSL_ATTRIBUTE_TYPE_MAPPING_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1464, Amisslext)

#define OSSL_ATTRIBUTE_TYPE_MAPPING_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_ATTRIBUTE_TYPE_MAPPING_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1465, Amisslext)

#define d2i_OSSL_ATTRIBUTE_VALUE_MAPPING(___a, ___in, ___len) \
      AROS_LC3(OSSL_ATTRIBUTE_VALUE_MAPPING *, d2i_OSSL_ATTRIBUTE_VALUE_MAPPING, \
 AROS_LCA(OSSL_ATTRIBUTE_VALUE_MAPPING **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1466, Amisslext)

#define i2d_OSSL_ATTRIBUTE_VALUE_MAPPING(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_ATTRIBUTE_VALUE_MAPPING, \
 AROS_LCA(const OSSL_ATTRIBUTE_VALUE_MAPPING *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1467, Amisslext)

#define OSSL_ATTRIBUTE_VALUE_MAPPING_free(___a) \
      AROS_LC1(void, OSSL_ATTRIBUTE_VALUE_MAPPING_free, \
 AROS_LCA(OSSL_ATTRIBUTE_VALUE_MAPPING *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1468, Amisslext)

#define OSSL_ATTRIBUTE_VALUE_MAPPING_new() \
      AROS_LC0(OSSL_ATTRIBUTE_VALUE_MAPPING *, OSSL_ATTRIBUTE_VALUE_MAPPING_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1469, Amisslext)

#define OSSL_ATTRIBUTE_VALUE_MAPPING_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_ATTRIBUTE_VALUE_MAPPING_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1470, Amisslext)

#define d2i_OSSL_ATTRIBUTE_MAPPING(___a, ___in, ___len) \
      AROS_LC3(OSSL_ATTRIBUTE_MAPPING *, d2i_OSSL_ATTRIBUTE_MAPPING, \
 AROS_LCA(OSSL_ATTRIBUTE_MAPPING **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1471, Amisslext)

#define i2d_OSSL_ATTRIBUTE_MAPPING(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_ATTRIBUTE_MAPPING, \
 AROS_LCA(const OSSL_ATTRIBUTE_MAPPING *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1472, Amisslext)

#define OSSL_ATTRIBUTE_MAPPING_free(___a) \
      AROS_LC1(void, OSSL_ATTRIBUTE_MAPPING_free, \
 AROS_LCA(OSSL_ATTRIBUTE_MAPPING *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1473, Amisslext)

#define OSSL_ATTRIBUTE_MAPPING_new() \
      AROS_LC0(OSSL_ATTRIBUTE_MAPPING *, OSSL_ATTRIBUTE_MAPPING_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1474, Amisslext)

#define OSSL_ATTRIBUTE_MAPPING_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_ATTRIBUTE_MAPPING_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1475, Amisslext)

#define d2i_OSSL_ATTRIBUTE_MAPPINGS(___a, ___in, ___len) \
      AROS_LC3(OSSL_ATTRIBUTE_MAPPINGS *, d2i_OSSL_ATTRIBUTE_MAPPINGS, \
 AROS_LCA(OSSL_ATTRIBUTE_MAPPINGS **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1476, Amisslext)

#define i2d_OSSL_ATTRIBUTE_MAPPINGS(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_ATTRIBUTE_MAPPINGS, \
 AROS_LCA(const OSSL_ATTRIBUTE_MAPPINGS *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1477, Amisslext)

#define OSSL_ATTRIBUTE_MAPPINGS_free(___a) \
      AROS_LC1(void, OSSL_ATTRIBUTE_MAPPINGS_free, \
 AROS_LCA(OSSL_ATTRIBUTE_MAPPINGS *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1478, Amisslext)

#define OSSL_ATTRIBUTE_MAPPINGS_new() \
      AROS_LC0(OSSL_ATTRIBUTE_MAPPINGS *, OSSL_ATTRIBUTE_MAPPINGS_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1479, Amisslext)

#define OSSL_ATTRIBUTE_MAPPINGS_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_ATTRIBUTE_MAPPINGS_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1480, Amisslext)

#define d2i_OSSL_ATAV(___a, ___in, ___len) \
      AROS_LC3(OSSL_ATAV *, d2i_OSSL_ATAV, \
 AROS_LCA(OSSL_ATAV **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1481, Amisslext)

#define i2d_OSSL_ATAV(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_ATAV, \
 AROS_LCA(const OSSL_ATAV *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1482, Amisslext)

#define OSSL_ATAV_free(___a) \
      AROS_LC1(void, OSSL_ATAV_free, \
 AROS_LCA(OSSL_ATAV *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1483, Amisslext)

#define OSSL_ATAV_new() \
      AROS_LC0(OSSL_ATAV *, OSSL_ATAV_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1484, Amisslext)

#define OSSL_ATAV_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_ATAV_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1485, Amisslext)

#define d2i_OSSL_ALLOWED_ATTRIBUTES_CHOICE(___a, ___in, ___len) \
      AROS_LC3(OSSL_ALLOWED_ATTRIBUTES_CHOICE *, d2i_OSSL_ALLOWED_ATTRIBUTES_CHOICE, \
 AROS_LCA(OSSL_ALLOWED_ATTRIBUTES_CHOICE **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1486, Amisslext)

#define i2d_OSSL_ALLOWED_ATTRIBUTES_CHOICE(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_ALLOWED_ATTRIBUTES_CHOICE, \
 AROS_LCA(const OSSL_ALLOWED_ATTRIBUTES_CHOICE *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1487, Amisslext)

#define OSSL_ALLOWED_ATTRIBUTES_CHOICE_free(___a) \
      AROS_LC1(void, OSSL_ALLOWED_ATTRIBUTES_CHOICE_free, \
 AROS_LCA(OSSL_ALLOWED_ATTRIBUTES_CHOICE *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1488, Amisslext)

#define OSSL_ALLOWED_ATTRIBUTES_CHOICE_new() \
      AROS_LC0(OSSL_ALLOWED_ATTRIBUTES_CHOICE *, OSSL_ALLOWED_ATTRIBUTES_CHOICE_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1489, Amisslext)

#define OSSL_ALLOWED_ATTRIBUTES_CHOICE_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_ALLOWED_ATTRIBUTES_CHOICE_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1490, Amisslext)

#define d2i_OSSL_ALLOWED_ATTRIBUTES_ITEM(___a, ___in, ___len) \
      AROS_LC3(OSSL_ALLOWED_ATTRIBUTES_ITEM *, d2i_OSSL_ALLOWED_ATTRIBUTES_ITEM, \
 AROS_LCA(OSSL_ALLOWED_ATTRIBUTES_ITEM **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1491, Amisslext)

#define i2d_OSSL_ALLOWED_ATTRIBUTES_ITEM(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_ALLOWED_ATTRIBUTES_ITEM, \
 AROS_LCA(const OSSL_ALLOWED_ATTRIBUTES_ITEM *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1492, Amisslext)

#define OSSL_ALLOWED_ATTRIBUTES_ITEM_free(___a) \
      AROS_LC1(void, OSSL_ALLOWED_ATTRIBUTES_ITEM_free, \
 AROS_LCA(OSSL_ALLOWED_ATTRIBUTES_ITEM *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1493, Amisslext)

#define OSSL_ALLOWED_ATTRIBUTES_ITEM_new() \
      AROS_LC0(OSSL_ALLOWED_ATTRIBUTES_ITEM *, OSSL_ALLOWED_ATTRIBUTES_ITEM_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1494, Amisslext)

#define OSSL_ALLOWED_ATTRIBUTES_ITEM_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_ALLOWED_ATTRIBUTES_ITEM_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1495, Amisslext)

#define d2i_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(___a, ___in, ___len) \
      AROS_LC3(OSSL_ALLOWED_ATTRIBUTES_SYNTAX *, d2i_OSSL_ALLOWED_ATTRIBUTES_SYNTAX, \
 AROS_LCA(OSSL_ALLOWED_ATTRIBUTES_SYNTAX **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1496, Amisslext)

#define i2d_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_ALLOWED_ATTRIBUTES_SYNTAX, \
 AROS_LCA(const OSSL_ALLOWED_ATTRIBUTES_SYNTAX *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1497, Amisslext)

#define OSSL_ALLOWED_ATTRIBUTES_SYNTAX_free(___a) \
      AROS_LC1(void, OSSL_ALLOWED_ATTRIBUTES_SYNTAX_free, \
 AROS_LCA(OSSL_ALLOWED_ATTRIBUTES_SYNTAX *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1498, Amisslext)

#define OSSL_ALLOWED_ATTRIBUTES_SYNTAX_new() \
      AROS_LC0(OSSL_ALLOWED_ATTRIBUTES_SYNTAX *, OSSL_ALLOWED_ATTRIBUTES_SYNTAX_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1499, Amisslext)

#define OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1500, Amisslext)

#define EVP_CipherInit_SKEY(___ctx, ___cipher, ___skey, ___iv, ___iv_len, ___enc, ___params) \
      AROS_LC7(int, EVP_CipherInit_SKEY, \
 AROS_LCA(EVP_CIPHER_CTX *, (___ctx), A0), \
 AROS_LCA(const EVP_CIPHER *, (___cipher), A1), \
 AROS_LCA(EVP_SKEY *, (___skey), A2), \
 AROS_LCA(const unsigned char *, (___iv), A3), \
 AROS_LCA(size_t, (___iv_len), D0), \
 AROS_LCA(int, (___enc), D1), \
 AROS_LCA(const OSSL_PARAM *, (___params), D2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1501, Amisslext)

#define EVP_SKEY_import(___libctx, ___skeymgmtname, ___propquery, ___selection, ___params) \
      AROS_LC5(EVP_SKEY *, EVP_SKEY_import, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___skeymgmtname), A1), \
 AROS_LCA(const char *, (___propquery), A2), \
 AROS_LCA(int, (___selection), D0), \
 AROS_LCA(const OSSL_PARAM *, (___params), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1502, Amisslext)

#define EVP_SKEY_generate(___libctx, ___skeymgmtname, ___propquery, ___params) \
      AROS_LC4(EVP_SKEY *, EVP_SKEY_generate, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___skeymgmtname), A1), \
 AROS_LCA(const char *, (___propquery), A2), \
 AROS_LCA(const OSSL_PARAM *, (___params), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1503, Amisslext)

#define EVP_SKEY_import_raw_key(___libctx, ___skeymgmtname, ___key, ___keylen, ___propquery) \
      AROS_LC5(EVP_SKEY *, EVP_SKEY_import_raw_key, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(const char *, (___skeymgmtname), A1), \
 AROS_LCA(unsigned char *, (___key), A2), \
 AROS_LCA(size_t, (___keylen), D0), \
 AROS_LCA(const char *, (___propquery), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1504, Amisslext)

#define EVP_SKEY_get0_raw_key(___skey, ___key, ___len) \
      AROS_LC3(int, EVP_SKEY_get0_raw_key, \
 AROS_LCA(const EVP_SKEY *, (___skey), A0), \
 AROS_LCA(const unsigned char **, (___key), A1), \
 AROS_LCA(size_t *, (___len), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1505, Amisslext)

#define EVP_SKEY_export(___skey, ___selection, ___export_cb, ___export_cbarg) \
      AROS_LC4(int, EVP_SKEY_export, \
 AROS_LCA(const EVP_SKEY *, (___skey), A0), \
 AROS_LCA(int, (___selection), D0), \
 AROS_LCA(OSSL_CALLBACK *, (___export_cb), A1), \
 AROS_LCA(void *, (___export_cbarg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1506, Amisslext)

#define EVP_SKEY_up_ref(___skey) \
      AROS_LC1(int, EVP_SKEY_up_ref, \
 AROS_LCA(EVP_SKEY *, (___skey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1507, Amisslext)

#define EVP_SKEY_free(___skey) \
      AROS_LC1(void, EVP_SKEY_free, \
 AROS_LCA(EVP_SKEY *, (___skey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1508, Amisslext)

#define EVP_SKEYMGMT_fetch(___ctx, ___algorithm, ___properties) \
      AROS_LC3(EVP_SKEYMGMT *, EVP_SKEYMGMT_fetch, \
 AROS_LCA(OSSL_LIB_CTX *, (___ctx), A0), \
 AROS_LCA(const char *, (___algorithm), A1), \
 AROS_LCA(const char *, (___properties), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1509, Amisslext)

#define EVP_SKEYMGMT_up_ref(___keymgmt) \
      AROS_LC1(int, EVP_SKEYMGMT_up_ref, \
 AROS_LCA(EVP_SKEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1510, Amisslext)

#define EVP_SKEYMGMT_free(___keymgmt) \
      AROS_LC1(void, EVP_SKEYMGMT_free, \
 AROS_LCA(EVP_SKEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1511, Amisslext)

#define EVP_SKEYMGMT_get0_provider(___keymgmt) \
      AROS_LC1(const OSSL_PROVIDER *, EVP_SKEYMGMT_get0_provider, \
 AROS_LCA(const EVP_SKEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1512, Amisslext)

#define EVP_SKEYMGMT_get0_name(___keymgmt) \
      AROS_LC1(const char *, EVP_SKEYMGMT_get0_name, \
 AROS_LCA(const EVP_SKEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1513, Amisslext)

#define EVP_SKEYMGMT_get0_description(___keymgmt) \
      AROS_LC1(const char *, EVP_SKEYMGMT_get0_description, \
 AROS_LCA(const EVP_SKEYMGMT *, (___keymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1514, Amisslext)

#define EVP_SKEYMGMT_is_a(___keymgmt, ___name) \
      AROS_LC2(int, EVP_SKEYMGMT_is_a, \
 AROS_LCA(const EVP_SKEYMGMT *, (___keymgmt), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1515, Amisslext)

#define EVP_SKEYMGMT_do_all_provided(___libctx, ___fn, ___arg) \
      AROS_LC3(void, EVP_SKEYMGMT_do_all_provided, \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A0), \
 AROS_LCA(void (*)(EVP_SKEYMGMT *keymgmt,void *arg), (___fn), A1), \
 AROS_LCA(void *, (___arg), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1516, Amisslext)

#define EVP_SKEYMGMT_names_do_all(___keymgmt, ___fn, ___data) \
      AROS_LC3(int, EVP_SKEYMGMT_names_do_all, \
 AROS_LCA(const EVP_SKEYMGMT *, (___keymgmt), A0), \
 AROS_LCA(void (*)(const char *name,void *data), (___fn), A1), \
 AROS_LCA(void *, (___data), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1517, Amisslext)

#define EVP_MAC_init_SKEY(___ctx, ___skey, ___params) \
      AROS_LC3(int, EVP_MAC_init_SKEY, \
 AROS_LCA(EVP_MAC_CTX *, (___ctx), A0), \
 AROS_LCA(EVP_SKEY *, (___skey), A1), \
 AROS_LCA(const OSSL_PARAM *, (___params), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1518, Amisslext)

#define EVP_SKEY_get0_key_id(___skey) \
      AROS_LC1(const char *, EVP_SKEY_get0_key_id, \
 AROS_LCA(const EVP_SKEY *, (___skey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1519, Amisslext)

#define EVP_SKEY_get0_skeymgmt_name(___skey) \
      AROS_LC1(const char *, EVP_SKEY_get0_skeymgmt_name, \
 AROS_LCA(const EVP_SKEY *, (___skey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1520, Amisslext)

#define EVP_SKEY_get0_provider_name(___skey) \
      AROS_LC1(const char *, EVP_SKEY_get0_provider_name, \
 AROS_LCA(const EVP_SKEY *, (___skey), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1521, Amisslext)

#define EVP_SKEYMGMT_get0_gen_settable_params(___skeymgmt) \
      AROS_LC1(const OSSL_PARAM *, EVP_SKEYMGMT_get0_gen_settable_params, \
 AROS_LCA(const EVP_SKEYMGMT *, (___skeymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1522, Amisslext)

#define EVP_SKEYMGMT_get0_imp_settable_params(___skeymgmt) \
      AROS_LC1(const OSSL_PARAM *, EVP_SKEYMGMT_get0_imp_settable_params, \
 AROS_LCA(const EVP_SKEYMGMT *, (___skeymgmt), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1523, Amisslext)

#define EVP_SKEY_is_a(___skey, ___name) \
      AROS_LC2(int, EVP_SKEY_is_a, \
 AROS_LCA(const EVP_SKEY *, (___skey), A0), \
 AROS_LCA(const char *, (___name), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1524, Amisslext)

#define EVP_SKEY_to_provider(___skey, ___libctx, ___prov, ___propquery) \
      AROS_LC4(EVP_SKEY *, EVP_SKEY_to_provider, \
 AROS_LCA(EVP_SKEY *, (___skey), A0), \
 AROS_LCA(OSSL_LIB_CTX *, (___libctx), A1), \
 AROS_LCA(OSSL_PROVIDER *, (___prov), A2), \
 AROS_LCA(const char *, (___propquery), A3), \
     struct Library *, AMISSLEXT_BASE_NAME, 1525, Amisslext)

#define OSSL_PROVIDER_add_conf_parameter(___prov, ___name, ___value) \
      AROS_LC3(int, OSSL_PROVIDER_add_conf_parameter, \
 AROS_LCA(OSSL_PROVIDER *, (___prov), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(const char *, (___value), A2), \
     struct Library *, AMISSLEXT_BASE_NAME, 1526, Amisslext)

#define OSSL_PROVIDER_get_conf_parameters(___prov, ___params) \
      AROS_LC2(int, OSSL_PROVIDER_get_conf_parameters, \
 AROS_LCA(const OSSL_PROVIDER *, (___prov), A0), \
 AROS_LCA(OSSL_PARAM *, (___params), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1527, Amisslext)

#define OSSL_PROVIDER_conf_get_bool(___prov, ___name, ___defval) \
      AROS_LC3(int, OSSL_PROVIDER_conf_get_bool, \
 AROS_LCA(const OSSL_PROVIDER *, (___prov), A0), \
 AROS_LCA(const char *, (___name), A1), \
 AROS_LCA(int, (___defval), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1528, Amisslext)

#define d2i_OSSL_AA_DIST_POINT(___a, ___in, ___len) \
      AROS_LC3(OSSL_AA_DIST_POINT *, d2i_OSSL_AA_DIST_POINT, \
 AROS_LCA(OSSL_AA_DIST_POINT **, (___a), A0), \
 AROS_LCA(const unsigned char **, (___in), A1), \
 AROS_LCA(long, (___len), D0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1529, Amisslext)

#define i2d_OSSL_AA_DIST_POINT(___a, ___out) \
      AROS_LC2(int, i2d_OSSL_AA_DIST_POINT, \
 AROS_LCA(const OSSL_AA_DIST_POINT *, (___a), A0), \
 AROS_LCA(unsigned char **, (___out), A1), \
     struct Library *, AMISSLEXT_BASE_NAME, 1530, Amisslext)

#define OSSL_AA_DIST_POINT_free(___a) \
      AROS_LC1(void, OSSL_AA_DIST_POINT_free, \
 AROS_LCA(OSSL_AA_DIST_POINT *, (___a), A0), \
     struct Library *, AMISSLEXT_BASE_NAME, 1531, Amisslext)

#define OSSL_AA_DIST_POINT_new() \
      AROS_LC0(OSSL_AA_DIST_POINT *, OSSL_AA_DIST_POINT_new, \
     struct Library *, AMISSLEXT_BASE_NAME, 1532, Amisslext)

#define OSSL_AA_DIST_POINT_it() \
      AROS_LC0(const ASN1_ITEM *, OSSL_AA_DIST_POINT_it, \
     struct Library *, AMISSLEXT_BASE_NAME, 1533, Amisslext)

#define PEM_ASN1_write_bio_ctx(___i2d, ___vctx, ___name, ___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
      AROS_LC10(int, PEM_ASN1_write_bio_ctx, \
 AROS_LCA(OSSL_i2d_of_void_ctx *, (___i2d), A0), \
 AROS_LCA(void *, (___vctx), A1), \
 AROS_LCA(const char *, (___name), A2), \
 AROS_LCA(BIO *, (___bp), A3), \
 AROS_LCA(const void *, (___x), D0), \
 AROS_LCA(const EVP_CIPHER *, (___enc), D1), \
 AROS_LCA(const unsigned char *, (___kstr), D2), \
 AROS_LCA(int, (___klen), D3), \
 AROS_LCA(pem_password_cb *, (___cb), D4), \
 AROS_LCA(void *, (___u), D5), \
     struct Library *, AMISSLEXT_BASE_NAME, 1534, Amisslext)

#endif /* !_INLINE_AMISSLEXT_H */
