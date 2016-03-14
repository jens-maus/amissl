#if defined(__amigaos4__)
#define __USE_INLINE__
#endif

#include <proto/exec.h>
#include <proto/amissl.h>
#include <proto/amisslmaster.h>
#include <libraries/amissl.h>
#include <libraries/amisslmaster.h>
#include <stdio.h>

#if defined(__amigaos4__)
#define GETINTERFACE(iface, base)	(iface = (APTR)GetInterface((struct Library *)(base), "main", 1L, NULL))
#define DROPINTERFACE(iface)			(DropInterface((struct Interface *)iface), iface = NULL)
#define kprintf (IExec->DebugPrintF)
#else
#define GETINTERFACE(iface, base)	TRUE
#define DROPINTERFACE(iface)
#endif

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)
#define LIBNAME "AmiSSL/amissl_v" MKSTR(VERSIONNAME) ".library"
#define AMISSL_CURRENT_VERSION   AMISSL_V11x

int main(void)
{
	struct Library *AmiSSLBase;
  struct Library *AmiSSLMasterBase;
  #if defined(__amigaos4__)
  struct AmiSSLIFace *IAmiSSL;
  struct AmiSSLMasterIFace *IAmiSSLMaster;
  #endif

#if 1
{
	printf("single base test\n");
	AmiSSLBase = OpenLibrary(LIBNAME, 0);
	printf("base %08lx\n", AmiSSLBase);
	if(AmiSSLBase != NULL &&
     GETINTERFACE(IAmiSSL, AmiSSLBase))
	{
		printf("checking base %08lx...", AmiSSLBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSL);
    #endif
		InitAmiSSL(NULL);
		CleanupAmiSSL(TAG_DONE);
		printf(" done\n");
    DROPINTERFACE(IAmiSSL);
		CloseLibrary(AmiSSLBase);
	}
	printf("single base test finished\n");
}
#endif

#if 1
{
	struct Library *base1;
	struct Library *base2;
  #if defined(__amigaos4__)
  struct AmiSSLIFace *ibase1;
  struct AmiSSLIFace *ibase2;
  #endif

	printf("multi base test\n");

	kprintf("########################\n");
	kprintf("OpenLibrary(base1)\n");
	base1 = OpenLibrary(LIBNAME, 0);
	printf("base1 %08lx\n", base1);
	kprintf("# done #################\n");

	kprintf("########################\n");
	kprintf("OpenLibrary(base2)\n");
	base2 = OpenLibrary(LIBNAME, 0);
	printf("base2 %08lx\n", base2);
	kprintf("# done #################\n");

	if(base1 != NULL && base2 != NULL &&
     GETINTERFACE(ibase1, base1) &&
     GETINTERFACE(ibase2, base2))
	{
    LONG ret = 0;

		AmiSSLBase = base1;
    #if defined(__amigaos4__)
    IAmiSSL = ibase1;
    #endif
		kprintf("########################\n");
		kprintf("checking base1 %08lx\n", AmiSSLBase);
		printf("checking base1 %08lx...", AmiSSLBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSL);
    #endif
		ret = InitAmiSSL(TAG_DONE);
		printf(" done: %ld\n", ret);
		CleanupAmiSSL(TAG_DONE);
		kprintf("# done #################\n");

		AmiSSLBase = base2;
    #if defined(__amigaos4__)
    IAmiSSL = ibase2;
    #endif
		kprintf("########################\n");
		kprintf("checking base2 %08lx\n", AmiSSLBase);
		printf("checking base2 %08lx...", AmiSSLBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSL);
    #endif
		ret = InitAmiSSL(TAG_DONE);
		printf(" done: %ld\n", ret);
		CleanupAmiSSL(TAG_DONE);
		kprintf("# done #################\n");

		AmiSSLBase = base1;
    #if defined(__amigaos4__)
    IAmiSSL = ibase1;
    #endif
		kprintf("########################\n");
		kprintf("checking base1 %08lx\n", AmiSSLBase);
		printf("checking base1 %08lx...", AmiSSLBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSL);
    #endif
		ret = InitAmiSSL(TAG_DONE);
		printf(" done: %ld\n", ret);
		CleanupAmiSSL(TAG_DONE);
		kprintf("# done #################\n");

		AmiSSLBase = base2;
    #if defined(__amigaos4__)
    IAmiSSL = ibase2;
    #endif
		kprintf("########################\n");
		kprintf("checking base2 %08lx\n", AmiSSLBase);
		printf("checking base2 %08lx...", AmiSSLBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSL);
    #endif
		ret = InitAmiSSL(TAG_DONE);
		printf(" done: %ld\n", ret);
		CleanupAmiSSL(TAG_DONE);
		kprintf("# done #################\n");
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

// lets perform a full-fledged amissl test case
#if 1
{
  printf("\ncomplex amissl test\n");
  if((AmiSSLMasterBase = OpenLibrary("amisslmaster.library", 0)) != NULL &&
     GETINTERFACE(IAmiSSLMaster, AmiSSLMasterBase))
  {
    printf("amisslmaster.library opened: %08lx\n", AmiSSLMasterBase);

    if(InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE))
    {
      printf("amisslmaster.library initialized\n");

      if((AmiSSLBase = OpenAmiSSL()) != NULL &&
         GETINTERFACE(IAmiSSL, AmiSSLBase))
      {
        char tmp[24+1];

        printf("successfully opened AmiSSL library %d.%d (%s): %08lx\n", AmiSSLBase->lib_Version, AmiSSLBase->lib_Revision, AmiSSLBase->lib_IdString, AmiSSLBase);

        // initialize AmiSSL/OpenSSL related stuff
        printf("initializing internal OpenSSL strings:\n");
        ERR_load_BIO_strings();
        printf("ERR_load_BIO_string() done.\n");
        SSL_load_error_strings();
        printf("SSL_load_error_strings() done.\n");
        OpenSSL_add_all_algorithms();
        printf("OpenSSL_add_all_algorithms() done.\n");
        SSL_library_init();
        printf("SSL_library_init() done.\n");

        // seed the random number generator with some valuable entropy
        snprintf(tmp, sizeof(tmp), "%08lx%08lx%08lx", (unsigned long)time((time_t *)NULL), (unsigned long)FindTask(NULL), (unsigned long)rand());
        printf("about to seed random number generator\n");
        RAND_seed(tmp, strlen(tmp));
        printf("RAND_seed() done!\n");

        // cleanup
        printf("starting cleanup\n");
        CleanupAmiSSLA(NULL);
        printf("CleanupAmiSSLA() done!\n");
        DROPINTERFACE(IAmiSSL);
        CloseAmiSSL();
        printf("CloseAmiSSL() done!\n");
        AmiSSLBase = NULL;
      }
    }

    printf("About to close amisslmaster.library\n");
    DROPINTERFACE(IAmiSSLMaster);
    CloseLibrary(AmiSSLMasterBase);
    printf("done.\n");
    AmiSSLMasterBase = NULL;
  }
}
#endif

	return 0;
}
