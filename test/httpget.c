/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2022 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

/*
 * This example program demonstrates how to use the HTTP client function
 * OSSL_HTTP_get() and URL parsing function OSSL_HTTP_parse_url(), which
 * were newly introduced in OpenSSL 3.0 and AmiSSL v5.
 *
 * These allow any application to load http or https URLs completely
 * within AmiSSL v5, without the need for any other external libraries,
 * such as libcurl, or custom code. OSSL_HTTP_get() is the highest level
 * function provided by the HTTP client, but you can have more control by
 * using the lower level HTTP functions described in the OpenSSL manual at
 * https://www.openssl.org/docs/man3.0/man3/OSSL_HTTP_get.html
 */

#if defined(__amigaos4__) && !defined(__USE_INLINE__)
# define __USE_INLINE__
#endif

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <proto/amisslmaster.h>

#include <amissl/amissl.h>
#include <libraries/amisslmaster.h>
#include <libraries/amissl.h>

#if !defined(__amigaos4__)
# include <SDI_compiler.h>
#endif

const char stack_size[] = "$STACK:8192";

static SSL_CTX *Init(void);
static void Cleanup(SSL_CTX *ctx);

/* Check if URL is valid and extract any username/password
 */
BOOL IsSupportedURL(char *url, char **userinfo)
{
	int ssl, portnum;
	char *host, *port, *path, *query, *fragment;

	/* You may wish to make use of OSSL_parse_url() which can be
	 * used to parse non-http(s) URLs too
	 */
	return OSSL_HTTP_parse_url(url, &ssl, userinfo, &host, &port,
				   &portnum, &path, &query, &fragment);
}

/* Required callback to enable HTTPS connection, when necessary
 */
SAVEDS STDARGS BIO *HTTP_TLS_cb(BIO *bio, void *arg, int connect, int detail)
{
	if (connect && detail)
	{
	 	/* Connect with TLS */
		BIO *sbio = BIO_new_ssl((SSL_CTX *)arg, 1);
		bio = (sbio != NULL) ? BIO_push(sbio, bio) : NULL;
	}

	return bio;
}

/* Stub function used when freeing our stack of headers
 */
SAVEDS STDARGS void stub_X509V3_conf_free(CONF_VALUE *val)
{
	X509V3_conf_free(val);
}

/* Read content from URL and dump to Output()
 */
BOOL GetURL(char *url, char *userinfo, SSL_CTX *sslctx)
{
	STACK_OF(CONF_VALUE) *headers = NULL;
	BIO *bio, *bio_err;

	/* Add our own HTTP headers */
	X509V3_add_value("User-Agent", "AmiSSL/5.1", &headers);
	X509V3_add_value("Referer", "GetURL()", &headers);
	if (userinfo)
	{
		/* Optionally specify username:password */
		char auth[256] = "Basic ";
		/* Base64 encode */
		EVP_EncodeBlock((unsigned char *)&auth[6], (unsigned char *)userinfo, strlen(userinfo));
		X509V3_add_value("Authorization", auth, &headers);
	}

	/* Initiate the request (supports redirection) */
	if ((bio = OSSL_HTTP_get(url, NULL /* proxy */, NULL /* no_proxy */,
				 NULL /* bio */, NULL /* rbio */,
				 (BIO *(*)(BIO *, void *, int, int))HTTP_TLS_cb, sslctx,
				 0 /* buf_size */, headers,
				 NULL /* expected_content_type */, 0 /* expect_asn1 */,
				 0 /* max_resp_len */, 0 /* timeout */)) != NULL)
	{
		/* HTTP request succeeded */
		char buffer[2048]; /* should really move this off the stack */
		int length;

		while ((length = BIO_read(bio, buffer, sizeof(buffer))) > 0)
		{
			FWrite(Output(), buffer, 1, length);
		}

		BIO_free(bio);
	}
	else if((bio_err = BIO_new(BIO_s_file())) != NULL)
	{
		/* HTTP request failed - try to show why */
		BIO_set_fp_amiga(bio_err, Output(), BIO_NOCLOSE | BIO_FP_TEXT);
		ERR_print_errors(bio_err);
		BIO_free(bio_err);
	}

	/* Free our custom headers */
        sk_CONF_VALUE_pop_free(headers,(void (*)(CONF_VALUE *))stub_X509V3_conf_free);

	return (bio != NULL);
}

int main(int argc, char *argv[])
{
	BOOL is_ok = FALSE;
	SSL_CTX *sslctx = NULL;
	char *userinfo = NULL;

	if (argc > 1)
	{
		/* Open required OS libraries and initialize AmiSSL */
		if ((sslctx = Init()) != NULL)
		{
			/* First check if URL is valid (optional) */
			if (IsSupportedURL(argv[1], &userinfo))
			{
				/* Open the URL and dump the response to Output() */
				is_ok = GetURL(argv[1], userinfo, sslctx);
			}
			else
				Printf("Not a valid http or https URL\n");
		}

		/* Free resources */
		Cleanup(sslctx);
	}
	else
		Printf("Usage: %s [url] (http:// and https:// supported)\n", argv[0]);

	return(is_ok ? RETURN_OK : RETURN_ERROR);
}

#if defined(USE_AUTOINIT)

/* Link with -lamisslauto
 */

LONG UsesOpenSSLStructs = FALSE;

static SSL_CTX *Init(void)
{
	SSL_CTX *ctx;

	if (!(ctx = SSL_CTX_new(TLS_client_method())))
		Printf("Couldn't create SSL context!\n");

	return ctx;
}

static void Cleanup(SSL_CTX *ctx)
{
	SSL_CTX_free(ctx);
}

#else

struct Library *AmiSSLMasterBase, *SocketBase;

# if defined(__amigaos4__)
struct AmiSSLMasterIFace *IAmiSSLMaster;
struct AmiSSLIFace *IAmiSSL;
struct SocketIFace *ISocket;
#  define GETINTERFACE(iface, base) (iface = (APTR)GetInterface((struct Library *)(base), "main", 1L, NULL))
#  define DROPINTERFACE(iface)      (DropInterface((struct Interface *)iface), iface = NULL)
# else
struct Library *AmiSSLBase, *AmiSSLExtBase;
#  define GETINTERFACE(iface, base) TRUE
#  define DROPINTERFACE(iface)
# endif

# define XMKSTR(x) #x
# define MKSTR(x)  XMKSTR(x)

/* Open and initialize AmiSSL
 */
static SSL_CTX *Init(void)
{
	SSL_CTX *ctx = NULL;

	if (!(SocketBase = OpenLibrary("bsdsocket.library", 4)))
		Printf("Couldn't open bsdsocket.library v4!\n");
	else if (!GETINTERFACE(ISocket, SocketBase))
		Printf("Couldn't get Socket interface!\n");
	else if (!(AmiSSLMasterBase = OpenLibrary("amisslmaster.library",
	                                          AMISSLMASTER_MIN_VERSION)))
		Printf("Couldn't open amisslmaster.library v"
		                     MKSTR(AMISSLMASTER_MIN_VERSION) "!\n");
	else if (!GETINTERFACE(IAmiSSLMaster, AmiSSLMasterBase))
		Printf("Couldn't get AmiSSLMaster interface!\n");
# if defined(__amigaos4__)
	else if (OpenAmiSSLTags(AMISSL_CURRENT_VERSION,
	                        AmiSSL_UsesOpenSSLStructs, FALSE,
	                        AmiSSL_GetIAmiSSL, &IAmiSSL,
	                        AmiSSL_ISocket, ISocket,
	                        AmiSSL_ErrNoPtr, &errno,
	                        TAG_DONE) != 0)
# else
	else if (OpenAmiSSLTags(AMISSL_CURRENT_VERSION,
	                        AmiSSL_UsesOpenSSLStructs, FALSE,
	                        AmiSSL_GetAmiSSLBase, &AmiSSLBase,
	                        AmiSSL_GetAmiSSLExtBase, &AmiSSLExtBase,
	                        AmiSSL_SocketBase, SocketBase,
	                        AmiSSL_ErrNoPtr, &errno,
	                        TAG_DONE) != 0)
# endif
		Printf("Couldn't open and initialize AmiSSL!\n");
	else if (!(ctx = SSL_CTX_new(TLS_client_method())))
		Printf("Couldn't create SSL context!\n");

	return ctx;
}

/* Close AmiSSL
 */
static void Cleanup(SSL_CTX *ctx)
{
# if defined(__amigaos4__)
	if (IAmiSSL)
# else
	if (AmiSSLBase)
# endif
	{
		SSL_CTX_free(ctx);
		CloseAmiSSL();
	}

	DROPINTERFACE(IAmiSSLMaster);
	CloseLibrary(AmiSSLMasterBase);

	DROPINTERFACE(ISocket);
	CloseLibrary(SocketBase);
}

#endif /* !USE_AUTOINIT */
