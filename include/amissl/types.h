/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (C) 1999-2006 Andrija Antonijevic, Stefan Burstroem
 Copyright (C) 2006-2021 AmiSSL Open Source Team

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

#ifndef AMISSL_TYPES_H
#define AMISSL_TYPES_H

#if defined(__SASC)

#if !defined(_MACHINE_TYPES_H_) // include:amitcp/machine/types.h
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
#endif

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

/* Cannot use 64-bit functions - used only to allow headers to be parsed */
typedef int int64_t;
typedef unsigned int uint64_t;

#else

#include <stdint.h>

#endif

#endif /* !AMISSL_TYPES_H */
