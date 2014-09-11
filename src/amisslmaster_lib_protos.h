#ifndef _LIB_PROTOS_H
#define _LIB_PROTOS_H

#include <internal/amissl_compiler.h>

#include "amisslmaster_base.h"

LIBPROTO(AmiSSLMaster_InitAmiSSLMaster, LONG, REG(a6, UNUSED __BASE_OR_IFACE), REG(d0, LONG APIVersion), REG(d1, LONG UsesOpenSSLStructs));
LIBPROTO(AmiSSLMaster_OpenAmiSSL, struct Library *, REG(a6, UNUSED __BASE_OR_IFACE));
LIBPROTO(AmiSSLMaster_CloseAmiSSL, void, REG(a6, UNUSED __BASE_OR_IFACE));
LIBPROTO(AmiSSLMaster_OpenAmiSSLCipher, struct Library *, REG(a6, UNUSED __BASE_OR_IFACE), REG(d0, LONG Cipher));
LIBPROTO(AmiSSLMaster_CloseAmiSSLCipher, void, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, struct Library *LibBase));

ULONG freeBase(struct LibraryHeader *lib);
ULONG initBase(struct LibraryHeader *lib);

#if defined(__AROS__)
AROS_LD5(ULONG, CodesetsConvertUTF32toUTF16,
    AROS_LDA(const UTF32 **, ___sourceStart, A0),
    AROS_LDA(const UTF32 *, ___sourceEnd, A1),
    AROS_LDA(UTF16 **, ___targetStart, A2),
    AROS_LDA(UTF16 *, ___targetEnd, A3),
    AROS_LDA(ULONG, ___flags, D0),
    struct LibraryHeader *, __BASE_OR_IFACE_VAR, 0, LIBSTUB);
#endif

#endif /* _LIB_PROTOS_H */
