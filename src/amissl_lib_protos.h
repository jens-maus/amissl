#ifndef _LIB_PROTOS_H
#define _LIB_PROTOS_H

#define __NOLIBBASE__
#define __NOGLOBALIFACE__
#include <proto/amissl.h>

#include <internal/amissl_compiler.h>

#if defined(__amigaos4__)
#define __BASE_OR_IFACE_TYPE  struct AmiSSLIFace *
#define __BASE_OR_IFACE_VAR   IAmiSSL
#else
#define __BASE_OR_IFACE_TYPE  struct Library *
#define __BASE_OR_IFACE_VAR   AmiSSLBase
#endif
#define __BASE_OR_IFACE     __BASE_OR_IFACE_TYPE __BASE_OR_IFACE_VAR

#ifdef __amigaos4__
LIBPROTOVA(InitAmiSSL, long, REG(a6, UNUSED __BASE_OR_IFACE_TYPE), ...);
LIBPROTOVA(CleanupAmiSSL, long, REG(a6, UNUSED __BASE_OR_IFACE_TYPE), ...);
#endif /* __amigaos4__ */

LIBPROTO(__UserLibInit, int, REG(a6, __BASE_OR_IFACE_TYPE));
LIBPROTO(__UserLibExpunge, void, REG(a6, __BASE_OR_IFACE_TYPE));
LIBPROTO(__UserLibCleanup, void, REG(a6, __BASE_OR_IFACE_TYPE));

struct LibraryHeader;
ULONG freeBase(struct LibraryHeader *);
ULONG initBase(struct LibraryHeader *);
ULONG closeBase(struct LibraryHeader *);
ULONG openBase(struct LibraryHeader *);

#endif /* _LIB_PROTOS_H */
