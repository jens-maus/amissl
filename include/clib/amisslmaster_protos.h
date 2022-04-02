#ifndef CLIB_AMISSLMASTER_PROTOS_H
#define CLIB_AMISSLMASTER_PROTOS_H

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

#include <exec/types.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

LONG InitAmiSSLMaster(LONG APIVersion, LONG UsesOpenSSLStructs);
struct Library * OpenAmiSSL(void);
void CloseAmiSSL(void);
struct Library * OpenAmiSSLCipher(LONG Cipher);
void CloseAmiSSLCipher(struct Library * CipherBase);
LONG OpenAmiSSLTagList(LONG APIVersion, struct TagItem * tagList);
LONG OpenAmiSSLTags(LONG APIVersion, Tag tag, ...);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_AMISSLMASTER_PROTOS_H */
