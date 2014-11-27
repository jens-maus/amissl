#include <proto/exec.h>
#include <proto/amisslmaster.h>
#include <libraries/amisslmaster.h>
#include <stdio.h>

int main(void)
{
	struct Library *AmiSSLMasterBase;

#if 1
{
	printf("single base test\n");
	AmiSSLMasterBase = OpenLibrary("amisslmaster.library", 0);
	printf("base %08lx\n", AmiSSLMasterBase);
	if(AmiSSLMasterBase != NULL)
	{
		printf("checking base %08lx...", AmiSSLMasterBase);
		InitAmiSSLMaster(AMISSL_V097g, TRUE);
		printf(" done\n");
		CloseLibrary(AmiSSLMasterBase);
	}
	printf("single base test finished\n");
}
#endif

#if 1
{
	struct Library *base1;
	struct Library *base2;

	printf("multi base test\n");
	base1 = OpenLibrary("amisslmaster.library", 0);
	printf("base1 %08lx\n", base1);
	base2 = OpenLibrary("amisslmaster.library", 0);
	printf("base2 %08lx\n", base2);

	if(base1 != NULL && base2 != NULL)
	{
		AmiSSLMasterBase = base1;
		printf("checking base %08lx...", AmiSSLMasterBase);
		InitAmiSSLMaster(AMISSL_V097g, TRUE);
		printf(" done\n");

		AmiSSLMasterBase = base2;
		printf("checking base %08lx...", AmiSSLMasterBase);
		InitAmiSSLMaster(AMISSL_V2, FALSE);
		printf(" done\n");

		AmiSSLMasterBase = base1;
		printf("checking base %08lx...", AmiSSLMasterBase);
		InitAmiSSLMaster(AMISSL_V097g, TRUE);
		printf(" done\n");

		AmiSSLMasterBase = base2;
		printf("checking base %08lx...", AmiSSLMasterBase);
		InitAmiSSLMaster(AMISSL_V2, FALSE);
		printf(" done\n");
	}

	if(base1 != NULL)
		CloseLibrary(base1);

	if(base2 != NULL)
		CloseLibrary(base2);
	printf("multi base test finished\n");
}
#endif

	return 0;
}
