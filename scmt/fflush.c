#include <stdio.h>
#include <errno.h>
#include <proto/dos.h>
#include <proto/exec.h>
#include <exec/nodes.h>
#include <exec/lists.h>
#include "scmt.h"
#include <internal/amissl.h>

int __fflush(FILE *stream) /* fflush exactly one file */
{
	long size,subsize;
	unsigned char *subbuf;
	if(stream->_flag & _IOERR) /* Error on stream */
	{
		SetAmiSSLerrno(EPERM);
		return EOF;
	}
	if(stream->_flag&_IOWRT) /* Works only on output streams */
	{
		size=stream->_wcnt; /* calculate size */
		subbuf=stream->_base;
		while(size)
		{
			if((subsize=Write(stream->_file,subbuf,size))<0)
			{
				stream->_flag|=_IOERR; /* error flag */
				SetAmiSSLerrno(__io2errno(IoErr()));
				return EOF;
			}
			size-=subsize;
			subbuf+=subsize;
		}
		stream->_wcnt=0;
	} /* Nothing to be done for input streams */
	return 0;
}

int fflush(FILE *stream) /* fflush one or all files */
{
	int retval;
	struct MinNode *node,*nextnode;
	if(stream!=NULL)
		return __fflush(stream);
	retval=0;
	ObtainSemaphore(&FileListLock);
	node=__filelist.mlh_Head;
	while((nextnode=node->mln_Succ)!=NULL)
	{
		if(__fflush(&((struct filenode *)node)->FILE))
			retval=EOF;
		node=nextnode;
	}
	ReleaseSemaphore(&FileListLock);
	return retval;
}
