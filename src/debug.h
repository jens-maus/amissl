
#undef DebugPrintF

__attribute__((force_no_baserel)) extern struct ExecIFace *IExec;
#define kprintf IExec->DebugPrintF
#define traceline() IExec->DebugPrintF("%08x %s:%d\n",FindTask(NULL),__FILE__,__LINE__)

