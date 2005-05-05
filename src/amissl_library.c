#ifdef __amigaos4__
#define __USE_INLINE__
#endif

#define PROTO_AMISSL_H // Don't include amissl protos

#include <string.h>
#include <stdlib.h>

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/locale.h>
#include <proto/utility.h>

#include <dos/var.h>
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

#include <internal/debug.h>

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
		ret->SocketBase = NULL;
#ifdef __amigaos4__
		ret->socket_base_owns_errno = 0;
		ret->ISocket = NULL;
#endif

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
#ifdef __amigaos4__
	if(p->socket_base_owns_errno)
	{
		// Call socketbase to get error here
	}
#endif
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

void AMISSL_LIB_ENTRY _AmiSSL_InternalInitAmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, struct AmiSSLInitStruct *amisslinit))
{
}

long AMISSL_LIB_ENTRY _AmiSSL_InitAmiSSLA(REG(a6, __IFACE_OR_BASE), REG(a0, struct TagItem *tagList))
{
	AMISSL_STATE *state;
	long err;

	if (state = CreateAmiSSLState())
	{
		state->SocketBase = (APTR)GetTagData(AmiSSL_SocketBase, (int)NULL, tagList);

#ifdef __amigaos4__
		state->ISocket = (APTR)GetTagData(AmiSSL_ISocket, (int)NULL, tagList);
		state->IAmiSSL = Self;
		state->AmiSSLBase = ((struct Interface *)Self)->Data.LibBase;

		/* When ISocket is supplied, there is no need to specify SocketBase.
		 * This combination would confuse the code below which thinks that it
		 * needs to GetInterface if there is a SocketBase and also drops it later.
		 */
		if (state->ISocket && state->SocketBase)
			state->SocketBase = NULL;
#else
		state->AmiSSLBase = Self;
#endif

#ifdef __amigaos4__
		if(state->SocketBase)
		{ // This means we are beeing called from a 68k program and we need to get the ppc interface to the library ourselves
			if(state->ISocket = (struct SocketIFace *)GetInterface(state->SocketBase,"main",1,NULL))
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
		kprintf("ISocket: %08lx\n",state->ISocket);
#else
		state->TCPIPStackType = (LONG)GetTagData(AmiSSL_SocketBaseBrand, TCPIP_AmiTCP, tagList);
		state->MLinkLock = (APTR)GetTagData(AmiSSL_MLinkLock, (int)NULL, tagList);
#endif

		state->errno_ptr = (APTR)GetTagData(AmiSSL_ErrNoPtr, (int)NULL, tagList);

		SSLVersionApp = GetTagData(AmiSSL_SSLVersionApp, 0, tagList);

		err = 0;
	}
	else
	{
		err = 1;
	}

	return(err);
}

long AMISSL_LIB_ENTRY _AmiSSL_CleanupAmiSSLA(REG(a6, __IFACE_OR_BASE), REG(a0, struct TagItem *tagList))
{
	AMISSL_STATE *state;

	if (state = GetAmiSSLState())
	{
#ifdef __amigaos4__
		if(state->SocketBase && state->ISocket)
		{
			DropInterface((struct Interface *)state->ISocket);
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

static BOOL AMISSL_COMMON_DATA DisableIDEA, DisableRC5;

long IsCipherAvailable(long cipher)
{
	long is_available;

	switch(cipher)
	{
		case CIPHER_IDEA:
			is_available = !DisableIDEA;
			break;

		case CIPHER_RC5:
			is_available = !DisableRC5;
			break;

		case CIPHER_AES:
		case CIPHER_BLOWFISH:
		case CIPHER_CAST:
		case CIPHER_DES:
		case CIPHER_MD2:
		case CIPHER_MD4:
		case CIPHER_MD5:
		case CIPHER_RC2:
		case CIPHER_RC4:
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

long AMISSL_LIB_ENTRY _AmiSSL_IsCipherAvailable(REG(a6, __IFACE_OR_BASE), REG(d0, long cipher))
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

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_SSLv23_method(REG(a6, __IFACE_OR_BASE))
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

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_SSLv23_server_method(REG(a6, __IFACE_OR_BASE))
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

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_SSLv23_client_method(REG(a6, __IFACE_OR_BASE))
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

static char AMISSL_COMMON_DATA rand_poll_buffer[128];

int RAND_poll(void)
{
	int i;

	/* !?! FIXME */

	for(i = 0; i < 10; i++)
	{
		OPENSSL_cleanse(&rand_poll_buffer[0], sizeof(rand_poll_buffer));
		RAND_add(&rand_poll_buffer[0], sizeof(rand_poll_buffer), (double)8);
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

void AMISSL_LIB_ENTRY __UserLibCleanup(REG(a6, __IFACE_OR_BASE))
{
	if(thread_hash)
	{
		ObtainSemaphore(&openssl_cs);
		h_doall(thread_hash,(void (*)(long,void *))cleanupState); /* Clean up any left overs from tasks not calling cleanup */
		ReleaseSemaphore(&openssl_cs);
	}
	
#ifdef __amigaos4__
	DropInterface((struct Interface *)ILocale);
	DropInterface((struct Interface *)IUtility);
	DropInterface((struct Interface *)IIntuition);
#endif

	CloseLibrary((struct Library *)LocaleBase);
	CloseLibrary((struct Library *)UtilityBase);
	CloseLibrary((struct Library *)IntuitionBase);

	FreeVec(lock_cs);

	if(__pool)
		DeletePool(__pool);
}

void AMISSL_LIB_ENTRY __UserLibExpunge(REG(a6, __IFACE_OR_BASE))
{
	ObtainSemaphore(&openssl_cs);

	if(thread_hash)
	{
		h_doall(thread_hash,(void (*)(long,void *))cleanupState); /* Clean up any left overs from tasks not calling cleanup */
		h_free(thread_hash);
		thread_hash = NULL;
	}

	ReleaseSemaphore(&openssl_cs);
}

static BOOL CompareCountry(LONG country_code, char *iso3, char *iso2, char *plates)
{
	char *country = (char *)&country_code;

	return((iso3 && Strnicmp(iso3, country, 4) == 0)
	       || (iso2 && Strnicmp(iso2, country, 4) == 0)
	       || (plates && Strnicmp(plates, country, 4) == 0));
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

	if ((__pool = CreatePool(MEMF_ANY, 8192, 4096))
	    && (lock_cs = AllocVec(sizeof(*lock_cs) * CRYPTO_NUM_LOCKS, MEMF_CLEAR)))
	{
		struct Locale *locale;
		struct DateStamp ds;
		int i;

		for (i=0; i<CRYPTO_NUM_LOCKS; i++)
		{
			InitSemaphore(&lock_cs[i]);
		}

		InitSemaphore(&__mem_cs);

		CRYPTO_set_locking_callback((void (*)())amigaos_locking_callback);

		DateStamp(&ds);
		clock_base = ((ULONG)ds.ds_Tick + TICKS_PER_SECOND * 60 * ((ULONG)ds.ds_Minute + 24 * 60 * (ULONG)ds.ds_Days))
		             * CLOCKS_PER_SEC / TICKS_PER_SECOND;

#ifdef __amigaos4__
		if ((IntuitionBase = (struct IntuitionBase*)OpenLibrary("intuition.library", 50))
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

			DisableIDEA = CompareCountry(locale->loc_CountryCode, "AUT", "AU", "A")     /* Austria */
			              || CompareCountry(locale->loc_CountryCode, "FRA", "FR", "F")  /* France */
			              || CompareCountry(locale->loc_CountryCode, "DEU", "DE", "D")  /* Germany */
			              || CompareCountry(locale->loc_CountryCode, "ITA", "IT", "I")  /* Italy */
			              || CompareCountry(locale->loc_CountryCode, "JPN", "JP", "J")  /* Japan */
			              || CompareCountry(locale->loc_CountryCode, "NLD", "NL", NULL) /* The Netherlands */
			              || CompareCountry(locale->loc_CountryCode, "ESP", "ES", "E")  /* Spain */
			              || CompareCountry(locale->loc_CountryCode, "SWE", "SE", "S")  /* Sweden */
			              || CompareCountry(locale->loc_CountryCode, "CHE", "CH", NULL) /* Switzerland */
			              || CompareCountry(locale->loc_CountryCode, "GBR", "GB", NULL) /* United Kingdom */
			              || CompareCountry(locale->loc_CountryCode, "USA", "US", NULL) /* USA */;

			DisableRC5 = CompareCountry(locale->loc_CountryCode, "USA", "US", NULL); /* USA */

			CloseLocale(locale);
			err = 0;
		}
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

#ifndef __amigaos4__
void _AmiSSL_DummyFunc(void)
{
}
#endif
