/* Automatically generated header! Do not edit! */

#ifndef _INLINE_BSDSOCKET_H
#define _INLINE_BSDSOCKET_H

#ifndef __INLINE_MACROS_H
#include <inline/macros.h>
#endif /* !__INLINE_MACROS_H */

#ifndef BSDSOCKET_BASE_NAME
#define BSDSOCKET_BASE_NAME SocketBase
#endif /* !BSDSOCKET_BASE_NAME */

#define AbortInterfaceConfig(___message) \
  LP1NR(0x1ec, AbortInterfaceConfig, struct AddressAllocationMessage *, ___message, a0, \
  , BSDSOCKET_BASE_NAME)

#define AddDomainNameServer(___address) \
  LP1(0x204, LONG, AddDomainNameServer, STRPTR, ___address, a0, \
  , BSDSOCKET_BASE_NAME)

#define AddInterfaceTagList(___interface_name, ___device_name, ___unit, ___tags) \
  LP4(0x1bc, LONG, AddInterfaceTagList, STRPTR, ___interface_name, a0, STRPTR, ___device_name, a1, LONG, ___unit, d0, struct TagItem *, ___tags, a2, \
  , BSDSOCKET_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define AddInterfaceTags(a0, a1, a2, ...) \
  ({ULONG _tags[] = { __VA_ARGS__ }; AddInterfaceTagList((a0), (a1), (a2), (struct TagItem *)_tags);})
#endif /* !NO_INLINE_STDARG */

#define AddNetMonitorHookTagList(___type, ___hook, ___tags) \
  LP3(0x1f2, LONG, AddNetMonitorHookTagList, LONG, ___type, d0, struct Hook *, ___hook, a0, struct TagItem *, ___tags, a1, \
  , BSDSOCKET_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define AddNetMonitorHookTags(a0, a1, ...) \
  ({ULONG _tags[] = { __VA_ARGS__ }; AddNetMonitorHookTagList((a0), (a1), (struct TagItem *)_tags);})
#endif /* !NO_INLINE_STDARG */

#define AddRouteTagList(___tags) \
  LP1(0x19e, LONG, AddRouteTagList, struct TagItem *, ___tags, a0, \
  , BSDSOCKET_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define AddRouteTags(...) \
  ({ULONG _tags[] = { __VA_ARGS__ }; AddRouteTagList((struct TagItem *)_tags);})
#endif /* !NO_INLINE_STDARG */

#define BeginInterfaceConfig(___message) \
  LP1NR(0x1e6, BeginInterfaceConfig, struct AddressAllocationMessage *, ___message, a0, \
  , BSDSOCKET_BASE_NAME)

#define CloseSocket(___sock) \
  LP1(0x78, LONG, CloseSocket, LONG, ___sock, d0, \
  , BSDSOCKET_BASE_NAME)

#define ConfigureInterfaceTagList(___interface_name, ___tags) \
  LP2(0x1c2, LONG, ConfigureInterfaceTagList, STRPTR, ___interface_name, a0, struct TagItem *, ___tags, a1, \
  , BSDSOCKET_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define ConfigureInterfaceTags(a0, ...) \
  ({ULONG _tags[] = { __VA_ARGS__ }; ConfigureInterfaceTagList((a0), (struct TagItem *)_tags);})
#endif /* !NO_INLINE_STDARG */

#define CreateAddrAllocMessageA(___version, ___protocol, ___interface_name, ___result_ptr, ___tags) \
  LP5(0x1da, LONG, CreateAddrAllocMessageA, LONG, ___version, d0, LONG, ___protocol, d1, STRPTR, ___interface_name, a0, struct AddressAllocationMessage **, ___result_ptr, a1, struct TagItem *, ___tags, a2, \
  , BSDSOCKET_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define CreateAddrAllocMessage(a0, a1, a2, a3, ...) \
  ({ULONG _tags[] = { __VA_ARGS__ }; CreateAddrAllocMessageA((a0), (a1), (a2), (a3), (struct TagItem *)_tags);})
#endif /* !NO_INLINE_STDARG */

#define DeleteAddrAllocMessage(___aam) \
  LP1NR(0x1e0, DeleteAddrAllocMessage, struct AddressAllocationMessage *, ___aam, a0, \
  , BSDSOCKET_BASE_NAME)

#define DeleteRouteTagList(___tags) \
  LP1(0x1a4, LONG, DeleteRouteTagList, struct TagItem *, ___tags, a0, \
  , BSDSOCKET_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define DeleteRouteTags(...) \
  ({ULONG _tags[] = { __VA_ARGS__ }; DeleteRouteTagList((struct TagItem *)_tags);})
#endif /* !NO_INLINE_STDARG */

#define Dup2Socket(___old_socket, ___new_socket) \
  LP2(0x108, LONG, Dup2Socket, LONG, ___old_socket, d0, LONG, ___new_socket, d1, \
  , BSDSOCKET_BASE_NAME)

#define Errno() \
  LP0(0xa2, LONG, Errno, \
  , BSDSOCKET_BASE_NAME)

#define FreeRouteInfo(___buf) \
  LP1NR(0x1b0, FreeRouteInfo, struct rt_msghdr *, ___buf, a0, \
  , BSDSOCKET_BASE_NAME)

#define GetNetworkStatistics(___type, ___version, ___destination, ___size) \
  LP4(0x1fe, LONG, GetNetworkStatistics, LONG, ___type, d0, LONG, ___version, d1, APTR, ___destination, a0, LONG, ___size, d2, \
  , BSDSOCKET_BASE_NAME)

#define GetRouteInfo(___address_family, ___flags) \
  LP2(0x1b6, struct rt_msghdr *, GetRouteInfo, LONG, ___address_family, d0, LONG, ___flags, d1, \
  , BSDSOCKET_BASE_NAME)

#define GetSocketEvents(___event_ptr) \
  LP1(0x12c, LONG, GetSocketEvents, ULONG *, ___event_ptr, a0, \
  , BSDSOCKET_BASE_NAME)

#define In_CanForward(___address) \
  LP1(0x26a, LONG, In_CanForward, in_addr_t, ___address, d0, \
  , BSDSOCKET_BASE_NAME)

#define In_LocalAddr(___address) \
  LP1(0x264, LONG, In_LocalAddr, in_addr_t, ___address, d0, \
  , BSDSOCKET_BASE_NAME)

#define Inet_LnaOf(___in) \
  LP1(0xba, in_addr_t, Inet_LnaOf, in_addr_t, ___in, d0, \
  , BSDSOCKET_BASE_NAME)

#define Inet_MakeAddr(___net, ___host) \
  LP2(0xc6, in_addr_t, Inet_MakeAddr, in_addr_t, ___net, d0, in_addr_t, ___host, d1, \
  , BSDSOCKET_BASE_NAME)

#define Inet_NetOf(___in) \
  LP1(0xc0, in_addr_t, Inet_NetOf, in_addr_t, ___in, d0, \
  , BSDSOCKET_BASE_NAME)

#define Inet_NtoA(___ip) \
  LP1(0xae, STRPTR, Inet_NtoA, in_addr_t, ___ip, d0, \
  , BSDSOCKET_BASE_NAME)

#define IoctlSocket(___sock, ___req, ___argp) \
  LP3(0x72, LONG, IoctlSocket, LONG, ___sock, d0, ULONG, ___req, d1, APTR, ___argp, a0, \
  , BSDSOCKET_BASE_NAME)

#define ObtainDomainNameServerList() \
  LP0(0x216, struct List *, ObtainDomainNameServerList, \
  , BSDSOCKET_BASE_NAME)

#define ObtainInterfaceList() \
  LP0(0x1ce, struct List *, ObtainInterfaceList, \
  , BSDSOCKET_BASE_NAME)

#define ObtainServerSocket() \
  LP0(0x2b8, LONG, ObtainServerSocket, \
  , BSDSOCKET_BASE_NAME)

#define ObtainSocket(___id, ___domain, ___type, ___protocol) \
  LP4(0x90, LONG, ObtainSocket, LONG, ___id, d0, LONG, ___domain, d1, LONG, ___type, d2, LONG, ___protocol, d3, \
  , BSDSOCKET_BASE_NAME)

#define ProcessIsServer(___pr) \
  LP1(0x2b2, BOOL, ProcessIsServer, struct Process *, ___pr, a0, \
  , BSDSOCKET_BASE_NAME)

#define QueryInterfaceTagList(___interface_name, ___tags) \
  LP2(0x1d4, LONG, QueryInterfaceTagList, STRPTR, ___interface_name, a0, struct TagItem *, ___tags, a1, \
  , BSDSOCKET_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define QueryInterfaceTags(a0, ...) \
  ({ULONG _tags[] = { __VA_ARGS__ }; QueryInterfaceTagList((a0), (struct TagItem *)_tags);})
#endif /* !NO_INLINE_STDARG */

#define ReleaseCopyOfSocket(___sock, ___id) \
  LP2(0x9c, LONG, ReleaseCopyOfSocket, LONG, ___sock, d0, LONG, ___id, d1, \
  , BSDSOCKET_BASE_NAME)

#define ReleaseDomainNameServerList(___list) \
  LP1NR(0x210, ReleaseDomainNameServerList, struct List *, ___list, a0, \
  , BSDSOCKET_BASE_NAME)

#define ReleaseInterfaceList(___list) \
  LP1NR(0x1c8, ReleaseInterfaceList, struct List *, ___list, a0, \
  , BSDSOCKET_BASE_NAME)

#define ReleaseSocket(___sock, ___id) \
  LP2(0x96, LONG, ReleaseSocket, LONG, ___sock, d0, LONG, ___id, d1, \
  , BSDSOCKET_BASE_NAME)

#define RemoveDomainNameServer(___address) \
  LP1(0x20a, LONG, RemoveDomainNameServer, STRPTR, ___address, a0, \
  , BSDSOCKET_BASE_NAME)

#define RemoveNetMonitorHook(___hook) \
  LP1NR(0x1f8, RemoveNetMonitorHook, struct Hook *, ___hook, a0, \
  , BSDSOCKET_BASE_NAME)

#define SetErrnoPtr(___errno_ptr, ___size) \
  LP2NR(0xa8, SetErrnoPtr, APTR, ___errno_ptr, a0, LONG, ___size, d0, \
  , BSDSOCKET_BASE_NAME)

#define SetSocketSignals(___int_mask, ___io_mask, ___urgent_mask) \
  LP3NR(0x84, SetSocketSignals, ULONG, ___int_mask, d0, ULONG, ___io_mask, d1, ULONG, ___urgent_mask, d2, \
  , BSDSOCKET_BASE_NAME)

#define SocketBaseTagList(___tags) \
  LP1(0x126, LONG, SocketBaseTagList, struct TagItem *, ___tags, a0, \
  , BSDSOCKET_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define SocketBaseTags(...) \
  ({ULONG _tags[] = { __VA_ARGS__ }; SocketBaseTagList((struct TagItem *)_tags);})
#endif /* !NO_INLINE_STDARG */

#define WaitSelect(___nfds, ___read_fds, ___write_fds, ___except_fds, ___timeout, ___signals) \
  LP6(0x7e, LONG, WaitSelect, LONG, ___nfds, d0, APTR, ___read_fds, a0, APTR, ___write_fds, a1, APTR, ___except_fds, a2, struct __timeval *, ___timeout, a3, ULONG *, ___signals, d1, \
  , BSDSOCKET_BASE_NAME)

#define accept(___sock, ___addr, ___addrlen) \
  LP3(0x30, LONG, accept, LONG, ___sock, d0, struct sockaddr *, ___addr, a0, socklen_t *, ___addrlen, a1, \
  , BSDSOCKET_BASE_NAME)

#define bind(___sock, ___name, ___namelen) \
  LP3(0x24, LONG, bind, LONG, ___sock, d0, struct sockaddr *, ___name, a0, socklen_t, ___namelen, d1, \
  , BSDSOCKET_BASE_NAME)

#define bpf_close(___channel) \
  LP1(0x174, LONG, bpf_close, LONG, ___channel, d0, \
  , BSDSOCKET_BASE_NAME)

#define bpf_data_waiting(___channel) \
  LP1(0x198, LONG, bpf_data_waiting, LONG, ___channel, d0, \
  , BSDSOCKET_BASE_NAME)

#define bpf_ioctl(___channel, ___command, ___buffer) \
  LP3(0x192, LONG, bpf_ioctl, LONG, ___channel, d0, ULONG, ___command, d1, APTR, ___buffer, a0, \
  , BSDSOCKET_BASE_NAME)

#define bpf_open(___channel) \
  LP1(0x16e, LONG, bpf_open, LONG, ___channel, d0, \
  , BSDSOCKET_BASE_NAME)

#define bpf_read(___channel, ___buffer, ___len) \
  LP3(0x17a, LONG, bpf_read, LONG, ___channel, d0, APTR, ___buffer, a0, LONG, ___len, d1, \
  , BSDSOCKET_BASE_NAME)

#define bpf_set_interrupt_mask(___channel, ___signal_mask) \
  LP2(0x18c, LONG, bpf_set_interrupt_mask, LONG, ___channel, d0, ULONG, ___signal_mask, d1, \
  , BSDSOCKET_BASE_NAME)

#define bpf_set_notify_mask(___channel, ___signal_mask) \
  LP2(0x186, LONG, bpf_set_notify_mask, LONG, ___channel, d1, ULONG, ___signal_mask, d0, \
  , BSDSOCKET_BASE_NAME)

#define bpf_write(___channel, ___buffer, ___len) \
  LP3(0x180, LONG, bpf_write, LONG, ___channel, d0, APTR, ___buffer, a0, LONG, ___len, d1, \
  , BSDSOCKET_BASE_NAME)

#define connect(___sock, ___name, ___namelen) \
  LP3(0x36, LONG, connect, LONG, ___sock, d0, struct sockaddr *, ___name, a0, socklen_t, ___namelen, d1, \
  , BSDSOCKET_BASE_NAME)

#define endnetent() \
  LP0NR(0x222, endnetent, \
  , BSDSOCKET_BASE_NAME)

#define endprotoent() \
  LP0NR(0x234, endprotoent, \
  , BSDSOCKET_BASE_NAME)

#define endservent() \
  LP0NR(0x246, endservent, \
  , BSDSOCKET_BASE_NAME)

#define getdtablesize() \
  LP0(0x8a, LONG, getdtablesize, \
  , BSDSOCKET_BASE_NAME)

#define gethostbyaddr(___addr, ___len, ___type) \
  LP3(0xd8, struct hostent *, gethostbyaddr, STRPTR, ___addr, a0, LONG, ___len, d0, LONG, ___type, d1, \
  , BSDSOCKET_BASE_NAME)

#define gethostbyname(___name) \
  LP1(0xd2, struct hostent *, gethostbyname, STRPTR, ___name, a0, \
  , BSDSOCKET_BASE_NAME)

#define gethostid() \
  LP0(0x120, in_addr_t, gethostid, \
  , BSDSOCKET_BASE_NAME)

#define gethostname(___name, ___namelen) \
  LP2(0x11a, LONG, gethostname, STRPTR, ___name, a0, LONG, ___namelen, d0, \
  , BSDSOCKET_BASE_NAME)

#define getnetbyaddr(___net, ___type) \
  LP2(0xe4, struct netent *, getnetbyaddr, in_addr_t, ___net, d0, LONG, ___type, d1, \
  , BSDSOCKET_BASE_NAME)

#define getnetbyname(___name) \
  LP1(0xde, struct netent *, getnetbyname, STRPTR, ___name, a0, \
  , BSDSOCKET_BASE_NAME)

#define getnetent() \
  LP0(0x228, struct netent *, getnetent, \
  , BSDSOCKET_BASE_NAME)

#define getpeername(___sock, ___name, ___namelen) \
  LP3(0x6c, LONG, getpeername, LONG, ___sock, d0, struct sockaddr *, ___name, a0, socklen_t *, ___namelen, a1, \
  , BSDSOCKET_BASE_NAME)

#define getprotobyname(___name) \
  LP1(0xf6, struct protoent *, getprotobyname, STRPTR, ___name, a0, \
  , BSDSOCKET_BASE_NAME)

#define getprotobynumber(___proto) \
  LP1(0xfc, struct protoent *, getprotobynumber, LONG, ___proto, d0, \
  , BSDSOCKET_BASE_NAME)

#define getprotoent() \
  LP0(0x23a, struct protoent *, getprotoent, \
  , BSDSOCKET_BASE_NAME)

#define getservbyname(___name, ___proto) \
  LP2(0xea, struct servent *, getservbyname, STRPTR, ___name, a0, STRPTR, ___proto, a1, \
  , BSDSOCKET_BASE_NAME)

#define getservbyport(___port, ___proto) \
  LP2(0xf0, struct servent *, getservbyport, LONG, ___port, d0, STRPTR, ___proto, a0, \
  , BSDSOCKET_BASE_NAME)

#define getservent() \
  LP0(0x24c, struct servent *, getservent, \
  , BSDSOCKET_BASE_NAME)

#define getsockname(___sock, ___name, ___namelen) \
  LP3(0x66, LONG, getsockname, LONG, ___sock, d0, struct sockaddr *, ___name, a0, socklen_t *, ___namelen, a1, \
  , BSDSOCKET_BASE_NAME)

#define getsockopt(___sock, ___level, ___optname, ___optval, ___optlen) \
  LP5(0x60, LONG, getsockopt, LONG, ___sock, d0, LONG, ___level, d1, LONG, ___optname, d2, APTR, ___optval, a0, socklen_t *, ___optlen, a1, \
  , BSDSOCKET_BASE_NAME)

#define inet_addr(___cp) \
  LP1(0xb4, in_addr_t, inet_addr, STRPTR, ___cp, a0, \
  , BSDSOCKET_BASE_NAME)

#define inet_aton(___cp, ___addr) \
  LP2(0x252, LONG, inet_aton, STRPTR, ___cp, a0, struct in_addr *, ___addr, a1, \
  , BSDSOCKET_BASE_NAME)

#define inet_network(___cp) \
  LP1(0xcc, in_addr_t, inet_network, STRPTR, ___cp, a0, \
  , BSDSOCKET_BASE_NAME)

#define inet_ntop(___af, ___src, ___dst, ___size) \
  LP4(0x258, STRPTR, inet_ntop, LONG, ___af, d0, APTR, ___src, a0, STRPTR, ___dst, a1, LONG, ___size, d1, \
  , BSDSOCKET_BASE_NAME)

#define inet_pton(___af, ___src, ___dst) \
  LP3(0x25e, LONG, inet_pton, LONG, ___af, d0, STRPTR, ___src, a0, APTR, ___dst, a1, \
  , BSDSOCKET_BASE_NAME)

#define listen(___sock, ___backlog) \
  LP2(0x2a, LONG, listen, LONG, ___sock, d0, LONG, ___backlog, d1, \
  , BSDSOCKET_BASE_NAME)

#define mbuf_adj(___mp, ___req_len) \
  LP2(0x2a6, LONG, mbuf_adj, struct mbuf *, ___mp, a0, LONG, ___req_len, d0, \
  , BSDSOCKET_BASE_NAME)

#define mbuf_cat(___m, ___n) \
  LP2(0x2a0, LONG, mbuf_cat, struct mbuf *, ___m, a0, struct mbuf *, ___n, a1, \
  , BSDSOCKET_BASE_NAME)

#define mbuf_copyback(___m, ___off, ___len, ___cp) \
  LP4(0x276, LONG, mbuf_copyback, struct mbuf *, ___m, a0, LONG, ___off, d0, LONG, ___len, d1, APTR, ___cp, a1, \
  , BSDSOCKET_BASE_NAME)

#define mbuf_copydata(___m, ___off, ___len, ___cp) \
  LP4(0x27c, LONG, mbuf_copydata, struct mbuf *, ___m, a0, LONG, ___off, d0, LONG, ___len, d1, APTR, ___cp, a1, \
  , BSDSOCKET_BASE_NAME)

#define mbuf_copym(___m, ___off, ___len) \
  LP3(0x270, struct mbuf *, mbuf_copym, struct mbuf *, ___m, a0, LONG, ___off, d0, LONG, ___len, d1, \
  , BSDSOCKET_BASE_NAME)

#define mbuf_free(___m) \
  LP1(0x282, struct mbuf *, mbuf_free, struct mbuf *, ___m, a0, \
  , BSDSOCKET_BASE_NAME)

#define mbuf_freem(___m) \
  LP1NR(0x288, mbuf_freem, struct mbuf *, ___m, a0, \
  , BSDSOCKET_BASE_NAME)

#define mbuf_get() \
  LP0(0x28e, struct mbuf *, mbuf_get, \
  , BSDSOCKET_BASE_NAME)

#define mbuf_gethdr() \
  LP0(0x294, struct mbuf *, mbuf_gethdr, \
  , BSDSOCKET_BASE_NAME)

#define mbuf_prepend(___m, ___len) \
  LP2(0x29a, struct mbuf *, mbuf_prepend, struct mbuf *, ___m, a0, LONG, ___len, d0, \
  , BSDSOCKET_BASE_NAME)

#define mbuf_pullup(___m, ___len) \
  LP2(0x2ac, struct mbuf *, mbuf_pullup, struct mbuf *, ___m, a0, LONG, ___len, d0, \
  , BSDSOCKET_BASE_NAME)

#define recv(___sock, ___buf, ___len, ___flags) \
  LP4(0x4e, LONG, recv, LONG, ___sock, d0, APTR, ___buf, a0, LONG, ___len, d1, LONG, ___flags, d2, \
  , BSDSOCKET_BASE_NAME)

#define recvfrom(___sock, ___buf, ___len, ___flags, ___addr, ___addrlen) \
  LP6(0x48, LONG, recvfrom, LONG, ___sock, d0, APTR, ___buf, a0, LONG, ___len, d1, LONG, ___flags, d2, struct sockaddr *, ___addr, a1, socklen_t *, ___addrlen, a2, \
  , BSDSOCKET_BASE_NAME)

#define recvmsg(___sock, ___msg, ___flags) \
  LP3(0x114, LONG, recvmsg, LONG, ___sock, d0, struct msghdr *, ___msg, a0, LONG, ___flags, d1, \
  , BSDSOCKET_BASE_NAME)

#define send(___sock, ___buf, ___len, ___flags) \
  LP4(0x42, LONG, send, LONG, ___sock, d0, APTR, ___buf, a0, LONG, ___len, d1, LONG, ___flags, d2, \
  , BSDSOCKET_BASE_NAME)

#define sendmsg(___sock, ___msg, ___flags) \
  LP3(0x10e, LONG, sendmsg, LONG, ___sock, d0, struct msghdr *, ___msg, a0, LONG, ___flags, d1, \
  , BSDSOCKET_BASE_NAME)

#define sendto(___sock, ___buf, ___len, ___flags, ___to, ___tolen) \
  LP6(0x3c, LONG, sendto, LONG, ___sock, d0, APTR, ___buf, a0, LONG, ___len, d1, LONG, ___flags, d2, struct sockaddr *, ___to, a1, socklen_t, ___tolen, d3, \
  , BSDSOCKET_BASE_NAME)

#define setnetent(___stay_open) \
  LP1NR(0x21c, setnetent, LONG, ___stay_open, d0, \
  , BSDSOCKET_BASE_NAME)

#define setprotoent(___stay_open) \
  LP1NR(0x22e, setprotoent, LONG, ___stay_open, d0, \
  , BSDSOCKET_BASE_NAME)

#define setservent(___stay_open) \
  LP1NR(0x240, setservent, LONG, ___stay_open, d0, \
  , BSDSOCKET_BASE_NAME)

#define setsockopt(___sock, ___level, ___optname, ___optval, ___optlen) \
  LP5(0x5a, LONG, setsockopt, LONG, ___sock, d0, LONG, ___level, d1, LONG, ___optname, d2, APTR, ___optval, a0, socklen_t, ___optlen, d3, \
  , BSDSOCKET_BASE_NAME)

#define shutdown(___sock, ___how) \
  LP2(0x54, LONG, shutdown, LONG, ___sock, d0, LONG, ___how, d1, \
  , BSDSOCKET_BASE_NAME)

#define socket(___domain, ___type, ___protocol) \
  LP3(0x1e, LONG, socket, LONG, ___domain, d0, LONG, ___type, d1, LONG, ___protocol, d2, \
  , BSDSOCKET_BASE_NAME)

#define vsyslog(___pri, ___msg, ___args) \
  LP3NR(0x102, vsyslog, LONG, ___pri, d0, STRPTR, ___msg, a0, APTR, ___args, a1, \
  , BSDSOCKET_BASE_NAME)

#endif /* !_INLINE_BSDSOCKET_H */
