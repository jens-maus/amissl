#ifndef AMISSL_TAGS_H
#define AMISSL_TAGS_H

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

#include <utility/tagitem.h>

#define AmiSSL_SocketBase       (TAG_USER + 0x01)
#define AmiSSL_Version          (TAG_USER + 0x02) /* OBSOLETE */
#define AmiSSL_Revision         (TAG_USER + 0x03) /* OBSOLETE */
#define AmiSSL_VersionOverride  (TAG_USER + 0x04) /* OBSOLETE */
/* #define AmiSSL_TCPStack      (TAG_USER + 0x05)    OBSOLETE */
/* #define AmiSSL_SSLVersionApp (TAG_USER + 0x06)    OBSOLETE */

#define AmiSSL_ISocket          (TAG_USER + 0x07) /* Only accessible from ppc code */
#define AmiSSL_ISocketPtr       (TAG_USER + 0x08) /* Used by auto initializer to avoid dependancy on opening order */

#define AmiSSL_SocketBaseBrand  (TAG_USER + 0x09)
#define AmiSSL_MLinkLock        (TAG_USER + 0x0a)
#define AmiSSL_ErrNoPtr         (TAG_USER + 0x0b)

#define AmiSSL_UsesOpenSSLStructs (TAG_USER + 0x0c)
#define AmiSSL_GetAmiSSLBase      (TAG_USER + 0x0d)
#define AmiSSL_GetAmiSSLExtBase   (TAG_USER + 0x0e)
#define AmiSSL_GetIAmiSSL         (TAG_USER + 0x0f) /* Only accessible from ppc code */
#define AmiSSL_InitAmiSSL         (TAG_USER + 0x10)

#endif /* !AMISSL_TAGS_H */
