/* crypto/pem/pem.h */
/* Copyright (C) 1995-1997 Eric Young (eay@cryptsoft.com)
 * All rights reserved.
 *
 * This package is an SSL implementation written
 * by Eric Young (eay@cryptsoft.com).
 * The implementation was written so as to conform with Netscapes SSL.
 * 
 * This library is free for commercial and non-commercial use as long as
 * the following conditions are aheared to.  The following conditions
 * apply to all code found in this distribution, be it the RC4, RSA,
 * lhash, DES, etc., code; not just the SSL code.  The SSL documentation
 * included with this distribution is covered by the same copyright terms
 * except that the holder is Tim Hudson (tjh@cryptsoft.com).
 * 
 * Copyright remains Eric Young's, and as such any Copyright notices in
 * the code are not to be removed.
 * If this package is used in a product, Eric Young should be given attribution
 * as the author of the parts of the library used.
 * This can be in the form of a textual message at program startup or
 * in documentation (online or textual) provided with the package.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *    "This product includes cryptographic software written by
 *     Eric Young (eay@cryptsoft.com)"
 *    The word 'cryptographic' can be left out if the rouines from the library
 *    being used are not cryptographic related :-).
 * 4. If you include any Windows specific code (or a derivative thereof) from 
 *    the apps directory (application code) you must include an acknowledgement:
 *    "This product includes software written by Tim Hudson (tjh@cryptsoft.com)"
 * 
 * THIS SOFTWARE IS PROVIDED BY ERIC YOUNG ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * 
 * The licence and distribution terms for any publically available version or
 * derivative of this code cannot be changed.  i.e. this code cannot simply be
 * copied and put under another distribution licence
 * [including the GNU Public Licence.]
 */

#ifndef HEADER_PEM_H
#define HEADER_PEM_H

#include <amissl/bio.h>
#include <amissl/stack.h>
#include <amissl/evp.h>
#include <amissl/x509.h>
#include <amissl/pem2.h>

#ifdef  __cplusplus
extern "C" {
#endif

#define PEM_BUFSIZE		1024

#define PEM_OBJ_UNDEF		0
#define PEM_OBJ_X509		1
#define PEM_OBJ_X509_REQ	2
#define PEM_OBJ_CRL		3
#define PEM_OBJ_SSL_SESSION	4
#define PEM_OBJ_PRIV_KEY	10
#define PEM_OBJ_PRIV_RSA	11
#define PEM_OBJ_PRIV_DSA	12
#define PEM_OBJ_PRIV_DH		13
#define PEM_OBJ_PUB_RSA		14
#define PEM_OBJ_PUB_DSA		15
#define PEM_OBJ_PUB_DH		16
#define PEM_OBJ_DHPARAMS	17
#define PEM_OBJ_DSAPARAMS	18
#define PEM_OBJ_PRIV_RSA_PUBLIC	19

#define PEM_ERROR		30
#define PEM_DEK_DES_CBC         40
#define PEM_DEK_IDEA_CBC        45
#define PEM_DEK_DES_EDE         50
#define PEM_DEK_DES_ECB         60
#define PEM_DEK_RSA             70
#define PEM_DEK_RSA_MD2         80
#define PEM_DEK_RSA_MD5         90

#define PEM_MD_MD2		NID_md2
#define PEM_MD_MD5		NID_md5
#define PEM_MD_SHA		NID_sha
#define PEM_MD_MD2_RSA		NID_md2WithRSAEncryption
#define PEM_MD_MD5_RSA		NID_md5WithRSAEncryption
#define PEM_MD_SHA_RSA		NID_sha1WithRSAEncryption

#define PEM_STRING_X509_OLD	"X509 CERTIFICATE"
#define PEM_STRING_X509		"CERTIFICATE"
#define PEM_STRING_X509_TRUSTED	"TRUSTED CERTIFICATE"
#define PEM_STRING_X509_REQ_OLD	"NEW CERTIFICATE REQUEST"
#define PEM_STRING_X509_REQ	"CERTIFICATE REQUEST"
#define PEM_STRING_X509_CRL	"X509 CRL"
#define PEM_STRING_EVP_PKEY	"ANY PRIVATE KEY"
#define PEM_STRING_PUBLIC	"PUBLIC KEY"
#define PEM_STRING_RSA		"RSA PRIVATE KEY"
#define PEM_STRING_RSA_PUBLIC	"RSA PUBLIC KEY"
#define PEM_STRING_DSA		"DSA PRIVATE KEY"
#define PEM_STRING_DSA_PUBLIC	"DSA PUBLIC KEY"
#define PEM_STRING_PKCS7	"PKCS7"
#define PEM_STRING_PKCS8	"ENCRYPTED PRIVATE KEY"
#define PEM_STRING_PKCS8INF	"PRIVATE KEY"
#define PEM_STRING_DHPARAMS	"DH PARAMETERS"
#define PEM_STRING_SSL_SESSION	"SSL SESSION PARAMETERS"
#define PEM_STRING_DSAPARAMS	"DSA PARAMETERS"


typedef struct PEM_Encode_Seal_st
	{
	EVP_ENCODE_CTX encode;
	EVP_MD_CTX md;
	EVP_CIPHER_CTX cipher;
	} PEM_ENCODE_SEAL_CTX;

/* enc_type is one off */
#define PEM_TYPE_ENCRYPTED      10
#define PEM_TYPE_MIC_ONLY       20
#define PEM_TYPE_MIC_CLEAR      30
#define PEM_TYPE_CLEAR		40

typedef struct pem_recip_st
	{
	char *name;
	X509_NAME *dn;

	int cipher;
	int key_enc;
	char iv[8];
	} PEM_USER;

typedef struct pem_ctx_st
	{
	int type;		/* what type of object */

	struct	{
		int version;	
		int mode;		
		} proc_type;

	char *domain;

	struct	{
		int cipher;
		unsigned char iv[8];
		} DEK_info;
		
	PEM_USER *originator;

	int num_recipient;
	PEM_USER **recipient;

	STACK *x509_chain;	/* certificate chain */
	EVP_MD *md;		/* signature type */

	int md_enc;		/* is the md encrypted or not? */
	int md_len;		/* length of md_data */
	char *md_data;		/* message digest, could be pkey encrypted */

	EVP_CIPHER *dec;	/* date encryption cipher */
	int key_len;		/* key length */
	unsigned char *key;	/* key */
	unsigned char iv[8];	/* the iv */

	
	int  data_enc;		/* is the data encrypted */
	int data_len;
	unsigned char *data;
	} PEM_CTX;

/* These macros make the PEM_read/PEM_write functions easier to maintain and
 * write. Now they are all implemented with either:
 * IMPLEMENT_PEM_rw(...) or IMPLEMENT_PEM_rw_cb(...)
 */

#define IMPLEMENT_PEM_read_fp(name, type, str, asn1) /**/
#define IMPLEMENT_PEM_write_fp(name, type, str, asn1) /**/
#define IMPLEMENT_PEM_write_cb_fp(name, type, str, asn1) /**/

#define IMPLEMENT_PEM_read_bio(name, type, str, asn1) \
type *PEM_read_bio_##name(BIO *bp, type **x, pem_password_cb *cb, void *u)\
{ \
return((type *)PEM_ASN1_read_bio((char *(*)())d2i_##asn1, str,bp,\
							(char **)x,cb,u)); \
}

#define IMPLEMENT_PEM_write_bio(name, type, str, asn1) \
int PEM_write_bio_##name(BIO *bp, type *x) \
{ \
return(PEM_ASN1_write_bio((int (*)())i2d_##asn1,str,bp, (char *)x, \
							 NULL,NULL,0,NULL,NULL)); \
}

#define IMPLEMENT_PEM_write_cb_bio(name, type, str, asn1) \
int PEM_write_bio_##name(BIO *bp, type *x, const EVP_CIPHER *enc, \
	     unsigned char *kstr, int klen, pem_password_cb *cb, void *u) \
	{ \
	return(PEM_ASN1_write_bio((int (*)())i2d_##asn1,str,bp, \
		(char *)x,enc,kstr,klen,cb,u)); \
	}

#define IMPLEMENT_PEM_write(name, type, str, asn1) \
	IMPLEMENT_PEM_write_bio(name, type, str, asn1) \
	IMPLEMENT_PEM_write_fp(name, type, str, asn1) 

#define IMPLEMENT_PEM_write_cb(name, type, str, asn1) \
	IMPLEMENT_PEM_write_cb_bio(name, type, str, asn1) \
	IMPLEMENT_PEM_write_cb_fp(name, type, str, asn1) 

#define IMPLEMENT_PEM_read(name, type, str, asn1) \
	IMPLEMENT_PEM_read_bio(name, type, str, asn1) \
	IMPLEMENT_PEM_read_fp(name, type, str, asn1) 

#define IMPLEMENT_PEM_rw(name, type, str, asn1) \
	IMPLEMENT_PEM_read(name, type, str, asn1) \
	IMPLEMENT_PEM_write(name, type, str, asn1)

#define IMPLEMENT_PEM_rw_cb(name, type, str, asn1) \
	IMPLEMENT_PEM_read(name, type, str, asn1) \
	IMPLEMENT_PEM_write_cb(name, type, str, asn1)

/* These are the same except they are for the declarations */

#define DECLARE_PEM_read_fp(name, type) /**/
#define DECLARE_PEM_write_fp(name, type) /**/
#define DECLARE_PEM_write_cb_fp(name, type) /**/

#define DECLARE_PEM_read_bio(name, type) \
	type *PEM_read_bio_##name(BIO *bp, type **x, pem_password_cb *cb, void *u);

#define DECLARE_PEM_write_bio(name, type) \
	int PEM_write_bio_##name(BIO *bp, type *x);

#define DECLARE_PEM_write_cb_bio(name, type) \
	int PEM_write_bio_##name(BIO *bp, type *x, const EVP_CIPHER *enc, \
	     unsigned char *kstr, int klen, pem_password_cb *cb, void *u);

#define DECLARE_PEM_write(name, type) \
	DECLARE_PEM_write_bio(name, type) \
	DECLARE_PEM_write_fp(name, type) 

#define DECLARE_PEM_write_cb(name, type) \
	DECLARE_PEM_write_cb_bio(name, type) \
	DECLARE_PEM_write_cb_fp(name, type) 

#define DECLARE_PEM_read(name, type) \
	DECLARE_PEM_read_bio(name, type) \
	DECLARE_PEM_read_fp(name, type)

#define DECLARE_PEM_rw(name, type) \
	DECLARE_PEM_read(name, type) \
	DECLARE_PEM_write(name, type)

#define DECLARE_PEM_rw_cb(name, type) \
	DECLARE_PEM_read(name, type) \
	DECLARE_PEM_write_cb(name, type)

/* "userdata": new with OpenSSL 0.9.4 */
typedef int pem_password_cb(char *buf, int size, int rwflag, void *userdata);

/* Error codes for the PEM functions. */

/* Function codes. */
#define PEM_F_D2I_PKCS8PRIVATEKEY_BIO			 120
#define PEM_F_D2I_PKCS8PRIVATEKEY_FP			 121
#define PEM_F_DEF_CALLBACK				 100
#define PEM_F_LOAD_IV					 101
#define PEM_F_PEM_ASN1_READ				 102
#define PEM_F_PEM_ASN1_READ_BIO				 103
#define PEM_F_PEM_ASN1_WRITE				 104
#define PEM_F_PEM_ASN1_WRITE_BIO			 105
#define PEM_F_PEM_DO_HEADER				 106
#define PEM_F_PEM_F_DO_PK8KEY_FP			 122
#define PEM_F_PEM_F_PEM_WRITE_PKCS8PRIVATEKEY		 118
#define PEM_F_PEM_GET_EVP_CIPHER_INFO			 107
#define PEM_F_PEM_READ					 108
#define PEM_F_PEM_READ_BIO				 109
#define PEM_F_PEM_SEALFINAL				 110
#define PEM_F_PEM_SEALINIT				 111
#define PEM_F_PEM_SIGNFINAL				 112
#define PEM_F_PEM_WRITE					 113
#define PEM_F_PEM_WRITE_BIO				 114
#define PEM_F_PEM_WRITE_BIO_PKCS8PRIVATEKEY		 119
#define PEM_F_PEM_X509_INFO_READ			 115
#define PEM_F_PEM_X509_INFO_READ_BIO			 116
#define PEM_F_PEM_X509_INFO_WRITE_BIO			 117

/* Reason codes. */
#define PEM_R_BAD_BASE64_DECODE				 100
#define PEM_R_BAD_DECRYPT				 101
#define PEM_R_BAD_END_LINE				 102
#define PEM_R_BAD_IV_CHARS				 103
#define PEM_R_BAD_PASSWORD_READ				 104
#define PEM_R_ERROR_CONVERTING_PRIVATE_KEY		 115
#define PEM_R_NOT_DEK_INFO				 105
#define PEM_R_NOT_ENCRYPTED				 106
#define PEM_R_NOT_PROC_TYPE				 107
#define PEM_R_NO_START_LINE				 108
#define PEM_R_PROBLEMS_GETTING_PASSWORD			 109
#define PEM_R_PUBLIC_KEY_NO_RSA				 110
#define PEM_R_READ_KEY					 111
#define PEM_R_SHORT_HEADER				 112
#define PEM_R_UNSUPPORTED_CIPHER			 113
#define PEM_R_UNSUPPORTED_ENCRYPTION			 114

#ifdef  __cplusplus
}
#endif
#endif
