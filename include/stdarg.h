#ifndef _STDARG_H
#define _STDARG_H

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
