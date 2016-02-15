#include <stdio.h>
#include <errno.h>
#include <proto/dos.h>
#include <proto/exec.h>
#include <exec/nodes.h>
#include <exec/lists.h>
#include "libcmt.h"
#include <internal/amissl.h>

extern struct MinList __filelist;
extern struct SignalSemaphore __filelist_cs;

int __fflush(FILE *stream) /* fflush exactly one file */
{
	long size,subsize;
	unsigned char *subbuf;
	if(TOFILE(stream)->_flag & _IOERR) /* Error on stream */
	{
		SetAmiSSLerrno(EPERM);
		return EOF;
	}
	if(TOFILE(stream)->_flag&_IOWRT) /* Works only on output streams */
	{
		size=TOFILE(stream)->_wcnt; /* calculate size */
		subbuf=TOFILE(stream)->_base;
		while(size)
		{
			if((subsize=Write(TOFILE(stream)->_file,subbuf,size))<0)
			{
				TOFILE(stream)->_flag|=_IOERR; /* error flag */
				SetAmiSSLerrno(__io2errno(IoErr()));
				return EOF;
			}
			size-=subsize;
			subbuf+=subsize;
		}
		TOFILE(stream)->_wcnt=0;
		TOFILE(stream)->_ptr = TOFILE(stream)->_base;
	} /* Nothing to be done for input streams */
	return 0;
}

int fflush(FILE *stream) /* fflush one or all files */
{
	int retval;
	struct MinNode *node,*nextnode;
	if(TOFILE(stream)!=NULL)
		return __fflush(stream);
	retval=0;
	ObtainSemaphore(&__filelist_cs);
	node=__filelist.mlh_Head;
	while((nextnode=node->mln_Succ)!=NULL)
	{
		if(__fflush((FILE *)&((struct filenode *)node)->FILE))
			retval=EOF;
		node=nextnode;
	}
	ReleaseSemaphore(&__filelist_cs);
	return retval;
}
