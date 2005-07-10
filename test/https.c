#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <dos/dos.h>
#include <stdio.h>
#include <errno.h>

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <proto/amisslmaster.h>
#include <proto/socket.h>
#include <amissl/amissl.h>
#include <libraries/amisslmaster.h>
#include <libraries/amissl.h>

static BOOL Init(void);
static void Cleanup(void);
static int ConnectToServer(char *, short, char *, short);

struct Library *AmiSSLMasterBase, *AmiSSLBase, *SocketBase;

struct AmiSSLMasterIFace *IAmiSSLMaster;
struct AmiSSLIFace *IAmiSSL;
struct SocketIFace *ISocket;

#ifndef __amigaos4__
#define GetInterface(a, b, c, d) 1
#define DropInterface(x)

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

/* The program expects at most four arguments: host in IP format, port
 * number to connect to, proxy in IP format and proxy port number.
 * If last two are specified, host can be in any format proxy will
 * understand (since this is an example for SSL programming, host name
 * resolving code is left out).
 *
 * Default values are "127.0.0.1", 443. If any proxy parameter is
 * omitted, the program will connect directly to the host.
 */
int main(int argc, char *argv[])
{
	char buffer[4096]; /* This should be dynamically allocated */
	const char *request = "GET / HTTP/1.0\r\n\r\n";
	BOOL is_ok = FALSE;
	X509 *server_cert;
	SSL_CTX *ctx;
	BIO *bio_err;
	SSL *ssl;

	if (Init())
	{
		/* Basic intialization. Next few steps (up to SSL_new()) need
		 * to be done only once per AmiSSL opener.
		 */
		SSLeay_add_ssl_algorithms();
		SSL_load_error_strings();

		/* Note: BIO writing routines are prepared for NULL BIO handle */
		if (bio_err = BIO_new(BIO_s_file()))
			BIO_set_fp_amiga(bio_err, GetStdErr(), BIO_NOCLOSE | BIO_FP_TEXT);

		/* Get a new SSL context */
		if (ctx = SSL_CTX_new(SSLv23_client_method()))
		{
			/* Basic certificate handling. OpenSSL documentation has more
			 * information on this.
			 */
			SSL_CTX_set_default_verify_paths(ctx);
			SSL_CTX_set_verify(ctx, SSL_VERIFY_PEER | SSL_VERIFY_FAIL_IF_NO_PEER_CERT,
			                   NULL);

			/* The following needs to be done once per socket */
			if (ssl = SSL_new(ctx))
			{
				int sock;

				/* Connect to the HTTPS server, directly or through a proxy */
				if (argc > 4)
					sock = ConnectToServer(argv[1], atol(argv[2]), argv[3],
					                       atol(argv[4]));
				else
					sock = ConnectToServer(argv[1] ? argv[1] : "127.0.0.1",
					                       argc > 2 ? atol(argv[2]) : 443,
					                       NULL, 0);

				/* Check if connection was established */
				if (sock >= 0)
				{
					int ssl_err = 0;

					/* Associate the socket with the ssl structure */
					SSL_set_fd(ssl, sock);

					/* Perform SSL handshake */
					if ((ssl_err = SSL_connect(ssl)) >= 0)
					{
						Printf("SSL connection using %s\n", SSL_get_cipher(ssl));

						/* Certificate checking. This example is *very* basic */
						if (server_cert = SSL_get_peer_certificate(ssl))
						{
							char *str;

							Printf("Server certificate:\n");

							if (str = X509_NAME_oneline(X509_get_subject_name(server_cert),
							                            0, 0))
							{
								Printf("\tSubject: %s\n", str);
								OPENSSL_free(str);
							}
							else
								FPrintf(GetStdErr(), "Warning: couldn't read subject name in certificate!\n");

							if (str = X509_NAME_oneline(X509_get_issuer_name(server_cert),
							                            0, 0))
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
							if ((ssl_err = SSL_write(ssl, request, strlen(request)))
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
					}
					else
						FPrintf(GetStdErr(), "Couldn't establish SSL connection!\n");

					/* If there were errors, print them */
					if (ssl_err < 0)
						ERR_print_errors(bio_err);

					/* Send SSL close notification and close the socket */
					SSL_shutdown(ssl);
					CloseSocket(sock);
				}
				else
					FPrintf(GetStdErr(), "Couldn't connect to host!\n");

				SSL_free(ssl);
			}
			else
				FPrintf(GetStdErr(), "Couldn't create new SSL handle!\n");

			SSL_CTX_free(ctx);
		}
		else
			FPrintf(GetStdErr(), "Couldn't create new context!\n");

		Cleanup();
	}

	return(is_ok ? RETURN_OK : RETURN_ERROR);
}

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

/* Open and initialize AmiSSL */
static BOOL Init(void)
{
	BOOL is_ok = FALSE;

	if (!(SocketBase = OpenLibrary("bsdsocket.library", 4)))
		FPrintf(GetStdErr(), "Couldn't open bsdsocket.library v4!\n");
	else if (!(ISocket = (struct SocketIFace *)GetInterface(SocketBase, "main", 1, NULL)))
		FPrintf(GetStdErr(), "Couldn't get Socket interface!\n");
	else if (!(AmiSSLMasterBase = OpenLibrary("amisslmaster.library",
	                                          AMISSLMASTER_MIN_VERSION)))
		FPrintf(GetStdErr(), "Couldn't open amisslmaster.library v"
		                     MKSTR(AMISSLMASTER_MIN_VERSION) "!\n");
	else if (!(IAmiSSLMaster = (struct AmiSSLMasterIFace *)GetInterface(AmiSSLMasterBase,
	                                                                    "main", 1, NULL)))
		FPrintf(GetStdErr(), "Couldn't get AmiSSLMaster interface!\n");
	else if (!InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE))
		FPrintf(GetStdErr(), "AmiSSL version is too old!\n");
	else if (!(AmiSSLBase = OpenAmiSSL()))
		FPrintf(GetStdErr(), "Couldn't open AmiSSL!\n");
	else if (!(IAmiSSL = (struct AmiSSLIFace *)GetInterface(AmiSSLBase,
	                                                        "main", 1, NULL)))
		FPrintf(GetStdErr(), "Couldn't get AmiSSL interface!\n");
	else if (InitAmiSSL(AmiSSL_ErrNoPtr, &errno,
#ifdef __amigaos4__
	                    AmiSSL_ISocket, ISocket,
#else /* __amigaos4__ */
	                    AmiSSL_SocketBase, SocketBase,
#endif /* __amigaos4__ */
	                    TAG_DONE) != 0)
		FPrintf(GetStdErr(), "Couldn't initialize AmiSSL!\n");
	else
		is_ok = TRUE;

	if (!is_ok)
		Cleanup(); /* This is safe to call even if something failed above */

	return(is_ok);
}

static void Cleanup(void)
{
	if (AmiSSLBase)
	{
		if (IAmiSSL)
		{
			CleanupAmiSSL(TAG_DONE);
			DropInterface((struct Interface *)IAmiSSL);
			IAmiSSL = NULL;
		}

		CloseAmiSSL();
		AmiSSLBase = NULL;
	}

	DropInterface((struct Interface *)IAmiSSLMaster);
	IAmiSSLMaster = NULL;

	CloseLibrary(AmiSSLMasterBase);
	AmiSSLMasterBase = NULL;

	DropInterface((struct Interface *)ISocket);
	ISocket = NULL;

	CloseLibrary(SocketBase);
	SocketBase = NULL;
}

/* Connect to the specified server, either directly or through the specified
 * proxy using HTTP CONNECT method.
 */
static int ConnectToServer(char *host, short port, char *proxy, short pport)
{
	struct sockaddr_in addr;
	char buffer[1024]; /* This should be dynamically alocated */
	BOOL is_ok = FALSE;
	char *s1, *s2;
	int sock;

	/* Create a socket and connect to the server */
	if ((sock = socket(AF_INET, SOCK_STREAM, 0)) >= 0)
	{
		memset(&addr, 0, sizeof(addr));
		addr.sin_family = AF_INET;

		if (proxy && pport)
		{
			addr.sin_addr.s_addr = inet_addr(proxy); /* This should be checked against INADDR_NONE */
			addr.sin_port = htons(pport);
		}
		else
		{
			addr.sin_addr.s_addr = inet_addr(host); /* This should be checked against INADDR_NONE */
			addr.sin_port = htons(port);
		}
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
					/* Again, some optimistic behaviour: HTTP response might not be
					 * received with only one recv
					 */
					if (recv(sock, buffer, sizeof(buffer) - 1, 0) >= 0)
					{
						/* Assuming it was received, find the end of
						 * the line and cut it off
						 */
						if ((s1 = strchr(buffer, '\r'))
						    || (s1 = strchr(buffer, '\n')))
							*s1 = '\0';

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

		if (!is_ok)
		{
			CloseSocket(sock);
			sock = -1;
		}
	}

	return(sock);
}
