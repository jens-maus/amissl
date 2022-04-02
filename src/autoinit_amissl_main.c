/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2022 AmiSSL Open Source Team.
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

#if defined(__amigaos4__) && !defined(__USE_INLINE__)
  #define __USE_INLINE__
#endif

#include <proto/exec.h>
#include <proto/dos.h>

#include <exec/types.h>
#include <dos/dos.h>
#include <utility/tagitem.h>
#include <libraries/amisslmaster.h>
#include <libraries/amissl.h>

#include <proto/amisslmaster.h>
#include <proto/amissl.h>

#include <errno.h>

#if defined(__GNUC__)
  #define CONSTRUCTOR(name) void __init_##name(void) __attribute__((constructor)); void __init_##name(void)
  #define DESTRUCTOR(name) void __exit_##name(void) __attribute__((destructor)); void __exit_##name(void)
  #define WEAK __attribute__((weak))
  #define fatal_error(message) show_fatal_error(message)
#elif defined(__SASC)
  #define CONSTRUCTOR(name) int __stdargs _STI_250_##name(void)
  #define DESTRUCTOR(name) void __stdargs _STD_250_##name(void)
  #define WEAK
  #define fatal_error(message) return show_fatal_error(message)
#elif defined(__VBCC__)
  #define CONSTRUCTOR(name) void _INIT_5_##name(void)
  #define DESTRUCTOR(name) void _EXIT_5_##name(void)
  #define WEAK
  #define fatal_error(message) show_fatal_error(message)
#else
  #error Compiler not supported
#endif

/****************************************************************************/

WEAK struct Library *AmiSSLMasterBase = NULL;
WEAK struct Library *SocketBase = NULL;

#if defined(__amigaos4__)
WEAK struct AmiSSLIFace *IAmiSSL = NULL;
WEAK struct AmiSSLMasterIFace *IAmiSSLMaster = NULL;
WEAK struct SocketIFace *ISocket = NULL;
#else
WEAK struct Library *AmiSSLBase = NULL;
WEAK struct Library *AmiSSLExtBase = NULL;
#endif

WEAK LONG AmiSSLAPIVersion = AMISSL_CURRENT_VERSION;
WEAK LONG UsesOpenSSLStructs = TRUE;

/****************************************************************************/

#if defined(__SASC)
static int show_fatal_error(const char *message)
#else
static void show_fatal_error(const char *message)
#endif
{
  BOOL from_wb = ((struct Process *)FindTask(NULL))->pr_CLI == 0;
  BPTR fh;

  if (!from_wb)
  {
    #if defined(__amigaos4__)
    fh = ErrorOutput() ? ErrorOutput() : Output();
    #else
    fh = Output();
    #endif
  }
  else
    fh = Open("CON://///AUTO/CLOSE/WAIT", MODE_NEWFILE);

  if (fh)
  {
    FPrintf(fh, (char *)message);

    if (from_wb)
      Close(fh);
  }

  #if defined(__SASC)
  return 1;
  #else
  exit(RETURN_FAIL);
  #endif
}

#if !defined(__AROS__) && (defined(__VBCC__) || defined(NO_INLINE_STDARG))
#if defined(_M68000) || defined(__M68000) || defined(__mc68000)
// the AmigaOS3 build needs these stubs for the varargs functions
LONG (FPrintf)(BPTR fh, CONST_STRPTR format, ...)
{ return VFPrintf(fh, format, &format+1); }

LONG (InitAmiSSL)(Tag tag1, ...)
{ return InitAmiSSLA((struct TagItem *)&tag1); }
LONG (CleanupAmiSSL)(Tag tag1, ...)
{ return CleanupAmiSSLA((struct TagItem *)&tag1); }
LONG (OpenAmiSSLTags)(LONG APIVersion, Tag tag1, ...)
{ return OpenAmiSSLTagList(APIVersion, (struct TagItem *)&tag1); }

#elif defined(__MORPHOS__)

#warning "replace pure ASM stubs by ASM+C stubs"

LONG v_InitAmiSSLA(struct TagItem *tags)
{
  return InitAmiSSLA(tags);
}

asm (".align 2                     \n\
      .globl InitAmiSSL            \n\
      .type  InitAmiSSL,@function  \n\
 InitAmiSSL:                       \n\
      lwz 12,0(1)                  \n\
      mflr  0                      \n\
      stwu  1,-48(1)               \n\
      stw 12,16(1)                 \n\
      stw 0,20(1)                  \n\
      stw 3,24(1)                  \n\
      stw 4,28(1)                  \n\
      stw 5,32(1)                  \n\
      stw 6,36(1)                  \n\
      stw 7,40(1)                  \n\
      stw 8,44(1)                  \n\
      stw 9,48(1)                  \n\
      stw 10,52(1)                 \n\
      addi  3,1,24                 \n\
      bl v_InitAmiSSLA             \n\
      lwz 0,20(1)                  \n\
      lwz 11,16(1)                 \n\
      mtlr  0                      \n\
      stwu  11,48(1)               \n\
      blr                          \n\
     ");

LONG v_CleanupAmiSSLA(struct TagItem *tags)
{
  return CleanupAmiSSLA(tags);
}

asm (".align 2                        \n\
      .globl CleanupAmiSSL            \n\
      .type  CleanupAmiSSL,@function  \n\
 CleanupAmiSSL:                       \n\
      lwz 12,0(1)                     \n\
      mflr  0                         \n\
      stwu  1,-48(1)                  \n\
      stw 12,16(1)                    \n\
      stw 0,20(1)                     \n\
      stw 3,24(1)                     \n\
      stw 4,28(1)                     \n\
      stw 5,32(1)                     \n\
      stw 6,36(1)                     \n\
      stw 7,40(1)                     \n\
      stw 8,44(1)                     \n\
      stw 9,48(1)                     \n\
      stw 10,52(1)                    \n\
      addi  3,1,24                    \n\
      bl v_CleanupAmiSSLA             \n\
      lwz 0,20(1)                     \n\
      lwz 11,16(1)                    \n\
      mtlr  0                         \n\
      stwu  11,48(1)                  \n\
      blr                             \n\
     ");

LONG v_OpenAmiSSLTagList(LONG APIVersion, struct TagItem *tags)
{
  return OpenAmiSSLTagList(APIVersion, tags);
}

asm (".align 2                         \n\
      .globl OpenAmiSSLTags            \n\
      .type  OpenAmiSSLTags,@function  \n\
 OpenAmiSSLTags:                       \n\
      lwz 12,0(1)                      \n\
      mflr  0                          \n\
      stwu  1,-48(1)                   \n\
      stw 12,16(1)                     \n\
      stw 0,20(1)                      \n\
      stw 3,24(1)                      \n\
      stw 4,28(1)                      \n\
      stw 5,32(1)                      \n\
      stw 6,36(1)                      \n\
      stw 7,40(1)                      \n\
      stw 8,44(1)                      \n\
      stw 9,48(1)                      \n\
      stw 10,52(1)                     \n\
      addi  3,1,24                     \n\
      bl v_OpenAmiSSLTagList           \n\
      lwz 0,20(1)                      \n\
      lwz 11,16(1)                     \n\
      mtlr  0                          \n\
      stwu  11,48(1)                   \n\
      blr                              \n\
     ");

#endif

#endif

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

CONSTRUCTOR(amissl)
{
  #if defined(__amigaos4__)
  if (!ISocket)
  #endif
  {
    if (!SocketBase)
      if (!(SocketBase = OpenLibrary("bsdsocket.library", 4)))
        fatal_error("Couldn't open bsdsocket.library v4!\n");

    #if defined(__amigaos4__)
    if (!(ISocket = (struct SocketIFace *)GetInterface((struct Library *)SocketBase, "main", 1, NULL)))
      fatal_error("Couldn't obtain socket interface\n");
    #endif
  }

  #if defined(__amigaos4__)
  if (!IAmiSSLMaster)
  #endif
  {
    if (!(AmiSSLMasterBase = OpenLibrary("amisslmaster.library",
                                                 AMISSLMASTER_MIN_VERSION)))
      fatal_error("Couldn't open amisslmaster.library v" MKSTR(AMISSLMASTER_MIN_VERSION) "\n");

    #if defined(__amigaos4__)
    if (!(IAmiSSLMaster = (struct AmiSSLMasterIFace *)GetInterface((struct Library *)AmiSSLMasterBase, "main", 1, NULL)))
      fatal_error("Couldn't obtain amisslmaster interface\n");
    #endif
  }

  #if defined(__amigaos4__)
  if (!IAmiSSL)
  #endif
  {
    LONG err;
    #if defined(__amigaos4__)
    err = OpenAmiSSLTags(AmiSSLAPIVersion,
                         AmiSSL_UsesOpenSSLStructs, UsesOpenSSLStructs,
                         AmiSSL_GetIAmiSSL, &IAmiSSL,
                         AmiSSL_ISocket, ISocket,
                         AmiSSL_ErrNoPtr, &errno,
                         TAG_DONE);
    #else
    err = OpenAmiSSLTags(AmiSSLAPIVersion,
                         AmiSSL_UsesOpenSSLStructs, UsesOpenSSLStructs,
                         AmiSSL_GetAmiSSLBase, &AmiSSLBase,
                         AmiSSL_GetAmiSSLExtBase, &AmiSSLExtBase,
                         AmiSSL_SocketBase, SocketBase,
                         AmiSSL_ErrNoPtr, &errno,
                         TAG_DONE);
    #endif
    switch (err)
    {
      case 1:
        fatal_error("Couldn't initialise amisslmaster.library!\n");
	break;
      case 2:
        fatal_error("Couldn't open AmiSSL!\n");
	break;
      case 3:
        fatal_error("Couldn't initialise AmiSSL!\n");
	break;
    }
  }

  #if defined(__SASC)
  return 0; /* no error */
  #endif
}

/****************************************************************************/

DESTRUCTOR(amissl)
{
  #if defined(__amigaos4__)
  if (IAmiSSL)
  #else
  if (AmiSSLBase)
  #endif
  {
    CloseAmiSSL();

    #if defined(__amigaos4__)
    IAmiSSL = NULL;
    #else
    AmiSSLBase = NULL;
    #endif
  }

  if (AmiSSLMasterBase)
  {
    #if defined(__amigaos4__)
    if (IAmiSSLMaster)
    {
      DropInterface((struct Interface *)IAmiSSLMaster);
      IAmiSSLMaster = NULL;
    }
    #endif

    CloseLibrary((struct Library *)AmiSSLMasterBase);
    AmiSSLMasterBase = NULL;
  }

  if (SocketBase)
  {
    #if defined(__amigaos4__)
    if (ISocket)
    {
      DropInterface((struct Interface *)ISocket);
      ISocket = NULL;
    }
    #endif

    CloseLibrary((struct Library *)SocketBase);
    SocketBase = NULL;
  }
}

/****************************************************************************/
