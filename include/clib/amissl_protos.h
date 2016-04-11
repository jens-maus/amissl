#ifndef CLIB_AMISSL_PROTOS_H
#define CLIB_AMISSL_PROTOS_H

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
#include <dos/dos.h>
#include <amissl/amissl.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

long InitAmiSSLA(struct TagItem * tagList);
long InitAmiSSL(Tag tag, ...);
long CleanupAmiSSLA(struct TagItem * tagList);
long CleanupAmiSSL(Tag tag, ...);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_AMISSL_PROTOS_H */
