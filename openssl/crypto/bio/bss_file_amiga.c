/* crypto/bio/bss_file_amiga.c */
/* This file introduces Amiga specific file handling which uses
 * buffered dos.library calls.
 */

#include <proto/exec.h>
#include <proto/dos.h>
#include <dos/dos.h>
#include <dos/stdio.h>
#include <string.h>

#include <openssl/bio.h>
#include <openssl/err.h>

static int file_write(BIO *h, char *buf, int num);
static int file_read(BIO *h, char *buf, int size);
static int file_puts(BIO *h, char *str);
static int file_gets(BIO *h, char *str, int size);
static long file_ctrl(BIO *h, int cmd, long arg1, char *arg2);
static int file_new(BIO *h);
static int file_free(BIO *data);

static BIO_METHOD methods_filep =
{
	BIO_TYPE_FILE,
	"FILE pointer (Amiga)",
	file_write,
	file_read,
	file_puts,
	file_gets,
	file_ctrl,
	file_new,
	file_free,
};

BIO_METHOD *BIO_s_file(void);

#ifndef __amigaos4__
#define FOpen(name, mode, buffer_size) Open(name, mode)
#define FFlush(file) Flush(file)

static void FClose(BPTR file)
{
	FFlush(file);
	FClose(file);
}

static LONG FSeek(BPTR file, LONG pos, LONG mode)
{
	FFlush(file);

	return((LONG)Seek(file, pos, mode));
}
#endif /* !__amigaos4__ */

static BPTR FOpenFromMode(char *name, char *mode)
{
	BOOL mode_is_invalid = FALSE, seek_to_end = FALSE;
	BPTR file = NULL;
	LONG type;

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
		mode_is_invalid = TRUE;

	if (!mode_is_invalid)
	{
		if (file = FOpen(name, type, 16384))
		{
			if (seek_to_end)
				Seek(file, 0, OFFSET_END);

			if (((struct Library *)DOSBase)->lib_Version >= 39
			    && ((struct Library *)DOSBase)->lib_Version < 51)
				SetVBuf(file, NULL, IsInteractive(file) ? BUF_LINE : BUF_FULL, 5120);
		}
	}

	return(file);
}

static BOOL FEOF(BPTR file)
{
	LONG curr_position, end_position;
	BOOL is_eof = FALSE;

	FFlush(file);

	if ((curr_position = Seek(file, 0, OFFSET_END)) >= 0)
		if ((end_position = Seek(file, curr_position, OFFSET_BEGINNING)) >= 0)
			is_eof = (curr_position == end_position) ? 1 : 0;

	return(is_eof);
}

BIO *BIO_new_file(const char *filename, const char *mode)
{
	BIO *ret;
	BPTR file;

	if (file = FOpenFromMode((char *)filename, (char *)mode))
	{
		if (ret = BIO_new(BIO_s_file_internal()))
			BIO_set_fp_amiga(ret, file, BIO_CLOSE);
	}
	else
	{
		SYSerr(SYS_F_FOPEN, IoErr());
		ERR_add_error_data(5, "FOpenFromMode('", filename, "','", mode, "')");

		if (IoErr() == ERROR_OBJECT_NOT_FOUND)
			BIOerr(BIO_F_BIO_NEW_FILE, BIO_R_NO_SUCH_FILE);
		else
			BIOerr(BIO_F_BIO_NEW_FILE, ERR_R_SYS_LIB);

		ret = NULL;
	}

	return(ret);
}

BIO *BIO_new_fp_amiga(BPTR stream, int close_flag)
{
	BIO *ret;

	if (ret = BIO_new(BIO_s_file()))
		BIO_set_fp_amiga(ret, stream, close_flag);

	return(ret);
}

BIO_METHOD *BIO_s_file(void)
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
	int ret;

	if (!a)
		ret = 0;
	else if (a->shutdown)
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
			SYSerr(SYS_F_FREAD, IoErr());
			BIOerr(BIO_F_FILE_READ, ERR_R_SYS_LIB);

			ret = -1;
		}
	}

	return(ret);
}

static int file_write(BIO *b, char *in, int inl)
{
	int ret = 0;

	if (b->init && in)
		ret = FWrite((BPTR)b->ptr, in, 1, inl);

	return(ret);
}

static long file_ctrl(BIO *b, int cmd, long num, char *ptr)
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
					BUF_strlcpy(p, "a+", sizeof(p));
				else
					BUF_strlcpy(p, "a", sizeof(p));
			}
			else if ((num & BIO_FP_READ) && (num & BIO_FP_WRITE))
				BUF_strlcpy(p, "r+", sizeof(p));
			else if (num & BIO_FP_WRITE)
				BUF_strlcpy(p, "w", sizeof(p));
			else if (num & BIO_FP_READ)
				BUF_strlcpy(p, "r", sizeof(p));
			else
			{
				BIOerr(BIO_F_FILE_CTRL, BIO_R_BAD_FOPEN_MODE);
				ret = 0;
			}

			if (ret != 0)
			{
				if (fp = FOpenFromMode(ptr, p))
				{
					b->ptr = (char *)fp;
					b->init = 1;
				}
				else
				{
					SYSerr(SYS_F_FOPEN, IoErr());
					ERR_add_error_data(5, "FOpenFromMode('", ptr, "','", p, "')");
					BIOerr(BIO_F_FILE_CTRL, ERR_R_SYS_LIB);
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

	*buf = '\0'; /* Not sure what OpenSSL needs when ret is 0, this is just in case */

	if (FGets((BPTR)bp->ptr, buf, (((struct Library *)DOSBase)->lib_Version >= 39) ? size : size - 1))
		ret = strlen(buf);
	else
		ret = 0;

	return(ret);
}

static int file_puts(BIO *bp, char *str)
{
	return(file_write(bp, str, strlen(str)));
}
