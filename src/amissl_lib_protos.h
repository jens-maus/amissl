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
#include <proto/amissl.h>

#include <internal/amissl_compiler.h>

// forward declarations
struct LibraryHeader;

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

LIBPROTO(__UserLibInit, int, REG(a6, __BASE_OR_IFACE_TYPE), REG(a0, struct LibraryHeader *libBase));
LIBPROTO(__UserLibCleanup, void, REG(a6, __BASE_OR_IFACE_TYPE), REG(a0, struct LibraryHeader *libBase));
LIBPROTO(__UserLibExpunge, void, REG(a6, __BASE_OR_IFACE_TYPE));

ULONG freeBase(struct LibraryHeader *);
ULONG initBase(struct LibraryHeader *);
ULONG closeBase(struct LibraryHeader *);
ULONG openBase(struct LibraryHeader *);

#endif /* _LIB_PROTOS_H */
