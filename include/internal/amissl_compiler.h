#ifndef INTERNAL_AMISSL_COMPILER_H
#define INTERNAL_AMISSL_COMPILER_H

#include <internal/SDI_compiler.h>
#include <internal/SDI_stdarg.h>
#include <internal/SDI_lib.h>

#if defined(__amigaos4__)

#ifndef AMIGA_COMPILER_H
#include <amiga_compiler.h>
#endif /* !AMIGA_COMPILER_H */

#define AMISSL_COMMON_DATA __attribute__((force_no_baserel))

#else /* !__amigaos4__ */

#define AMISSL_COMMON_DATA

#endif /* __amigaos4__ */

#endif /* !INTERNAL_AMISSL_COMPILER_H */
