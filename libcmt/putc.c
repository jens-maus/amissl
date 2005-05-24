#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <exec/types.h>
#include <proto/dos.h>
#include "libcmt.h"
#include <internal/amissl.h>

#undef putc

int putc(int ch, FILE *stream)
{
	if(TOFILE(stream)->_wcnt>=TOFILE(stream)->_size)
	{
		if(fflush((FILE *)TOFILE(stream))==-1)
			return -1;
	}
	if(TOFILE(stream)->_wcnt<TOFILE(stream)->_size)
	{
		*TOFILE(stream)->_ptr++ = ch;
		TOFILE(stream)->_wcnt++;
	}
	else
	{
		if(Write(TOFILE(stream)->_file,&ch,1)==-1)
		{
			SetAmiSSLerrno(__io2errno(IoErr()));
			return EOF;
		}
	}
	return ch;
}
