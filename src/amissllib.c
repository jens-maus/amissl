void __regargs __autoopenfail(char *);

#include <constructor.h>
#include <proto/exec.h> 
#include <proto/amisslmaster.h>
#include <proto/amissl.h>
#include <libraries/amisslmaster.h>

#define AMISSLMASTER_VER 3

struct Library * AmiSSLBase;
struct Library * AmiSSLMasterBase;

static void *libbase1;
static void *libbase2;

CBMLIB_CONSTRUCTOR(openintuit)
{
	AmiSSLMasterBase = libbase1 = OpenLibrary("amisslmaster.library", AMISSLMASTER_VER);
	if(AmiSSLMasterBase == NULL)
	{
		__autoopenfail("amisslmaster.library");
		return 1;
    }

	InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE);
    
    AmiSSLBase = libbase2 = OpenAmiSSL();
	if(AmiSSLBase == NULL)
	{
		__autoopenfail("openamissl");
		return 1;
    }
	InitAmiSSL(TAG_DONE); // FIXME Setup socket base here

	return 0;
}

CBMLIB_DESTRUCTOR(closeintuit)
{
   if (libbase2)
   {
   		CleanupAmiSSL(TAG_DONE);
   		CloseAmiSSL();
		libbase2 = AmiSSLBase = NULL;
   }
   if (libbase1)
   {
      CloseLibrary((struct Library *)libbase1);
      libbase1 = AmiSSLMasterBase = NULL;
   }
}
