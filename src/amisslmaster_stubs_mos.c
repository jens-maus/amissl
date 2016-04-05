/* Automatically generated gatestubs (sfdc 1.9)! Do not edit! */

#include <exec/types.h>

#define _sfdc_strarg(a) _sfdc_strarg2(a)
#define _sfdc_strarg2(a) #a

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <SDI_lib.h>

LIBSTUB(UNIMPLEMENTED, int)
{
  // nothing
  return 0;
}

LIBSTUB(InitAmiSSLMaster, LONG)
{
  __BASE_OR_IFACE = (__BASE_OR_IFACE_TYPE)REG_A6;
  return CALL_LFUNC(InitAmiSSLMaster, (LONG)REG_D0, (LONG)REG_D1);
}

LIBSTUB(OpenAmiSSL, struct Library *)
{
  __BASE_OR_IFACE = (__BASE_OR_IFACE_TYPE)REG_A6;
  return CALL_LFUNC(OpenAmiSSL);
}

LIBSTUB(CloseAmiSSL, void)
{
  __BASE_OR_IFACE = (__BASE_OR_IFACE_TYPE)REG_A6;
  return CALL_LFUNC(CloseAmiSSL);
}

LIBSTUB(OpenAmiSSLCipher, struct Library *)
{
  __BASE_OR_IFACE = (__BASE_OR_IFACE_TYPE)REG_A6;
  return CALL_LFUNC(OpenAmiSSLCipher, (LONG)REG_D0);
}

LIBSTUB(CloseAmiSSLCipher, void)
{
  __BASE_OR_IFACE = (__BASE_OR_IFACE_TYPE)REG_A6;
  return CALL_LFUNC(CloseAmiSSLCipher, (struct Library *)REG_A0);
}


#ifdef __cplusplus
}
#endif /* __cplusplus */
