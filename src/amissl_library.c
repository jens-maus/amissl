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

//#define DEBUG
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
#if defined(__amigaos3__)
#if defined(MULTIBASE) && defined(BASEREL)
#include "amissl_base.h"
static const USED_VAR unsigned short __restore_a4[] = { 0x286e, OFFSET(LibraryHeader, dataSeg), 0x4e75 }; // "move.l a6@(dataSeg:w),a4;rts"
#endif // MULTIBASE + BASEREL
#endif // __amigaos3__

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
  unsigned long pid;
  AMISSL_STATE *ret;

  kprintf("CreateAmiSSLState()\n");

  ObtainSemaphore(&parentBase->openssl_cs);

  kprintf("ownBase addr: %08lx (%08lx)\n", &ownBase, ownBase);

  kprintf("CreateAmiSSLState()1\n");

  pid = (unsigned long)FindTask(NULL);
  kprintf("CreateAmiSSLState()2\n");
  ret = (AMISSL_STATE *)SB_AllocVec(sizeof(*ret), MEMF_CLEAR);
  kprintf("CreateAmiSSLState()3\n");

  if (ret != NULL)
  {
    kprintf("Allocating new state for %08lx\n", pid);
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

    kprintf("h_insert(thread_hash=%08lx, pid=%08lx, ret=%08lx)\n", parentBase->thread_hash, pid, ret);
    if(!h_insert(parentBase->thread_hash, pid, ret))
    {
      FreeVec(ret);
      ret = NULL;
    }
  }

  ReleaseSemaphore(&parentBase->openssl_cs);
  kprintf("CreateAmiSSLState done %08lx %08lx\n", ret, SysBase);

  return ret;
}

struct CRYPTO_dynlock_value
{
  struct SignalSemaphore lock_cs;
};

static struct CRYPTO_dynlock_value *amigaos_dyn_create_function(UNUSED const char *file, UNUSED int line)
{
  struct CRYPTO_dynlock_value *value;

  if((value = SB_AllocVec(sizeof(*value), MEMF_CLEAR)) != NULL)
    InitSemaphore(&value->lock_cs);

  return value;
}

static void amigaos_dyn_lock_function(int mode, struct CRYPTO_dynlock_value *l,
                                      UNUSED const char *file, UNUSED int line)
{
  if(mode & CRYPTO_LOCK)
    ObtainSemaphore(&l->lock_cs);
  else
    ReleaseSemaphore(&l->lock_cs);
}

static void amigaos_dyn_destroy_function(struct CRYPTO_dynlock_value *l,
                                         UNUSED const char *file, UNUSED int line)
{
  InitSemaphore(&l->lock_cs);
  FreeVec(l);
}

static void amigaos_locking_callback(int mode, int type, UNUSED const char *file, UNUSED int line)
{
  //SHOWREGISTERS();

  #if defined(DEBUG)
  //kprintf("amigaos_locking_callback(%ld, %ld, '%s', %ld), SysBase: %08lx\n", mode, type, file, line, SysBase);
  #endif
  
  if(mode & CRYPTO_LOCK)
  {
    /*
    kprintf("lock_cs: %08lx %08lx %08lx %ld\n", lock_cs, &lock_cs[0], &lock_cs[9], &lock_cs[type], sizeof(*lock_cs));
    kprintf("sizeof(lock_cs): %ld\n", sizeof(*lock_cs));
    kprintf("obtain: %08lx\n", &lock_cs[type]);
    */
    ObtainSemaphore(&ownBase->lock_cs[type]);
  }
  else
  {
    //kprintf("release: %08lx\n", &lock_cs[type]);
    ReleaseSemaphore(&ownBase->lock_cs[type]);
  }

  //kprintf("amigaos_locking_callback() done\n");
}

static void amigaos_threadid_callback(CRYPTO_THREADID *id)
{
  ObtainSemaphore(&parentBase->openssl_cs);
  CRYPTO_THREADID_set_pointer(id, (void*)FindTask(NULL));
  ReleaseSemaphore(&parentBase->openssl_cs);
}

static void ThreadGroupStateCleanup(UNUSED long Key, AMISSL_STATE *a)
{
  if(a->ThreadGroupID == ownBase->ThreadGroupID)
  {
    kprintf("- Cleaning up state %08lx for %08lx (group %lu)\n", a, a->pid, a->ThreadGroupID);
    h_delete(parentBase->thread_hash, a->pid);
    FreeVec(a);
  }
}

LIBPROTO(InternalInitAmiSSL, void, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, UNUSED struct AmiSSLInitStruct *amisslinit))
{
  /* nothing */
  kprintf("InternalInitAmiSSL()\n");
}

LIBPROTO(InitAmiSSLA, LONG, REG(a6, __BASE_OR_IFACE), REG(a0, struct TagItem *tagList))
{
  AMISSL_STATE *state;
  LONG err;

  kprintf("InitAmiSSLA() %08lx %08lx\n", SysBase, __BASE_OR_IFACE_VAR);

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
    kprintf("SocketBase: %08lx\n",state->SocketBase);
    kprintf("ISocket: %08lx (ISocket address: %08lx)\n",state->ISocket,&state->ISocket);
    kprintf("ISocketPtr: %08lx\n",state->ISocketPtr);
#else
    state->AmiSSLBase = __BASE_OR_IFACE_VAR;

    state->TCPIPStackType = (LONG)GetTagData(AmiSSL_SocketBaseBrand, TCPIP_AmiTCP, tagList);
    state->MLinkLock = (APTR)GetTagData(AmiSSL_MLinkLock, (int)NULL, tagList);
#endif
    if((errno_ptr = (int *)GetTagData(AmiSSL_ErrNoPtr, (int)NULL, tagList)))
      state->errno_ptr = errno_ptr;

    kprintf("initialize socket errno: %08lx %08lx %08lx\n", SysBase, __BASE_OR_IFACE_VAR, state->SocketBase);
    initialize_socket_errno(state);

    err = 0;
  }
  else
    err = 1;

  kprintf("InitAmiSSLA() done %d\n", err);

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
    kprintf("h_delete(parentBase->thread_hash)\n");
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

#warning AmiSSLAbort() not required?
#if 0
void AmiSSLAbort(void)
{
  OpenSSLDie("unknown", 0, "abort() or similar function called");
}
#endif

void openlog(void) {}
void closelog(void) {}
void syslog(UNUSED int priority, UNUSED const char *message, ...) {}

LIBPROTO(__UserLibCleanup, void, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, struct LibraryHeader *libBase))
{
  traceline();

  if(libBase->parent->thread_hash)
  {
    kprintf("Performing unfreed states cleanup for %08lx (group %lu)\n", FindTask(NULL), libBase->ThreadGroupID);
    ObtainSemaphore(&libBase->parent->openssl_cs);
    kprintf("h_doall(thread_hash)\n");
    h_doall(libBase->parent->thread_hash, (void (*)(long, void *))ThreadGroupStateCleanup);
    ReleaseSemaphore(&libBase->parent->openssl_cs);
  }
  else
    kprintf("No thread_hash\n");

#ifdef __amigaos4__
  DropInterface((struct Interface *)IUtility);
  IUtility = NULL;
  DropInterface((struct Interface *)IIntuition);
  IIntuition = NULL;
  DropInterface((struct Interface *)IDOS);
  IDOS = NULL;
#endif

  CloseLibrary((struct Library *)UtilityBase);
  UtilityBase = NULL;
  CloseLibrary((struct Library *)IntuitionBase);
  IntuitionBase = NULL;
  CloseLibrary((struct Library *)DOSBase);
  DOSBase = NULL;

  CRYPTO_set_locking_callback(NULL);

  FreeVec(libBase->lock_cs);

  // make sure to free all resources of libcmt
  __free_libcmt();
}

LIBPROTO(__UserLibExpunge, void, REG(a6, UNUSED __BASE_OR_IFACE))
{
  traceline();
}

LIBPROTO(__UserLibInit, int, REG(a6, __BASE_OR_IFACE), REG(a0, struct LibraryHeader *libBase))
{
  int err = 1; /* Assume error condition */

  kprintf("Calling __UserLibInit()\n");
  kprintf("base/iface: %08lx\n", __BASE_OR_IFACE_VAR);
  kprintf("libbase: %08lx\n", libBase);
  kprintf("libbase->parent: %08lx\n", libBase->parent);

  // lets set libBase as the ownBase for later reference
  ownBase = libBase;
  kprintf("ownBase addr: %08lx (%08lx)\n", &ownBase, ownBase);

  // lets set the parent of libBase as our parentBase
  parentBase = libBase->parent;
  kprintf("parentBase addr: %08lx (%08lx)\n", &parentBase, parentBase);

  // we have to initialize the libcmt stuff
  __init_libcmt();

  kprintf("Global parentBase variables:\n");
  kprintf("---------------------------\n");
  kprintf("openssl_cs addr: %08lx\n", &parentBase->openssl_cs);
  kprintf("thread_hash addr: %08lx (%08lx)\n", &parentBase->thread_hash, parentBase->thread_hash);
  kprintf("LastThreadGroupID addr: %08lx (%08lx)\n", &parentBase->LastThreadGroupID, parentBase->LastThreadGroupID);
  kprintf("---------------------------\n");

  ObtainSemaphore(&parentBase->openssl_cs);

  ownBase->ThreadGroupID = ++(parentBase->LastThreadGroupID);
  kprintf("ThreadGroupID addr: %08lx (%08lx)\n", &ownBase->ThreadGroupID, ownBase->ThreadGroupID);

  ReleaseSemaphore(&parentBase->openssl_cs);

  if((ownBase->lock_cs = SB_AllocVec(CRYPTO_num_locks() * sizeof(*(ownBase->lock_cs)), MEMF_CLEAR)) != NULL)
  {
    int i;

    // lets init all semaphores
    for (i=0; i<CRYPTO_num_locks(); i++)
    {
      InitSemaphore(&ownBase->lock_cs[i]);
      kprintf("initialized lockcs[%ld]: %08lx\n", i, &ownBase->lock_cs[i]);
    }

    // set static locks callbacks
    CRYPTO_set_locking_callback((void (*)())amigaos_locking_callback);
    CRYPTO_THREADID_set_callback(amigaos_threadid_callback);

    // set dynamic locks callbacks
    CRYPTO_set_dynlock_create_callback(amigaos_dyn_create_function);
    CRYPTO_set_dynlock_lock_callback(amigaos_dyn_lock_function);
    CRYPTO_set_dynlock_destroy_callback(amigaos_dyn_destroy_function);

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
  }

  kprintf("Userlib err: %d %08lx\n",err, SysBase);

  if (err != 0)
    CALL_LFUNC(__UserLibCleanup, libBase);

  return(err);
}
