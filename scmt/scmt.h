#include <stdio.h>
#include <dos.h>

extern int _OSERR;
extern int errno;
extern int __io2errno(int);
#define __set_errno(x) do { errno = __io2errno(_OSERR = (x)); } while (0)
#define SET_OSERR(code) do { _OSERR = (code); } while (0)

#define set_errno __set_errno
#define OSERR _OSERR

struct filenode
{
	struct Node node;
	FILE FILE;
};

extern struct MinList __filelist;
extern struct SignalSemaphore FileListLock;

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
