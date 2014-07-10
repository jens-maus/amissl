#ifdef __amigaos4__
#define __USE_INLINE__
#endif

#define PROTO_AMISSL_H // Don't include amissl protos

//#define DEBUG
#include <internal/debug.h>

#include <string.h>
#include <stdlib.h>

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/locale.h>
#include <proto/utility.h>

#include <dos/var.h>
#if defined(__amigaos4__)
#include <dos/obsolete.h>
#endif
#include <utility/tagitem.h>
#include <exec/memory.h>

#include <openssl/crypto.h>
#include <openssl/lhash.h>
#include <amissl/tags.h>

#include <internal/amissl.h>
#include <internal/amissl_compiler.h>
#include <libraries/amissl.h>

#include <clib/amissl_protos.h>
#define NO_MTCP_PROTOS
#ifdef __GNUC__
#include "../libcmt/libcmt.h"
#include "../libcmt/multitcp.h"
#else
#include "/libcmt/libcmt.h"
#include "/libcmt/multitcp.h"
#endif
#include "amisslinit.h"

#ifdef __amigaos4__
struct AmiSSLIFace;
#define __IFACE_OR_BASE	struct AmiSSLIFace *Self
#else
#define __IFACE_OR_BASE	struct Library *Self
#endif

#ifdef __amigaos4__
struct Library *IntuitionBase;
struct IntuitionIFace *IIntuition;
struct Library *LocaleBase;
struct LocaleIFace *ILocale;
struct Library *UtilityBase;
struct UtilityIFace *IUtility;

struct Library * AMISSL_COMMON_DATA ExecBase;
struct ExecIFace * AMISSL_COMMON_DATA IExec;

#else
#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

const char *FullVersion = "\0$VER: amissl_v" MKSTR(VERSIONNAME) ".library " MKSTR(VERSION) "." MKSTR(AMISSLREVISION) " (" MKSTR(AMISSLDATE) ") " MKSTR(LIBCPU) " version\r\n";

struct ExecBase *SysBase;
struct IntuitionBase *IntuitionBase;
struct LocaleBase *LocaleBase;
struct Library *UtilityBase;
#endif

struct SignalSemaphore __mem_cs;
LONG GMTOffset;
void *__pool;

struct SignalSemaphore *lock_cs = NULL; /* This needs to be dynamically allocated since it takes up too much near data */
static struct SignalSemaphore AMISSL_COMMON_DATA openssl_cs = {NULL};
static LONG AMISSL_COMMON_DATA SemaphoreInitialized = 0;
static struct HashTable * AMISSL_COMMON_DATA thread_hash = NULL;
static ULONG AMISSL_COMMON_DATA LastThreadGroupID = 0;
static ULONG ThreadGroupID = 0;
static ULONG clock_base;
static long SSLVersionApp = 0;

clock_t clock(void)
{
	struct DateStamp ds;
	ULONG clock_curr;

	DateStamp(&ds);
	clock_curr = ((ULONG)ds.ds_Tick + TICKS_PER_SECOND * 60 * ((ULONG)ds.ds_Minute + 24 * 60 * (ULONG)ds.ds_Days))
		         * CLOCKS_PER_SEC / TICKS_PER_SECOND;

	return(clock_curr - clock_base);
}

AMISSL_STATE *CreateAmiSSLState(void)
{
	unsigned long pid;
	AMISSL_STATE *ret;

	ObtainSemaphore(&openssl_cs);

  pid = (unsigned long)FindTask(NULL);
	ret = (AMISSL_STATE *)malloc(sizeof(AMISSL_STATE));

	if (ret != NULL)
	{
		//kprintf("Allocating new state for %08lx\n",pid);
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
		ret->ThreadGroupID = ThreadGroupID;

		if(!h_insert(thread_hash, pid, ret))
		{
			free(ret);
			ret = NULL;
		}
	}

	ReleaseSemaphore(&openssl_cs);

	return ret;
}
#ifdef __amigaos4__

#define SB_ObtainSemaphore  ObtainSemaphore
#define SB_ReleaseSemaphore ReleaseSemaphore
#define SB_FindTask         FindTask
#define SB_AllocVec(s,t)    AllocVecTags(s, AVT_Type, MEMF_SHARED, TAG_DONE)
#define SB_FreeVec          FreeVec

#else

#pragma syscall SB_ObtainSemaphore 234 801
#pragma syscall SB_ReleaseSemaphore 23a 801
#pragma syscall SB_FindTask 126 901
#pragma syscall SB_AllocVec 2ac 1002
#pragma syscall SB_FreeVec 2b2 901

void SB_ObtainSemaphore(struct SignalSemaphore *);
void SB_ReleaseSemaphore(struct SignalSemaphore *);
struct Task *SB_FindTask(STRPTR);
APTR SB_AllocVec(ULONG, ULONG);
VOID SB_FreeVec(APTR);

#endif

AMISSL_STATE *GetAmiSSLState(void)
{
	AMISSL_STATE *ret;

	SB_ObtainSemaphore(&openssl_cs);
	ret = (AMISSL_STATE *)h_find(thread_hash, (long)SB_FindTask(NULL));
	//kprintf("Looked up state %08lx for %08lx\n",ret,pid);
	SB_ReleaseSemaphore(&openssl_cs);
	
	return ret;
}

void SetAmiSSLerrno(int errno)
{
	AMISSL_STATE *p = GetAmiSSLState();
	*p->errno_ptr = errno;
}

int GetAmiSSLerrno(void)
{
	AMISSL_STATE *p = GetAmiSSLState();
	return *p->errno_ptr;
}

static void amigaos_locking_callback(int mode,int type,char *file,int line)
{
	if (mode & CRYPTO_LOCK)
		ObtainSemaphore(&(lock_cs[type]));
	else
		ReleaseSemaphore(&(lock_cs[type]));
}

static unsigned long amigaos_thread_id(void)
{
  unsigned long ret;

	ObtainSemaphore(&openssl_cs);
  ret = (unsigned long)FindTask(NULL);
	ReleaseSemaphore(&openssl_cs);

  return(ret);
}

static void ThreadGroupStateCleanup(long Key, AMISSL_STATE *a)
{
	if (a->ThreadGroupID == ThreadGroupID)
	{
		kprintf("- Cleaning up state %08lx for %08lx (group %lu)\n", a, a->pid, a->ThreadGroupID);
		h_delete(thread_hash, a->pid);
		free(a);
	}
}

static void *h_allocfunc(long size)
{
	return SB_AllocVec(size,MEMF_ANY);
}

static void h_freefunc(void *mem)
{
	SB_FreeVec(mem);
}

void (InternalInitAmiSSL)(struct AmiSSLInitStruct *amisslinit)
{
  /* nothing */
}

long AMISSL_LIB_ENTRY _AmiSSL_InitAmiSSLA(REG(a6, __IFACE_OR_BASE), REG(a0, struct TagItem *tagList))
{
	AMISSL_STATE *state;
	long err;

	if (state = CreateAmiSSLState())
	{
		int *errno_ptr;

		state->SocketBase = (APTR)GetTagData(AmiSSL_SocketBase, (int)NULL, tagList);

#ifdef __amigaos4__
		state->ISocket = (struct SocketIFace *)GetTagData(AmiSSL_ISocket, (int)NULL, tagList);
		state->ISocketPtr = (struct SocketIFace **)GetTagData(AmiSSL_ISocketPtr, (ULONG)NULL, tagList);
		state->IAmiSSL = Self;
		state->AmiSSLBase = ((struct Interface *)Self)->Data.LibBase;

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
#else
		state->AmiSSLBase = Self;
#endif

#ifdef __amigaos4__
		if(state->SocketBase)
		{ // This means we are beeing called from a 68k program and we need to get the ppc interface to the library ourselves
			if(*state->ISocketPtr = (struct SocketIFace *)GetInterface(state->SocketBase,"main",1,NULL))
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
		state->TCPIPStackType = (LONG)GetTagData(AmiSSL_SocketBaseBrand, TCPIP_AmiTCP, tagList);
		state->MLinkLock = (APTR)GetTagData(AmiSSL_MLinkLock, (int)NULL, tagList);
#endif

		if (errno_ptr = (int *)GetTagData(AmiSSL_ErrNoPtr, (int)NULL, tagList))
			state->errno_ptr = errno_ptr;

		initialize_socket_errno();

		SSLVersionApp = GetTagData(AmiSSL_SSLVersionApp, 0, tagList);

		err = 0;
	}
	else
	{
		err = 1;
	}

	return(err);
}

long CleanupAmiSSLA(struct TagItem *tagList)
{
	AMISSL_STATE *state;

	if (state = GetAmiSSLState())
	{
#ifdef __amigaos4__
		if(state->SocketBase && state->ISocketPtr && *state->ISocketPtr)
		{
			DropInterface((struct Interface *)*state->ISocketPtr);
			state->ISocketPtr = NULL;
		}
#endif

		ObtainSemaphore(&openssl_cs);
		h_delete(thread_hash, state->pid);
		ReleaseSemaphore(&openssl_cs);

		free(state);
	}

	return(0);
}

#ifdef __amigaos4__
long AMISSL_LIB_ENTRY VARARGS68K _AmiSSL_InitAmiSSL(REG(a6, __IFACE_OR_BASE), ... )
{
	__gnuc_va_list ap;
	struct TagItem *tags;

	__builtin_va_start(ap, Self);
	tags = va_getlinearva(ap, struct TagItem *);
	__builtin_va_end(ap);

	return _AmiSSL_InitAmiSSLA(Self,tags);
}

long AMISSL_LIB_ENTRY VARARGS68K _AmiSSL_CleanupAmiSSL(REG(a6, __IFACE_OR_BASE), ... )
{
	__gnuc_va_list ap;
	struct TagItem *tags;

	__builtin_va_start(ap, Self);
	tags = va_getlinearva(ap, struct TagItem *);
	__builtin_va_end(ap);

	return _AmiSSL_CleanupAmiSSLA(Self,tags);
}
#endif

void AmiSSLAbort(void)
{
	OpenSSLDie("unknown", 0, "abort() or similar function called");
}

void openlog(void) {}
void closelog(void) {}
void syslog(int priority, const char *message, ...) {}

void AMISSL_LIB_ENTRY __UserLibCleanup(REG(a6, __IFACE_OR_BASE))
{
	traceline();

	if (thread_hash)
	{
		kprintf("Performing unfreed states cleanup for %08lx (group %lu)\n", FindTask(NULL), ThreadGroupID);
		ObtainSemaphore(&openssl_cs);
		h_doall(thread_hash, (void (*)(long, void *))ThreadGroupStateCleanup);
		ReleaseSemaphore(&openssl_cs);
	}
	else
		kprintf("No thread_hash\n");

#ifdef __amigaos4__
	DropInterface((struct Interface *)ILocale);
	DropInterface((struct Interface *)IUtility);
	DropInterface((struct Interface *)IIntuition);
#endif

	CloseLibrary((struct Library *)LocaleBase);
	CloseLibrary((struct Library *)UtilityBase);
	CloseLibrary((struct Library *)IntuitionBase);

  CRYPTO_set_locking_callback(NULL);

	FreeVec(lock_cs);

#ifdef __amigaos4__
	if(__pool)
		FreeSysObject(ASOT_MEMPOOL, __pool);
#else
	if(__pool)
		DeletePool(__pool);
#endif
}

void AMISSL_LIB_ENTRY __UserLibExpunge(REG(a6, __IFACE_OR_BASE))
{
	traceline();
}

int AMISSL_LIB_ENTRY __UserLibInit(REG(a6, __IFACE_OR_BASE))
{
	int err = 1; /* Assume error condition */

#ifdef __amigaos4__
	InitSemaphore(&__mem_cs);
	InitSemaphore(&openssl_cs);
#else
	SysBase = *(struct ExecBase **)4;
#endif

	kprintf("Calling user lib init\n");

	if (!thread_hash)
	{
		Forbid();

		if(!SemaphoreInitialized)
		{
			InitSemaphore(&openssl_cs);
			SemaphoreInitialized = TRUE;
		}

		Permit();

		ObtainSemaphore(&openssl_cs);

		if (!thread_hash)
			thread_hash = h_new(7, h_allocfunc,h_freefunc);

		ReleaseSemaphore(&openssl_cs);
	}

	ObtainSemaphore(&openssl_cs);

	ThreadGroupID = ++LastThreadGroupID;
	kprintf("Thread group ID: %lu\n", ThreadGroupID);

	ReleaseSemaphore(&openssl_cs);

#ifdef __amigaos4__
	if ((__pool = AllocSysObjectTags(ASOT_MEMPOOL, ASOPOOL_MFlags, MEMF_PRIVATE, ASOPOOL_Puddle, 8192, ASOPOOL_Threshold, 4096, ASOPOOL_Name, "AmiSSL", TAG_DONE))
	    && (lock_cs = AllocVecTags(sizeof(*lock_cs) * CRYPTO_NUM_LOCKS, AVT_Type, MEMF_SHARED, AVT_ClearWithValue, 0, TAG_DONE)))
#else
	if ((__pool = CreatePool(MEMF_ANY, 8192, 4096))
	    && (lock_cs = AllocVec(CRYPTO_num_locks() * sizeof(*lock_cs), MEMF_CLEAR)))
#endif
	{
		struct Locale *locale;
		struct DateStamp ds;
		int i;

		for (i=0; i<CRYPTO_num_locks(); i++)
		{
			InitSemaphore(&lock_cs[i]);
		}

		InitSemaphore(&__mem_cs);

		CRYPTO_set_id_callback((unsigned long (*)())amigaos_thread_id);
		CRYPTO_set_locking_callback((void (*)())amigaos_locking_callback);

		DateStamp(&ds);
		clock_base = ((ULONG)ds.ds_Tick + TICKS_PER_SECOND * 60 * ((ULONG)ds.ds_Minute + 24 * 60 * (ULONG)ds.ds_Days))
		             * CLOCKS_PER_SEC / TICKS_PER_SECOND;

#ifdef __amigaos4__
		if ((IntuitionBase = OpenLibrary("intuition.library", 50))
            && (UtilityBase = OpenLibrary("utility.library", 50))
			&& (LocaleBase = OpenLibrary("locale.library", 50))
			&& (IIntuition = (struct IntuitionIFace *)GetInterface(IntuitionBase,"main",1,NULL))
			&& (IUtility = (struct UtilityIFace *)GetInterface(UtilityBase,"main",1,NULL))
			&& (ILocale = (struct LocaleIFace *)GetInterface(LocaleBase,"main",1,NULL))
			&& (locale = OpenLocale(NULL)))
#else
		if ((IntuitionBase = (struct IntuitionBase*)OpenLibrary("intuition.library", 36))
            && (UtilityBase = OpenLibrary("utility.library", 37))
			&& (LocaleBase = (struct LocaleBase *)OpenLibrary("locale.library", 38))
			&& (locale = OpenLocale(NULL)))
#endif
		{
			GMTOffset = locale->loc_GMTOffset;

			CloseLocale(locale);
			err = 0;
		}
	}
	
	kprintf("Userlib res: %d\n",err);

	if (err != 0)
		__UserLibCleanup(Self);

	return(err);
}
