#ifndef _LIB_PROTOS_H
#define _LIB_PROTOS_H

#include <internal/amissl_compiler.h>

#include "amisslmaster_base.h"

LIBPROTO(InitAmiSSLMaster, LONG, REG(a6, UNUSED __BASE_OR_IFACE), REG(d0, LONG APIVersion), REG(d1, LONG UsesOpenSSLStructs));
LIBPROTO(OpenAmiSSL, struct Library *, REG(a6, UNUSED __BASE_OR_IFACE));
LIBPROTO(CloseAmiSSL, void, REG(a6, UNUSED __BASE_OR_IFACE));
LIBPROTO(OpenAmiSSLCipher, struct Library *, REG(a6, UNUSED __BASE_OR_IFACE), REG(d0, LONG Cipher));
LIBPROTO(CloseAmiSSLCipher, void, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, struct Library *LibBase));

ULONG freeBase(struct LibraryHeader *lib);
ULONG initBase(struct LibraryHeader *lib);

#endif /* _LIB_PROTOS_H */
