#ifndef BASE_H
#define BASE_H 1

#ifndef EXEC_LIBRARIES_H
#include <exec/libraries.h>
#endif

#ifndef EXEC_SEMAPHORES_H
#include <exec/semaphores.h>
#endif

#ifndef DOS_DOS_H
#include <dos/dos.h>
#endif

#if defined(__amigaos4__)
#include <proto/elf.h>
#endif

struct LibraryHeader
{
  struct Library          libBase;
  UWORD                   pad1;
  BPTR                    segList;
  struct Library          *sysBase;
  struct SignalSemaphore  libSem;
  UWORD                   pad2;
  #if defined(MULTIBASE)
  struct LibraryHeader    *parent;
  #if defined(__amigaos3__)
  APTR                    dataSeg;
  ULONG                   dataSize;
  #endif /* __amigaos3__ */
  #if defined(__amigaos4__)
  struct Library          *ElfBase;
  struct ElfIFace         *IElf;
  Elf32_Handle            elfHandle;
  #endif /* __amigaos4__ */
  #if defined(BASEREL)
  #if defined(__amigaos3__)
  APTR                    a4;
  #endif /* __amigaos3__ */
  #if defined(__amigaos4__)
  uint8                   *baserelData;
  #endif /* __amigaos4__ */
  #endif /* BASEREL */
  #endif /* MULTIBASE */

  //////////////////////////////////////
  // local variables which are valid only
  // for this particular libbase
  struct SignalSemaphore *lock_cs;
  ULONG ThreadGroupID;

  //////////////////////////////////////
  // global variables which are valid only
  // for the parent libbase and which
  // are thus global throughout all libbases
  // created by AmiSSL.
  struct SignalSemaphore openssl_cs;
  struct HashTable *thread_hash;
  ULONG LastThreadGroupID;
};

#endif /* BASE_H */
