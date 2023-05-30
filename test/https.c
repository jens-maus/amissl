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

#if defined(__amigaos4__)
# ifndef __USE_INLINE__
#  define __USE_INLINE__
# endif
# if defined(__VBCC__) && !defined(__USE_OLD_TIMEVAL__)
#  define __USE_OLD_TIMEVAL__
# endif
#endif

#include <sys/socket.h>
#include <netdb.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

#include <proto/exec.h>
#include <proto/dos.h>
#define __NOLIBBASE__
#include <proto/utility.h>
#undef __NOLIBBASE__
#include <proto/amissl.h>
#include <proto/amisslmaster.h>
#include <proto/socket.h>
#include <clib/alib_protos.h>
#include <utility/utility.h>

#include <amissl/amissl.h>
#include <libraries/amisslmaster.h>
#include <libraries/amissl.h>

const char stack_size[] = "$STACK:8192";

static BOOL Init(void);
static void Cleanup(void);
static void GenerateRandomSeed(char *buffer, int size);
static int ConnectToServer(char *, short, char *, short);
static int verify_cb(int preverify_ok, X509_STORE_CTX *ctx);

struct Library *AmiSSLMasterBase, *AmiSSLBase, *SocketBase, *UtilityBase;

BOOL AmiSSLInitialized;

#if defined(__amigaos4__)
struct AmiSSLMasterIFace *IAmiSSLMaster;
struct AmiSSLIFace *IAmiSSL;
struct SocketIFace *ISocket;
struct UtilityIFace *IUtility;
#else
static BPTR ErrorOutput(void)
{
	return(((struct Process *)FindTask(NULL))->pr_CES);
}
#define FFlush(x) Flush(x)
#endif /* !__amigaos4__ */

static BPTR GetStdErr(void)
{
	BPTR err = ErrorOutput();

	return(err ? err : Output());
}

/* Usage: https <host> <port> [proxyhost] [proxyport]
 *
 * host:      name of host (default: "localhost")
 * port:      port to connect to (default: 443)
 * proxyhost: name of proxy (optional)
 * proxyport: name of proxy (optional)
 *
 * If any proxy parameter is omitted, the program will
 * connect directly to the host.
 */
int main(int argc, char *argv[])
{
	char buffer[4096]; /* This should be dynamically allocated */
	BOOL is_ok = FALSE;
	X509 *server_cert;
	SSL_CTX *ctx;
	BIO *bio_err;
	SSL *ssl;

	if (Init()) /* Open required OS libraries and initialize AmiSSL */
	{
		/* Basic intialization. Next few steps (up to SSL_new()) need
		 * to be done only once per AmiSSL opener.
		 */
		OPENSSL_init_ssl(OPENSSL_INIT_SSL_DEFAULT | OPENSSL_INIT_ADD_ALL_CIPHERS | OPENSSL_INIT_ADD_ALL_DIGESTS, NULL);

		/* Seed the entropy engine */
		GenerateRandomSeed(buffer, 128);
		RAND_seed(buffer, 128);

		/* Note: BIO writing routines are prepared for NULL BIO handle */
		if((bio_err = BIO_new(BIO_s_file())) != NULL)
			BIO_set_fp_amiga(bio_err, GetStdErr(), BIO_NOCLOSE | BIO_FP_TEXT);

		/* Get a new SSL context */
		if((ctx = SSL_CTX_new(TLS_client_method())) != NULL)
		{
			/* Basic certificate handling. OpenSSL documentation has more
			 * information on this.
			 */
			SSL_CTX_set_default_verify_paths(ctx);
			SSL_CTX_set_verify(ctx, SSL_VERIFY_PEER | SSL_VERIFY_FAIL_IF_NO_PEER_CERT,
			                   verify_cb);

			/* The following needs to be done once per socket */
			if((ssl = SSL_new(ctx)) != NULL)
			{
				int sock;
				int port, pport;
				char *host, *proxy;

				/* Connect to the HTTPS server, directly or through a proxy */
				host = (argc > 1) ? argv[1] : (char *)"localhost";
				port = (argc > 2) ? atol(argv[2]) : 443;
				proxy = (argc > 3) ? argv[3] : NULL;
				pport = (argc > 4) ? atol(argv[4]) : 0;

				sock = ConnectToServer(host, port, proxy, pport);

				/* Check if connection was established */
				if (sock >= 0)
				{
					int ssl_err = 0;

					/* Associate the socket with the ssl structure */
					SSL_set_fd(ssl, sock);

					/* Set up SNI (Server Name Indication) */
					SSL_set_tlsext_host_name(ssl, host);

					/* Perform SSL handshake */
					if((ssl_err = SSL_connect(ssl)) >= 0)
					{
						Printf("SSL connection using %s\n", SSL_get_cipher(ssl));

						/* Certificate checking. This example is *very* basic */
						if((server_cert = SSL_get_peer_certificate(ssl)))
						{
							char *str;

							Printf("Server certificate:\n");

							if((str = X509_NAME_oneline(X509_get_subject_name(server_cert), 0, 0)))
							{
								Printf("\tSubject: %s\n", str);
								OPENSSL_free(str);
							}
							else
								FPrintf(GetStdErr(), "Warning: couldn't read subject name in certificate!\n");

							if((str = X509_NAME_oneline(X509_get_issuer_name(server_cert),
							                            0, 0)) != NULL)
							{
								Printf("\tIssuer: %s\n", str);
								OPENSSL_free(str);
							}
							else
								FPrintf(GetStdErr(), "Warning: couldn't read issuer name in certificate!\n");

							X509_free(server_cert);

							/* Send a HTTP request. Again, this is just
							 * a very basic example.
							 */
							sprintf(buffer,"GET / HTTP/1.0\r\nHost: %s\r\n\r\n",host);
							if ((ssl_err = SSL_write(ssl, buffer, strlen(buffer)))
							    > 0)
							{
								/* Dump everything to output */
								while ((ssl_err = SSL_read(ssl, buffer,
								                           sizeof(buffer) - 1))
								       > 0)
									FWrite(Output(), buffer, ssl_err, 1);

								FFlush(Output());

								/* This is not entirely true, check
								 * the SSL_read documentation
								 */
								is_ok = ssl_err == 0;
							}
							else
								FPrintf(GetStdErr(), "Couldn't write request!\n");
						}
						else
							FPrintf(GetStdErr(), "Couldn't get server certificate!\n");

						/* Send SSL close notification */
						SSL_shutdown(ssl);
					}
					else
						FPrintf(GetStdErr(), "Couldn't establish SSL connection!\n");

					/* If there were errors, print them */
					if (ssl_err < 0)
						ERR_print_errors(bio_err);

					/* Close the socket */
					CloseSocket(sock);
				}
				else
					FPrintf(GetStdErr(), "Couldn't connect to host!\n");

				FPrintf(GetStdErr(), "before SSL_free()\n");
				SSL_free(ssl);
			}
			else
				FPrintf(GetStdErr(), "Couldn't create new SSL handle!\n");

			FPrintf(GetStdErr(), "before SSL_CTX_free()\n");
			SSL_CTX_free(ctx);
		}
		else
			FPrintf(GetStdErr(), "Couldn't create new context!\n");

		BIO_free(bio_err);

		FPrintf(GetStdErr(), "before Cleanup()\n");
		Cleanup();
	}

	FPrintf(GetStdErr(), "before end of main()\n");
	return(is_ok ? RETURN_OK : RETURN_ERROR);
}

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

#if defined(__amigaos4__)
#define GETINTERFACE(iface, base) (iface = (APTR)GetInterface((struct Library *)(base), "main", 1L, NULL))
#define DROPINTERFACE(iface)      (DropInterface((struct Interface *)iface), iface = NULL)
#else
#define GETINTERFACE(iface, base) TRUE
#define DROPINTERFACE(iface)
#endif

/* Open and initialize AmiSSL */
static BOOL Init(void)
{
	AmiSSLInitialized = FALSE;

	if (!(UtilityBase = OpenLibrary("utility.library", 0)))
		FPrintf(GetStdErr(), "Couldn't open utility.library!\n");
	else if (!GETINTERFACE(IUtility, UtilityBase))
		FPrintf(GetStdErr(), "Couldn't get Socket interface!\n");
	else if (!(SocketBase = OpenLibrary("bsdsocket.library", 4)))
		FPrintf(GetStdErr(), "Couldn't open bsdsocket.library v4!\n");
	else if (!GETINTERFACE(ISocket, SocketBase))
		FPrintf(GetStdErr(), "Couldn't get Socket interface!\n");
	else if (!(AmiSSLMasterBase = OpenLibrary("amisslmaster.library",
	                                          AMISSLMASTER_MIN_VERSION)))
		FPrintf(GetStdErr(), "Couldn't open amisslmaster.library v"
		                     MKSTR(AMISSLMASTER_MIN_VERSION) "!\n");
	else if (!GETINTERFACE(IAmiSSLMaster, AmiSSLMasterBase))
		FPrintf(GetStdErr(), "Couldn't get AmiSSLMaster interface!\n");
	else if (!InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE))
		FPrintf(GetStdErr(), "AmiSSL version is too old!\n");
	else if (!(AmiSSLBase = OpenAmiSSL()))
		FPrintf(GetStdErr(), "Couldn't open AmiSSL!\n");
	else if (!GETINTERFACE(IAmiSSL, AmiSSLBase))
		FPrintf(GetStdErr(), "Couldn't get AmiSSL interface!\n");
#if defined(__amigaos4__)
	else if (InitAmiSSL(AmiSSL_ErrNoPtr, &errno,
	                    AmiSSL_ISocket, ISocket,
	                    TAG_DONE) != 0)
#else
	else if (InitAmiSSL(AmiSSL_ErrNoPtr, &errno,
	                    AmiSSL_SocketBase, SocketBase,
	                    TAG_DONE) != 0)
#endif
		FPrintf(GetStdErr(), "Couldn't initialize AmiSSL!\n");
	else
		AmiSSLInitialized = TRUE;

	if (!AmiSSLInitialized)
		Cleanup(); /* This is safe to call even if something failed above */

	return(AmiSSLInitialized);
}

static void Cleanup(void)
{
	if (AmiSSLInitialized)
	{	/* Must always call after successful InitAmiSSL() */
		CleanupAmiSSLA(NULL);
	}

	if (AmiSSLBase)
	{
		DROPINTERFACE(IAmiSSL);
		CloseAmiSSL();
		AmiSSLBase = NULL;
	}

	DROPINTERFACE(IAmiSSLMaster);
	CloseLibrary(AmiSSLMasterBase);
	AmiSSLMasterBase = NULL;

	DROPINTERFACE(ISocket);
	CloseLibrary(SocketBase);
	SocketBase = NULL;

	DROPINTERFACE(IUtility);
	CloseLibrary(UtilityBase);
	UtilityBase = NULL;
}

/* Get some suitable random seed data
 */
static void GenerateRandomSeed(char *buffer, int size)
{
	int i;
#ifdef __amigaos4__
	struct RandomState rs;

	rs.rs_Low = clock();
	rs.rs_High = time(NULL);

	for(i = 0; i < size/4; i++)
	{
		((LONG *)buffer)[i] = Random(&rs);
	}
#else
	for(i = 0; i < size/2; i++)
	{
		((UWORD *)buffer)[i] = RangeRand(65535);
	}
#endif
}

/* This callback is called everytime OpenSSL verifies a certificate
 * in the chain during a connection, indicating success or failure.
 */
static int verify_cb(int preverify_ok, X509_STORE_CTX *ctx)
{
	if (!preverify_ok)
	{
		/* Here, you could ask the user whether to ignore the failure,
		 * displaying information from the certificate, for example.
		 */
		FPrintf(GetStdErr(),"Certificate verification failed (%s)\n",
		        X509_verify_cert_error_string(X509_STORE_CTX_get_error(ctx)));
	}
	else
	{
		FPrintf(GetStdErr(),"Certificate verification successful (hash %08lx)\n",
		        X509_issuer_and_serial_hash(X509_STORE_CTX_get_current_cert(ctx)));
	}
	return preverify_ok;
}

/* Connect to the specified server, either directly or through the specified
 * proxy using HTTP CONNECT method.
 */
static int ConnectToServer(char *host, short port, char *proxy, short pport)
{
	struct sockaddr_in addr;
	struct hostent *hostent;
	char buffer[1024]; /* This should be dynamically alocated */
	BOOL is_ok = FALSE;
	char *s1, *s2;
	int sock = -1;

	/* Lookup hostname */
	if ((hostent = gethostbyname((proxy && pport) ? proxy : host)) != NULL)
	{
		memset(&addr, 0, sizeof(addr));
		addr.sin_family = AF_INET;
		addr.sin_port = htons((proxy && pport) ? pport : port);
		addr.sin_len = hostent->h_length;;
		memcpy(&addr.sin_addr,hostent->h_addr,hostent->h_length);
	}
	else
		FPrintf(GetStdErr(), "Host lookup failed\n");

	/* Create a socket and connect to the server */
	if (hostent && ((sock = socket(AF_INET, SOCK_STREAM, 0)) >= 0))
	{
		if (connect(sock, (struct sockaddr *)&addr, sizeof(addr)) >= 0)
		{
			/* For proxy connection, use SSL tunneling. First issue a HTTP CONNECT
			 * request and then proceed as with direct HTTPS connection.
			 */
			if (proxy && pport)
			{
				/* This should be done with snprintf to prevent buffer
				 * overflows, but some compilers don't have it and
				 * handling that would be an overkill for this example
				 */
				sprintf(buffer, "CONNECT %s:%ld HTTP/1.0\r\n\r\n",
				        host, (long)port);

				/* In a real application, it would be necessary to loop
				 * until everything is sent or an error occurrs, but here we
				 * hope that everything gets sent at once.
				 */
				if (send(sock, buffer, strlen(buffer), 0) >= 0)
				{
					int len;

					/* Again, some optimistic behaviour: HTTP response might not be
					 * received with only one recv
					 */
					if ((len = recv(sock, buffer, sizeof(buffer) - 1, 0)) >= 0)
					{
						/* Assuming it was received, find the end of
						 * the line and cut it off
						 */
						if ((s1 = strchr(buffer, '\r'))
						    || (s1 = strchr(buffer, '\n')))
							*s1 = '\0';
						else
							buffer[len] = '\0';

						Printf("Proxy returned: %s\n", buffer);

						/* Check if HTTP response makes sense */
						if (strncmp(buffer, "HTTP/", 4) == 0
						    && (s1 = strchr(buffer, ' '))
						    && (s2 = strchr(++s1, ' '))
						    && (s2 - s1 == 3))
						{
							/* Only accept HTTP 200 OK response */
							if (atol(s1) == 200)
								is_ok = TRUE;
							else
								FPrintf(GetStdErr(), "Proxy responce indicates error!\n");
						}
						else
							FPrintf(GetStdErr(), "Amibigous proxy responce!\n");
					}
					else
						FPrintf(GetStdErr(), "Couldn't get proxy response!\n");
				}
				else
					FPrintf(GetStdErr(), "Couldn't send request to proxy!\n");
			}
			else
				is_ok = TRUE;
		}
		else
			FPrintf(GetStdErr(), "Couldn't connect to server\n");

		if (!is_ok)
		{
			CloseSocket(sock);
			sock = -1;
		}
	}

	return(sock);
}
