#include <stdio.h>
#include <proto/exec.h> 
#include <proto/amissl.h>
#include <amissl/tags.h>

struct Library *AmiSSLBase = NULL;
struct Library *SocketBase;

void _STI_250_openamissl(void)
{
	if (!(SocketBase = OpenLibrary("bsdsocket.library", 4)))
	{
		fprintf(stderr, "Couldn't open bsdsocket.library\n");
		exit(20);
	}

	if (!(AmiSSLBase = OpenLibrary("amissl.library", 1)))
	{
		fprintf(stderr, "Couldn't open amissl.library\n");
		CloseLibrary(SocketBase);
		exit(20);
	}
	InitAmiSSL(AmiSSL_SocketBase, SocketBase, TAG_DONE);
}

void _STD_250_closeamissl(void)
{
	if (SocketBase)
		CloseLibrary(SocketBase);

	if (AmiSSLBase)
	{
		CleanupAmiSSL(TAG_DONE);
		CloseLibrary(AmiSSLBase);
		AmiSSLBase = NULL;
	}
}

asm ("  .text;  .stabs \"___CTOR_LIST__\",22,0,0,__STI_250_openamissl");
asm ("  .text;  .stabs \"___DTOR_LIST__\",22,0,0,__STD_250_closeamissl");
