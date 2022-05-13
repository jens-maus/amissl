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

int __OSSL_trace_enabled(__reg("a6") struct Library * , __reg("d0") int category ) = "\tjsr\t-30(a6)";
#define OSSL_trace_enabled(category) __OSSL_trace_enabled(AmiSSLExtBase, (category))

BIO * __OSSL_trace_begin(__reg("a6") struct Library * , __reg("d0") int category ) = "\tjsr\t-36(a6)";
#define OSSL_trace_begin(category) __OSSL_trace_begin(AmiSSLExtBase, (category))

void __OSSL_trace_end(__reg("a6") struct Library * , __reg("d0") int category , __reg("a0") BIO * channel ) = "\tjsr\t-42(a6)";
#define OSSL_trace_end(category, channel) __OSSL_trace_end(AmiSSLExtBase, (category), (channel))

OSSL_PROVIDER * __OSSL_PROVIDER_load(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * a , __reg("a1") const char * name ) = "\tjsr\t-48(a6)";
#define OSSL_PROVIDER_load(a, name) __OSSL_PROVIDER_load(AmiSSLExtBase, (a), (name))

OSSL_PROVIDER * __OSSL_PROVIDER_try_load(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * a , __reg("a1") const char * name , __reg("d0") int retain_fallbacks ) = "\tjsr\t-54(a6)";
#define OSSL_PROVIDER_try_load(a, name, retain_fallbacks) __OSSL_PROVIDER_try_load(AmiSSLExtBase, (a), (name), (retain_fallbacks))

int __OSSL_PROVIDER_unload(__reg("a6") struct Library * , __reg("a0") OSSL_PROVIDER * prov ) = "\tjsr\t-60(a6)";
#define OSSL_PROVIDER_unload(prov) __OSSL_PROVIDER_unload(AmiSSLExtBase, (prov))

int __OSSL_PROVIDER_add_builtin(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * a , __reg("a1") const char * name , __reg("a2") OSSL_provider_init_fn * init_fn ) = "\tjsr\t-66(a6)";
#define OSSL_PROVIDER_add_builtin(a, name, init_fn) __OSSL_PROVIDER_add_builtin(AmiSSLExtBase, (a), (name), (init_fn))

const OSSL_PARAM * __OSSL_PROVIDER_gettable_params(__reg("a6") struct Library * , __reg("a0") const OSSL_PROVIDER * prov ) = "\tjsr\t-72(a6)";
#define OSSL_PROVIDER_gettable_params(prov) __OSSL_PROVIDER_gettable_params(AmiSSLExtBase, (prov))

int __OSSL_PROVIDER_get_params(__reg("a6") struct Library * , __reg("a0") const OSSL_PROVIDER * prov , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-78(a6)";
#define OSSL_PROVIDER_get_params(prov, params) __OSSL_PROVIDER_get_params(AmiSSLExtBase, (prov), (params))

OSSL_CRMF_ENCRYPTEDVALUE * __d2i_OSSL_CRMF_ENCRYPTEDVALUE(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_ENCRYPTEDVALUE ** a , __reg("a1") const unsigned char ** in , __reg("d0") long len ) = "\tjsr\t-84(a6)";
#define d2i_OSSL_CRMF_ENCRYPTEDVALUE(a, in, len) __d2i_OSSL_CRMF_ENCRYPTEDVALUE(AmiSSLExtBase, (a), (in), (len))

int __i2d_OSSL_CRMF_ENCRYPTEDVALUE(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_ENCRYPTEDVALUE * a , __reg("a1") unsigned char ** out ) = "\tjsr\t-90(a6)";
#define i2d_OSSL_CRMF_ENCRYPTEDVALUE(a, out) __i2d_OSSL_CRMF_ENCRYPTEDVALUE(AmiSSLExtBase, (a), (out))

void __OSSL_CRMF_ENCRYPTEDVALUE_free(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_ENCRYPTEDVALUE * a ) = "\tjsr\t-96(a6)";
#define OSSL_CRMF_ENCRYPTEDVALUE_free(a) __OSSL_CRMF_ENCRYPTEDVALUE_free(AmiSSLExtBase, (a))

OSSL_CRMF_ENCRYPTEDVALUE * __OSSL_CRMF_ENCRYPTEDVALUE_new(__reg("a6") struct Library * ) = "\tjsr\t-102(a6)";
#define OSSL_CRMF_ENCRYPTEDVALUE_new() __OSSL_CRMF_ENCRYPTEDVALUE_new(AmiSSLExtBase)

const ASN1_ITEM * __OSSL_CRMF_ENCRYPTEDVALUE_it(__reg("a6") struct Library * ) = "\tjsr\t-108(a6)";
#define OSSL_CRMF_ENCRYPTEDVALUE_it() __OSSL_CRMF_ENCRYPTEDVALUE_it(AmiSSLExtBase)

OSSL_CRMF_MSG * __d2i_OSSL_CRMF_MSG(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG ** a , __reg("a1") const unsigned char ** in , __reg("d0") long len ) = "\tjsr\t-114(a6)";
#define d2i_OSSL_CRMF_MSG(a, in, len) __d2i_OSSL_CRMF_MSG(AmiSSLExtBase, (a), (in), (len))

int __i2d_OSSL_CRMF_MSG(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSG * a , __reg("a1") unsigned char ** out ) = "\tjsr\t-120(a6)";
#define i2d_OSSL_CRMF_MSG(a, out) __i2d_OSSL_CRMF_MSG(AmiSSLExtBase, (a), (out))

OSSL_CRMF_MSG * __OSSL_CRMF_MSG_dup(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSG * a ) = "\tjsr\t-126(a6)";
#define OSSL_CRMF_MSG_dup(a) __OSSL_CRMF_MSG_dup(AmiSSLExtBase, (a))

void __OSSL_CRMF_MSG_free(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG * a ) = "\tjsr\t-132(a6)";
#define OSSL_CRMF_MSG_free(a) __OSSL_CRMF_MSG_free(AmiSSLExtBase, (a))

OSSL_CRMF_MSG * __OSSL_CRMF_MSG_new(__reg("a6") struct Library * ) = "\tjsr\t-138(a6)";
#define OSSL_CRMF_MSG_new() __OSSL_CRMF_MSG_new(AmiSSLExtBase)

const ASN1_ITEM * __OSSL_CRMF_MSG_it(__reg("a6") struct Library * ) = "\tjsr\t-144(a6)";
#define OSSL_CRMF_MSG_it() __OSSL_CRMF_MSG_it(AmiSSLExtBase)

OSSL_CRMF_PBMPARAMETER * __d2i_OSSL_CRMF_PBMPARAMETER(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_PBMPARAMETER ** a , __reg("a1") const unsigned char ** in , __reg("d0") long len ) = "\tjsr\t-150(a6)";
#define d2i_OSSL_CRMF_PBMPARAMETER(a, in, len) __d2i_OSSL_CRMF_PBMPARAMETER(AmiSSLExtBase, (a), (in), (len))

int __i2d_OSSL_CRMF_PBMPARAMETER(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_PBMPARAMETER * a , __reg("a1") unsigned char ** out ) = "\tjsr\t-156(a6)";
#define i2d_OSSL_CRMF_PBMPARAMETER(a, out) __i2d_OSSL_CRMF_PBMPARAMETER(AmiSSLExtBase, (a), (out))

void __OSSL_CRMF_PBMPARAMETER_free(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_PBMPARAMETER * a ) = "\tjsr\t-162(a6)";
#define OSSL_CRMF_PBMPARAMETER_free(a) __OSSL_CRMF_PBMPARAMETER_free(AmiSSLExtBase, (a))

OSSL_CRMF_PBMPARAMETER * __OSSL_CRMF_PBMPARAMETER_new(__reg("a6") struct Library * ) = "\tjsr\t-168(a6)";
#define OSSL_CRMF_PBMPARAMETER_new() __OSSL_CRMF_PBMPARAMETER_new(AmiSSLExtBase)

const ASN1_ITEM * __OSSL_CRMF_PBMPARAMETER_it(__reg("a6") struct Library * ) = "\tjsr\t-174(a6)";
#define OSSL_CRMF_PBMPARAMETER_it() __OSSL_CRMF_PBMPARAMETER_it(AmiSSLExtBase)

OSSL_CRMF_CERTID * __d2i_OSSL_CRMF_CERTID(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_CERTID ** a , __reg("a1") const unsigned char ** in , __reg("d0") long len ) = "\tjsr\t-180(a6)";
#define d2i_OSSL_CRMF_CERTID(a, in, len) __d2i_OSSL_CRMF_CERTID(AmiSSLExtBase, (a), (in), (len))

int __i2d_OSSL_CRMF_CERTID(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_CERTID * a , __reg("a1") unsigned char ** out ) = "\tjsr\t-186(a6)";
#define i2d_OSSL_CRMF_CERTID(a, out) __i2d_OSSL_CRMF_CERTID(AmiSSLExtBase, (a), (out))

OSSL_CRMF_CERTID * __OSSL_CRMF_CERTID_dup(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_CERTID * a ) = "\tjsr\t-192(a6)";
#define OSSL_CRMF_CERTID_dup(a) __OSSL_CRMF_CERTID_dup(AmiSSLExtBase, (a))

void __OSSL_CRMF_CERTID_free(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_CERTID * a ) = "\tjsr\t-198(a6)";
#define OSSL_CRMF_CERTID_free(a) __OSSL_CRMF_CERTID_free(AmiSSLExtBase, (a))

OSSL_CRMF_CERTID * __OSSL_CRMF_CERTID_new(__reg("a6") struct Library * ) = "\tjsr\t-204(a6)";
#define OSSL_CRMF_CERTID_new() __OSSL_CRMF_CERTID_new(AmiSSLExtBase)

const ASN1_ITEM * __OSSL_CRMF_CERTID_it(__reg("a6") struct Library * ) = "\tjsr\t-210(a6)";
#define OSSL_CRMF_CERTID_it() __OSSL_CRMF_CERTID_it(AmiSSLExtBase)

OSSL_CRMF_PKIPUBLICATIONINFO * __d2i_OSSL_CRMF_PKIPUBLICATIONINFO(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_PKIPUBLICATIONINFO ** a , __reg("a1") const unsigned char ** in , __reg("d0") long len ) = "\tjsr\t-216(a6)";
#define d2i_OSSL_CRMF_PKIPUBLICATIONINFO(a, in, len) __d2i_OSSL_CRMF_PKIPUBLICATIONINFO(AmiSSLExtBase, (a), (in), (len))

int __i2d_OSSL_CRMF_PKIPUBLICATIONINFO(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_PKIPUBLICATIONINFO * a , __reg("a1") unsigned char ** out ) = "\tjsr\t-222(a6)";
#define i2d_OSSL_CRMF_PKIPUBLICATIONINFO(a, out) __i2d_OSSL_CRMF_PKIPUBLICATIONINFO(AmiSSLExtBase, (a), (out))

void __OSSL_CRMF_PKIPUBLICATIONINFO_free(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_PKIPUBLICATIONINFO * a ) = "\tjsr\t-228(a6)";
#define OSSL_CRMF_PKIPUBLICATIONINFO_free(a) __OSSL_CRMF_PKIPUBLICATIONINFO_free(AmiSSLExtBase, (a))

OSSL_CRMF_PKIPUBLICATIONINFO * __OSSL_CRMF_PKIPUBLICATIONINFO_new(__reg("a6") struct Library * ) = "\tjsr\t-234(a6)";
#define OSSL_CRMF_PKIPUBLICATIONINFO_new() __OSSL_CRMF_PKIPUBLICATIONINFO_new(AmiSSLExtBase)

const ASN1_ITEM * __OSSL_CRMF_PKIPUBLICATIONINFO_it(__reg("a6") struct Library * ) = "\tjsr\t-240(a6)";
#define OSSL_CRMF_PKIPUBLICATIONINFO_it() __OSSL_CRMF_PKIPUBLICATIONINFO_it(AmiSSLExtBase)

OSSL_CRMF_SINGLEPUBINFO * __d2i_OSSL_CRMF_SINGLEPUBINFO(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_SINGLEPUBINFO ** a , __reg("a1") const unsigned char ** in , __reg("d0") long len ) = "\tjsr\t-246(a6)";
#define d2i_OSSL_CRMF_SINGLEPUBINFO(a, in, len) __d2i_OSSL_CRMF_SINGLEPUBINFO(AmiSSLExtBase, (a), (in), (len))

int __i2d_OSSL_CRMF_SINGLEPUBINFO(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_SINGLEPUBINFO * a , __reg("a1") unsigned char ** out ) = "\tjsr\t-252(a6)";
#define i2d_OSSL_CRMF_SINGLEPUBINFO(a, out) __i2d_OSSL_CRMF_SINGLEPUBINFO(AmiSSLExtBase, (a), (out))

void __OSSL_CRMF_SINGLEPUBINFO_free(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_SINGLEPUBINFO * a ) = "\tjsr\t-258(a6)";
#define OSSL_CRMF_SINGLEPUBINFO_free(a) __OSSL_CRMF_SINGLEPUBINFO_free(AmiSSLExtBase, (a))

OSSL_CRMF_SINGLEPUBINFO * __OSSL_CRMF_SINGLEPUBINFO_new(__reg("a6") struct Library * ) = "\tjsr\t-264(a6)";
#define OSSL_CRMF_SINGLEPUBINFO_new() __OSSL_CRMF_SINGLEPUBINFO_new(AmiSSLExtBase)

const ASN1_ITEM * __OSSL_CRMF_SINGLEPUBINFO_it(__reg("a6") struct Library * ) = "\tjsr\t-270(a6)";
#define OSSL_CRMF_SINGLEPUBINFO_it() __OSSL_CRMF_SINGLEPUBINFO_it(AmiSSLExtBase)

OSSL_CRMF_CERTTEMPLATE * __d2i_OSSL_CRMF_CERTTEMPLATE(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_CERTTEMPLATE ** a , __reg("a1") const unsigned char ** in , __reg("d0") long len ) = "\tjsr\t-276(a6)";
#define d2i_OSSL_CRMF_CERTTEMPLATE(a, in, len) __d2i_OSSL_CRMF_CERTTEMPLATE(AmiSSLExtBase, (a), (in), (len))

int __i2d_OSSL_CRMF_CERTTEMPLATE(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_CERTTEMPLATE * a , __reg("a1") unsigned char ** out ) = "\tjsr\t-282(a6)";
#define i2d_OSSL_CRMF_CERTTEMPLATE(a, out) __i2d_OSSL_CRMF_CERTTEMPLATE(AmiSSLExtBase, (a), (out))

void __OSSL_CRMF_CERTTEMPLATE_free(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_CERTTEMPLATE * a ) = "\tjsr\t-288(a6)";
#define OSSL_CRMF_CERTTEMPLATE_free(a) __OSSL_CRMF_CERTTEMPLATE_free(AmiSSLExtBase, (a))

OSSL_CRMF_CERTTEMPLATE * __OSSL_CRMF_CERTTEMPLATE_new(__reg("a6") struct Library * ) = "\tjsr\t-294(a6)";
#define OSSL_CRMF_CERTTEMPLATE_new() __OSSL_CRMF_CERTTEMPLATE_new(AmiSSLExtBase)

const ASN1_ITEM * __OSSL_CRMF_CERTTEMPLATE_it(__reg("a6") struct Library * ) = "\tjsr\t-300(a6)";
#define OSSL_CRMF_CERTTEMPLATE_it() __OSSL_CRMF_CERTTEMPLATE_it(AmiSSLExtBase)

OSSL_CRMF_MSGS * __d2i_OSSL_CRMF_MSGS(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSGS ** a , __reg("a1") const unsigned char ** in , __reg("d0") long len ) = "\tjsr\t-306(a6)";
#define d2i_OSSL_CRMF_MSGS(a, in, len) __d2i_OSSL_CRMF_MSGS(AmiSSLExtBase, (a), (in), (len))

int __i2d_OSSL_CRMF_MSGS(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSGS * a , __reg("a1") unsigned char ** out ) = "\tjsr\t-312(a6)";
#define i2d_OSSL_CRMF_MSGS(a, out) __i2d_OSSL_CRMF_MSGS(AmiSSLExtBase, (a), (out))

void __OSSL_CRMF_MSGS_free(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSGS * a ) = "\tjsr\t-318(a6)";
#define OSSL_CRMF_MSGS_free(a) __OSSL_CRMF_MSGS_free(AmiSSLExtBase, (a))

OSSL_CRMF_MSGS * __OSSL_CRMF_MSGS_new(__reg("a6") struct Library * ) = "\tjsr\t-324(a6)";
#define OSSL_CRMF_MSGS_new() __OSSL_CRMF_MSGS_new(AmiSSLExtBase)

const ASN1_ITEM * __OSSL_CRMF_MSGS_it(__reg("a6") struct Library * ) = "\tjsr\t-330(a6)";
#define OSSL_CRMF_MSGS_it() __OSSL_CRMF_MSGS_it(AmiSSLExtBase)

OSSL_CRMF_PBMPARAMETER * __OSSL_CRMF_pbmp_new(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("d0") size_t slen , __reg("d1") int owfnid , __reg("d2") size_t itercnt , __reg("d3") int macnid ) = "\tjsr\t-336(a6)";
#define OSSL_CRMF_pbmp_new(libctx, slen, owfnid, itercnt, macnid) __OSSL_CRMF_pbmp_new(AmiSSLExtBase, (libctx), (slen), (owfnid), (itercnt), (macnid))

int __OSSL_CRMF_pbm_new(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq , __reg("a2") const OSSL_CRMF_PBMPARAMETER * pbmp , __reg("a3") const unsigned char * msg , __reg("d0") size_t msglen , __reg("d1") const unsigned char * sec , __reg("d2") size_t seclen , __reg("d3") unsigned char ** mac , __reg("d4") size_t * maclen ) = "\tjsr\t-342(a6)";
#define OSSL_CRMF_pbm_new(libctx, propq, pbmp, msg, msglen, sec, seclen, mac, maclen) __OSSL_CRMF_pbm_new(AmiSSLExtBase, (libctx), (propq), (pbmp), (msg), (msglen), (sec), (seclen), (mac), (maclen))

ASN1_UTF8STRING * __OSSL_CRMF_MSG_get0_regCtrl_regToken(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSG * msg ) = "\tjsr\t-348(a6)";
#define OSSL_CRMF_MSG_get0_regCtrl_regToken(msg) __OSSL_CRMF_MSG_get0_regCtrl_regToken(AmiSSLExtBase, (msg))

int __OSSL_CRMF_MSG_set1_regCtrl_regToken(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG * msg , __reg("a1") const ASN1_UTF8STRING * tok ) = "\tjsr\t-354(a6)";
#define OSSL_CRMF_MSG_set1_regCtrl_regToken(msg, tok) __OSSL_CRMF_MSG_set1_regCtrl_regToken(AmiSSLExtBase, (msg), (tok))

ASN1_UTF8STRING * __OSSL_CRMF_MSG_get0_regCtrl_authenticator(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSG * msg ) = "\tjsr\t-360(a6)";
#define OSSL_CRMF_MSG_get0_regCtrl_authenticator(msg) __OSSL_CRMF_MSG_get0_regCtrl_authenticator(AmiSSLExtBase, (msg))

int __OSSL_CRMF_MSG_set1_regCtrl_authenticator(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG * msg , __reg("a1") const ASN1_UTF8STRING * auth ) = "\tjsr\t-366(a6)";
#define OSSL_CRMF_MSG_set1_regCtrl_authenticator(msg, auth) __OSSL_CRMF_MSG_set1_regCtrl_authenticator(AmiSSLExtBase, (msg), (auth))

int __OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_PKIPUBLICATIONINFO * pi , __reg("a1") OSSL_CRMF_SINGLEPUBINFO * spi ) = "\tjsr\t-372(a6)";
#define OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo(pi, spi) __OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo(AmiSSLExtBase, (pi), (spi))

int __OSSL_CRMF_MSG_set0_SinglePubInfo(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_SINGLEPUBINFO * spi , __reg("d0") int method , __reg("a1") GENERAL_NAME * nm ) = "\tjsr\t-378(a6)";
#define OSSL_CRMF_MSG_set0_SinglePubInfo(spi, method, nm) __OSSL_CRMF_MSG_set0_SinglePubInfo(AmiSSLExtBase, (spi), (method), (nm))

OSSL_CRMF_PKIPUBLICATIONINFO * __OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSG * msg ) = "\tjsr\t-384(a6)";
#define OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo(msg) __OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo(AmiSSLExtBase, (msg))

int __OSSL_CRMF_MSG_set_PKIPublicationInfo_action(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_PKIPUBLICATIONINFO * pi , __reg("d0") int action ) = "\tjsr\t-390(a6)";
#define OSSL_CRMF_MSG_set_PKIPublicationInfo_action(pi, action) __OSSL_CRMF_MSG_set_PKIPublicationInfo_action(AmiSSLExtBase, (pi), (action))

int __OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG * msg , __reg("a1") const OSSL_CRMF_PKIPUBLICATIONINFO * pi ) = "\tjsr\t-396(a6)";
#define OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo(msg, pi) __OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo(AmiSSLExtBase, (msg), (pi))

X509_PUBKEY * __OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSG * msg ) = "\tjsr\t-402(a6)";
#define OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey(msg) __OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey(AmiSSLExtBase, (msg))

int __OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG * msg , __reg("a1") const X509_PUBKEY * pubkey ) = "\tjsr\t-408(a6)";
#define OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey(msg, pubkey) __OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey(AmiSSLExtBase, (msg), (pubkey))

OSSL_CRMF_CERTID * __OSSL_CRMF_MSG_get0_regCtrl_oldCertID(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSG * msg ) = "\tjsr\t-414(a6)";
#define OSSL_CRMF_MSG_get0_regCtrl_oldCertID(msg) __OSSL_CRMF_MSG_get0_regCtrl_oldCertID(AmiSSLExtBase, (msg))

int __OSSL_CRMF_MSG_set1_regCtrl_oldCertID(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG * msg , __reg("a1") const OSSL_CRMF_CERTID * cid ) = "\tjsr\t-420(a6)";
#define OSSL_CRMF_MSG_set1_regCtrl_oldCertID(msg, cid) __OSSL_CRMF_MSG_set1_regCtrl_oldCertID(AmiSSLExtBase, (msg), (cid))

OSSL_CRMF_CERTID * __OSSL_CRMF_CERTID_gen(__reg("a6") struct Library * , __reg("a0") const X509_NAME * issuer , __reg("a1") const ASN1_INTEGER * serial ) = "\tjsr\t-426(a6)";
#define OSSL_CRMF_CERTID_gen(issuer, serial) __OSSL_CRMF_CERTID_gen(AmiSSLExtBase, (issuer), (serial))

ASN1_UTF8STRING * __OSSL_CRMF_MSG_get0_regInfo_utf8Pairs(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSG * msg ) = "\tjsr\t-432(a6)";
#define OSSL_CRMF_MSG_get0_regInfo_utf8Pairs(msg) __OSSL_CRMF_MSG_get0_regInfo_utf8Pairs(AmiSSLExtBase, (msg))

int __OSSL_CRMF_MSG_set1_regInfo_utf8Pairs(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG * msg , __reg("a1") const ASN1_UTF8STRING * utf8pairs ) = "\tjsr\t-438(a6)";
#define OSSL_CRMF_MSG_set1_regInfo_utf8Pairs(msg, utf8pairs) __OSSL_CRMF_MSG_set1_regInfo_utf8Pairs(AmiSSLExtBase, (msg), (utf8pairs))

OSSL_CRMF_CERTREQUEST * __OSSL_CRMF_MSG_get0_regInfo_certReq(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSG * msg ) = "\tjsr\t-444(a6)";
#define OSSL_CRMF_MSG_get0_regInfo_certReq(msg) __OSSL_CRMF_MSG_get0_regInfo_certReq(AmiSSLExtBase, (msg))

int __OSSL_CRMF_MSG_set1_regInfo_certReq(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG * msg , __reg("a1") const OSSL_CRMF_CERTREQUEST * cr ) = "\tjsr\t-450(a6)";
#define OSSL_CRMF_MSG_set1_regInfo_certReq(msg, cr) __OSSL_CRMF_MSG_set1_regInfo_certReq(AmiSSLExtBase, (msg), (cr))

int __OSSL_CRMF_MSG_set0_validity(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG * crm , __reg("a1") ASN1_TIME * notBefore , __reg("a2") ASN1_TIME * notAfter ) = "\tjsr\t-456(a6)";
#define OSSL_CRMF_MSG_set0_validity(crm, notBefore, notAfter) __OSSL_CRMF_MSG_set0_validity(AmiSSLExtBase, (crm), (notBefore), (notAfter))

int __OSSL_CRMF_MSG_set_certReqId(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG * crm , __reg("d0") int rid ) = "\tjsr\t-462(a6)";
#define OSSL_CRMF_MSG_set_certReqId(crm, rid) __OSSL_CRMF_MSG_set_certReqId(AmiSSLExtBase, (crm), (rid))

int __OSSL_CRMF_MSG_get_certReqId(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSG * crm ) = "\tjsr\t-468(a6)";
#define OSSL_CRMF_MSG_get_certReqId(crm) __OSSL_CRMF_MSG_get_certReqId(AmiSSLExtBase, (crm))

int __OSSL_CRMF_MSG_set0_extensions(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG * crm , __reg("a1") X509_EXTENSIONS * exts ) = "\tjsr\t-474(a6)";
#define OSSL_CRMF_MSG_set0_extensions(crm, exts) __OSSL_CRMF_MSG_set0_extensions(AmiSSLExtBase, (crm), (exts))

int __OSSL_CRMF_MSG_push0_extension(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_MSG * crm , __reg("a1") X509_EXTENSION * ext ) = "\tjsr\t-480(a6)";
#define OSSL_CRMF_MSG_push0_extension(crm, ext) __OSSL_CRMF_MSG_push0_extension(AmiSSLExtBase, (crm), (ext))

int __OSSL_CRMF_MSG_create_popo(__reg("a6") struct Library * , __reg("d0") int meth , __reg("a0") OSSL_CRMF_MSG * crm , __reg("a1") EVP_PKEY * pkey , __reg("a2") const EVP_MD * digest , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d1") const char * propq ) = "\tjsr\t-486(a6)";
#define OSSL_CRMF_MSG_create_popo(meth, crm, pkey, digest, libctx, propq) __OSSL_CRMF_MSG_create_popo(AmiSSLExtBase, (meth), (crm), (pkey), (digest), (libctx), (propq))

int __OSSL_CRMF_MSGS_verify_popo(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSGS * reqs , __reg("d0") int rid , __reg("d1") int acceptRAVerified , __reg("a1") OSSL_LIB_CTX * libctx , __reg("a2") const char * propq ) = "\tjsr\t-492(a6)";
#define OSSL_CRMF_MSGS_verify_popo(reqs, rid, acceptRAVerified, libctx, propq) __OSSL_CRMF_MSGS_verify_popo(AmiSSLExtBase, (reqs), (rid), (acceptRAVerified), (libctx), (propq))

OSSL_CRMF_CERTTEMPLATE * __OSSL_CRMF_MSG_get0_tmpl(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_MSG * crm ) = "\tjsr\t-498(a6)";
#define OSSL_CRMF_MSG_get0_tmpl(crm) __OSSL_CRMF_MSG_get0_tmpl(AmiSSLExtBase, (crm))

const ASN1_INTEGER * __OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_CERTTEMPLATE * tmpl ) = "\tjsr\t-504(a6)";
#define OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(tmpl) __OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(AmiSSLExtBase, (tmpl))

const X509_NAME * __OSSL_CRMF_CERTTEMPLATE_get0_subject(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_CERTTEMPLATE * tmpl ) = "\tjsr\t-510(a6)";
#define OSSL_CRMF_CERTTEMPLATE_get0_subject(tmpl) __OSSL_CRMF_CERTTEMPLATE_get0_subject(AmiSSLExtBase, (tmpl))

const X509_NAME * __OSSL_CRMF_CERTTEMPLATE_get0_issuer(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_CERTTEMPLATE * tmpl ) = "\tjsr\t-516(a6)";
#define OSSL_CRMF_CERTTEMPLATE_get0_issuer(tmpl) __OSSL_CRMF_CERTTEMPLATE_get0_issuer(AmiSSLExtBase, (tmpl))

X509_EXTENSIONS * __OSSL_CRMF_CERTTEMPLATE_get0_extensions(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_CERTTEMPLATE * tmpl ) = "\tjsr\t-522(a6)";
#define OSSL_CRMF_CERTTEMPLATE_get0_extensions(tmpl) __OSSL_CRMF_CERTTEMPLATE_get0_extensions(AmiSSLExtBase, (tmpl))

int __OSSL_CRMF_CERTTEMPLATE_fill(__reg("a6") struct Library * , __reg("a0") OSSL_CRMF_CERTTEMPLATE * tmpl , __reg("a1") EVP_PKEY * pubkey , __reg("a2") const X509_NAME * subject , __reg("a3") const X509_NAME * issuer , __reg("d0") const ASN1_INTEGER * serial ) = "\tjsr\t-528(a6)";
#define OSSL_CRMF_CERTTEMPLATE_fill(tmpl, pubkey, subject, issuer, serial) __OSSL_CRMF_CERTTEMPLATE_fill(AmiSSLExtBase, (tmpl), (pubkey), (subject), (issuer), (serial))

X509 * __OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_ENCRYPTEDVALUE * ecert , __reg("a1") OSSL_LIB_CTX * libctx , __reg("a2") const char * propq , __reg("a3") EVP_PKEY * pkey ) = "\tjsr\t-534(a6)";
#define OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert(ecert, libctx, propq, pkey) __OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert(AmiSSLExtBase, (ecert), (libctx), (propq), (pkey))

OSSL_PARAM * __OSSL_PARAM_locate(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("a1") const char * key ) = "\tjsr\t-540(a6)";
#define OSSL_PARAM_locate(p, key) __OSSL_PARAM_locate(AmiSSLExtBase, (p), (key))

void __OSSL_PARAM_construct_int_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") int * buf ) = "\tjsr\t-546(a6)";
#define OSSL_PARAM_construct_int_amiga(result, key, buf) __OSSL_PARAM_construct_int_amiga(AmiSSLExtBase, (result), (key), (buf))

void __OSSL_PARAM_construct_uint_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") unsigned int * buf ) = "\tjsr\t-552(a6)";
#define OSSL_PARAM_construct_uint_amiga(result, key, buf) __OSSL_PARAM_construct_uint_amiga(AmiSSLExtBase, (result), (key), (buf))

void __OSSL_PARAM_construct_long_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") long int * buf ) = "\tjsr\t-558(a6)";
#define OSSL_PARAM_construct_long_amiga(result, key, buf) __OSSL_PARAM_construct_long_amiga(AmiSSLExtBase, (result), (key), (buf))

void __OSSL_PARAM_construct_ulong_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") unsigned long int * buf ) = "\tjsr\t-564(a6)";
#define OSSL_PARAM_construct_ulong_amiga(result, key, buf) __OSSL_PARAM_construct_ulong_amiga(AmiSSLExtBase, (result), (key), (buf))

void __OSSL_PARAM_construct_int32_amiga(__reg("a6") struct Library * , __reg("a1") OSSL_PARAM * result , __reg("a2") const char * key , __reg("a3") int32_t * buf ) = "\tjsr\t-570(a6)";
#define OSSL_PARAM_construct_int32_amiga(result, key, buf) __OSSL_PARAM_construct_int32_amiga(AmiSSLExtBase, (result), (key), (buf))

void __OSSL_PARAM_construct_uint32_amiga(__reg("a6") struct Library * , __reg("a1") OSSL_PARAM * result , __reg("a2") const char * key , __reg("a3") uint32_t * buf ) = "\tjsr\t-576(a6)";
#define OSSL_PARAM_construct_uint32_amiga(result, key, buf) __OSSL_PARAM_construct_uint32_amiga(AmiSSLExtBase, (result), (key), (buf))

void __OSSL_PARAM_construct_int64_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") int64_t * buf ) = "\tjsr\t-582(a6)";
#define OSSL_PARAM_construct_int64_amiga(result, key, buf) __OSSL_PARAM_construct_int64_amiga(AmiSSLExtBase, (result), (key), (buf))

void __OSSL_PARAM_construct_uint64_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") uint64_t * buf ) = "\tjsr\t-588(a6)";
#define OSSL_PARAM_construct_uint64_amiga(result, key, buf) __OSSL_PARAM_construct_uint64_amiga(AmiSSLExtBase, (result), (key), (buf))

void __OSSL_PARAM_construct_size_t_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") size_t * buf ) = "\tjsr\t-594(a6)";
#define OSSL_PARAM_construct_size_t_amiga(result, key, buf) __OSSL_PARAM_construct_size_t_amiga(AmiSSLExtBase, (result), (key), (buf))

void __OSSL_PARAM_construct_BN_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") unsigned char * buf , __reg("d0") size_t bsize ) = "\tjsr\t-600(a6)";
#define OSSL_PARAM_construct_BN_amiga(result, key, buf, bsize) __OSSL_PARAM_construct_BN_amiga(AmiSSLExtBase, (result), (key), (buf), (bsize))

void __OSSL_PARAM_construct_double_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") double * buf ) = "\tjsr\t-606(a6)";
#define OSSL_PARAM_construct_double_amiga(result, key, buf) __OSSL_PARAM_construct_double_amiga(AmiSSLExtBase, (result), (key), (buf))

void __OSSL_PARAM_construct_utf8_string_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") char * buf , __reg("d0") size_t bsize ) = "\tjsr\t-612(a6)";
#define OSSL_PARAM_construct_utf8_string_amiga(result, key, buf, bsize) __OSSL_PARAM_construct_utf8_string_amiga(AmiSSLExtBase, (result), (key), (buf), (bsize))

void __OSSL_PARAM_construct_utf8_ptr_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") char ** buf , __reg("d0") size_t bsize ) = "\tjsr\t-618(a6)";
#define OSSL_PARAM_construct_utf8_ptr_amiga(result, key, buf, bsize) __OSSL_PARAM_construct_utf8_ptr_amiga(AmiSSLExtBase, (result), (key), (buf), (bsize))

void __OSSL_PARAM_construct_octet_string_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") void * buf , __reg("d0") size_t bsize ) = "\tjsr\t-624(a6)";
#define OSSL_PARAM_construct_octet_string_amiga(result, key, buf, bsize) __OSSL_PARAM_construct_octet_string_amiga(AmiSSLExtBase, (result), (key), (buf), (bsize))

void __OSSL_PARAM_construct_octet_ptr_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") void ** buf , __reg("d0") size_t bsize ) = "\tjsr\t-630(a6)";
#define OSSL_PARAM_construct_octet_ptr_amiga(result, key, buf, bsize) __OSSL_PARAM_construct_octet_ptr_amiga(AmiSSLExtBase, (result), (key), (buf), (bsize))

int __OSSL_PARAM_get_int(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") int * val ) = "\tjsr\t-636(a6)";
#define OSSL_PARAM_get_int(p, val) __OSSL_PARAM_get_int(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_uint(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") unsigned int * val ) = "\tjsr\t-642(a6)";
#define OSSL_PARAM_get_uint(p, val) __OSSL_PARAM_get_uint(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_long(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") long int * val ) = "\tjsr\t-648(a6)";
#define OSSL_PARAM_get_long(p, val) __OSSL_PARAM_get_long(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_ulong(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") unsigned long int * val ) = "\tjsr\t-654(a6)";
#define OSSL_PARAM_get_ulong(p, val) __OSSL_PARAM_get_ulong(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_int32(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") int32_t * val ) = "\tjsr\t-660(a6)";
#define OSSL_PARAM_get_int32(p, val) __OSSL_PARAM_get_int32(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_uint32(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") uint32_t * val ) = "\tjsr\t-666(a6)";
#define OSSL_PARAM_get_uint32(p, val) __OSSL_PARAM_get_uint32(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_int64(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") int64_t * val ) = "\tjsr\t-672(a6)";
#define OSSL_PARAM_get_int64(p, val) __OSSL_PARAM_get_int64(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_uint64(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") uint64_t * val ) = "\tjsr\t-678(a6)";
#define OSSL_PARAM_get_uint64(p, val) __OSSL_PARAM_get_uint64(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_size_t(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") size_t * val ) = "\tjsr\t-684(a6)";
#define OSSL_PARAM_get_size_t(p, val) __OSSL_PARAM_get_size_t(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_int(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("d0") int val ) = "\tjsr\t-690(a6)";
#define OSSL_PARAM_set_int(p, val) __OSSL_PARAM_set_int(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_uint(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("d0") unsigned int val ) = "\tjsr\t-696(a6)";
#define OSSL_PARAM_set_uint(p, val) __OSSL_PARAM_set_uint(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_long(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("d0") long int val ) = "\tjsr\t-702(a6)";
#define OSSL_PARAM_set_long(p, val) __OSSL_PARAM_set_long(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_ulong(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("d0") unsigned long int val ) = "\tjsr\t-708(a6)";
#define OSSL_PARAM_set_ulong(p, val) __OSSL_PARAM_set_ulong(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_int32(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("d0") int32_t val ) = "\tjsr\t-714(a6)";
#define OSSL_PARAM_set_int32(p, val) __OSSL_PARAM_set_int32(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_uint32(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("d0") uint32_t val ) = "\tjsr\t-720(a6)";
#define OSSL_PARAM_set_uint32(p, val) __OSSL_PARAM_set_uint32(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_int64(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("d0/d1") int64_t val ) = "\tjsr\t-726(a6)";
#define OSSL_PARAM_set_int64(p, val) __OSSL_PARAM_set_int64(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_uint64(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("d0/d1") uint64_t val ) = "\tjsr\t-732(a6)";
#define OSSL_PARAM_set_uint64(p, val) __OSSL_PARAM_set_uint64(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_size_t(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("d0") size_t val ) = "\tjsr\t-738(a6)";
#define OSSL_PARAM_set_size_t(p, val) __OSSL_PARAM_set_size_t(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_double(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") double * val ) = "\tjsr\t-744(a6)";
#define OSSL_PARAM_get_double(p, val) __OSSL_PARAM_get_double(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_double(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("d0/d1") double val ) = "\tjsr\t-750(a6)";
#define OSSL_PARAM_set_double(p, val) __OSSL_PARAM_set_double(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_BN(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") BIGNUM ** val ) = "\tjsr\t-756(a6)";
#define OSSL_PARAM_get_BN(p, val) __OSSL_PARAM_get_BN(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_BN(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("a1") const BIGNUM * val ) = "\tjsr\t-762(a6)";
#define OSSL_PARAM_set_BN(p, val) __OSSL_PARAM_set_BN(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_utf8_string(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") char ** val , __reg("d0") size_t max_len ) = "\tjsr\t-768(a6)";
#define OSSL_PARAM_get_utf8_string(p, val, max_len) __OSSL_PARAM_get_utf8_string(AmiSSLExtBase, (p), (val), (max_len))

int __OSSL_PARAM_set_utf8_string(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("a1") const char * val ) = "\tjsr\t-774(a6)";
#define OSSL_PARAM_set_utf8_string(p, val) __OSSL_PARAM_set_utf8_string(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_octet_string(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") void ** val , __reg("d0") size_t max_len , __reg("a2") size_t * used_len ) = "\tjsr\t-780(a6)";
#define OSSL_PARAM_get_octet_string(p, val, max_len, used_len) __OSSL_PARAM_get_octet_string(AmiSSLExtBase, (p), (val), (max_len), (used_len))

int __OSSL_PARAM_set_octet_string(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("a1") const void * val , __reg("d0") size_t len ) = "\tjsr\t-786(a6)";
#define OSSL_PARAM_set_octet_string(p, val, len) __OSSL_PARAM_set_octet_string(AmiSSLExtBase, (p), (val), (len))

int __OSSL_PARAM_get_utf8_ptr(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") const char ** val ) = "\tjsr\t-792(a6)";
#define OSSL_PARAM_get_utf8_ptr(p, val) __OSSL_PARAM_get_utf8_ptr(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_utf8_ptr(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("a1") const char * val ) = "\tjsr\t-798(a6)";
#define OSSL_PARAM_set_utf8_ptr(p, val) __OSSL_PARAM_set_utf8_ptr(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_octet_ptr(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") const void ** val , __reg("a2") size_t * used_len ) = "\tjsr\t-804(a6)";
#define OSSL_PARAM_get_octet_ptr(p, val, used_len) __OSSL_PARAM_get_octet_ptr(AmiSSLExtBase, (p), (val), (used_len))

int __OSSL_PARAM_set_octet_ptr(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("a1") const void * val , __reg("d0") size_t used_len ) = "\tjsr\t-810(a6)";
#define OSSL_PARAM_set_octet_ptr(p, val, used_len) __OSSL_PARAM_set_octet_ptr(AmiSSLExtBase, (p), (val), (used_len))

void __X509_set0_distinguishing_id(__reg("a6") struct Library * , __reg("a0") X509 * x , __reg("a1") ASN1_OCTET_STRING * d_id ) = "\tjsr\t-816(a6)";
#define X509_set0_distinguishing_id(x, d_id) __X509_set0_distinguishing_id(AmiSSLExtBase, (x), (d_id))

ASN1_OCTET_STRING * __X509_get0_distinguishing_id(__reg("a6") struct Library * , __reg("a0") X509 * x ) = "\tjsr\t-822(a6)";
#define X509_get0_distinguishing_id(x) __X509_get0_distinguishing_id(AmiSSLExtBase, (x))

int __EVP_MD_up_ref(__reg("a6") struct Library * , __reg("a0") EVP_MD * md ) = "\tjsr\t-828(a6)";
#define EVP_MD_up_ref(md) __EVP_MD_up_ref(AmiSSLExtBase, (md))

EVP_MD * __EVP_MD_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * algorithm , __reg("a2") const char * properties ) = "\tjsr\t-834(a6)";
#define EVP_MD_fetch(ctx, algorithm, properties) __EVP_MD_fetch(AmiSSLExtBase, (ctx), (algorithm), (properties))

int __EVP_set_default_properties(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-840(a6)";
#define EVP_set_default_properties(libctx, propq) __EVP_set_default_properties(AmiSSLExtBase, (libctx), (propq))

void __OSSL_PARAM_construct_end_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result ) = "\tjsr\t-846(a6)";
#define OSSL_PARAM_construct_end_amiga(result) __OSSL_PARAM_construct_end_amiga(AmiSSLExtBase, (result))

int __EC_GROUP_check_named_curve(__reg("a6") struct Library * , __reg("a0") const EC_GROUP * group , __reg("d0") int nist_only , __reg("a1") BN_CTX * ctx ) = "\tjsr\t-852(a6)";
#define EC_GROUP_check_named_curve(group, nist_only, ctx) __EC_GROUP_check_named_curve(AmiSSLExtBase, (group), (nist_only), (ctx))

int __EVP_CIPHER_up_ref(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER * cipher ) = "\tjsr\t-858(a6)";
#define EVP_CIPHER_up_ref(cipher) __EVP_CIPHER_up_ref(AmiSSLExtBase, (cipher))

EVP_CIPHER * __EVP_CIPHER_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * algorithm , __reg("a2") const char * properties ) = "\tjsr\t-864(a6)";
#define EVP_CIPHER_fetch(ctx, algorithm, properties) __EVP_CIPHER_fetch(AmiSSLExtBase, (ctx), (algorithm), (properties))

int __EVP_CIPHER_get_mode(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher ) = "\tjsr\t-870(a6)";
#define EVP_CIPHER_get_mode(cipher) __EVP_CIPHER_get_mode(AmiSSLExtBase, (cipher))

const char * __OPENSSL_info(__reg("a6") struct Library * , __reg("d0") int type ) = "\tjsr\t-876(a6)";
#define OPENSSL_info(type) __OPENSSL_info(AmiSSLExtBase, (type))

EVP_KDF_CTX * __EVP_KDF_CTX_new(__reg("a6") struct Library * , __reg("a0") EVP_KDF * kdf ) = "\tjsr\t-882(a6)";
#define EVP_KDF_CTX_new(kdf) __EVP_KDF_CTX_new(AmiSSLExtBase, (kdf))

const EVP_KDF * __EVP_KDF_CTX_kdf(__reg("a6") struct Library * , __reg("a0") EVP_KDF_CTX * ctx ) = "\tjsr\t-888(a6)";
#define EVP_KDF_CTX_kdf(ctx) __EVP_KDF_CTX_kdf(AmiSSLExtBase, (ctx))

int __i2d_KeyParams(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * a , __reg("a1") unsigned char ** pp ) = "\tjsr\t-894(a6)";
#define i2d_KeyParams(a, pp) __i2d_KeyParams(AmiSSLExtBase, (a), (pp))

EVP_PKEY * __d2i_KeyParams(__reg("a6") struct Library * , __reg("d0") int type , __reg("a0") EVP_PKEY ** a , __reg("a1") const unsigned char ** pp , __reg("d1") long length ) = "\tjsr\t-900(a6)";
#define d2i_KeyParams(type, a, pp, length) __d2i_KeyParams(AmiSSLExtBase, (type), (a), (pp), (length))

int __i2d_KeyParams_bio(__reg("a6") struct Library * , __reg("a0") BIO * bp , __reg("a1") const EVP_PKEY * pkey ) = "\tjsr\t-906(a6)";
#define i2d_KeyParams_bio(bp, pkey) __i2d_KeyParams_bio(AmiSSLExtBase, (bp), (pkey))

EVP_PKEY * __d2i_KeyParams_bio(__reg("a6") struct Library * , __reg("d0") int type , __reg("a0") EVP_PKEY ** a , __reg("a1") BIO * in ) = "\tjsr\t-912(a6)";
#define d2i_KeyParams_bio(type, a, in) __d2i_KeyParams_bio(AmiSSLExtBase, (type), (a), (in))

const ASN1_ITEM * __OSSL_CMP_PKISTATUS_it(__reg("a6") struct Library * ) = "\tjsr\t-918(a6)";
#define OSSL_CMP_PKISTATUS_it() __OSSL_CMP_PKISTATUS_it(AmiSSLExtBase)

OSSL_CMP_PKIHEADER * __d2i_OSSL_CMP_PKIHEADER(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_PKIHEADER ** a , __reg("a1") const unsigned char ** in , __reg("d0") long len ) = "\tjsr\t-924(a6)";
#define d2i_OSSL_CMP_PKIHEADER(a, in, len) __d2i_OSSL_CMP_PKIHEADER(AmiSSLExtBase, (a), (in), (len))

int __i2d_OSSL_CMP_PKIHEADER(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_PKIHEADER * a , __reg("a1") unsigned char ** out ) = "\tjsr\t-930(a6)";
#define i2d_OSSL_CMP_PKIHEADER(a, out) __i2d_OSSL_CMP_PKIHEADER(AmiSSLExtBase, (a), (out))

void __OSSL_CMP_PKIHEADER_free(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_PKIHEADER * a ) = "\tjsr\t-936(a6)";
#define OSSL_CMP_PKIHEADER_free(a) __OSSL_CMP_PKIHEADER_free(AmiSSLExtBase, (a))

OSSL_CMP_PKIHEADER * __OSSL_CMP_PKIHEADER_new(__reg("a6") struct Library * ) = "\tjsr\t-942(a6)";
#define OSSL_CMP_PKIHEADER_new() __OSSL_CMP_PKIHEADER_new(AmiSSLExtBase)

const ASN1_ITEM * __OSSL_CMP_PKIHEADER_it(__reg("a6") struct Library * ) = "\tjsr\t-948(a6)";
#define OSSL_CMP_PKIHEADER_it() __OSSL_CMP_PKIHEADER_it(AmiSSLExtBase)

OSSL_CMP_MSG * __d2i_OSSL_CMP_MSG(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_MSG ** a , __reg("a1") const unsigned char ** in , __reg("d0") long len ) = "\tjsr\t-954(a6)";
#define d2i_OSSL_CMP_MSG(a, in, len) __d2i_OSSL_CMP_MSG(AmiSSLExtBase, (a), (in), (len))

int __i2d_OSSL_CMP_MSG(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_MSG * a , __reg("a1") unsigned char ** out ) = "\tjsr\t-960(a6)";
#define i2d_OSSL_CMP_MSG(a, out) __i2d_OSSL_CMP_MSG(AmiSSLExtBase, (a), (out))

const ASN1_ITEM * __OSSL_CMP_MSG_it(__reg("a6") struct Library * ) = "\tjsr\t-966(a6)";
#define OSSL_CMP_MSG_it() __OSSL_CMP_MSG_it(AmiSSLExtBase)

OSSL_CMP_ITAV * __OSSL_CMP_ITAV_create(__reg("a6") struct Library * , __reg("a0") ASN1_OBJECT * type , __reg("a1") ASN1_TYPE * value ) = "\tjsr\t-972(a6)";
#define OSSL_CMP_ITAV_create(type, value) __OSSL_CMP_ITAV_create(AmiSSLExtBase, (type), (value))

void __OSSL_CMP_ITAV_set0(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_ITAV * itav , __reg("a1") ASN1_OBJECT * type , __reg("a2") ASN1_TYPE * value ) = "\tjsr\t-978(a6)";
#define OSSL_CMP_ITAV_set0(itav, type, value) __OSSL_CMP_ITAV_set0(AmiSSLExtBase, (itav), (type), (value))

ASN1_OBJECT * __OSSL_CMP_ITAV_get0_type(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_ITAV * itav ) = "\tjsr\t-984(a6)";
#define OSSL_CMP_ITAV_get0_type(itav) __OSSL_CMP_ITAV_get0_type(AmiSSLExtBase, (itav))

ASN1_TYPE * __OSSL_CMP_ITAV_get0_value(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_ITAV * itav ) = "\tjsr\t-990(a6)";
#define OSSL_CMP_ITAV_get0_value(itav) __OSSL_CMP_ITAV_get0_value(AmiSSLExtBase, (itav))

int __OSSL_CMP_ITAV_push0_stack_item(__reg("a6") struct Library * , __reg("a0") STACK_OF(OSSL_CMP_ITAV) ** itav_sk_p , __reg("a1") OSSL_CMP_ITAV * itav ) = "\tjsr\t-996(a6)";
#define OSSL_CMP_ITAV_push0_stack_item(itav_sk_p, itav) __OSSL_CMP_ITAV_push0_stack_item(AmiSSLExtBase, (itav_sk_p), (itav))

void __OSSL_CMP_ITAV_free(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_ITAV * itav ) = "\tjsr\t-1002(a6)";
#define OSSL_CMP_ITAV_free(itav) __OSSL_CMP_ITAV_free(AmiSSLExtBase, (itav))

void __OSSL_CMP_MSG_free(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_MSG * msg ) = "\tjsr\t-1008(a6)";
#define OSSL_CMP_MSG_free(msg) __OSSL_CMP_MSG_free(AmiSSLExtBase, (msg))

int __EVP_MD_CTX_set_params(__reg("a6") struct Library * , __reg("a0") EVP_MD_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-1014(a6)";
#define EVP_MD_CTX_set_params(ctx, params) __EVP_MD_CTX_set_params(AmiSSLExtBase, (ctx), (params))

int __EVP_MD_CTX_get_params(__reg("a6") struct Library * , __reg("a0") EVP_MD_CTX * ctx , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-1020(a6)";
#define EVP_MD_CTX_get_params(ctx, params) __EVP_MD_CTX_get_params(AmiSSLExtBase, (ctx), (params))

BN_CTX * __BN_CTX_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx ) = "\tjsr\t-1026(a6)";
#define BN_CTX_new_ex(ctx) __BN_CTX_new_ex(AmiSSLExtBase, (ctx))

BN_CTX * __BN_CTX_secure_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx ) = "\tjsr\t-1032(a6)";
#define BN_CTX_secure_new_ex(ctx) __BN_CTX_secure_new_ex(AmiSSLExtBase, (ctx))

void __OPENSSL_thread_stop_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx ) = "\tjsr\t-1038(a6)";
#define OPENSSL_thread_stop_ex(ctx) __OPENSSL_thread_stop_ex(AmiSSLExtBase, (ctx))

const OSSL_PARAM * __OSSL_PARAM_locate_const(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") const char * key ) = "\tjsr\t-1044(a6)";
#define OSSL_PARAM_locate_const(p, key) __OSSL_PARAM_locate_const(AmiSSLExtBase, (p), (key))

void __X509_REQ_set0_distinguishing_id(__reg("a6") struct Library * , __reg("a0") X509_REQ * x , __reg("a1") ASN1_OCTET_STRING * d_id ) = "\tjsr\t-1050(a6)";
#define X509_REQ_set0_distinguishing_id(x, d_id) __X509_REQ_set0_distinguishing_id(AmiSSLExtBase, (x), (d_id))

ASN1_OCTET_STRING * __X509_REQ_get0_distinguishing_id(__reg("a6") struct Library * , __reg("a0") X509_REQ * x ) = "\tjsr\t-1056(a6)";
#define X509_REQ_get0_distinguishing_id(x) __X509_REQ_get0_distinguishing_id(AmiSSLExtBase, (x))

int __BN_rand_ex(__reg("a6") struct Library * , __reg("a0") BIGNUM * rnd , __reg("d0") int bits , __reg("d1") int top , __reg("d2") int bottom , __reg("d3") unsigned int strength , __reg("a1") BN_CTX * ctx ) = "\tjsr\t-1062(a6)";
#define BN_rand_ex(rnd, bits, top, bottom, strength, ctx) __BN_rand_ex(AmiSSLExtBase, (rnd), (bits), (top), (bottom), (strength), (ctx))

int __BN_priv_rand_ex(__reg("a6") struct Library * , __reg("a0") BIGNUM * rnd , __reg("d0") int bits , __reg("d1") int top , __reg("d2") int bottom , __reg("d3") unsigned int strength , __reg("a1") BN_CTX * ctx ) = "\tjsr\t-1068(a6)";
#define BN_priv_rand_ex(rnd, bits, top, bottom, strength, ctx) __BN_priv_rand_ex(AmiSSLExtBase, (rnd), (bits), (top), (bottom), (strength), (ctx))

int __BN_rand_range_ex(__reg("a6") struct Library * , __reg("a0") BIGNUM * r , __reg("a1") const BIGNUM * range , __reg("d0") unsigned int strength , __reg("a2") BN_CTX * ctx ) = "\tjsr\t-1074(a6)";
#define BN_rand_range_ex(r, range, strength, ctx) __BN_rand_range_ex(AmiSSLExtBase, (r), (range), (strength), (ctx))

int __BN_priv_rand_range_ex(__reg("a6") struct Library * , __reg("a0") BIGNUM * r , __reg("a1") const BIGNUM * range , __reg("d0") unsigned int strength , __reg("a2") BN_CTX * ctx ) = "\tjsr\t-1080(a6)";
#define BN_priv_rand_range_ex(r, range, strength, ctx) __BN_priv_rand_range_ex(AmiSSLExtBase, (r), (range), (strength), (ctx))

int __BN_generate_prime_ex2(__reg("a6") struct Library * , __reg("a0") BIGNUM * ret , __reg("d0") int bits , __reg("d1") int safe , __reg("a1") const BIGNUM * add , __reg("a2") const BIGNUM * rem , __reg("a3") BN_GENCB * cb , __reg("d2") BN_CTX * ctx ) = "\tjsr\t-1086(a6)";
#define BN_generate_prime_ex2(ret, bits, safe, add, rem, cb, ctx) __BN_generate_prime_ex2(AmiSSLExtBase, (ret), (bits), (safe), (add), (rem), (cb), (ctx))

void __EVP_KEYEXCH_free(__reg("a6") struct Library * , __reg("a0") EVP_KEYEXCH * exchange ) = "\tjsr\t-1092(a6)";
#define EVP_KEYEXCH_free(exchange) __EVP_KEYEXCH_free(AmiSSLExtBase, (exchange))

int __EVP_KEYEXCH_up_ref(__reg("a6") struct Library * , __reg("a0") EVP_KEYEXCH * exchange ) = "\tjsr\t-1098(a6)";
#define EVP_KEYEXCH_up_ref(exchange) __EVP_KEYEXCH_up_ref(AmiSSLExtBase, (exchange))

EVP_KEYEXCH * __EVP_KEYEXCH_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * algorithm , __reg("a2") const char * properties ) = "\tjsr\t-1104(a6)";
#define EVP_KEYEXCH_fetch(ctx, algorithm, properties) __EVP_KEYEXCH_fetch(AmiSSLExtBase, (ctx), (algorithm), (properties))

int __EVP_PKEY_CTX_set_dh_pad(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int pad ) = "\tjsr\t-1110(a6)";
#define EVP_PKEY_CTX_set_dh_pad(ctx, pad) __EVP_PKEY_CTX_set_dh_pad(AmiSSLExtBase, (ctx), (pad))

int __EVP_PKEY_CTX_set_params(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-1116(a6)";
#define EVP_PKEY_CTX_set_params(ctx, params) __EVP_PKEY_CTX_set_params(AmiSSLExtBase, (ctx), (params))

EVP_KEYMGMT * __EVP_KEYMGMT_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * algorithm , __reg("a2") const char * properties ) = "\tjsr\t-1122(a6)";
#define EVP_KEYMGMT_fetch(ctx, algorithm, properties) __EVP_KEYMGMT_fetch(AmiSSLExtBase, (ctx), (algorithm), (properties))

int __EVP_KEYMGMT_up_ref(__reg("a6") struct Library * , __reg("a0") EVP_KEYMGMT * keymgmt ) = "\tjsr\t-1128(a6)";
#define EVP_KEYMGMT_up_ref(keymgmt) __EVP_KEYMGMT_up_ref(AmiSSLExtBase, (keymgmt))

void __EVP_KEYMGMT_free(__reg("a6") struct Library * , __reg("a0") EVP_KEYMGMT * keymgmt ) = "\tjsr\t-1134(a6)";
#define EVP_KEYMGMT_free(keymgmt) __EVP_KEYMGMT_free(AmiSSLExtBase, (keymgmt))

const OSSL_PROVIDER * __EVP_KEYMGMT_get0_provider(__reg("a6") struct Library * , __reg("a0") const EVP_KEYMGMT * keymgmt ) = "\tjsr\t-1140(a6)";
#define EVP_KEYMGMT_get0_provider(keymgmt) __EVP_KEYMGMT_get0_provider(AmiSSLExtBase, (keymgmt))

X509_PUBKEY * __X509_PUBKEY_dup(__reg("a6") struct Library * , __reg("a0") const X509_PUBKEY * a ) = "\tjsr\t-1146(a6)";
#define X509_PUBKEY_dup(a) __X509_PUBKEY_dup(AmiSSLExtBase, (a))

const char * __EVP_MD_get0_name(__reg("a6") struct Library * , __reg("a0") const EVP_MD * md ) = "\tjsr\t-1152(a6)";
#define EVP_MD_get0_name(md) __EVP_MD_get0_name(AmiSSLExtBase, (md))

const char * __EVP_CIPHER_get0_name(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher ) = "\tjsr\t-1158(a6)";
#define EVP_CIPHER_get0_name(cipher) __EVP_CIPHER_get0_name(AmiSSLExtBase, (cipher))

const OSSL_PROVIDER * __EVP_MD_get0_provider(__reg("a6") struct Library * , __reg("a0") const EVP_MD * md ) = "\tjsr\t-1164(a6)";
#define EVP_MD_get0_provider(md) __EVP_MD_get0_provider(AmiSSLExtBase, (md))

const OSSL_PROVIDER * __EVP_CIPHER_get0_provider(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher ) = "\tjsr\t-1170(a6)";
#define EVP_CIPHER_get0_provider(cipher) __EVP_CIPHER_get0_provider(AmiSSLExtBase, (cipher))

const char * __OSSL_PROVIDER_get0_name(__reg("a6") struct Library * , __reg("a0") const OSSL_PROVIDER * prov ) = "\tjsr\t-1176(a6)";
#define OSSL_PROVIDER_get0_name(prov) __OSSL_PROVIDER_get0_name(AmiSSLExtBase, (prov))

void __EVP_CIPHER_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(EVP_CIPHER *cipher,void *arg) , __reg("a2") void * arg ) = "\tjsr\t-1182(a6)";
#define EVP_CIPHER_do_all_provided(libctx, fn, arg) __EVP_CIPHER_do_all_provided(AmiSSLExtBase, (libctx), (fn), (arg))

void __EVP_MD_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(EVP_MD *md,void *arg) , __reg("a2") void * arg ) = "\tjsr\t-1188(a6)";
#define EVP_MD_do_all_provided(libctx, fn, arg) __EVP_MD_do_all_provided(AmiSSLExtBase, (libctx), (fn), (arg))

OSSL_PROVIDER * __EVP_KEYEXCH_get0_provider(__reg("a6") struct Library * , __reg("a0") const EVP_KEYEXCH * exchange ) = "\tjsr\t-1194(a6)";
#define EVP_KEYEXCH_get0_provider(exchange) __EVP_KEYEXCH_get0_provider(AmiSSLExtBase, (exchange))

int __OSSL_PROVIDER_available(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * a , __reg("a1") const char * name ) = "\tjsr\t-1200(a6)";
#define OSSL_PROVIDER_available(a, name) __OSSL_PROVIDER_available(AmiSSLExtBase, (a), (name))

void __ERR_new(__reg("a6") struct Library * ) = "\tjsr\t-1206(a6)";
#define ERR_new() __ERR_new(AmiSSLExtBase)

void __ERR_set_debug(__reg("a6") struct Library * , __reg("a0") const char * file , __reg("d0") int line , __reg("a1") const char * func ) = "\tjsr\t-1212(a6)";
#define ERR_set_debug(file, line, func) __ERR_set_debug(AmiSSLExtBase, (file), (line), (func))

void __ERR_vset_error(__reg("a6") struct Library * , __reg("d0") int lib , __reg("d1") int reason , __reg("a0") const char * fmt , __reg("a1") va_list args ) = "\tjsr\t-1218(a6)";
#define ERR_vset_error(lib, reason, fmt, args) __ERR_vset_error(AmiSSLExtBase, (lib), (reason), (fmt), (args))

#if !defined(NO_INLINE_STDARG) && (__STDC__ == 1L) && (__STDC_VERSION__ >= 199901L)
void __ERR_set_error(__reg("a6") struct Library * , __reg("d0") int lib , __reg("d1") int reason , __reg("a0") const char * fmt , long dummy , ... ) = "\tmove.l\ta1,-(a7)\n\tlea\t4(a7),a1\n\tjsr\t-1218(a6)\n\tmovea.l\t(a7)+,a1";
#define ERR_set_error(lib, reason, fmt, ...) __ERR_set_error(AmiSSLExtBase, (lib), (reason), (fmt), __VA_ARGS__)
#endif

int __X509_self_signed(__reg("a6") struct Library * , __reg("a0") X509 * cert , __reg("d0") int verify_signature ) = "\tjsr\t-1224(a6)";
#define X509_self_signed(cert, verify_signature) __X509_self_signed(AmiSSLExtBase, (cert), (verify_signature))

int __OPENSSL_hexstr2buf_ex(__reg("a6") struct Library * , __reg("a0") unsigned char * buf , __reg("d0") size_t buf_n , __reg("a1") size_t * buflen , __reg("a2") const char * str , __reg("d1") const char sep ) = "\tjsr\t-1230(a6)";
#define OPENSSL_hexstr2buf_ex(buf, buf_n, buflen, str, sep) __OPENSSL_hexstr2buf_ex(AmiSSLExtBase, (buf), (buf_n), (buflen), (str), (sep))

int __OPENSSL_buf2hexstr_ex(__reg("a6") struct Library * , __reg("a0") char * str , __reg("d0") size_t str_n , __reg("a1") size_t * strlength , __reg("a2") const unsigned char * buf , __reg("d1") size_t buflen , __reg("d2") const char sep ) = "\tjsr\t-1236(a6)";
#define OPENSSL_buf2hexstr_ex(str, str_n, strlength, buf, buflen, sep) __OPENSSL_buf2hexstr_ex(AmiSSLExtBase, (str), (str_n), (strlength), (buf), (buflen), (sep))

int __OSSL_PARAM_allocate_from_text(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * to , __reg("a1") const OSSL_PARAM * paramdefs , __reg("a2") const char * key , __reg("a3") const char * value , __reg("d0") size_t value_n , __reg("d1") int * found ) = "\tjsr\t-1242(a6)";
#define OSSL_PARAM_allocate_from_text(to, paramdefs, key, value, value_n, found) __OSSL_PARAM_allocate_from_text(AmiSSLExtBase, (to), (paramdefs), (key), (value), (value_n), (found))

const OSSL_PARAM * __EVP_MD_gettable_params(__reg("a6") struct Library * , __reg("a0") const EVP_MD * digest ) = "\tjsr\t-1248(a6)";
#define EVP_MD_gettable_params(digest) __EVP_MD_gettable_params(AmiSSLExtBase, (digest))

const OSSL_PARAM * __EVP_MD_CTX_settable_params(__reg("a6") struct Library * , __reg("a0") EVP_MD_CTX * ctx ) = "\tjsr\t-1254(a6)";
#define EVP_MD_CTX_settable_params(ctx) __EVP_MD_CTX_settable_params(AmiSSLExtBase, (ctx))

const OSSL_PARAM * __EVP_MD_CTX_gettable_params(__reg("a6") struct Library * , __reg("a0") EVP_MD_CTX * ctx ) = "\tjsr\t-1260(a6)";
#define EVP_MD_CTX_gettable_params(ctx) __EVP_MD_CTX_gettable_params(AmiSSLExtBase, (ctx))

int __EVP_CIPHER_get_params(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER * cipher , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-1266(a6)";
#define EVP_CIPHER_get_params(cipher, params) __EVP_CIPHER_get_params(AmiSSLExtBase, (cipher), (params))

int __EVP_CIPHER_CTX_set_params(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-1272(a6)";
#define EVP_CIPHER_CTX_set_params(ctx, params) __EVP_CIPHER_CTX_set_params(AmiSSLExtBase, (ctx), (params))

int __EVP_CIPHER_CTX_get_params(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-1278(a6)";
#define EVP_CIPHER_CTX_get_params(ctx, params) __EVP_CIPHER_CTX_get_params(AmiSSLExtBase, (ctx), (params))

const OSSL_PARAM * __EVP_CIPHER_gettable_params(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher ) = "\tjsr\t-1284(a6)";
#define EVP_CIPHER_gettable_params(cipher) __EVP_CIPHER_gettable_params(AmiSSLExtBase, (cipher))

const OSSL_PARAM * __EVP_CIPHER_settable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher ) = "\tjsr\t-1290(a6)";
#define EVP_CIPHER_settable_ctx_params(cipher) __EVP_CIPHER_settable_ctx_params(AmiSSLExtBase, (cipher))

const OSSL_PARAM * __EVP_CIPHER_gettable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher ) = "\tjsr\t-1296(a6)";
#define EVP_CIPHER_gettable_ctx_params(cipher) __EVP_CIPHER_gettable_ctx_params(AmiSSLExtBase, (cipher))

int __EVP_MD_get_params(__reg("a6") struct Library * , __reg("a0") const EVP_MD * digest , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-1302(a6)";
#define EVP_MD_get_params(digest, params) __EVP_MD_get_params(AmiSSLExtBase, (digest), (params))

EVP_MAC * __EVP_MAC_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * algorithm , __reg("a2") const char * properties ) = "\tjsr\t-1308(a6)";
#define EVP_MAC_fetch(libctx, algorithm, properties) __EVP_MAC_fetch(AmiSSLExtBase, (libctx), (algorithm), (properties))

const OSSL_PARAM * __EVP_MAC_settable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_MAC * mac ) = "\tjsr\t-1314(a6)";
#define EVP_MAC_settable_ctx_params(mac) __EVP_MAC_settable_ctx_params(AmiSSLExtBase, (mac))

int __EVP_MAC_CTX_set_params(__reg("a6") struct Library * , __reg("a0") EVP_MAC_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-1320(a6)";
#define EVP_MAC_CTX_set_params(ctx, params) __EVP_MAC_CTX_set_params(AmiSSLExtBase, (ctx), (params))

int __EVP_MAC_CTX_get_params(__reg("a6") struct Library * , __reg("a0") EVP_MAC_CTX * ctx , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-1326(a6)";
#define EVP_MAC_CTX_get_params(ctx, params) __EVP_MAC_CTX_get_params(AmiSSLExtBase, (ctx), (params))

const OSSL_PARAM * __EVP_MAC_gettable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_MAC * mac ) = "\tjsr\t-1332(a6)";
#define EVP_MAC_gettable_ctx_params(mac) __EVP_MAC_gettable_ctx_params(AmiSSLExtBase, (mac))

void __EVP_MAC_free(__reg("a6") struct Library * , __reg("a0") EVP_MAC * mac ) = "\tjsr\t-1338(a6)";
#define EVP_MAC_free(mac) __EVP_MAC_free(AmiSSLExtBase, (mac))

int __EVP_MAC_up_ref(__reg("a6") struct Library * , __reg("a0") EVP_MAC * mac ) = "\tjsr\t-1344(a6)";
#define EVP_MAC_up_ref(mac) __EVP_MAC_up_ref(AmiSSLExtBase, (mac))

int __EVP_MAC_get_params(__reg("a6") struct Library * , __reg("a0") EVP_MAC * mac , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-1350(a6)";
#define EVP_MAC_get_params(mac, params) __EVP_MAC_get_params(AmiSSLExtBase, (mac), (params))

const OSSL_PARAM * __EVP_MAC_gettable_params(__reg("a6") struct Library * , __reg("a0") const EVP_MAC * mac ) = "\tjsr\t-1356(a6)";
#define EVP_MAC_gettable_params(mac) __EVP_MAC_gettable_params(AmiSSLExtBase, (mac))

const OSSL_PROVIDER * __EVP_MAC_get0_provider(__reg("a6") struct Library * , __reg("a0") const EVP_MAC * mac ) = "\tjsr\t-1362(a6)";
#define EVP_MAC_get0_provider(mac) __EVP_MAC_get0_provider(AmiSSLExtBase, (mac))

void __EVP_MAC_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(EVP_MAC *mac,void *arg) , __reg("a2") void * arg ) = "\tjsr\t-1368(a6)";
#define EVP_MAC_do_all_provided(libctx, fn, arg) __EVP_MAC_do_all_provided(AmiSSLExtBase, (libctx), (fn), (arg))

const char * __EVP_MAC_get0_name(__reg("a6") struct Library * , __reg("a0") const EVP_MAC * mac ) = "\tjsr\t-1374(a6)";
#define EVP_MAC_get0_name(mac) __EVP_MAC_get0_name(AmiSSLExtBase, (mac))

void __EVP_MD_free(__reg("a6") struct Library * , __reg("a0") EVP_MD * md ) = "\tjsr\t-1380(a6)";
#define EVP_MD_free(md) __EVP_MD_free(AmiSSLExtBase, (md))

void __EVP_CIPHER_free(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER * cipher ) = "\tjsr\t-1386(a6)";
#define EVP_CIPHER_free(cipher) __EVP_CIPHER_free(AmiSSLExtBase, (cipher))

int __EVP_KDF_up_ref(__reg("a6") struct Library * , __reg("a0") EVP_KDF * kdf ) = "\tjsr\t-1392(a6)";
#define EVP_KDF_up_ref(kdf) __EVP_KDF_up_ref(AmiSSLExtBase, (kdf))

void __EVP_KDF_free(__reg("a6") struct Library * , __reg("a0") EVP_KDF * kdf ) = "\tjsr\t-1398(a6)";
#define EVP_KDF_free(kdf) __EVP_KDF_free(AmiSSLExtBase, (kdf))

EVP_KDF * __EVP_KDF_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * algorithm , __reg("a2") const char * properties ) = "\tjsr\t-1404(a6)";
#define EVP_KDF_fetch(libctx, algorithm, properties) __EVP_KDF_fetch(AmiSSLExtBase, (libctx), (algorithm), (properties))

EVP_KDF_CTX * __EVP_KDF_CTX_dup(__reg("a6") struct Library * , __reg("a0") const EVP_KDF_CTX * src ) = "\tjsr\t-1410(a6)";
#define EVP_KDF_CTX_dup(src) __EVP_KDF_CTX_dup(AmiSSLExtBase, (src))

const OSSL_PROVIDER * __EVP_KDF_get0_provider(__reg("a6") struct Library * , __reg("a0") const EVP_KDF * kdf ) = "\tjsr\t-1416(a6)";
#define EVP_KDF_get0_provider(kdf) __EVP_KDF_get0_provider(AmiSSLExtBase, (kdf))

int __EVP_KDF_get_params(__reg("a6") struct Library * , __reg("a0") EVP_KDF * kdf , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-1422(a6)";
#define EVP_KDF_get_params(kdf, params) __EVP_KDF_get_params(AmiSSLExtBase, (kdf), (params))

int __EVP_KDF_CTX_get_params(__reg("a6") struct Library * , __reg("a0") EVP_KDF_CTX * ctx , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-1428(a6)";
#define EVP_KDF_CTX_get_params(ctx, params) __EVP_KDF_CTX_get_params(AmiSSLExtBase, (ctx), (params))

int __EVP_KDF_CTX_set_params(__reg("a6") struct Library * , __reg("a0") EVP_KDF_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-1434(a6)";
#define EVP_KDF_CTX_set_params(ctx, params) __EVP_KDF_CTX_set_params(AmiSSLExtBase, (ctx), (params))

const OSSL_PARAM * __EVP_KDF_gettable_params(__reg("a6") struct Library * , __reg("a0") const EVP_KDF * kdf ) = "\tjsr\t-1440(a6)";
#define EVP_KDF_gettable_params(kdf) __EVP_KDF_gettable_params(AmiSSLExtBase, (kdf))

const OSSL_PARAM * __EVP_KDF_gettable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_KDF * kdf ) = "\tjsr\t-1446(a6)";
#define EVP_KDF_gettable_ctx_params(kdf) __EVP_KDF_gettable_ctx_params(AmiSSLExtBase, (kdf))

const OSSL_PARAM * __EVP_KDF_settable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_KDF * kdf ) = "\tjsr\t-1452(a6)";
#define EVP_KDF_settable_ctx_params(kdf) __EVP_KDF_settable_ctx_params(AmiSSLExtBase, (kdf))

void __EVP_KDF_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(EVP_KDF *kdf,void *arg) , __reg("a2") void * arg ) = "\tjsr\t-1458(a6)";
#define EVP_KDF_do_all_provided(libctx, fn, arg) __EVP_KDF_do_all_provided(AmiSSLExtBase, (libctx), (fn), (arg))

void __EVP_SIGNATURE_free(__reg("a6") struct Library * , __reg("a0") EVP_SIGNATURE * signature ) = "\tjsr\t-1464(a6)";
#define EVP_SIGNATURE_free(signature) __EVP_SIGNATURE_free(AmiSSLExtBase, (signature))

int __EVP_SIGNATURE_up_ref(__reg("a6") struct Library * , __reg("a0") EVP_SIGNATURE * signature ) = "\tjsr\t-1470(a6)";
#define EVP_SIGNATURE_up_ref(signature) __EVP_SIGNATURE_up_ref(AmiSSLExtBase, (signature))

OSSL_PROVIDER * __EVP_SIGNATURE_get0_provider(__reg("a6") struct Library * , __reg("a0") const EVP_SIGNATURE * signature ) = "\tjsr\t-1476(a6)";
#define EVP_SIGNATURE_get0_provider(signature) __EVP_SIGNATURE_get0_provider(AmiSSLExtBase, (signature))

EVP_SIGNATURE * __EVP_SIGNATURE_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * algorithm , __reg("a2") const char * properties ) = "\tjsr\t-1482(a6)";
#define EVP_SIGNATURE_fetch(ctx, algorithm, properties) __EVP_SIGNATURE_fetch(AmiSSLExtBase, (ctx), (algorithm), (properties))

int __EVP_PKEY_CTX_set_signature_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD * md ) = "\tjsr\t-1488(a6)";
#define EVP_PKEY_CTX_set_signature_md(ctx, md) __EVP_PKEY_CTX_set_signature_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_get_signature_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD ** md ) = "\tjsr\t-1494(a6)";
#define EVP_PKEY_CTX_get_signature_md(ctx, md) __EVP_PKEY_CTX_get_signature_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_get_params(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-1500(a6)";
#define EVP_PKEY_CTX_get_params(ctx, params) __EVP_PKEY_CTX_get_params(AmiSSLExtBase, (ctx), (params))

const OSSL_PARAM * __EVP_PKEY_CTX_gettable_params(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY_CTX * ctx ) = "\tjsr\t-1506(a6)";
#define EVP_PKEY_CTX_gettable_params(ctx) __EVP_PKEY_CTX_gettable_params(AmiSSLExtBase, (ctx))

const OSSL_PARAM * __EVP_PKEY_CTX_settable_params(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY_CTX * ctx ) = "\tjsr\t-1512(a6)";
#define EVP_PKEY_CTX_settable_params(ctx) __EVP_PKEY_CTX_settable_params(AmiSSLExtBase, (ctx))

int __EVP_CIPHER_CTX_get_tag_length(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER_CTX * ctx ) = "\tjsr\t-1518(a6)";
#define EVP_CIPHER_CTX_get_tag_length(ctx) __EVP_CIPHER_CTX_get_tag_length(AmiSSLExtBase, (ctx))

unsigned long __ERR_get_error_all(__reg("a6") struct Library * , __reg("a0") const char ** file , __reg("a1") int * line , __reg("a2") const char ** func , __reg("a3") const char ** data , __reg("d0") int * flags ) = "\tjsr\t-1524(a6)";
#define ERR_get_error_all(file, line, func, data, flags) __ERR_get_error_all(AmiSSLExtBase, (file), (line), (func), (data), (flags))

unsigned long __ERR_peek_error_func(__reg("a6") struct Library * , __reg("a0") const char ** func ) = "\tjsr\t-1530(a6)";
#define ERR_peek_error_func(func) __ERR_peek_error_func(AmiSSLExtBase, (func))

unsigned long __ERR_peek_error_data(__reg("a6") struct Library * , __reg("a0") const char ** data , __reg("a1") int * flags ) = "\tjsr\t-1536(a6)";
#define ERR_peek_error_data(data, flags) __ERR_peek_error_data(AmiSSLExtBase, (data), (flags))

unsigned long __ERR_peek_error_all(__reg("a6") struct Library * , __reg("a0") const char ** file , __reg("a1") int * line , __reg("a2") const char ** func , __reg("a3") const char ** data , __reg("d0") int * flags ) = "\tjsr\t-1542(a6)";
#define ERR_peek_error_all(file, line, func, data, flags) __ERR_peek_error_all(AmiSSLExtBase, (file), (line), (func), (data), (flags))

unsigned long __ERR_peek_last_error_func(__reg("a6") struct Library * , __reg("a0") const char ** func ) = "\tjsr\t-1548(a6)";
#define ERR_peek_last_error_func(func) __ERR_peek_last_error_func(AmiSSLExtBase, (func))

unsigned long __ERR_peek_last_error_data(__reg("a6") struct Library * , __reg("a0") const char ** data , __reg("a1") int * flags ) = "\tjsr\t-1554(a6)";
#define ERR_peek_last_error_data(data, flags) __ERR_peek_last_error_data(AmiSSLExtBase, (data), (flags))

unsigned long __ERR_peek_last_error_all(__reg("a6") struct Library * , __reg("a0") const char ** file , __reg("a1") int * line , __reg("a2") const char ** func , __reg("a3") const char ** data , __reg("d0") int * flags ) = "\tjsr\t-1560(a6)";
#define ERR_peek_last_error_all(file, line, func, data, flags) __ERR_peek_last_error_all(AmiSSLExtBase, (file), (line), (func), (data), (flags))

int __EVP_CIPHER_is_a(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher , __reg("a1") const char * name ) = "\tjsr\t-1566(a6)";
#define EVP_CIPHER_is_a(cipher, name) __EVP_CIPHER_is_a(AmiSSLExtBase, (cipher), (name))

int __EVP_MAC_is_a(__reg("a6") struct Library * , __reg("a0") const EVP_MAC * mac , __reg("a1") const char * name ) = "\tjsr\t-1572(a6)";
#define EVP_MAC_is_a(mac, name) __EVP_MAC_is_a(AmiSSLExtBase, (mac), (name))

const OSSL_PARAM * __EVP_MD_settable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_MD * md ) = "\tjsr\t-1578(a6)";
#define EVP_MD_settable_ctx_params(md) __EVP_MD_settable_ctx_params(AmiSSLExtBase, (md))

const OSSL_PARAM * __EVP_MD_gettable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_MD * md ) = "\tjsr\t-1584(a6)";
#define EVP_MD_gettable_ctx_params(md) __EVP_MD_gettable_ctx_params(AmiSSLExtBase, (md))

OSSL_CMP_CTX * __OSSL_CMP_CTX_new(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-1590(a6)";
#define OSSL_CMP_CTX_new(libctx, propq) __OSSL_CMP_CTX_new(AmiSSLExtBase, (libctx), (propq))

void __OSSL_CMP_CTX_free(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx ) = "\tjsr\t-1596(a6)";
#define OSSL_CMP_CTX_free(ctx) __OSSL_CMP_CTX_free(AmiSSLExtBase, (ctx))

int __OSSL_CMP_CTX_reinit(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx ) = "\tjsr\t-1602(a6)";
#define OSSL_CMP_CTX_reinit(ctx) __OSSL_CMP_CTX_reinit(AmiSSLExtBase, (ctx))

int __OSSL_CMP_CTX_set_option(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("d0") int opt , __reg("d1") int val ) = "\tjsr\t-1608(a6)";
#define OSSL_CMP_CTX_set_option(ctx, opt, val) __OSSL_CMP_CTX_set_option(AmiSSLExtBase, (ctx), (opt), (val))

int __OSSL_CMP_CTX_get_option(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx , __reg("d0") int opt ) = "\tjsr\t-1614(a6)";
#define OSSL_CMP_CTX_get_option(ctx, opt) __OSSL_CMP_CTX_get_option(AmiSSLExtBase, (ctx), (opt))

int __OSSL_CMP_CTX_set_log_cb(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") OSSL_CMP_log_cb_t cb ) = "\tjsr\t-1620(a6)";
#define OSSL_CMP_CTX_set_log_cb(ctx, cb) __OSSL_CMP_CTX_set_log_cb(AmiSSLExtBase, (ctx), (cb))

void __OSSL_CMP_CTX_print_errors(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1626(a6)";
#define OSSL_CMP_CTX_print_errors(ctx) __OSSL_CMP_CTX_print_errors(AmiSSLExtBase, (ctx))

int __OSSL_CMP_CTX_set1_serverPath(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const char * path ) = "\tjsr\t-1632(a6)";
#define OSSL_CMP_CTX_set1_serverPath(ctx, path) __OSSL_CMP_CTX_set1_serverPath(AmiSSLExtBase, (ctx), (path))

int __OSSL_CMP_CTX_set1_server(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const char * address ) = "\tjsr\t-1638(a6)";
#define OSSL_CMP_CTX_set1_server(ctx, address) __OSSL_CMP_CTX_set1_server(AmiSSLExtBase, (ctx), (address))

int __OSSL_CMP_CTX_set_serverPort(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("d0") int port ) = "\tjsr\t-1644(a6)";
#define OSSL_CMP_CTX_set_serverPort(ctx, port) __OSSL_CMP_CTX_set_serverPort(AmiSSLExtBase, (ctx), (port))

int __OSSL_CMP_CTX_set1_proxy(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const char * name ) = "\tjsr\t-1650(a6)";
#define OSSL_CMP_CTX_set1_proxy(ctx, name) __OSSL_CMP_CTX_set1_proxy(AmiSSLExtBase, (ctx), (name))

int __OSSL_CMP_CTX_set1_no_proxy(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const char * names ) = "\tjsr\t-1656(a6)";
#define OSSL_CMP_CTX_set1_no_proxy(ctx, names) __OSSL_CMP_CTX_set1_no_proxy(AmiSSLExtBase, (ctx), (names))

int __OSSL_CMP_CTX_set_http_cb(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") OSSL_HTTP_bio_cb_t cb ) = "\tjsr\t-1662(a6)";
#define OSSL_CMP_CTX_set_http_cb(ctx, cb) __OSSL_CMP_CTX_set_http_cb(AmiSSLExtBase, (ctx), (cb))

int __OSSL_CMP_CTX_set_http_cb_arg(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") void * arg ) = "\tjsr\t-1668(a6)";
#define OSSL_CMP_CTX_set_http_cb_arg(ctx, arg) __OSSL_CMP_CTX_set_http_cb_arg(AmiSSLExtBase, (ctx), (arg))

void * __OSSL_CMP_CTX_get_http_cb_arg(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1674(a6)";
#define OSSL_CMP_CTX_get_http_cb_arg(ctx) __OSSL_CMP_CTX_get_http_cb_arg(AmiSSLExtBase, (ctx))

int __OSSL_CMP_CTX_set_transfer_cb(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") OSSL_CMP_transfer_cb_t cb ) = "\tjsr\t-1680(a6)";
#define OSSL_CMP_CTX_set_transfer_cb(ctx, cb) __OSSL_CMP_CTX_set_transfer_cb(AmiSSLExtBase, (ctx), (cb))

int __OSSL_CMP_CTX_set_transfer_cb_arg(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") void * arg ) = "\tjsr\t-1686(a6)";
#define OSSL_CMP_CTX_set_transfer_cb_arg(ctx, arg) __OSSL_CMP_CTX_set_transfer_cb_arg(AmiSSLExtBase, (ctx), (arg))

void * __OSSL_CMP_CTX_get_transfer_cb_arg(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1692(a6)";
#define OSSL_CMP_CTX_get_transfer_cb_arg(ctx) __OSSL_CMP_CTX_get_transfer_cb_arg(AmiSSLExtBase, (ctx))

int __OSSL_CMP_CTX_set1_srvCert(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") X509 * cert ) = "\tjsr\t-1698(a6)";
#define OSSL_CMP_CTX_set1_srvCert(ctx, cert) __OSSL_CMP_CTX_set1_srvCert(AmiSSLExtBase, (ctx), (cert))

int __OSSL_CMP_CTX_set1_expected_sender(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const X509_NAME * name ) = "\tjsr\t-1704(a6)";
#define OSSL_CMP_CTX_set1_expected_sender(ctx, name) __OSSL_CMP_CTX_set1_expected_sender(AmiSSLExtBase, (ctx), (name))

int __OSSL_CMP_CTX_set0_trustedStore(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") X509_STORE * store ) = "\tjsr\t-1710(a6)";
#define OSSL_CMP_CTX_set0_trustedStore(ctx, store) __OSSL_CMP_CTX_set0_trustedStore(AmiSSLExtBase, (ctx), (store))

X509_STORE * __OSSL_CMP_CTX_get0_trustedStore(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1716(a6)";
#define OSSL_CMP_CTX_get0_trustedStore(ctx) __OSSL_CMP_CTX_get0_trustedStore(AmiSSLExtBase, (ctx))

int __OSSL_CMP_CTX_set1_untrusted(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") STACK_OF(X509) * certs ) = "\tjsr\t-1722(a6)";
#define OSSL_CMP_CTX_set1_untrusted(ctx, certs) __OSSL_CMP_CTX_set1_untrusted(AmiSSLExtBase, (ctx), (certs))

STACK_OF(X509) * __OSSL_CMP_CTX_get0_untrusted(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1728(a6)";
#define OSSL_CMP_CTX_get0_untrusted(ctx) __OSSL_CMP_CTX_get0_untrusted(AmiSSLExtBase, (ctx))

int __OSSL_CMP_CTX_set1_cert(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") X509 * cert ) = "\tjsr\t-1734(a6)";
#define OSSL_CMP_CTX_set1_cert(ctx, cert) __OSSL_CMP_CTX_set1_cert(AmiSSLExtBase, (ctx), (cert))

int __OSSL_CMP_CTX_set1_pkey(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") EVP_PKEY * pkey ) = "\tjsr\t-1740(a6)";
#define OSSL_CMP_CTX_set1_pkey(ctx, pkey) __OSSL_CMP_CTX_set1_pkey(AmiSSLExtBase, (ctx), (pkey))

int __OSSL_CMP_CTX_build_cert_chain(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") X509_STORE * own_trusted , __reg("a2") STACK_OF(X509) * candidates ) = "\tjsr\t-1746(a6)";
#define OSSL_CMP_CTX_build_cert_chain(ctx, own_trusted, candidates) __OSSL_CMP_CTX_build_cert_chain(AmiSSLExtBase, (ctx), (own_trusted), (candidates))

int __OSSL_CMP_CTX_set1_referenceValue(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const unsigned char * ref , __reg("d0") int len ) = "\tjsr\t-1752(a6)";
#define OSSL_CMP_CTX_set1_referenceValue(ctx, ref, len) __OSSL_CMP_CTX_set1_referenceValue(AmiSSLExtBase, (ctx), (ref), (len))

int __OSSL_CMP_CTX_set1_secretValue(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const unsigned char * sec , __reg("d0") const int len ) = "\tjsr\t-1758(a6)";
#define OSSL_CMP_CTX_set1_secretValue(ctx, sec, len) __OSSL_CMP_CTX_set1_secretValue(AmiSSLExtBase, (ctx), (sec), (len))

int __OSSL_CMP_CTX_set1_recipient(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const X509_NAME * name ) = "\tjsr\t-1764(a6)";
#define OSSL_CMP_CTX_set1_recipient(ctx, name) __OSSL_CMP_CTX_set1_recipient(AmiSSLExtBase, (ctx), (name))

int __OSSL_CMP_CTX_push0_geninfo_ITAV(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") OSSL_CMP_ITAV * itav ) = "\tjsr\t-1770(a6)";
#define OSSL_CMP_CTX_push0_geninfo_ITAV(ctx, itav) __OSSL_CMP_CTX_push0_geninfo_ITAV(AmiSSLExtBase, (ctx), (itav))

int __OSSL_CMP_CTX_set1_extraCertsOut(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") STACK_OF(X509) * extraCertsOut ) = "\tjsr\t-1776(a6)";
#define OSSL_CMP_CTX_set1_extraCertsOut(ctx, extraCertsOut) __OSSL_CMP_CTX_set1_extraCertsOut(AmiSSLExtBase, (ctx), (extraCertsOut))

int __OSSL_CMP_CTX_set0_newPkey(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("d0") int priv , __reg("a1") EVP_PKEY * pkey ) = "\tjsr\t-1782(a6)";
#define OSSL_CMP_CTX_set0_newPkey(ctx, priv, pkey) __OSSL_CMP_CTX_set0_newPkey(AmiSSLExtBase, (ctx), (priv), (pkey))

EVP_PKEY * __OSSL_CMP_CTX_get0_newPkey(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx , __reg("d0") int priv ) = "\tjsr\t-1788(a6)";
#define OSSL_CMP_CTX_get0_newPkey(ctx, priv) __OSSL_CMP_CTX_get0_newPkey(AmiSSLExtBase, (ctx), (priv))

int __OSSL_CMP_CTX_set1_issuer(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const X509_NAME * name ) = "\tjsr\t-1794(a6)";
#define OSSL_CMP_CTX_set1_issuer(ctx, name) __OSSL_CMP_CTX_set1_issuer(AmiSSLExtBase, (ctx), (name))

int __OSSL_CMP_CTX_set1_subjectName(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const X509_NAME * name ) = "\tjsr\t-1800(a6)";
#define OSSL_CMP_CTX_set1_subjectName(ctx, name) __OSSL_CMP_CTX_set1_subjectName(AmiSSLExtBase, (ctx), (name))

int __OSSL_CMP_CTX_push1_subjectAltName(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const GENERAL_NAME * name ) = "\tjsr\t-1806(a6)";
#define OSSL_CMP_CTX_push1_subjectAltName(ctx, name) __OSSL_CMP_CTX_push1_subjectAltName(AmiSSLExtBase, (ctx), (name))

int __OSSL_CMP_CTX_set0_reqExtensions(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") X509_EXTENSIONS * exts ) = "\tjsr\t-1812(a6)";
#define OSSL_CMP_CTX_set0_reqExtensions(ctx, exts) __OSSL_CMP_CTX_set0_reqExtensions(AmiSSLExtBase, (ctx), (exts))

int __OSSL_CMP_CTX_reqExtensions_have_SAN(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx ) = "\tjsr\t-1818(a6)";
#define OSSL_CMP_CTX_reqExtensions_have_SAN(ctx) __OSSL_CMP_CTX_reqExtensions_have_SAN(AmiSSLExtBase, (ctx))

int __OSSL_CMP_CTX_push0_policy(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") POLICYINFO * pinfo ) = "\tjsr\t-1824(a6)";
#define OSSL_CMP_CTX_push0_policy(ctx, pinfo) __OSSL_CMP_CTX_push0_policy(AmiSSLExtBase, (ctx), (pinfo))

int __OSSL_CMP_CTX_set1_oldCert(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") X509 * cert ) = "\tjsr\t-1830(a6)";
#define OSSL_CMP_CTX_set1_oldCert(ctx, cert) __OSSL_CMP_CTX_set1_oldCert(AmiSSLExtBase, (ctx), (cert))

int __OSSL_CMP_CTX_set1_p10CSR(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const X509_REQ * csr ) = "\tjsr\t-1836(a6)";
#define OSSL_CMP_CTX_set1_p10CSR(ctx, csr) __OSSL_CMP_CTX_set1_p10CSR(AmiSSLExtBase, (ctx), (csr))

int __OSSL_CMP_CTX_push0_genm_ITAV(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") OSSL_CMP_ITAV * itav ) = "\tjsr\t-1842(a6)";
#define OSSL_CMP_CTX_push0_genm_ITAV(ctx, itav) __OSSL_CMP_CTX_push0_genm_ITAV(AmiSSLExtBase, (ctx), (itav))

int __OSSL_CMP_CTX_set_certConf_cb(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") OSSL_CMP_certConf_cb_t cb ) = "\tjsr\t-1848(a6)";
#define OSSL_CMP_CTX_set_certConf_cb(ctx, cb) __OSSL_CMP_CTX_set_certConf_cb(AmiSSLExtBase, (ctx), (cb))

int __OSSL_CMP_CTX_set_certConf_cb_arg(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") void * arg ) = "\tjsr\t-1854(a6)";
#define OSSL_CMP_CTX_set_certConf_cb_arg(ctx, arg) __OSSL_CMP_CTX_set_certConf_cb_arg(AmiSSLExtBase, (ctx), (arg))

void * __OSSL_CMP_CTX_get_certConf_cb_arg(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1860(a6)";
#define OSSL_CMP_CTX_get_certConf_cb_arg(ctx) __OSSL_CMP_CTX_get_certConf_cb_arg(AmiSSLExtBase, (ctx))

int __OSSL_CMP_CTX_get_status(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1866(a6)";
#define OSSL_CMP_CTX_get_status(ctx) __OSSL_CMP_CTX_get_status(AmiSSLExtBase, (ctx))

OSSL_CMP_PKIFREETEXT * __OSSL_CMP_CTX_get0_statusString(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1872(a6)";
#define OSSL_CMP_CTX_get0_statusString(ctx) __OSSL_CMP_CTX_get0_statusString(AmiSSLExtBase, (ctx))

int __OSSL_CMP_CTX_get_failInfoCode(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1878(a6)";
#define OSSL_CMP_CTX_get_failInfoCode(ctx) __OSSL_CMP_CTX_get_failInfoCode(AmiSSLExtBase, (ctx))

X509 * __OSSL_CMP_CTX_get0_newCert(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1884(a6)";
#define OSSL_CMP_CTX_get0_newCert(ctx) __OSSL_CMP_CTX_get0_newCert(AmiSSLExtBase, (ctx))

STACK_OF(X509) * __OSSL_CMP_CTX_get1_newChain(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1890(a6)";
#define OSSL_CMP_CTX_get1_newChain(ctx) __OSSL_CMP_CTX_get1_newChain(AmiSSLExtBase, (ctx))

STACK_OF(X509) * __OSSL_CMP_CTX_get1_caPubs(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1896(a6)";
#define OSSL_CMP_CTX_get1_caPubs(ctx) __OSSL_CMP_CTX_get1_caPubs(AmiSSLExtBase, (ctx))

STACK_OF(X509) * __OSSL_CMP_CTX_get1_extraCertsIn(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx ) = "\tjsr\t-1902(a6)";
#define OSSL_CMP_CTX_get1_extraCertsIn(ctx) __OSSL_CMP_CTX_get1_extraCertsIn(AmiSSLExtBase, (ctx))

int __OSSL_CMP_CTX_set1_transactionID(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const ASN1_OCTET_STRING * id ) = "\tjsr\t-1908(a6)";
#define OSSL_CMP_CTX_set1_transactionID(ctx, id) __OSSL_CMP_CTX_set1_transactionID(AmiSSLExtBase, (ctx), (id))

int __OSSL_CMP_CTX_set1_senderNonce(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const ASN1_OCTET_STRING * nonce ) = "\tjsr\t-1914(a6)";
#define OSSL_CMP_CTX_set1_senderNonce(ctx, nonce) __OSSL_CMP_CTX_set1_senderNonce(AmiSSLExtBase, (ctx), (nonce))

int __OSSL_CMP_log_open(__reg("a6") struct Library * ) = "\tjsr\t-1920(a6)";
#define OSSL_CMP_log_open() __OSSL_CMP_log_open(AmiSSLExtBase)

void __OSSL_CMP_log_close(__reg("a6") struct Library * ) = "\tjsr\t-1926(a6)";
#define OSSL_CMP_log_close() __OSSL_CMP_log_close(AmiSSLExtBase)

int __OSSL_CMP_print_to_bio(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("a1") const char * component , __reg("a2") const char * file , __reg("d0") int line , __reg("d1") OSSL_CMP_severity level , __reg("a3") const char * msg ) = "\tjsr\t-1932(a6)";
#define OSSL_CMP_print_to_bio(bio, component, file, line, level, msg) __OSSL_CMP_print_to_bio(AmiSSLExtBase, (bio), (component), (file), (line), (level), (msg))

void __OSSL_CMP_print_errors_cb(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_log_cb_t log_fn ) = "\tjsr\t-1938(a6)";
#define OSSL_CMP_print_errors_cb(log_fn) __OSSL_CMP_print_errors_cb(AmiSSLExtBase, (log_fn))

const X509_NAME * __OSSL_CRMF_CERTID_get0_issuer(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_CERTID * cid ) = "\tjsr\t-1944(a6)";
#define OSSL_CRMF_CERTID_get0_issuer(cid) __OSSL_CRMF_CERTID_get0_issuer(AmiSSLExtBase, (cid))

const ASN1_INTEGER * __OSSL_CRMF_CERTID_get0_serialNumber(__reg("a6") struct Library * , __reg("a0") const OSSL_CRMF_CERTID * cid ) = "\tjsr\t-1950(a6)";
#define OSSL_CRMF_CERTID_get0_serialNumber(cid) __OSSL_CRMF_CERTID_get0_serialNumber(AmiSSLExtBase, (cid))

int __EVP_DigestSignUpdate(__reg("a6") struct Library * , __reg("a0") EVP_MD_CTX * ctx , __reg("a1") const void * data , __reg("d0") size_t dsize ) = "\tjsr\t-1956(a6)";
#define EVP_DigestSignUpdate(ctx, data, dsize) __EVP_DigestSignUpdate(AmiSSLExtBase, (ctx), (data), (dsize))

int __EVP_DigestVerifyUpdate(__reg("a6") struct Library * , __reg("a0") EVP_MD_CTX * ctx , __reg("a1") const void * data , __reg("d0") size_t dsize ) = "\tjsr\t-1962(a6)";
#define EVP_DigestVerifyUpdate(ctx, data, dsize) __EVP_DigestVerifyUpdate(AmiSSLExtBase, (ctx), (data), (dsize))

int __BN_check_prime(__reg("a6") struct Library * , __reg("a0") const BIGNUM * p , __reg("a1") BN_CTX * ctx , __reg("a2") BN_GENCB * cb ) = "\tjsr\t-1968(a6)";
#define BN_check_prime(p, ctx, cb) __BN_check_prime(AmiSSLExtBase, (p), (ctx), (cb))

int __EVP_KEYMGMT_is_a(__reg("a6") struct Library * , __reg("a0") const EVP_KEYMGMT * keymgmt , __reg("a1") const char * name ) = "\tjsr\t-1974(a6)";
#define EVP_KEYMGMT_is_a(keymgmt, name) __EVP_KEYMGMT_is_a(AmiSSLExtBase, (keymgmt), (name))

void __EVP_KEYMGMT_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(EVP_KEYMGMT *keymgmt,void *arg) , __reg("a2") void * arg ) = "\tjsr\t-1980(a6)";
#define EVP_KEYMGMT_do_all_provided(libctx, fn, arg) __EVP_KEYMGMT_do_all_provided(AmiSSLExtBase, (libctx), (fn), (arg))

int __EVP_KEYEXCH_is_a(__reg("a6") struct Library * , __reg("a0") const EVP_KEYEXCH * keyexch , __reg("a1") const char * name ) = "\tjsr\t-1986(a6)";
#define EVP_KEYEXCH_is_a(keyexch, name) __EVP_KEYEXCH_is_a(AmiSSLExtBase, (keyexch), (name))

void __EVP_KEYEXCH_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(EVP_KEYEXCH *keyexch,void *data) , __reg("a2") void * data ) = "\tjsr\t-1992(a6)";
#define EVP_KEYEXCH_do_all_provided(libctx, fn, data) __EVP_KEYEXCH_do_all_provided(AmiSSLExtBase, (libctx), (fn), (data))

int __EVP_KDF_is_a(__reg("a6") struct Library * , __reg("a0") const EVP_KDF * kdf , __reg("a1") const char * name ) = "\tjsr\t-1998(a6)";
#define EVP_KDF_is_a(kdf, name) __EVP_KDF_is_a(AmiSSLExtBase, (kdf), (name))

int __EVP_MD_is_a(__reg("a6") struct Library * , __reg("a0") const EVP_MD * md , __reg("a1") const char * name ) = "\tjsr\t-2004(a6)";
#define EVP_MD_is_a(md, name) __EVP_MD_is_a(AmiSSLExtBase, (md), (name))

int __EVP_SIGNATURE_is_a(__reg("a6") struct Library * , __reg("a0") const EVP_SIGNATURE * signature , __reg("a1") const char * name ) = "\tjsr\t-2010(a6)";
#define EVP_SIGNATURE_is_a(signature, name) __EVP_SIGNATURE_is_a(AmiSSLExtBase, (signature), (name))

void __EVP_SIGNATURE_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(EVP_SIGNATURE *signature,void *data) , __reg("a2") void * data ) = "\tjsr\t-2016(a6)";
#define EVP_SIGNATURE_do_all_provided(libctx, fn, data) __EVP_SIGNATURE_do_all_provided(AmiSSLExtBase, (libctx), (fn), (data))

int __EVP_MD_names_do_all(__reg("a6") struct Library * , __reg("a0") const EVP_MD * md , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-2022(a6)";
#define EVP_MD_names_do_all(md, fn, data) __EVP_MD_names_do_all(AmiSSLExtBase, (md), (fn), (data))

int __EVP_CIPHER_names_do_all(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-2028(a6)";
#define EVP_CIPHER_names_do_all(cipher, fn, data) __EVP_CIPHER_names_do_all(AmiSSLExtBase, (cipher), (fn), (data))

int __EVP_MAC_names_do_all(__reg("a6") struct Library * , __reg("a0") const EVP_MAC * mac , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-2034(a6)";
#define EVP_MAC_names_do_all(mac, fn, data) __EVP_MAC_names_do_all(AmiSSLExtBase, (mac), (fn), (data))

int __EVP_KEYMGMT_names_do_all(__reg("a6") struct Library * , __reg("a0") const EVP_KEYMGMT * keymgmt , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-2040(a6)";
#define EVP_KEYMGMT_names_do_all(keymgmt, fn, data) __EVP_KEYMGMT_names_do_all(AmiSSLExtBase, (keymgmt), (fn), (data))

int __EVP_KEYEXCH_names_do_all(__reg("a6") struct Library * , __reg("a0") const EVP_KEYEXCH * keyexch , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-2046(a6)";
#define EVP_KEYEXCH_names_do_all(keyexch, fn, data) __EVP_KEYEXCH_names_do_all(AmiSSLExtBase, (keyexch), (fn), (data))

int __EVP_KDF_names_do_all(__reg("a6") struct Library * , __reg("a0") const EVP_KDF * kdf , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-2052(a6)";
#define EVP_KDF_names_do_all(kdf, fn, data) __EVP_KDF_names_do_all(AmiSSLExtBase, (kdf), (fn), (data))

int __EVP_SIGNATURE_names_do_all(__reg("a6") struct Library * , __reg("a0") const EVP_SIGNATURE * signature , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-2058(a6)";
#define EVP_SIGNATURE_names_do_all(signature, fn, data) __EVP_SIGNATURE_names_do_all(AmiSSLExtBase, (signature), (fn), (data))

char * __OSSL_CMP_CTX_snprint_PKIStatus(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx , __reg("a1") char * buf , __reg("d0") size_t bufsize ) = "\tjsr\t-2064(a6)";
#define OSSL_CMP_CTX_snprint_PKIStatus(ctx, buf, bufsize) __OSSL_CMP_CTX_snprint_PKIStatus(AmiSSLExtBase, (ctx), (buf), (bufsize))

ASN1_OCTET_STRING * __OSSL_CMP_HDR_get0_transactionID(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_PKIHEADER * hdr ) = "\tjsr\t-2070(a6)";
#define OSSL_CMP_HDR_get0_transactionID(hdr) __OSSL_CMP_HDR_get0_transactionID(AmiSSLExtBase, (hdr))

ASN1_OCTET_STRING * __OSSL_CMP_HDR_get0_recipNonce(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_PKIHEADER * hdr ) = "\tjsr\t-2076(a6)";
#define OSSL_CMP_HDR_get0_recipNonce(hdr) __OSSL_CMP_HDR_get0_recipNonce(AmiSSLExtBase, (hdr))

X509_LOOKUP_METHOD * __X509_LOOKUP_store(__reg("a6") struct Library * ) = "\tjsr\t-2082(a6)";
#define X509_LOOKUP_store() __X509_LOOKUP_store(AmiSSLExtBase)

int __X509_add_cert(__reg("a6") struct Library * , __reg("a0") STACK_OF(X509) * sk , __reg("a1") X509 * cert , __reg("d0") int flags ) = "\tjsr\t-2088(a6)";
#define X509_add_cert(sk, cert, flags) __X509_add_cert(AmiSSLExtBase, (sk), (cert), (flags))

int __X509_add_certs(__reg("a6") struct Library * , __reg("a0") STACK_OF(X509) * sk , __reg("a1") STACK_OF(X509) * certs , __reg("d0") int flags ) = "\tjsr\t-2094(a6)";
#define X509_add_certs(sk, certs, flags) __X509_add_certs(AmiSSLExtBase, (sk), (certs), (flags))

int __X509_STORE_load_file(__reg("a6") struct Library * , __reg("a0") X509_STORE * ctx , __reg("a1") const char * file ) = "\tjsr\t-2100(a6)";
#define X509_STORE_load_file(ctx, file) __X509_STORE_load_file(AmiSSLExtBase, (ctx), (file))

int __X509_STORE_load_path(__reg("a6") struct Library * , __reg("a0") X509_STORE * ctx , __reg("a1") const char * path ) = "\tjsr\t-2106(a6)";
#define X509_STORE_load_path(ctx, path) __X509_STORE_load_path(AmiSSLExtBase, (ctx), (path))

int __X509_STORE_load_store(__reg("a6") struct Library * , __reg("a0") X509_STORE * ctx , __reg("a1") const char * store ) = "\tjsr\t-2112(a6)";
#define X509_STORE_load_store(ctx, store) __X509_STORE_load_store(AmiSSLExtBase, (ctx), (store))

int __EVP_PKEY_fromdata(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") EVP_PKEY ** ppkey , __reg("d0") int selection , __reg("a2") OSSL_PARAM * params ) = "\tjsr\t-2118(a6)";
#define EVP_PKEY_fromdata(ctx, ppkey, selection, params) __EVP_PKEY_fromdata(AmiSSLExtBase, (ctx), (ppkey), (selection), (params))

void __EVP_ASYM_CIPHER_free(__reg("a6") struct Library * , __reg("a0") EVP_ASYM_CIPHER * cipher ) = "\tjsr\t-2124(a6)";
#define EVP_ASYM_CIPHER_free(cipher) __EVP_ASYM_CIPHER_free(AmiSSLExtBase, (cipher))

int __EVP_ASYM_CIPHER_up_ref(__reg("a6") struct Library * , __reg("a0") EVP_ASYM_CIPHER * cipher ) = "\tjsr\t-2130(a6)";
#define EVP_ASYM_CIPHER_up_ref(cipher) __EVP_ASYM_CIPHER_up_ref(AmiSSLExtBase, (cipher))

OSSL_PROVIDER * __EVP_ASYM_CIPHER_get0_provider(__reg("a6") struct Library * , __reg("a0") const EVP_ASYM_CIPHER * cipher ) = "\tjsr\t-2136(a6)";
#define EVP_ASYM_CIPHER_get0_provider(cipher) __EVP_ASYM_CIPHER_get0_provider(AmiSSLExtBase, (cipher))

EVP_ASYM_CIPHER * __EVP_ASYM_CIPHER_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * algorithm , __reg("a2") const char * properties ) = "\tjsr\t-2142(a6)";
#define EVP_ASYM_CIPHER_fetch(ctx, algorithm, properties) __EVP_ASYM_CIPHER_fetch(AmiSSLExtBase, (ctx), (algorithm), (properties))

int __EVP_ASYM_CIPHER_is_a(__reg("a6") struct Library * , __reg("a0") const EVP_ASYM_CIPHER * cipher , __reg("a1") const char * name ) = "\tjsr\t-2148(a6)";
#define EVP_ASYM_CIPHER_is_a(cipher, name) __EVP_ASYM_CIPHER_is_a(AmiSSLExtBase, (cipher), (name))

void __EVP_ASYM_CIPHER_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(EVP_ASYM_CIPHER *cipher,void *arg) , __reg("a2") void * arg ) = "\tjsr\t-2154(a6)";
#define EVP_ASYM_CIPHER_do_all_provided(libctx, fn, arg) __EVP_ASYM_CIPHER_do_all_provided(AmiSSLExtBase, (libctx), (fn), (arg))

int __EVP_ASYM_CIPHER_names_do_all(__reg("a6") struct Library * , __reg("a0") const EVP_ASYM_CIPHER * cipher , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-2160(a6)";
#define EVP_ASYM_CIPHER_names_do_all(cipher, fn, data) __EVP_ASYM_CIPHER_names_do_all(AmiSSLExtBase, (cipher), (fn), (data))

int __EVP_PKEY_CTX_set_rsa_padding(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int pad_mode ) = "\tjsr\t-2166(a6)";
#define EVP_PKEY_CTX_set_rsa_padding(ctx, pad_mode) __EVP_PKEY_CTX_set_rsa_padding(AmiSSLExtBase, (ctx), (pad_mode))

int __EVP_PKEY_CTX_get_rsa_padding(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") int * pad_mode ) = "\tjsr\t-2172(a6)";
#define EVP_PKEY_CTX_get_rsa_padding(ctx, pad_mode) __EVP_PKEY_CTX_get_rsa_padding(AmiSSLExtBase, (ctx), (pad_mode))

int __EVP_PKEY_CTX_set_rsa_mgf1_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD * md ) = "\tjsr\t-2178(a6)";
#define EVP_PKEY_CTX_set_rsa_mgf1_md(ctx, md) __EVP_PKEY_CTX_set_rsa_mgf1_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_set_rsa_mgf1_md_name(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const char * mdname , __reg("a2") const char * mdprops ) = "\tjsr\t-2184(a6)";
#define EVP_PKEY_CTX_set_rsa_mgf1_md_name(ctx, mdname, mdprops) __EVP_PKEY_CTX_set_rsa_mgf1_md_name(AmiSSLExtBase, (ctx), (mdname), (mdprops))

int __EVP_PKEY_CTX_get_rsa_mgf1_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD ** md ) = "\tjsr\t-2190(a6)";
#define EVP_PKEY_CTX_get_rsa_mgf1_md(ctx, md) __EVP_PKEY_CTX_get_rsa_mgf1_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_set_rsa_oaep_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD * md ) = "\tjsr\t-2196(a6)";
#define EVP_PKEY_CTX_set_rsa_oaep_md(ctx, md) __EVP_PKEY_CTX_set_rsa_oaep_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_set_rsa_oaep_md_name(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const char * mdname , __reg("a2") const char * mdprops ) = "\tjsr\t-2202(a6)";
#define EVP_PKEY_CTX_set_rsa_oaep_md_name(ctx, mdname, mdprops) __EVP_PKEY_CTX_set_rsa_oaep_md_name(AmiSSLExtBase, (ctx), (mdname), (mdprops))

int __EVP_PKEY_CTX_get_rsa_oaep_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD ** md ) = "\tjsr\t-2208(a6)";
#define EVP_PKEY_CTX_get_rsa_oaep_md(ctx, md) __EVP_PKEY_CTX_get_rsa_oaep_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_set0_rsa_oaep_label(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") void * label , __reg("d0") int llen ) = "\tjsr\t-2214(a6)";
#define EVP_PKEY_CTX_set0_rsa_oaep_label(ctx, label, llen) __EVP_PKEY_CTX_set0_rsa_oaep_label(AmiSSLExtBase, (ctx), (label), (llen))

int __EVP_PKEY_CTX_get0_rsa_oaep_label(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") unsigned char ** label ) = "\tjsr\t-2220(a6)";
#define EVP_PKEY_CTX_get0_rsa_oaep_label(ctx, label) __EVP_PKEY_CTX_get0_rsa_oaep_label(AmiSSLExtBase, (ctx), (label))

int __EVP_PKEY_CTX_get_rsa_mgf1_md_name(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") char * name , __reg("d0") size_t namelen ) = "\tjsr\t-2226(a6)";
#define EVP_PKEY_CTX_get_rsa_mgf1_md_name(ctx, name, namelen) __EVP_PKEY_CTX_get_rsa_mgf1_md_name(AmiSSLExtBase, (ctx), (name), (namelen))

int __EVP_PKEY_CTX_get_rsa_oaep_md_name(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") char * name , __reg("d0") size_t namelen ) = "\tjsr\t-2232(a6)";
#define EVP_PKEY_CTX_get_rsa_oaep_md_name(ctx, name, namelen) __EVP_PKEY_CTX_get_rsa_oaep_md_name(AmiSSLExtBase, (ctx), (name), (namelen))

int __OSSL_ENCODER_up_ref(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER * encoder ) = "\tjsr\t-2238(a6)";
#define OSSL_ENCODER_up_ref(encoder) __OSSL_ENCODER_up_ref(AmiSSLExtBase, (encoder))

void __OSSL_ENCODER_free(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER * encoder ) = "\tjsr\t-2244(a6)";
#define OSSL_ENCODER_free(encoder) __OSSL_ENCODER_free(AmiSSLExtBase, (encoder))

OSSL_ENCODER * __OSSL_ENCODER_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * name , __reg("a2") const char * properties ) = "\tjsr\t-2250(a6)";
#define OSSL_ENCODER_fetch(libctx, name, properties) __OSSL_ENCODER_fetch(AmiSSLExtBase, (libctx), (name), (properties))

int __OSSL_ENCODER_is_a(__reg("a6") struct Library * , __reg("a0") const OSSL_ENCODER * encoder , __reg("a1") const char * name ) = "\tjsr\t-2256(a6)";
#define OSSL_ENCODER_is_a(encoder, name) __OSSL_ENCODER_is_a(AmiSSLExtBase, (encoder), (name))

const OSSL_PROVIDER * __OSSL_ENCODER_get0_provider(__reg("a6") struct Library * , __reg("a0") const OSSL_ENCODER * encoder ) = "\tjsr\t-2262(a6)";
#define OSSL_ENCODER_get0_provider(encoder) __OSSL_ENCODER_get0_provider(AmiSSLExtBase, (encoder))

void __OSSL_ENCODER_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(OSSL_ENCODER *encoder,void *arg) , __reg("a2") void * arg ) = "\tjsr\t-2268(a6)";
#define OSSL_ENCODER_do_all_provided(libctx, fn, arg) __OSSL_ENCODER_do_all_provided(AmiSSLExtBase, (libctx), (fn), (arg))

int __OSSL_ENCODER_names_do_all(__reg("a6") struct Library * , __reg("a0") const OSSL_ENCODER * encoder , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-2274(a6)";
#define OSSL_ENCODER_names_do_all(encoder, fn, data) __OSSL_ENCODER_names_do_all(AmiSSLExtBase, (encoder), (fn), (data))

const OSSL_PARAM * __OSSL_ENCODER_settable_ctx_params(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER * encoder ) = "\tjsr\t-2280(a6)";
#define OSSL_ENCODER_settable_ctx_params(encoder) __OSSL_ENCODER_settable_ctx_params(AmiSSLExtBase, (encoder))

OSSL_ENCODER_CTX * __OSSL_ENCODER_CTX_new(__reg("a6") struct Library * ) = "\tjsr\t-2286(a6)";
#define OSSL_ENCODER_CTX_new() __OSSL_ENCODER_CTX_new(AmiSSLExtBase)

int __OSSL_ENCODER_CTX_set_params(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-2292(a6)";
#define OSSL_ENCODER_CTX_set_params(ctx, params) __OSSL_ENCODER_CTX_set_params(AmiSSLExtBase, (ctx), (params))

void __OSSL_ENCODER_CTX_free(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx ) = "\tjsr\t-2298(a6)";
#define OSSL_ENCODER_CTX_free(ctx) __OSSL_ENCODER_CTX_free(AmiSSLExtBase, (ctx))

const char * __OSSL_ENCODER_get0_properties(__reg("a6") struct Library * , __reg("a0") const OSSL_ENCODER * encoder ) = "\tjsr\t-2304(a6)";
#define OSSL_ENCODER_get0_properties(encoder) __OSSL_ENCODER_get0_properties(AmiSSLExtBase, (encoder))

int __OSSL_ENCODER_to_bio(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") BIO * out ) = "\tjsr\t-2310(a6)";
#define OSSL_ENCODER_to_bio(ctx, out) __OSSL_ENCODER_to_bio(AmiSSLExtBase, (ctx), (out))

OSSL_ENCODER_CTX * __OSSL_ENCODER_CTX_new_for_pkey(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey , __reg("d0") int selection , __reg("a1") const char * output_type , __reg("a2") const char * output_struct , __reg("a3") const char * propquery ) = "\tjsr\t-2316(a6)";
#define OSSL_ENCODER_CTX_new_for_pkey(pkey, selection, output_type, output_struct, propquery) __OSSL_ENCODER_CTX_new_for_pkey(AmiSSLExtBase, (pkey), (selection), (output_type), (output_struct), (propquery))

int __OSSL_ENCODER_CTX_set_cipher(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") const char * cipher_name , __reg("a2") const char * propquery ) = "\tjsr\t-2322(a6)";
#define OSSL_ENCODER_CTX_set_cipher(ctx, cipher_name, propquery) __OSSL_ENCODER_CTX_set_cipher(AmiSSLExtBase, (ctx), (cipher_name), (propquery))

int __OSSL_ENCODER_CTX_set_passphrase(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") const unsigned char * kstr , __reg("d0") size_t klen ) = "\tjsr\t-2328(a6)";
#define OSSL_ENCODER_CTX_set_passphrase(ctx, kstr, klen) __OSSL_ENCODER_CTX_set_passphrase(AmiSSLExtBase, (ctx), (kstr), (klen))

int __OSSL_ENCODER_CTX_set_pem_password_cb(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") pem_password_cb * cb , __reg("a2") void * cbarg ) = "\tjsr\t-2334(a6)";
#define OSSL_ENCODER_CTX_set_pem_password_cb(ctx, cb, cbarg) __OSSL_ENCODER_CTX_set_pem_password_cb(AmiSSLExtBase, (ctx), (cb), (cbarg))

int __OSSL_ENCODER_CTX_set_passphrase_ui(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") const UI_METHOD * ui_method , __reg("a2") void * ui_data ) = "\tjsr\t-2340(a6)";
#define OSSL_ENCODER_CTX_set_passphrase_ui(ctx, ui_method, ui_data) __OSSL_ENCODER_CTX_set_passphrase_ui(AmiSSLExtBase, (ctx), (ui_method), (ui_data))

X509_PUBKEY * __PEM_read_bio_X509_PUBKEY(__reg("a6") struct Library * , __reg("a0") BIO * out , __reg("a1") X509_PUBKEY ** x , __reg("a2") pem_password_cb * cb , __reg("a3") void * u ) = "\tjsr\t-2346(a6)";
#define PEM_read_bio_X509_PUBKEY(out, x, cb, u) __PEM_read_bio_X509_PUBKEY(AmiSSLExtBase, (out), (x), (cb), (u))

int __PEM_write_bio_X509_PUBKEY(__reg("a6") struct Library * , __reg("a0") BIO * out , __reg("a1") const X509_PUBKEY * x ) = "\tjsr\t-2352(a6)";
#define PEM_write_bio_X509_PUBKEY(out, x) __PEM_write_bio_X509_PUBKEY(AmiSSLExtBase, (out), (x))

X509_PUBKEY * __d2i_X509_PUBKEY_bio(__reg("a6") struct Library * , __reg("a0") BIO * bp , __reg("a1") X509_PUBKEY ** xpk ) = "\tjsr\t-2358(a6)";
#define d2i_X509_PUBKEY_bio(bp, xpk) __d2i_X509_PUBKEY_bio(AmiSSLExtBase, (bp), (xpk))

int __i2d_X509_PUBKEY_bio(__reg("a6") struct Library * , __reg("a0") BIO * bp , __reg("a1") const X509_PUBKEY * xpk ) = "\tjsr\t-2364(a6)";
#define i2d_X509_PUBKEY_bio(bp, xpk) __i2d_X509_PUBKEY_bio(AmiSSLExtBase, (bp), (xpk))

int __X509_cmp_timeframe(__reg("a6") struct Library * , __reg("a0") const X509_VERIFY_PARAM * vpm , __reg("a1") const ASN1_TIME * start , __reg("a2") const ASN1_TIME * end ) = "\tjsr\t-2370(a6)";
#define X509_cmp_timeframe(vpm, start, end) __X509_cmp_timeframe(AmiSSLExtBase, (vpm), (start), (end))

OSSL_CMP_PKIHEADER * __OSSL_CMP_MSG_get0_header(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_MSG * msg ) = "\tjsr\t-2376(a6)";
#define OSSL_CMP_MSG_get0_header(msg) __OSSL_CMP_MSG_get0_header(AmiSSLExtBase, (msg))

int __OSSL_CMP_MSG_get_bodytype(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_MSG * msg ) = "\tjsr\t-2382(a6)";
#define OSSL_CMP_MSG_get_bodytype(msg) __OSSL_CMP_MSG_get_bodytype(AmiSSLExtBase, (msg))

int __OSSL_CMP_MSG_update_transactionID(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") OSSL_CMP_MSG * msg ) = "\tjsr\t-2388(a6)";
#define OSSL_CMP_MSG_update_transactionID(ctx, msg) __OSSL_CMP_MSG_update_transactionID(AmiSSLExtBase, (ctx), (msg))

OSSL_CRMF_MSG * __OSSL_CMP_CTX_setup_CRM(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("d0") int for_KUR , __reg("d1") int rid ) = "\tjsr\t-2394(a6)";
#define OSSL_CMP_CTX_setup_CRM(ctx, for_KUR, rid) __OSSL_CMP_CTX_setup_CRM(AmiSSLExtBase, (ctx), (for_KUR), (rid))

const BIO_METHOD * __BIO_f_prefix(__reg("a6") struct Library * ) = "\tjsr\t-2400(a6)";
#define BIO_f_prefix() __BIO_f_prefix(AmiSSLExtBase)

EVP_PKEY_CTX * __EVP_PKEY_CTX_new_from_name(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * name , __reg("a2") const char * propquery ) = "\tjsr\t-2406(a6)";
#define EVP_PKEY_CTX_new_from_name(libctx, name, propquery) __EVP_PKEY_CTX_new_from_name(AmiSSLExtBase, (libctx), (name), (propquery))

EVP_PKEY_CTX * __EVP_PKEY_CTX_new_from_pkey(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") EVP_PKEY * pkey , __reg("a2") const char * propquery ) = "\tjsr\t-2412(a6)";
#define EVP_PKEY_CTX_new_from_pkey(libctx, pkey, propquery) __EVP_PKEY_CTX_new_from_pkey(AmiSSLExtBase, (libctx), (pkey), (propquery))

void __OSSL_SELF_TEST_set_callback(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") OSSL_CALLBACK * cb , __reg("a2") void * cbarg ) = "\tjsr\t-2418(a6)";
#define OSSL_SELF_TEST_set_callback(libctx, cb, cbarg) __OSSL_SELF_TEST_set_callback(AmiSSLExtBase, (libctx), (cb), (cbarg))

void __OSSL_SELF_TEST_get_callback(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") OSSL_CALLBACK ** cb , __reg("a2") void ** cbarg ) = "\tjsr\t-2424(a6)";
#define OSSL_SELF_TEST_get_callback(libctx, cb, cbarg) __OSSL_SELF_TEST_get_callback(AmiSSLExtBase, (libctx), (cb), (cbarg))

ASN1_TIME * __ASN1_TIME_dup(__reg("a6") struct Library * , __reg("a0") const ASN1_TIME * a ) = "\tjsr\t-2430(a6)";
#define ASN1_TIME_dup(a) __ASN1_TIME_dup(AmiSSLExtBase, (a))

ASN1_UTCTIME * __ASN1_UTCTIME_dup(__reg("a6") struct Library * , __reg("a0") const ASN1_UTCTIME * a ) = "\tjsr\t-2436(a6)";
#define ASN1_UTCTIME_dup(a) __ASN1_UTCTIME_dup(AmiSSLExtBase, (a))

ASN1_GENERALIZEDTIME * __ASN1_GENERALIZEDTIME_dup(__reg("a6") struct Library * , __reg("a0") const ASN1_GENERALIZEDTIME * a ) = "\tjsr\t-2442(a6)";
#define ASN1_GENERALIZEDTIME_dup(a) __ASN1_GENERALIZEDTIME_dup(AmiSSLExtBase, (a))

int __RAND_priv_bytes_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") unsigned char * buf , __reg("d0") size_t num , __reg("d1") unsigned int strength ) = "\tjsr\t-2448(a6)";
#define RAND_priv_bytes_ex(ctx, buf, num, strength) __RAND_priv_bytes_ex(AmiSSLExtBase, (ctx), (buf), (num), (strength))

int __RAND_bytes_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") unsigned char * buf , __reg("d0") size_t num , __reg("d1") unsigned int strength ) = "\tjsr\t-2454(a6)";
#define RAND_bytes_ex(ctx, buf, num, strength) __RAND_bytes_ex(AmiSSLExtBase, (ctx), (buf), (num), (strength))

int __EVP_PKEY_get_default_digest_name(__reg("a6") struct Library * , __reg("a0") EVP_PKEY * pkey , __reg("a1") char * mdname , __reg("d0") size_t mdname_sz ) = "\tjsr\t-2460(a6)";
#define EVP_PKEY_get_default_digest_name(pkey, mdname, mdname_sz) __EVP_PKEY_get_default_digest_name(AmiSSLExtBase, (pkey), (mdname), (mdname_sz))

int __CMS_decrypt_set1_pkey_and_peer(__reg("a6") struct Library * , __reg("a0") CMS_ContentInfo * cms , __reg("a1") EVP_PKEY * pk , __reg("a2") X509 * cert , __reg("a3") X509 * peer ) = "\tjsr\t-2466(a6)";
#define CMS_decrypt_set1_pkey_and_peer(cms, pk, cert, peer) __CMS_decrypt_set1_pkey_and_peer(AmiSSLExtBase, (cms), (pk), (cert), (peer))

CMS_RecipientInfo * __CMS_add1_recipient(__reg("a6") struct Library * , __reg("a0") CMS_ContentInfo * cms , __reg("a1") X509 * recip , __reg("a2") EVP_PKEY * originatorPrivKey , __reg("a3") X509 * originator , __reg("d0") unsigned int flags ) = "\tjsr\t-2472(a6)";
#define CMS_add1_recipient(cms, recip, originatorPrivKey, originator, flags) __CMS_add1_recipient(AmiSSLExtBase, (cms), (recip), (originatorPrivKey), (originator), (flags))

int __CMS_RecipientInfo_kari_set0_pkey_and_peer(__reg("a6") struct Library * , __reg("a0") CMS_RecipientInfo * ri , __reg("a1") EVP_PKEY * pk , __reg("a2") X509 * peer ) = "\tjsr\t-2478(a6)";
#define CMS_RecipientInfo_kari_set0_pkey_and_peer(ri, pk, peer) __CMS_RecipientInfo_kari_set0_pkey_and_peer(AmiSSLExtBase, (ri), (pk), (peer))

int __PKCS8_pkey_add1_attr(__reg("a6") struct Library * , __reg("a0") PKCS8_PRIV_KEY_INFO * p8 , __reg("a1") X509_ATTRIBUTE * attr ) = "\tjsr\t-2484(a6)";
#define PKCS8_pkey_add1_attr(p8, attr) __PKCS8_pkey_add1_attr(AmiSSLExtBase, (p8), (attr))

int __PKCS8_pkey_add1_attr_by_OBJ(__reg("a6") struct Library * , __reg("a0") PKCS8_PRIV_KEY_INFO * p8 , __reg("a1") const ASN1_OBJECT * obj , __reg("d0") int type , __reg("a2") const unsigned char * bytes , __reg("d1") int len ) = "\tjsr\t-2490(a6)";
#define PKCS8_pkey_add1_attr_by_OBJ(p8, obj, type, bytes, len) __PKCS8_pkey_add1_attr_by_OBJ(AmiSSLExtBase, (p8), (obj), (type), (bytes), (len))

int __EVP_PKEY_private_check(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx ) = "\tjsr\t-2496(a6)";
#define EVP_PKEY_private_check(ctx) __EVP_PKEY_private_check(AmiSSLExtBase, (ctx))

int __EVP_PKEY_pairwise_check(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx ) = "\tjsr\t-2502(a6)";
#define EVP_PKEY_pairwise_check(ctx) __EVP_PKEY_pairwise_check(AmiSSLExtBase, (ctx))

int __ASN1_item_verify_ctx(__reg("a6") struct Library * , __reg("a0") const ASN1_ITEM * it , __reg("a1") const X509_ALGOR * alg , __reg("a2") const ASN1_BIT_STRING * signature , __reg("a3") const void * data , __reg("d0") EVP_MD_CTX * ctx ) = "\tjsr\t-2508(a6)";
#define ASN1_item_verify_ctx(it, alg, signature, data, ctx) __ASN1_item_verify_ctx(AmiSSLExtBase, (it), (alg), (signature), (data), (ctx))

int __ASN1_item_sign_ex(__reg("a6") struct Library * , __reg("a0") const ASN1_ITEM * it , __reg("a1") X509_ALGOR * algor1 , __reg("a2") X509_ALGOR * algor2 , __reg("a3") ASN1_BIT_STRING * signature , __reg("d0") const void * data , __reg("d1") const ASN1_OCTET_STRING * id , __reg("d2") EVP_PKEY * pkey , __reg("d3") const EVP_MD * md , __reg("d4") OSSL_LIB_CTX * libctx , __reg("d5") const char * propq ) = "\tjsr\t-2514(a6)";
#define ASN1_item_sign_ex(it, algor1, algor2, signature, data, id, pkey, md, libctx, propq) __ASN1_item_sign_ex(AmiSSLExtBase, (it), (algor1), (algor2), (signature), (data), (id), (pkey), (md), (libctx), (propq))

int __ASN1_item_verify_ex(__reg("a6") struct Library * , __reg("a0") const ASN1_ITEM * it , __reg("a1") const X509_ALGOR * alg , __reg("a2") const ASN1_BIT_STRING * signature , __reg("a3") const void * data , __reg("d0") const ASN1_OCTET_STRING * id , __reg("d1") EVP_PKEY * pkey , __reg("d2") OSSL_LIB_CTX * libctx , __reg("d3") const char * propq ) = "\tjsr\t-2520(a6)";
#define ASN1_item_verify_ex(it, alg, signature, data, id, pkey, libctx, propq) __ASN1_item_verify_ex(AmiSSLExtBase, (it), (alg), (signature), (data), (id), (pkey), (libctx), (propq))

int __BIO_socket_wait(__reg("a6") struct Library * , __reg("d0") int fd , __reg("d1") int for_read , __reg("d2") time_t max_time ) = "\tjsr\t-2526(a6)";
#define BIO_socket_wait(fd, for_read, max_time) __BIO_socket_wait(AmiSSLExtBase, (fd), (for_read), (max_time))

int __BIO_wait(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("d0") time_t max_time , __reg("d1") unsigned int nap_milliseconds ) = "\tjsr\t-2532(a6)";
#define BIO_wait(bio, max_time, nap_milliseconds) __BIO_wait(AmiSSLExtBase, (bio), (max_time), (nap_milliseconds))

int __BIO_do_connect_retry(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("d0") int timeout , __reg("d1") int nap_milliseconds ) = "\tjsr\t-2538(a6)";
#define BIO_do_connect_retry(bio, timeout, nap_milliseconds) __BIO_do_connect_retry(AmiSSLExtBase, (bio), (timeout), (nap_milliseconds))

int __OSSL_parse_url(__reg("a6") struct Library * , __reg("a0") const char * url , __reg("a1") char ** pscheme , __reg("a2") char ** puser , __reg("a3") char ** phost , __reg("d0") char ** pport , __reg("d1") int * pport_num , __reg("d2") char ** ppath , __reg("d3") char ** pquery , __reg("d4") char ** pfrag ) = "\tjsr\t-2544(a6)";
#define OSSL_parse_url(url, pscheme, puser, phost, pport, pport_num, ppath, pquery, pfrag) __OSSL_parse_url(AmiSSLExtBase, (url), (pscheme), (puser), (phost), (pport), (pport_num), (ppath), (pquery), (pfrag))

const char * __OSSL_HTTP_adapt_proxy(__reg("a6") struct Library * , __reg("a0") const char * proxy , __reg("a1") const char * no_proxy , __reg("a2") const char * server , __reg("d0") int use_ssl ) = "\tjsr\t-2550(a6)";
#define OSSL_HTTP_adapt_proxy(proxy, no_proxy, server, use_ssl) __OSSL_HTTP_adapt_proxy(AmiSSLExtBase, (proxy), (no_proxy), (server), (use_ssl))

size_t __OSSL_HTTP_REQ_CTX_get_resp_len(__reg("a6") struct Library * , __reg("a0") const OSSL_HTTP_REQ_CTX * rctx ) = "\tjsr\t-2556(a6)";
#define OSSL_HTTP_REQ_CTX_get_resp_len(rctx) __OSSL_HTTP_REQ_CTX_get_resp_len(AmiSSLExtBase, (rctx))

int __OSSL_HTTP_REQ_CTX_set_expected(__reg("a6") struct Library * , __reg("a0") OSSL_HTTP_REQ_CTX * rctx , __reg("a1") const char * content_type , __reg("d0") int asn1 , __reg("d1") int timeout , __reg("d2") int keep_alive ) = "\tjsr\t-2562(a6)";
#define OSSL_HTTP_REQ_CTX_set_expected(rctx, content_type, asn1, timeout, keep_alive) __OSSL_HTTP_REQ_CTX_set_expected(AmiSSLExtBase, (rctx), (content_type), (asn1), (timeout), (keep_alive))

int __OSSL_HTTP_is_alive(__reg("a6") struct Library * , __reg("a0") const OSSL_HTTP_REQ_CTX * rctx ) = "\tjsr\t-2568(a6)";
#define OSSL_HTTP_is_alive(rctx) __OSSL_HTTP_is_alive(AmiSSLExtBase, (rctx))

OSSL_HTTP_REQ_CTX * __OSSL_HTTP_open(__reg("a6") struct Library * , __reg("a0") const char * server , __reg("a1") const char * port , __reg("a2") const char * proxy , __reg("a3") const char * no_proxy , __reg("d0") int use_ssl , __reg("d1") BIO * bio , __reg("d2") BIO * rbio , __reg("d3") OSSL_HTTP_bio_cb_t bio_update_fn , __reg("d4") void * arg , __reg("d5") int buf_size , __reg("d6") int overall_timeout ) = "\tjsr\t-2574(a6)";
#define OSSL_HTTP_open(server, port, proxy, no_proxy, use_ssl, bio, rbio, bio_update_fn, arg, buf_size, overall_timeout) __OSSL_HTTP_open(AmiSSLExtBase, (server), (port), (proxy), (no_proxy), (use_ssl), (bio), (rbio), (bio_update_fn), (arg), (buf_size), (overall_timeout))

int __OSSL_HTTP_proxy_connect(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("a1") const char * server , __reg("a2") const char * port , __reg("a3") const char * proxyuser , __reg("d0") const char * proxypass , __reg("d1") int timeout , __reg("d2") BIO * bio_err , __reg("d3") const char * prog ) = "\tjsr\t-2580(a6)";
#define OSSL_HTTP_proxy_connect(bio, server, port, proxyuser, proxypass, timeout, bio_err, prog) __OSSL_HTTP_proxy_connect(AmiSSLExtBase, (bio), (server), (port), (proxyuser), (proxypass), (timeout), (bio_err), (prog))

int __OSSL_HTTP_set1_request(__reg("a6") struct Library * , __reg("a0") OSSL_HTTP_REQ_CTX * rctx , __reg("a1") const char * path , __reg("a2") const STACK_OF(CONF_VALUE) * headers , __reg("a3") const char * content_type , __reg("d0") BIO * req , __reg("d1") const char * expected_content_type , __reg("d2") int expect_asn1 , __reg("d3") size_t max_resp_len , __reg("d4") int timeout , __reg("d5") int keep_alive ) = "\tjsr\t-2586(a6)";
#define OSSL_HTTP_set1_request(rctx, path, headers, content_type, req, expected_content_type, expect_asn1, max_resp_len, timeout, keep_alive) __OSSL_HTTP_set1_request(AmiSSLExtBase, (rctx), (path), (headers), (content_type), (req), (expected_content_type), (expect_asn1), (max_resp_len), (timeout), (keep_alive))

BIO * __OSSL_HTTP_exchange(__reg("a6") struct Library * , __reg("a0") OSSL_HTTP_REQ_CTX * rctx , __reg("a1") char ** redirection_url ) = "\tjsr\t-2592(a6)";
#define OSSL_HTTP_exchange(rctx, redirection_url) __OSSL_HTTP_exchange(AmiSSLExtBase, (rctx), (redirection_url))

BIO * __OSSL_HTTP_get_amiga_1(__reg("a6") struct Library * , __reg("a0") const char * url , __reg("a1") const char * proxy , __reg("a2") const char * no_proxy , __reg("d1") BIO * bio , __reg("d2") BIO * rbio , __reg("a3") OSSL_HTTP_bio_cb_t bio_update_fn , __reg("d0") void * moreargs ) = "\tjsr\t-2598(a6)";
#define OSSL_HTTP_get_amiga_1(url, proxy, no_proxy, bio, rbio, bio_update_fn, moreargs) __OSSL_HTTP_get_amiga_1(AmiSSLExtBase, (url), (proxy), (no_proxy), (bio), (rbio), (bio_update_fn), (moreargs))

void * __OSSL_HTTP_get_amiga_2(__reg("a6") struct Library * , __reg("a0") void * arg , __reg("a1") int buf_size , __reg("a2") const STACK_OF(CONF_VALUE) * headers , __reg("a3") const char * expected_content_type , __reg("d0") int expect_asn1 , __reg("d1") size_t max_resp_len , __reg("d2") int timeout ) = "\tjsr\t-2604(a6)";
#define OSSL_HTTP_get_amiga_2(arg, buf_size, headers, expected_content_type, expect_asn1, max_resp_len, timeout) __OSSL_HTTP_get_amiga_2(AmiSSLExtBase, (arg), (buf_size), (headers), (expected_content_type), (expect_asn1), (max_resp_len), (timeout))

BIO * __OSSL_HTTP_transfer_amiga_1(__reg("a6") struct Library * , __reg("a0") OSSL_HTTP_REQ_CTX ** prctx , __reg("a1") const char * server , __reg("a2") const char * port , __reg("d1") const char * path , __reg("d2") int use_ssl , __reg("d3") const char * proxy , __reg("d4") const char * no_proxy , __reg("d5") BIO * bio , __reg("d6") BIO * rbio , __reg("a3") OSSL_HTTP_bio_cb_t bio_update_fn , __reg("d0") void * moreargs ) = "\tjsr\t-2610(a6)";
#define OSSL_HTTP_transfer_amiga_1(prctx, server, port, path, use_ssl, proxy, no_proxy, bio, rbio, bio_update_fn, moreargs) __OSSL_HTTP_transfer_amiga_1(AmiSSLExtBase, (prctx), (server), (port), (path), (use_ssl), (proxy), (no_proxy), (bio), (rbio), (bio_update_fn), (moreargs))

void * __OSSL_HTTP_transfer_amiga_2(__reg("a6") struct Library * , __reg("a0") void * arg , __reg("d0") int buf_size , __reg("a1") const STACK_OF(CONF_VALUE) * headers , __reg("a2") const char * content_type , __reg("a3") BIO * req , __reg("d1") const char * expected_content_type , __reg("d2") int expect_asn1 , __reg("d3") size_t max_resp_len , __reg("d4") int timeout , __reg("d5") int keep_alive ) = "\tjsr\t-2616(a6)";
#define OSSL_HTTP_transfer_amiga_2(arg, buf_size, headers, content_type, req, expected_content_type, expect_asn1, max_resp_len, timeout, keep_alive) __OSSL_HTTP_transfer_amiga_2(AmiSSLExtBase, (arg), (buf_size), (headers), (content_type), (req), (expected_content_type), (expect_asn1), (max_resp_len), (timeout), (keep_alive))

int __OSSL_HTTP_close(__reg("a6") struct Library * , __reg("a0") OSSL_HTTP_REQ_CTX * rctx , __reg("d0") int ok ) = "\tjsr\t-2622(a6)";
#define OSSL_HTTP_close(rctx, ok) __OSSL_HTTP_close(AmiSSLExtBase, (rctx), (ok))

BIO * __ASN1_item_i2d_mem_bio(__reg("a6") struct Library * , __reg("a0") const ASN1_ITEM * it , __reg("a1") const ASN1_VALUE * val ) = "\tjsr\t-2628(a6)";
#define ASN1_item_i2d_mem_bio(it, val) __ASN1_item_i2d_mem_bio(AmiSSLExtBase, (it), (val))

void __ERR_add_error_txt(__reg("a6") struct Library * , __reg("a0") const char * sepr , __reg("a1") const char * txt ) = "\tjsr\t-2634(a6)";
#define ERR_add_error_txt(sepr, txt) __ERR_add_error_txt(AmiSSLExtBase, (sepr), (txt))

void __ERR_add_error_mem_bio(__reg("a6") struct Library * , __reg("a0") const char * sep , __reg("a1") BIO * bio ) = "\tjsr\t-2640(a6)";
#define ERR_add_error_mem_bio(sep, bio) __ERR_add_error_mem_bio(AmiSSLExtBase, (sep), (bio))

int __X509_STORE_CTX_print_verify_cb(__reg("a6") struct Library * , __reg("d0") int ok , __reg("a0") X509_STORE_CTX * ctx ) = "\tjsr\t-2646(a6)";
#define X509_STORE_CTX_print_verify_cb(ok, ctx) __X509_STORE_CTX_print_verify_cb(AmiSSLExtBase, (ok), (ctx))

STACK_OF(X509) * __X509_STORE_get1_all_certs(__reg("a6") struct Library * , __reg("a0") X509_STORE * st ) = "\tjsr\t-2652(a6)";
#define X509_STORE_get1_all_certs(st) __X509_STORE_get1_all_certs(AmiSSLExtBase, (st))

int __OSSL_CMP_validate_msg(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const OSSL_CMP_MSG * msg ) = "\tjsr\t-2658(a6)";
#define OSSL_CMP_validate_msg(ctx, msg) __OSSL_CMP_validate_msg(AmiSSLExtBase, (ctx), (msg))

int __OSSL_CMP_validate_cert_path(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_CTX * ctx , __reg("a1") X509_STORE * trusted_store , __reg("a2") X509 * cert ) = "\tjsr\t-2664(a6)";
#define OSSL_CMP_validate_cert_path(ctx, trusted_store, cert) __OSSL_CMP_validate_cert_path(AmiSSLExtBase, (ctx), (trusted_store), (cert))

int __EVP_PKEY_CTX_set_ecdh_cofactor_mode(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int cofactor_mode ) = "\tjsr\t-2670(a6)";
#define EVP_PKEY_CTX_set_ecdh_cofactor_mode(ctx, cofactor_mode) __EVP_PKEY_CTX_set_ecdh_cofactor_mode(AmiSSLExtBase, (ctx), (cofactor_mode))

int __EVP_PKEY_CTX_get_ecdh_cofactor_mode(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx ) = "\tjsr\t-2676(a6)";
#define EVP_PKEY_CTX_get_ecdh_cofactor_mode(ctx) __EVP_PKEY_CTX_get_ecdh_cofactor_mode(AmiSSLExtBase, (ctx))

int __EVP_PKEY_CTX_set_ecdh_kdf_type(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int kdf ) = "\tjsr\t-2682(a6)";
#define EVP_PKEY_CTX_set_ecdh_kdf_type(ctx, kdf) __EVP_PKEY_CTX_set_ecdh_kdf_type(AmiSSLExtBase, (ctx), (kdf))

int __EVP_PKEY_CTX_get_ecdh_kdf_type(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx ) = "\tjsr\t-2688(a6)";
#define EVP_PKEY_CTX_get_ecdh_kdf_type(ctx) __EVP_PKEY_CTX_get_ecdh_kdf_type(AmiSSLExtBase, (ctx))

int __EVP_PKEY_CTX_set_ecdh_kdf_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD * md ) = "\tjsr\t-2694(a6)";
#define EVP_PKEY_CTX_set_ecdh_kdf_md(ctx, md) __EVP_PKEY_CTX_set_ecdh_kdf_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_get_ecdh_kdf_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD ** md ) = "\tjsr\t-2700(a6)";
#define EVP_PKEY_CTX_get_ecdh_kdf_md(ctx, md) __EVP_PKEY_CTX_get_ecdh_kdf_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_set_ecdh_kdf_outlen(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int len ) = "\tjsr\t-2706(a6)";
#define EVP_PKEY_CTX_set_ecdh_kdf_outlen(ctx, len) __EVP_PKEY_CTX_set_ecdh_kdf_outlen(AmiSSLExtBase, (ctx), (len))

int __EVP_PKEY_CTX_get_ecdh_kdf_outlen(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") int * len ) = "\tjsr\t-2712(a6)";
#define EVP_PKEY_CTX_get_ecdh_kdf_outlen(ctx, len) __EVP_PKEY_CTX_get_ecdh_kdf_outlen(AmiSSLExtBase, (ctx), (len))

int __EVP_PKEY_CTX_set0_ecdh_kdf_ukm(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") unsigned char * ukm , __reg("d0") int len ) = "\tjsr\t-2718(a6)";
#define EVP_PKEY_CTX_set0_ecdh_kdf_ukm(ctx, ukm, len) __EVP_PKEY_CTX_set0_ecdh_kdf_ukm(AmiSSLExtBase, (ctx), (ukm), (len))

int __EVP_PKEY_CTX_get0_ecdh_kdf_ukm(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") unsigned char ** ukm ) = "\tjsr\t-2724(a6)";
#define EVP_PKEY_CTX_get0_ecdh_kdf_ukm(ctx, ukm) __EVP_PKEY_CTX_get0_ecdh_kdf_ukm(AmiSSLExtBase, (ctx), (ukm))

int __EVP_PKEY_CTX_set_rsa_pss_saltlen(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int saltlen ) = "\tjsr\t-2730(a6)";
#define EVP_PKEY_CTX_set_rsa_pss_saltlen(ctx, saltlen) __EVP_PKEY_CTX_set_rsa_pss_saltlen(AmiSSLExtBase, (ctx), (saltlen))

int __EVP_PKEY_CTX_get_rsa_pss_saltlen(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") int * saltlen ) = "\tjsr\t-2736(a6)";
#define EVP_PKEY_CTX_get_rsa_pss_saltlen(ctx, saltlen) __EVP_PKEY_CTX_get_rsa_pss_saltlen(AmiSSLExtBase, (ctx), (saltlen))

ISSUER_SIGN_TOOL * __d2i_ISSUER_SIGN_TOOL(__reg("a6") struct Library * , __reg("a0") ISSUER_SIGN_TOOL ** a , __reg("a1") const unsigned char ** in , __reg("d0") long len ) = "\tjsr\t-2742(a6)";
#define d2i_ISSUER_SIGN_TOOL(a, in, len) __d2i_ISSUER_SIGN_TOOL(AmiSSLExtBase, (a), (in), (len))

int __i2d_ISSUER_SIGN_TOOL(__reg("a6") struct Library * , __reg("a0") const ISSUER_SIGN_TOOL * a , __reg("a1") unsigned char ** out ) = "\tjsr\t-2748(a6)";
#define i2d_ISSUER_SIGN_TOOL(a, out) __i2d_ISSUER_SIGN_TOOL(AmiSSLExtBase, (a), (out))

void __ISSUER_SIGN_TOOL_free(__reg("a6") struct Library * , __reg("a0") ISSUER_SIGN_TOOL * a ) = "\tjsr\t-2754(a6)";
#define ISSUER_SIGN_TOOL_free(a) __ISSUER_SIGN_TOOL_free(AmiSSLExtBase, (a))

ISSUER_SIGN_TOOL * __ISSUER_SIGN_TOOL_new(__reg("a6") struct Library * ) = "\tjsr\t-2760(a6)";
#define ISSUER_SIGN_TOOL_new() __ISSUER_SIGN_TOOL_new(AmiSSLExtBase)

const ASN1_ITEM * __ISSUER_SIGN_TOOL_it(__reg("a6") struct Library * ) = "\tjsr\t-2766(a6)";
#define ISSUER_SIGN_TOOL_it() __ISSUER_SIGN_TOOL_it(AmiSSLExtBase)

OSSL_SELF_TEST * __OSSL_SELF_TEST_new(__reg("a6") struct Library * , __reg("a0") OSSL_CALLBACK * cb , __reg("a1") void * cbarg ) = "\tjsr\t-2772(a6)";
#define OSSL_SELF_TEST_new(cb, cbarg) __OSSL_SELF_TEST_new(AmiSSLExtBase, (cb), (cbarg))

void __OSSL_SELF_TEST_free(__reg("a6") struct Library * , __reg("a0") OSSL_SELF_TEST * st ) = "\tjsr\t-2778(a6)";
#define OSSL_SELF_TEST_free(st) __OSSL_SELF_TEST_free(AmiSSLExtBase, (st))

void __OSSL_SELF_TEST_onbegin(__reg("a6") struct Library * , __reg("a0") OSSL_SELF_TEST * st , __reg("a1") const char * type , __reg("a2") const char * desc ) = "\tjsr\t-2784(a6)";
#define OSSL_SELF_TEST_onbegin(st, type, desc) __OSSL_SELF_TEST_onbegin(AmiSSLExtBase, (st), (type), (desc))

int __OSSL_SELF_TEST_oncorrupt_byte(__reg("a6") struct Library * , __reg("a0") OSSL_SELF_TEST * st , __reg("a1") unsigned char * bytes ) = "\tjsr\t-2790(a6)";
#define OSSL_SELF_TEST_oncorrupt_byte(st, bytes) __OSSL_SELF_TEST_oncorrupt_byte(AmiSSLExtBase, (st), (bytes))

void __OSSL_SELF_TEST_onend(__reg("a6") struct Library * , __reg("a0") OSSL_SELF_TEST * st , __reg("d0") int ret ) = "\tjsr\t-2796(a6)";
#define OSSL_SELF_TEST_onend(st, ret) __OSSL_SELF_TEST_onend(AmiSSLExtBase, (st), (ret))

int __OSSL_PROVIDER_set_default_search_path(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * a , __reg("a1") const char * path ) = "\tjsr\t-2802(a6)";
#define OSSL_PROVIDER_set_default_search_path(a, path) __OSSL_PROVIDER_set_default_search_path(AmiSSLExtBase, (a), (path))

ASN1_OCTET_STRING * __X509_digest_sig(__reg("a6") struct Library * , __reg("a0") const X509 * cert , __reg("a1") EVP_MD ** md_used , __reg("a2") int * md_is_fallback ) = "\tjsr\t-2808(a6)";
#define X509_digest_sig(cert, md_used, md_is_fallback) __X509_digest_sig(AmiSSLExtBase, (cert), (md_used), (md_is_fallback))

OSSL_CMP_MSG * __OSSL_CMP_MSG_dup(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_MSG * a ) = "\tjsr\t-2814(a6)";
#define OSSL_CMP_MSG_dup(a) __OSSL_CMP_MSG_dup(AmiSSLExtBase, (a))

OSSL_CMP_ITAV * __OSSL_CMP_ITAV_dup(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_ITAV * a ) = "\tjsr\t-2820(a6)";
#define OSSL_CMP_ITAV_dup(a) __OSSL_CMP_ITAV_dup(AmiSSLExtBase, (a))

OSSL_CMP_PKISI * __d2i_OSSL_CMP_PKISI(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_PKISI ** a , __reg("a1") const unsigned char ** in , __reg("d0") long len ) = "\tjsr\t-2826(a6)";
#define d2i_OSSL_CMP_PKISI(a, in, len) __d2i_OSSL_CMP_PKISI(AmiSSLExtBase, (a), (in), (len))

int __i2d_OSSL_CMP_PKISI(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_PKISI * a , __reg("a1") unsigned char ** out ) = "\tjsr\t-2832(a6)";
#define i2d_OSSL_CMP_PKISI(a, out) __i2d_OSSL_CMP_PKISI(AmiSSLExtBase, (a), (out))

void __OSSL_CMP_PKISI_free(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_PKISI * a ) = "\tjsr\t-2838(a6)";
#define OSSL_CMP_PKISI_free(a) __OSSL_CMP_PKISI_free(AmiSSLExtBase, (a))

OSSL_CMP_PKISI * __OSSL_CMP_PKISI_new(__reg("a6") struct Library * ) = "\tjsr\t-2844(a6)";
#define OSSL_CMP_PKISI_new() __OSSL_CMP_PKISI_new(AmiSSLExtBase)

const ASN1_ITEM * __OSSL_CMP_PKISI_it(__reg("a6") struct Library * ) = "\tjsr\t-2850(a6)";
#define OSSL_CMP_PKISI_it() __OSSL_CMP_PKISI_it(AmiSSLExtBase)

OSSL_CMP_PKISI * __OSSL_CMP_PKISI_dup(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_PKISI * a ) = "\tjsr\t-2856(a6)";
#define OSSL_CMP_PKISI_dup(a) __OSSL_CMP_PKISI_dup(AmiSSLExtBase, (a))

char * __OSSL_CMP_snprint_PKIStatusInfo(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_PKISI * statusInfo , __reg("a1") char * buf , __reg("d0") size_t bufsize ) = "\tjsr\t-2862(a6)";
#define OSSL_CMP_snprint_PKIStatusInfo(statusInfo, buf, bufsize) __OSSL_CMP_snprint_PKIStatusInfo(AmiSSLExtBase, (statusInfo), (buf), (bufsize))

OSSL_CMP_PKISI * __OSSL_CMP_STATUSINFO_new(__reg("a6") struct Library * , __reg("d0") int status , __reg("d1") int fail_info , __reg("a0") const char * text ) = "\tjsr\t-2868(a6)";
#define OSSL_CMP_STATUSINFO_new(status, fail_info, text) __OSSL_CMP_STATUSINFO_new(AmiSSLExtBase, (status), (fail_info), (text))

OSSL_CMP_MSG * __d2i_OSSL_CMP_MSG_bio(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("a1") OSSL_CMP_MSG ** msg ) = "\tjsr\t-2874(a6)";
#define d2i_OSSL_CMP_MSG_bio(bio, msg) __d2i_OSSL_CMP_MSG_bio(AmiSSLExtBase, (bio), (msg))

int __i2d_OSSL_CMP_MSG_bio(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("a1") const OSSL_CMP_MSG * msg ) = "\tjsr\t-2880(a6)";
#define i2d_OSSL_CMP_MSG_bio(bio, msg) __i2d_OSSL_CMP_MSG_bio(AmiSSLExtBase, (bio), (msg))

OSSL_CMP_MSG * __OSSL_CMP_SRV_process_request(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_SRV_CTX * srv_ctx , __reg("a1") const OSSL_CMP_MSG * req ) = "\tjsr\t-2886(a6)";
#define OSSL_CMP_SRV_process_request(srv_ctx, req) __OSSL_CMP_SRV_process_request(AmiSSLExtBase, (srv_ctx), (req))

OSSL_CMP_MSG * __OSSL_CMP_CTX_server_perform(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * client_ctx , __reg("a1") const OSSL_CMP_MSG * req ) = "\tjsr\t-2892(a6)";
#define OSSL_CMP_CTX_server_perform(client_ctx, req) __OSSL_CMP_CTX_server_perform(AmiSSLExtBase, (client_ctx), (req))

OSSL_CMP_SRV_CTX * __OSSL_CMP_SRV_CTX_new(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-2898(a6)";
#define OSSL_CMP_SRV_CTX_new(libctx, propq) __OSSL_CMP_SRV_CTX_new(AmiSSLExtBase, (libctx), (propq))

void __OSSL_CMP_SRV_CTX_free(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_SRV_CTX * srv_ctx ) = "\tjsr\t-2904(a6)";
#define OSSL_CMP_SRV_CTX_free(srv_ctx) __OSSL_CMP_SRV_CTX_free(AmiSSLExtBase, (srv_ctx))

int __OSSL_CMP_SRV_CTX_init(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_SRV_CTX * srv_ctx , __reg("a1") void * custom_ctx , __reg("a2") OSSL_CMP_SRV_cert_request_cb_t process_cert_request , __reg("a3") OSSL_CMP_SRV_rr_cb_t process_rr , __reg("d0") OSSL_CMP_SRV_genm_cb_t process_genm , __reg("d1") OSSL_CMP_SRV_error_cb_t process_error , __reg("d2") OSSL_CMP_SRV_certConf_cb_t process_certConf , __reg("d3") OSSL_CMP_SRV_pollReq_cb_t process_pollReq ) = "\tjsr\t-2910(a6)";
#define OSSL_CMP_SRV_CTX_init(srv_ctx, custom_ctx, process_cert_request, process_rr, process_genm, process_error, process_certConf, process_pollReq) __OSSL_CMP_SRV_CTX_init(AmiSSLExtBase, (srv_ctx), (custom_ctx), (process_cert_request), (process_rr), (process_genm), (process_error), (process_certConf), (process_pollReq))

OSSL_CMP_CTX * __OSSL_CMP_SRV_CTX_get0_cmp_ctx(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_SRV_CTX * srv_ctx ) = "\tjsr\t-2916(a6)";
#define OSSL_CMP_SRV_CTX_get0_cmp_ctx(srv_ctx) __OSSL_CMP_SRV_CTX_get0_cmp_ctx(AmiSSLExtBase, (srv_ctx))

void * __OSSL_CMP_SRV_CTX_get0_custom_ctx(__reg("a6") struct Library * , __reg("a0") const OSSL_CMP_SRV_CTX * srv_ctx ) = "\tjsr\t-2922(a6)";
#define OSSL_CMP_SRV_CTX_get0_custom_ctx(srv_ctx) __OSSL_CMP_SRV_CTX_get0_custom_ctx(AmiSSLExtBase, (srv_ctx))

int __OSSL_CMP_SRV_CTX_set_send_unprotected_errors(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_SRV_CTX * srv_ctx , __reg("d0") int val ) = "\tjsr\t-2928(a6)";
#define OSSL_CMP_SRV_CTX_set_send_unprotected_errors(srv_ctx, val) __OSSL_CMP_SRV_CTX_set_send_unprotected_errors(AmiSSLExtBase, (srv_ctx), (val))

int __OSSL_CMP_SRV_CTX_set_accept_unprotected(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_SRV_CTX * srv_ctx , __reg("d0") int val ) = "\tjsr\t-2934(a6)";
#define OSSL_CMP_SRV_CTX_set_accept_unprotected(srv_ctx, val) __OSSL_CMP_SRV_CTX_set_accept_unprotected(AmiSSLExtBase, (srv_ctx), (val))

int __OSSL_CMP_SRV_CTX_set_accept_raverified(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_SRV_CTX * srv_ctx , __reg("d0") int val ) = "\tjsr\t-2940(a6)";
#define OSSL_CMP_SRV_CTX_set_accept_raverified(srv_ctx, val) __OSSL_CMP_SRV_CTX_set_accept_raverified(AmiSSLExtBase, (srv_ctx), (val))

int __OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_SRV_CTX * srv_ctx , __reg("d0") int val ) = "\tjsr\t-2946(a6)";
#define OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(srv_ctx, val) __OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(AmiSSLExtBase, (srv_ctx), (val))

X509 * __OSSL_CMP_exec_certreq(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("d0") int req_type , __reg("a1") const OSSL_CRMF_MSG * crm ) = "\tjsr\t-2952(a6)";
#define OSSL_CMP_exec_certreq(ctx, req_type, crm) __OSSL_CMP_exec_certreq(AmiSSLExtBase, (ctx), (req_type), (crm))

int __OSSL_CMP_try_certreq(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("d0") int req_type , __reg("a1") const OSSL_CRMF_MSG * crm , __reg("a2") int * checkAfter ) = "\tjsr\t-2958(a6)";
#define OSSL_CMP_try_certreq(ctx, req_type, crm, checkAfter) __OSSL_CMP_try_certreq(AmiSSLExtBase, (ctx), (req_type), (crm), (checkAfter))

int __OSSL_CMP_certConf_cb(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") X509 * cert , __reg("d0") int fail_info , __reg("a2") const char ** text ) = "\tjsr\t-2964(a6)";
#define OSSL_CMP_certConf_cb(ctx, cert, fail_info, text) __OSSL_CMP_certConf_cb(AmiSSLExtBase, (ctx), (cert), (fail_info), (text))

int __OSSL_CMP_exec_RR_ses(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx ) = "\tjsr\t-2970(a6)";
#define OSSL_CMP_exec_RR_ses(ctx) __OSSL_CMP_exec_RR_ses(AmiSSLExtBase, (ctx))

STACK_OF(OSSL_CMP_ITAV) * __OSSL_CMP_exec_GENM_ses(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx ) = "\tjsr\t-2976(a6)";
#define OSSL_CMP_exec_GENM_ses(ctx) __OSSL_CMP_exec_GENM_ses(AmiSSLExtBase, (ctx))

OSSL_CMP_MSG * __OSSL_CMP_MSG_http_perform(__reg("a6") struct Library * , __reg("a0") OSSL_CMP_CTX * ctx , __reg("a1") const OSSL_CMP_MSG * req ) = "\tjsr\t-2982(a6)";
#define OSSL_CMP_MSG_http_perform(ctx, req) __OSSL_CMP_MSG_http_perform(AmiSSLExtBase, (ctx), (req))

OSSL_CMP_MSG * __OSSL_CMP_MSG_read(__reg("a6") struct Library * , __reg("a0") const char * file , __reg("a1") OSSL_LIB_CTX * libctx , __reg("a2") const char * propq ) = "\tjsr\t-2988(a6)";
#define OSSL_CMP_MSG_read(file, libctx, propq) __OSSL_CMP_MSG_read(AmiSSLExtBase, (file), (libctx), (propq))

int __OSSL_CMP_MSG_write(__reg("a6") struct Library * , __reg("a0") const char * file , __reg("a1") const OSSL_CMP_MSG * msg ) = "\tjsr\t-2994(a6)";
#define OSSL_CMP_MSG_write(file, msg) __OSSL_CMP_MSG_write(AmiSSLExtBase, (file), (msg))

EVP_PKEY * __EVP_PKEY_Q_vkeygen(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq , __reg("a2") const char * type , __reg("a3") va_list args ) = "\tjsr\t-3000(a6)";
#define EVP_PKEY_Q_vkeygen(libctx, propq, type, args) __EVP_PKEY_Q_vkeygen(AmiSSLExtBase, (libctx), (propq), (type), (args))

#if !defined(NO_INLINE_STDARG) && (__STDC__ == 1L) && (__STDC_VERSION__ >= 199901L)
EVP_PKEY * __EVP_PKEY_Q_keygen(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq , __reg("a2") const char * type , long dummy , ... ) = "\tmove.l\ta3,-(a7)\n\tlea\t4(a7),a3\n\tjsr\t-3000(a6)\n\tmovea.l\t(a7)+,a3";
#define EVP_PKEY_Q_keygen(libctx, propq, type, ...) __EVP_PKEY_Q_keygen(AmiSSLExtBase, (libctx), (propq), (type), __VA_ARGS__)
#endif

int __EVP_PKEY_generate(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") EVP_PKEY ** ppkey ) = "\tjsr\t-3006(a6)";
#define EVP_PKEY_generate(ctx, ppkey) __EVP_PKEY_generate(AmiSSLExtBase, (ctx), (ppkey))

int __EVP_PKEY_CTX_set_rsa_keygen_bits(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int bits ) = "\tjsr\t-3012(a6)";
#define EVP_PKEY_CTX_set_rsa_keygen_bits(ctx, bits) __EVP_PKEY_CTX_set_rsa_keygen_bits(AmiSSLExtBase, (ctx), (bits))

int __EVP_PKEY_CTX_set_rsa_keygen_pubexp(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") BIGNUM * pubexp ) = "\tjsr\t-3018(a6)";
#define EVP_PKEY_CTX_set_rsa_keygen_pubexp(ctx, pubexp) __EVP_PKEY_CTX_set_rsa_keygen_pubexp(AmiSSLExtBase, (ctx), (pubexp))

int __EVP_PKEY_CTX_set1_rsa_keygen_pubexp(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") BIGNUM * pubexp ) = "\tjsr\t-3024(a6)";
#define EVP_PKEY_CTX_set1_rsa_keygen_pubexp(ctx, pubexp) __EVP_PKEY_CTX_set1_rsa_keygen_pubexp(AmiSSLExtBase, (ctx), (pubexp))

int __EVP_PKEY_CTX_set_rsa_keygen_primes(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int primes ) = "\tjsr\t-3030(a6)";
#define EVP_PKEY_CTX_set_rsa_keygen_primes(ctx, primes) __EVP_PKEY_CTX_set_rsa_keygen_primes(AmiSSLExtBase, (ctx), (primes))

CONF * __NCONF_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") CONF_METHOD * meth ) = "\tjsr\t-3036(a6)";
#define NCONF_new_ex(libctx, meth) __NCONF_new_ex(AmiSSLExtBase, (libctx), (meth))

int __CONF_modules_load_file_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * filename , __reg("a2") const char * appname , __reg("d0") unsigned long flags ) = "\tjsr\t-3042(a6)";
#define CONF_modules_load_file_ex(libctx, filename, appname, flags) __CONF_modules_load_file_ex(AmiSSLExtBase, (libctx), (filename), (appname), (flags))

int __OSSL_LIB_CTX_load_config(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * config_file ) = "\tjsr\t-3048(a6)";
#define OSSL_LIB_CTX_load_config(ctx, config_file) __OSSL_LIB_CTX_load_config(AmiSSLExtBase, (ctx), (config_file))

OSSL_PARAM * __OSSL_PARAM_BLD_to_param(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld ) = "\tjsr\t-3054(a6)";
#define OSSL_PARAM_BLD_to_param(bld) __OSSL_PARAM_BLD_to_param(AmiSSLExtBase, (bld))

int __OSSL_PARAM_BLD_push_int(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("d0") int val ) = "\tjsr\t-3060(a6)";
#define OSSL_PARAM_BLD_push_int(bld, key, val) __OSSL_PARAM_BLD_push_int(AmiSSLExtBase, (bld), (key), (val))

int __OSSL_PARAM_BLD_push_uint(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("d0") unsigned int val ) = "\tjsr\t-3066(a6)";
#define OSSL_PARAM_BLD_push_uint(bld, key, val) __OSSL_PARAM_BLD_push_uint(AmiSSLExtBase, (bld), (key), (val))

int __OSSL_PARAM_BLD_push_long(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("d0") long int val ) = "\tjsr\t-3072(a6)";
#define OSSL_PARAM_BLD_push_long(bld, key, val) __OSSL_PARAM_BLD_push_long(AmiSSLExtBase, (bld), (key), (val))

int __OSSL_PARAM_BLD_push_ulong(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("d0") unsigned long int val ) = "\tjsr\t-3078(a6)";
#define OSSL_PARAM_BLD_push_ulong(bld, key, val) __OSSL_PARAM_BLD_push_ulong(AmiSSLExtBase, (bld), (key), (val))

int __OSSL_PARAM_BLD_push_int32(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("d0") int32_t val ) = "\tjsr\t-3084(a6)";
#define OSSL_PARAM_BLD_push_int32(bld, key, val) __OSSL_PARAM_BLD_push_int32(AmiSSLExtBase, (bld), (key), (val))

int __OSSL_PARAM_BLD_push_uint32(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("d0") uint32_t val ) = "\tjsr\t-3090(a6)";
#define OSSL_PARAM_BLD_push_uint32(bld, key, val) __OSSL_PARAM_BLD_push_uint32(AmiSSLExtBase, (bld), (key), (val))

int __OSSL_PARAM_BLD_push_int64(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("d0/d1") int64_t val ) = "\tjsr\t-3096(a6)";
#define OSSL_PARAM_BLD_push_int64(bld, key, val) __OSSL_PARAM_BLD_push_int64(AmiSSLExtBase, (bld), (key), (val))

int __OSSL_PARAM_BLD_push_uint64(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("d0/d1") uint64_t val ) = "\tjsr\t-3102(a6)";
#define OSSL_PARAM_BLD_push_uint64(bld, key, val) __OSSL_PARAM_BLD_push_uint64(AmiSSLExtBase, (bld), (key), (val))

int __OSSL_PARAM_BLD_push_size_t(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("d0") size_t val ) = "\tjsr\t-3108(a6)";
#define OSSL_PARAM_BLD_push_size_t(bld, key, val) __OSSL_PARAM_BLD_push_size_t(AmiSSLExtBase, (bld), (key), (val))

int __OSSL_PARAM_BLD_push_double(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("d0/d1") double val ) = "\tjsr\t-3114(a6)";
#define OSSL_PARAM_BLD_push_double(bld, key, val) __OSSL_PARAM_BLD_push_double(AmiSSLExtBase, (bld), (key), (val))

int __OSSL_PARAM_BLD_push_BN(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("a2") const BIGNUM * bn ) = "\tjsr\t-3120(a6)";
#define OSSL_PARAM_BLD_push_BN(bld, key, bn) __OSSL_PARAM_BLD_push_BN(AmiSSLExtBase, (bld), (key), (bn))

int __OSSL_PARAM_BLD_push_BN_pad(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("a2") const BIGNUM * bn , __reg("d0") size_t sz ) = "\tjsr\t-3126(a6)";
#define OSSL_PARAM_BLD_push_BN_pad(bld, key, bn, sz) __OSSL_PARAM_BLD_push_BN_pad(AmiSSLExtBase, (bld), (key), (bn), (sz))

int __OSSL_PARAM_BLD_push_utf8_string(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("a2") const char * buf , __reg("d0") size_t bsize ) = "\tjsr\t-3132(a6)";
#define OSSL_PARAM_BLD_push_utf8_string(bld, key, buf, bsize) __OSSL_PARAM_BLD_push_utf8_string(AmiSSLExtBase, (bld), (key), (buf), (bsize))

int __OSSL_PARAM_BLD_push_utf8_ptr(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("a2") char * buf , __reg("d0") size_t bsize ) = "\tjsr\t-3138(a6)";
#define OSSL_PARAM_BLD_push_utf8_ptr(bld, key, buf, bsize) __OSSL_PARAM_BLD_push_utf8_ptr(AmiSSLExtBase, (bld), (key), (buf), (bsize))

int __OSSL_PARAM_BLD_push_octet_string(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("a2") const void * buf , __reg("d0") size_t bsize ) = "\tjsr\t-3144(a6)";
#define OSSL_PARAM_BLD_push_octet_string(bld, key, buf, bsize) __OSSL_PARAM_BLD_push_octet_string(AmiSSLExtBase, (bld), (key), (buf), (bsize))

int __OSSL_PARAM_BLD_push_octet_ptr(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("a2") void * buf , __reg("d0") size_t bsize ) = "\tjsr\t-3150(a6)";
#define OSSL_PARAM_BLD_push_octet_ptr(bld, key, buf, bsize) __OSSL_PARAM_BLD_push_octet_ptr(AmiSSLExtBase, (bld), (key), (buf), (bsize))

OSSL_PARAM_BLD * __OSSL_PARAM_BLD_new(__reg("a6") struct Library * ) = "\tjsr\t-3156(a6)";
#define OSSL_PARAM_BLD_new() __OSSL_PARAM_BLD_new(AmiSSLExtBase)

void __OSSL_PARAM_BLD_free(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld ) = "\tjsr\t-3162(a6)";
#define OSSL_PARAM_BLD_free(bld) __OSSL_PARAM_BLD_free(AmiSSLExtBase, (bld))

int __EVP_PKEY_set_type_by_keymgmt(__reg("a6") struct Library * , __reg("a0") EVP_PKEY * pkey , __reg("a1") EVP_KEYMGMT * keymgmt ) = "\tjsr\t-3168(a6)";
#define EVP_PKEY_set_type_by_keymgmt(pkey, keymgmt) __EVP_PKEY_set_type_by_keymgmt(AmiSSLExtBase, (pkey), (keymgmt))

int __OCSP_RESPID_set_by_key_ex(__reg("a6") struct Library * , __reg("a0") OCSP_RESPID * respid , __reg("a1") X509 * cert , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-3174(a6)";
#define OCSP_RESPID_set_by_key_ex(respid, cert, libctx, propq) __OCSP_RESPID_set_by_key_ex(AmiSSLExtBase, (respid), (cert), (libctx), (propq))

int __OCSP_RESPID_match_ex(__reg("a6") struct Library * , __reg("a0") OCSP_RESPID * respid , __reg("a1") X509 * cert , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-3180(a6)";
#define OCSP_RESPID_match_ex(respid, cert, libctx, propq) __OCSP_RESPID_match_ex(AmiSSLExtBase, (respid), (cert), (libctx), (propq))

char * __SRP_create_verifier_ex(__reg("a6") struct Library * , __reg("a0") const char * user , __reg("a1") const char * pass , __reg("a2") char ** salt , __reg("a3") char ** verifier , __reg("d0") const char * N , __reg("d1") const char * g , __reg("d2") OSSL_LIB_CTX * libctx , __reg("d3") const char * propq ) = "\tjsr\t-3186(a6)";
#define SRP_create_verifier_ex(user, pass, salt, verifier, N, g, libctx, propq) __SRP_create_verifier_ex(AmiSSLExtBase, (user), (pass), (salt), (verifier), (N), (g), (libctx), (propq))

int __SRP_create_verifier_BN_ex(__reg("a6") struct Library * , __reg("a0") const char * user , __reg("a1") const char * pass , __reg("a2") BIGNUM ** salt , __reg("a3") BIGNUM ** verifier , __reg("d0") const BIGNUM * N , __reg("d1") const BIGNUM * g , __reg("d2") OSSL_LIB_CTX * libctx , __reg("d3") const char * propq ) = "\tjsr\t-3192(a6)";
#define SRP_create_verifier_BN_ex(user, pass, salt, verifier, N, g, libctx, propq) __SRP_create_verifier_BN_ex(AmiSSLExtBase, (user), (pass), (salt), (verifier), (N), (g), (libctx), (propq))

BIGNUM * __SRP_Calc_B_ex(__reg("a6") struct Library * , __reg("a0") const BIGNUM * b , __reg("a1") const BIGNUM * N , __reg("a2") const BIGNUM * g , __reg("a3") const BIGNUM * v , __reg("d0") OSSL_LIB_CTX * libctx , __reg("d1") const char * propq ) = "\tjsr\t-3198(a6)";
#define SRP_Calc_B_ex(b, N, g, v, libctx, propq) __SRP_Calc_B_ex(AmiSSLExtBase, (b), (N), (g), (v), (libctx), (propq))

BIGNUM * __SRP_Calc_u_ex(__reg("a6") struct Library * , __reg("a0") const BIGNUM * A , __reg("a1") const BIGNUM * B , __reg("a2") const BIGNUM * N , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d0") const char * propq ) = "\tjsr\t-3204(a6)";
#define SRP_Calc_u_ex(A, B, N, libctx, propq) __SRP_Calc_u_ex(AmiSSLExtBase, (A), (B), (N), (libctx), (propq))

BIGNUM * __SRP_Calc_x_ex(__reg("a6") struct Library * , __reg("a0") const BIGNUM * s , __reg("a1") const char * user , __reg("a2") const char * pass , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d0") const char * propq ) = "\tjsr\t-3210(a6)";
#define SRP_Calc_x_ex(s, user, pass, libctx, propq) __SRP_Calc_x_ex(AmiSSLExtBase, (s), (user), (pass), (libctx), (propq))

BIGNUM * __SRP_Calc_client_key_ex(__reg("a6") struct Library * , __reg("a0") const BIGNUM * N , __reg("a1") const BIGNUM * B , __reg("a2") const BIGNUM * g , __reg("a3") const BIGNUM * x , __reg("d0") const BIGNUM * a , __reg("d1") const BIGNUM * u , __reg("d2") OSSL_LIB_CTX * libctx , __reg("d3") const char * propq ) = "\tjsr\t-3216(a6)";
#define SRP_Calc_client_key_ex(N, B, g, x, a, u, libctx, propq) __SRP_Calc_client_key_ex(AmiSSLExtBase, (N), (B), (g), (x), (a), (u), (libctx), (propq))

const OSSL_PARAM * __EVP_PKEY_gettable_params(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey ) = "\tjsr\t-3222(a6)";
#define EVP_PKEY_gettable_params(pkey) __EVP_PKEY_gettable_params(AmiSSLExtBase, (pkey))

int __EVP_PKEY_get_int_param(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey , __reg("a1") const char * key_name , __reg("a2") int * out ) = "\tjsr\t-3228(a6)";
#define EVP_PKEY_get_int_param(pkey, key_name, out) __EVP_PKEY_get_int_param(AmiSSLExtBase, (pkey), (key_name), (out))

int __EVP_PKEY_get_size_t_param(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey , __reg("a1") const char * key_name , __reg("a2") size_t * out ) = "\tjsr\t-3234(a6)";
#define EVP_PKEY_get_size_t_param(pkey, key_name, out) __EVP_PKEY_get_size_t_param(AmiSSLExtBase, (pkey), (key_name), (out))

int __EVP_PKEY_get_bn_param(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey , __reg("a1") const char * key_name , __reg("a2") BIGNUM ** bn ) = "\tjsr\t-3240(a6)";
#define EVP_PKEY_get_bn_param(pkey, key_name, bn) __EVP_PKEY_get_bn_param(AmiSSLExtBase, (pkey), (key_name), (bn))

int __EVP_PKEY_get_utf8_string_param(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey , __reg("a1") const char * key_name , __reg("a2") char * str , __reg("d0") size_t max_buf_sz , __reg("a3") size_t * out_sz ) = "\tjsr\t-3246(a6)";
#define EVP_PKEY_get_utf8_string_param(pkey, key_name, str, max_buf_sz, out_sz) __EVP_PKEY_get_utf8_string_param(AmiSSLExtBase, (pkey), (key_name), (str), (max_buf_sz), (out_sz))

int __EVP_PKEY_get_octet_string_param(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey , __reg("a1") const char * key_name , __reg("a2") unsigned char * buf , __reg("d0") size_t max_buf_sz , __reg("a3") size_t * out_sz ) = "\tjsr\t-3252(a6)";
#define EVP_PKEY_get_octet_string_param(pkey, key_name, buf, max_buf_sz, out_sz) __EVP_PKEY_get_octet_string_param(AmiSSLExtBase, (pkey), (key_name), (buf), (max_buf_sz), (out_sz))

int __EVP_PKEY_is_a(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey , __reg("a1") const char * name ) = "\tjsr\t-3258(a6)";
#define EVP_PKEY_is_a(pkey, name) __EVP_PKEY_is_a(AmiSSLExtBase, (pkey), (name))

int __EVP_PKEY_can_sign(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey ) = "\tjsr\t-3264(a6)";
#define EVP_PKEY_can_sign(pkey) __EVP_PKEY_can_sign(AmiSSLExtBase, (pkey))

X509_STORE_CTX * __X509_STORE_CTX_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-3270(a6)";
#define X509_STORE_CTX_new_ex(libctx, propq) __X509_STORE_CTX_new_ex(AmiSSLExtBase, (libctx), (propq))

int __X509_STORE_CTX_verify(__reg("a6") struct Library * , __reg("a0") X509_STORE_CTX * ctx ) = "\tjsr\t-3276(a6)";
#define X509_STORE_CTX_verify(ctx) __X509_STORE_CTX_verify(AmiSSLExtBase, (ctx))

CT_POLICY_EVAL_CTX * __CT_POLICY_EVAL_CTX_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-3282(a6)";
#define CT_POLICY_EVAL_CTX_new_ex(libctx, propq) __CT_POLICY_EVAL_CTX_new_ex(AmiSSLExtBase, (libctx), (propq))

CTLOG * __CTLOG_new_ex(__reg("a6") struct Library * , __reg("a0") EVP_PKEY * public_key , __reg("a1") const char * name , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-3288(a6)";
#define CTLOG_new_ex(public_key, name, libctx, propq) __CTLOG_new_ex(AmiSSLExtBase, (public_key), (name), (libctx), (propq))

int __CTLOG_new_from_base64_ex(__reg("a6") struct Library * , __reg("a0") CTLOG ** ct_log , __reg("a1") const char * pkey_base64 , __reg("a2") const char * name , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d0") const char * propq ) = "\tjsr\t-3294(a6)";
#define CTLOG_new_from_base64_ex(ct_log, pkey_base64, name, libctx, propq) __CTLOG_new_from_base64_ex(AmiSSLExtBase, (ct_log), (pkey_base64), (name), (libctx), (propq))

CTLOG_STORE * __CTLOG_STORE_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-3300(a6)";
#define CTLOG_STORE_new_ex(libctx, propq) __CTLOG_STORE_new_ex(AmiSSLExtBase, (libctx), (propq))

int __EVP_PKEY_set_ex_data(__reg("a6") struct Library * , __reg("a0") EVP_PKEY * key , __reg("d0") int idx , __reg("a1") void * arg ) = "\tjsr\t-3306(a6)";
#define EVP_PKEY_set_ex_data(key, idx, arg) __EVP_PKEY_set_ex_data(AmiSSLExtBase, (key), (idx), (arg))

void * __EVP_PKEY_get_ex_data(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * key , __reg("d0") int idx ) = "\tjsr\t-3312(a6)";
#define EVP_PKEY_get_ex_data(key, idx) __EVP_PKEY_get_ex_data(AmiSSLExtBase, (key), (idx))

int __EVP_PKEY_CTX_set_group_name(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const char * name ) = "\tjsr\t-3318(a6)";
#define EVP_PKEY_CTX_set_group_name(ctx, name) __EVP_PKEY_CTX_set_group_name(AmiSSLExtBase, (ctx), (name))

int __EVP_PKEY_CTX_get_group_name(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") char * name , __reg("d0") size_t namelen ) = "\tjsr\t-3324(a6)";
#define EVP_PKEY_CTX_get_group_name(ctx, name, namelen) __EVP_PKEY_CTX_get_group_name(AmiSSLExtBase, (ctx), (name), (namelen))

int __EVP_PKEY_CTX_set_ec_paramgen_curve_nid(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int nid ) = "\tjsr\t-3330(a6)";
#define EVP_PKEY_CTX_set_ec_paramgen_curve_nid(ctx, nid) __EVP_PKEY_CTX_set_ec_paramgen_curve_nid(AmiSSLExtBase, (ctx), (nid))

EVP_PKEY * __d2i_PrivateKey_ex(__reg("a6") struct Library * , __reg("d0") int type , __reg("a0") EVP_PKEY ** a , __reg("a1") const unsigned char ** pp , __reg("d1") long length , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-3336(a6)";
#define d2i_PrivateKey_ex(type, a, pp, length, libctx, propq) __d2i_PrivateKey_ex(AmiSSLExtBase, (type), (a), (pp), (length), (libctx), (propq))

EVP_PKEY * __d2i_AutoPrivateKey_ex(__reg("a6") struct Library * , __reg("a0") EVP_PKEY ** a , __reg("a1") const unsigned char ** pp , __reg("d0") long length , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-3342(a6)";
#define d2i_AutoPrivateKey_ex(a, pp, length, libctx, propq) __d2i_AutoPrivateKey_ex(AmiSSLExtBase, (a), (pp), (length), (libctx), (propq))

EVP_PKEY * __d2i_PrivateKey_ex_bio(__reg("a6") struct Library * , __reg("a0") BIO * bp , __reg("a1") EVP_PKEY ** a , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-3348(a6)";
#define d2i_PrivateKey_ex_bio(bp, a, libctx, propq) __d2i_PrivateKey_ex_bio(AmiSSLExtBase, (bp), (a), (libctx), (propq))

EVP_PKEY * __PEM_read_bio_PrivateKey_ex(__reg("a6") struct Library * , __reg("a0") BIO * out , __reg("a1") EVP_PKEY ** x , __reg("a2") pem_password_cb * cb , __reg("a3") void * u , __reg("d0") OSSL_LIB_CTX * libctx , __reg("d1") const char * propq ) = "\tjsr\t-3354(a6)";
#define PEM_read_bio_PrivateKey_ex(out, x, cb, u, libctx, propq) __PEM_read_bio_PrivateKey_ex(AmiSSLExtBase, (out), (x), (cb), (u), (libctx), (propq))

int __EVP_PKEY_CTX_set_dsa_paramgen_bits(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int nbits ) = "\tjsr\t-3360(a6)";
#define EVP_PKEY_CTX_set_dsa_paramgen_bits(ctx, nbits) __EVP_PKEY_CTX_set_dsa_paramgen_bits(AmiSSLExtBase, (ctx), (nbits))

int __EVP_PKEY_CTX_set_dsa_paramgen_q_bits(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int qbits ) = "\tjsr\t-3366(a6)";
#define EVP_PKEY_CTX_set_dsa_paramgen_q_bits(ctx, qbits) __EVP_PKEY_CTX_set_dsa_paramgen_q_bits(AmiSSLExtBase, (ctx), (qbits))

int __EVP_PKEY_CTX_set_dsa_paramgen_md_props(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const char * md_name , __reg("a2") const char * md_properties ) = "\tjsr\t-3372(a6)";
#define EVP_PKEY_CTX_set_dsa_paramgen_md_props(ctx, md_name, md_properties) __EVP_PKEY_CTX_set_dsa_paramgen_md_props(AmiSSLExtBase, (ctx), (md_name), (md_properties))

int __EVP_PKEY_CTX_set_dsa_paramgen_gindex(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int gindex ) = "\tjsr\t-3378(a6)";
#define EVP_PKEY_CTX_set_dsa_paramgen_gindex(ctx, gindex) __EVP_PKEY_CTX_set_dsa_paramgen_gindex(AmiSSLExtBase, (ctx), (gindex))

int __EVP_PKEY_CTX_set_dsa_paramgen_type(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const char * name ) = "\tjsr\t-3384(a6)";
#define EVP_PKEY_CTX_set_dsa_paramgen_type(ctx, name) __EVP_PKEY_CTX_set_dsa_paramgen_type(AmiSSLExtBase, (ctx), (name))

int __EVP_PKEY_CTX_set_dsa_paramgen_seed(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const unsigned char * seed , __reg("d0") size_t seedlen ) = "\tjsr\t-3390(a6)";
#define EVP_PKEY_CTX_set_dsa_paramgen_seed(ctx, seed, seedlen) __EVP_PKEY_CTX_set_dsa_paramgen_seed(AmiSSLExtBase, (ctx), (seed), (seedlen))

int __EVP_PKEY_CTX_set_dsa_paramgen_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD * md ) = "\tjsr\t-3396(a6)";
#define EVP_PKEY_CTX_set_dsa_paramgen_md(ctx, md) __EVP_PKEY_CTX_set_dsa_paramgen_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_set_dh_paramgen_type(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int typ ) = "\tjsr\t-3402(a6)";
#define EVP_PKEY_CTX_set_dh_paramgen_type(ctx, typ) __EVP_PKEY_CTX_set_dh_paramgen_type(AmiSSLExtBase, (ctx), (typ))

int __EVP_PKEY_CTX_set_dh_paramgen_gindex(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int gindex ) = "\tjsr\t-3408(a6)";
#define EVP_PKEY_CTX_set_dh_paramgen_gindex(ctx, gindex) __EVP_PKEY_CTX_set_dh_paramgen_gindex(AmiSSLExtBase, (ctx), (gindex))

int __EVP_PKEY_CTX_set_dh_paramgen_seed(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const unsigned char * seed , __reg("d0") size_t seedlen ) = "\tjsr\t-3414(a6)";
#define EVP_PKEY_CTX_set_dh_paramgen_seed(ctx, seed, seedlen) __EVP_PKEY_CTX_set_dh_paramgen_seed(AmiSSLExtBase, (ctx), (seed), (seedlen))

int __EVP_PKEY_CTX_set_dh_paramgen_prime_len(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int pbits ) = "\tjsr\t-3420(a6)";
#define EVP_PKEY_CTX_set_dh_paramgen_prime_len(ctx, pbits) __EVP_PKEY_CTX_set_dh_paramgen_prime_len(AmiSSLExtBase, (ctx), (pbits))

int __EVP_PKEY_CTX_set_dh_paramgen_subprime_len(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int qlen ) = "\tjsr\t-3426(a6)";
#define EVP_PKEY_CTX_set_dh_paramgen_subprime_len(ctx, qlen) __EVP_PKEY_CTX_set_dh_paramgen_subprime_len(AmiSSLExtBase, (ctx), (qlen))

int __EVP_PKEY_CTX_set_dh_paramgen_generator(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int gen ) = "\tjsr\t-3432(a6)";
#define EVP_PKEY_CTX_set_dh_paramgen_generator(ctx, gen) __EVP_PKEY_CTX_set_dh_paramgen_generator(AmiSSLExtBase, (ctx), (gen))

int __EVP_PKEY_CTX_set_dh_nid(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int nid ) = "\tjsr\t-3438(a6)";
#define EVP_PKEY_CTX_set_dh_nid(ctx, nid) __EVP_PKEY_CTX_set_dh_nid(AmiSSLExtBase, (ctx), (nid))

int __EVP_PKEY_CTX_set_dh_rfc5114(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int gen ) = "\tjsr\t-3444(a6)";
#define EVP_PKEY_CTX_set_dh_rfc5114(ctx, gen) __EVP_PKEY_CTX_set_dh_rfc5114(AmiSSLExtBase, (ctx), (gen))

int __EVP_PKEY_CTX_set_dhx_rfc5114(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int gen ) = "\tjsr\t-3450(a6)";
#define EVP_PKEY_CTX_set_dhx_rfc5114(ctx, gen) __EVP_PKEY_CTX_set_dhx_rfc5114(AmiSSLExtBase, (ctx), (gen))

char * __X509_VERIFY_PARAM_get0_host(__reg("a6") struct Library * , __reg("a0") X509_VERIFY_PARAM * param , __reg("d0") int idx ) = "\tjsr\t-3456(a6)";
#define X509_VERIFY_PARAM_get0_host(param, idx) __X509_VERIFY_PARAM_get0_host(AmiSSLExtBase, (param), (idx))

char * __X509_VERIFY_PARAM_get0_email(__reg("a6") struct Library * , __reg("a0") X509_VERIFY_PARAM * param ) = "\tjsr\t-3462(a6)";
#define X509_VERIFY_PARAM_get0_email(param) __X509_VERIFY_PARAM_get0_email(AmiSSLExtBase, (param))

char * __X509_VERIFY_PARAM_get1_ip_asc(__reg("a6") struct Library * , __reg("a0") X509_VERIFY_PARAM * param ) = "\tjsr\t-3468(a6)";
#define X509_VERIFY_PARAM_get1_ip_asc(param) __X509_VERIFY_PARAM_get1_ip_asc(AmiSSLExtBase, (param))

int __OSSL_PARAM_modified(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p ) = "\tjsr\t-3474(a6)";
#define OSSL_PARAM_modified(p) __OSSL_PARAM_modified(AmiSSLExtBase, (p))

void __OSSL_PARAM_set_all_unmodified(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p ) = "\tjsr\t-3480(a6)";
#define OSSL_PARAM_set_all_unmodified(p) __OSSL_PARAM_set_all_unmodified(AmiSSLExtBase, (p))

EVP_RAND * __EVP_RAND_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * algorithm , __reg("a2") const char * properties ) = "\tjsr\t-3486(a6)";
#define EVP_RAND_fetch(libctx, algorithm, properties) __EVP_RAND_fetch(AmiSSLExtBase, (libctx), (algorithm), (properties))

int __EVP_RAND_up_ref(__reg("a6") struct Library * , __reg("a0") EVP_RAND * rand ) = "\tjsr\t-3492(a6)";
#define EVP_RAND_up_ref(rand) __EVP_RAND_up_ref(AmiSSLExtBase, (rand))

void __EVP_RAND_free(__reg("a6") struct Library * , __reg("a0") EVP_RAND * rand ) = "\tjsr\t-3498(a6)";
#define EVP_RAND_free(rand) __EVP_RAND_free(AmiSSLExtBase, (rand))

const char * __EVP_RAND_get0_name(__reg("a6") struct Library * , __reg("a0") const EVP_RAND * rand ) = "\tjsr\t-3504(a6)";
#define EVP_RAND_get0_name(rand) __EVP_RAND_get0_name(AmiSSLExtBase, (rand))

int __EVP_RAND_is_a(__reg("a6") struct Library * , __reg("a0") const EVP_RAND * rand , __reg("a1") const char * name ) = "\tjsr\t-3510(a6)";
#define EVP_RAND_is_a(rand, name) __EVP_RAND_is_a(AmiSSLExtBase, (rand), (name))

const OSSL_PROVIDER * __EVP_RAND_get0_provider(__reg("a6") struct Library * , __reg("a0") const EVP_RAND * rand ) = "\tjsr\t-3516(a6)";
#define EVP_RAND_get0_provider(rand) __EVP_RAND_get0_provider(AmiSSLExtBase, (rand))

int __EVP_RAND_get_params(__reg("a6") struct Library * , __reg("a0") EVP_RAND * rand , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-3522(a6)";
#define EVP_RAND_get_params(rand, params) __EVP_RAND_get_params(AmiSSLExtBase, (rand), (params))

EVP_RAND_CTX * __EVP_RAND_CTX_new(__reg("a6") struct Library * , __reg("a0") EVP_RAND * rand , __reg("a1") EVP_RAND_CTX * parent ) = "\tjsr\t-3528(a6)";
#define EVP_RAND_CTX_new(rand, parent) __EVP_RAND_CTX_new(AmiSSLExtBase, (rand), (parent))

void __EVP_RAND_CTX_free(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx ) = "\tjsr\t-3534(a6)";
#define EVP_RAND_CTX_free(ctx) __EVP_RAND_CTX_free(AmiSSLExtBase, (ctx))

EVP_RAND * __EVP_RAND_CTX_get0_rand(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx ) = "\tjsr\t-3540(a6)";
#define EVP_RAND_CTX_get0_rand(ctx) __EVP_RAND_CTX_get0_rand(AmiSSLExtBase, (ctx))

int __EVP_RAND_CTX_get_params(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-3546(a6)";
#define EVP_RAND_CTX_get_params(ctx, params) __EVP_RAND_CTX_get_params(AmiSSLExtBase, (ctx), (params))

int __EVP_RAND_CTX_set_params(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-3552(a6)";
#define EVP_RAND_CTX_set_params(ctx, params) __EVP_RAND_CTX_set_params(AmiSSLExtBase, (ctx), (params))

const OSSL_PARAM * __EVP_RAND_gettable_params(__reg("a6") struct Library * , __reg("a0") const EVP_RAND * rand ) = "\tjsr\t-3558(a6)";
#define EVP_RAND_gettable_params(rand) __EVP_RAND_gettable_params(AmiSSLExtBase, (rand))

const OSSL_PARAM * __EVP_RAND_gettable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_RAND * rand ) = "\tjsr\t-3564(a6)";
#define EVP_RAND_gettable_ctx_params(rand) __EVP_RAND_gettable_ctx_params(AmiSSLExtBase, (rand))

const OSSL_PARAM * __EVP_RAND_settable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_RAND * rand ) = "\tjsr\t-3570(a6)";
#define EVP_RAND_settable_ctx_params(rand) __EVP_RAND_settable_ctx_params(AmiSSLExtBase, (rand))

void __EVP_RAND_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(EVP_RAND *rand,void *arg) , __reg("a2") void * arg ) = "\tjsr\t-3576(a6)";
#define EVP_RAND_do_all_provided(libctx, fn, arg) __EVP_RAND_do_all_provided(AmiSSLExtBase, (libctx), (fn), (arg))

int __EVP_RAND_names_do_all(__reg("a6") struct Library * , __reg("a0") const EVP_RAND * rand , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-3582(a6)";
#define EVP_RAND_names_do_all(rand, fn, data) __EVP_RAND_names_do_all(AmiSSLExtBase, (rand), (fn), (data))

int __EVP_RAND_instantiate(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx , __reg("d0") unsigned int strength , __reg("d1") int prediction_resistance , __reg("a1") const unsigned char * pstr , __reg("d2") size_t pstr_len , __reg("a2") const OSSL_PARAM * params ) = "\tjsr\t-3588(a6)";
#define EVP_RAND_instantiate(ctx, strength, prediction_resistance, pstr, pstr_len, params) __EVP_RAND_instantiate(AmiSSLExtBase, (ctx), (strength), (prediction_resistance), (pstr), (pstr_len), (params))

int __EVP_RAND_uninstantiate(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx ) = "\tjsr\t-3594(a6)";
#define EVP_RAND_uninstantiate(ctx) __EVP_RAND_uninstantiate(AmiSSLExtBase, (ctx))

int __EVP_RAND_generate(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx , __reg("a1") unsigned char * out , __reg("d0") size_t outlen , __reg("d1") unsigned int strength , __reg("d2") int prediction_resistance , __reg("a2") const unsigned char * addin , __reg("d3") size_t addin_len ) = "\tjsr\t-3600(a6)";
#define EVP_RAND_generate(ctx, out, outlen, strength, prediction_resistance, addin, addin_len) __EVP_RAND_generate(AmiSSLExtBase, (ctx), (out), (outlen), (strength), (prediction_resistance), (addin), (addin_len))

int __EVP_RAND_reseed(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx , __reg("d0") int prediction_resistance , __reg("a1") const unsigned char * ent , __reg("d1") size_t ent_len , __reg("a2") const unsigned char * addin , __reg("d2") size_t addin_len ) = "\tjsr\t-3606(a6)";
#define EVP_RAND_reseed(ctx, prediction_resistance, ent, ent_len, addin, addin_len) __EVP_RAND_reseed(AmiSSLExtBase, (ctx), (prediction_resistance), (ent), (ent_len), (addin), (addin_len))

int __EVP_RAND_nonce(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx , __reg("a1") unsigned char * out , __reg("d0") size_t outlen ) = "\tjsr\t-3612(a6)";
#define EVP_RAND_nonce(ctx, out, outlen) __EVP_RAND_nonce(AmiSSLExtBase, (ctx), (out), (outlen))

int __EVP_RAND_enable_locking(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx ) = "\tjsr\t-3618(a6)";
#define EVP_RAND_enable_locking(ctx) __EVP_RAND_enable_locking(AmiSSLExtBase, (ctx))

int __EVP_RAND_verify_zeroization(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx ) = "\tjsr\t-3624(a6)";
#define EVP_RAND_verify_zeroization(ctx) __EVP_RAND_verify_zeroization(AmiSSLExtBase, (ctx))

unsigned int __EVP_RAND_get_strength(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx ) = "\tjsr\t-3630(a6)";
#define EVP_RAND_get_strength(ctx) __EVP_RAND_get_strength(AmiSSLExtBase, (ctx))

int __EVP_RAND_get_state(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx ) = "\tjsr\t-3636(a6)";
#define EVP_RAND_get_state(ctx) __EVP_RAND_get_state(AmiSSLExtBase, (ctx))

int __EVP_default_properties_is_fips_enabled(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx ) = "\tjsr\t-3642(a6)";
#define EVP_default_properties_is_fips_enabled(libctx) __EVP_default_properties_is_fips_enabled(AmiSSLExtBase, (libctx))

int __EVP_default_properties_enable_fips(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("d0") int enable ) = "\tjsr\t-3648(a6)";
#define EVP_default_properties_enable_fips(libctx, enable) __EVP_default_properties_enable_fips(AmiSSLExtBase, (libctx), (enable))

EVP_PKEY * __EVP_PKEY_new_raw_private_key_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * keytype , __reg("a2") const char * propq , __reg("a3") const unsigned char * priv , __reg("d0") size_t len ) = "\tjsr\t-3654(a6)";
#define EVP_PKEY_new_raw_private_key_ex(libctx, keytype, propq, priv, len) __EVP_PKEY_new_raw_private_key_ex(AmiSSLExtBase, (libctx), (keytype), (propq), (priv), (len))

EVP_PKEY * __EVP_PKEY_new_raw_public_key_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * keytype , __reg("a2") const char * propq , __reg("a3") const unsigned char * pub , __reg("d0") size_t len ) = "\tjsr\t-3660(a6)";
#define EVP_PKEY_new_raw_public_key_ex(libctx, keytype, propq, pub, len) __EVP_PKEY_new_raw_public_key_ex(AmiSSLExtBase, (libctx), (keytype), (propq), (pub), (len))

int __OSSL_PARAM_BLD_push_time_t(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM_BLD * bld , __reg("a1") const char * key , __reg("d0") time_t val ) = "\tjsr\t-3666(a6)";
#define OSSL_PARAM_BLD_push_time_t(bld, key, val) __OSSL_PARAM_BLD_push_time_t(AmiSSLExtBase, (bld), (key), (val))

void __OSSL_PARAM_construct_time_t_amiga(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * result , __reg("a1") const char * key , __reg("a2") time_t * buf ) = "\tjsr\t-3672(a6)";
#define OSSL_PARAM_construct_time_t_amiga(result, key, buf) __OSSL_PARAM_construct_time_t_amiga(AmiSSLExtBase, (result), (key), (buf))

int __OSSL_PARAM_get_time_t(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") time_t * val ) = "\tjsr\t-3678(a6)";
#define OSSL_PARAM_get_time_t(p, val) __OSSL_PARAM_get_time_t(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_set_time_t(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p , __reg("d0") time_t val ) = "\tjsr\t-3684(a6)";
#define OSSL_PARAM_set_time_t(p, val) __OSSL_PARAM_set_time_t(AmiSSLExtBase, (p), (val))

OSSL_STORE_CTX * __OSSL_STORE_attach(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("a1") const char * scheme , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq , __reg("d0") const UI_METHOD * ui_method , __reg("d1") void * ui_data , __reg("d2") const OSSL_PARAM * params , __reg("d3") OSSL_STORE_post_process_info_fn post_process , __reg("d4") void * post_process_data ) = "\tjsr\t-3690(a6)";
#define OSSL_STORE_attach(bio, scheme, libctx, propq, ui_method, ui_data, params, post_process, post_process_data) __OSSL_STORE_attach(AmiSSLExtBase, (bio), (scheme), (libctx), (propq), (ui_method), (ui_data), (params), (post_process), (post_process_data))

int __OSSL_STORE_LOADER_set_attach(__reg("a6") struct Library * , __reg("a0") OSSL_STORE_LOADER * loader , __reg("a1") OSSL_STORE_attach_fn attach_function ) = "\tjsr\t-3696(a6)";
#define OSSL_STORE_LOADER_set_attach(loader, attach_function) __OSSL_STORE_LOADER_set_attach(AmiSSLExtBase, (loader), (attach_function))

int __EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int saltlen ) = "\tjsr\t-3702(a6)";
#define EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(ctx, saltlen) __EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(AmiSSLExtBase, (ctx), (saltlen))

int __EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD * md ) = "\tjsr\t-3708(a6)";
#define EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(ctx, md) __EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const char * mdname ) = "\tjsr\t-3714(a6)";
#define EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(ctx, mdname) __EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(AmiSSLExtBase, (ctx), (mdname))

int __OSSL_PROVIDER_do_all(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") int (*cb)(OSSL_PROVIDER *provider,void *cbdata) , __reg("a2") void * cbdata ) = "\tjsr\t-3720(a6)";
#define OSSL_PROVIDER_do_all(ctx, cb, cbdata) __OSSL_PROVIDER_do_all(AmiSSLExtBase, (ctx), (cb), (cbdata))

int __EC_GROUP_get_field_type(__reg("a6") struct Library * , __reg("a0") const EC_GROUP * group ) = "\tjsr\t-3726(a6)";
#define EC_GROUP_get_field_type(group) __EC_GROUP_get_field_type(AmiSSLExtBase, (group))

int __X509_PUBKEY_eq(__reg("a6") struct Library * , __reg("a0") const X509_PUBKEY * a , __reg("a1") const X509_PUBKEY * b ) = "\tjsr\t-3732(a6)";
#define X509_PUBKEY_eq(a, b) __X509_PUBKEY_eq(AmiSSLExtBase, (a), (b))

int __EVP_PKEY_eq(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * a , __reg("a1") const EVP_PKEY * b ) = "\tjsr\t-3738(a6)";
#define EVP_PKEY_eq(a, b) __EVP_PKEY_eq(AmiSSLExtBase, (a), (b))

int __EVP_PKEY_parameters_eq(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * a , __reg("a1") const EVP_PKEY * b ) = "\tjsr\t-3744(a6)";
#define EVP_PKEY_parameters_eq(a, b) __EVP_PKEY_parameters_eq(AmiSSLExtBase, (a), (b))

const OSSL_ALGORITHM * __OSSL_PROVIDER_query_operation(__reg("a6") struct Library * , __reg("a0") const OSSL_PROVIDER * prov , __reg("d0") int operation_id , __reg("a1") int * no_cache ) = "\tjsr\t-3750(a6)";
#define OSSL_PROVIDER_query_operation(prov, operation_id, no_cache) __OSSL_PROVIDER_query_operation(AmiSSLExtBase, (prov), (operation_id), (no_cache))

void __OSSL_PROVIDER_unquery_operation(__reg("a6") struct Library * , __reg("a0") const OSSL_PROVIDER * prov , __reg("d0") int operation_id , __reg("a1") const OSSL_ALGORITHM * algs ) = "\tjsr\t-3756(a6)";
#define OSSL_PROVIDER_unquery_operation(prov, operation_id, algs) __OSSL_PROVIDER_unquery_operation(AmiSSLExtBase, (prov), (operation_id), (algs))

void * __OSSL_PROVIDER_get0_provider_ctx(__reg("a6") struct Library * , __reg("a0") const OSSL_PROVIDER * prov ) = "\tjsr\t-3762(a6)";
#define OSSL_PROVIDER_get0_provider_ctx(prov) __OSSL_PROVIDER_get0_provider_ctx(AmiSSLExtBase, (prov))

int __OSSL_PROVIDER_get_capabilities(__reg("a6") struct Library * , __reg("a0") const OSSL_PROVIDER * prov , __reg("a1") const char * capability , __reg("a2") OSSL_CALLBACK * cb , __reg("a3") void * arg ) = "\tjsr\t-3768(a6)";
#define OSSL_PROVIDER_get_capabilities(prov, capability, cb, arg) __OSSL_PROVIDER_get_capabilities(AmiSSLExtBase, (prov), (capability), (cb), (arg))

EC_GROUP * __EC_GROUP_new_by_curve_name_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq , __reg("d0") int nid ) = "\tjsr\t-3774(a6)";
#define EC_GROUP_new_by_curve_name_ex(libctx, propq, nid) __EC_GROUP_new_by_curve_name_ex(AmiSSLExtBase, (libctx), (propq), (nid))

EC_KEY * __EC_KEY_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * propq ) = "\tjsr\t-3780(a6)";
#define EC_KEY_new_ex(ctx, propq) __EC_KEY_new_ex(AmiSSLExtBase, (ctx), (propq))

EC_KEY * __EC_KEY_new_by_curve_name_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * propq , __reg("d0") int nid ) = "\tjsr\t-3786(a6)";
#define EC_KEY_new_by_curve_name_ex(ctx, propq, nid) __EC_KEY_new_by_curve_name_ex(AmiSSLExtBase, (ctx), (propq), (nid))

OSSL_LIB_CTX * __OSSL_LIB_CTX_set0_default(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx ) = "\tjsr\t-3792(a6)";
#define OSSL_LIB_CTX_set0_default(libctx) __OSSL_LIB_CTX_set0_default(AmiSSLExtBase, (libctx))

STACK_OF(X509_INFO) * __PEM_X509_INFO_read_bio_ex(__reg("a6") struct Library * , __reg("a0") BIO * bp , __reg("a1") STACK_OF(X509_INFO) * sk , __reg("a2") pem_password_cb * cb , __reg("a3") void * u , __reg("d0") OSSL_LIB_CTX * libctx , __reg("d1") const char * propq ) = "\tjsr\t-3798(a6)";
#define PEM_X509_INFO_read_bio_ex(bp, sk, cb, u, libctx, propq) __PEM_X509_INFO_read_bio_ex(AmiSSLExtBase, (bp), (sk), (cb), (u), (libctx), (propq))

int __X509_REQ_verify_ex(__reg("a6") struct Library * , __reg("a0") X509_REQ * a , __reg("a1") EVP_PKEY * r , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-3804(a6)";
#define X509_REQ_verify_ex(a, r, libctx, propq) __X509_REQ_verify_ex(AmiSSLExtBase, (a), (r), (libctx), (propq))

X509 * __X509_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-3810(a6)";
#define X509_new_ex(libctx, propq) __X509_new_ex(AmiSSLExtBase, (libctx), (propq))

int __X509_LOOKUP_ctrl_ex(__reg("a6") struct Library * , __reg("a0") X509_LOOKUP * ctx , __reg("d0") int cmd , __reg("a1") const char * argc , __reg("d1") long argl , __reg("a2") char ** ret , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d2") const char * propq ) = "\tjsr\t-3816(a6)";
#define X509_LOOKUP_ctrl_ex(ctx, cmd, argc, argl, ret, libctx, propq) __X509_LOOKUP_ctrl_ex(AmiSSLExtBase, (ctx), (cmd), (argc), (argl), (ret), (libctx), (propq))

int __X509_load_cert_file_ex(__reg("a6") struct Library * , __reg("a0") X509_LOOKUP * ctx , __reg("a1") const char * file , __reg("d0") int type , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-3822(a6)";
#define X509_load_cert_file_ex(ctx, file, type, libctx, propq) __X509_load_cert_file_ex(AmiSSLExtBase, (ctx), (file), (type), (libctx), (propq))

int __X509_load_cert_crl_file_ex(__reg("a6") struct Library * , __reg("a0") X509_LOOKUP * ctx , __reg("a1") const char * file , __reg("d0") int type , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-3828(a6)";
#define X509_load_cert_crl_file_ex(ctx, file, type, libctx, propq) __X509_load_cert_crl_file_ex(AmiSSLExtBase, (ctx), (file), (type), (libctx), (propq))

int __X509_LOOKUP_by_subject_ex(__reg("a6") struct Library * , __reg("a0") X509_LOOKUP * ctx , __reg("d0") X509_LOOKUP_TYPE type , __reg("a1") const X509_NAME * name , __reg("a2") X509_OBJECT * ret , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d1") const char * propq ) = "\tjsr\t-3834(a6)";
#define X509_LOOKUP_by_subject_ex(ctx, type, name, ret, libctx, propq) __X509_LOOKUP_by_subject_ex(AmiSSLExtBase, (ctx), (type), (name), (ret), (libctx), (propq))

int __X509_STORE_load_file_ex(__reg("a6") struct Library * , __reg("a0") X509_STORE * ctx , __reg("a1") const char * file , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-3840(a6)";
#define X509_STORE_load_file_ex(ctx, file, libctx, propq) __X509_STORE_load_file_ex(AmiSSLExtBase, (ctx), (file), (libctx), (propq))

int __X509_STORE_load_store_ex(__reg("a6") struct Library * , __reg("a0") X509_STORE * ctx , __reg("a1") const char * store , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-3846(a6)";
#define X509_STORE_load_store_ex(ctx, store, libctx, propq) __X509_STORE_load_store_ex(AmiSSLExtBase, (ctx), (store), (libctx), (propq))

int __X509_STORE_load_locations_ex(__reg("a6") struct Library * , __reg("a0") X509_STORE * ctx , __reg("a1") const char * file , __reg("a2") const char * dir , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d0") const char * propq ) = "\tjsr\t-3852(a6)";
#define X509_STORE_load_locations_ex(ctx, file, dir, libctx, propq) __X509_STORE_load_locations_ex(AmiSSLExtBase, (ctx), (file), (dir), (libctx), (propq))

int __X509_STORE_set_default_paths_ex(__reg("a6") struct Library * , __reg("a0") X509_STORE * ctx , __reg("a1") OSSL_LIB_CTX * libctx , __reg("a2") const char * propq ) = "\tjsr\t-3858(a6)";
#define X509_STORE_set_default_paths_ex(ctx, libctx, propq) __X509_STORE_set_default_paths_ex(AmiSSLExtBase, (ctx), (libctx), (propq))

STACK_OF(X509) * __X509_build_chain(__reg("a6") struct Library * , __reg("a0") X509 * target , __reg("a1") STACK_OF(X509) * certs , __reg("a2") X509_STORE * store , __reg("d0") int with_self_signed , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d1") const char * propq ) = "\tjsr\t-3864(a6)";
#define X509_build_chain(target, certs, store, with_self_signed, libctx, propq) __X509_build_chain(AmiSSLExtBase, (target), (certs), (store), (with_self_signed), (libctx), (propq))

int __X509V3_set_issuer_pkey(__reg("a6") struct Library * , __reg("a0") X509V3_CTX * ctx , __reg("a1") EVP_PKEY * pkey ) = "\tjsr\t-3870(a6)";
#define X509V3_set_issuer_pkey(ctx, pkey) __X509V3_set_issuer_pkey(AmiSSLExtBase, (ctx), (pkey))

char * __i2s_ASN1_UTF8STRING(__reg("a6") struct Library * , __reg("a0") X509V3_EXT_METHOD * method , __reg("a1") ASN1_UTF8STRING * utf8 ) = "\tjsr\t-3876(a6)";
#define i2s_ASN1_UTF8STRING(method, utf8) __i2s_ASN1_UTF8STRING(AmiSSLExtBase, (method), (utf8))

ASN1_UTF8STRING * __s2i_ASN1_UTF8STRING(__reg("a6") struct Library * , __reg("a0") X509V3_EXT_METHOD * method , __reg("a1") X509V3_CTX * ctx , __reg("a2") const char * str ) = "\tjsr\t-3882(a6)";
#define s2i_ASN1_UTF8STRING(method, ctx, str) __s2i_ASN1_UTF8STRING(AmiSSLExtBase, (method), (ctx), (str))

OSSL_STORE_CTX * __OSSL_STORE_open_ex(__reg("a6") struct Library * , __reg("a0") const char * uri , __reg("a1") OSSL_LIB_CTX * libctx , __reg("a2") const char * propq , __reg("a3") const UI_METHOD * ui_method , __reg("d0") void * ui_data , __reg("d1") const OSSL_PARAM * params , __reg("d2") OSSL_STORE_post_process_info_fn post_process , __reg("d3") void * post_process_data ) = "\tjsr\t-3888(a6)";
#define OSSL_STORE_open_ex(uri, libctx, propq, ui_method, ui_data, params, post_process, post_process_data) __OSSL_STORE_open_ex(AmiSSLExtBase, (uri), (libctx), (propq), (ui_method), (ui_data), (params), (post_process), (post_process_data))

OSSL_DECODER * __OSSL_DECODER_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * name , __reg("a2") const char * properties ) = "\tjsr\t-3894(a6)";
#define OSSL_DECODER_fetch(libctx, name, properties) __OSSL_DECODER_fetch(AmiSSLExtBase, (libctx), (name), (properties))

int __OSSL_DECODER_up_ref(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER * encoder ) = "\tjsr\t-3900(a6)";
#define OSSL_DECODER_up_ref(encoder) __OSSL_DECODER_up_ref(AmiSSLExtBase, (encoder))

void __OSSL_DECODER_free(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER * encoder ) = "\tjsr\t-3906(a6)";
#define OSSL_DECODER_free(encoder) __OSSL_DECODER_free(AmiSSLExtBase, (encoder))

const OSSL_PROVIDER * __OSSL_DECODER_get0_provider(__reg("a6") struct Library * , __reg("a0") const OSSL_DECODER * encoder ) = "\tjsr\t-3912(a6)";
#define OSSL_DECODER_get0_provider(encoder) __OSSL_DECODER_get0_provider(AmiSSLExtBase, (encoder))

const char * __OSSL_DECODER_get0_properties(__reg("a6") struct Library * , __reg("a0") const OSSL_DECODER * encoder ) = "\tjsr\t-3918(a6)";
#define OSSL_DECODER_get0_properties(encoder) __OSSL_DECODER_get0_properties(AmiSSLExtBase, (encoder))

int __OSSL_DECODER_is_a(__reg("a6") struct Library * , __reg("a0") const OSSL_DECODER * encoder , __reg("a1") const char * name ) = "\tjsr\t-3924(a6)";
#define OSSL_DECODER_is_a(encoder, name) __OSSL_DECODER_is_a(AmiSSLExtBase, (encoder), (name))

void __OSSL_DECODER_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(OSSL_DECODER *encoder,void *arg) , __reg("a2") void * arg ) = "\tjsr\t-3930(a6)";
#define OSSL_DECODER_do_all_provided(libctx, fn, arg) __OSSL_DECODER_do_all_provided(AmiSSLExtBase, (libctx), (fn), (arg))

int __OSSL_DECODER_names_do_all(__reg("a6") struct Library * , __reg("a0") const OSSL_DECODER * encoder , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-3936(a6)";
#define OSSL_DECODER_names_do_all(encoder, fn, data) __OSSL_DECODER_names_do_all(AmiSSLExtBase, (encoder), (fn), (data))

const OSSL_PARAM * __OSSL_DECODER_settable_ctx_params(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER * encoder ) = "\tjsr\t-3942(a6)";
#define OSSL_DECODER_settable_ctx_params(encoder) __OSSL_DECODER_settable_ctx_params(AmiSSLExtBase, (encoder))

OSSL_DECODER_CTX * __OSSL_DECODER_CTX_new(__reg("a6") struct Library * ) = "\tjsr\t-3948(a6)";
#define OSSL_DECODER_CTX_new() __OSSL_DECODER_CTX_new(AmiSSLExtBase)

int __OSSL_DECODER_CTX_set_params(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-3954(a6)";
#define OSSL_DECODER_CTX_set_params(ctx, params) __OSSL_DECODER_CTX_set_params(AmiSSLExtBase, (ctx), (params))

void __OSSL_DECODER_CTX_free(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx ) = "\tjsr\t-3960(a6)";
#define OSSL_DECODER_CTX_free(ctx) __OSSL_DECODER_CTX_free(AmiSSLExtBase, (ctx))

int __OSSL_DECODER_CTX_set_passphrase(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") const unsigned char * kstr , __reg("d0") size_t klen ) = "\tjsr\t-3966(a6)";
#define OSSL_DECODER_CTX_set_passphrase(ctx, kstr, klen) __OSSL_DECODER_CTX_set_passphrase(AmiSSLExtBase, (ctx), (kstr), (klen))

int __OSSL_DECODER_CTX_set_pem_password_cb(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") pem_password_cb * cb , __reg("a2") void * cbarg ) = "\tjsr\t-3972(a6)";
#define OSSL_DECODER_CTX_set_pem_password_cb(ctx, cb, cbarg) __OSSL_DECODER_CTX_set_pem_password_cb(AmiSSLExtBase, (ctx), (cb), (cbarg))

int __OSSL_DECODER_CTX_set_passphrase_ui(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") const UI_METHOD * ui_method , __reg("a2") void * ui_data ) = "\tjsr\t-3978(a6)";
#define OSSL_DECODER_CTX_set_passphrase_ui(ctx, ui_method, ui_data) __OSSL_DECODER_CTX_set_passphrase_ui(AmiSSLExtBase, (ctx), (ui_method), (ui_data))

int __OSSL_DECODER_from_bio(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") BIO * in ) = "\tjsr\t-3984(a6)";
#define OSSL_DECODER_from_bio(ctx, in) __OSSL_DECODER_from_bio(AmiSSLExtBase, (ctx), (in))

int __OSSL_DECODER_CTX_add_decoder(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") OSSL_DECODER * decoder ) = "\tjsr\t-3990(a6)";
#define OSSL_DECODER_CTX_add_decoder(ctx, decoder) __OSSL_DECODER_CTX_add_decoder(AmiSSLExtBase, (ctx), (decoder))

int __OSSL_DECODER_CTX_add_extra(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") OSSL_LIB_CTX * libctx , __reg("a2") const char * propq ) = "\tjsr\t-3996(a6)";
#define OSSL_DECODER_CTX_add_extra(ctx, libctx, propq) __OSSL_DECODER_CTX_add_extra(AmiSSLExtBase, (ctx), (libctx), (propq))

int __OSSL_DECODER_CTX_get_num_decoders(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx ) = "\tjsr\t-4002(a6)";
#define OSSL_DECODER_CTX_get_num_decoders(ctx) __OSSL_DECODER_CTX_get_num_decoders(AmiSSLExtBase, (ctx))

int __OSSL_DECODER_CTX_set_input_type(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") const char * input_type ) = "\tjsr\t-4008(a6)";
#define OSSL_DECODER_CTX_set_input_type(ctx, input_type) __OSSL_DECODER_CTX_set_input_type(AmiSSLExtBase, (ctx), (input_type))

int __OSSL_DECODER_export(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_INSTANCE * decoder_inst , __reg("a1") void * reference , __reg("d0") size_t reference_sz , __reg("a2") OSSL_CALLBACK * export_cb , __reg("a3") void * export_cbarg ) = "\tjsr\t-4014(a6)";
#define OSSL_DECODER_export(decoder_inst, reference, reference_sz, export_cb, export_cbarg) __OSSL_DECODER_export(AmiSSLExtBase, (decoder_inst), (reference), (reference_sz), (export_cb), (export_cbarg))

OSSL_DECODER * __OSSL_DECODER_INSTANCE_get_decoder(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_INSTANCE * decoder_inst ) = "\tjsr\t-4020(a6)";
#define OSSL_DECODER_INSTANCE_get_decoder(decoder_inst) __OSSL_DECODER_INSTANCE_get_decoder(AmiSSLExtBase, (decoder_inst))

void * __OSSL_DECODER_INSTANCE_get_decoder_ctx(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_INSTANCE * decoder_inst ) = "\tjsr\t-4026(a6)";
#define OSSL_DECODER_INSTANCE_get_decoder_ctx(decoder_inst) __OSSL_DECODER_INSTANCE_get_decoder_ctx(AmiSSLExtBase, (decoder_inst))

const OSSL_PARAM * __OSSL_DECODER_gettable_params(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER * decoder ) = "\tjsr\t-4032(a6)";
#define OSSL_DECODER_gettable_params(decoder) __OSSL_DECODER_gettable_params(AmiSSLExtBase, (decoder))

int __OSSL_DECODER_get_params(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER * decoder , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-4038(a6)";
#define OSSL_DECODER_get_params(decoder, params) __OSSL_DECODER_get_params(AmiSSLExtBase, (decoder), (params))

OSSL_DECODER_CTX * __OSSL_DECODER_CTX_new_for_pkey(__reg("a6") struct Library * , __reg("a0") EVP_PKEY ** pkey , __reg("a1") const char * input_type , __reg("a2") const char * input_struct , __reg("a3") const char * keytype , __reg("d0") int selection , __reg("d1") OSSL_LIB_CTX * libctx , __reg("d2") const char * propquery ) = "\tjsr\t-4044(a6)";
#define OSSL_DECODER_CTX_new_for_pkey(pkey, input_type, input_struct, keytype, selection, libctx, propquery) __OSSL_DECODER_CTX_new_for_pkey(AmiSSLExtBase, (pkey), (input_type), (input_struct), (keytype), (selection), (libctx), (propquery))

int __OSSL_DECODER_CTX_set_construct(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") OSSL_DECODER_CONSTRUCT * construct ) = "\tjsr\t-4050(a6)";
#define OSSL_DECODER_CTX_set_construct(ctx, construct) __OSSL_DECODER_CTX_set_construct(AmiSSLExtBase, (ctx), (construct))

int __OSSL_DECODER_CTX_set_construct_data(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") void * construct_data ) = "\tjsr\t-4056(a6)";
#define OSSL_DECODER_CTX_set_construct_data(ctx, construct_data) __OSSL_DECODER_CTX_set_construct_data(AmiSSLExtBase, (ctx), (construct_data))

int __OSSL_DECODER_CTX_set_cleanup(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") OSSL_DECODER_CLEANUP * cleanup ) = "\tjsr\t-4062(a6)";
#define OSSL_DECODER_CTX_set_cleanup(ctx, cleanup) __OSSL_DECODER_CTX_set_cleanup(AmiSSLExtBase, (ctx), (cleanup))

OSSL_DECODER_CONSTRUCT * __OSSL_DECODER_CTX_get_construct(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx ) = "\tjsr\t-4068(a6)";
#define OSSL_DECODER_CTX_get_construct(ctx) __OSSL_DECODER_CTX_get_construct(AmiSSLExtBase, (ctx))

void * __OSSL_DECODER_CTX_get_construct_data(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx ) = "\tjsr\t-4074(a6)";
#define OSSL_DECODER_CTX_get_construct_data(ctx) __OSSL_DECODER_CTX_get_construct_data(AmiSSLExtBase, (ctx))

OSSL_DECODER_CLEANUP * __OSSL_DECODER_CTX_get_cleanup(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx ) = "\tjsr\t-4080(a6)";
#define OSSL_DECODER_CTX_get_cleanup(ctx) __OSSL_DECODER_CTX_get_cleanup(AmiSSLExtBase, (ctx))

EVP_RAND_CTX * __RAND_get0_primary(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx ) = "\tjsr\t-4086(a6)";
#define RAND_get0_primary(ctx) __RAND_get0_primary(AmiSSLExtBase, (ctx))

EVP_RAND_CTX * __RAND_get0_public(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx ) = "\tjsr\t-4092(a6)";
#define RAND_get0_public(ctx) __RAND_get0_public(AmiSSLExtBase, (ctx))

EVP_RAND_CTX * __RAND_get0_private(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx ) = "\tjsr\t-4098(a6)";
#define RAND_get0_private(ctx) __RAND_get0_private(AmiSSLExtBase, (ctx))

const ASN1_TYPE * __PKCS12_SAFEBAG_get0_bag_obj(__reg("a6") struct Library * , __reg("a0") const PKCS12_SAFEBAG * bag ) = "\tjsr\t-4104(a6)";
#define PKCS12_SAFEBAG_get0_bag_obj(bag) __PKCS12_SAFEBAG_get0_bag_obj(AmiSSLExtBase, (bag))

const ASN1_OBJECT * __PKCS12_SAFEBAG_get0_bag_type(__reg("a6") struct Library * , __reg("a0") const PKCS12_SAFEBAG * bag ) = "\tjsr\t-4110(a6)";
#define PKCS12_SAFEBAG_get0_bag_type(bag) __PKCS12_SAFEBAG_get0_bag_type(AmiSSLExtBase, (bag))

PKCS12_SAFEBAG * __PKCS12_SAFEBAG_create_secret(__reg("a6") struct Library * , __reg("d0") int type , __reg("d1") int vtype , __reg("a0") const unsigned char * value , __reg("d2") int len ) = "\tjsr\t-4116(a6)";
#define PKCS12_SAFEBAG_create_secret(type, vtype, value, len) __PKCS12_SAFEBAG_create_secret(AmiSSLExtBase, (type), (vtype), (value), (len))

int __PKCS12_add1_attr_by_NID(__reg("a6") struct Library * , __reg("a0") PKCS12_SAFEBAG * bag , __reg("d0") int nid , __reg("d1") int type , __reg("a1") const unsigned char * bytes , __reg("d2") int len ) = "\tjsr\t-4122(a6)";
#define PKCS12_add1_attr_by_NID(bag, nid, type, bytes, len) __PKCS12_add1_attr_by_NID(AmiSSLExtBase, (bag), (nid), (type), (bytes), (len))

int __PKCS12_add1_attr_by_txt(__reg("a6") struct Library * , __reg("a0") PKCS12_SAFEBAG * bag , __reg("a1") const char * attrname , __reg("d0") int type , __reg("a2") const unsigned char * bytes , __reg("d1") int len ) = "\tjsr\t-4128(a6)";
#define PKCS12_add1_attr_by_txt(bag, attrname, type, bytes, len) __PKCS12_add1_attr_by_txt(AmiSSLExtBase, (bag), (attrname), (type), (bytes), (len))

PKCS12_SAFEBAG * __PKCS12_add_secret(__reg("a6") struct Library * , __reg("a0") STACK_OF(PKCS12_SAFEBAG) ** pbags , __reg("d0") int nid_type , __reg("a1") const unsigned char * value , __reg("d1") int len ) = "\tjsr\t-4134(a6)";
#define PKCS12_add_secret(pbags, nid_type, value, len) __PKCS12_add_secret(AmiSSLExtBase, (pbags), (nid_type), (value), (len))

int __SMIME_write_ASN1_ex(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("a1") ASN1_VALUE * val , __reg("a2") BIO * data , __reg("d0") int flags , __reg("d1") int ctype_nid , __reg("d2") int econt_nid , __reg("a3") STACK_OF(X509_ALGOR) * mdalgs , __reg("d3") const ASN1_ITEM * it , __reg("d4") OSSL_LIB_CTX * libctx , __reg("d5") const char * propq ) = "\tjsr\t-4140(a6)";
#define SMIME_write_ASN1_ex(bio, val, data, flags, ctype_nid, econt_nid, mdalgs, it, libctx, propq) __SMIME_write_ASN1_ex(AmiSSLExtBase, (bio), (val), (data), (flags), (ctype_nid), (econt_nid), (mdalgs), (it), (libctx), (propq))

ASN1_VALUE * __SMIME_read_ASN1_ex(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("d0") int flags , __reg("a1") BIO ** bcont , __reg("a2") const ASN1_ITEM * it , __reg("a3") ASN1_VALUE ** x , __reg("d1") OSSL_LIB_CTX * libctx , __reg("d2") const char * propq ) = "\tjsr\t-4146(a6)";
#define SMIME_read_ASN1_ex(bio, flags, bcont, it, x, libctx, propq) __SMIME_read_ASN1_ex(AmiSSLExtBase, (bio), (flags), (bcont), (it), (x), (libctx), (propq))

CMS_ContentInfo * __CMS_ContentInfo_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-4152(a6)";
#define CMS_ContentInfo_new_ex(libctx, propq) __CMS_ContentInfo_new_ex(AmiSSLExtBase, (libctx), (propq))

CMS_ContentInfo * __SMIME_read_CMS_ex(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("d0") int flags , __reg("a1") BIO ** bcont , __reg("a2") CMS_ContentInfo ** ci ) = "\tjsr\t-4158(a6)";
#define SMIME_read_CMS_ex(bio, flags, bcont, ci) __SMIME_read_CMS_ex(AmiSSLExtBase, (bio), (flags), (bcont), (ci))

CMS_ContentInfo * __CMS_sign_ex(__reg("a6") struct Library * , __reg("a0") X509 * signcert , __reg("a1") EVP_PKEY * pkey , __reg("a2") STACK_OF(X509) * certs , __reg("a3") BIO * data , __reg("d0") unsigned int flags , __reg("d1") OSSL_LIB_CTX * ctx , __reg("d2") const char * propq ) = "\tjsr\t-4164(a6)";
#define CMS_sign_ex(signcert, pkey, certs, data, flags, ctx, propq) __CMS_sign_ex(AmiSSLExtBase, (signcert), (pkey), (certs), (data), (flags), (ctx), (propq))

CMS_ContentInfo * __CMS_data_create_ex(__reg("a6") struct Library * , __reg("a0") BIO * in , __reg("d0") unsigned int flags , __reg("a1") OSSL_LIB_CTX * ctx , __reg("a2") const char * propq ) = "\tjsr\t-4170(a6)";
#define CMS_data_create_ex(in, flags, ctx, propq) __CMS_data_create_ex(AmiSSLExtBase, (in), (flags), (ctx), (propq))

CMS_ContentInfo * __CMS_digest_create_ex(__reg("a6") struct Library * , __reg("a0") BIO * in , __reg("a1") const EVP_MD * md , __reg("d0") unsigned int flags , __reg("a2") OSSL_LIB_CTX * ctx , __reg("a3") const char * propq ) = "\tjsr\t-4176(a6)";
#define CMS_digest_create_ex(in, md, flags, ctx, propq) __CMS_digest_create_ex(AmiSSLExtBase, (in), (md), (flags), (ctx), (propq))

CMS_ContentInfo * __CMS_EncryptedData_encrypt_ex(__reg("a6") struct Library * , __reg("a0") BIO * in , __reg("a1") const EVP_CIPHER * cipher , __reg("a2") const unsigned char * key , __reg("d0") size_t keylen , __reg("d1") unsigned int flags , __reg("a3") OSSL_LIB_CTX * ctx , __reg("d2") const char * propq ) = "\tjsr\t-4182(a6)";
#define CMS_EncryptedData_encrypt_ex(in, cipher, key, keylen, flags, ctx, propq) __CMS_EncryptedData_encrypt_ex(AmiSSLExtBase, (in), (cipher), (key), (keylen), (flags), (ctx), (propq))

CMS_ContentInfo * __CMS_encrypt_ex(__reg("a6") struct Library * , __reg("a0") STACK_OF(X509) * certs , __reg("a1") BIO * in , __reg("a2") const EVP_CIPHER * cipher , __reg("d0") unsigned int flags , __reg("a3") OSSL_LIB_CTX * ctx , __reg("d1") const char * propq ) = "\tjsr\t-4188(a6)";
#define CMS_encrypt_ex(certs, in, cipher, flags, ctx, propq) __CMS_encrypt_ex(AmiSSLExtBase, (certs), (in), (cipher), (flags), (ctx), (propq))

CMS_ContentInfo * __CMS_EnvelopedData_create_ex(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher , __reg("a1") OSSL_LIB_CTX * ctx , __reg("a2") const char * propq ) = "\tjsr\t-4194(a6)";
#define CMS_EnvelopedData_create_ex(cipher, ctx, propq) __CMS_EnvelopedData_create_ex(AmiSSLExtBase, (cipher), (ctx), (propq))

CMS_ReceiptRequest * __CMS_ReceiptRequest_create0_ex(__reg("a6") struct Library * , __reg("a0") unsigned char * id , __reg("d0") int idlen , __reg("d1") int allorfirst , __reg("a1") STACK_OF(GENERAL_NAMES) * receiptList , __reg("a2") STACK_OF(GENERAL_NAMES) * receiptsTo , __reg("a3") OSSL_LIB_CTX * ctx ) = "\tjsr\t-4200(a6)";
#define CMS_ReceiptRequest_create0_ex(id, idlen, allorfirst, receiptList, receiptsTo, ctx) __CMS_ReceiptRequest_create0_ex(AmiSSLExtBase, (id), (idlen), (allorfirst), (receiptList), (receiptsTo), (ctx))

int __EVP_SignFinal_ex(__reg("a6") struct Library * , __reg("a0") EVP_MD_CTX * ctx , __reg("a1") unsigned char * md , __reg("a2") unsigned int * s , __reg("a3") EVP_PKEY * pkey , __reg("d0") OSSL_LIB_CTX * libctx , __reg("d1") const char * propq ) = "\tjsr\t-4206(a6)";
#define EVP_SignFinal_ex(ctx, md, s, pkey, libctx, propq) __EVP_SignFinal_ex(AmiSSLExtBase, (ctx), (md), (s), (pkey), (libctx), (propq))

int __EVP_VerifyFinal_ex(__reg("a6") struct Library * , __reg("a0") EVP_MD_CTX * ctx , __reg("a1") const unsigned char * sigbuf , __reg("d0") unsigned int siglen , __reg("a2") EVP_PKEY * pkey , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d1") const char * propq ) = "\tjsr\t-4212(a6)";
#define EVP_VerifyFinal_ex(ctx, sigbuf, siglen, pkey, libctx, propq) __EVP_VerifyFinal_ex(AmiSSLExtBase, (ctx), (sigbuf), (siglen), (pkey), (libctx), (propq))

int __EVP_DigestSignInit_ex(__reg("a6") struct Library * , __reg("a0") EVP_MD_CTX * ctx , __reg("a1") EVP_PKEY_CTX ** pctx , __reg("a2") const char * mdname , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d0") const char * props , __reg("d1") EVP_PKEY * pkey , __reg("d2") const OSSL_PARAM * params ) = "\tjsr\t-4218(a6)";
#define EVP_DigestSignInit_ex(ctx, pctx, mdname, libctx, props, pkey, params) __EVP_DigestSignInit_ex(AmiSSLExtBase, (ctx), (pctx), (mdname), (libctx), (props), (pkey), (params))

int __EVP_DigestVerifyInit_ex(__reg("a6") struct Library * , __reg("a0") EVP_MD_CTX * ctx , __reg("a1") EVP_PKEY_CTX ** pctx , __reg("a2") const char * mdname , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d0") const char * props , __reg("d1") EVP_PKEY * pkey , __reg("d2") const OSSL_PARAM * params ) = "\tjsr\t-4224(a6)";
#define EVP_DigestVerifyInit_ex(ctx, pctx, mdname, libctx, props, pkey, params) __EVP_DigestVerifyInit_ex(AmiSSLExtBase, (ctx), (pctx), (mdname), (libctx), (props), (pkey), (params))

PKCS7 * __PKCS7_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-4230(a6)";
#define PKCS7_new_ex(libctx, propq) __PKCS7_new_ex(AmiSSLExtBase, (libctx), (propq))

PKCS7 * __PKCS7_sign_ex(__reg("a6") struct Library * , __reg("a0") X509 * signcert , __reg("a1") EVP_PKEY * pkey , __reg("a2") STACK_OF(X509) * certs , __reg("a3") BIO * data , __reg("d0") int flags , __reg("d1") OSSL_LIB_CTX * libctx , __reg("d2") const char * propq ) = "\tjsr\t-4236(a6)";
#define PKCS7_sign_ex(signcert, pkey, certs, data, flags, libctx, propq) __PKCS7_sign_ex(AmiSSLExtBase, (signcert), (pkey), (certs), (data), (flags), (libctx), (propq))

PKCS7 * __PKCS7_encrypt_ex(__reg("a6") struct Library * , __reg("a0") STACK_OF(X509) * certs , __reg("a1") BIO * in , __reg("a2") const EVP_CIPHER * cipher , __reg("d0") int flags , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d1") const char * propq ) = "\tjsr\t-4242(a6)";
#define PKCS7_encrypt_ex(certs, in, cipher, flags, libctx, propq) __PKCS7_encrypt_ex(AmiSSLExtBase, (certs), (in), (cipher), (flags), (libctx), (propq))

PKCS7 * __SMIME_read_PKCS7_ex(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("a1") BIO ** bcont , __reg("a2") PKCS7 ** p7 ) = "\tjsr\t-4248(a6)";
#define SMIME_read_PKCS7_ex(bio, bcont, p7) __SMIME_read_PKCS7_ex(AmiSSLExtBase, (bio), (bcont), (p7))

int __OSSL_PROVIDER_self_test(__reg("a6") struct Library * , __reg("a0") const OSSL_PROVIDER * prov ) = "\tjsr\t-4254(a6)";
#define OSSL_PROVIDER_self_test(prov) __OSSL_PROVIDER_self_test(AmiSSLExtBase, (prov))

int __EVP_PKEY_CTX_set_tls1_prf_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD * md ) = "\tjsr\t-4260(a6)";
#define EVP_PKEY_CTX_set_tls1_prf_md(ctx, md) __EVP_PKEY_CTX_set_tls1_prf_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_set1_tls1_prf_secret(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * pctx , __reg("a1") const unsigned char * sec , __reg("d0") int seclen ) = "\tjsr\t-4266(a6)";
#define EVP_PKEY_CTX_set1_tls1_prf_secret(pctx, sec, seclen) __EVP_PKEY_CTX_set1_tls1_prf_secret(AmiSSLExtBase, (pctx), (sec), (seclen))

int __EVP_PKEY_CTX_add1_tls1_prf_seed(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * pctx , __reg("a1") const unsigned char * seed , __reg("d0") int seedlen ) = "\tjsr\t-4272(a6)";
#define EVP_PKEY_CTX_add1_tls1_prf_seed(pctx, seed, seedlen) __EVP_PKEY_CTX_add1_tls1_prf_seed(AmiSSLExtBase, (pctx), (seed), (seedlen))

int __EVP_PKEY_CTX_set_hkdf_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD * md ) = "\tjsr\t-4278(a6)";
#define EVP_PKEY_CTX_set_hkdf_md(ctx, md) __EVP_PKEY_CTX_set_hkdf_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_set1_hkdf_salt(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const unsigned char * salt , __reg("d0") int saltlen ) = "\tjsr\t-4284(a6)";
#define EVP_PKEY_CTX_set1_hkdf_salt(ctx, salt, saltlen) __EVP_PKEY_CTX_set1_hkdf_salt(AmiSSLExtBase, (ctx), (salt), (saltlen))

int __EVP_PKEY_CTX_set1_hkdf_key(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const unsigned char * key , __reg("d0") int keylen ) = "\tjsr\t-4290(a6)";
#define EVP_PKEY_CTX_set1_hkdf_key(ctx, key, keylen) __EVP_PKEY_CTX_set1_hkdf_key(AmiSSLExtBase, (ctx), (key), (keylen))

int __EVP_PKEY_CTX_add1_hkdf_info(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const unsigned char * info , __reg("d0") int infolen ) = "\tjsr\t-4296(a6)";
#define EVP_PKEY_CTX_add1_hkdf_info(ctx, info, infolen) __EVP_PKEY_CTX_add1_hkdf_info(AmiSSLExtBase, (ctx), (info), (infolen))

int __EVP_PKEY_CTX_set_hkdf_mode(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int mode ) = "\tjsr\t-4302(a6)";
#define EVP_PKEY_CTX_set_hkdf_mode(ctx, mode) __EVP_PKEY_CTX_set_hkdf_mode(AmiSSLExtBase, (ctx), (mode))

int __EVP_PKEY_CTX_set1_pbe_pass(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const char * pass , __reg("d0") int passlen ) = "\tjsr\t-4308(a6)";
#define EVP_PKEY_CTX_set1_pbe_pass(ctx, pass, passlen) __EVP_PKEY_CTX_set1_pbe_pass(AmiSSLExtBase, (ctx), (pass), (passlen))

int __EVP_PKEY_CTX_set1_scrypt_salt(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const unsigned char * salt , __reg("d0") int saltlen ) = "\tjsr\t-4314(a6)";
#define EVP_PKEY_CTX_set1_scrypt_salt(ctx, salt, saltlen) __EVP_PKEY_CTX_set1_scrypt_salt(AmiSSLExtBase, (ctx), (salt), (saltlen))

int __EVP_PKEY_CTX_set_scrypt_N(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0/d1") uint64_t n ) = "\tjsr\t-4320(a6)";
#define EVP_PKEY_CTX_set_scrypt_N(ctx, n) __EVP_PKEY_CTX_set_scrypt_N(AmiSSLExtBase, (ctx), (n))

int __EVP_PKEY_CTX_set_scrypt_r(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0/d1") uint64_t r ) = "\tjsr\t-4326(a6)";
#define EVP_PKEY_CTX_set_scrypt_r(ctx, r) __EVP_PKEY_CTX_set_scrypt_r(AmiSSLExtBase, (ctx), (r))

int __EVP_PKEY_CTX_set_scrypt_p(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0/d1") uint64_t p ) = "\tjsr\t-4332(a6)";
#define EVP_PKEY_CTX_set_scrypt_p(ctx, p) __EVP_PKEY_CTX_set_scrypt_p(AmiSSLExtBase, (ctx), (p))

int __EVP_PKEY_CTX_set_scrypt_maxmem_bytes(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0/d1") uint64_t maxmem_bytes ) = "\tjsr\t-4338(a6)";
#define EVP_PKEY_CTX_set_scrypt_maxmem_bytes(ctx, maxmem_bytes) __EVP_PKEY_CTX_set_scrypt_maxmem_bytes(AmiSSLExtBase, (ctx), (maxmem_bytes))

int __EVP_PKEY_CTX_set_dh_kdf_type(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int kdf ) = "\tjsr\t-4344(a6)";
#define EVP_PKEY_CTX_set_dh_kdf_type(ctx, kdf) __EVP_PKEY_CTX_set_dh_kdf_type(AmiSSLExtBase, (ctx), (kdf))

int __EVP_PKEY_CTX_get_dh_kdf_type(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx ) = "\tjsr\t-4350(a6)";
#define EVP_PKEY_CTX_get_dh_kdf_type(ctx) __EVP_PKEY_CTX_get_dh_kdf_type(AmiSSLExtBase, (ctx))

int __EVP_PKEY_CTX_set0_dh_kdf_oid(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") ASN1_OBJECT * oid ) = "\tjsr\t-4356(a6)";
#define EVP_PKEY_CTX_set0_dh_kdf_oid(ctx, oid) __EVP_PKEY_CTX_set0_dh_kdf_oid(AmiSSLExtBase, (ctx), (oid))

int __EVP_PKEY_CTX_get0_dh_kdf_oid(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") ASN1_OBJECT ** oid ) = "\tjsr\t-4362(a6)";
#define EVP_PKEY_CTX_get0_dh_kdf_oid(ctx, oid) __EVP_PKEY_CTX_get0_dh_kdf_oid(AmiSSLExtBase, (ctx), (oid))

int __EVP_PKEY_CTX_set_dh_kdf_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD * md ) = "\tjsr\t-4368(a6)";
#define EVP_PKEY_CTX_set_dh_kdf_md(ctx, md) __EVP_PKEY_CTX_set_dh_kdf_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_get_dh_kdf_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD ** md ) = "\tjsr\t-4374(a6)";
#define EVP_PKEY_CTX_get_dh_kdf_md(ctx, md) __EVP_PKEY_CTX_get_dh_kdf_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_set_dh_kdf_outlen(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int len ) = "\tjsr\t-4380(a6)";
#define EVP_PKEY_CTX_set_dh_kdf_outlen(ctx, len) __EVP_PKEY_CTX_set_dh_kdf_outlen(AmiSSLExtBase, (ctx), (len))

int __EVP_PKEY_CTX_get_dh_kdf_outlen(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") int * len ) = "\tjsr\t-4386(a6)";
#define EVP_PKEY_CTX_get_dh_kdf_outlen(ctx, len) __EVP_PKEY_CTX_get_dh_kdf_outlen(AmiSSLExtBase, (ctx), (len))

int __EVP_PKEY_CTX_set0_dh_kdf_ukm(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") unsigned char * ukm , __reg("d0") int len ) = "\tjsr\t-4392(a6)";
#define EVP_PKEY_CTX_set0_dh_kdf_ukm(ctx, ukm, len) __EVP_PKEY_CTX_set0_dh_kdf_ukm(AmiSSLExtBase, (ctx), (ukm), (len))

int __EVP_PKEY_CTX_get0_dh_kdf_ukm(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") unsigned char ** ukm ) = "\tjsr\t-4398(a6)";
#define EVP_PKEY_CTX_get0_dh_kdf_ukm(ctx, ukm) __EVP_PKEY_CTX_get0_dh_kdf_ukm(AmiSSLExtBase, (ctx), (ukm))

int __EVP_CIPHER_CTX_get_updated_iv(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx , __reg("a1") void * buf , __reg("d0") size_t len ) = "\tjsr\t-4404(a6)";
#define EVP_CIPHER_CTX_get_updated_iv(ctx, buf, len) __EVP_CIPHER_CTX_get_updated_iv(AmiSSLExtBase, (ctx), (buf), (len))

int __EVP_CIPHER_CTX_get_original_iv(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx , __reg("a1") void * buf , __reg("d0") size_t len ) = "\tjsr\t-4410(a6)";
#define EVP_CIPHER_CTX_get_original_iv(ctx, buf, len) __EVP_CIPHER_CTX_get_original_iv(AmiSSLExtBase, (ctx), (buf), (len))

const OSSL_PARAM * __EVP_KEYMGMT_gettable_params(__reg("a6") struct Library * , __reg("a0") const EVP_KEYMGMT * keymgmt ) = "\tjsr\t-4416(a6)";
#define EVP_KEYMGMT_gettable_params(keymgmt) __EVP_KEYMGMT_gettable_params(AmiSSLExtBase, (keymgmt))

const OSSL_PARAM * __EVP_KEYMGMT_settable_params(__reg("a6") struct Library * , __reg("a0") const EVP_KEYMGMT * keymgmt ) = "\tjsr\t-4422(a6)";
#define EVP_KEYMGMT_settable_params(keymgmt) __EVP_KEYMGMT_settable_params(AmiSSLExtBase, (keymgmt))

const OSSL_PARAM * __EVP_KEYMGMT_gen_settable_params(__reg("a6") struct Library * , __reg("a0") const EVP_KEYMGMT * keymgmt ) = "\tjsr\t-4428(a6)";
#define EVP_KEYMGMT_gen_settable_params(keymgmt) __EVP_KEYMGMT_gen_settable_params(AmiSSLExtBase, (keymgmt))

const OSSL_PARAM * __EVP_SIGNATURE_gettable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_SIGNATURE * sig ) = "\tjsr\t-4434(a6)";
#define EVP_SIGNATURE_gettable_ctx_params(sig) __EVP_SIGNATURE_gettable_ctx_params(AmiSSLExtBase, (sig))

const OSSL_PARAM * __EVP_SIGNATURE_settable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_SIGNATURE * sig ) = "\tjsr\t-4440(a6)";
#define EVP_SIGNATURE_settable_ctx_params(sig) __EVP_SIGNATURE_settable_ctx_params(AmiSSLExtBase, (sig))

const OSSL_PARAM * __EVP_KEYEXCH_gettable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_KEYEXCH * keyexch ) = "\tjsr\t-4446(a6)";
#define EVP_KEYEXCH_gettable_ctx_params(keyexch) __EVP_KEYEXCH_gettable_ctx_params(AmiSSLExtBase, (keyexch))

const OSSL_PARAM * __EVP_KEYEXCH_settable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_KEYEXCH * keyexch ) = "\tjsr\t-4452(a6)";
#define EVP_KEYEXCH_settable_ctx_params(keyexch) __EVP_KEYEXCH_settable_ctx_params(AmiSSLExtBase, (keyexch))

EVP_PKEY * __d2i_PUBKEY_ex(__reg("a6") struct Library * , __reg("a0") EVP_PKEY ** a , __reg("a1") const unsigned char ** pp , __reg("d0") long length , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-4458(a6)";
#define d2i_PUBKEY_ex(a, pp, length, libctx, propq) __d2i_PUBKEY_ex(AmiSSLExtBase, (a), (pp), (length), (libctx), (propq))

OSSL_STORE_INFO * __OSSL_STORE_INFO_new_PUBKEY(__reg("a6") struct Library * , __reg("a0") EVP_PKEY * pubkey ) = "\tjsr\t-4464(a6)";
#define OSSL_STORE_INFO_new_PUBKEY(pubkey) __OSSL_STORE_INFO_new_PUBKEY(AmiSSLExtBase, (pubkey))

EVP_PKEY * __OSSL_STORE_INFO_get0_PUBKEY(__reg("a6") struct Library * , __reg("a0") const OSSL_STORE_INFO * info ) = "\tjsr\t-4470(a6)";
#define OSSL_STORE_INFO_get0_PUBKEY(info) __OSSL_STORE_INFO_get0_PUBKEY(AmiSSLExtBase, (info))

EVP_PKEY * __OSSL_STORE_INFO_get1_PUBKEY(__reg("a6") struct Library * , __reg("a0") const OSSL_STORE_INFO * info ) = "\tjsr\t-4476(a6)";
#define OSSL_STORE_INFO_get1_PUBKEY(info) __OSSL_STORE_INFO_get1_PUBKEY(AmiSSLExtBase, (info))

EVP_PKEY * __PEM_read_bio_PUBKEY_ex(__reg("a6") struct Library * , __reg("a0") BIO * out , __reg("a1") EVP_PKEY ** x , __reg("a2") pem_password_cb * cb , __reg("a3") void * u , __reg("d0") OSSL_LIB_CTX * libctx , __reg("d1") const char * propq ) = "\tjsr\t-4482(a6)";
#define PEM_read_bio_PUBKEY_ex(out, x, cb, u, libctx, propq) __PEM_read_bio_PUBKEY_ex(AmiSSLExtBase, (out), (x), (cb), (u), (libctx), (propq))

EVP_PKEY * __PEM_read_bio_Parameters_ex(__reg("a6") struct Library * , __reg("a0") BIO * bp , __reg("a1") EVP_PKEY ** x , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-4488(a6)";
#define PEM_read_bio_Parameters_ex(bp, x, libctx, propq) __PEM_read_bio_Parameters_ex(AmiSSLExtBase, (bp), (x), (libctx), (propq))

EC_GROUP * __EC_GROUP_new_from_params(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * params , __reg("a1") OSSL_LIB_CTX * libctx , __reg("a2") const char * propq ) = "\tjsr\t-4494(a6)";
#define EC_GROUP_new_from_params(params, libctx, propq) __EC_GROUP_new_from_params(AmiSSLExtBase, (params), (libctx), (propq))

int __OSSL_STORE_LOADER_set_open_ex(__reg("a6") struct Library * , __reg("a0") OSSL_STORE_LOADER * loader , __reg("a1") OSSL_STORE_open_ex_fn open_ex_function ) = "\tjsr\t-4500(a6)";
#define OSSL_STORE_LOADER_set_open_ex(loader, open_ex_function) __OSSL_STORE_LOADER_set_open_ex(AmiSSLExtBase, (loader), (open_ex_function))

OSSL_STORE_LOADER * __OSSL_STORE_LOADER_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * scheme , __reg("a2") const char * properties ) = "\tjsr\t-4506(a6)";
#define OSSL_STORE_LOADER_fetch(libctx, scheme, properties) __OSSL_STORE_LOADER_fetch(AmiSSLExtBase, (libctx), (scheme), (properties))

int __OSSL_STORE_LOADER_up_ref(__reg("a6") struct Library * , __reg("a0") OSSL_STORE_LOADER * loader ) = "\tjsr\t-4512(a6)";
#define OSSL_STORE_LOADER_up_ref(loader) __OSSL_STORE_LOADER_up_ref(AmiSSLExtBase, (loader))

const OSSL_PROVIDER * __OSSL_STORE_LOADER_get0_provider(__reg("a6") struct Library * , __reg("a0") const OSSL_STORE_LOADER * loader ) = "\tjsr\t-4518(a6)";
#define OSSL_STORE_LOADER_get0_provider(loader) __OSSL_STORE_LOADER_get0_provider(AmiSSLExtBase, (loader))

const char * __OSSL_STORE_LOADER_get0_properties(__reg("a6") struct Library * , __reg("a0") const OSSL_STORE_LOADER * loader ) = "\tjsr\t-4524(a6)";
#define OSSL_STORE_LOADER_get0_properties(loader) __OSSL_STORE_LOADER_get0_properties(AmiSSLExtBase, (loader))

int __OSSL_STORE_LOADER_is_a(__reg("a6") struct Library * , __reg("a0") const OSSL_STORE_LOADER * loader , __reg("a1") const char * scheme ) = "\tjsr\t-4530(a6)";
#define OSSL_STORE_LOADER_is_a(loader, scheme) __OSSL_STORE_LOADER_is_a(AmiSSLExtBase, (loader), (scheme))

void __OSSL_STORE_LOADER_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(OSSL_STORE_LOADER *loader,void *arg) , __reg("a2") void * arg ) = "\tjsr\t-4536(a6)";
#define OSSL_STORE_LOADER_do_all_provided(libctx, fn, arg) __OSSL_STORE_LOADER_do_all_provided(AmiSSLExtBase, (libctx), (fn), (arg))

int __OSSL_STORE_LOADER_names_do_all(__reg("a6") struct Library * , __reg("a0") const OSSL_STORE_LOADER * loader , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-4542(a6)";
#define OSSL_STORE_LOADER_names_do_all(loader, fn, data) __OSSL_STORE_LOADER_names_do_all(AmiSSLExtBase, (loader), (fn), (data))

int __OSSL_PARAM_get_utf8_string_ptr(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") const char ** val ) = "\tjsr\t-4548(a6)";
#define OSSL_PARAM_get_utf8_string_ptr(p, val) __OSSL_PARAM_get_utf8_string_ptr(AmiSSLExtBase, (p), (val))

int __OSSL_PARAM_get_octet_string_ptr(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p , __reg("a1") const void ** val , __reg("a2") size_t * used_len ) = "\tjsr\t-4554(a6)";
#define OSSL_PARAM_get_octet_string_ptr(p, val, used_len) __OSSL_PARAM_get_octet_string_ptr(AmiSSLExtBase, (p), (val), (used_len))

int __OSSL_DECODER_CTX_set_passphrase_cb(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") OSSL_PASSPHRASE_CALLBACK * cb , __reg("a2") void * cbarg ) = "\tjsr\t-4560(a6)";
#define OSSL_DECODER_CTX_set_passphrase_cb(ctx, cb, cbarg) __OSSL_DECODER_CTX_set_passphrase_cb(AmiSSLExtBase, (ctx), (cb), (cbarg))

int __EVP_PKEY_CTX_set_mac_key(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const unsigned char * key , __reg("d0") int keylen ) = "\tjsr\t-4566(a6)";
#define EVP_PKEY_CTX_set_mac_key(ctx, key, keylen) __EVP_PKEY_CTX_set_mac_key(AmiSSLExtBase, (ctx), (key), (keylen))

OSSL_STORE_INFO * __OSSL_STORE_INFO_new(__reg("a6") struct Library * , __reg("d0") int type , __reg("a0") void * data ) = "\tjsr\t-4572(a6)";
#define OSSL_STORE_INFO_new(type, data) __OSSL_STORE_INFO_new(AmiSSLExtBase, (type), (data))

void * __OSSL_STORE_INFO_get0_data(__reg("a6") struct Library * , __reg("d0") int type , __reg("a0") const OSSL_STORE_INFO * info ) = "\tjsr\t-4578(a6)";
#define OSSL_STORE_INFO_get0_data(type, info) __OSSL_STORE_INFO_get0_data(AmiSSLExtBase, (type), (info))

EVP_PKEY * __EVP_PKCS82PKEY_ex(__reg("a6") struct Library * , __reg("a0") const PKCS8_PRIV_KEY_INFO * p8 , __reg("a1") OSSL_LIB_CTX * libctx , __reg("a2") const char * propq ) = "\tjsr\t-4584(a6)";
#define EVP_PKCS82PKEY_ex(p8, libctx, propq) __EVP_PKCS82PKEY_ex(AmiSSLExtBase, (p8), (libctx), (propq))

int __EVP_PKEY_CTX_set1_id(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const void * id , __reg("d0") int len ) = "\tjsr\t-4590(a6)";
#define EVP_PKEY_CTX_set1_id(ctx, id, len) __EVP_PKEY_CTX_set1_id(AmiSSLExtBase, (ctx), (id), (len))

int __EVP_PKEY_CTX_get1_id(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") void * id ) = "\tjsr\t-4596(a6)";
#define EVP_PKEY_CTX_get1_id(ctx, id) __EVP_PKEY_CTX_get1_id(AmiSSLExtBase, (ctx), (id))

int __EVP_PKEY_CTX_get1_id_len(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") size_t * id_len ) = "\tjsr\t-4602(a6)";
#define EVP_PKEY_CTX_get1_id_len(ctx, id_len) __EVP_PKEY_CTX_get1_id_len(AmiSSLExtBase, (ctx), (id_len))

CMS_ContentInfo * __CMS_AuthEnvelopedData_create(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher ) = "\tjsr\t-4608(a6)";
#define CMS_AuthEnvelopedData_create(cipher) __CMS_AuthEnvelopedData_create(AmiSSLExtBase, (cipher))

CMS_ContentInfo * __CMS_AuthEnvelopedData_create_ex(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher , __reg("a1") OSSL_LIB_CTX * ctx , __reg("a2") const char * propq ) = "\tjsr\t-4614(a6)";
#define CMS_AuthEnvelopedData_create_ex(cipher, ctx, propq) __CMS_AuthEnvelopedData_create_ex(AmiSSLExtBase, (cipher), (ctx), (propq))

int __EVP_PKEY_CTX_set_ec_param_enc(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int param_enc ) = "\tjsr\t-4620(a6)";
#define EVP_PKEY_CTX_set_ec_param_enc(ctx, param_enc) __EVP_PKEY_CTX_set_ec_param_enc(AmiSSLExtBase, (ctx), (param_enc))

const char * __EVP_PKEY_get0_type_name(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * key ) = "\tjsr\t-4626(a6)";
#define EVP_PKEY_get0_type_name(key) __EVP_PKEY_get0_type_name(AmiSSLExtBase, (key))

const char * __EVP_KEYMGMT_get0_name(__reg("a6") struct Library * , __reg("a0") const EVP_KEYMGMT * keymgmt ) = "\tjsr\t-4632(a6)";
#define EVP_KEYMGMT_get0_name(keymgmt) __EVP_KEYMGMT_get0_name(AmiSSLExtBase, (keymgmt))

void __EVP_KEM_free(__reg("a6") struct Library * , __reg("a0") EVP_KEM * wrap ) = "\tjsr\t-4638(a6)";
#define EVP_KEM_free(wrap) __EVP_KEM_free(AmiSSLExtBase, (wrap))

int __EVP_KEM_up_ref(__reg("a6") struct Library * , __reg("a0") EVP_KEM * wrap ) = "\tjsr\t-4644(a6)";
#define EVP_KEM_up_ref(wrap) __EVP_KEM_up_ref(AmiSSLExtBase, (wrap))

OSSL_PROVIDER * __EVP_KEM_get0_provider(__reg("a6") struct Library * , __reg("a0") const EVP_KEM * wrap ) = "\tjsr\t-4650(a6)";
#define EVP_KEM_get0_provider(wrap) __EVP_KEM_get0_provider(AmiSSLExtBase, (wrap))

EVP_KEM * __EVP_KEM_fetch(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * algorithm , __reg("a2") const char * properties ) = "\tjsr\t-4656(a6)";
#define EVP_KEM_fetch(ctx, algorithm, properties) __EVP_KEM_fetch(AmiSSLExtBase, (ctx), (algorithm), (properties))

int __EVP_KEM_is_a(__reg("a6") struct Library * , __reg("a0") const EVP_KEM * wrap , __reg("a1") const char * name ) = "\tjsr\t-4662(a6)";
#define EVP_KEM_is_a(wrap, name) __EVP_KEM_is_a(AmiSSLExtBase, (wrap), (name))

void __EVP_KEM_do_all_provided(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") void (*fn)(EVP_KEM *wrap,void *arg) , __reg("a2") void * arg ) = "\tjsr\t-4668(a6)";
#define EVP_KEM_do_all_provided(libctx, fn, arg) __EVP_KEM_do_all_provided(AmiSSLExtBase, (libctx), (fn), (arg))

int __EVP_KEM_names_do_all(__reg("a6") struct Library * , __reg("a0") const EVP_KEM * wrap , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-4674(a6)";
#define EVP_KEM_names_do_all(wrap, fn, data) __EVP_KEM_names_do_all(AmiSSLExtBase, (wrap), (fn), (data))

int __EVP_PKEY_encapsulate_init(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-4680(a6)";
#define EVP_PKEY_encapsulate_init(ctx, params) __EVP_PKEY_encapsulate_init(AmiSSLExtBase, (ctx), (params))

int __EVP_PKEY_encapsulate(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") unsigned char * wrappedkey , __reg("a2") size_t * wrappedkeylen , __reg("a3") unsigned char * genkey , __reg("d0") size_t * genkeylen ) = "\tjsr\t-4686(a6)";
#define EVP_PKEY_encapsulate(ctx, wrappedkey, wrappedkeylen, genkey, genkeylen) __EVP_PKEY_encapsulate(AmiSSLExtBase, (ctx), (wrappedkey), (wrappedkeylen), (genkey), (genkeylen))

int __EVP_PKEY_decapsulate_init(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-4692(a6)";
#define EVP_PKEY_decapsulate_init(ctx, params) __EVP_PKEY_decapsulate_init(AmiSSLExtBase, (ctx), (params))

int __EVP_PKEY_decapsulate(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") unsigned char * unwrapped , __reg("a2") size_t * unwrappedlen , __reg("a3") const unsigned char * wrapped , __reg("d0") size_t wrappedlen ) = "\tjsr\t-4698(a6)";
#define EVP_PKEY_decapsulate(ctx, unwrapped, unwrappedlen, wrapped, wrappedlen) __EVP_PKEY_decapsulate(AmiSSLExtBase, (ctx), (unwrapped), (unwrappedlen), (wrapped), (wrappedlen))

int __EVP_PKEY_CTX_set_kem_op(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const char * op ) = "\tjsr\t-4704(a6)";
#define EVP_PKEY_CTX_set_kem_op(ctx, op) __EVP_PKEY_CTX_set_kem_op(AmiSSLExtBase, (ctx), (op))

const OSSL_PARAM * __OSSL_ENCODER_gettable_params(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER * encoder ) = "\tjsr\t-4710(a6)";
#define OSSL_ENCODER_gettable_params(encoder) __OSSL_ENCODER_gettable_params(AmiSSLExtBase, (encoder))

int __OSSL_ENCODER_get_params(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER * encoder , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-4716(a6)";
#define OSSL_ENCODER_get_params(encoder, params) __OSSL_ENCODER_get_params(AmiSSLExtBase, (encoder), (params))

int __OSSL_ENCODER_CTX_set_output_type(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") const char * output_type ) = "\tjsr\t-4722(a6)";
#define OSSL_ENCODER_CTX_set_output_type(ctx, output_type) __OSSL_ENCODER_CTX_set_output_type(AmiSSLExtBase, (ctx), (output_type))

int __OSSL_ENCODER_CTX_add_encoder(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") OSSL_ENCODER * encoder ) = "\tjsr\t-4728(a6)";
#define OSSL_ENCODER_CTX_add_encoder(ctx, encoder) __OSSL_ENCODER_CTX_add_encoder(AmiSSLExtBase, (ctx), (encoder))

int __OSSL_ENCODER_CTX_add_extra(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") OSSL_LIB_CTX * libctx , __reg("a2") const char * propq ) = "\tjsr\t-4734(a6)";
#define OSSL_ENCODER_CTX_add_extra(ctx, libctx, propq) __OSSL_ENCODER_CTX_add_extra(AmiSSLExtBase, (ctx), (libctx), (propq))

int __OSSL_ENCODER_CTX_get_num_encoders(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx ) = "\tjsr\t-4740(a6)";
#define OSSL_ENCODER_CTX_get_num_encoders(ctx) __OSSL_ENCODER_CTX_get_num_encoders(AmiSSLExtBase, (ctx))

int __OSSL_ENCODER_CTX_set_selection(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("d0") int selection ) = "\tjsr\t-4746(a6)";
#define OSSL_ENCODER_CTX_set_selection(ctx, selection) __OSSL_ENCODER_CTX_set_selection(AmiSSLExtBase, (ctx), (selection))

OSSL_ENCODER * __OSSL_ENCODER_INSTANCE_get_encoder(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_INSTANCE * encoder_inst ) = "\tjsr\t-4752(a6)";
#define OSSL_ENCODER_INSTANCE_get_encoder(encoder_inst) __OSSL_ENCODER_INSTANCE_get_encoder(AmiSSLExtBase, (encoder_inst))

void * __OSSL_ENCODER_INSTANCE_get_encoder_ctx(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_INSTANCE * encoder_inst ) = "\tjsr\t-4758(a6)";
#define OSSL_ENCODER_INSTANCE_get_encoder_ctx(encoder_inst) __OSSL_ENCODER_INSTANCE_get_encoder_ctx(AmiSSLExtBase, (encoder_inst))

const char * __OSSL_ENCODER_INSTANCE_get_output_type(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_INSTANCE * encoder_inst ) = "\tjsr\t-4764(a6)";
#define OSSL_ENCODER_INSTANCE_get_output_type(encoder_inst) __OSSL_ENCODER_INSTANCE_get_output_type(AmiSSLExtBase, (encoder_inst))

int __OSSL_ENCODER_CTX_set_construct(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") OSSL_ENCODER_CONSTRUCT * construct ) = "\tjsr\t-4770(a6)";
#define OSSL_ENCODER_CTX_set_construct(ctx, construct) __OSSL_ENCODER_CTX_set_construct(AmiSSLExtBase, (ctx), (construct))

int __OSSL_ENCODER_CTX_set_construct_data(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") void * construct_data ) = "\tjsr\t-4776(a6)";
#define OSSL_ENCODER_CTX_set_construct_data(ctx, construct_data) __OSSL_ENCODER_CTX_set_construct_data(AmiSSLExtBase, (ctx), (construct_data))

int __OSSL_ENCODER_CTX_set_cleanup(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") OSSL_ENCODER_CLEANUP * cleanup ) = "\tjsr\t-4782(a6)";
#define OSSL_ENCODER_CTX_set_cleanup(ctx, cleanup) __OSSL_ENCODER_CTX_set_cleanup(AmiSSLExtBase, (ctx), (cleanup))

int __OSSL_ENCODER_CTX_set_passphrase_cb(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") OSSL_PASSPHRASE_CALLBACK * cb , __reg("a2") void * cbarg ) = "\tjsr\t-4788(a6)";
#define OSSL_ENCODER_CTX_set_passphrase_cb(ctx, cb, cbarg) __OSSL_ENCODER_CTX_set_passphrase_cb(AmiSSLExtBase, (ctx), (cb), (cbarg))

int __EVP_PKEY_type_names_do_all(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey , __reg("a1") void (*fn)(const char *name,void *data) , __reg("a2") void * data ) = "\tjsr\t-4794(a6)";
#define EVP_PKEY_type_names_do_all(pkey, fn, data) __EVP_PKEY_type_names_do_all(AmiSSLExtBase, (pkey), (fn), (data))

const char * __OSSL_DECODER_INSTANCE_get_input_type(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_INSTANCE * decoder_inst ) = "\tjsr\t-4800(a6)";
#define OSSL_DECODER_INSTANCE_get_input_type(decoder_inst) __OSSL_DECODER_INSTANCE_get_input_type(AmiSSLExtBase, (decoder_inst))

const OSSL_PARAM * __EVP_ASYM_CIPHER_gettable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_ASYM_CIPHER * ciph ) = "\tjsr\t-4806(a6)";
#define EVP_ASYM_CIPHER_gettable_ctx_params(ciph) __EVP_ASYM_CIPHER_gettable_ctx_params(AmiSSLExtBase, (ciph))

const OSSL_PARAM * __EVP_ASYM_CIPHER_settable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_ASYM_CIPHER * ciph ) = "\tjsr\t-4812(a6)";
#define EVP_ASYM_CIPHER_settable_ctx_params(ciph) __EVP_ASYM_CIPHER_settable_ctx_params(AmiSSLExtBase, (ciph))

const OSSL_PARAM * __EVP_KEM_gettable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_KEM * kem ) = "\tjsr\t-4818(a6)";
#define EVP_KEM_gettable_ctx_params(kem) __EVP_KEM_gettable_ctx_params(AmiSSLExtBase, (kem))

const OSSL_PARAM * __EVP_KEM_settable_ctx_params(__reg("a6") struct Library * , __reg("a0") const EVP_KEM * kem ) = "\tjsr\t-4824(a6)";
#define EVP_KEM_settable_ctx_params(kem) __EVP_KEM_settable_ctx_params(AmiSSLExtBase, (kem))

int __PKCS7_type_is_other(__reg("a6") struct Library * , __reg("a0") PKCS7 * p7 ) = "\tjsr\t-4830(a6)";
#define PKCS7_type_is_other(p7) __PKCS7_type_is_other(AmiSSLExtBase, (p7))

ASN1_OCTET_STRING * __PKCS7_get_octet_string(__reg("a6") struct Library * , __reg("a0") PKCS7 * p7 ) = "\tjsr\t-4836(a6)";
#define PKCS7_get_octet_string(p7) __PKCS7_get_octet_string(AmiSSLExtBase, (p7))

int __OSSL_DECODER_from_data(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") const unsigned char ** pdata , __reg("a2") size_t * pdata_len ) = "\tjsr\t-4842(a6)";
#define OSSL_DECODER_from_data(ctx, pdata, pdata_len) __OSSL_DECODER_from_data(AmiSSLExtBase, (ctx), (pdata), (pdata_len))

int __OSSL_ENCODER_to_data(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") unsigned char ** pdata , __reg("a2") size_t * pdata_len ) = "\tjsr\t-4848(a6)";
#define OSSL_ENCODER_to_data(ctx, pdata, pdata_len) __OSSL_ENCODER_to_data(AmiSSLExtBase, (ctx), (pdata), (pdata_len))

OSSL_LIB_CTX * __EVP_PKEY_CTX_get0_libctx(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx ) = "\tjsr\t-4854(a6)";
#define EVP_PKEY_CTX_get0_libctx(ctx) __EVP_PKEY_CTX_get0_libctx(AmiSSLExtBase, (ctx))

const char * __EVP_PKEY_CTX_get0_propq(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY_CTX * ctx ) = "\tjsr\t-4860(a6)";
#define EVP_PKEY_CTX_get0_propq(ctx) __EVP_PKEY_CTX_get0_propq(AmiSSLExtBase, (ctx))

int __OSSL_DECODER_CTX_set_selection(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("d0") int selection ) = "\tjsr\t-4866(a6)";
#define OSSL_DECODER_CTX_set_selection(ctx, selection) __OSSL_DECODER_CTX_set_selection(AmiSSLExtBase, (ctx), (selection))

int __OSSL_DECODER_CTX_set_input_structure(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_CTX * ctx , __reg("a1") const char * input_structure ) = "\tjsr\t-4872(a6)";
#define OSSL_DECODER_CTX_set_input_structure(ctx, input_structure) __OSSL_DECODER_CTX_set_input_structure(AmiSSLExtBase, (ctx), (input_structure))

const char * __OSSL_DECODER_INSTANCE_get_input_structure(__reg("a6") struct Library * , __reg("a0") OSSL_DECODER_INSTANCE * decoder_inst , __reg("a1") int * was_set ) = "\tjsr\t-4878(a6)";
#define OSSL_DECODER_INSTANCE_get_input_structure(decoder_inst, was_set) __OSSL_DECODER_INSTANCE_get_input_structure(AmiSSLExtBase, (decoder_inst), (was_set))

int __OSSL_ENCODER_CTX_set_output_structure(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_CTX * ctx , __reg("a1") const char * output_structure ) = "\tjsr\t-4884(a6)";
#define OSSL_ENCODER_CTX_set_output_structure(ctx, output_structure) __OSSL_ENCODER_CTX_set_output_structure(AmiSSLExtBase, (ctx), (output_structure))

const char * __OSSL_ENCODER_INSTANCE_get_output_structure(__reg("a6") struct Library * , __reg("a0") OSSL_ENCODER_INSTANCE * encoder_inst ) = "\tjsr\t-4890(a6)";
#define OSSL_ENCODER_INSTANCE_get_output_structure(encoder_inst) __OSSL_ENCODER_INSTANCE_get_output_structure(AmiSSLExtBase, (encoder_inst))

int __PEM_write_bio_PrivateKey_ex(__reg("a6") struct Library * , __reg("a0") BIO * out , __reg("a1") const EVP_PKEY * x , __reg("a2") const EVP_CIPHER * enc , __reg("a3") const unsigned char * kstr , __reg("d0") int klen , __reg("d1") pem_password_cb * cb , __reg("d2") void * u , __reg("d3") OSSL_LIB_CTX * libctx , __reg("d4") const char * propq ) = "\tjsr\t-4896(a6)";
#define PEM_write_bio_PrivateKey_ex(out, x, enc, kstr, klen, cb, u, libctx, propq) __PEM_write_bio_PrivateKey_ex(AmiSSLExtBase, (out), (x), (enc), (kstr), (klen), (cb), (u), (libctx), (propq))

int __PEM_write_bio_PUBKEY_ex(__reg("a6") struct Library * , __reg("a0") BIO * out , __reg("a1") const EVP_PKEY * x , __reg("a2") OSSL_LIB_CTX * libctx , __reg("a3") const char * propq ) = "\tjsr\t-4902(a6)";
#define PEM_write_bio_PUBKEY_ex(out, x, libctx, propq) __PEM_write_bio_PUBKEY_ex(AmiSSLExtBase, (out), (x), (libctx), (propq))

int __EVP_PKEY_get_group_name(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey , __reg("a1") char * name , __reg("d0") size_t name_sz , __reg("a2") size_t * gname_len ) = "\tjsr\t-4908(a6)";
#define EVP_PKEY_get_group_name(pkey, name, name_sz, gname_len) __EVP_PKEY_get_group_name(AmiSSLExtBase, (pkey), (name), (name_sz), (gname_len))

int __CRYPTO_atomic_or(__reg("a6") struct Library * , __reg("a0") uint64_t * val , __reg("d0/d1") uint64_t op , __reg("a1") uint64_t * ret , __reg("a2") CRYPTO_RWLOCK * lock ) = "\tjsr\t-4914(a6)";
#define CRYPTO_atomic_or(val, op, ret, lock) __CRYPTO_atomic_or(AmiSSLExtBase, (val), (op), (ret), (lock))

int __CRYPTO_atomic_load(__reg("a6") struct Library * , __reg("a0") uint64_t * val , __reg("a1") uint64_t * ret , __reg("a2") CRYPTO_RWLOCK * lock ) = "\tjsr\t-4920(a6)";
#define CRYPTO_atomic_load(val, ret, lock) __CRYPTO_atomic_load(AmiSSLExtBase, (val), (ret), (lock))

int __EVP_PKEY_CTX_set_rsa_pss_keygen_md(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const EVP_MD * md ) = "\tjsr\t-4926(a6)";
#define EVP_PKEY_CTX_set_rsa_pss_keygen_md(ctx, md) __EVP_PKEY_CTX_set_rsa_pss_keygen_md(AmiSSLExtBase, (ctx), (md))

int __EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const char * mdname , __reg("a2") const char * mdprops ) = "\tjsr\t-4932(a6)";
#define EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(ctx, mdname, mdprops) __EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(AmiSSLExtBase, (ctx), (mdname), (mdprops))

const OSSL_PARAM * __EVP_PKEY_settable_params(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey ) = "\tjsr\t-4938(a6)";
#define EVP_PKEY_settable_params(pkey) __EVP_PKEY_settable_params(AmiSSLExtBase, (pkey))

int __EVP_PKEY_set_params(__reg("a6") struct Library * , __reg("a0") EVP_PKEY * pkey , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-4944(a6)";
#define EVP_PKEY_set_params(pkey, params) __EVP_PKEY_set_params(AmiSSLExtBase, (pkey), (params))

int __EVP_PKEY_set_int_param(__reg("a6") struct Library * , __reg("a0") EVP_PKEY * pkey , __reg("a1") const char * key_name , __reg("d0") int in ) = "\tjsr\t-4950(a6)";
#define EVP_PKEY_set_int_param(pkey, key_name, in) __EVP_PKEY_set_int_param(AmiSSLExtBase, (pkey), (key_name), (in))

int __EVP_PKEY_set_size_t_param(__reg("a6") struct Library * , __reg("a0") EVP_PKEY * pkey , __reg("a1") const char * key_name , __reg("d0") size_t in ) = "\tjsr\t-4956(a6)";
#define EVP_PKEY_set_size_t_param(pkey, key_name, in) __EVP_PKEY_set_size_t_param(AmiSSLExtBase, (pkey), (key_name), (in))

int __EVP_PKEY_set_bn_param(__reg("a6") struct Library * , __reg("a0") EVP_PKEY * pkey , __reg("a1") const char * key_name , __reg("a2") const BIGNUM * bn ) = "\tjsr\t-4962(a6)";
#define EVP_PKEY_set_bn_param(pkey, key_name, bn) __EVP_PKEY_set_bn_param(AmiSSLExtBase, (pkey), (key_name), (bn))

int __EVP_PKEY_set_utf8_string_param(__reg("a6") struct Library * , __reg("a0") EVP_PKEY * pkey , __reg("a1") const char * key_name , __reg("a2") const char * str ) = "\tjsr\t-4968(a6)";
#define EVP_PKEY_set_utf8_string_param(pkey, key_name, str) __EVP_PKEY_set_utf8_string_param(AmiSSLExtBase, (pkey), (key_name), (str))

int __EVP_PKEY_set_octet_string_param(__reg("a6") struct Library * , __reg("a0") EVP_PKEY * pkey , __reg("a1") const char * key_name , __reg("a2") const unsigned char * buf , __reg("d0") size_t bsize ) = "\tjsr\t-4974(a6)";
#define EVP_PKEY_set_octet_string_param(pkey, key_name, buf, bsize) __EVP_PKEY_set_octet_string_param(AmiSSLExtBase, (pkey), (key_name), (buf), (bsize))

int __EVP_PKEY_get_ec_point_conv_form(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey ) = "\tjsr\t-4980(a6)";
#define EVP_PKEY_get_ec_point_conv_form(pkey) __EVP_PKEY_get_ec_point_conv_form(AmiSSLExtBase, (pkey))

int __EVP_PKEY_get_field_type(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey ) = "\tjsr\t-4986(a6)";
#define EVP_PKEY_get_field_type(pkey) __EVP_PKEY_get_field_type(AmiSSLExtBase, (pkey))

int __EVP_PKEY_get_params(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey , __reg("a1") OSSL_PARAM * params ) = "\tjsr\t-4992(a6)";
#define EVP_PKEY_get_params(pkey, params) __EVP_PKEY_get_params(AmiSSLExtBase, (pkey), (params))

int __EVP_PKEY_fromdata_init(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx ) = "\tjsr\t-4998(a6)";
#define EVP_PKEY_fromdata_init(ctx) __EVP_PKEY_fromdata_init(AmiSSLExtBase, (ctx))

const OSSL_PARAM * __EVP_PKEY_fromdata_settable(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("d0") int selection ) = "\tjsr\t-5004(a6)";
#define EVP_PKEY_fromdata_settable(ctx, selection) __EVP_PKEY_fromdata_settable(AmiSSLExtBase, (ctx), (selection))

int __EVP_PKEY_param_check_quick(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx ) = "\tjsr\t-5010(a6)";
#define EVP_PKEY_param_check_quick(ctx) __EVP_PKEY_param_check_quick(AmiSSLExtBase, (ctx))

int __EVP_PKEY_public_check_quick(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx ) = "\tjsr\t-5016(a6)";
#define EVP_PKEY_public_check_quick(ctx) __EVP_PKEY_public_check_quick(AmiSSLExtBase, (ctx))

int __EVP_PKEY_CTX_is_a(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const char * keytype ) = "\tjsr\t-5022(a6)";
#define EVP_PKEY_CTX_is_a(ctx, keytype) __EVP_PKEY_CTX_is_a(AmiSSLExtBase, (ctx), (keytype))

const OSSL_PARAM * __EVP_CIPHER_CTX_settable_params(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx ) = "\tjsr\t-5028(a6)";
#define EVP_CIPHER_CTX_settable_params(ctx) __EVP_CIPHER_CTX_settable_params(AmiSSLExtBase, (ctx))

const OSSL_PARAM * __EVP_CIPHER_CTX_gettable_params(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx ) = "\tjsr\t-5034(a6)";
#define EVP_CIPHER_CTX_gettable_params(ctx) __EVP_CIPHER_CTX_gettable_params(AmiSSLExtBase, (ctx))

const OSSL_PARAM * __EVP_KDF_CTX_gettable_params(__reg("a6") struct Library * , __reg("a0") EVP_KDF_CTX * ctx ) = "\tjsr\t-5040(a6)";
#define EVP_KDF_CTX_gettable_params(ctx) __EVP_KDF_CTX_gettable_params(AmiSSLExtBase, (ctx))

const OSSL_PARAM * __EVP_KDF_CTX_settable_params(__reg("a6") struct Library * , __reg("a0") EVP_KDF_CTX * ctx ) = "\tjsr\t-5046(a6)";
#define EVP_KDF_CTX_settable_params(ctx) __EVP_KDF_CTX_settable_params(AmiSSLExtBase, (ctx))

const OSSL_PARAM * __EVP_MAC_CTX_gettable_params(__reg("a6") struct Library * , __reg("a0") EVP_MAC_CTX * ctx ) = "\tjsr\t-5052(a6)";
#define EVP_MAC_CTX_gettable_params(ctx) __EVP_MAC_CTX_gettable_params(AmiSSLExtBase, (ctx))

const OSSL_PARAM * __EVP_MAC_CTX_settable_params(__reg("a6") struct Library * , __reg("a0") EVP_MAC_CTX * ctx ) = "\tjsr\t-5058(a6)";
#define EVP_MAC_CTX_settable_params(ctx) __EVP_MAC_CTX_settable_params(AmiSSLExtBase, (ctx))

const OSSL_PARAM * __EVP_RAND_CTX_gettable_params(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx ) = "\tjsr\t-5064(a6)";
#define EVP_RAND_CTX_gettable_params(ctx) __EVP_RAND_CTX_gettable_params(AmiSSLExtBase, (ctx))

const OSSL_PARAM * __EVP_RAND_CTX_settable_params(__reg("a6") struct Library * , __reg("a0") EVP_RAND_CTX * ctx ) = "\tjsr\t-5070(a6)";
#define EVP_RAND_CTX_settable_params(ctx) __EVP_RAND_CTX_settable_params(AmiSSLExtBase, (ctx))

int __RAND_set_DRBG_type(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * drbg , __reg("a2") const char * propq , __reg("a3") const char * cipher , __reg("d0") const char * digest ) = "\tjsr\t-5076(a6)";
#define RAND_set_DRBG_type(ctx, drbg, propq, cipher, digest) __RAND_set_DRBG_type(AmiSSLExtBase, (ctx), (drbg), (propq), (cipher), (digest))

int __RAND_set_seed_source_type(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * seed , __reg("a2") const char * propq ) = "\tjsr\t-5082(a6)";
#define RAND_set_seed_source_type(ctx, seed, propq) __RAND_set_seed_source_type(AmiSSLExtBase, (ctx), (seed), (propq))

int __BN_mod_exp_mont_consttime_x2(__reg("a6") struct Library * , __reg("a0") BIGNUM * rr1 , __reg("a1") const BIGNUM * a1 , __reg("a2") const BIGNUM * p1 , __reg("a3") const BIGNUM * m1 , __reg("d0") BN_MONT_CTX * in_mont1 , __reg("d1") BIGNUM * rr2 , __reg("d2") const BIGNUM * a2 , __reg("d3") const BIGNUM * p2 , __reg("d4") const BIGNUM * m2 , __reg("d5") BN_MONT_CTX * in_mont2 , __reg("d6") BN_CTX * ctx ) = "\tjsr\t-5088(a6)";
#define BN_mod_exp_mont_consttime_x2(rr1, a1, p1, m1, in_mont1, rr2, a2, p2, m2, in_mont2, ctx) __BN_mod_exp_mont_consttime_x2(AmiSSLExtBase, (rr1), (a1), (p1), (m1), (in_mont1), (rr2), (a2), (p2), (m2), (in_mont2), (ctx))

const BIO_METHOD * __BIO_f_readbuffer(__reg("a6") struct Library * ) = "\tjsr\t-5094(a6)";
#define BIO_f_readbuffer() __BIO_f_readbuffer(AmiSSLExtBase)

int __OSSL_ESS_check_signing_certs(__reg("a6") struct Library * , __reg("a0") const ESS_SIGNING_CERT * ss , __reg("a1") const ESS_SIGNING_CERT_V2 * ssv2 , __reg("a2") const STACK_OF(X509) * chain , __reg("d0") int require_signing_cert ) = "\tjsr\t-5100(a6)";
#define OSSL_ESS_check_signing_certs(ss, ssv2, chain, require_signing_cert) __OSSL_ESS_check_signing_certs(AmiSSLExtBase, (ss), (ssv2), (chain), (require_signing_cert))

ESS_SIGNING_CERT * __OSSL_ESS_signing_cert_new_init(__reg("a6") struct Library * , __reg("a0") const X509 * signcert , __reg("a1") const STACK_OF(X509) * certs , __reg("d0") int set_issuer_serial ) = "\tjsr\t-5106(a6)";
#define OSSL_ESS_signing_cert_new_init(signcert, certs, set_issuer_serial) __OSSL_ESS_signing_cert_new_init(AmiSSLExtBase, (signcert), (certs), (set_issuer_serial))

ESS_SIGNING_CERT_V2 * __OSSL_ESS_signing_cert_v2_new_init(__reg("a6") struct Library * , __reg("a0") const EVP_MD * hash_alg , __reg("a1") const X509 * signcert , __reg("a2") const STACK_OF(X509) * certs , __reg("d0") int set_issuer_serial ) = "\tjsr\t-5112(a6)";
#define OSSL_ESS_signing_cert_v2_new_init(hash_alg, signcert, certs, set_issuer_serial) __OSSL_ESS_signing_cert_v2_new_init(AmiSSLExtBase, (hash_alg), (signcert), (certs), (set_issuer_serial))

const ASN1_ITEM * __ESS_SIGNING_CERT_it(__reg("a6") struct Library * ) = "\tjsr\t-5118(a6)";
#define ESS_SIGNING_CERT_it() __ESS_SIGNING_CERT_it(AmiSSLExtBase)

const ASN1_ITEM * __ESS_SIGNING_CERT_V2_it(__reg("a6") struct Library * ) = "\tjsr\t-5124(a6)";
#define ESS_SIGNING_CERT_V2_it() __ESS_SIGNING_CERT_V2_it(AmiSSLExtBase)

int __EVP_Q_digest(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * name , __reg("a2") const char * propq , __reg("a3") const void * data , __reg("d0") size_t datalen , __reg("d1") unsigned char * md , __reg("d2") size_t * mdlen ) = "\tjsr\t-5130(a6)";
#define EVP_Q_digest(libctx, name, propq, data, datalen, md, mdlen) __EVP_Q_digest(AmiSSLExtBase, (libctx), (name), (propq), (data), (datalen), (md), (mdlen))

int __EVP_DigestInit_ex2(__reg("a6") struct Library * , __reg("a0") EVP_MD_CTX * ctx , __reg("a1") const EVP_MD * type , __reg("a2") const OSSL_PARAM * params ) = "\tjsr\t-5136(a6)";
#define EVP_DigestInit_ex2(ctx, type, params) __EVP_DigestInit_ex2(AmiSSLExtBase, (ctx), (type), (params))

int __EVP_EncryptInit_ex2(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx , __reg("a1") const EVP_CIPHER * cipher , __reg("a2") const unsigned char * key , __reg("a3") const unsigned char * iv , __reg("d0") const OSSL_PARAM * params ) = "\tjsr\t-5142(a6)";
#define EVP_EncryptInit_ex2(ctx, cipher, key, iv, params) __EVP_EncryptInit_ex2(AmiSSLExtBase, (ctx), (cipher), (key), (iv), (params))

int __EVP_DecryptInit_ex2(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx , __reg("a1") const EVP_CIPHER * cipher , __reg("a2") const unsigned char * key , __reg("a3") const unsigned char * iv , __reg("d0") const OSSL_PARAM * params ) = "\tjsr\t-5148(a6)";
#define EVP_DecryptInit_ex2(ctx, cipher, key, iv, params) __EVP_DecryptInit_ex2(AmiSSLExtBase, (ctx), (cipher), (key), (iv), (params))

int __EVP_CipherInit_ex2(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx , __reg("a1") const EVP_CIPHER * cipher , __reg("a2") const unsigned char * key , __reg("a3") const unsigned char * iv , __reg("d0") int enc , __reg("d1") const OSSL_PARAM * params ) = "\tjsr\t-5154(a6)";
#define EVP_CipherInit_ex2(ctx, cipher, key, iv, enc, params) __EVP_CipherInit_ex2(AmiSSLExtBase, (ctx), (cipher), (key), (iv), (enc), (params))

int __EVP_PKEY_sign_init_ex(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-5160(a6)";
#define EVP_PKEY_sign_init_ex(ctx, params) __EVP_PKEY_sign_init_ex(AmiSSLExtBase, (ctx), (params))

int __EVP_PKEY_verify_init_ex(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-5166(a6)";
#define EVP_PKEY_verify_init_ex(ctx, params) __EVP_PKEY_verify_init_ex(AmiSSLExtBase, (ctx), (params))

int __EVP_PKEY_verify_recover_init_ex(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-5172(a6)";
#define EVP_PKEY_verify_recover_init_ex(ctx, params) __EVP_PKEY_verify_recover_init_ex(AmiSSLExtBase, (ctx), (params))

int __EVP_PKEY_encrypt_init_ex(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-5178(a6)";
#define EVP_PKEY_encrypt_init_ex(ctx, params) __EVP_PKEY_encrypt_init_ex(AmiSSLExtBase, (ctx), (params))

int __EVP_PKEY_decrypt_init_ex(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-5184(a6)";
#define EVP_PKEY_decrypt_init_ex(ctx, params) __EVP_PKEY_decrypt_init_ex(AmiSSLExtBase, (ctx), (params))

int __EVP_PKEY_derive_init_ex(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") const OSSL_PARAM * params ) = "\tjsr\t-5190(a6)";
#define EVP_PKEY_derive_init_ex(ctx, params) __EVP_PKEY_derive_init_ex(AmiSSLExtBase, (ctx), (params))

TS_RESP_CTX * __TS_RESP_CTX_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-5196(a6)";
#define TS_RESP_CTX_new_ex(libctx, propq) __TS_RESP_CTX_new_ex(AmiSSLExtBase, (libctx), (propq))

X509_REQ * __X509_REQ_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-5202(a6)";
#define X509_REQ_new_ex(libctx, propq) __X509_REQ_new_ex(AmiSSLExtBase, (libctx), (propq))

EVP_PKEY * __EVP_PKEY_dup(__reg("a6") struct Library * , __reg("a0") EVP_PKEY * pkey ) = "\tjsr\t-5208(a6)";
#define EVP_PKEY_dup(pkey) __EVP_PKEY_dup(AmiSSLExtBase, (pkey))

RSA_PSS_PARAMS * __RSA_PSS_PARAMS_dup(__reg("a6") struct Library * , __reg("a0") const RSA_PSS_PARAMS * a ) = "\tjsr\t-5214(a6)";
#define RSA_PSS_PARAMS_dup(a) __RSA_PSS_PARAMS_dup(AmiSSLExtBase, (a))

int __EVP_PKEY_derive_set_peer_ex(__reg("a6") struct Library * , __reg("a0") EVP_PKEY_CTX * ctx , __reg("a1") EVP_PKEY * peer , __reg("d0") int validate_peer ) = "\tjsr\t-5220(a6)";
#define EVP_PKEY_derive_set_peer_ex(ctx, peer, validate_peer) __EVP_PKEY_derive_set_peer_ex(AmiSSLExtBase, (ctx), (peer), (validate_peer))

const char * __OSSL_DECODER_get0_name(__reg("a6") struct Library * , __reg("a0") const OSSL_DECODER * decoder ) = "\tjsr\t-5226(a6)";
#define OSSL_DECODER_get0_name(decoder) __OSSL_DECODER_get0_name(AmiSSLExtBase, (decoder))

const char * __OSSL_ENCODER_get0_name(__reg("a6") struct Library * , __reg("a0") const OSSL_ENCODER * kdf ) = "\tjsr\t-5232(a6)";
#define OSSL_ENCODER_get0_name(kdf) __OSSL_ENCODER_get0_name(AmiSSLExtBase, (kdf))

const char * __OSSL_DECODER_get0_description(__reg("a6") struct Library * , __reg("a0") const OSSL_DECODER * decoder ) = "\tjsr\t-5238(a6)";
#define OSSL_DECODER_get0_description(decoder) __OSSL_DECODER_get0_description(AmiSSLExtBase, (decoder))

const char * __OSSL_ENCODER_get0_description(__reg("a6") struct Library * , __reg("a0") const OSSL_ENCODER * kdf ) = "\tjsr\t-5244(a6)";
#define OSSL_ENCODER_get0_description(kdf) __OSSL_ENCODER_get0_description(AmiSSLExtBase, (kdf))

const char * __OSSL_STORE_LOADER_get0_description(__reg("a6") struct Library * , __reg("a0") const OSSL_STORE_LOADER * loader ) = "\tjsr\t-5250(a6)";
#define OSSL_STORE_LOADER_get0_description(loader) __OSSL_STORE_LOADER_get0_description(AmiSSLExtBase, (loader))

const char * __EVP_MD_get0_description(__reg("a6") struct Library * , __reg("a0") const EVP_MD * md ) = "\tjsr\t-5256(a6)";
#define EVP_MD_get0_description(md) __EVP_MD_get0_description(AmiSSLExtBase, (md))

const char * __EVP_CIPHER_get0_description(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher ) = "\tjsr\t-5262(a6)";
#define EVP_CIPHER_get0_description(cipher) __EVP_CIPHER_get0_description(AmiSSLExtBase, (cipher))

const char * __EVP_MAC_get0_description(__reg("a6") struct Library * , __reg("a0") const EVP_MAC * mac ) = "\tjsr\t-5268(a6)";
#define EVP_MAC_get0_description(mac) __EVP_MAC_get0_description(AmiSSLExtBase, (mac))

const char * __EVP_RAND_get0_description(__reg("a6") struct Library * , __reg("a0") const EVP_RAND * md ) = "\tjsr\t-5274(a6)";
#define EVP_RAND_get0_description(md) __EVP_RAND_get0_description(AmiSSLExtBase, (md))

const char * __EVP_PKEY_get0_description(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey ) = "\tjsr\t-5280(a6)";
#define EVP_PKEY_get0_description(pkey) __EVP_PKEY_get0_description(AmiSSLExtBase, (pkey))

const char * __EVP_KEYMGMT_get0_description(__reg("a6") struct Library * , __reg("a0") const EVP_KEYMGMT * keymgmt ) = "\tjsr\t-5286(a6)";
#define EVP_KEYMGMT_get0_description(keymgmt) __EVP_KEYMGMT_get0_description(AmiSSLExtBase, (keymgmt))

const char * __EVP_SIGNATURE_get0_description(__reg("a6") struct Library * , __reg("a0") const EVP_SIGNATURE * signature ) = "\tjsr\t-5292(a6)";
#define EVP_SIGNATURE_get0_description(signature) __EVP_SIGNATURE_get0_description(AmiSSLExtBase, (signature))

const char * __EVP_ASYM_CIPHER_get0_description(__reg("a6") struct Library * , __reg("a0") const EVP_ASYM_CIPHER * cipher ) = "\tjsr\t-5298(a6)";
#define EVP_ASYM_CIPHER_get0_description(cipher) __EVP_ASYM_CIPHER_get0_description(AmiSSLExtBase, (cipher))

const char * __EVP_KEM_get0_description(__reg("a6") struct Library * , __reg("a0") const EVP_KEM * wrap ) = "\tjsr\t-5304(a6)";
#define EVP_KEM_get0_description(wrap) __EVP_KEM_get0_description(AmiSSLExtBase, (wrap))

const char * __EVP_KEYEXCH_get0_description(__reg("a6") struct Library * , __reg("a0") const EVP_KEYEXCH * keyexch ) = "\tjsr\t-5310(a6)";
#define EVP_KEYEXCH_get0_description(keyexch) __EVP_KEYEXCH_get0_description(AmiSSLExtBase, (keyexch))

const char * __EVP_KDF_get0_description(__reg("a6") struct Library * , __reg("a0") const EVP_KDF * kdf ) = "\tjsr\t-5316(a6)";
#define EVP_KDF_get0_description(kdf) __EVP_KDF_get0_description(AmiSSLExtBase, (kdf))

int __OPENSSL_sk_find_all(__reg("a6") struct Library * , __reg("a0") OPENSSL_STACK * st , __reg("a1") const void * data , __reg("a2") int * pnum ) = "\tjsr\t-5322(a6)";
#define OPENSSL_sk_find_all(st, data, pnum) __OPENSSL_sk_find_all(AmiSSLExtBase, (st), (data), (pnum))

X509_CRL * __X509_CRL_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-5328(a6)";
#define X509_CRL_new_ex(libctx, propq) __X509_CRL_new_ex(AmiSSLExtBase, (libctx), (propq))

OSSL_PARAM * __OSSL_PARAM_dup(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p ) = "\tjsr\t-5334(a6)";
#define OSSL_PARAM_dup(p) __OSSL_PARAM_dup(AmiSSLExtBase, (p))

OSSL_PARAM * __OSSL_PARAM_merge(__reg("a6") struct Library * , __reg("a0") const OSSL_PARAM * p1 , __reg("a1") const OSSL_PARAM * p2 ) = "\tjsr\t-5340(a6)";
#define OSSL_PARAM_merge(p1, p2) __OSSL_PARAM_merge(AmiSSLExtBase, (p1), (p2))

void __OSSL_PARAM_free(__reg("a6") struct Library * , __reg("a0") OSSL_PARAM * p ) = "\tjsr\t-5346(a6)";
#define OSSL_PARAM_free(p) __OSSL_PARAM_free(AmiSSLExtBase, (p))

int __EVP_PKEY_todata(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey , __reg("d0") int selection , __reg("a1") OSSL_PARAM ** params ) = "\tjsr\t-5352(a6)";
#define EVP_PKEY_todata(pkey, selection, params) __EVP_PKEY_todata(AmiSSLExtBase, (pkey), (selection), (params))

int __EVP_PKEY_export(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * pkey , __reg("d0") int selection , __reg("a1") OSSL_CALLBACK * export_cb , __reg("a2") void * export_cbarg ) = "\tjsr\t-5358(a6)";
#define EVP_PKEY_export(pkey, selection, export_cb, export_cbarg) __EVP_PKEY_export(AmiSSLExtBase, (pkey), (selection), (export_cb), (export_cbarg))

const EVP_MD * __EVP_MD_CTX_get0_md(__reg("a6") struct Library * , __reg("a0") const EVP_MD_CTX * ctx ) = "\tjsr\t-5364(a6)";
#define EVP_MD_CTX_get0_md(ctx) __EVP_MD_CTX_get0_md(AmiSSLExtBase, (ctx))

EVP_MD * __EVP_MD_CTX_get1_md(__reg("a6") struct Library * , __reg("a0") EVP_MD_CTX * ctx ) = "\tjsr\t-5370(a6)";
#define EVP_MD_CTX_get1_md(ctx) __EVP_MD_CTX_get1_md(AmiSSLExtBase, (ctx))

const EVP_CIPHER * __EVP_CIPHER_CTX_get0_cipher(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER_CTX * ctx ) = "\tjsr\t-5376(a6)";
#define EVP_CIPHER_CTX_get0_cipher(ctx) __EVP_CIPHER_CTX_get0_cipher(AmiSSLExtBase, (ctx))

EVP_CIPHER * __EVP_CIPHER_CTX_get1_cipher(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx ) = "\tjsr\t-5382(a6)";
#define EVP_CIPHER_CTX_get1_cipher(ctx) __EVP_CIPHER_CTX_get1_cipher(AmiSSLExtBase, (ctx))

OSSL_LIB_CTX * __OSSL_LIB_CTX_get0_global_default(__reg("a6") struct Library * ) = "\tjsr\t-5388(a6)";
#define OSSL_LIB_CTX_get0_global_default() __OSSL_LIB_CTX_get0_global_default(AmiSSLExtBase)

const char * __EVP_SIGNATURE_get0_name(__reg("a6") struct Library * , __reg("a0") const EVP_SIGNATURE * signature ) = "\tjsr\t-5394(a6)";
#define EVP_SIGNATURE_get0_name(signature) __EVP_SIGNATURE_get0_name(AmiSSLExtBase, (signature))

const char * __EVP_ASYM_CIPHER_get0_name(__reg("a6") struct Library * , __reg("a0") const EVP_ASYM_CIPHER * cipher ) = "\tjsr\t-5400(a6)";
#define EVP_ASYM_CIPHER_get0_name(cipher) __EVP_ASYM_CIPHER_get0_name(AmiSSLExtBase, (cipher))

const char * __EVP_KEM_get0_name(__reg("a6") struct Library * , __reg("a0") const EVP_KEM * wrap ) = "\tjsr\t-5406(a6)";
#define EVP_KEM_get0_name(wrap) __EVP_KEM_get0_name(AmiSSLExtBase, (wrap))

const char * __EVP_KEYEXCH_get0_name(__reg("a6") struct Library * , __reg("a0") const EVP_KEYEXCH * keyexch ) = "\tjsr\t-5412(a6)";
#define EVP_KEYEXCH_get0_name(keyexch) __EVP_KEYEXCH_get0_name(AmiSSLExtBase, (keyexch))

int __PKCS5_v2_PBE_keyivgen_ex(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx , __reg("a1") const char * pass , __reg("d0") int passlen , __reg("a2") ASN1_TYPE * param , __reg("a3") const EVP_CIPHER * cipher , __reg("d1") const EVP_MD * md , __reg("d2") int en_de , __reg("d3") OSSL_LIB_CTX * libctx , __reg("d4") const char * propq ) = "\tjsr\t-5418(a6)";
#define PKCS5_v2_PBE_keyivgen_ex(ctx, pass, passlen, param, cipher, md, en_de, libctx, propq) __PKCS5_v2_PBE_keyivgen_ex(AmiSSLExtBase, (ctx), (pass), (passlen), (param), (cipher), (md), (en_de), (libctx), (propq))

int __EVP_PBE_scrypt_amiga_1(__reg("a6") struct Library * , __reg("a0") const char * pass , __reg("a1") size_t passlen , __reg("a2") const unsigned char * salt , __reg("d0/d1") uint64_t N , __reg("d2/d3") uint64_t r , __reg("d4/d5") uint64_t p , __reg("d6/d7") uint64_t maxmem , __reg("a3") void * moreargs ) = "\tjsr\t-5424(a6)";
#define EVP_PBE_scrypt_amiga_1(pass, passlen, salt, N, r, p, maxmem, moreargs) __EVP_PBE_scrypt_amiga_1(AmiSSLExtBase, (pass), (passlen), (salt), (N), (r), (p), (maxmem), (moreargs))

void * __EVP_PBE_scrypt_amiga_2(__reg("a6") struct Library * , __reg("d0") size_t saltlen , __reg("a0") unsigned char * key , __reg("d1") size_t keylen ) = "\tjsr\t-5430(a6)";
#define EVP_PBE_scrypt_amiga_2(saltlen, key, keylen) __EVP_PBE_scrypt_amiga_2(AmiSSLExtBase, (saltlen), (key), (keylen))

void * __EVP_PBE_scrypt_ex_amiga_2(__reg("a6") struct Library * , __reg("d0") size_t saltlen , __reg("a0") unsigned char * key , __reg("d1") size_t keylen , __reg("a1") OSSL_LIB_CTX * ctx , __reg("a2") const char * propq ) = "\tjsr\t-5436(a6)";
#define EVP_PBE_scrypt_ex_amiga_2(saltlen, key, keylen, ctx, propq) __EVP_PBE_scrypt_ex_amiga_2(AmiSSLExtBase, (saltlen), (key), (keylen), (ctx), (propq))

int __PKCS5_v2_scrypt_keyivgen_ex(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx , __reg("a1") const char * pass , __reg("d0") int passlen , __reg("a2") ASN1_TYPE * param , __reg("a3") const EVP_CIPHER * c , __reg("d1") const EVP_MD * md , __reg("d2") int en_de , __reg("d3") OSSL_LIB_CTX * libctx , __reg("d4") const char * propq ) = "\tjsr\t-5442(a6)";
#define PKCS5_v2_scrypt_keyivgen_ex(ctx, pass, passlen, param, c, md, en_de, libctx, propq) __PKCS5_v2_scrypt_keyivgen_ex(AmiSSLExtBase, (ctx), (pass), (passlen), (param), (c), (md), (en_de), (libctx), (propq))

int __EVP_PBE_CipherInit_ex(__reg("a6") struct Library * , __reg("a0") ASN1_OBJECT * pbe_obj , __reg("a1") const char * pass , __reg("d0") int passlen , __reg("a2") ASN1_TYPE * param , __reg("a3") EVP_CIPHER_CTX * ctx , __reg("d1") int en_de , __reg("d2") OSSL_LIB_CTX * libctx , __reg("d3") const char * propq ) = "\tjsr\t-5448(a6)";
#define EVP_PBE_CipherInit_ex(pbe_obj, pass, passlen, param, ctx, en_de, libctx, propq) __EVP_PBE_CipherInit_ex(AmiSSLExtBase, (pbe_obj), (pass), (passlen), (param), (ctx), (en_de), (libctx), (propq))

int __EVP_PBE_find_ex(__reg("a6") struct Library * , __reg("d0") int type , __reg("d1") int pbe_nid , __reg("a0") int * pcnid , __reg("a1") int * pmnid , __reg("a2") EVP_PBE_KEYGEN ** pkeygen , __reg("a3") EVP_PBE_KEYGEN_EX ** pkeygen_ex ) = "\tjsr\t-5454(a6)";
#define EVP_PBE_find_ex(type, pbe_nid, pcnid, pmnid, pkeygen, pkeygen_ex) __EVP_PBE_find_ex(AmiSSLExtBase, (type), (pbe_nid), (pcnid), (pmnid), (pkeygen), (pkeygen_ex))

PKCS12_SAFEBAG * __PKCS12_SAFEBAG_create_pkcs8_encrypt_ex(__reg("a6") struct Library * , __reg("d0") int pbe_nid , __reg("a0") const char * pass , __reg("d1") int passlen , __reg("a1") unsigned char * salt , __reg("d2") int saltlen , __reg("d3") int iter , __reg("a2") PKCS8_PRIV_KEY_INFO * p8inf , __reg("a3") OSSL_LIB_CTX * ctx , __reg("d4") const char * propq ) = "\tjsr\t-5460(a6)";
#define PKCS12_SAFEBAG_create_pkcs8_encrypt_ex(pbe_nid, pass, passlen, salt, saltlen, iter, p8inf, ctx, propq) __PKCS12_SAFEBAG_create_pkcs8_encrypt_ex(AmiSSLExtBase, (pbe_nid), (pass), (passlen), (salt), (saltlen), (iter), (p8inf), (ctx), (propq))

PKCS8_PRIV_KEY_INFO * __PKCS8_decrypt_ex(__reg("a6") struct Library * , __reg("a0") const X509_SIG * p8 , __reg("a1") const char * pass , __reg("d0") int passlen , __reg("a2") OSSL_LIB_CTX * ctx , __reg("a3") const char * propq ) = "\tjsr\t-5466(a6)";
#define PKCS8_decrypt_ex(p8, pass, passlen, ctx, propq) __PKCS8_decrypt_ex(AmiSSLExtBase, (p8), (pass), (passlen), (ctx), (propq))

PKCS8_PRIV_KEY_INFO * __PKCS12_decrypt_skey_ex(__reg("a6") struct Library * , __reg("a0") const PKCS12_SAFEBAG * bag , __reg("a1") const char * pass , __reg("d0") int passlen , __reg("a2") OSSL_LIB_CTX * ctx , __reg("a3") const char * propq ) = "\tjsr\t-5472(a6)";
#define PKCS12_decrypt_skey_ex(bag, pass, passlen, ctx, propq) __PKCS12_decrypt_skey_ex(AmiSSLExtBase, (bag), (pass), (passlen), (ctx), (propq))

X509_SIG * __PKCS8_encrypt_ex(__reg("a6") struct Library * , __reg("d0") int pbe_nid , __reg("a0") const EVP_CIPHER * cipher , __reg("a1") const char * pass , __reg("d1") int passlen , __reg("a2") unsigned char * salt , __reg("d2") int saltlen , __reg("d3") int iter , __reg("a3") PKCS8_PRIV_KEY_INFO * p8 , __reg("d4") OSSL_LIB_CTX * ctx , __reg("d5") const char * propq ) = "\tjsr\t-5478(a6)";
#define PKCS8_encrypt_ex(pbe_nid, cipher, pass, passlen, salt, saltlen, iter, p8, ctx, propq) __PKCS8_encrypt_ex(AmiSSLExtBase, (pbe_nid), (cipher), (pass), (passlen), (salt), (saltlen), (iter), (p8), (ctx), (propq))

X509_SIG * __PKCS8_set0_pbe_ex(__reg("a6") struct Library * , __reg("a0") const char * pass , __reg("d0") int passlen , __reg("a1") PKCS8_PRIV_KEY_INFO * p8inf , __reg("a2") X509_ALGOR * pbe , __reg("a3") OSSL_LIB_CTX * ctx , __reg("d1") const char * propq ) = "\tjsr\t-5484(a6)";
#define PKCS8_set0_pbe_ex(pass, passlen, p8inf, pbe, ctx, propq) __PKCS8_set0_pbe_ex(AmiSSLExtBase, (pass), (passlen), (p8inf), (pbe), (ctx), (propq))

PKCS7 * __PKCS12_pack_p7encdata_ex(__reg("a6") struct Library * , __reg("d0") int pbe_nid , __reg("a0") const char * pass , __reg("d1") int passlen , __reg("a1") unsigned char * salt , __reg("d2") int saltlen , __reg("d3") int iter , __reg("a2") STACK_OF(PKCS12_SAFEBAG) * bags , __reg("a3") OSSL_LIB_CTX * ctx , __reg("d4") const char * propq ) = "\tjsr\t-5490(a6)";
#define PKCS12_pack_p7encdata_ex(pbe_nid, pass, passlen, salt, saltlen, iter, bags, ctx, propq) __PKCS12_pack_p7encdata_ex(AmiSSLExtBase, (pbe_nid), (pass), (passlen), (salt), (saltlen), (iter), (bags), (ctx), (propq))

unsigned char * __PKCS12_pbe_crypt_ex(__reg("a6") struct Library * , __reg("a0") const X509_ALGOR * algor , __reg("a1") const char * pass , __reg("d0") int passlen , __reg("a2") const unsigned char * in , __reg("d1") int inlen , __reg("a3") unsigned char ** data , __reg("d2") int * datalen , __reg("d3") int en_de , __reg("d4") OSSL_LIB_CTX * libctx , __reg("d5") const char * propq ) = "\tjsr\t-5496(a6)";
#define PKCS12_pbe_crypt_ex(algor, pass, passlen, in, inlen, data, datalen, en_de, libctx, propq) __PKCS12_pbe_crypt_ex(AmiSSLExtBase, (algor), (pass), (passlen), (in), (inlen), (data), (datalen), (en_de), (libctx), (propq))

void * __PKCS12_item_decrypt_d2i_ex(__reg("a6") struct Library * , __reg("a0") const X509_ALGOR * algor , __reg("a1") const ASN1_ITEM * it , __reg("a2") const char * pass , __reg("d0") int passlen , __reg("a3") const ASN1_OCTET_STRING * oct , __reg("d1") int zbuf , __reg("d2") OSSL_LIB_CTX * libctx , __reg("d3") const char * propq ) = "\tjsr\t-5502(a6)";
#define PKCS12_item_decrypt_d2i_ex(algor, it, pass, passlen, oct, zbuf, libctx, propq) __PKCS12_item_decrypt_d2i_ex(AmiSSLExtBase, (algor), (it), (pass), (passlen), (oct), (zbuf), (libctx), (propq))

ASN1_OCTET_STRING * __PKCS12_item_i2d_encrypt_ex(__reg("a6") struct Library * , __reg("a0") X509_ALGOR * algor , __reg("a1") const ASN1_ITEM * it , __reg("a2") const char * pass , __reg("d0") int passlen , __reg("a3") void * obj , __reg("d1") int zbuf , __reg("d2") OSSL_LIB_CTX * ctx , __reg("d3") const char * propq ) = "\tjsr\t-5508(a6)";
#define PKCS12_item_i2d_encrypt_ex(algor, it, pass, passlen, obj, zbuf, ctx, propq) __PKCS12_item_i2d_encrypt_ex(AmiSSLExtBase, (algor), (it), (pass), (passlen), (obj), (zbuf), (ctx), (propq))

PKCS12 * __PKCS12_init_ex(__reg("a6") struct Library * , __reg("d0") int mode , __reg("a0") OSSL_LIB_CTX * ctx , __reg("a1") const char * propq ) = "\tjsr\t-5514(a6)";
#define PKCS12_init_ex(mode, ctx, propq) __PKCS12_init_ex(AmiSSLExtBase, (mode), (ctx), (propq))

int __PKCS12_key_gen_asc_ex(__reg("a6") struct Library * , __reg("a0") const char * pass , __reg("d0") int passlen , __reg("a1") unsigned char * salt , __reg("d1") int saltlen , __reg("d2") int id , __reg("d3") int iter , __reg("d4") int n , __reg("a2") unsigned char * out , __reg("a3") const EVP_MD * md_type , __reg("d5") OSSL_LIB_CTX * ctx , __reg("d6") const char * propq ) = "\tjsr\t-5520(a6)";
#define PKCS12_key_gen_asc_ex(pass, passlen, salt, saltlen, id, iter, n, out, md_type, ctx, propq) __PKCS12_key_gen_asc_ex(AmiSSLExtBase, (pass), (passlen), (salt), (saltlen), (id), (iter), (n), (out), (md_type), (ctx), (propq))

int __PKCS12_key_gen_uni_ex(__reg("a6") struct Library * , __reg("a0") unsigned char * pass , __reg("d0") int passlen , __reg("a1") unsigned char * salt , __reg("d1") int saltlen , __reg("d2") int id , __reg("d3") int iter , __reg("d4") int n , __reg("a2") unsigned char * out , __reg("a3") const EVP_MD * md_type , __reg("d5") OSSL_LIB_CTX * ctx , __reg("d6") const char * propq ) = "\tjsr\t-5526(a6)";
#define PKCS12_key_gen_uni_ex(pass, passlen, salt, saltlen, id, iter, n, out, md_type, ctx, propq) __PKCS12_key_gen_uni_ex(AmiSSLExtBase, (pass), (passlen), (salt), (saltlen), (id), (iter), (n), (out), (md_type), (ctx), (propq))

int __PKCS12_key_gen_utf8_ex(__reg("a6") struct Library * , __reg("a0") const char * pass , __reg("d0") int passlen , __reg("a1") unsigned char * salt , __reg("d1") int saltlen , __reg("d2") int id , __reg("d3") int iter , __reg("d4") int n , __reg("a2") unsigned char * out , __reg("a3") const EVP_MD * md_type , __reg("d5") OSSL_LIB_CTX * ctx , __reg("d6") const char * propq ) = "\tjsr\t-5532(a6)";
#define PKCS12_key_gen_utf8_ex(pass, passlen, salt, saltlen, id, iter, n, out, md_type, ctx, propq) __PKCS12_key_gen_utf8_ex(AmiSSLExtBase, (pass), (passlen), (salt), (saltlen), (id), (iter), (n), (out), (md_type), (ctx), (propq))

int __PKCS12_PBE_keyivgen_ex(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * ctx , __reg("a1") const char * pass , __reg("d0") int passlen , __reg("a2") ASN1_TYPE * param , __reg("a3") const EVP_CIPHER * cipher , __reg("d1") const EVP_MD * md_type , __reg("d2") int en_de , __reg("d3") OSSL_LIB_CTX * libctx , __reg("d4") const char * propq ) = "\tjsr\t-5538(a6)";
#define PKCS12_PBE_keyivgen_ex(ctx, pass, passlen, param, cipher, md_type, en_de, libctx, propq) __PKCS12_PBE_keyivgen_ex(AmiSSLExtBase, (ctx), (pass), (passlen), (param), (cipher), (md_type), (en_de), (libctx), (propq))

PKCS12 * __PKCS12_create_ex(__reg("a6") struct Library * , __reg("a0") const char * pass , __reg("a1") const char * name , __reg("a2") EVP_PKEY * pkey , __reg("a3") X509 * cert , __reg("d0") STACK_OF(X509) * ca , __reg("d1") int nid_key , __reg("d2") int nid_cert , __reg("d3") int iter , __reg("d4") int mac_iter , __reg("d5") int keytype , __reg("d6") OSSL_LIB_CTX * ctx , __reg("d7") const char * propq ) = "\tjsr\t-5544(a6)";
#define PKCS12_create_ex(pass, name, pkey, cert, ca, nid_key, nid_cert, iter, mac_iter, keytype, ctx, propq) __PKCS12_create_ex(AmiSSLExtBase, (pass), (name), (pkey), (cert), (ca), (nid_key), (nid_cert), (iter), (mac_iter), (keytype), (ctx), (propq))

PKCS12_SAFEBAG * __PKCS12_add_key_ex(__reg("a6") struct Library * , __reg("a0") STACK_OF(PKCS12_SAFEBAG) ** pbags , __reg("a1") EVP_PKEY * key , __reg("d0") int key_usage , __reg("d1") int iter , __reg("d2") int key_nid , __reg("a2") const char * pass , __reg("a3") OSSL_LIB_CTX * ctx , __reg("d3") const char * propq ) = "\tjsr\t-5550(a6)";
#define PKCS12_add_key_ex(pbags, key, key_usage, iter, key_nid, pass, ctx, propq) __PKCS12_add_key_ex(AmiSSLExtBase, (pbags), (key), (key_usage), (iter), (key_nid), (pass), (ctx), (propq))

int __PKCS12_add_safe_ex(__reg("a6") struct Library * , __reg("a0") STACK_OF(PKCS7) ** psafes , __reg("a1") STACK_OF(PKCS12_SAFEBAG) * bags , __reg("d0") int safe_nid , __reg("d1") int iter , __reg("a2") const char * pass , __reg("a3") OSSL_LIB_CTX * ctx , __reg("d2") const char * propq ) = "\tjsr\t-5556(a6)";
#define PKCS12_add_safe_ex(psafes, bags, safe_nid, iter, pass, ctx, propq) __PKCS12_add_safe_ex(AmiSSLExtBase, (psafes), (bags), (safe_nid), (iter), (pass), (ctx), (propq))

PKCS12 * __PKCS12_add_safes_ex(__reg("a6") struct Library * , __reg("a0") STACK_OF(PKCS7) * safes , __reg("d0") int p7_nid , __reg("a1") OSSL_LIB_CTX * ctx , __reg("a2") const char * propq ) = "\tjsr\t-5562(a6)";
#define PKCS12_add_safes_ex(safes, p7_nid, ctx, propq) __PKCS12_add_safes_ex(AmiSSLExtBase, (safes), (p7_nid), (ctx), (propq))

int __PKCS5_pbe_set0_algor_ex(__reg("a6") struct Library * , __reg("a0") X509_ALGOR * algor , __reg("d0") int alg , __reg("d1") int iter , __reg("a1") const unsigned char * salt , __reg("d2") int saltlen , __reg("a2") OSSL_LIB_CTX * libctx ) = "\tjsr\t-5568(a6)";
#define PKCS5_pbe_set0_algor_ex(algor, alg, iter, salt, saltlen, libctx) __PKCS5_pbe_set0_algor_ex(AmiSSLExtBase, (algor), (alg), (iter), (salt), (saltlen), (libctx))

X509_ALGOR * __PKCS5_pbe_set_ex(__reg("a6") struct Library * , __reg("d0") int alg , __reg("d1") int iter , __reg("a0") const unsigned char * salt , __reg("d2") int saltlen , __reg("a1") OSSL_LIB_CTX * libctx ) = "\tjsr\t-5574(a6)";
#define PKCS5_pbe_set_ex(alg, iter, salt, saltlen, libctx) __PKCS5_pbe_set_ex(AmiSSLExtBase, (alg), (iter), (salt), (saltlen), (libctx))

X509_ALGOR * __PKCS5_pbe2_set_iv_ex(__reg("a6") struct Library * , __reg("a0") const EVP_CIPHER * cipher , __reg("d0") int iter , __reg("a1") unsigned char * salt , __reg("d1") int saltlen , __reg("a2") unsigned char * aiv , __reg("d2") int prf_nid , __reg("a3") OSSL_LIB_CTX * libctx ) = "\tjsr\t-5580(a6)";
#define PKCS5_pbe2_set_iv_ex(cipher, iter, salt, saltlen, aiv, prf_nid, libctx) __PKCS5_pbe2_set_iv_ex(AmiSSLExtBase, (cipher), (iter), (salt), (saltlen), (aiv), (prf_nid), (libctx))

X509_ALGOR * __PKCS5_pbkdf2_set_ex(__reg("a6") struct Library * , __reg("d0") int iter , __reg("a0") unsigned char * salt , __reg("d1") int saltlen , __reg("d2") int prf_nid , __reg("d3") int keylen , __reg("a1") OSSL_LIB_CTX * libctx ) = "\tjsr\t-5586(a6)";
#define PKCS5_pbkdf2_set_ex(iter, salt, saltlen, prf_nid, keylen, libctx) __PKCS5_pbkdf2_set_ex(AmiSSLExtBase, (iter), (salt), (saltlen), (prf_nid), (keylen), (libctx))

BIO * __BIO_new_from_core_bio(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") OSSL_CORE_BIO * corebio ) = "\tjsr\t-5592(a6)";
#define BIO_new_from_core_bio(libctx, corebio) __BIO_new_from_core_bio(AmiSSLExtBase, (libctx), (corebio))

BIO * __BIO_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const BIO_METHOD * method ) = "\tjsr\t-5598(a6)";
#define BIO_new_ex(libctx, method) __BIO_new_ex(AmiSSLExtBase, (libctx), (method))

const BIO_METHOD * __BIO_s_core(__reg("a6") struct Library * ) = "\tjsr\t-5604(a6)";
#define BIO_s_core() __BIO_s_core(AmiSSLExtBase)

int __BIO_get_line(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("a1") char * buf , __reg("d0") int size ) = "\tjsr\t-5610(a6)";
#define BIO_get_line(bio, buf, size) __BIO_get_line(AmiSSLExtBase, (bio), (buf), (size))

OSSL_LIB_CTX * __OSSL_LIB_CTX_new_from_dispatch(__reg("a6") struct Library * , __reg("a0") const OSSL_CORE_HANDLE * handle , __reg("a1") const OSSL_DISPATCH * in ) = "\tjsr\t-5616(a6)";
#define OSSL_LIB_CTX_new_from_dispatch(handle, in) __OSSL_LIB_CTX_new_from_dispatch(AmiSSLExtBase, (handle), (in))

OSSL_LIB_CTX * __OSSL_LIB_CTX_new_child(__reg("a6") struct Library * , __reg("a0") const OSSL_CORE_HANDLE * handle , __reg("a1") const OSSL_DISPATCH * in ) = "\tjsr\t-5622(a6)";
#define OSSL_LIB_CTX_new_child(handle, in) __OSSL_LIB_CTX_new_child(AmiSSLExtBase, (handle), (in))

const OSSL_DISPATCH * __OSSL_PROVIDER_get0_dispatch(__reg("a6") struct Library * , __reg("a0") const OSSL_PROVIDER * prov ) = "\tjsr\t-5628(a6)";
#define OSSL_PROVIDER_get0_dispatch(prov) __OSSL_PROVIDER_get0_dispatch(AmiSSLExtBase, (prov))

int __PKCS5_PBE_keyivgen_ex(__reg("a6") struct Library * , __reg("a0") EVP_CIPHER_CTX * cctx , __reg("a1") const char * pass , __reg("d0") int passlen , __reg("a2") ASN1_TYPE * param , __reg("a3") const EVP_CIPHER * cipher , __reg("d1") const EVP_MD * md , __reg("d2") int en_de , __reg("d3") OSSL_LIB_CTX * libctx , __reg("d4") const char * propq ) = "\tjsr\t-5634(a6)";
#define PKCS5_PBE_keyivgen_ex(cctx, pass, passlen, param, cipher, md, en_de, libctx, propq) __PKCS5_PBE_keyivgen_ex(AmiSSLExtBase, (cctx), (pass), (passlen), (param), (cipher), (md), (en_de), (libctx), (propq))

size_t __EVP_MAC_CTX_get_block_size(__reg("a6") struct Library * , __reg("a0") EVP_MAC_CTX * ctx ) = "\tjsr\t-5640(a6)";
#define EVP_MAC_CTX_get_block_size(ctx) __EVP_MAC_CTX_get_block_size(AmiSSLExtBase, (ctx))

long __BIO_debug_callback_ex(__reg("a6") struct Library * , __reg("a0") BIO * bio , __reg("d0") int oper , __reg("a1") const char * argp , __reg("d1") size_t len , __reg("d2") int argi , __reg("d3") long argl , __reg("d4") int ret , __reg("a2") size_t * processed ) = "\tjsr\t-5646(a6)";
#define BIO_debug_callback_ex(bio, oper, argp, len, argi, argl, ret, processed) __BIO_debug_callback_ex(AmiSSLExtBase, (bio), (oper), (argp), (len), (argi), (argl), (ret), (processed))

EVP_PKEY * __b2i_PVK_bio_ex(__reg("a6") struct Library * , __reg("a0") BIO * in , __reg("a1") pem_password_cb * cb , __reg("a2") void * u , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d0") const char * propq ) = "\tjsr\t-5652(a6)";
#define b2i_PVK_bio_ex(in, cb, u, libctx, propq) __b2i_PVK_bio_ex(AmiSSLExtBase, (in), (cb), (u), (libctx), (propq))

int __i2b_PVK_bio_ex(__reg("a6") struct Library * , __reg("a0") BIO * out , __reg("a1") const EVP_PKEY * pk , __reg("d0") int enclevel , __reg("a2") pem_password_cb * cb , __reg("a3") void * u , __reg("d1") OSSL_LIB_CTX * libctx , __reg("d2") const char * propq ) = "\tjsr\t-5658(a6)";
#define i2b_PVK_bio_ex(out, pk, enclevel, cb, u, libctx, propq) __i2b_PVK_bio_ex(AmiSSLExtBase, (out), (pk), (enclevel), (cb), (u), (libctx), (propq))

OSSL_LIB_CTX * __NCONF_get0_libctx(__reg("a6") struct Library * , __reg("a0") const CONF * conf ) = "\tjsr\t-5664(a6)";
#define NCONF_get0_libctx(conf) __NCONF_get0_libctx(AmiSSLExtBase, (conf))

STACK_OF(OPENSSL_CSTRING) * __NCONF_get_section_names(__reg("a6") struct Library * , __reg("a0") const CONF * conf ) = "\tjsr\t-5670(a6)";
#define NCONF_get_section_names(conf) __NCONF_get_section_names(AmiSSLExtBase, (conf))

X509_PUBKEY * __X509_PUBKEY_new_ex(__reg("a6") struct Library * , __reg("a0") OSSL_LIB_CTX * libctx , __reg("a1") const char * propq ) = "\tjsr\t-5676(a6)";
#define X509_PUBKEY_new_ex(libctx, propq) __X509_PUBKEY_new_ex(AmiSSLExtBase, (libctx), (propq))

ASN1_VALUE * __ASN1_item_new_ex(__reg("a6") struct Library * , __reg("a0") const ASN1_ITEM * it , __reg("a1") OSSL_LIB_CTX * libctx , __reg("a2") const char * propq ) = "\tjsr\t-5682(a6)";
#define ASN1_item_new_ex(it, libctx, propq) __ASN1_item_new_ex(AmiSSLExtBase, (it), (libctx), (propq))

void * __ASN1_item_d2i_bio_ex(__reg("a6") struct Library * , __reg("a0") const ASN1_ITEM * it , __reg("a1") BIO * in , __reg("a2") void * pval , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d0") const char * propq ) = "\tjsr\t-5688(a6)";
#define ASN1_item_d2i_bio_ex(it, in, pval, libctx, propq) __ASN1_item_d2i_bio_ex(AmiSSLExtBase, (it), (in), (pval), (libctx), (propq))

ASN1_VALUE * __ASN1_item_d2i_ex(__reg("a6") struct Library * , __reg("a0") ASN1_VALUE ** val , __reg("a1") const unsigned char ** in , __reg("d0") long len , __reg("a2") const ASN1_ITEM * it , __reg("a3") OSSL_LIB_CTX * libctx , __reg("d1") const char * propq ) = "\tjsr\t-5694(a6)";
#define ASN1_item_d2i_ex(val, in, len, it, libctx, propq) __ASN1_item_d2i_ex(AmiSSLExtBase, (val), (in), (len), (it), (libctx), (propq))

int __ASN1_TIME_print_ex(__reg("a6") struct Library * , __reg("a0") BIO * bp , __reg("a1") const ASN1_TIME * tm , __reg("d0") unsigned long flags ) = "\tjsr\t-5700(a6)";
#define ASN1_TIME_print_ex(bp, tm, flags) __ASN1_TIME_print_ex(AmiSSLExtBase, (bp), (tm), (flags))

const OSSL_PROVIDER * __EVP_PKEY_get0_provider(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY * key ) = "\tjsr\t-5706(a6)";
#define EVP_PKEY_get0_provider(key) __EVP_PKEY_get0_provider(AmiSSLExtBase, (key))

const OSSL_PROVIDER * __EVP_PKEY_CTX_get0_provider(__reg("a6") struct Library * , __reg("a0") const EVP_PKEY_CTX * ctx ) = "\tjsr\t-5712(a6)";
#define EVP_PKEY_CTX_get0_provider(ctx) __EVP_PKEY_CTX_get0_provider(AmiSSLExtBase, (ctx))

int __OPENSSL_strcasecmp(__reg("a6") struct Library * , __reg("a0") const char * s1 , __reg("a1") const char * s2 ) = "\tjsr\t-5718(a6)";
#define OPENSSL_strcasecmp(s1, s2) __OPENSSL_strcasecmp(AmiSSLExtBase, (s1), (s2))

int __OPENSSL_strncasecmp(__reg("a6") struct Library * , __reg("a0") const char * s1 , __reg("a1") const char * s2 , __reg("d0") size_t n ) = "\tjsr\t-5724(a6)";
#define OPENSSL_strncasecmp(s1, s2, n) __OPENSSL_strncasecmp(AmiSSLExtBase, (s1), (s2), (n))

#endif /* !_INLINE_AMISSLEXT_H */
