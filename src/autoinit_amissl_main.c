#include <proto/exec.h>

#include <exec/types.h>
#include <utility/tagitem.h>
#include <libraries/amisslmaster.h>

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
        AmiSSLMasterBase = IExec->OpenLibrary("amisslmaster.library", VERSION);
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
