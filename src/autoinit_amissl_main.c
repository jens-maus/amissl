#include <proto/exec.h>

#include <exec/types.h>
#include <utility/tagitem.h>
#include <libraries/amisslmaster.h>

#define AMISSLMASTER_VER 3

#ifdef __amigaos4__

#include <interfaces/amisslmaster.h>
#include <interfaces/amissl.h>
#include <assert.h>

__attribute__((weak)) struct AmiSSLIFace * IAmiSSL = NULL;
__attribute__((weak)) struct Library * AmiSSLBase = NULL;
__attribute__((weak)) struct AmiSSLMasterIFace * IAmiSSLMaster = NULL;
__attribute__((weak)) struct Library * AmiSSLMasterBase = NULL;
/****************************************************************************/

void __init_amissl_main(void) __attribute__((constructor));
void __exit_amissl_main(void) __attribute__((destructor));

/****************************************************************************/

void __init_amissl_main(void)
{
    if (AmiSSLMasterBase == NULL) /* Library base is NULL, we need to open it */
    {
        AmiSSLMasterBase = IExec->OpenLibrary("amisslmaster.library", AMISSLMASTER_VER);
        assert(AmiSSLMasterBase != NULL);
    }
    else
    {
    	assert(FALSE); // This case isn't handled properly
    }

    IAmiSSLMaster = (struct AmiSSLMasterIFace *)IExec->GetInterface((struct Library *)AmiSSLMasterBase, "main", 1, NULL);
    assert(IAmiSSLMaster != NULL);
    
    IAmiSSLMaster->InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE);
    AmiSSLBase = IAmiSSLMaster->OpenAmiSSL();
    assert(AmiSSLBase != NULL);
	IAmiSSL = (struct IAmiSSLIFace *)IExec->GetInterface((struct Library *)AmiSSLBase,"main",1,NULL);
    assert(IAmiSSL != NULL);
	IAmiSSL->InitAmiSSL(TAG_DONE); // FIXME Setup socket base here
}

/****************************************************************************/

void __exit_amissl_main(void)
{
	if(AmiSSLMasterBase)
	{
		IAmiSSL->CleanupAmiSSL(TAG_DONE);
		IExec->DropInterface((struct Interface *)IAmiSSL);
		IAmiSSLMaster->CloseAmiSSL();
		IExec->DropInterface((struct Interface *)IAmiSSLMaster);
		IExec->CloseLibrary((struct Library *)AmiSSLMasterBase);
	}
}

/****************************************************************************/

#else /* !__amigaos4__ */

#include <proto/dos.h>
#include <proto/amisslmaster.h>
#include <proto/amissl.h>

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

extern struct Library *SocketBase;
extern struct WBStartup *_WBenchMsg;
extern char __stdiowin[];

struct Library *AmiSSLMasterBase;
struct Library *AmiSSLBase;

static void fail(const char *message)
{
	struct DOSBase *DOSBase;
	BPTR fh;

	if (DOSBase = (struct DOSBase *)OpenLibrary("dos.library", 36))
	{
		if (!_WBenchMsg)
			fh = Output();
		else
			fh = Open(__stdiowin, MODE_NEWFILE);

		if (fh)
		{
			FPrintf(fh, message);

			if (_WBenchMsg)
			{
				Delay(250);
				Close(fh);
			}
		}
	}
}

int __stdargs _STI_250_openamissl(void)
{
	int ret = 1; /* Error */

	if (!(AmiSSLMasterBase = OpenLibrary("amisslmaster.library", AMISSLMASTER_VER)))
		fail("Couldn't open amisslmaster.library v" MKSTR(AMISSLMASTER_VER) "\n");
	else if (!InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE))
		fail("Couldn't initialize amisslmaster.library!\n");
	else if (!(AmiSSLBase = OpenAmiSSL()))
		fail("Couldn't open AmiSSL!\n");
	else if (InitAmiSSL(AmiSSL_SocketBase, SocketBase, TAG_DONE))
		fail("Couldn't initialize AmiSSL!\n");
	else
		ret = 0;

	return(ret);
}

void __stdargs _STD_250_openamissl(void)
{
	if (AmiSSLMasterBase)
	{
		if (AmiSSLBase)
		{
			CleanupAmiSSL(TAG_DONE);
			CloseAmiSSL();
		}

		CloseLibrary(AmiSSLMasterBase);
		AmiSSLMasterBase = NULL;
	}
}

#endif /* __amigaos4__ */
