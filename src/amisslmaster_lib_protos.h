#ifndef _LIB_PROTOS_H
#define _LIB_PROTOS_H

#define __NOLIBBASE__
#define __NOGLOBALIFACE__
#include <proto/amisslmaster.h>

#include <internal/amissl_compiler.h>

#if defined(__amigaos4__)
#define __BASE_OR_IFACE_TYPE	struct AmiSSLMasterIFace *
#define __BASE_OR_IFACE_VAR		_IAmiSSLMaster
#else
#define __BASE_OR_IFACE_TYPE	struct Library *
#define __BASE_OR_IFACE_VAR		_AmiSSLMasterBase
#endif
#define __BASE_OR_IFACE			__BASE_OR_IFACE_TYPE __BASE_OR_IFACE_VAR

LIBPROTO(InitAmiSSLMaster, LONG, REG(a6, UNUSED __BASE_OR_IFACE), REG(d0, LONG APIVersion), REG(d1, LONG UsesOpenSSLStructs));
LIBPROTO(OpenAmiSSL, struct Library *, REG(a6, UNUSED __BASE_OR_IFACE));
LIBPROTO(CloseAmiSSL, void, REG(a6, UNUSED __BASE_OR_IFACE));
LIBPROTO(OpenAmiSSLCipher, struct Library *, REG(a6, UNUSED __BASE_OR_IFACE), REG(d0, LONG Cipher));
LIBPROTO(CloseAmiSSLCipher, void, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, struct Library *LibBase));

LIBPROTO(__UserLibInit, int, REG(a6, __BASE_OR_IFACE));
LIBPROTO(__UserLibExpunge, void, REG(a6, __BASE_OR_IFACE));
LIBPROTO(__UserLibCleanup, void, REG(a6, __BASE_OR_IFACE));

struct LibraryHeader;
ULONG freeBase(struct LibraryHeader *lib);
ULONG initBase(struct LibraryHeader *lib);
ULONG closeBase(struct LibraryHeader *lib);
ULONG openBase(struct LibraryHeader *lib);

#endif /* _LIB_PROTOS_H */
