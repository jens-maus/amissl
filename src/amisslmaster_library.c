#include <libraries/amissl.h>
#include <libraries/amisslmaster.h>

#define __NOLIBBASE__
#define __NOGLOBALIFACE__
#include <proto/exec.h>
#include <proto/intuition.h>
#include <proto/amisslmaster.h>

#include "amisslmaster_lib_protos.h"

#include "amisslinit.h"

#include <internal/SDI_lib.h>
#include <internal/debug.h>

#ifdef __amigaos4__
#include <exec/emulation.h>
#else
#include <inline/macros.h>
#endif

struct Library *BlowFishBase, *CASTBase, *DESBase, *DHBase, *DSABase, *IDEABase;
struct Library *MD2Base, *MD4Base, *MD5Base, *MDC2Base, *RC2Base, *RC4Base;
struct Library *RC5Base, *RIPEMDBase, *SHABase, *RSABase;

struct Library * AmiSSLBase = NULL;
#ifdef __amigaos4__
struct AmiSSLIFace * IAmiSSL = NULL;
#endif

#if defined(__amigaos4__)
struct Library *IntuitionBase = NULL;
struct IntuitionIFace *IIntuition = NULL;
extern struct Library * AMISSL_COMMON_DATA SysBase;
extern struct ExecIFace * AMISSL_COMMON_DATA IExec;
#else
struct IntuitionBase *IntuitionBase = NULL;
extern struct ExecBase *SysBase;
#endif

LONG LibAPIVersion = AMISSL_CURRENT_VERSION;
LONG LibUsesOpenSSLStructs = 0;

struct SignalSemaphore AmiSSLMasterLock;

struct AmiSSLInitStruct amisslinit; /* Keep them here so we know which ciphers we were able to open this time */

// on AmigaOS3 we use the restore_a4 feature set of the GCC to actually
// implement BASEREL/MULTIBASE support. Please note that restore_a4 is ONLY
// applied to non-static functions in this file. Thus, be careful to change
// the static/non-static parameter of functions in here.
#if defined(__amigaos3__) && defined(MULTIBASE) && defined(BASEREL)
#include "amisslmaster_base.h"
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
  ENTER();

  SHOWPOINTER(DBF_STARTUP, __BASE_OR_IFACE_VAR);
  SHOWVALUE(DBF_STARTUP, LibAPIVersion);
  SHOWVALUE(DBF_STARTUP, LibUsesOpenSSLStructs);

  LibAPIVersion = APIVersion;
  LibUsesOpenSSLStructs = UsesOpenSSLStructs;

  SHOWPOINTER(DBF_STARTUP, __BASE_OR_IFACE_VAR);
  SHOWVALUE(DBF_STARTUP, LibAPIVersion);
  SHOWVALUE(DBF_STARTUP, LibUsesOpenSSLStructs);

  RETURN(LibAPIVersion <= AMISSL_CURRENT_VERSION);
  return(LibAPIVersion <= AMISSL_CURRENT_VERSION);
}

LIBPROTO(OpenAmiSSL, struct Library *, REG(a6, UNUSED __BASE_OR_IFACE))
{
  ENTER();

  SHOWPOINTER(DBF_STARTUP, __BASE_OR_IFACE_VAR);
  SHOWPOINTER(DBF_STARTUP, SysBase);

  SHOWPOINTER(DBF_STARTUP, &AmiSSLMasterLock);
  ObtainSemaphore(&AmiSSLMasterLock);

  if(LibAPIVersion == AMISSL_V11x)
  {
    D(DBF_STARTUP, "About to open amissl v11x library");

    // if an application requests AmiSSL/OpenSSL versions 1.1.x we try to open any
    // known 1.1.X amissl library as OpenSSL defines binary/api compatibility when only
    // minor numbers are changed (https://www.openssl.org/support/faq.html#MISC8)
    OpenLib(&AmiSSLBase,"libs:amissl/amissl_v110-pre6.library", 4);
  }
  else if(LibAPIVersion == AMISSL_V10x)
  {
    D(DBF_STARTUP, "About to open amissl v10x library");

    // if an application requests AmiSSL/OpenSSL versions 1.0.x we try to open any
    // known 1.0.X amissl library as OpenSSL defines binary/api compatibility when only
    // minor numbers are changed (https://www.openssl.org/support/faq.html#MISC8)
    if(OpenLib(&AmiSSLBase,"libs:amissl/amissl_v102f.library", 3) == NULL)
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
        ET_Offset,-30,  // Internal function of amissl v2
        ET_RegisterA0,&amisslinit,
        ET_RegisterA6,AmiSSLBase,
        TAG_DONE);
#elif defined(__amigaos3__)
      // Internal function of amissl v2
      #define InternalInitAmiSSL(___amisslinit) \
            LP1NR(0x1e, InternalInitAmiSSL , void *, ___amisslinit, a0,\
            , AmiSSLBase)

      InternalInitAmiSSL(&amisslinit);
#elif defined(__MORPHOS__)
      // Internal function of amissl v2
      #define InternalInitAmiSSL(___amisslinit) \
            LP1NR(0x1e, InternalInitAmiSSL , void *, ___amisslinit, a0,\
            , AmiSSLBase, 0, 0, 0, 0, 0, 0)

      InternalInitAmiSSL(&amisslinit);
#else
  #error "PLATFORM missing"
#endif
    }
  }
  else
    E(DBF_STARTUP, "ERROR: unknown LibAPI Version specified!");

  #if defined(DEBUG)
  if(AmiSSLBase != NULL)
    D(DBF_STARTUP, "successfully opened AmiSSL library %ld.%ld (%s): %08lx", AmiSSLBase->lib_Version, AmiSSLBase->lib_Revision, AmiSSLBase->lib_IdString, AmiSSLBase);
  else
    E(DBF_STARTUP, "ERROR: couldn't open amissl library: %08lx", AmiSSLBase);
  #endif

  ReleaseSemaphore(&AmiSSLMasterLock);

  RETURN(AmiSSLBase);
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
  TRACELINE();

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

#if defined(__amigaos4__)
  if(IIntuition != NULL)
  {
    DropInterface((struct Interface *)IIntuition);
    IIntuition = NULL;
  }
#endif

  if(IntuitionBase != NULL)
  {
    CloseLibrary((struct Library *)IntuitionBase);
    IntuitionBase = NULL;
  }
}

LIBPROTO(__UserLibExpunge, void, REG(a6, UNUSED __BASE_OR_IFACE))
{
  TRACELINE();
}

LIBPROTO(__UserLibInit, int, REG(a6, UNUSED __BASE_OR_IFACE))
{
  int err = 1; // Assume error condition

  ENTER();

  InitSemaphore(&AmiSSLMasterLock);

#if defined(__amigaos4__)
  if((IntuitionBase = OpenLibrary("intuition.library", 50)) != NULL
     && (IIntuition = (struct IntuitionIFace *)GetInterface(IntuitionBase, "main", 1, NULL)) != NULL)
#else
  if((IntuitionBase = (struct IntuitionBase*)OpenLibrary("intuition.library", 36)) != NULL)
#endif
  {
    err = 0;
  }

  D(DBF_STARTUP, "Userlib err: %d %08lx", err, SysBase);

  if(err != 0)
    CALL_LFUNC_NP(__UserLibCleanup);

  RETURN(err);
  return(err);
}
