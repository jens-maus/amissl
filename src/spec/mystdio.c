#define __USE_SYSBASE	1
#include <proto/exec.h>
#include <proto/dos.h>
#include <dos/dosextens.h>

BPTR mystdin(void)
{
	BPTR CIS = ((struct Process *)FindTask(NULL))->pr_CIS;

	Flush(CIS);
	return(CIS);
}

BPTR mystdout(void)
{
	BPTR COS = ((struct Process *)FindTask(NULL))->pr_COS;

	Flush(COS);
	return(COS);
}

BPTR mystderr(void)
{
	struct Process *proc = (struct Process *)FindTask(NULL);
	BPTR CES = proc->pr_CES ? proc->pr_CES : proc->pr_COS;

	Flush(CES);
	return(CES);
}
