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

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

static struct Library *_AmiSSLBase = NULL;
static struct Library *_AmiSSLMasterBase = NULL;
static struct Library *_SocketBase = NULL;

#if defined(__amigaos4__)
static struct AmiSSLIFace *iamissl = NULL;
static struct AmiSSLMasterIFace *iamisslmaster = NULL;
static struct SocketIFace *isocket = NULL;
#endif

void __init_amissl_main(void)
{
	#if defined(__amigaos4__)
	if (!ISocket)
	#endif
	{
		if (!(_SocketBase = OpenLibrary("bsdsocket.library", 4)))
			fatal_error("Couldn't open bsdsocket.library v4!\n");

		#if defined(__amigaos4__)
		if (!(isocket = ISocket = (struct SocketIFace *)GetInterface((struct Library *)_SocketBase, "main", 1, NULL)))
			fatal_error("Couldn't obtain socket interface\n");
		#endif
	}

	#if defined(__amigaos4__)
	if (!IAmiSSLMaster)
	#endif
	{
		if (!(_AmiSSLMasterBase = OpenLibrary("amisslmaster.library",
		                                             AMISSLMASTER_MIN_VERSION)))
			fatal_error("Couldn't open amisslmaster.library v" MKSTR(AMISSLMASTER_MIN_VERSION) "\n");

		#if defined(__amigaos4__)
		if (!(iamisslmaster = IAmiSSLMaster = (struct AmiSSLMasterIFace *)GetInterface((struct Library *)_AmiSSLMasterBase, "main", 1, NULL)))
			fatal_error("Couldn't obtain amisslmaster interface\n");

		if (!IAmiSSLMaster->InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE))
			fatal_error("Couldn't initialize amisslmaster.library!\n");
		#else
		if (!InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE))
			fatal_error("Couldn't initialize amisslmaster.library!\n");
		#endif
	}

	#if defined(__amigaos4__)
	if (!IAmiSSL)
	#endif
	{
		#if defined(__amigaos4__)
		if (!(_AmiSSLBase = IAmiSSLMaster->OpenAmiSSL()))
			fatal_error("Couldn't open AmiSSL!\n");

		if (!(iamissl = IAmiSSL = (struct AmiSSLIFace *)GetInterface((struct Library *)_AmiSSLBase, "main", 1, NULL)))
			fatal_error("Couldn't obtain amissl interface\n");

		if(InitAmiSSL(AmiSSL_ErrNoPtr, &errno,
		                        AmiSSL_ISocketPtr, &ISocket,
		                        TAG_DONE))
			fatal_error("Couldn't initialize AmiSSL!\n");
		#else
		if (!(_AmiSSLBase = OpenAmiSSL()))
			fatal_error("Couldn't open AmiSSL!\n");

		if(InitAmiSSL(AmiSSL_ErrNoPtr, &errno,
		                        AmiSSL_SocketBase, &_SocketBase,
		                        TAG_DONE))
			fatal_error("Couldn't initialize AmiSSL!\n");
		#endif
	}
}

/****************************************************************************/

void __exit_amissl_main(void)
{
	if (_AmiSSLBase)
	{
		#if defined(__amigaos4__)
		if (iamissl && IAmiSSL)
		{
			CleanupAmiSSL(TAG_DONE);
			DropInterface((struct Interface *)IAmiSSL);

			iamissl = IAmiSSL = NULL;
		}

		if (IAmiSSLMaster)
			IAmiSSLMaster->CloseAmiSSL();
		#else
		CleanupAmiSSL(TAG_DONE);
		CloseAmiSSL();
		#endif

		_AmiSSLBase = NULL;
	}

	if (_AmiSSLMasterBase)
	{
		#if defined(__amigaos4__)
		if (iamisslmaster && IAmiSSLMaster)
		{
			DropInterface((struct Interface *)IAmiSSLMaster);
			iamisslmaster = IAmiSSLMaster = NULL;
		}
		#endif

		CloseLibrary((struct Library *)_AmiSSLMasterBase);
		_AmiSSLMasterBase = NULL;
	}

	if (_SocketBase)
	{
		#if defined(__amigaos4__)
		if (isocket && ISocket)
		{
			DropInterface((struct Interface *)ISocket);
			isocket = ISocket = NULL;
		}
		#endif

		CloseLibrary((struct Library *)_SocketBase);
		_SocketBase = NULL;
	}
}

/****************************************************************************/
