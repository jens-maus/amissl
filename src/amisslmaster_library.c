#include <libraries/amissl.h>
#include <libraries/amisslmaster.h>
#include <proto/exec.h>

#define __NOLIBBASE__
#define __NOGLOBALIFACE__
#include <proto/amisslmaster.h>

//

#include "amisslmaster_lib_protos.h"

//

#include "amisslinit.h"

//#define DEBUG
#include <internal/debug.h>

#ifdef __amigaos4__
#include <exec/emulation.h>
#else
#include <inline/macros.h>
#endif

struct Library *BlowFishBase, *CASTBase, *DESBase, *DHBase, *DSABase, *IDEABase;
struct Library *MD2Base, *MD4Base, *MD5Base, *MDC2Base, *RC2Base, *RC4Base;
struct Library *RC5Base, *RIPEMDBase, *SHABase, *RSABase;

struct Library * AMISSL_COMMON_DATA AmiSSLBase = NULL;
#ifdef __amigaos4__
struct AmiSSLIFace * AMISSL_COMMON_DATA IAmiSSL = NULL;
#endif

LONG AMISSL_COMMON_DATA LibAPIVersion = AMISSL_CURRENT_VERSION;
LONG AMISSL_COMMON_DATA LibUsesOpenSSLStructs = 0;

struct SignalSemaphore AMISSL_COMMON_DATA AmiSSLMasterLock;

struct AmiSSLInitStruct amisslinit; /* Keep them here so we know which ciphers we were able to open this time */

// on AmigaOS3 we use the restore_a4 feature set of the GCC to actually
// implement BASEREL/MULTIBASE support. Please note that restore_a4 is ONLY
// applied to non-static functions in this file. Thus, be careful to change
// the static/non-static parameter of functions in here.
#if defined(__amigaos3__)
#if defined(MULTIBASE) && defined(BASEREL)
#include "amisslmaster_base.h"
static const USED_VAR unsigned short __restore_a4[] = { 0x286e, OFFSET(LibraryHeader, dataSeg), 0x4e75 }; // "move.l a6@(dataSeg:w),a4;rts"
#endif // MULTIBASE + BASEREL
#endif // __amigaos3__

static void FlushLib(struct Library *LibBase)
{
	if(LibBase)
	{
		LibBase->lib_OpenCnt=1;
		CloseLibrary(LibBase);
	}
}

static struct Library *OpenLib(struct Library **LibBase,const char *CipherName,LONG CipherVersion)
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

LIBPROTO(InitAmiSSLMaster, LONG, REG(a6, UNUSED __BASE_OR_IFACE), REG(d0, LONG APIVersion), REG(d1, LONG UsesOpenSSLStructs))
{
	kprintf("%s/%ld base %08lx version %ld structs %ld\n", __FILE__, __LINE__, __BASE_OR_IFACE_VAR, LibAPIVersion, LibUsesOpenSSLStructs);
	LibAPIVersion = APIVersion;
	LibUsesOpenSSLStructs = UsesOpenSSLStructs;
	kprintf("%s/%ld base %08lx version %ld structs %ld\n", __FILE__, __LINE__, __BASE_OR_IFACE_VAR, LibAPIVersion, LibUsesOpenSSLStructs);

	return(LibAPIVersion <= AMISSL_CURRENT_VERSION);
}

LIBPROTO(OpenAmiSSL, struct Library *, REG(a6, UNUSED __BASE_OR_IFACE))
{
  kprintf("%s:%ld\n", __FILE__, __LINE__);
  kprintf("OpenAmiSSL called: %08lx base: %08lx\n", SysBase, __BASE_OR_IFACE_VAR);

  kprintf("obtain AmiSSLMasterLock: %08lx\n", &AmiSSLMasterLock);
	ObtainSemaphore(&AmiSSLMasterLock);
  kprintf("Semaphore obtained\n");

	if(LibAPIVersion == AMISSL_V10x)
  {
    kprintf("about to open amissl v10x library\n");

    // if an application requests AmiSSL/OpenSSL versions 1.0.x we try to open any
    // known 1.0.X amissl library as OpenSSL defines binary/api compatibility when only
    // minor numbers are changed (https://www.openssl.org/support/faq.html#MISC8)
	  if(OpenLib(&AmiSSLBase,"libs:amissl/amissl_v101i.library", 3) == NULL)
	    OpenLib(&AmiSSLBase,"libs:amissl/amissl_v101h.library", 3);
  }
	else if(LibAPIVersion == AMISSL_V098y)
  {
    // if an application requests 0.9.8y we try to open newer 0.9.8 versions until 0.9.8y
    // as they are API compatible
	  OpenLib(&AmiSSLBase,"libs:amissl/amissl_v098y.library", 3);
  }
	else if(LibAPIVersion == AMISSL_V097m)
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
		if(OpenLib(&AmiSSLBase,"libs:amissl/amissl_v2.library",2) != NULL)
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
			// Internal function of amissl v2
			#define InternalInitAmiSSL(init) LP1NR(0x1e, InternalInitAmiSSL, void *, init, a0, , AmiSSLBase)
			InternalInitAmiSSL(&amisslinit);
#endif
		}
	}
  else
    kprintf("ERROR: unknown LibAPI Version specified!\n");

  if(AmiSSLBase != NULL)
    kprintf("successfully opened AmiSSL library %ld.%ld (%s): %08lx\n", AmiSSLBase->lib_Version, AmiSSLBase->lib_Revision, AmiSSLBase->lib_IdString, AmiSSLBase);
  else
    kprintf("ERROR: couldn't open amissl library: %08lx\n", AmiSSLBase);

	ReleaseSemaphore(&AmiSSLMasterLock);

	return AmiSSLBase;
}

LIBPROTO(CloseAmiSSL, void, REG(a6, UNUSED __BASE_OR_IFACE))
{
	ObtainSemaphore(&AmiSSLMasterLock);

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

	ReleaseSemaphore(&AmiSSLMasterLock);
}

LIBPROTO(OpenAmiSSLCipher, struct Library *, REG(a6, UNUSED __BASE_OR_IFACE), REG(d0, LONG Cipher))
{
	struct Library *result = NULL;
	#if defined(__amigaos4__)
	struct AmiSSLMasterIFace *IAmiSSLMaster = __BASE_OR_IFACE_VAR;
	#else
	struct Library *AmiSSLMasterBase = __BASE_OR_IFACE_VAR;
	#endif

	ObtainSemaphore(&AmiSSLMasterLock);

  // only open sub libraries for our old-style AmiSSL v2 versions.
	if(LibAPIVersion == AMISSL_V2)
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
				if(OpenAmiSSL() != NULL)
				{
					result = DHBase;
				}
				break;
			case CIPHER_DSA:
				if(OpenAmiSSL() != NULL)
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
				if(OpenAmiSSL() != NULL)
				{
					result = RSABase;
				}
				break;
			case CIPHER_SHA:
				result = OpenLib(&SHABase,"libs:amissl/sha_v2.library",2);
				break;
		}
	}

	ReleaseSemaphore(&AmiSSLMasterLock);

	return result;
}

LIBPROTO(CloseAmiSSLCipher, void, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, struct Library *LibBase))
{
	ObtainSemaphore(&AmiSSLMasterLock);
	CloseLib(LibBase);
	ReleaseSemaphore(&AmiSSLMasterLock);
}

LIBPROTO(__UserLibCleanup, void, REG(a6, UNUSED __BASE_OR_IFACE))
{
	traceline();

  // only flush sub libraries for the old-style v2 libraries
	if(LibAPIVersion == AMISSL_V2)
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

LIBPROTO(__UserLibExpunge, void, REG(a6, UNUSED __BASE_OR_IFACE))
{
	traceline();
}

LIBPROTO(__UserLibInit, int, REG(a6, UNUSED __BASE_OR_IFACE))
{
	traceline();

	InitSemaphore(&AmiSSLMasterLock);

	traceline();

	return(0);
}
