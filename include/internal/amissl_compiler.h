#ifndef INTERNAL_AMISSL_COMPILER_H
#define INTERNAL_AMISSL_COMPILER_H

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

#if defined(__amigaos4__) && !defined(AMIGA_COMPILER_H)
#include <amiga_compiler.h>
#endif /* __amigaos4__ && !AMIGA_COMPILER_H */

#include <internal/SDI_compiler.h>
#include <internal/SDI_stdarg.h>
#include <internal/SDI_lib.h>
#include <internal/debug.h>

#if defined(__amigaos4__)

#if defined(BASEREL)
  #define AMISSL_COMMON_DATA __attribute__((force_no_baserel))
  // redefine LIBFUNC so that all the functions using LIBPROTO()
  // will get the (baserel_restore) attribute added.  Functions
  // of this type must also never been inlined (e.g. by -O3) as
  // inlining effectively wipes out the (baserel_restore) attribute.
  #undef LIBFUNC
  #define LIBFUNC __attribute__((baserel_restore)) __attribute__ ((noinline))
#else
  #define AMISSL_COMMON_DATA
#endif

#else /* !__amigaos4__ */

#define AMISSL_COMMON_DATA

#endif /* __amigaos4__ */

#endif /* !INTERNAL_AMISSL_COMPILER_H */
