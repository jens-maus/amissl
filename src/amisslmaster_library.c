/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2025 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

#include <libraries/amissl.h>
#include <libraries/amisslmaster.h>
#include <amissl/tags.h>

#define __NOLIBBASE__
#define __NOGLOBALIFACE__
#include <proto/exec.h>
#include <proto/intuition.h>
#include <proto/utility.h>
#include <proto/amisslmaster.h>
#include <proto/amissl.h>

#include "amisslmaster_lib_protos.h"

#include "amisslinit.h"

#include <internal/SDI_lib.h>
#include <internal/debug.h>
#include <internal/amissl.h>

#ifdef __amigaos4__
#include <exec/emulation.h>
#else
#include <inline/macros.h>
#endif

struct Library *BlowFishBase, *CASTBase, *DESBase, *DHBase, *DSABase, *IDEABase;
struct Library *MD2Base, *MD4Base, *MD5Base, *MDC2Base, *RC2Base, *RC4Base;
struct Library *RC5Base, *RIPEMDBase, *SHABase, *RSABase;

struct Library * AmiSSLBase = NULL;

#if defined(__amigaos4__)
struct Library *IntuitionBase = NULL;
struct IntuitionIFace *IIntuition = NULL;
struct Library *UtilityBase = NULL;
struct UtilityIFace *IUtility = NULL;
extern struct Library * AMISSL_COMMON_DATA SysBase;
extern struct ExecIFace * AMISSL_COMMON_DATA IExec;
#else
struct IntuitionBase *IntuitionBase = NULL;
#if defined(__amigaos3__)
struct UtilityBase *UtilityBase = NULL;
#else
struct Library *UtilityBase = NULL;
#endif
extern struct ExecBase *SysBase;
#endif

LONG LibAPIVersion = AMISSL_CURRENT_VERSION;
LONG LibUsesOpenSSLStructs = 0;
LONG AmiSSLInitialised = FALSE;

LOCK_DECLARE(AmiSSLMasterLock);

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

static struct Library *OpenLib(struct Library **LibBase,const char *Name)
{
  if (LibAPIVersion == AMISSL_V2 && *LibBase) // See CloseLib for explanation
  {
    (*LibBase)->lib_OpenCnt++;
  }
  else
  {
    LONG version;
    char libname[40] = "LIBS:AmiSSL/";
    if (LibAPIVersion == AMISSL_V2)
    {
      version = 2;
      strcat(libname,Name);
      strcat(libname,"_v2.library");
    }
    else
    {
      version = (LibAPIVersion >= AMISSL_V300) ? 5 : ((LibAPIVersion >= AMISSL_V110c) ? 4 : 3);
      strcat(libname,"amissl_v");
      strcat(libname,Name);
      strcat(libname,".library");
    }
    *LibBase = OpenLibrary(libname,version);
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

  RETURN(APIVersion <= AMISSL_CURRENT_VERSION);
  return(APIVersion <= AMISSL_CURRENT_VERSION);
}

LIBPROTO(OpenAmiSSL, struct Library *, REG(a6, UNUSED __BASE_OR_IFACE))
{
  ENTER();

  SHOWPOINTER(DBF_STARTUP, __BASE_OR_IFACE_VAR);
  SHOWPOINTER(DBF_STARTUP, SysBase);

  SHOWPOINTER(DBF_STARTUP, &AmiSSLMasterLock);
  LOCK_OBTAIN(AmiSSLMasterLock);

  if(LibAPIVersion >= AMISSL_V302)
  {
    D(DBF_STARTUP, "About to open amissl v3xx library");

    // if an application requests AmiSSL/OpenSSL versions 3.x.x we try to open any
    // known 3.x.x amissl library as OpenSSL defines binary/api compatibility when
    // only minor or patch numbers are changed
    // (https://wiki.openssl.org/index.php/OpenSSL_3.0#Versioning_Scheme) but we must
    // take care to prevent applications requiring newer API functions from loading
    // older libraries that do not contain those required entries
    if(LibAPIVersion <= AMISSL_V350 && OpenLib(&AmiSSLBase,"350") == NULL)
      if(LibAPIVersion <= AMISSL_V341 && OpenLib(&AmiSSLBase,"341") == NULL
                                      && OpenLib(&AmiSSLBase,"340") == NULL)
        if(LibAPIVersion <= AMISSL_V332 && OpenLib(&AmiSSLBase,"332") == NULL
                                        && OpenLib(&AmiSSLBase,"331") == NULL
                                        && OpenLib(&AmiSSLBase,"330") == NULL)
          if(LibAPIVersion <= AMISSL_V321 && OpenLib(&AmiSSLBase,"321") == NULL
                                          && OpenLib(&AmiSSLBase,"320") == NULL)
            if(LibAPIVersion <= AMISSL_V314 && OpenLib(&AmiSSLBase,"314") == NULL
                                            && OpenLib(&AmiSSLBase,"313") == NULL
                                            && OpenLib(&AmiSSLBase,"312") == NULL
                                            && OpenLib(&AmiSSLBase,"311") == NULL)
              if(LibAPIVersion <= AMISSL_V310 && OpenLib(&AmiSSLBase,"310") == NULL)
                if(LibAPIVersion <= AMISSL_V308 && OpenLib(&AmiSSLBase,"308") == NULL)
                  if(LibAPIVersion <= AMISSL_V307 && OpenLib(&AmiSSLBase,"307") == NULL
                                                  && OpenLib(&AmiSSLBase,"306") == NULL
                                                  && OpenLib(&AmiSSLBase,"305") == NULL
                                                  && OpenLib(&AmiSSLBase,"304") == NULL
                                                  && OpenLib(&AmiSSLBase,"303") == NULL)
                    if(LibAPIVersion == AMISSL_V302) OpenLib(&AmiSSLBase,"302");
  }
  else if(LibAPIVersion >= AMISSL_V300)
  {
    D(DBF_STARTUP, "About to open amissl v30x library");

    if(OpenLib(&AmiSSLBase,"301") == NULL)
      OpenLib(&AmiSSLBase,"300");
  }
  else if(LibAPIVersion == AMISSL_V111a_OBS)
  {
    // Special case - due to some mistakes made in the ABI / interface update in
    // this version, meaning future versions are incompatible
    OpenLib(&AmiSSLBase,"111a");
  }
  else if(LibAPIVersion >= AMISSL_V110c)
  {
    D(DBF_STARTUP, "About to open amissl v11x library");

    // if an application requests AmiSSL/OpenSSL versions 1.1.x we try to open any
    // known 1.1.x amissl library as OpenSSL defines binary/api compatibility when only
    // minor numbers are changed (https://www.openssl.org/support/faq.html#MISC8)
    // but we must take care to prevent applications requiring newer API functions
    // from loading older libraries that do not contain those required entries
    if(!AmiSSLBase && LibAPIVersion < AMISSL_V300)
    {
      if(LibAPIVersion <= AMISSL_V111m && OpenLib(&AmiSSLBase,"111m") == NULL)
	if(LibAPIVersion <= AMISSL_V111l && OpenLib(&AmiSSLBase,"111l") == NULL
                                         && OpenLib(&AmiSSLBase,"111k") == NULL
                                         && OpenLib(&AmiSSLBase,"111j") == NULL
                                         && OpenLib(&AmiSSLBase,"111i") == NULL)
          if(LibAPIVersion <= AMISSL_V111g && OpenLib(&AmiSSLBase,"111g") == NULL
                                           && OpenLib(&AmiSSLBase,"111d") == NULL)
            if(LibAPIVersion <= AMISSL_V111a_OBS && OpenLib(&AmiSSLBase,"111a") == NULL)
              if(LibAPIVersion <= AMISSL_V110g && OpenLib(&AmiSSLBase,"110g") == NULL)
                if(LibAPIVersion <= AMISSL_V110e && OpenLib(&AmiSSLBase,"110e") == NULL
                                                 && OpenLib(&AmiSSLBase,"110d") == NULL)
		  if(LibAPIVersion == AMISSL_V110c) OpenLib(&AmiSSLBase,"110c");
    }
  }
  else if(LibAPIVersion == AMISSL_V102f)
  {
    D(DBF_STARTUP, "About to open amissl v10x library");

    // if an application requests AmiSSL/OpenSSL versions 1.0.x we try to open any
    // known 1.0.x amissl library as OpenSSL defines binary/api compatibility when only
    // minor numbers are changed (https://www.openssl.org/support/faq.html#MISC8)
    if(OpenLib(&AmiSSLBase,"102f") == NULL)
      if(OpenLib(&AmiSSLBase,"101i") == NULL)
        OpenLib(&AmiSSLBase,"101h");
  }
  else if(LibAPIVersion >= AMISSL_V097g)
  {
    // if an application requests 0.9.7g we try to open newer 0.9.7 versions until 0.9.7y
    // as they are API compatible
    if(LibAPIVersion <= AMISSL_V098y && OpenLib(&AmiSSLBase,"098y") == NULL)
      if(LibAPIVersion <= AMISSL_V097m && OpenLib(&AmiSSLBase,"097m") == NULL)
        if(LibAPIVersion == AMISSL_V097g) OpenLib(&AmiSSLBase,"097g");
  }
  else if(LibAPIVersion == AMISSL_V2)
  {
    /* This only happens for m68k code, no need to handle ppc versions here */
    if(OpenLib(&AmiSSLBase,"amissl") != NULL)
    {
      amisslinit.BlowFishBase = OpenLib(&BlowFishBase,"blowfish");
      amisslinit.CASTBase = OpenLib(&CASTBase,"cast");
      amisslinit.DESBase = OpenLib(&DESBase,"des");
      amisslinit.IDEABase = OpenLib(&IDEABase,"idea");
      amisslinit.MD2Base = OpenLib(&MD2Base,"md2");
      amisslinit.MD4Base = OpenLib(&MD4Base,"md4");
      amisslinit.MD5Base = OpenLib(&MD5Base,"md5");
      amisslinit.RC2Base = OpenLib(&RC2Base,"rc2");
      amisslinit.RC4Base = OpenLib(&RC4Base,"rc4");
      amisslinit.RC5Base = OpenLib(&RC5Base,"rc5");
      amisslinit.RIPEMDBase = OpenLib(&RIPEMDBase,"ripemd");
      amisslinit.SHABase = OpenLib(&SHABase,"sha");

      if(SHABase)
      {
        amisslinit.DSABase = OpenLib(&DSABase,"dsa");
        amisslinit.DHBase = OpenLib(&DHBase,"dh");
      }

      if(SHABase && MD5Base)
      {
        amisslinit.RSABase = OpenLib(&RSABase,"rsa");
      }

      if(DESBase)
      {
        amisslinit.MDC2Base = OpenLib(&MDC2Base,"mdc2");
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

  LOCK_RELEASE(AmiSSLMasterLock);

  RETURN(AmiSSLBase);
  return AmiSSLBase;
}

LIBPROTO(CloseAmiSSL, void, REG(a6, UNUSED __BASE_OR_IFACE))
{
  LOCK_OBTAIN(AmiSSLMasterLock);

  if(AmiSSLBase)
  {
    if(AmiSSLInitialised)
    {
#ifdef __amigaos4__
      struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *)((uint32)AmiSSLBase + AmiSSLBase->lib_PosSize);
      struct AmiSSLIFace *IAmiSSL = (struct AmiSSLIFace *)ExtLib->MainIFace;
#endif
      CleanupAmiSSLA(NULL);
    }
    CloseLib(AmiSSLBase);
  }

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

  LOCK_RELEASE(AmiSSLMasterLock);
}

LIBPROTO(OpenAmiSSLCipher, struct Library *, REG(a6, UNUSED __BASE_OR_IFACE), REG(d0, LONG Cipher))
{
  struct Library *result = NULL;
  #if defined(__amigaos4__)
  struct AmiSSLMasterIFace *IAmiSSLMaster = __BASE_OR_IFACE_VAR;
  #else
  struct Library *AmiSSLMasterBase = __BASE_OR_IFACE_VAR;
  #endif

  LOCK_OBTAIN(AmiSSLMasterLock);

  // only open sub libraries for our old-style AmiSSL v2 versions.
  if(LibAPIVersion == AMISSL_V2)
  {
    switch(Cipher)
    {
      case CIPHER_BLOWFISH:
        result = OpenLib(&BlowFishBase,"blowfish");
        break;
      case CIPHER_CAST:
        result = OpenLib(&CASTBase,"cast");
        break;
      case CIPHER_DES:
        result = OpenLib(&DESBase,"des");
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
        result = OpenLib(&IDEABase,"idea");
        break;
      case CIPHER_MD2:
        result = OpenLib(&MD2Base,"md2");
        break;
      case CIPHER_MD4:
        result = OpenLib(&MD4Base,"md4");
        break;
      case CIPHER_MD5:
        result = OpenLib(&MD5Base,"md5");
        break;
      case CIPHER_MDC2:
        result = OpenLib(&MDC2Base,"mdc2");
        break;
      case CIPHER_RC2:
        result = OpenLib(&RC2Base,"rc2");
        break;
      case CIPHER_RC4:
        result = OpenLib(&RC4Base,"rc4");
        break;
      case CIPHER_RC5:
        result = OpenLib(&RC5Base,"rc5");
        break;
      case CIPHER_RIPEMD:
        result = OpenLib(&RIPEMDBase,"ripemd");
        break;
      case CIPHER_RSA:
        if(OpenAmiSSL() != NULL)
        {
          result = RSABase;
        }
        break;
      case CIPHER_SHA:
        result = OpenLib(&SHABase,"sha");
        break;
    }
  }

  LOCK_RELEASE(AmiSSLMasterLock);

  return result;
}

LIBPROTO(OpenAmiSSLTagList, LONG, REG(a6, __BASE_OR_IFACE), REG(d0, LONG APIVersion), REG(a0, struct TagItem *tagList))
{
  #if defined(__amigaos4__)
  struct AmiSSLMasterIFace *IAmiSSLMaster = __BASE_OR_IFACE_VAR;
  #else
  struct Library *AmiSSLMasterBase = __BASE_OR_IFACE_VAR;
  #endif
  LONG err = 0;

  if(InitAmiSSLMaster(APIVersion,GetTagData(AmiSSL_UsesOpenSSLStructs,TRUE,tagList)))
  {
    if(OpenAmiSSL())
    {
#ifdef __amigaos4__
      struct ExtendedLibrary *ExtLib = (struct ExtendedLibrary *)((uint32)AmiSSLBase + AmiSSLBase->lib_PosSize);
      struct AmiSSLIFace *IAmiSSL = (struct AmiSSLIFace *)ExtLib->MainIFace;
#endif
      if(GetTagData(AmiSSL_InitAmiSSL,TRUE,tagList))
      {
        if(InitAmiSSLA(tagList) == 0)
	{
          AmiSSLInitialised = TRUE;
        }
        else
        {
          CloseAmiSSL();
          err = 3;
        }
      }
      else
      {
        struct Library **libBasePtr;
#ifdef __amigaos4__
        struct AmiSSLIFace **ifacePtr;
        ifacePtr = (struct AmiSSLIFace **)GetTagData(AmiSSL_GetIAmiSSL,(ULONG)NULL,tagList);
        if(ifacePtr) *ifacePtr = IAmiSSL;
#endif
        libBasePtr = (struct Library **)GetTagData(AmiSSL_GetAmiSSLBase,(ULONG)NULL,tagList);
        if(libBasePtr) *libBasePtr = AmiSSLBase;
      }
    }
    else
    {
      err = 2;
    }
  }
  else
  {
    err = 1;
  }

  return err;
}

#ifdef __amigaos4__
LIBPROTOVA(OpenAmiSSLTags, LONG, REG(a6, __BASE_OR_IFACE), REG(d0, LONG APIVersion), ...)
{
  __gnuc_va_list ap;
  struct TagItem *tags;

  __builtin_va_start(ap, APIVersion);
  tags = va_getlinearva(ap, struct TagItem *);
  __builtin_va_end(ap);

  return CALL_LFUNC(OpenAmiSSLTagList, APIVersion, tags);
}
#endif

LIBPROTO(CloseAmiSSLCipher, void, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, struct Library *LibBase))
{
  LOCK_OBTAIN(AmiSSLMasterLock);
  CloseLib(LibBase);
  LOCK_RELEASE(AmiSSLMasterLock);
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

  LOCK_FREE(AmiSSLMasterLock);
}

LIBPROTO(__UserLibExpunge, void, REG(a6, UNUSED __BASE_OR_IFACE))
{
  TRACELINE();
}

LIBPROTO(__UserLibInit, int, REG(a6, UNUSED __BASE_OR_IFACE))
{
  int err = 1; // Assume error condition

  ENTER();

  if(LOCK_INIT(AmiSSLMasterLock)
#if defined(__amigaos4__)
     && (UtilityBase = OpenLibrary("utility.library", 50)) != NULL
     && (IntuitionBase = OpenLibrary("intuition.library", 50)) != NULL
     && (IUtility = (struct UtilityIFace *)GetInterface(UtilityBase,"main",1,NULL)) != NULL
     && (IIntuition = (struct IntuitionIFace *)GetInterface(IntuitionBase, "main", 1, NULL)) != NULL
#else
     && (UtilityBase = (struct UtilityBase *)OpenLibrary("utility.library", 37)) != NULL
     && (IntuitionBase = (struct IntuitionBase*)OpenLibrary("intuition.library", 36)) != NULL
#endif
     )
  {
    err = 0;
  }

  D(DBF_STARTUP, "Userlib err: %d %08lx", err, SysBase);

  if(err != 0)
    CALL_LFUNC_NP(__UserLibCleanup);

  RETURN(err);
  return(err);
}
