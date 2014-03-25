#ifdef __amigaos4__
#define __USE_INLINE__
#endif

#include <proto/exec.h>
#include <proto/amissl.h>
#include <libraries/amisslmaster.h>
#include <libraries/amissl.h>
#include <internal/amissl_compiler.h>
#include "amisslinit.h"
#ifdef __GNUC__
#include "../libcmt/libcmt.h"
#else
#include "/libcmt/libcmt.h"
#endif

//#define DEBUG
#include <internal/debug.h>

#ifdef __amigaos4__
#include <exec/emulation.h>
#endif

#ifdef __amigaos4__
#define __IFACE_OR_BASE	struct AmiSSLMasterIFace *Self
struct AmiSSLMasterIFace;
#else
#define __IFACE_OR_BASE	struct Library *Self
#endif

#ifdef __amigaos4__
struct Library * AMISSL_COMMON_DATA ExecBase;
struct ExecIFace * AMISSL_COMMON_DATA IExec;
#else
#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

const char *FullVersion = "\0$VER: amisslmaster.library " MKSTR(VERSION) "." MKSTR(AMISSLMASTERREVISION) " (" MKSTR(AMISSLMASTERDATE) ") " MKSTR(LIBCPU) " version\r\n";

struct ExecBase *SysBase;
#endif

struct Library *BlowFishBase, *CASTBase, *DESBase, *DHBase, *DSABase, *IDEABase;
struct Library *MD2Base, *MD4Base, *MD5Base, *MDC2Base, *RC2Base, *RC4Base;
struct Library *RC5Base, *RIPEMDBase, *SHABase, *RSABase;

struct Library *AmiSSLBase;
#ifdef __amigaos4__
struct AmiSSLIFace *IAmiSSL;
#endif

LONG LibAPIVersion = AMISSL_CURRENT_VERSION;
LONG LibUsesOpenSSLStructs = 0;

DeclareSemaphore(AmiSSLMasterLock);

struct AmiSSLInitStruct amisslinit; /* Keep them here so we know which ciphers we were able to open this time */

#ifdef __amigaos4__

#define SB_ObtainSemaphore  ObtainSemaphore
#define SB_ReleaseSemaphore ReleaseSemaphore

#else

#pragma syscall SB_ObtainSemaphore 234 801
#pragma syscall SB_ReleaseSemaphore 23a 801

void SB_ObtainSemaphore(struct SignalSemaphore *);
void SB_ReleaseSemaphore(struct SignalSemaphore *);

#endif

static void FlushLib(struct Library *LibBase)
{
	if(LibBase)
	{
		LibBase->lib_OpenCnt=1;
		CloseLibrary(LibBase);
	}
}

static struct Library *OpenLib(struct Library **LibBase,char *CipherName,LONG CipherVersion)
{
	if (LibAPIVersion > AMISSL_V2) // See CloseLib for explanation
		*LibBase = OpenLibrary(CipherName, CipherVersion);
	else
	{
		if(*LibBase)
		{
			(*LibBase)->lib_OpenCnt++;
		}
		else
		{
			*LibBase = OpenLibrary(CipherName,CipherVersion);
		}
	}
	return *LibBase;
}

#define CheckLibBase(base) if(LibBase==base) base=NULL

static void CloseLib(struct Library *LibBase)
{
	if(LibBase)
	{
		if (LibAPIVersion > AMISSL_V2)
			CloseLibrary(LibBase);
		else
		{
			/* This branch is not taken for AmiSSL v3.7 and higher since the
			 * following happens:
			 *
			 * OpenLib() is called for the first time for current opener. Since
			 * LibBase is NULL at that point, it will always use OpenLibrary()
			 * which returns a base with open count of 1. Suppose that the program
			 * keeps running when another program opens amisslmaster.library and
			 * calls OpenAmiSSL(). OpenLib() is called again, LibBase is NULL for
			 * that instance and OpenLibrary() is called again and a base with
			 * open count of *2* is returned. Each OpenLibrary() implicitly calls
			 * __UserLibInit().
			 *
			 * When one of these two openers calls CloseAmiSSL(), CloseLib() will
			 * find out that open count is 2 and just decrease it. When the other
			 * opener calls CloseAmiSSL(), open count will be 1 and CloseLibrary()
			 * and implicitly __UserLibCleanup() will be called.
			 *
			 * The result of this is that __UserLibInit() will be called once for
			 * each amisslmaster.library opener that calls OpenAmiSSL(), but
			 * it is possible that __UserLibCleanup() will not be called the
			 * matching number of times.
			 *
			 * Since only IBrowse is using AmiSSL v2, it can use this branch and
			 * since AmiSSL v3 only has one library to open and OpenAmiSSL() and
			 * thus OpenLib() can be called only once for it, this solution should
			 * work, at least temporarily.
			 */
			if(LibBase->lib_OpenCnt==1)
			{
				CloseLibrary(LibBase);
				CheckLibBase(BlowFishBase);
				CheckLibBase(CASTBase);
				CheckLibBase(DESBase);
				CheckLibBase(DHBase);
				CheckLibBase(DSABase);
				CheckLibBase(IDEABase);
				CheckLibBase(MD2Base);
				CheckLibBase(MD4Base);
				CheckLibBase(MD5Base);
				CheckLibBase(MDC2Base);
				CheckLibBase(RC2Base);
				CheckLibBase(RC4Base);
				CheckLibBase(RC5Base);
				CheckLibBase(RIPEMDBase);
				CheckLibBase(RSABase);
				CheckLibBase(SHABase);
			}
			else
			{
				LibBase->lib_OpenCnt--;
			}
		}
	}
}

LONG AMISSL_LIB_ENTRY _AmiSSLMaster_InitAmiSSLMaster(REG(a6, __IFACE_OR_BASE), REG(d0, LONG APIVersion), REG(d1, LONG UsesOpenSSLStructs))
{
	LibAPIVersion = APIVersion;
	LibUsesOpenSSLStructs = UsesOpenSSLStructs;

	return(LibAPIVersion <= AMISSL_CURRENT_VERSION);
}

struct Library * AMISSL_LIB_ENTRY _AmiSSLMaster_OpenAmiSSL(REG(a6, __IFACE_OR_BASE))
{
	SB_ObtainSemaphore(&AmiSSLMasterLock);
	
	if(LibAPIVersion == AMISSL_V097m)
  {
    // if an application requests 0.9.7m we try to open newer 0.9.7 versions until 0.9.7m
    // as they are API compatible
	  OpenLib(&AmiSSLBase,"libs:amissl/amissl_v097m.library", 3);
  }
  else if(LibAPIVersion == AMISSL_V097g)
  {
    // if an application requests 0.9.7g we try to open newer 0.9.7 versions until 0.9.7m
    // as they are API compatible
		if(OpenLib(&AmiSSLBase,"libs:amissl/amissl_v097m.library", 3) == NULL)
		  OpenLib(&AmiSSLBase,"libs:amissl/amissl_v097g.library", 3);
  }
	else if(LibAPIVersion == AMISSL_V2)
	{
		/* This only happens for m68k code, no need to handle ppc versions here */
		if(OpenLib(&AmiSSLBase,"libs:amissl/amissl_v2.library",2))
		{
			amisslinit.BlowFishBase = OpenLib(&BlowFishBase,"libs:amissl/blowfish_v2.library",2);
			amisslinit.CASTBase = OpenLib(&CASTBase,"libs:amissl/cast_v2.library",2);
			amisslinit.DESBase = OpenLib(&DESBase,"libs:amissl/des_v2.library",2);
			amisslinit.IDEABase = OpenLib(&IDEABase,"libs:amissl/idea_v2.library",2);
			amisslinit.MD2Base = OpenLib(&MD2Base,"libs:amissl/md2_v2.library",2);
			amisslinit.MD4Base = OpenLib(&MD4Base,"libs:amissl/md4_v2.library",2);
			amisslinit.MD5Base = OpenLib(&MD5Base,"libs:amissl/md5_v2.library",2);
			amisslinit.RC2Base = OpenLib(&RC2Base,"libs:amissl/rc2_v2.library",2);
			amisslinit.RC4Base = OpenLib(&RC4Base,"libs:amissl/rc4_v2.library",2);
			amisslinit.RC5Base = OpenLib(&RC5Base,"libs:amissl/rc5_v2.library",2);
			amisslinit.RIPEMDBase = OpenLib(&RIPEMDBase,"libs:amissl/ripemd_v2.library",2);
			amisslinit.SHABase = OpenLib(&SHABase,"libs:amissl/sha_v2.library",2);

			if(SHABase)
			{
				amisslinit.DSABase = OpenLib(&DSABase,"libs:amissl/dsa_v2.library",2);
				amisslinit.DHBase = OpenLib(&DHBase,"libs:amissl/dh_v2.library",2);
			}

			if(SHABase && MD5Base)
			{
				amisslinit.RSABase = OpenLib(&RSABase,"libs:amissl/rsa_v2.library",2);
			}
			
			if(DESBase)
			{
				amisslinit.MDC2Base = OpenLib(&MDC2Base,"libs:amissl/mdc2_v2.library",2);
			}
#ifdef __amigaos4__
			EmulateTags(AmiSSLBase,
				ET_Offset,-30,	// Internal function of amissl v2
				ET_RegisterA0,&amisslinit,
				ET_RegisterA6,AmiSSLBase,
				TAG_DONE);
#else
			InternalInitAmiSSL(&amisslinit);
#endif
		}
	}

	SB_ReleaseSemaphore(&AmiSSLMasterLock);

	return AmiSSLBase;
}

void AMISSL_LIB_ENTRY _AmiSSLMaster_CloseAmiSSL(REG(a6, __IFACE_OR_BASE))
{
	SB_ObtainSemaphore(&AmiSSLMasterLock);

	CloseLib(AmiSSLBase);

	CloseLib(amisslinit.BlowFishBase);
	CloseLib(amisslinit.CASTBase);
	CloseLib(amisslinit.DESBase);
	CloseLib(amisslinit.IDEABase);
	CloseLib(amisslinit.MD2Base);
	CloseLib(amisslinit.MD4Base);
	CloseLib(amisslinit.MD5Base);
	CloseLib(amisslinit.MDC2Base);
	CloseLib(amisslinit.RC2Base);
	CloseLib(amisslinit.RC4Base);
	CloseLib(amisslinit.RC5Base);
	CloseLib(amisslinit.RIPEMDBase);
	CloseLib(amisslinit.SHABase);
	CloseLib(amisslinit.RSABase);

	SB_ReleaseSemaphore(&AmiSSLMasterLock);
}

struct Library * AMISSL_LIB_ENTRY _AmiSSLMaster_OpenAmiSSLCipher(REG(a6, __IFACE_OR_BASE), REG(d0, LONG Cipher))
{
	struct Library *result = NULL;

	SB_ObtainSemaphore(&AmiSSLMasterLock);

	if (LibAPIVersion == AMISSL_V097g || LibAPIVersion == AMISSL_V097m)
		; // do nothing
	else if (LibAPIVersion == AMISSL_V2)
	{
		switch(Cipher)
		{
			case CIPHER_BLOWFISH:
				result = OpenLib(&BlowFishBase,"libs:amissl/blowfish_v2.library",2);
				break;
			case CIPHER_CAST:
				result = OpenLib(&CASTBase,"libs:amissl/cast_v2.library",2);
				break;
			case CIPHER_DES:
				result = OpenLib(&DESBase,"libs:amissl/des_v2.library",2);
				break;
			case CIPHER_DH:
				if(_AmiSSLMaster_OpenAmiSSL(Self))
				{
					result = DHBase;
				}
				break;
			case CIPHER_DSA:
				if(_AmiSSLMaster_OpenAmiSSL(Self))
				{
					result = DSABase;
				}
				break;
			case CIPHER_IDEA:
				result = OpenLib(&IDEABase,"libs:amissl/idea_v2.library",2);
				break;
			case CIPHER_MD2:
				result = OpenLib(&MD2Base,"libs:amissl/md2_v2.library",2);
				break;
			case CIPHER_MD4:
				result = OpenLib(&MD4Base,"libs:amissl/md4_v2.library",2);
				break;
			case CIPHER_MD5:
				result = OpenLib(&MD5Base,"libs:amissl/md5_v2.library",2);
				break;
			case CIPHER_MDC2:
				result = OpenLib(&MDC2Base,"libs:amissl/mdc2_v2.library",2);
				break;
			case CIPHER_RC2:
				result = OpenLib(&RC2Base,"libs:amissl/rc2_v2.library",2);
				break;
			case CIPHER_RC4:
				result = OpenLib(&RC4Base,"libs:amissl/rc4_v2.library",2);
				break;
			case CIPHER_RC5:
				result = OpenLib(&RC5Base,"libs:amissl/rc5_v2.library",2);
				break;
			case CIPHER_RIPEMD:
				result = OpenLib(&RIPEMDBase,"libs:amissl/ripemd_v2.library",2);
				break;
			case CIPHER_RSA:
				if(_AmiSSLMaster_OpenAmiSSL(Self))
				{
					result = RSABase;
				}
				break;
			case CIPHER_SHA:
				result = OpenLib(&SHABase,"libs:amissl/sha_v2.library",2);
				break;
		}
	}

	SB_ReleaseSemaphore(&AmiSSLMasterLock);

	return result;
}

void AMISSL_LIB_ENTRY _AmiSSLMaster_CloseAmiSSLCipher(REG(a6, __IFACE_OR_BASE), REG(a0, struct Library *LibBase))
{
	SB_ObtainSemaphore(&AmiSSLMasterLock);
	CloseLib(LibBase);
	SB_ReleaseSemaphore(&AmiSSLMasterLock);
}

void AMISSL_LIB_ENTRY __UserLibCleanup(REG(a6, __IFACE_OR_BASE))
{
	traceline();

	if (LibAPIVersion == AMISSL_V097m || LibAPIVersion == AMISSL_V097g)
		; // do nothing
	else if (LibAPIVersion == AMISSL_V2)
	{
		FlushLib(RSABase);
		FlushLib(SHABase);
		FlushLib(RIPEMDBase);
		FlushLib(RC5Base);
		FlushLib(RC4Base);
		FlushLib(RC2Base);
		FlushLib(MDC2Base);
		FlushLib(MD5Base);
		FlushLib(MD4Base);
		FlushLib(MD2Base);
		FlushLib(IDEABase);
		FlushLib(DESBase);
		FlushLib(DSABase);
		FlushLib(DHBase);
		FlushLib(CASTBase);
		FlushLib(BlowFishBase);
	}
}

void AMISSL_LIB_ENTRY __UserLibExpunge(REG(a6, __IFACE_OR_BASE))
{
	traceline();
}

int AMISSL_LIB_ENTRY __UserLibInit(REG(a6, __IFACE_OR_BASE))
{
#ifdef __amigaos4__
	InitSemaphore(&AmiSSLMasterLock);
#else
	SysBase = *(struct ExecBase **)4;
#endif

	traceline();

	return(0);
}
