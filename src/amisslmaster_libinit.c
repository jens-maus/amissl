/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2023 AmiSSL Open Source Team.
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

#include <exec/execbase.h>
#include <exec/semaphores.h>
#include <exec/resident.h>
#include <proto/exec.h>

#if defined(__amigaos4__)
#include <proto/elf.h>
#include <proto/dos.h>
#endif

#include <internal/debug.h>
#include <internal/amissl.h>

#include "amisslmaster_lib_protos.h"
#include "amisslmaster_base.h"
#include "amisslmaster_glue.h"

#if defined(__MORPHOS__)
#include "amisslmaster_stubs_mos.h"
#endif

#include "amissl_rev.h"

#if defined(__amigaos4__)
#define GETINTERFACE(iface, base) (iface = (APTR)GetInterface((struct Library *)(base), "main", 1L, NULL))
#define DROPINTERFACE(iface)      (DropInterface((struct Interface *)iface), iface = NULL)
#else
#define GETINTERFACE(iface, base) TRUE
#define DROPINTERFACE(iface)
#endif

#ifndef __amigaos4__
#define DeleteLibrary(LIB) \
  FreeMem((STRPTR)(LIB)-(LIB)->lib_NegSize, (ULONG)((LIB)->lib_NegSize+(LIB)->lib_PosSize))
#endif

#if defined(__amigaos3__)
#if defined(__GNUC__) && __GNUC__ < 3
#define FORCED_CONST const __attribute__ ((section (".text")))
#endif // __GNUC__
#endif // __amigaos3__

#ifndef FORCED_CONST
#define FORCED_CONST const FAR
#endif // FORCED_CONST

/****************************************************************************/

/*
 * The system (and compiler) rely on a symbol named _start which marks
 * the beginning of execution of an ELF file. To prevent others from
 * executing this library, and to keep the compiler/linker happy, we
 * define an empty _start symbol here.
 *
 * On the classic system (pre-AmigaOS4) this was usually done by
 * moveq #0,d0
 * rts
 *
 */

#if defined(__amigaos3__)
asm(".text\n\tjra __start\n");
#endif
#if defined(__AROS__)
__startup int Main(void)
#else
LONG _start(void)
#endif
{
  return RETURN_FAIL;
}

/****************************************************************************/

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

/****************************************************************************/

#if defined(__amigaos4__)
struct Library * AMISSL_COMMON_DATA SysBase = NULL;
struct ExecIFace * AMISSL_COMMON_DATA IExec = NULL;
struct Library * AMISSL_COMMON_DATA DOSBase = NULL;
struct DOSIFace * AMISSL_COMMON_DATA IDOS = NULL;
#if defined(__NEWLIB__)
struct Library * AMISSL_COMMON_DATA NewlibBase = NULL;
struct NewlibIFace * AMISSL_COMMON_DATA INewlib = NULL;
#endif
#else
struct ExecBase * AMISSL_COMMON_DATA SysBase = NULL;
struct DosLibrary * AMISSL_COMMON_DATA DOSBase = NULL;
#endif

#define LIBNAME        "amisslmaster.library"
#define LIB_VERSION    VERSION
#define LIB_REVISION   REVISION
#define LIB_REV_STRING "$VER: " LIBNAME " " MKSTR(VERSION) "." MKSTR(REVISION) " (" DATE ") " MKSTR(LIBCPU) " version\r\n"

static const char UserLibName[] = LIBNAME;
static const char UserLibID[]   = LIB_REV_STRING;

/****************************************************************************/

#if defined(__MORPHOS__)

/*** We must not access any globals here, since r13 hasn't been set up yet! ***/
#define SysBase base->sysBase

#define R13_OFFSET  0x8000  /* Space for negative offset smalldata */

extern const char __r13_init;
extern int __datadata_relocs(void);

extern const ULONG __sdata_size, __sbss_size;
static __inline ULONG __dbsize(void)
{
  static const ULONG size[] = { (ULONG)&__sdata_size, (ULONG)&__sbss_size };
  return size[0] + size[1];
}

/* This function must preserve all registers except r13 */
asm ("                                                                                          \n\
  .section  \".text\"                                                                           \n\
  .align 2                                                                                      \n\
  .type  __restore_r13, @function                                                               \n\
  .globl __restore_r13  # Remove this line if you want the function to be local (see libdata.c) \n\
__restore_r13:                                                                                  \n\
  lwz 13, 56(2) # MyEmulHandle->An[6] (REG_A6)                                                  \n\
  lwz 13, 36(13)  # r13 = MyLibBase->DataSeg                                                    \n\
  blr                                                                                           \n\
__end__restore_r13:                                                                             \n\
  .size __restore_r13, __end__restore_r13 - __restore_r13                                       \n\
");
#endif

/****************************************************************************/

#if defined(__amigaos4__)

struct LibraryHeader * LibInit    (struct LibraryHeader *base, BPTR librarySegment, struct ExecIFace *pIExec);
BPTR                   LibExpunge (struct LibraryManagerInterface *Self);
struct LibraryHeader * LibOpen    (struct LibraryManagerInterface *Self, ULONG version);
BPTR                   LibClose   (struct LibraryManagerInterface *Self);
LONG                   LibNull    (void);

#define RTF_EXTRA RTF_NATIVE

#elif defined(__MORPHOS__)

struct LibraryHeader * LibInit   (struct LibraryHeader *base, BPTR librarySegment, struct ExecBase *sb);
BPTR                   LibExpunge(void);
struct LibraryHeader * LibOpen   (void);
BPTR                   LibClose  (void);
LONG                   LibNull   (void);

#define RTF_EXTRA (RTF_EXTENDED | RTF_PPC)

#elif defined(__AROS__)

#include <aros/libcall.h>

#define AmiSSLMaster_LibOpen LibOpen
#define AmiSSLMaster_LibClose LibClose
#define AmiSSLMaster_LibExpunge LibExpunge

AROS_UFP3 (struct LibraryHeader *, LibInit,
                  AROS_UFPA(struct LibraryHeader *, base, D0),
                  AROS_UFPA(BPTR, librarySegment, A0),
                  AROS_UFPA(struct ExecBase *, sb, A6)
);
AROS_LD1 (struct LibraryHeader *, LibOpen,
                 AROS_LPA (UNUSED ULONG, version, D0),
                 struct LibraryHeader *, base, 1, AmiSSLMaster
);
AROS_LD0 (BPTR, LibClose,
                 struct LibraryHeader *, base, 2, AmiSSLMaster
);
AROS_LD1(BPTR, LibExpunge,
                AROS_LPA(UNUSED struct LibraryHeader *, __extrabase, D0),
                struct LibraryHeader *, base, 3, AmiSSLMaster
);

#define RTF_EXTRA RTF_EXTENDED

#else

struct LibraryHeader * LIBFUNC LibInit    (REG(d0, struct LibraryHeader *lh), REG(a0, BPTR Segment), REG(a6, struct ExecBase *sb));
BPTR                   LIBFUNC LibExpunge (REG(a6, struct LibraryHeader *base));
struct LibraryHeader * LIBFUNC LibOpen    (REG(d0, ULONG version), REG(a6, struct LibraryHeader *base));
BPTR                   LIBFUNC LibClose   (REG(a6, struct LibraryHeader *base));
LONG                           LibNull    (void);

#define RTF_EXTRA 0

#endif

/****************************************************************************/

LONG LibNull(VOID)
{
  return(0);
}

/****************************************************************************/

#if defined(__amigaos4__)
/* ------------------- OS4 Manager Interface ------------------------ */
STATIC uint32 _manager_Obtain(struct LibraryManagerInterface *Self)
{
  uint32 res;
  __asm__ __volatile__(
  "1: lwarx  %0,0,%1\n"
  "   addic  %0,%0,1\n"
  "   stwcx. %0,0,%1\n"
  "   bne-   1b"
  : "=&r" (res)
  : "r" (&Self->Data.RefCount)
  : "cc", "memory");

  return res;
}

STATIC uint32 _manager_Release(struct LibraryManagerInterface *Self)
{
  uint32 res;
  __asm__ __volatile__(
  "1: lwarx  %0,0,%1\n"
  "   addic  %0,%0,-1\n"
  "   stwcx. %0,0,%1\n"
  "   bne-   1b"
  : "=&r" (res)
  : "r" (&Self->Data.RefCount)
  : "cc", "memory");

  return res;
}

STATIC CONST_APTR lib_manager_vectors[] =
{
  (CONST_APTR)_manager_Obtain,
  (CONST_APTR)_manager_Release,
  (CONST_APTR)NULL,
  (CONST_APTR)NULL,
  (CONST_APTR)LibOpen,
  (CONST_APTR)LibClose,
  (CONST_APTR)LibExpunge,
  (CONST_APTR)NULL,
  (CONST_APTR)-1
};

STATIC CONST struct TagItem lib_managerTags[] =
{
  { MIT_Name,         (Tag)"__library" },
  { MIT_VectorTable,  (Tag)lib_manager_vectors },
  { MIT_Version,      1 },
  { TAG_DONE,         0 }
};

/* ------------------- Library Interface(s) ------------------------ */

ULONG LibObtain(UNUSED struct Interface *Self)
{
  return 0;
}

ULONG LibRelease(UNUSED struct Interface *Self)
{
  return 0;
}

STATIC CONST_APTR main_vectors[] =
{
  (CONST_APTR)LibObtain,
  (CONST_APTR)LibRelease,
  (CONST_APTR)NULL,
  (CONST_APTR)NULL,
  (CONST_APTR)SDI_LIBVECTOR,
  (CONST_APTR)-1
};

STATIC CONST struct TagItem mainTags[] =
{
  { MIT_Name,         (Tag)"main" },
  { MIT_VectorTable,  (Tag)main_vectors },
  { MIT_Flags,        IFLF_PROTECTED },
  { MIT_Version,      1 },
  { TAG_DONE,         0 }
};

STATIC CONST_APTR libInterfaces[] =
{
  (CONST_APTR)lib_managerTags,
  (CONST_APTR)mainTags,
  (CONST_APTR)NULL
};

// Our libraries always have to carry a 68k jump table with it, so
// lets define it here as extern, as we are going to link it to
// our binary here.
#ifndef NO_VECTABLE68K
extern CONST APTR main_VecTable68K[];
#endif

STATIC CONST struct TagItem libCreateTags[] =
{
  { CLT_DataSize,   sizeof(struct LibraryHeader) },
  { CLT_InitFunc,   (Tag)LibInit },
  { CLT_Interfaces, (Tag)libInterfaces },
  #ifndef NO_VECTABLE68K
  { CLT_Vector68K,  (Tag)main_VecTable68K },
  #endif
  { TAG_DONE,       0 }
};
#define LibInitTab libCreateTags

#else

#if defined(__AROS__)
  #ifdef AROS_ABI_V1
    #define SLIB_ENTRY(FUNC, LIB, NUM) AROS_SLIB_ENTRY(FUNC, LIB, NUM)
  #else
    #define SLIB_ENTRY(FUNC, LIB, NUM) AROS_SLIB_ENTRY(FUNC, LIB)
  #endif
#endif /* __AROS__ */

#ifndef SLIB_ENTRY
  #define SLIB_ENTRY(FUNC, LIB, NUM) FUNC
#endif /* !SLIB_ENTRY */

STATIC FORCED_CONST APTR LibVectors[] =
{
  #ifdef __MORPHOS__
  (APTR)FUNCARRAY_32BIT_NATIVE,
  #endif
  (APTR)SLIB_ENTRY(LibOpen, AmiSSLMaster, 1),
  (APTR)SLIB_ENTRY(LibClose, AmiSSLMaster, 2),
  (APTR)SLIB_ENTRY(LibExpunge, AmiSSLMaster, 3),
  (APTR)LibNull,
  SDI_LIBVECTOR,
  (APTR)-1
};

STATIC FORCED_CONST IPTR LibInitTab[] =
{
  sizeof(struct LibraryHeader),
  (IPTR)LibVectors,
  (IPTR)NULL,
  (IPTR)LibInit
};

#endif

/****************************************************************************/

static FORCED_CONST USED_VAR struct Resident ROMTag =
{
  RTC_MATCHWORD,
  (struct Resident *)&ROMTag,
  (struct Resident *)(&ROMTag + 1),
  RTF_AUTOINIT | RTF_EXTRA,     // The Library should be set up according to the given table.
  LIB_VERSION,
  NT_LIBRARY,
  0,
  (char *)UserLibName,
  (char *)UserLibID+6,          // +6 to skip '$VER: '
  (APTR)LibInitTab,             // This table is for initializing the Library.
  #if defined(__MORPHOS__) || defined(__AROS__)
  LIB_REVISION,
  0
  #endif
};

#if defined(__MORPHOS__)
/*
 * To tell the loader that this is a new emulppc elf and not
 * one for the ppc.library.
 * ** IMPORTANT **
 */
const USED_VAR ULONG __abox__ = 1;

#endif /* __MORPHOS */

/****************************************************************************/

#if defined(MIN_STACKSIZE) && !defined(__amigaos4__)

/* generic StackSwap() function which calls function() surrounded by
   StackSwap() calls */

#if defined(__MORPHOS__)
ULONG stackswap_call(struct StackSwapStruct *stack,
                     ULONG (*function)(struct LibraryHeader *),
                     struct LibraryHeader *base)
{
   struct PPCStackSwapArgs swapargs;

   swapargs.Args[0] = (ULONG)base;

   return NewPPCStackSwap(stack, function, &swapargs);
}
#elif defined(__AROS__)
ULONG stackswap_call(struct StackSwapStruct *stack,
                             ULONG (*function)(struct LibraryHeader *),
                             struct LibraryHeader *arg)
{
   struct StackSwapArgs swapargs;

   swapargs.Args[0] = (IPTR)arg;

   return NewStackSwap(stack, function, &swapargs);
}
#elif defined(__amigaos3__)
ULONG stackswap_call(struct StackSwapStruct *stack,
                     ULONG (*function)(struct LibraryHeader *),
                     struct LibraryHeader *arg);

#if 0
asm(".text                       \n\
     .even                       \n\
     .globl _stackswap_call      \n\
   _stackswap_call:              \n\
      moveml d2-d3/a2-a3/a6,sp@- \n\
      movel sp@(24),d3           \n\
      movel sp@(28),a2           \n\
      movel sp@(32),d2           \n\
      movel d2,a3                \n\
      movel a3@(36),a6           \n\
      movel d3,a0                \n\
      jsr a6@(-732:W)            \n\
      movel d2,sp@-              \n\
      jbsr a2@                   \n\
      movel d0,d2                \n\
      addql #4,sp                \n\
      movel a3@(36),a6           \n\
      movel d3,a0                \n\
      jsr a6@(-732:W)            \n\
      movel d2,d0                \n\
      moveml sp@+,d2-d3/a2-a3/a6 \n\
      rts");
#else
asm(".text                    \n\
     .even                    \n\
     .globl _stackswap_call   \n\
   _stackswap_call:           \n\
      moveml #0x3022,sp@-     \n\
      movel sp@(20),d3        \n\
      movel sp@(24),a2        \n\
      movel sp@(28),d2        \n\
      movel a4@(_SysBase:W),a6\n\
      movel d3,a0             \n\
      jsr a6@(-732:W)         \n\
      movel d2,sp@-           \n\
      jbsr a2@                \n\
      movel d0,d2             \n\
      addql #4,sp             \n\
      movel a4@(_SysBase:W),a6\n\
      movel d3,a0             \n\
      jsr a6@(-732:W)         \n\
      movel d2,d0             \n\
      moveml sp@+,#0x440c     \n\
      rts");
#endif
#define stackPtr() ({register unsigned char *sp __asm("sp");sp;})
#else
#error Bogus operating system
#endif

BOOL callLibFunction(ULONG (*function)(struct LibraryHeader *), struct LibraryHeader *base)
{
  BOOL success = FALSE;
  struct Task *tc;
  ULONG stackleft;

  // retrieve the task structure for the
  // current task
  tc = FindTask(NULL); // retrieve the task structure for the current task

  #if defined(__MORPHOS__)
  ULONG stacksize;
  ULONG stackused;
  // In MorphOS we have two stacks. One for PPC code and another for 68k code.
  // We are only interested in the PPC stack.
  NewGetTaskAttrsA(tc, &stacksize, sizeof(ULONG), TASKINFOTYPE_STACKSIZE, NULL);
  NewGetTaskAttrsA(tc, &stackused, sizeof(ULONG), TASKINFOTYPE_USEDSTACKSIZE, NULL);
  stackleft = stacksize - stackused;
  #elif defined(stackPtr)
  stackleft = stackPtr() - (UBYTE *)tc->tc_SPLower;
  #else
  // on all other systems we query via SPUpper-SPLower calculation
  stackleft = (UBYTE *)tc->tc_SPUpper - (UBYTE *)tc->tc_SPLower;
  #endif

  // Swap stacks only if current stack is insufficient
  if(stackleft < MIN_STACKSIZE)
  {
    struct MyStackSwapStruct {
      struct StackSwapStruct ctrl;
      UBYTE stack[MIN_STACKSIZE];
    } *stack;

    stack = AllocVec(sizeof(*stack), MEMF_PUBLIC);
    if(stack != NULL)
    {
      // perform the StackSwap
      stack->ctrl.stk_Lower = &stack->stack[0];
      stack->ctrl.stk_Pointer = &stack->stack[MIN_STACKSIZE];
      #if defined(__AROS__)
      // AROS uses an APTR type for stk_Upper
      stack->ctrl.stk_Upper = stack->ctrl.stk_Pointer;
      #else
      // all other systems use ULONG
      stack->ctrl.stk_Upper = (ULONG)stack->ctrl.stk_Pointer;
      #endif

      D(DBF_STARTUP, "call with swapped stack");
      // call routine but with embedding it into a [NewPPC]StackSwap()
      success = stackswap_call(&stack->ctrl, function, base);
      D(DBF_STARTUP, "done");

      FreeVec(stack);
    }
  }
  else
  {
    D(DBF_STARTUP, "call directly");
    success = function(base);
    D(DBF_STARTUP, "done");
  }

  return success;
}
#else // MIN_STACKSIZE && !__amigaos4__
#define callLibFunction(func, arg) func(arg)
#endif // MIN_STACKSIZE && !__amigaos4__

/****************************************************************************/

#if defined(__amigaos3__)
INLINE LONG *__GetDataDataRelocs(void)
{
	LONG *res;

	__asm volatile ("movel #___datadata_relocs,%0" : "=r" (res));

	return res;
}

INLINE APTR __GetDataSeg(void)
{
  APTR res;

  __asm volatile ("lea ___a4_init-0x7ffe,%0" : "=a" (res));

  return res;
}

INLINE ULONG __GetDataSize(void)
{
  ULONG res;

  __asm volatile ("movel #___data_size,%0" : "=r" (res));

  return res;
}

INLINE ULONG __GetDataBSSSize(void)
{
  ULONG res;

  __asm volatile ("movel #___data_size,%0; addl #___bss_size,%0" : "=r" (res));

  return res;
}


INLINE APTR __GetBSSSeg(void)
{
  APTR res;

  __asm volatile ("lea ___a4_init,%0" : "=a" (res));

  return res;
}

INLINE ULONG __GetBSSSize(void)
{
  ULONG res;

  __asm volatile ("movel #___bss_size,%0" : "=r" (res));

  return res;
}
#endif // __amigaos3__

#if defined(MULTIBASE)
STATIC struct LibraryHeader *InitMultiBase(struct LibraryHeader *base)
{
  #if defined(__amigaos4__)
  struct Library *ElfBase;
  struct ElfIFace *IElf;

  if((ElfBase = OpenLibrary("elf.library",52)))
  {
    if((IElf = (struct ElfIFace *)GetInterface(ElfBase,"main",1,NULL)))
    {
      Elf32_Handle elf = NULL;
      GetSegListInfoTags(base->segList, GSLI_ElfHandle, &elf, TAG_DONE);
      if(elf && (elf = OpenElfTags(OET_ElfHandle, elf, OET_NoDOS, LIB_IS_AT_LEAST(ElfBase, 53, 35), TAG_DONE)))
      {
        D(DBF_STARTUP, "OpenElfTags success!");
        base->IElf = IElf;
        base->elfHandle = elf;
        return base;
      }
      else
        D(DBF_STARTUP, "OpenElfTags NO success!");
      DropInterface((struct Interface *)IElf);
    }
    CloseLibrary(ElfBase);
  }

  return NULL;
  #elif defined(__amigaos3__)
  base->dataSeg  = __GetDataSeg();
  base->dataSize = __GetDataSize();
  return base;
  #elif defined(__MORPHOS__)
  base->dataSeg = (char *)r13 - R13_OFFSET;
  base->dataSize = __dbsize();
  return base;
  #endif
}
#endif /* MULTIBASE */

#if defined(__amigaos4__)
struct LibraryHeader * LibInit(struct LibraryHeader *base, BPTR librarySegment, struct ExecIFace *pIExec)
{
#elif defined(__MORPHOS__)
struct LibraryHeader * LibInit(struct LibraryHeader *base, BPTR librarySegment, struct ExecBase *sb)
{
  const char *r13 = &__r13_init;
#elif defined(__AROS__)
AROS_UFH3(struct LibraryHeader *, LibInit,
                 AROS_UFHA(struct LibraryHeader *, base, D0),
                 AROS_UFHA(BPTR, librarySegment, A0),
                 AROS_UFHA(struct ExecBase *, sb, A6)
)
{
  AROS_USERFUNC_INIT
#else
struct LibraryHeader * LIBFUNC LibInit(REG(d0, struct LibraryHeader *base), REG(a0, BPTR librarySegment), REG(a6, struct ExecBase *sb))
{
#endif

  // cleanup the library header structure beginning with the
  // library base.
  base->libBase.lib_Node.ln_Type = NT_LIBRARY;
  base->libBase.lib_Node.ln_Pri  = 0;
  base->libBase.lib_Node.ln_Name = (char *)UserLibName;
  base->libBase.lib_Flags        = LIBF_CHANGED | LIBF_SUMUSED;
  base->libBase.lib_Version      = LIB_VERSION;
  base->libBase.lib_Revision     = LIB_REVISION;
  base->libBase.lib_IdString     = (char *)(UserLibID+6);

  // set some important member variables
#if defined(__MORPHOS__)
  base->sysBase = &sb->LibNode;
#endif
  base->segList = librarySegment;

  // if LibInit() is called with librarySegment == 0 then we
  // can skip all the library init stuff and return the base pointer right away.
  if(base->segList != 0)
  {
    #if defined(__amigaos4__)
    IExec = pIExec;
    SysBase = pIExec->Data.LibBase;
    #elif !defined(__MORPHOS__)
    SysBase = (APTR)sb;
    #endif

    // make sure that this is really a 68060 machine if optimized for 68060
    #if _M68060 || __mc68060
    if((SysBase->AttnFlags & AFF_68060) == 0)
    {
      DeleteLibrary(&base->libBase);
      return(NULL);
    }
    // make sure that this is really a 68020+ machine if optimized for 020+
    #elif _M68040 || _M68030 || _M68020 || __mc68020 || __mc68030 || __mc68040
    if((SysBase->AttnFlags & AFF_68020) == 0)
    {
      DeleteLibrary(&base->libBase);
      return(NULL);
    }
    #endif

    #if defined(__amigaos4__)
    if((DOSBase = OpenLibrary("dos.library", 52))
       && GETINTERFACE(IDOS, DOSBase)
       #if defined(__NEWLIB__)
       && (NewlibBase = OpenLibrary("newlib.library", 3))
       && GETINTERFACE(INewlib, NewlibBase)
       #endif
      )
    #else
    if((DOSBase = (struct DosLibrary *)OpenLibrary("dos.library", 37)))
    #endif
    {
      BOOL success;

      #if defined(DEBUG)
      // this must be called ahead of any debug output, otherwise we get stuck
      InitDebug();
      SetupDebug("amisslmaster.library", LIB_VERSION, LIB_REVISION);
      D(DBF_STARTUP, "LibInit()");
      #endif

      if(LOCK_INIT(base->libLock)
      #if defined(MULTIBASE)
	 && (base->parent = InitMultiBase(base))
      #endif /* MULTIBASE */
	 )
      {
        // If we are not running on AmigaOS4 (no stackswap required) we go and
        // do an explicit StackSwap() in case the user wants to make sure we
        // have enough stack for his user functions
        #if defined(DEBUG)
        SHOWPOINTER(DBF_STARTUP, SysBase);
        SHOWPOINTER(DBF_STARTUP, DOSBase);
        #endif
        success = callLibFunction(initBase, base);
        #if defined(DEBUG)
        SHOWPOINTER(DBF_STARTUP, SysBase);
        SHOWPOINTER(DBF_STARTUP, DOSBase);
        #endif

        // check if everything worked out fine
        if(success != FALSE)
        {
          // everything was successfully so lets
          // set the initialized value and contiue
          // with the class open phase
          D(DBF_STARTUP, "success: %08lx", base);

          // return the library base as success
          return base;
        }
        else
          callLibFunction(freeBase, base);
      }
    }

    LOCK_FREE(base->libLock);

    #if defined(__amigaos4__) && defined(__NEWLIB__)
    if(NewlibBase)
    {
      DROPINTERFACE(INewlib);
      CloseLibrary(NewlibBase);
      NewlibBase = NULL;
    }
    #endif

    if(DOSBase)
    {
      DROPINTERFACE(IDOS);
      CloseLibrary((struct Library *)DOSBase);
      DOSBase = NULL;
    }

    E(DBF_STARTUP, "failure");

    DeleteLibrary(&base->libBase);
    return NULL;
  }
  else
  {
    D(DBF_STARTUP, "segList == NULL, libbase: %08lx", base);
    return base;
  }

#ifdef __AROS__
    AROS_USERFUNC_EXIT
#endif
}

/****************************************************************************/

STATIC BPTR LibDelete(struct LibraryHeader *base)
{
  BPTR rc;

#if defined(MULTIBASE)
  #if defined(__amigaos4__)
  struct ExtendedLibrary *extlib = (struct ExtendedLibrary *)((ULONG)base + base->libBase.lib_PosSize);
  struct Library *elfbase;

  LIB___UserLibExpunge((struct AmiSSLMasterIFace *)extlib->MainIFace);

  (base->IElf->CloseElfTags)(base->elfHandle, CET_ReClose, TRUE, TAG_DONE);
  elfbase = base->IElf->Data.LibBase;
  DROPINTERFACE(base->IElf);
  CloseLibrary(elfbase);
  #else
  LIB___UserLibExpunge((__BASE_OR_IFACE_TYPE)base);
  #endif
#endif

  SHOWPOINTER(DBF_STARTUP, SysBase);
  SHOWPOINTER(DBF_STARTUP, base);

  LOCK_FREE(base->libLock);

  // remove the library base from exec's lib list in advance
  Remove((struct Node *)base);

  // make sure we have enough stack here
  callLibFunction(freeBase, base);

  #if defined(__amigaos4__) && defined(__NEWLIB__)
  if(NewlibBase)
  {
    DROPINTERFACE(INewlib);
    CloseLibrary(NewlibBase);
  }
  #endif

  if(DOSBase)
  {
    DROPINTERFACE(IDOS);
    CloseLibrary((struct Library *)DOSBase);
  }

  // make sure the system deletes the library as well.
  rc = base->segList;
  DeleteLibrary(&base->libBase);

  SHOWPOINTER(DBF_STARTUP, SysBase);
  SHOWPOINTER(DBF_STARTUP, base);

  return rc;
}

#if defined(__amigaos4__)
BPTR LibExpunge(struct LibraryManagerInterface *Self)
{
  struct LibraryHeader *base = (struct LibraryHeader *)Self->Data.LibBase;
#elif defined(__MORPHOS__)
BPTR LibExpunge(void)
{
  struct LibraryHeader *base = (struct LibraryHeader*)REG_A6;
#elif defined(__AROS__)
AROS_LH1(BPTR, LibExpunge,
  AROS_LHA(UNUSED struct LibraryHeader *, __extrabase, D0),
  struct LibraryHeader *, base, 3, AmiSSLMaster
)
{
  AROS_LIBFUNC_INIT
#else
BPTR LIBFUNC LibExpunge(REG(a6, struct LibraryHeader *base))
{
#endif
  BPTR rc;
  #if defined(MULTIBASE)
  struct LibraryHeader *child = base;
  base = base->parent;
  #endif

  D(DBF_STARTUP, "LibExpunge(): %ld", base->libBase.lib_OpenCnt);
  SHOWPOINTER(DBF_STARTUP, SysBase);

  // in case our open counter is still > 0, we have
  // to set the late expunge flag and return immediately
  if(base->libBase.lib_OpenCnt
#ifdef MULTIBASE
     || base != child
#endif // MULTIBASE
    )
  {
    base->libBase.lib_Flags |= LIBF_DELEXP;
    rc = 0;
  }
  else
  {
    D(DBF_STARTUP, "AmiSSLMaster: expunge");
    rc = LibDelete(base);
  }

  SHOWPOINTER(DBF_STARTUP, SysBase);

  return rc;
#ifdef __AROS__
  AROS_LIBFUNC_EXIT
#endif
}

/****************************************************************************/

#if defined(__amigaos4__)
struct LibraryHeader * LibOpen(struct LibraryManagerInterface *Self, ULONG version UNUSED)
{
  struct LibraryHeader *base = (struct LibraryHeader *)Self->Data.LibBase;
#elif defined(__MORPHOS__)
struct LibraryHeader * LibOpen(void)
{
  struct LibraryHeader *base = (struct LibraryHeader*)REG_A6;
  ULONG version = REG_D0;
#elif defined(__AROS__)
AROS_LH1(struct LibraryHeader *, LibOpen,
                AROS_LHA(UNUSED ULONG, version, D0),
                struct LibraryHeader *, base, 1, AmiSSLMaster
)
{
  AROS_LIBFUNC_INIT
#else
struct LibraryHeader * LIBFUNC LibOpen(REG(d0, UNUSED ULONG version), REG(a6, struct LibraryHeader *base))
{
#endif
  struct LibraryHeader *res = NULL;
  #if defined(MULTIBASE)
  struct LibraryHeader *child = NULL;
  #if defined(__MORPHOS__)
  struct LibraryHeader *newLib = NULL;
  #endif
  #endif

  D(DBF_STARTUP, "LibOpen(%ld, %08lx), opencnt: %ld", version, base, base->libBase.lib_OpenCnt);

  #if defined(DEBUG)
  SHOWPOINTER(DBF_STARTUP, SysBase);
  SHOWPOINTER(DBF_STARTUP, DOSBase);
  #endif

  // LibOpen(), LibClose() and LibExpunge() are called while the system is in
  // Forbid() state. That means that these functions should be quick and should
  // not break this Forbid()!! Therefore the open counter should be increased
  // as the very first instruction during LibOpen(), because a ClassOpen()
  // which breaks a Forbid() and another task calling LibExpunge() will cause
  // to expunge this library while it is not yet fully initialized. A crash
  // is unavoidable then. Even the semaphore does not guarantee 100% protection
  // against such a race condition, because waiting for the semaphore to be
  // obtained will effectively break the Forbid()!

  // increase the open counter ahead of anything else
  base->libBase.lib_OpenCnt++;

  // delete the late expunge flag
  base->libBase.lib_Flags &= ~LIBF_DELEXP;

  // protect
  LOCK_OBTAIN(base->libLock);

  #if defined(MULTIBASE)
  #if defined(__amigaos4__)
  child = (struct LibraryHeader *)CreateLibrary((struct TagItem *)LibInitTab);
  #elif defined(__amigaos3__)
  child = (struct LibraryHeader *)MakeLibrary((APTR)&LibVectors[0], NULL, NULL, sizeof(*child) + base->dataSize, 0);
  #elif defined(__MORPHOS__)
  newLib = AllocVec(base->libBase.lib_NegSize + base->libBase.lib_PosSize + base->dataSize + 15, MEMF_PUBLIC);
  if(newLib != NULL)
  {
    // Copy master library base
    CopyMem((APTR)((ULONG)base - (ULONG)base->libBase.lib_NegSize), newLib, base->libBase.lib_NegSize + base->libBase.lib_PosSize);

    // Set child library base
    child = (APTR)((ULONG)newLib + (ULONG)base->libBase.lib_NegSize);
  }
  #else
    #error PLATFORM not supported
  #endif

  SHOWPOINTER(DBF_STARTUP, child);

  if(child != NULL)
  {
    #if defined(__amigaos3__) // CreateLibrary/LibInit has already done this
    // lets clone the child library header
    child->libBase.lib_Node.ln_Type = NT_LIBRARY;
    child->libBase.lib_Node.ln_Pri  = 0;
    child->libBase.lib_Node.ln_Name = base->libBase.lib_Node.ln_Name;
    child->libBase.lib_Flags        = LIBF_CHANGED | LIBF_SUMUSED;
    child->libBase.lib_Version      = base->libBase.lib_Version;
    child->libBase.lib_Revision     = base->libBase.lib_Revision;
    child->libBase.lib_IdString     = base->libBase.lib_IdString;
    #endif

    child->parent   = base;

    if (!LOCK_INIT(child->libLock))
    {
        DeleteLibrary(&child->libBase);
        child = NULL;
    }
  }

  if(child != NULL)
  {
    #if defined(__amigaos3__)
    unsigned char *dataSeg;
    ULONG *relocs;
    ULONG numRelocs;
    #endif

    #if defined(__amigaos4__)
    {
      uint32 offset;
      if((child->baserelData = (base->IElf->CopyDataSegment)(base->elfHandle, &offset)))
      {
        struct ExtendedLibrary *extlib;
        SHOWPOINTER(DBF_STARTUP, child->baserelData);

        extlib = (struct ExtendedLibrary *)((ULONG)child + child->libBase.lib_PosSize);
        extlib->MainIFace->Data.EnvironmentVector = child->baserelData + offset;

        SHOWVALUE(DBF_STARTUP, extlib->MainIFace->Data.EnvironmentVector);

        // Reset the child's counter
        child->libBase.lib_OpenCnt = 1;

        if(!LIB___UserLibInit((struct AmiSSLMasterIFace *)extlib->MainIFace))
        {
          SHOWPOINTER(DBF_STARTUP, child);
          SHOWPOINTER(DBF_STARTUP, child->parent);
        }
        else
        {
          E(DBF_STARTUP, "AmiSSLMaster: != 0 returned by __UserLibInit()");

          (base->IElf->FreeDataSegmentCopy)(base->elfHandle, child->baserelData);
        }
      }
      else
      {
        E(DBF_STARTUP, "IElf->CopyDataSegment failed (handle %08lx)", base->elfHandle);
        DeleteLibrary(&child->libBase);
        child = NULL;
      }
    }
    #elif defined(__amigaos3__)
    child->dataSize = __GetDataSize();
    dataSeg = (unsigned char *)(child + 1);
    CopyMem(base->dataSeg, dataSeg, child->dataSize);
    relocs = __GetDataDataRelocs();
    numRelocs = *relocs++;
    D(DBF_STARTUP, "relocate %ld offsets", numRelocs);
    if(numRelocs != 0)
    {
      LONG dist = (unsigned char *)base->dataSeg - dataSeg;

      do
      {
        *(LONG *)(dataSeg + *relocs++) -= dist;
      }
      while(--numRelocs);
    }

    // now we need to flush the cache because we copied the jmp table
    if(SysBase->LibNode.lib_Version >= 36)
      CacheClearE((UBYTE *)child - child->libBase.lib_NegSize, child->libBase.lib_NegSize, CACRF_ClearI | CACRF_ClearD);

    dataSeg += 0x7ffe;
    child->dataSeg = dataSeg;

    // Reset the child's counter
    child->libBase.lib_OpenCnt = 1;

    D(DBF_STARTUP, "Calling __UserLibInit(%08lx)", child);
    LIB___UserLibInit((__BASE_OR_IFACE_TYPE)child);
    #elif defined(__MORPHOS__)
    if(base->dataSize)
    {
      char *origmem = base->dataSeg;
      long *relocs  = (long *)__datadata_relocs;
      int mem       = ((int)newLib + base->libBase.lib_NegSize + base->libBase.lib_PosSize + 15) & (unsigned int) ~15;

      // Copy data segment
      CopyMem(origmem, (char *)mem, base->dataSize);

      // Relocate
      if(relocs[0] > 0)
      {
        int i, num_relocs = relocs[0];

        for(i=0, relocs++; i < num_relocs; ++i, ++relocs)
        {
          *(long *)(mem + *relocs) -= (int)origmem - mem;
        }
      }

      // Save child's data segment base
      child->dataSeg = (char *)mem + R13_OFFSET;

      // Flush JIT "cache" for the area
      CacheClearE(newLib, base->libBase.lib_NegSize + base->libBase.lib_PosSize + 15, CACRF_ClearI);

      // Set child's parent library base
      child->parent = base;

      // Reset the child's counter
      child->libBase.lib_OpenCnt = 1;

      D(DBF_STARTUP, "Calling __UserLibInit(%08lx)", child);
      LIB___UserLibInit((__BASE_OR_IFACE_TYPE)child);
    }
    #else
      #error PLATFORM not supported
    #endif

    if(child)
    {
      // assume openBase won't fail
      base->libBase.lib_OpenCnt++;

      // make sure we have enough stack here
      callLibFunction(openBase, child);
    }

    res = child;
  }

  base->libBase.lib_OpenCnt--;
  #else // MULTIBASE

  #if defined(DEBUG)
  SHOWPOINTER(DBF_STARTUP, SysBase);
  SHOWPOINTER(DBF_STARTUP, DOSBase);
  #endif

  // make sure we have enough stack here
  callLibFunction(openBase, base);

  res = base;
  #endif // MULTIBASE

  // unprotect
  LOCK_RELEASE(base->libLock);

  #if defined(DEBUG)
  SHOWPOINTER(DBF_STARTUP, SysBase);
  SHOWPOINTER(DBF_STARTUP, DOSBase);
  #endif

  return res;
#ifdef __AROS__
  AROS_LIBFUNC_EXIT
#endif
}

/****************************************************************************/

#if defined(__amigaos4__)
BPTR LibClose(struct LibraryManagerInterface *Self)
{
  struct LibraryHeader *base = (struct LibraryHeader *)Self->Data.LibBase;
#elif defined(__MORPHOS__)
BPTR LibClose(void)
{
  struct LibraryHeader *base = (struct LibraryHeader *)REG_A6;
#elif defined(__AROS__)
AROS_LH0(BPTR, LibClose,
                struct LibraryHeader *, base, 2, AmiSSLMaster
)
{
  AROS_LIBFUNC_INIT
#else
BPTR LIBFUNC LibClose(REG(a6, struct LibraryHeader *base))
{
#endif
  BPTR rc = 0;

  D(DBF_STARTUP, "LibClose(): %ld", base->libBase.lib_OpenCnt);
  #if defined(DEBUG)
  SHOWPOINTER(DBF_STARTUP, SysBase);
  SHOWPOINTER(DBF_STARTUP, DOSBase);
  #endif

  // free all our private data and stuff.
  LOCK_OBTAIN(base->libLock);

  // make sure we have enough stack here
  callLibFunction(closeBase, base);

  // unprotect
  LOCK_RELEASE(base->libLock);

  // decrease the open counter
  base->libBase.lib_OpenCnt--;

  // in case the open counter is == 0 we can
  // make sure that we free everything
  if(base->libBase.lib_OpenCnt == 0)
  {
    #ifdef MULTIBASE
    struct LibraryHeader *parent = base->parent;
    BOOL exp_parent = (parent->libBase.lib_Flags & LIBF_DELEXP) != 0 ? 1 : 0;
    #if defined(__amigaos4__)
    struct ExtendedLibrary *extlib = (struct ExtendedLibrary *)((ULONG)base + base->libBase.lib_PosSize);
    #endif
    #endif

    LOCK_FREE(base->libLock);

    #ifdef MULTIBASE
    /* release child base */
    #if defined(__amigaos4__)
    LIB___UserLibCleanup((struct AmiSSLMasterIFace *)extlib->MainIFace);
    (parent->IElf->FreeDataSegmentCopy)(parent->elfHandle, base->baserelData);
    base->baserelData = NULL;
    DeleteLibrary(&base->libBase);
    #elif defined(__amigaos3__)
    LIB___UserLibCleanup((__BASE_OR_IFACE_TYPE)base);
    FreeMem((UBYTE *)base-base->libBase.lib_NegSize, base->libBase.lib_NegSize+sizeof(*base)+base->dataSize);
    #elif defined(__MORPHOS__)
    LIB___UserLibCleanup((__BASE_OR_IFACE_TYPE)base);
    FreeVec((APTR)((ULONG)(base) - (ULONG)(base->libBase.lib_NegSize)));
    #else
      #error PLATFORM not supported
    #endif

    parent->libBase.lib_OpenCnt--;
    if(exp_parent)
    {
      if(parent->libBase.lib_OpenCnt == 0)
      {
        D(DBF_STARTUP, "AmiSSLMaster: delayed expunge");
        rc = LibDelete(parent);
      }
      else
      {
        parent->libBase.lib_Flags |= LIBF_DELEXP;
      }
    }
    #else
    // in case the late expunge flag is set we go and
    // expunge the library base right now
    if((base->libBase.lib_Flags & LIBF_DELEXP) != 0)
    {
      rc = LibDelete(base);
    }
    #endif
  }

  #if defined(DEBUG)
  SHOWPOINTER(DBF_STARTUP, SysBase);
  SHOWPOINTER(DBF_STARTUP, DOSBase);
  #endif

  return rc;
#ifdef __AROS__
  AROS_LIBFUNC_EXIT
#endif
}

/****************************************************************************/

#if defined(BASEREL)
#if defined(__amigaos4__)
void __baserel_get_addr(struct Interface *self);

__asm__ (" \n\
  .text               \n\
  .globl __baserel_get_addr    \n\
__baserel_get_addr:    \n\
  lwz     2,48(3) /* Fetch EnvironmentVector from struct Interface * */  \n\
  blr    \n\
");
#endif /* __amigaos4__ */
#endif /* BASEREL */
