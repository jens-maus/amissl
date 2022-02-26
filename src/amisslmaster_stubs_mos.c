/* Automatically generated gatestubs (sfdc 1.11)! Do not edit! */

#include <exec/types.h>

#define _sfdc_strarg(a) _sfdc_strarg2(a)
#define _sfdc_strarg2(a) #a

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <emul/emulregs.h>

int LIBSTUB_UNIMPLEMENTED(void)
{
  // nothing
  return 0;
}

LONG LIB_InitAmiSSLMaster(struct Library * _base, LONG ___APIVersion, LONG ___UsesOpenSSLStructs);

LONG LIBSTUB_InitAmiSSLMaster(void)
{
  LONG ___APIVersion = (LONG)REG_D0;
  LONG ___UsesOpenSSLStructs = (LONG)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_InitAmiSSLMaster(_base, ___APIVersion, ___UsesOpenSSLStructs);
}

struct Library * LIB_OpenAmiSSL(struct Library * _base);

struct Library * LIBSTUB_OpenAmiSSL(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OpenAmiSSL(_base);
}

void LIB_CloseAmiSSL(struct Library * _base);

void LIBSTUB_CloseAmiSSL(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CloseAmiSSL(_base);
}

struct Library * LIB_OpenAmiSSLCipher(struct Library * _base, LONG ___Cipher);

struct Library * LIBSTUB_OpenAmiSSLCipher(void)
{
  LONG ___Cipher = (LONG)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OpenAmiSSLCipher(_base, ___Cipher);
}

void LIB_CloseAmiSSLCipher(struct Library * _base, struct Library * ___CipherBase);

void LIBSTUB_CloseAmiSSLCipher(void)
{
  struct Library * ___CipherBase = (struct Library *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CloseAmiSSLCipher(_base, ___CipherBase);
}

LONG LIB_OpenAmiSSLTagList(struct Library * _base, struct TagItem * ___tagList);

LONG LIBSTUB_OpenAmiSSLTagList(void)
{
  struct TagItem * ___tagList = (struct TagItem *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OpenAmiSSLTagList(_base, ___tagList);
}


#ifdef __cplusplus
}
#endif /* __cplusplus */
