#ifndef INTERNAL_AMISSL_COMPILER_H
#define INTERNAL_AMISSL_COMPILER_H

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
