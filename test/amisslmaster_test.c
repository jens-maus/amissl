#include <proto/exec.h>
#include <proto/amisslmaster.h>
#include <libraries/amisslmaster.h>
#include <stdio.h>

#if defined(__amigaos4__)
#define GETINTERFACE(iface, base)	(iface = (APTR)GetInterface((struct Library *)(base), "main", 1L, NULL))
#define DROPINTERFACE(iface)			(DropInterface((struct Interface *)iface), iface = NULL)
#else
#define GETINTERFACE(iface, base)	TRUE
#define DROPINTERFACE(iface)
#endif

struct Library *AmiSSLMasterBase = NULL;
#if defined(__amigaos4__)
struct AmiSSLMasterIFace *IAmiSSLMaster = NULL;
#endif

int main(void)
{
#if 1
{
	printf("single base test\n");
	AmiSSLMasterBase = OpenLibrary("amisslmaster.library", 0);
	printf("base %08lx\n", AmiSSLMasterBase);
	if(AmiSSLMasterBase != NULL &&
     GETINTERFACE(IAmiSSLMaster, AmiSSLMasterBase))
	{
		printf("checking base %08lx...", AmiSSLMasterBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSLMaster);
    #endif
		InitAmiSSLMaster(AMISSL_V097g, TRUE);
		printf(" done\n");
    DROPINTERFACE(IAmiSSLMaster);
		CloseLibrary(AmiSSLMasterBase);
	}
	printf("single base test finished\n");
}
#endif

#if 1
{
	struct Library *base1;
	struct Library *base2;
  #if defined(__amigaos4__)
  struct AmiSSLMasterIFace *ibase1 = NULL;
  struct AmiSSLMasterIFace *ibase2 = NULL;
  #endif

	printf("multi base test\n");
	base1 = OpenLibrary("amisslmaster.library", 0);
	printf("base1 %08lx\n", base1);
	base2 = OpenLibrary("amisslmaster.library", 0);
	printf("base2 %08lx\n", base2);

	if(base1 != NULL && base2 != NULL &&
     GETINTERFACE(ibase1, base1) &&
     GETINTERFACE(ibase2, base2))
	{
    LONG ret = 0;

		AmiSSLMasterBase = base1;
    #if defined(__amigaos4__)
    IAmiSSLMaster = ibase1;
    #endif
		printf("checking base %08lx...", AmiSSLMasterBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSLMaster);
    #endif
		ret = InitAmiSSLMaster(AMISSL_V097g, TRUE);
		printf(" done: %ld\n", ret);

		AmiSSLMasterBase = base2;
    #if defined(__amigaos4__)
    IAmiSSLMaster = ibase2;
    #endif
		printf("checking base %08lx...", AmiSSLMasterBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSLMaster);
    #endif
		ret = InitAmiSSLMaster(AMISSL_V2, FALSE);
		printf(" done: %ld\n", ret);

		AmiSSLMasterBase = base1;
    #if defined(__amigaos4__)
    IAmiSSLMaster = ibase1;
    #endif
		printf("checking base %08lx...", AmiSSLMasterBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSLMaster);
    #endif
		ret = InitAmiSSLMaster(AMISSL_V097g, TRUE);
		printf(" done: %ld\n", ret);

		AmiSSLMasterBase = base2;
    #if defined(__amigaos4__)
    IAmiSSLMaster = ibase2;
    #endif
		printf("checking base %08lx...", AmiSSLMasterBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSLMaster);
    #endif
		ret = InitAmiSSLMaster(AMISSL_V10x, FALSE);
		printf(" done: %ld\n", ret);
	}

	if(base1 != NULL)
  {
    DROPINTERFACE(ibase1);
		CloseLibrary(base1);
  }

	if(base2 != NULL)
  {
    DROPINTERFACE(ibase2);
		CloseLibrary(base2);
  }
	printf("multi base test finished\n");
}
#endif

	return 0;
}
