/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2022 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

#ifndef _LIB_PROTOS_H
#define _LIB_PROTOS_H

#define __NOLIBBASE__
#define __NOGLOBALIFACE__
#include <proto/amisslmaster.h>

#include <internal/amissl_compiler.h>

#if defined(__amigaos4__)
#define __BASE_OR_IFACE_TYPE  struct AmiSSLMasterIFace *
#define __BASE_OR_IFACE_VAR   _IAmiSSLMaster
#else
#define __BASE_OR_IFACE_TYPE  struct Library *
#define __BASE_OR_IFACE_VAR   _AmiSSLMasterBase
#endif
#define __BASE_OR_IFACE     __BASE_OR_IFACE_TYPE __BASE_OR_IFACE_VAR

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
