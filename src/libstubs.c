#ifdef __amigaos4__
#define __USE_INLINE__
#else /* !__amigaos4__ */
#define SAVEDS __saveds
#define FFlush Flush
#endif /* __amigaos4__ */

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

	if (temp = BIO_new(BIO_s_file()))
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
	int ret;

	if (temp = BIO_new(BIO_s_file()))
	{
		fflush(fp);

		if (BIO_set_fp_amiga(temp, GetFileBPTR("ERR_print_errors_fp", fp), BIO_NOCLOSE))
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

void (CRYPTO_mem_leaks_fp)(FILE *fp)
{
	BIO *b;

	MemCheck_off();
	b = BIO_new(BIO_s_file());
	MemCheck_on();

	if (b)
	{
		BIO_set_fp(b, fp, BIO_NOCLOSE);
		CRYPTO_mem_leaks(b);
		BIO_free(b);
	}
}

void SAVEDS (ASN1_OBJECT_free)(ASN1_OBJECT *a)
{
	ASN1_OBJECT_free(a);
}

long SAVEDS (BIO_debug_callback)(BIO *bio, int cmd, const char *argp, int argi, long argl, long ret)
{
	return(BIO_debug_callback(bio, cmd, argp, argi, argl, ret));
}

void SAVEDS (CRYPTO_dbg_free)(void *addr, int before_p)
{
	CRYPTO_dbg_free(addr, before_p);
}

long SAVEDS (CRYPTO_dbg_get_options)(void)
{
	return(CRYPTO_dbg_get_options());
}

void SAVEDS (CRYPTO_dbg_malloc)(void *addr, int num, const char *file, int line, int before_p)
{
	CRYPTO_dbg_malloc(addr, num, file, line, before_p);
}

void SAVEDS (CRYPTO_dbg_realloc)(void *addr1, void *addr2, int num, const char *file, int line, int before_p)
{
	CRYPTO_dbg_realloc(addr1, addr2, num, file, line, before_p);
}

void SAVEDS (CRYPTO_dbg_set_options)(long bits)
{
	CRYPTO_dbg_set_options(bits);
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

int SAVEDS (ssl_init_wbio_buffer)(SSL *s, int push)
{
  return(ssl_init_wbio_buffer)(s, push);
}

int SAVEDS (ssl3_setup_buffers)(SSL *s)
{
  return(ssl3_setup_buffers(s));
}

char * SAVEDS (BUF_strndup)(const char *str, size_t siz)
{
  return(BUF_strndup(str, siz));
}

int SAVEDS (dtls1_process_heartbeat)(SSL *s)
{
  return(dtls1_process_heartbeat(s));
}

int SAVEDS (tls1_process_heartbeat)(SSL *s)
{
  return(tls1_process_heartbeat(s));
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

#ifdef __SASC
long getpid(void)
{
	return((long)FindTask(NULL));
}

int strncasecmp(const char *s1, const char *s2, int n) { return(strnicmp(s1, s2, n)); }
int strcasecmp(const char *s1, const char *s2) { return(stricmp(s1, s2)); }

const char *OBJ_bsearch(const char *key, const char *base, int num, int size,
	int (*cmp)(const void *, const void *))
	{
	int l,h,i,c;
	const char *p;

	if (num == 0) return(NULL);
	l=0;
	h=num;
	while (l < h)
		{
		i=(l+h)/2;
		p= &(base[i*size]);
		c=(*cmp)(key,p);
		if (c < 0)
			h=i;
		else if (c > 0)
			l=i+1;
		else
			return(p);
		}
	return(NULL);
	}
#endif /* __SASC */
