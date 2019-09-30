#include <stdio.h>
#include <string.h>
#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>

#ifndef __amigaos4__
static BPTR ErrorOutput(void)
{
  struct Process *proc = (struct Process *)FindTask(NULL);

  return(proc->pr_CES);
}
#endif /* !__amigaos4 */

/* Only stdin, stdout and stderr are used in OpenSSL test applications
 * and openssl program, so the following function should cover all cases.
 */
static BPTR GetFileBPTR(const char *func_name, FILE *fp)
{
  BPTR ret;

  if (fp == stdout || (fp == stderr && !ErrorOutput()))
    ret = Output();
  else if (fp == stderr)
    ret = ErrorOutput();
  else if (fp == stdin)
    ret = Input();
  else
  {
    Printf("*** WARNING (%s): %lx is neither stdin (%lx), stdout (%lx) nor stderr (%lx) in GetFileBPTR in stubs, returning NULL!\n", func_name, fp, stdin, stdout, stderr);
    ret = (BPTR)NULL;
  }

  if (ret)
  {
    #if defined(__amigaos4__)
    FFlush(ret);
    #else
    Flush(ret);
    #endif
  }

  return(ret);
}

void (ERR_print_errors_fp)(FILE *fp)
{
  BIO *temp;

  if((temp = BIO_new(BIO_s_file())))
  {
    fflush(fp);

    if (BIO_set_fp_amiga(temp, GetFileBPTR("ERR_print_errors_fp", fp), BIO_NOCLOSE))
      ERR_print_errors(temp);

    BIO_free(temp);
  }
}

int (BN_print_fp)(FILE *fp, const BIGNUM *a)
{
  BIO *temp;
  int ret = 0;

  if((temp = BIO_new(BIO_s_file())))
  {
    fflush(fp);

    if (BIO_set_fp_amiga(temp, GetFileBPTR("BN_print_fp", fp), BIO_NOCLOSE))
      ret = BN_print(temp, a);

    BIO_free(temp);
  }

  return(ret);
}

long (BIO_set_fp)(BIO *b, FILE *fp, int closeflag)
{
  fflush(fp); // Flush the file if there are pending writes. After this point we cannot repair anything out of sync

  return(BIO_set_fp_amiga(b, GetFileBPTR("BIO_set_fp", fp),
                          (closeflag & ~BIO_CLOSE) | BIO_NOCLOSE)); // We cannot allow someone else to close the file
}

BIO *(BIO_new_fp)(FILE *stream, int closeflag)
{
  BIO *ret;

  fflush(stream); // Flush the file if there are pending writes. After this point we cannot repair anything out of sync

  if((ret = BIO_new(BIO_s_file())) != NULL)
    BIO_set_fp_amiga(ret, GetFileBPTR("BIO_new_fp", stream),
                     (closeflag & ~BIO_CLOSE) | BIO_NOCLOSE); // We cannot allow someone else to close the file

  return(ret);
}

int (X509_NAME_print_ex_fp)(FILE *fp, const X509_NAME *nm, int indent, unsigned long flags)
{
  int ret=0;
  BIO *out;

  if((out = BIO_new(BIO_s_file())) != NULL)
  {
    fflush(fp); // Flush the file if there are pending writes. After this point we cannot repair anything out of sync

    if(BIO_set_fp_amiga(out, GetFileBPTR("X509_NAME_print_ex_fp", fp), BIO_NOCLOSE))
      ret = X509_NAME_print_ex(out, nm, indent, flags);

    BIO_free(out);
  }

  return ret;
}

void (ASN1_OBJECT_free)(ASN1_OBJECT *a)
{
  ASN1_OBJECT_free(a);
}

long (BIO_debug_callback)(BIO *bio, int cmd, const char *argp, int argi, long argl, long ret)
{
  return(BIO_debug_callback(bio, cmd, argp, argi, argl, ret));
}

DH * (DH_new)(void)
{
  return(DH_new());
}

DSA * (DSA_new)(void)
{
  return(DSA_new());
}

OCSP_REQUEST * (OCSP_REQUEST_new)(void)
{
  return(OCSP_REQUEST_new());
}

OCSP_RESPONSE * (OCSP_RESPONSE_new)(void)
{
  return(OCSP_RESPONSE_new());
}

void (PKCS12_SAFEBAG_free)(PKCS12_SAFEBAG *a)
{
  PKCS12_SAFEBAG_free(a);
}

void (PKCS7_free)(PKCS7 *a)
{
  PKCS7_free(a);
}

SSL_SESSION * (SSL_SESSION_new)(void)
{
  return(SSL_SESSION_new());
}

void (X509V3_conf_free)(CONF_VALUE *val)
{
  X509V3_conf_free(val);
}

void (X509_EXTENSION_free)(X509_EXTENSION *a)
{
  X509_EXTENSION_free(a);
}

void (X509_INFO_free)(X509_INFO *a)
{
  X509_INFO_free(a);
}

void (X509_free)(X509 *a)
{
  X509_free(a);
}

X509 * (d2i_X509_AUX)(X509 **a, const unsigned char **pp, long length)
{
  return(d2i_X509_AUX(a, pp, length));
}

X509 * (d2i_X509)(X509 **a, const unsigned char **pp, long length)
{
  return(d2i_X509(a, pp, length));
}

DH * (d2i_DHparams)(DH **a, const unsigned char **pp, long length)
{
  return(d2i_DHparams(a, pp, length));
}

DH * (d2i_DHxparams)(DH **a, const unsigned char **pp, long length)
{
  return(d2i_DHxparams(a, pp, length));
}

DSA * (d2i_DSAparams)(DSA **a, const unsigned char **pp, long length)
{
  return(d2i_DSAparams(a, pp, length));
}

OCSP_REQUEST * (d2i_OCSP_REQUEST)(OCSP_REQUEST **a, const unsigned char **in, long len)
{
  return(d2i_OCSP_REQUEST(a, in, len));
}

OCSP_RESPONSE * (d2i_OCSP_RESPONSE)(OCSP_RESPONSE **a, const unsigned char **in, long len)
{
  return(d2i_OCSP_RESPONSE(a, in, len));
}

SSL_SESSION * (d2i_SSL_SESSION)(SSL_SESSION **a, const unsigned char **pp, long length)
{
  return(d2i_SSL_SESSION(a, pp, length));
}

EC_GROUP * (d2i_ECPKParameters)(EC_GROUP **a, const unsigned char **in, long len)
{
  return(d2i_ECPKParameters(a, in, len));
}

int (i2d_X509_AUX)(X509 *a, unsigned char **pp)
{
  return(i2d_X509_AUX(a, pp));
}

int (i2d_X509)(X509 *a, unsigned char **pp)
{
  return(i2d_X509(a, pp));
}

int (i2d_DHparams)(const DH *a, unsigned char **pp)
{
  return(i2d_DHparams(a, pp));
}

int (i2d_DHxparams)(const DH *dh, unsigned char **pp)
{
  return(i2d_DHxparams(dh, pp));
}

int (i2d_DSAparams)(const DSA *a, unsigned char **pp)
{
  return(i2d_DSAparams(a, pp));
}

int (i2d_OCSP_REQUEST)(OCSP_REQUEST *a, unsigned char **out)
{
  return(i2d_OCSP_REQUEST(a, out));
}

int (i2d_OCSP_RESPONSE)(OCSP_RESPONSE *a, unsigned char **out)
{
  return(i2d_OCSP_RESPONSE(a, out));
}

int (i2d_SSL_SESSION)(SSL_SESSION *in, unsigned char **pp)
{
  return(i2d_SSL_SESSION(in, pp));
}

int (i2d_ECPKParameters)(const EC_GROUP *a, unsigned char **out)
{
  return(i2d_ECPKParameters(a, out));
}

void (X509_CRL_free)(X509_CRL * a)
{
  X509_CRL_free(a);
}

void (AES_encrypt)(const unsigned char * in, unsigned char * out, const AES_KEY * key)
{
  AES_encrypt(in, out, key);
}

void (GENERAL_NAMES_free)(GENERAL_NAMES * a)
{
  GENERAL_NAMES_free(a);
}

int (EVP_PKEY_sign_init)(EVP_PKEY_CTX *ctx)
{
  return EVP_PKEY_sign_init(ctx);
}

int (EVP_PKEY_sign)(EVP_PKEY_CTX *ctx,
                    unsigned char *sig, size_t *siglen,
                    const unsigned char *tbs, size_t tbslen)
{
  return EVP_PKEY_sign(ctx, sig, siglen, tbs, tbslen);
}

int (EVP_PKEY_verify_init)(EVP_PKEY_CTX *ctx)
{
  return EVP_PKEY_verify_init(ctx);
}

int (EVP_PKEY_decrypt_init)(EVP_PKEY_CTX *ctx)
{
  return EVP_PKEY_decrypt_init(ctx);
}

int (EVP_PKEY_decrypt)(EVP_PKEY_CTX *ctx,
                       unsigned char *out, size_t *outlen,
                       const unsigned char *in, size_t inlen)
{
  return EVP_PKEY_decrypt(ctx, out, outlen, in, inlen);
}

int (EVP_PKEY_verify_recover_init)(EVP_PKEY_CTX *ctx)
{
  return EVP_PKEY_verify_recover_init(ctx);
}

int (EVP_PKEY_verify_recover)(EVP_PKEY_CTX *ctx,
                              unsigned char *rout, size_t *routlen,
                              const unsigned char *sig, size_t siglen)
{
  return EVP_PKEY_verify_recover(ctx, rout, routlen, sig, siglen);
}

int (EVP_PKEY_derive_init)(EVP_PKEY_CTX *ctx)
{
  return EVP_PKEY_derive_init(ctx);
}

int (CT_verify_no_bad_scts)(const CT_POLICY_EVAL_CTX *ctx, const STACK_OF(SCT) *scts, void *arg)
{
  return CT_verify_no_bad_scts(ctx, scts, arg);
}

int (CT_verify_at_least_one_good_sct)(const CT_POLICY_EVAL_CTX * ctx, const STACK_OF(SCT) * scts, void * arg)
{
  return CT_verify_at_least_one_good_sct(ctx, scts, arg);
}

#if !defined(__AROS__) && (defined(__VBCC__) || defined(NO_INLINE_STDARG))
#if defined(_M68000) || defined(__M68000) || defined(__mc68000)
#include <proto/dos.h>
LONG (Printf)( CONST_STRPTR format, ... )
{ return VPrintf(format, (CONST APTR)((ULONG)&format + sizeof(CONST_STRPTR))); }

int (BIO_printf)( BIO *bio, const char *format, ... )
{ return BIO_vprintf(bio, format, (long *)((ULONG)&format + sizeof(const char *))); }

int (BIO_snprintf)( char *buf, size_t n, const char *format, ... )
{ return BIO_vsnprintf(buf, n, format, (long *)((ULONG)&format + sizeof(const char *))); }

void (ERR_add_error_data)(int num, ...)
{
  va_list args;
  SHOWREGISTERS();
  va_start(args, num);
  ERR_add_error_vdata(num, args);
  va_end(args);
}

#elif defined(__MORPHOS__)

int (BIO_printf)(BIO *bio, const char *format, ...)
{
  va_list args;
  int ret;
  va_start(args, format);
  ret = BIO_vprintf(bio, format, (long *)args);
  va_end(args);
  return ret;
}

int (BIO_snprintf)(char *buf, size_t n, const char *format, ...)
{ 
  va_list args;
  int ret;
  va_start(args, format);
  ret = BIO_vsnprintf(buf, n, format, (long *)args);
  va_end(args);
  return ret;
}

void (ERR_add_error_data)(int num, ...)
{
  va_list args;
  SHOWREGISTERS();
  va_start(args, num);
  ERR_add_error_vdata(num, (long *)args);
  va_end(args);
}

#endif
#endif

void (OCSP_RESPID_free)(OCSP_RESPID *a)
{
  OCSP_RESPID_free(a);
}

void (X509_NAME_free)(X509_NAME *a)
{
  X509_NAME_free(a);
}

// declare stub functions for the ASN1 iterator functions so that within openssl we
// can directly reference e.g. "ASN1_ANY" and have it calling "IAmiSSL->ASN1_ANY_it()" instead.

#define ASN1_STUB_FUNC(func) const ASN1_ITEM * (func##_it)(void) { return func##_it(); }

ASN1_STUB_FUNC(ACCESS_DESCRIPTION)
ASN1_STUB_FUNC(ASIdentifierChoice)
ASN1_STUB_FUNC(ASIdentifiers)
ASN1_STUB_FUNC(ASIdOrRange)
ASN1_STUB_FUNC(ASN1_ANY)
ASN1_STUB_FUNC(ASN1_BIT_STRING)
ASN1_STUB_FUNC(ASN1_BMPSTRING)
ASN1_STUB_FUNC(ASN1_BOOLEAN)
ASN1_STUB_FUNC(ASN1_ENUMERATED)
ASN1_STUB_FUNC(ASN1_FBOOLEAN)
ASN1_STUB_FUNC(ASN1_GENERALIZEDTIME)
ASN1_STUB_FUNC(ASN1_GENERALSTRING)
ASN1_STUB_FUNC(ASN1_IA5STRING)
ASN1_STUB_FUNC(ASN1_INTEGER)
ASN1_STUB_FUNC(ASN1_NULL)
ASN1_STUB_FUNC(ASN1_OBJECT)
ASN1_STUB_FUNC(ASN1_OCTET_STRING)
ASN1_STUB_FUNC(ASN1_OCTET_STRING_NDEF)
ASN1_STUB_FUNC(ASN1_PRINTABLE)
ASN1_STUB_FUNC(ASN1_PRINTABLESTRING)
ASN1_STUB_FUNC(ASN1_SEQUENCE)
ASN1_STUB_FUNC(ASN1_SEQUENCE_ANY)
ASN1_STUB_FUNC(ASN1_SET_ANY)
ASN1_STUB_FUNC(ASN1_T61STRING)
ASN1_STUB_FUNC(ASN1_TBOOLEAN)
ASN1_STUB_FUNC(ASN1_TIME)
ASN1_STUB_FUNC(ASN1_UNIVERSALSTRING)
ASN1_STUB_FUNC(ASN1_UTCTIME)
ASN1_STUB_FUNC(ASN1_UTF8STRING)
ASN1_STUB_FUNC(ASN1_VISIBLESTRING)
ASN1_STUB_FUNC(ASRange)
ASN1_STUB_FUNC(AUTHORITY_INFO_ACCESS)
ASN1_STUB_FUNC(AUTHORITY_KEYID)
ASN1_STUB_FUNC(BASIC_CONSTRAINTS)
ASN1_STUB_FUNC(BIGNUM)
ASN1_STUB_FUNC(CBIGNUM)
ASN1_STUB_FUNC(CERTIFICATEPOLICIES)
ASN1_STUB_FUNC(CMS_ContentInfo)
ASN1_STUB_FUNC(CMS_ReceiptRequest)
ASN1_STUB_FUNC(CRL_DIST_POINTS)
ASN1_STUB_FUNC(DHparams)
ASN1_STUB_FUNC(DIRECTORYSTRING)
ASN1_STUB_FUNC(DISPLAYTEXT)
ASN1_STUB_FUNC(DIST_POINT)
ASN1_STUB_FUNC(DIST_POINT_NAME)
ASN1_STUB_FUNC(ECPARAMETERS)
ASN1_STUB_FUNC(ECPKPARAMETERS)
ASN1_STUB_FUNC(EDIPARTYNAME)
ASN1_STUB_FUNC(EXTENDED_KEY_USAGE)
ASN1_STUB_FUNC(GENERAL_NAME)
ASN1_STUB_FUNC(GENERAL_NAMES)
ASN1_STUB_FUNC(GENERAL_SUBTREE)
ASN1_STUB_FUNC(IPAddressChoice)
ASN1_STUB_FUNC(IPAddressFamily)
ASN1_STUB_FUNC(IPAddressOrRange)
ASN1_STUB_FUNC(IPAddressRange)
ASN1_STUB_FUNC(ISSUING_DIST_POINT)
ASN1_STUB_FUNC(LONG)
ASN1_STUB_FUNC(NAME_CONSTRAINTS)
ASN1_STUB_FUNC(NETSCAPE_CERT_SEQUENCE)
ASN1_STUB_FUNC(NETSCAPE_SPKAC)
ASN1_STUB_FUNC(NETSCAPE_SPKI)
ASN1_STUB_FUNC(NOTICEREF)
ASN1_STUB_FUNC(OCSP_BASICRESP)
ASN1_STUB_FUNC(OCSP_CERTID)
ASN1_STUB_FUNC(OCSP_CERTSTATUS)
ASN1_STUB_FUNC(OCSP_CRLID)
ASN1_STUB_FUNC(OCSP_ONEREQ)
ASN1_STUB_FUNC(OCSP_REQINFO)
ASN1_STUB_FUNC(OCSP_REQUEST)
ASN1_STUB_FUNC(OCSP_RESPBYTES)
ASN1_STUB_FUNC(OCSP_RESPDATA)
ASN1_STUB_FUNC(OCSP_RESPID)
ASN1_STUB_FUNC(OCSP_RESPONSE)
ASN1_STUB_FUNC(OCSP_REVOKEDINFO)
ASN1_STUB_FUNC(OCSP_SERVICELOC)
ASN1_STUB_FUNC(OCSP_SIGNATURE)
ASN1_STUB_FUNC(OCSP_SINGLERESP)
ASN1_STUB_FUNC(OTHERNAME)
ASN1_STUB_FUNC(PBE2PARAM)
ASN1_STUB_FUNC(PBEPARAM)
ASN1_STUB_FUNC(PBKDF2PARAM)
ASN1_STUB_FUNC(PKCS12)
ASN1_STUB_FUNC(PKCS12_AUTHSAFES)
ASN1_STUB_FUNC(PKCS12_BAGS)
ASN1_STUB_FUNC(PKCS12_MAC_DATA)
ASN1_STUB_FUNC(PKCS12_SAFEBAG)
ASN1_STUB_FUNC(PKCS12_SAFEBAGS)
ASN1_STUB_FUNC(PKCS7)
ASN1_STUB_FUNC(PKCS7_ATTR_SIGN)
ASN1_STUB_FUNC(PKCS7_ATTR_VERIFY)
ASN1_STUB_FUNC(PKCS7_DIGEST)
ASN1_STUB_FUNC(PKCS7_ENC_CONTENT)
ASN1_STUB_FUNC(PKCS7_ENCRYPT)
ASN1_STUB_FUNC(PKCS7_ENVELOPE)
ASN1_STUB_FUNC(PKCS7_ISSUER_AND_SERIAL)
ASN1_STUB_FUNC(PKCS7_RECIP_INFO)
ASN1_STUB_FUNC(PKCS7_SIGNED)
ASN1_STUB_FUNC(PKCS7_SIGN_ENVELOPE)
ASN1_STUB_FUNC(PKCS7_SIGNER_INFO)
ASN1_STUB_FUNC(PKCS8_PRIV_KEY_INFO)
ASN1_STUB_FUNC(PKEY_USAGE_PERIOD)
ASN1_STUB_FUNC(POLICY_CONSTRAINTS)
ASN1_STUB_FUNC(POLICYINFO)
ASN1_STUB_FUNC(POLICY_MAPPING)
ASN1_STUB_FUNC(POLICY_MAPPINGS)
ASN1_STUB_FUNC(POLICYQUALINFO)
ASN1_STUB_FUNC(PROXY_CERT_INFO_EXTENSION)
ASN1_STUB_FUNC(PROXY_POLICY)
ASN1_STUB_FUNC(RSA_OAEP_PARAMS)
ASN1_STUB_FUNC(RSAPrivateKey)
ASN1_STUB_FUNC(RSA_PSS_PARAMS)
ASN1_STUB_FUNC(RSAPublicKey)
ASN1_STUB_FUNC(SXNET)
ASN1_STUB_FUNC(SXNETID)
ASN1_STUB_FUNC(USERNOTICE)
ASN1_STUB_FUNC(X509)
ASN1_STUB_FUNC(X509_ALGOR)
ASN1_STUB_FUNC(X509_ALGORS)
ASN1_STUB_FUNC(X509_ATTRIBUTE)
ASN1_STUB_FUNC(X509_CERT_AUX)
ASN1_STUB_FUNC(X509_CINF)
ASN1_STUB_FUNC(X509_CRL)
ASN1_STUB_FUNC(X509_CRL_INFO)
ASN1_STUB_FUNC(X509_EXTENSION)
ASN1_STUB_FUNC(X509_EXTENSIONS)
ASN1_STUB_FUNC(X509_NAME)
ASN1_STUB_FUNC(X509_NAME_ENTRY)
ASN1_STUB_FUNC(X509_PUBKEY)
ASN1_STUB_FUNC(X509_REQ)
ASN1_STUB_FUNC(X509_REQ_INFO)
ASN1_STUB_FUNC(X509_REVOKED)
ASN1_STUB_FUNC(X509_SIG)
ASN1_STUB_FUNC(X509_VAL)
ASN1_STUB_FUNC(ZLONG)
ASN1_STUB_FUNC(INT32)
ASN1_STUB_FUNC(INT64)
ASN1_STUB_FUNC(UINT32)
ASN1_STUB_FUNC(UINT64)
ASN1_STUB_FUNC(ZINT32)
ASN1_STUB_FUNC(ZINT64)
ASN1_STUB_FUNC(ZUINT32)
ASN1_STUB_FUNC(ZUINT64)
