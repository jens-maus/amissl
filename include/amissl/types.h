#ifndef AMISSL_TYPES_H
#define AMISSL_TYPES_H

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

#if defined(__SASC)

#if !defined(_MACHINE_TYPES_H_) // include:amitcp/machine/types.h
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
#endif

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef long int off_t;

/* Cannot use 64-bit functions - used only to allow headers to be parsed */
typedef int int64_t;
typedef unsigned int uint64_t;

#elif defined(__VBCC__)

typedef long int off_t;

#include <stdint.h>

#else

#include <stdint.h>

#endif

#endif /* !AMISSL_TYPES_H */
