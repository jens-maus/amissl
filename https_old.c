#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <dos/dos.h>

#define __USE_SYSBASE	1

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/amissl.h>
#include <proto/socket.h>
#include <amissl/amissl.h>
#include <multitcp.h>

//https 194.103.154.130

LONG Init(void);
void Cleanup(void);
int do_connect(char *, short , char *, short );
BPTR getstderr(void);
void MiniSPrintf(char *, char *, ...);

struct Library *AmiSSLBase;
APTR stack;

/* four arguments: first is host *in IP format* and the second is port
 * to connect to. Third is proxy in IP format and the fourth proxy port.
 * If last two are specified, host can be in any format proxy will
 * understand (yes I was lazy to write resolve code :))
 * Default values are "127.0.0.1", 443. If any proxy parameter is
 * omitted program will connect directly to the host.
 */

//ssl_create_cipher_list

int client_cert_cb(SSL *ssl, X509 **x509, EVP_PKEY **pkey)
{
	return 0;
}

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
// https://wwwutv.skandiabanken.se/sksecure/login.asp
//	char *request = "GET /sksecure/login.asp HTTP/1.0\r\nMozilla/4.5 [en] (Win98; I)\r\n\r\n";
	char *request = "GET /sksecure/login.asp HTTP/1.0\r\nMozilla/4.5 [en] (Win98; I)\r\n\r\n";
//	char *request = "POST /cert/skkgaccept.asp HTTP/1.0\r\nMozilla/4.5 [en] (Win98; I)\r\n"
//					"Cookie: ASPSESSIONIDQQQQGGBC=CAAJBFCCOLHINNJIPKPCBJIE\r\n"
//					"Content-type: x-www-form-encoded\r\nContent-length: 509\r\n\r\n"
//					"RequestData=MIG4MGQwXDANBgkqhkiG9w0BAQEFAANLADBIAkEA8Pe7h1cMNyZJ8FzENdy3ZLnx1dhs8e3ujEpuSDWggvpKnGCH4J8XC2affdIUflvNem6pHfCSNnGbt8aQZVTF8QIDAQABFgR0ZXN0MA0GCSqGSIb3DQEBBAUAA0EAqHnYQooOhjpWfaI8TYPphPfeDAUAlEbQZpxuOZzIj/kVpYTi6erRGZVq0/zkCtB7+GiZHDyZybgDPMVVi3Ilvw==&CommonName=Stefan+Burstr%F6m&OrgUnit=Alberta+1&State=24591&Locality=Staffanstorp&Country=SE&Org=7405094231&Email=&pers_nr=&pin=&CertAttrib=&SubmitFlag=257&GetCertFlag=257&ControlType=NETSCAPE&PassThru=&CPUType=OTHER&Request=Forts%E4tt&x=16&y=14"
//					"\r\n";
	if (!Init())
	{
		/* Basic intialization. Next few steps (up to SSL_new()) need */
		/* to be done only once per AmiSSL opener */

		SSLeay_add_ssl_algorithms();
		SSL_load_error_strings();

		if (bio_err = BIO_new(BIO_s_file()))
			BIO_set_fp_amiga(bio_err, getstderr(), BIO_NOCLOSE | BIO_FP_TEXT);

		if (ctx = SSL_CTX_new(SSLv3_client_method()))
//		if (ctx = SSL_CTX_new(SSLv23_client_method()))
		{
			/* Basic certificate handling. Look into OpenSSL to see what more */
			/* can be done about them */

			SSL_CTX_set_default_verify_paths(ctx);
			SSL_CTX_set_verify(ctx, SSL_VERIFY_PEER | SSL_VERIFY_FAIL_IF_NO_PEER_CERT, NULL);
			SSL_CTX_set_client_cert_cb(ctx,client_cert_cb);

			/* This needs to be done once per socket */

			if (ssl = SSL_new(ctx))
			{
#if 1
				{
					char *cert_file="amissl:usercerts/e367685024a9a4a3160638696d0f.0";
					char *key_file="amissl:private/e367685024a9a4a3160638696d0f.0";

					if (SSL_use_certificate_file(ssl,cert_file,
						SSL_FILETYPE_PEM) <= 0)
					{
						Printf("unable to get certificate from '%s'\n",cert_file);
//						ERR_print_errors(bio_err);
//						return(0);
						goto NoCF;
					}

					if (key_file == NULL) key_file=cert_file;
					if (SSL_use_PrivateKey_file(ssl,key_file,
						SSL_FILETYPE_PEM) <= 0)
					{
						Printf("unable to get private key from '%s'\n",key_file);
//						ERR_print_errors(bio_err);
//						return(0);
						goto NoCF;
					}

					/* If we are using DSA, we can copy the parameters from
					 * the private key */
		

					/* Now we know that a key and cert have been set against
					 * the SSL context */
					if (!SSL_check_private_key(ssl))
					{
						Printf("Private key does not match the certificate public key\n");
//						return(0);
						goto NoCF;
					}
				}
NoCF:
#endif

				/* Connecting part. Uses CONNECT method if connecting */
				/* through a proxy */

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
								Free(str);
							}
							else Printf("Warning: Couldn't read subject name in certificate!\n");

							if (str = X509_NAME_oneline(X509_get_issuer_name(server_cert), 0, 0))
							{
								Printf("\tIssuer: %s\n", str);
								Free(str);
							}
							else Printf("Warning: Couldn't read issuer name in certificate!\n");

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

								err=ERR_get_error();
								p=ERR_error_string(err,0);
								Printf("SSL error code=%ld, error=%s\n",err,p);
								Printf("Couldn't write request!\n");
							}
						}
						else Printf("Couldn't get server certificate!\n");
					}
					else ERR_print_errors(bio_err);

					/* send SSL/TLS close_notify */
					SSL_shutdown(ssl);
					MTCP_CloseSocket(sd);
				}
				else Printf("Couldn't connect to host!\n");
				SSL_free(ssl);
			}
			else Printf("Couldn't create new SSL handle!\n");
			SSL_CTX_free(ctx);
		}
		else Printf("Couldn't create new context!\n");
		Cleanup();
	}
	else Printf("Couldn't open or init AmiSSL!\n");
}

LONG Init(void)
{
	LONG err = 1; /* Default: error */

	if(stack = MTCP_InitTCPIP(NULL))
	{
		if (AmiSSLBase = OpenLibrary("amissl.library", 1))
		{
			if (!InitAmiSSL(AmiSSL_Version, AmiSSL_CurrentVersion,
							AmiSSL_Revision, AmiSSL_CurrentRevision,
						/*	AmiSSL_VersionOverride, TRUE,*/ /* If you insist */
							TAG_DONE))
				err = 0;		/* Everything OK */
			else
				CloseLibrary(AmiSSLBase);
		}
	}
	return(err);
}

void Cleanup(void)
{
	if(stack)
		MTCP_DoneTCPIP(stack);
	CleanupAmiSSL(TAG_DONE);
	CloseLibrary(AmiSSLBase);
}

int do_connect(char *host, short port, char *proxy, short pport)
{
	struct sockaddr_in sa;
	char buf[1024], *s1, *s2;	/* Buffer on stack, not good */
	int sock, err;

	/* Connecting to server. Demonstration only. */
	/* Kids, don't try this at home ;) */

	if ((sock = MTCP_Socket(stack, FALSE)) >= 0)
	{
		memset(&sa, 0, sizeof(sa));
		sa.sin_family = AF_INET;

		if (proxy && pport)
		{
			sa.sin_addr.s_addr = MTCP_Inet_Addr(stack,proxy);
			sa.sin_port = htons(pport);
		}
		else
		{
			sa.sin_addr.s_addr = MTCP_Inet_Addr(stack,host);
			sa.sin_port = htons(port);
		}

		if ((err = MTCP_Connect(sock, (struct sockaddr *)&sa)) >= 0)
		{
			/* Proxy connection, SSL tunneling. We send CONNECT and */
			/* after everything's done, proceed as with direct HTTPS
			/* connection  */

			if (proxy && pport)
			{
				MiniSPrintf(buf, "CONNECT %s:%lu HTTP/1.0\r\n\r\n", host, port);

				/* We hope that everything gets sent at once */
				/* In real code, loop until err == 0 (or < 0 if error) */
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
					else Printf("Couldn't get proxy response!\n");
				}
				else Printf("Couldn't send request to proxy!\n");
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

	return((BPTR)(proc->pr_CES ? proc->pr_CES : proc->pr_CIS));
}

void MiniSPrintf(char *buffer, char *format, ...)
{
	RawDoFmt(format, &format + 1, (void *)"\x16\xC0\x4E\x75", buffer);
}
