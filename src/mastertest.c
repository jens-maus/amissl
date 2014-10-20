#include <proto/exec.h>
#include <proto/amisslmaster.h>
#include <libraries/amisslmaster.h>
#include <stdio.h>

int main(void)
{
	struct Library *AmiSSLMasterBase;

#if 0
	struct Library *base1;
	struct Library *base2;

	base1 = OpenLibrary("amisslmaster.library", 0);
	base2 = OpenLibrary("amisslmaster.library", 0);

	if(base1 != NULL && base2 != NULL)
	{
		AmiSSLMasterBase = base1;
		printf("checking base %08lx...", AmiSSLMasterBase); kprintf("checking base %08lx...\n", AmiSSLMasterBase);
		InitAmiSSLMaster(AMISSL_V097g, TRUE); kprintf(" done\n");
		printf(" done\n");

		AmiSSLMasterBase = base2;
		printf("checking base %08lx...", AmiSSLMasterBase); kprintf("checking base %08lx...\n", AmiSSLMasterBase);
		InitAmiSSLMaster(AMISSL_V2, TRUE); kprintf(" done\n");
		printf(" done\n");
	}

	if(base1 != NULL)
		CloseLibrary(base1);

	if(base2 != NULL)
		CloseLibrary(base2);
#endif

#if 1
	if((AmiSSLMasterBase = OpenLibrary("amisslmaster.library", 0)) != NULL)
	{
		printf("checking base %08lx...", AmiSSLMasterBase); kprintf("checking base %08lx...\n", AmiSSLMasterBase);
		InitAmiSSLMaster(AMISSL_V097g, TRUE);
		printf(" done\n"); kprintf(" done\n");
		CloseLibrary(AmiSSLMasterBase);
	}
#endif

	return 0;
}
