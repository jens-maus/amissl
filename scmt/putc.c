#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <exec/types.h>
#include <proto/dos.h>
#include "scmt.h"
#include <internal/amissl.h>

int putc(int ch, FILE *stream)
{
	if(stream->_wcnt>=stream->_size)
	{
		if(fflush(stream)==-1)
			return -1;
	}
	if(stream->_wcnt<stream->_size)
	{
		*stream->_ptr++ = ch;
		stream->_wcnt++;
	}
	else
	{
		if(Write(stream->_file,&ch,1)==-1)
		{
			SetAmiSSLerrno(__io2errno(IoErr()));
			return EOF;
		}
	}
	return ch;
}
