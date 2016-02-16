#include <exec/execbase.h>
#include <exec/semaphores.h>
#include <exec/resident.h>
#include <proto/exec.h>

#if defined(__amigaos4__)
#include <proto/elf.h>
#include <proto/dos.h>
#endif

//

#include "amisslmaster_lib_protos.h"

//

#include "amisslmaster_base.h"

//

#include <internal/debug.h>

#undef DEBUG
#define ENTER()                 ((void)0)
#define LEAVE()                 ((void)0)
#define RETURN(r)               ((void)0)
#define SHOWVALUE(f, v)         ((void)0)
#define SHOWPOINTER(f, p)       ((void)0)
#define SHOWSTRING(f, s)        ((void)0)
#define SHOWMSG(f, m)           ((void)0)
#define D(f, s, vargs...)       ((void)0)
#define E(f, s, vargs...)       ((void)0)
#define W(f, s, vargs...)       ((void)0)
#define ASSERT(expression)      ((void)0)

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

#define MIN_STACKSIZE 65536

#if defined(__amigaos4__)
// stack cookie for shell v45+
static const char USED_VAR stack_size[] = "$STACK:" MKSTR(MIN_STACKSIZE) "\n";
#endif

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
struct ExecBase *SysBase = NULL;
struct DosLibrary *DOSBase = NULL;
#endif

#if defined(DEBUG)
struct LibraryHeader * AMISSL_COMMON_DATA globalBase = NULL;
#endif

#define LIBNAME        "amisslmaster.library"
#define LIB_VERSION    VERSION
#define LIB_REVISION   AMISSLMASTERREVISION
#define LIB_REV_STRING "$VER: " LIBNAME " " MKSTR(VERSION) "." MKSTR(AMISSLMASTERREVISION) " (" MKSTR(AMISSLMASTERDATE) ") " MKSTR(LIBCPU) " version\r\n"

static const char UserLibName[] = LIBNAME;
static const char UserLibID[]   = LIB_REV_STRING;

/****************************************************************************/

#define libvector LFUNC_FAS(InitAmiSSLMaster) \
                  LFUNC_FA_(OpenAmiSSL) \
                  LFUNC_FA_(CloseAmiSSL) \
                  LFUNC_FA_(OpenAmiSSLCipher) \
                  LFUNC_FA_(CloseAmiSSLCipher)

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
  (CONST_APTR)libvector,
  (CONST_APTR)-1
};

STATIC CONST struct TagItem mainTags[] =
{
  { MIT_Name,         (Tag)"main" },
  { MIT_VectorTable,  (Tag)main_vectors },
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
  libvector,
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
                     struct LibraryHeader *arg)
{
   struct PPCStackSwapArgs swapargs;

   swapargs.Args[0] = (ULONG)arg;

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

BOOL callLibFunction(ULONG (*function)(struct LibraryHeader *), struct LibraryHeader *arg)
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

      kprintf("call with swapped stack\n");
      // call routine but with embedding it into a [NewPPC]StackSwap()
      success = stackswap_call(&stack->ctrl, function, arg);
      kprintf("done\n");

      FreeVec(stack);
    }
  }
  else
  {
    kprintf("call directly\n");
    success = function(arg);
    kprintf("done\n");
  }

  return success;
}
#else // MIN_STACKSIZE && !__amigaos4__
#define callLibFunction(func, arg) func(arg)
#endif // MIN_STACKSIZE && !__amigaos4__

/****************************************************************************/

#if defined(__amigaos3__)
void __datadata_relocs(void);
void __data_size(void);
void __bss_size(void);
void __a4_init(void);
void _stext(void);
void _etext(void);
void _sdata(void);
void _edata(void);
void _bss_start(void);
void _end(void);

INLINE APTR __GetDataSeg(void)
{
  APTR res;

//__asm volatile ("lea ___a4_init-0x7ffe,%0" : "=a" (res));
//__asm volatile ("movel #___a4_init,%0" : "=a" (res));
//__asm volatile ("subl #32766,%0" : "=a" (res));
//res = (APTR)((ULONG)&__a4_init - 0x7ffeu);
  res = (APTR)&_sdata;

  return res;
}

INLINE ULONG __GetDataSize(void)
{
  ULONG res;

//__asm volatile ("movel #___data_size,%0" : "=r" (res));
//__asm volatile ("subl #__sdata,%0" : "=r" (res));
  res = (ULONG)&_edata - (ULONG)&_sdata;

  return res;
}

INLINE ULONG __GetDataSize2(void)
{
  ULONG res;

//__asm volatile ("movel #___data_size,%0" : "=r" (res));
  res = (ULONG)&__data_size;

  return res;
}

INLINE ULONG __GetDataBSSSize(void)
{
  ULONG res;

//__asm volatile ("movel #___data_size,%0; addl #___bss_size,%0" : "=r" (res));
  res = (ULONG)&__data_size + (ULONG)&__bss_size;

  return res;
}


INLINE APTR __GetBSSSeg(void)
{
  APTR res;

//__asm volatile ("lea ___a4_init,%0" : "=a" (res));
  res = &__a4_init;

  return res;
}

INLINE ULONG __GetBSSSize(void)
{
  ULONG res;

//__asm volatile ("movel #___bss_size,%0" : "=r" (res));
//__asm volatile ("subl #__bss_start,%0" : "=r" (res));
  res = (ULONG)&_end - (ULONG)&_bss_start;

  return res;
}

INLINE APTR __GetA4(void)
{
  APTR res;

  __asm volatile ("movel a4,%0" : "=r" (res));

  return res;
}
#endif // __amigaos3__

#if defined(__amigaos4__)
struct LibraryHeader * LibInit(struct LibraryHeader *base, BPTR librarySegment, struct ExecIFace *pIExec)
{
  struct ExecBase *sb = (struct ExecBase *)pIExec->Data.LibBase;
  IExec = pIExec;
  kprintf("%s:%ld iexec: %08lx sysbase addr: %08lx\n", __FUNCTION__, __LINE__, IExec, &SysBase);
#elif defined(__MORPHOS__)
struct LibraryHeader * LibInit(struct LibraryHeader *base, BPTR librarySegment, struct ExecBase *sb)
{
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

  SysBase = (APTR)sb;

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
  base->sysBase = &sb->LibNode;
  base->segList = librarySegment;

  // if LibInit() is called with librarySegment == 0 then we
  // can skip all the library init stuff and return the base pointer right away.
  if(base->segList != 0)
  {
    kprintf("LIBINIT(%08lx, %08lx, %08lx)\n", base, librarySegment, sb);

    #if defined(__amigaos3__)
    kprintf("data %08lx %ld\n", __GetDataSeg(), __GetDataSize());
    kprintf("bss %08lx %ld\n", __GetBSSSeg(), __GetBSSSize());
    #endif
  
    // make sure that this is really a 68020+ machine if optimized for 020+
    #if _M68060 || _M68040 || _M68030 || _M68020 || __mc68020 || __mc68030 || __mc68040 || __mc68060
    if((SysBase->AttnFlags & AFF_68020) == 0)
    {
      DeleteLibrary(&base->libBase);
      return(NULL);
    }
    #endif
  
    #if defined(__amigaos4__) && defined(__NEWLIB__)
    if((NewlibBase = OpenLibrary("newlib.library", 3)) &&
       GETINTERFACE(INewlib, NewlibBase))
    #endif
    {
      BOOL success;
  
      #if defined(DEBUG)
      // this must be called ahead of any debug output, otherwise we get stuck
      InitDebug();
      #endif
      D(DBF_STARTUP, "LibInit()");
  
      InitSemaphore(&base->libSem);
  
      #if defined(MULTIBASE)
      #if defined(__amigaos3__)
      base->parent   = base;
      base->dataSeg  = __GetDataSeg();
      base->dataSize = __GetDataBSSSize();
      #endif /* __amigaos3__ */
      #if defined(__amigaos4__)
      if((DOSBase = OpenLibrary("dos.library", 52)))
        IDOS = (struct DOSIFace *)GetInterface(DOSBase, "main", 1, NULL);
  
      if((base->ElfBase = OpenLibrary("elf.library",52)))
        base->IElf = (struct ElfIFace *)GetInterface(base->ElfBase,"main",1,NULL);
  
      if(IDOS != NULL && base->IElf != NULL)
      {
        GetSegListInfoTags(base->segList, GSLI_ElfHandle, &base->elfHandle, TAG_DONE);
        if(base->elfHandle && (base->elfHandle = (base->IElf->OpenElfTags)(OET_ElfHandle, base->elfHandle, TAG_DONE)))
        {
          base->parent = base;
          kprintf("OpenElfTags success!\n");
        }
        else
          kprintf("OpenElfTags NO success!\n");
      }
      #endif /* __amigaos4__ */
      #if defined(BASEREL)
      #if defined(__amigaos3__)
      base->a4 = __GetA4();//__GetBSSSeg();
      kprintf("a4 %08lx\n", base->a4);
      #endif /* __amigaos3__ */
      #endif /* BASEREL */
      #endif /* MULTIBASE */
  
      // set the global base
      #if defined(DEBUG)
      globalBase = base;
      #endif
  
      // If we are not running on AmigaOS4 (no stackswap required) we go and
      // do an explicit StackSwap() in case the user wants to make sure we
      // have enough stack for his user functions
      #if defined(DEBUG)
      kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
      kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
      kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);
      #endif
      success = callLibFunction(initBase, base);
      #if defined(DEBUG)
      kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
      kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
      #endif
  
      // check if everything worked out fine
      if(success != FALSE)
      {
        // everything was successfully so lets
        // set the initialized value and contiue
        // with the class open phase
        kprintf("success: %08lx\n", base);
  
        #if defined(__amigaos3__) && 0
        kprintf(".data size %ld %08lx %08lx\n", __data_size, __data_size, &__data_size);
        kprintf(".bss size  %ld %08lx %08lx\n", __bss_size, __bss_size, &__bss_size);
        kprintf("dbsize     %ld %08lx\n", __dbsize(), __dbsize());
        kprintf("a4_init    %08lx %08lx\n", __a4_init, &__a4_init);
        kprintf("relocs     %08lx %08lx\n", __datadata_relocs, &__datadata_relocs);
        kprintf("stext      %08lx %08lx\n", _stext, &_stext);
        kprintf("etext      %08lx %08lx\n", _etext, &_etext);
        kprintf("sdata      %08lx %08lx\n", _sdata, &_sdata);
        kprintf("edata      %08lx %08lx\n", _edata, &_edata);
        kprintf("data size  %08lx %ld\n", (char *)&_edata - (char *)&_sdata, (char *)&_edata - (char *)&_sdata);
        #endif
  
        // return the library base as success
        return base;
      }
      else
        callLibFunction(freeBase, base);
  
      #if defined(__amigaos4__) && defined(__NEWLIB__)
      if(NewlibBase)
      {
        DROPINTERFACE(INewlib);
        CloseLibrary(NewlibBase);
        NewlibBase = NULL;
      }
      #endif
    }
  
    kprintf("failure\n");
  
    DeleteLibrary(&base->libBase);
    return NULL;
  }
  else
  {
    kprintf("segList == NULL, libbase: %08lx\n", base);
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

  kprintf("%s/%ld sys %08lx base %08lx\n", __FUNCTION__, __LINE__, SysBase, base);

  // remove the library base from exec's lib list in advance
  Remove((struct Node *)base);

  // make sure we have enough stack here
  callLibFunction(freeBase, base);

  #if defined(__amigaos4__) && defined(__NEWLIB__)
  if(NewlibBase)
  {
    DROPINTERFACE(INewlib);
    CloseLibrary(NewlibBase);
    NewlibBase = NULL;
  }
  #endif

  // make sure the system deletes the library as well.
  rc = base->segList;  
  DeleteLibrary(&base->libBase);

  kprintf("%s/%ld sys %08lx base %08lx\n", __FUNCTION__, __LINE__, SysBase, base);

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
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);

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
    #if defined(__amigaos4__) && defined(MULTIBASE)
    struct ExtendedLibrary *extlib = (struct ExtendedLibrary *)((ULONG)base + base->libBase.lib_PosSize);

    kprintf("AmiSSLMaster: expunge\n");
    LIB___UserLibExpunge((struct AmiSSLMasterIFace *)extlib->MainIFace);

    (base->IElf->CloseElfTags)(base->elfHandle, CET_ReClose, TRUE, TAG_DONE);
    DropInterface((struct Interface *)base->IElf);
    CloseLibrary((struct Library *)base->ElfBase);
    #endif

    rc = LibDelete(base);
  }
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);

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
  #endif

  kprintf("LIBOPEN(%ld, %08lx), opencnt: %ld\n", version, base, base->libBase.lib_OpenCnt);

  D(DBF_STARTUP, "LibOpen(): %ld", base->libBase.lib_OpenCnt);
  #if defined(DEBUG)
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);
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
  ObtainSemaphore(&base->libSem);

  #if defined(MULTIBASE)
  #if defined(__amigaos4__)
  child = (struct LibraryHeader *)CreateLibrary((struct TagItem *)LibInitTab);
  #else
  child = (struct LibraryHeader *)MakeLibrary((APTR)&LibVectors[0], NULL, NULL, sizeof(*child) + base->dataSize, 0);
  #endif
  kprintf("%s/%ld child %08lx\n", __FUNCTION__, __LINE__, child);

  if(child != NULL)
  {
    #if defined(__amigaos3__)
    unsigned char *dataSeg;
    ULONG *relocs;
    ULONG numRelocs;
    #endif

    child->libBase.lib_OpenCnt++;

    #if !defined(__amigaos4__) // CreateLibrary/LibInit has already done this
    // lets clone the child library header
    child->libBase.lib_Node.ln_Type = NT_LIBRARY;
    child->libBase.lib_Node.ln_Pri  = 0;
    child->libBase.lib_Node.ln_Name = base->libBase.lib_Node.ln_Name;
    child->libBase.lib_Flags        = LIBF_CHANGED | LIBF_SUMUSED;
    child->libBase.lib_Version      = base->libBase.lib_Version;
    child->libBase.lib_Revision     = base->libBase.lib_Revision;
    child->libBase.lib_IdString     = base->libBase.lib_IdString;
    #endif

    InitSemaphore(&child->libSem);
    child->parent   = base;

    #if defined(__amigaos4__)
    {
      uint32 offset;
      if((child->baserelData = (base->IElf->CopyDataSegment)(base->elfHandle, &offset)))
      {
        struct ExtendedLibrary *extlib;
        kprintf("AmiSSLMaster: Env vector: %08x\n", child->baserelData);

        extlib = (struct ExtendedLibrary *)((ULONG)child + child->libBase.lib_PosSize);
        extlib->MainIFace->Data.EnvironmentVector = child->baserelData + offset;
        kprintf("AmiSSLMaster: Environment vector: %08x\n",extlib->MainIFace->Data.EnvironmentVector);
        if(!LIB___UserLibInit((struct AmiSSLMasterIFace *)extlib->MainIFace))
        {
          kprintf("AmiSSLMaster: Returning libBase: %08lx\n", child);
        }
        else
        {
          kprintf("AmiSSLMaster: != 0 returned by __UserLibInit()\n");

          (base->IElf->FreeDataSegmentCopy)(base->elfHandle, child->baserelData);
        }
      }
      else
      { 
        kprintf("IElf->CopyDataSegment failed (handle %08lx)\n",base->elfHandle);
        DeleteLibrary(&child->libBase);
        child = NULL;
      }
    }
    #else
    child->dataSize = base->dataSize;
    dataSeg = (unsigned char *)(child + 1);
    CopyMem(base->dataSeg, dataSeg, base->dataSize);
    relocs = &((ULONG *)__datadata_relocs)[1];
    numRelocs = relocs[-1];
    kprintf("relocate %ld offsets\n", numRelocs);
    if(numRelocs != 0)
    {
      ULONG dist = (unsigned char *)base->dataSeg - dataSeg;

      do
      {
        ((ULONG *)dataSeg)[*relocs++] -= dist;
      }
      while(--numRelocs != 0);
    }

    // now we need to flush the cache because we copied the jmp table
    if(SysBase->LibNode.lib_Version >= 36)
      CacheClearU();

    dataSeg += 0x7ffeu;
    child->dataSeg = dataSeg;
    kprintf("Calling __UserLibInit(%08lx)\n", child);
    LIB___UserLibInit((__BASE_OR_IFACE_TYPE)child);
    #endif // !__amigaos4__

    if (child)
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

  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  // make sure we have enough stack here
  callLibFunction(openBase, base);

  res = base;
  #endif // MULTIBASE

  // unprotect
  ReleaseSemaphore(&base->libSem);

  #if defined(DEBUG)
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);
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
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);
  #endif

  // free all our private data and stuff.
  ObtainSemaphore(&base->libSem);

  // make sure we have enough stack here
  callLibFunction(closeBase, base);

  // unprotect
  ReleaseSemaphore(&base->libSem);

  // decrease the open counter
  base->libBase.lib_OpenCnt--;

  // in case the open counter is == 0 we can
  // make sure that we free everything
  if(base->libBase.lib_OpenCnt == 0)
  {
    #ifdef MULTIBASE
    struct LibraryHeader *parent = base->parent;
    BOOL exp_parent = (parent->libBase.lib_Flags & LIBF_DELEXP) != 0 ? 1 : 0;

    /* release child base */
    #if defined(__amigaos4__)
    struct ExtendedLibrary *extlib = (struct ExtendedLibrary *)((ULONG)base + base->libBase.lib_PosSize);
    LIB___UserLibCleanup((struct AmiSSLMasterIFace *)extlib->MainIFace);
    (parent->IElf->FreeDataSegmentCopy)(parent->elfHandle, base->baserelData);
    base->baserelData = NULL;
    DeleteLibrary(&base->libBase);
    #else
    LIB___UserLibCleanup((__BASE_OR_IFACE_TYPE)base);
    FreeMem((UBYTE *)base-base->libBase.lib_NegSize, base->libBase.lib_NegSize+sizeof(*base)+base->dataSize);
    #endif

    parent->libBase.lib_OpenCnt--;
    if(exp_parent)
    {
      if(parent->libBase.lib_OpenCnt == 0)
      {
        kprintf("AmiSSLMaster: delayed expunge\n");

        #if defined(__amigaos4__)
        extlib = (struct ExtendedLibrary *)((ULONG)parent + parent->libBase.lib_PosSize);
        LIB___UserLibExpunge((struct AmiSSLMasterIFace *)extlib->MainIFace);
        (parent->IElf->CloseElfTags)(parent->elfHandle, CET_ReClose, TRUE, TAG_DONE);
        DropInterface((struct Interface *)parent->IElf);
        CloseLibrary((struct Library *)parent->ElfBase);
        #else
        LIB___UserLibExpunge((__BASE_OR_IFACE_TYPE)base);
        #endif

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
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);
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

asm (" \n\
  .text               \n\
  .globl __baserel_get_addr    \n\
__baserel_get_addr:    \n\
  lwz     2,48(3) /* Fetch EnvironmentVector from struct Interface * */  \n\
  blr    \n\
");
#endif /* __amigaos4__ */
#endif /* BASEREL */
