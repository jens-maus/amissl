#define __USE_INLINE__
#include <exec/types.h>
#include <proto/amissl.h>

struct iob
{
	ULONG			iob_Flags;				/* Properties and options
											   associated with this file */

	UBYTE *			iob_Buffer;				/* Points to the file buffer */
	LONG			iob_BufferSize;			/* Size of the buffer in bytes */
	LONG			iob_BufferPosition;		/* Current read position
											   in the buffer (grows when any
											   data is read from the buffer) */
	LONG			iob_BufferReadBytes;	/* Number of bytes available for
											   reading (shrinks when any data
											   is read from the buffer) */
	LONG			iob_BufferWriteBytes;	/* Number of bytes written to the
											   buffer which still need to be
											   flushed to disk (grows when any
											   data is written to the buffer) */

	/************************************************************************/
	/* Public portion ends here                                             */
	/************************************************************************/

	struct Hook *	iob_Hook;				/* The hook to invoke for file
											   operations, such as read,
											   write and seek. */

	int				iob_SlotNumber;			/* Points back to the iob table
											   entry number. */

	int				iob_Descriptor;			/* Associated file descriptor */

	STRPTR			iob_String;				/* Alternative source of data;
											   a pointer to a string */
	LONG			iob_StringSize;			/* Number of bytes that may be
											   stored in the string */
	LONG			iob_StringPosition;		/* Current read/write position
											   in the string */
	LONG			iob_StringLength;		/* Number of characters stored
											   in the string */

	char *			iob_File;				/* For access tracking with the
											   memory allocator. */
	int				iob_Line;

	struct Hook		iob_DefaultHook;		/* Static hook */

	APTR			iob_CustomBuffer;		/* A custom buffer allocated
											   by setvbuf() */

	char *			iob_TempFileName;		/* If this is a temporary
											   file, this is its name */
	BPTR			iob_TempFileLock;		/* The directory in which this
											   temporary file is stored */

	UBYTE			iob_SingleByte;			/* Fall-back buffer for 'unbuffered'
											   files */
};

struct fd
{
	struct Hook *	fd_Hook;			/* Hook to invoke to perform actions */
	ULONG			fd_Flags;			/* File properties */
	struct fd *		fd_Original;		/* NULL if this is not a dup()ed file
										   descriptor; points to original
										   descriptor if non-NULL */
	struct fd *		fd_NextLink;		/* Points to next duplicate of this
										   file descriptor; NULL for none */
	struct Hook		fd_DefaultHook;		/* Static hook */
	BPTR			fd_DefaultFile;		/* A dos.library file handle */
	LONG			fd_Position;		/* Cached file position (seek offset). */
};

extern struct fd * __get_file_descriptor(int file_descriptor);

void ERR_print_errors_fp(struct iob *fp)
{
	BIO temp;
	struct fd *fd;

	fd = __get_file_descriptor(fp->iob_Descriptor);

	BIO_set(&temp,BIO_s_file()); // BIO_set cannot fail on BIO_s_file
	BIO_set_fp_amiga(&temp, fd->fd_DefaultFile, BIO_NOCLOSE);
	ERR_print_errors(&temp);
}

int	BN_print_fp(struct iob *fp, const BIGNUM *a)
{
	BIO temp;
	struct fd *fd;

	fd = __get_file_descriptor(fp->iob_Descriptor);

	BIO_set(&temp,BIO_s_file()); // BIO_set cannot fail on BIO_s_file
	BIO_set_fp_amiga(&temp, fd->fd_DefaultFile, BIO_NOCLOSE);
	return BN_print(&temp,a);
}

long BIO_set_fp(BIO *b,struct iob *fp,int closeflag)
{
	BIO temp;
	struct fd *fd;

	fflush(fp); // Flush the file if there are pending writes. After this point we cannot repair anything out of sync
	fd = __get_file_descriptor(fp->iob_Descriptor);
	return BIO_set_fp_amiga(b, fd->fd_DefaultFile, BIO_NOCLOSE); // We cannot allow someone else to close the file
}

BIO * BIO_new_fp(struct iob *fp,int closeflag)
{
	BIO *temp;
	struct fd *fd;

	fflush(fp); // Flush the file if there are pending writes. After this point we cannot repair anything out of sync
	fd = __get_file_descriptor(fp->iob_Descriptor);
	if ((temp=BIO_new(BIO_s_file_internal())) == NULL)
		return(NULL);
	BIO_set_fp_amiga(temp, fd->fd_DefaultFile, BIO_NOCLOSE); // We cannot allow someone else to close the file
	return temp;
}

void CRYPTO_mem_leaks_fp(struct iob *fp)
{
	BIO temp;
	struct fd *fd;

	fd = __get_file_descriptor(fp->iob_Descriptor);

	BIO_set(&temp,BIO_s_file()); // BIO_set cannot fail on BIO_s_file
	BIO_set_fp_amiga(&temp, fd->fd_DefaultFile, BIO_NOCLOSE);
	CRYPTO_mem_leaks(&temp);
}

#undef CRYPTO_dbg_realloc
#undef CRYPTO_dbg_malloc
#undef CRYPTO_dbg_free
#undef CRYPTO_dbg_set_options
#undef CRYPTO_dbg_get_options

void CRYPTO_dbg_malloc(void *addr,int num,const char *file,int line,int before_p)
{
	IAmiSSL->CRYPTO_dbg_malloc(addr,num,file,line,before_p);
}

void CRYPTO_dbg_realloc(void *addr1,void *addr2,int num,const char *file,int line,int before_p)
{
	IAmiSSL->CRYPTO_dbg_realloc(addr1,addr2,num,file,line,before_p);
}

void CRYPTO_dbg_free(void *addr,int before_p)
{
	IAmiSSL->CRYPTO_dbg_free(addr,before_p);
}

void CRYPTO_dbg_set_options(long bits)
{
	IAmiSSL->CRYPTO_dbg_set_options(bits);
}

long CRYPTO_dbg_get_options(void)
{
	return IAmiSSL->CRYPTO_dbg_get_options();
}


