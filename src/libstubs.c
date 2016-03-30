#ifndef __amigaos4__
#define SAVEDS __saveds
#define FFlush Flush
#endif /* !__amigaos4__ */

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
    FFlush(ret);

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

int (X509_NAME_print_ex_fp)(FILE *fp, X509_NAME *nm, int indent, unsigned long flags)
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

void SAVEDS (ASN1_OBJECT_free)(ASN1_OBJECT *a)
{
  ASN1_OBJECT_free(a);
}

long SAVEDS (BIO_debug_callback)(BIO *bio, int cmd, const char *argp, int argi, long argl, long ret)
{
  return(BIO_debug_callback(bio, cmd, argp, argi, argl, ret));
}

DH * SAVEDS (DH_new)(void)
{
  return(DH_new());
}

DSA * SAVEDS (DSA_new)(void)
{
  return(DSA_new());
}

OCSP_REQUEST * SAVEDS (OCSP_REQUEST_new)(void)
{
  return(OCSP_REQUEST_new());
}

OCSP_RESPONSE * SAVEDS (OCSP_RESPONSE_new)(void)
{
  return(OCSP_RESPONSE_new());
}

void SAVEDS (PKCS12_SAFEBAG_free)(PKCS12_SAFEBAG *a)
{
  PKCS12_SAFEBAG_free(a);
}

void SAVEDS (PKCS7_free)(PKCS7 *a)
{
  PKCS7_free(a);
}

SSL_SESSION * SAVEDS (SSL_SESSION_new)(void)
{
  return(SSL_SESSION_new());
}

void SAVEDS (X509V3_conf_free)(CONF_VALUE *val)
{
  X509V3_conf_free(val);
}

void SAVEDS (X509_EXTENSION_free)(X509_EXTENSION *a)
{
  X509_EXTENSION_free(a);
}

void SAVEDS (X509_INFO_free)(X509_INFO *a)
{
  X509_INFO_free(a);
}

void SAVEDS (X509_free)(X509 *a)
{
  X509_free(a);
}

DH * SAVEDS (d2i_DHparams)(DH **a, const unsigned char **pp, long length)
{
  return(d2i_DHparams(a, pp, length));
}

DSA * SAVEDS (d2i_DSAparams)(DSA **a, const unsigned char **pp, long length)
{
  return(d2i_DSAparams(a, pp, length));
}

OCSP_REQUEST * SAVEDS (d2i_OCSP_REQUEST)(OCSP_REQUEST **a, const unsigned char **in, long len)
{
  return(d2i_OCSP_REQUEST(a, in, len));
}

OCSP_RESPONSE * SAVEDS (d2i_OCSP_RESPONSE)(OCSP_RESPONSE **a, const unsigned char **in, long len)
{
  return(d2i_OCSP_RESPONSE(a, in, len));
}

SSL_SESSION * SAVEDS (d2i_SSL_SESSION)(SSL_SESSION **a, const unsigned char **pp, long length)
{
  return(d2i_SSL_SESSION(a, pp, length));
}

EC_GROUP * SAVEDS (d2i_ECPKParameters)(EC_GROUP **a, const unsigned char **in, long len)
{
  return(d2i_ECPKParameters(a, in, len));
}

int SAVEDS (i2d_DHparams)(const DH *a, unsigned char **pp)
{
  return(i2d_DHparams(a, pp));
}

int SAVEDS (i2d_DSAparams)(const DSA *a, unsigned char **pp)
{
  return(i2d_DSAparams(a, pp));
}

int SAVEDS (i2d_OCSP_REQUEST)(OCSP_REQUEST *a, unsigned char **out)
{
  return(i2d_OCSP_REQUEST(a, out));
}

int SAVEDS (i2d_OCSP_RESPONSE)(OCSP_RESPONSE *a, unsigned char **out)
{
  return(i2d_OCSP_RESPONSE(a, out));
}

int SAVEDS (i2d_SSL_SESSION)(SSL_SESSION *in, unsigned char **pp)
{
  return(i2d_SSL_SESSION(in, pp));
}

int SAVEDS (i2d_ECPKParameters)(const EC_GROUP *a, unsigned char **out)
{
  return(i2d_ECPKParameters(a, out));
}

void SAVEDS (X509_CRL_free)(X509_CRL * a)
{
  X509_CRL_free(a);
}

void SAVEDS (AES_encrypt)(const unsigned char * in, unsigned char * out, const AES_KEY * key)
{
  AES_encrypt(in, out, key);
}

void SAVEDS (GENERAL_NAMES_free)(GENERAL_NAMES * a)
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
LONG Printf( CONST_STRPTR format, ... )
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

#endif

#endif
