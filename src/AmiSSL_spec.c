#define __NOLIBBASE__

#include <proto/exec.h>
#include <proto/dos.h>
#include <dos/var.h>
#include <stdio.h>
#include <stdlib.h>
#include <amissl/amissl.h>
#include <clib/amissl_protos.h>
#include <proto/aes.h>
#include <proto/blowfish.h>
#include <proto/cast.h>
#include <proto/des.h>
#include <proto/dh.h>
#include <proto/dsa.h>
#include <proto/idea.h>
#include <proto/md2.h>
#include <proto/md4.h>
#include <proto/md5.h>
#include <proto/mdc2.h>
#include <proto/rc2.h>
#include <proto/rc4.h>
#include <proto/rc5.h>
#include <proto/ripemd.h>
#include <proto/rsa.h>
#include <proto/sha.h>
#include <libraries/amissl.h>

extern struct ExecBase *SysBase;
extern struct DosLibrary *DOSBase;

extern struct Library *AESBase;
extern struct Library *BlowFishBase;
extern struct Library *CASTBase;
extern struct Library *DESBase;
extern struct Library *DHBase;
extern struct Library *DSABase;
extern struct Library *IDEABase;
extern struct Library *MD2Base;
extern struct Library *MD4Base;
extern struct Library *MD5Base;
extern struct Library *MDC2Base;
extern struct Library *RC2Base;
extern struct Library *RC4Base;
extern struct Library *RC5Base;
extern struct Library *RIPEMDBase;
extern struct Library *RSABase;
extern struct Library *SHABase;
extern long SSLVersionApp;

#define AMISSL_SERVER_ENV	"AmiSSL/SSL_SERVER_VERSION"
#define AMISSL_CLIENT_ENV	"AmiSSL/SSL_CLIENT_VERSION"
#define AMISSL_BOTH_ENV		"AmiSSL/SSL_VERSION"

__asm __saveds SSL_METHOD *SSLv23_method_AmiSSL(void)
{
	char var[6];

	if(!SSLVersionApp)
	{
		if (GetVar(AMISSL_BOTH_ENV, &var[0], 5, GVF_GLOBAL_ONLY) > 0)
		{
			if (!strnicmp(var, "ssl2", 4))
				return(SSLv2_method());
			else if (!strnicmp(var, "ssl3", 4))
				return(SSLv3_method());
			else if (!strnicmp(var, "tls1", 4))
				return(TLSv1_method());
		}
	}

	/* No match, return default */

	return(SSLv23_method());
}

__asm __saveds SSL_METHOD *SSLv23_server_method_AmiSSL(void)
{
	char var[6];

	if(!SSLVersionApp)
	{
		if (GetVar(AMISSL_SERVER_ENV, &var[0], 5, GVF_GLOBAL_ONLY) > 0)
		{
			if (!strnicmp(var, "ssl2", 4))
				return(SSLv2_server_method());
			else if (!strnicmp(var, "ssl3", 4))
				return(SSLv3_server_method());
			else if (!strnicmp(var, "tls1", 4))
				return(TLSv1_server_method());
		}
	}

	/* No match, return default */

	return(SSLv23_server_method());
}

__asm __saveds SSL_METHOD *SSLv23_client_method_AmiSSL(void)
{
	char var[6];

	if (GetVar(AMISSL_CLIENT_ENV, &var[0], 5, GVF_GLOBAL_ONLY) > 0)
	{
		if (!strnicmp(var, "ssl2", 4))
			return(SSLv2_client_method());
		else if (!strnicmp(var, "ssl3", 4))
			return(SSLv3_client_method());
		else if (!strnicmp(var, "tls1", 4))
			return(TLSv1_client_method());
	}

	/* No match, return default */

	return(SSLv23_client_method());
}

void RAND_add_internal(const void *buf, int num, double entropy);

__asm __saveds void RAND_add_AmiSSL(register __a0 const void *buf, register __d0 int num, register __d1 float entropy)
{
	RAND_add_internal(buf, num, (double)entropy);
}

void MD2_Init_AmiSSL(MD2_CTX *c)
{
	SETUPSTATEDS();
	MD2_Init(c);
}

void MD2_Update_AmiSSL(MD2_CTX *c, unsigned char *data, unsigned long len)
{
	SETUPSTATEDS();
	MD2_Update(c, data, len);
}

void MD2_Final_AmiSSL(unsigned char *md, MD2_CTX *c)
{
	SETUPSTATEDS();
	MD2_Final(md, c);
}

void MD4_Init_AmiSSL(MD4_CTX *c)
{
	SETUPSTATEDS();
	MD4_Init(c);
}

void MD4_Update_AmiSSL(MD4_CTX *c, unsigned char *data, unsigned long len)
{
	SETUPSTATEDS();
	MD4_Update(c, data, len);
}

void MD4_Final_AmiSSL(unsigned char *md, MD4_CTX *c)
{
	SETUPSTATEDS();
	MD4_Final(md, c);
}

void MD5_Init_AmiSSL(MD5_CTX *c)
{
	SETUPSTATEDS();
	MD5_Init(c);
}

void MD5_Update_AmiSSL(MD5_CTX *c, const unsigned char *data, unsigned long len)
{
	SETUPSTATEDS();
	MD5_Update(c, data, len);
}

void MD5_Final_AmiSSL(unsigned char *md, MD5_CTX *c)
{
	SETUPSTATEDS();
	MD5_Final(md, c);
}

void MDC2_Init_AmiSSL(MDC2_CTX *c)
{
	SETUPSTATEDS();
	MDC2_Init(c);
}

void MDC2_Update_AmiSSL(MDC2_CTX *c, unsigned char *data, unsigned long len)
{
	SETUPSTATEDS();
	MDC2_Update(c, data, len);
}

void MDC2_Final_AmiSSL(unsigned char *md, MDC2_CTX *c)
{
	SETUPSTATEDS();
	MDC2_Final(md, c);
}

void RIPEMD160_Init_AmiSSL(RIPEMD160_CTX *c)
{
	SETUPSTATEDS();
	RIPEMD160_Init(c);
}

void RIPEMD160_Update_AmiSSL(RIPEMD160_CTX *c, unsigned char *data, unsigned long len)
{
	SETUPSTATEDS();
	RIPEMD160_Update(c, data, len);
}

void RIPEMD160_Final_AmiSSL(unsigned char *md, RIPEMD160_CTX *c)
{
	SETUPSTATEDS();
	RIPEMD160_Final(md, c);
}

void SHA_Init_AmiSSL(SHA_CTX *c)
{
	SETUPSTATEDS();
	SHA_Init(c);
}

void SHA_Update_AmiSSL(SHA_CTX *c, const unsigned char *data, unsigned long len)
{
	SETUPSTATEDS();
	SHA_Update(c, data, len);
}

void SHA_Final_AmiSSL(unsigned char *md, SHA_CTX *c)
{
	SETUPSTATEDS();
	SHA_Final(md, c);
}

void SHA1_Init_AmiSSL(SHA_CTX *c)
{
	SETUPSTATEDS();
	SHA1_Init(c);
}

void SHA1_Update_AmiSSL(SHA_CTX *c, const unsigned char *data, unsigned long len)
{
	SETUPSTATEDS();
	SHA1_Update(c, data, len);
}

void SHA1_Final_AmiSSL(unsigned char *md, SHA_CTX *c)
{
	SETUPSTATEDS();
	SHA1_Final(md, c);
}

int RSA_sign_AmiSSL(int type, unsigned char *m, unsigned int m_len,
	     unsigned char *sigret, unsigned int *siglen, RSA *rsa)
{
	SETUPSTATEDS();
	return(RSA_sign(type,m,m_len,sigret,siglen,rsa));
}

int RSA_verify_AmiSSL(int dtype, unsigned char *m, unsigned int m_len,
	     unsigned char *sigbuf, unsigned int siglen, RSA *rsa)
{
	SETUPSTATEDS();
	return(RSA_verify(dtype,m,m_len,sigbuf,siglen,rsa));
}

int RSA_sign_ASN1_OCTET_STRING_AmiSSL(int type, unsigned char *m, unsigned int m_len,
	     unsigned char *sigret, unsigned int *siglen, RSA *rsa)
{
	SETUPSTATEDS();
	return(RSA_sign_ASN1_OCTET_STRING(type,m,m_len,sigret,siglen,rsa));
}

int RSA_verify_ASN1_OCTET_STRING_AmiSSL(int dtype, unsigned char *m,
	     unsigned int m_len, unsigned char *sigbuf, unsigned int siglen,
	     RSA *rsa)
{
	SETUPSTATEDS();
	return(RSA_verify_ASN1_OCTET_STRING(dtype,m,m_len,sigbuf,siglen,rsa));
}

RSA *RSA_new_AmiSSL(void)
{
	SETUPSTATEDS();
	return(RSA_new());
}

void RSA_free_AmiSSL(RSA *r)
{
	SETUPSTATEDS();
	RSA_free(r);
}

DSA *DSA_new_AmiSSL(void)
{
	SETUPSTATEDS();
	return(DSA_new());
}

int DSA_sign_AmiSSL(int type, const unsigned char *dgst, int dlen, unsigned char *sig,
	     unsigned int *siglen, DSA *dsa)
{
	SETUPSTATEDS();
	return(DSA_sign(type,dgst,dlen,sig,siglen,dsa));
}

int DSA_verify_AmiSSL(int type, const unsigned char *dgst, int dgst_len,
	     unsigned char *sigbuf, int siglen, DSA *dsa)
{
	SETUPSTATEDS();
	return(DSA_verify(type,dgst,dgst_len,sigbuf,siglen,dsa));
}

DH *DSA_dup_DH(const DSA *r)
	{
	/* DSA has p, q, g, optional pub_key, optional priv_key.
	 * DH has p, optional length, g, optional pub_key, optional priv_key.
	 */ 

	DH *ret = NULL;

	if (r == NULL)
		goto err;
	ret = DH_new();
	if (ret == NULL)
		goto err;
	if (r->p != NULL) 
		if ((ret->p = BN_dup(r->p)) == NULL)
			goto err;
	if (r->q != NULL)
		ret->length = BN_num_bits(r->q);
	if (r->g != NULL)
		if ((ret->g = BN_dup(r->g)) == NULL)
			goto err;
	if (r->pub_key != NULL)
		if ((ret->pub_key = BN_dup(r->pub_key)) == NULL)
			goto err;
	if (r->priv_key != NULL)
		if ((ret->priv_key = BN_dup(r->priv_key)) == NULL)
			goto err;

	return ret;

 err:
	if (ret != NULL)
		DH_free(ret);
	return NULL;
	}
