#ifdef __amigaos4__
#define __USE_INLINE__
#endif

#include <string.h>
#include <stdlib.h>

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/locale.h>
#include <proto/utility.h>

#include <dos/var.h>
#include <utility/tagitem.h>

#include <amissl/crypto.h>
#include <amissl/lhash.h>
#include <amissl/tags.h>

#include <internal/amissl.h>
#include <internal/amissl_compiler.h>
#include <libraries/amisslmaster.h>

#include <clib/amissl_protos.h>
#ifdef __GNUC__
#include <../libcmt/libcmt.h>
#else
#include "/libcmt/libcmt.h"
#endif
#include "amisslinit.h"

#include "debug.h"

#ifdef __amigaos4__
struct AmiSSLIFace;
#define __IFACE_OR_BASE	struct AmiSSLIFace *Self
#undef SAVEDS
#define SAVEDS __attribute__ ((baserel_restore))
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
struct DOSIFace *IDOS;
struct Library *DOSBase;
#else
struct ExecBase *SysBase;
struct IntuitionBase *IntuitionBase;
struct LocaleBase *LocaleBase;
struct Library *UtilityBase;
struct DOSBase *DOSBase;
#endif

struct SignalSemaphore __mem_cs;
LONG GMTOffset;
void *__pool;

struct SignalSemaphore *lock_cs = NULL; /* This needs to be dynamically allocated since it takes up too much near data */
static struct SignalSemaphore AMISSL_COMMON_DATA openssl_cs = {NULL};
static LONG AMISSL_COMMON_DATA SemaphoreInitialized = 0;
static struct HashTable * AMISSL_COMMON_DATA thread_hash = NULL;
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
	long pid = (long)FindTask(NULL);
	AMISSL_STATE *ret;

	ObtainSemaphore(&openssl_cs);

	ret = (AMISSL_STATE *)malloc(sizeof(AMISSL_STATE));

	if (ret != NULL)
	{
//		kprintf("Allocating new state for %08lx\n",pid);
		ret->pid = pid;
		ret->errno = 0;
		ret->getenv_var = 0;
		ret->stack = 0;

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

#else

#pragma syscall SB_ObtainSemaphore 234 801
#pragma syscall SB_ReleaseSemaphore 23a 801
#pragma syscall SB_FindTask 126 901

void SB_ObtainSemaphore(struct SignalSemaphore *);
void SB_ReleaseSemaphore(struct SignalSemaphore *);
struct Task *SB_FindTask(STRPTR);

#endif


AMISSL_STATE *GetAmiSSLState(void)
{
	AMISSL_STATE *ret;

	SB_ObtainSemaphore(&openssl_cs);
	ret = (AMISSL_STATE *)h_find(thread_hash, (long)SB_FindTask(NULL));
//	kprintf("Looked up state %08lx for %08lx\n",ret,pid);
	SB_ReleaseSemaphore(&openssl_cs);

	return ret;
}

void SetAmiSSLerrno(int errno)
{
	AMISSL_STATE *p = GetAmiSSLState();
#ifdef __amigaos4__
	p->socket_base_owns_errno = 0;
#endif
	p->errno = errno;
}

int GetAmiSSLerrno(void)
{
	AMISSL_STATE *p = GetAmiSSLState();
	return p->errno;
}

#ifdef __amigaos4__

struct SocketIFace *GetSocketIFace(int modifies_errno)
{
	AMISSL_STATE *p = GetAmiSSLState();
	if(modifies_errno)
	{
		p->socket_base_owns_errno = 1;
	}
	return p->ISocket;
}

#endif

static void amigaos_locking_callback(int mode,int type,char *file,int line)
{
	if (mode & CRYPTO_LOCK)
		ObtainSemaphore(&(lock_cs[type]));
	else
		ReleaseSemaphore(&(lock_cs[type]));
}

static void cleanupState(long Key,AMISSL_STATE *a)
{
	h_delete(thread_hash,a->pid);
	free(a);
}

static void *h_allocfunc(long size)
{
	return AllocVec(size,MEMF_ANY);
}

static void h_freefunc(void *mem)
{
	FreeVec(mem);
}

void ASM SAVEDS _AmiSSL_InternalInitAmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, struct AmiSSLInitStruct *amisslinit))
{
}

long ASM SAVEDS _AmiSSL_InitAmiSSLA(REG(a6, __IFACE_OR_BASE), REG(a0, struct TagItem *tagList))
{
	AMISSL_STATE *state;
	long err;

	if (state = CreateAmiSSLState())
	{
#ifdef __amigaos4__
		state->ISocket = (APTR)GetTagData(AmiSSL_ISocket, NULL, tagList);
#else
		state->a4 = (APTR)getreg(REG_A4);
#endif
		state->stack = (APTR)GetTagData(AmiSSL_TCPStack, NULL, tagList);
		SSLVersionApp = GetTagData(AmiSSL_SSLVersionApp, 0, tagList);

		err = 0;
	}
	else
		err = 1;

	return(err);
}

long ASM SAVEDS _AmiSSL_CleanupAmiSSLA(REG(a6, __IFACE_OR_BASE), REG(a0, struct TagItem *tagList))
{
	AMISSL_STATE *state;

	if (state = GetAmiSSLState())
	{
		ObtainSemaphore(&openssl_cs);
		h_delete(thread_hash, state->pid);
		ReleaseSemaphore(&openssl_cs);

		free(state);
	}

	return(0);
}

#ifdef __amigaos4__
long ASM SAVEDS VARARGS68K _AmiSSL_InitAmiSSL(REG(a6, __IFACE_OR_BASE), ... )
{
	va_list ap;
	struct TagItem *tags;

	va_startlinear(ap, Self);
	tags = va_getlinearva(ap, struct TagItem *);

	return _AmiSSL_InitAmiSSLA(Self,tags);
}

long ASM SAVEDS VARARGS68K _AmiSSL_CleanupAmiSSL(REG(a6, __IFACE_OR_BASE), ... )
{
	va_list ap;
	struct TagItem *tags;

	va_startlinear(ap, Self);
	tags = va_getlinearva(ap, struct TagItem *);

	return _AmiSSL_CleanupAmiSSLA(Self,tags);
}

#endif

long IsCipherAvailable(long cipher)
{
	long is_available;

	/* !?! FIXME with Locale checks */
	switch(cipher)
	{
		case CIPHER_AES:
		case CIPHER_BLOWFISH:
		case CIPHER_CAST:
		case CIPHER_DES:
		case CIPHER_IDEA:
		case CIPHER_MD2:
		case CIPHER_MD4:
		case CIPHER_MD5:
		case CIPHER_RC2:
		case CIPHER_RC4:
		case CIPHER_RC5:
		case CIPHER_RIPEMD:
		case CIPHER_SHA:
			is_available = TRUE;
			break;

		case CIPHER_DH:
		case CIPHER_DSA:
			is_available = IsCipherAvailable(CIPHER_SHA);
			break;

		case CIPHER_RSA:
			is_available = IsCipherAvailable(CIPHER_SHA)
			               && IsCipherAvailable(CIPHER_MD5);
			break;

		case CIPHER_MDC2:
			is_available = IsCipherAvailable(CIPHER_DES);
			break;

		default:
			is_available = FALSE;
			break;
	}

	return(is_available);
}

long ASM SAVEDS _AmiSSL_IsCipherAvailable(REG(a6, __IFACE_OR_BASE), REG(d0, long cipher))
{
	return(IsCipherAvailable(cipher));
}

void AmiSSLAbort(void)
{
	OpenSSLDie("unknown", 0, "abort() or similar function called");
}

#define AMISSL_SERVER_ENV	"AmiSSL/SSL_SERVER_VERSION"
#define AMISSL_CLIENT_ENV	"AmiSSL/SSL_CLIENT_VERSION"
#define AMISSL_BOTH_ENV		"AmiSSL/SSL_VERSION"

SSL_METHOD * ASM SAVEDS _AmiSSL_SSLv23_method(REG(a6, __IFACE_OR_BASE))
{
	char var[6];

	if (!SSLVersionApp)
	{
		if (GetVar(AMISSL_BOTH_ENV, &var[0], 5, GVF_GLOBAL_ONLY) > 0)
		{
			if (!strnicmp(var, "ssl2", 4))
				return(SSLv2_method());
			else if (!strnicmp(var, "ssl3", 4))
				return(SSLv3_method());
			else if (!strnicmp(var, "tls1", 4))
				return(TLSv1_method());
		}
	}

	/* No match, return default */
	return(SSLv23_method());
}

SSL_METHOD * ASM SAVEDS _AmiSSL_SSLv23_server_method(REG(a6, __IFACE_OR_BASE))
{
	char var[6];

	if (!SSLVersionApp)
	{
		if (GetVar(AMISSL_SERVER_ENV, &var[0], 5, GVF_GLOBAL_ONLY) > 0)
		{
			if (!strnicmp(var, "ssl2", 4))
				return(SSLv2_server_method());
			else if (!strnicmp(var, "ssl3", 4))
				return(SSLv3_server_method());
			else if (!strnicmp(var, "tls1", 4))
				return(TLSv1_server_method());
		}
	}

	/* No match, return default */
	return(SSLv23_server_method());
}

SSL_METHOD * ASM SAVEDS _AmiSSL_SSLv23_client_method(REG(a6, __IFACE_OR_BASE))
{
	char var[6];

	if (GetVar(AMISSL_CLIENT_ENV, &var[0], 5, GVF_GLOBAL_ONLY) > 0)
	{
		if (!strnicmp(var, "ssl2", 4))
			return(SSLv2_client_method());
		else if (!strnicmp(var, "ssl3", 4))
			return(SSLv3_client_method());
		else if (!strnicmp(var, "tls1", 4))
			return(TLSv1_client_method());
	}

	/* No match, return default */
	return(SSLv23_client_method());
}

void RAND_add_internal(const void *buf, int num, double entropy);

void ASM SAVEDS _AmiSSL_RAND_add(REG(a6, __IFACE_OR_BASE), REG(a0, const void *buf), REG(d0, int num), REG(d1, float entropy))
{
	RAND_add(buf, num, (double)entropy);
}

static char AMISSL_COMMON_DATA rand_poll_buffer[128];

int RAND_poll(void)
{
	int i;

	/* !?! FIXME */

	for(i = 0; i < 10; i++)
	{
		OPENSSL_cleanse(&rand_poll_buffer[0], sizeof(rand_poll_buffer));
		RAND_add(&rand_poll_buffer[0], sizeof(rand_poll_buffer), (double)0);
	}

	return(1);
}

void _CXFERR(int code)
{
	/* Do nothing since no one will ever look at the fp error code */
}

void syslog(int priority, const char * message, ...)
{
}

void ASM SAVEDS __UserLibCleanup(REG(a6, __IFACE_OR_BASE))
{
	if(thread_hash)
	{
		ObtainSemaphore(&openssl_cs);
		h_doall(thread_hash,cleanupState); /* Clean up any left overs from tasks not calling cleanup */
		ReleaseSemaphore(&openssl_cs);
	}

	CloseLibrary((struct Library *)LocaleBase);
	CloseLibrary((struct Library *)UtilityBase);
	CloseLibrary((struct Library *)IntuitionBase);

	FreeVec(lock_cs);

	if(__pool)
		DeletePool(__pool);
}

void ASM SAVEDS __UserLibExpunge(REG(a6, __IFACE_OR_BASE))
{
	ObtainSemaphore(&openssl_cs);

	if(thread_hash)
	{
		h_doall(thread_hash,cleanupState); /* Clean up any left overs from tasks not calling cleanup */
		h_free(thread_hash);
		thread_hash = NULL;
	}

	ReleaseSemaphore(&openssl_cs);
}

int ASM SAVEDS __UserLibInit(REG(a6, __IFACE_OR_BASE))
{
	int err = 1; /* Assume error condition */

#ifndef __amigaos4__
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

	if ((__pool = CreatePool(MEMF_ANY, 8192, 4096))
	    && (lock_cs = AllocVec(sizeof(*lock_cs) * CRYPTO_NUM_LOCKS, MEMF_CLEAR)))
	{
		struct Locale *locale;
		struct DateStamp ds;
		int i;
traceline();

		for (i=0; i<CRYPTO_NUM_LOCKS; i++)
		{
			InitSemaphore(&lock_cs[i]);
		}

		InitSemaphore(&__mem_cs);

		CRYPTO_set_locking_callback((void (*)())amigaos_locking_callback);

traceline();
		DateStamp(&ds);
		clock_base = ((ULONG)ds.ds_Tick + TICKS_PER_SECOND * 60 * ((ULONG)ds.ds_Minute + 24 * 60 * (ULONG)ds.ds_Days))
		             * CLOCKS_PER_SEC / TICKS_PER_SECOND;

traceline();
#ifdef __amigaos4__
		if ((IntuitionBase = (struct IntuitionBase*)OpenLibrary("intuition.library", 36))
            && (UtilityBase = OpenLibrary("utility.library", 36))
			&& (LocaleBase = (struct LocaleBase *)OpenLibrary("locale.library", 38))
			&& (IIntuition = GetInterface(IntuitionBase,"main",1,NULL))
			&& (IUtility = GetInterface(UtilityBase,"main",1,NULL))
			&& (ILocale = GetInterface(LocaleBase,"main",1,NULL))
			&& (locale = OpenLocale(NULL)))
#else
		if ((IntuitionBase = (struct IntuitionBase*)OpenLibrary("intuition.library", 36))
            && (UtilityBase = OpenLibrary("utility.library", 36))
			&& (LocaleBase = (struct LocaleBase *)OpenLibrary("locale.library", 38))
			&& (locale = OpenLocale(NULL)))
#endif
		{
traceline();
			GMTOffset = locale->loc_GMTOffset;
			CloseLocale(locale);
			err = 0;
		}
traceline();
	}
	
	kprintf("Userlib res: %d\n",err);

	if (err != 0)
		__UserLibCleanup(Self);

	return(err);
}
#if 0
extern int v3_ns_ia5_list;
extern int rand_ssleay_meth;

void checkdos(void)
{
	kprintf("DOSBase: %08x\n",&DOSBase);
	kprintf("v3_ns_ia5_list: %08x\n",&v3_ns_ia5_list);
	kprintf("rand_ssleay_meth: %08x\n",&rand_ssleay_meth);
}
#endif
