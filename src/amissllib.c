#include <proto/exec.h> 
#include <proto/dos.h>
#include <proto/amisslmaster.h>
#include <proto/amissl.h>
#include <libraries/amisslmaster.h>

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

extern struct WBStartup *_WBenchMsg;
extern char __stdiowin[];

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

extern struct Library *SocketBase;
struct Library * AmiSSLBase;
struct Library * AmiSSLMasterBase;

static void *libbase1;
static void *libbase2;

int __stdargs _STI_250_openamissl(void)
{
	int ret = 1; /* Error */

	if (!(libbase1 = AmiSSLMasterBase = OpenLibrary("amisslmaster.library", VERSION)))
		fail("Couldn't open amisslmaster.library v" MKSTR(VERSION) "\n");
	else if (!InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE))
		fail("Couldn't initialize amisslmaster.library!\n");
	else if (!(libbase2 = AmiSSLBase = OpenAmiSSL()))
		fail("Couldn't open AmiSSL!\n");
	else if (InitAmiSSL(AmiSSL_SocketBase, SocketBase, TAG_DONE))
		fail("Couldn't initialize AmiSSL!\n");
	else
		ret = 0;

	return(ret);
}

void __stdargs _STD_250_openamissl(void)
{
	if (libbase2)
	{
		CleanupAmiSSL(TAG_DONE);
		CloseAmiSSL();
		libbase2 = AmiSSLBase = NULL;
	}

	if (libbase1)
	{
		CloseLibrary(libbase1);
		libbase1 = AmiSSLMasterBase = NULL;
	}
}
