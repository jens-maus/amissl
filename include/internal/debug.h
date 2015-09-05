#ifndef _DEBUG_H_
#define _DEBUG_H_

#ifdef __amigaos4__

#ifdef DEBUG
#include <interfaces/exec.h>
extern struct ExecIFace * __attribute__((force_no_baserel)) IExec;
#define kprintf (IExec->DebugPrintF)
#define traceline() (IExec->DebugPrintF)("%08lx %s:%d\n",(IExec->FindTask)(NULL),__FILE__,__LINE__)
#define SHOWREGISTERS() ((void)0)
#else /* DEBUG */
#define kprintf(...) ((void)0)
#define traceline() ((void)0)
#define SHOWREGISTERS() ((void)0)
#endif /* DEBUG */

#else /* __amigaos4__ */

extern void kprintf(const char *fmt, ...);
#define traceline() kprintf("%08lx %s:%d\n",FindTask(NULL),__FILE__,__LINE__)
#define SHOWREGISTERS() { APTR a4,a6; __asm volatile ("movel a4,%0" : "=r" (a4)); __asm volatile ("movel a6,%0" : "=r" (a6)); kprintf("%08lx %s:%d a4: %08lx a6: %08lx\n", FindTask(NULL), __FILE__, __LINE__, a4, a6); }

#endif /* __amigaos4__ */

#endif /* _DEBUG_H_ */
