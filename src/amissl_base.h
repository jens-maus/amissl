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

  #if defined(MULTIBASE)
  APTR                    dataSeg; // Don't change the position of this. The offset must stay
                                   // at 36 for MorphOS, or __restore_r13 must be adjusted.
  ULONG                   dataSize;
  struct LibraryHeader    *parent;
  #if defined(__amigaos4__)
  struct Library          *ElfBase;
  struct ElfIFace         *IElf;
  Elf32_Handle            elfHandle;
  uint8                   *baserelData;
  #endif /* __amigaos4__ */
  #endif /* MULTIBASE */

  BPTR                    segList;
  struct Library          *sysBase;
  struct SignalSemaphore  libSem;

  //////////////////////////////////////
  // local variables which are valid only
  // for this particular libbase
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
