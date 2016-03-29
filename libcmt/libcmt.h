#ifndef LIBCMT_H
#define LIBCMT_H

#include <stdio.h>
#include <proto/dos.h>
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

#define DO_NOTHING     ((void)0)

#define NOT !
#define __set_errno(X)  SetAmiSSLerrno(X)

#ifndef PARAMS
# if PROTOTYPES
#  define PARAMS(args) args
# else
#  define PARAMS(args) ()
# endif
#endif

#include <netinet/in.h>
#include <sys/socket.h>

struct hostent * gethostbyname(const char *name);
struct servent * getservbyname(const char *name, const char *proto);
char *inet_ntoa(struct in_addr in);
int getsockopt(int sockfd, int level, int optname, void *optval, socklen_t *optlen);
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
int getsockname(int sockfd, struct sockaddr *addr, socklen_t *addrlen);
int shutdown(int sockfd, int how);
int closesocket(int s);
ssize_t send(int sockfd, const void *buf, size_t len, int flags);
ssize_t sendto(int sockfd, const void *buf, size_t len, int flags,
               const struct sockaddr *dest_addr, socklen_t addrlen);
ssize_t recv(int sockfd, void *buf, size_t len, int flags);
ssize_t recvfrom(int sockfd, void *buf, size_t len, int flags,
                 struct sockaddr *src_addr, socklen_t *addrlen);
int socket(int domain, int type, int protocol);
int connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);
int ioctlsocket(int sockfd, long request, char *arg);
void openlog(const char *ident, int option, int facility);
void syslog(int priority, const char *format, ...);
void closelog(void);

#endif /* !LIBCMT_H */
