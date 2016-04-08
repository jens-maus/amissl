#undef errno
#define PROTO_AMISSL_H // Don't include amissl protos

#include <stdlib.h> // malloc, free, exit

#include <dos/var.h>
#include <utility/tagitem.h>
#include <exec/memory.h>

#include <amissl/tags.h>
#include <libraries/amissl.h>
#include <openssl/crypto.h>
#include <openssl/lhash.h>

//#include <clib/amissl_protos.h>
#define NO_MTCP_PROTOS
#ifdef __GNUC__
#include "../libcmt/libcmt.h"
#include "../libcmt/multitcp.h"
#else
#include "/libcmt/libcmt.h"
#include "/libcmt/multitcp.h"
#endif

//

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/utility.h>

//

#include "amissl_lib_protos.h"
#include "amisslinit.h"
#include "amissl_base.h"

//

#include <internal/amissl.h>
#include <internal/debug.h>

#ifdef __amigaos4__
struct Library *IntuitionBase = NULL;
struct IntuitionIFace *IIntuition = NULL;
struct Library *UtilityBase = NULL;
struct UtilityIFace *IUtility = NULL;
extern struct Library * AMISSL_COMMON_DATA SysBase;
extern struct ExecIFace * AMISSL_COMMON_DATA IExec;
#else
struct IntuitionBase *IntuitionBase = NULL;
struct Library *UtilityBase = NULL;
#endif

//////////////////////////////////////////////////////////////////////////
// the following two libbase pointers are used to make sure we can access
// the local variables stored in each childs' libbase (via ownBase) but
// also access the global variables which are essentially the same for
// every child and are stored in the parent libbase (via parentBase)
struct LibraryHeader *ownBase = NULL;
struct LibraryHeader *parentBase = NULL;

// on AmigaOS3 we use the restore_a4 feature set of the GCC to actually
// implement BASEREL/MULTIBASE support. Please note that restore_a4 is ONLY
// applied to non-static functions in this file. Thus, be careful to change
// the static/non-static parameter of functions in here.
#if defined(__amigaos3__) && defined(MULTIBASE) && defined(BASEREL)
#include "amissl_base.h"
static const USED_VAR unsigned short __restore_a4[] = { 0x286e, OFFSET(LibraryHeader, dataSeg), 0x4e75 }; // "move.l a6@(dataSeg:w),a4;rts"
#endif

// on MorphOS we have to use a asm construct to restore r13
#if defined(__MORPHOS__) && defined(MULTIBASE) && defined(BASEREL)
// This function must preserve all registers except r13
asm("                                                       \n\
  .section  \".text\"                                       \n\
  .align 2                                                  \n\
  .type  __restore_r13, @function                           \n\
__restore_r13:                                              \n\
  lwz 13, 36(3) # r13 = MyLibBase->DataSeg                  \n\
  blr                                                       \n\
__end__restore_r13:                                         \n\
  .size __restore_r13, __end__restore_r13 - __restore_r13   \n\
");
#endif

#ifdef __amigaos4__
  #define SB_AllocVec(s,t)    AllocVecTags(s, AVT_Type, MEMF_SHARED, AVT_ClearWithValue, 0, TAG_DONE)
#else
  #define SB_AllocVec(s,t)    AllocVec(s, t)
#endif

#if !defined(__amigaos4__)

#include <intuition/intuition.h>
#include <proto/intuition.h>

// required for clib2's math init/exit functions
void __show_error(const char * message)
{
  struct EasyStruct ErrReq;

  ErrReq.es_StructSize   = sizeof(struct EasyStruct);
  ErrReq.es_Flags        = 0;
  ErrReq.es_Title        = (STRPTR)"AmiSSL/OpenSSL internal error";
  ErrReq.es_TextFormat   = (STRPTR)message;
  ErrReq.es_GadgetFormat = (STRPTR)"Ok";

  // Open an Easy Requester
  EasyRequestArgs(NULL, &ErrReq, NULL, NULL);
}
#endif /* !__amigaos4__ */

static AMISSL_STATE *CreateAmiSSLState(void)
{
  AMISSL_STATE *ret;

  ENTER();

  ObtainSemaphore(&parentBase->openssl_cs);

  SHOWPOINTER(DBF_STARTUP, &ownBase);
  SHOWPOINTER(DBF_STARTUP, ownBase);

  ret = (AMISSL_STATE *)SB_AllocVec(sizeof(*ret), MEMF_CLEAR);
  if (ret != NULL)
  {
    unsigned long pid = (unsigned long)FindTask(NULL);

    SHOWVALUE(DBF_STARTUP, pid);

    ret->pid = pid;
    ret->errno = 0;
    ret->errno_ptr = &ret->errno;
    ret->socket_errno_initialized = 0;
    ret->getenv_var = 0;
    ret->stack = 0;
    ret->SocketBase = NULL;
#ifdef __amigaos4__
    ret->ISocket = NULL;
    ret->ISocketPtr = NULL;
#endif
    ret->ThreadGroupID = ownBase->ThreadGroupID;

    D(DBF_STARTUP, "h_insert(thread_hash=%08lx, pid=%08lx, ret=%08lx)", parentBase->thread_hash, pid, ret);
    if(!h_insert(parentBase->thread_hash, pid, ret))
    {
      FreeVec(ret);
      ret = NULL;
    }
  }

  ReleaseSemaphore(&parentBase->openssl_cs);

  SHOWPOINTER(DBF_STARTUP, ret);
  SHOWPOINTER(DBF_STARTUP, SysBase);

  return ret;
}

static void ThreadGroupStateCleanup(UNUSED long Key, AMISSL_STATE *a)
{
  if(a->ThreadGroupID == ownBase->ThreadGroupID)
  {
    D(DBF_STARTUP, "Cleaning up state %08lx for %08lx (group %lu)", a, a->pid, a->ThreadGroupID);
    h_delete(parentBase->thread_hash, a->pid);
    FreeVec(a);
  }
}

LIBPROTO(InternalInitAmiSSL, void, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, UNUSED struct AmiSSLInitStruct *amisslinit))
{
  /* nothing */
  ENTER();
  LEAVE();
}

extern const unsigned int CAST_S_table0[256];
extern const unsigned int CAST_S_table1[256];
extern const unsigned int CAST_S_table2[256];
extern const unsigned int CAST_S_table3[256];
extern const unsigned int CAST_S_table4[256];
extern const unsigned int CAST_S_table5[256];
extern const unsigned int CAST_S_table6[256];
extern const unsigned int CAST_S_table7[256];


LIBPROTO(InitAmiSSLA, LONG, REG(a6, __BASE_OR_IFACE), REG(a0, struct TagItem *tagList))
{
  AMISSL_STATE *state;
  LONG err;

  SHOWPOINTER(DBF_STARTUP, SysBase);
  SHOWPOINTER(DBF_STARTUP, __BASE_OR_IFACE_VAR);

  #if defined(DEBUG)
  {
    int i;
    ULONG checksum;
    D(DBF_STARTUP, "CAST TABLE CHECKSUMS in InitAmiSSLA()");
    for(i=0,checksum=0; i < 256; i++)
    {
//     D(DBF_STARTUP, "CAST_S_table4[%ld] = %08lx", i, CAST_S_table4[i]);
      checksum = checksum + CAST_S_table0[i];
    }
    D(DBF_STARTUP, "CHECKSUM table0: %08lx (addr: %08lx)", checksum, &CAST_S_table0[0]);
 
    for(i=0,checksum=0; i < 256; i++)
    {
//     D(DBF_STARTUP, "CAST_S_table4[%ld] = %08lx", i, CAST_S_table4[i]);
      checksum = checksum + CAST_S_table1[i];
    }
    D(DBF_STARTUP, "CHECKSUM table1: %08lx (addr: %08lx)", checksum, &CAST_S_table1[0]);
 
    for(i=0,checksum=0; i < 256; i++)
    {
//     D(DBF_STARTUP, "CAST_S_table4[%ld] = %08lx", i, CAST_S_table4[i]);
      checksum = checksum + CAST_S_table2[i];
    }
    D(DBF_STARTUP, "CHECKSUM table2: %08lx (addr: %08lx)", checksum, &CAST_S_table2[0]);
 
    for(i=0,checksum=0; i < 256; i++)
    {
//     D(DBF_STARTUP, "CAST_S_table4[%ld] = %08lx", i, CAST_S_table4[i]);
      checksum = checksum + CAST_S_table3[i];
    }
    D(DBF_STARTUP, "CHECKSUM table3: %08lx (addr: %08lx)", checksum, &CAST_S_table3[0]);
 
    for(i=0,checksum=0; i < 256; i++)
    {
//     D(DBF_STARTUP, "CAST_S_table4[%ld] = %08lx", i, CAST_S_table4[i]);
      checksum = checksum + CAST_S_table4[i];
    }
    D(DBF_STARTUP, "CHECKSUM table4: %08lx (addr: %08lx)", checksum, &CAST_S_table4[0]);

    for(i=0,checksum=0; i < 256; i++)
    {
//      D(DBF_STARTUP, "CAST_S_table5[%ld] = %08lx", i, CAST_S_table5[i]);
      checksum = checksum + CAST_S_table5[i];
    }
    D(DBF_STARTUP, "CHECKSUM table5: %08lx (addr: %08lx)", checksum, &CAST_S_table5[0]);

    for(i=0,checksum=0; i < 256; i++)
    {
//      D(DBF_STARTUP, "CAST_S_table6[%ld] = %08lx", i, CAST_S_table6[i]);
      checksum = checksum + CAST_S_table6[i];
    }
    D(DBF_STARTUP, "CHECKSUM table6: %08lx (addr: %08lx)", checksum, &CAST_S_table6[0]);

    for(i=0,checksum=0; i < 256; i++)
    {
//      D(DBF_STARTUP, "CAST_S_table7[%ld] = %08lx", i, CAST_S_table7[i]);
      checksum = checksum + CAST_S_table7[i];
    }
    D(DBF_STARTUP, "CHECKSUM table7: %08lx (addr: %08lx)", checksum, &CAST_S_table7[0]);
  }
  #endif

  if((state = CreateAmiSSLState()))
  {
    int *errno_ptr;

    state->SocketBase = (APTR)GetTagData(AmiSSL_SocketBase, (int)NULL, tagList);

#ifdef __amigaos4__
    state->ISocket = (struct SocketIFace *)GetTagData(AmiSSL_ISocket, (int)NULL, tagList);
    state->ISocketPtr = (struct SocketIFace **)GetTagData(AmiSSL_ISocketPtr, (ULONG)NULL, tagList);
    state->IAmiSSL = __BASE_OR_IFACE_VAR;
    state->AmiSSLBase = ((struct Interface *)__BASE_OR_IFACE_VAR)->Data.LibBase;

    /* When ISocket[Ptr] is supplied, there is no need to specify SocketBase.
     * This combination would confuse the code below which thinks that it
     * needs to GetInterface if there is a SocketBase and also drops it later.
     */
    if (state->ISocket || state->ISocketPtr)
      state->SocketBase = NULL;

    if (state->ISocketPtr)
      state->ISocket = NULL; /* This is unneeded, ISocket should never be accessed directly */
    else
      state->ISocketPtr = &state->ISocket;

    if(state->SocketBase)
    {
      // This means we are beeing called from a 68k program and we need to get the ppc interface to the library ourselves
      if((*state->ISocketPtr = (struct SocketIFace *)GetInterface(state->SocketBase,"main",1,NULL)))
      {
        // All is good. Now we can make socket calls as if everything was ppc
      }
      else
      {
        // Ouch, we are using a 68k stack without an interface. Not much to do for now...
        return 1; // Error
      }
    }

    SHOWPOINTER(DBF_STARTUP, state->SocketBase);
    SHOWPOINTER(DBF_STARTUP, state->ISocket);
    SHOWPOINTER(DBF_STARTUP, &state->ISocket);
    SHOWPOINTER(DBF_STARTUP, state->ISocketPtr);
#else
    state->AmiSSLBase = __BASE_OR_IFACE_VAR;

    state->TCPIPStackType = (LONG)GetTagData(AmiSSL_SocketBaseBrand, TCPIP_AmiTCP, tagList);
    state->MLinkLock = (APTR)GetTagData(AmiSSL_MLinkLock, (int)NULL, tagList);
#endif
    if((errno_ptr = (int *)GetTagData(AmiSSL_ErrNoPtr, (int)NULL, tagList)))
      state->errno_ptr = errno_ptr;

    SHOWPOINTER(DBF_STARTUP, SysBase);
    SHOWPOINTER(DBF_STARTUP, __BASE_OR_IFACE_VAR);
    SHOWPOINTER(DBF_STARTUP, state->SocketBase);

    initialize_socket_errno(state);

    err = 0;
  }
  else
    err = 1;

  SHOWVALUE(DBF_STARTUP, err);

  return(err);
}

LIBPROTO(CleanupAmiSSLA, LONG, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, UNUSED struct TagItem *tagList))
{
  AMISSL_STATE *state;

  SHOWREGISTERS();

  if((state = GetAmiSSLState()))
  {
#ifdef __amigaos4__
    if(state->SocketBase && state->ISocketPtr && *state->ISocketPtr)
    {
      DropInterface((struct Interface *)*state->ISocketPtr);
      state->ISocketPtr = NULL;
    }
#endif

    ObtainSemaphore(&parentBase->openssl_cs);
    D(DBF_STARTUP, "h_delete(parentBase->thread_hash)");
    h_delete(parentBase->thread_hash, state->pid);
    ReleaseSemaphore(&parentBase->openssl_cs);

    FreeVec(state);
  }

  return(0);
}

#ifdef __amigaos4__
LIBPROTOVA(InitAmiSSL, LONG, REG(a6, __BASE_OR_IFACE), ...)
{
  __gnuc_va_list ap;
  struct TagItem *tags;

  __builtin_va_start(ap, __BASE_OR_IFACE_VAR);
  tags = va_getlinearva(ap, struct TagItem *);
  __builtin_va_end(ap);

  return CALL_LFUNC(InitAmiSSLA, tags);
}

LIBPROTOVA(CleanupAmiSSL, LONG, REG(a6, __BASE_OR_IFACE), ...)
{
  __gnuc_va_list ap;
  struct TagItem *tags;

  __builtin_va_start(ap, __BASE_OR_IFACE_VAR);
  tags = va_getlinearva(ap, struct TagItem *);
  __builtin_va_end(ap);

  return LIB_CleanupAmiSSLA(__BASE_OR_IFACE_VAR, tags);
}
#endif

LIBPROTO(__UserLibCleanup, void, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, struct LibraryHeader *libBase))
{
  TRACELINE();

  // we call OPENSSL_cleanup to clean everything for the
  // current instance.
  OPENSSL_cleanup();

  if(libBase->parent->thread_hash)
  {
    D(DBF_STARTUP, "Performing unfreed states cleanup for %08lx (group %lu)", FindTask(NULL), libBase->ThreadGroupID);
    ObtainSemaphore(&libBase->parent->openssl_cs);
    D(DBF_STARTUP, "h_doall(thread_hash)");
    h_doall(libBase->parent->thread_hash, (void (*)(long, void *))ThreadGroupStateCleanup);
    ReleaseSemaphore(&libBase->parent->openssl_cs);
  }
  else
    W(DBF_STARTUP, "No thread_hash");

#if defined(__amigaos4__)
  if(IUtility != NULL)
  {
    DropInterface((struct Interface *)IUtility);
    IUtility = NULL;
  }
  if(IIntuition != NULL)
  {
    DropInterface((struct Interface *)IIntuition);
    IIntuition = NULL;
  }
  if(IDOS != NULL)
  {
    DropInterface((struct Interface *)IDOS);
    IDOS = NULL;
  }
#endif

  if(UtilityBase != NULL)
  {
    CloseLibrary((struct Library *)UtilityBase);
    UtilityBase = NULL;
  }
  if(IntuitionBase != NULL)
  {
    CloseLibrary((struct Library *)IntuitionBase);
    IntuitionBase = NULL;
  }
  if(DOSBase != NULL)
  {
    CloseLibrary((struct Library *)DOSBase);
    DOSBase = NULL;
  }

  // make sure to free all resources of libcmt
  __free_libcmt();
}

LIBPROTO(__UserLibExpunge, void, REG(a6, UNUSED __BASE_OR_IFACE))
{
  //TRACELINE();
}

LIBPROTO(__UserLibInit, int, REG(a6, __BASE_OR_IFACE), REG(a0, struct LibraryHeader *libBase))
{
  int err = 1; /* Assume error condition */

  ENTER();

  SHOWPOINTER(DBF_STARTUP, __BASE_OR_IFACE_VAR);
  SHOWPOINTER(DBF_STARTUP, libBase);
  SHOWPOINTER(DBF_STARTUP, libBase->parent);

  // lets set libBase as the ownBase for later reference
  ownBase = libBase;
  SHOWPOINTER(DBF_STARTUP, &ownBase);
  SHOWPOINTER(DBF_STARTUP, ownBase);

  // lets set the parent of libBase as our parentBase
  parentBase = libBase->parent;
  SHOWPOINTER(DBF_STARTUP, &parentBase);
  SHOWPOINTER(DBF_STARTUP, parentBase),

  // we have to initialize the libcmt stuff
  __init_libcmt();

  D(DBF_STARTUP, "Global parentBase variables:");
  D(DBF_STARTUP, "---------------------------");
  SHOWPOINTER(DBF_STARTUP, &parentBase->openssl_cs);
  SHOWPOINTER(DBF_STARTUP, &parentBase->thread_hash);
  SHOWPOINTER(DBF_STARTUP, parentBase->thread_hash);
  SHOWPOINTER(DBF_STARTUP, &parentBase->LastThreadGroupID);
  SHOWVALUE(DBF_STARTUP, parentBase->LastThreadGroupID);
  D(DBF_STARTUP, "---------------------------");

  ObtainSemaphore(&parentBase->openssl_cs);

  ownBase->ThreadGroupID = ++(parentBase->LastThreadGroupID);
  SHOWPOINTER(DBF_STARTUP, &ownBase->ThreadGroupID);
  SHOWVALUE(DBF_STARTUP, ownBase->ThreadGroupID);

  ReleaseSemaphore(&parentBase->openssl_cs);

#if defined(__amigaos4__)
  if ((DOSBase = OpenLibrary("dos.library", 50))
    && (IntuitionBase = OpenLibrary("intuition.library", 50))
    && (UtilityBase = OpenLibrary("utility.library", 50))
    && (IDOS = (struct DOSIFace *)GetInterface(DOSBase,"main",1,NULL))
    && (IIntuition = (struct IntuitionIFace *)GetInterface(IntuitionBase,"main",1,NULL))
    && (IUtility = (struct UtilityIFace *)GetInterface(UtilityBase,"main",1,NULL)))
#else
  if ((DOSBase = (struct DosLibrary *)OpenLibrary("dos.library", 37))
    && (IntuitionBase = (struct IntuitionBase*)OpenLibrary("intuition.library", 36))
    && (UtilityBase = OpenLibrary("utility.library", 37)))
#endif
  {
    err = 0;
  }

  D(DBF_STARTUP, "Userlib err: %d %08lx", err, SysBase);

  if (err != 0)
    CALL_LFUNC(__UserLibCleanup, libBase);

  RETURN(err);
  return(err);
}
