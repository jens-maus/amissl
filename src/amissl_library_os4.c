#undef __USE_INLINE__ // prevent the inline4 macros from being active

#include <exec/exec.h>
#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/elf.h>
#include <dos/dos.h>
#include <proto/intuition.h>
#include <intuition/intuition.h>
#include <stdarg.h>
#include <internal/amissl_compiler.h>
#include <internal/amissl.h>

#include <interfaces/amissl.h>
#include <exec/emulation.h>

//#define DEBUG
#include <internal/debug.h>

#include "../libcmt/libcmt.h"

extern struct Library * AMISSL_COMMON_DATA SysBase;
extern struct ExecIFace * AMISSL_COMMON_DATA IExec;

struct SocketIFace *GetSocketIFace(UNUSED int modifies_errno)
{
  AMISSL_STATE *p = GetAmiSSLState();

  /* The ISocketPtr might be pointing to uninitialized ISocket in __UserLibInit */
  if (!p->socket_errno_initialized)
    initialize_socket_errno(p);

  return(p->ISocketPtr ? *p->ISocketPtr : NULL);
}

LIBPROTOVA(BIO_printf, int, UNUSED struct AmiSSLIFace *Self, BIO * bio, const char * format, ...)
{
  VA_LIST args;
  int ret;

  VA_START(args, format);
  ret = BIO_vprintf(bio,format,args);
  VA_END(args);

  return ret;
}

LIBPROTOVA(BIO_snprintf, int, UNUSED struct AmiSSLIFace *Self, char * buf, size_t n, const char * format, ...)
{
  VA_LIST args;
  int ret;

  VA_START(args, format);
  ret = BIO_vsnprintf(buf,n,format,args);
  VA_END(args);

  return ret;
}

LIBPROTOVA(OPENSSL_showfatal, void, UNUSED struct AmiSSLIFace *Self, const char * fmta, ...)
{
  VA_LIST args;
  struct EasyStruct ErrReq;
  char error[512];

  VA_START(args, fmta);
  BIO_vsnprintf(error,sizeof(error),fmta,args);
  VA_END(args);

  ErrReq.es_StructSize   = sizeof(struct EasyStruct);
  ErrReq.es_Flags        = 0;
  ErrReq.es_Title        = "AmiSSL/OpenSSL internal error";
  ErrReq.es_TextFormat   = error;
  ErrReq.es_GadgetFormat = "Abort";

  // Open an Easy Requester
  IIntuition->EasyRequestArgs(NULL, &ErrReq, NULL, NULL);
}

LIBPROTOVA(ERR_add_error_data, void, UNUSED struct AmiSSLIFace *Self, int num, ...)
{
  VA_LIST args;

  VA_START(args, num);
  ERR_add_error_vdata(num,args);
  VA_END(args);
}

int __amigaos4_check68k_check(int (*func)())
{
//  kprintf("__amigaos4_check68k_check_func called with: %08x\n",func);
  return IExec->IsNative(func);
}

AMISSL_COMMON_DATA static UWORD trampoline_code [][6] =
{
  {0x4ED5,0,0,0,0,0},       //JMP     (A5)
  {0x48E7,0x8000,0x4E95,0x588F,0x4E75,0},   //MOVEM.L D0,         -(A7);   JSR  (A5);   ADDQ.L  #4,A7;   RTS
  {0x48E7,0xC000,0x4E95,0x508F,0x4E75,0},   //MOVEM.L D0-D1,      -(A7);   JSR  (A5);   ADDQ.L  #8,A7;   RTS
  {0x48E7,0xE000,0x4E95,0xDEFC,0x000C,0x4E75},  //MOVEM.L D0-D2,      -(A7);   JSR  (A5);   ADDA.W  #0x000C,A7  RTS
  {0x48E7,0xF000,0x4E95,0xDEFC,0x0010,0x4E75},  //MOVEM.L D0-D3,      -(A7);   JSR  (A5);   ADDA.W  #0x0010,A7  RTS
  {0x48E7,0xF800,0x4E95,0xDEFC,0x0014,0x4E75},  //MOVEM.L D0-D4,      -(A7);   JSR  (A5);   ADDA.W  #0x0014,A7  RTS
  {0x48E7,0xFC00,0x4E95,0xDEFC,0x0018,0x4E75},  //MOVEM.L D0-D5,      -(A7);   JSR  (A5);   ADDA.W  #0x0018,A7  RTS
  {0x48E7,0xFE00,0x4E95,0xDEFC,0x001C,0x4E75},  //MOVEM.L D0-D6,      -(A7);   JSR  (A5);   ADDA.W  #0x001C,A7  RTS
  {0x48E7,0xFF00,0x4E95,0xDEFC,0x0020,0x4E75},  //MOVEM.L D0-D7,      -(A7);   JSR  (A5);   ADDA.W  #0x0020,A7  RTS
  {0x48E7,0xFF80,0x4E95,0xDEFC,0x0024,0x4E75},  //MOVEM.L D0-D7/A0,   -(A7);   JSR  (A5);   ADDA.W  #0x0024,A7  RTS
  {0x48E7,0xFFC0,0x4E95,0xDEFC,0x0028,0x4E75},  //MOVEM.L D0-D7/A0-A1,-(A7);   JSR  (A5);   ADDA.W  #0x0028,A7  RTS
  {0x48E7,0xFFE0,0x4E95,0xDEFC,0x002C,0x4E75},  //MOVEM.L D0-D7/A0-A2,-(A7);   JSR  (A5);   ADDA.W  #0x002C,A7  RTS
  {0x48E7,0xFFF0,0x4E95,0xDEFC,0x0030,0x4E75},  //MOVEM.L D0-D7/A0-A3,-(A7);   JSR  (A5);   ADDA.W  #0x0030,A7  RTS
  {0x48E7,0xFFF8,0x4E95,0xDEFC,0x0034,0x4E75},  //MOVEM.L D0-D7/A0-A3,-(A7);   JSR  (A5);   ADDA.W  #0x0034,A7  RTS
};

VARARGS68K int __amigaos4_check68k_trampoline(int nargs, int func, ...)
{
  __gnuc_va_list args;
  long *ptr;
  int result,i;

  __builtin_va_start(args, func);

  //kprintf("__amigaos4_check68k_trampoline called with: %d args, func: %08x\n",nargs,func);

  ptr = va_getlinearva(args, long *);

  //kprintf("Stack: %08x %08x %08x %08x %08x %08x %08x\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4],ptr[5],ptr[6]);

  for(i=0;i<nargs;i++)
  {
    ptr[i*2] = ET_RegisterD0 + i; // Replace 0's with tag id's
  }
  //kprintf("Stack: %08x %08x %08x %08x %08x %08x %08x\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4],ptr[5],ptr[6]);

  result = IExec->EmulateTags(trampoline_code[nargs],ET_SaveRegs,TRUE,
    ET_RegisterA5,func,
    TAG_MORE,ptr);

  __builtin_va_end(args);
  return result;
}
