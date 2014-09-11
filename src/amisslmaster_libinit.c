#include "amisslmaster_lib.h"

#include <exec/resident.h>
#include <proto/exec.h>

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
#define GETINTERFACE(iface, base)	(iface = (APTR)GetInterface((struct Library *)(base), "main", 1L, NULL))
#define DROPINTERFACE(iface)			(DropInterface((struct Interface *)iface), iface = NULL)
#else
#define GETINTERFACE(iface, base)	TRUE
#define DROPINTERFACE(iface)
#endif

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
asm(".text\n\
     .even\n\
     .globl _start\n\
    _start:\n\
     moveq #20,d0\n\
     rts");
#elif defined(__AROS__)
__startup int Main(void)
{
  return RETURN_FAIL;
}
#else
LONG _start(void)
{
  return RETURN_FAIL;
}
#endif

#if defined(__amigaos3__)
asm(".text\n\
     .even\n\
     .globl ___restore_a4\n\
    ___restore_a4:\n\
     movel #0,a4\n\
     rts");
#endif

/****************************************************************************/

#define MIN_STACKSIZE 65536

#if defined(__amigaos4__)
// stack cookie for shell v45+
static const char USED_VAR stack_size[] = "$STACK:" STR(MIN_STACKSIZE) "\n";
#endif

/****************************************************************************/

#if defined(__amigaos4__)
struct Library *SysBase = NULL;
struct ExecIFace* IExec = NULL;
#if defined(__NEWLIB__)
struct Library *NewlibBase = NULL;
struct NewlibIFace* INewlib = NULL;
#endif
#else
struct ExecBase *SysBase = NULL;
#endif

struct LibraryHeader *AmiSSLMasterBase = NULL;
#if defined(__amigaos4__)
struct AmiSSLMasterIFace *IAmiSSLMaster = NULL;
#endif

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

#define LIBNAME        "amisslmaster.library"
#define LIB_VERSION    VERSION
#define LIB_REVISION   AMISSLMASTERREVISION
#define LIB_REV_STRING LIBNAME " " MKSTR(VERSION) "." MKSTR(AMISSLMASTERREVISION) " (" MKSTR(AMISSLMASTERDATE) ") " MKSTR(LIBCPU) " version\r\n"

static const char UserLibName[] = LIBNAME;
static const char UserLibID[]   = LIB_REV_STRING;

/****************************************************************************/

#define libvector LibNull                                    \
                  LFUNC_FA_(AmiSSLMaster_InitAmiSSLMaster)   \
                  LFUNC_FA_(AmiSSLMaster_OpenAmiSSL)         \
                  LFUNC_FA_(AmiSSLMaster_CloseAmiSSL)        \
                  LFUNC_FA_(AmiSSLMaster_OpenAmiSSLCipher)   \
                  LFUNC_FA_(AmiSSLMaster_CloseAmiSSLCipher)


/****************************************************************************/

#if defined(__amigaos4__)

static struct LibraryHeader * LIBFUNC LibInit    (struct LibraryHeader *base, BPTR librarySegment, struct ExecIFace *pIExec);
static BPTR                   LIBFUNC LibExpunge (struct LibraryManagerInterface *Self);
static struct LibraryHeader * LIBFUNC LibOpen    (struct LibraryManagerInterface *Self, ULONG version);
static BPTR                   LIBFUNC LibClose   (struct LibraryManagerInterface *Self);
static LONG                   LIBFUNC LibNull    (void);

#elif defined(__MORPHOS__)

static struct LibraryHeader * LIBFUNC LibInit   (struct LibraryHeader *base, BPTR librarySegment, struct ExecBase *sb);
static BPTR                   LIBFUNC LibExpunge(void);
static struct LibraryHeader * LIBFUNC LibOpen   (void);
static BPTR                   LIBFUNC LibClose  (void);
static LONG                   LIBFUNC LibNull   (void);

#elif defined(__AROS__)

#include <aros/libcall.h>

#define AmiSSLMaster_LibOpen LibOpen
#define AmiSSLMaster_LibClose LibClose
#define AmiSSLMaster_LibExpunge LibExpunge

static AROS_UFP3 (struct LibraryHeader *, LibInit,
                  AROS_UFPA(struct LibraryHeader *, base, D0),
                  AROS_UFPA(BPTR, librarySegment, A0),
                  AROS_UFPA(struct ExecBase *, sb, A6)
);
static AROS_LD1 (struct LibraryHeader *, LibOpen,
                 AROS_LPA (UNUSED ULONG, version, D0),
                 struct LibraryHeader *, base, 1, AmiSSLMaster
);
static AROS_LD0 (BPTR, LibClose,
                 struct LibraryHeader *, base, 2, AmiSSLMaster
);
static AROS_LD1(BPTR, LibExpunge,
                AROS_LPA(UNUSED struct LibraryHeader *, __extrabase, D0),
                struct LibraryHeader *, base, 3, AmiSSLMaster
);

#else

static struct LibraryHeader * LIBFUNC LibInit    (REG(d0, struct LibraryHeader *lh), REG(a0, BPTR Segment), REG(a6, struct ExecBase *sb));
static BPTR                   LIBFUNC LibExpunge (REG(a6, struct LibraryHeader *base));
static struct LibraryHeader * LIBFUNC LibOpen    (REG(d0, ULONG version), REG(a6, struct LibraryHeader *base));
static BPTR                   LIBFUNC LibClose   (REG(a6, struct LibraryHeader *base));
static LONG                   LIBFUNC LibNull    (void);

#endif

/****************************************************************************/

extern ULONG *__datadata_relocs;
extern ULONG __data_size;
extern ULONG __bss_size;
extern ULONG __a4_init;
extern ULONG _stext;
extern ULONG _etext;
extern ULONG _sdata;
extern ULONG _edata;

static ULONG __dbsize(void)
{
	return (char *)&_edata - (char *)&_sdata;
}

/****************************************************************************/

static LONG LIBFUNC LibNull(VOID)
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

STATIC CONST CONST_APTR lib_manager_vectors[] =
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

STATIC CONST CONST_APTR main_vectors[] =
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

STATIC CONST CONST_APTR libInterfaces[] =
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

#else

STATIC CONST CONST_APTR LibVectors[] =
{
  #ifdef __MORPHOS__
  (CONST_APTR)FUNCARRAY_32BIT_NATIVE,
  #endif
  #if defined(__AROS__)
    #ifdef AROS_ABI_V1
    (CONST_APTR)AROS_SLIB_ENTRY(LibOpen, AmiSSLMaster, 1),
    (CONST_APTR)AROS_SLIB_ENTRY(LibClose, AmiSSLMaster, 2),
    (CONST_APTR)AROS_SLIB_ENTRY(LibExpunge, AmiSSLMaster, 3),
    #else
    (CONST_APTR)AROS_SLIB_ENTRY(LibOpen, AmiSSLMaster),
    (CONST_APTR)AROS_SLIB_ENTRY(LibClose, AmiSSLMaster),
    (CONST_APTR)AROS_SLIB_ENTRY(LibExpunge, AmiSSLMaster),
    #endif
  #else
  (CONST_APTR)LibOpen,
  (CONST_APTR)LibClose,
  (CONST_APTR)LibExpunge,
  #endif
  (CONST_APTR)LibNull,
  (CONST_APTR)libvector,
  (CONST_APTR)-1
};

STATIC CONST IPTR LibInitTab[] =
{
  sizeof(struct LibraryHeader),
  (IPTR)LibVectors,
  (IPTR)NULL,
  (IPTR)LibInit
};

#endif

/****************************************************************************/

static const USED_VAR struct Resident ROMTag =
{
  RTC_MATCHWORD,
  (struct Resident *)&ROMTag,
  (struct Resident *)(&ROMTag + 1),
  #if defined(__amigaos4__)
  RTF_AUTOINIT|RTF_NATIVE,      // The Library should be set up according to the given table.
  #elif defined(__MORPHOS__)
  RTF_AUTOINIT|RTF_EXTENDED|RTF_PPC,
  #elif defined(__AROS__)
  RTF_AUTOINIT|RTF_EXTENDED,
  #else
  RTF_AUTOINIT,
  #endif
  LIB_VERSION,
  NT_LIBRARY,
  0,
  (char *)UserLibName,
  (char *)UserLibID+6,          // +6 to skip '$VER: '
  #if defined(__amigaos4__)
  (APTR)libCreateTags           // This table is for initializing the Library.
  #else
  (APTR)LibInitTab,
  #endif
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

#if defined(__mc68000__) && !defined(__AROS__)
ULONG stackswap_call(struct StackSwapStruct *stack,
                     ULONG (*function)(struct LibraryHeader *),
                     struct LibraryHeader *arg);

asm(".text                    \n\
     .even                    \n\
     .globl _stackswap_call   \n\
   _stackswap_call:           \n\
      moveml #0x3022,sp@-     \n\
      movel sp@(20),d3        \n\
      movel sp@(24),a2        \n\
      movel sp@(28),d2        \n\
      movel _SysBase(a4),a6   \n\
      movel d3,a0             \n\
      jsr a6@(-732:W)         \n\
      movel d2,sp@-           \n\
      jbsr a2@                \n\
      movel d0,d2             \n\
      addql #4,sp             \n\
      movel _SysBase(a4),a6   \n\
      movel d3,a0             \n\
      jsr a6@(-732:W)         \n\
      movel d2,d0             \n\
      moveml sp@+,#0x440c     \n\
      rts");
#elif defined(__MORPHOS__)
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
#else
#error Bogus operating system
#endif

static BOOL callLibFunction(ULONG (*function)(struct LibraryHeader *), struct LibraryHeader *arg)
{
  BOOL success = FALSE;
  struct Task *tc;
  ULONG stacksize;

  // retrieve the task structure for the
  // current task
  tc = FindTask(NULL);

  #if defined(__MORPHOS__)
  // In MorphOS we have two stacks. One for PPC code and another for 68k code.
  // We are only interested in the PPC stack.
  NewGetTaskAttrsA(tc, &stacksize, sizeof(ULONG), TASKINFOTYPE_STACKSIZE, NULL);
  #else
  // on all other systems we query via SPUpper-SPLower calculation
  stacksize = (UBYTE *)tc->tc_SPUpper - (UBYTE *)tc->tc_SPLower;
  #endif

  // Swap stacks only if current stack is insufficient
  if(stacksize < MIN_STACKSIZE)
  {
    struct StackSwapStruct *stack;

    if((stack = AllocVec(sizeof(*stack), MEMF_PUBLIC)) != NULL)
    {
      if((stack->stk_Lower = AllocVec(MIN_STACKSIZE, MEMF_PUBLIC)) != NULL)
      {
        // perform the StackSwap
        #if defined(__AROS__)
        // AROS uses an APTR type for stk_Upper
        stack->stk_Upper = (APTR)((IPTR)stack->stk_Lower + MIN_STACKSIZE);
        #else
        // all other systems use ULONG
        stack->stk_Upper = (ULONG)stack->stk_Lower + MIN_STACKSIZE;
        #endif
        stack->stk_Pointer = (APTR)stack->stk_Upper;

        // call routine but with embedding it into a [NewPPC]StackSwap()
        success = stackswap_call(stack, function, arg);

        FreeVec(stack->stk_Lower);
      }
      FreeVec(stack);
    }
  }
  else
    success = function(arg);

  return success;
}
#else // MIN_STACKSIZE && !__amigaos4__
#define callLibFunction(func, arg) func(arg)
#endif // MIN_STACKSIZE && !__amigaos4__

/****************************************************************************/

#if defined(__amigaos4__)
static struct LibraryHeader * LibInit(struct LibraryHeader *base, BPTR librarySegment, struct ExecIFace *pIExec)
{
  struct ExecBase *sb = (struct ExecBase *)pIExec->Data.LibBase;
  IExec = pIExec;
#elif defined(__MORPHOS__)
static struct LibraryHeader * LibInit(struct LibraryHeader *base, BPTR librarySegment, struct ExecBase *sb)
{
#elif defined(__AROS__)
static AROS_UFH3(struct LibraryHeader *, LibInit,
                 AROS_UFHA(struct LibraryHeader *, base, D0),
                 AROS_UFHA(BPTR, librarySegment, A0),
                 AROS_UFHA(struct ExecBase *, sb, A6)
)
{
  AROS_USERFUNC_INIT
#else
static struct LibraryHeader * LIBFUNC LibInit(REG(d0, struct LibraryHeader *base), REG(a0, BPTR librarySegment), REG(a6, struct ExecBase *sb))
{
#endif

  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
  SysBase = (APTR)sb;
  kprintf("%s/%ld %08lx %08lx\n", __FUNCTION__, __LINE__, sb, SysBase);

  // make sure that this is really a 68020+ machine if optimized for 020+
  #if _M68060 || _M68040 || _M68030 || _M68020 || __mc68020 || __mc68030 || __mc68040 || __mc68060
  if(!(SysBase->AttnFlags & AFF_68020))
    return(NULL);
  #endif

  #if defined(__amigaos4__) && defined(__NEWLIB__)
  if((NewlibBase = OpenLibrary("newlib.library", 3)) &&
     GETINTERFACE(INewlib, NewlibBase))
  #endif
  {
    BOOL success = FALSE;

    #if defined(DEBUG)
    // this must be called ahead of any debug output, otherwise we get stuck
    InitDebug();
    #endif
    D(DBF_STARTUP, "LibInit()");

    kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
    // cleanup the library header structure beginning with the
    // library base.
    base->libBase.lib_Node.ln_Type = NT_LIBRARY;
    base->libBase.lib_Node.ln_Pri  = 0;
    base->libBase.lib_Node.ln_Name = (char *)UserLibName;
    base->libBase.lib_Flags        = LIBF_CHANGED | LIBF_SUMUSED;
    base->libBase.lib_Version      = LIB_VERSION;
    base->libBase.lib_Revision     = LIB_REVISION;
    base->libBase.lib_IdString     = (char *)(UserLibID+6);

    memset(&base->libSem, 0, sizeof(base->libSem));
    InitSemaphore(&base->libSem);

    base->sysBase = (APTR)SysBase;
    kprintf("%s/%ld\n", __FUNCTION__, __LINE__);

    // protect access to initBase()
    ObtainSemaphore(&base->libSem);

    // set the AmiSSLMasterBase
    kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
    AmiSSLMasterBase = base;
    kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
    #if defined(__amigaos4__)
    GETINTERFACE(IAmiSSLMaster, AmiSSLMasterBase);
    #endif

    kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
    // If we are not running on AmigaOS4 (no stackswap required) we go and
    // do an explicit StackSwap() in case the user wants to make sure we
    // have enough stack for his user functions
    success = callLibFunction(initBase, base);
    kprintf("%s/%ld\n", __FUNCTION__, __LINE__);

    // unprotect initBase()
    ReleaseSemaphore(&base->libSem);

    // check if everything worked out fine
    if(success == TRUE)
    {
      // everything was successfully so lets
      // set the initialized value and contiue
      // with the class open phase
      base->segList = librarySegment;

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

      // return the library base as success
      return base;
    }
    else
    {
      callLibFunction(freeBase, base);
      AmiSSLMasterBase = NULL;
      DROPINTERFACE(IAmiSSLMaster);
    }

    #if defined(__amigaos4__) && defined(__NEWLIB__)
    if(NewlibBase)
    {
      DROPINTERFACE(INewlib);
      CloseLibrary(NewlibBase);
      NewlibBase = NULL;
    }
    #endif
  }

  return NULL;
#ifdef __AROS__
    AROS_USERFUNC_EXIT
#endif
}

/****************************************************************************/

#ifndef __amigaos4__
#define DeleteLibrary(LIB) \
  FreeMem((STRPTR)(LIB)-(LIB)->lib_NegSize, (ULONG)((LIB)->lib_NegSize+(LIB)->lib_PosSize))
#endif

STATIC BPTR LibDelete(struct LibraryHeader *base)
{
#if defined(__amigaos4__)
  struct ExecIFace *IExec = (struct ExecIFace *)(*(struct ExecBase **)4)->MainInterface;
#endif
  BPTR rc;

  // make sure to restore the SysBase
  SysBase = (APTR)base->sysBase;

  // remove the library base from exec's lib list in advance
  Remove((struct Node *)base);

  // free all our private data and stuff.
  ObtainSemaphore(&base->libSem);

  // make sure we have enough stack here
  callLibFunction(freeBase, base);

  // unprotect
  ReleaseSemaphore(&base->libSem);

  #if defined(__amigaos4__)
  DROPINTERFACE(IAmiSSLMaster);
  IAmiSSLMaster = NULL;
  #endif
  AmiSSLMasterBase = NULL;

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

  return rc;
}

#if defined(__amigaos4__)
static BPTR LibExpunge(struct LibraryManagerInterface *Self)
{
  struct LibraryHeader *base = (struct LibraryHeader *)Self->Data.LibBase;
#elif defined(__MORPHOS__)
static BPTR LibExpunge(void)
{
  struct LibraryHeader *base = (struct LibraryHeader*)REG_A6;
#elif defined(__AROS__)
static AROS_LH1(BPTR, LibExpunge,
  AROS_LHA(UNUSED struct LibraryHeader *, __extrabase, D0),
  struct LibraryHeader *, base, 3, AmiSSLMaster
)
{
    AROS_LIBFUNC_INIT
#else
static BPTR LIBFUNC LibExpunge(REG(a6, struct LibraryHeader *base))
{
#endif
  BPTR rc;

  D(DBF_STARTUP, "LibExpunge(): %ld", base->libBase.lib_OpenCnt);
  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);

  // in case our open counter is still > 0, we have
  // to set the late expunge flag and return immediately
  if(base->libBase.lib_OpenCnt > 0)
  {
    base->libBase.lib_Flags |= LIBF_DELEXP;
    rc = 0;
  }
  else
  {
    rc = LibDelete(base);
  }
  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);

  return rc;
#ifdef __AROS__
  AROS_LIBFUNC_EXIT
#endif
}

/****************************************************************************/

#if defined(__amigaos4__)
static struct LibraryHeader *LibOpen(struct LibraryManagerInterface *Self, ULONG version UNUSED)
{
  struct LibraryHeader *base = (struct LibraryHeader *)Self->Data.LibBase;
#elif defined(__MORPHOS__)
static struct LibraryHeader *LibOpen(void)
{
  struct LibraryHeader *base = (struct LibraryHeader*)REG_A6;
#elif defined(__AROS__)
static AROS_LH1(struct LibraryHeader *, LibOpen,
                AROS_LHA(UNUSED ULONG, version, D0),
                struct LibraryHeader *, base, 1, AmiSSLMaster
)
{
    AROS_LIBFUNC_INIT
#else
static struct LibraryHeader * LIBFUNC LibOpen(REG(d0, UNUSED ULONG version), REG(a6, struct LibraryHeader *base))
{
#endif
  struct LibraryHeader *res = base;

  D(DBF_STARTUP, "LibOpen(): %ld", base->libBase.lib_OpenCnt);
  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);

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

  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
  return res;
#ifdef __AROS__
  AROS_LIBFUNC_EXIT
#endif
}

/****************************************************************************/

#if defined(__amigaos4__)
static BPTR LibClose(struct LibraryManagerInterface *Self)
{
  struct LibraryHeader *base = (struct LibraryHeader *)Self->Data.LibBase;
#elif defined(__MORPHOS__)
static BPTR LibClose(void)
{
  struct LibraryHeader *base = (struct LibraryHeader *)REG_A6;
#elif defined(__AROS__)
static AROS_LH0(BPTR, LibClose,
                struct LibraryHeader *, base, 2, AmiSSLMaster
)
{
    AROS_LIBFUNC_INIT
#else
static BPTR LIBFUNC LibClose(REG(a6, struct LibraryHeader *base))
{
#endif
  BPTR rc = 0;

  D(DBF_STARTUP, "LibClose(): %ld", base->libBase.lib_OpenCnt);
  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);

  // decrease the open counter
  base->libBase.lib_OpenCnt--;

  // in case the opern counter is <= 0 we can
  // make sure that we free everything
  if(base->libBase.lib_OpenCnt <= 0)
  {
    // in case the late expunge flag is set we go and
    // expunge the library base right now
    if(base->libBase.lib_Flags & LIBF_DELEXP)
    {
      rc = LibDelete(base);
    }
  }

  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
  return rc;
#ifdef __AROS__
  AROS_LIBFUNC_EXIT
#endif
}

/****************************************************************************/
