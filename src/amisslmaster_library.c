#ifdef __amigaos4__
#define __USE_INLINE__
#endif

#include <proto/exec.h>
#include <proto/amissl.h>
#include <libraries/amisslmaster.h>
#include <internal/amissl_compiler.h>
#include "amisslinit.h"
#ifdef __GNUC__
#include "../libcmt/libcmt.h"
#else
#include "/libcmt/libcmt.h"
#endif
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
struct ExecBase *SysBase;
#endif

#if 0
/* These must not change! This is for compatibility with previous versions. */
#pragma libcall DHBase InitDH 01e 9802
#pragma libcall DHBase CleanupDH 024 00

#pragma libcall DSABase InitDSA 01e 9802
#pragma libcall DSABase CleanupDSA 024 00

#pragma libcall RSABase InitRSA 01e a9803
#pragma libcall RSABase CleanupRSA 024 00
#endif

struct Library *BlowFishBase, *CASTBase, *DESBase, *DHBase, *DSABase, *IDEABase;
struct Library *MD2Base, *MD4Base, *MD5Base, *MDC2Base, *RC2Base, *RC4Base;
struct Library *RC5Base, *RIPEMDBase, *SHABase, *RSABase;

struct Library *AmiSSLBase;
#ifdef __amigaos4__
struct AmiSSLIFace *IAmiSSL;
#endif

LONG LibAPIVersion;
LONG LibAllowUserStructs;

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
	if(*LibBase)
	{
		(*LibBase)->lib_OpenCnt++;
	}
	else
	{
		*LibBase = OpenLibrary(CipherName,CipherVersion);
	}
	return *LibBase;
}

#define CheckLibBase(base) if(LibBase==base) base=NULL

static void CloseLib(struct Library *LibBase)
{
	if(LibBase)
	{
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

LONG AMISSL_LIB_ENTRY InitAmiSSLMaster(REG(a6, __IFACE_OR_BASE), REG(d0, LONG APIVersion), REG(d1, LONG AllowUserStructs))
{
	LibAPIVersion = APIVersion;
	LibAllowUserStructs = AllowUserStructs;

	return(TRUE);
}

struct Library * AMISSL_LIB_ENTRY OpenAmiSSL(REG(a6, __IFACE_OR_BASE))
{
	SB_ObtainSemaphore(&AmiSSLMasterLock);
	
	if (LibAPIVersion == AMISSL_V097e)
		OpenLib(&AmiSSLBase,"libs:amissl/amissl_v097e.library", 3);
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

void AMISSL_LIB_ENTRY CloseAmiSSL(REG(a6, __IFACE_OR_BASE))
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

struct Library * AMISSL_LIB_ENTRY OpenAmiSSLCipher(REG(a6, __IFACE_OR_BASE), REG(d0, LONG Cipher))
{
	struct Library *result = NULL;

	SB_ObtainSemaphore(&AmiSSLMasterLock);

	if (LibAPIVersion == AMISSL_V097e)
		;
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
				if(OpenAmiSSL(Self))
				{
					result = DHBase;
				}
				break;
			case CIPHER_DSA:
				if(OpenAmiSSL(Self))
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
				if(OpenAmiSSL(Self))
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

void AMISSL_LIB_ENTRY CloseAmiSSLCipher(REG(a6, __IFACE_OR_BASE), REG(a0, struct Library *LibBase))
{
	SB_ObtainSemaphore(&AmiSSLMasterLock);
	CloseLib(LibBase);
	SB_ReleaseSemaphore(&AmiSSLMasterLock);
}

void AMISSL_LIB_ENTRY __UserLibCleanup(REG(a6, __IFACE_OR_BASE))
{
	kprintf("UserLibCleanup called\n");

	if (LibAPIVersion == AMISSL_V097e)
		;
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
	kprintf("UserExpungeInit called\n");
}

int AMISSL_LIB_ENTRY __UserLibInit(REG(a6, __IFACE_OR_BASE))
{
	kprintf("UserLibInit called\n");
#ifdef __amigaos4__
	InitSemaphore(&AmiSSLMasterLock);
#else
	SysBase = *(struct ExecBase **)4;
#endif

	return(0);
}
