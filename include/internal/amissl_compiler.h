#ifndef INTERNAL_AMISSL_COMPILER_H
#define INTERNAL_AMISSL_COMPILER_H

#ifdef __amigaos4__

#ifndef AMIGA_COMPILER_H
#include <amiga_compiler.h>
#endif /* !AMIGA_COMPILER_H */

#define AMISSL_COMMON_DATA __attribute__((force_no_baserel))

#else /* !__amigaos4__ */

#ifndef ASM
#define ASM __asm
#endif /* !ASM */

#ifndef REG
#define REG(reg, arg) register __##reg arg
#endif /* !REG */

#ifndef REGARGS
#define REGARGS __regargs
#endif /* !REGARGS */

#ifndef STDARGS
#define STDARGS __stdargs
#endif /* !STDARGS */

#ifndef FAR
#define FAR __far
#endif /* !FAR */

#ifndef SAVEDS
#define SAVEDS __saveds
#endif /* !SAVEDS */

#define APICALL
#define VARARGS68K

#define AMISSL_COMMON_DATA FAR

#endif /* __amigaos4__ */

#endif /* !INTERNAL_AMISSL_COMPILER_H */
