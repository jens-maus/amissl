#ifdef __amigaos4__
extern struct ExecIFace * __attribute__((force_no_baserel)) IExec;
#define kprintf (IExec->DebugPrintF)
#define traceline() IExec->DebugPrintF("%08x %s:%d\n",FindTask(NULL),__FILE__,__LINE__)
#else /* !__amigaos4__ */
static void kprintf(const char *dummy, ...) {}
#define traceline() kprintf("%08x %s:%d\n",FindTask(NULL),__FILE__,__LINE__)
#endif /* __amigaos4__ */
