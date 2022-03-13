#ifndef _STDARG_H
#define _STDARG_H

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

#if defined(__amigaos4__) && defined(AMISSL_COMPILE)

#ifndef __GNUC_VA_LIST
#define __GNUC_VA_LIST
typedef __builtin_va_list __gnuc_va_list;
#endif

typedef struct va_list_t
{
    union {
		__gnuc_va_list ppc;
		char*   m68k;
    } args;
    int is_68k;
} va_list;

#define va_start(v,l)	__builtin_va_start(v.args.ppc,l),v.is_68k=0
#define va_end(v)	if(!v.is_68k) __builtin_va_end(v.args.ppc)
#define va_arg(v,l) \
    ((v).is_68k ? \
	((l*)(v.args.m68k += sizeof(l)))[-1] : \
	(__builtin_va_arg(v.args.ppc,l)))

#include <sys/amigaos-va.h>

#else

// on other systems we take the default varargs
// stuff by simply including the next stdarg.h file.
// (this only works with GCC!)
#if defined(__GNUC__)

#undef _STDARG_H
#include_next "stdarg.h"

#else

#error "Unknown compiler"

#endif
#endif

#endif
