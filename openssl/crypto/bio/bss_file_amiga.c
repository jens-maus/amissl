/* crypto/bio/bss_file_amiga.c */
/* This file introduces Amiga specific file handling which uses
 * buffered dos.library calls.
 */

#include <clib/exec_protos.h>
#include <clib/dos_protos.h>
#include <pragmas/exec_sysbase_pragmas.h>
#include <pragmas/dos_pragmas.h>
#include <dos/dos.h>
#include <dos/stdio.h>
#include <libraries/amissl.h>
#include <string.h>

#include <openssl/bio.h>
#include <openssl/err.h>

extern struct ExecBase *SysBase;
extern struct DosLibrary *DOSBase;

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

static BPTR FOpen(char *name, char *mode)
{
	LONG type, end, invalid = 0;
	BPTR file = NULL;

	if (*mode == 'r')
	{
		type = MODE_OLDFILE;
		end = 0;
	}
	else if (*mode == 'w')
	{
		type = MODE_NEWFILE;
		end = 0;
	}
	else if (*mode == 'a')
	{
		type = MODE_READWRITE;
		end = 1;
	}
	else invalid = 1;

	if (!invalid)
	{
		if (file = Open(name, type))
		{
			if (end)
				Seek(file, 0, OFFSET_END);
			if (DOSBase->dl_lib.lib_Version >= 39)
				SetVBuf(file, NULL, IsInteractive(file) ? BUF_LINE : BUF_FULL, 5120);
		}
	}

	return(file);
}

static void FClose(BPTR file)
{
	Flush(file);
	Close(file);
}

static LONG FSeek(BPTR file, LONG pos, LONG mode)
{
	Flush(file);
	return((LONG)Seek(file, pos, mode));
}

static LONG FEOF(BPTR file)
{
	LONG ret = 0, curr, end;

	Flush(file);
	if ((curr = Seek(file, 0, OFFSET_END)) >= 0)
		if ((end = Seek(file, curr, OFFSET_BEGINNING)) >= 0)
			ret = (curr == end) ? 1 : 0;

	return(ret);
}

BIO *BIO_new_file(const char *filename, const char *mode)
{
	BIO *ret;
	BPTR file;

	if (!(file = FOpen((char *)filename, (char *)mode)))
	{
		SYSerr(SYS_F_FOPEN, IoErr());
		ERR_add_error_data(5, "FOpen('", filename, "','", mode, "')");
		BIOerr(BIO_F_BIO_NEW_FILE, ERR_R_SYS_LIB);
		return(NULL);
	}
	if (!(ret = BIO_new(BIO_s_file_internal())))
		return(NULL);

	BIO_set_fp_amiga(ret, file, BIO_CLOSE);
	return(ret);
}

BIO *BIO_new_fp_amiga(BPTR stream, int close_flag)
{
	BIO *ret;

	if ((ret = BIO_new(BIO_s_file())) == NULL)
		return(NULL);

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
	if (a == NULL)
		return(0);
	if (a->shutdown)
	{
		if ((a->init) && (a->ptr != NULL))
		{
			FClose((BPTR)a->ptr);
			a->ptr = NULL;
		}
		a->init = 0;
	}
	return(1);
}

static int file_read(BIO *b, char *out, int outl)
{
	int ret = 0;

	if (b->init && (out != NULL))
	{
		ret = FRead((BPTR)b->ptr, out, 1, outl);
	}
	return(ret);
}

static int file_write(BIO *b, char *in, int inl)
{
	int ret = 0;

	if (b->init && (in != NULL))
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
				strcpy(p, "a+");
			else
				strcpy(p, "a");
		}
		else if ((num & BIO_FP_READ) && (num & BIO_FP_WRITE))
			strcpy(p, "r+");
		else if (num & BIO_FP_WRITE)
			strcpy(p, "w");
		else if (num & BIO_FP_READ)
			strcpy(p, "r");
		else
		{
			BIOerr(BIO_F_FILE_CTRL, BIO_R_BAD_FOPEN_MODE);
			ret = 0;
			break;
		}
		fp = FOpen(ptr, p);
		if (fp == NULL)
		{
			SYSerr(SYS_F_FOPEN, IoErr());
			ERR_add_error_data(5, "FOpen('", ptr, "','", p, "')");
			BIOerr(BIO_F_FILE_CTRL, ERR_R_SYS_LIB);
			ret = 0;
			break;
		}
		b->ptr = (char *)fp;
		b->init = 1;
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
		Flush((BPTR)b->ptr);
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
	int ret = 0;

	buf[0] = '\0';
	FGets((BPTR)bp->ptr, buf, (DOSBase->dl_lib.lib_Version >= 39) ? size : size - 1);
	if (buf[0] != '\0')
		ret = strlen(buf);
	return(ret);
}

static int file_puts(BIO *bp, char *str)
{
	int n, ret;

	n = strlen(str);
	ret = file_write(bp, str, n);
	return(ret);
}
