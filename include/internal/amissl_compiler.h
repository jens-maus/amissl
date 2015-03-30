#ifndef INTERNAL_AMISSL_COMPILER_H
#define INTERNAL_AMISSL_COMPILER_H

#ifndef SDI_COMPILER_H
#define SDI_COMPILER_H

/* Includeheader

        Name:           SDI_compiler.h
        Versionstring:  $VER: SDI_compiler.h 1.35 (03.03.2011)
        Authors:        Dirk Stoecker, Jens Maus
        Distribution:   PD
        Project page:   http://sf.net/p/adtools/code/HEAD/tree/trunk/sdi/
        Description:    defines to hide compiler stuff
        Id:             $Id$
        URL:            $URL: https://svn.code.sf.net/p/adtools/code/trunk/sdi/SDI_compiler.h $

 1.1   25.06.98 : created from data made by Gunter Nikl
 1.2   17.11.99 : added VBCC
 1.3   29.02.00 : fixed VBCC REG define
 1.4   30.03.00 : fixed SAVEDS for VBCC
 1.5   29.07.00 : added #undef statements (needed e.g. for AmiTCP together
                  with vbcc)
 1.6   19.05.01 : added STACKEXT and Dice stuff
 1.7   16.06.01 : added MorphOS specials and VARARGS68K
 1.8   21.09.02 : added MorphOS register stuff
 1.9   26.09.02 : added OFFSET macro. Thanks Frank Wille for suggestion
 1.10  18.10.02 : reverted to old MorphOS-method for GCC
 1.11  09.11.02 : added REGARGS define to MorphOS section
 1.12  18.01.04 : some adaptions for AmigaOS4 compatibility
 1.13  17.02.04 : changed ASM macros to be a simple define and added
                  INTERRUPT, CHIP and FAR
 1.14  02.03.04 : added UNUSED which can be used to specify a function parameter
                  or variable as "unused" which will not cause any compiler warning.
 1.15  02.03.04 : added special INLINE define for gcc > 3.0 version
 1.17  07.03.04 : changed INLINE definition of gcc <= 2.95.3 to be static aswell.
 1.18  21.06.04 : added USED and USED_VAR attribute to allow placing a
                  __attribute__((used)) to a function and a variable, taking care of
                  different compiler versions.
 1.19  04.07.04 : register specification for variables is not supported on MorphOS,
                  so we modified the REG() macro accordingly.
 1.20  28.02.05 : correct INLINE for VBCC.
 1.21  28.02.05 : cleanup __GCC__ case.
 1.22  16.05.05 : changed the vbcc/REG() macro.
                  added missing vbcc/VARARGS68K define.
                  moved morphos SDI_EmulLib Stuff into compilers.h. I know it's not
                  compiler specific,  (Guido Mersmann)
 1.23  30.04.06 : modified to get it compatible to AROS. (Guido Mersmann)
 1.24  06.05.06 : __linearvarargs is only valid for vbcc and PPC, so I moved VARARGS68K
                  to prevent problems with 68K and i86 targets. (Guido Mersmann)
 1.25  21.06.07 : added NEAR to be usable for __near specification for SAS/C
 1.26  14.10.07 : added DEPRECATED macro which defaults to __attribute__((deprecated))
                  for GCC compiles.
 1.27  20.03.09 : applied some changes and fixes to get the header more usable
                  for an AROS compilation. (Pavel Fedin)
 1.28  25.03.09 : added missing IPTR definition to make SDI_compiler.h more compatible
                  to AROS. (Pavel Fedin)
 1.29  25.03.09 : fixed the IPTR definition and also the use of the __M68000__ define.
 1.30  26.03.09 : fixed the IPTR definition by only defining it for non AROS targets.
 1.31  29.03.09 : added VARARGS68K definition for AROS.
 1.32  28.05.09 : added STACKED definition for non-AROS targets.
 1.33  03.06.10 : added missing SIPTR definition to make SDI_compiler.h more compatible
                  to AROS.
 1.34  26.07.10 : adapted IPTR and SIPTR definitions as the latest MorphOS SDK already
                  contains them. (tboeckel)
 1.35  03.03.11 : fixed AROS macros for m68k (Jason McMullan)

*/

/*
** This is PD (Public Domain). This means you can do with it whatever you want
** without any restrictions. I only ask you to tell me improvements, so I may
** fix the main line of this files as well.
**
** To keep confusion level low: When changing this file, please note it in
** above history list and indicate that the change was not made by myself
** (e.g. add your name or nick name).
**
** Find the latest version of this file at:
** http://sf.net/p/adtools/code/HEAD/tree/trunk/sdi/
**
** Jens Maus <mail@jens-maus.de>
** Dirk Stoecker <soft@dstoecker.de>
*/

/* Some SDI internal header */

#undef ASM
#undef REG
#undef LREG
#undef CONST
#undef SAVEDS
#undef INLINE
#undef REGARGS
#undef STDARGS
#undef OFFSET
#undef INTERRUPT
#undef CHIP
#undef FAR
#undef NEAR
#undef UNUSED
#undef USED
#undef USED_VAR
#undef DEPRECATED

/* first "exceptions" */

#if defined(__MAXON__)
  #define STDARGS
  #define STACKEXT
  #define REGARGS
  #define SAVEDS
  #define INLINE inline
/*************************************************************************/
#elif defined(__VBCC__)
  #define STDARGS
  #define STACKEXT
  #define REGARGS
  #define INLINE static
  #define OFFSET(p,m) __offsetof(struct p,m)

  #if defined(__PPC__)
    #define VARARGS68K __linearvarargs
    #define REG(reg,arg) arg
  #else
    #define REG(reg,arg) __reg(#reg) arg
  #endif
/*************************************************************************/
#elif defined(__STORM__)
  #define STDARGS
  #define STACKEXT
  #define REGARGS
  #define INLINE inline
/*************************************************************************/
#elif defined(__SASC)
  #define ASM __asm
/*************************************************************************/
#elif defined(__GNUC__)
  #define UNUSED __attribute__((unused)) /* for functions, variables and types */
  #define USED   __attribute__((used))   /* for functions only! */
  #define DEPRECATED __attribute__((deprecated))
  #if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 0)
    #define USED_VAR USED /* for variables only! */
    #define INLINE static __inline __attribute__((always_inline))
  #endif
  /* we have to distinguish between AmigaOS4 and MorphOS */
  #if (defined(_M68000) || defined(__M68000) || defined(__mc68000)) && !defined(__AROS__)
    #define REG(reg,arg) arg __asm(#reg)
    #define LREG(reg,arg) register REG(reg,arg)
  #else
    #define REG(reg,arg) arg
    #define SAVEDS
    #define STDARGS
    #define REGARGS
    #define STACKEXT
    #if defined(__MORPHOS__)
      #define VARARGS68K __attribute__((varargs68k))
    #endif
    #if defined(__AROS__)
      #define VARARGS68K __stackparm
    #endif
    #define INTERRUPT
    #define CHIP
  #endif
  #ifndef __far
    #define FAR /* __far NOT supported! */
  #endif
  #define NEAR
#elif defined(_DCC)
  #define REG(reg,arg) __##reg arg
  #define STACKEXT __stkcheck
  #define STDARGS __stkargs
  #define INLINE static
#endif

/* then "common" ones */

#if !defined(ASM)
  #define ASM
#endif
#if !defined(REG)
  #define REG(reg,arg) register __##reg arg
#endif
#if !defined(LREG)
  #define LREG(reg,arg) register arg
#endif
#if !defined(CONST)
  #define CONST const
#endif
#if !defined(SAVEDS)
  #define SAVEDS __saveds
#endif
#if !defined(INLINE)
  #define INLINE static __inline
#endif
#if !defined(REGARGS)
  #define REGARGS __regargs
#endif
#if !defined(STDARGS)
  #define STDARGS __stdargs
#endif
#if !defined(STACKEXT)
  #define STACKEXT __stackext
#endif
#if !defined(VARARGS68K)
  #define VARARGS68K
#endif
#if !defined(OFFSET)
  #define OFFSET(structName, structEntry) \
    ((char *)(&(((struct structName *)0)->structEntry))-(char *)0)
#endif
#if !defined(INTERRUPT)
  #define INTERRUPT __interrupt
#endif
#if !defined(CHIP)
  #define CHIP __chip
#endif
#if !defined(FAR)
  #define FAR __far
#endif
#if !defined(NEAR)
  #define NEAR __near
#endif
#if !defined(UNUSED)
  #define UNUSED
#endif
#if !defined(USED)
  #define USED
#endif
#if !defined(USED_VAR)
  #define USED_VAR
#endif
#if !defined(DEPRECATED)
  #define DEPRECATED
#endif
#if !defined(__AROS__) && !defined(__MORPHOS__) && !defined(IPTR)
  #define IPTR ULONG
#endif
#if !defined(__AROS__) && !defined(__MORPHOS__) && !defined(SIPTR)
  #define SIPTR LONG
#endif
#if !defined(__AROS__) && !defined(STACKED)
  #define STACKED
#endif

/*************************************************************************/

#endif /* SDI_COMPILER_H */

#ifndef SDI_STDARG_H
#define SDI_STDARG_H

/* Includeheader

        Name:           SDI_stdarg.h
        Versionstring:  $VER: SDI_stdarg.h 1.1 (06.06.2014)
        Author:         Jens Maus
        Distribution:   PD
        Project page:   http://sf.net/p/adtools/code/HEAD/tree/trunk/sdi/
        Description:    defines to hide OS specific variable arguments
                        function definitions
        Id:             $Id$
        URL:            $URL: https://svn.code.sf.net/p/adtools/code/trunk/sdi/SDI_stdarg.h $

 1.0   05.07.2004 : initial version
 1.1   06.06.2014 : added a type cast to VA_ARG() result

*/

/*
** This is PD (Public Domain). This means you can do with it whatever you want
** without any restrictions. I only ask you to tell me improvements, so I may
** fix the main line of this files as well.
**
** To keep confusion level low: When changing this file, please note it in
** above history list and indicate that the change was not made by myself
** (e.g. add your name or nick name).
**
** Find the latest version of this file at:
** http://sf.net/p/adtools/code/HEAD/tree/trunk/sdi/
**
** Jens Maus <mail@jens-maus.de>
** Dirk Stöcker <soft@dstoecker.de>
*/

/*
** Variable arguments function macros to allow specification of the
** variable arguments typical functions like va_list/va_start/va_end in
** an operating system independent fashion.
**
** With help of the following macro definition a developer might define
** variable arguments functions for different types of operating
** system implementations without having to clutter the sources with
** multiple "#ifdef" defines just because all of these operating systems
** come with different varable arguments support functions.
**
** Example:
**
** Instead of using the standard va_list, va_start and va_end functions
** of <stdarg.h>, a developer might specify the following sprintf()
** function to make it automatically compatible with AmigaOS3, AmigaOS4
** and also MorphOS.
**
** int VARARGS68K sprintf(char *buf, char *fmt, ...)
** {
**   VA_LIST args;
**
**   VA_START(args, fmt);
**   RawDoFmt(fmt, VA_ARG(args, void *), NULL, buf);
**   VA_END(args);
**
**   return(strlen(buf));
** }
**
** Please note the uppercase letters of the macros in contrast to the
** official varargs functions specified in <stdarg.h>.
**
** By using this schema a developer might ensure full source code backward
** compatibility to AmigaOS3 without having to introduce dozens of #ifdef
** statements in his code.
*/

#include <stdarg.h>

#ifdef VA_LIST
#undef VA_LIST
#endif
#ifdef VA_START
#undef VA_START
#endif
#ifdef VA_ARG
#undef VA_ARG
#endif
#ifdef VA_END
#undef VA_END
#endif

#if defined(__amigaos4__)
  #define VA_LIST             va_list
  #define VA_START(va, start) va_startlinear((va), (start))
  #define VA_ARG(va, type)    va_getlinearva((va), type)
  #define VA_END(va)          va_end((va))
#elif defined(__MORPHOS__)
  #define VA_LIST             va_list
  #define VA_START(va, start) va_start((va), (start))
  #define VA_ARG(va, type)    (type)((va)->overflow_arg_area)
  #define VA_END(va)          va_end((va))
#else
  #define VA_LIST             va_list
  #define VA_START(va, start) va_start((va), (start))
  #define VA_ARG(va, type)    (type)(va)
  #define VA_END(va)          va_end((va))
#endif

#endif /* SDI_STDARG_H */

#ifdef __amigaos4__

#ifndef AMIGA_COMPILER_H
#include <amiga_compiler.h>
#endif /* !AMIGA_COMPILER_H */

#define AMISSL_COMMON_DATA __attribute__((force_no_baserel))

#else /* !__amigaos4__ */

#define AMISSL_COMMON_DATA

#endif /* __amigaos4__ */

#ifdef LIBFUNC
#undef LIBFUNC
#endif

#if defined(__amigaos4__)
  #define LIBFUNC __attribute__((baserel_restore))
  #if !defined(__cplusplus) &&                                        \
    (__STDC_VERSION__ >= 199901L || __GNUC__ >= 3 ||                  \
    (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
    #define LIBPROTO(name, ret, ...)                                  \
      LIBFUNC ret LIB_##name(__VA_ARGS__)
    #define LIBPROTOVA(name, ret, ...)                                \
      LIBFUNC ret VARARGS68K LIB_##name(__VA_ARGS__)
    #define LIBSTUB(name, ret, ...)
    #define CALL_LFUNC_NP(name, ...) LIB_##name(__BASE_OR_IFACE_VAR)
    #define CALL_LFUNC(name, ...) LIB_##name(__BASE_OR_IFACE_VAR, __VA_ARGS__)
  #endif
  #define LFUNC_FAS(name) LIB_##name
  #define LFUNC_VAS(name) LIB_##name
  #define LFUNC_FA_(name) ,LIB_##name
  #define LFUNC_VA_(name) ,LIB_##name
  #define LFUNC(name)     LIB_##name
#elif defined(__MORPHOS__)
  #define LIBFUNC
  #if !defined(__cplusplus) &&                                        \
    (__STDC_VERSION__ >= 199901L || __GNUC__ >= 3 ||                  \
    (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
    #define LIBPROTO(name, ret, ...)                                  \
      LIBFUNC ret LIBSTUB_##name(void);                               \
      LIBFUNC ret LIB_##name(__VA_ARGS__)
    #define LIBPROTOVA(name, ret, ...)
    #define LIBSTUB(name, ret, ...)                                   \
      LIBFUNC ret LIBSTUB_##name(void)
    #define CALL_LFUNC_NP(name, ...) LIB_##name(__BASE_OR_IFACE_VAR)
    #define CALL_LFUNC(name, ...) LIB_##name(__BASE_OR_IFACE_VAR, __VA_ARGS__)
  #endif
  #define LFUNC_FAS(name) LIBSTUB_##name
  #define LFUNC_VAS(name)
  #define LFUNC_FA_(name) ,LIBSTUB_##name
  #define LFUNC_VA_(name)
  #define LFUNC(name)     LIBSTUB_##name
#elif defined(__AROS__)
  #if defined(AROS_ABI_V1)
    #define LIBFUNC
    #if !defined(__cplusplus) &&                                        \
      (__STDC_VERSION__ >= 199901L || __GNUC__ >= 3 ||                  \
      (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
      #define LIBPROTO(name, ret, ...)                                  \
        LIBFUNC ret LIB_##name(__VA_ARGS__)
      #define LIBPROTOVA(name, ret, ...)
      #define LIBSTUB(name, ret, ...)                                   \
        LIBFUNC ret LIBSTUB_0_##name(void)
      #define CALL_LFUNC_NP(name, ...) LIB_##name(__BASE_OR_IFACE_VAR)
      #define CALL_LFUNC(name, ...) LIB_##name(__BASE_OR_IFACE_VAR, __VA_ARGS__)
    #endif
    #define LFUNC_FAS(name) LIBSTUB_0_##name
    #define LFUNC_VAS(name)
    #define LFUNC_FA_(name) ,LIBSTUB_0_##name
    #define LFUNC_VA_(name)
    #define LFUNC(name)     LIBSTUB_0_##name
  #else
    #define LIBFUNC
    #if !defined(__cplusplus) &&                                        \
      (__STDC_VERSION__ >= 199901L || __GNUC__ >= 3 ||                  \
      (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
      #define LIBPROTO(name, ret, ...)                                  \
        LIBFUNC ret LIB_##name(__VA_ARGS__)
      #define LIBPROTOVA(name, ret, ...)
      #define LIBSTUB(name, ret, ...)                                   \
        LIBFUNC ret LIBSTUB_##name(void)
      #define CALL_LFUNC_NP(name, ...) LIB_##name(__BASE_OR_IFACE_VAR)
      #define CALL_LFUNC(name, ...) LIB_##name(__BASE_OR_IFACE_VAR, __VA_ARGS__)
    #endif
    #define LFUNC_FAS(name) LIBSTUB_##name
    #define LFUNC_VAS(name)
    #define LFUNC_FA_(name) ,LIBSTUB_##name
    #define LFUNC_VA_(name)
    #define LFUNC(name)     LIBSTUB_##name
  #endif
#else
  #define LIBFUNC SAVEDS ASM
  #if !defined(__cplusplus) &&                                        \
    (__STDC_VERSION__ >= 199901L || __GNUC__ >= 3 ||                  \
    (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
    #define LIBPROTO(name, ret, ...)                                  \
      LIBFUNC ret LIB_##name(__VA_ARGS__)
    #define LIBPROTOVA(name, ret, ...)
    #define LIBSTUB(name, ret, ...)
    #define CALL_LFUNC_NP(name, ...) LIB_##name(__BASE_OR_IFACE_VAR)
    #define CALL_LFUNC(name, ...) LIB_##name(__BASE_OR_IFACE_VAR, __VA_ARGS__)
  #endif
  #define LFUNC_FAS(name) LIB_##name
  #define LFUNC_VAS(name)
  #define LFUNC_FA_(name) ,LIB_##name
  #define LFUNC_VA_(name)
  #define LFUNC(name)     LIB_##name
#endif

#endif /* !INTERNAL_AMISSL_COMPILER_H */
