#include <dos/dos.h>
#include <proto/dos.h>
#include <proto/exec.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <errno.h>
#include <internal/amissl.h>
#include "libcmt.h"

struct MinList __filelist; /* list of open files (fflush() needs also access) */
struct SignalSemaphore FileListLock;

void __init_libcmt_file(void) __attribute__((constructor));

FILE *freopen(const char *filename,const char *mode,FILE *stream)
{
	int error;
	error=fflush(stream);
#if 0
	if(stream->file>2)
	{
		Close(stream->_file);
		if(stream->name!=NULL) /* file is temporary */
		{
			BPTR cd;
			cd=CurrentDir(stream->tmpdir); /* cd t: */
			if(!DeleteFile(stream->name))	/* delete file */
			{
				SetAmiSSLerrno(__io2errno(IoErr()));
				error=1;
			}
			free(stream->name); /* free filename */
			stream->name=NULL;
			UnLock(CurrentDir(cd)); /* cd back, unlock t: */
		}
		stream->file=0l;
	}
	if(error)
		return NULL;
#endif

	if(filename!=NULL)
	{
		long file;
		long flags=MODE_OLDFILE;
		int append=0,plus=1;
		if(mode!=NULL)
		{
			switch(mode[0])
			{
				case 'r':
					TOFILE(stream)->_flag |= _IOREAD;
					break;
				case 'w':
					flags=MODE_NEWFILE;
					TOFILE(stream)->_flag |= _IOWRT;
					break;
				case 'a':
					flags=MODE_READWRITE;
					TOFILE(stream)->_flag |= _IOWRT;
					append=1;
					break;
				default:
					return NULL;
			}
			if(mode[1]=='b')
				plus=2;
			switch(mode[plus])
			{
				case '+':
					if(mode[plus+1])
						return NULL; // TOFILE(stream)->_flag |= _IORW;
					break;
				case '\0':
					break;
				default:
					return NULL;
			}
		}

		if((file=Open((char *)filename,flags))<0)
		{
			SetAmiSSLerrno(__io2errno(IoErr()));
			return NULL;
		}

#ifdef __amigaos4__
		if(append && !ChangeFilePosition(file,0,SEEK_END))
#else
		if(append && Seek(file,0,SEEK_END)<0)
#endif
		{
			SetAmiSSLerrno(__io2errno(IoErr()));
			return NULL;
		}

		TOFILE(stream)->_flag &= ~(_IOLBF);
		if(IsInteractive(file))
			TOFILE(stream)->_flag |= _IOLBF; /* set linebuffered flag */

		TOFILE(stream)->_file=file;
	}

	return stream;
}

void __init_libcmt_file(void)
{
  kprintf("%s:%ld\n", __FUNCTION__, __LINE__);
  kprintf("%08lx %08lx\n", &__filelist, &FileListLock);
	NewList((struct List *)&__filelist);
	InitSemaphore(&FileListLock);
}

FILE *fopen(const char *name, const char *mode)
{
	struct filenode *node;
	if((node=(struct filenode *)malloc(sizeof(struct filenode)))!=NULL)
	{
		memset(node,0,sizeof(struct filenode));
		if((node->FILE._base=(char *)malloc(BUFSIZ))!=NULL)
		{
			node->FILE._size=BUFSIZ;
			node->FILE._ptr = node->FILE._base;
			/* FIXME: what is this for? 0x80 is _IORW, nothing related to malloc */
			/* node->FILE._flag|=0x80; *//* Buffer is malloc'ed */
			node->FILE._flag |= _IOALLOCBUF;
			if(freopen(name,mode,(FILE *)&node->FILE)!=NULL)
			{
				ObtainSemaphore(&FileListLock);
				AddHead((struct List *)&__filelist,(struct Node *)&node->node);
				ReleaseSemaphore(&FileListLock);
				return (FILE *)&node->FILE;
			}
			free(node->FILE._base);
		}
		else
		{
			SetAmiSSLerrno(ENOMEM);
		}
		free(node);
	}
	else
	{
		SetAmiSSLerrno(ENOMEM);
	}
	return NULL;
}

int fclose(FILE *file)
{
	struct filenode *node;
	fflush(file);

	node = (struct filenode *)(((BYTE *)file)-offsetof(struct filenode,FILE));

	ObtainSemaphore(&FileListLock);
	Remove((struct Node *)node);
	ReleaseSemaphore(&FileListLock);

	Close(TOFILE(file)->_file);

	if (TOFILE(file)->_flag & _IOALLOCBUF)
		free(TOFILE(file)->_base);

	free(node);
	return 0;
}

int fseek(FILE *file, LONG pos, int mode)
{
#ifdef __amigaos4__
	int res = -1;
	int64 res64;
	fflush(file);
	res64 = GetFilePosition(TOFILE(file)->_file);
	if((res64!=-1LL) && ChangeFilePosition(TOFILE(file)->_file, (int64)pos, mode))
	{
		res = (int)res64;
	}
#else
	int res;
	fflush(file);
	res = Seek(TOFILE(file)->_file, pos, mode);
#endif
	if(res==-1)
	{
		SetAmiSSLerrno(__io2errno(IoErr()));
	}
	return res;
}

/* Only used by the (currently) unsupported FD interface */

int open(UNUSED const char *path_name, UNUSED int open_flag, ... /* mode_t mode */ )
{
	return(-1);
}

int close(UNUSED int fd)
{
	SetAmiSSLerrno(EINVAL);

	return(-1);
}

off_t lseek(UNUSED int fd, UNUSED long offset, UNUSED int mode)
{
	SetAmiSSLerrno(EINVAL);

	return(-1);
}

int read(UNUSED int fd, UNUSED void *buffer, UNUSED size_t num_bytes)
{
	SetAmiSSLerrno(EINVAL);

	return(-1);
}

int write(UNUSED int fd, UNUSED const void* buffer, UNUSED size_t num_bytes)
{
	SetAmiSSLerrno(EINVAL);

	return(-1);
}

/*
 * $Id$
 *
 * :ts=4
 *
 * Portable ISO 'C' (1994) runtime library for the Amiga computer
 * Copyright (c) 2002-2005 by Olaf Barthel <olsen@sourcery.han.de>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   - Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *   - Neither the name of Olaf Barthel nor the names of contributors
 *     may be used to endorse or promote products derived from this
 *     software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

int
setvbuf(FILE *stream,char *buf,int bufmode,size_t size)
{
	struct __iobuf *file = TOFILE(stream);
	char *new_buffer = NULL;
	int result = EOF;

	if ((int)size < 0)
	{
		SetAmiSSLerrno(EINVAL);
		goto out;
	}

	if (fflush(stream) == EOF)
		goto out;

	if (size == 0)
		bufmode = _IONBF; /* A buffer size of 0 bytes defaults to unbuffered operation. */
	else if (buf == NULL)
	{
		if ((new_buffer = malloc(size)))
		{
			SetAmiSSLerrno(ENOMEM);
			goto out;
		}
	}

	/* Get rid of any buffer specially allocated for this stream. */
	if (file->_flag & _IOALLOCBUF)
	{
		free(file->_base);
		file->_base = NULL;
		file->_flag &= ~_IOALLOCBUF;
	}

	if (bufmode == _IONBF)
	{
		file->_base = &file->_cbuff;
		file->_size = 1;
	}
	else if (buf)
	{
		file->_base = buf;
		file->_size = size;
	}
	else
	{
		file->_base = new_buffer;
		file->_size = size;
		file->_flag |= _IOALLOCBUF;
	}

	file->_flag &= ~_IOBFMASK;
	file->_flag |= bufmode;

	new_buffer = NULL;

	result = 0;

 out:

	if(new_buffer != NULL)
		free(new_buffer);

	return(result);
}
