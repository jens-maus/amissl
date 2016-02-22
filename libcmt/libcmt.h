#ifndef LIBCMT_H
#define LIBCMT_H

#include <stdio.h>
#include <dos.h>
#include <proto/exec.h>

#include <internal/amissl.h>

#include "ctype.h"

extern int __io2errno(int);
extern void initialize_socket_errno(AMISSL_STATE *state);
extern void __init_libcmt(void) __attribute__((constructor));
extern void __free_libcmt(void) __attribute__((destructor));

/**
*
* Definitions associated with __iobuf._flag. These are already defined in SAS/C stdio.h.
*
**/
#if !defined(_IOFBF) || !defined(_IOLBF) || !defined(_IONBF)
#error _IOFBF, _IOLBF and _IONBF should be defined in stdio.h
#endif
#define _IOREAD     __FILE_READABLE /* read flag */
#define _IOWRT      __FILE_WRITABLE /* write flag */
#define _IOEOF      __FILE_EOF      /* end-of-file flag */
#define _IOERR      __FILE_ERROR    /* error flag */
#define _IORW       (1 << 29)       /* read-write (update) flag */

#define _IOALLOCBUF (1 << 30)       /* buffer is locally allocated */
#define _IOBFMASK ((_IOFBF) | (_IOLBF) | (_IONBF))

#define EOF (-1)		/* end-of-file code */

#define SEEK_SET 0              /* Seek from beginning of file */
#define SEEK_CUR 1              /* Seek from current file position */
#define SEEK_END 2              /* Seek from end of file */

struct __iobuf {
    struct __iobuf *_next;
    unsigned char *_ptr;	/* current buffer pointer */
    int _rcnt;		        /* current byte count for reading */
    int _wcnt;		        /* current byte count for writing */
    unsigned char *_base;	/* base address of I/O buffer */
    int _size;			/* size of buffer */
    int _flag;	        	/* control flags */
    int _file;		        /* file descriptor */
    unsigned char _cbuff;	/* single char buffer */
};

#define TOFILE(x) ((struct __iobuf *)x)

struct filenode
{
	struct Node node;
	struct __iobuf FILE;
};

struct HashTable *h_new(long InitialSize,void *(*allocator)(long),void (*deallocator)(void *));
void *h_insert(struct HashTable *h,long Key,void * UserData);
void * h_find(struct HashTable *h,long Key);
void h_delete(struct HashTable *h,long Key);
void h_free(struct HashTable *h);
void h_doall(struct HashTable *h,void (*func)(long,void *));

struct SocketIFace *GetSocketIFace(int modifies_errno);

#define GETISOCKET() struct SocketIFace *ISocket = GetSocketIFace(1)
#define GETISOCKET_NOERRNO() struct SocketIFace *ISocket = GetSocketIFace(0)
#define GETSTATE() AMISSL_STATE *state = GetAmiSSLState()

// defines required for CLIB2 compatibility
#define ENTER()        ((void)0)
#define RETURN(x)      ((void)0)
#define LEAVE()        ((void)0)
#define SHOWSTRING(x)  ((void)0)
#define SHOWPOINTER(x) ((void)0)
#define SHOWVALUE(x)   ((void)0)
#define SHOWMSG(x)     ((void)0)
#define DO_NOTHING     ((void)0)

#if !defined(assert)
#define assert(X)      ((void)0)
#endif

#define NOT !
#define __set_errno(X)  SetAmiSSLerrno(X)

#ifndef PARAMS
# if PROTOTYPES
#  define PARAMS(args) args
# else
#  define PARAMS(args) ()
# endif
#endif

#endif /* !LIBCMT_H */
