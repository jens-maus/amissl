/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2022 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

/* crypto/bio/bss_file_amiga.c */
/* This file introduces Amiga specific file handling which uses
 * buffered dos.library calls.
 */

#ifdef OPENSSL_SYS_AMIGA
#include <proto/exec.h>
#include <proto/dos.h>
#include <dos/dos.h>
#include <dos/stdio.h>
#include <string.h>

#include "bio_local.h"
#include <openssl/err.h>
#include <openssl/buffer.h>

extern int __io2errno(int);

static int file_write(BIO *h, const char *buf, int num);
static int file_read(BIO *h, char *buf, int size);
static int file_puts(BIO *h, const char *str);
static int file_gets(BIO *h, char *str, int size);
static long file_ctrl(BIO *h, int cmd, long arg1, void *arg2);
static int file_new(BIO *h);
static int file_free(BIO *data);

static const BIO_METHOD methods_filep =
{
	BIO_TYPE_FILE,
	"FILE pointer (Amiga)",
	/* TODO: Convert to new style write function */
	bwrite_conv,
	file_write,
	/* TODO: Convert to new style read function */
	bread_conv,
	file_read,
	file_puts,
	file_gets,
	file_ctrl,
	file_new,
	file_free,
	NULL
};

#ifdef __amigaos4__
#define SeekToEOF(file) FSeek(file, 0, OFFSET_END)

static LONG FSeek(BPTR file, LONG pos, LONG mode)
{
	int64 ret = GetFilePosition(file);

	if (ret != -1LL)
	{
		if (ChangeFilePosition(file,pos,mode) == 0) ret = -1LL;
	}

	return((LONG)ret);
}
#else /* __amigaos4__ */
#define SeekToEOF(file) Seek(file, 0, OFFSET_END)
#define FFlush(file) Flush(file)

static BPTR FOpen(STRPTR name, LONG mode, LONG buffer_size)
{
	BPTR fh = Open(name, mode);

	if (fh && ((struct Library *)DOSBase)->lib_Version >= 39)
		SetVBuf(fh, NULL, IsInteractive(fh) ? BUF_LINE : BUF_FULL, buffer_size);

	return(fh);
}

static void FClose(BPTR file)
{
	Flush(file);
	Close(file);
}

static LONG FSeek(BPTR file, LONG pos, LONG mode)
{
	LONG ret;

	if (Flush(file))
		ret = Seek(file, pos, mode);
	else
		ret = -1;

	return(ret);
}
#endif /* __amigaos4__ */

static BPTR FOpenFromMode(char *name, char *mode)
{
	BOOL mode_is_valid = TRUE, seek_to_end = FALSE;
	BPTR file = (BPTR)NULL;
	LONG type = MODE_OLDFILE;

	if (*mode == 'r')
		type = MODE_OLDFILE;
	else if (*mode == 'w')
		type = MODE_NEWFILE;
	else if (*mode == 'a')
	{
		type = MODE_READWRITE;
		seek_to_end = TRUE;
	}
	else
		mode_is_valid = FALSE;

	if (mode_is_valid)
	{
		file = FOpen(name, type, 16384);

		if (file && seek_to_end)
			SeekToEOF(file);
	}

	return(file);
}

static BOOL FEOF(BPTR file)
{
	LONG curr_position, end_position;
	BOOL is_eof = FALSE;

	if ((curr_position = FSeek(file, 0, OFFSET_END)) >= 0)
		if ((end_position = FSeek(file, curr_position, OFFSET_BEGINNING)) >= 0)
			is_eof = curr_position == end_position;

	return(is_eof);
}

BIO *BIO_new_file(const char *filename, const char *mode)
{
	BIO *ret;
	BPTR file;
	int fp_flags = BIO_CLOSE;

	if (strchr(mode, 'b') == NULL)
		fp_flags |= BIO_FP_TEXT;

	if((file = FOpenFromMode((char *)filename, (char *)mode)))
	{
		if((ret = BIO_new(BIO_s_file())))
			BIO_set_fp_amiga(ret, file, fp_flags);
	}
	else
	{
		ERR_raise_data(ERR_LIB_SYS, __io2errno(IoErr()),
		               "FOpenFromMode('%s','%s')",
		               filename, mode);

		if (IoErr() == ERROR_OBJECT_NOT_FOUND)
			ERR_raise(ERR_LIB_BIO, BIO_R_NO_SUCH_FILE);
		else
			ERR_raise(ERR_LIB_BIO, ERR_R_SYS_LIB);

		ret = NULL;
	}

	return(ret);
}

BIO *BIO_new_fp_amiga(BPTR stream, int close_flag)
{
	BIO *ret;

	if((ret = BIO_new(BIO_s_file())))
		BIO_set_fp_amiga(ret, stream, close_flag);

	return(ret);
}

#if !defined(OPENSSL_NO_STDIO)
/* Only stdin, stdout and stderr are used in OpenSSL test applications
 * and openssl program, so the following function should cover all cases.
 */
static BPTR GetFileBPTR(const char *func_name, FILE *fp)
{
  BPTR ret;

  if (fp == stdout || (fp == stderr && !ErrorOutput()))
    ret = Output();
  else if (fp == stderr)
    ret = ErrorOutput();
  else if (fp == stdin)
    ret = Input();
  else
  {
    Printf("*** WARNING (%s): %lx is neither stdin (%lx), stdout (%lx) nor stderr (%lx) in GetFileBPTR in stubs, returning NULL!\n", func_name, fp, stdin, stdout, stderr);
    ret = (BPTR)NULL;
  }

  if (ret)
    FFlush(ret);

  return(ret);
}

long (BIO_set_fp)(BIO *b, FILE *fp, int closeflag)
{
  fflush(fp); // Flush the file if there are pending writes. After this point we cannot repair anything out of sync

  return(BIO_set_fp_amiga(b, GetFileBPTR("BIO_set_fp", fp),
                          (closeflag & ~BIO_CLOSE) | BIO_NOCLOSE)); // We cannot allow someone else to close the file
}

BIO *(BIO_new_fp)(FILE *stream, int closeflag)
{
  BIO *ret;

  fflush(stream); // Flush the file if there are pending writes. After this point we cannot repair anything out of sync

  if((ret = BIO_new(BIO_s_file())) != NULL)
    BIO_set_fp_amiga(ret, GetFileBPTR("BIO_new_fp", stream),
                     (closeflag & ~BIO_CLOSE) | BIO_NOCLOSE); // We cannot allow someone else to close the file

  return(ret);
}
#endif

const BIO_METHOD *BIO_s_file(void)
{
	return(&methods_filep);
}

static int file_new(BIO *bi)
{
	bi->init = 0;
	bi->num = 0;
	bi->ptr = NULL;

	return(1);
}

static int file_free(BIO *a)
{
	int ret = 0;

	if(a != NULL && a->shutdown)
	{
		if (a->init && a->ptr != NULL)
		{
			FClose((BPTR)a->ptr);
			a->ptr = NULL;
		}

		a->init = 0;
		ret = 1;
	}

	return(ret);
}

static int file_read(BIO *b, char *out, int outl)
{
	int ret = 0;

	if (b->init && out != NULL)
	{
		SetIoErr(0);

		ret = FRead((BPTR)b->ptr, out, 1, outl);

		/* Apparently, OpenSSL framework wants to know about errors only
		 * if nothing could have been read, at least judging from
		 * the implementation of file_read in bss_file.c
		 */
		if (ret == 0 && IoErr() != 0)
		{
			ERR_raise(ERR_LIB_SYS, __io2errno(IoErr()));
			ERR_raise(ERR_LIB_BIO, ERR_R_SYS_LIB);
			ret = -1;
		}
	}

	return(ret);
}

static int file_write(BIO *b, const char *in, int inl)
{
	int ret = 0;

	if (b->init && in)
		ret = FWrite((BPTR)b->ptr, (char *)in, 1, inl);

	return(ret);
}

static long file_ctrl(BIO *b, int cmd, long num, void *ptr)
{
	long ret = 1;
	BPTR fp = (BPTR)b->ptr;
	BPTR *fpp;
	char p[4];

	switch (cmd)
	{
		case BIO_C_FILE_SEEK:
		case BIO_CTRL_RESET:
			ret = FSeek(fp, num, OFFSET_BEGINNING);
			break;

		case BIO_CTRL_EOF:
			ret = FEOF(fp);
			break;

		case BIO_C_FILE_TELL:
		case BIO_CTRL_INFO:
			ret = FSeek(fp, 0, OFFSET_CURRENT);
			break;

		case BIO_C_SET_FILE_PTR:
			file_free(b);
			b->shutdown = (int)num & BIO_CLOSE;
			b->ptr = (char *)ptr;
			b->init = 1;
			break;

		case BIO_C_SET_FILENAME:
			file_free(b);
			b->shutdown = (int)num & BIO_CLOSE;

			if (num & BIO_FP_APPEND)
			{
				if (num & BIO_FP_READ)
					OPENSSL_strlcpy(p, "a+", sizeof(p));
				else
					OPENSSL_strlcpy(p, "a", sizeof(p));
			}
			else if ((num & BIO_FP_READ) && (num & BIO_FP_WRITE))
				OPENSSL_strlcpy(p, "r+", sizeof(p));
			else if (num & BIO_FP_WRITE)
				OPENSSL_strlcpy(p, "w", sizeof(p));
			else if (num & BIO_FP_READ)
				OPENSSL_strlcpy(p, "r", sizeof(p));
			else
			{
				ERR_raise(ERR_LIB_BIO, BIO_R_BAD_FOPEN_MODE);
				ret = 0;
			}

			if (ret != 0)
			{
				if((fp = FOpenFromMode(ptr, p)))
				{
					b->ptr = (char *)fp;
					b->init = 1;
				}
				else
				{
					ERR_raise_data(ERR_LIB_SYS, __io2errno(IoErr()),
					               "FOpenFromMode('%s','%s')",
					               ptr, p);
					ERR_raise(ERR_LIB_BIO, ERR_R_SYS_LIB);
					ret = 0;
				}
			}
			break;

		case BIO_C_GET_FILE_PTR:
			/* the ptr parameter is actually a BPTR * in this case. */
			if (ptr != NULL)
			{
				fpp = (BPTR *)ptr;
				*fpp = (BPTR)b->ptr;
			}
			break;

		case BIO_CTRL_GET_CLOSE:
			ret = (long)b->shutdown;
			break;

		case BIO_CTRL_SET_CLOSE:
			b->shutdown = (int)num;
			break;

		case BIO_CTRL_FLUSH:
			FFlush((BPTR)b->ptr);
			break;

		case BIO_CTRL_DUP:
			ret = 1;
			break;

		case BIO_CTRL_WPENDING:
		case BIO_CTRL_PENDING:
		case BIO_CTRL_PUSH:
		case BIO_CTRL_POP:
		default:
			ret = 0;
			break;
	}

	return(ret);
}

static int file_gets(BIO *bp, char *buf, int size)
{
	int ret;

	*buf = '\0';

	if (FGets((BPTR)bp->ptr, buf,
	          ((struct Library *)DOSBase)->lib_Version >= 39 ? size : size - 1))
		ret = strlen(buf);
	else
		ret = 0;

	return(ret);
}

static int file_puts(BIO *bp, const char *str)
{
	return(file_write(bp, str, strlen(str)));
}
#else /* OPENSSL_SYS_AMIGA */
static void *dummy=&dummy;
#endif /* OPENSSL_SYS_AMIGA */
