#include <proto/exec.h>
#include <proto/dos.h>

#include <exec/types.h>
#include <dos/dos.h>
#include <utility/tagitem.h>
#include <libraries/amisslmaster.h>
#include <libraries/amissl.h>

#include <interfaces/amisslmaster.h>
#include <interfaces/amissl.h>

/****************************************************************************/

__attribute__((weak)) struct AmiSSLIFace * IAmiSSL = NULL;
__attribute__((weak)) struct AmiSSLMasterIFace * IAmiSSLMaster = NULL;
__attribute__((weak)) struct SocketIFace * ISocket = NULL;

void __init_amissl_main(void) __attribute__((constructor));
void __exit_amissl_main(void) __attribute__((destructor));

/****************************************************************************/

static void fatal_error(const char *message)
{
	BOOL from_wb = ((struct Process *)IExec->FindTask(NULL))->pr_CLI == 0;
	BPTR fh;

	if (!from_wb)
		fh = IDOS->ErrorOutput() ? IDOS->ErrorOutput() : IDOS->Output();
	else
		fh = IDOS->Open("CON://///AUTO/CLOSE/WAIT", MODE_NEWFILE);

	if (fh)
	{
		IDOS->FPrintf(fh, (char *)message);

		if (from_wb)
			IDOS->Close(fh);
	}

	exit(RETURN_FAIL);
}

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

static struct Library *_AmiSSLBase, *_AmiSSLMasterBase, *_SocketBase;

static struct AmiSSLIFace *iamissl;
static struct AmiSSLMasterIFace *iamisslmaster;
static struct SocketIFace *isocket;

void __init_amissl_main(void)
{
	if (!ISocket)
	{
		if (!(_SocketBase = IExec->OpenLibrary("bsdsocket.library", 4)))
			fatal_error("Couldn't open bsdsocket.library v4!\n");

		if (!(isocket = ISocket = (struct ISocket *)IExec->GetInterface((struct Library *)_SocketBase, "main", 1, NULL)))
			fatal_error("Couldn't obtain socket interface\n");
	}

	if (!IAmiSSLMaster)
	{
		if (!(_AmiSSLMasterBase = IExec->OpenLibrary("amisslmaster.library",
		                                             AMISSLMASTER_MIN_VERSION)))
			fatal_error("Couldn't open amisslmaster.library v" MKSTR(AMISSLMASTER_MIN_VERSION) "\n");

		if (!(iamisslmaster = IAmiSSLMaster = (struct AmiSSLMasterIFace *)IExec->GetInterface((struct Library *)_AmiSSLMasterBase, "main", 1, NULL)))
			fatal_error("Couldn't obtain amisslmaster interface\n");

		if (!IAmiSSLMaster->InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE))
			fatal_error("Couldn't initialize amisslmaster.library!\n");
	}

	if (!IAmiSSL)
	{
		if (!(_AmiSSLBase = IAmiSSLMaster->OpenAmiSSL()))
			fatal_error("Couldn't open AmiSSL!\n");

		if (!(iamissl = IAmiSSL = (struct IAmiSSLIFace *)IExec->GetInterface((struct Library *)_AmiSSLBase, "main", 1, NULL)))
			fatal_error("Couldn't obtain amissl interface\n");

		if (IAmiSSL->InitAmiSSL(AmiSSL_ISocketPtr, &ISocket, TAG_DONE))
			fatal_error("Couldn't initialize AmiSSL!\n");
	}
}

/****************************************************************************/

void __exit_amissl_main(void)
{
	if (_AmiSSLBase)
	{
		if (iamissl && IAmiSSL)
		{
			IAmiSSL->CleanupAmiSSL(TAG_DONE);
			IExec->DropInterface((struct Interface *)IAmiSSL);

			iamissl = IAmiSSL = NULL;
		}

		if (IAmiSSLMaster)
			IAmiSSLMaster->CloseAmiSSL();

		_AmiSSLBase = NULL;
	}

	if (_AmiSSLMasterBase)
	{
		if (iamisslmaster && IAmiSSLMaster)
		{
			IExec->DropInterface((struct Interface *)IAmiSSLMaster);
			iamisslmaster = IAmiSSLMaster = NULL;
		}

		IExec->CloseLibrary((struct Library *)_AmiSSLMasterBase);
		_AmiSSLMasterBase = NULL;
	}

	if (_SocketBase)
	{
		if (isocket && ISocket)
		{
			IExec->DropInterface((struct Interface *)ISocket);
			isocket = ISocket = NULL;
		}

		IExec->CloseLibrary((struct Library *)_SocketBase);
		_SocketBase = NULL;
	}
}

/****************************************************************************/
