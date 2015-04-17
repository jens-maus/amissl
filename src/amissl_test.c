#if defined(__amigaos4__)
#define __USE_INLINE__
#endif

#include <proto/exec.h>
#include <proto/amissl.h>
#include <libraries/amissl.h>
#include <stdio.h>

#if defined(__amigaos4__)
#define GETINTERFACE(iface, base)	(iface = (APTR)GetInterface((struct Library *)(base), "main", 1L, NULL))
#define DROPINTERFACE(iface)			(DropInterface((struct Interface *)iface), iface = NULL)
#else
#define GETINTERFACE(iface, base)	TRUE
#define DROPINTERFACE(iface)
#endif

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)
#define LIBNAME "amissl_v" MKSTR(VERSIONNAME) ".library"

int main(void)
{
	struct Library *AmiSSLBase;
  #if defined(__amigaos4__)
  struct AmiSSLIFace *IAmiSSL;
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
	base1 = OpenLibrary(LIBNAME, 0);
	printf("base1 %08lx\n", base1);
	base2 = OpenLibrary(LIBNAME, 0);
	printf("base2 %08lx\n", base2);

	if(base1 != NULL && base2 != NULL &&
     GETINTERFACE(ibase1, base1) &&
     GETINTERFACE(ibase2, base2))
	{
    LONG ret = 0;

		AmiSSLBase = base1;
    #if defined(__amigaos4__)
    IAmiSSL = ibase1;
    #endif
		printf("checking base %08lx...", AmiSSLBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSL);
    #endif
		//ret = InitAmiSSL(TAG_DONE);
		printf(" done: %ld\n", ret);

		AmiSSLBase = base2;
    #if defined(__amigaos4__)
    IAmiSSL = ibase2;
    #endif
		printf("checking base %08lx...", AmiSSLBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSL);
    #endif
		//ret = InitAmiSSL(TAG_DONE);
		printf(" done: %ld\n", ret);

		AmiSSLBase = base1;
    #if defined(__amigaos4__)
    IAmiSSL = ibase1;
    #endif
		printf("checking base %08lx...", AmiSSLBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSL);
    #endif
		//ret = InitAmiSSL(TAG_DONE);
		printf(" done: %ld\n", ret);

		AmiSSLBase = base2;
    #if defined(__amigaos4__)
    IAmiSSL = ibase2;
    #endif
		printf("checking base %08lx...", AmiSSLBase);
    #if defined(__amigaos4__)
		printf(" iface %08lx...", IAmiSSL);
    #endif
		//ret = InitAmiSSL(TAG_DONE);
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
