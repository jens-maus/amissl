#ifndef ASM_H
#define ASM_H

#if defined __GNUC__
# define ASM
# define ASMARG(a, r) a __asm(#r)
# define SAVEDS
# define STKARGFUN __stdargs
#elif defined __SASC
# define ASM __asm
# define ASMARG(a, r) register __ ## r a
# define SAVEDS __saveds
# define STKARGFUN __stdargs
#else
# error
#endif

/* linker can use symbol b for symbol a if a is not defined */
#define ALIAS(a,b) asm(".stabs \"_" #a "\",11,0,0,0\n.stabs \"_" #b "\",1,0,0,0")

#endif
