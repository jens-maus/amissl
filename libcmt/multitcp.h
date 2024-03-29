#ifndef MULTITCP_H
#define MULTITCP_H

#include <exec/types.h>

//#include "asm.h"

#define TCPIP_AmiTCP   0x01
#define TCPIP_IN225    0x02
#define TCPIP_Miami    0x03
#define TCPIP_Termite  0x04
#define TCPIP_MLink    0x05
#define TCPIP_Roadshow 0x06

#ifndef NO_MTCP_PROTOS

struct Socket;
struct TCPIPStack;
struct sockaddr;
struct sockaddr_in;
struct Library;

#include <proto/exec.h>
#include <exec/memory.h>
#include <exec/semaphores.h>
#include <dos/dosextens.h>
#include <utility/tagitem.h>

#include <sys/ioctl.h>
#include <errno.h>

#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <netdb.h>
#include <sys/time.h>
#include <string.h>

#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/route.h>
#include <net/if.h>

#undef FD_ZERO
#define	FD_ZERO(p) (InitStruct((APTR)"", (p), sizeof *(p)))

struct Socket
{
	LONG TCPIPStackType;
	struct TCPIPStack *TCPIPStack;
	struct Library *TCPIPStackBase;
};

struct AmiTCPSocket
{
	struct Socket Socket;
	LONG s;
};

struct MiamiSocket
{
	struct Socket Socket;
	LONG s;
	struct sockaddr Address; /* Need to copy the complete address */
	unsigned DoingTTCP:1;
};

struct IN225Socket
{
	struct Socket Socket;
	LONG s;
};

struct TermiteSocket
{
	struct Socket Socket;
	LONG s;
};

struct MLinkSocket
{
	struct Socket Socket;
	LONG s;
};

#define _amitcp(s) ((struct AmiTCPSocket *)s)
#define _miami(s) ((struct MiamiSocket *)s)
#define _in225(s) ((struct IN225Socket *)s)
#define _termite(s) ((struct TermiteSocket *)s)
#define _mlink(s) ((struct MLinkSocket *)s)

struct MLinkLock
{
	struct SignalSemaphore Semaphore;
	LONG UsageCount;
	char Name[0];
};

struct TCPIPStack
{
	LONG TCPIPStackType;
	LONG ErrNo;
	struct Library *TCPIPStackBase;
	struct MLinkLock *MLinkLock;
};

/* AmiTCP prototypes and pragmas */

LONG amitcp_Socket(LONG domain, LONG type, LONG protocol);
LONG amitcp_Bind(LONG s, const struct sockaddr *name, LONG namelen);
LONG amitcp_Listen(LONG s, LONG backlog);
LONG amitcp_Accept(LONG s, struct sockaddr *addr, LONG *addrlen);
LONG amitcp_Connect(LONG s, const struct sockaddr *name, LONG namelen);
LONG amitcp_Send(LONG s, const void *msg, LONG len, LONG flags);
LONG amitcp_SendTo(LONG s, const void *msg, LONG len, LONG flags, const struct sockaddr *to, LONG tolen);
LONG amitcp_SendMsg(LONG s, struct msghdr * msg, LONG flags);
LONG amitcp_Recv(LONG s, void *buf, LONG len, LONG flags);	/* V3 */
LONG amitcp_RecvFrom(LONG s, void *buf, LONG len, LONG flags, struct sockaddr *from, LONG *fromlen);
LONG amitcp_RecvMsg(LONG s, struct msghdr * msg, LONG flags);	/* V3 */
LONG amitcp_Shutdown(LONG s, LONG how);
LONG amitcp_SetSockOpt(LONG s, LONG level, LONG optname, const void *optval, LONG optlen);
LONG amitcp_GetSockOpt(LONG s, LONG level, LONG optname, void *optval, socklen_t *optlen);
LONG amitcp_GetSockName(LONG s, struct sockaddr *name, socklen_t *namelen);
LONG amitcp_GetPeerName(LONG s, struct sockaddr *name, LONG *namelen);

LONG amitcp_IoctlSocket(LONG d, ULONG request, char *argp);
LONG amitcp_CloseSocket(LONG d);
LONG amitcp_WaitSelect(LONG nfds, fd_set *readfds, fd_set *writefds, fd_set *exeptfds,	struct timeval *timeout, ULONG *maskp);

LONG amitcp_Dup2Socket(LONG fd1, LONG fd2);		       /* V2 */

LONG amitcp_GetDTableSize(void);			       /* V3 */
void amitcp_SetSocketSignals(ULONG SIGINTR, ULONG SIGIO, ULONG SIGURG);
LONG amitcp_SetErrnoPtr(void *errno_p, LONG size);
LONG amitcp_SocketBaseTagList(struct TagItem *tagList);	/* V3 */
LONG amitcp_SocketBaseTags(ULONG, ...);				/* V3 */
LONG amitcp_GetSocketEvents(ULONG *eventmaskp);		/* V4 */

LONG amitcp_Errno(void);

LONG amitcp_GetHostName(STRPTR hostname, LONG size);          /* V3 */
ULONG amitcp_GetHostId(void);				       /* V3 */

LONG amitcp_ObtainSocket(LONG id, LONG domain, LONG type, LONG protocol);
LONG amitcp_ReleaseSocket(LONG fd, LONG id);
LONG amitcp_ReleaseCopyOfSocket(LONG fd, LONG id);

/* Arpa/inet functions */
ULONG amitcp_Inet_Addr(const UBYTE *);
ULONG amitcp_Inet_Network(const UBYTE *);
char *amitcp_Inet_NtoA(ULONG s_addr);
ULONG amitcp_Inet_MakeAddr(ULONG net, ULONG lna);
ULONG amitcp_Inet_LnaOf(LONG s_addr);
ULONG amitcp_Inet_NetOf(LONG s_addr);

/* NetDB functions */
struct hostent  *amitcp_GetHostByName(const UBYTE *name);
struct hostent  *amitcp_GetHostByAddr(const UBYTE *addr, LONG len, LONG type);
struct netent   *amitcp_GetNetByName(const UBYTE *name);
struct netent   *amitcp_GetNetByAddr(LONG net, LONG type);
struct servent  *amitcp_GetServByName(const UBYTE *name, const UBYTE *proto);
struct servent  *amitcp_GetServByPort(LONG port, const UBYTE *proto);
struct protoent *amitcp_GetProtoByName(const UBYTE *name);
struct protoent *amitcp_GetProtoByNumber(LONG proto);

/* Syslog functions */
void amitcp_SyslogA(ULONG pri, const char *fmt, LONG *);
void amitcp_Syslog(ULONG pri, const char *fmt, ...);

#ifndef __INLINE_MACROS_H
#include <inline/macros.h>
#endif

#define amitcp_Accept(sock, addr, addrlen) \
	LP3(0x30, LONG, amitcp_Accept, LONG, sock, d0, struct sockaddr *, addr, a0, LONG *, addrlen, a1, \
	, state->SocketBase)

#define amitcp_Bind(sock, name, namelen) \
	LP3(0x24, LONG, amitcp_Bind, LONG, sock, d0, const struct sockaddr *, name, a0, LONG, namelen, d1, \
	, state->SocketBase)

#define amitcp_CloseSocket(d) \
	LP1(0x78, LONG, amitcp_CloseSocket, LONG, d, d0, \
	, state->SocketBase)

#define amitcp_Connect(sock, name, namelen) \
	LP3(0x36, LONG, amitcp_Connect, LONG, sock, d0, const struct sockaddr *, name, a0, LONG, namelen, d1, \
	, state->SocketBase)

#define amitcp_Dup2Socket(fd1, fd2) \
	LP2(0x108, LONG, amitcp_Dup2Socket, LONG, fd1, d0, LONG, fd2, d1, \
	, state->SocketBase)

#define amitcp_Errno() \
	LP0(0xa2, LONG, amitcp_Errno, \
	, state->SocketBase)

#define amitcp_GetDTableSize() \
	LP0(0x8a, LONG, amitcp_GetDTableSize, \
	, state->SocketBase)

#define amitcp_GetHostByAddr(addr, len, type) \
	LP3(0xd8, struct hostent  *, amitcp_GetHostByAddr, const UBYTE *, addr, a0, LONG, len, d0, LONG, type, d1, \
	, state->SocketBase)

#define amitcp_GetHostByName(name) \
	LP1(0xd2, struct hostent  *, amitcp_GetHostByName, const UBYTE *, name, a0, \
	, state->SocketBase)

#define amitcp_GetHostId() \
	LP0(0x120, ULONG, amitcp_GetHostId, \
	, state->SocketBase)

#define amitcp_GetHostName(hostname, size) \
	LP2(0x11a, LONG, amitcp_GetHostName, STRPTR, hostname, a0, LONG, size, d0, \
	, state->SocketBase)

#define amitcp_GetNetByAddr(net, type) \
	LP2(0xe4, struct netent   *, amitcp_GetNetByAddr, LONG, net, d0, LONG, type, d1, \
	, state->SocketBase)

#define amitcp_GetNetByName(name) \
	LP1(0xde, struct netent   *, amitcp_GetNetByName, const UBYTE *, name, a0, \
	, state->SocketBase)

#define amitcp_GetPeerName(sock, hostname, namelen) \
	LP3(0x6c, LONG, amitcp_GetPeerName, LONG, sock, d0, struct sockaddr *, hostname, a0, int *, namelen, a1, \
	, state->SocketBase)

#define amitcp_GetProtoByName(name) \
	LP1(0xf6, struct protoent *, amitcp_GetProtoByName, const UBYTE *, name, a0, \
	, state->SocketBase)

#define amitcp_GetProtoByNumber(proto) \
	LP1(0xfc, struct protoent *, amitcp_GetProtoByNumber, LONG, proto, d0, \
	, state->SocketBase)

#define amitcp_GetServByName(name, proto) \
	LP2(0xea, struct servent  *, amitcp_GetServByName, const UBYTE *, name, a0, const UBYTE *, proto, a1, \
	, state->SocketBase)

#define amitcp_GetServByPort(port, proto) \
	LP2(0xf0, struct servent  *, amitcp_GetServByPort, LONG, port, d0, const UBYTE *, proto, a0, \
	, state->SocketBase)

#define amitcp_GetSockName(sock, hostname, namelen) \
	LP3(0x66, LONG, amitcp_GetSockName, LONG, sock, d0, struct sockaddr *, hostname, a0, socklen_t *, namelen, a1, \
	, state->SocketBase)

#define amitcp_GetSockOpt(sock, level, optname, optval, optlen) \
	LP5(0x60, LONG, amitcp_GetSockOpt, LONG, sock, d0, LONG, level, d1, LONG, optname, d2, void *, optval, a0, socklen_t *, optlen, a1, \
	, state->SocketBase)

#define amitcp_GetSocketEvents(eventmaskp) \
	LP1(0x12c, LONG, amitcp_GetSocketEvents, ULONG *, eventmaskp, a0, \
	, state->SocketBase)

#define amitcp_Inet_Addr(cp) \
	LP1(0xb4, ULONG, amitcp_Inet_Addr, const UBYTE *, cp, a0, \
	, state->SocketBase)

#define amitcp_Inet_LnaOf(in) \
	LP1(0xba, ULONG, amitcp_Inet_LnaOf, LONG, in, d0, \
	, state->SocketBase)

#define amitcp_Inet_MakeAddr(net, host) \
	LP2(0xc6, ULONG, amitcp_Inet_MakeAddr, ULONG, net, d0, ULONG, host, d1, \
	, state->SocketBase)

#define amitcp_Inet_NetOf(in) \
	LP1(0xc0, ULONG, amitcp_Inet_NetOf, LONG, in, d0, \
	, state->SocketBase)

#define amitcp_Inet_Network(cp) \
	LP1(0xcc, ULONG, amitcp_Inet_Network, const UBYTE *, cp, a0, \
	, state->SocketBase)

#define amitcp_Inet_NtoA(in) \
	LP1(0xae, char *, amitcp_Inet_NtoA, ULONG, in, d0, \
	, state->SocketBase)

#define amitcp_IoctlSocket(d, request, argp) \
	LP3(0x72, LONG, amitcp_IoctlSocket, LONG, d, d0, ULONG, request, d1, char *, argp, a0, \
	, state->SocketBase)

#define amitcp_Listen(sock, backlog) \
	LP2(0x2a, LONG, amitcp_Listen, LONG, sock, d0, LONG, backlog, d1, \
	, state->SocketBase)

#define amitcp_ObtainSocket(id, domain, type, protocol) \
	LP4(0x90, LONG, amitcp_ObtainSocket, LONG, id, d0, LONG, domain, d1, LONG, type, d2, LONG, protocol, d3, \
	, state->SocketBase)

#define amitcp_Recv(sock, buf, len, flags) \
	LP4(0x4e, LONG, amitcp_Recv, LONG, sock, d0, void *, buf, a0, LONG, len, d1, LONG, flags, d2, \
	, state->SocketBase)

#define amitcp_RecvFrom(sock, buf, len, flags, from, fromlen) \
	LP6(0x48, LONG, amitcp_RecvFrom, LONG, sock, d0, void *, buf, a0, LONG, len, d1, LONG, flags, d2, struct sockaddr *, from, a1, LONG *, fromlen, a2, \
	, state->SocketBase)

#define amitcp_RecvMsg(sock, msg, flags) \
	LP3(0x114, LONG, amitcp_RecvMsg, LONG, sock, d0, struct msghdr *, msg, a0, LONG, flags, d1, \
	, state->SocketBase)

#define amitcp_ReleaseCopyOfSocket(fd, id) \
	LP2(0x9c, LONG, amitcp_ReleaseCopyOfSocket, LONG, fd, d0, LONG, id, d1, \
	, state->SocketBase)

#define amitcp_ReleaseSocket(fd, id) \
	LP2(0x96, LONG, amitcp_ReleaseSocket, LONG, fd, d0, LONG, id, d1, \
	, state->SocketBase)

#define amitcp_Send(sock, msg, len, flags) \
	LP4(0x42, LONG, amitcp_Send, LONG, sock, d0, const void *, msg, a0, LONG, len, d1, LONG, flags, d2, \
	, state->SocketBase)

#define amitcp_SendMsg(sock, msg, flags) \
	LP3(0x10e, LONG, amitcp_SendMsg, LONG, s, d0, const struct msghdr *, msg, a0, LONG, flags, d1, \
	, state->SocketBase)

#define amitcp_SendTo(sock, msg, len, flags, to, tolen) \
	LP6(0x3c, LONG, amitcp_SendTo, LONG, sock, d0, const void *, msg, a0, LONG, len, d1, LONG, flags, d2, const struct sockaddr *, to, a1, LONG, tolen, d3, \
	, state->SocketBase)

#define amitcp_SetErrnoPtr(errno_p, size) \
	LP2(0xa8, LONG, amitcp_SetErrnoPtr, void *, errno_p, a0, LONG, size, d0, \
	, state->SocketBase)

#define amitcp_SetSockOpt(sock, level, optname, optval, optlen) \
	LP5(0x5a, LONG, amitcp_SetSockOpt, LONG, sock, d0, LONG, level, d1, LONG, optname, d2, const void *, optval, a0, LONG, optlen, d3, \
	, state->SocketBase)

#define amitcp_SetSocketSignals(SIGINTR, SIGIO, SIGURG) \
	LP3NR(0x84, amitcp_SetSocketSignals, ULONG, SIGINTR, d0, ULONG, SIGIO, d1, ULONG, SIGURG, d2, \
	, state->SocketBase)

#define amitcp_Shutdown(sock, how) \
	LP2(0x54, LONG, amitcp_Shutdown, LONG, sock, d0, LONG, how, d1, \
	, state->SocketBase)

#define amitcp_Socket(domain, type, protocol) \
	LP3(0x1e, LONG, amitcp_Socket, LONG, domain, d0, LONG, type, d1, LONG, protocol, d2, \
	, state->SocketBase)

#define amitcp_SocketBaseTagList(taglist) \
	LP1(0x126, LONG, amitcp_SocketBaseTagList, struct TagItem *, taglist, a0, \
	, state->SocketBase)

#ifndef NO_INLINE_STDARG
#define amitcp_SocketBaseTags(tags...) \
	({ULONG _tags[] = { tags }; amitcp_SocketBaseTagList((struct TagItem *)_tags);})
#endif /* !NO_INLINE_STDARG */

#define amitcp_SyslogA(level, format, ap) \
	LP3NR(0x102, amitcp_SyslogA, ULONG, level, d0, const char *, format, a0, va_list, ap, a1, \
	, state->SocketBase)

#define amitcp_WaitSelect(nfds, readfds, writefds, execptfds, timeout, maskp) \
	LP6(0x7e, LONG, amitcp_WaitSelect, LONG, nfds, d0, fd_set *, readfds, a0, fd_set *, writefds, a1, fd_set *, execptfds, a2, struct timeval *, timeout, a3, ULONG *, maskp, d1, \
	, state->SocketBase)

/* IN225 functions */

#ifndef u_short
#define u_short USHORT
#endif

#ifndef u_long
#define u_long ULONG
#endif

int in225_accept (int, struct sockaddr *, socklen_t *);
int in225_bind (int, struct sockaddr *, int );
void in225_cleanup_sockets ( void ) ;
int in225_connect (int, struct sockaddr *, int);
void in225_endhostent ( void );
void in225_endnetent ( void );
void in225_endprotoent ( void );
void in225_endpwent( void );
void in225_endservent ( void );
int in225_getdomainname (char *, int);
gid_t in225_getgid (void);
int in225_getgroups (int, gid_t *);
int in225_get_h_errno ( void );
struct hostent * in225_gethostbyaddr ( char *, int, int );
struct hostent * in225_gethostbyname ( char * );
struct hostent * in225_gethostent ( void );
int in225_gethostname (char *, int);
char *getlogin (void);
struct netent * in225_getnetbyaddr ( long, int );
struct netent * in225_getnetbyname ( char * );
struct netent * in225_getnetent ( void );
int in225_getpeername ( int, struct sockaddr *, int * );
struct protoent * in225_getprotobyname ( char * );
struct protoent * in225_getprotobynumber ( int );
struct protoent * in225_getprotoent ( void );
struct passwd * in225_getpwent( void ) ;
struct passwd * in225_getpwnam( char * );
struct passwd * in225_getpwuid( uid_t );
struct state *in225_get_res ( void );
struct servent *in225_getservent ( void );
struct servent *in225_getservbyname ( char *, char * );
struct servent *in225_getservbyport ( u_short, char * );
int in225_getsockname ( int, struct sockaddr *, socklen_t * );
int in225_getsockopt ( int, int, int, char *, socklen_t * );
uid_t in225_getuid (void);
mode_t in225_getumask (void);
short in225_get_tz(void);
u_long in225_inet_addr ( char * );
int in225_inet_aton (const char *cp, struct in_addr *addr);
int in225_inet_lnaof ( struct in_addr );
struct in_addr in225_inet_makeaddr ( int, int );
int in225_inet_netof ( struct in_addr );
int in225_inet_network ( char * );
char *in225_inet_ntoa ( struct in_addr );
int in225_listen (int , int);
int in225_rcmd( char **, u_short, char *, char *, char *, int *);
int in225_recv(int, char *, int, int );
int in225_recvfrom( int, char *, int, int, struct sockaddr *, socklen_t *);
int in225_recvmsg(int, struct msghdr *, int );
int in225_s_close (int);
STRPTR in225_s_crypt (STRPTR, STRPTR, STRPTR);
void in225_s_dev_list (u_long, int);
int in225_s_dup (int);
int in225_s_dup2 (int, int);
int in225_s_errno (void);
BYTE in225_s_getsignal ( UWORD );
int in225_s_inherit( void * );
int in225_s_ioctl ( int, int, char * );
void *in225_s_release( int );
void in225_s_dev_list(u_long, int);
int in225_select( int, fd_set *, fd_set *, fd_set *, struct timeval *);
int in225_selectwait (int, fd_set *, fd_set *, fd_set *, struct timeval *, long *);
int in225_send (int, char *, int, int );
int in225_sendto (int, char *, int, int, struct sockaddr *, int );
int in225_sendmsg (int, struct msghdr *, int );
int in225_setgid ( gid_t );
int in225_set_h_errno ( int );
void in225_sethostent ( int );
void in225_setnetent ( int );
void in225_setprotoent ( int );
void in225_setpwent( int );
void in225_setservent ( int );
int in225_setuid ( uid_t );
int in225_setsockopt ( int, int, int, char *, int );
ULONG in225_setup_sockets ( UWORD, int * );
int in225_shutdown (int, int);
int in225_socket( int, int, int );
int in225_s_syslog(int, char *);
int in225_syslogA (int, char *, int *);
int in225_vsyslog (int, char *, int *);
int in225_syslog(int, char *, ...);
char *in225_strerror( int );
mode_t in225_umask ( mode_t );
int in225_reconfig(void) ;
struct group * in225_getgrgid ( gid_t );
struct group * in225_getgrnam ( const char * );
struct group * in225_getgrent ( void );
void in225_setgrent ( int );
void in225_endgrent ( void );
void in225_ConfigureInetA( struct TagItem * );
void in225_ConfigureInet( ULONG, ... );

#define in225_accept(sock, name, lenp) \
	LP3(0xba, int, in225_accept, int, sock, d0, struct sockaddr *, name, a0, socklen_t *, lenp, a1, \
	, state->SocketBase)

#define in225_bind(sock, name, namelen) \
	LP3(0xc0, int, in225_bind, int, sock, d0, const struct sockaddr *, name, a1, int, namelen, d1, \
	, state->SocketBase)

#define in225_cleanup_sockets() \
	LP0NR(0x24, in225_cleanup_sockets, \
	, state->SocketBase)

#define in225_s_close(socket) \
	LP1(0x30, int, in225_close, int, socket, d0, \
	, state->SocketBase)

#define in225_connect(sock, name, namelen) \
	LP3(0xc6, int, in225_connect, int, sock, d0, const struct sockaddr *, name, a1, int, namelen, d1, \
	, state->SocketBase)

#define in225_dev_list(res, size) \
	LP2NR(0x1bc, in225_dev_list, u_long, res, d0, int, size, d1, \
	, state->SocketBase)

#define in225_endhostent() \
	LP0NR(0x7e, in225_endhostent, \
	, state->SocketBase)

#define in225_endnetent() \
	LP0NR(0x120, in225_endnetent, \
	, state->SocketBase)

#define in225_endprotoent() \
	LP0NR(0x13e, in225_endprotoent, \
	, state->SocketBase)

#define in225_endpwent() \
	LP0NR(0x18c, in225_endpwent, \
	, state->SocketBase)

#define in225_endservent() \
	LP0NR(0x15c, in225_endservent, \
	, state->SocketBase)

#define in225_get_tz() \
	LP0(0x5a, short, in225_get_tz, \
	, state->SocketBase)

#define in225_getdomainname(name, namelen) \
	LP2(0x60, int, in225_getdomainname, char *, name, a1, int, namelen, d1, \
	, state->SocketBase)

#define in225_getgid() \
	LP0(0x48, gid_t, in225_getgid, \
	, state->SocketBase)

#define in225_getgroups(num, gids) \
	LP2(0x4e, int, in225_getgroups, int, num, d0, int *, gids, a0, \
	, state->SocketBase)

#define in225_gethostbyaddr(addr, len, type) \
	LP3(0x90, struct hostent *, in225_gethostbyaddr, const char *, addr, a0, int, len, d0, int, type, d1, \
	, state->SocketBase)

#define in225_gethostbyname(name) \
	LP1(0x8a, struct hostent *, in225_gethostbyname, const char *, name, a0, \
	, state->SocketBase)

#define in225_gethostent() \
	LP0(0x84, struct hostent *, in225_gethostent, \
	, state->SocketBase)

#define in225_gethostname(name, length) \
	LP2(0x72, int, in225_gethostname, char *, name, a0, int, length, d0, \
	, state->SocketBase)

#define in225_getlogin() \
	LP0(0x54, char *, in225_getlogin, \
	, state->SocketBase)

#define in225_getnetbyaddr(net, type) \
	LP2(0x12c, struct netent *, in225_getnetbyaddr, long, net, d0, int, type, d1, \
	, state->SocketBase)

#define in225_getnetbyname(name) \
	LP1(0x132, struct netent *, in225_getnetbyname, const char *, name, a0, \
	, state->SocketBase)

#define in225_getnetent() \
	LP0(0x126, struct netent *, in225_getnetent, \
	, state->SocketBase)

#define in225_getpeername(sock, name, lenp) \
	LP3(0x198, int, in225_getpeername, int, sock, d0, struct sockaddr *, name, a0, int *, lenp, a1, \
	, state->SocketBase)

#define in225_getprotobyname(name) \
	LP1(0x14a, struct protoent *, in225_getprotobyname, const char *, name, a0, \
	, state->SocketBase)

#define in225_getprotobynumber(proto) \
	LP1(0x150, struct protoent *, in225_getprotobynumber, int, proto, d0, \
	, state->SocketBase)

#define in225_getprotoent() \
	LP0(0x144, struct protoent *, in225_getprotoent, \
	, state->SocketBase)

#define in225_getpwent() \
	LP0(0x180, struct AS225_passwd *, in225_getpwent, \
	, state->SocketBase)

#define in225_getpwnam(name) \
	LP1(0x17a, struct AS225_passwd *, in225_getpwnam, char *, name, a0, \
	, state->SocketBase)

#define in225_getpwuid(uid) \
	LP1(0x174, struct AS225_passwd *, in225_getpwuid, uid_t, uid, d1, \
	, state->SocketBase)

#define in225_getservbyname(name, proto) \
	LP2(0x168, struct servent *, in225_getservbyname, const char *, name, a0, const char *, proto, a1, \
	, state->SocketBase)

#define in225_getservbyport(port, proto) \
	LP2(0x16e, struct servent *, in225_getservbyport, u_short, port, d0, const char *, proto, a0, \
	, state->SocketBase)

#define in225_getservent() \
	LP0(0x162, struct servent *, in225_getservent, \
	, state->SocketBase)

#define in225_getsignal(type) \
	LP1(0x36, BYTE, in225_getsignal, UWORD, type, d1, \
	, state->SocketBase)

#define in225_getsockname(sock, name, lenp) \
	LP3(0x19e, int, in225_getsockname, int, sock, d0, struct sockaddr *, name, a0, socklen_t *, lenp, a1, \
	, state->SocketBase)

#define in225_getsockopt(sock, level, optname, optval, optlenp) \
	LP5(0x114, int, in225_getsockopt, int, sock, d0, int, level, d1, int, optname, d2, char *, optval, a0, socklen_t *, optlenp, a1, \
	, state->SocketBase)

#define in225_getuid() \
	LP0(0x42, uid_t, in225_getuid, \
	, state->SocketBase)

#define in225_getumask() \
	LP0(0x66, mode_t, in225_getumask, \
	, state->SocketBase)

#define in225_inet_addr(cp) \
	LP1(0x96, u_long, in225_inet_addr, char *, cp, a1, \
	, state->SocketBase)

#define in225_inet_lnaof(in) \
	LP1(0xa2, int, in225_inet_lnaof, struct, in, d1, \
	, state->SocketBase)

#define in225_inet_makeaddr(net, lna) \
	LP2(0x9c, struct in_addr, in225_inet_makeaddr, int, net, d0, int, lna, d1, \
	, state->SocketBase)

#define in225_inet_netof(in) \
	LP1(0xa8, int, in225_inet_netof, struct, in, d1, \
	, state->SocketBase)

#define in225_inet_network(str) \
	LP1(0xae, int, in225_inet_network, char *, str, a1, \
	, state->SocketBase)

#define in225_inet_ntoa(in) \
	LP1(0xb4, char *, in225_inet_ntoa, struct in_addr, in, d1, \
	, state->SocketBase)

#define in225_inherit(sp) \
	LP1(0x1b6, int, in225_inherit, void *, sp, d1, \
	, state->SocketBase)

#define in225_s_ioctl(sock, cmd, data) \
	LP3(0xcc, int, in225_ioctl, int, sock, d0, int, cmd, d1, char *, data, a0, \
	, state->SocketBase)

#define in225_listen(sock, backlog) \
	LP2(0xd2, int, in225_listen, int, sock, d0, int, backlog, d1, \
	, state->SocketBase)

#define in225_rcmd(ahost, inport, luser, ruser, cmd, fd2p) \
	LP6(0x192, int, in225_rcmd, char **, ahost, d0, u_short, inport, d1, char *, luser, a0, char *, ruser, a1, char *, cmd, a2, int *, fd2p, d2, \
	, state->SocketBase)

#define in225_reconfig() \
	LP0(0x1aa, int, in225_reconfig, \
	, state->SocketBase)

#define in225_recv(sock, buf, len, flags) \
	LP4(0xd8, int, in225_recv, int, sock, d0, char *, buf, a0, int, len, d1, int, flags, d2, \
	, state->SocketBase)

#define in225_recvfrom(sock, buf, len, flags, from, fromlen) \
	LP6(0xde, int, in225_recvfrom, int, sock, d0, char *, buf, a0, int, len, d1, int, flags, d2, struct sockaddr *, from, a1, socklen_t *, fromlen, a2, \
	, state->SocketBase)

#define in225_recvmsg(sock, msg, flags) \
	LP3(0xe4, int, in225_recvmsg, int, sock, d0, struct msghdr *, msg, a0, int, flags, d1, \
	, state->SocketBase)

#define in225_release(sock) \
	LP1NR(0x1b0, in225_release, int, sock, d1, \
	, state->SocketBase)

#define in225_select(numfds, rfds, wfds, efds, timeout) \
	LP5(0xea, int, in225_select, int, numfds, d0, fd_set *, rfds, a0, fd_set *, wfds, a1, fd_set *, efds, a2, struct timeval *, timeout, d1, \
	, state->SocketBase)

#define in225_selectwait(numfds, rfds, wfds, efds, timeout, umask) \
	LP6(0xf0, int, in225_selectwait, int, numfds, d0, fd_set *, rfds, a0, fd_set *, wfds, a1, fd_set *, efds, a2, struct timeval *, timeout, d1, long *, umask, d2, \
	, state->SocketBase)

#define in225_send(sock, buf, len, flags) \
	LP4(0xf6, int, in225_send, int, sock, d0, const char *, buf, a0, int, len, d1, int, flags, a1, \
	, state->SocketBase)

#define in225_sendmsg(sock, msg, flags) \
	LP3(0x102, int, in225_sendmsg, int, sock, d0, const struct msghdr *, msg, a0, int, flags, d1, \
	, state->SocketBase)

#define in225_sendto(sock, buf, len, flags, to, to_len) \
	LP6(0xfc, int, in225_sendto, int, sock, d0, const char *, buf, a0, int, len, d1, int, flags, d2, const struct sockaddr *, to, a1, int, to_len, d3, \
	, state->SocketBase)

#define in225_sethostent(flag) \
	LP1NR(0x78, in225_sethostent, int, flag, d1, \
	, state->SocketBase)

#define in225_setnetent(flag) \
	LP1NR(0x11a, in225_setnetent, int, flag, d1, \
	, state->SocketBase)

#define in225_setprotoent(flag) \
	LP1NR(0x138, in225_setprotoent, int, flag, d1, \
	, state->SocketBase)

#define in225_setpwent(flag) \
	LP1NR(0x186, in225_setpwent, int, flag, d1, \
	, state->SocketBase)

#define in225_setservent(flag) \
	LP1NR(0x156, in225_setservent, int, flag, d1, \
	, state->SocketBase)

#define in225_setsockopt(sock, level, optname, optval, optlen) \
	LP5(0x10e, int, in225_setsockopt, int, sock, d0, int, level, d1, int, optname, d2, const char *, optval, a0, int, optlen, d3, \
	, state->SocketBase)

#define in225_setup_sockets(max_socks, errno_ptr) \
	LP2(0x1e, ULONG, in225_setup_sockets, UWORD, max_socks, d1, int *, errno_ptr, a0, \
	, state->SocketBase)

#define in225_shutdown(sock, how) \
	LP2(0x108, int, in225_shutdown, int, sock, d0, int, how, d1, \
	, state->SocketBase)

#define in225_socket(family, type, protocol) \
	LP3(0x2a, int, in225_socket, int, family, d0, int, type, d1, int, protocol, d2, \
	, state->SocketBase)

#define in225_strerror(num) \
	LP1(0x3c, char *, in225_strerror, int, num, d1, \
	, state->SocketBase)

#define in225_syslog(pri, msg) \
	LP2(0x1a4, int, in225_syslog, int, pri, d0, char *, msg, a0, \
	, state->SocketBase)

#define in225_umask(cmask) \
	LP1(0x6c, mode_t, in225_umask, mode_t, cmask, d0, \
	, state->SocketBase)

/* Termite TCP functions */

int termite_accept(
        int                   Socket,
        struct sockaddr      *Addr,
        socklen_t            *AddrLen);
int termite_bind(
        int                   Socket,
        char                 *Name,
        int                   NameLen);
int termite_CloseSocket(
        int                   Socket);
int termite_connect(
        int                   Socket,
        struct sockaddr      *Name,
        int                   NameLen);
struct hostent *termite_gethostbyname(
        char                 *Name);
struct servent *termite_getservbyname(
        char                 *Service,
        char                 *Protocol);
int termite_gethostname(
        char                 *hostname,
        int                   size);
int termite_IoctlSocket(
        int                   Socket,
        int                   cmd,
        char                 *data);
int termite_recv(
        int                   Socket,
        char                 *Buffer,
        int                   Length,
        int                   Flags);
int termite_send(
        int                   Socket,
        char                 *Msg,
        int                   Length,
        int                   Flags);
int termite_setsockopt(
        int                   s,
        int                   level,
        int                   name,
        char                 *val,
        int                   valsize);
int termite_socket(
        int                   Domain,
        int                   Type,
        int                   Protocol);
int termite_SocketBaseTagList(
        struct TagItem       *tagList);
int termite_SocketBaseTags(ULONG, ...);
int termite_WaitSelect(
        int                   NumFDS,
        fd_set               *ReadFDS,
        fd_set               *WriteFDS,
        fd_set               *ExceptFDS,
        struct timeval       *Timeout,
        unsigned long        *Signals);
int termite_getsockname(
        int                   Socket,
        struct sockaddr      *name,
        socklen_t            *namelen);
int termite_listen(
        int                   Socket,
        int                   BackLog);
int termite_inet_addr(
        char                 *Addr);
int termite_shutdown(int s, int how);

#define termite_CloseSocket(__pD0) \
	LP1(0x2a, int, CloseSocket, int, __pD0, d0, \
	, state->SocketBase)

#define termite_IoctlSocket(__pD0, __pD1, __pA0) \
	LP3(0x72, int, IoctlSocket, int, __pD0, d0, int, __pD1, d1, char                 *, __pA0, a0, \
	, state->SocketBase)

#define termite_SetErrnoPtr(__pA0) \
	LP1NR(0x96, SetErrnoPtr, int                  *, __pA0, a0, \
	, state->SocketBase)

#define termite_SetSocketSignals(__pD0, __pD1, __pD2) \
	LP3NR(0x9c, SetSocketSignals, unsigned long, __pD0, d0, unsigned long, __pD1, d1, unsigned long, __pD2, d2, \
	, state->SocketBase)

#define termite_SocketBaseTagList(__pA0) \
	LP1(0xb4, int, SocketBaseTagList, struct TagItem       *, __pA0, a0, \
	, state->SocketBase)

#ifndef NO_INLINE_STDARG
#define termite_SocketBaseTags(tags...) \
	({ULONG _tags[] = { tags }; termite_SocketBaseTagList((struct TagItem       *)_tags);})
#endif /* !NO_INLINE_STDARG */

#define termite_WaitSelect(__pD0, __pA0, __pA1, __pA2, __pA3, __pD1) \
	LP6(0xba, int, WaitSelect, int, __pD0, d0, fd_set               *, __pA0, a0, fd_set               *, __pA1, a1, fd_set               *, __pA2, a2, struct timeval       *, __pA3, a3, unsigned long        *, __pD1, d1, \
	, state->SocketBase)

#define termite_accept(__pD0, __pA0, __pA1) \
	LP3(0x1e, int, accept, int, __pD0, d0, struct sockaddr      *, __pA0, a0, socklen_t *, __pA1, a1, \
	, state->SocketBase)

#define termite_bind(__pD0, __pA0, __pD1) \
	LP3(0x24, int, bind, int, __pD0, d0, char                 *, __pA0, a0, int, __pD1, d1, \
	, state->SocketBase)

#define termite_connect(__pD0, __pA0, __pD1) \
	LP3(0x30, int, connect, int, __pD0, d0, struct sockaddr      *, __pA0, a0, int, __pD1, d1, \
	, state->SocketBase)

#define termite_gethostbyaddr(__pA0, __pD0, __pD1) \
	LP3(0x36, struct hostent *, gethostbyaddr, char                 *, __pA0, a0, int, __pD0, d0, int, __pD1, d1, \
	, state->SocketBase)

#define termite_gethostbyname(__pA0) \
	LP1(0x3c, struct hostent *, gethostbyname, char                 *, __pA0, a0, \
	, state->SocketBase)

#define termite_gethostid() \
	LP0(0x42, unsigned long, gethostid, \
	, state->SocketBase)

#define termite_gethostname(__pA0, __pD0) \
	LP2(0x48, int, gethostname, char                 *, __pA0, a0, int, __pD0, d0, \
	, state->SocketBase)

#define termite_getprotobyname(__pA0) \
	LP1(0x4e, struct protoent *, getprotobyname, char                 *, __pA0, a0, \
	, state->SocketBase)

#define termite_getprotobynumber(__pD0) \
	LP1(0x54, struct protoent *, getprotobynumber, int, __pD0, d0, \
	, state->SocketBase)

#define termite_getservbyname(__pA0, __pA1) \
	LP2(0x5a, struct servent *, getservbyname, char                 *, __pA0, a0, char                 *, __pA1, a1, \
	, state->SocketBase)

#define termite_getsockname(__pD0, __pA0, __pA1) \
	LP3(0x60, int, getsockname, int, __pD0, d0, struct sockaddr *, __pA0, a0, socklen_t *, __pA1, a1, \
	, state->SocketBase)

#define termite_inet_addr(__pA0) \
	LP1(0x66, int, inet_addr, char                 *, __pA0, a0, \
	, state->SocketBase)

#define termite_inet_ntoa(__pD0) \
	LP1(0x6c, char *, inet_ntoa, long, __pD0, d0, \
	, state->SocketBase)

#define termite_listen(__pD0, __pD1) \
	LP2(0x78, int, listen, int, __pD0, d0, int, __pD1, d1, \
	, state->SocketBase)

#define termite_recv(__pD0, __pA0, __pD1, __pD2) \
	LP4(0x7e, int, recv, int, __pD0, d0, char                 *, __pA0, a0, int, __pD1, d1, int, __pD2, d2, \
	, state->SocketBase)

#define termite_recvfrom(__pD0, __pA0, __pD1, __pD2, __pA1, __pA2) \
	LP6(0x84, int, recvfrom, int, __pD0, d0, char                 *, __pA0, a0, int, __pD1, d1, int, __pD2, d2, struct sockaddr *, __pA1, a1, socklen_t *, __pA2, a2, \
	, state->SocketBase)

#define termite_send(__pD0, __pA0, __pD1, __pD2) \
	LP4(0x8a, int, send, int, __pD0, d0, char                 *, __pA0, a0, int, __pD1, d1, int, __pD2, d2, \
	, state->SocketBase)

#define termite_sendto(__pD0, __pA0, __pD1, __pD2, __pA1, __pD3) \
	LP6(0x90, int, sendto, int, __pD0, d0, const void *, __pA0, a0, int, __pD1, d1, int, __pD2, d2, const struct sockaddr *, __pA1, a1, socklen_t, __pD3, d3, \
	, state->SocketBase)

#define termite_setsockopt(__pD0, __pD1, __pD2, __pA0, __pD3) \
	LP5(0xa2, int, setsockopt, int, __pD0, d0, int, __pD1, d1, int, __pD2, d2, char                 *, __pA0, a0, int, __pD3, d3, \
	, state->SocketBase)

#define termite_shutdown(__pD0, __pD1) \
	LP2(0xa8, int, shutdown, int, __pD0, d0, int, __pD1, d1, \
	, state->SocketBase)

#define termite_socket(__pD0, __pD1, __pD2) \
	LP3(0xae, int, socket, int, __pD0, d0, int, __pD1, d1, int, __pD2, d2, \
	, state->SocketBase)

#endif /* NO_MTCP_PROTOS */

#endif /* MULTITCP */
