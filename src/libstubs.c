#ifdef __amigaos4__
#define __USE_INLINE__
#define IFACE_PREFIX IAmiSSL->
#else /* !__amigaos4__ */
#define IFACE_PREFIX
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

void ERR_print_errors_fp(FILE *fp)
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

int BN_print_fp(FILE *fp, const BIGNUM *a)
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

long BIO_set_fp(BIO *b, FILE *fp, int closeflag)
{
	fflush(fp); // Flush the file if there are pending writes. After this point we cannot repair anything out of sync

	return(BIO_set_fp_amiga(b, GetFileBPTR("BIO_set_fp", fp),
	                        (closeflag & ~BIO_CLOSE) | BIO_NOCLOSE)); // We cannot allow someone else to close the file
}

BIO *BIO_new_fp(FILE *fp, int closeflag)
{
	BIO *temp;

	fflush(fp); // Flush the file if there are pending writes. After this point we cannot repair anything out of sync

	if (temp = BIO_new(BIO_s_file()))
		BIO_set_fp_amiga(temp, GetFileBPTR("BIO_new_fp", fp),
		                 (closeflag & ~BIO_CLOSE) | BIO_NOCLOSE); // We cannot allow someone else to close the file

	return(temp);
}

void CRYPTO_mem_leaks_fp(FILE *fp)
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

#undef __USE_INLINE__

#undef ASN1_OBJECT_free
#undef BIO_debug_callback
#undef CRYPTO_dbg_free
#undef CRYPTO_dbg_get_options
#undef CRYPTO_dbg_malloc
#undef CRYPTO_dbg_realloc
#undef CRYPTO_dbg_set_options
#undef DH_new
#undef DSA_new
#undef OCSP_REQUEST_new
#undef PKCS12_SAFEBAG_free
#undef PKCS7_free
#undef SSL_SESSION_new
#undef X509V3_conf_free
#undef X509_EXTENSION_free
#undef X509_INFO_free
#undef X509_free
#undef d2i_DHparams
#undef d2i_DSAparams
#undef d2i_OCSP_REQUEST
#undef d2i_OCSP_RESPONSE
#undef d2i_SSL_SESSION
#undef i2d_ASN1_HEADER
#undef i2d_DHparams
#undef i2d_DSAparams
#undef i2d_OCSP_REQUEST
#undef i2d_OCSP_RESPONSE
#undef i2d_SSL_SESSION

void SAVEDS ASN1_OBJECT_free(ASN1_OBJECT *a)
{
	IFACE_PREFIX ASN1_OBJECT_free(a);
}

long SAVEDS BIO_debug_callback(BIO *bio, int cmd, const char *argp, int argi, long argl, long ret)
{
	return(IFACE_PREFIX BIO_debug_callback(bio, cmd, argp, argi, argl, ret));
}

void SAVEDS CRYPTO_dbg_free(void *addr, int before_p)
{
	IFACE_PREFIX CRYPTO_dbg_free(addr, before_p);
}

long SAVEDS CRYPTO_dbg_get_options(void)
{
	return(IFACE_PREFIX CRYPTO_dbg_get_options());
}

void SAVEDS CRYPTO_dbg_malloc(void *addr, int num, const char *file, int line, int before_p)
{
	IFACE_PREFIX CRYPTO_dbg_malloc(addr, num, file, line, before_p);
}

void SAVEDS CRYPTO_dbg_realloc(void *addr1, void *addr2, int num, const char *file, int line, int before_p)
{
	IFACE_PREFIX CRYPTO_dbg_realloc(addr1, addr2, num, file, line, before_p);
}

void SAVEDS CRYPTO_dbg_set_options(long bits)
{
	IFACE_PREFIX CRYPTO_dbg_set_options(bits);
}

DH * SAVEDS DH_new(void)
{
	return(IFACE_PREFIX DH_new());
}

DSA * SAVEDS DSA_new(void)
{
	return(IFACE_PREFIX DSA_new());
}

OCSP_REQUEST * SAVEDS OCSP_REQUEST_new(void)
{
	return(IFACE_PREFIX OCSP_REQUEST_new());
}

void SAVEDS PKCS12_SAFEBAG_free(PKCS12_SAFEBAG *a)
{
	IFACE_PREFIX PKCS12_SAFEBAG_free(a);
}

void SAVEDS PKCS7_free(PKCS7 *a)
{
	IFACE_PREFIX PKCS7_free(a);
}

SSL_SESSION * SAVEDS SSL_SESSION_new(void)
{
	return(IFACE_PREFIX SSL_SESSION_new());
}

void SAVEDS X509V3_conf_free(CONF_VALUE *val)
{
	IFACE_PREFIX X509V3_conf_free(val);
}

void SAVEDS X509_EXTENSION_free(X509_EXTENSION *a)
{
	IFACE_PREFIX X509_EXTENSION_free(a);
}

void SAVEDS X509_INFO_free(X509_INFO *a)
{
	IFACE_PREFIX X509_INFO_free(a);
}

void SAVEDS X509_free(X509 *a)
{
	IFACE_PREFIX X509_free(a);
}

DH * SAVEDS d2i_DHparams(DH **a, const unsigned char **pp, long length)
{
	return(IFACE_PREFIX d2i_DHparams(a, pp, length));
}

DSA * SAVEDS d2i_DSAparams(DSA **a, const unsigned char **pp, long length)
{
	return(IFACE_PREFIX d2i_DSAparams(a, pp, length));
}

OCSP_REQUEST * SAVEDS d2i_OCSP_REQUEST(OCSP_REQUEST **a, unsigned char **in, long len)
{
	return(IFACE_PREFIX d2i_OCSP_REQUEST(a, in, len));
}

OCSP_RESPONSE * SAVEDS d2i_OCSP_RESPONSE(OCSP_RESPONSE **a, unsigned char **in, long len)
{
	return(IFACE_PREFIX d2i_OCSP_RESPONSE(a, in, len));
}

SSL_SESSION * SAVEDS d2i_SSL_SESSION(SSL_SESSION **a, const unsigned char *const *pp, long length)
{
	return(IFACE_PREFIX d2i_SSL_SESSION(a, pp, length));
}

int SAVEDS i2d_ASN1_HEADER(ASN1_HEADER *a, unsigned char **pp)
{
	return(IFACE_PREFIX i2d_ASN1_HEADER(a, pp));
}

int SAVEDS i2d_DHparams(const DH *a, unsigned char **pp)
{
	return(IFACE_PREFIX i2d_DHparams(a, pp));
}

int SAVEDS i2d_DSAparams(const DSA *a, unsigned char **pp)
{
	return(IFACE_PREFIX i2d_DSAparams(a, pp));
}

int SAVEDS i2d_OCSP_REQUEST(OCSP_REQUEST *a, unsigned char **out)
{
	return(IFACE_PREFIX i2d_OCSP_REQUEST(a, out));
}

int SAVEDS i2d_OCSP_RESPONSE(OCSP_RESPONSE *a, unsigned char **out)
{
	return(IFACE_PREFIX i2d_OCSP_RESPONSE(a, out));
}

int SAVEDS i2d_SSL_SESSION(SSL_SESSION *in, unsigned char **pp)
{
	return(IFACE_PREFIX i2d_SSL_SESSION(in, pp));
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
