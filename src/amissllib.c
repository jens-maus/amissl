#include <proto/exec.h> 
#include <proto/dos.h>
#include <proto/amisslmaster.h>
#include <proto/amissl.h>
#include <libraries/amisslmaster.h>
#include <libraries/amissl.h>

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

static void report_error(const char *message)
{
	struct DOSBase *DOSBase;
	BPTR fh;

	if (DOSBase = (struct DOSBase *)OpenLibrary("dos.library", 36))
	{
		struct Process *proc = (struct Process *)FindTask(NULL);
		BOOL from_wb = proc->pr_CLI == NULL;

		if (!from_wb)
			fh = proc->pr_CES ? proc->pr_CES : Output();
		else
			fh = Open("CON://///AUTO/CLOSE/WAIT", MODE_NEWFILE);

		if (fh)
		{
			FPrintf(fh, message);

			if (from_wb)
				Close(fh);
		}

		CloseLibrary((struct Library *)DOSBase);
	}
}

extern struct Library *SocketBase;

struct Library *AmiSSLMasterBase, *AmiSSLBase;
static struct Library *amisslmaster_base, *amissl_base;

int __stdargs _STI_250_openamissl(void)
{
	int ret = 0; /* No error */

	if (!AmiSSLMasterBase)
	{
		if (!(amisslmaster_base = AmiSSLMasterBase = OpenLibrary("amisslmaster.library", AMISSLMASTER_MIN_VERSION)))
		{
			report_error("Couldn't open amisslmaster.library v" MKSTR(AMISSLMASTER_MIN_VERSION) "\n");
			ret = 1;
		}
		else if (!InitAmiSSLMaster(AMISSL_CURRENT_VERSION, TRUE))
		{
			report_error("Couldn't initialize amisslmaster.library!\n");
			ret = 1;
		}
	}

	if (ret == 0 && !AmiSSLBase)
	{
		if (!(amissl_base = AmiSSLBase = OpenAmiSSL()))
		{
			report_error("Couldn't open AmiSSL!\n");
			ret = 1;
		}
		else if (InitAmiSSL(AmiSSL_SocketBase, SocketBase, TAG_DONE))
		{
			report_error("Couldn't initialize AmiSSL!\n");
			ret = 1;
		}
	}

	return(ret);
}

void __stdargs _STD_250_openamissl(void)
{
	if (amissl_base)
	{
		CleanupAmiSSL(TAG_DONE);
		CloseAmiSSL();
		amissl_base = AmiSSLBase = NULL;
	}

	if (amisslmaster_base)
	{
		CloseLibrary(amisslmaster_base);
		amisslmaster_base = AmiSSLMasterBase = NULL;
	}
}
