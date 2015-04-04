#ifndef _LIB_PROTOS_H
#define _LIB_PROTOS_H

#include <utility/tagitem.h>
#include <internal/amissl_compiler.h>

#if defined(__amigaos4__)
#define __BASE_OR_IFACE_TYPE	struct AmiSSLIFace *
#define __BASE_OR_IFACE_VAR		IAmiSSL
#else
#define __BASE_OR_IFACE_TYPE	struct Library *
#define __BASE_OR_IFACE_VAR		AmiSSLBase
#endif
#define __BASE_OR_IFACE			__BASE_OR_IFACE_TYPE __BASE_OR_IFACE_VAR

LIBPROTO(InternalInitAmiSSL, void, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, void * amisslinit));
LIBPROTO(InitAmiSSLA, long, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, struct TagItem * tagList));
LIBPROTO(CleanupAmiSSLA, long, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, struct TagItem * tagList));

struct LibraryHeader;
ULONG freeBase(struct LibraryHeader *lib);
ULONG initBase(struct LibraryHeader *lib);
ULONG closeBase(struct LibraryHeader *lib);
ULONG openBase(struct LibraryHeader *lib);

#endif /* _LIB_PROTOS_H */
