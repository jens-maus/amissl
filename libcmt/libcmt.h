#include <stdio.h>
#include <dos.h>

extern int __io2errno(int);

/**
*
* Definitions associated with __iobuf._flag
*
**/
#define _IOFBF   0		/* fully buffered (for setvbuf) */
#define _IOREAD  1		/* read flag */
#define _IOWRT   2		/* write flag */
//#define _IONBF   4		/* non-buffered flag */
#define _IOMYBUF 8		/* private buffer flag */
#define _IOEOF   16		/* end-of-file flag */
#define _IOERR   32		/* error flag */
//#define _IOLBF   64		/* line-buffered flag */
#define _IORW    128		/* read-write (update) flag */
#define _IOUNGET 0x1000         /* unget was used since last seek */
#define _IORKEY  0x2000         /* raw console I/O flag */
#define _IOAPP   0x4000		/* append flag */
#define _IOXLAT  0x8000		/* translation flag */

#define EOF (-1)		/* end-of-file code */

#define SEEK_SET 0              /* Seek from beginning of file */
#define SEEK_CUR 1              /* Seek from current file position */
#define SEEK_END 2              /* Seek from end of file */

#ifdef __amigaos4__

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

#endif

#define TOFILE(x) ((struct __iobuf *)x)

struct filenode
{
	struct Node node;
#ifdef __amigaos4__
	struct __iobuf FILE;
#else	
	FILE FILE;
#endif
};

extern struct MinList __filelist;
extern struct SignalSemaphore FileListLock;

#ifdef __amigaos4__
#define DeclareMinList(l) struct MinList l
#define DeclareSemaphore(s) struct SignalSemaphore s
#else
/*
 * These are onsafe to use on __far data due to a compiler/linker bug
 * in SAS which does not relocate the address references
 */

#define DeclareMinList(l) \
	struct MinList l = \
	{ \
		(struct MinNode *)&l.mlh_Tail, \
		NULL, \
		(struct MinNode *)&l.mlh_Head \
	}

#define DeclareSemaphore(s) \
	struct SignalSemaphore s = \
	{ \
		{NULL,NULL,NT_SIGNALSEM,0,NULL}, \
		0, \
		{(struct MinNode *)&s.ss_WaitQueue.mlh_Tail, \
		 NULL, \
		 (struct MinNode *)&s.ss_WaitQueue.mlh_Head \
		}, \
		{{NULL,NULL},NULL}, \
		NULL, \
		-1 \
	}
#endif

struct HashTable *h_new(long InitialSize,void *(*allocator)(long),void (*deallocator)(void *));
void *h_insert(struct HashTable *h,long Key,void * UserData);
void * h_find(struct HashTable *h,long Key);
void h_delete(struct HashTable *h,long Key);
void h_free(struct HashTable *h);
void h_doall(struct HashTable *h,void (*func)(long,void *));

long mtgeta4(void);
int initmta4(void);
void donemta4(void);
int addmta4user(void);
void removemta4user(void);

#define MTSAVEDS() putreg(REG_A4,(long)mtgeta4())

struct SocketIFace *GetSocketIFace(int modifies_errno);

#define GETISOCKET() struct SocketIFace *ISocket = GetSocketIFace(1);
#define GETISOCKET_NOERRNO() struct SocketIFace *ISocket = GetSocketIFace(0);
#define GETSTATE() AMISSL_STATE *state = GetAmiSSLState()
