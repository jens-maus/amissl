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
  #if defined(__MORPHOS__) && defined(MULTIBASE)
  APTR                    dataSeg; // Don't change the position of this. The offset must stay
                                   // at 36, or __restore_r13 must be adjusted.
  #endif
  BPTR                    segList;
  struct Library          *sysBase;
  struct SignalSemaphore  libSem;
  UWORD                   pad2;
  #if defined(MULTIBASE)
  struct LibraryHeader    *parent;
  #if defined(__amigaos3__)
  APTR                    dataSeg;
  ULONG                   dataSize;
  #elif defined(__MORPHOS__)
  ULONG                   dataSize;
  #endif
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
};

#endif /* BASE_H */
