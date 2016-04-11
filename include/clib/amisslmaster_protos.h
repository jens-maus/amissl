#ifndef CLIB_AMISSLMASTER_PROTOS_H
#define CLIB_AMISSLMASTER_PROTOS_H

/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (C) 1999-2006 Andrija Antonijevic, Stefan Burstroem
 Copyright (C) 2006-2016 AmiSSL Open Source Team

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 3 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 AmiSSL Official Support Site:  https://github.com/jens-maus/amissl

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

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_AMISSLMASTER_PROTOS_H */
