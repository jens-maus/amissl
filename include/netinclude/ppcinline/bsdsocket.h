#ifndef _PPCINLINE_BSDSOCKET_H
#define _PPCINLINE_BSDSOCKET_H

#ifndef CLIB_BSDSOCKET_PROTOS_H
#define CLIB_BSDSOCKET_PROTOS_H
#endif

#ifndef __PPCINLINE_MACROS_H
#include <ppcinline/macros.h>
#endif

#ifndef  EXEC_LISTS_H
#include <exec/lists.h>
#endif
#ifndef  DEVICES_TIMER_H
#include <devices/timer.h>
#endif
#ifndef  UTILITY_TAGITEM_H
#include <utility/tagitem.h>
#endif
#ifndef  UTILITY_HOOKS_H
#include <utility/hooks.h>
#endif
#ifndef  NETINET_IN_H
#include <netinet/in.h>
#endif
#ifndef  SYS_TYPES_H
#include <sys/types.h>
#endif
#ifndef  SYS_SOCKET_H
#include <sys/socket.h>
#endif
#ifndef  SYS_MBUF_H
#include <sys/mbuf.h>
#endif
#ifndef  NET_ROUTE_H
#include <net/route.h>
#endif
#ifndef  NETDB_H
#include <netdb.h>
#endif
#ifndef  LIBRARIES_BSDSOCKET_H
#include <libraries/bsdsocket.h>
#endif
#ifndef  DOS_DOSEXTENS_H
#include <dos/dosextens.h>
#endif

#ifndef BSDSOCKET_BASE_NAME
#define BSDSOCKET_BASE_NAME SocketBase
#endif

#define socket(domain, type, protocol) \
  LP3(0x1e, LONG, socket, LONG, domain, d0, LONG, type, d1, LONG, protocol, d2, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define bind(sock, name, namelen) \
  LP3(0x24, LONG, bind, LONG, sock, d0, struct sockaddr *, name, a0, LONG, namelen, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define listen(sock, backlog) \
  LP2(0x2a, LONG, listen, LONG, sock, d0, LONG, backlog, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define accept(sock, addr, addrlen) \
  LP3(0x30, LONG, accept, LONG, sock, d0, struct sockaddr *, addr, a0, LONG *, addrlen, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define connect(sock, name, namelen) \
  LP3(0x36, LONG, connect, LONG, sock, d0, struct sockaddr *, name, a0, LONG, namelen, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define sendto(sock, buf, len, flags, to, tolen) \
  LP6(0x3c, LONG, sendto, LONG, sock, d0, APTR, buf, a0, LONG, len, d1, LONG, flags, d2, struct sockaddr *, to, a1, LONG, tolen, d3, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define send(sock, buf, len, flags) \
  LP4(0x42, LONG, send, LONG, sock, d0, APTR, buf, a0, LONG, len, d1, LONG, flags, d2, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define recvfrom(sock, buf, len, flags, addr, addrlen) \
  LP6(0x48, LONG, recvfrom, LONG, sock, d0, APTR, buf, a0, LONG, len, d1, LONG, flags, d2, struct sockaddr *, addr, a1, LONG *, addrlen, a2, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define recv(sock, buf, len, flags) \
  LP4(0x4e, LONG, recv, LONG, sock, d0, APTR, buf, a0, LONG, len, d1, LONG, flags, d2, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define shutdown(sock, how) \
  LP2(0x54, LONG, shutdown, LONG, sock, d0, LONG, how, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define setsockopt(sock, level, optname, optval, optlen) \
  LP5(0x5a, LONG, setsockopt, LONG, sock, d0, LONG, level, d1, LONG, optname, d2, APTR, optval, a0, LONG, optlen, d3, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getsockopt(sock, level, optname, optval, optlen) \
  LP5(0x60, LONG, getsockopt, LONG, sock, d0, LONG, level, d1, LONG, optname, d2, APTR, optval, a0, LONG *, optlen, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getsockname(sock, name, namelen) \
  LP3(0x66, LONG, getsockname, LONG, sock, d0, struct sockaddr *, name, a0, LONG *, namelen, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getpeername(sock, name, namelen) \
  LP3(0x6c, LONG, getpeername, LONG, sock, d0, struct sockaddr *, name, a0, LONG *, namelen, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define IoctlSocket(sock, req, argp) \
  LP3(0x72, LONG, IoctlSocket, LONG, sock, d0, ULONG, req, d1, APTR, argp, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define CloseSocket(sock) \
  LP1(0x78, LONG, CloseSocket, LONG, sock, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define WaitSelect(nfds, read_fds, write_fds, except_fds, timeout, signals) \
  LP6(0x7e, LONG, WaitSelect, LONG, nfds, d0, APTR, read_fds, a0, APTR, write_fds, a1, APTR, except_fds, a2, struct timeval *, timeout, a3, ULONG *, signals, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define SetSocketSignals(int_mask, io_mask, urgent_mask) \
  LP3NR(0x84, SetSocketSignals, ULONG, int_mask, d0, ULONG, io_mask, d1, ULONG, urgent_mask, d2, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getdtablesize() \
  LP0(0x8a, LONG, getdtablesize, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define ObtainSocket(id, domain, type, protocol) \
  LP4(0x90, LONG, ObtainSocket, LONG, id, d0, LONG, domain, d1, LONG, type, d2, LONG, protocol, d3, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define ReleaseSocket(sock, id) \
  LP2(0x96, LONG, ReleaseSocket, LONG, sock, d0, LONG, id, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define ReleaseCopyOfSocket(sock, id) \
  LP2(0x9c, LONG, ReleaseCopyOfSocket, LONG, sock, d0, LONG, id, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define Errno() \
  LP0(0xa2, LONG, Errno, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define SetErrnoPtr(errno_ptr, size) \
  LP2NR(0xa8, SetErrnoPtr, APTR, errno_ptr, a0, LONG, size, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define Inet_NtoA(ip) \
  LP1(0xae, STRPTR, Inet_NtoA, ULONG, ip, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define inet_addr(cp) \
  LP1(0xb4, ULONG, inet_addr, STRPTR, cp, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define Inet_LnaOf(in) \
  LP1(0xba, ULONG, Inet_LnaOf, ULONG, in, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define Inet_NetOf(in) \
  LP1(0xc0, ULONG, Inet_NetOf, ULONG, in, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define Inet_MakeAddr(net, host) \
  LP2(0xc6, ULONG, Inet_MakeAddr, ULONG, net, d0, ULONG, host, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define inet_network(cp) \
  LP1(0xcc, ULONG, inet_network, STRPTR, cp, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define gethostbyname(name) \
  LP1(0xd2, struct hostent *, gethostbyname, STRPTR, name, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define gethostbyaddr(addr, len, type) \
  LP3(0xd8, struct hostent *, gethostbyaddr, STRPTR, addr, a0, LONG, len, d0, LONG, type, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getnetbyname(name) \
  LP1(0xde, struct netent *, getnetbyname, STRPTR, name, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getnetbyaddr(net, type) \
  LP2(0xe4, struct netent *, getnetbyaddr, ULONG, net, d0, LONG, type, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getservbyname(name, proto) \
  LP2(0xea, struct servent *, getservbyname, STRPTR, name, a0, STRPTR, proto, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getservbyport(port, proto) \
  LP2(0xf0, struct servent *, getservbyport, LONG, port, d0, STRPTR, proto, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getprotobyname(name) \
  LP1(0xf6, struct protoent *, getprotobyname, STRPTR, name, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getprotobynumber(proto) \
  LP1(0xfc, struct protoent *, getprotobynumber, LONG, proto, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define vsyslog(pri, msg, args) \
  LP3NR(0x102, vsyslog, LONG, pri, d0, STRPTR, msg, a0, APTR, args, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#ifndef NO_PPCINLINE_STDARG
#define syslog(pri, msg, tags...) \
  ({ULONG _tags[] = {tags}; vsyslog((pri), (msg), (APTR) _tags);})
#endif

#define Dup2Socket(old_socket, new_socket) \
  LP2(0x108, LONG, Dup2Socket, LONG, old_socket, d0, LONG, new_socket, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define sendmsg(sock, msg, flags) \
  LP3(0x10e, LONG, sendmsg, LONG, sock, d0, struct msghdr *, msg, a0, LONG, flags, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define recvmsg(sock, msg, flags) \
  LP3(0x114, LONG, recvmsg, LONG, sock, d0, struct msghdr *, msg, a0, LONG, flags, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define gethostname(name, namelen) \
  LP2(0x11a, LONG, gethostname, STRPTR, name, a0, LONG, namelen, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define gethostid() \
  LP0(0x120, ULONG, gethostid, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define SocketBaseTagList(tags) \
  LP1(0x126, LONG, SocketBaseTagList, struct TagItem *, tags, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#ifndef NO_PPCINLINE_STDARG
#define SocketBaseTags(tags...) \
  ({ULONG _tags[] = {tags}; SocketBaseTagList((struct TagItem *) _tags);})
#endif

#define GetSocketEvents(event_ptr) \
  LP1(0x12c, LONG, GetSocketEvents, ULONG *, event_ptr, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define bpf_open(channel) \
  LP1(0x16e, LONG, bpf_open, LONG, channel, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define bpf_close(channel) \
  LP1(0x174, LONG, bpf_close, LONG, channel, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define bpf_read(channel, buffer, len) \
  LP3(0x17a, LONG, bpf_read, LONG, channel, d0, APTR, buffer, a0, LONG, len, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define bpf_write(channel, buffer, len) \
  LP3(0x180, LONG, bpf_write, LONG, channel, d0, APTR, buffer, a0, LONG, len, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define bpf_set_notify_mask(channel, signal_mask) \
  LP2(0x186, LONG, bpf_set_notify_mask, LONG, channel, d1, ULONG, signal_mask, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define bpf_set_interrupt_mask(channel, signal_mask) \
  LP2(0x18c, LONG, bpf_set_interrupt_mask, LONG, channel, d0, ULONG, signal_mask, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define bpf_ioctl(channel, command, buffer) \
  LP3(0x192, LONG, bpf_ioctl, LONG, channel, d0, ULONG, command, d1, APTR, buffer, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define bpf_data_waiting(channel) \
  LP1(0x198, LONG, bpf_data_waiting, LONG, channel, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define AddRouteTagList(tags) \
  LP1(0x19e, LONG, AddRouteTagList, struct TagItem *, tags, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#ifndef NO_PPCINLINE_STDARG
#define AddRouteTags(tags...) \
  ({ULONG _tags[] = {tags}; AddRouteTagList((struct TagItem *) _tags);})
#endif

#define DeleteRouteTagList(tags) \
  LP1(0x1a4, LONG, DeleteRouteTagList, struct TagItem *, tags, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#ifndef NO_PPCINLINE_STDARG
#define DeleteRouteTags(tags...) \
  ({ULONG _tags[] = {tags}; DeleteRouteTagList((struct TagItem *) _tags);})
#endif

#define FreeRouteInfo(buf) \
  LP1NR(0x1b0, FreeRouteInfo, struct rt_msghdr *, buf, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define GetRouteInfo(address_family, flags) \
  LP2(0x1b6, struct rt_msghdr *, GetRouteInfo, LONG, address_family, d0, LONG, flags, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define AddInterfaceTagList(interface_name, device_name, unit, tags) \
  LP4(0x1bc, LONG, AddInterfaceTagList, STRPTR, interface_name, a0, STRPTR, device_name, a1, LONG, unit, d0, struct TagItem *, tags, a2, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#ifndef NO_PPCINLINE_STDARG
#define AddInterfaceTags(interface_name, device_name, unit, tags...) \
  ({ULONG _tags[] = {tags}; AddInterfaceTagList((interface_name), (device_name), (unit), (struct TagItem *) _tags);})
#endif

#define ConfigureInterfaceTagList(interface_name, tags) \
  LP2(0x1c2, LONG, ConfigureInterfaceTagList, STRPTR, interface_name, a0, struct TagItem *, tags, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#ifndef NO_PPCINLINE_STDARG
#define ConfigureInterfaceTags(interface_name, tags...) \
  ({ULONG _tags[] = {tags}; ConfigureInterfaceTagList((interface_name), (struct TagItem *) _tags);})
#endif

#define ReleaseInterfaceList(list) \
  LP1NR(0x1c8, ReleaseInterfaceList, struct List *, list, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define ObtainInterfaceList() \
  LP0(0x1ce, struct List *, ObtainInterfaceList, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define QueryInterfaceTagList(interface_name, tags) \
  LP2(0x1d4, LONG, QueryInterfaceTagList, STRPTR, interface_name, a0, struct TagItem *, tags, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#ifndef NO_PPCINLINE_STDARG
#define QueryInterfaceTags(interface_name, tags...) \
  ({ULONG _tags[] = {tags}; QueryInterfaceTagList((interface_name), (struct TagItem *) _tags);})
#endif

#define CreateAddrAllocMessageA(version, protocol, interface_name, result_ptr, tags) \
  LP5(0x1da, LONG, CreateAddrAllocMessageA, LONG, version, d0, LONG, protocol, d1, STRPTR, interface_name, a0, struct AddressAllocationMessage **, result_ptr, a1, struct TagItem *, tags, a2, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#ifndef NO_PPCINLINE_STDARG
#define CreateAddrAllocMessage(version, protocol, interface_name, result_ptr, tags...) \
  ({ULONG _tags[] = {tags}; CreateAddrAllocMessageA((version), (protocol), (interface_name), (result_ptr), (struct TagItem *) _tags);})
#endif

#define DeleteAddrAllocMessage(aam) \
  LP1NR(0x1e0, DeleteAddrAllocMessage, struct AddressAllocationMessage *, aam, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define BeginInterfaceConfig(message) \
  LP1NR(0x1e6, BeginInterfaceConfig, struct AddressAllocationMessage *, message, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define AbortInterfaceConfig(message) \
  LP1NR(0x1ec, AbortInterfaceConfig, struct AddressAllocationMessage *, message, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define AddNetMonitorHookTagList(type, hook, tags) \
  LP3(0x1f2, LONG, AddNetMonitorHookTagList, LONG, type, d0, struct Hook *, hook, a0, struct TagItem *, tags, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#ifndef NO_PPCINLINE_STDARG
#define AddNetMonitorHookTags(type, hook, tags...) \
  ({ULONG _tags[] = {tags}; AddNetMonitorHookTagList((type), (hook), (struct TagItem *) _tags);})
#endif

#define RemoveNetMonitorHook(hook) \
  LP1NR(0x1f8, RemoveNetMonitorHook, struct Hook *, hook, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define GetNetworkStatistics(type, version, destination, size) \
  LP4(0x1fe, LONG, GetNetworkStatistics, LONG, type, d0, LONG, version, d1, APTR, destination, a0, LONG, size, d2, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define AddDomainNameServer(address) \
  LP1(0x204, LONG, AddDomainNameServer, STRPTR, address, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define RemoveDomainNameServer(address) \
  LP1(0x20a, LONG, RemoveDomainNameServer, STRPTR, address, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define ReleaseDomainNameServerList(list) \
  LP1NR(0x210, ReleaseDomainNameServerList, struct List *, list, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define ObtainDomainNameServerList() \
  LP0(0x216, struct List *, ObtainDomainNameServerList, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define setnetent(stay_open) \
  LP1NR(0x21c, setnetent, LONG, stay_open, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define endnetent() \
  LP0NR(0x222, endnetent, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getnetent() \
  LP0(0x228, struct netent *, getnetent, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define setprotoent(stay_open) \
  LP1NR(0x22e, setprotoent, LONG, stay_open, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define endprotoent() \
  LP0NR(0x234, endprotoent, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getprotoent() \
  LP0(0x23a, struct protoent *, getprotoent, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define setservent(stay_open) \
  LP1NR(0x240, setservent, LONG, stay_open, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define endservent() \
  LP0NR(0x246, endservent, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define getservent() \
  LP0(0x24c, struct servent *, getservent, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define inet_aton(cp, addr) \
  LP2(0x252, LONG, inet_aton, STRPTR, cp, a0, struct in_addr *, addr, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define inet_ntop(af, src, dst, size) \
  LP4(0x258, STRPTR, inet_ntop, LONG, af, d0, APTR, src, a0, STRPTR, dst, a1, LONG, size, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define inet_pton(af, src, dst) \
  LP3(0x25e, LONG, inet_pton, LONG, af, d0, STRPTR, src, a0, APTR, dst, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define In_LocalAddr(address) \
  LP1(0x264, LONG, In_LocalAddr, ULONG, address, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define In_CanForward(address) \
  LP1(0x26a, LONG, In_CanForward, ULONG, address, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define mbuf_copym(m, off, len) \
  LP3(0x270, struct mbuf *, mbuf_copym, struct mbuf *, m, a0, LONG, off, d0, LONG, len, d1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define mbuf_copyback(m, off, len, cp) \
  LP4(0x276, LONG, mbuf_copyback, struct mbuf *, m, a0, LONG, off, d0, LONG, len, d1, APTR, cp, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define mbuf_copydata(m, off, len, cp) \
  LP4(0x27c, LONG, mbuf_copydata, struct mbuf *, m, a0, LONG, off, d0, LONG, len, d1, APTR, cp, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define mbuf_free(m) \
  LP1(0x282, struct mbuf *, mbuf_free, struct mbuf *, m, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define mbuf_freem(m) \
  LP1NR(0x288, mbuf_freem, struct mbuf *, m, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define mbuf_get() \
  LP0(0x28e, struct mbuf *, mbuf_get, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define mbuf_gethdr() \
  LP0(0x294, struct mbuf *, mbuf_gethdr, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define mbuf_prepend(m, len) \
  LP2(0x29a, struct mbuf *, mbuf_prepend, struct mbuf *, m, a0, LONG, len, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define mbuf_cat(m, n) \
  LP2(0x2a0, LONG, mbuf_cat, struct mbuf *, m, a0, struct mbuf *, n, a1, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define mbuf_adj(mp, req_len) \
  LP2(0x2a6, LONG, mbuf_adj, struct mbuf *, mp, a0, LONG, req_len, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define mbuf_pullup(m, len) \
  LP2(0x2ac, struct mbuf *, mbuf_pullup, struct mbuf *, m, a0, LONG, len, d0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define ProcessIsServer(pr) \
  LP1(0x2b2, BOOL, ProcessIsServer, struct Process *, pr, a0, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define ObtainServerSocket() \
  LP0(0x2b8, LONG, ObtainServerSocket, \
  , BSDSOCKET_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#endif /*  _PPCINLINE_BSDSOCKET_H  */
