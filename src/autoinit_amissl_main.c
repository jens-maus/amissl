#include <proto/exec.h>
#include <proto/dos.h>

#include <exec/types.h>
#include <dos/dos.h>
#include <utility/tagitem.h>
#include <internal/amissl_compiler.h>
#include <libraries/amisslmaster.h>
#include <libraries/amissl.h>

#include <proto/amisslmaster.h>
#include <proto/amissl.h>

#include <errno.h>

/****************************************************************************/

__attribute__((weak)) struct Library *AmiSSLBase = NULL;
__attribute__((weak)) struct Library *AmiSSLMasterBase = NULL;
__attribute__((weak)) struct Library *SocketBase = NULL;

#if defined(__amigaos4__)
__attribute__((weak)) struct AmiSSLIFace * IAmiSSL = NULL;
__attribute__((weak)) struct AmiSSLMasterIFace * IAmiSSLMaster = NULL;
__attribute__((weak)) struct SocketIFace * ISocket = NULL;
#endif

void __init_amissl_main(void) __attribute__((constructor));
void __exit_amissl_main(void) __attribute__((destructor));

/****************************************************************************/

static void fatal_error(const char *message)
{
	BOOL from_wb = ((struct Process *)FindTask(NULL))->pr_CLI == 0;
	BPTR fh;

	if (!from_wb)
	{
		#if defined(__amigaos4__)
		fh = ErrorOutput() ? ErrorOutput() : Output();
		#else
		fh = Output();
		#endif
	}
	else
		fh = Open("CON://///AUTO/CLOSE/WAIT", MODE_NEWFILE);

	if (fh)
	{
		FPrintf(fh, (char *)message);

		if (from_wb)
			Close(fh);
	}

	exit(RETURN_FAIL);
}

#if !defined(__AROS__) && (defined(__VBCC__) || defined(NO_INLINE_STDARG))
#if defined(_M68000) || defined(__M68000) || defined(__mc68000)
// the AmigaOS3 build needs these stubs for the varargs functions
LONG FPrintf(BPTR fh, CONST_STRPTR format, ...)
{ return VFPrintf(fh, format, &format+1); }

long InitAmiSSL(Tag tag1, ...)
{ return InitAmiSSLA((struct TagItem *)&tag1); }
long CleanupAmiSSL(Tag tag1, ...)
{ return CleanupAmiSSLA((struct TagItem *)&tag1); }
#endif
#endif

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

void __init_amissl_main(void)
{
	#if defined(__amigaos4__)
	if (!ISocket)
	#endif
	{
		if (!(SocketBase = OpenLibrary("bsdsocket.library", 4)))
			fatal_error("Couldn't open bsdsocket.library v4!\n");

		#if defined(__amigaos4__)
		if (!(ISocket = (struct SocketIFace *)GetInterface((struct Library *)SocketBase, "main", 1, NULL)))
			fatal_error("Couldn't obtain socket interface\n");
		#endif
	}

	#if defined(__amigaos4__)
	if (!IAmiSSLMaster)
	#endif
	{
		if (!(AmiSSLMasterBase = OpenLibrary("amisslmaster.library",
		                                             AMISSLMASTER_MIN_VERSION)))
			fatal_error("Couldn't open amisslmaster.library v" MKSTR(AMISSLMASTER_MIN_VERSION) "\n");

		#if defined(__amigaos4__)
		if (!(IAmiSSLMaster = (struct AmiSSLMasterIFace *)GetInterface((struct Library *)AmiSSLMasterBase, "main", 1, NULL)))
			fatal_error("Couldn't obtain amisslmaster interface\n");
		#endif

		if (!InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE))
			fatal_error("Couldn't initialize amisslmaster.library!\n");
	}

	#if defined(__amigaos4__)
	if (!IAmiSSL)
	#endif
	{
		if (!(AmiSSLBase = OpenAmiSSL()))
			fatal_error("Couldn't open AmiSSL!\n");

		#if defined(__amigaos4__)
		if (!(IAmiSSL = (struct AmiSSLIFace *)GetInterface((struct Library *)AmiSSLBase, "main", 1, NULL)))
			fatal_error("Couldn't obtain amissl interface\n");

		if(InitAmiSSL(AmiSSL_ErrNoPtr, &errno,
		                        AmiSSL_ISocket, ISocket,
		                        TAG_DONE))
			fatal_error("Couldn't initialize AmiSSL!\n");
		#else
		if(InitAmiSSL(AmiSSL_ErrNoPtr, &errno,
		                        AmiSSL_SocketBase, SocketBase,
		                        TAG_DONE))
			fatal_error("Couldn't initialize AmiSSL!\n");
		#endif
	}
}

/****************************************************************************/

void __exit_amissl_main(void)
{
	if (AmiSSLBase)
	{
		#if defined(__amigaos4__)
		if (IAmiSSL)
		{
			CleanupAmiSSL(TAG_DONE);
			DropInterface((struct Interface *)IAmiSSL);

			IAmiSSL = NULL;
		}

		if (IAmiSSLMaster)
			CloseAmiSSL();
		#else
		CleanupAmiSSL(TAG_DONE);
		CloseAmiSSL();
		#endif

		AmiSSLBase = NULL;
	}

	if (AmiSSLMasterBase)
	{
		#if defined(__amigaos4__)
		if (IAmiSSLMaster)
		{
			DropInterface((struct Interface *)IAmiSSLMaster);
			IAmiSSLMaster = NULL;
		}
		#endif

		CloseLibrary((struct Library *)AmiSSLMasterBase);
		AmiSSLMasterBase = NULL;
	}

	if (SocketBase)
	{
		#if defined(__amigaos4__)
		if (ISocket)
		{
			DropInterface((struct Interface *)ISocket);
			ISocket = NULL;
		}
		#endif

		CloseLibrary((struct Library *)SocketBase);
		SocketBase = NULL;
	}
}

/****************************************************************************/
