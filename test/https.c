#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <dos/dos.h>

#define __USE_SYSBASE	1

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amisslmaster.h>
#include <proto/amissl.h>
#include <libraries/amisslmaster.h>
#include <multitcp.h>

LONG Init(void);
void Cleanup(void);
int do_connect(char *, short , char *, short );
BPTR getstderr(void);
void MiniSPrintf(char *, char *, ...);

struct Library *AmiSSLBase = NULL;
struct Library *AmiSSLMasterBase = NULL;
APTR stack = NULL;

/* four arguments: first is host *in IP format* and the second is port
 * to connect to. Third is proxy in IP format and the fourth proxy port.
 * If last two are specified, host can be in any format proxy will
 * understand (yes I was lazy to write resolve code :))
 * Default values are "127.0.0.1", 443. If any proxy parameter is
 * omitted program will connect directly to the host.
 */

void main(int argc, char **argv)
{
	int err = 0;
	int sd;
	SSL_CTX *ctx;
	SSL *ssl;
	X509 *server_cert;
	char *str;
	char buf[4096];
	BIO *bio_err = NULL;
	char *request = "GET / HTTP/1.0\r\n\r\n";
	char rand[] = "fklgnlnhrjxnc 94ut c,mnxclnvhepgs poaw u5-wxfjl vfnkl";

	if (!Init())
	{
		/* Basic intialization. Next few steps (up to SSL_new()) need
		 * to be done only once per AmiSSL opener
		 */
		ERR_load_crypto_strings();
		ERR_load_SSL_strings();
		OpenSSL_add_all_algorithms();

		/* Much better *random* data needed! */
		RAND_seed(rand, sizeof(rand));

		if (bio_err = BIO_new(BIO_s_file()))
			BIO_set_fp_amiga(bio_err, getstderr(), BIO_NOCLOSE | BIO_FP_TEXT);

		if (ctx = SSL_CTX_new(SSLv23_client_method()))
		{
			/* Basic certificate handling. Look into OpenSSL to see what more
			 * can be done about them
			 */
			/* SSL_CTX_set_verify(ctx, SSL_VERIFY_PEER | SSL_VERIFY_FAIL_IF_NO_PEER_CERT, NULL); */
			/* Don't do the following, it's here just for testing! */
			SSL_CTX_set_verify(ctx, SSL_VERIFY_NONE, NULL);
			SSL_CTX_set_default_verify_paths(ctx);

			/* This needs to be done once per socket */

			if (ssl = SSL_new(ctx))
			{
				/* Connecting part. Uses CONNECT method if connecting
				 * through a proxy
				 */

				if (argc > 4)	/* Proxy */
					sd = do_connect(argv[1], atol(argv[2]), argv[3], atol(argv[4]));
				else			/* Direct */
					sd = do_connect(argv[1] ? argv[1] : "127.0.0.1", argc > 2 ? atol(argv[2]) : 443, NULL, 0);

				if (sd >= 0)
				{
					/* Associate a socket with ssl structure */
					SSL_set_fd(ssl, sd);

					/* SSL handshake and other things */
					if ((err = SSL_connect(ssl)) >= 0)
					{
						Printf("SSL connection using %s\n", SSL_get_cipher(ssl));

						/* Certificate checking. This is *very* basic */
						if (server_cert = SSL_get_peer_certificate(ssl))
						{
							Printf("Server certificate:\n");

							if (str = X509_NAME_oneline(X509_get_subject_name(server_cert), 0, 0))
							{
								Printf("\tSubject: %s\n", str);
								OPENSSL_free(str);
							}
							else
								Printf("Warning: Couldn't read subject name in certificate!\n");

							if (str = X509_NAME_oneline(X509_get_issuer_name(server_cert), 0, 0))
							{
								Printf("\tIssuer: %s\n", str);
								OPENSSL_free(str);
							}
							else
								Printf("Warning: Couldn't read issuer name in certificate!\n");

							X509_free(server_cert);

							/* Send HTTP request */
							if ((err = SSL_write(ssl, request, strlen(request))) >= 0)
							{
								/* Dump everything to output */
								while ((err = SSL_read(ssl, buf, sizeof(buf) - 1)) > 0)
									FWrite(Output(), buf, err, 1);

								/* If there were errors, shout */
								if (err < 0)
									ERR_print_errors(bio_err);
							}
							else
							{
								long err;
								char *p;

								err = ERR_get_error();
								p = ERR_error_string(err, 0);
								Printf("SSL error code=%ld, error=%s\n", err, p);
								Printf("Couldn't write request!\n");
							}
						}
						else
							Printf("Couldn't get server certificate!\n");
					}
					else
						ERR_print_errors(bio_err);

					/* Send SSL/TLS close_notify */
					SSL_shutdown(ssl);
					MTCP_CloseSocket(sd);
				}
				else
					Printf("Couldn't connect to host!\n");

				SSL_free(ssl);
			}
			else
				Printf("Couldn't create new SSL handle!\n");

			SSL_CTX_free(ctx);
		}
		else
			Printf("Couldn't create new context!\n");

		ERR_free_strings();

		Cleanup();
	}
	else
	{
		/* The error string is not much helpful O:) */
		Printf("Error during initialization (couldn't open TCP/IP stack or AmiSSL or whatever)!\n");
		Cleanup();
	}
}

/* Demonstration only. Ideally, it would say what exactly went wrong */
LONG Init(void)
{
	LONG err = 1; /* Default: error */

	if ((stack = MTCP_InitTCPIP(NULL))
	    && (AmiSSLMasterBase = OpenLibrary("amisslmaster.library", 1))
	    && InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE)
	    && (AmiSSLBase = OpenAmiSSL())
	    && !InitAmiSSL(AmiSSL_TCPStack, stack, TAG_DONE))
		err = 0;

	return(err);
}

void Cleanup(void)
{
	if (AmiSSLBase)
	{
		CleanupAmiSSL(TAG_DONE);
		CloseAmiSSL();
	}

	if (AmiSSLMasterBase)
		CloseLibrary(AmiSSLMasterBase);

	if (stack)
		MTCP_DoneTCPIP(stack);
}

int do_connect(char *host, short port, char *proxy, short pport)
{
	struct sockaddr_in sa;
	char buf[1024], *s1, *s2; /* Buffer is on stack only because programmer is lazy, don't do that */
	int sock, err;

	/* Connecting to server. Demonstration only.
	 * Kids, don't try this at home ;)
	 */
	if ((sock = MTCP_Socket(stack, FALSE)) >= 0)
	{
		memset(&sa, 0, sizeof(sa));
		sa.sin_family = AF_INET;

		if (proxy && pport)
		{
			sa.sin_addr.s_addr = MTCP_Inet_Addr(stack, proxy);
			sa.sin_port = htons(pport);
		}
		else
		{
			sa.sin_addr.s_addr = MTCP_Inet_Addr(stack, host);
			sa.sin_port = htons(port);
		}

		if ((err = MTCP_Connect(sock, (struct sockaddr *)&sa)) >= 0)
		{
			/* Proxy connection, SSL tunneling. We send CONNECT and
			 * after everything's done, proceed as with direct HTTPS
			 * connection
			 */
			if (proxy && pport)
			{
				MiniSPrintf(buf, "CONNECT %s:%lu HTTP/1.0\r\n\r\n", host, port);

				/* We hope that everything gets sent at once
				 * In real code, loop until err == 0 (or < 0 if error)
				 */
				if ((err = MTCP_Send(sock, buf, strlen(buf), 0)) >= 0)
				{
					if ((err = MTCP_Recv(sock, buf, sizeof(buf) - 1, 0)) >= 0)
					{
						if ((s1 = strchr(buf, '\r')) || (s1 = strchr(buf, '\n')))
							*s1 = '\0';

						Printf("Proxy returned: %s\n", buf);

						/* Response makes sense? */
						if (!strncmp(buf, "HTTP/", 4) && (s1 = strchr(buf, ' ')) && (s2 = strchr(++s1, ' ')) && (s2 - s1 == 3))
						{
							if (atol(s1) != 200)
							{
								Printf("Proxy responce indicates error, exiting!\n");
								err = -1;
							}
						}
						else
						{
							Printf("Amibigous proxy responce, exiting!\n");
							err = -1;
						}
					}
					else
						Printf("Couldn't get proxy response!\n");
				}
				else
					Printf("Couldn't send request to proxy!\n");
			}
		}

		if (err < 0)
		{
			MTCP_CloseSocket(sock);
			sock = -1;
		}
	}

	return(sock);
}

BPTR getstderr(void)
{
	struct Process *proc = (struct Process *)FindTask(NULL);

	return((BPTR)(proc->pr_CES ? proc->pr_CES : proc->pr_COS));
}

void MiniSPrintf(char *buffer, char *format, ...)
{
	RawDoFmt(format, &format + 1, (void *)"\x16\xC0\x4E\x75", buffer);
}
