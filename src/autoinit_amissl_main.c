#include <proto/exec.h>
#include <proto/dos.h>

#include <exec/types.h>
#include <dos/dos.h>
#include <utility/tagitem.h>
#include <libraries/amisslmaster.h>

#include <interfaces/amisslmaster.h>
#include <interfaces/amissl.h>

/****************************************************************************/

__attribute__((weak)) struct AmiSSLIFace * IAmiSSL = NULL;
__attribute__((weak)) struct AmiSSLMasterIFace * IAmiSSLMaster = NULL;

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

/* No need to expose these to the outside world since they are
 * used only to obtain the interfaces.
 */
static struct Library *AmiSSLBase, *AmiSSLMasterBase;

static struct AmiSSLIFace *iamissl;
static struct AmiSSLMasterIFace *iamisslmaster;

void __init_amissl_main(void)
{
	if (!IAmiSSLMaster)
	{
		if (!(AmiSSLMasterBase = IExec->OpenLibrary("amisslmaster.library", VERSION)))
			fatal_error("Couldn't open amisslmaster.library v" MKSTR(VERSION) "\n");

		if (!(iamisslmaster = IAmiSSLMaster = (struct AmiSSLMasterIFace *)IExec->GetInterface((struct Library *)AmiSSLMasterBase, "main", 1, NULL)))
			fatal_error("Couldn't obtain amisslmaster interface\n");

		if (!IAmiSSLMaster->InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE))
			fatal_error("Couldn't initialize amisslmaster.library!\n");
	}

	if (!IAmiSSL)
	{
		if (!(AmiSSLBase = IAmiSSLMaster->OpenAmiSSL()))
			fatal_error("Couldn't open AmiSSL!\n");

		if (!(iamissl = IAmiSSL = (struct IAmiSSLIFace *)IExec->GetInterface((struct Library *)AmiSSLBase, "main", 1, NULL)))
			fatal_error("Couldn't obtain amissl interface\n");

		if (IAmiSSL->InitAmiSSL(TAG_DONE)) // FIXME Setup socket base here
			fatal_error("Couldn't initialize AmiSSL!\n");
	}
}

/****************************************************************************/

void __exit_amissl_main(void)
{
	if (iamissl)
	{
		IAmiSSL->CleanupAmiSSL(TAG_DONE);
		IExec->DropInterface((struct Interface *)IAmiSSL);
		IAmiSSLMaster->CloseAmiSSL();

		iamissl = IAmiSSL = NULL;
	}

	if (iamisslmaster)
	{
		IExec->DropInterface((struct Interface *)IAmiSSLMaster);
		IExec->CloseLibrary((struct Library *)AmiSSLMasterBase);
		iamisslmaster = IAmiSSLMaster = NULL;
	}
}

/****************************************************************************/
