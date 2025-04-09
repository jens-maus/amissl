/* Automatically generated gatestubs (sfdc 1.12)! Do not edit! */

#include <exec/types.h>
#include <dos/dos.h>
#include <amissl/amissl.h>

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

int LIB_OSSL_trace_enabled(struct Library * _base, int ___category);

int LIBSTUB_OSSL_trace_enabled(void)
{
  int ___category = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_trace_enabled(_base, ___category);
}

BIO * LIB_OSSL_trace_begin(struct Library * _base, int ___category);

BIO * LIBSTUB_OSSL_trace_begin(void)
{
  int ___category = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_trace_begin(_base, ___category);
}

void LIB_OSSL_trace_end(struct Library * _base, int ___category, BIO * ___channel);

void LIBSTUB_OSSL_trace_end(void)
{
  int ___category = (int)REG_D0;
  BIO * ___channel = (BIO *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_trace_end(_base, ___category, ___channel);
}

OSSL_PROVIDER * LIB_OSSL_PROVIDER_load(struct Library * _base, OSSL_LIB_CTX * ___a, const char * ___name);

OSSL_PROVIDER * LIBSTUB_OSSL_PROVIDER_load(void)
{
  OSSL_LIB_CTX * ___a = (OSSL_LIB_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_load(_base, ___a, ___name);
}

OSSL_PROVIDER * LIB_OSSL_PROVIDER_try_load(struct Library * _base, OSSL_LIB_CTX * ___a, const char * ___name, int ___retain_fallbacks);

OSSL_PROVIDER * LIBSTUB_OSSL_PROVIDER_try_load(void)
{
  OSSL_LIB_CTX * ___a = (OSSL_LIB_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  int ___retain_fallbacks = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_try_load(_base, ___a, ___name, ___retain_fallbacks);
}

int LIB_OSSL_PROVIDER_unload(struct Library * _base, OSSL_PROVIDER * ___prov);

int LIBSTUB_OSSL_PROVIDER_unload(void)
{
  OSSL_PROVIDER * ___prov = (OSSL_PROVIDER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_unload(_base, ___prov);
}

int LIB_OSSL_PROVIDER_add_builtin(struct Library * _base, OSSL_LIB_CTX * ___a, const char * ___name, OSSL_provider_init_fn * ___init_fn);

int LIBSTUB_OSSL_PROVIDER_add_builtin(void)
{
  OSSL_LIB_CTX * ___a = (OSSL_LIB_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  OSSL_provider_init_fn * ___init_fn = (OSSL_provider_init_fn *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_add_builtin(_base, ___a, ___name, ___init_fn);
}

const OSSL_PARAM * LIB_OSSL_PROVIDER_gettable_params(struct Library * _base, const OSSL_PROVIDER * ___prov);

const OSSL_PARAM * LIBSTUB_OSSL_PROVIDER_gettable_params(void)
{
  const OSSL_PROVIDER * ___prov = (const OSSL_PROVIDER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_gettable_params(_base, ___prov);
}

int LIB_OSSL_PROVIDER_get_params(struct Library * _base, const OSSL_PROVIDER * ___prov, OSSL_PARAM * ___params);

int LIBSTUB_OSSL_PROVIDER_get_params(void)
{
  const OSSL_PROVIDER * ___prov = (const OSSL_PROVIDER *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_get_params(_base, ___prov, ___params);
}

OSSL_CRMF_ENCRYPTEDVALUE * LIB_d2i_OSSL_CRMF_ENCRYPTEDVALUE(struct Library * _base, OSSL_CRMF_ENCRYPTEDVALUE ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CRMF_ENCRYPTEDVALUE * LIBSTUB_d2i_OSSL_CRMF_ENCRYPTEDVALUE(void)
{
  OSSL_CRMF_ENCRYPTEDVALUE ** ___a = (OSSL_CRMF_ENCRYPTEDVALUE **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CRMF_ENCRYPTEDVALUE(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CRMF_ENCRYPTEDVALUE(struct Library * _base, const OSSL_CRMF_ENCRYPTEDVALUE * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CRMF_ENCRYPTEDVALUE(void)
{
  const OSSL_CRMF_ENCRYPTEDVALUE * ___a = (const OSSL_CRMF_ENCRYPTEDVALUE *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CRMF_ENCRYPTEDVALUE(_base, ___a, ___out);
}

void LIB_OSSL_CRMF_ENCRYPTEDVALUE_free(struct Library * _base, OSSL_CRMF_ENCRYPTEDVALUE * ___a);

void LIBSTUB_OSSL_CRMF_ENCRYPTEDVALUE_free(void)
{
  OSSL_CRMF_ENCRYPTEDVALUE * ___a = (OSSL_CRMF_ENCRYPTEDVALUE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ENCRYPTEDVALUE_free(_base, ___a);
}

OSSL_CRMF_ENCRYPTEDVALUE * LIB_OSSL_CRMF_ENCRYPTEDVALUE_new(struct Library * _base);

OSSL_CRMF_ENCRYPTEDVALUE * LIBSTUB_OSSL_CRMF_ENCRYPTEDVALUE_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ENCRYPTEDVALUE_new(_base);
}

const ASN1_ITEM * LIB_OSSL_CRMF_ENCRYPTEDVALUE_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CRMF_ENCRYPTEDVALUE_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ENCRYPTEDVALUE_it(_base);
}

OSSL_CRMF_MSG * LIB_d2i_OSSL_CRMF_MSG(struct Library * _base, OSSL_CRMF_MSG ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CRMF_MSG * LIBSTUB_d2i_OSSL_CRMF_MSG(void)
{
  OSSL_CRMF_MSG ** ___a = (OSSL_CRMF_MSG **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CRMF_MSG(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CRMF_MSG(struct Library * _base, const OSSL_CRMF_MSG * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CRMF_MSG(void)
{
  const OSSL_CRMF_MSG * ___a = (const OSSL_CRMF_MSG *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CRMF_MSG(_base, ___a, ___out);
}

OSSL_CRMF_MSG * LIB_OSSL_CRMF_MSG_dup(struct Library * _base, const OSSL_CRMF_MSG * ___a);

OSSL_CRMF_MSG * LIBSTUB_OSSL_CRMF_MSG_dup(void)
{
  const OSSL_CRMF_MSG * ___a = (const OSSL_CRMF_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_dup(_base, ___a);
}

void LIB_OSSL_CRMF_MSG_free(struct Library * _base, OSSL_CRMF_MSG * ___a);

void LIBSTUB_OSSL_CRMF_MSG_free(void)
{
  OSSL_CRMF_MSG * ___a = (OSSL_CRMF_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_free(_base, ___a);
}

OSSL_CRMF_MSG * LIB_OSSL_CRMF_MSG_new(struct Library * _base);

OSSL_CRMF_MSG * LIBSTUB_OSSL_CRMF_MSG_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_new(_base);
}

const ASN1_ITEM * LIB_OSSL_CRMF_MSG_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CRMF_MSG_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_it(_base);
}

OSSL_CRMF_PBMPARAMETER * LIB_d2i_OSSL_CRMF_PBMPARAMETER(struct Library * _base, OSSL_CRMF_PBMPARAMETER ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CRMF_PBMPARAMETER * LIBSTUB_d2i_OSSL_CRMF_PBMPARAMETER(void)
{
  OSSL_CRMF_PBMPARAMETER ** ___a = (OSSL_CRMF_PBMPARAMETER **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CRMF_PBMPARAMETER(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CRMF_PBMPARAMETER(struct Library * _base, const OSSL_CRMF_PBMPARAMETER * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CRMF_PBMPARAMETER(void)
{
  const OSSL_CRMF_PBMPARAMETER * ___a = (const OSSL_CRMF_PBMPARAMETER *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CRMF_PBMPARAMETER(_base, ___a, ___out);
}

void LIB_OSSL_CRMF_PBMPARAMETER_free(struct Library * _base, OSSL_CRMF_PBMPARAMETER * ___a);

void LIBSTUB_OSSL_CRMF_PBMPARAMETER_free(void)
{
  OSSL_CRMF_PBMPARAMETER * ___a = (OSSL_CRMF_PBMPARAMETER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_PBMPARAMETER_free(_base, ___a);
}

OSSL_CRMF_PBMPARAMETER * LIB_OSSL_CRMF_PBMPARAMETER_new(struct Library * _base);

OSSL_CRMF_PBMPARAMETER * LIBSTUB_OSSL_CRMF_PBMPARAMETER_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_PBMPARAMETER_new(_base);
}

const ASN1_ITEM * LIB_OSSL_CRMF_PBMPARAMETER_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CRMF_PBMPARAMETER_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_PBMPARAMETER_it(_base);
}

OSSL_CRMF_CERTID * LIB_d2i_OSSL_CRMF_CERTID(struct Library * _base, OSSL_CRMF_CERTID ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CRMF_CERTID * LIBSTUB_d2i_OSSL_CRMF_CERTID(void)
{
  OSSL_CRMF_CERTID ** ___a = (OSSL_CRMF_CERTID **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CRMF_CERTID(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CRMF_CERTID(struct Library * _base, const OSSL_CRMF_CERTID * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CRMF_CERTID(void)
{
  const OSSL_CRMF_CERTID * ___a = (const OSSL_CRMF_CERTID *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CRMF_CERTID(_base, ___a, ___out);
}

OSSL_CRMF_CERTID * LIB_OSSL_CRMF_CERTID_dup(struct Library * _base, const OSSL_CRMF_CERTID * ___a);

OSSL_CRMF_CERTID * LIBSTUB_OSSL_CRMF_CERTID_dup(void)
{
  const OSSL_CRMF_CERTID * ___a = (const OSSL_CRMF_CERTID *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTID_dup(_base, ___a);
}

void LIB_OSSL_CRMF_CERTID_free(struct Library * _base, OSSL_CRMF_CERTID * ___a);

void LIBSTUB_OSSL_CRMF_CERTID_free(void)
{
  OSSL_CRMF_CERTID * ___a = (OSSL_CRMF_CERTID *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTID_free(_base, ___a);
}

OSSL_CRMF_CERTID * LIB_OSSL_CRMF_CERTID_new(struct Library * _base);

OSSL_CRMF_CERTID * LIBSTUB_OSSL_CRMF_CERTID_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTID_new(_base);
}

const ASN1_ITEM * LIB_OSSL_CRMF_CERTID_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CRMF_CERTID_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTID_it(_base);
}

OSSL_CRMF_PKIPUBLICATIONINFO * LIB_d2i_OSSL_CRMF_PKIPUBLICATIONINFO(struct Library * _base, OSSL_CRMF_PKIPUBLICATIONINFO ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CRMF_PKIPUBLICATIONINFO * LIBSTUB_d2i_OSSL_CRMF_PKIPUBLICATIONINFO(void)
{
  OSSL_CRMF_PKIPUBLICATIONINFO ** ___a = (OSSL_CRMF_PKIPUBLICATIONINFO **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CRMF_PKIPUBLICATIONINFO(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CRMF_PKIPUBLICATIONINFO(struct Library * _base, const OSSL_CRMF_PKIPUBLICATIONINFO * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CRMF_PKIPUBLICATIONINFO(void)
{
  const OSSL_CRMF_PKIPUBLICATIONINFO * ___a = (const OSSL_CRMF_PKIPUBLICATIONINFO *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CRMF_PKIPUBLICATIONINFO(_base, ___a, ___out);
}

void LIB_OSSL_CRMF_PKIPUBLICATIONINFO_free(struct Library * _base, OSSL_CRMF_PKIPUBLICATIONINFO * ___a);

void LIBSTUB_OSSL_CRMF_PKIPUBLICATIONINFO_free(void)
{
  OSSL_CRMF_PKIPUBLICATIONINFO * ___a = (OSSL_CRMF_PKIPUBLICATIONINFO *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_PKIPUBLICATIONINFO_free(_base, ___a);
}

OSSL_CRMF_PKIPUBLICATIONINFO * LIB_OSSL_CRMF_PKIPUBLICATIONINFO_new(struct Library * _base);

OSSL_CRMF_PKIPUBLICATIONINFO * LIBSTUB_OSSL_CRMF_PKIPUBLICATIONINFO_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_PKIPUBLICATIONINFO_new(_base);
}

const ASN1_ITEM * LIB_OSSL_CRMF_PKIPUBLICATIONINFO_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CRMF_PKIPUBLICATIONINFO_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_PKIPUBLICATIONINFO_it(_base);
}

OSSL_CRMF_SINGLEPUBINFO * LIB_d2i_OSSL_CRMF_SINGLEPUBINFO(struct Library * _base, OSSL_CRMF_SINGLEPUBINFO ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CRMF_SINGLEPUBINFO * LIBSTUB_d2i_OSSL_CRMF_SINGLEPUBINFO(void)
{
  OSSL_CRMF_SINGLEPUBINFO ** ___a = (OSSL_CRMF_SINGLEPUBINFO **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CRMF_SINGLEPUBINFO(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CRMF_SINGLEPUBINFO(struct Library * _base, const OSSL_CRMF_SINGLEPUBINFO * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CRMF_SINGLEPUBINFO(void)
{
  const OSSL_CRMF_SINGLEPUBINFO * ___a = (const OSSL_CRMF_SINGLEPUBINFO *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CRMF_SINGLEPUBINFO(_base, ___a, ___out);
}

void LIB_OSSL_CRMF_SINGLEPUBINFO_free(struct Library * _base, OSSL_CRMF_SINGLEPUBINFO * ___a);

void LIBSTUB_OSSL_CRMF_SINGLEPUBINFO_free(void)
{
  OSSL_CRMF_SINGLEPUBINFO * ___a = (OSSL_CRMF_SINGLEPUBINFO *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_SINGLEPUBINFO_free(_base, ___a);
}

OSSL_CRMF_SINGLEPUBINFO * LIB_OSSL_CRMF_SINGLEPUBINFO_new(struct Library * _base);

OSSL_CRMF_SINGLEPUBINFO * LIBSTUB_OSSL_CRMF_SINGLEPUBINFO_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_SINGLEPUBINFO_new(_base);
}

const ASN1_ITEM * LIB_OSSL_CRMF_SINGLEPUBINFO_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CRMF_SINGLEPUBINFO_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_SINGLEPUBINFO_it(_base);
}

OSSL_CRMF_CERTTEMPLATE * LIB_d2i_OSSL_CRMF_CERTTEMPLATE(struct Library * _base, OSSL_CRMF_CERTTEMPLATE ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CRMF_CERTTEMPLATE * LIBSTUB_d2i_OSSL_CRMF_CERTTEMPLATE(void)
{
  OSSL_CRMF_CERTTEMPLATE ** ___a = (OSSL_CRMF_CERTTEMPLATE **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CRMF_CERTTEMPLATE(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CRMF_CERTTEMPLATE(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CRMF_CERTTEMPLATE(void)
{
  const OSSL_CRMF_CERTTEMPLATE * ___a = (const OSSL_CRMF_CERTTEMPLATE *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CRMF_CERTTEMPLATE(_base, ___a, ___out);
}

void LIB_OSSL_CRMF_CERTTEMPLATE_free(struct Library * _base, OSSL_CRMF_CERTTEMPLATE * ___a);

void LIBSTUB_OSSL_CRMF_CERTTEMPLATE_free(void)
{
  OSSL_CRMF_CERTTEMPLATE * ___a = (OSSL_CRMF_CERTTEMPLATE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTTEMPLATE_free(_base, ___a);
}

OSSL_CRMF_CERTTEMPLATE * LIB_OSSL_CRMF_CERTTEMPLATE_new(struct Library * _base);

OSSL_CRMF_CERTTEMPLATE * LIBSTUB_OSSL_CRMF_CERTTEMPLATE_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTTEMPLATE_new(_base);
}

const ASN1_ITEM * LIB_OSSL_CRMF_CERTTEMPLATE_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CRMF_CERTTEMPLATE_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTTEMPLATE_it(_base);
}

OSSL_CRMF_MSGS * LIB_d2i_OSSL_CRMF_MSGS(struct Library * _base, OSSL_CRMF_MSGS ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CRMF_MSGS * LIBSTUB_d2i_OSSL_CRMF_MSGS(void)
{
  OSSL_CRMF_MSGS ** ___a = (OSSL_CRMF_MSGS **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CRMF_MSGS(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CRMF_MSGS(struct Library * _base, const OSSL_CRMF_MSGS * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CRMF_MSGS(void)
{
  const OSSL_CRMF_MSGS * ___a = (const OSSL_CRMF_MSGS *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CRMF_MSGS(_base, ___a, ___out);
}

void LIB_OSSL_CRMF_MSGS_free(struct Library * _base, OSSL_CRMF_MSGS * ___a);

void LIBSTUB_OSSL_CRMF_MSGS_free(void)
{
  OSSL_CRMF_MSGS * ___a = (OSSL_CRMF_MSGS *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSGS_free(_base, ___a);
}

OSSL_CRMF_MSGS * LIB_OSSL_CRMF_MSGS_new(struct Library * _base);

OSSL_CRMF_MSGS * LIBSTUB_OSSL_CRMF_MSGS_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSGS_new(_base);
}

const ASN1_ITEM * LIB_OSSL_CRMF_MSGS_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CRMF_MSGS_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSGS_it(_base);
}

OSSL_CRMF_PBMPARAMETER * LIB_OSSL_CRMF_pbmp_new(struct Library * _base, OSSL_LIB_CTX * ___libctx, size_t ___slen, int ___owfnid, size_t ___itercnt, int ___macnid);

OSSL_CRMF_PBMPARAMETER * LIBSTUB_OSSL_CRMF_pbmp_new(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  size_t ___slen = (size_t)REG_D0;
  int ___owfnid = (int)REG_D1;
  size_t ___itercnt = (size_t)REG_D2;
  int ___macnid = (int)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_pbmp_new(_base, ___libctx, ___slen, ___owfnid, ___itercnt, ___macnid);
}

int LIB_OSSL_CRMF_pbm_new(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq, const OSSL_CRMF_PBMPARAMETER * ___pbmp, const unsigned char * ___msg, size_t ___msglen, const unsigned char * ___sec, size_t ___seclen, unsigned char ** ___mac, size_t * ___maclen);

int LIBSTUB_OSSL_CRMF_pbm_new(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  const OSSL_CRMF_PBMPARAMETER * ___pbmp = (const OSSL_CRMF_PBMPARAMETER *)REG_A2;
  const unsigned char * ___msg = (const unsigned char *)REG_A3;
  size_t ___msglen = (size_t)REG_D0;
  const unsigned char * ___sec = (const unsigned char *)REG_D1;
  size_t ___seclen = (size_t)REG_D2;
  unsigned char ** ___mac = (unsigned char **)REG_D3;
  size_t * ___maclen = (size_t *)REG_D4;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_pbm_new(_base, ___libctx, ___propq, ___pbmp, ___msg, ___msglen, ___sec, ___seclen, ___mac, ___maclen);
}

ASN1_UTF8STRING * LIB_OSSL_CRMF_MSG_get0_regCtrl_regToken(struct Library * _base, const OSSL_CRMF_MSG * ___msg);

ASN1_UTF8STRING * LIBSTUB_OSSL_CRMF_MSG_get0_regCtrl_regToken(void)
{
  const OSSL_CRMF_MSG * ___msg = (const OSSL_CRMF_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_get0_regCtrl_regToken(_base, ___msg);
}

int LIB_OSSL_CRMF_MSG_set1_regCtrl_regToken(struct Library * _base, OSSL_CRMF_MSG * ___msg, const ASN1_UTF8STRING * ___tok);

int LIBSTUB_OSSL_CRMF_MSG_set1_regCtrl_regToken(void)
{
  OSSL_CRMF_MSG * ___msg = (OSSL_CRMF_MSG *)REG_A0;
  const ASN1_UTF8STRING * ___tok = (const ASN1_UTF8STRING *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_set1_regCtrl_regToken(_base, ___msg, ___tok);
}

ASN1_UTF8STRING * LIB_OSSL_CRMF_MSG_get0_regCtrl_authenticator(struct Library * _base, const OSSL_CRMF_MSG * ___msg);

ASN1_UTF8STRING * LIBSTUB_OSSL_CRMF_MSG_get0_regCtrl_authenticator(void)
{
  const OSSL_CRMF_MSG * ___msg = (const OSSL_CRMF_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_get0_regCtrl_authenticator(_base, ___msg);
}

int LIB_OSSL_CRMF_MSG_set1_regCtrl_authenticator(struct Library * _base, OSSL_CRMF_MSG * ___msg, const ASN1_UTF8STRING * ___auth);

int LIBSTUB_OSSL_CRMF_MSG_set1_regCtrl_authenticator(void)
{
  OSSL_CRMF_MSG * ___msg = (OSSL_CRMF_MSG *)REG_A0;
  const ASN1_UTF8STRING * ___auth = (const ASN1_UTF8STRING *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_set1_regCtrl_authenticator(_base, ___msg, ___auth);
}

int LIB_OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo(struct Library * _base, OSSL_CRMF_PKIPUBLICATIONINFO * ___pi, OSSL_CRMF_SINGLEPUBINFO * ___spi);

int LIBSTUB_OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo(void)
{
  OSSL_CRMF_PKIPUBLICATIONINFO * ___pi = (OSSL_CRMF_PKIPUBLICATIONINFO *)REG_A0;
  OSSL_CRMF_SINGLEPUBINFO * ___spi = (OSSL_CRMF_SINGLEPUBINFO *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo(_base, ___pi, ___spi);
}

int LIB_OSSL_CRMF_MSG_set0_SinglePubInfo(struct Library * _base, OSSL_CRMF_SINGLEPUBINFO * ___spi, int ___method, GENERAL_NAME * ___nm);

int LIBSTUB_OSSL_CRMF_MSG_set0_SinglePubInfo(void)
{
  OSSL_CRMF_SINGLEPUBINFO * ___spi = (OSSL_CRMF_SINGLEPUBINFO *)REG_A0;
  int ___method = (int)REG_D0;
  GENERAL_NAME * ___nm = (GENERAL_NAME *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_set0_SinglePubInfo(_base, ___spi, ___method, ___nm);
}

OSSL_CRMF_PKIPUBLICATIONINFO * LIB_OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo(struct Library * _base, const OSSL_CRMF_MSG * ___msg);

OSSL_CRMF_PKIPUBLICATIONINFO * LIBSTUB_OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo(void)
{
  const OSSL_CRMF_MSG * ___msg = (const OSSL_CRMF_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo(_base, ___msg);
}

int LIB_OSSL_CRMF_MSG_set_PKIPublicationInfo_action(struct Library * _base, OSSL_CRMF_PKIPUBLICATIONINFO * ___pi, int ___action);

int LIBSTUB_OSSL_CRMF_MSG_set_PKIPublicationInfo_action(void)
{
  OSSL_CRMF_PKIPUBLICATIONINFO * ___pi = (OSSL_CRMF_PKIPUBLICATIONINFO *)REG_A0;
  int ___action = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_set_PKIPublicationInfo_action(_base, ___pi, ___action);
}

int LIB_OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo(struct Library * _base, OSSL_CRMF_MSG * ___msg, const OSSL_CRMF_PKIPUBLICATIONINFO * ___pi);

int LIBSTUB_OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo(void)
{
  OSSL_CRMF_MSG * ___msg = (OSSL_CRMF_MSG *)REG_A0;
  const OSSL_CRMF_PKIPUBLICATIONINFO * ___pi = (const OSSL_CRMF_PKIPUBLICATIONINFO *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo(_base, ___msg, ___pi);
}

X509_PUBKEY * LIB_OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey(struct Library * _base, const OSSL_CRMF_MSG * ___msg);

X509_PUBKEY * LIBSTUB_OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey(void)
{
  const OSSL_CRMF_MSG * ___msg = (const OSSL_CRMF_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey(_base, ___msg);
}

int LIB_OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey(struct Library * _base, OSSL_CRMF_MSG * ___msg, const X509_PUBKEY * ___pubkey);

int LIBSTUB_OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey(void)
{
  OSSL_CRMF_MSG * ___msg = (OSSL_CRMF_MSG *)REG_A0;
  const X509_PUBKEY * ___pubkey = (const X509_PUBKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey(_base, ___msg, ___pubkey);
}

OSSL_CRMF_CERTID * LIB_OSSL_CRMF_MSG_get0_regCtrl_oldCertID(struct Library * _base, const OSSL_CRMF_MSG * ___msg);

OSSL_CRMF_CERTID * LIBSTUB_OSSL_CRMF_MSG_get0_regCtrl_oldCertID(void)
{
  const OSSL_CRMF_MSG * ___msg = (const OSSL_CRMF_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_get0_regCtrl_oldCertID(_base, ___msg);
}

int LIB_OSSL_CRMF_MSG_set1_regCtrl_oldCertID(struct Library * _base, OSSL_CRMF_MSG * ___msg, const OSSL_CRMF_CERTID * ___cid);

int LIBSTUB_OSSL_CRMF_MSG_set1_regCtrl_oldCertID(void)
{
  OSSL_CRMF_MSG * ___msg = (OSSL_CRMF_MSG *)REG_A0;
  const OSSL_CRMF_CERTID * ___cid = (const OSSL_CRMF_CERTID *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_set1_regCtrl_oldCertID(_base, ___msg, ___cid);
}

OSSL_CRMF_CERTID * LIB_OSSL_CRMF_CERTID_gen(struct Library * _base, const X509_NAME * ___issuer, const ASN1_INTEGER * ___serial);

OSSL_CRMF_CERTID * LIBSTUB_OSSL_CRMF_CERTID_gen(void)
{
  const X509_NAME * ___issuer = (const X509_NAME *)REG_A0;
  const ASN1_INTEGER * ___serial = (const ASN1_INTEGER *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTID_gen(_base, ___issuer, ___serial);
}

ASN1_UTF8STRING * LIB_OSSL_CRMF_MSG_get0_regInfo_utf8Pairs(struct Library * _base, const OSSL_CRMF_MSG * ___msg);

ASN1_UTF8STRING * LIBSTUB_OSSL_CRMF_MSG_get0_regInfo_utf8Pairs(void)
{
  const OSSL_CRMF_MSG * ___msg = (const OSSL_CRMF_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_get0_regInfo_utf8Pairs(_base, ___msg);
}

int LIB_OSSL_CRMF_MSG_set1_regInfo_utf8Pairs(struct Library * _base, OSSL_CRMF_MSG * ___msg, const ASN1_UTF8STRING * ___utf8pairs);

int LIBSTUB_OSSL_CRMF_MSG_set1_regInfo_utf8Pairs(void)
{
  OSSL_CRMF_MSG * ___msg = (OSSL_CRMF_MSG *)REG_A0;
  const ASN1_UTF8STRING * ___utf8pairs = (const ASN1_UTF8STRING *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_set1_regInfo_utf8Pairs(_base, ___msg, ___utf8pairs);
}

OSSL_CRMF_CERTREQUEST * LIB_OSSL_CRMF_MSG_get0_regInfo_certReq(struct Library * _base, const OSSL_CRMF_MSG * ___msg);

OSSL_CRMF_CERTREQUEST * LIBSTUB_OSSL_CRMF_MSG_get0_regInfo_certReq(void)
{
  const OSSL_CRMF_MSG * ___msg = (const OSSL_CRMF_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_get0_regInfo_certReq(_base, ___msg);
}

int LIB_OSSL_CRMF_MSG_set1_regInfo_certReq(struct Library * _base, OSSL_CRMF_MSG * ___msg, const OSSL_CRMF_CERTREQUEST * ___cr);

int LIBSTUB_OSSL_CRMF_MSG_set1_regInfo_certReq(void)
{
  OSSL_CRMF_MSG * ___msg = (OSSL_CRMF_MSG *)REG_A0;
  const OSSL_CRMF_CERTREQUEST * ___cr = (const OSSL_CRMF_CERTREQUEST *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_set1_regInfo_certReq(_base, ___msg, ___cr);
}

int LIB_OSSL_CRMF_MSG_set0_validity(struct Library * _base, OSSL_CRMF_MSG * ___crm, ASN1_TIME * ___notBefore, ASN1_TIME * ___notAfter);

int LIBSTUB_OSSL_CRMF_MSG_set0_validity(void)
{
  OSSL_CRMF_MSG * ___crm = (OSSL_CRMF_MSG *)REG_A0;
  ASN1_TIME * ___notBefore = (ASN1_TIME *)REG_A1;
  ASN1_TIME * ___notAfter = (ASN1_TIME *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_set0_validity(_base, ___crm, ___notBefore, ___notAfter);
}

int LIB_OSSL_CRMF_MSG_set_certReqId(struct Library * _base, OSSL_CRMF_MSG * ___crm, int ___rid);

int LIBSTUB_OSSL_CRMF_MSG_set_certReqId(void)
{
  OSSL_CRMF_MSG * ___crm = (OSSL_CRMF_MSG *)REG_A0;
  int ___rid = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_set_certReqId(_base, ___crm, ___rid);
}

int LIB_OSSL_CRMF_MSG_get_certReqId(struct Library * _base, const OSSL_CRMF_MSG * ___crm);

int LIBSTUB_OSSL_CRMF_MSG_get_certReqId(void)
{
  const OSSL_CRMF_MSG * ___crm = (const OSSL_CRMF_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_get_certReqId(_base, ___crm);
}

int LIB_OSSL_CRMF_MSG_set0_extensions(struct Library * _base, OSSL_CRMF_MSG * ___crm, X509_EXTENSIONS * ___exts);

int LIBSTUB_OSSL_CRMF_MSG_set0_extensions(void)
{
  OSSL_CRMF_MSG * ___crm = (OSSL_CRMF_MSG *)REG_A0;
  X509_EXTENSIONS * ___exts = (X509_EXTENSIONS *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_set0_extensions(_base, ___crm, ___exts);
}

int LIB_OSSL_CRMF_MSG_push0_extension(struct Library * _base, OSSL_CRMF_MSG * ___crm, X509_EXTENSION * ___ext);

int LIBSTUB_OSSL_CRMF_MSG_push0_extension(void)
{
  OSSL_CRMF_MSG * ___crm = (OSSL_CRMF_MSG *)REG_A0;
  X509_EXTENSION * ___ext = (X509_EXTENSION *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_push0_extension(_base, ___crm, ___ext);
}

int LIB_OSSL_CRMF_MSG_create_popo(struct Library * _base, int ___meth, OSSL_CRMF_MSG * ___crm, EVP_PKEY * ___pkey, const EVP_MD * ___digest, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_OSSL_CRMF_MSG_create_popo(void)
{
  int ___meth = (int)REG_D0;
  OSSL_CRMF_MSG * ___crm = (OSSL_CRMF_MSG *)REG_A0;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A1;
  const EVP_MD * ___digest = (const EVP_MD *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_create_popo(_base, ___meth, ___crm, ___pkey, ___digest, ___libctx, ___propq);
}

int LIB_OSSL_CRMF_MSGS_verify_popo(struct Library * _base, const OSSL_CRMF_MSGS * ___reqs, int ___rid, int ___acceptRAVerified, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_OSSL_CRMF_MSGS_verify_popo(void)
{
  const OSSL_CRMF_MSGS * ___reqs = (const OSSL_CRMF_MSGS *)REG_A0;
  int ___rid = (int)REG_D0;
  int ___acceptRAVerified = (int)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSGS_verify_popo(_base, ___reqs, ___rid, ___acceptRAVerified, ___libctx, ___propq);
}

OSSL_CRMF_CERTTEMPLATE * LIB_OSSL_CRMF_MSG_get0_tmpl(struct Library * _base, const OSSL_CRMF_MSG * ___crm);

OSSL_CRMF_CERTTEMPLATE * LIBSTUB_OSSL_CRMF_MSG_get0_tmpl(void)
{
  const OSSL_CRMF_MSG * ___crm = (const OSSL_CRMF_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_get0_tmpl(_base, ___crm);
}

const ASN1_INTEGER * LIB_OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * ___tmpl);

const ASN1_INTEGER * LIBSTUB_OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(void)
{
  const OSSL_CRMF_CERTTEMPLATE * ___tmpl = (const OSSL_CRMF_CERTTEMPLATE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(_base, ___tmpl);
}

const X509_NAME * LIB_OSSL_CRMF_CERTTEMPLATE_get0_subject(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * ___tmpl);

const X509_NAME * LIBSTUB_OSSL_CRMF_CERTTEMPLATE_get0_subject(void)
{
  const OSSL_CRMF_CERTTEMPLATE * ___tmpl = (const OSSL_CRMF_CERTTEMPLATE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTTEMPLATE_get0_subject(_base, ___tmpl);
}

const X509_NAME * LIB_OSSL_CRMF_CERTTEMPLATE_get0_issuer(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * ___tmpl);

const X509_NAME * LIBSTUB_OSSL_CRMF_CERTTEMPLATE_get0_issuer(void)
{
  const OSSL_CRMF_CERTTEMPLATE * ___tmpl = (const OSSL_CRMF_CERTTEMPLATE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTTEMPLATE_get0_issuer(_base, ___tmpl);
}

X509_EXTENSIONS * LIB_OSSL_CRMF_CERTTEMPLATE_get0_extensions(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * ___tmpl);

X509_EXTENSIONS * LIBSTUB_OSSL_CRMF_CERTTEMPLATE_get0_extensions(void)
{
  const OSSL_CRMF_CERTTEMPLATE * ___tmpl = (const OSSL_CRMF_CERTTEMPLATE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTTEMPLATE_get0_extensions(_base, ___tmpl);
}

int LIB_OSSL_CRMF_CERTTEMPLATE_fill(struct Library * _base, OSSL_CRMF_CERTTEMPLATE * ___tmpl, EVP_PKEY * ___pubkey, const X509_NAME * ___subject, const X509_NAME * ___issuer, const ASN1_INTEGER * ___serial);

int LIBSTUB_OSSL_CRMF_CERTTEMPLATE_fill(void)
{
  OSSL_CRMF_CERTTEMPLATE * ___tmpl = (OSSL_CRMF_CERTTEMPLATE *)REG_A0;
  EVP_PKEY * ___pubkey = (EVP_PKEY *)REG_A1;
  const X509_NAME * ___subject = (const X509_NAME *)REG_A2;
  const X509_NAME * ___issuer = (const X509_NAME *)REG_A3;
  const ASN1_INTEGER * ___serial = (const ASN1_INTEGER *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTTEMPLATE_fill(_base, ___tmpl, ___pubkey, ___subject, ___issuer, ___serial);
}

X509 * LIB_OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert(struct Library * _base, const OSSL_CRMF_ENCRYPTEDVALUE * ___ecert, OSSL_LIB_CTX * ___libctx, const char * ___propq, EVP_PKEY * ___pkey);

X509 * LIBSTUB_OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert(void)
{
  const OSSL_CRMF_ENCRYPTEDVALUE * ___ecert = (const OSSL_CRMF_ENCRYPTEDVALUE *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert(_base, ___ecert, ___libctx, ___propq, ___pkey);
}

OSSL_PARAM * LIB_OSSL_PARAM_locate(struct Library * _base, OSSL_PARAM * ___p, const char * ___key);

OSSL_PARAM * LIBSTUB_OSSL_PARAM_locate(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_locate(_base, ___p, ___key);
}

void LIB_OSSL_PARAM_construct_int_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, int * ___buf);

void LIBSTUB_OSSL_PARAM_construct_int_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  int * ___buf = (int *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_int_amiga(_base, ___result, ___key, ___buf);
}

void LIB_OSSL_PARAM_construct_uint_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, unsigned int * ___buf);

void LIBSTUB_OSSL_PARAM_construct_uint_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  unsigned int * ___buf = (unsigned int *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_uint_amiga(_base, ___result, ___key, ___buf);
}

void LIB_OSSL_PARAM_construct_long_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, long int * ___buf);

void LIBSTUB_OSSL_PARAM_construct_long_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  long int * ___buf = (long int *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_long_amiga(_base, ___result, ___key, ___buf);
}

void LIB_OSSL_PARAM_construct_ulong_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, unsigned long int * ___buf);

void LIBSTUB_OSSL_PARAM_construct_ulong_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  unsigned long int * ___buf = (unsigned long int *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_ulong_amiga(_base, ___result, ___key, ___buf);
}

void LIB_OSSL_PARAM_construct_int32_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, int32_t * ___buf);

void LIBSTUB_OSSL_PARAM_construct_int32_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A1;
  const char * ___key = (const char *)REG_A2;
  int32_t * ___buf = (int32_t *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_int32_amiga(_base, ___result, ___key, ___buf);
}

void LIB_OSSL_PARAM_construct_uint32_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, uint32_t * ___buf);

void LIBSTUB_OSSL_PARAM_construct_uint32_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A1;
  const char * ___key = (const char *)REG_A2;
  uint32_t * ___buf = (uint32_t *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_uint32_amiga(_base, ___result, ___key, ___buf);
}

void LIB_OSSL_PARAM_construct_int64_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, int64_t * ___buf);

void LIBSTUB_OSSL_PARAM_construct_int64_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  int64_t * ___buf = (int64_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_int64_amiga(_base, ___result, ___key, ___buf);
}

void LIB_OSSL_PARAM_construct_uint64_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, uint64_t * ___buf);

void LIBSTUB_OSSL_PARAM_construct_uint64_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  uint64_t * ___buf = (uint64_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_uint64_amiga(_base, ___result, ___key, ___buf);
}

void LIB_OSSL_PARAM_construct_size_t_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, size_t * ___buf);

void LIBSTUB_OSSL_PARAM_construct_size_t_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  size_t * ___buf = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_size_t_amiga(_base, ___result, ___key, ___buf);
}

void LIB_OSSL_PARAM_construct_BN_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, unsigned char * ___buf, size_t ___bsize);

void LIBSTUB_OSSL_PARAM_construct_BN_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  unsigned char * ___buf = (unsigned char *)REG_A2;
  size_t ___bsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_BN_amiga(_base, ___result, ___key, ___buf, ___bsize);
}

void LIB_OSSL_PARAM_construct_double_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, double * ___buf);

void LIBSTUB_OSSL_PARAM_construct_double_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  double * ___buf = (double *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_double_amiga(_base, ___result, ___key, ___buf);
}

void LIB_OSSL_PARAM_construct_utf8_string_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, char * ___buf, size_t ___bsize);

void LIBSTUB_OSSL_PARAM_construct_utf8_string_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  char * ___buf = (char *)REG_A2;
  size_t ___bsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_utf8_string_amiga(_base, ___result, ___key, ___buf, ___bsize);
}

void LIB_OSSL_PARAM_construct_utf8_ptr_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, char ** ___buf, size_t ___bsize);

void LIBSTUB_OSSL_PARAM_construct_utf8_ptr_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  char ** ___buf = (char **)REG_A2;
  size_t ___bsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_utf8_ptr_amiga(_base, ___result, ___key, ___buf, ___bsize);
}

void LIB_OSSL_PARAM_construct_octet_string_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, void * ___buf, size_t ___bsize);

void LIBSTUB_OSSL_PARAM_construct_octet_string_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  void * ___buf = (void *)REG_A2;
  size_t ___bsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_octet_string_amiga(_base, ___result, ___key, ___buf, ___bsize);
}

void LIB_OSSL_PARAM_construct_octet_ptr_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, void ** ___buf, size_t ___bsize);

void LIBSTUB_OSSL_PARAM_construct_octet_ptr_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  void ** ___buf = (void **)REG_A2;
  size_t ___bsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_octet_ptr_amiga(_base, ___result, ___key, ___buf, ___bsize);
}

int LIB_OSSL_PARAM_get_int(struct Library * _base, const OSSL_PARAM * ___p, int * ___val);

int LIBSTUB_OSSL_PARAM_get_int(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  int * ___val = (int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_int(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_uint(struct Library * _base, const OSSL_PARAM * ___p, unsigned int * ___val);

int LIBSTUB_OSSL_PARAM_get_uint(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  unsigned int * ___val = (unsigned int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_uint(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_long(struct Library * _base, const OSSL_PARAM * ___p, long int * ___val);

int LIBSTUB_OSSL_PARAM_get_long(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  long int * ___val = (long int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_long(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_ulong(struct Library * _base, const OSSL_PARAM * ___p, unsigned long int * ___val);

int LIBSTUB_OSSL_PARAM_get_ulong(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  unsigned long int * ___val = (unsigned long int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_ulong(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_int32(struct Library * _base, const OSSL_PARAM * ___p, int32_t * ___val);

int LIBSTUB_OSSL_PARAM_get_int32(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  int32_t * ___val = (int32_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_int32(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_uint32(struct Library * _base, const OSSL_PARAM * ___p, uint32_t * ___val);

int LIBSTUB_OSSL_PARAM_get_uint32(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  uint32_t * ___val = (uint32_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_uint32(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_int64(struct Library * _base, const OSSL_PARAM * ___p, int64_t * ___val);

int LIBSTUB_OSSL_PARAM_get_int64(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  int64_t * ___val = (int64_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_int64(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_uint64(struct Library * _base, const OSSL_PARAM * ___p, uint64_t * ___val);

int LIBSTUB_OSSL_PARAM_get_uint64(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  uint64_t * ___val = (uint64_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_uint64(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_size_t(struct Library * _base, const OSSL_PARAM * ___p, size_t * ___val);

int LIBSTUB_OSSL_PARAM_get_size_t(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  size_t * ___val = (size_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_size_t(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_int(struct Library * _base, OSSL_PARAM * ___p, int ___val);

int LIBSTUB_OSSL_PARAM_set_int(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  int ___val = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_int(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_uint(struct Library * _base, OSSL_PARAM * ___p, unsigned int ___val);

int LIBSTUB_OSSL_PARAM_set_uint(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  unsigned int ___val = (unsigned int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_uint(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_long(struct Library * _base, OSSL_PARAM * ___p, long int ___val);

int LIBSTUB_OSSL_PARAM_set_long(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  long int ___val = (long int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_long(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_ulong(struct Library * _base, OSSL_PARAM * ___p, unsigned long int ___val);

int LIBSTUB_OSSL_PARAM_set_ulong(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  unsigned long int ___val = (unsigned long int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_ulong(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_int32(struct Library * _base, OSSL_PARAM * ___p, int32_t ___val);

int LIBSTUB_OSSL_PARAM_set_int32(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  int32_t ___val = (int32_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_int32(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_uint32(struct Library * _base, OSSL_PARAM * ___p, uint32_t ___val);

int LIBSTUB_OSSL_PARAM_set_uint32(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  uint32_t ___val = (uint32_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_uint32(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_int64(struct Library * _base, OSSL_PARAM * ___p, int64_t ___val);

int LIBSTUB_OSSL_PARAM_set_int64(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  int64_t ___val = (int64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_int64(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_uint64(struct Library * _base, OSSL_PARAM * ___p, uint64_t ___val);

int LIBSTUB_OSSL_PARAM_set_uint64(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  uint64_t ___val = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_uint64(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_size_t(struct Library * _base, OSSL_PARAM * ___p, size_t ___val);

int LIBSTUB_OSSL_PARAM_set_size_t(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  size_t ___val = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_size_t(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_double(struct Library * _base, const OSSL_PARAM * ___p, double * ___val);

int LIBSTUB_OSSL_PARAM_get_double(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  double * ___val = (double *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_double(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_double(struct Library * _base, OSSL_PARAM * ___p, double ___val);

int LIBSTUB_OSSL_PARAM_set_double(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  double ___val = (double)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_double(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_BN(struct Library * _base, const OSSL_PARAM * ___p, BIGNUM ** ___val);

int LIBSTUB_OSSL_PARAM_get_BN(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  BIGNUM ** ___val = (BIGNUM **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_BN(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_BN(struct Library * _base, OSSL_PARAM * ___p, const BIGNUM * ___val);

int LIBSTUB_OSSL_PARAM_set_BN(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  const BIGNUM * ___val = (const BIGNUM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_BN(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_utf8_string(struct Library * _base, const OSSL_PARAM * ___p, char ** ___val, size_t ___max_len);

int LIBSTUB_OSSL_PARAM_get_utf8_string(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  char ** ___val = (char **)REG_A1;
  size_t ___max_len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_utf8_string(_base, ___p, ___val, ___max_len);
}

int LIB_OSSL_PARAM_set_utf8_string(struct Library * _base, OSSL_PARAM * ___p, const char * ___val);

int LIBSTUB_OSSL_PARAM_set_utf8_string(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  const char * ___val = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_utf8_string(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_octet_string(struct Library * _base, const OSSL_PARAM * ___p, void ** ___val, size_t ___max_len, size_t * ___used_len);

int LIBSTUB_OSSL_PARAM_get_octet_string(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  void ** ___val = (void **)REG_A1;
  size_t ___max_len = (size_t)REG_D0;
  size_t * ___used_len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_octet_string(_base, ___p, ___val, ___max_len, ___used_len);
}

int LIB_OSSL_PARAM_set_octet_string(struct Library * _base, OSSL_PARAM * ___p, const void * ___val, size_t ___len);

int LIBSTUB_OSSL_PARAM_set_octet_string(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  const void * ___val = (const void *)REG_A1;
  size_t ___len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_octet_string(_base, ___p, ___val, ___len);
}

int LIB_OSSL_PARAM_get_utf8_ptr(struct Library * _base, const OSSL_PARAM * ___p, const char ** ___val);

int LIBSTUB_OSSL_PARAM_get_utf8_ptr(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  const char ** ___val = (const char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_utf8_ptr(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_utf8_ptr(struct Library * _base, OSSL_PARAM * ___p, const char * ___val);

int LIBSTUB_OSSL_PARAM_set_utf8_ptr(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  const char * ___val = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_utf8_ptr(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_octet_ptr(struct Library * _base, const OSSL_PARAM * ___p, const void ** ___val, size_t * ___used_len);

int LIBSTUB_OSSL_PARAM_get_octet_ptr(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  const void ** ___val = (const void **)REG_A1;
  size_t * ___used_len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_octet_ptr(_base, ___p, ___val, ___used_len);
}

int LIB_OSSL_PARAM_set_octet_ptr(struct Library * _base, OSSL_PARAM * ___p, const void * ___val, size_t ___used_len);

int LIBSTUB_OSSL_PARAM_set_octet_ptr(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  const void * ___val = (const void *)REG_A1;
  size_t ___used_len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_octet_ptr(_base, ___p, ___val, ___used_len);
}

void LIB_X509_set0_distinguishing_id(struct Library * _base, X509 * ___x, ASN1_OCTET_STRING * ___d_id);

void LIBSTUB_X509_set0_distinguishing_id(void)
{
  X509 * ___x = (X509 *)REG_A0;
  ASN1_OCTET_STRING * ___d_id = (ASN1_OCTET_STRING *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_set0_distinguishing_id(_base, ___x, ___d_id);
}

ASN1_OCTET_STRING * LIB_X509_get0_distinguishing_id(struct Library * _base, X509 * ___x);

ASN1_OCTET_STRING * LIBSTUB_X509_get0_distinguishing_id(void)
{
  X509 * ___x = (X509 *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_get0_distinguishing_id(_base, ___x);
}

int LIB_EVP_MD_up_ref(struct Library * _base, EVP_MD * ___md);

int LIBSTUB_EVP_MD_up_ref(void)
{
  EVP_MD * ___md = (EVP_MD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_up_ref(_base, ___md);
}

EVP_MD * LIB_EVP_MD_fetch(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___algorithm, const char * ___properties);

EVP_MD * LIBSTUB_EVP_MD_fetch(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___algorithm = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_fetch(_base, ___ctx, ___algorithm, ___properties);
}

int LIB_EVP_set_default_properties(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_EVP_set_default_properties(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_set_default_properties(_base, ___libctx, ___propq);
}

void LIB_OSSL_PARAM_construct_end_amiga(struct Library * _base, OSSL_PARAM * ___result);

void LIBSTUB_OSSL_PARAM_construct_end_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_end_amiga(_base, ___result);
}

int LIB_EC_GROUP_check_named_curve(struct Library * _base, const EC_GROUP * ___group, int ___nist_only, BN_CTX * ___ctx);

int LIBSTUB_EC_GROUP_check_named_curve(void)
{
  const EC_GROUP * ___group = (const EC_GROUP *)REG_A0;
  int ___nist_only = (int)REG_D0;
  BN_CTX * ___ctx = (BN_CTX *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EC_GROUP_check_named_curve(_base, ___group, ___nist_only, ___ctx);
}

int LIB_EVP_CIPHER_up_ref(struct Library * _base, EVP_CIPHER * ___cipher);

int LIBSTUB_EVP_CIPHER_up_ref(void)
{
  EVP_CIPHER * ___cipher = (EVP_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_up_ref(_base, ___cipher);
}

EVP_CIPHER * LIB_EVP_CIPHER_fetch(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___algorithm, const char * ___properties);

EVP_CIPHER * LIBSTUB_EVP_CIPHER_fetch(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___algorithm = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_fetch(_base, ___ctx, ___algorithm, ___properties);
}

int LIB_EVP_CIPHER_get_mode(struct Library * _base, const EVP_CIPHER * ___cipher);

int LIBSTUB_EVP_CIPHER_get_mode(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_get_mode(_base, ___cipher);
}

const char * LIB_OPENSSL_info(struct Library * _base, int ___type);

const char * LIBSTUB_OPENSSL_info(void)
{
  int ___type = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OPENSSL_info(_base, ___type);
}

EVP_KDF_CTX * LIB_EVP_KDF_CTX_new(struct Library * _base, EVP_KDF * ___kdf);

EVP_KDF_CTX * LIBSTUB_EVP_KDF_CTX_new(void)
{
  EVP_KDF * ___kdf = (EVP_KDF *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_CTX_new(_base, ___kdf);
}

const EVP_KDF * LIB_EVP_KDF_CTX_kdf(struct Library * _base, EVP_KDF_CTX * ___ctx);

const EVP_KDF * LIBSTUB_EVP_KDF_CTX_kdf(void)
{
  EVP_KDF_CTX * ___ctx = (EVP_KDF_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_CTX_kdf(_base, ___ctx);
}

int LIB_i2d_KeyParams(struct Library * _base, const EVP_PKEY * ___a, unsigned char ** ___pp);

int LIBSTUB_i2d_KeyParams(void)
{
  const EVP_PKEY * ___a = (const EVP_PKEY *)REG_A0;
  unsigned char ** ___pp = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_KeyParams(_base, ___a, ___pp);
}

EVP_PKEY * LIB_d2i_KeyParams(struct Library * _base, int ___type, EVP_PKEY ** ___a, const unsigned char ** ___pp, long ___length);

EVP_PKEY * LIBSTUB_d2i_KeyParams(void)
{
  int ___type = (int)REG_D0;
  EVP_PKEY ** ___a = (EVP_PKEY **)REG_A0;
  const unsigned char ** ___pp = (const unsigned char **)REG_A1;
  long ___length = (long)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_KeyParams(_base, ___type, ___a, ___pp, ___length);
}

int LIB_i2d_KeyParams_bio(struct Library * _base, BIO * ___bp, const EVP_PKEY * ___pkey);

int LIBSTUB_i2d_KeyParams_bio(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_KeyParams_bio(_base, ___bp, ___pkey);
}

EVP_PKEY * LIB_d2i_KeyParams_bio(struct Library * _base, int ___type, EVP_PKEY ** ___a, BIO * ___in);

EVP_PKEY * LIBSTUB_d2i_KeyParams_bio(void)
{
  int ___type = (int)REG_D0;
  EVP_PKEY ** ___a = (EVP_PKEY **)REG_A0;
  BIO * ___in = (BIO *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_KeyParams_bio(_base, ___type, ___a, ___in);
}

const ASN1_ITEM * LIB_OSSL_CMP_PKISTATUS_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CMP_PKISTATUS_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_PKISTATUS_it(_base);
}

OSSL_CMP_PKIHEADER * LIB_d2i_OSSL_CMP_PKIHEADER(struct Library * _base, OSSL_CMP_PKIHEADER ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CMP_PKIHEADER * LIBSTUB_d2i_OSSL_CMP_PKIHEADER(void)
{
  OSSL_CMP_PKIHEADER ** ___a = (OSSL_CMP_PKIHEADER **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CMP_PKIHEADER(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CMP_PKIHEADER(struct Library * _base, const OSSL_CMP_PKIHEADER * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CMP_PKIHEADER(void)
{
  const OSSL_CMP_PKIHEADER * ___a = (const OSSL_CMP_PKIHEADER *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CMP_PKIHEADER(_base, ___a, ___out);
}

void LIB_OSSL_CMP_PKIHEADER_free(struct Library * _base, OSSL_CMP_PKIHEADER * ___a);

void LIBSTUB_OSSL_CMP_PKIHEADER_free(void)
{
  OSSL_CMP_PKIHEADER * ___a = (OSSL_CMP_PKIHEADER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_PKIHEADER_free(_base, ___a);
}

OSSL_CMP_PKIHEADER * LIB_OSSL_CMP_PKIHEADER_new(struct Library * _base);

OSSL_CMP_PKIHEADER * LIBSTUB_OSSL_CMP_PKIHEADER_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_PKIHEADER_new(_base);
}

const ASN1_ITEM * LIB_OSSL_CMP_PKIHEADER_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CMP_PKIHEADER_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_PKIHEADER_it(_base);
}

OSSL_CMP_MSG * LIB_d2i_OSSL_CMP_MSG(struct Library * _base, OSSL_CMP_MSG ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CMP_MSG * LIBSTUB_d2i_OSSL_CMP_MSG(void)
{
  OSSL_CMP_MSG ** ___a = (OSSL_CMP_MSG **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CMP_MSG(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CMP_MSG(struct Library * _base, const OSSL_CMP_MSG * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CMP_MSG(void)
{
  const OSSL_CMP_MSG * ___a = (const OSSL_CMP_MSG *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CMP_MSG(_base, ___a, ___out);
}

const ASN1_ITEM * LIB_OSSL_CMP_MSG_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CMP_MSG_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_MSG_it(_base);
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_create(struct Library * _base, ASN1_OBJECT * ___type, ASN1_TYPE * ___value);

OSSL_CMP_ITAV * LIBSTUB_OSSL_CMP_ITAV_create(void)
{
  ASN1_OBJECT * ___type = (ASN1_OBJECT *)REG_A0;
  ASN1_TYPE * ___value = (ASN1_TYPE *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_create(_base, ___type, ___value);
}

void LIB_OSSL_CMP_ITAV_set0(struct Library * _base, OSSL_CMP_ITAV * ___itav, ASN1_OBJECT * ___type, ASN1_TYPE * ___value);

void LIBSTUB_OSSL_CMP_ITAV_set0(void)
{
  OSSL_CMP_ITAV * ___itav = (OSSL_CMP_ITAV *)REG_A0;
  ASN1_OBJECT * ___type = (ASN1_OBJECT *)REG_A1;
  ASN1_TYPE * ___value = (ASN1_TYPE *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_set0(_base, ___itav, ___type, ___value);
}

ASN1_OBJECT * LIB_OSSL_CMP_ITAV_get0_type(struct Library * _base, const OSSL_CMP_ITAV * ___itav);

ASN1_OBJECT * LIBSTUB_OSSL_CMP_ITAV_get0_type(void)
{
  const OSSL_CMP_ITAV * ___itav = (const OSSL_CMP_ITAV *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_get0_type(_base, ___itav);
}

ASN1_TYPE * LIB_OSSL_CMP_ITAV_get0_value(struct Library * _base, const OSSL_CMP_ITAV * ___itav);

ASN1_TYPE * LIBSTUB_OSSL_CMP_ITAV_get0_value(void)
{
  const OSSL_CMP_ITAV * ___itav = (const OSSL_CMP_ITAV *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_get0_value(_base, ___itav);
}

int LIB_OSSL_CMP_ITAV_push0_stack_item(struct Library * _base, STACK_OF(OSSL_CMP_ITAV) ** ___itav_sk_p, OSSL_CMP_ITAV * ___itav);

int LIBSTUB_OSSL_CMP_ITAV_push0_stack_item(void)
{
  STACK_OF(OSSL_CMP_ITAV) ** ___itav_sk_p = (STACK_OF(OSSL_CMP_ITAV) **)REG_A0;
  OSSL_CMP_ITAV * ___itav = (OSSL_CMP_ITAV *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_push0_stack_item(_base, ___itav_sk_p, ___itav);
}

void LIB_OSSL_CMP_ITAV_free(struct Library * _base, OSSL_CMP_ITAV * ___itav);

void LIBSTUB_OSSL_CMP_ITAV_free(void)
{
  OSSL_CMP_ITAV * ___itav = (OSSL_CMP_ITAV *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_free(_base, ___itav);
}

void LIB_OSSL_CMP_MSG_free(struct Library * _base, OSSL_CMP_MSG * ___msg);

void LIBSTUB_OSSL_CMP_MSG_free(void)
{
  OSSL_CMP_MSG * ___msg = (OSSL_CMP_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_MSG_free(_base, ___msg);
}

int LIB_EVP_MD_CTX_set_params(struct Library * _base, EVP_MD_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_MD_CTX_set_params(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_CTX_set_params(_base, ___ctx, ___params);
}

int LIB_EVP_MD_CTX_get_params(struct Library * _base, EVP_MD_CTX * ___ctx, OSSL_PARAM * ___params);

int LIBSTUB_EVP_MD_CTX_get_params(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_CTX_get_params(_base, ___ctx, ___params);
}

BN_CTX * LIB_BN_CTX_new_ex(struct Library * _base, OSSL_LIB_CTX * ___ctx);

BN_CTX * LIBSTUB_BN_CTX_new_ex(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_CTX_new_ex(_base, ___ctx);
}

BN_CTX * LIB_BN_CTX_secure_new_ex(struct Library * _base, OSSL_LIB_CTX * ___ctx);

BN_CTX * LIBSTUB_BN_CTX_secure_new_ex(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_CTX_secure_new_ex(_base, ___ctx);
}

void LIB_OPENSSL_thread_stop_ex(struct Library * _base, OSSL_LIB_CTX * ___ctx);

void LIBSTUB_OPENSSL_thread_stop_ex(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OPENSSL_thread_stop_ex(_base, ___ctx);
}

const OSSL_PARAM * LIB_OSSL_PARAM_locate_const(struct Library * _base, const OSSL_PARAM * ___p, const char * ___key);

const OSSL_PARAM * LIBSTUB_OSSL_PARAM_locate_const(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_locate_const(_base, ___p, ___key);
}

void LIB_X509_REQ_set0_distinguishing_id(struct Library * _base, X509_REQ * ___x, ASN1_OCTET_STRING * ___d_id);

void LIBSTUB_X509_REQ_set0_distinguishing_id(void)
{
  X509_REQ * ___x = (X509_REQ *)REG_A0;
  ASN1_OCTET_STRING * ___d_id = (ASN1_OCTET_STRING *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_REQ_set0_distinguishing_id(_base, ___x, ___d_id);
}

ASN1_OCTET_STRING * LIB_X509_REQ_get0_distinguishing_id(struct Library * _base, X509_REQ * ___x);

ASN1_OCTET_STRING * LIBSTUB_X509_REQ_get0_distinguishing_id(void)
{
  X509_REQ * ___x = (X509_REQ *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_REQ_get0_distinguishing_id(_base, ___x);
}

int LIB_BN_rand_ex(struct Library * _base, BIGNUM * ___rnd, int ___bits, int ___top, int ___bottom, unsigned int ___strength, BN_CTX * ___ctx);

int LIBSTUB_BN_rand_ex(void)
{
  BIGNUM * ___rnd = (BIGNUM *)REG_A0;
  int ___bits = (int)REG_D0;
  int ___top = (int)REG_D1;
  int ___bottom = (int)REG_D2;
  unsigned int ___strength = (unsigned int)REG_D3;
  BN_CTX * ___ctx = (BN_CTX *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_rand_ex(_base, ___rnd, ___bits, ___top, ___bottom, ___strength, ___ctx);
}

int LIB_BN_priv_rand_ex(struct Library * _base, BIGNUM * ___rnd, int ___bits, int ___top, int ___bottom, unsigned int ___strength, BN_CTX * ___ctx);

int LIBSTUB_BN_priv_rand_ex(void)
{
  BIGNUM * ___rnd = (BIGNUM *)REG_A0;
  int ___bits = (int)REG_D0;
  int ___top = (int)REG_D1;
  int ___bottom = (int)REG_D2;
  unsigned int ___strength = (unsigned int)REG_D3;
  BN_CTX * ___ctx = (BN_CTX *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_priv_rand_ex(_base, ___rnd, ___bits, ___top, ___bottom, ___strength, ___ctx);
}

int LIB_BN_rand_range_ex(struct Library * _base, BIGNUM * ___r, const BIGNUM * ___range, unsigned int ___strength, BN_CTX * ___ctx);

int LIBSTUB_BN_rand_range_ex(void)
{
  BIGNUM * ___r = (BIGNUM *)REG_A0;
  const BIGNUM * ___range = (const BIGNUM *)REG_A1;
  unsigned int ___strength = (unsigned int)REG_D0;
  BN_CTX * ___ctx = (BN_CTX *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_rand_range_ex(_base, ___r, ___range, ___strength, ___ctx);
}

int LIB_BN_priv_rand_range_ex(struct Library * _base, BIGNUM * ___r, const BIGNUM * ___range, unsigned int ___strength, BN_CTX * ___ctx);

int LIBSTUB_BN_priv_rand_range_ex(void)
{
  BIGNUM * ___r = (BIGNUM *)REG_A0;
  const BIGNUM * ___range = (const BIGNUM *)REG_A1;
  unsigned int ___strength = (unsigned int)REG_D0;
  BN_CTX * ___ctx = (BN_CTX *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_priv_rand_range_ex(_base, ___r, ___range, ___strength, ___ctx);
}

int LIB_BN_generate_prime_ex2(struct Library * _base, BIGNUM * ___ret, int ___bits, int ___safe, const BIGNUM * ___add, const BIGNUM * ___rem, BN_GENCB * ___cb, BN_CTX * ___ctx);

int LIBSTUB_BN_generate_prime_ex2(void)
{
  BIGNUM * ___ret = (BIGNUM *)REG_A0;
  int ___bits = (int)REG_D0;
  int ___safe = (int)REG_D1;
  const BIGNUM * ___add = (const BIGNUM *)REG_A1;
  const BIGNUM * ___rem = (const BIGNUM *)REG_A2;
  BN_GENCB * ___cb = (BN_GENCB *)REG_A3;
  BN_CTX * ___ctx = (BN_CTX *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_generate_prime_ex2(_base, ___ret, ___bits, ___safe, ___add, ___rem, ___cb, ___ctx);
}

void LIB_EVP_KEYEXCH_free(struct Library * _base, EVP_KEYEXCH * ___exchange);

void LIBSTUB_EVP_KEYEXCH_free(void)
{
  EVP_KEYEXCH * ___exchange = (EVP_KEYEXCH *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYEXCH_free(_base, ___exchange);
}

int LIB_EVP_KEYEXCH_up_ref(struct Library * _base, EVP_KEYEXCH * ___exchange);

int LIBSTUB_EVP_KEYEXCH_up_ref(void)
{
  EVP_KEYEXCH * ___exchange = (EVP_KEYEXCH *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYEXCH_up_ref(_base, ___exchange);
}

EVP_KEYEXCH * LIB_EVP_KEYEXCH_fetch(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___algorithm, const char * ___properties);

EVP_KEYEXCH * LIBSTUB_EVP_KEYEXCH_fetch(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___algorithm = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYEXCH_fetch(_base, ___ctx, ___algorithm, ___properties);
}

int LIB_EVP_PKEY_CTX_set_dh_pad(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___pad);

int LIBSTUB_EVP_PKEY_CTX_set_dh_pad(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___pad = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dh_pad(_base, ___ctx, ___pad);
}

int LIB_EVP_PKEY_CTX_set_params(struct Library * _base, EVP_PKEY_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_CTX_set_params(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_params(_base, ___ctx, ___params);
}

EVP_KEYMGMT * LIB_EVP_KEYMGMT_fetch(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___algorithm, const char * ___properties);

EVP_KEYMGMT * LIBSTUB_EVP_KEYMGMT_fetch(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___algorithm = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_fetch(_base, ___ctx, ___algorithm, ___properties);
}

int LIB_EVP_KEYMGMT_up_ref(struct Library * _base, EVP_KEYMGMT * ___keymgmt);

int LIBSTUB_EVP_KEYMGMT_up_ref(void)
{
  EVP_KEYMGMT * ___keymgmt = (EVP_KEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_up_ref(_base, ___keymgmt);
}

void LIB_EVP_KEYMGMT_free(struct Library * _base, EVP_KEYMGMT * ___keymgmt);

void LIBSTUB_EVP_KEYMGMT_free(void)
{
  EVP_KEYMGMT * ___keymgmt = (EVP_KEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_free(_base, ___keymgmt);
}

const OSSL_PROVIDER * LIB_EVP_KEYMGMT_get0_provider(struct Library * _base, const EVP_KEYMGMT * ___keymgmt);

const OSSL_PROVIDER * LIBSTUB_EVP_KEYMGMT_get0_provider(void)
{
  const EVP_KEYMGMT * ___keymgmt = (const EVP_KEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_get0_provider(_base, ___keymgmt);
}

X509_PUBKEY * LIB_X509_PUBKEY_dup(struct Library * _base, const X509_PUBKEY * ___a);

X509_PUBKEY * LIBSTUB_X509_PUBKEY_dup(void)
{
  const X509_PUBKEY * ___a = (const X509_PUBKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_PUBKEY_dup(_base, ___a);
}

const char * LIB_EVP_MD_get0_name(struct Library * _base, const EVP_MD * ___md);

const char * LIBSTUB_EVP_MD_get0_name(void)
{
  const EVP_MD * ___md = (const EVP_MD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_get0_name(_base, ___md);
}

const char * LIB_EVP_CIPHER_get0_name(struct Library * _base, const EVP_CIPHER * ___cipher);

const char * LIBSTUB_EVP_CIPHER_get0_name(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_get0_name(_base, ___cipher);
}

const OSSL_PROVIDER * LIB_EVP_MD_get0_provider(struct Library * _base, const EVP_MD * ___md);

const OSSL_PROVIDER * LIBSTUB_EVP_MD_get0_provider(void)
{
  const EVP_MD * ___md = (const EVP_MD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_get0_provider(_base, ___md);
}

const OSSL_PROVIDER * LIB_EVP_CIPHER_get0_provider(struct Library * _base, const EVP_CIPHER * ___cipher);

const OSSL_PROVIDER * LIBSTUB_EVP_CIPHER_get0_provider(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_get0_provider(_base, ___cipher);
}

const char * LIB_OSSL_PROVIDER_get0_name(struct Library * _base, const OSSL_PROVIDER * ___prov);

const char * LIBSTUB_OSSL_PROVIDER_get0_name(void)
{
  const OSSL_PROVIDER * ___prov = (const OSSL_PROVIDER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_get0_name(_base, ___prov);
}

void LIB_EVP_CIPHER_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(EVP_CIPHER *cipher,void *arg), void * ___arg);

void LIBSTUB_EVP_CIPHER_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(EVP_CIPHER *cipher,void *arg) = (void (*)(EVP_CIPHER *cipher,void *arg))REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_do_all_provided(_base, ___libctx, ___fn, ___arg);
}

void LIB_EVP_MD_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(EVP_MD *md,void *arg), void * ___arg);

void LIBSTUB_EVP_MD_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(EVP_MD *md,void *arg) = (void (*)(EVP_MD *md,void *arg))REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_do_all_provided(_base, ___libctx, ___fn, ___arg);
}

OSSL_PROVIDER * LIB_EVP_KEYEXCH_get0_provider(struct Library * _base, const EVP_KEYEXCH * ___exchange);

OSSL_PROVIDER * LIBSTUB_EVP_KEYEXCH_get0_provider(void)
{
  const EVP_KEYEXCH * ___exchange = (const EVP_KEYEXCH *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYEXCH_get0_provider(_base, ___exchange);
}

int LIB_OSSL_PROVIDER_available(struct Library * _base, OSSL_LIB_CTX * ___a, const char * ___name);

int LIBSTUB_OSSL_PROVIDER_available(void)
{
  OSSL_LIB_CTX * ___a = (OSSL_LIB_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_available(_base, ___a, ___name);
}

void LIB_ERR_new(struct Library * _base);

void LIBSTUB_ERR_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_new(_base);
}

void LIB_ERR_set_debug(struct Library * _base, const char * ___file, int ___line, const char * ___func);

void LIBSTUB_ERR_set_debug(void)
{
  const char * ___file = (const char *)REG_A0;
  int ___line = (int)REG_D0;
  const char * ___func = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_set_debug(_base, ___file, ___line, ___func);
}

void LIB_ERR_vset_error(struct Library * _base, int ___lib, int ___reason, const char * ___fmt, long * ___args);

void LIBSTUB_ERR_vset_error(void)
{
  int ___lib = (int)REG_D0;
  int ___reason = (int)REG_D1;
  const char * ___fmt = (const char *)REG_A0;
  long * ___args = (long *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_vset_error(_base, ___lib, ___reason, ___fmt, ___args);
}

int LIB_X509_self_signed(struct Library * _base, X509 * ___cert, int ___verify_signature);

int LIBSTUB_X509_self_signed(void)
{
  X509 * ___cert = (X509 *)REG_A0;
  int ___verify_signature = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_self_signed(_base, ___cert, ___verify_signature);
}

int LIB_OPENSSL_hexstr2buf_ex(struct Library * _base, unsigned char * ___buf, size_t ___buf_n, size_t * ___buflen, const char * ___str, const char ___sep);

int LIBSTUB_OPENSSL_hexstr2buf_ex(void)
{
  unsigned char * ___buf = (unsigned char *)REG_A0;
  size_t ___buf_n = (size_t)REG_D0;
  size_t * ___buflen = (size_t *)REG_A1;
  const char * ___str = (const char *)REG_A2;
  const char ___sep = (const char)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OPENSSL_hexstr2buf_ex(_base, ___buf, ___buf_n, ___buflen, ___str, ___sep);
}

int LIB_OPENSSL_buf2hexstr_ex(struct Library * _base, char * ___str, size_t ___str_n, size_t * ___strlength, const unsigned char * ___buf, size_t ___buflen, const char ___sep);

int LIBSTUB_OPENSSL_buf2hexstr_ex(void)
{
  char * ___str = (char *)REG_A0;
  size_t ___str_n = (size_t)REG_D0;
  size_t * ___strlength = (size_t *)REG_A1;
  const unsigned char * ___buf = (const unsigned char *)REG_A2;
  size_t ___buflen = (size_t)REG_D1;
  const char ___sep = (const char)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OPENSSL_buf2hexstr_ex(_base, ___str, ___str_n, ___strlength, ___buf, ___buflen, ___sep);
}

int LIB_OSSL_PARAM_allocate_from_text(struct Library * _base, OSSL_PARAM * ___to, const OSSL_PARAM * ___paramdefs, const char * ___key, const char * ___value, size_t ___value_n, int * ___found);

int LIBSTUB_OSSL_PARAM_allocate_from_text(void)
{
  OSSL_PARAM * ___to = (OSSL_PARAM *)REG_A0;
  const OSSL_PARAM * ___paramdefs = (const OSSL_PARAM *)REG_A1;
  const char * ___key = (const char *)REG_A2;
  const char * ___value = (const char *)REG_A3;
  size_t ___value_n = (size_t)REG_D0;
  int * ___found = (int *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_allocate_from_text(_base, ___to, ___paramdefs, ___key, ___value, ___value_n, ___found);
}

const OSSL_PARAM * LIB_EVP_MD_gettable_params(struct Library * _base, const EVP_MD * ___digest);

const OSSL_PARAM * LIBSTUB_EVP_MD_gettable_params(void)
{
  const EVP_MD * ___digest = (const EVP_MD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_gettable_params(_base, ___digest);
}

const OSSL_PARAM * LIB_EVP_MD_CTX_settable_params(struct Library * _base, EVP_MD_CTX * ___ctx);

const OSSL_PARAM * LIBSTUB_EVP_MD_CTX_settable_params(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_CTX_settable_params(_base, ___ctx);
}

const OSSL_PARAM * LIB_EVP_MD_CTX_gettable_params(struct Library * _base, EVP_MD_CTX * ___ctx);

const OSSL_PARAM * LIBSTUB_EVP_MD_CTX_gettable_params(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_CTX_gettable_params(_base, ___ctx);
}

int LIB_EVP_CIPHER_get_params(struct Library * _base, EVP_CIPHER * ___cipher, OSSL_PARAM * ___params);

int LIBSTUB_EVP_CIPHER_get_params(void)
{
  EVP_CIPHER * ___cipher = (EVP_CIPHER *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_get_params(_base, ___cipher, ___params);
}

int LIB_EVP_CIPHER_CTX_set_params(struct Library * _base, EVP_CIPHER_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_CIPHER_CTX_set_params(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_set_params(_base, ___ctx, ___params);
}

int LIB_EVP_CIPHER_CTX_get_params(struct Library * _base, EVP_CIPHER_CTX * ___ctx, OSSL_PARAM * ___params);

int LIBSTUB_EVP_CIPHER_CTX_get_params(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_get_params(_base, ___ctx, ___params);
}

const OSSL_PARAM * LIB_EVP_CIPHER_gettable_params(struct Library * _base, const EVP_CIPHER * ___cipher);

const OSSL_PARAM * LIBSTUB_EVP_CIPHER_gettable_params(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_gettable_params(_base, ___cipher);
}

const OSSL_PARAM * LIB_EVP_CIPHER_settable_ctx_params(struct Library * _base, const EVP_CIPHER * ___cipher);

const OSSL_PARAM * LIBSTUB_EVP_CIPHER_settable_ctx_params(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_settable_ctx_params(_base, ___cipher);
}

const OSSL_PARAM * LIB_EVP_CIPHER_gettable_ctx_params(struct Library * _base, const EVP_CIPHER * ___cipher);

const OSSL_PARAM * LIBSTUB_EVP_CIPHER_gettable_ctx_params(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_gettable_ctx_params(_base, ___cipher);
}

int LIB_EVP_MD_get_params(struct Library * _base, const EVP_MD * ___digest, OSSL_PARAM * ___params);

int LIBSTUB_EVP_MD_get_params(void)
{
  const EVP_MD * ___digest = (const EVP_MD *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_get_params(_base, ___digest, ___params);
}

EVP_MAC * LIB_EVP_MAC_fetch(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___algorithm, const char * ___properties);

EVP_MAC * LIBSTUB_EVP_MAC_fetch(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___algorithm = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_fetch(_base, ___libctx, ___algorithm, ___properties);
}

const OSSL_PARAM * LIB_EVP_MAC_settable_ctx_params(struct Library * _base, const EVP_MAC * ___mac);

const OSSL_PARAM * LIBSTUB_EVP_MAC_settable_ctx_params(void)
{
  const EVP_MAC * ___mac = (const EVP_MAC *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_settable_ctx_params(_base, ___mac);
}

int LIB_EVP_MAC_CTX_set_params(struct Library * _base, EVP_MAC_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_MAC_CTX_set_params(void)
{
  EVP_MAC_CTX * ___ctx = (EVP_MAC_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_CTX_set_params(_base, ___ctx, ___params);
}

int LIB_EVP_MAC_CTX_get_params(struct Library * _base, EVP_MAC_CTX * ___ctx, OSSL_PARAM * ___params);

int LIBSTUB_EVP_MAC_CTX_get_params(void)
{
  EVP_MAC_CTX * ___ctx = (EVP_MAC_CTX *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_CTX_get_params(_base, ___ctx, ___params);
}

const OSSL_PARAM * LIB_EVP_MAC_gettable_ctx_params(struct Library * _base, const EVP_MAC * ___mac);

const OSSL_PARAM * LIBSTUB_EVP_MAC_gettable_ctx_params(void)
{
  const EVP_MAC * ___mac = (const EVP_MAC *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_gettable_ctx_params(_base, ___mac);
}

void LIB_EVP_MAC_free(struct Library * _base, EVP_MAC * ___mac);

void LIBSTUB_EVP_MAC_free(void)
{
  EVP_MAC * ___mac = (EVP_MAC *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_free(_base, ___mac);
}

int LIB_EVP_MAC_up_ref(struct Library * _base, EVP_MAC * ___mac);

int LIBSTUB_EVP_MAC_up_ref(void)
{
  EVP_MAC * ___mac = (EVP_MAC *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_up_ref(_base, ___mac);
}

int LIB_EVP_MAC_get_params(struct Library * _base, EVP_MAC * ___mac, OSSL_PARAM * ___params);

int LIBSTUB_EVP_MAC_get_params(void)
{
  EVP_MAC * ___mac = (EVP_MAC *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_get_params(_base, ___mac, ___params);
}

const OSSL_PARAM * LIB_EVP_MAC_gettable_params(struct Library * _base, const EVP_MAC * ___mac);

const OSSL_PARAM * LIBSTUB_EVP_MAC_gettable_params(void)
{
  const EVP_MAC * ___mac = (const EVP_MAC *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_gettable_params(_base, ___mac);
}

const OSSL_PROVIDER * LIB_EVP_MAC_get0_provider(struct Library * _base, const EVP_MAC * ___mac);

const OSSL_PROVIDER * LIBSTUB_EVP_MAC_get0_provider(void)
{
  const EVP_MAC * ___mac = (const EVP_MAC *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_get0_provider(_base, ___mac);
}

void LIB_EVP_MAC_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(EVP_MAC *mac,void *arg), void * ___arg);

void LIBSTUB_EVP_MAC_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(EVP_MAC *mac,void *arg) = (void (*)(EVP_MAC *mac,void *arg))REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_do_all_provided(_base, ___libctx, ___fn, ___arg);
}

const char * LIB_EVP_MAC_get0_name(struct Library * _base, const EVP_MAC * ___mac);

const char * LIBSTUB_EVP_MAC_get0_name(void)
{
  const EVP_MAC * ___mac = (const EVP_MAC *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_get0_name(_base, ___mac);
}

void LIB_EVP_MD_free(struct Library * _base, EVP_MD * ___md);

void LIBSTUB_EVP_MD_free(void)
{
  EVP_MD * ___md = (EVP_MD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_free(_base, ___md);
}

void LIB_EVP_CIPHER_free(struct Library * _base, EVP_CIPHER * ___cipher);

void LIBSTUB_EVP_CIPHER_free(void)
{
  EVP_CIPHER * ___cipher = (EVP_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_free(_base, ___cipher);
}

int LIB_EVP_KDF_up_ref(struct Library * _base, EVP_KDF * ___kdf);

int LIBSTUB_EVP_KDF_up_ref(void)
{
  EVP_KDF * ___kdf = (EVP_KDF *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_up_ref(_base, ___kdf);
}

void LIB_EVP_KDF_free(struct Library * _base, EVP_KDF * ___kdf);

void LIBSTUB_EVP_KDF_free(void)
{
  EVP_KDF * ___kdf = (EVP_KDF *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_free(_base, ___kdf);
}

EVP_KDF * LIB_EVP_KDF_fetch(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___algorithm, const char * ___properties);

EVP_KDF * LIBSTUB_EVP_KDF_fetch(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___algorithm = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_fetch(_base, ___libctx, ___algorithm, ___properties);
}

EVP_KDF_CTX * LIB_EVP_KDF_CTX_dup(struct Library * _base, const EVP_KDF_CTX * ___src);

EVP_KDF_CTX * LIBSTUB_EVP_KDF_CTX_dup(void)
{
  const EVP_KDF_CTX * ___src = (const EVP_KDF_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_CTX_dup(_base, ___src);
}

const OSSL_PROVIDER * LIB_EVP_KDF_get0_provider(struct Library * _base, const EVP_KDF * ___kdf);

const OSSL_PROVIDER * LIBSTUB_EVP_KDF_get0_provider(void)
{
  const EVP_KDF * ___kdf = (const EVP_KDF *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_get0_provider(_base, ___kdf);
}

int LIB_EVP_KDF_get_params(struct Library * _base, EVP_KDF * ___kdf, OSSL_PARAM * ___params);

int LIBSTUB_EVP_KDF_get_params(void)
{
  EVP_KDF * ___kdf = (EVP_KDF *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_get_params(_base, ___kdf, ___params);
}

int LIB_EVP_KDF_CTX_get_params(struct Library * _base, EVP_KDF_CTX * ___ctx, OSSL_PARAM * ___params);

int LIBSTUB_EVP_KDF_CTX_get_params(void)
{
  EVP_KDF_CTX * ___ctx = (EVP_KDF_CTX *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_CTX_get_params(_base, ___ctx, ___params);
}

int LIB_EVP_KDF_CTX_set_params(struct Library * _base, EVP_KDF_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_KDF_CTX_set_params(void)
{
  EVP_KDF_CTX * ___ctx = (EVP_KDF_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_CTX_set_params(_base, ___ctx, ___params);
}

const OSSL_PARAM * LIB_EVP_KDF_gettable_params(struct Library * _base, const EVP_KDF * ___kdf);

const OSSL_PARAM * LIBSTUB_EVP_KDF_gettable_params(void)
{
  const EVP_KDF * ___kdf = (const EVP_KDF *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_gettable_params(_base, ___kdf);
}

const OSSL_PARAM * LIB_EVP_KDF_gettable_ctx_params(struct Library * _base, const EVP_KDF * ___kdf);

const OSSL_PARAM * LIBSTUB_EVP_KDF_gettable_ctx_params(void)
{
  const EVP_KDF * ___kdf = (const EVP_KDF *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_gettable_ctx_params(_base, ___kdf);
}

const OSSL_PARAM * LIB_EVP_KDF_settable_ctx_params(struct Library * _base, const EVP_KDF * ___kdf);

const OSSL_PARAM * LIBSTUB_EVP_KDF_settable_ctx_params(void)
{
  const EVP_KDF * ___kdf = (const EVP_KDF *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_settable_ctx_params(_base, ___kdf);
}

void LIB_EVP_KDF_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(EVP_KDF *kdf,void *arg), void * ___arg);

void LIBSTUB_EVP_KDF_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(EVP_KDF *kdf,void *arg) = (void (*)(EVP_KDF *kdf,void *arg))REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_do_all_provided(_base, ___libctx, ___fn, ___arg);
}

void LIB_EVP_SIGNATURE_free(struct Library * _base, EVP_SIGNATURE * ___signature);

void LIBSTUB_EVP_SIGNATURE_free(void)
{
  EVP_SIGNATURE * ___signature = (EVP_SIGNATURE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SIGNATURE_free(_base, ___signature);
}

int LIB_EVP_SIGNATURE_up_ref(struct Library * _base, EVP_SIGNATURE * ___signature);

int LIBSTUB_EVP_SIGNATURE_up_ref(void)
{
  EVP_SIGNATURE * ___signature = (EVP_SIGNATURE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SIGNATURE_up_ref(_base, ___signature);
}

OSSL_PROVIDER * LIB_EVP_SIGNATURE_get0_provider(struct Library * _base, const EVP_SIGNATURE * ___signature);

OSSL_PROVIDER * LIBSTUB_EVP_SIGNATURE_get0_provider(void)
{
  const EVP_SIGNATURE * ___signature = (const EVP_SIGNATURE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SIGNATURE_get0_provider(_base, ___signature);
}

EVP_SIGNATURE * LIB_EVP_SIGNATURE_fetch(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___algorithm, const char * ___properties);

EVP_SIGNATURE * LIBSTUB_EVP_SIGNATURE_fetch(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___algorithm = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SIGNATURE_fetch(_base, ___ctx, ___algorithm, ___properties);
}

int LIB_EVP_PKEY_CTX_set_signature_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD * ___md);

int LIBSTUB_EVP_PKEY_CTX_set_signature_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD * ___md = (const EVP_MD *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_signature_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_get_signature_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD ** ___md);

int LIBSTUB_EVP_PKEY_CTX_get_signature_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD ** ___md = (const EVP_MD **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_signature_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_get_params(struct Library * _base, EVP_PKEY_CTX * ___ctx, OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_CTX_get_params(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_params(_base, ___ctx, ___params);
}

const OSSL_PARAM * LIB_EVP_PKEY_CTX_gettable_params(struct Library * _base, const EVP_PKEY_CTX * ___ctx);

const OSSL_PARAM * LIBSTUB_EVP_PKEY_CTX_gettable_params(void)
{
  const EVP_PKEY_CTX * ___ctx = (const EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_gettable_params(_base, ___ctx);
}

const OSSL_PARAM * LIB_EVP_PKEY_CTX_settable_params(struct Library * _base, const EVP_PKEY_CTX * ___ctx);

const OSSL_PARAM * LIBSTUB_EVP_PKEY_CTX_settable_params(void)
{
  const EVP_PKEY_CTX * ___ctx = (const EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_settable_params(_base, ___ctx);
}

int LIB_EVP_CIPHER_CTX_get_tag_length(struct Library * _base, const EVP_CIPHER_CTX * ___ctx);

int LIBSTUB_EVP_CIPHER_CTX_get_tag_length(void)
{
  const EVP_CIPHER_CTX * ___ctx = (const EVP_CIPHER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_get_tag_length(_base, ___ctx);
}

unsigned long LIB_ERR_get_error_all(struct Library * _base, const char ** ___file, int * ___line, const char ** ___func, const char ** ___data, int * ___flags);

unsigned long LIBSTUB_ERR_get_error_all(void)
{
  const char ** ___file = (const char **)REG_A0;
  int * ___line = (int *)REG_A1;
  const char ** ___func = (const char **)REG_A2;
  const char ** ___data = (const char **)REG_A3;
  int * ___flags = (int *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_get_error_all(_base, ___file, ___line, ___func, ___data, ___flags);
}

unsigned long LIB_ERR_peek_error_func(struct Library * _base, const char ** ___func);

unsigned long LIBSTUB_ERR_peek_error_func(void)
{
  const char ** ___func = (const char **)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_peek_error_func(_base, ___func);
}

unsigned long LIB_ERR_peek_error_data(struct Library * _base, const char ** ___data, int * ___flags);

unsigned long LIBSTUB_ERR_peek_error_data(void)
{
  const char ** ___data = (const char **)REG_A0;
  int * ___flags = (int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_peek_error_data(_base, ___data, ___flags);
}

unsigned long LIB_ERR_peek_error_all(struct Library * _base, const char ** ___file, int * ___line, const char ** ___func, const char ** ___data, int * ___flags);

unsigned long LIBSTUB_ERR_peek_error_all(void)
{
  const char ** ___file = (const char **)REG_A0;
  int * ___line = (int *)REG_A1;
  const char ** ___func = (const char **)REG_A2;
  const char ** ___data = (const char **)REG_A3;
  int * ___flags = (int *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_peek_error_all(_base, ___file, ___line, ___func, ___data, ___flags);
}

unsigned long LIB_ERR_peek_last_error_func(struct Library * _base, const char ** ___func);

unsigned long LIBSTUB_ERR_peek_last_error_func(void)
{
  const char ** ___func = (const char **)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_peek_last_error_func(_base, ___func);
}

unsigned long LIB_ERR_peek_last_error_data(struct Library * _base, const char ** ___data, int * ___flags);

unsigned long LIBSTUB_ERR_peek_last_error_data(void)
{
  const char ** ___data = (const char **)REG_A0;
  int * ___flags = (int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_peek_last_error_data(_base, ___data, ___flags);
}

unsigned long LIB_ERR_peek_last_error_all(struct Library * _base, const char ** ___file, int * ___line, const char ** ___func, const char ** ___data, int * ___flags);

unsigned long LIBSTUB_ERR_peek_last_error_all(void)
{
  const char ** ___file = (const char **)REG_A0;
  int * ___line = (int *)REG_A1;
  const char ** ___func = (const char **)REG_A2;
  const char ** ___data = (const char **)REG_A3;
  int * ___flags = (int *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_peek_last_error_all(_base, ___file, ___line, ___func, ___data, ___flags);
}

int LIB_EVP_CIPHER_is_a(struct Library * _base, const EVP_CIPHER * ___cipher, const char * ___name);

int LIBSTUB_EVP_CIPHER_is_a(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_is_a(_base, ___cipher, ___name);
}

int LIB_EVP_MAC_is_a(struct Library * _base, const EVP_MAC * ___mac, const char * ___name);

int LIBSTUB_EVP_MAC_is_a(void)
{
  const EVP_MAC * ___mac = (const EVP_MAC *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_is_a(_base, ___mac, ___name);
}

const OSSL_PARAM * LIB_EVP_MD_settable_ctx_params(struct Library * _base, const EVP_MD * ___md);

const OSSL_PARAM * LIBSTUB_EVP_MD_settable_ctx_params(void)
{
  const EVP_MD * ___md = (const EVP_MD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_settable_ctx_params(_base, ___md);
}

const OSSL_PARAM * LIB_EVP_MD_gettable_ctx_params(struct Library * _base, const EVP_MD * ___md);

const OSSL_PARAM * LIBSTUB_EVP_MD_gettable_ctx_params(void)
{
  const EVP_MD * ___md = (const EVP_MD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_gettable_ctx_params(_base, ___md);
}

OSSL_CMP_CTX * LIB_OSSL_CMP_CTX_new(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

OSSL_CMP_CTX * LIBSTUB_OSSL_CMP_CTX_new(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_new(_base, ___libctx, ___propq);
}

void LIB_OSSL_CMP_CTX_free(struct Library * _base, OSSL_CMP_CTX * ___ctx);

void LIBSTUB_OSSL_CMP_CTX_free(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_free(_base, ___ctx);
}

int LIB_OSSL_CMP_CTX_reinit(struct Library * _base, OSSL_CMP_CTX * ___ctx);

int LIBSTUB_OSSL_CMP_CTX_reinit(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_reinit(_base, ___ctx);
}

int LIB_OSSL_CMP_CTX_set_option(struct Library * _base, OSSL_CMP_CTX * ___ctx, int ___opt, int ___val);

int LIBSTUB_OSSL_CMP_CTX_set_option(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  int ___opt = (int)REG_D0;
  int ___val = (int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set_option(_base, ___ctx, ___opt, ___val);
}

int LIB_OSSL_CMP_CTX_get_option(struct Library * _base, const OSSL_CMP_CTX * ___ctx, int ___opt);

int LIBSTUB_OSSL_CMP_CTX_get_option(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  int ___opt = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get_option(_base, ___ctx, ___opt);
}

int LIB_OSSL_CMP_CTX_set_log_cb(struct Library * _base, OSSL_CMP_CTX * ___ctx, OSSL_CMP_log_cb_t ___cb);

int LIBSTUB_OSSL_CMP_CTX_set_log_cb(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  OSSL_CMP_log_cb_t ___cb = (OSSL_CMP_log_cb_t)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set_log_cb(_base, ___ctx, ___cb);
}

void LIB_OSSL_CMP_CTX_print_errors(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

void LIBSTUB_OSSL_CMP_CTX_print_errors(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_print_errors(_base, ___ctx);
}

int LIB_OSSL_CMP_CTX_set1_serverPath(struct Library * _base, OSSL_CMP_CTX * ___ctx, const char * ___path);

int LIBSTUB_OSSL_CMP_CTX_set1_serverPath(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const char * ___path = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_serverPath(_base, ___ctx, ___path);
}

int LIB_OSSL_CMP_CTX_set1_server(struct Library * _base, OSSL_CMP_CTX * ___ctx, const char * ___address);

int LIBSTUB_OSSL_CMP_CTX_set1_server(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const char * ___address = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_server(_base, ___ctx, ___address);
}

int LIB_OSSL_CMP_CTX_set_serverPort(struct Library * _base, OSSL_CMP_CTX * ___ctx, int ___port);

int LIBSTUB_OSSL_CMP_CTX_set_serverPort(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  int ___port = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set_serverPort(_base, ___ctx, ___port);
}

int LIB_OSSL_CMP_CTX_set1_proxy(struct Library * _base, OSSL_CMP_CTX * ___ctx, const char * ___name);

int LIBSTUB_OSSL_CMP_CTX_set1_proxy(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_proxy(_base, ___ctx, ___name);
}

int LIB_OSSL_CMP_CTX_set1_no_proxy(struct Library * _base, OSSL_CMP_CTX * ___ctx, const char * ___names);

int LIBSTUB_OSSL_CMP_CTX_set1_no_proxy(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const char * ___names = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_no_proxy(_base, ___ctx, ___names);
}

int LIB_OSSL_CMP_CTX_set_http_cb(struct Library * _base, OSSL_CMP_CTX * ___ctx, OSSL_HTTP_bio_cb_t ___cb);

int LIBSTUB_OSSL_CMP_CTX_set_http_cb(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  OSSL_HTTP_bio_cb_t ___cb = (OSSL_HTTP_bio_cb_t)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set_http_cb(_base, ___ctx, ___cb);
}

int LIB_OSSL_CMP_CTX_set_http_cb_arg(struct Library * _base, OSSL_CMP_CTX * ___ctx, void * ___arg);

int LIBSTUB_OSSL_CMP_CTX_set_http_cb_arg(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  void * ___arg = (void *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set_http_cb_arg(_base, ___ctx, ___arg);
}

void * LIB_OSSL_CMP_CTX_get_http_cb_arg(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

void * LIBSTUB_OSSL_CMP_CTX_get_http_cb_arg(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get_http_cb_arg(_base, ___ctx);
}

int LIB_OSSL_CMP_CTX_set_transfer_cb(struct Library * _base, OSSL_CMP_CTX * ___ctx, OSSL_CMP_transfer_cb_t ___cb);

int LIBSTUB_OSSL_CMP_CTX_set_transfer_cb(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  OSSL_CMP_transfer_cb_t ___cb = (OSSL_CMP_transfer_cb_t)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set_transfer_cb(_base, ___ctx, ___cb);
}

int LIB_OSSL_CMP_CTX_set_transfer_cb_arg(struct Library * _base, OSSL_CMP_CTX * ___ctx, void * ___arg);

int LIBSTUB_OSSL_CMP_CTX_set_transfer_cb_arg(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  void * ___arg = (void *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set_transfer_cb_arg(_base, ___ctx, ___arg);
}

void * LIB_OSSL_CMP_CTX_get_transfer_cb_arg(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

void * LIBSTUB_OSSL_CMP_CTX_get_transfer_cb_arg(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get_transfer_cb_arg(_base, ___ctx);
}

int LIB_OSSL_CMP_CTX_set1_srvCert(struct Library * _base, OSSL_CMP_CTX * ___ctx, X509 * ___cert);

int LIBSTUB_OSSL_CMP_CTX_set1_srvCert(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  X509 * ___cert = (X509 *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_srvCert(_base, ___ctx, ___cert);
}

int LIB_OSSL_CMP_CTX_set1_expected_sender(struct Library * _base, OSSL_CMP_CTX * ___ctx, const X509_NAME * ___name);

int LIBSTUB_OSSL_CMP_CTX_set1_expected_sender(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const X509_NAME * ___name = (const X509_NAME *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_expected_sender(_base, ___ctx, ___name);
}

int LIB_OSSL_CMP_CTX_set0_trustedStore(struct Library * _base, OSSL_CMP_CTX * ___ctx, X509_STORE * ___store);

int LIBSTUB_OSSL_CMP_CTX_set0_trustedStore(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  X509_STORE * ___store = (X509_STORE *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set0_trustedStore(_base, ___ctx, ___store);
}

X509_STORE * LIB_OSSL_CMP_CTX_get0_trustedStore(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

X509_STORE * LIBSTUB_OSSL_CMP_CTX_get0_trustedStore(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get0_trustedStore(_base, ___ctx);
}

int LIB_OSSL_CMP_CTX_set1_untrusted(struct Library * _base, OSSL_CMP_CTX * ___ctx, STACK_OF(X509) * ___certs);

int LIBSTUB_OSSL_CMP_CTX_set1_untrusted(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  STACK_OF(X509) * ___certs = (STACK_OF(X509) *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_untrusted(_base, ___ctx, ___certs);
}

STACK_OF(X509) * LIB_OSSL_CMP_CTX_get0_untrusted(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

STACK_OF(X509) * LIBSTUB_OSSL_CMP_CTX_get0_untrusted(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get0_untrusted(_base, ___ctx);
}

int LIB_OSSL_CMP_CTX_set1_cert(struct Library * _base, OSSL_CMP_CTX * ___ctx, X509 * ___cert);

int LIBSTUB_OSSL_CMP_CTX_set1_cert(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  X509 * ___cert = (X509 *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_cert(_base, ___ctx, ___cert);
}

int LIB_OSSL_CMP_CTX_set1_pkey(struct Library * _base, OSSL_CMP_CTX * ___ctx, EVP_PKEY * ___pkey);

int LIBSTUB_OSSL_CMP_CTX_set1_pkey(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_pkey(_base, ___ctx, ___pkey);
}

int LIB_OSSL_CMP_CTX_build_cert_chain(struct Library * _base, OSSL_CMP_CTX * ___ctx, X509_STORE * ___own_trusted, STACK_OF(X509) * ___candidates);

int LIBSTUB_OSSL_CMP_CTX_build_cert_chain(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  X509_STORE * ___own_trusted = (X509_STORE *)REG_A1;
  STACK_OF(X509) * ___candidates = (STACK_OF(X509) *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_build_cert_chain(_base, ___ctx, ___own_trusted, ___candidates);
}

int LIB_OSSL_CMP_CTX_set1_referenceValue(struct Library * _base, OSSL_CMP_CTX * ___ctx, const unsigned char * ___ref, int ___len);

int LIBSTUB_OSSL_CMP_CTX_set1_referenceValue(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const unsigned char * ___ref = (const unsigned char *)REG_A1;
  int ___len = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_referenceValue(_base, ___ctx, ___ref, ___len);
}

int LIB_OSSL_CMP_CTX_set1_secretValue(struct Library * _base, OSSL_CMP_CTX * ___ctx, const unsigned char * ___sec, const int ___len);

int LIBSTUB_OSSL_CMP_CTX_set1_secretValue(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const unsigned char * ___sec = (const unsigned char *)REG_A1;
  const int ___len = (const int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_secretValue(_base, ___ctx, ___sec, ___len);
}

int LIB_OSSL_CMP_CTX_set1_recipient(struct Library * _base, OSSL_CMP_CTX * ___ctx, const X509_NAME * ___name);

int LIBSTUB_OSSL_CMP_CTX_set1_recipient(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const X509_NAME * ___name = (const X509_NAME *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_recipient(_base, ___ctx, ___name);
}

int LIB_OSSL_CMP_CTX_push0_geninfo_ITAV(struct Library * _base, OSSL_CMP_CTX * ___ctx, OSSL_CMP_ITAV * ___itav);

int LIBSTUB_OSSL_CMP_CTX_push0_geninfo_ITAV(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  OSSL_CMP_ITAV * ___itav = (OSSL_CMP_ITAV *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_push0_geninfo_ITAV(_base, ___ctx, ___itav);
}

int LIB_OSSL_CMP_CTX_set1_extraCertsOut(struct Library * _base, OSSL_CMP_CTX * ___ctx, STACK_OF(X509) * ___extraCertsOut);

int LIBSTUB_OSSL_CMP_CTX_set1_extraCertsOut(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  STACK_OF(X509) * ___extraCertsOut = (STACK_OF(X509) *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_extraCertsOut(_base, ___ctx, ___extraCertsOut);
}

int LIB_OSSL_CMP_CTX_set0_newPkey(struct Library * _base, OSSL_CMP_CTX * ___ctx, int ___priv, EVP_PKEY * ___pkey);

int LIBSTUB_OSSL_CMP_CTX_set0_newPkey(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  int ___priv = (int)REG_D0;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set0_newPkey(_base, ___ctx, ___priv, ___pkey);
}

EVP_PKEY * LIB_OSSL_CMP_CTX_get0_newPkey(struct Library * _base, const OSSL_CMP_CTX * ___ctx, int ___priv);

EVP_PKEY * LIBSTUB_OSSL_CMP_CTX_get0_newPkey(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  int ___priv = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get0_newPkey(_base, ___ctx, ___priv);
}

int LIB_OSSL_CMP_CTX_set1_issuer(struct Library * _base, OSSL_CMP_CTX * ___ctx, const X509_NAME * ___name);

int LIBSTUB_OSSL_CMP_CTX_set1_issuer(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const X509_NAME * ___name = (const X509_NAME *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_issuer(_base, ___ctx, ___name);
}

int LIB_OSSL_CMP_CTX_set1_subjectName(struct Library * _base, OSSL_CMP_CTX * ___ctx, const X509_NAME * ___name);

int LIBSTUB_OSSL_CMP_CTX_set1_subjectName(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const X509_NAME * ___name = (const X509_NAME *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_subjectName(_base, ___ctx, ___name);
}

int LIB_OSSL_CMP_CTX_push1_subjectAltName(struct Library * _base, OSSL_CMP_CTX * ___ctx, const GENERAL_NAME * ___name);

int LIBSTUB_OSSL_CMP_CTX_push1_subjectAltName(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const GENERAL_NAME * ___name = (const GENERAL_NAME *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_push1_subjectAltName(_base, ___ctx, ___name);
}

int LIB_OSSL_CMP_CTX_set0_reqExtensions(struct Library * _base, OSSL_CMP_CTX * ___ctx, X509_EXTENSIONS * ___exts);

int LIBSTUB_OSSL_CMP_CTX_set0_reqExtensions(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  X509_EXTENSIONS * ___exts = (X509_EXTENSIONS *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set0_reqExtensions(_base, ___ctx, ___exts);
}

int LIB_OSSL_CMP_CTX_reqExtensions_have_SAN(struct Library * _base, OSSL_CMP_CTX * ___ctx);

int LIBSTUB_OSSL_CMP_CTX_reqExtensions_have_SAN(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_reqExtensions_have_SAN(_base, ___ctx);
}

int LIB_OSSL_CMP_CTX_push0_policy(struct Library * _base, OSSL_CMP_CTX * ___ctx, POLICYINFO * ___pinfo);

int LIBSTUB_OSSL_CMP_CTX_push0_policy(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  POLICYINFO * ___pinfo = (POLICYINFO *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_push0_policy(_base, ___ctx, ___pinfo);
}

int LIB_OSSL_CMP_CTX_set1_oldCert(struct Library * _base, OSSL_CMP_CTX * ___ctx, X509 * ___cert);

int LIBSTUB_OSSL_CMP_CTX_set1_oldCert(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  X509 * ___cert = (X509 *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_oldCert(_base, ___ctx, ___cert);
}

int LIB_OSSL_CMP_CTX_set1_p10CSR(struct Library * _base, OSSL_CMP_CTX * ___ctx, const X509_REQ * ___csr);

int LIBSTUB_OSSL_CMP_CTX_set1_p10CSR(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const X509_REQ * ___csr = (const X509_REQ *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_p10CSR(_base, ___ctx, ___csr);
}

int LIB_OSSL_CMP_CTX_push0_genm_ITAV(struct Library * _base, OSSL_CMP_CTX * ___ctx, OSSL_CMP_ITAV * ___itav);

int LIBSTUB_OSSL_CMP_CTX_push0_genm_ITAV(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  OSSL_CMP_ITAV * ___itav = (OSSL_CMP_ITAV *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_push0_genm_ITAV(_base, ___ctx, ___itav);
}

int LIB_OSSL_CMP_CTX_set_certConf_cb(struct Library * _base, OSSL_CMP_CTX * ___ctx, OSSL_CMP_certConf_cb_t ___cb);

int LIBSTUB_OSSL_CMP_CTX_set_certConf_cb(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  OSSL_CMP_certConf_cb_t ___cb = (OSSL_CMP_certConf_cb_t)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set_certConf_cb(_base, ___ctx, ___cb);
}

int LIB_OSSL_CMP_CTX_set_certConf_cb_arg(struct Library * _base, OSSL_CMP_CTX * ___ctx, void * ___arg);

int LIBSTUB_OSSL_CMP_CTX_set_certConf_cb_arg(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  void * ___arg = (void *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set_certConf_cb_arg(_base, ___ctx, ___arg);
}

void * LIB_OSSL_CMP_CTX_get_certConf_cb_arg(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

void * LIBSTUB_OSSL_CMP_CTX_get_certConf_cb_arg(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get_certConf_cb_arg(_base, ___ctx);
}

int LIB_OSSL_CMP_CTX_get_status(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

int LIBSTUB_OSSL_CMP_CTX_get_status(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get_status(_base, ___ctx);
}

OSSL_CMP_PKIFREETEXT * LIB_OSSL_CMP_CTX_get0_statusString(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

OSSL_CMP_PKIFREETEXT * LIBSTUB_OSSL_CMP_CTX_get0_statusString(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get0_statusString(_base, ___ctx);
}

int LIB_OSSL_CMP_CTX_get_failInfoCode(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

int LIBSTUB_OSSL_CMP_CTX_get_failInfoCode(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get_failInfoCode(_base, ___ctx);
}

X509 * LIB_OSSL_CMP_CTX_get0_newCert(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

X509 * LIBSTUB_OSSL_CMP_CTX_get0_newCert(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get0_newCert(_base, ___ctx);
}

STACK_OF(X509) * LIB_OSSL_CMP_CTX_get1_newChain(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

STACK_OF(X509) * LIBSTUB_OSSL_CMP_CTX_get1_newChain(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get1_newChain(_base, ___ctx);
}

STACK_OF(X509) * LIB_OSSL_CMP_CTX_get1_caPubs(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

STACK_OF(X509) * LIBSTUB_OSSL_CMP_CTX_get1_caPubs(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get1_caPubs(_base, ___ctx);
}

STACK_OF(X509) * LIB_OSSL_CMP_CTX_get1_extraCertsIn(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

STACK_OF(X509) * LIBSTUB_OSSL_CMP_CTX_get1_extraCertsIn(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get1_extraCertsIn(_base, ___ctx);
}

int LIB_OSSL_CMP_CTX_set1_transactionID(struct Library * _base, OSSL_CMP_CTX * ___ctx, const ASN1_OCTET_STRING * ___id);

int LIBSTUB_OSSL_CMP_CTX_set1_transactionID(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const ASN1_OCTET_STRING * ___id = (const ASN1_OCTET_STRING *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_transactionID(_base, ___ctx, ___id);
}

int LIB_OSSL_CMP_CTX_set1_senderNonce(struct Library * _base, OSSL_CMP_CTX * ___ctx, const ASN1_OCTET_STRING * ___nonce);

int LIBSTUB_OSSL_CMP_CTX_set1_senderNonce(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const ASN1_OCTET_STRING * ___nonce = (const ASN1_OCTET_STRING *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_senderNonce(_base, ___ctx, ___nonce);
}

int LIB_OSSL_CMP_log_open(struct Library * _base);

int LIBSTUB_OSSL_CMP_log_open(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_log_open(_base);
}

void LIB_OSSL_CMP_log_close(struct Library * _base);

void LIBSTUB_OSSL_CMP_log_close(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_log_close(_base);
}

int LIB_OSSL_CMP_print_to_bio(struct Library * _base, BIO * ___bio, const char * ___component, const char * ___file, int ___line, OSSL_CMP_severity ___level, const char * ___msg);

int LIBSTUB_OSSL_CMP_print_to_bio(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  const char * ___component = (const char *)REG_A1;
  const char * ___file = (const char *)REG_A2;
  int ___line = (int)REG_D0;
  OSSL_CMP_severity ___level = (OSSL_CMP_severity)REG_D1;
  const char * ___msg = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_print_to_bio(_base, ___bio, ___component, ___file, ___line, ___level, ___msg);
}

void LIB_OSSL_CMP_print_errors_cb(struct Library * _base, OSSL_CMP_log_cb_t ___log_fn);

void LIBSTUB_OSSL_CMP_print_errors_cb(void)
{
  OSSL_CMP_log_cb_t ___log_fn = (OSSL_CMP_log_cb_t)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_print_errors_cb(_base, ___log_fn);
}

const X509_NAME * LIB_OSSL_CRMF_CERTID_get0_issuer(struct Library * _base, const OSSL_CRMF_CERTID * ___cid);

const X509_NAME * LIBSTUB_OSSL_CRMF_CERTID_get0_issuer(void)
{
  const OSSL_CRMF_CERTID * ___cid = (const OSSL_CRMF_CERTID *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTID_get0_issuer(_base, ___cid);
}

const ASN1_INTEGER * LIB_OSSL_CRMF_CERTID_get0_serialNumber(struct Library * _base, const OSSL_CRMF_CERTID * ___cid);

const ASN1_INTEGER * LIBSTUB_OSSL_CRMF_CERTID_get0_serialNumber(void)
{
  const OSSL_CRMF_CERTID * ___cid = (const OSSL_CRMF_CERTID *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTID_get0_serialNumber(_base, ___cid);
}

int LIB_EVP_DigestSignUpdate(struct Library * _base, EVP_MD_CTX * ___ctx, const void * ___data, size_t ___dsize);

int LIBSTUB_EVP_DigestSignUpdate(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  const void * ___data = (const void *)REG_A1;
  size_t ___dsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_DigestSignUpdate(_base, ___ctx, ___data, ___dsize);
}

int LIB_EVP_DigestVerifyUpdate(struct Library * _base, EVP_MD_CTX * ___ctx, const void * ___data, size_t ___dsize);

int LIBSTUB_EVP_DigestVerifyUpdate(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  const void * ___data = (const void *)REG_A1;
  size_t ___dsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_DigestVerifyUpdate(_base, ___ctx, ___data, ___dsize);
}

int LIB_BN_check_prime(struct Library * _base, const BIGNUM * ___p, BN_CTX * ___ctx, BN_GENCB * ___cb);

int LIBSTUB_BN_check_prime(void)
{
  const BIGNUM * ___p = (const BIGNUM *)REG_A0;
  BN_CTX * ___ctx = (BN_CTX *)REG_A1;
  BN_GENCB * ___cb = (BN_GENCB *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_check_prime(_base, ___p, ___ctx, ___cb);
}

int LIB_EVP_KEYMGMT_is_a(struct Library * _base, const EVP_KEYMGMT * ___keymgmt, const char * ___name);

int LIBSTUB_EVP_KEYMGMT_is_a(void)
{
  const EVP_KEYMGMT * ___keymgmt = (const EVP_KEYMGMT *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_is_a(_base, ___keymgmt, ___name);
}

void LIB_EVP_KEYMGMT_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(EVP_KEYMGMT *keymgmt,void *arg), void * ___arg);

void LIBSTUB_EVP_KEYMGMT_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(EVP_KEYMGMT *keymgmt,void *arg) = (void (*)(EVP_KEYMGMT *keymgmt,void *arg))REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_do_all_provided(_base, ___libctx, ___fn, ___arg);
}

int LIB_EVP_KEYEXCH_is_a(struct Library * _base, const EVP_KEYEXCH * ___keyexch, const char * ___name);

int LIBSTUB_EVP_KEYEXCH_is_a(void)
{
  const EVP_KEYEXCH * ___keyexch = (const EVP_KEYEXCH *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYEXCH_is_a(_base, ___keyexch, ___name);
}

void LIB_EVP_KEYEXCH_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(EVP_KEYEXCH *keyexch,void *data), void * ___data);

void LIBSTUB_EVP_KEYEXCH_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(EVP_KEYEXCH *keyexch,void *data) = (void (*)(EVP_KEYEXCH *keyexch,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYEXCH_do_all_provided(_base, ___libctx, ___fn, ___data);
}

int LIB_EVP_KDF_is_a(struct Library * _base, const EVP_KDF * ___kdf, const char * ___name);

int LIBSTUB_EVP_KDF_is_a(void)
{
  const EVP_KDF * ___kdf = (const EVP_KDF *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_is_a(_base, ___kdf, ___name);
}

int LIB_EVP_MD_is_a(struct Library * _base, const EVP_MD * ___md, const char * ___name);

int LIBSTUB_EVP_MD_is_a(void)
{
  const EVP_MD * ___md = (const EVP_MD *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_is_a(_base, ___md, ___name);
}

int LIB_EVP_SIGNATURE_is_a(struct Library * _base, const EVP_SIGNATURE * ___signature, const char * ___name);

int LIBSTUB_EVP_SIGNATURE_is_a(void)
{
  const EVP_SIGNATURE * ___signature = (const EVP_SIGNATURE *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SIGNATURE_is_a(_base, ___signature, ___name);
}

void LIB_EVP_SIGNATURE_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(EVP_SIGNATURE *signature,void *data), void * ___data);

void LIBSTUB_EVP_SIGNATURE_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(EVP_SIGNATURE *signature,void *data) = (void (*)(EVP_SIGNATURE *signature,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SIGNATURE_do_all_provided(_base, ___libctx, ___fn, ___data);
}

int LIB_EVP_MD_names_do_all(struct Library * _base, const EVP_MD * ___md, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_EVP_MD_names_do_all(void)
{
  const EVP_MD * ___md = (const EVP_MD *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_names_do_all(_base, ___md, ___fn, ___data);
}

int LIB_EVP_CIPHER_names_do_all(struct Library * _base, const EVP_CIPHER * ___cipher, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_EVP_CIPHER_names_do_all(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_names_do_all(_base, ___cipher, ___fn, ___data);
}

int LIB_EVP_MAC_names_do_all(struct Library * _base, const EVP_MAC * ___mac, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_EVP_MAC_names_do_all(void)
{
  const EVP_MAC * ___mac = (const EVP_MAC *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_names_do_all(_base, ___mac, ___fn, ___data);
}

int LIB_EVP_KEYMGMT_names_do_all(struct Library * _base, const EVP_KEYMGMT * ___keymgmt, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_EVP_KEYMGMT_names_do_all(void)
{
  const EVP_KEYMGMT * ___keymgmt = (const EVP_KEYMGMT *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_names_do_all(_base, ___keymgmt, ___fn, ___data);
}

int LIB_EVP_KEYEXCH_names_do_all(struct Library * _base, const EVP_KEYEXCH * ___keyexch, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_EVP_KEYEXCH_names_do_all(void)
{
  const EVP_KEYEXCH * ___keyexch = (const EVP_KEYEXCH *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYEXCH_names_do_all(_base, ___keyexch, ___fn, ___data);
}

int LIB_EVP_KDF_names_do_all(struct Library * _base, const EVP_KDF * ___kdf, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_EVP_KDF_names_do_all(void)
{
  const EVP_KDF * ___kdf = (const EVP_KDF *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_names_do_all(_base, ___kdf, ___fn, ___data);
}

int LIB_EVP_SIGNATURE_names_do_all(struct Library * _base, const EVP_SIGNATURE * ___signature, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_EVP_SIGNATURE_names_do_all(void)
{
  const EVP_SIGNATURE * ___signature = (const EVP_SIGNATURE *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SIGNATURE_names_do_all(_base, ___signature, ___fn, ___data);
}

char * LIB_OSSL_CMP_CTX_snprint_PKIStatus(struct Library * _base, const OSSL_CMP_CTX * ___ctx, char * ___buf, size_t ___bufsize);

char * LIBSTUB_OSSL_CMP_CTX_snprint_PKIStatus(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  char * ___buf = (char *)REG_A1;
  size_t ___bufsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_snprint_PKIStatus(_base, ___ctx, ___buf, ___bufsize);
}

ASN1_OCTET_STRING * LIB_OSSL_CMP_HDR_get0_transactionID(struct Library * _base, const OSSL_CMP_PKIHEADER * ___hdr);

ASN1_OCTET_STRING * LIBSTUB_OSSL_CMP_HDR_get0_transactionID(void)
{
  const OSSL_CMP_PKIHEADER * ___hdr = (const OSSL_CMP_PKIHEADER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_HDR_get0_transactionID(_base, ___hdr);
}

ASN1_OCTET_STRING * LIB_OSSL_CMP_HDR_get0_recipNonce(struct Library * _base, const OSSL_CMP_PKIHEADER * ___hdr);

ASN1_OCTET_STRING * LIBSTUB_OSSL_CMP_HDR_get0_recipNonce(void)
{
  const OSSL_CMP_PKIHEADER * ___hdr = (const OSSL_CMP_PKIHEADER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_HDR_get0_recipNonce(_base, ___hdr);
}

X509_LOOKUP_METHOD * LIB_X509_LOOKUP_store(struct Library * _base);

X509_LOOKUP_METHOD * LIBSTUB_X509_LOOKUP_store(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_LOOKUP_store(_base);
}

int LIB_X509_add_cert(struct Library * _base, STACK_OF(X509) * ___sk, X509 * ___cert, int ___flags);

int LIBSTUB_X509_add_cert(void)
{
  STACK_OF(X509) * ___sk = (STACK_OF(X509) *)REG_A0;
  X509 * ___cert = (X509 *)REG_A1;
  int ___flags = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_add_cert(_base, ___sk, ___cert, ___flags);
}

int LIB_X509_add_certs(struct Library * _base, STACK_OF(X509) * ___sk, STACK_OF(X509) * ___certs, int ___flags);

int LIBSTUB_X509_add_certs(void)
{
  STACK_OF(X509) * ___sk = (STACK_OF(X509) *)REG_A0;
  STACK_OF(X509) * ___certs = (STACK_OF(X509) *)REG_A1;
  int ___flags = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_add_certs(_base, ___sk, ___certs, ___flags);
}

int LIB_X509_STORE_load_file(struct Library * _base, X509_STORE * ___xs, const char * ___file);

int LIBSTUB_X509_STORE_load_file(void)
{
  X509_STORE * ___xs = (X509_STORE *)REG_A0;
  const char * ___file = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_load_file(_base, ___xs, ___file);
}

int LIB_X509_STORE_load_path(struct Library * _base, X509_STORE * ___xs, const char * ___path);

int LIBSTUB_X509_STORE_load_path(void)
{
  X509_STORE * ___xs = (X509_STORE *)REG_A0;
  const char * ___path = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_load_path(_base, ___xs, ___path);
}

int LIB_X509_STORE_load_store(struct Library * _base, X509_STORE * ___xs, const char * ___store);

int LIBSTUB_X509_STORE_load_store(void)
{
  X509_STORE * ___xs = (X509_STORE *)REG_A0;
  const char * ___store = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_load_store(_base, ___xs, ___store);
}

int LIB_EVP_PKEY_fromdata(struct Library * _base, EVP_PKEY_CTX * ___ctx, EVP_PKEY ** ___ppkey, int ___selection, OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_fromdata(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  EVP_PKEY ** ___ppkey = (EVP_PKEY **)REG_A1;
  int ___selection = (int)REG_D0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_fromdata(_base, ___ctx, ___ppkey, ___selection, ___params);
}

void LIB_EVP_ASYM_CIPHER_free(struct Library * _base, EVP_ASYM_CIPHER * ___cipher);

void LIBSTUB_EVP_ASYM_CIPHER_free(void)
{
  EVP_ASYM_CIPHER * ___cipher = (EVP_ASYM_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_ASYM_CIPHER_free(_base, ___cipher);
}

int LIB_EVP_ASYM_CIPHER_up_ref(struct Library * _base, EVP_ASYM_CIPHER * ___cipher);

int LIBSTUB_EVP_ASYM_CIPHER_up_ref(void)
{
  EVP_ASYM_CIPHER * ___cipher = (EVP_ASYM_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_ASYM_CIPHER_up_ref(_base, ___cipher);
}

OSSL_PROVIDER * LIB_EVP_ASYM_CIPHER_get0_provider(struct Library * _base, const EVP_ASYM_CIPHER * ___cipher);

OSSL_PROVIDER * LIBSTUB_EVP_ASYM_CIPHER_get0_provider(void)
{
  const EVP_ASYM_CIPHER * ___cipher = (const EVP_ASYM_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_ASYM_CIPHER_get0_provider(_base, ___cipher);
}

EVP_ASYM_CIPHER * LIB_EVP_ASYM_CIPHER_fetch(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___algorithm, const char * ___properties);

EVP_ASYM_CIPHER * LIBSTUB_EVP_ASYM_CIPHER_fetch(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___algorithm = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_ASYM_CIPHER_fetch(_base, ___ctx, ___algorithm, ___properties);
}

int LIB_EVP_ASYM_CIPHER_is_a(struct Library * _base, const EVP_ASYM_CIPHER * ___cipher, const char * ___name);

int LIBSTUB_EVP_ASYM_CIPHER_is_a(void)
{
  const EVP_ASYM_CIPHER * ___cipher = (const EVP_ASYM_CIPHER *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_ASYM_CIPHER_is_a(_base, ___cipher, ___name);
}

void LIB_EVP_ASYM_CIPHER_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(EVP_ASYM_CIPHER *cipher,void *arg), void * ___arg);

void LIBSTUB_EVP_ASYM_CIPHER_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(EVP_ASYM_CIPHER *cipher,void *arg) = (void (*)(EVP_ASYM_CIPHER *cipher,void *arg))REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_ASYM_CIPHER_do_all_provided(_base, ___libctx, ___fn, ___arg);
}

int LIB_EVP_ASYM_CIPHER_names_do_all(struct Library * _base, const EVP_ASYM_CIPHER * ___cipher, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_EVP_ASYM_CIPHER_names_do_all(void)
{
  const EVP_ASYM_CIPHER * ___cipher = (const EVP_ASYM_CIPHER *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_ASYM_CIPHER_names_do_all(_base, ___cipher, ___fn, ___data);
}

int LIB_EVP_PKEY_CTX_set_rsa_padding(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___pad_mode);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_padding(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___pad_mode = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_padding(_base, ___ctx, ___pad_mode);
}

int LIB_EVP_PKEY_CTX_get_rsa_padding(struct Library * _base, EVP_PKEY_CTX * ___ctx, int * ___pad_mode);

int LIBSTUB_EVP_PKEY_CTX_get_rsa_padding(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int * ___pad_mode = (int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_rsa_padding(_base, ___ctx, ___pad_mode);
}

int LIB_EVP_PKEY_CTX_set_rsa_mgf1_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD * ___md);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_mgf1_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD * ___md = (const EVP_MD *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_mgf1_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_set_rsa_mgf1_md_name(struct Library * _base, EVP_PKEY_CTX * ___ctx, const char * ___mdname, const char * ___mdprops);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_mgf1_md_name(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const char * ___mdname = (const char *)REG_A1;
  const char * ___mdprops = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_mgf1_md_name(_base, ___ctx, ___mdname, ___mdprops);
}

int LIB_EVP_PKEY_CTX_get_rsa_mgf1_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD ** ___md);

int LIBSTUB_EVP_PKEY_CTX_get_rsa_mgf1_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD ** ___md = (const EVP_MD **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_rsa_mgf1_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_set_rsa_oaep_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD * ___md);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_oaep_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD * ___md = (const EVP_MD *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_oaep_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_set_rsa_oaep_md_name(struct Library * _base, EVP_PKEY_CTX * ___ctx, const char * ___mdname, const char * ___mdprops);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_oaep_md_name(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const char * ___mdname = (const char *)REG_A1;
  const char * ___mdprops = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_oaep_md_name(_base, ___ctx, ___mdname, ___mdprops);
}

int LIB_EVP_PKEY_CTX_get_rsa_oaep_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD ** ___md);

int LIBSTUB_EVP_PKEY_CTX_get_rsa_oaep_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD ** ___md = (const EVP_MD **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_rsa_oaep_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_set0_rsa_oaep_label(struct Library * _base, EVP_PKEY_CTX * ___ctx, void * ___label, int ___llen);

int LIBSTUB_EVP_PKEY_CTX_set0_rsa_oaep_label(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  void * ___label = (void *)REG_A1;
  int ___llen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set0_rsa_oaep_label(_base, ___ctx, ___label, ___llen);
}

int LIB_EVP_PKEY_CTX_get0_rsa_oaep_label(struct Library * _base, EVP_PKEY_CTX * ___ctx, unsigned char ** ___label);

int LIBSTUB_EVP_PKEY_CTX_get0_rsa_oaep_label(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  unsigned char ** ___label = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get0_rsa_oaep_label(_base, ___ctx, ___label);
}

int LIB_EVP_PKEY_CTX_get_rsa_mgf1_md_name(struct Library * _base, EVP_PKEY_CTX * ___ctx, char * ___name, size_t ___namelen);

int LIBSTUB_EVP_PKEY_CTX_get_rsa_mgf1_md_name(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  char * ___name = (char *)REG_A1;
  size_t ___namelen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_rsa_mgf1_md_name(_base, ___ctx, ___name, ___namelen);
}

int LIB_EVP_PKEY_CTX_get_rsa_oaep_md_name(struct Library * _base, EVP_PKEY_CTX * ___ctx, char * ___name, size_t ___namelen);

int LIBSTUB_EVP_PKEY_CTX_get_rsa_oaep_md_name(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  char * ___name = (char *)REG_A1;
  size_t ___namelen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_rsa_oaep_md_name(_base, ___ctx, ___name, ___namelen);
}

int LIB_OSSL_ENCODER_up_ref(struct Library * _base, OSSL_ENCODER * ___encoder);

int LIBSTUB_OSSL_ENCODER_up_ref(void)
{
  OSSL_ENCODER * ___encoder = (OSSL_ENCODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_up_ref(_base, ___encoder);
}

void LIB_OSSL_ENCODER_free(struct Library * _base, OSSL_ENCODER * ___encoder);

void LIBSTUB_OSSL_ENCODER_free(void)
{
  OSSL_ENCODER * ___encoder = (OSSL_ENCODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_free(_base, ___encoder);
}

OSSL_ENCODER * LIB_OSSL_ENCODER_fetch(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___name, const char * ___properties);

OSSL_ENCODER * LIBSTUB_OSSL_ENCODER_fetch(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_fetch(_base, ___libctx, ___name, ___properties);
}

int LIB_OSSL_ENCODER_is_a(struct Library * _base, const OSSL_ENCODER * ___encoder, const char * ___name);

int LIBSTUB_OSSL_ENCODER_is_a(void)
{
  const OSSL_ENCODER * ___encoder = (const OSSL_ENCODER *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_is_a(_base, ___encoder, ___name);
}

const OSSL_PROVIDER * LIB_OSSL_ENCODER_get0_provider(struct Library * _base, const OSSL_ENCODER * ___encoder);

const OSSL_PROVIDER * LIBSTUB_OSSL_ENCODER_get0_provider(void)
{
  const OSSL_ENCODER * ___encoder = (const OSSL_ENCODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_get0_provider(_base, ___encoder);
}

void LIB_OSSL_ENCODER_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(OSSL_ENCODER *encoder,void *arg), void * ___arg);

void LIBSTUB_OSSL_ENCODER_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(OSSL_ENCODER *encoder,void *arg) = (void (*)(OSSL_ENCODER *encoder,void *arg))REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_do_all_provided(_base, ___libctx, ___fn, ___arg);
}

int LIB_OSSL_ENCODER_names_do_all(struct Library * _base, const OSSL_ENCODER * ___encoder, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_OSSL_ENCODER_names_do_all(void)
{
  const OSSL_ENCODER * ___encoder = (const OSSL_ENCODER *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_names_do_all(_base, ___encoder, ___fn, ___data);
}

const OSSL_PARAM * LIB_OSSL_ENCODER_settable_ctx_params(struct Library * _base, OSSL_ENCODER * ___encoder);

const OSSL_PARAM * LIBSTUB_OSSL_ENCODER_settable_ctx_params(void)
{
  OSSL_ENCODER * ___encoder = (OSSL_ENCODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_settable_ctx_params(_base, ___encoder);
}

OSSL_ENCODER_CTX * LIB_OSSL_ENCODER_CTX_new(struct Library * _base);

OSSL_ENCODER_CTX * LIBSTUB_OSSL_ENCODER_CTX_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_new(_base);
}

int LIB_OSSL_ENCODER_CTX_set_params(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_OSSL_ENCODER_CTX_set_params(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_set_params(_base, ___ctx, ___params);
}

void LIB_OSSL_ENCODER_CTX_free(struct Library * _base, OSSL_ENCODER_CTX * ___ctx);

void LIBSTUB_OSSL_ENCODER_CTX_free(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_free(_base, ___ctx);
}

const char * LIB_OSSL_ENCODER_get0_properties(struct Library * _base, const OSSL_ENCODER * ___encoder);

const char * LIBSTUB_OSSL_ENCODER_get0_properties(void)
{
  const OSSL_ENCODER * ___encoder = (const OSSL_ENCODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_get0_properties(_base, ___encoder);
}

int LIB_OSSL_ENCODER_to_bio(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, BIO * ___out);

int LIBSTUB_OSSL_ENCODER_to_bio(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  BIO * ___out = (BIO *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_to_bio(_base, ___ctx, ___out);
}

OSSL_ENCODER_CTX * LIB_OSSL_ENCODER_CTX_new_for_pkey(struct Library * _base, const EVP_PKEY * ___pkey, int ___selection, const char * ___output_type, const char * ___output_struct, const char * ___propquery);

OSSL_ENCODER_CTX * LIBSTUB_OSSL_ENCODER_CTX_new_for_pkey(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  int ___selection = (int)REG_D0;
  const char * ___output_type = (const char *)REG_A1;
  const char * ___output_struct = (const char *)REG_A2;
  const char * ___propquery = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_new_for_pkey(_base, ___pkey, ___selection, ___output_type, ___output_struct, ___propquery);
}

int LIB_OSSL_ENCODER_CTX_set_cipher(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, const char * ___cipher_name, const char * ___propquery);

int LIBSTUB_OSSL_ENCODER_CTX_set_cipher(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  const char * ___cipher_name = (const char *)REG_A1;
  const char * ___propquery = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_set_cipher(_base, ___ctx, ___cipher_name, ___propquery);
}

int LIB_OSSL_ENCODER_CTX_set_passphrase(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, const unsigned char * ___kstr, size_t ___klen);

int LIBSTUB_OSSL_ENCODER_CTX_set_passphrase(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  const unsigned char * ___kstr = (const unsigned char *)REG_A1;
  size_t ___klen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_set_passphrase(_base, ___ctx, ___kstr, ___klen);
}

int LIB_OSSL_ENCODER_CTX_set_pem_password_cb(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, pem_password_cb * ___cb, void * ___cbarg);

int LIBSTUB_OSSL_ENCODER_CTX_set_pem_password_cb(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  pem_password_cb * ___cb = (pem_password_cb *)REG_A1;
  void * ___cbarg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_set_pem_password_cb(_base, ___ctx, ___cb, ___cbarg);
}

int LIB_OSSL_ENCODER_CTX_set_passphrase_ui(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, const UI_METHOD * ___ui_method, void * ___ui_data);

int LIBSTUB_OSSL_ENCODER_CTX_set_passphrase_ui(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  const UI_METHOD * ___ui_method = (const UI_METHOD *)REG_A1;
  void * ___ui_data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_set_passphrase_ui(_base, ___ctx, ___ui_method, ___ui_data);
}

X509_PUBKEY * LIB_PEM_read_bio_X509_PUBKEY(struct Library * _base, BIO * ___out, X509_PUBKEY ** ___x, pem_password_cb * ___cb, void * ___u);

X509_PUBKEY * LIBSTUB_PEM_read_bio_X509_PUBKEY(void)
{
  BIO * ___out = (BIO *)REG_A0;
  X509_PUBKEY ** ___x = (X509_PUBKEY **)REG_A1;
  pem_password_cb * ___cb = (pem_password_cb *)REG_A2;
  void * ___u = (void *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PEM_read_bio_X509_PUBKEY(_base, ___out, ___x, ___cb, ___u);
}

int LIB_PEM_write_bio_X509_PUBKEY(struct Library * _base, BIO * ___out, const X509_PUBKEY * ___x);

int LIBSTUB_PEM_write_bio_X509_PUBKEY(void)
{
  BIO * ___out = (BIO *)REG_A0;
  const X509_PUBKEY * ___x = (const X509_PUBKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PEM_write_bio_X509_PUBKEY(_base, ___out, ___x);
}

X509_PUBKEY * LIB_d2i_X509_PUBKEY_bio(struct Library * _base, BIO * ___bp, X509_PUBKEY ** ___xpk);

X509_PUBKEY * LIBSTUB_d2i_X509_PUBKEY_bio(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  X509_PUBKEY ** ___xpk = (X509_PUBKEY **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_X509_PUBKEY_bio(_base, ___bp, ___xpk);
}

int LIB_i2d_X509_PUBKEY_bio(struct Library * _base, BIO * ___bp, const X509_PUBKEY * ___xpk);

int LIBSTUB_i2d_X509_PUBKEY_bio(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  const X509_PUBKEY * ___xpk = (const X509_PUBKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_X509_PUBKEY_bio(_base, ___bp, ___xpk);
}

int LIB_X509_cmp_timeframe(struct Library * _base, const X509_VERIFY_PARAM * ___vpm, const ASN1_TIME * ___start, const ASN1_TIME * ___end);

int LIBSTUB_X509_cmp_timeframe(void)
{
  const X509_VERIFY_PARAM * ___vpm = (const X509_VERIFY_PARAM *)REG_A0;
  const ASN1_TIME * ___start = (const ASN1_TIME *)REG_A1;
  const ASN1_TIME * ___end = (const ASN1_TIME *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_cmp_timeframe(_base, ___vpm, ___start, ___end);
}

OSSL_CMP_PKIHEADER * LIB_OSSL_CMP_MSG_get0_header(struct Library * _base, const OSSL_CMP_MSG * ___msg);

OSSL_CMP_PKIHEADER * LIBSTUB_OSSL_CMP_MSG_get0_header(void)
{
  const OSSL_CMP_MSG * ___msg = (const OSSL_CMP_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_MSG_get0_header(_base, ___msg);
}

int LIB_OSSL_CMP_MSG_get_bodytype(struct Library * _base, const OSSL_CMP_MSG * ___msg);

int LIBSTUB_OSSL_CMP_MSG_get_bodytype(void)
{
  const OSSL_CMP_MSG * ___msg = (const OSSL_CMP_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_MSG_get_bodytype(_base, ___msg);
}

int LIB_OSSL_CMP_MSG_update_transactionID(struct Library * _base, OSSL_CMP_CTX * ___ctx, OSSL_CMP_MSG * ___msg);

int LIBSTUB_OSSL_CMP_MSG_update_transactionID(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  OSSL_CMP_MSG * ___msg = (OSSL_CMP_MSG *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_MSG_update_transactionID(_base, ___ctx, ___msg);
}

OSSL_CRMF_MSG * LIB_OSSL_CMP_CTX_setup_CRM(struct Library * _base, OSSL_CMP_CTX * ___ctx, int ___for_KUR, int ___rid);

OSSL_CRMF_MSG * LIBSTUB_OSSL_CMP_CTX_setup_CRM(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  int ___for_KUR = (int)REG_D0;
  int ___rid = (int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_setup_CRM(_base, ___ctx, ___for_KUR, ___rid);
}

const BIO_METHOD * LIB_BIO_f_prefix(struct Library * _base);

const BIO_METHOD * LIBSTUB_BIO_f_prefix(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_f_prefix(_base);
}

EVP_PKEY_CTX * LIB_EVP_PKEY_CTX_new_from_name(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___name, const char * ___propquery);

EVP_PKEY_CTX * LIBSTUB_EVP_PKEY_CTX_new_from_name(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  const char * ___propquery = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_new_from_name(_base, ___libctx, ___name, ___propquery);
}

EVP_PKEY_CTX * LIB_EVP_PKEY_CTX_new_from_pkey(struct Library * _base, OSSL_LIB_CTX * ___libctx, EVP_PKEY * ___pkey, const char * ___propquery);

EVP_PKEY_CTX * LIBSTUB_EVP_PKEY_CTX_new_from_pkey(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A1;
  const char * ___propquery = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_new_from_pkey(_base, ___libctx, ___pkey, ___propquery);
}

void LIB_OSSL_SELF_TEST_set_callback(struct Library * _base, OSSL_LIB_CTX * ___libctx, OSSL_CALLBACK * ___cb, void * ___cbarg);

void LIBSTUB_OSSL_SELF_TEST_set_callback(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  OSSL_CALLBACK * ___cb = (OSSL_CALLBACK *)REG_A1;
  void * ___cbarg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_SELF_TEST_set_callback(_base, ___libctx, ___cb, ___cbarg);
}

void LIB_OSSL_SELF_TEST_get_callback(struct Library * _base, OSSL_LIB_CTX * ___libctx, OSSL_CALLBACK ** ___cb, void ** ___cbarg);

void LIBSTUB_OSSL_SELF_TEST_get_callback(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  OSSL_CALLBACK ** ___cb = (OSSL_CALLBACK **)REG_A1;
  void ** ___cbarg = (void **)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_SELF_TEST_get_callback(_base, ___libctx, ___cb, ___cbarg);
}

ASN1_TIME * LIB_ASN1_TIME_dup(struct Library * _base, const ASN1_TIME * ___a);

ASN1_TIME * LIBSTUB_ASN1_TIME_dup(void)
{
  const ASN1_TIME * ___a = (const ASN1_TIME *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASN1_TIME_dup(_base, ___a);
}

ASN1_UTCTIME * LIB_ASN1_UTCTIME_dup(struct Library * _base, const ASN1_UTCTIME * ___a);

ASN1_UTCTIME * LIBSTUB_ASN1_UTCTIME_dup(void)
{
  const ASN1_UTCTIME * ___a = (const ASN1_UTCTIME *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASN1_UTCTIME_dup(_base, ___a);
}

ASN1_GENERALIZEDTIME * LIB_ASN1_GENERALIZEDTIME_dup(struct Library * _base, const ASN1_GENERALIZEDTIME * ___a);

ASN1_GENERALIZEDTIME * LIBSTUB_ASN1_GENERALIZEDTIME_dup(void)
{
  const ASN1_GENERALIZEDTIME * ___a = (const ASN1_GENERALIZEDTIME *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASN1_GENERALIZEDTIME_dup(_base, ___a);
}

int LIB_RAND_priv_bytes_ex(struct Library * _base, OSSL_LIB_CTX * ___ctx, unsigned char * ___buf, size_t ___num, unsigned int ___strength);

int LIBSTUB_RAND_priv_bytes_ex(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  unsigned char * ___buf = (unsigned char *)REG_A1;
  size_t ___num = (size_t)REG_D0;
  unsigned int ___strength = (unsigned int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_RAND_priv_bytes_ex(_base, ___ctx, ___buf, ___num, ___strength);
}

int LIB_RAND_bytes_ex(struct Library * _base, OSSL_LIB_CTX * ___ctx, unsigned char * ___buf, size_t ___num, unsigned int ___strength);

int LIBSTUB_RAND_bytes_ex(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  unsigned char * ___buf = (unsigned char *)REG_A1;
  size_t ___num = (size_t)REG_D0;
  unsigned int ___strength = (unsigned int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_RAND_bytes_ex(_base, ___ctx, ___buf, ___num, ___strength);
}

int LIB_EVP_PKEY_get_default_digest_name(struct Library * _base, EVP_PKEY * ___pkey, char * ___mdname, size_t ___mdname_sz);

int LIBSTUB_EVP_PKEY_get_default_digest_name(void)
{
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A0;
  char * ___mdname = (char *)REG_A1;
  size_t ___mdname_sz = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get_default_digest_name(_base, ___pkey, ___mdname, ___mdname_sz);
}

int LIB_CMS_decrypt_set1_pkey_and_peer(struct Library * _base, CMS_ContentInfo * ___cms, EVP_PKEY * ___pk, X509 * ___cert, X509 * ___peer);

int LIBSTUB_CMS_decrypt_set1_pkey_and_peer(void)
{
  CMS_ContentInfo * ___cms = (CMS_ContentInfo *)REG_A0;
  EVP_PKEY * ___pk = (EVP_PKEY *)REG_A1;
  X509 * ___cert = (X509 *)REG_A2;
  X509 * ___peer = (X509 *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_decrypt_set1_pkey_and_peer(_base, ___cms, ___pk, ___cert, ___peer);
}

CMS_RecipientInfo * LIB_CMS_add1_recipient(struct Library * _base, CMS_ContentInfo * ___cms, X509 * ___recip, EVP_PKEY * ___originatorPrivKey, X509 * ___originator, unsigned int ___flags);

CMS_RecipientInfo * LIBSTUB_CMS_add1_recipient(void)
{
  CMS_ContentInfo * ___cms = (CMS_ContentInfo *)REG_A0;
  X509 * ___recip = (X509 *)REG_A1;
  EVP_PKEY * ___originatorPrivKey = (EVP_PKEY *)REG_A2;
  X509 * ___originator = (X509 *)REG_A3;
  unsigned int ___flags = (unsigned int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_add1_recipient(_base, ___cms, ___recip, ___originatorPrivKey, ___originator, ___flags);
}

int LIB_CMS_RecipientInfo_kari_set0_pkey_and_peer(struct Library * _base, CMS_RecipientInfo * ___ri, EVP_PKEY * ___pk, X509 * ___peer);

int LIBSTUB_CMS_RecipientInfo_kari_set0_pkey_and_peer(void)
{
  CMS_RecipientInfo * ___ri = (CMS_RecipientInfo *)REG_A0;
  EVP_PKEY * ___pk = (EVP_PKEY *)REG_A1;
  X509 * ___peer = (X509 *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_RecipientInfo_kari_set0_pkey_and_peer(_base, ___ri, ___pk, ___peer);
}

int LIB_PKCS8_pkey_add1_attr(struct Library * _base, PKCS8_PRIV_KEY_INFO * ___p8, X509_ATTRIBUTE * ___attr);

int LIBSTUB_PKCS8_pkey_add1_attr(void)
{
  PKCS8_PRIV_KEY_INFO * ___p8 = (PKCS8_PRIV_KEY_INFO *)REG_A0;
  X509_ATTRIBUTE * ___attr = (X509_ATTRIBUTE *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS8_pkey_add1_attr(_base, ___p8, ___attr);
}

int LIB_PKCS8_pkey_add1_attr_by_OBJ(struct Library * _base, PKCS8_PRIV_KEY_INFO * ___p8, const ASN1_OBJECT * ___obj, int ___type, const unsigned char * ___bytes, int ___len);

int LIBSTUB_PKCS8_pkey_add1_attr_by_OBJ(void)
{
  PKCS8_PRIV_KEY_INFO * ___p8 = (PKCS8_PRIV_KEY_INFO *)REG_A0;
  const ASN1_OBJECT * ___obj = (const ASN1_OBJECT *)REG_A1;
  int ___type = (int)REG_D0;
  const unsigned char * ___bytes = (const unsigned char *)REG_A2;
  int ___len = (int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS8_pkey_add1_attr_by_OBJ(_base, ___p8, ___obj, ___type, ___bytes, ___len);
}

int LIB_EVP_PKEY_private_check(struct Library * _base, EVP_PKEY_CTX * ___ctx);

int LIBSTUB_EVP_PKEY_private_check(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_private_check(_base, ___ctx);
}

int LIB_EVP_PKEY_pairwise_check(struct Library * _base, EVP_PKEY_CTX * ___ctx);

int LIBSTUB_EVP_PKEY_pairwise_check(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_pairwise_check(_base, ___ctx);
}

int LIB_ASN1_item_verify_ctx(struct Library * _base, const ASN1_ITEM * ___it, const X509_ALGOR * ___alg, const ASN1_BIT_STRING * ___signature, const void * ___data, EVP_MD_CTX * ___ctx);

int LIBSTUB_ASN1_item_verify_ctx(void)
{
  const ASN1_ITEM * ___it = (const ASN1_ITEM *)REG_A0;
  const X509_ALGOR * ___alg = (const X509_ALGOR *)REG_A1;
  const ASN1_BIT_STRING * ___signature = (const ASN1_BIT_STRING *)REG_A2;
  const void * ___data = (const void *)REG_A3;
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASN1_item_verify_ctx(_base, ___it, ___alg, ___signature, ___data, ___ctx);
}

int LIB_ASN1_item_sign_ex(struct Library * _base, const ASN1_ITEM * ___it, X509_ALGOR * ___algor1, X509_ALGOR * ___algor2, ASN1_BIT_STRING * ___signature, const void * ___data, const ASN1_OCTET_STRING * ___id, EVP_PKEY * ___pkey, const EVP_MD * ___md, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_ASN1_item_sign_ex(void)
{
  const ASN1_ITEM * ___it = (const ASN1_ITEM *)REG_A0;
  X509_ALGOR * ___algor1 = (X509_ALGOR *)REG_A1;
  X509_ALGOR * ___algor2 = (X509_ALGOR *)REG_A2;
  ASN1_BIT_STRING * ___signature = (ASN1_BIT_STRING *)REG_A3;
  const void * ___data = (const void *)REG_D0;
  const ASN1_OCTET_STRING * ___id = (const ASN1_OCTET_STRING *)REG_D1;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_D2;
  const EVP_MD * ___md = (const EVP_MD *)REG_D3;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D4;
  const char * ___propq = (const char *)REG_D5;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASN1_item_sign_ex(_base, ___it, ___algor1, ___algor2, ___signature, ___data, ___id, ___pkey, ___md, ___libctx, ___propq);
}

int LIB_ASN1_item_verify_ex(struct Library * _base, const ASN1_ITEM * ___it, const X509_ALGOR * ___alg, const ASN1_BIT_STRING * ___signature, const void * ___data, const ASN1_OCTET_STRING * ___id, EVP_PKEY * ___pkey, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_ASN1_item_verify_ex(void)
{
  const ASN1_ITEM * ___it = (const ASN1_ITEM *)REG_A0;
  const X509_ALGOR * ___alg = (const X509_ALGOR *)REG_A1;
  const ASN1_BIT_STRING * ___signature = (const ASN1_BIT_STRING *)REG_A2;
  const void * ___data = (const void *)REG_A3;
  const ASN1_OCTET_STRING * ___id = (const ASN1_OCTET_STRING *)REG_D0;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D2;
  const char * ___propq = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASN1_item_verify_ex(_base, ___it, ___alg, ___signature, ___data, ___id, ___pkey, ___libctx, ___propq);
}

int LIB_BIO_socket_wait(struct Library * _base, int ___fd, int ___for_read, time_t ___max_time);

int LIBSTUB_BIO_socket_wait(void)
{
  int ___fd = (int)REG_D0;
  int ___for_read = (int)REG_D1;
  time_t ___max_time = (time_t)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_socket_wait(_base, ___fd, ___for_read, ___max_time);
}

int LIB_BIO_wait(struct Library * _base, BIO * ___bio, time_t ___max_time, unsigned int ___nap_milliseconds);

int LIBSTUB_BIO_wait(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  time_t ___max_time = (time_t)REG_D0;
  unsigned int ___nap_milliseconds = (unsigned int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_wait(_base, ___bio, ___max_time, ___nap_milliseconds);
}

int LIB_BIO_do_connect_retry(struct Library * _base, BIO * ___bio, int ___timeout, int ___nap_milliseconds);

int LIBSTUB_BIO_do_connect_retry(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  int ___timeout = (int)REG_D0;
  int ___nap_milliseconds = (int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_do_connect_retry(_base, ___bio, ___timeout, ___nap_milliseconds);
}

int LIB_OSSL_parse_url(struct Library * _base, const char * ___url, char ** ___pscheme, char ** ___puser, char ** ___phost, char ** ___pport, int * ___pport_num, char ** ___ppath, char ** ___pquery, char ** ___pfrag);

int LIBSTUB_OSSL_parse_url(void)
{
  const char * ___url = (const char *)REG_A0;
  char ** ___pscheme = (char **)REG_A1;
  char ** ___puser = (char **)REG_A2;
  char ** ___phost = (char **)REG_A3;
  char ** ___pport = (char **)REG_D0;
  int * ___pport_num = (int *)REG_D1;
  char ** ___ppath = (char **)REG_D2;
  char ** ___pquery = (char **)REG_D3;
  char ** ___pfrag = (char **)REG_D4;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_parse_url(_base, ___url, ___pscheme, ___puser, ___phost, ___pport, ___pport_num, ___ppath, ___pquery, ___pfrag);
}

const char * LIB_OSSL_HTTP_adapt_proxy(struct Library * _base, const char * ___proxy, const char * ___no_proxy, const char * ___server, int ___use_ssl);

const char * LIBSTUB_OSSL_HTTP_adapt_proxy(void)
{
  const char * ___proxy = (const char *)REG_A0;
  const char * ___no_proxy = (const char *)REG_A1;
  const char * ___server = (const char *)REG_A2;
  int ___use_ssl = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_adapt_proxy(_base, ___proxy, ___no_proxy, ___server, ___use_ssl);
}

size_t LIB_OSSL_HTTP_REQ_CTX_get_resp_len(struct Library * _base, const OSSL_HTTP_REQ_CTX * ___rctx);

size_t LIBSTUB_OSSL_HTTP_REQ_CTX_get_resp_len(void)
{
  const OSSL_HTTP_REQ_CTX * ___rctx = (const OSSL_HTTP_REQ_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_REQ_CTX_get_resp_len(_base, ___rctx);
}

int LIB_OSSL_HTTP_REQ_CTX_set_expected(struct Library * _base, OSSL_HTTP_REQ_CTX * ___rctx, const char * ___content_type, int ___asn1, int ___timeout, int ___keep_alive);

int LIBSTUB_OSSL_HTTP_REQ_CTX_set_expected(void)
{
  OSSL_HTTP_REQ_CTX * ___rctx = (OSSL_HTTP_REQ_CTX *)REG_A0;
  const char * ___content_type = (const char *)REG_A1;
  int ___asn1 = (int)REG_D0;
  int ___timeout = (int)REG_D1;
  int ___keep_alive = (int)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_REQ_CTX_set_expected(_base, ___rctx, ___content_type, ___asn1, ___timeout, ___keep_alive);
}

int LIB_OSSL_HTTP_is_alive(struct Library * _base, const OSSL_HTTP_REQ_CTX * ___rctx);

int LIBSTUB_OSSL_HTTP_is_alive(void)
{
  const OSSL_HTTP_REQ_CTX * ___rctx = (const OSSL_HTTP_REQ_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_is_alive(_base, ___rctx);
}

OSSL_HTTP_REQ_CTX * LIB_OSSL_HTTP_open(struct Library * _base, const char * ___server, const char * ___port, const char * ___proxy, const char * ___no_proxy, int ___use_ssl, BIO * ___bio, BIO * ___rbio, OSSL_HTTP_bio_cb_t ___bio_update_fn, void * ___arg, int ___buf_size, int ___overall_timeout);

OSSL_HTTP_REQ_CTX * LIBSTUB_OSSL_HTTP_open(void)
{
  const char * ___server = (const char *)REG_A0;
  const char * ___port = (const char *)REG_A1;
  const char * ___proxy = (const char *)REG_A2;
  const char * ___no_proxy = (const char *)REG_A3;
  int ___use_ssl = (int)REG_D0;
  BIO * ___bio = (BIO *)REG_D1;
  BIO * ___rbio = (BIO *)REG_D2;
  OSSL_HTTP_bio_cb_t ___bio_update_fn = (OSSL_HTTP_bio_cb_t)REG_D3;
  void * ___arg = (void *)REG_D4;
  int ___buf_size = (int)REG_D5;
  int ___overall_timeout = (int)REG_D6;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_open(_base, ___server, ___port, ___proxy, ___no_proxy, ___use_ssl, ___bio, ___rbio, ___bio_update_fn, ___arg, ___buf_size, ___overall_timeout);
}

int LIB_OSSL_HTTP_proxy_connect(struct Library * _base, BIO * ___bio, const char * ___server, const char * ___port, const char * ___proxyuser, const char * ___proxypass, int ___timeout, BIO * ___bio_err, const char * ___prog);

int LIBSTUB_OSSL_HTTP_proxy_connect(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  const char * ___server = (const char *)REG_A1;
  const char * ___port = (const char *)REG_A2;
  const char * ___proxyuser = (const char *)REG_A3;
  const char * ___proxypass = (const char *)REG_D0;
  int ___timeout = (int)REG_D1;
  BIO * ___bio_err = (BIO *)REG_D2;
  const char * ___prog = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_proxy_connect(_base, ___bio, ___server, ___port, ___proxyuser, ___proxypass, ___timeout, ___bio_err, ___prog);
}

int LIB_OSSL_HTTP_set1_request(struct Library * _base, OSSL_HTTP_REQ_CTX * ___rctx, const char * ___path, const STACK_OF(CONF_VALUE) * ___headers, const char * ___content_type, BIO * ___req, const char * ___expected_content_type, int ___expect_asn1, size_t ___max_resp_len, int ___timeout, int ___keep_alive);

int LIBSTUB_OSSL_HTTP_set1_request(void)
{
  OSSL_HTTP_REQ_CTX * ___rctx = (OSSL_HTTP_REQ_CTX *)REG_A0;
  const char * ___path = (const char *)REG_A1;
  const STACK_OF(CONF_VALUE) * ___headers = (const STACK_OF(CONF_VALUE) *)REG_A2;
  const char * ___content_type = (const char *)REG_A3;
  BIO * ___req = (BIO *)REG_D0;
  const char * ___expected_content_type = (const char *)REG_D1;
  int ___expect_asn1 = (int)REG_D2;
  size_t ___max_resp_len = (size_t)REG_D3;
  int ___timeout = (int)REG_D4;
  int ___keep_alive = (int)REG_D5;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_set1_request(_base, ___rctx, ___path, ___headers, ___content_type, ___req, ___expected_content_type, ___expect_asn1, ___max_resp_len, ___timeout, ___keep_alive);
}

BIO * LIB_OSSL_HTTP_exchange(struct Library * _base, OSSL_HTTP_REQ_CTX * ___rctx, char ** ___redirection_url);

BIO * LIBSTUB_OSSL_HTTP_exchange(void)
{
  OSSL_HTTP_REQ_CTX * ___rctx = (OSSL_HTTP_REQ_CTX *)REG_A0;
  char ** ___redirection_url = (char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_exchange(_base, ___rctx, ___redirection_url);
}

BIO * LIB_OSSL_HTTP_get_amiga_1(struct Library * _base, const char * ___url, const char * ___proxy, const char * ___no_proxy, BIO * ___bio, BIO * ___rbio, OSSL_HTTP_bio_cb_t ___bio_update_fn, void * ___moreargs);

BIO * LIBSTUB_OSSL_HTTP_get_amiga_1(void)
{
  const char * ___url = (const char *)REG_A0;
  const char * ___proxy = (const char *)REG_A1;
  const char * ___no_proxy = (const char *)REG_A2;
  BIO * ___bio = (BIO *)REG_D1;
  BIO * ___rbio = (BIO *)REG_D2;
  OSSL_HTTP_bio_cb_t ___bio_update_fn = (OSSL_HTTP_bio_cb_t)REG_A3;
  void * ___moreargs = (void *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_get_amiga_1(_base, ___url, ___proxy, ___no_proxy, ___bio, ___rbio, ___bio_update_fn, ___moreargs);
}

void * LIB_OSSL_HTTP_get_amiga_2(struct Library * _base, void * ___arg, int ___buf_size, const STACK_OF(CONF_VALUE) * ___headers, const char * ___expected_content_type, int ___expect_asn1, size_t ___max_resp_len, int ___timeout);

void * LIBSTUB_OSSL_HTTP_get_amiga_2(void)
{
  void * ___arg = (void *)REG_A0;
  int ___buf_size = (int)REG_A1;
  const STACK_OF(CONF_VALUE) * ___headers = (const STACK_OF(CONF_VALUE) *)REG_A2;
  const char * ___expected_content_type = (const char *)REG_A3;
  int ___expect_asn1 = (int)REG_D0;
  size_t ___max_resp_len = (size_t)REG_D1;
  int ___timeout = (int)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_get_amiga_2(_base, ___arg, ___buf_size, ___headers, ___expected_content_type, ___expect_asn1, ___max_resp_len, ___timeout);
}

BIO * LIB_OSSL_HTTP_transfer_amiga_1(struct Library * _base, OSSL_HTTP_REQ_CTX ** ___prctx, const char * ___server, const char * ___port, const char * ___path, int ___use_ssl, const char * ___proxy, const char * ___no_proxy, BIO * ___bio, BIO * ___rbio, OSSL_HTTP_bio_cb_t ___bio_update_fn, void * ___moreargs);

BIO * LIBSTUB_OSSL_HTTP_transfer_amiga_1(void)
{
  OSSL_HTTP_REQ_CTX ** ___prctx = (OSSL_HTTP_REQ_CTX **)REG_A0;
  const char * ___server = (const char *)REG_A1;
  const char * ___port = (const char *)REG_A2;
  const char * ___path = (const char *)REG_D1;
  int ___use_ssl = (int)REG_D2;
  const char * ___proxy = (const char *)REG_D3;
  const char * ___no_proxy = (const char *)REG_D4;
  BIO * ___bio = (BIO *)REG_D5;
  BIO * ___rbio = (BIO *)REG_D6;
  OSSL_HTTP_bio_cb_t ___bio_update_fn = (OSSL_HTTP_bio_cb_t)REG_A3;
  void * ___moreargs = (void *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_transfer_amiga_1(_base, ___prctx, ___server, ___port, ___path, ___use_ssl, ___proxy, ___no_proxy, ___bio, ___rbio, ___bio_update_fn, ___moreargs);
}

void * LIB_OSSL_HTTP_transfer_amiga_2(struct Library * _base, void * ___arg, int ___buf_size, const STACK_OF(CONF_VALUE) * ___headers, const char * ___content_type, BIO * ___req, const char * ___expected_content_type, int ___expect_asn1, size_t ___max_resp_len, int ___timeout, int ___keep_alive);

void * LIBSTUB_OSSL_HTTP_transfer_amiga_2(void)
{
  void * ___arg = (void *)REG_A0;
  int ___buf_size = (int)REG_D0;
  const STACK_OF(CONF_VALUE) * ___headers = (const STACK_OF(CONF_VALUE) *)REG_A1;
  const char * ___content_type = (const char *)REG_A2;
  BIO * ___req = (BIO *)REG_A3;
  const char * ___expected_content_type = (const char *)REG_D1;
  int ___expect_asn1 = (int)REG_D2;
  size_t ___max_resp_len = (size_t)REG_D3;
  int ___timeout = (int)REG_D4;
  int ___keep_alive = (int)REG_D5;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_transfer_amiga_2(_base, ___arg, ___buf_size, ___headers, ___content_type, ___req, ___expected_content_type, ___expect_asn1, ___max_resp_len, ___timeout, ___keep_alive);
}

int LIB_OSSL_HTTP_close(struct Library * _base, OSSL_HTTP_REQ_CTX * ___rctx, int ___ok);

int LIBSTUB_OSSL_HTTP_close(void)
{
  OSSL_HTTP_REQ_CTX * ___rctx = (OSSL_HTTP_REQ_CTX *)REG_A0;
  int ___ok = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_close(_base, ___rctx, ___ok);
}

BIO * LIB_ASN1_item_i2d_mem_bio(struct Library * _base, const ASN1_ITEM * ___it, const ASN1_VALUE * ___val);

BIO * LIBSTUB_ASN1_item_i2d_mem_bio(void)
{
  const ASN1_ITEM * ___it = (const ASN1_ITEM *)REG_A0;
  const ASN1_VALUE * ___val = (const ASN1_VALUE *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASN1_item_i2d_mem_bio(_base, ___it, ___val);
}

void LIB_ERR_add_error_txt(struct Library * _base, const char * ___sepr, const char * ___txt);

void LIBSTUB_ERR_add_error_txt(void)
{
  const char * ___sepr = (const char *)REG_A0;
  const char * ___txt = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_add_error_txt(_base, ___sepr, ___txt);
}

void LIB_ERR_add_error_mem_bio(struct Library * _base, const char * ___sep, BIO * ___bio);

void LIBSTUB_ERR_add_error_mem_bio(void)
{
  const char * ___sep = (const char *)REG_A0;
  BIO * ___bio = (BIO *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_add_error_mem_bio(_base, ___sep, ___bio);
}

int LIB_X509_STORE_CTX_print_verify_cb(struct Library * _base, int ___ok, X509_STORE_CTX * ___ctx);

int LIBSTUB_X509_STORE_CTX_print_verify_cb(void)
{
  int ___ok = (int)REG_D0;
  X509_STORE_CTX * ___ctx = (X509_STORE_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_CTX_print_verify_cb(_base, ___ok, ___ctx);
}

STACK_OF(X509) * LIB_X509_STORE_get1_all_certs(struct Library * _base, X509_STORE * ___xs);

STACK_OF(X509) * LIBSTUB_X509_STORE_get1_all_certs(void)
{
  X509_STORE * ___xs = (X509_STORE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_get1_all_certs(_base, ___xs);
}

int LIB_OSSL_CMP_validate_msg(struct Library * _base, OSSL_CMP_CTX * ___ctx, const OSSL_CMP_MSG * ___msg);

int LIBSTUB_OSSL_CMP_validate_msg(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const OSSL_CMP_MSG * ___msg = (const OSSL_CMP_MSG *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_validate_msg(_base, ___ctx, ___msg);
}

int LIB_OSSL_CMP_validate_cert_path(struct Library * _base, const OSSL_CMP_CTX * ___ctx, X509_STORE * ___trusted_store, X509 * ___cert);

int LIBSTUB_OSSL_CMP_validate_cert_path(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  X509_STORE * ___trusted_store = (X509_STORE *)REG_A1;
  X509 * ___cert = (X509 *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_validate_cert_path(_base, ___ctx, ___trusted_store, ___cert);
}

int LIB_EVP_PKEY_CTX_set_ecdh_cofactor_mode(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___cofactor_mode);

int LIBSTUB_EVP_PKEY_CTX_set_ecdh_cofactor_mode(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___cofactor_mode = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_ecdh_cofactor_mode(_base, ___ctx, ___cofactor_mode);
}

int LIB_EVP_PKEY_CTX_get_ecdh_cofactor_mode(struct Library * _base, EVP_PKEY_CTX * ___ctx);

int LIBSTUB_EVP_PKEY_CTX_get_ecdh_cofactor_mode(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_ecdh_cofactor_mode(_base, ___ctx);
}

int LIB_EVP_PKEY_CTX_set_ecdh_kdf_type(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___kdf);

int LIBSTUB_EVP_PKEY_CTX_set_ecdh_kdf_type(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___kdf = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_ecdh_kdf_type(_base, ___ctx, ___kdf);
}

int LIB_EVP_PKEY_CTX_get_ecdh_kdf_type(struct Library * _base, EVP_PKEY_CTX * ___ctx);

int LIBSTUB_EVP_PKEY_CTX_get_ecdh_kdf_type(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_ecdh_kdf_type(_base, ___ctx);
}

int LIB_EVP_PKEY_CTX_set_ecdh_kdf_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD * ___md);

int LIBSTUB_EVP_PKEY_CTX_set_ecdh_kdf_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD * ___md = (const EVP_MD *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_ecdh_kdf_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_get_ecdh_kdf_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD ** ___md);

int LIBSTUB_EVP_PKEY_CTX_get_ecdh_kdf_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD ** ___md = (const EVP_MD **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_ecdh_kdf_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_set_ecdh_kdf_outlen(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___len);

int LIBSTUB_EVP_PKEY_CTX_set_ecdh_kdf_outlen(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___len = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_ecdh_kdf_outlen(_base, ___ctx, ___len);
}

int LIB_EVP_PKEY_CTX_get_ecdh_kdf_outlen(struct Library * _base, EVP_PKEY_CTX * ___ctx, int * ___len);

int LIBSTUB_EVP_PKEY_CTX_get_ecdh_kdf_outlen(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int * ___len = (int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_ecdh_kdf_outlen(_base, ___ctx, ___len);
}

int LIB_EVP_PKEY_CTX_set0_ecdh_kdf_ukm(struct Library * _base, EVP_PKEY_CTX * ___ctx, unsigned char * ___ukm, int ___len);

int LIBSTUB_EVP_PKEY_CTX_set0_ecdh_kdf_ukm(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  unsigned char * ___ukm = (unsigned char *)REG_A1;
  int ___len = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set0_ecdh_kdf_ukm(_base, ___ctx, ___ukm, ___len);
}

int LIB_EVP_PKEY_CTX_get0_ecdh_kdf_ukm(struct Library * _base, EVP_PKEY_CTX * ___ctx, unsigned char ** ___ukm);

int LIBSTUB_EVP_PKEY_CTX_get0_ecdh_kdf_ukm(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  unsigned char ** ___ukm = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get0_ecdh_kdf_ukm(_base, ___ctx, ___ukm);
}

int LIB_EVP_PKEY_CTX_set_rsa_pss_saltlen(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___saltlen);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_pss_saltlen(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___saltlen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_pss_saltlen(_base, ___ctx, ___saltlen);
}

int LIB_EVP_PKEY_CTX_get_rsa_pss_saltlen(struct Library * _base, EVP_PKEY_CTX * ___ctx, int * ___saltlen);

int LIBSTUB_EVP_PKEY_CTX_get_rsa_pss_saltlen(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int * ___saltlen = (int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_rsa_pss_saltlen(_base, ___ctx, ___saltlen);
}

ISSUER_SIGN_TOOL * LIB_d2i_ISSUER_SIGN_TOOL(struct Library * _base, ISSUER_SIGN_TOOL ** ___a, const unsigned char ** ___in, long ___len);

ISSUER_SIGN_TOOL * LIBSTUB_d2i_ISSUER_SIGN_TOOL(void)
{
  ISSUER_SIGN_TOOL ** ___a = (ISSUER_SIGN_TOOL **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_ISSUER_SIGN_TOOL(_base, ___a, ___in, ___len);
}

int LIB_i2d_ISSUER_SIGN_TOOL(struct Library * _base, const ISSUER_SIGN_TOOL * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_ISSUER_SIGN_TOOL(void)
{
  const ISSUER_SIGN_TOOL * ___a = (const ISSUER_SIGN_TOOL *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_ISSUER_SIGN_TOOL(_base, ___a, ___out);
}

void LIB_ISSUER_SIGN_TOOL_free(struct Library * _base, ISSUER_SIGN_TOOL * ___a);

void LIBSTUB_ISSUER_SIGN_TOOL_free(void)
{
  ISSUER_SIGN_TOOL * ___a = (ISSUER_SIGN_TOOL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ISSUER_SIGN_TOOL_free(_base, ___a);
}

ISSUER_SIGN_TOOL * LIB_ISSUER_SIGN_TOOL_new(struct Library * _base);

ISSUER_SIGN_TOOL * LIBSTUB_ISSUER_SIGN_TOOL_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ISSUER_SIGN_TOOL_new(_base);
}

const ASN1_ITEM * LIB_ISSUER_SIGN_TOOL_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_ISSUER_SIGN_TOOL_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ISSUER_SIGN_TOOL_it(_base);
}

OSSL_SELF_TEST * LIB_OSSL_SELF_TEST_new(struct Library * _base, OSSL_CALLBACK * ___cb, void * ___cbarg);

OSSL_SELF_TEST * LIBSTUB_OSSL_SELF_TEST_new(void)
{
  OSSL_CALLBACK * ___cb = (OSSL_CALLBACK *)REG_A0;
  void * ___cbarg = (void *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_SELF_TEST_new(_base, ___cb, ___cbarg);
}

void LIB_OSSL_SELF_TEST_free(struct Library * _base, OSSL_SELF_TEST * ___st);

void LIBSTUB_OSSL_SELF_TEST_free(void)
{
  OSSL_SELF_TEST * ___st = (OSSL_SELF_TEST *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_SELF_TEST_free(_base, ___st);
}

void LIB_OSSL_SELF_TEST_onbegin(struct Library * _base, OSSL_SELF_TEST * ___st, const char * ___type, const char * ___desc);

void LIBSTUB_OSSL_SELF_TEST_onbegin(void)
{
  OSSL_SELF_TEST * ___st = (OSSL_SELF_TEST *)REG_A0;
  const char * ___type = (const char *)REG_A1;
  const char * ___desc = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_SELF_TEST_onbegin(_base, ___st, ___type, ___desc);
}

int LIB_OSSL_SELF_TEST_oncorrupt_byte(struct Library * _base, OSSL_SELF_TEST * ___st, unsigned char * ___bytes);

int LIBSTUB_OSSL_SELF_TEST_oncorrupt_byte(void)
{
  OSSL_SELF_TEST * ___st = (OSSL_SELF_TEST *)REG_A0;
  unsigned char * ___bytes = (unsigned char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_SELF_TEST_oncorrupt_byte(_base, ___st, ___bytes);
}

void LIB_OSSL_SELF_TEST_onend(struct Library * _base, OSSL_SELF_TEST * ___st, int ___ret);

void LIBSTUB_OSSL_SELF_TEST_onend(void)
{
  OSSL_SELF_TEST * ___st = (OSSL_SELF_TEST *)REG_A0;
  int ___ret = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_SELF_TEST_onend(_base, ___st, ___ret);
}

int LIB_OSSL_PROVIDER_set_default_search_path(struct Library * _base, OSSL_LIB_CTX * ___a, const char * ___path);

int LIBSTUB_OSSL_PROVIDER_set_default_search_path(void)
{
  OSSL_LIB_CTX * ___a = (OSSL_LIB_CTX *)REG_A0;
  const char * ___path = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_set_default_search_path(_base, ___a, ___path);
}

ASN1_OCTET_STRING * LIB_X509_digest_sig(struct Library * _base, const X509 * ___cert, EVP_MD ** ___md_used, int * ___md_is_fallback);

ASN1_OCTET_STRING * LIBSTUB_X509_digest_sig(void)
{
  const X509 * ___cert = (const X509 *)REG_A0;
  EVP_MD ** ___md_used = (EVP_MD **)REG_A1;
  int * ___md_is_fallback = (int *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_digest_sig(_base, ___cert, ___md_used, ___md_is_fallback);
}

OSSL_CMP_MSG * LIB_OSSL_CMP_MSG_dup(struct Library * _base, const OSSL_CMP_MSG * ___a);

OSSL_CMP_MSG * LIBSTUB_OSSL_CMP_MSG_dup(void)
{
  const OSSL_CMP_MSG * ___a = (const OSSL_CMP_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_MSG_dup(_base, ___a);
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_dup(struct Library * _base, const OSSL_CMP_ITAV * ___a);

OSSL_CMP_ITAV * LIBSTUB_OSSL_CMP_ITAV_dup(void)
{
  const OSSL_CMP_ITAV * ___a = (const OSSL_CMP_ITAV *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_dup(_base, ___a);
}

OSSL_CMP_PKISI * LIB_d2i_OSSL_CMP_PKISI(struct Library * _base, OSSL_CMP_PKISI ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CMP_PKISI * LIBSTUB_d2i_OSSL_CMP_PKISI(void)
{
  OSSL_CMP_PKISI ** ___a = (OSSL_CMP_PKISI **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CMP_PKISI(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CMP_PKISI(struct Library * _base, const OSSL_CMP_PKISI * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CMP_PKISI(void)
{
  const OSSL_CMP_PKISI * ___a = (const OSSL_CMP_PKISI *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CMP_PKISI(_base, ___a, ___out);
}

void LIB_OSSL_CMP_PKISI_free(struct Library * _base, OSSL_CMP_PKISI * ___a);

void LIBSTUB_OSSL_CMP_PKISI_free(void)
{
  OSSL_CMP_PKISI * ___a = (OSSL_CMP_PKISI *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_PKISI_free(_base, ___a);
}

OSSL_CMP_PKISI * LIB_OSSL_CMP_PKISI_new(struct Library * _base);

OSSL_CMP_PKISI * LIBSTUB_OSSL_CMP_PKISI_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_PKISI_new(_base);
}

const ASN1_ITEM * LIB_OSSL_CMP_PKISI_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CMP_PKISI_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_PKISI_it(_base);
}

OSSL_CMP_PKISI * LIB_OSSL_CMP_PKISI_dup(struct Library * _base, const OSSL_CMP_PKISI * ___a);

OSSL_CMP_PKISI * LIBSTUB_OSSL_CMP_PKISI_dup(void)
{
  const OSSL_CMP_PKISI * ___a = (const OSSL_CMP_PKISI *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_PKISI_dup(_base, ___a);
}

char * LIB_OSSL_CMP_snprint_PKIStatusInfo(struct Library * _base, const OSSL_CMP_PKISI * ___statusInfo, char * ___buf, size_t ___bufsize);

char * LIBSTUB_OSSL_CMP_snprint_PKIStatusInfo(void)
{
  const OSSL_CMP_PKISI * ___statusInfo = (const OSSL_CMP_PKISI *)REG_A0;
  char * ___buf = (char *)REG_A1;
  size_t ___bufsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_snprint_PKIStatusInfo(_base, ___statusInfo, ___buf, ___bufsize);
}

OSSL_CMP_PKISI * LIB_OSSL_CMP_STATUSINFO_new(struct Library * _base, int ___status, int ___fail_info, const char * ___text);

OSSL_CMP_PKISI * LIBSTUB_OSSL_CMP_STATUSINFO_new(void)
{
  int ___status = (int)REG_D0;
  int ___fail_info = (int)REG_D1;
  const char * ___text = (const char *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_STATUSINFO_new(_base, ___status, ___fail_info, ___text);
}

OSSL_CMP_MSG * LIB_d2i_OSSL_CMP_MSG_bio(struct Library * _base, BIO * ___bio, OSSL_CMP_MSG ** ___msg);

OSSL_CMP_MSG * LIBSTUB_d2i_OSSL_CMP_MSG_bio(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  OSSL_CMP_MSG ** ___msg = (OSSL_CMP_MSG **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CMP_MSG_bio(_base, ___bio, ___msg);
}

int LIB_i2d_OSSL_CMP_MSG_bio(struct Library * _base, BIO * ___bio, const OSSL_CMP_MSG * ___msg);

int LIBSTUB_i2d_OSSL_CMP_MSG_bio(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  const OSSL_CMP_MSG * ___msg = (const OSSL_CMP_MSG *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CMP_MSG_bio(_base, ___bio, ___msg);
}

OSSL_CMP_MSG * LIB_OSSL_CMP_SRV_process_request(struct Library * _base, OSSL_CMP_SRV_CTX * ___srv_ctx, const OSSL_CMP_MSG * ___req);

OSSL_CMP_MSG * LIBSTUB_OSSL_CMP_SRV_process_request(void)
{
  OSSL_CMP_SRV_CTX * ___srv_ctx = (OSSL_CMP_SRV_CTX *)REG_A0;
  const OSSL_CMP_MSG * ___req = (const OSSL_CMP_MSG *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_SRV_process_request(_base, ___srv_ctx, ___req);
}

OSSL_CMP_MSG * LIB_OSSL_CMP_CTX_server_perform(struct Library * _base, OSSL_CMP_CTX * ___client_ctx, const OSSL_CMP_MSG * ___req);

OSSL_CMP_MSG * LIBSTUB_OSSL_CMP_CTX_server_perform(void)
{
  OSSL_CMP_CTX * ___client_ctx = (OSSL_CMP_CTX *)REG_A0;
  const OSSL_CMP_MSG * ___req = (const OSSL_CMP_MSG *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_server_perform(_base, ___client_ctx, ___req);
}

OSSL_CMP_SRV_CTX * LIB_OSSL_CMP_SRV_CTX_new(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

OSSL_CMP_SRV_CTX * LIBSTUB_OSSL_CMP_SRV_CTX_new(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_SRV_CTX_new(_base, ___libctx, ___propq);
}

void LIB_OSSL_CMP_SRV_CTX_free(struct Library * _base, OSSL_CMP_SRV_CTX * ___srv_ctx);

void LIBSTUB_OSSL_CMP_SRV_CTX_free(void)
{
  OSSL_CMP_SRV_CTX * ___srv_ctx = (OSSL_CMP_SRV_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_SRV_CTX_free(_base, ___srv_ctx);
}

int LIB_OSSL_CMP_SRV_CTX_init(struct Library * _base, OSSL_CMP_SRV_CTX * ___srv_ctx, void * ___custom_ctx, OSSL_CMP_SRV_cert_request_cb_t ___process_cert_request, OSSL_CMP_SRV_rr_cb_t ___process_rr, OSSL_CMP_SRV_genm_cb_t ___process_genm, OSSL_CMP_SRV_error_cb_t ___process_error, OSSL_CMP_SRV_certConf_cb_t ___process_certConf, OSSL_CMP_SRV_pollReq_cb_t ___process_pollReq);

int LIBSTUB_OSSL_CMP_SRV_CTX_init(void)
{
  OSSL_CMP_SRV_CTX * ___srv_ctx = (OSSL_CMP_SRV_CTX *)REG_A0;
  void * ___custom_ctx = (void *)REG_A1;
  OSSL_CMP_SRV_cert_request_cb_t ___process_cert_request = (OSSL_CMP_SRV_cert_request_cb_t)REG_A2;
  OSSL_CMP_SRV_rr_cb_t ___process_rr = (OSSL_CMP_SRV_rr_cb_t)REG_A3;
  OSSL_CMP_SRV_genm_cb_t ___process_genm = (OSSL_CMP_SRV_genm_cb_t)REG_D0;
  OSSL_CMP_SRV_error_cb_t ___process_error = (OSSL_CMP_SRV_error_cb_t)REG_D1;
  OSSL_CMP_SRV_certConf_cb_t ___process_certConf = (OSSL_CMP_SRV_certConf_cb_t)REG_D2;
  OSSL_CMP_SRV_pollReq_cb_t ___process_pollReq = (OSSL_CMP_SRV_pollReq_cb_t)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_SRV_CTX_init(_base, ___srv_ctx, ___custom_ctx, ___process_cert_request, ___process_rr, ___process_genm, ___process_error, ___process_certConf, ___process_pollReq);
}

OSSL_CMP_CTX * LIB_OSSL_CMP_SRV_CTX_get0_cmp_ctx(struct Library * _base, const OSSL_CMP_SRV_CTX * ___srv_ctx);

OSSL_CMP_CTX * LIBSTUB_OSSL_CMP_SRV_CTX_get0_cmp_ctx(void)
{
  const OSSL_CMP_SRV_CTX * ___srv_ctx = (const OSSL_CMP_SRV_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_SRV_CTX_get0_cmp_ctx(_base, ___srv_ctx);
}

void * LIB_OSSL_CMP_SRV_CTX_get0_custom_ctx(struct Library * _base, const OSSL_CMP_SRV_CTX * ___srv_ctx);

void * LIBSTUB_OSSL_CMP_SRV_CTX_get0_custom_ctx(void)
{
  const OSSL_CMP_SRV_CTX * ___srv_ctx = (const OSSL_CMP_SRV_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_SRV_CTX_get0_custom_ctx(_base, ___srv_ctx);
}

int LIB_OSSL_CMP_SRV_CTX_set_send_unprotected_errors(struct Library * _base, OSSL_CMP_SRV_CTX * ___srv_ctx, int ___val);

int LIBSTUB_OSSL_CMP_SRV_CTX_set_send_unprotected_errors(void)
{
  OSSL_CMP_SRV_CTX * ___srv_ctx = (OSSL_CMP_SRV_CTX *)REG_A0;
  int ___val = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_SRV_CTX_set_send_unprotected_errors(_base, ___srv_ctx, ___val);
}

int LIB_OSSL_CMP_SRV_CTX_set_accept_unprotected(struct Library * _base, OSSL_CMP_SRV_CTX * ___srv_ctx, int ___val);

int LIBSTUB_OSSL_CMP_SRV_CTX_set_accept_unprotected(void)
{
  OSSL_CMP_SRV_CTX * ___srv_ctx = (OSSL_CMP_SRV_CTX *)REG_A0;
  int ___val = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_SRV_CTX_set_accept_unprotected(_base, ___srv_ctx, ___val);
}

int LIB_OSSL_CMP_SRV_CTX_set_accept_raverified(struct Library * _base, OSSL_CMP_SRV_CTX * ___srv_ctx, int ___val);

int LIBSTUB_OSSL_CMP_SRV_CTX_set_accept_raverified(void)
{
  OSSL_CMP_SRV_CTX * ___srv_ctx = (OSSL_CMP_SRV_CTX *)REG_A0;
  int ___val = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_SRV_CTX_set_accept_raverified(_base, ___srv_ctx, ___val);
}

int LIB_OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(struct Library * _base, OSSL_CMP_SRV_CTX * ___srv_ctx, int ___val);

int LIBSTUB_OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(void)
{
  OSSL_CMP_SRV_CTX * ___srv_ctx = (OSSL_CMP_SRV_CTX *)REG_A0;
  int ___val = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(_base, ___srv_ctx, ___val);
}

X509 * LIB_OSSL_CMP_exec_certreq(struct Library * _base, OSSL_CMP_CTX * ___ctx, int ___req_type, const OSSL_CRMF_MSG * ___crm);

X509 * LIBSTUB_OSSL_CMP_exec_certreq(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  int ___req_type = (int)REG_D0;
  const OSSL_CRMF_MSG * ___crm = (const OSSL_CRMF_MSG *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_exec_certreq(_base, ___ctx, ___req_type, ___crm);
}

int LIB_OSSL_CMP_try_certreq(struct Library * _base, OSSL_CMP_CTX * ___ctx, int ___req_type, const OSSL_CRMF_MSG * ___crm, int * ___checkAfter);

int LIBSTUB_OSSL_CMP_try_certreq(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  int ___req_type = (int)REG_D0;
  const OSSL_CRMF_MSG * ___crm = (const OSSL_CRMF_MSG *)REG_A1;
  int * ___checkAfter = (int *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_try_certreq(_base, ___ctx, ___req_type, ___crm, ___checkAfter);
}

int LIB_OSSL_CMP_certConf_cb(struct Library * _base, OSSL_CMP_CTX * ___ctx, X509 * ___cert, int ___fail_info, const char ** ___text);

int LIBSTUB_OSSL_CMP_certConf_cb(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  X509 * ___cert = (X509 *)REG_A1;
  int ___fail_info = (int)REG_D0;
  const char ** ___text = (const char **)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_certConf_cb(_base, ___ctx, ___cert, ___fail_info, ___text);
}

int LIB_OSSL_CMP_exec_RR_ses(struct Library * _base, OSSL_CMP_CTX * ___ctx);

int LIBSTUB_OSSL_CMP_exec_RR_ses(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_exec_RR_ses(_base, ___ctx);
}

STACK_OF(OSSL_CMP_ITAV) * LIB_OSSL_CMP_exec_GENM_ses(struct Library * _base, OSSL_CMP_CTX * ___ctx);

STACK_OF(OSSL_CMP_ITAV) * LIBSTUB_OSSL_CMP_exec_GENM_ses(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_exec_GENM_ses(_base, ___ctx);
}

OSSL_CMP_MSG * LIB_OSSL_CMP_MSG_http_perform(struct Library * _base, OSSL_CMP_CTX * ___ctx, const OSSL_CMP_MSG * ___req);

OSSL_CMP_MSG * LIBSTUB_OSSL_CMP_MSG_http_perform(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const OSSL_CMP_MSG * ___req = (const OSSL_CMP_MSG *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_MSG_http_perform(_base, ___ctx, ___req);
}

OSSL_CMP_MSG * LIB_OSSL_CMP_MSG_read(struct Library * _base, const char * ___file, OSSL_LIB_CTX * ___libctx, const char * ___propq);

OSSL_CMP_MSG * LIBSTUB_OSSL_CMP_MSG_read(void)
{
  const char * ___file = (const char *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_MSG_read(_base, ___file, ___libctx, ___propq);
}

int LIB_OSSL_CMP_MSG_write(struct Library * _base, const char * ___file, const OSSL_CMP_MSG * ___msg);

int LIBSTUB_OSSL_CMP_MSG_write(void)
{
  const char * ___file = (const char *)REG_A0;
  const OSSL_CMP_MSG * ___msg = (const OSSL_CMP_MSG *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_MSG_write(_base, ___file, ___msg);
}

EVP_PKEY * LIB_EVP_PKEY_Q_vkeygen(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq, const char * ___type, long * ___args);

EVP_PKEY * LIBSTUB_EVP_PKEY_Q_vkeygen(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  const char * ___type = (const char *)REG_A2;
  long * ___args = (long *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_Q_vkeygen(_base, ___libctx, ___propq, ___type, ___args);
}

int LIB_EVP_PKEY_generate(struct Library * _base, EVP_PKEY_CTX * ___ctx, EVP_PKEY ** ___ppkey);

int LIBSTUB_EVP_PKEY_generate(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  EVP_PKEY ** ___ppkey = (EVP_PKEY **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_generate(_base, ___ctx, ___ppkey);
}

int LIB_EVP_PKEY_CTX_set_rsa_keygen_bits(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___bits);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_keygen_bits(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___bits = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_keygen_bits(_base, ___ctx, ___bits);
}

int LIB_EVP_PKEY_CTX_set_rsa_keygen_pubexp(struct Library * _base, EVP_PKEY_CTX * ___ctx, BIGNUM * ___pubexp);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_keygen_pubexp(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  BIGNUM * ___pubexp = (BIGNUM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_keygen_pubexp(_base, ___ctx, ___pubexp);
}

int LIB_EVP_PKEY_CTX_set1_rsa_keygen_pubexp(struct Library * _base, EVP_PKEY_CTX * ___ctx, BIGNUM * ___pubexp);

int LIBSTUB_EVP_PKEY_CTX_set1_rsa_keygen_pubexp(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  BIGNUM * ___pubexp = (BIGNUM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set1_rsa_keygen_pubexp(_base, ___ctx, ___pubexp);
}

int LIB_EVP_PKEY_CTX_set_rsa_keygen_primes(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___primes);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_keygen_primes(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___primes = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_keygen_primes(_base, ___ctx, ___primes);
}

CONF * LIB_NCONF_new_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, CONF_METHOD * ___meth);

CONF * LIBSTUB_NCONF_new_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  CONF_METHOD * ___meth = (CONF_METHOD *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_NCONF_new_ex(_base, ___libctx, ___meth);
}

int LIB_CONF_modules_load_file_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___filename, const char * ___appname, unsigned long ___flags);

int LIBSTUB_CONF_modules_load_file_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___filename = (const char *)REG_A1;
  const char * ___appname = (const char *)REG_A2;
  unsigned long ___flags = (unsigned long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CONF_modules_load_file_ex(_base, ___libctx, ___filename, ___appname, ___flags);
}

int LIB_OSSL_LIB_CTX_load_config(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___config_file);

int LIBSTUB_OSSL_LIB_CTX_load_config(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___config_file = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_LIB_CTX_load_config(_base, ___ctx, ___config_file);
}

OSSL_PARAM * LIB_OSSL_PARAM_BLD_to_param(struct Library * _base, OSSL_PARAM_BLD * ___bld);

OSSL_PARAM * LIBSTUB_OSSL_PARAM_BLD_to_param(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_to_param(_base, ___bld);
}

int LIB_OSSL_PARAM_BLD_push_int(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, int ___val);

int LIBSTUB_OSSL_PARAM_BLD_push_int(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  int ___val = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_int(_base, ___bld, ___key, ___val);
}

int LIB_OSSL_PARAM_BLD_push_uint(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, unsigned int ___val);

int LIBSTUB_OSSL_PARAM_BLD_push_uint(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  unsigned int ___val = (unsigned int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_uint(_base, ___bld, ___key, ___val);
}

int LIB_OSSL_PARAM_BLD_push_long(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, long int ___val);

int LIBSTUB_OSSL_PARAM_BLD_push_long(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  long int ___val = (long int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_long(_base, ___bld, ___key, ___val);
}

int LIB_OSSL_PARAM_BLD_push_ulong(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, unsigned long int ___val);

int LIBSTUB_OSSL_PARAM_BLD_push_ulong(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  unsigned long int ___val = (unsigned long int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_ulong(_base, ___bld, ___key, ___val);
}

int LIB_OSSL_PARAM_BLD_push_int32(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, int32_t ___val);

int LIBSTUB_OSSL_PARAM_BLD_push_int32(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  int32_t ___val = (int32_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_int32(_base, ___bld, ___key, ___val);
}

int LIB_OSSL_PARAM_BLD_push_uint32(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, uint32_t ___val);

int LIBSTUB_OSSL_PARAM_BLD_push_uint32(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  uint32_t ___val = (uint32_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_uint32(_base, ___bld, ___key, ___val);
}

int LIB_OSSL_PARAM_BLD_push_int64(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, int64_t ___val);

int LIBSTUB_OSSL_PARAM_BLD_push_int64(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  int64_t ___val = (int64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_int64(_base, ___bld, ___key, ___val);
}

int LIB_OSSL_PARAM_BLD_push_uint64(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, uint64_t ___val);

int LIBSTUB_OSSL_PARAM_BLD_push_uint64(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  uint64_t ___val = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_uint64(_base, ___bld, ___key, ___val);
}

int LIB_OSSL_PARAM_BLD_push_size_t(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, size_t ___val);

int LIBSTUB_OSSL_PARAM_BLD_push_size_t(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  size_t ___val = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_size_t(_base, ___bld, ___key, ___val);
}

int LIB_OSSL_PARAM_BLD_push_double(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, double ___val);

int LIBSTUB_OSSL_PARAM_BLD_push_double(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  double ___val = (double)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_double(_base, ___bld, ___key, ___val);
}

int LIB_OSSL_PARAM_BLD_push_BN(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, const BIGNUM * ___bn);

int LIBSTUB_OSSL_PARAM_BLD_push_BN(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  const BIGNUM * ___bn = (const BIGNUM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_BN(_base, ___bld, ___key, ___bn);
}

int LIB_OSSL_PARAM_BLD_push_BN_pad(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, const BIGNUM * ___bn, size_t ___sz);

int LIBSTUB_OSSL_PARAM_BLD_push_BN_pad(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  const BIGNUM * ___bn = (const BIGNUM *)REG_A2;
  size_t ___sz = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_BN_pad(_base, ___bld, ___key, ___bn, ___sz);
}

int LIB_OSSL_PARAM_BLD_push_utf8_string(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, const char * ___buf, size_t ___bsize);

int LIBSTUB_OSSL_PARAM_BLD_push_utf8_string(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  const char * ___buf = (const char *)REG_A2;
  size_t ___bsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_utf8_string(_base, ___bld, ___key, ___buf, ___bsize);
}

int LIB_OSSL_PARAM_BLD_push_utf8_ptr(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, char * ___buf, size_t ___bsize);

int LIBSTUB_OSSL_PARAM_BLD_push_utf8_ptr(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  char * ___buf = (char *)REG_A2;
  size_t ___bsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_utf8_ptr(_base, ___bld, ___key, ___buf, ___bsize);
}

int LIB_OSSL_PARAM_BLD_push_octet_string(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, const void * ___buf, size_t ___bsize);

int LIBSTUB_OSSL_PARAM_BLD_push_octet_string(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  const void * ___buf = (const void *)REG_A2;
  size_t ___bsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_octet_string(_base, ___bld, ___key, ___buf, ___bsize);
}

int LIB_OSSL_PARAM_BLD_push_octet_ptr(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, void * ___buf, size_t ___bsize);

int LIBSTUB_OSSL_PARAM_BLD_push_octet_ptr(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  void * ___buf = (void *)REG_A2;
  size_t ___bsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_octet_ptr(_base, ___bld, ___key, ___buf, ___bsize);
}

OSSL_PARAM_BLD * LIB_OSSL_PARAM_BLD_new(struct Library * _base);

OSSL_PARAM_BLD * LIBSTUB_OSSL_PARAM_BLD_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_new(_base);
}

void LIB_OSSL_PARAM_BLD_free(struct Library * _base, OSSL_PARAM_BLD * ___bld);

void LIBSTUB_OSSL_PARAM_BLD_free(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_free(_base, ___bld);
}

int LIB_EVP_PKEY_set_type_by_keymgmt(struct Library * _base, EVP_PKEY * ___pkey, EVP_KEYMGMT * ___keymgmt);

int LIBSTUB_EVP_PKEY_set_type_by_keymgmt(void)
{
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A0;
  EVP_KEYMGMT * ___keymgmt = (EVP_KEYMGMT *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_set_type_by_keymgmt(_base, ___pkey, ___keymgmt);
}

int LIB_OCSP_RESPID_set_by_key_ex(struct Library * _base, OCSP_RESPID * ___respid, X509 * ___cert, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_OCSP_RESPID_set_by_key_ex(void)
{
  OCSP_RESPID * ___respid = (OCSP_RESPID *)REG_A0;
  X509 * ___cert = (X509 *)REG_A1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OCSP_RESPID_set_by_key_ex(_base, ___respid, ___cert, ___libctx, ___propq);
}

int LIB_OCSP_RESPID_match_ex(struct Library * _base, OCSP_RESPID * ___respid, X509 * ___cert, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_OCSP_RESPID_match_ex(void)
{
  OCSP_RESPID * ___respid = (OCSP_RESPID *)REG_A0;
  X509 * ___cert = (X509 *)REG_A1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OCSP_RESPID_match_ex(_base, ___respid, ___cert, ___libctx, ___propq);
}

char * LIB_SRP_create_verifier_ex(struct Library * _base, const char * ___user, const char * ___pass, char ** ___salt, char ** ___verifier, const char * ___N, const char * ___g, OSSL_LIB_CTX * ___libctx, const char * ___propq);

char * LIBSTUB_SRP_create_verifier_ex(void)
{
  const char * ___user = (const char *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  char ** ___salt = (char **)REG_A2;
  char ** ___verifier = (char **)REG_A3;
  const char * ___N = (const char *)REG_D0;
  const char * ___g = (const char *)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D2;
  const char * ___propq = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SRP_create_verifier_ex(_base, ___user, ___pass, ___salt, ___verifier, ___N, ___g, ___libctx, ___propq);
}

int LIB_SRP_create_verifier_BN_ex(struct Library * _base, const char * ___user, const char * ___pass, BIGNUM ** ___salt, BIGNUM ** ___verifier, const BIGNUM * ___N, const BIGNUM * ___g, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_SRP_create_verifier_BN_ex(void)
{
  const char * ___user = (const char *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  BIGNUM ** ___salt = (BIGNUM **)REG_A2;
  BIGNUM ** ___verifier = (BIGNUM **)REG_A3;
  const BIGNUM * ___N = (const BIGNUM *)REG_D0;
  const BIGNUM * ___g = (const BIGNUM *)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D2;
  const char * ___propq = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SRP_create_verifier_BN_ex(_base, ___user, ___pass, ___salt, ___verifier, ___N, ___g, ___libctx, ___propq);
}

BIGNUM * LIB_SRP_Calc_B_ex(struct Library * _base, const BIGNUM * ___b, const BIGNUM * ___N, const BIGNUM * ___g, const BIGNUM * ___v, OSSL_LIB_CTX * ___libctx, const char * ___propq);

BIGNUM * LIBSTUB_SRP_Calc_B_ex(void)
{
  const BIGNUM * ___b = (const BIGNUM *)REG_A0;
  const BIGNUM * ___N = (const BIGNUM *)REG_A1;
  const BIGNUM * ___g = (const BIGNUM *)REG_A2;
  const BIGNUM * ___v = (const BIGNUM *)REG_A3;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D0;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SRP_Calc_B_ex(_base, ___b, ___N, ___g, ___v, ___libctx, ___propq);
}

BIGNUM * LIB_SRP_Calc_u_ex(struct Library * _base, const BIGNUM * ___A, const BIGNUM * ___B, const BIGNUM * ___N, OSSL_LIB_CTX * ___libctx, const char * ___propq);

BIGNUM * LIBSTUB_SRP_Calc_u_ex(void)
{
  const BIGNUM * ___A = (const BIGNUM *)REG_A0;
  const BIGNUM * ___B = (const BIGNUM *)REG_A1;
  const BIGNUM * ___N = (const BIGNUM *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SRP_Calc_u_ex(_base, ___A, ___B, ___N, ___libctx, ___propq);
}

BIGNUM * LIB_SRP_Calc_x_ex(struct Library * _base, const BIGNUM * ___s, const char * ___user, const char * ___pass, OSSL_LIB_CTX * ___libctx, const char * ___propq);

BIGNUM * LIBSTUB_SRP_Calc_x_ex(void)
{
  const BIGNUM * ___s = (const BIGNUM *)REG_A0;
  const char * ___user = (const char *)REG_A1;
  const char * ___pass = (const char *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SRP_Calc_x_ex(_base, ___s, ___user, ___pass, ___libctx, ___propq);
}

BIGNUM * LIB_SRP_Calc_client_key_ex(struct Library * _base, const BIGNUM * ___N, const BIGNUM * ___B, const BIGNUM * ___g, const BIGNUM * ___x, const BIGNUM * ___a, const BIGNUM * ___u, OSSL_LIB_CTX * ___libctx, const char * ___propq);

BIGNUM * LIBSTUB_SRP_Calc_client_key_ex(void)
{
  const BIGNUM * ___N = (const BIGNUM *)REG_A0;
  const BIGNUM * ___B = (const BIGNUM *)REG_A1;
  const BIGNUM * ___g = (const BIGNUM *)REG_A2;
  const BIGNUM * ___x = (const BIGNUM *)REG_A3;
  const BIGNUM * ___a = (const BIGNUM *)REG_D0;
  const BIGNUM * ___u = (const BIGNUM *)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D2;
  const char * ___propq = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SRP_Calc_client_key_ex(_base, ___N, ___B, ___g, ___x, ___a, ___u, ___libctx, ___propq);
}

const OSSL_PARAM * LIB_EVP_PKEY_gettable_params(struct Library * _base, const EVP_PKEY * ___pkey);

const OSSL_PARAM * LIBSTUB_EVP_PKEY_gettable_params(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_gettable_params(_base, ___pkey);
}

int LIB_EVP_PKEY_get_int_param(struct Library * _base, const EVP_PKEY * ___pkey, const char * ___key_name, int * ___out);

int LIBSTUB_EVP_PKEY_get_int_param(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  const char * ___key_name = (const char *)REG_A1;
  int * ___out = (int *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get_int_param(_base, ___pkey, ___key_name, ___out);
}

int LIB_EVP_PKEY_get_size_t_param(struct Library * _base, const EVP_PKEY * ___pkey, const char * ___key_name, size_t * ___out);

int LIBSTUB_EVP_PKEY_get_size_t_param(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  const char * ___key_name = (const char *)REG_A1;
  size_t * ___out = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get_size_t_param(_base, ___pkey, ___key_name, ___out);
}

int LIB_EVP_PKEY_get_bn_param(struct Library * _base, const EVP_PKEY * ___pkey, const char * ___key_name, BIGNUM ** ___bn);

int LIBSTUB_EVP_PKEY_get_bn_param(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  const char * ___key_name = (const char *)REG_A1;
  BIGNUM ** ___bn = (BIGNUM **)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get_bn_param(_base, ___pkey, ___key_name, ___bn);
}

int LIB_EVP_PKEY_get_utf8_string_param(struct Library * _base, const EVP_PKEY * ___pkey, const char * ___key_name, char * ___str, size_t ___max_buf_sz, size_t * ___out_sz);

int LIBSTUB_EVP_PKEY_get_utf8_string_param(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  const char * ___key_name = (const char *)REG_A1;
  char * ___str = (char *)REG_A2;
  size_t ___max_buf_sz = (size_t)REG_D0;
  size_t * ___out_sz = (size_t *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get_utf8_string_param(_base, ___pkey, ___key_name, ___str, ___max_buf_sz, ___out_sz);
}

int LIB_EVP_PKEY_get_octet_string_param(struct Library * _base, const EVP_PKEY * ___pkey, const char * ___key_name, unsigned char * ___buf, size_t ___max_buf_sz, size_t * ___out_sz);

int LIBSTUB_EVP_PKEY_get_octet_string_param(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  const char * ___key_name = (const char *)REG_A1;
  unsigned char * ___buf = (unsigned char *)REG_A2;
  size_t ___max_buf_sz = (size_t)REG_D0;
  size_t * ___out_sz = (size_t *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get_octet_string_param(_base, ___pkey, ___key_name, ___buf, ___max_buf_sz, ___out_sz);
}

int LIB_EVP_PKEY_is_a(struct Library * _base, const EVP_PKEY * ___pkey, const char * ___name);

int LIBSTUB_EVP_PKEY_is_a(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_is_a(_base, ___pkey, ___name);
}

int LIB_EVP_PKEY_can_sign(struct Library * _base, const EVP_PKEY * ___pkey);

int LIBSTUB_EVP_PKEY_can_sign(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_can_sign(_base, ___pkey);
}

X509_STORE_CTX * LIB_X509_STORE_CTX_new_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

X509_STORE_CTX * LIBSTUB_X509_STORE_CTX_new_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_CTX_new_ex(_base, ___libctx, ___propq);
}

int LIB_X509_STORE_CTX_verify(struct Library * _base, X509_STORE_CTX * ___ctx);

int LIBSTUB_X509_STORE_CTX_verify(void)
{
  X509_STORE_CTX * ___ctx = (X509_STORE_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_CTX_verify(_base, ___ctx);
}

CT_POLICY_EVAL_CTX * LIB_CT_POLICY_EVAL_CTX_new_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

CT_POLICY_EVAL_CTX * LIBSTUB_CT_POLICY_EVAL_CTX_new_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CT_POLICY_EVAL_CTX_new_ex(_base, ___libctx, ___propq);
}

CTLOG * LIB_CTLOG_new_ex(struct Library * _base, EVP_PKEY * ___public_key, const char * ___name, OSSL_LIB_CTX * ___libctx, const char * ___propq);

CTLOG * LIBSTUB_CTLOG_new_ex(void)
{
  EVP_PKEY * ___public_key = (EVP_PKEY *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CTLOG_new_ex(_base, ___public_key, ___name, ___libctx, ___propq);
}

int LIB_CTLOG_new_from_base64_ex(struct Library * _base, CTLOG ** ___ct_log, const char * ___pkey_base64, const char * ___name, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_CTLOG_new_from_base64_ex(void)
{
  CTLOG ** ___ct_log = (CTLOG **)REG_A0;
  const char * ___pkey_base64 = (const char *)REG_A1;
  const char * ___name = (const char *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CTLOG_new_from_base64_ex(_base, ___ct_log, ___pkey_base64, ___name, ___libctx, ___propq);
}

CTLOG_STORE * LIB_CTLOG_STORE_new_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

CTLOG_STORE * LIBSTUB_CTLOG_STORE_new_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CTLOG_STORE_new_ex(_base, ___libctx, ___propq);
}

int LIB_EVP_PKEY_set_ex_data(struct Library * _base, EVP_PKEY * ___key, int ___idx, void * ___arg);

int LIBSTUB_EVP_PKEY_set_ex_data(void)
{
  EVP_PKEY * ___key = (EVP_PKEY *)REG_A0;
  int ___idx = (int)REG_D0;
  void * ___arg = (void *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_set_ex_data(_base, ___key, ___idx, ___arg);
}

void * LIB_EVP_PKEY_get_ex_data(struct Library * _base, const EVP_PKEY * ___key, int ___idx);

void * LIBSTUB_EVP_PKEY_get_ex_data(void)
{
  const EVP_PKEY * ___key = (const EVP_PKEY *)REG_A0;
  int ___idx = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get_ex_data(_base, ___key, ___idx);
}

int LIB_EVP_PKEY_CTX_set_group_name(struct Library * _base, EVP_PKEY_CTX * ___ctx, const char * ___name);

int LIBSTUB_EVP_PKEY_CTX_set_group_name(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_group_name(_base, ___ctx, ___name);
}

int LIB_EVP_PKEY_CTX_get_group_name(struct Library * _base, EVP_PKEY_CTX * ___ctx, char * ___name, size_t ___namelen);

int LIBSTUB_EVP_PKEY_CTX_get_group_name(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  char * ___name = (char *)REG_A1;
  size_t ___namelen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_group_name(_base, ___ctx, ___name, ___namelen);
}

int LIB_EVP_PKEY_CTX_set_ec_paramgen_curve_nid(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___nid);

int LIBSTUB_EVP_PKEY_CTX_set_ec_paramgen_curve_nid(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___nid = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_ec_paramgen_curve_nid(_base, ___ctx, ___nid);
}

EVP_PKEY * LIB_d2i_PrivateKey_ex(struct Library * _base, int ___type, EVP_PKEY ** ___a, const unsigned char ** ___pp, long ___length, OSSL_LIB_CTX * ___libctx, const char * ___propq);

EVP_PKEY * LIBSTUB_d2i_PrivateKey_ex(void)
{
  int ___type = (int)REG_D0;
  EVP_PKEY ** ___a = (EVP_PKEY **)REG_A0;
  const unsigned char ** ___pp = (const unsigned char **)REG_A1;
  long ___length = (long)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_PrivateKey_ex(_base, ___type, ___a, ___pp, ___length, ___libctx, ___propq);
}

EVP_PKEY * LIB_d2i_AutoPrivateKey_ex(struct Library * _base, EVP_PKEY ** ___a, const unsigned char ** ___pp, long ___length, OSSL_LIB_CTX * ___libctx, const char * ___propq);

EVP_PKEY * LIBSTUB_d2i_AutoPrivateKey_ex(void)
{
  EVP_PKEY ** ___a = (EVP_PKEY **)REG_A0;
  const unsigned char ** ___pp = (const unsigned char **)REG_A1;
  long ___length = (long)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_AutoPrivateKey_ex(_base, ___a, ___pp, ___length, ___libctx, ___propq);
}

EVP_PKEY * LIB_d2i_PrivateKey_ex_bio(struct Library * _base, BIO * ___bp, EVP_PKEY ** ___a, OSSL_LIB_CTX * ___libctx, const char * ___propq);

EVP_PKEY * LIBSTUB_d2i_PrivateKey_ex_bio(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  EVP_PKEY ** ___a = (EVP_PKEY **)REG_A1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_PrivateKey_ex_bio(_base, ___bp, ___a, ___libctx, ___propq);
}

EVP_PKEY * LIB_PEM_read_bio_PrivateKey_ex(struct Library * _base, BIO * ___out, EVP_PKEY ** ___x, pem_password_cb * ___cb, void * ___u, OSSL_LIB_CTX * ___libctx, const char * ___propq);

EVP_PKEY * LIBSTUB_PEM_read_bio_PrivateKey_ex(void)
{
  BIO * ___out = (BIO *)REG_A0;
  EVP_PKEY ** ___x = (EVP_PKEY **)REG_A1;
  pem_password_cb * ___cb = (pem_password_cb *)REG_A2;
  void * ___u = (void *)REG_A3;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D0;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PEM_read_bio_PrivateKey_ex(_base, ___out, ___x, ___cb, ___u, ___libctx, ___propq);
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_bits(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___nbits);

int LIBSTUB_EVP_PKEY_CTX_set_dsa_paramgen_bits(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___nbits = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dsa_paramgen_bits(_base, ___ctx, ___nbits);
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_q_bits(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___qbits);

int LIBSTUB_EVP_PKEY_CTX_set_dsa_paramgen_q_bits(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___qbits = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dsa_paramgen_q_bits(_base, ___ctx, ___qbits);
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_md_props(struct Library * _base, EVP_PKEY_CTX * ___ctx, const char * ___md_name, const char * ___md_properties);

int LIBSTUB_EVP_PKEY_CTX_set_dsa_paramgen_md_props(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const char * ___md_name = (const char *)REG_A1;
  const char * ___md_properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dsa_paramgen_md_props(_base, ___ctx, ___md_name, ___md_properties);
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_gindex(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___gindex);

int LIBSTUB_EVP_PKEY_CTX_set_dsa_paramgen_gindex(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___gindex = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dsa_paramgen_gindex(_base, ___ctx, ___gindex);
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_type(struct Library * _base, EVP_PKEY_CTX * ___ctx, const char * ___name);

int LIBSTUB_EVP_PKEY_CTX_set_dsa_paramgen_type(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dsa_paramgen_type(_base, ___ctx, ___name);
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_seed(struct Library * _base, EVP_PKEY_CTX * ___ctx, const unsigned char * ___seed, size_t ___seedlen);

int LIBSTUB_EVP_PKEY_CTX_set_dsa_paramgen_seed(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const unsigned char * ___seed = (const unsigned char *)REG_A1;
  size_t ___seedlen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dsa_paramgen_seed(_base, ___ctx, ___seed, ___seedlen);
}

int LIB_EVP_PKEY_CTX_set_dsa_paramgen_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD * ___md);

int LIBSTUB_EVP_PKEY_CTX_set_dsa_paramgen_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD * ___md = (const EVP_MD *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dsa_paramgen_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_set_dh_paramgen_type(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___typ);

int LIBSTUB_EVP_PKEY_CTX_set_dh_paramgen_type(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___typ = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dh_paramgen_type(_base, ___ctx, ___typ);
}

int LIB_EVP_PKEY_CTX_set_dh_paramgen_gindex(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___gindex);

int LIBSTUB_EVP_PKEY_CTX_set_dh_paramgen_gindex(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___gindex = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dh_paramgen_gindex(_base, ___ctx, ___gindex);
}

int LIB_EVP_PKEY_CTX_set_dh_paramgen_seed(struct Library * _base, EVP_PKEY_CTX * ___ctx, const unsigned char * ___seed, size_t ___seedlen);

int LIBSTUB_EVP_PKEY_CTX_set_dh_paramgen_seed(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const unsigned char * ___seed = (const unsigned char *)REG_A1;
  size_t ___seedlen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dh_paramgen_seed(_base, ___ctx, ___seed, ___seedlen);
}

int LIB_EVP_PKEY_CTX_set_dh_paramgen_prime_len(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___pbits);

int LIBSTUB_EVP_PKEY_CTX_set_dh_paramgen_prime_len(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___pbits = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dh_paramgen_prime_len(_base, ___ctx, ___pbits);
}

int LIB_EVP_PKEY_CTX_set_dh_paramgen_subprime_len(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___qlen);

int LIBSTUB_EVP_PKEY_CTX_set_dh_paramgen_subprime_len(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___qlen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dh_paramgen_subprime_len(_base, ___ctx, ___qlen);
}

int LIB_EVP_PKEY_CTX_set_dh_paramgen_generator(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___gen);

int LIBSTUB_EVP_PKEY_CTX_set_dh_paramgen_generator(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___gen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dh_paramgen_generator(_base, ___ctx, ___gen);
}

int LIB_EVP_PKEY_CTX_set_dh_nid(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___nid);

int LIBSTUB_EVP_PKEY_CTX_set_dh_nid(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___nid = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dh_nid(_base, ___ctx, ___nid);
}

int LIB_EVP_PKEY_CTX_set_dh_rfc5114(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___gen);

int LIBSTUB_EVP_PKEY_CTX_set_dh_rfc5114(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___gen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dh_rfc5114(_base, ___ctx, ___gen);
}

int LIB_EVP_PKEY_CTX_set_dhx_rfc5114(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___gen);

int LIBSTUB_EVP_PKEY_CTX_set_dhx_rfc5114(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___gen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dhx_rfc5114(_base, ___ctx, ___gen);
}

char * LIB_X509_VERIFY_PARAM_get0_host(struct Library * _base, X509_VERIFY_PARAM * ___param, int ___idx);

char * LIBSTUB_X509_VERIFY_PARAM_get0_host(void)
{
  X509_VERIFY_PARAM * ___param = (X509_VERIFY_PARAM *)REG_A0;
  int ___idx = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_VERIFY_PARAM_get0_host(_base, ___param, ___idx);
}

char * LIB_X509_VERIFY_PARAM_get0_email(struct Library * _base, X509_VERIFY_PARAM * ___param);

char * LIBSTUB_X509_VERIFY_PARAM_get0_email(void)
{
  X509_VERIFY_PARAM * ___param = (X509_VERIFY_PARAM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_VERIFY_PARAM_get0_email(_base, ___param);
}

char * LIB_X509_VERIFY_PARAM_get1_ip_asc(struct Library * _base, X509_VERIFY_PARAM * ___param);

char * LIBSTUB_X509_VERIFY_PARAM_get1_ip_asc(void)
{
  X509_VERIFY_PARAM * ___param = (X509_VERIFY_PARAM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_VERIFY_PARAM_get1_ip_asc(_base, ___param);
}

int LIB_OSSL_PARAM_modified(struct Library * _base, const OSSL_PARAM * ___p);

int LIBSTUB_OSSL_PARAM_modified(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_modified(_base, ___p);
}

void LIB_OSSL_PARAM_set_all_unmodified(struct Library * _base, OSSL_PARAM * ___p);

void LIBSTUB_OSSL_PARAM_set_all_unmodified(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_all_unmodified(_base, ___p);
}

EVP_RAND * LIB_EVP_RAND_fetch(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___algorithm, const char * ___properties);

EVP_RAND * LIBSTUB_EVP_RAND_fetch(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___algorithm = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_fetch(_base, ___libctx, ___algorithm, ___properties);
}

int LIB_EVP_RAND_up_ref(struct Library * _base, EVP_RAND * ___rand);

int LIBSTUB_EVP_RAND_up_ref(void)
{
  EVP_RAND * ___rand = (EVP_RAND *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_up_ref(_base, ___rand);
}

void LIB_EVP_RAND_free(struct Library * _base, EVP_RAND * ___rand);

void LIBSTUB_EVP_RAND_free(void)
{
  EVP_RAND * ___rand = (EVP_RAND *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_free(_base, ___rand);
}

const char * LIB_EVP_RAND_get0_name(struct Library * _base, const EVP_RAND * ___rand);

const char * LIBSTUB_EVP_RAND_get0_name(void)
{
  const EVP_RAND * ___rand = (const EVP_RAND *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_get0_name(_base, ___rand);
}

int LIB_EVP_RAND_is_a(struct Library * _base, const EVP_RAND * ___rand, const char * ___name);

int LIBSTUB_EVP_RAND_is_a(void)
{
  const EVP_RAND * ___rand = (const EVP_RAND *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_is_a(_base, ___rand, ___name);
}

const OSSL_PROVIDER * LIB_EVP_RAND_get0_provider(struct Library * _base, const EVP_RAND * ___rand);

const OSSL_PROVIDER * LIBSTUB_EVP_RAND_get0_provider(void)
{
  const EVP_RAND * ___rand = (const EVP_RAND *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_get0_provider(_base, ___rand);
}

int LIB_EVP_RAND_get_params(struct Library * _base, EVP_RAND * ___rand, OSSL_PARAM * ___params);

int LIBSTUB_EVP_RAND_get_params(void)
{
  EVP_RAND * ___rand = (EVP_RAND *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_get_params(_base, ___rand, ___params);
}

EVP_RAND_CTX * LIB_EVP_RAND_CTX_new(struct Library * _base, EVP_RAND * ___rand, EVP_RAND_CTX * ___parent);

EVP_RAND_CTX * LIBSTUB_EVP_RAND_CTX_new(void)
{
  EVP_RAND * ___rand = (EVP_RAND *)REG_A0;
  EVP_RAND_CTX * ___parent = (EVP_RAND_CTX *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_CTX_new(_base, ___rand, ___parent);
}

void LIB_EVP_RAND_CTX_free(struct Library * _base, EVP_RAND_CTX * ___ctx);

void LIBSTUB_EVP_RAND_CTX_free(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_CTX_free(_base, ___ctx);
}

EVP_RAND * LIB_EVP_RAND_CTX_get0_rand(struct Library * _base, EVP_RAND_CTX * ___ctx);

EVP_RAND * LIBSTUB_EVP_RAND_CTX_get0_rand(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_CTX_get0_rand(_base, ___ctx);
}

int LIB_EVP_RAND_CTX_get_params(struct Library * _base, EVP_RAND_CTX * ___ctx, OSSL_PARAM * ___params);

int LIBSTUB_EVP_RAND_CTX_get_params(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_CTX_get_params(_base, ___ctx, ___params);
}

int LIB_EVP_RAND_CTX_set_params(struct Library * _base, EVP_RAND_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_RAND_CTX_set_params(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_CTX_set_params(_base, ___ctx, ___params);
}

const OSSL_PARAM * LIB_EVP_RAND_gettable_params(struct Library * _base, const EVP_RAND * ___rand);

const OSSL_PARAM * LIBSTUB_EVP_RAND_gettable_params(void)
{
  const EVP_RAND * ___rand = (const EVP_RAND *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_gettable_params(_base, ___rand);
}

const OSSL_PARAM * LIB_EVP_RAND_gettable_ctx_params(struct Library * _base, const EVP_RAND * ___rand);

const OSSL_PARAM * LIBSTUB_EVP_RAND_gettable_ctx_params(void)
{
  const EVP_RAND * ___rand = (const EVP_RAND *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_gettable_ctx_params(_base, ___rand);
}

const OSSL_PARAM * LIB_EVP_RAND_settable_ctx_params(struct Library * _base, const EVP_RAND * ___rand);

const OSSL_PARAM * LIBSTUB_EVP_RAND_settable_ctx_params(void)
{
  const EVP_RAND * ___rand = (const EVP_RAND *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_settable_ctx_params(_base, ___rand);
}

void LIB_EVP_RAND_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(EVP_RAND *rand,void *arg), void * ___arg);

void LIBSTUB_EVP_RAND_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(EVP_RAND *rand,void *arg) = (void (*)(EVP_RAND *rand,void *arg))REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_do_all_provided(_base, ___libctx, ___fn, ___arg);
}

int LIB_EVP_RAND_names_do_all(struct Library * _base, const EVP_RAND * ___rand, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_EVP_RAND_names_do_all(void)
{
  const EVP_RAND * ___rand = (const EVP_RAND *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_names_do_all(_base, ___rand, ___fn, ___data);
}

int LIB_EVP_RAND_instantiate(struct Library * _base, EVP_RAND_CTX * ___ctx, unsigned int ___strength, int ___prediction_resistance, const unsigned char * ___pstr, size_t ___pstr_len, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_RAND_instantiate(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  unsigned int ___strength = (unsigned int)REG_D0;
  int ___prediction_resistance = (int)REG_D1;
  const unsigned char * ___pstr = (const unsigned char *)REG_A1;
  size_t ___pstr_len = (size_t)REG_D2;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_instantiate(_base, ___ctx, ___strength, ___prediction_resistance, ___pstr, ___pstr_len, ___params);
}

int LIB_EVP_RAND_uninstantiate(struct Library * _base, EVP_RAND_CTX * ___ctx);

int LIBSTUB_EVP_RAND_uninstantiate(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_uninstantiate(_base, ___ctx);
}

int LIB_EVP_RAND_generate(struct Library * _base, EVP_RAND_CTX * ___ctx, unsigned char * ___out, size_t ___outlen, unsigned int ___strength, int ___prediction_resistance, const unsigned char * ___addin, size_t ___addin_len);

int LIBSTUB_EVP_RAND_generate(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  unsigned char * ___out = (unsigned char *)REG_A1;
  size_t ___outlen = (size_t)REG_D0;
  unsigned int ___strength = (unsigned int)REG_D1;
  int ___prediction_resistance = (int)REG_D2;
  const unsigned char * ___addin = (const unsigned char *)REG_A2;
  size_t ___addin_len = (size_t)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_generate(_base, ___ctx, ___out, ___outlen, ___strength, ___prediction_resistance, ___addin, ___addin_len);
}

int LIB_EVP_RAND_reseed(struct Library * _base, EVP_RAND_CTX * ___ctx, int ___prediction_resistance, const unsigned char * ___ent, size_t ___ent_len, const unsigned char * ___addin, size_t ___addin_len);

int LIBSTUB_EVP_RAND_reseed(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  int ___prediction_resistance = (int)REG_D0;
  const unsigned char * ___ent = (const unsigned char *)REG_A1;
  size_t ___ent_len = (size_t)REG_D1;
  const unsigned char * ___addin = (const unsigned char *)REG_A2;
  size_t ___addin_len = (size_t)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_reseed(_base, ___ctx, ___prediction_resistance, ___ent, ___ent_len, ___addin, ___addin_len);
}

int LIB_EVP_RAND_nonce(struct Library * _base, EVP_RAND_CTX * ___ctx, unsigned char * ___out, size_t ___outlen);

int LIBSTUB_EVP_RAND_nonce(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  unsigned char * ___out = (unsigned char *)REG_A1;
  size_t ___outlen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_nonce(_base, ___ctx, ___out, ___outlen);
}

int LIB_EVP_RAND_enable_locking(struct Library * _base, EVP_RAND_CTX * ___ctx);

int LIBSTUB_EVP_RAND_enable_locking(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_enable_locking(_base, ___ctx);
}

int LIB_EVP_RAND_verify_zeroization(struct Library * _base, EVP_RAND_CTX * ___ctx);

int LIBSTUB_EVP_RAND_verify_zeroization(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_verify_zeroization(_base, ___ctx);
}

unsigned int LIB_EVP_RAND_get_strength(struct Library * _base, EVP_RAND_CTX * ___ctx);

unsigned int LIBSTUB_EVP_RAND_get_strength(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_get_strength(_base, ___ctx);
}

int LIB_EVP_RAND_get_state(struct Library * _base, EVP_RAND_CTX * ___ctx);

int LIBSTUB_EVP_RAND_get_state(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_get_state(_base, ___ctx);
}

int LIB_EVP_default_properties_is_fips_enabled(struct Library * _base, OSSL_LIB_CTX * ___libctx);

int LIBSTUB_EVP_default_properties_is_fips_enabled(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_default_properties_is_fips_enabled(_base, ___libctx);
}

int LIB_EVP_default_properties_enable_fips(struct Library * _base, OSSL_LIB_CTX * ___libctx, int ___enable);

int LIBSTUB_EVP_default_properties_enable_fips(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  int ___enable = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_default_properties_enable_fips(_base, ___libctx, ___enable);
}

EVP_PKEY * LIB_EVP_PKEY_new_raw_private_key_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___keytype, const char * ___propq, const unsigned char * ___priv, size_t ___len);

EVP_PKEY * LIBSTUB_EVP_PKEY_new_raw_private_key_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___keytype = (const char *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  const unsigned char * ___priv = (const unsigned char *)REG_A3;
  size_t ___len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_new_raw_private_key_ex(_base, ___libctx, ___keytype, ___propq, ___priv, ___len);
}

EVP_PKEY * LIB_EVP_PKEY_new_raw_public_key_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___keytype, const char * ___propq, const unsigned char * ___pub, size_t ___len);

EVP_PKEY * LIBSTUB_EVP_PKEY_new_raw_public_key_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___keytype = (const char *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  const unsigned char * ___pub = (const unsigned char *)REG_A3;
  size_t ___len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_new_raw_public_key_ex(_base, ___libctx, ___keytype, ___propq, ___pub, ___len);
}

int LIB_OSSL_PARAM_BLD_push_time_t(struct Library * _base, OSSL_PARAM_BLD * ___bld, const char * ___key, time_t ___val);

int LIBSTUB_OSSL_PARAM_BLD_push_time_t(void)
{
  OSSL_PARAM_BLD * ___bld = (OSSL_PARAM_BLD *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  time_t ___val = (time_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_BLD_push_time_t(_base, ___bld, ___key, ___val);
}

void LIB_OSSL_PARAM_construct_time_t_amiga(struct Library * _base, OSSL_PARAM * ___result, const char * ___key, time_t * ___buf);

void LIBSTUB_OSSL_PARAM_construct_time_t_amiga(void)
{
  OSSL_PARAM * ___result = (OSSL_PARAM *)REG_A0;
  const char * ___key = (const char *)REG_A1;
  time_t * ___buf = (time_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_construct_time_t_amiga(_base, ___result, ___key, ___buf);
}

int LIB_OSSL_PARAM_get_time_t(struct Library * _base, const OSSL_PARAM * ___p, time_t * ___val);

int LIBSTUB_OSSL_PARAM_get_time_t(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  time_t * ___val = (time_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_time_t(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_set_time_t(struct Library * _base, OSSL_PARAM * ___p, time_t ___val);

int LIBSTUB_OSSL_PARAM_set_time_t(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  time_t ___val = (time_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_set_time_t(_base, ___p, ___val);
}

OSSL_STORE_CTX * LIB_OSSL_STORE_attach(struct Library * _base, BIO * ___bio, const char * ___scheme, OSSL_LIB_CTX * ___libctx, const char * ___propq, const UI_METHOD * ___ui_method, void * ___ui_data, const OSSL_PARAM * ___params, OSSL_STORE_post_process_info_fn ___post_process, void * ___post_process_data);

OSSL_STORE_CTX * LIBSTUB_OSSL_STORE_attach(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  const char * ___scheme = (const char *)REG_A1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  const UI_METHOD * ___ui_method = (const UI_METHOD *)REG_D0;
  void * ___ui_data = (void *)REG_D1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_D2;
  OSSL_STORE_post_process_info_fn ___post_process = (OSSL_STORE_post_process_info_fn)REG_D3;
  void * ___post_process_data = (void *)REG_D4;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_attach(_base, ___bio, ___scheme, ___libctx, ___propq, ___ui_method, ___ui_data, ___params, ___post_process, ___post_process_data);
}

int LIB_OSSL_STORE_LOADER_set_attach(struct Library * _base, OSSL_STORE_LOADER * ___loader, OSSL_STORE_attach_fn ___attach_function);

int LIBSTUB_OSSL_STORE_LOADER_set_attach(void)
{
  OSSL_STORE_LOADER * ___loader = (OSSL_STORE_LOADER *)REG_A0;
  OSSL_STORE_attach_fn ___attach_function = (OSSL_STORE_attach_fn)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_LOADER_set_attach(_base, ___loader, ___attach_function);
}

int LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___saltlen);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___saltlen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(_base, ___ctx, ___saltlen);
}

int LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD * ___md);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD * ___md = (const EVP_MD *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(struct Library * _base, EVP_PKEY_CTX * ___ctx, const char * ___mdname);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const char * ___mdname = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(_base, ___ctx, ___mdname);
}

int LIB_OSSL_PROVIDER_do_all(struct Library * _base, OSSL_LIB_CTX * ___ctx, int (*___cb)(OSSL_PROVIDER *provider,void *cbdata), void * ___cbdata);

int LIBSTUB_OSSL_PROVIDER_do_all(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  int (*___cb)(OSSL_PROVIDER *provider,void *cbdata) = (int (*)(OSSL_PROVIDER *provider,void *cbdata))REG_A1;
  void * ___cbdata = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_do_all(_base, ___ctx, ___cb, ___cbdata);
}

int LIB_EC_GROUP_get_field_type(struct Library * _base, const EC_GROUP * ___group);

int LIBSTUB_EC_GROUP_get_field_type(void)
{
  const EC_GROUP * ___group = (const EC_GROUP *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EC_GROUP_get_field_type(_base, ___group);
}

int LIB_X509_PUBKEY_eq(struct Library * _base, const X509_PUBKEY * ___a, const X509_PUBKEY * ___b);

int LIBSTUB_X509_PUBKEY_eq(void)
{
  const X509_PUBKEY * ___a = (const X509_PUBKEY *)REG_A0;
  const X509_PUBKEY * ___b = (const X509_PUBKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_PUBKEY_eq(_base, ___a, ___b);
}

int LIB_EVP_PKEY_eq(struct Library * _base, const EVP_PKEY * ___a, const EVP_PKEY * ___b);

int LIBSTUB_EVP_PKEY_eq(void)
{
  const EVP_PKEY * ___a = (const EVP_PKEY *)REG_A0;
  const EVP_PKEY * ___b = (const EVP_PKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_eq(_base, ___a, ___b);
}

int LIB_EVP_PKEY_parameters_eq(struct Library * _base, const EVP_PKEY * ___a, const EVP_PKEY * ___b);

int LIBSTUB_EVP_PKEY_parameters_eq(void)
{
  const EVP_PKEY * ___a = (const EVP_PKEY *)REG_A0;
  const EVP_PKEY * ___b = (const EVP_PKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_parameters_eq(_base, ___a, ___b);
}

const OSSL_ALGORITHM * LIB_OSSL_PROVIDER_query_operation(struct Library * _base, const OSSL_PROVIDER * ___prov, int ___operation_id, int * ___no_cache);

const OSSL_ALGORITHM * LIBSTUB_OSSL_PROVIDER_query_operation(void)
{
  const OSSL_PROVIDER * ___prov = (const OSSL_PROVIDER *)REG_A0;
  int ___operation_id = (int)REG_D0;
  int * ___no_cache = (int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_query_operation(_base, ___prov, ___operation_id, ___no_cache);
}

void LIB_OSSL_PROVIDER_unquery_operation(struct Library * _base, const OSSL_PROVIDER * ___prov, int ___operation_id, const OSSL_ALGORITHM * ___algs);

void LIBSTUB_OSSL_PROVIDER_unquery_operation(void)
{
  const OSSL_PROVIDER * ___prov = (const OSSL_PROVIDER *)REG_A0;
  int ___operation_id = (int)REG_D0;
  const OSSL_ALGORITHM * ___algs = (const OSSL_ALGORITHM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_unquery_operation(_base, ___prov, ___operation_id, ___algs);
}

void * LIB_OSSL_PROVIDER_get0_provider_ctx(struct Library * _base, const OSSL_PROVIDER * ___prov);

void * LIBSTUB_OSSL_PROVIDER_get0_provider_ctx(void)
{
  const OSSL_PROVIDER * ___prov = (const OSSL_PROVIDER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_get0_provider_ctx(_base, ___prov);
}

int LIB_OSSL_PROVIDER_get_capabilities(struct Library * _base, const OSSL_PROVIDER * ___prov, const char * ___capability, OSSL_CALLBACK * ___cb, void * ___arg);

int LIBSTUB_OSSL_PROVIDER_get_capabilities(void)
{
  const OSSL_PROVIDER * ___prov = (const OSSL_PROVIDER *)REG_A0;
  const char * ___capability = (const char *)REG_A1;
  OSSL_CALLBACK * ___cb = (OSSL_CALLBACK *)REG_A2;
  void * ___arg = (void *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_get_capabilities(_base, ___prov, ___capability, ___cb, ___arg);
}

EC_GROUP * LIB_EC_GROUP_new_by_curve_name_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq, int ___nid);

EC_GROUP * LIBSTUB_EC_GROUP_new_by_curve_name_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  int ___nid = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EC_GROUP_new_by_curve_name_ex(_base, ___libctx, ___propq, ___nid);
}

EC_KEY * LIB_EC_KEY_new_ex(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___propq);

EC_KEY * LIBSTUB_EC_KEY_new_ex(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EC_KEY_new_ex(_base, ___ctx, ___propq);
}

EC_KEY * LIB_EC_KEY_new_by_curve_name_ex(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___propq, int ___nid);

EC_KEY * LIBSTUB_EC_KEY_new_by_curve_name_ex(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  int ___nid = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EC_KEY_new_by_curve_name_ex(_base, ___ctx, ___propq, ___nid);
}

OSSL_LIB_CTX * LIB_OSSL_LIB_CTX_set0_default(struct Library * _base, OSSL_LIB_CTX * ___libctx);

OSSL_LIB_CTX * LIBSTUB_OSSL_LIB_CTX_set0_default(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_LIB_CTX_set0_default(_base, ___libctx);
}

STACK_OF(X509_INFO) * LIB_PEM_X509_INFO_read_bio_ex(struct Library * _base, BIO * ___bp, STACK_OF(X509_INFO) * ___sk, pem_password_cb * ___cb, void * ___u, OSSL_LIB_CTX * ___libctx, const char * ___propq);

STACK_OF(X509_INFO) * LIBSTUB_PEM_X509_INFO_read_bio_ex(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  STACK_OF(X509_INFO) * ___sk = (STACK_OF(X509_INFO) *)REG_A1;
  pem_password_cb * ___cb = (pem_password_cb *)REG_A2;
  void * ___u = (void *)REG_A3;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D0;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PEM_X509_INFO_read_bio_ex(_base, ___bp, ___sk, ___cb, ___u, ___libctx, ___propq);
}

int LIB_X509_REQ_verify_ex(struct Library * _base, X509_REQ * ___a, EVP_PKEY * ___r, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_X509_REQ_verify_ex(void)
{
  X509_REQ * ___a = (X509_REQ *)REG_A0;
  EVP_PKEY * ___r = (EVP_PKEY *)REG_A1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_REQ_verify_ex(_base, ___a, ___r, ___libctx, ___propq);
}

X509 * LIB_X509_new_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

X509 * LIBSTUB_X509_new_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_new_ex(_base, ___libctx, ___propq);
}

int LIB_X509_LOOKUP_ctrl_ex(struct Library * _base, X509_LOOKUP * ___ctx, int ___cmd, const char * ___argc, long ___argl, char ** ___ret, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_X509_LOOKUP_ctrl_ex(void)
{
  X509_LOOKUP * ___ctx = (X509_LOOKUP *)REG_A0;
  int ___cmd = (int)REG_D0;
  const char * ___argc = (const char *)REG_A1;
  long ___argl = (long)REG_D1;
  char ** ___ret = (char **)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_LOOKUP_ctrl_ex(_base, ___ctx, ___cmd, ___argc, ___argl, ___ret, ___libctx, ___propq);
}

int LIB_X509_load_cert_file_ex(struct Library * _base, X509_LOOKUP * ___ctx, const char * ___file, int ___type, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_X509_load_cert_file_ex(void)
{
  X509_LOOKUP * ___ctx = (X509_LOOKUP *)REG_A0;
  const char * ___file = (const char *)REG_A1;
  int ___type = (int)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_load_cert_file_ex(_base, ___ctx, ___file, ___type, ___libctx, ___propq);
}

int LIB_X509_load_cert_crl_file_ex(struct Library * _base, X509_LOOKUP * ___ctx, const char * ___file, int ___type, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_X509_load_cert_crl_file_ex(void)
{
  X509_LOOKUP * ___ctx = (X509_LOOKUP *)REG_A0;
  const char * ___file = (const char *)REG_A1;
  int ___type = (int)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_load_cert_crl_file_ex(_base, ___ctx, ___file, ___type, ___libctx, ___propq);
}

int LIB_X509_LOOKUP_by_subject_ex(struct Library * _base, X509_LOOKUP * ___ctx, X509_LOOKUP_TYPE ___type, const X509_NAME * ___name, X509_OBJECT * ___ret, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_X509_LOOKUP_by_subject_ex(void)
{
  X509_LOOKUP * ___ctx = (X509_LOOKUP *)REG_A0;
  X509_LOOKUP_TYPE ___type = (X509_LOOKUP_TYPE)REG_D0;
  const X509_NAME * ___name = (const X509_NAME *)REG_A1;
  X509_OBJECT * ___ret = (X509_OBJECT *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_LOOKUP_by_subject_ex(_base, ___ctx, ___type, ___name, ___ret, ___libctx, ___propq);
}

int LIB_X509_STORE_load_file_ex(struct Library * _base, X509_STORE * ___xs, const char * ___file, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_X509_STORE_load_file_ex(void)
{
  X509_STORE * ___xs = (X509_STORE *)REG_A0;
  const char * ___file = (const char *)REG_A1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_load_file_ex(_base, ___xs, ___file, ___libctx, ___propq);
}

int LIB_X509_STORE_load_store_ex(struct Library * _base, X509_STORE * ___xs, const char * ___store, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_X509_STORE_load_store_ex(void)
{
  X509_STORE * ___xs = (X509_STORE *)REG_A0;
  const char * ___store = (const char *)REG_A1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_load_store_ex(_base, ___xs, ___store, ___libctx, ___propq);
}

int LIB_X509_STORE_load_locations_ex(struct Library * _base, X509_STORE * ___xs, const char * ___file, const char * ___dir, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_X509_STORE_load_locations_ex(void)
{
  X509_STORE * ___xs = (X509_STORE *)REG_A0;
  const char * ___file = (const char *)REG_A1;
  const char * ___dir = (const char *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_load_locations_ex(_base, ___xs, ___file, ___dir, ___libctx, ___propq);
}

int LIB_X509_STORE_set_default_paths_ex(struct Library * _base, X509_STORE * ___xs, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_X509_STORE_set_default_paths_ex(void)
{
  X509_STORE * ___xs = (X509_STORE *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_set_default_paths_ex(_base, ___xs, ___libctx, ___propq);
}

STACK_OF(X509) * LIB_X509_build_chain(struct Library * _base, X509 * ___target, STACK_OF(X509) * ___certs, X509_STORE * ___store, int ___with_self_signed, OSSL_LIB_CTX * ___libctx, const char * ___propq);

STACK_OF(X509) * LIBSTUB_X509_build_chain(void)
{
  X509 * ___target = (X509 *)REG_A0;
  STACK_OF(X509) * ___certs = (STACK_OF(X509) *)REG_A1;
  X509_STORE * ___store = (X509_STORE *)REG_A2;
  int ___with_self_signed = (int)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_build_chain(_base, ___target, ___certs, ___store, ___with_self_signed, ___libctx, ___propq);
}

int LIB_X509V3_set_issuer_pkey(struct Library * _base, X509V3_CTX * ___ctx, EVP_PKEY * ___pkey);

int LIBSTUB_X509V3_set_issuer_pkey(void)
{
  X509V3_CTX * ___ctx = (X509V3_CTX *)REG_A0;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509V3_set_issuer_pkey(_base, ___ctx, ___pkey);
}

char * LIB_i2s_ASN1_UTF8STRING(struct Library * _base, X509V3_EXT_METHOD * ___method, ASN1_UTF8STRING * ___utf8);

char * LIBSTUB_i2s_ASN1_UTF8STRING(void)
{
  X509V3_EXT_METHOD * ___method = (X509V3_EXT_METHOD *)REG_A0;
  ASN1_UTF8STRING * ___utf8 = (ASN1_UTF8STRING *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2s_ASN1_UTF8STRING(_base, ___method, ___utf8);
}

ASN1_UTF8STRING * LIB_s2i_ASN1_UTF8STRING(struct Library * _base, X509V3_EXT_METHOD * ___method, X509V3_CTX * ___ctx, const char * ___str);

ASN1_UTF8STRING * LIBSTUB_s2i_ASN1_UTF8STRING(void)
{
  X509V3_EXT_METHOD * ___method = (X509V3_EXT_METHOD *)REG_A0;
  X509V3_CTX * ___ctx = (X509V3_CTX *)REG_A1;
  const char * ___str = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_s2i_ASN1_UTF8STRING(_base, ___method, ___ctx, ___str);
}

OSSL_STORE_CTX * LIB_OSSL_STORE_open_ex(struct Library * _base, const char * ___uri, OSSL_LIB_CTX * ___libctx, const char * ___propq, const UI_METHOD * ___ui_method, void * ___ui_data, const OSSL_PARAM * ___params, OSSL_STORE_post_process_info_fn ___post_process, void * ___post_process_data);

OSSL_STORE_CTX * LIBSTUB_OSSL_STORE_open_ex(void)
{
  const char * ___uri = (const char *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  const UI_METHOD * ___ui_method = (const UI_METHOD *)REG_A3;
  void * ___ui_data = (void *)REG_D0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_D1;
  OSSL_STORE_post_process_info_fn ___post_process = (OSSL_STORE_post_process_info_fn)REG_D2;
  void * ___post_process_data = (void *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_open_ex(_base, ___uri, ___libctx, ___propq, ___ui_method, ___ui_data, ___params, ___post_process, ___post_process_data);
}

OSSL_DECODER * LIB_OSSL_DECODER_fetch(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___name, const char * ___properties);

OSSL_DECODER * LIBSTUB_OSSL_DECODER_fetch(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_fetch(_base, ___libctx, ___name, ___properties);
}

int LIB_OSSL_DECODER_up_ref(struct Library * _base, OSSL_DECODER * ___encoder);

int LIBSTUB_OSSL_DECODER_up_ref(void)
{
  OSSL_DECODER * ___encoder = (OSSL_DECODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_up_ref(_base, ___encoder);
}

void LIB_OSSL_DECODER_free(struct Library * _base, OSSL_DECODER * ___encoder);

void LIBSTUB_OSSL_DECODER_free(void)
{
  OSSL_DECODER * ___encoder = (OSSL_DECODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_free(_base, ___encoder);
}

const OSSL_PROVIDER * LIB_OSSL_DECODER_get0_provider(struct Library * _base, const OSSL_DECODER * ___encoder);

const OSSL_PROVIDER * LIBSTUB_OSSL_DECODER_get0_provider(void)
{
  const OSSL_DECODER * ___encoder = (const OSSL_DECODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_get0_provider(_base, ___encoder);
}

const char * LIB_OSSL_DECODER_get0_properties(struct Library * _base, const OSSL_DECODER * ___encoder);

const char * LIBSTUB_OSSL_DECODER_get0_properties(void)
{
  const OSSL_DECODER * ___encoder = (const OSSL_DECODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_get0_properties(_base, ___encoder);
}

int LIB_OSSL_DECODER_is_a(struct Library * _base, const OSSL_DECODER * ___encoder, const char * ___name);

int LIBSTUB_OSSL_DECODER_is_a(void)
{
  const OSSL_DECODER * ___encoder = (const OSSL_DECODER *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_is_a(_base, ___encoder, ___name);
}

void LIB_OSSL_DECODER_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(OSSL_DECODER *encoder,void *arg), void * ___arg);

void LIBSTUB_OSSL_DECODER_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(OSSL_DECODER *encoder,void *arg) = (void (*)(OSSL_DECODER *encoder,void *arg))REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_do_all_provided(_base, ___libctx, ___fn, ___arg);
}

int LIB_OSSL_DECODER_names_do_all(struct Library * _base, const OSSL_DECODER * ___encoder, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_OSSL_DECODER_names_do_all(void)
{
  const OSSL_DECODER * ___encoder = (const OSSL_DECODER *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_names_do_all(_base, ___encoder, ___fn, ___data);
}

const OSSL_PARAM * LIB_OSSL_DECODER_settable_ctx_params(struct Library * _base, OSSL_DECODER * ___encoder);

const OSSL_PARAM * LIBSTUB_OSSL_DECODER_settable_ctx_params(void)
{
  OSSL_DECODER * ___encoder = (OSSL_DECODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_settable_ctx_params(_base, ___encoder);
}

OSSL_DECODER_CTX * LIB_OSSL_DECODER_CTX_new(struct Library * _base);

OSSL_DECODER_CTX * LIBSTUB_OSSL_DECODER_CTX_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_new(_base);
}

int LIB_OSSL_DECODER_CTX_set_params(struct Library * _base, OSSL_DECODER_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_OSSL_DECODER_CTX_set_params(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_set_params(_base, ___ctx, ___params);
}

void LIB_OSSL_DECODER_CTX_free(struct Library * _base, OSSL_DECODER_CTX * ___ctx);

void LIBSTUB_OSSL_DECODER_CTX_free(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_free(_base, ___ctx);
}

int LIB_OSSL_DECODER_CTX_set_passphrase(struct Library * _base, OSSL_DECODER_CTX * ___ctx, const unsigned char * ___kstr, size_t ___klen);

int LIBSTUB_OSSL_DECODER_CTX_set_passphrase(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  const unsigned char * ___kstr = (const unsigned char *)REG_A1;
  size_t ___klen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_set_passphrase(_base, ___ctx, ___kstr, ___klen);
}

int LIB_OSSL_DECODER_CTX_set_pem_password_cb(struct Library * _base, OSSL_DECODER_CTX * ___ctx, pem_password_cb * ___cb, void * ___cbarg);

int LIBSTUB_OSSL_DECODER_CTX_set_pem_password_cb(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  pem_password_cb * ___cb = (pem_password_cb *)REG_A1;
  void * ___cbarg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_set_pem_password_cb(_base, ___ctx, ___cb, ___cbarg);
}

int LIB_OSSL_DECODER_CTX_set_passphrase_ui(struct Library * _base, OSSL_DECODER_CTX * ___ctx, const UI_METHOD * ___ui_method, void * ___ui_data);

int LIBSTUB_OSSL_DECODER_CTX_set_passphrase_ui(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  const UI_METHOD * ___ui_method = (const UI_METHOD *)REG_A1;
  void * ___ui_data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_set_passphrase_ui(_base, ___ctx, ___ui_method, ___ui_data);
}

int LIB_OSSL_DECODER_from_bio(struct Library * _base, OSSL_DECODER_CTX * ___ctx, BIO * ___in);

int LIBSTUB_OSSL_DECODER_from_bio(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  BIO * ___in = (BIO *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_from_bio(_base, ___ctx, ___in);
}

int LIB_OSSL_DECODER_CTX_add_decoder(struct Library * _base, OSSL_DECODER_CTX * ___ctx, OSSL_DECODER * ___decoder);

int LIBSTUB_OSSL_DECODER_CTX_add_decoder(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  OSSL_DECODER * ___decoder = (OSSL_DECODER *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_add_decoder(_base, ___ctx, ___decoder);
}

int LIB_OSSL_DECODER_CTX_add_extra(struct Library * _base, OSSL_DECODER_CTX * ___ctx, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_OSSL_DECODER_CTX_add_extra(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_add_extra(_base, ___ctx, ___libctx, ___propq);
}

int LIB_OSSL_DECODER_CTX_get_num_decoders(struct Library * _base, OSSL_DECODER_CTX * ___ctx);

int LIBSTUB_OSSL_DECODER_CTX_get_num_decoders(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_get_num_decoders(_base, ___ctx);
}

int LIB_OSSL_DECODER_CTX_set_input_type(struct Library * _base, OSSL_DECODER_CTX * ___ctx, const char * ___input_type);

int LIBSTUB_OSSL_DECODER_CTX_set_input_type(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  const char * ___input_type = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_set_input_type(_base, ___ctx, ___input_type);
}

int LIB_OSSL_DECODER_export(struct Library * _base, OSSL_DECODER_INSTANCE * ___decoder_inst, void * ___reference, size_t ___reference_sz, OSSL_CALLBACK * ___export_cb, void * ___export_cbarg);

int LIBSTUB_OSSL_DECODER_export(void)
{
  OSSL_DECODER_INSTANCE * ___decoder_inst = (OSSL_DECODER_INSTANCE *)REG_A0;
  void * ___reference = (void *)REG_A1;
  size_t ___reference_sz = (size_t)REG_D0;
  OSSL_CALLBACK * ___export_cb = (OSSL_CALLBACK *)REG_A2;
  void * ___export_cbarg = (void *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_export(_base, ___decoder_inst, ___reference, ___reference_sz, ___export_cb, ___export_cbarg);
}

OSSL_DECODER * LIB_OSSL_DECODER_INSTANCE_get_decoder(struct Library * _base, OSSL_DECODER_INSTANCE * ___decoder_inst);

OSSL_DECODER * LIBSTUB_OSSL_DECODER_INSTANCE_get_decoder(void)
{
  OSSL_DECODER_INSTANCE * ___decoder_inst = (OSSL_DECODER_INSTANCE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_INSTANCE_get_decoder(_base, ___decoder_inst);
}

void * LIB_OSSL_DECODER_INSTANCE_get_decoder_ctx(struct Library * _base, OSSL_DECODER_INSTANCE * ___decoder_inst);

void * LIBSTUB_OSSL_DECODER_INSTANCE_get_decoder_ctx(void)
{
  OSSL_DECODER_INSTANCE * ___decoder_inst = (OSSL_DECODER_INSTANCE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_INSTANCE_get_decoder_ctx(_base, ___decoder_inst);
}

const OSSL_PARAM * LIB_OSSL_DECODER_gettable_params(struct Library * _base, OSSL_DECODER * ___decoder);

const OSSL_PARAM * LIBSTUB_OSSL_DECODER_gettable_params(void)
{
  OSSL_DECODER * ___decoder = (OSSL_DECODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_gettable_params(_base, ___decoder);
}

int LIB_OSSL_DECODER_get_params(struct Library * _base, OSSL_DECODER * ___decoder, OSSL_PARAM * ___params);

int LIBSTUB_OSSL_DECODER_get_params(void)
{
  OSSL_DECODER * ___decoder = (OSSL_DECODER *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_get_params(_base, ___decoder, ___params);
}

OSSL_DECODER_CTX * LIB_OSSL_DECODER_CTX_new_for_pkey(struct Library * _base, EVP_PKEY ** ___pkey, const char * ___input_type, const char * ___input_struct, const char * ___keytype, int ___selection, OSSL_LIB_CTX * ___libctx, const char * ___propquery);

OSSL_DECODER_CTX * LIBSTUB_OSSL_DECODER_CTX_new_for_pkey(void)
{
  EVP_PKEY ** ___pkey = (EVP_PKEY **)REG_A0;
  const char * ___input_type = (const char *)REG_A1;
  const char * ___input_struct = (const char *)REG_A2;
  const char * ___keytype = (const char *)REG_A3;
  int ___selection = (int)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D1;
  const char * ___propquery = (const char *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_new_for_pkey(_base, ___pkey, ___input_type, ___input_struct, ___keytype, ___selection, ___libctx, ___propquery);
}

int LIB_OSSL_DECODER_CTX_set_construct(struct Library * _base, OSSL_DECODER_CTX * ___ctx, OSSL_DECODER_CONSTRUCT * ___construct);

int LIBSTUB_OSSL_DECODER_CTX_set_construct(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  OSSL_DECODER_CONSTRUCT * ___construct = (OSSL_DECODER_CONSTRUCT *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_set_construct(_base, ___ctx, ___construct);
}

int LIB_OSSL_DECODER_CTX_set_construct_data(struct Library * _base, OSSL_DECODER_CTX * ___ctx, void * ___construct_data);

int LIBSTUB_OSSL_DECODER_CTX_set_construct_data(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  void * ___construct_data = (void *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_set_construct_data(_base, ___ctx, ___construct_data);
}

int LIB_OSSL_DECODER_CTX_set_cleanup(struct Library * _base, OSSL_DECODER_CTX * ___ctx, OSSL_DECODER_CLEANUP * ___cleanup);

int LIBSTUB_OSSL_DECODER_CTX_set_cleanup(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  OSSL_DECODER_CLEANUP * ___cleanup = (OSSL_DECODER_CLEANUP *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_set_cleanup(_base, ___ctx, ___cleanup);
}

OSSL_DECODER_CONSTRUCT * LIB_OSSL_DECODER_CTX_get_construct(struct Library * _base, OSSL_DECODER_CTX * ___ctx);

OSSL_DECODER_CONSTRUCT * LIBSTUB_OSSL_DECODER_CTX_get_construct(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_get_construct(_base, ___ctx);
}

void * LIB_OSSL_DECODER_CTX_get_construct_data(struct Library * _base, OSSL_DECODER_CTX * ___ctx);

void * LIBSTUB_OSSL_DECODER_CTX_get_construct_data(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_get_construct_data(_base, ___ctx);
}

OSSL_DECODER_CLEANUP * LIB_OSSL_DECODER_CTX_get_cleanup(struct Library * _base, OSSL_DECODER_CTX * ___ctx);

OSSL_DECODER_CLEANUP * LIBSTUB_OSSL_DECODER_CTX_get_cleanup(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_get_cleanup(_base, ___ctx);
}

EVP_RAND_CTX * LIB_RAND_get0_primary(struct Library * _base, OSSL_LIB_CTX * ___ctx);

EVP_RAND_CTX * LIBSTUB_RAND_get0_primary(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_RAND_get0_primary(_base, ___ctx);
}

EVP_RAND_CTX * LIB_RAND_get0_public(struct Library * _base, OSSL_LIB_CTX * ___ctx);

EVP_RAND_CTX * LIBSTUB_RAND_get0_public(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_RAND_get0_public(_base, ___ctx);
}

EVP_RAND_CTX * LIB_RAND_get0_private(struct Library * _base, OSSL_LIB_CTX * ___ctx);

EVP_RAND_CTX * LIBSTUB_RAND_get0_private(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_RAND_get0_private(_base, ___ctx);
}

const ASN1_TYPE * LIB_PKCS12_SAFEBAG_get0_bag_obj(struct Library * _base, const PKCS12_SAFEBAG * ___bag);

const ASN1_TYPE * LIBSTUB_PKCS12_SAFEBAG_get0_bag_obj(void)
{
  const PKCS12_SAFEBAG * ___bag = (const PKCS12_SAFEBAG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_SAFEBAG_get0_bag_obj(_base, ___bag);
}

const ASN1_OBJECT * LIB_PKCS12_SAFEBAG_get0_bag_type(struct Library * _base, const PKCS12_SAFEBAG * ___bag);

const ASN1_OBJECT * LIBSTUB_PKCS12_SAFEBAG_get0_bag_type(void)
{
  const PKCS12_SAFEBAG * ___bag = (const PKCS12_SAFEBAG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_SAFEBAG_get0_bag_type(_base, ___bag);
}

PKCS12_SAFEBAG * LIB_PKCS12_SAFEBAG_create_secret(struct Library * _base, int ___type, int ___vtype, const unsigned char * ___value, int ___len);

PKCS12_SAFEBAG * LIBSTUB_PKCS12_SAFEBAG_create_secret(void)
{
  int ___type = (int)REG_D0;
  int ___vtype = (int)REG_D1;
  const unsigned char * ___value = (const unsigned char *)REG_A0;
  int ___len = (int)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_SAFEBAG_create_secret(_base, ___type, ___vtype, ___value, ___len);
}

int LIB_PKCS12_add1_attr_by_NID(struct Library * _base, PKCS12_SAFEBAG * ___bag, int ___nid, int ___type, const unsigned char * ___bytes, int ___len);

int LIBSTUB_PKCS12_add1_attr_by_NID(void)
{
  PKCS12_SAFEBAG * ___bag = (PKCS12_SAFEBAG *)REG_A0;
  int ___nid = (int)REG_D0;
  int ___type = (int)REG_D1;
  const unsigned char * ___bytes = (const unsigned char *)REG_A1;
  int ___len = (int)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_add1_attr_by_NID(_base, ___bag, ___nid, ___type, ___bytes, ___len);
}

int LIB_PKCS12_add1_attr_by_txt(struct Library * _base, PKCS12_SAFEBAG * ___bag, const char * ___attrname, int ___type, const unsigned char * ___bytes, int ___len);

int LIBSTUB_PKCS12_add1_attr_by_txt(void)
{
  PKCS12_SAFEBAG * ___bag = (PKCS12_SAFEBAG *)REG_A0;
  const char * ___attrname = (const char *)REG_A1;
  int ___type = (int)REG_D0;
  const unsigned char * ___bytes = (const unsigned char *)REG_A2;
  int ___len = (int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_add1_attr_by_txt(_base, ___bag, ___attrname, ___type, ___bytes, ___len);
}

PKCS12_SAFEBAG * LIB_PKCS12_add_secret(struct Library * _base, STACK_OF(PKCS12_SAFEBAG) ** ___pbags, int ___nid_type, const unsigned char * ___value, int ___len);

PKCS12_SAFEBAG * LIBSTUB_PKCS12_add_secret(void)
{
  STACK_OF(PKCS12_SAFEBAG) ** ___pbags = (STACK_OF(PKCS12_SAFEBAG) **)REG_A0;
  int ___nid_type = (int)REG_D0;
  const unsigned char * ___value = (const unsigned char *)REG_A1;
  int ___len = (int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_add_secret(_base, ___pbags, ___nid_type, ___value, ___len);
}

int LIB_SMIME_write_ASN1_ex(struct Library * _base, BIO * ___bio, ASN1_VALUE * ___val, BIO * ___data, int ___flags, int ___ctype_nid, int ___econt_nid, STACK_OF(X509_ALGOR) * ___mdalgs, const ASN1_ITEM * ___it, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_SMIME_write_ASN1_ex(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  ASN1_VALUE * ___val = (ASN1_VALUE *)REG_A1;
  BIO * ___data = (BIO *)REG_A2;
  int ___flags = (int)REG_D0;
  int ___ctype_nid = (int)REG_D1;
  int ___econt_nid = (int)REG_D2;
  STACK_OF(X509_ALGOR) * ___mdalgs = (STACK_OF(X509_ALGOR) *)REG_A3;
  const ASN1_ITEM * ___it = (const ASN1_ITEM *)REG_D3;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D4;
  const char * ___propq = (const char *)REG_D5;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SMIME_write_ASN1_ex(_base, ___bio, ___val, ___data, ___flags, ___ctype_nid, ___econt_nid, ___mdalgs, ___it, ___libctx, ___propq);
}

ASN1_VALUE * LIB_SMIME_read_ASN1_ex(struct Library * _base, BIO * ___bio, int ___flags, BIO ** ___bcont, const ASN1_ITEM * ___it, ASN1_VALUE ** ___x, OSSL_LIB_CTX * ___libctx, const char * ___propq);

ASN1_VALUE * LIBSTUB_SMIME_read_ASN1_ex(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  int ___flags = (int)REG_D0;
  BIO ** ___bcont = (BIO **)REG_A1;
  const ASN1_ITEM * ___it = (const ASN1_ITEM *)REG_A2;
  ASN1_VALUE ** ___x = (ASN1_VALUE **)REG_A3;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D1;
  const char * ___propq = (const char *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SMIME_read_ASN1_ex(_base, ___bio, ___flags, ___bcont, ___it, ___x, ___libctx, ___propq);
}

CMS_ContentInfo * LIB_CMS_ContentInfo_new_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

CMS_ContentInfo * LIBSTUB_CMS_ContentInfo_new_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_ContentInfo_new_ex(_base, ___libctx, ___propq);
}

CMS_ContentInfo * LIB_SMIME_read_CMS_ex(struct Library * _base, BIO * ___bio, int ___flags, BIO ** ___bcont, CMS_ContentInfo ** ___ci);

CMS_ContentInfo * LIBSTUB_SMIME_read_CMS_ex(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  int ___flags = (int)REG_D0;
  BIO ** ___bcont = (BIO **)REG_A1;
  CMS_ContentInfo ** ___ci = (CMS_ContentInfo **)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SMIME_read_CMS_ex(_base, ___bio, ___flags, ___bcont, ___ci);
}

CMS_ContentInfo * LIB_CMS_sign_ex(struct Library * _base, X509 * ___signcert, EVP_PKEY * ___pkey, STACK_OF(X509) * ___certs, BIO * ___data, unsigned int ___flags, OSSL_LIB_CTX * ___libctx, const char * ___propq);

CMS_ContentInfo * LIBSTUB_CMS_sign_ex(void)
{
  X509 * ___signcert = (X509 *)REG_A0;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A1;
  STACK_OF(X509) * ___certs = (STACK_OF(X509) *)REG_A2;
  BIO * ___data = (BIO *)REG_A3;
  unsigned int ___flags = (unsigned int)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D1;
  const char * ___propq = (const char *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_sign_ex(_base, ___signcert, ___pkey, ___certs, ___data, ___flags, ___libctx, ___propq);
}

CMS_ContentInfo * LIB_CMS_data_create_ex(struct Library * _base, BIO * ___in, unsigned int ___flags, OSSL_LIB_CTX * ___libctx, const char * ___propq);

CMS_ContentInfo * LIBSTUB_CMS_data_create_ex(void)
{
  BIO * ___in = (BIO *)REG_A0;
  unsigned int ___flags = (unsigned int)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_data_create_ex(_base, ___in, ___flags, ___libctx, ___propq);
}

CMS_ContentInfo * LIB_CMS_digest_create_ex(struct Library * _base, BIO * ___in, const EVP_MD * ___md, unsigned int ___flags, OSSL_LIB_CTX * ___libctx, const char * ___propq);

CMS_ContentInfo * LIBSTUB_CMS_digest_create_ex(void)
{
  BIO * ___in = (BIO *)REG_A0;
  const EVP_MD * ___md = (const EVP_MD *)REG_A1;
  unsigned int ___flags = (unsigned int)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_digest_create_ex(_base, ___in, ___md, ___flags, ___libctx, ___propq);
}

CMS_ContentInfo * LIB_CMS_EncryptedData_encrypt_ex(struct Library * _base, BIO * ___in, const EVP_CIPHER * ___cipher, const unsigned char * ___key, size_t ___keylen, unsigned int ___flags, OSSL_LIB_CTX * ___libctx, const char * ___propq);

CMS_ContentInfo * LIBSTUB_CMS_EncryptedData_encrypt_ex(void)
{
  BIO * ___in = (BIO *)REG_A0;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A1;
  const unsigned char * ___key = (const unsigned char *)REG_A2;
  size_t ___keylen = (size_t)REG_D0;
  unsigned int ___flags = (unsigned int)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_EncryptedData_encrypt_ex(_base, ___in, ___cipher, ___key, ___keylen, ___flags, ___libctx, ___propq);
}

CMS_ContentInfo * LIB_CMS_encrypt_ex(struct Library * _base, STACK_OF(X509) * ___certs, BIO * ___in, const EVP_CIPHER * ___cipher, unsigned int ___flags, OSSL_LIB_CTX * ___libctx, const char * ___propq);

CMS_ContentInfo * LIBSTUB_CMS_encrypt_ex(void)
{
  STACK_OF(X509) * ___certs = (STACK_OF(X509) *)REG_A0;
  BIO * ___in = (BIO *)REG_A1;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A2;
  unsigned int ___flags = (unsigned int)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_encrypt_ex(_base, ___certs, ___in, ___cipher, ___flags, ___libctx, ___propq);
}

CMS_ContentInfo * LIB_CMS_EnvelopedData_create_ex(struct Library * _base, const EVP_CIPHER * ___cipher, OSSL_LIB_CTX * ___libctx, const char * ___propq);

CMS_ContentInfo * LIBSTUB_CMS_EnvelopedData_create_ex(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_EnvelopedData_create_ex(_base, ___cipher, ___libctx, ___propq);
}

CMS_ReceiptRequest * LIB_CMS_ReceiptRequest_create0_ex(struct Library * _base, unsigned char * ___id, int ___idlen, int ___allorfirst, STACK_OF(GENERAL_NAMES) * ___receiptList, STACK_OF(GENERAL_NAMES) * ___receiptsTo, OSSL_LIB_CTX * ___libctx);

CMS_ReceiptRequest * LIBSTUB_CMS_ReceiptRequest_create0_ex(void)
{
  unsigned char * ___id = (unsigned char *)REG_A0;
  int ___idlen = (int)REG_D0;
  int ___allorfirst = (int)REG_D1;
  STACK_OF(GENERAL_NAMES) * ___receiptList = (STACK_OF(GENERAL_NAMES) *)REG_A1;
  STACK_OF(GENERAL_NAMES) * ___receiptsTo = (STACK_OF(GENERAL_NAMES) *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_ReceiptRequest_create0_ex(_base, ___id, ___idlen, ___allorfirst, ___receiptList, ___receiptsTo, ___libctx);
}

int LIB_EVP_SignFinal_ex(struct Library * _base, EVP_MD_CTX * ___ctx, unsigned char * ___md, unsigned int * ___s, EVP_PKEY * ___pkey, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_EVP_SignFinal_ex(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  unsigned char * ___md = (unsigned char *)REG_A1;
  unsigned int * ___s = (unsigned int *)REG_A2;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A3;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D0;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SignFinal_ex(_base, ___ctx, ___md, ___s, ___pkey, ___libctx, ___propq);
}

int LIB_EVP_VerifyFinal_ex(struct Library * _base, EVP_MD_CTX * ___ctx, const unsigned char * ___sigbuf, unsigned int ___siglen, EVP_PKEY * ___pkey, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_EVP_VerifyFinal_ex(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  const unsigned char * ___sigbuf = (const unsigned char *)REG_A1;
  unsigned int ___siglen = (unsigned int)REG_D0;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_VerifyFinal_ex(_base, ___ctx, ___sigbuf, ___siglen, ___pkey, ___libctx, ___propq);
}

int LIB_EVP_DigestSignInit_ex(struct Library * _base, EVP_MD_CTX * ___ctx, EVP_PKEY_CTX ** ___pctx, const char * ___mdname, OSSL_LIB_CTX * ___libctx, const char * ___props, EVP_PKEY * ___pkey, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_DigestSignInit_ex(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  EVP_PKEY_CTX ** ___pctx = (EVP_PKEY_CTX **)REG_A1;
  const char * ___mdname = (const char *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___props = (const char *)REG_D0;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_D1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_DigestSignInit_ex(_base, ___ctx, ___pctx, ___mdname, ___libctx, ___props, ___pkey, ___params);
}

int LIB_EVP_DigestVerifyInit_ex(struct Library * _base, EVP_MD_CTX * ___ctx, EVP_PKEY_CTX ** ___pctx, const char * ___mdname, OSSL_LIB_CTX * ___libctx, const char * ___props, EVP_PKEY * ___pkey, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_DigestVerifyInit_ex(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  EVP_PKEY_CTX ** ___pctx = (EVP_PKEY_CTX **)REG_A1;
  const char * ___mdname = (const char *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___props = (const char *)REG_D0;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_D1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_DigestVerifyInit_ex(_base, ___ctx, ___pctx, ___mdname, ___libctx, ___props, ___pkey, ___params);
}

PKCS7 * LIB_PKCS7_new_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

PKCS7 * LIBSTUB_PKCS7_new_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS7_new_ex(_base, ___libctx, ___propq);
}

PKCS7 * LIB_PKCS7_sign_ex(struct Library * _base, X509 * ___signcert, EVP_PKEY * ___pkey, STACK_OF(X509) * ___certs, BIO * ___data, int ___flags, OSSL_LIB_CTX * ___libctx, const char * ___propq);

PKCS7 * LIBSTUB_PKCS7_sign_ex(void)
{
  X509 * ___signcert = (X509 *)REG_A0;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A1;
  STACK_OF(X509) * ___certs = (STACK_OF(X509) *)REG_A2;
  BIO * ___data = (BIO *)REG_A3;
  int ___flags = (int)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D1;
  const char * ___propq = (const char *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS7_sign_ex(_base, ___signcert, ___pkey, ___certs, ___data, ___flags, ___libctx, ___propq);
}

PKCS7 * LIB_PKCS7_encrypt_ex(struct Library * _base, STACK_OF(X509) * ___certs, BIO * ___in, const EVP_CIPHER * ___cipher, int ___flags, OSSL_LIB_CTX * ___libctx, const char * ___propq);

PKCS7 * LIBSTUB_PKCS7_encrypt_ex(void)
{
  STACK_OF(X509) * ___certs = (STACK_OF(X509) *)REG_A0;
  BIO * ___in = (BIO *)REG_A1;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A2;
  int ___flags = (int)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS7_encrypt_ex(_base, ___certs, ___in, ___cipher, ___flags, ___libctx, ___propq);
}

PKCS7 * LIB_SMIME_read_PKCS7_ex(struct Library * _base, BIO * ___bio, BIO ** ___bcont, PKCS7 ** ___p7);

PKCS7 * LIBSTUB_SMIME_read_PKCS7_ex(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  BIO ** ___bcont = (BIO **)REG_A1;
  PKCS7 ** ___p7 = (PKCS7 **)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SMIME_read_PKCS7_ex(_base, ___bio, ___bcont, ___p7);
}

int LIB_OSSL_PROVIDER_self_test(struct Library * _base, const OSSL_PROVIDER * ___prov);

int LIBSTUB_OSSL_PROVIDER_self_test(void)
{
  const OSSL_PROVIDER * ___prov = (const OSSL_PROVIDER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_self_test(_base, ___prov);
}

int LIB_EVP_PKEY_CTX_set_tls1_prf_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD * ___md);

int LIBSTUB_EVP_PKEY_CTX_set_tls1_prf_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD * ___md = (const EVP_MD *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_tls1_prf_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_set1_tls1_prf_secret(struct Library * _base, EVP_PKEY_CTX * ___pctx, const unsigned char * ___sec, int ___seclen);

int LIBSTUB_EVP_PKEY_CTX_set1_tls1_prf_secret(void)
{
  EVP_PKEY_CTX * ___pctx = (EVP_PKEY_CTX *)REG_A0;
  const unsigned char * ___sec = (const unsigned char *)REG_A1;
  int ___seclen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set1_tls1_prf_secret(_base, ___pctx, ___sec, ___seclen);
}

int LIB_EVP_PKEY_CTX_add1_tls1_prf_seed(struct Library * _base, EVP_PKEY_CTX * ___pctx, const unsigned char * ___seed, int ___seedlen);

int LIBSTUB_EVP_PKEY_CTX_add1_tls1_prf_seed(void)
{
  EVP_PKEY_CTX * ___pctx = (EVP_PKEY_CTX *)REG_A0;
  const unsigned char * ___seed = (const unsigned char *)REG_A1;
  int ___seedlen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_add1_tls1_prf_seed(_base, ___pctx, ___seed, ___seedlen);
}

int LIB_EVP_PKEY_CTX_set_hkdf_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD * ___md);

int LIBSTUB_EVP_PKEY_CTX_set_hkdf_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD * ___md = (const EVP_MD *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_hkdf_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_set1_hkdf_salt(struct Library * _base, EVP_PKEY_CTX * ___ctx, const unsigned char * ___salt, int ___saltlen);

int LIBSTUB_EVP_PKEY_CTX_set1_hkdf_salt(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const unsigned char * ___salt = (const unsigned char *)REG_A1;
  int ___saltlen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set1_hkdf_salt(_base, ___ctx, ___salt, ___saltlen);
}

int LIB_EVP_PKEY_CTX_set1_hkdf_key(struct Library * _base, EVP_PKEY_CTX * ___ctx, const unsigned char * ___key, int ___keylen);

int LIBSTUB_EVP_PKEY_CTX_set1_hkdf_key(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const unsigned char * ___key = (const unsigned char *)REG_A1;
  int ___keylen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set1_hkdf_key(_base, ___ctx, ___key, ___keylen);
}

int LIB_EVP_PKEY_CTX_add1_hkdf_info(struct Library * _base, EVP_PKEY_CTX * ___ctx, const unsigned char * ___info, int ___infolen);

int LIBSTUB_EVP_PKEY_CTX_add1_hkdf_info(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const unsigned char * ___info = (const unsigned char *)REG_A1;
  int ___infolen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_add1_hkdf_info(_base, ___ctx, ___info, ___infolen);
}

int LIB_EVP_PKEY_CTX_set_hkdf_mode(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___mode);

int LIBSTUB_EVP_PKEY_CTX_set_hkdf_mode(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___mode = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_hkdf_mode(_base, ___ctx, ___mode);
}

int LIB_EVP_PKEY_CTX_set1_pbe_pass(struct Library * _base, EVP_PKEY_CTX * ___ctx, const char * ___pass, int ___passlen);

int LIBSTUB_EVP_PKEY_CTX_set1_pbe_pass(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  int ___passlen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set1_pbe_pass(_base, ___ctx, ___pass, ___passlen);
}

int LIB_EVP_PKEY_CTX_set1_scrypt_salt(struct Library * _base, EVP_PKEY_CTX * ___ctx, const unsigned char * ___salt, int ___saltlen);

int LIBSTUB_EVP_PKEY_CTX_set1_scrypt_salt(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const unsigned char * ___salt = (const unsigned char *)REG_A1;
  int ___saltlen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set1_scrypt_salt(_base, ___ctx, ___salt, ___saltlen);
}

int LIB_EVP_PKEY_CTX_set_scrypt_N(struct Library * _base, EVP_PKEY_CTX * ___ctx, uint64_t ___n);

int LIBSTUB_EVP_PKEY_CTX_set_scrypt_N(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  uint64_t ___n = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_scrypt_N(_base, ___ctx, ___n);
}

int LIB_EVP_PKEY_CTX_set_scrypt_r(struct Library * _base, EVP_PKEY_CTX * ___ctx, uint64_t ___r);

int LIBSTUB_EVP_PKEY_CTX_set_scrypt_r(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  uint64_t ___r = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_scrypt_r(_base, ___ctx, ___r);
}

int LIB_EVP_PKEY_CTX_set_scrypt_p(struct Library * _base, EVP_PKEY_CTX * ___ctx, uint64_t ___p);

int LIBSTUB_EVP_PKEY_CTX_set_scrypt_p(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  uint64_t ___p = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_scrypt_p(_base, ___ctx, ___p);
}

int LIB_EVP_PKEY_CTX_set_scrypt_maxmem_bytes(struct Library * _base, EVP_PKEY_CTX * ___ctx, uint64_t ___maxmem_bytes);

int LIBSTUB_EVP_PKEY_CTX_set_scrypt_maxmem_bytes(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  uint64_t ___maxmem_bytes = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_scrypt_maxmem_bytes(_base, ___ctx, ___maxmem_bytes);
}

int LIB_EVP_PKEY_CTX_set_dh_kdf_type(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___kdf);

int LIBSTUB_EVP_PKEY_CTX_set_dh_kdf_type(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___kdf = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dh_kdf_type(_base, ___ctx, ___kdf);
}

int LIB_EVP_PKEY_CTX_get_dh_kdf_type(struct Library * _base, EVP_PKEY_CTX * ___ctx);

int LIBSTUB_EVP_PKEY_CTX_get_dh_kdf_type(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_dh_kdf_type(_base, ___ctx);
}

int LIB_EVP_PKEY_CTX_set0_dh_kdf_oid(struct Library * _base, EVP_PKEY_CTX * ___ctx, ASN1_OBJECT * ___oid);

int LIBSTUB_EVP_PKEY_CTX_set0_dh_kdf_oid(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  ASN1_OBJECT * ___oid = (ASN1_OBJECT *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set0_dh_kdf_oid(_base, ___ctx, ___oid);
}

int LIB_EVP_PKEY_CTX_get0_dh_kdf_oid(struct Library * _base, EVP_PKEY_CTX * ___ctx, ASN1_OBJECT ** ___oid);

int LIBSTUB_EVP_PKEY_CTX_get0_dh_kdf_oid(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  ASN1_OBJECT ** ___oid = (ASN1_OBJECT **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get0_dh_kdf_oid(_base, ___ctx, ___oid);
}

int LIB_EVP_PKEY_CTX_set_dh_kdf_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD * ___md);

int LIBSTUB_EVP_PKEY_CTX_set_dh_kdf_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD * ___md = (const EVP_MD *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dh_kdf_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_get_dh_kdf_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD ** ___md);

int LIBSTUB_EVP_PKEY_CTX_get_dh_kdf_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD ** ___md = (const EVP_MD **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_dh_kdf_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_set_dh_kdf_outlen(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___len);

int LIBSTUB_EVP_PKEY_CTX_set_dh_kdf_outlen(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___len = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_dh_kdf_outlen(_base, ___ctx, ___len);
}

int LIB_EVP_PKEY_CTX_get_dh_kdf_outlen(struct Library * _base, EVP_PKEY_CTX * ___ctx, int * ___len);

int LIBSTUB_EVP_PKEY_CTX_get_dh_kdf_outlen(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int * ___len = (int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_dh_kdf_outlen(_base, ___ctx, ___len);
}

int LIB_EVP_PKEY_CTX_set0_dh_kdf_ukm(struct Library * _base, EVP_PKEY_CTX * ___ctx, unsigned char * ___ukm, int ___len);

int LIBSTUB_EVP_PKEY_CTX_set0_dh_kdf_ukm(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  unsigned char * ___ukm = (unsigned char *)REG_A1;
  int ___len = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set0_dh_kdf_ukm(_base, ___ctx, ___ukm, ___len);
}

int LIB_EVP_PKEY_CTX_get0_dh_kdf_ukm(struct Library * _base, EVP_PKEY_CTX * ___ctx, unsigned char ** ___ukm);

int LIBSTUB_EVP_PKEY_CTX_get0_dh_kdf_ukm(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  unsigned char ** ___ukm = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get0_dh_kdf_ukm(_base, ___ctx, ___ukm);
}

int LIB_EVP_CIPHER_CTX_get_updated_iv(struct Library * _base, EVP_CIPHER_CTX * ___ctx, void * ___buf, size_t ___len);

int LIBSTUB_EVP_CIPHER_CTX_get_updated_iv(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  void * ___buf = (void *)REG_A1;
  size_t ___len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_get_updated_iv(_base, ___ctx, ___buf, ___len);
}

int LIB_EVP_CIPHER_CTX_get_original_iv(struct Library * _base, EVP_CIPHER_CTX * ___ctx, void * ___buf, size_t ___len);

int LIBSTUB_EVP_CIPHER_CTX_get_original_iv(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  void * ___buf = (void *)REG_A1;
  size_t ___len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_get_original_iv(_base, ___ctx, ___buf, ___len);
}

const OSSL_PARAM * LIB_EVP_KEYMGMT_gettable_params(struct Library * _base, const EVP_KEYMGMT * ___keymgmt);

const OSSL_PARAM * LIBSTUB_EVP_KEYMGMT_gettable_params(void)
{
  const EVP_KEYMGMT * ___keymgmt = (const EVP_KEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_gettable_params(_base, ___keymgmt);
}

const OSSL_PARAM * LIB_EVP_KEYMGMT_settable_params(struct Library * _base, const EVP_KEYMGMT * ___keymgmt);

const OSSL_PARAM * LIBSTUB_EVP_KEYMGMT_settable_params(void)
{
  const EVP_KEYMGMT * ___keymgmt = (const EVP_KEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_settable_params(_base, ___keymgmt);
}

const OSSL_PARAM * LIB_EVP_KEYMGMT_gen_settable_params(struct Library * _base, const EVP_KEYMGMT * ___keymgmt);

const OSSL_PARAM * LIBSTUB_EVP_KEYMGMT_gen_settable_params(void)
{
  const EVP_KEYMGMT * ___keymgmt = (const EVP_KEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_gen_settable_params(_base, ___keymgmt);
}

const OSSL_PARAM * LIB_EVP_SIGNATURE_gettable_ctx_params(struct Library * _base, const EVP_SIGNATURE * ___sig);

const OSSL_PARAM * LIBSTUB_EVP_SIGNATURE_gettable_ctx_params(void)
{
  const EVP_SIGNATURE * ___sig = (const EVP_SIGNATURE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SIGNATURE_gettable_ctx_params(_base, ___sig);
}

const OSSL_PARAM * LIB_EVP_SIGNATURE_settable_ctx_params(struct Library * _base, const EVP_SIGNATURE * ___sig);

const OSSL_PARAM * LIBSTUB_EVP_SIGNATURE_settable_ctx_params(void)
{
  const EVP_SIGNATURE * ___sig = (const EVP_SIGNATURE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SIGNATURE_settable_ctx_params(_base, ___sig);
}

const OSSL_PARAM * LIB_EVP_KEYEXCH_gettable_ctx_params(struct Library * _base, const EVP_KEYEXCH * ___keyexch);

const OSSL_PARAM * LIBSTUB_EVP_KEYEXCH_gettable_ctx_params(void)
{
  const EVP_KEYEXCH * ___keyexch = (const EVP_KEYEXCH *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYEXCH_gettable_ctx_params(_base, ___keyexch);
}

const OSSL_PARAM * LIB_EVP_KEYEXCH_settable_ctx_params(struct Library * _base, const EVP_KEYEXCH * ___keyexch);

const OSSL_PARAM * LIBSTUB_EVP_KEYEXCH_settable_ctx_params(void)
{
  const EVP_KEYEXCH * ___keyexch = (const EVP_KEYEXCH *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYEXCH_settable_ctx_params(_base, ___keyexch);
}

EVP_PKEY * LIB_d2i_PUBKEY_ex(struct Library * _base, EVP_PKEY ** ___a, const unsigned char ** ___pp, long ___length, OSSL_LIB_CTX * ___libctx, const char * ___propq);

EVP_PKEY * LIBSTUB_d2i_PUBKEY_ex(void)
{
  EVP_PKEY ** ___a = (EVP_PKEY **)REG_A0;
  const unsigned char ** ___pp = (const unsigned char **)REG_A1;
  long ___length = (long)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_PUBKEY_ex(_base, ___a, ___pp, ___length, ___libctx, ___propq);
}

OSSL_STORE_INFO * LIB_OSSL_STORE_INFO_new_PUBKEY(struct Library * _base, EVP_PKEY * ___pubkey);

OSSL_STORE_INFO * LIBSTUB_OSSL_STORE_INFO_new_PUBKEY(void)
{
  EVP_PKEY * ___pubkey = (EVP_PKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_INFO_new_PUBKEY(_base, ___pubkey);
}

EVP_PKEY * LIB_OSSL_STORE_INFO_get0_PUBKEY(struct Library * _base, const OSSL_STORE_INFO * ___info);

EVP_PKEY * LIBSTUB_OSSL_STORE_INFO_get0_PUBKEY(void)
{
  const OSSL_STORE_INFO * ___info = (const OSSL_STORE_INFO *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_INFO_get0_PUBKEY(_base, ___info);
}

EVP_PKEY * LIB_OSSL_STORE_INFO_get1_PUBKEY(struct Library * _base, const OSSL_STORE_INFO * ___info);

EVP_PKEY * LIBSTUB_OSSL_STORE_INFO_get1_PUBKEY(void)
{
  const OSSL_STORE_INFO * ___info = (const OSSL_STORE_INFO *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_INFO_get1_PUBKEY(_base, ___info);
}

EVP_PKEY * LIB_PEM_read_bio_PUBKEY_ex(struct Library * _base, BIO * ___out, EVP_PKEY ** ___x, pem_password_cb * ___cb, void * ___u, OSSL_LIB_CTX * ___libctx, const char * ___propq);

EVP_PKEY * LIBSTUB_PEM_read_bio_PUBKEY_ex(void)
{
  BIO * ___out = (BIO *)REG_A0;
  EVP_PKEY ** ___x = (EVP_PKEY **)REG_A1;
  pem_password_cb * ___cb = (pem_password_cb *)REG_A2;
  void * ___u = (void *)REG_A3;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D0;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PEM_read_bio_PUBKEY_ex(_base, ___out, ___x, ___cb, ___u, ___libctx, ___propq);
}

EVP_PKEY * LIB_PEM_read_bio_Parameters_ex(struct Library * _base, BIO * ___bp, EVP_PKEY ** ___x, OSSL_LIB_CTX * ___libctx, const char * ___propq);

EVP_PKEY * LIBSTUB_PEM_read_bio_Parameters_ex(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  EVP_PKEY ** ___x = (EVP_PKEY **)REG_A1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PEM_read_bio_Parameters_ex(_base, ___bp, ___x, ___libctx, ___propq);
}

EC_GROUP * LIB_EC_GROUP_new_from_params(struct Library * _base, const OSSL_PARAM * ___params, OSSL_LIB_CTX * ___libctx, const char * ___propq);

EC_GROUP * LIBSTUB_EC_GROUP_new_from_params(void)
{
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EC_GROUP_new_from_params(_base, ___params, ___libctx, ___propq);
}

int LIB_OSSL_STORE_LOADER_set_open_ex(struct Library * _base, OSSL_STORE_LOADER * ___loader, OSSL_STORE_open_ex_fn ___open_ex_function);

int LIBSTUB_OSSL_STORE_LOADER_set_open_ex(void)
{
  OSSL_STORE_LOADER * ___loader = (OSSL_STORE_LOADER *)REG_A0;
  OSSL_STORE_open_ex_fn ___open_ex_function = (OSSL_STORE_open_ex_fn)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_LOADER_set_open_ex(_base, ___loader, ___open_ex_function);
}

OSSL_STORE_LOADER * LIB_OSSL_STORE_LOADER_fetch(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___scheme, const char * ___properties);

OSSL_STORE_LOADER * LIBSTUB_OSSL_STORE_LOADER_fetch(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___scheme = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_LOADER_fetch(_base, ___libctx, ___scheme, ___properties);
}

int LIB_OSSL_STORE_LOADER_up_ref(struct Library * _base, OSSL_STORE_LOADER * ___loader);

int LIBSTUB_OSSL_STORE_LOADER_up_ref(void)
{
  OSSL_STORE_LOADER * ___loader = (OSSL_STORE_LOADER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_LOADER_up_ref(_base, ___loader);
}

const OSSL_PROVIDER * LIB_OSSL_STORE_LOADER_get0_provider(struct Library * _base, const OSSL_STORE_LOADER * ___loader);

const OSSL_PROVIDER * LIBSTUB_OSSL_STORE_LOADER_get0_provider(void)
{
  const OSSL_STORE_LOADER * ___loader = (const OSSL_STORE_LOADER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_LOADER_get0_provider(_base, ___loader);
}

const char * LIB_OSSL_STORE_LOADER_get0_properties(struct Library * _base, const OSSL_STORE_LOADER * ___loader);

const char * LIBSTUB_OSSL_STORE_LOADER_get0_properties(void)
{
  const OSSL_STORE_LOADER * ___loader = (const OSSL_STORE_LOADER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_LOADER_get0_properties(_base, ___loader);
}

int LIB_OSSL_STORE_LOADER_is_a(struct Library * _base, const OSSL_STORE_LOADER * ___loader, const char * ___scheme);

int LIBSTUB_OSSL_STORE_LOADER_is_a(void)
{
  const OSSL_STORE_LOADER * ___loader = (const OSSL_STORE_LOADER *)REG_A0;
  const char * ___scheme = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_LOADER_is_a(_base, ___loader, ___scheme);
}

void LIB_OSSL_STORE_LOADER_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(OSSL_STORE_LOADER *loader,void *arg), void * ___arg);

void LIBSTUB_OSSL_STORE_LOADER_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(OSSL_STORE_LOADER *loader,void *arg) = (void (*)(OSSL_STORE_LOADER *loader,void *arg))REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_LOADER_do_all_provided(_base, ___libctx, ___fn, ___arg);
}

int LIB_OSSL_STORE_LOADER_names_do_all(struct Library * _base, const OSSL_STORE_LOADER * ___loader, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_OSSL_STORE_LOADER_names_do_all(void)
{
  const OSSL_STORE_LOADER * ___loader = (const OSSL_STORE_LOADER *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_LOADER_names_do_all(_base, ___loader, ___fn, ___data);
}

int LIB_OSSL_PARAM_get_utf8_string_ptr(struct Library * _base, const OSSL_PARAM * ___p, const char ** ___val);

int LIBSTUB_OSSL_PARAM_get_utf8_string_ptr(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  const char ** ___val = (const char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_utf8_string_ptr(_base, ___p, ___val);
}

int LIB_OSSL_PARAM_get_octet_string_ptr(struct Library * _base, const OSSL_PARAM * ___p, const void ** ___val, size_t * ___used_len);

int LIBSTUB_OSSL_PARAM_get_octet_string_ptr(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  const void ** ___val = (const void **)REG_A1;
  size_t * ___used_len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_get_octet_string_ptr(_base, ___p, ___val, ___used_len);
}

int LIB_OSSL_DECODER_CTX_set_passphrase_cb(struct Library * _base, OSSL_DECODER_CTX * ___ctx, OSSL_PASSPHRASE_CALLBACK * ___cb, void * ___cbarg);

int LIBSTUB_OSSL_DECODER_CTX_set_passphrase_cb(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  OSSL_PASSPHRASE_CALLBACK * ___cb = (OSSL_PASSPHRASE_CALLBACK *)REG_A1;
  void * ___cbarg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_set_passphrase_cb(_base, ___ctx, ___cb, ___cbarg);
}

int LIB_EVP_PKEY_CTX_set_mac_key(struct Library * _base, EVP_PKEY_CTX * ___ctx, const unsigned char * ___key, int ___keylen);

int LIBSTUB_EVP_PKEY_CTX_set_mac_key(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const unsigned char * ___key = (const unsigned char *)REG_A1;
  int ___keylen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_mac_key(_base, ___ctx, ___key, ___keylen);
}

OSSL_STORE_INFO * LIB_OSSL_STORE_INFO_new(struct Library * _base, int ___type, void * ___data);

OSSL_STORE_INFO * LIBSTUB_OSSL_STORE_INFO_new(void)
{
  int ___type = (int)REG_D0;
  void * ___data = (void *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_INFO_new(_base, ___type, ___data);
}

void * LIB_OSSL_STORE_INFO_get0_data(struct Library * _base, int ___type, const OSSL_STORE_INFO * ___info);

void * LIBSTUB_OSSL_STORE_INFO_get0_data(void)
{
  int ___type = (int)REG_D0;
  const OSSL_STORE_INFO * ___info = (const OSSL_STORE_INFO *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_INFO_get0_data(_base, ___type, ___info);
}

EVP_PKEY * LIB_EVP_PKCS82PKEY_ex(struct Library * _base, const PKCS8_PRIV_KEY_INFO * ___p8, OSSL_LIB_CTX * ___libctx, const char * ___propq);

EVP_PKEY * LIBSTUB_EVP_PKCS82PKEY_ex(void)
{
  const PKCS8_PRIV_KEY_INFO * ___p8 = (const PKCS8_PRIV_KEY_INFO *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKCS82PKEY_ex(_base, ___p8, ___libctx, ___propq);
}

int LIB_EVP_PKEY_CTX_set1_id(struct Library * _base, EVP_PKEY_CTX * ___ctx, const void * ___id, int ___len);

int LIBSTUB_EVP_PKEY_CTX_set1_id(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const void * ___id = (const void *)REG_A1;
  int ___len = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set1_id(_base, ___ctx, ___id, ___len);
}

int LIB_EVP_PKEY_CTX_get1_id(struct Library * _base, EVP_PKEY_CTX * ___ctx, void * ___id);

int LIBSTUB_EVP_PKEY_CTX_get1_id(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  void * ___id = (void *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get1_id(_base, ___ctx, ___id);
}

int LIB_EVP_PKEY_CTX_get1_id_len(struct Library * _base, EVP_PKEY_CTX * ___ctx, size_t * ___id_len);

int LIBSTUB_EVP_PKEY_CTX_get1_id_len(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  size_t * ___id_len = (size_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get1_id_len(_base, ___ctx, ___id_len);
}

CMS_ContentInfo * LIB_CMS_AuthEnvelopedData_create(struct Library * _base, const EVP_CIPHER * ___cipher);

CMS_ContentInfo * LIBSTUB_CMS_AuthEnvelopedData_create(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_AuthEnvelopedData_create(_base, ___cipher);
}

CMS_ContentInfo * LIB_CMS_AuthEnvelopedData_create_ex(struct Library * _base, const EVP_CIPHER * ___cipher, OSSL_LIB_CTX * ___libctx, const char * ___propq);

CMS_ContentInfo * LIBSTUB_CMS_AuthEnvelopedData_create_ex(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_AuthEnvelopedData_create_ex(_base, ___cipher, ___libctx, ___propq);
}

int LIB_EVP_PKEY_CTX_set_ec_param_enc(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___param_enc);

int LIBSTUB_EVP_PKEY_CTX_set_ec_param_enc(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___param_enc = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_ec_param_enc(_base, ___ctx, ___param_enc);
}

const char * LIB_EVP_PKEY_get0_type_name(struct Library * _base, const EVP_PKEY * ___key);

const char * LIBSTUB_EVP_PKEY_get0_type_name(void)
{
  const EVP_PKEY * ___key = (const EVP_PKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get0_type_name(_base, ___key);
}

const char * LIB_EVP_KEYMGMT_get0_name(struct Library * _base, const EVP_KEYMGMT * ___keymgmt);

const char * LIBSTUB_EVP_KEYMGMT_get0_name(void)
{
  const EVP_KEYMGMT * ___keymgmt = (const EVP_KEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_get0_name(_base, ___keymgmt);
}

void LIB_EVP_KEM_free(struct Library * _base, EVP_KEM * ___wrap);

void LIBSTUB_EVP_KEM_free(void)
{
  EVP_KEM * ___wrap = (EVP_KEM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEM_free(_base, ___wrap);
}

int LIB_EVP_KEM_up_ref(struct Library * _base, EVP_KEM * ___wrap);

int LIBSTUB_EVP_KEM_up_ref(void)
{
  EVP_KEM * ___wrap = (EVP_KEM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEM_up_ref(_base, ___wrap);
}

OSSL_PROVIDER * LIB_EVP_KEM_get0_provider(struct Library * _base, const EVP_KEM * ___wrap);

OSSL_PROVIDER * LIBSTUB_EVP_KEM_get0_provider(void)
{
  const EVP_KEM * ___wrap = (const EVP_KEM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEM_get0_provider(_base, ___wrap);
}

EVP_KEM * LIB_EVP_KEM_fetch(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___algorithm, const char * ___properties);

EVP_KEM * LIBSTUB_EVP_KEM_fetch(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___algorithm = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEM_fetch(_base, ___ctx, ___algorithm, ___properties);
}

int LIB_EVP_KEM_is_a(struct Library * _base, const EVP_KEM * ___wrap, const char * ___name);

int LIBSTUB_EVP_KEM_is_a(void)
{
  const EVP_KEM * ___wrap = (const EVP_KEM *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEM_is_a(_base, ___wrap, ___name);
}

void LIB_EVP_KEM_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(EVP_KEM *wrap,void *arg), void * ___arg);

void LIBSTUB_EVP_KEM_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(EVP_KEM *wrap,void *arg) = (void (*)(EVP_KEM *wrap,void *arg))REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEM_do_all_provided(_base, ___libctx, ___fn, ___arg);
}

int LIB_EVP_KEM_names_do_all(struct Library * _base, const EVP_KEM * ___wrap, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_EVP_KEM_names_do_all(void)
{
  const EVP_KEM * ___wrap = (const EVP_KEM *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEM_names_do_all(_base, ___wrap, ___fn, ___data);
}

int LIB_EVP_PKEY_encapsulate_init(struct Library * _base, EVP_PKEY_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_encapsulate_init(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_encapsulate_init(_base, ___ctx, ___params);
}

int LIB_EVP_PKEY_encapsulate(struct Library * _base, EVP_PKEY_CTX * ___ctx, unsigned char * ___wrappedkey, size_t * ___wrappedkeylen, unsigned char * ___genkey, size_t * ___genkeylen);

int LIBSTUB_EVP_PKEY_encapsulate(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  unsigned char * ___wrappedkey = (unsigned char *)REG_A1;
  size_t * ___wrappedkeylen = (size_t *)REG_A2;
  unsigned char * ___genkey = (unsigned char *)REG_A3;
  size_t * ___genkeylen = (size_t *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_encapsulate(_base, ___ctx, ___wrappedkey, ___wrappedkeylen, ___genkey, ___genkeylen);
}

int LIB_EVP_PKEY_decapsulate_init(struct Library * _base, EVP_PKEY_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_decapsulate_init(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_decapsulate_init(_base, ___ctx, ___params);
}

int LIB_EVP_PKEY_decapsulate(struct Library * _base, EVP_PKEY_CTX * ___ctx, unsigned char * ___unwrapped, size_t * ___unwrappedlen, const unsigned char * ___wrapped, size_t ___wrappedlen);

int LIBSTUB_EVP_PKEY_decapsulate(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  unsigned char * ___unwrapped = (unsigned char *)REG_A1;
  size_t * ___unwrappedlen = (size_t *)REG_A2;
  const unsigned char * ___wrapped = (const unsigned char *)REG_A3;
  size_t ___wrappedlen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_decapsulate(_base, ___ctx, ___unwrapped, ___unwrappedlen, ___wrapped, ___wrappedlen);
}

int LIB_EVP_PKEY_CTX_set_kem_op(struct Library * _base, EVP_PKEY_CTX * ___ctx, const char * ___op);

int LIBSTUB_EVP_PKEY_CTX_set_kem_op(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const char * ___op = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_kem_op(_base, ___ctx, ___op);
}

const OSSL_PARAM * LIB_OSSL_ENCODER_gettable_params(struct Library * _base, OSSL_ENCODER * ___encoder);

const OSSL_PARAM * LIBSTUB_OSSL_ENCODER_gettable_params(void)
{
  OSSL_ENCODER * ___encoder = (OSSL_ENCODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_gettable_params(_base, ___encoder);
}

int LIB_OSSL_ENCODER_get_params(struct Library * _base, OSSL_ENCODER * ___encoder, OSSL_PARAM * ___params);

int LIBSTUB_OSSL_ENCODER_get_params(void)
{
  OSSL_ENCODER * ___encoder = (OSSL_ENCODER *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_get_params(_base, ___encoder, ___params);
}

int LIB_OSSL_ENCODER_CTX_set_output_type(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, const char * ___output_type);

int LIBSTUB_OSSL_ENCODER_CTX_set_output_type(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  const char * ___output_type = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_set_output_type(_base, ___ctx, ___output_type);
}

int LIB_OSSL_ENCODER_CTX_add_encoder(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, OSSL_ENCODER * ___encoder);

int LIBSTUB_OSSL_ENCODER_CTX_add_encoder(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  OSSL_ENCODER * ___encoder = (OSSL_ENCODER *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_add_encoder(_base, ___ctx, ___encoder);
}

int LIB_OSSL_ENCODER_CTX_add_extra(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_OSSL_ENCODER_CTX_add_extra(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_add_extra(_base, ___ctx, ___libctx, ___propq);
}

int LIB_OSSL_ENCODER_CTX_get_num_encoders(struct Library * _base, OSSL_ENCODER_CTX * ___ctx);

int LIBSTUB_OSSL_ENCODER_CTX_get_num_encoders(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_get_num_encoders(_base, ___ctx);
}

int LIB_OSSL_ENCODER_CTX_set_selection(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, int ___selection);

int LIBSTUB_OSSL_ENCODER_CTX_set_selection(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  int ___selection = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_set_selection(_base, ___ctx, ___selection);
}

OSSL_ENCODER * LIB_OSSL_ENCODER_INSTANCE_get_encoder(struct Library * _base, OSSL_ENCODER_INSTANCE * ___encoder_inst);

OSSL_ENCODER * LIBSTUB_OSSL_ENCODER_INSTANCE_get_encoder(void)
{
  OSSL_ENCODER_INSTANCE * ___encoder_inst = (OSSL_ENCODER_INSTANCE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_INSTANCE_get_encoder(_base, ___encoder_inst);
}

void * LIB_OSSL_ENCODER_INSTANCE_get_encoder_ctx(struct Library * _base, OSSL_ENCODER_INSTANCE * ___encoder_inst);

void * LIBSTUB_OSSL_ENCODER_INSTANCE_get_encoder_ctx(void)
{
  OSSL_ENCODER_INSTANCE * ___encoder_inst = (OSSL_ENCODER_INSTANCE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_INSTANCE_get_encoder_ctx(_base, ___encoder_inst);
}

const char * LIB_OSSL_ENCODER_INSTANCE_get_output_type(struct Library * _base, OSSL_ENCODER_INSTANCE * ___encoder_inst);

const char * LIBSTUB_OSSL_ENCODER_INSTANCE_get_output_type(void)
{
  OSSL_ENCODER_INSTANCE * ___encoder_inst = (OSSL_ENCODER_INSTANCE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_INSTANCE_get_output_type(_base, ___encoder_inst);
}

int LIB_OSSL_ENCODER_CTX_set_construct(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, OSSL_ENCODER_CONSTRUCT * ___construct);

int LIBSTUB_OSSL_ENCODER_CTX_set_construct(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  OSSL_ENCODER_CONSTRUCT * ___construct = (OSSL_ENCODER_CONSTRUCT *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_set_construct(_base, ___ctx, ___construct);
}

int LIB_OSSL_ENCODER_CTX_set_construct_data(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, void * ___construct_data);

int LIBSTUB_OSSL_ENCODER_CTX_set_construct_data(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  void * ___construct_data = (void *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_set_construct_data(_base, ___ctx, ___construct_data);
}

int LIB_OSSL_ENCODER_CTX_set_cleanup(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, OSSL_ENCODER_CLEANUP * ___cleanup);

int LIBSTUB_OSSL_ENCODER_CTX_set_cleanup(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  OSSL_ENCODER_CLEANUP * ___cleanup = (OSSL_ENCODER_CLEANUP *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_set_cleanup(_base, ___ctx, ___cleanup);
}

int LIB_OSSL_ENCODER_CTX_set_passphrase_cb(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, OSSL_PASSPHRASE_CALLBACK * ___cb, void * ___cbarg);

int LIBSTUB_OSSL_ENCODER_CTX_set_passphrase_cb(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  OSSL_PASSPHRASE_CALLBACK * ___cb = (OSSL_PASSPHRASE_CALLBACK *)REG_A1;
  void * ___cbarg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_set_passphrase_cb(_base, ___ctx, ___cb, ___cbarg);
}

int LIB_EVP_PKEY_type_names_do_all(struct Library * _base, const EVP_PKEY * ___pkey, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_EVP_PKEY_type_names_do_all(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_type_names_do_all(_base, ___pkey, ___fn, ___data);
}

const char * LIB_OSSL_DECODER_INSTANCE_get_input_type(struct Library * _base, OSSL_DECODER_INSTANCE * ___decoder_inst);

const char * LIBSTUB_OSSL_DECODER_INSTANCE_get_input_type(void)
{
  OSSL_DECODER_INSTANCE * ___decoder_inst = (OSSL_DECODER_INSTANCE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_INSTANCE_get_input_type(_base, ___decoder_inst);
}

const OSSL_PARAM * LIB_EVP_ASYM_CIPHER_gettable_ctx_params(struct Library * _base, const EVP_ASYM_CIPHER * ___ciph);

const OSSL_PARAM * LIBSTUB_EVP_ASYM_CIPHER_gettable_ctx_params(void)
{
  const EVP_ASYM_CIPHER * ___ciph = (const EVP_ASYM_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_ASYM_CIPHER_gettable_ctx_params(_base, ___ciph);
}

const OSSL_PARAM * LIB_EVP_ASYM_CIPHER_settable_ctx_params(struct Library * _base, const EVP_ASYM_CIPHER * ___ciph);

const OSSL_PARAM * LIBSTUB_EVP_ASYM_CIPHER_settable_ctx_params(void)
{
  const EVP_ASYM_CIPHER * ___ciph = (const EVP_ASYM_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_ASYM_CIPHER_settable_ctx_params(_base, ___ciph);
}

const OSSL_PARAM * LIB_EVP_KEM_gettable_ctx_params(struct Library * _base, const EVP_KEM * ___kem);

const OSSL_PARAM * LIBSTUB_EVP_KEM_gettable_ctx_params(void)
{
  const EVP_KEM * ___kem = (const EVP_KEM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEM_gettable_ctx_params(_base, ___kem);
}

const OSSL_PARAM * LIB_EVP_KEM_settable_ctx_params(struct Library * _base, const EVP_KEM * ___kem);

const OSSL_PARAM * LIBSTUB_EVP_KEM_settable_ctx_params(void)
{
  const EVP_KEM * ___kem = (const EVP_KEM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEM_settable_ctx_params(_base, ___kem);
}

int LIB_PKCS7_type_is_other(struct Library * _base, PKCS7 * ___p7);

int LIBSTUB_PKCS7_type_is_other(void)
{
  PKCS7 * ___p7 = (PKCS7 *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS7_type_is_other(_base, ___p7);
}

ASN1_OCTET_STRING * LIB_PKCS7_get_octet_string(struct Library * _base, PKCS7 * ___p7);

ASN1_OCTET_STRING * LIBSTUB_PKCS7_get_octet_string(void)
{
  PKCS7 * ___p7 = (PKCS7 *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS7_get_octet_string(_base, ___p7);
}

int LIB_OSSL_DECODER_from_data(struct Library * _base, OSSL_DECODER_CTX * ___ctx, const unsigned char ** ___pdata, size_t * ___pdata_len);

int LIBSTUB_OSSL_DECODER_from_data(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  const unsigned char ** ___pdata = (const unsigned char **)REG_A1;
  size_t * ___pdata_len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_from_data(_base, ___ctx, ___pdata, ___pdata_len);
}

int LIB_OSSL_ENCODER_to_data(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, unsigned char ** ___pdata, size_t * ___pdata_len);

int LIBSTUB_OSSL_ENCODER_to_data(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  unsigned char ** ___pdata = (unsigned char **)REG_A1;
  size_t * ___pdata_len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_to_data(_base, ___ctx, ___pdata, ___pdata_len);
}

OSSL_LIB_CTX * LIB_EVP_PKEY_CTX_get0_libctx(struct Library * _base, EVP_PKEY_CTX * ___ctx);

OSSL_LIB_CTX * LIBSTUB_EVP_PKEY_CTX_get0_libctx(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get0_libctx(_base, ___ctx);
}

const char * LIB_EVP_PKEY_CTX_get0_propq(struct Library * _base, const EVP_PKEY_CTX * ___ctx);

const char * LIBSTUB_EVP_PKEY_CTX_get0_propq(void)
{
  const EVP_PKEY_CTX * ___ctx = (const EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get0_propq(_base, ___ctx);
}

int LIB_OSSL_DECODER_CTX_set_selection(struct Library * _base, OSSL_DECODER_CTX * ___ctx, int ___selection);

int LIBSTUB_OSSL_DECODER_CTX_set_selection(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  int ___selection = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_set_selection(_base, ___ctx, ___selection);
}

int LIB_OSSL_DECODER_CTX_set_input_structure(struct Library * _base, OSSL_DECODER_CTX * ___ctx, const char * ___input_structure);

int LIBSTUB_OSSL_DECODER_CTX_set_input_structure(void)
{
  OSSL_DECODER_CTX * ___ctx = (OSSL_DECODER_CTX *)REG_A0;
  const char * ___input_structure = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_CTX_set_input_structure(_base, ___ctx, ___input_structure);
}

const char * LIB_OSSL_DECODER_INSTANCE_get_input_structure(struct Library * _base, OSSL_DECODER_INSTANCE * ___decoder_inst, int * ___was_set);

const char * LIBSTUB_OSSL_DECODER_INSTANCE_get_input_structure(void)
{
  OSSL_DECODER_INSTANCE * ___decoder_inst = (OSSL_DECODER_INSTANCE *)REG_A0;
  int * ___was_set = (int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_INSTANCE_get_input_structure(_base, ___decoder_inst, ___was_set);
}

int LIB_OSSL_ENCODER_CTX_set_output_structure(struct Library * _base, OSSL_ENCODER_CTX * ___ctx, const char * ___output_structure);

int LIBSTUB_OSSL_ENCODER_CTX_set_output_structure(void)
{
  OSSL_ENCODER_CTX * ___ctx = (OSSL_ENCODER_CTX *)REG_A0;
  const char * ___output_structure = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_CTX_set_output_structure(_base, ___ctx, ___output_structure);
}

const char * LIB_OSSL_ENCODER_INSTANCE_get_output_structure(struct Library * _base, OSSL_ENCODER_INSTANCE * ___encoder_inst);

const char * LIBSTUB_OSSL_ENCODER_INSTANCE_get_output_structure(void)
{
  OSSL_ENCODER_INSTANCE * ___encoder_inst = (OSSL_ENCODER_INSTANCE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_INSTANCE_get_output_structure(_base, ___encoder_inst);
}

int LIB_PEM_write_bio_PrivateKey_ex(struct Library * _base, BIO * ___out, const EVP_PKEY * ___x, const EVP_CIPHER * ___enc, const unsigned char * ___kstr, int ___klen, pem_password_cb * ___cb, void * ___u, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_PEM_write_bio_PrivateKey_ex(void)
{
  BIO * ___out = (BIO *)REG_A0;
  const EVP_PKEY * ___x = (const EVP_PKEY *)REG_A1;
  const EVP_CIPHER * ___enc = (const EVP_CIPHER *)REG_A2;
  const unsigned char * ___kstr = (const unsigned char *)REG_A3;
  int ___klen = (int)REG_D0;
  pem_password_cb * ___cb = (pem_password_cb *)REG_D1;
  void * ___u = (void *)REG_D2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D3;
  const char * ___propq = (const char *)REG_D4;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PEM_write_bio_PrivateKey_ex(_base, ___out, ___x, ___enc, ___kstr, ___klen, ___cb, ___u, ___libctx, ___propq);
}

int LIB_PEM_write_bio_PUBKEY_ex(struct Library * _base, BIO * ___out, const EVP_PKEY * ___x, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_PEM_write_bio_PUBKEY_ex(void)
{
  BIO * ___out = (BIO *)REG_A0;
  const EVP_PKEY * ___x = (const EVP_PKEY *)REG_A1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PEM_write_bio_PUBKEY_ex(_base, ___out, ___x, ___libctx, ___propq);
}

int LIB_EVP_PKEY_get_group_name(struct Library * _base, const EVP_PKEY * ___pkey, char * ___name, size_t ___name_sz, size_t * ___gname_len);

int LIBSTUB_EVP_PKEY_get_group_name(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  char * ___name = (char *)REG_A1;
  size_t ___name_sz = (size_t)REG_D0;
  size_t * ___gname_len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get_group_name(_base, ___pkey, ___name, ___name_sz, ___gname_len);
}

int LIB_CRYPTO_atomic_or(struct Library * _base, uint64_t * ___val, uint64_t ___op, uint64_t * ___ret, CRYPTO_RWLOCK * ___lock);

int LIBSTUB_CRYPTO_atomic_or(void)
{
  uint64_t * ___val = (uint64_t *)REG_A0;
  uint64_t ___op = (uint64_t)REG_D0;
  uint64_t * ___ret = (uint64_t *)REG_A1;
  CRYPTO_RWLOCK * ___lock = (CRYPTO_RWLOCK *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CRYPTO_atomic_or(_base, ___val, ___op, ___ret, ___lock);
}

int LIB_CRYPTO_atomic_load(struct Library * _base, uint64_t * ___val, uint64_t * ___ret, CRYPTO_RWLOCK * ___lock);

int LIBSTUB_CRYPTO_atomic_load(void)
{
  uint64_t * ___val = (uint64_t *)REG_A0;
  uint64_t * ___ret = (uint64_t *)REG_A1;
  CRYPTO_RWLOCK * ___lock = (CRYPTO_RWLOCK *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CRYPTO_atomic_load(_base, ___val, ___ret, ___lock);
}

int LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_md(struct Library * _base, EVP_PKEY_CTX * ___ctx, const EVP_MD * ___md);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_pss_keygen_md(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const EVP_MD * ___md = (const EVP_MD *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_md(_base, ___ctx, ___md);
}

int LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(struct Library * _base, EVP_PKEY_CTX * ___ctx, const char * ___mdname, const char * ___mdprops);

int LIBSTUB_EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const char * ___mdname = (const char *)REG_A1;
  const char * ___mdprops = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(_base, ___ctx, ___mdname, ___mdprops);
}

const OSSL_PARAM * LIB_EVP_PKEY_settable_params(struct Library * _base, const EVP_PKEY * ___pkey);

const OSSL_PARAM * LIBSTUB_EVP_PKEY_settable_params(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_settable_params(_base, ___pkey);
}

int LIB_EVP_PKEY_set_params(struct Library * _base, EVP_PKEY * ___pkey, OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_set_params(void)
{
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_set_params(_base, ___pkey, ___params);
}

int LIB_EVP_PKEY_set_int_param(struct Library * _base, EVP_PKEY * ___pkey, const char * ___key_name, int ___in);

int LIBSTUB_EVP_PKEY_set_int_param(void)
{
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A0;
  const char * ___key_name = (const char *)REG_A1;
  int ___in = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_set_int_param(_base, ___pkey, ___key_name, ___in);
}

int LIB_EVP_PKEY_set_size_t_param(struct Library * _base, EVP_PKEY * ___pkey, const char * ___key_name, size_t ___in);

int LIBSTUB_EVP_PKEY_set_size_t_param(void)
{
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A0;
  const char * ___key_name = (const char *)REG_A1;
  size_t ___in = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_set_size_t_param(_base, ___pkey, ___key_name, ___in);
}

int LIB_EVP_PKEY_set_bn_param(struct Library * _base, EVP_PKEY * ___pkey, const char * ___key_name, const BIGNUM * ___bn);

int LIBSTUB_EVP_PKEY_set_bn_param(void)
{
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A0;
  const char * ___key_name = (const char *)REG_A1;
  const BIGNUM * ___bn = (const BIGNUM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_set_bn_param(_base, ___pkey, ___key_name, ___bn);
}

int LIB_EVP_PKEY_set_utf8_string_param(struct Library * _base, EVP_PKEY * ___pkey, const char * ___key_name, const char * ___str);

int LIBSTUB_EVP_PKEY_set_utf8_string_param(void)
{
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A0;
  const char * ___key_name = (const char *)REG_A1;
  const char * ___str = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_set_utf8_string_param(_base, ___pkey, ___key_name, ___str);
}

int LIB_EVP_PKEY_set_octet_string_param(struct Library * _base, EVP_PKEY * ___pkey, const char * ___key_name, const unsigned char * ___buf, size_t ___bsize);

int LIBSTUB_EVP_PKEY_set_octet_string_param(void)
{
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A0;
  const char * ___key_name = (const char *)REG_A1;
  const unsigned char * ___buf = (const unsigned char *)REG_A2;
  size_t ___bsize = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_set_octet_string_param(_base, ___pkey, ___key_name, ___buf, ___bsize);
}

int LIB_EVP_PKEY_get_ec_point_conv_form(struct Library * _base, const EVP_PKEY * ___pkey);

int LIBSTUB_EVP_PKEY_get_ec_point_conv_form(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get_ec_point_conv_form(_base, ___pkey);
}

int LIB_EVP_PKEY_get_field_type(struct Library * _base, const EVP_PKEY * ___pkey);

int LIBSTUB_EVP_PKEY_get_field_type(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get_field_type(_base, ___pkey);
}

int LIB_EVP_PKEY_get_params(struct Library * _base, const EVP_PKEY * ___pkey, OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_get_params(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get_params(_base, ___pkey, ___params);
}

int LIB_EVP_PKEY_fromdata_init(struct Library * _base, EVP_PKEY_CTX * ___ctx);

int LIBSTUB_EVP_PKEY_fromdata_init(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_fromdata_init(_base, ___ctx);
}

const OSSL_PARAM * LIB_EVP_PKEY_fromdata_settable(struct Library * _base, EVP_PKEY_CTX * ___ctx, int ___selection);

const OSSL_PARAM * LIBSTUB_EVP_PKEY_fromdata_settable(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  int ___selection = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_fromdata_settable(_base, ___ctx, ___selection);
}

int LIB_EVP_PKEY_param_check_quick(struct Library * _base, EVP_PKEY_CTX * ___ctx);

int LIBSTUB_EVP_PKEY_param_check_quick(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_param_check_quick(_base, ___ctx);
}

int LIB_EVP_PKEY_public_check_quick(struct Library * _base, EVP_PKEY_CTX * ___ctx);

int LIBSTUB_EVP_PKEY_public_check_quick(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_public_check_quick(_base, ___ctx);
}

int LIB_EVP_PKEY_CTX_is_a(struct Library * _base, EVP_PKEY_CTX * ___ctx, const char * ___keytype);

int LIBSTUB_EVP_PKEY_CTX_is_a(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const char * ___keytype = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_is_a(_base, ___ctx, ___keytype);
}

const OSSL_PARAM * LIB_EVP_CIPHER_CTX_settable_params(struct Library * _base, EVP_CIPHER_CTX * ___ctx);

const OSSL_PARAM * LIBSTUB_EVP_CIPHER_CTX_settable_params(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_settable_params(_base, ___ctx);
}

const OSSL_PARAM * LIB_EVP_CIPHER_CTX_gettable_params(struct Library * _base, EVP_CIPHER_CTX * ___ctx);

const OSSL_PARAM * LIBSTUB_EVP_CIPHER_CTX_gettable_params(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_gettable_params(_base, ___ctx);
}

const OSSL_PARAM * LIB_EVP_KDF_CTX_gettable_params(struct Library * _base, EVP_KDF_CTX * ___ctx);

const OSSL_PARAM * LIBSTUB_EVP_KDF_CTX_gettable_params(void)
{
  EVP_KDF_CTX * ___ctx = (EVP_KDF_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_CTX_gettable_params(_base, ___ctx);
}

const OSSL_PARAM * LIB_EVP_KDF_CTX_settable_params(struct Library * _base, EVP_KDF_CTX * ___ctx);

const OSSL_PARAM * LIBSTUB_EVP_KDF_CTX_settable_params(void)
{
  EVP_KDF_CTX * ___ctx = (EVP_KDF_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_CTX_settable_params(_base, ___ctx);
}

const OSSL_PARAM * LIB_EVP_MAC_CTX_gettable_params(struct Library * _base, EVP_MAC_CTX * ___ctx);

const OSSL_PARAM * LIBSTUB_EVP_MAC_CTX_gettable_params(void)
{
  EVP_MAC_CTX * ___ctx = (EVP_MAC_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_CTX_gettable_params(_base, ___ctx);
}

const OSSL_PARAM * LIB_EVP_MAC_CTX_settable_params(struct Library * _base, EVP_MAC_CTX * ___ctx);

const OSSL_PARAM * LIBSTUB_EVP_MAC_CTX_settable_params(void)
{
  EVP_MAC_CTX * ___ctx = (EVP_MAC_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_CTX_settable_params(_base, ___ctx);
}

const OSSL_PARAM * LIB_EVP_RAND_CTX_gettable_params(struct Library * _base, EVP_RAND_CTX * ___ctx);

const OSSL_PARAM * LIBSTUB_EVP_RAND_CTX_gettable_params(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_CTX_gettable_params(_base, ___ctx);
}

const OSSL_PARAM * LIB_EVP_RAND_CTX_settable_params(struct Library * _base, EVP_RAND_CTX * ___ctx);

const OSSL_PARAM * LIBSTUB_EVP_RAND_CTX_settable_params(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_CTX_settable_params(_base, ___ctx);
}

int LIB_RAND_set_DRBG_type(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___drbg, const char * ___propq, const char * ___cipher, const char * ___digest);

int LIBSTUB_RAND_set_DRBG_type(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___drbg = (const char *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  const char * ___cipher = (const char *)REG_A3;
  const char * ___digest = (const char *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_RAND_set_DRBG_type(_base, ___ctx, ___drbg, ___propq, ___cipher, ___digest);
}

int LIB_RAND_set_seed_source_type(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___seed, const char * ___propq);

int LIBSTUB_RAND_set_seed_source_type(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___seed = (const char *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_RAND_set_seed_source_type(_base, ___ctx, ___seed, ___propq);
}

int LIB_BN_mod_exp_mont_consttime_x2(struct Library * _base, BIGNUM * ___rr1, const BIGNUM * ___a1, const BIGNUM * ___p1, const BIGNUM * ___m1, BN_MONT_CTX * ___in_mont1, BIGNUM * ___rr2, const BIGNUM * ___a2, const BIGNUM * ___p2, const BIGNUM * ___m2, BN_MONT_CTX * ___in_mont2, BN_CTX * ___ctx);

int LIBSTUB_BN_mod_exp_mont_consttime_x2(void)
{
  BIGNUM * ___rr1 = (BIGNUM *)REG_A0;
  const BIGNUM * ___a1 = (const BIGNUM *)REG_A1;
  const BIGNUM * ___p1 = (const BIGNUM *)REG_A2;
  const BIGNUM * ___m1 = (const BIGNUM *)REG_A3;
  BN_MONT_CTX * ___in_mont1 = (BN_MONT_CTX *)REG_D0;
  BIGNUM * ___rr2 = (BIGNUM *)REG_D1;
  const BIGNUM * ___a2 = (const BIGNUM *)REG_D2;
  const BIGNUM * ___p2 = (const BIGNUM *)REG_D3;
  const BIGNUM * ___m2 = (const BIGNUM *)REG_D4;
  BN_MONT_CTX * ___in_mont2 = (BN_MONT_CTX *)REG_D5;
  BN_CTX * ___ctx = (BN_CTX *)REG_D6;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_mod_exp_mont_consttime_x2(_base, ___rr1, ___a1, ___p1, ___m1, ___in_mont1, ___rr2, ___a2, ___p2, ___m2, ___in_mont2, ___ctx);
}

const BIO_METHOD * LIB_BIO_f_readbuffer(struct Library * _base);

const BIO_METHOD * LIBSTUB_BIO_f_readbuffer(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_f_readbuffer(_base);
}

int LIB_OSSL_ESS_check_signing_certs(struct Library * _base, const ESS_SIGNING_CERT * ___ss, const ESS_SIGNING_CERT_V2 * ___ssv2, const STACK_OF(X509) * ___chain, int ___require_signing_cert);

int LIBSTUB_OSSL_ESS_check_signing_certs(void)
{
  const ESS_SIGNING_CERT * ___ss = (const ESS_SIGNING_CERT *)REG_A0;
  const ESS_SIGNING_CERT_V2 * ___ssv2 = (const ESS_SIGNING_CERT_V2 *)REG_A1;
  const STACK_OF(X509) * ___chain = (const STACK_OF(X509) *)REG_A2;
  int ___require_signing_cert = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ESS_check_signing_certs(_base, ___ss, ___ssv2, ___chain, ___require_signing_cert);
}

ESS_SIGNING_CERT * LIB_OSSL_ESS_signing_cert_new_init(struct Library * _base, const X509 * ___signcert, const STACK_OF(X509) * ___certs, int ___set_issuer_serial);

ESS_SIGNING_CERT * LIBSTUB_OSSL_ESS_signing_cert_new_init(void)
{
  const X509 * ___signcert = (const X509 *)REG_A0;
  const STACK_OF(X509) * ___certs = (const STACK_OF(X509) *)REG_A1;
  int ___set_issuer_serial = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ESS_signing_cert_new_init(_base, ___signcert, ___certs, ___set_issuer_serial);
}

ESS_SIGNING_CERT_V2 * LIB_OSSL_ESS_signing_cert_v2_new_init(struct Library * _base, const EVP_MD * ___hash_alg, const X509 * ___signcert, const STACK_OF(X509) * ___certs, int ___set_issuer_serial);

ESS_SIGNING_CERT_V2 * LIBSTUB_OSSL_ESS_signing_cert_v2_new_init(void)
{
  const EVP_MD * ___hash_alg = (const EVP_MD *)REG_A0;
  const X509 * ___signcert = (const X509 *)REG_A1;
  const STACK_OF(X509) * ___certs = (const STACK_OF(X509) *)REG_A2;
  int ___set_issuer_serial = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ESS_signing_cert_v2_new_init(_base, ___hash_alg, ___signcert, ___certs, ___set_issuer_serial);
}

const ASN1_ITEM * LIB_ESS_SIGNING_CERT_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_ESS_SIGNING_CERT_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ESS_SIGNING_CERT_it(_base);
}

const ASN1_ITEM * LIB_ESS_SIGNING_CERT_V2_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_ESS_SIGNING_CERT_V2_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ESS_SIGNING_CERT_V2_it(_base);
}

int LIB_EVP_Q_digest(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___name, const char * ___propq, const void * ___data, size_t ___datalen, unsigned char * ___md, size_t * ___mdlen);

int LIBSTUB_EVP_Q_digest(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  const void * ___data = (const void *)REG_A3;
  size_t ___datalen = (size_t)REG_D0;
  unsigned char * ___md = (unsigned char *)REG_D1;
  size_t * ___mdlen = (size_t *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_Q_digest(_base, ___libctx, ___name, ___propq, ___data, ___datalen, ___md, ___mdlen);
}

int LIB_EVP_DigestInit_ex2(struct Library * _base, EVP_MD_CTX * ___ctx, const EVP_MD * ___type, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_DigestInit_ex2(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  const EVP_MD * ___type = (const EVP_MD *)REG_A1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_DigestInit_ex2(_base, ___ctx, ___type, ___params);
}

int LIB_EVP_EncryptInit_ex2(struct Library * _base, EVP_CIPHER_CTX * ___ctx, const EVP_CIPHER * ___cipher, const unsigned char * ___key, const unsigned char * ___iv, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_EncryptInit_ex2(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A1;
  const unsigned char * ___key = (const unsigned char *)REG_A2;
  const unsigned char * ___iv = (const unsigned char *)REG_A3;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_EncryptInit_ex2(_base, ___ctx, ___cipher, ___key, ___iv, ___params);
}

int LIB_EVP_DecryptInit_ex2(struct Library * _base, EVP_CIPHER_CTX * ___ctx, const EVP_CIPHER * ___cipher, const unsigned char * ___key, const unsigned char * ___iv, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_DecryptInit_ex2(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A1;
  const unsigned char * ___key = (const unsigned char *)REG_A2;
  const unsigned char * ___iv = (const unsigned char *)REG_A3;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_DecryptInit_ex2(_base, ___ctx, ___cipher, ___key, ___iv, ___params);
}

int LIB_EVP_CipherInit_ex2(struct Library * _base, EVP_CIPHER_CTX * ___ctx, const EVP_CIPHER * ___cipher, const unsigned char * ___key, const unsigned char * ___iv, int ___enc, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_CipherInit_ex2(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A1;
  const unsigned char * ___key = (const unsigned char *)REG_A2;
  const unsigned char * ___iv = (const unsigned char *)REG_A3;
  int ___enc = (int)REG_D0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CipherInit_ex2(_base, ___ctx, ___cipher, ___key, ___iv, ___enc, ___params);
}

int LIB_EVP_PKEY_sign_init_ex(struct Library * _base, EVP_PKEY_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_sign_init_ex(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_sign_init_ex(_base, ___ctx, ___params);
}

int LIB_EVP_PKEY_verify_init_ex(struct Library * _base, EVP_PKEY_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_verify_init_ex(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_verify_init_ex(_base, ___ctx, ___params);
}

int LIB_EVP_PKEY_verify_recover_init_ex(struct Library * _base, EVP_PKEY_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_verify_recover_init_ex(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_verify_recover_init_ex(_base, ___ctx, ___params);
}

int LIB_EVP_PKEY_encrypt_init_ex(struct Library * _base, EVP_PKEY_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_encrypt_init_ex(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_encrypt_init_ex(_base, ___ctx, ___params);
}

int LIB_EVP_PKEY_decrypt_init_ex(struct Library * _base, EVP_PKEY_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_decrypt_init_ex(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_decrypt_init_ex(_base, ___ctx, ___params);
}

int LIB_EVP_PKEY_derive_init_ex(struct Library * _base, EVP_PKEY_CTX * ___ctx, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_derive_init_ex(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_derive_init_ex(_base, ___ctx, ___params);
}

TS_RESP_CTX * LIB_TS_RESP_CTX_new_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

TS_RESP_CTX * LIBSTUB_TS_RESP_CTX_new_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_TS_RESP_CTX_new_ex(_base, ___libctx, ___propq);
}

X509_REQ * LIB_X509_REQ_new_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

X509_REQ * LIBSTUB_X509_REQ_new_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_REQ_new_ex(_base, ___libctx, ___propq);
}

EVP_PKEY * LIB_EVP_PKEY_dup(struct Library * _base, EVP_PKEY * ___pkey);

EVP_PKEY * LIBSTUB_EVP_PKEY_dup(void)
{
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_dup(_base, ___pkey);
}

RSA_PSS_PARAMS * LIB_RSA_PSS_PARAMS_dup(struct Library * _base, const RSA_PSS_PARAMS * ___a);

RSA_PSS_PARAMS * LIBSTUB_RSA_PSS_PARAMS_dup(void)
{
  const RSA_PSS_PARAMS * ___a = (const RSA_PSS_PARAMS *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_RSA_PSS_PARAMS_dup(_base, ___a);
}

int LIB_EVP_PKEY_derive_set_peer_ex(struct Library * _base, EVP_PKEY_CTX * ___ctx, EVP_PKEY * ___peer, int ___validate_peer);

int LIBSTUB_EVP_PKEY_derive_set_peer_ex(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  EVP_PKEY * ___peer = (EVP_PKEY *)REG_A1;
  int ___validate_peer = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_derive_set_peer_ex(_base, ___ctx, ___peer, ___validate_peer);
}

const char * LIB_OSSL_DECODER_get0_name(struct Library * _base, const OSSL_DECODER * ___decoder);

const char * LIBSTUB_OSSL_DECODER_get0_name(void)
{
  const OSSL_DECODER * ___decoder = (const OSSL_DECODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_get0_name(_base, ___decoder);
}

const char * LIB_OSSL_ENCODER_get0_name(struct Library * _base, const OSSL_ENCODER * ___kdf);

const char * LIBSTUB_OSSL_ENCODER_get0_name(void)
{
  const OSSL_ENCODER * ___kdf = (const OSSL_ENCODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_get0_name(_base, ___kdf);
}

const char * LIB_OSSL_DECODER_get0_description(struct Library * _base, const OSSL_DECODER * ___decoder);

const char * LIBSTUB_OSSL_DECODER_get0_description(void)
{
  const OSSL_DECODER * ___decoder = (const OSSL_DECODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DECODER_get0_description(_base, ___decoder);
}

const char * LIB_OSSL_ENCODER_get0_description(struct Library * _base, const OSSL_ENCODER * ___kdf);

const char * LIBSTUB_OSSL_ENCODER_get0_description(void)
{
  const OSSL_ENCODER * ___kdf = (const OSSL_ENCODER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ENCODER_get0_description(_base, ___kdf);
}

const char * LIB_OSSL_STORE_LOADER_get0_description(struct Library * _base, const OSSL_STORE_LOADER * ___loader);

const char * LIBSTUB_OSSL_STORE_LOADER_get0_description(void)
{
  const OSSL_STORE_LOADER * ___loader = (const OSSL_STORE_LOADER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_LOADER_get0_description(_base, ___loader);
}

const char * LIB_EVP_MD_get0_description(struct Library * _base, const EVP_MD * ___md);

const char * LIBSTUB_EVP_MD_get0_description(void)
{
  const EVP_MD * ___md = (const EVP_MD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_get0_description(_base, ___md);
}

const char * LIB_EVP_CIPHER_get0_description(struct Library * _base, const EVP_CIPHER * ___cipher);

const char * LIBSTUB_EVP_CIPHER_get0_description(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_get0_description(_base, ___cipher);
}

const char * LIB_EVP_MAC_get0_description(struct Library * _base, const EVP_MAC * ___mac);

const char * LIBSTUB_EVP_MAC_get0_description(void)
{
  const EVP_MAC * ___mac = (const EVP_MAC *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_get0_description(_base, ___mac);
}

const char * LIB_EVP_RAND_get0_description(struct Library * _base, const EVP_RAND * ___md);

const char * LIBSTUB_EVP_RAND_get0_description(void)
{
  const EVP_RAND * ___md = (const EVP_RAND *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_get0_description(_base, ___md);
}

const char * LIB_EVP_PKEY_get0_description(struct Library * _base, const EVP_PKEY * ___pkey);

const char * LIBSTUB_EVP_PKEY_get0_description(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get0_description(_base, ___pkey);
}

const char * LIB_EVP_KEYMGMT_get0_description(struct Library * _base, const EVP_KEYMGMT * ___keymgmt);

const char * LIBSTUB_EVP_KEYMGMT_get0_description(void)
{
  const EVP_KEYMGMT * ___keymgmt = (const EVP_KEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_get0_description(_base, ___keymgmt);
}

const char * LIB_EVP_SIGNATURE_get0_description(struct Library * _base, const EVP_SIGNATURE * ___signature);

const char * LIBSTUB_EVP_SIGNATURE_get0_description(void)
{
  const EVP_SIGNATURE * ___signature = (const EVP_SIGNATURE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SIGNATURE_get0_description(_base, ___signature);
}

const char * LIB_EVP_ASYM_CIPHER_get0_description(struct Library * _base, const EVP_ASYM_CIPHER * ___cipher);

const char * LIBSTUB_EVP_ASYM_CIPHER_get0_description(void)
{
  const EVP_ASYM_CIPHER * ___cipher = (const EVP_ASYM_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_ASYM_CIPHER_get0_description(_base, ___cipher);
}

const char * LIB_EVP_KEM_get0_description(struct Library * _base, const EVP_KEM * ___wrap);

const char * LIBSTUB_EVP_KEM_get0_description(void)
{
  const EVP_KEM * ___wrap = (const EVP_KEM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEM_get0_description(_base, ___wrap);
}

const char * LIB_EVP_KEYEXCH_get0_description(struct Library * _base, const EVP_KEYEXCH * ___keyexch);

const char * LIBSTUB_EVP_KEYEXCH_get0_description(void)
{
  const EVP_KEYEXCH * ___keyexch = (const EVP_KEYEXCH *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYEXCH_get0_description(_base, ___keyexch);
}

const char * LIB_EVP_KDF_get0_description(struct Library * _base, const EVP_KDF * ___kdf);

const char * LIBSTUB_EVP_KDF_get0_description(void)
{
  const EVP_KDF * ___kdf = (const EVP_KDF *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KDF_get0_description(_base, ___kdf);
}

int LIB_OPENSSL_sk_find_all(struct Library * _base, OPENSSL_STACK * ___st, const void * ___data, int * ___pnum);

int LIBSTUB_OPENSSL_sk_find_all(void)
{
  OPENSSL_STACK * ___st = (OPENSSL_STACK *)REG_A0;
  const void * ___data = (const void *)REG_A1;
  int * ___pnum = (int *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OPENSSL_sk_find_all(_base, ___st, ___data, ___pnum);
}

X509_CRL * LIB_X509_CRL_new_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

X509_CRL * LIBSTUB_X509_CRL_new_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_CRL_new_ex(_base, ___libctx, ___propq);
}

OSSL_PARAM * LIB_OSSL_PARAM_dup(struct Library * _base, const OSSL_PARAM * ___p);

OSSL_PARAM * LIBSTUB_OSSL_PARAM_dup(void)
{
  const OSSL_PARAM * ___p = (const OSSL_PARAM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_dup(_base, ___p);
}

OSSL_PARAM * LIB_OSSL_PARAM_merge(struct Library * _base, const OSSL_PARAM * ___p1, const OSSL_PARAM * ___p2);

OSSL_PARAM * LIBSTUB_OSSL_PARAM_merge(void)
{
  const OSSL_PARAM * ___p1 = (const OSSL_PARAM *)REG_A0;
  const OSSL_PARAM * ___p2 = (const OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_merge(_base, ___p1, ___p2);
}

void LIB_OSSL_PARAM_free(struct Library * _base, OSSL_PARAM * ___p);

void LIBSTUB_OSSL_PARAM_free(void)
{
  OSSL_PARAM * ___p = (OSSL_PARAM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_free(_base, ___p);
}

int LIB_EVP_PKEY_todata(struct Library * _base, const EVP_PKEY * ___pkey, int ___selection, OSSL_PARAM ** ___params);

int LIBSTUB_EVP_PKEY_todata(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  int ___selection = (int)REG_D0;
  OSSL_PARAM ** ___params = (OSSL_PARAM **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_todata(_base, ___pkey, ___selection, ___params);
}

int LIB_EVP_PKEY_export(struct Library * _base, const EVP_PKEY * ___pkey, int ___selection, OSSL_CALLBACK * ___export_cb, void * ___export_cbarg);

int LIBSTUB_EVP_PKEY_export(void)
{
  const EVP_PKEY * ___pkey = (const EVP_PKEY *)REG_A0;
  int ___selection = (int)REG_D0;
  OSSL_CALLBACK * ___export_cb = (OSSL_CALLBACK *)REG_A1;
  void * ___export_cbarg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_export(_base, ___pkey, ___selection, ___export_cb, ___export_cbarg);
}

const EVP_MD * LIB_EVP_MD_CTX_get0_md(struct Library * _base, const EVP_MD_CTX * ___ctx);

const EVP_MD * LIBSTUB_EVP_MD_CTX_get0_md(void)
{
  const EVP_MD_CTX * ___ctx = (const EVP_MD_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_CTX_get0_md(_base, ___ctx);
}

EVP_MD * LIB_EVP_MD_CTX_get1_md(struct Library * _base, EVP_MD_CTX * ___ctx);

EVP_MD * LIBSTUB_EVP_MD_CTX_get1_md(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_CTX_get1_md(_base, ___ctx);
}

const EVP_CIPHER * LIB_EVP_CIPHER_CTX_get0_cipher(struct Library * _base, const EVP_CIPHER_CTX * ___ctx);

const EVP_CIPHER * LIBSTUB_EVP_CIPHER_CTX_get0_cipher(void)
{
  const EVP_CIPHER_CTX * ___ctx = (const EVP_CIPHER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_get0_cipher(_base, ___ctx);
}

EVP_CIPHER * LIB_EVP_CIPHER_CTX_get1_cipher(struct Library * _base, EVP_CIPHER_CTX * ___ctx);

EVP_CIPHER * LIBSTUB_EVP_CIPHER_CTX_get1_cipher(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_get1_cipher(_base, ___ctx);
}

OSSL_LIB_CTX * LIB_OSSL_LIB_CTX_get0_global_default(struct Library * _base);

OSSL_LIB_CTX * LIBSTUB_OSSL_LIB_CTX_get0_global_default(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_LIB_CTX_get0_global_default(_base);
}

const char * LIB_EVP_SIGNATURE_get0_name(struct Library * _base, const EVP_SIGNATURE * ___signature);

const char * LIBSTUB_EVP_SIGNATURE_get0_name(void)
{
  const EVP_SIGNATURE * ___signature = (const EVP_SIGNATURE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SIGNATURE_get0_name(_base, ___signature);
}

const char * LIB_EVP_ASYM_CIPHER_get0_name(struct Library * _base, const EVP_ASYM_CIPHER * ___cipher);

const char * LIBSTUB_EVP_ASYM_CIPHER_get0_name(void)
{
  const EVP_ASYM_CIPHER * ___cipher = (const EVP_ASYM_CIPHER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_ASYM_CIPHER_get0_name(_base, ___cipher);
}

const char * LIB_EVP_KEM_get0_name(struct Library * _base, const EVP_KEM * ___wrap);

const char * LIBSTUB_EVP_KEM_get0_name(void)
{
  const EVP_KEM * ___wrap = (const EVP_KEM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEM_get0_name(_base, ___wrap);
}

const char * LIB_EVP_KEYEXCH_get0_name(struct Library * _base, const EVP_KEYEXCH * ___keyexch);

const char * LIBSTUB_EVP_KEYEXCH_get0_name(void)
{
  const EVP_KEYEXCH * ___keyexch = (const EVP_KEYEXCH *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYEXCH_get0_name(_base, ___keyexch);
}

int LIB_PKCS5_v2_PBE_keyivgen_ex(struct Library * _base, EVP_CIPHER_CTX * ___ctx, const char * ___pass, int ___passlen, ASN1_TYPE * ___param, const EVP_CIPHER * ___cipher, const EVP_MD * ___md, int ___en_de, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_PKCS5_v2_PBE_keyivgen_ex(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  int ___passlen = (int)REG_D0;
  ASN1_TYPE * ___param = (ASN1_TYPE *)REG_A2;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A3;
  const EVP_MD * ___md = (const EVP_MD *)REG_D1;
  int ___en_de = (int)REG_D2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D3;
  const char * ___propq = (const char *)REG_D4;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS5_v2_PBE_keyivgen_ex(_base, ___ctx, ___pass, ___passlen, ___param, ___cipher, ___md, ___en_de, ___libctx, ___propq);
}

int LIB_EVP_PBE_scrypt_amiga_1(struct Library * _base, const char * ___pass, size_t ___passlen, const unsigned char * ___salt, uint64_t ___N, uint64_t ___r, uint64_t ___p, uint64_t ___maxmem, void * ___moreargs);

int LIBSTUB_EVP_PBE_scrypt_amiga_1(void)
{
  const char * ___pass = (const char *)REG_A0;
  size_t ___passlen = (size_t)REG_A1;
  const unsigned char * ___salt = (const unsigned char *)REG_A2;
  uint64_t ___N = (uint64_t)REG_D0;
  uint64_t ___r = (uint64_t)REG_D2;
  uint64_t ___p = (uint64_t)REG_D4;
  uint64_t ___maxmem = (uint64_t)REG_D6;
  void * ___moreargs = (void *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PBE_scrypt_amiga_1(_base, ___pass, ___passlen, ___salt, ___N, ___r, ___p, ___maxmem, ___moreargs);
}

void * LIB_EVP_PBE_scrypt_amiga_2(struct Library * _base, size_t ___saltlen, unsigned char * ___key, size_t ___keylen);

void * LIBSTUB_EVP_PBE_scrypt_amiga_2(void)
{
  size_t ___saltlen = (size_t)REG_D0;
  unsigned char * ___key = (unsigned char *)REG_A0;
  size_t ___keylen = (size_t)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PBE_scrypt_amiga_2(_base, ___saltlen, ___key, ___keylen);
}

void * LIB_EVP_PBE_scrypt_ex_amiga_2(struct Library * _base, size_t ___saltlen, unsigned char * ___key, size_t ___keylen, OSSL_LIB_CTX * ___ctx, const char * ___propq);

void * LIBSTUB_EVP_PBE_scrypt_ex_amiga_2(void)
{
  size_t ___saltlen = (size_t)REG_D0;
  unsigned char * ___key = (unsigned char *)REG_A0;
  size_t ___keylen = (size_t)REG_D1;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PBE_scrypt_ex_amiga_2(_base, ___saltlen, ___key, ___keylen, ___ctx, ___propq);
}

int LIB_PKCS5_v2_scrypt_keyivgen_ex(struct Library * _base, EVP_CIPHER_CTX * ___ctx, const char * ___pass, int ___passlen, ASN1_TYPE * ___param, const EVP_CIPHER * ___c, const EVP_MD * ___md, int ___en_de, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_PKCS5_v2_scrypt_keyivgen_ex(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  int ___passlen = (int)REG_D0;
  ASN1_TYPE * ___param = (ASN1_TYPE *)REG_A2;
  const EVP_CIPHER * ___c = (const EVP_CIPHER *)REG_A3;
  const EVP_MD * ___md = (const EVP_MD *)REG_D1;
  int ___en_de = (int)REG_D2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D3;
  const char * ___propq = (const char *)REG_D4;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS5_v2_scrypt_keyivgen_ex(_base, ___ctx, ___pass, ___passlen, ___param, ___c, ___md, ___en_de, ___libctx, ___propq);
}

int LIB_EVP_PBE_CipherInit_ex(struct Library * _base, ASN1_OBJECT * ___pbe_obj, const char * ___pass, int ___passlen, ASN1_TYPE * ___param, EVP_CIPHER_CTX * ___ctx, int ___en_de, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_EVP_PBE_CipherInit_ex(void)
{
  ASN1_OBJECT * ___pbe_obj = (ASN1_OBJECT *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  int ___passlen = (int)REG_D0;
  ASN1_TYPE * ___param = (ASN1_TYPE *)REG_A2;
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A3;
  int ___en_de = (int)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D2;
  const char * ___propq = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PBE_CipherInit_ex(_base, ___pbe_obj, ___pass, ___passlen, ___param, ___ctx, ___en_de, ___libctx, ___propq);
}

int LIB_EVP_PBE_find_ex(struct Library * _base, int ___type, int ___pbe_nid, int * ___pcnid, int * ___pmnid, EVP_PBE_KEYGEN ** ___pkeygen, EVP_PBE_KEYGEN_EX ** ___pkeygen_ex);

int LIBSTUB_EVP_PBE_find_ex(void)
{
  int ___type = (int)REG_D0;
  int ___pbe_nid = (int)REG_D1;
  int * ___pcnid = (int *)REG_A0;
  int * ___pmnid = (int *)REG_A1;
  EVP_PBE_KEYGEN ** ___pkeygen = (EVP_PBE_KEYGEN **)REG_A2;
  EVP_PBE_KEYGEN_EX ** ___pkeygen_ex = (EVP_PBE_KEYGEN_EX **)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PBE_find_ex(_base, ___type, ___pbe_nid, ___pcnid, ___pmnid, ___pkeygen, ___pkeygen_ex);
}

PKCS12_SAFEBAG * LIB_PKCS12_SAFEBAG_create_pkcs8_encrypt_ex(struct Library * _base, int ___pbe_nid, const char * ___pass, int ___passlen, unsigned char * ___salt, int ___saltlen, int ___iter, PKCS8_PRIV_KEY_INFO * ___p8inf, OSSL_LIB_CTX * ___ctx, const char * ___propq);

PKCS12_SAFEBAG * LIBSTUB_PKCS12_SAFEBAG_create_pkcs8_encrypt_ex(void)
{
  int ___pbe_nid = (int)REG_D0;
  const char * ___pass = (const char *)REG_A0;
  int ___passlen = (int)REG_D1;
  unsigned char * ___salt = (unsigned char *)REG_A1;
  int ___saltlen = (int)REG_D2;
  int ___iter = (int)REG_D3;
  PKCS8_PRIV_KEY_INFO * ___p8inf = (PKCS8_PRIV_KEY_INFO *)REG_A2;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D4;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_SAFEBAG_create_pkcs8_encrypt_ex(_base, ___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8inf, ___ctx, ___propq);
}

PKCS8_PRIV_KEY_INFO * LIB_PKCS8_decrypt_ex(struct Library * _base, const X509_SIG * ___p8, const char * ___pass, int ___passlen, OSSL_LIB_CTX * ___ctx, const char * ___propq);

PKCS8_PRIV_KEY_INFO * LIBSTUB_PKCS8_decrypt_ex(void)
{
  const X509_SIG * ___p8 = (const X509_SIG *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  int ___passlen = (int)REG_D0;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS8_decrypt_ex(_base, ___p8, ___pass, ___passlen, ___ctx, ___propq);
}

PKCS8_PRIV_KEY_INFO * LIB_PKCS12_decrypt_skey_ex(struct Library * _base, const PKCS12_SAFEBAG * ___bag, const char * ___pass, int ___passlen, OSSL_LIB_CTX * ___ctx, const char * ___propq);

PKCS8_PRIV_KEY_INFO * LIBSTUB_PKCS12_decrypt_skey_ex(void)
{
  const PKCS12_SAFEBAG * ___bag = (const PKCS12_SAFEBAG *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  int ___passlen = (int)REG_D0;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_decrypt_skey_ex(_base, ___bag, ___pass, ___passlen, ___ctx, ___propq);
}

X509_SIG * LIB_PKCS8_encrypt_ex(struct Library * _base, int ___pbe_nid, const EVP_CIPHER * ___cipher, const char * ___pass, int ___passlen, unsigned char * ___salt, int ___saltlen, int ___iter, PKCS8_PRIV_KEY_INFO * ___p8, OSSL_LIB_CTX * ___ctx, const char * ___propq);

X509_SIG * LIBSTUB_PKCS8_encrypt_ex(void)
{
  int ___pbe_nid = (int)REG_D0;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  int ___passlen = (int)REG_D1;
  unsigned char * ___salt = (unsigned char *)REG_A2;
  int ___saltlen = (int)REG_D2;
  int ___iter = (int)REG_D3;
  PKCS8_PRIV_KEY_INFO * ___p8 = (PKCS8_PRIV_KEY_INFO *)REG_A3;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_D4;
  const char * ___propq = (const char *)REG_D5;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS8_encrypt_ex(_base, ___pbe_nid, ___cipher, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8, ___ctx, ___propq);
}

X509_SIG * LIB_PKCS8_set0_pbe_ex(struct Library * _base, const char * ___pass, int ___passlen, PKCS8_PRIV_KEY_INFO * ___p8inf, X509_ALGOR * ___pbe, OSSL_LIB_CTX * ___ctx, const char * ___propq);

X509_SIG * LIBSTUB_PKCS8_set0_pbe_ex(void)
{
  const char * ___pass = (const char *)REG_A0;
  int ___passlen = (int)REG_D0;
  PKCS8_PRIV_KEY_INFO * ___p8inf = (PKCS8_PRIV_KEY_INFO *)REG_A1;
  X509_ALGOR * ___pbe = (X509_ALGOR *)REG_A2;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS8_set0_pbe_ex(_base, ___pass, ___passlen, ___p8inf, ___pbe, ___ctx, ___propq);
}

PKCS7 * LIB_PKCS12_pack_p7encdata_ex(struct Library * _base, int ___pbe_nid, const char * ___pass, int ___passlen, unsigned char * ___salt, int ___saltlen, int ___iter, STACK_OF(PKCS12_SAFEBAG) * ___bags, OSSL_LIB_CTX * ___ctx, const char * ___propq);

PKCS7 * LIBSTUB_PKCS12_pack_p7encdata_ex(void)
{
  int ___pbe_nid = (int)REG_D0;
  const char * ___pass = (const char *)REG_A0;
  int ___passlen = (int)REG_D1;
  unsigned char * ___salt = (unsigned char *)REG_A1;
  int ___saltlen = (int)REG_D2;
  int ___iter = (int)REG_D3;
  STACK_OF(PKCS12_SAFEBAG) * ___bags = (STACK_OF(PKCS12_SAFEBAG) *)REG_A2;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D4;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_pack_p7encdata_ex(_base, ___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___bags, ___ctx, ___propq);
}

unsigned char * LIB_PKCS12_pbe_crypt_ex(struct Library * _base, const X509_ALGOR * ___algor, const char * ___pass, int ___passlen, const unsigned char * ___in, int ___inlen, unsigned char ** ___data, int * ___datalen, int ___en_de, OSSL_LIB_CTX * ___libctx, const char * ___propq);

unsigned char * LIBSTUB_PKCS12_pbe_crypt_ex(void)
{
  const X509_ALGOR * ___algor = (const X509_ALGOR *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  int ___passlen = (int)REG_D0;
  const unsigned char * ___in = (const unsigned char *)REG_A2;
  int ___inlen = (int)REG_D1;
  unsigned char ** ___data = (unsigned char **)REG_A3;
  int * ___datalen = (int *)REG_D2;
  int ___en_de = (int)REG_D3;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D4;
  const char * ___propq = (const char *)REG_D5;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_pbe_crypt_ex(_base, ___algor, ___pass, ___passlen, ___in, ___inlen, ___data, ___datalen, ___en_de, ___libctx, ___propq);
}

void * LIB_PKCS12_item_decrypt_d2i_ex(struct Library * _base, const X509_ALGOR * ___algor, const ASN1_ITEM * ___it, const char * ___pass, int ___passlen, const ASN1_OCTET_STRING * ___oct, int ___zbuf, OSSL_LIB_CTX * ___libctx, const char * ___propq);

void * LIBSTUB_PKCS12_item_decrypt_d2i_ex(void)
{
  const X509_ALGOR * ___algor = (const X509_ALGOR *)REG_A0;
  const ASN1_ITEM * ___it = (const ASN1_ITEM *)REG_A1;
  const char * ___pass = (const char *)REG_A2;
  int ___passlen = (int)REG_D0;
  const ASN1_OCTET_STRING * ___oct = (const ASN1_OCTET_STRING *)REG_A3;
  int ___zbuf = (int)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D2;
  const char * ___propq = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_item_decrypt_d2i_ex(_base, ___algor, ___it, ___pass, ___passlen, ___oct, ___zbuf, ___libctx, ___propq);
}

ASN1_OCTET_STRING * LIB_PKCS12_item_i2d_encrypt_ex(struct Library * _base, X509_ALGOR * ___algor, const ASN1_ITEM * ___it, const char * ___pass, int ___passlen, void * ___obj, int ___zbuf, OSSL_LIB_CTX * ___ctx, const char * ___propq);

ASN1_OCTET_STRING * LIBSTUB_PKCS12_item_i2d_encrypt_ex(void)
{
  X509_ALGOR * ___algor = (X509_ALGOR *)REG_A0;
  const ASN1_ITEM * ___it = (const ASN1_ITEM *)REG_A1;
  const char * ___pass = (const char *)REG_A2;
  int ___passlen = (int)REG_D0;
  void * ___obj = (void *)REG_A3;
  int ___zbuf = (int)REG_D1;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_D2;
  const char * ___propq = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_item_i2d_encrypt_ex(_base, ___algor, ___it, ___pass, ___passlen, ___obj, ___zbuf, ___ctx, ___propq);
}

PKCS12 * LIB_PKCS12_init_ex(struct Library * _base, int ___mode, OSSL_LIB_CTX * ___ctx, const char * ___propq);

PKCS12 * LIBSTUB_PKCS12_init_ex(void)
{
  int ___mode = (int)REG_D0;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_init_ex(_base, ___mode, ___ctx, ___propq);
}

int LIB_PKCS12_key_gen_asc_ex(struct Library * _base, const char * ___pass, int ___passlen, unsigned char * ___salt, int ___saltlen, int ___id, int ___iter, int ___n, unsigned char * ___out, const EVP_MD * ___md_type, OSSL_LIB_CTX * ___ctx, const char * ___propq);

int LIBSTUB_PKCS12_key_gen_asc_ex(void)
{
  const char * ___pass = (const char *)REG_A0;
  int ___passlen = (int)REG_D0;
  unsigned char * ___salt = (unsigned char *)REG_A1;
  int ___saltlen = (int)REG_D1;
  int ___id = (int)REG_D2;
  int ___iter = (int)REG_D3;
  int ___n = (int)REG_D4;
  unsigned char * ___out = (unsigned char *)REG_A2;
  const EVP_MD * ___md_type = (const EVP_MD *)REG_A3;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_D5;
  const char * ___propq = (const char *)REG_D6;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_key_gen_asc_ex(_base, ___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type, ___ctx, ___propq);
}

int LIB_PKCS12_key_gen_uni_ex(struct Library * _base, unsigned char * ___pass, int ___passlen, unsigned char * ___salt, int ___saltlen, int ___id, int ___iter, int ___n, unsigned char * ___out, const EVP_MD * ___md_type, OSSL_LIB_CTX * ___ctx, const char * ___propq);

int LIBSTUB_PKCS12_key_gen_uni_ex(void)
{
  unsigned char * ___pass = (unsigned char *)REG_A0;
  int ___passlen = (int)REG_D0;
  unsigned char * ___salt = (unsigned char *)REG_A1;
  int ___saltlen = (int)REG_D1;
  int ___id = (int)REG_D2;
  int ___iter = (int)REG_D3;
  int ___n = (int)REG_D4;
  unsigned char * ___out = (unsigned char *)REG_A2;
  const EVP_MD * ___md_type = (const EVP_MD *)REG_A3;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_D5;
  const char * ___propq = (const char *)REG_D6;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_key_gen_uni_ex(_base, ___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type, ___ctx, ___propq);
}

int LIB_PKCS12_key_gen_utf8_ex(struct Library * _base, const char * ___pass, int ___passlen, unsigned char * ___salt, int ___saltlen, int ___id, int ___iter, int ___n, unsigned char * ___out, const EVP_MD * ___md_type, OSSL_LIB_CTX * ___ctx, const char * ___propq);

int LIBSTUB_PKCS12_key_gen_utf8_ex(void)
{
  const char * ___pass = (const char *)REG_A0;
  int ___passlen = (int)REG_D0;
  unsigned char * ___salt = (unsigned char *)REG_A1;
  int ___saltlen = (int)REG_D1;
  int ___id = (int)REG_D2;
  int ___iter = (int)REG_D3;
  int ___n = (int)REG_D4;
  unsigned char * ___out = (unsigned char *)REG_A2;
  const EVP_MD * ___md_type = (const EVP_MD *)REG_A3;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_D5;
  const char * ___propq = (const char *)REG_D6;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_key_gen_utf8_ex(_base, ___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type, ___ctx, ___propq);
}

int LIB_PKCS12_PBE_keyivgen_ex(struct Library * _base, EVP_CIPHER_CTX * ___ctx, const char * ___pass, int ___passlen, ASN1_TYPE * ___param, const EVP_CIPHER * ___cipher, const EVP_MD * ___md_type, int ___en_de, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_PKCS12_PBE_keyivgen_ex(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  int ___passlen = (int)REG_D0;
  ASN1_TYPE * ___param = (ASN1_TYPE *)REG_A2;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A3;
  const EVP_MD * ___md_type = (const EVP_MD *)REG_D1;
  int ___en_de = (int)REG_D2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D3;
  const char * ___propq = (const char *)REG_D4;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_PBE_keyivgen_ex(_base, ___ctx, ___pass, ___passlen, ___param, ___cipher, ___md_type, ___en_de, ___libctx, ___propq);
}

PKCS12 * LIB_PKCS12_create_ex(struct Library * _base, const char * ___pass, const char * ___name, EVP_PKEY * ___pkey, X509 * ___cert, STACK_OF(X509) * ___ca, int ___nid_key, int ___nid_cert, int ___iter, int ___mac_iter, int ___keytype, OSSL_LIB_CTX * ___ctx, const char * ___propq);

PKCS12 * LIBSTUB_PKCS12_create_ex(void)
{
  const char * ___pass = (const char *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A2;
  X509 * ___cert = (X509 *)REG_A3;
  STACK_OF(X509) * ___ca = (STACK_OF(X509) *)REG_D0;
  int ___nid_key = (int)REG_D1;
  int ___nid_cert = (int)REG_D2;
  int ___iter = (int)REG_D3;
  int ___mac_iter = (int)REG_D4;
  int ___keytype = (int)REG_D5;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_D6;
  const char * ___propq = (const char *)REG_D7;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_create_ex(_base, ___pass, ___name, ___pkey, ___cert, ___ca, ___nid_key, ___nid_cert, ___iter, ___mac_iter, ___keytype, ___ctx, ___propq);
}

PKCS12_SAFEBAG * LIB_PKCS12_add_key_ex(struct Library * _base, STACK_OF(PKCS12_SAFEBAG) ** ___pbags, EVP_PKEY * ___key, int ___key_usage, int ___iter, int ___key_nid, const char * ___pass, OSSL_LIB_CTX * ___ctx, const char * ___propq);

PKCS12_SAFEBAG * LIBSTUB_PKCS12_add_key_ex(void)
{
  STACK_OF(PKCS12_SAFEBAG) ** ___pbags = (STACK_OF(PKCS12_SAFEBAG) **)REG_A0;
  EVP_PKEY * ___key = (EVP_PKEY *)REG_A1;
  int ___key_usage = (int)REG_D0;
  int ___iter = (int)REG_D1;
  int ___key_nid = (int)REG_D2;
  const char * ___pass = (const char *)REG_A2;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_add_key_ex(_base, ___pbags, ___key, ___key_usage, ___iter, ___key_nid, ___pass, ___ctx, ___propq);
}

int LIB_PKCS12_add_safe_ex(struct Library * _base, STACK_OF(PKCS7) ** ___psafes, STACK_OF(PKCS12_SAFEBAG) * ___bags, int ___safe_nid, int ___iter, const char * ___pass, OSSL_LIB_CTX * ___ctx, const char * ___propq);

int LIBSTUB_PKCS12_add_safe_ex(void)
{
  STACK_OF(PKCS7) ** ___psafes = (STACK_OF(PKCS7) **)REG_A0;
  STACK_OF(PKCS12_SAFEBAG) * ___bags = (STACK_OF(PKCS12_SAFEBAG) *)REG_A1;
  int ___safe_nid = (int)REG_D0;
  int ___iter = (int)REG_D1;
  const char * ___pass = (const char *)REG_A2;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_add_safe_ex(_base, ___psafes, ___bags, ___safe_nid, ___iter, ___pass, ___ctx, ___propq);
}

PKCS12 * LIB_PKCS12_add_safes_ex(struct Library * _base, STACK_OF(PKCS7) * ___safes, int ___p7_nid, OSSL_LIB_CTX * ___ctx, const char * ___propq);

PKCS12 * LIBSTUB_PKCS12_add_safes_ex(void)
{
  STACK_OF(PKCS7) * ___safes = (STACK_OF(PKCS7) *)REG_A0;
  int ___p7_nid = (int)REG_D0;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_add_safes_ex(_base, ___safes, ___p7_nid, ___ctx, ___propq);
}

int LIB_PKCS5_pbe_set0_algor_ex(struct Library * _base, X509_ALGOR * ___algor, int ___alg, int ___iter, const unsigned char * ___salt, int ___saltlen, OSSL_LIB_CTX * ___libctx);

int LIBSTUB_PKCS5_pbe_set0_algor_ex(void)
{
  X509_ALGOR * ___algor = (X509_ALGOR *)REG_A0;
  int ___alg = (int)REG_D0;
  int ___iter = (int)REG_D1;
  const unsigned char * ___salt = (const unsigned char *)REG_A1;
  int ___saltlen = (int)REG_D2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS5_pbe_set0_algor_ex(_base, ___algor, ___alg, ___iter, ___salt, ___saltlen, ___libctx);
}

X509_ALGOR * LIB_PKCS5_pbe_set_ex(struct Library * _base, int ___alg, int ___iter, const unsigned char * ___salt, int ___saltlen, OSSL_LIB_CTX * ___libctx);

X509_ALGOR * LIBSTUB_PKCS5_pbe_set_ex(void)
{
  int ___alg = (int)REG_D0;
  int ___iter = (int)REG_D1;
  const unsigned char * ___salt = (const unsigned char *)REG_A0;
  int ___saltlen = (int)REG_D2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS5_pbe_set_ex(_base, ___alg, ___iter, ___salt, ___saltlen, ___libctx);
}

X509_ALGOR * LIB_PKCS5_pbe2_set_iv_ex(struct Library * _base, const EVP_CIPHER * ___cipher, int ___iter, unsigned char * ___salt, int ___saltlen, unsigned char * ___aiv, int ___prf_nid, OSSL_LIB_CTX * ___libctx);

X509_ALGOR * LIBSTUB_PKCS5_pbe2_set_iv_ex(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  int ___iter = (int)REG_D0;
  unsigned char * ___salt = (unsigned char *)REG_A1;
  int ___saltlen = (int)REG_D1;
  unsigned char * ___aiv = (unsigned char *)REG_A2;
  int ___prf_nid = (int)REG_D2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS5_pbe2_set_iv_ex(_base, ___cipher, ___iter, ___salt, ___saltlen, ___aiv, ___prf_nid, ___libctx);
}

X509_ALGOR * LIB_PKCS5_pbkdf2_set_ex(struct Library * _base, int ___iter, unsigned char * ___salt, int ___saltlen, int ___prf_nid, int ___keylen, OSSL_LIB_CTX * ___libctx);

X509_ALGOR * LIBSTUB_PKCS5_pbkdf2_set_ex(void)
{
  int ___iter = (int)REG_D0;
  unsigned char * ___salt = (unsigned char *)REG_A0;
  int ___saltlen = (int)REG_D1;
  int ___prf_nid = (int)REG_D2;
  int ___keylen = (int)REG_D3;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS5_pbkdf2_set_ex(_base, ___iter, ___salt, ___saltlen, ___prf_nid, ___keylen, ___libctx);
}

BIO * LIB_BIO_new_from_core_bio(struct Library * _base, OSSL_LIB_CTX * ___libctx, OSSL_CORE_BIO * ___corebio);

BIO * LIBSTUB_BIO_new_from_core_bio(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  OSSL_CORE_BIO * ___corebio = (OSSL_CORE_BIO *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_new_from_core_bio(_base, ___libctx, ___corebio);
}

BIO * LIB_BIO_new_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const BIO_METHOD * ___method);

BIO * LIBSTUB_BIO_new_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const BIO_METHOD * ___method = (const BIO_METHOD *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_new_ex(_base, ___libctx, ___method);
}

const BIO_METHOD * LIB_BIO_s_core(struct Library * _base);

const BIO_METHOD * LIBSTUB_BIO_s_core(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_s_core(_base);
}

int LIB_BIO_get_line(struct Library * _base, BIO * ___bio, char * ___buf, int ___size);

int LIBSTUB_BIO_get_line(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  char * ___buf = (char *)REG_A1;
  int ___size = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_get_line(_base, ___bio, ___buf, ___size);
}

OSSL_LIB_CTX * LIB_OSSL_LIB_CTX_new_from_dispatch(struct Library * _base, const OSSL_CORE_HANDLE * ___handle, const OSSL_DISPATCH * ___in);

OSSL_LIB_CTX * LIBSTUB_OSSL_LIB_CTX_new_from_dispatch(void)
{
  const OSSL_CORE_HANDLE * ___handle = (const OSSL_CORE_HANDLE *)REG_A0;
  const OSSL_DISPATCH * ___in = (const OSSL_DISPATCH *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_LIB_CTX_new_from_dispatch(_base, ___handle, ___in);
}

OSSL_LIB_CTX * LIB_OSSL_LIB_CTX_new_child(struct Library * _base, const OSSL_CORE_HANDLE * ___handle, const OSSL_DISPATCH * ___in);

OSSL_LIB_CTX * LIBSTUB_OSSL_LIB_CTX_new_child(void)
{
  const OSSL_CORE_HANDLE * ___handle = (const OSSL_CORE_HANDLE *)REG_A0;
  const OSSL_DISPATCH * ___in = (const OSSL_DISPATCH *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_LIB_CTX_new_child(_base, ___handle, ___in);
}

const OSSL_DISPATCH * LIB_OSSL_PROVIDER_get0_dispatch(struct Library * _base, const OSSL_PROVIDER * ___prov);

const OSSL_DISPATCH * LIBSTUB_OSSL_PROVIDER_get0_dispatch(void)
{
  const OSSL_PROVIDER * ___prov = (const OSSL_PROVIDER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_get0_dispatch(_base, ___prov);
}

int LIB_PKCS5_PBE_keyivgen_ex(struct Library * _base, EVP_CIPHER_CTX * ___cctx, const char * ___pass, int ___passlen, ASN1_TYPE * ___param, const EVP_CIPHER * ___cipher, const EVP_MD * ___md, int ___en_de, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_PKCS5_PBE_keyivgen_ex(void)
{
  EVP_CIPHER_CTX * ___cctx = (EVP_CIPHER_CTX *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  int ___passlen = (int)REG_D0;
  ASN1_TYPE * ___param = (ASN1_TYPE *)REG_A2;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A3;
  const EVP_MD * ___md = (const EVP_MD *)REG_D1;
  int ___en_de = (int)REG_D2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D3;
  const char * ___propq = (const char *)REG_D4;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS5_PBE_keyivgen_ex(_base, ___cctx, ___pass, ___passlen, ___param, ___cipher, ___md, ___en_de, ___libctx, ___propq);
}

size_t LIB_EVP_MAC_CTX_get_block_size(struct Library * _base, EVP_MAC_CTX * ___ctx);

size_t LIBSTUB_EVP_MAC_CTX_get_block_size(void)
{
  EVP_MAC_CTX * ___ctx = (EVP_MAC_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_CTX_get_block_size(_base, ___ctx);
}

long LIB_BIO_debug_callback_ex(struct Library * _base, BIO * ___bio, int ___oper, const char * ___argp, size_t ___len, int ___argi, long ___argl, int ___ret, size_t * ___processed);

long LIBSTUB_BIO_debug_callback_ex(void)
{
  BIO * ___bio = (BIO *)REG_A0;
  int ___oper = (int)REG_D0;
  const char * ___argp = (const char *)REG_A1;
  size_t ___len = (size_t)REG_D1;
  int ___argi = (int)REG_D2;
  long ___argl = (long)REG_D3;
  int ___ret = (int)REG_D4;
  size_t * ___processed = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_debug_callback_ex(_base, ___bio, ___oper, ___argp, ___len, ___argi, ___argl, ___ret, ___processed);
}

EVP_PKEY * LIB_b2i_PVK_bio_ex(struct Library * _base, BIO * ___in, pem_password_cb * ___cb, void * ___u, OSSL_LIB_CTX * ___libctx, const char * ___propq);

EVP_PKEY * LIBSTUB_b2i_PVK_bio_ex(void)
{
  BIO * ___in = (BIO *)REG_A0;
  pem_password_cb * ___cb = (pem_password_cb *)REG_A1;
  void * ___u = (void *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_b2i_PVK_bio_ex(_base, ___in, ___cb, ___u, ___libctx, ___propq);
}

int LIB_i2b_PVK_bio_ex(struct Library * _base, BIO * ___out, const EVP_PKEY * ___pk, int ___enclevel, pem_password_cb * ___cb, void * ___u, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_i2b_PVK_bio_ex(void)
{
  BIO * ___out = (BIO *)REG_A0;
  const EVP_PKEY * ___pk = (const EVP_PKEY *)REG_A1;
  int ___enclevel = (int)REG_D0;
  pem_password_cb * ___cb = (pem_password_cb *)REG_A2;
  void * ___u = (void *)REG_A3;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D1;
  const char * ___propq = (const char *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2b_PVK_bio_ex(_base, ___out, ___pk, ___enclevel, ___cb, ___u, ___libctx, ___propq);
}

OSSL_LIB_CTX * LIB_NCONF_get0_libctx(struct Library * _base, const CONF * ___conf);

OSSL_LIB_CTX * LIBSTUB_NCONF_get0_libctx(void)
{
  const CONF * ___conf = (const CONF *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_NCONF_get0_libctx(_base, ___conf);
}

STACK_OF(OPENSSL_CSTRING) * LIB_NCONF_get_section_names(struct Library * _base, const CONF * ___conf);

STACK_OF(OPENSSL_CSTRING) * LIBSTUB_NCONF_get_section_names(void)
{
  const CONF * ___conf = (const CONF *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_NCONF_get_section_names(_base, ___conf);
}

X509_PUBKEY * LIB_X509_PUBKEY_new_ex(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___propq);

X509_PUBKEY * LIBSTUB_X509_PUBKEY_new_ex(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___propq = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_PUBKEY_new_ex(_base, ___libctx, ___propq);
}

ASN1_VALUE * LIB_ASN1_item_new_ex(struct Library * _base, const ASN1_ITEM * ___it, OSSL_LIB_CTX * ___libctx, const char * ___propq);

ASN1_VALUE * LIBSTUB_ASN1_item_new_ex(void)
{
  const ASN1_ITEM * ___it = (const ASN1_ITEM *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASN1_item_new_ex(_base, ___it, ___libctx, ___propq);
}

void * LIB_ASN1_item_d2i_bio_ex(struct Library * _base, const ASN1_ITEM * ___it, BIO * ___in, void * ___pval, OSSL_LIB_CTX * ___libctx, const char * ___propq);

void * LIBSTUB_ASN1_item_d2i_bio_ex(void)
{
  const ASN1_ITEM * ___it = (const ASN1_ITEM *)REG_A0;
  BIO * ___in = (BIO *)REG_A1;
  void * ___pval = (void *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASN1_item_d2i_bio_ex(_base, ___it, ___in, ___pval, ___libctx, ___propq);
}

ASN1_VALUE * LIB_ASN1_item_d2i_ex(struct Library * _base, ASN1_VALUE ** ___val, const unsigned char ** ___in, long ___len, const ASN1_ITEM * ___it, OSSL_LIB_CTX * ___libctx, const char * ___propq);

ASN1_VALUE * LIBSTUB_ASN1_item_d2i_ex(void)
{
  ASN1_VALUE ** ___val = (ASN1_VALUE **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  const ASN1_ITEM * ___it = (const ASN1_ITEM *)REG_A2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A3;
  const char * ___propq = (const char *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASN1_item_d2i_ex(_base, ___val, ___in, ___len, ___it, ___libctx, ___propq);
}

int LIB_ASN1_TIME_print_ex(struct Library * _base, BIO * ___bp, const ASN1_TIME * ___tm, unsigned long ___flags);

int LIBSTUB_ASN1_TIME_print_ex(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  const ASN1_TIME * ___tm = (const ASN1_TIME *)REG_A1;
  unsigned long ___flags = (unsigned long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASN1_TIME_print_ex(_base, ___bp, ___tm, ___flags);
}

const OSSL_PROVIDER * LIB_EVP_PKEY_get0_provider(struct Library * _base, const EVP_PKEY * ___key);

const OSSL_PROVIDER * LIBSTUB_EVP_PKEY_get0_provider(void)
{
  const EVP_PKEY * ___key = (const EVP_PKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_get0_provider(_base, ___key);
}

const OSSL_PROVIDER * LIB_EVP_PKEY_CTX_get0_provider(struct Library * _base, const EVP_PKEY_CTX * ___ctx);

const OSSL_PROVIDER * LIBSTUB_EVP_PKEY_CTX_get0_provider(void)
{
  const EVP_PKEY_CTX * ___ctx = (const EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get0_provider(_base, ___ctx);
}

int LIB_OPENSSL_strcasecmp(struct Library * _base, const char * ___s1, const char * ___s2);

int LIBSTUB_OPENSSL_strcasecmp(void)
{
  const char * ___s1 = (const char *)REG_A0;
  const char * ___s2 = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OPENSSL_strcasecmp(_base, ___s1, ___s2);
}

int LIB_OPENSSL_strncasecmp(struct Library * _base, const char * ___s1, const char * ___s2, size_t ___n);

int LIBSTUB_OPENSSL_strncasecmp(void)
{
  const char * ___s1 = (const char *)REG_A0;
  const char * ___s2 = (const char *)REG_A1;
  size_t ___n = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OPENSSL_strncasecmp(_base, ___s1, ___s2, ___n);
}

int LIB_OSSL_CMP_CTX_reset_geninfo_ITAVs(struct Library * _base, OSSL_CMP_CTX * ___ctx);

int LIBSTUB_OSSL_CMP_CTX_reset_geninfo_ITAVs(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_reset_geninfo_ITAVs(_base, ___ctx);
}

int LIB_EVP_RAND_CTX_up_ref(struct Library * _base, EVP_RAND_CTX * ___ctx);

int LIBSTUB_EVP_RAND_CTX_up_ref(void)
{
  EVP_RAND_CTX * ___ctx = (EVP_RAND_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_RAND_CTX_up_ref(_base, ___ctx);
}

int LIB_RAND_set0_public(struct Library * _base, OSSL_LIB_CTX * ___ctx, EVP_RAND_CTX * ___rand);

int LIBSTUB_RAND_set0_public(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  EVP_RAND_CTX * ___rand = (EVP_RAND_CTX *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_RAND_set0_public(_base, ___ctx, ___rand);
}

int LIB_RAND_set0_private(struct Library * _base, OSSL_LIB_CTX * ___ctx, EVP_RAND_CTX * ___rand);

int LIBSTUB_RAND_set0_private(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  EVP_RAND_CTX * ___rand = (EVP_RAND_CTX *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_RAND_set0_private(_base, ___ctx, ___rand);
}

EVP_MD_CTX * LIB_EVP_MD_CTX_dup(struct Library * _base, const EVP_MD_CTX * ___in);

EVP_MD_CTX * LIBSTUB_EVP_MD_CTX_dup(void)
{
  const EVP_MD_CTX * ___in = (const EVP_MD_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_CTX_dup(_base, ___in);
}

EVP_CIPHER_CTX * LIB_EVP_CIPHER_CTX_dup(struct Library * _base, const EVP_CIPHER_CTX * ___in);

EVP_CIPHER_CTX * LIBSTUB_EVP_CIPHER_CTX_dup(void)
{
  const EVP_CIPHER_CTX * ___in = (const EVP_CIPHER_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_dup(_base, ___in);
}

int LIB_BN_are_coprime(struct Library * _base, BIGNUM * ___a, const BIGNUM * ___b, BN_CTX * ___ctx);

int LIBSTUB_BN_are_coprime(void)
{
  BIGNUM * ___a = (BIGNUM *)REG_A0;
  const BIGNUM * ___b = (const BIGNUM *)REG_A1;
  BN_CTX * ___ctx = (BN_CTX *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_are_coprime(_base, ___a, ___b, ___ctx);
}

int LIB_OSSL_CMP_MSG_update_recipNonce(struct Library * _base, OSSL_CMP_CTX * ___ctx, OSSL_CMP_MSG * ___msg);

int LIBSTUB_OSSL_CMP_MSG_update_recipNonce(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  OSSL_CMP_MSG * ___msg = (OSSL_CMP_MSG *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_MSG_update_recipNonce(_base, ___ctx, ___msg);
}

int LIB_SSL_client_hello_get_extension_order(struct Library * _base, SSL * ___s, uint16_t * ___exts, size_t * ___num_exts);

int LIBSTUB_SSL_client_hello_get_extension_order(void)
{
  SSL * ___s = (SSL *)REG_A0;
  uint16_t * ___exts = (uint16_t *)REG_A1;
  size_t * ___num_exts = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_client_hello_get_extension_order(_base, ___s, ___exts, ___num_exts);
}

const SSL_METHOD * LIB_OSSL_QUIC_client_method(struct Library * _base);

const SSL_METHOD * LIBSTUB_OSSL_QUIC_client_method(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_QUIC_client_method(_base);
}

const SSL_METHOD * LIB_OSSL_QUIC_client_thread_method(struct Library * _base);

const SSL_METHOD * LIBSTUB_OSSL_QUIC_client_thread_method(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_QUIC_client_thread_method(_base);
}

int LIB_SSL_CTX_set1_cert_comp_preference(struct Library * _base, SSL_CTX * ___ctx, int * ___algs, size_t ___len);

int LIBSTUB_SSL_CTX_set1_cert_comp_preference(void)
{
  SSL_CTX * ___ctx = (SSL_CTX *)REG_A0;
  int * ___algs = (int *)REG_A1;
  size_t ___len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_set1_cert_comp_preference(_base, ___ctx, ___algs, ___len);
}

int LIB_SSL_set1_cert_comp_preference(struct Library * _base, SSL * ___ssl, int * ___algs, size_t ___len);

int LIBSTUB_SSL_set1_cert_comp_preference(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  int * ___algs = (int *)REG_A1;
  size_t ___len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set1_cert_comp_preference(_base, ___ssl, ___algs, ___len);
}

int LIB_SSL_CTX_compress_certs(struct Library * _base, SSL_CTX * ___ctx, int ___alg);

int LIBSTUB_SSL_CTX_compress_certs(void)
{
  SSL_CTX * ___ctx = (SSL_CTX *)REG_A0;
  int ___alg = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_compress_certs(_base, ___ctx, ___alg);
}

int LIB_SSL_compress_certs(struct Library * _base, SSL * ___ssl, int ___alg);

int LIBSTUB_SSL_compress_certs(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  int ___alg = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_compress_certs(_base, ___ssl, ___alg);
}

int LIB_SSL_CTX_set1_compressed_cert(struct Library * _base, SSL_CTX * ___ctx, int ___algorithm, unsigned char * ___comp_data, size_t ___comp_length, size_t ___orig_length);

int LIBSTUB_SSL_CTX_set1_compressed_cert(void)
{
  SSL_CTX * ___ctx = (SSL_CTX *)REG_A0;
  int ___algorithm = (int)REG_D0;
  unsigned char * ___comp_data = (unsigned char *)REG_A1;
  size_t ___comp_length = (size_t)REG_D1;
  size_t ___orig_length = (size_t)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_set1_compressed_cert(_base, ___ctx, ___algorithm, ___comp_data, ___comp_length, ___orig_length);
}

int LIB_SSL_set1_compressed_cert(struct Library * _base, SSL * ___ssl, int ___algorithm, unsigned char * ___comp_data, size_t ___comp_length, size_t ___orig_length);

int LIBSTUB_SSL_set1_compressed_cert(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  int ___algorithm = (int)REG_D0;
  unsigned char * ___comp_data = (unsigned char *)REG_A1;
  size_t ___comp_length = (size_t)REG_D1;
  size_t ___orig_length = (size_t)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set1_compressed_cert(_base, ___ssl, ___algorithm, ___comp_data, ___comp_length, ___orig_length);
}

size_t LIB_SSL_CTX_get1_compressed_cert(struct Library * _base, SSL_CTX * ___ctx, int ___alg, unsigned char ** ___data, size_t * ___orig_len);

size_t LIBSTUB_SSL_CTX_get1_compressed_cert(void)
{
  SSL_CTX * ___ctx = (SSL_CTX *)REG_A0;
  int ___alg = (int)REG_D0;
  unsigned char ** ___data = (unsigned char **)REG_A1;
  size_t * ___orig_len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_get1_compressed_cert(_base, ___ctx, ___alg, ___data, ___orig_len);
}

size_t LIB_SSL_get1_compressed_cert(struct Library * _base, SSL * ___ssl, int ___alg, unsigned char ** ___data, size_t * ___orig_len);

size_t LIBSTUB_SSL_get1_compressed_cert(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  int ___alg = (int)REG_D0;
  unsigned char ** ___data = (unsigned char **)REG_A1;
  size_t * ___orig_len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get1_compressed_cert(_base, ___ssl, ___alg, ___data, ___orig_len);
}

int LIB_SSL_get_rpoll_descriptor(struct Library * _base, SSL * ___s, BIO_POLL_DESCRIPTOR * ___desc);

int LIBSTUB_SSL_get_rpoll_descriptor(void)
{
  SSL * ___s = (SSL *)REG_A0;
  BIO_POLL_DESCRIPTOR * ___desc = (BIO_POLL_DESCRIPTOR *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_rpoll_descriptor(_base, ___s, ___desc);
}

int LIB_SSL_get_wpoll_descriptor(struct Library * _base, SSL * ___s, BIO_POLL_DESCRIPTOR * ___desc);

int LIBSTUB_SSL_get_wpoll_descriptor(void)
{
  SSL * ___s = (SSL *)REG_A0;
  BIO_POLL_DESCRIPTOR * ___desc = (BIO_POLL_DESCRIPTOR *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_wpoll_descriptor(_base, ___s, ___desc);
}

int LIB_SSL_set_blocking_mode(struct Library * _base, SSL * ___s, int ___blocking);

int LIBSTUB_SSL_set_blocking_mode(void)
{
  SSL * ___s = (SSL *)REG_A0;
  int ___blocking = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set_blocking_mode(_base, ___s, ___blocking);
}

int LIB_SSL_get_blocking_mode(struct Library * _base, SSL * ___s);

int LIBSTUB_SSL_get_blocking_mode(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_blocking_mode(_base, ___s);
}

int LIB_SSL_set1_initial_peer_addr(struct Library * _base, SSL * ___s, const BIO_ADDR * ___peer_addr);

int LIBSTUB_SSL_set1_initial_peer_addr(void)
{
  SSL * ___s = (SSL *)REG_A0;
  const BIO_ADDR * ___peer_addr = (const BIO_ADDR *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set1_initial_peer_addr(_base, ___s, ___peer_addr);
}

int LIB_SSL_net_read_desired(struct Library * _base, SSL * ___s);

int LIBSTUB_SSL_net_read_desired(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_net_read_desired(_base, ___s);
}

int LIB_SSL_net_write_desired(struct Library * _base, SSL * ___s);

int LIBSTUB_SSL_net_write_desired(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_net_write_desired(_base, ___s);
}

int LIB_SSL_shutdown_ex(struct Library * _base, SSL * ___ssl, uint64_t ___flags, const SSL_SHUTDOWN_EX_ARGS * ___args, size_t ___args_len);

int LIBSTUB_SSL_shutdown_ex(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  uint64_t ___flags = (uint64_t)REG_D0;
  const SSL_SHUTDOWN_EX_ARGS * ___args = (const SSL_SHUTDOWN_EX_ARGS *)REG_A1;
  size_t ___args_len = (size_t)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_shutdown_ex(_base, ___ssl, ___flags, ___args, ___args_len);
}

int LIB_SSL_stream_conclude(struct Library * _base, SSL * ___ssl, uint64_t ___flags);

int LIBSTUB_SSL_stream_conclude(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  uint64_t ___flags = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_stream_conclude(_base, ___ssl, ___flags);
}

int LIB_SSL_inject_net_dgram(struct Library * _base, SSL * ___s, const unsigned char * ___buf, size_t ___buf_len, const BIO_ADDR * ___peer, const BIO_ADDR * ___local);

int LIBSTUB_SSL_inject_net_dgram(void)
{
  SSL * ___s = (SSL *)REG_A0;
  const unsigned char * ___buf = (const unsigned char *)REG_A1;
  size_t ___buf_len = (size_t)REG_D0;
  const BIO_ADDR * ___peer = (const BIO_ADDR *)REG_A2;
  const BIO_ADDR * ___local = (const BIO_ADDR *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_inject_net_dgram(_base, ___s, ___buf, ___buf_len, ___peer, ___local);
}

EVP_PKEY * LIB_SSL_get0_peer_rpk(struct Library * _base, const SSL * ___s);

EVP_PKEY * LIBSTUB_SSL_get0_peer_rpk(void)
{
  const SSL * ___s = (const SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get0_peer_rpk(_base, ___s);
}

EVP_PKEY * LIB_SSL_SESSION_get0_peer_rpk(struct Library * _base, SSL_SESSION * ___s);

EVP_PKEY * LIBSTUB_SSL_SESSION_get0_peer_rpk(void)
{
  SSL_SESSION * ___s = (SSL_SESSION *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_SESSION_get0_peer_rpk(_base, ___s);
}

int LIB_SSL_set1_client_cert_type(struct Library * _base, SSL * ___s, const unsigned char * ___val, size_t ___len);

int LIBSTUB_SSL_set1_client_cert_type(void)
{
  SSL * ___s = (SSL *)REG_A0;
  const unsigned char * ___val = (const unsigned char *)REG_A1;
  size_t ___len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set1_client_cert_type(_base, ___s, ___val, ___len);
}

int LIB_SSL_get0_client_cert_type(struct Library * _base, const SSL * ___s, unsigned char ** ___t, size_t * ___len);

int LIBSTUB_SSL_get0_client_cert_type(void)
{
  const SSL * ___s = (const SSL *)REG_A0;
  unsigned char ** ___t = (unsigned char **)REG_A1;
  size_t * ___len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get0_client_cert_type(_base, ___s, ___t, ___len);
}

int LIB_SSL_set1_server_cert_type(struct Library * _base, SSL * ___s, const unsigned char * ___val, size_t ___len);

int LIBSTUB_SSL_set1_server_cert_type(void)
{
  SSL * ___s = (SSL *)REG_A0;
  const unsigned char * ___val = (const unsigned char *)REG_A1;
  size_t ___len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set1_server_cert_type(_base, ___s, ___val, ___len);
}

int LIB_SSL_get0_server_cert_type(struct Library * _base, const SSL * ___s, unsigned char ** ___t, size_t * ___len);

int LIBSTUB_SSL_get0_server_cert_type(void)
{
  const SSL * ___s = (const SSL *)REG_A0;
  unsigned char ** ___t = (unsigned char **)REG_A1;
  size_t * ___len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get0_server_cert_type(_base, ___s, ___t, ___len);
}

int LIB_SSL_CTX_set1_client_cert_type(struct Library * _base, SSL_CTX * ___ctx, const unsigned char * ___val, size_t ___len);

int LIBSTUB_SSL_CTX_set1_client_cert_type(void)
{
  SSL_CTX * ___ctx = (SSL_CTX *)REG_A0;
  const unsigned char * ___val = (const unsigned char *)REG_A1;
  size_t ___len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_set1_client_cert_type(_base, ___ctx, ___val, ___len);
}

int LIB_SSL_CTX_get0_client_cert_type(struct Library * _base, const SSL_CTX * ___ctx, unsigned char ** ___t, size_t * ___len);

int LIBSTUB_SSL_CTX_get0_client_cert_type(void)
{
  const SSL_CTX * ___ctx = (const SSL_CTX *)REG_A0;
  unsigned char ** ___t = (unsigned char **)REG_A1;
  size_t * ___len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_get0_client_cert_type(_base, ___ctx, ___t, ___len);
}

int LIB_SSL_CTX_set1_server_cert_type(struct Library * _base, SSL_CTX * ___ctx, const unsigned char * ___val, size_t ___len);

int LIBSTUB_SSL_CTX_set1_server_cert_type(void)
{
  SSL_CTX * ___ctx = (SSL_CTX *)REG_A0;
  const unsigned char * ___val = (const unsigned char *)REG_A1;
  size_t ___len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_set1_server_cert_type(_base, ___ctx, ___val, ___len);
}

int LIB_SSL_CTX_get0_server_cert_type(struct Library * _base, const SSL_CTX * ___s, unsigned char ** ___t, size_t * ___len);

int LIBSTUB_SSL_CTX_get0_server_cert_type(void)
{
  const SSL_CTX * ___s = (const SSL_CTX *)REG_A0;
  unsigned char ** ___t = (unsigned char **)REG_A1;
  size_t * ___len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_get0_server_cert_type(_base, ___s, ___t, ___len);
}

int LIB_SSL_get_negotiated_client_cert_type(struct Library * _base, const SSL * ___s);

int LIBSTUB_SSL_get_negotiated_client_cert_type(void)
{
  const SSL * ___s = (const SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_negotiated_client_cert_type(_base, ___s);
}

int LIB_SSL_get_negotiated_server_cert_type(struct Library * _base, const SSL * ___s);

int LIBSTUB_SSL_get_negotiated_server_cert_type(void)
{
  const SSL * ___s = (const SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_negotiated_server_cert_type(_base, ___s);
}

int LIB_SSL_add_expected_rpk(struct Library * _base, SSL * ___s, EVP_PKEY * ___rpk);

int LIBSTUB_SSL_add_expected_rpk(void)
{
  SSL * ___s = (SSL *)REG_A0;
  EVP_PKEY * ___rpk = (EVP_PKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_add_expected_rpk(_base, ___s, ___rpk);
}

SSL_SESSION * LIB_d2i_SSL_SESSION_ex(struct Library * _base, SSL_SESSION ** ___a, const unsigned char ** ___pp, long ___length, OSSL_LIB_CTX * ___libctx, const char * ___propq);

SSL_SESSION * LIBSTUB_d2i_SSL_SESSION_ex(void)
{
  SSL_SESSION ** ___a = (SSL_SESSION **)REG_A0;
  const unsigned char ** ___pp = (const unsigned char **)REG_A1;
  long ___length = (long)REG_D0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_SSL_SESSION_ex(_base, ___a, ___pp, ___length, ___libctx, ___propq);
}

int LIB_SSL_is_tls(struct Library * _base, const SSL * ___s);

int LIBSTUB_SSL_is_tls(void)
{
  const SSL * ___s = (const SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_is_tls(_base, ___s);
}

int LIB_SSL_is_quic(struct Library * _base, const SSL * ___s);

int LIBSTUB_SSL_is_quic(void)
{
  const SSL * ___s = (const SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_is_quic(_base, ___s);
}

int LIB_SSL_get_handshake_rtt(struct Library * _base, const SSL * ___s, uint64_t * ___rtt);

int LIBSTUB_SSL_get_handshake_rtt(void)
{
  const SSL * ___s = (const SSL *)REG_A0;
  uint64_t * ___rtt = (uint64_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_handshake_rtt(_base, ___s, ___rtt);
}

SSL * LIB_SSL_new_stream(struct Library * _base, SSL * ___s, uint64_t ___flags);

SSL * LIBSTUB_SSL_new_stream(void)
{
  SSL * ___s = (SSL *)REG_A0;
  uint64_t ___flags = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_new_stream(_base, ___s, ___flags);
}

SSL * LIB_SSL_get0_connection(struct Library * _base, SSL * ___s);

SSL * LIBSTUB_SSL_get0_connection(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get0_connection(_base, ___s);
}

int LIB_SSL_is_connection(struct Library * _base, SSL * ___s);

int LIBSTUB_SSL_is_connection(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_is_connection(_base, ___s);
}

int LIB_SSL_get_stream_type(struct Library * _base, SSL * ___s);

int LIBSTUB_SSL_get_stream_type(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_stream_type(_base, ___s);
}

uint64_t LIB_SSL_get_stream_id(struct Library * _base, SSL * ___s);

uint64_t LIBSTUB_SSL_get_stream_id(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_stream_id(_base, ___s);
}

int LIB_SSL_set_default_stream_mode(struct Library * _base, SSL * ___s, uint32_t ___mode);

int LIBSTUB_SSL_set_default_stream_mode(void)
{
  SSL * ___s = (SSL *)REG_A0;
  uint32_t ___mode = (uint32_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set_default_stream_mode(_base, ___s, ___mode);
}

SSL * LIB_SSL_accept_stream(struct Library * _base, SSL * ___s, uint64_t ___flags);

SSL * LIBSTUB_SSL_accept_stream(void)
{
  SSL * ___s = (SSL *)REG_A0;
  uint64_t ___flags = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_accept_stream(_base, ___s, ___flags);
}

size_t LIB_SSL_get_accept_stream_queue_len(struct Library * _base, SSL * ___s);

size_t LIBSTUB_SSL_get_accept_stream_queue_len(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_accept_stream_queue_len(_base, ___s);
}

int LIB_SSL_stream_reset(struct Library * _base, SSL * ___ssl, const SSL_STREAM_RESET_ARGS * ___args, size_t ___args_len);

int LIBSTUB_SSL_stream_reset(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  const SSL_STREAM_RESET_ARGS * ___args = (const SSL_STREAM_RESET_ARGS *)REG_A1;
  size_t ___args_len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_stream_reset(_base, ___ssl, ___args, ___args_len);
}

int LIB_SSL_get_stream_read_state(struct Library * _base, SSL * ___ssl);

int LIBSTUB_SSL_get_stream_read_state(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_stream_read_state(_base, ___ssl);
}

int LIB_SSL_get_stream_write_state(struct Library * _base, SSL * ___ssl);

int LIBSTUB_SSL_get_stream_write_state(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_stream_write_state(_base, ___ssl);
}

int LIB_SSL_get_stream_read_error_code(struct Library * _base, SSL * ___ssl, uint64_t * ___app_error_code);

int LIBSTUB_SSL_get_stream_read_error_code(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  uint64_t * ___app_error_code = (uint64_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_stream_read_error_code(_base, ___ssl, ___app_error_code);
}

int LIB_SSL_get_stream_write_error_code(struct Library * _base, SSL * ___ssl, uint64_t * ___app_error_code);

int LIBSTUB_SSL_get_stream_write_error_code(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  uint64_t * ___app_error_code = (uint64_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_stream_write_error_code(_base, ___ssl, ___app_error_code);
}

int LIB_SSL_get_conn_close_info(struct Library * _base, SSL * ___ssl, SSL_CONN_CLOSE_INFO * ___info, size_t ___info_len);

int LIBSTUB_SSL_get_conn_close_info(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  SSL_CONN_CLOSE_INFO * ___info = (SSL_CONN_CLOSE_INFO *)REG_A1;
  size_t ___info_len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_conn_close_info(_base, ___ssl, ___info, ___info_len);
}

int LIB_SSL_set_incoming_stream_policy(struct Library * _base, SSL * ___s, int ___policy, uint64_t ___aec);

int LIBSTUB_SSL_set_incoming_stream_policy(void)
{
  SSL * ___s = (SSL *)REG_A0;
  int ___policy = (int)REG_D2;
  uint64_t ___aec = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set_incoming_stream_policy(_base, ___s, ___policy, ___aec);
}

int LIB_SSL_handle_events(struct Library * _base, SSL * ___s);

int LIBSTUB_SSL_handle_events(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_handle_events(_base, ___s);
}

int LIB_SSL_get_event_timeout(struct Library * _base, SSL * ___s, struct timeval * ___tv, int * ___is_infinite);

int LIBSTUB_SSL_get_event_timeout(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct timeval * ___tv = (struct timeval *)REG_A1;
  int * ___is_infinite = (int *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_event_timeout(_base, ___s, ___tv, ___is_infinite);
}

const char * LIB_SSL_get0_group_name(struct Library * _base, SSL * ___s);

const char * LIBSTUB_SSL_get0_group_name(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get0_group_name(_base, ___s);
}

int LIB_SSL_is_stream_local(struct Library * _base, SSL * ___s);

int LIBSTUB_SSL_is_stream_local(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_is_stream_local(_base, ___s);
}

const BIO_METHOD * LIB_BIO_f_zlib(struct Library * _base);

const BIO_METHOD * LIBSTUB_BIO_f_zlib(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_f_zlib(_base);
}

void LIB_X509_PUBKEY_set0_public_key(struct Library * _base, X509_PUBKEY * ___pub, unsigned char * ___penc, int ___penclen);

void LIBSTUB_X509_PUBKEY_set0_public_key(void)
{
  X509_PUBKEY * ___pub = (X509_PUBKEY *)REG_A0;
  unsigned char * ___penc = (unsigned char *)REG_A1;
  int ___penclen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_PUBKEY_set0_public_key(_base, ___pub, ___penc, ___penclen);
}

void LIB_OSSL_STACK_OF_X509_free(struct Library * _base, STACK_OF(X509) * ___certs);

void LIBSTUB_OSSL_STACK_OF_X509_free(void)
{
  STACK_OF(X509) * ___certs = (STACK_OF(X509) *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STACK_OF_X509_free(_base, ___certs);
}

int LIB_OSSL_trace_string(struct Library * _base, BIO * ___out, int ___text, int ___full, const unsigned char * ___data, size_t ___size);

int LIBSTUB_OSSL_trace_string(void)
{
  BIO * ___out = (BIO *)REG_A0;
  int ___text = (int)REG_D0;
  int ___full = (int)REG_D1;
  const unsigned char * ___data = (const unsigned char *)REG_A1;
  size_t ___size = (size_t)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_trace_string(_base, ___out, ___text, ___full, ___data, ___size);
}

BIGNUM * LIB_BN_signed_bin2bn(struct Library * _base, const unsigned char * ___s, int ___len, BIGNUM * ___ret);

BIGNUM * LIBSTUB_BN_signed_bin2bn(void)
{
  const unsigned char * ___s = (const unsigned char *)REG_A0;
  int ___len = (int)REG_D0;
  BIGNUM * ___ret = (BIGNUM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_signed_bin2bn(_base, ___s, ___len, ___ret);
}

int LIB_BN_signed_bn2bin(struct Library * _base, const BIGNUM * ___a, unsigned char * ___to, int ___tolen);

int LIBSTUB_BN_signed_bn2bin(void)
{
  const BIGNUM * ___a = (const BIGNUM *)REG_A0;
  unsigned char * ___to = (unsigned char *)REG_A1;
  int ___tolen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_signed_bn2bin(_base, ___a, ___to, ___tolen);
}

BIGNUM * LIB_BN_signed_lebin2bn(struct Library * _base, const unsigned char * ___s, int ___len, BIGNUM * ___ret);

BIGNUM * LIBSTUB_BN_signed_lebin2bn(void)
{
  const unsigned char * ___s = (const unsigned char *)REG_A0;
  int ___len = (int)REG_D0;
  BIGNUM * ___ret = (BIGNUM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_signed_lebin2bn(_base, ___s, ___len, ___ret);
}

int LIB_BN_signed_bn2lebin(struct Library * _base, const BIGNUM * ___a, unsigned char * ___to, int ___tolen);

int LIBSTUB_BN_signed_bn2lebin(void)
{
  const BIGNUM * ___a = (const BIGNUM *)REG_A0;
  unsigned char * ___to = (unsigned char *)REG_A1;
  int ___tolen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_signed_bn2lebin(_base, ___a, ___to, ___tolen);
}

BIGNUM * LIB_BN_signed_native2bn(struct Library * _base, const unsigned char * ___s, int ___len, BIGNUM * ___ret);

BIGNUM * LIBSTUB_BN_signed_native2bn(void)
{
  const unsigned char * ___s = (const unsigned char *)REG_A0;
  int ___len = (int)REG_D0;
  BIGNUM * ___ret = (BIGNUM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_signed_native2bn(_base, ___s, ___len, ___ret);
}

int LIB_BN_signed_bn2native(struct Library * _base, const BIGNUM * ___a, unsigned char * ___to, int ___tolen);

int LIBSTUB_BN_signed_bn2native(void)
{
  const BIGNUM * ___a = (const BIGNUM *)REG_A0;
  unsigned char * ___to = (unsigned char *)REG_A1;
  int ___tolen = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BN_signed_bn2native(_base, ___a, ___to, ___tolen);
}

int LIB_ASYNC_set_mem_functions(struct Library * _base, ASYNC_stack_alloc_fn ___alloc_fn, ASYNC_stack_free_fn ___free_fn);

int LIBSTUB_ASYNC_set_mem_functions(void)
{
  ASYNC_stack_alloc_fn ___alloc_fn = (ASYNC_stack_alloc_fn)REG_A0;
  ASYNC_stack_free_fn ___free_fn = (ASYNC_stack_free_fn)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASYNC_set_mem_functions(_base, ___alloc_fn, ___free_fn);
}

void LIB_ASYNC_get_mem_functions(struct Library * _base, ASYNC_stack_alloc_fn * ___alloc_fn, ASYNC_stack_free_fn * ___free_fn);

void LIBSTUB_ASYNC_get_mem_functions(void)
{
  ASYNC_stack_alloc_fn * ___alloc_fn = (ASYNC_stack_alloc_fn *)REG_A0;
  ASYNC_stack_free_fn * ___free_fn = (ASYNC_stack_free_fn *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASYNC_get_mem_functions(_base, ___alloc_fn, ___free_fn);
}

BIO_ADDR * LIB_BIO_ADDR_dup(struct Library * _base, const BIO_ADDR * ___ap);

BIO_ADDR * LIBSTUB_BIO_ADDR_dup(void)
{
  const BIO_ADDR * ___ap = (const BIO_ADDR *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_ADDR_dup(_base, ___ap);
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_new_caCerts(struct Library * _base, const STACK_OF(X509) * ___caCerts);

OSSL_CMP_ITAV * LIBSTUB_OSSL_CMP_ITAV_new_caCerts(void)
{
  const STACK_OF(X509) * ___caCerts = (const STACK_OF(X509) *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_new_caCerts(_base, ___caCerts);
}

int LIB_OSSL_CMP_ITAV_get0_caCerts(struct Library * _base, const OSSL_CMP_ITAV * ___itav, STACK_OF(X509) ** ___out);

int LIBSTUB_OSSL_CMP_ITAV_get0_caCerts(void)
{
  const OSSL_CMP_ITAV * ___itav = (const OSSL_CMP_ITAV *)REG_A0;
  STACK_OF(X509) ** ___out = (STACK_OF(X509) **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_get0_caCerts(_base, ___itav, ___out);
}

int LIB_OSSL_CMP_get1_caCerts(struct Library * _base, OSSL_CMP_CTX * ___ctx, STACK_OF(X509) ** ___out);

int LIBSTUB_OSSL_CMP_get1_caCerts(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  STACK_OF(X509) ** ___out = (STACK_OF(X509) **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_get1_caCerts(_base, ___ctx, ___out);
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_new_rootCaCert(struct Library * _base, const X509 * ___rootCaCert);

OSSL_CMP_ITAV * LIBSTUB_OSSL_CMP_ITAV_new_rootCaCert(void)
{
  const X509 * ___rootCaCert = (const X509 *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_new_rootCaCert(_base, ___rootCaCert);
}

int LIB_OSSL_CMP_ITAV_get0_rootCaCert(struct Library * _base, const OSSL_CMP_ITAV * ___itav, X509 ** ___out);

int LIBSTUB_OSSL_CMP_ITAV_get0_rootCaCert(void)
{
  const OSSL_CMP_ITAV * ___itav = (const OSSL_CMP_ITAV *)REG_A0;
  X509 ** ___out = (X509 **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_get0_rootCaCert(_base, ___itav, ___out);
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_new_rootCaKeyUpdate(struct Library * _base, const X509 * ___newWithNew, const X509 * ___newWithOld, const X509 * ___oldWithNew);

OSSL_CMP_ITAV * LIBSTUB_OSSL_CMP_ITAV_new_rootCaKeyUpdate(void)
{
  const X509 * ___newWithNew = (const X509 *)REG_A0;
  const X509 * ___newWithOld = (const X509 *)REG_A1;
  const X509 * ___oldWithNew = (const X509 *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_new_rootCaKeyUpdate(_base, ___newWithNew, ___newWithOld, ___oldWithNew);
}

int LIB_OSSL_CMP_ITAV_get0_rootCaKeyUpdate(struct Library * _base, const OSSL_CMP_ITAV * ___itav, X509 ** ___newWithNew, X509 ** ___newWithOld, X509 ** ___oldWithNew);

int LIBSTUB_OSSL_CMP_ITAV_get0_rootCaKeyUpdate(void)
{
  const OSSL_CMP_ITAV * ___itav = (const OSSL_CMP_ITAV *)REG_A0;
  X509 ** ___newWithNew = (X509 **)REG_A1;
  X509 ** ___newWithOld = (X509 **)REG_A2;
  X509 ** ___oldWithNew = (X509 **)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_get0_rootCaKeyUpdate(_base, ___itav, ___newWithNew, ___newWithOld, ___oldWithNew);
}

int LIB_OSSL_CMP_get1_rootCaKeyUpdate(struct Library * _base, OSSL_CMP_CTX * ___ctx, const X509 * ___oldWithOld, X509 ** ___newWithNew, X509 ** ___newWithOld, X509 ** ___oldWithNew);

int LIBSTUB_OSSL_CMP_get1_rootCaKeyUpdate(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const X509 * ___oldWithOld = (const X509 *)REG_A1;
  X509 ** ___newWithNew = (X509 **)REG_A2;
  X509 ** ___newWithOld = (X509 **)REG_A3;
  X509 ** ___oldWithNew = (X509 **)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_get1_rootCaKeyUpdate(_base, ___ctx, ___oldWithOld, ___newWithNew, ___newWithOld, ___oldWithNew);
}

OSSL_LIB_CTX * LIB_OSSL_CMP_CTX_get0_libctx(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

OSSL_LIB_CTX * LIBSTUB_OSSL_CMP_CTX_get0_libctx(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get0_libctx(_base, ___ctx);
}

const char * LIB_OSSL_CMP_CTX_get0_propq(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

const char * LIBSTUB_OSSL_CMP_CTX_get0_propq(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get0_propq(_base, ___ctx);
}

X509 * LIB_OSSL_CMP_CTX_get0_validatedSrvCert(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

X509 * LIBSTUB_OSSL_CMP_CTX_get0_validatedSrvCert(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get0_validatedSrvCert(_base, ___ctx);
}

int LIB_OSSL_CMP_CTX_set1_serialNumber(struct Library * _base, OSSL_CMP_CTX * ___ctx, const ASN1_INTEGER * ___sn);

int LIBSTUB_OSSL_CMP_CTX_set1_serialNumber(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const ASN1_INTEGER * ___sn = (const ASN1_INTEGER *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_set1_serialNumber(_base, ___ctx, ___sn);
}

X509_PUBKEY * LIB_OSSL_CRMF_CERTTEMPLATE_get0_publicKey(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * ___tmpl);

X509_PUBKEY * LIBSTUB_OSSL_CRMF_CERTTEMPLATE_get0_publicKey(void)
{
  const OSSL_CRMF_CERTTEMPLATE * ___tmpl = (const OSSL_CRMF_CERTTEMPLATE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTTEMPLATE_get0_publicKey(_base, ___tmpl);
}

int LIB_CMS_final_digest(struct Library * _base, CMS_ContentInfo * ___cms, const unsigned char * ___md, unsigned int ___mdlen, BIO * ___dcont, unsigned int ___flags);

int LIBSTUB_CMS_final_digest(void)
{
  CMS_ContentInfo * ___cms = (CMS_ContentInfo *)REG_A0;
  const unsigned char * ___md = (const unsigned char *)REG_A1;
  unsigned int ___mdlen = (unsigned int)REG_D0;
  BIO * ___dcont = (BIO *)REG_A2;
  unsigned int ___flags = (unsigned int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_final_digest(_base, ___cms, ___md, ___mdlen, ___dcont, ___flags);
}

const ASN1_ITEM * LIB_CMS_EnvelopedData_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_CMS_EnvelopedData_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_EnvelopedData_it(_base);
}

BIO * LIB_CMS_EnvelopedData_decrypt(struct Library * _base, CMS_EnvelopedData * ___env, BIO * ___detached_data, EVP_PKEY * ___pkey, X509 * ___cert, ASN1_OCTET_STRING * ___secret, unsigned int ___flags, OSSL_LIB_CTX * ___libctx, const char * ___propq);

BIO * LIBSTUB_CMS_EnvelopedData_decrypt(void)
{
  CMS_EnvelopedData * ___env = (CMS_EnvelopedData *)REG_A0;
  BIO * ___detached_data = (BIO *)REG_A1;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A2;
  X509 * ___cert = (X509 *)REG_A3;
  ASN1_OCTET_STRING * ___secret = (ASN1_OCTET_STRING *)REG_D0;
  unsigned int ___flags = (unsigned int)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D2;
  const char * ___propq = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_EnvelopedData_decrypt(_base, ___env, ___detached_data, ___pkey, ___cert, ___secret, ___flags, ___libctx, ___propq);
}

void LIB_CMS_SignedData_free(struct Library * _base, CMS_SignedData * ___a);

void LIBSTUB_CMS_SignedData_free(void)
{
  CMS_SignedData * ___a = (CMS_SignedData *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_SignedData_free(_base, ___a);
}

CMS_SignedData * LIB_CMS_SignedData_new(struct Library * _base);

CMS_SignedData * LIBSTUB_CMS_SignedData_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_SignedData_new(_base);
}

BIO * LIB_CMS_SignedData_verify(struct Library * _base, CMS_SignedData * ___sd, BIO * ___detached_data, STACK_OF(X509) * ___scerts, X509_STORE * ___store, STACK_OF(X509) * ___extra, STACK_OF(X509_CRL) * ___crls, unsigned int ___flags, OSSL_LIB_CTX * ___libctx, const char * ___propq);

BIO * LIBSTUB_CMS_SignedData_verify(void)
{
  CMS_SignedData * ___sd = (CMS_SignedData *)REG_A0;
  BIO * ___detached_data = (BIO *)REG_A1;
  STACK_OF(X509) * ___scerts = (STACK_OF(X509) *)REG_A2;
  X509_STORE * ___store = (X509_STORE *)REG_A3;
  STACK_OF(X509) * ___extra = (STACK_OF(X509) *)REG_D0;
  STACK_OF(X509_CRL) * ___crls = (STACK_OF(X509_CRL) *)REG_D1;
  unsigned int ___flags = (unsigned int)REG_D2;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D3;
  const char * ___propq = (const char *)REG_D4;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_SignedData_verify(_base, ___sd, ___detached_data, ___scerts, ___store, ___extra, ___crls, ___flags, ___libctx, ___propq);
}

const BIO_METHOD * LIB_BIO_s_dgram_mem(struct Library * _base);

const BIO_METHOD * LIBSTUB_BIO_s_dgram_mem(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_s_dgram_mem(_base);
}

int LIB_BIO_recvmmsg(struct Library * _base, BIO * ___b, BIO_MSG * ___msg, size_t ___stride, size_t ___num_msg, uint64_t ___flags, size_t * ___msgs_processed);

int LIBSTUB_BIO_recvmmsg(void)
{
  BIO * ___b = (BIO *)REG_A0;
  BIO_MSG * ___msg = (BIO_MSG *)REG_A1;
  size_t ___stride = (size_t)REG_D0;
  size_t ___num_msg = (size_t)REG_D1;
  uint64_t ___flags = (uint64_t)REG_D2;
  size_t * ___msgs_processed = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_recvmmsg(_base, ___b, ___msg, ___stride, ___num_msg, ___flags, ___msgs_processed);
}

int LIB_BIO_sendmmsg(struct Library * _base, BIO * ___b, BIO_MSG * ___msg, size_t ___stride, size_t ___num_msg, uint64_t ___flags, size_t * ___msgs_processed);

int LIBSTUB_BIO_sendmmsg(void)
{
  BIO * ___b = (BIO *)REG_A0;
  BIO_MSG * ___msg = (BIO_MSG *)REG_A1;
  size_t ___stride = (size_t)REG_D0;
  size_t ___num_msg = (size_t)REG_D1;
  uint64_t ___flags = (uint64_t)REG_D2;
  size_t * ___msgs_processed = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_sendmmsg(_base, ___b, ___msg, ___stride, ___num_msg, ___flags, ___msgs_processed);
}

int LIB_BIO_meth_set_sendmmsg(struct Library * _base, BIO_METHOD * ___biom, int (*___f)(BIO *,BIO_MSG *,size_t,size_t,uint64_t,size_t *));

int LIBSTUB_BIO_meth_set_sendmmsg(void)
{
  BIO_METHOD * ___biom = (BIO_METHOD *)REG_A0;
  int (*___f)(BIO *,BIO_MSG *,size_t,size_t,uint64_t,size_t *) = (int (*)(BIO *,BIO_MSG *,size_t,size_t,uint64_t,size_t *))REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_meth_set_sendmmsg(_base, ___biom, ___f);
}

int (* LIB_BIO_meth_get_sendmmsg(struct Library * _base, const BIO_METHOD * ___biom))(BIO *, BIO_MSG *, size_t, size_t, uint64_t, size_t *);

int (* LIBSTUB_BIO_meth_get_sendmmsg(void))(BIO *, BIO_MSG *, size_t, size_t, uint64_t, size_t *)
{
  const BIO_METHOD * ___biom = (const BIO_METHOD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_meth_get_sendmmsg(_base, ___biom);
}

int LIB_BIO_meth_set_recvmmsg(struct Library * _base, BIO_METHOD * ___biom, int (*___f)(BIO *,BIO_MSG *,size_t,size_t,uint64_t,size_t *));

int LIBSTUB_BIO_meth_set_recvmmsg(void)
{
  BIO_METHOD * ___biom = (BIO_METHOD *)REG_A0;
  int (*___f)(BIO *,BIO_MSG *,size_t,size_t,uint64_t,size_t *) = (int (*)(BIO *,BIO_MSG *,size_t,size_t,uint64_t,size_t *))REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_meth_set_recvmmsg(_base, ___biom, ___f);
}

int (* LIB_BIO_meth_get_recvmmsg(struct Library * _base, const BIO_METHOD * ___biom))(BIO *, BIO_MSG *, size_t, size_t, uint64_t, size_t *);

int (* LIBSTUB_BIO_meth_get_recvmmsg(void))(BIO *, BIO_MSG *, size_t, size_t, uint64_t, size_t *)
{
  const BIO_METHOD * ___biom = (const BIO_METHOD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_meth_get_recvmmsg(_base, ___biom);
}

int LIB_BIO_err_is_non_fatal(struct Library * _base, unsigned int ___errcode);

int LIBSTUB_BIO_err_is_non_fatal(void)
{
  unsigned int ___errcode = (unsigned int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_err_is_non_fatal(_base, ___errcode);
}

const BIO_METHOD * LIB_BIO_s_dgram_pair(struct Library * _base);

const BIO_METHOD * LIBSTUB_BIO_s_dgram_pair(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_s_dgram_pair(_base);
}

int LIB_BIO_new_bio_dgram_pair(struct Library * _base, BIO ** ___bio1, size_t ___writebuf1, BIO ** ___bio2, size_t ___writebuf2);

int LIBSTUB_BIO_new_bio_dgram_pair(void)
{
  BIO ** ___bio1 = (BIO **)REG_A0;
  size_t ___writebuf1 = (size_t)REG_D0;
  BIO ** ___bio2 = (BIO **)REG_A1;
  size_t ___writebuf2 = (size_t)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_new_bio_dgram_pair(_base, ___bio1, ___writebuf1, ___bio2, ___writebuf2);
}

int LIB_EVP_PKEY_auth_encapsulate_init(struct Library * _base, EVP_PKEY_CTX * ___ctx, EVP_PKEY * ___authpriv, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_auth_encapsulate_init(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  EVP_PKEY * ___authpriv = (EVP_PKEY *)REG_A1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_auth_encapsulate_init(_base, ___ctx, ___authpriv, ___params);
}

int LIB_EVP_PKEY_auth_decapsulate_init(struct Library * _base, EVP_PKEY_CTX * ___ctx, EVP_PKEY * ___authpub, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_auth_decapsulate_init(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  EVP_PKEY * ___authpub = (EVP_PKEY *)REG_A1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_auth_decapsulate_init(_base, ___ctx, ___authpub, ___params);
}

void LIB_PKCS12_SAFEBAG_set0_attrs(struct Library * _base, PKCS12_SAFEBAG * ___bag, STACK_OF(X509_ATTRIBUTE) * ___attrs);

void LIBSTUB_PKCS12_SAFEBAG_set0_attrs(void)
{
  PKCS12_SAFEBAG * ___bag = (PKCS12_SAFEBAG *)REG_A0;
  STACK_OF(X509_ATTRIBUTE) * ___attrs = (STACK_OF(X509_ATTRIBUTE) *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_SAFEBAG_set0_attrs(_base, ___bag, ___attrs);
}

PKCS12 * LIB_PKCS12_create_ex2_amiga_1(struct Library * _base, const char * ___pass, const char * ___name, EVP_PKEY * ___pkey, X509 * ___cert, STACK_OF(X509) * ___ca, int ___nid_key, int ___nid_cert, void * ___moreargs);

PKCS12 * LIBSTUB_PKCS12_create_ex2_amiga_1(void)
{
  const char * ___pass = (const char *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A2;
  X509 * ___cert = (X509 *)REG_A3;
  STACK_OF(X509) * ___ca = (STACK_OF(X509) *)REG_D0;
  int ___nid_key = (int)REG_D1;
  int ___nid_cert = (int)REG_D2;
  void * ___moreargs = (void *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_create_ex2_amiga_1(_base, ___pass, ___name, ___pkey, ___cert, ___ca, ___nid_key, ___nid_cert, ___moreargs);
}

void * LIB_PKCS12_create_ex2_amiga_2(struct Library * _base, int ___iter, int ___mac_iter, int ___keytype, OSSL_LIB_CTX * ___ctx, const char * ___propq, PKCS12_create_cb * ___cb, void * ___cbarg);

void * LIBSTUB_PKCS12_create_ex2_amiga_2(void)
{
  int ___iter = (int)REG_D0;
  int ___mac_iter = (int)REG_D1;
  int ___keytype = (int)REG_D2;
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  PKCS12_create_cb * ___cb = (PKCS12_create_cb *)REG_A3;
  void * ___cbarg = (void *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_create_ex2_amiga_2(_base, ___iter, ___mac_iter, ___keytype, ___ctx, ___propq, ___cb, ___cbarg);
}

void LIB_OSSL_sleep(struct Library * _base, uint64_t ___millis);

void LIBSTUB_OSSL_sleep(void)
{
  uint64_t ___millis = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_sleep(_base, ___millis);
}

uint32_t LIB_OSSL_get_thread_support_flags(struct Library * _base);

uint32_t LIBSTUB_OSSL_get_thread_support_flags(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_get_thread_support_flags(_base);
}

int LIB_OSSL_set_max_threads(struct Library * _base, OSSL_LIB_CTX * ___ctx, uint64_t ___max_threads);

int LIBSTUB_OSSL_set_max_threads(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  uint64_t ___max_threads = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_set_max_threads(_base, ___ctx, ___max_threads);
}

uint64_t LIB_OSSL_get_max_threads(struct Library * _base, OSSL_LIB_CTX * ___ctx);

uint64_t LIBSTUB_OSSL_get_max_threads(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_get_max_threads(_base, ___ctx);
}

COMP_METHOD * LIB_COMP_brotli(struct Library * _base);

COMP_METHOD * LIBSTUB_COMP_brotli(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_COMP_brotli(_base);
}

COMP_METHOD * LIB_COMP_brotli_oneshot(struct Library * _base);

COMP_METHOD * LIBSTUB_COMP_brotli_oneshot(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_COMP_brotli_oneshot(_base);
}

const BIO_METHOD * LIB_BIO_f_brotli(struct Library * _base);

const BIO_METHOD * LIBSTUB_BIO_f_brotli(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_f_brotli(_base);
}

COMP_METHOD * LIB_COMP_zstd(struct Library * _base);

COMP_METHOD * LIBSTUB_COMP_zstd(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_COMP_zstd(_base);
}

COMP_METHOD * LIB_COMP_zstd_oneshot(struct Library * _base);

COMP_METHOD * LIBSTUB_COMP_zstd_oneshot(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_COMP_zstd_oneshot(_base);
}

const BIO_METHOD * LIB_BIO_f_zstd(struct Library * _base);

const BIO_METHOD * LIBSTUB_BIO_f_zstd(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_f_zstd(_base);
}

EVP_PKEY * LIB_d2i_PUBKEY_ex_bio(struct Library * _base, BIO * ___bp, EVP_PKEY ** ___a, OSSL_LIB_CTX * ___libctx, const char * ___propq);

EVP_PKEY * LIBSTUB_d2i_PUBKEY_ex_bio(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  EVP_PKEY ** ___a = (EVP_PKEY **)REG_A1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_PUBKEY_ex_bio(_base, ___bp, ___a, ___libctx, ___propq);
}

COMP_METHOD * LIB_COMP_zlib_oneshot(struct Library * _base);

COMP_METHOD * LIBSTUB_COMP_zlib_oneshot(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_COMP_zlib_oneshot(_base);
}

int LIB_OSSL_HPKE_keygen_amiga(struct Library * _base, OSSL_HPKE_SUITE * ___suite, unsigned char * ___pub, size_t * ___publen, EVP_PKEY ** ___priv, const unsigned char * ___ikm, size_t ___ikmlen, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_OSSL_HPKE_keygen_amiga(void)
{
  OSSL_HPKE_SUITE * ___suite = (OSSL_HPKE_SUITE *)REG_A0;
  unsigned char * ___pub = (unsigned char *)REG_A1;
  size_t * ___publen = (size_t *)REG_A2;
  EVP_PKEY ** ___priv = (EVP_PKEY **)REG_A3;
  const unsigned char * ___ikm = (const unsigned char *)REG_D0;
  size_t ___ikmlen = (size_t)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D2;
  const char * ___propq = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_keygen_amiga(_base, ___suite, ___pub, ___publen, ___priv, ___ikm, ___ikmlen, ___libctx, ___propq);
}

int LIB_OSSL_HPKE_suite_check_amiga(struct Library * _base, OSSL_HPKE_SUITE * ___suite);

int LIBSTUB_OSSL_HPKE_suite_check_amiga(void)
{
  OSSL_HPKE_SUITE * ___suite = (OSSL_HPKE_SUITE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_suite_check_amiga(_base, ___suite);
}

int LIB_OSSL_HPKE_get_grease_value(struct Library * _base, const OSSL_HPKE_SUITE * ___suite_in, OSSL_HPKE_SUITE * ___suite, unsigned char * ___enc, size_t * ___enclen, unsigned char * ___ct, size_t ___ctlen, OSSL_LIB_CTX * ___libctx, const char * ___propq);

int LIBSTUB_OSSL_HPKE_get_grease_value(void)
{
  const OSSL_HPKE_SUITE * ___suite_in = (const OSSL_HPKE_SUITE *)REG_A0;
  OSSL_HPKE_SUITE * ___suite = (OSSL_HPKE_SUITE *)REG_A1;
  unsigned char * ___enc = (unsigned char *)REG_A2;
  size_t * ___enclen = (size_t *)REG_A3;
  unsigned char * ___ct = (unsigned char *)REG_D0;
  size_t ___ctlen = (size_t)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D2;
  const char * ___propq = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_get_grease_value(_base, ___suite_in, ___suite, ___enc, ___enclen, ___ct, ___ctlen, ___libctx, ___propq);
}

int LIB_OSSL_HPKE_str2suite(struct Library * _base, const char * ___str, OSSL_HPKE_SUITE * ___suite);

int LIBSTUB_OSSL_HPKE_str2suite(void)
{
  const char * ___str = (const char *)REG_A0;
  OSSL_HPKE_SUITE * ___suite = (OSSL_HPKE_SUITE *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_str2suite(_base, ___str, ___suite);
}

void LIB_OSSL_HPKE_CTX_free(struct Library * _base, OSSL_HPKE_CTX * ___ctx);

void LIBSTUB_OSSL_HPKE_CTX_free(void)
{
  OSSL_HPKE_CTX * ___ctx = (OSSL_HPKE_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_CTX_free(_base, ___ctx);
}

OSSL_HPKE_CTX * LIB_OSSL_HPKE_CTX_new_amiga(struct Library * _base, int ___mode, OSSL_HPKE_SUITE * ___suite, int ___role, OSSL_LIB_CTX * ___libctx, const char * ___propq);

OSSL_HPKE_CTX * LIBSTUB_OSSL_HPKE_CTX_new_amiga(void)
{
  int ___mode = (int)REG_D0;
  OSSL_HPKE_SUITE * ___suite = (OSSL_HPKE_SUITE *)REG_A0;
  int ___role = (int)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_CTX_new_amiga(_base, ___mode, ___suite, ___role, ___libctx, ___propq);
}

int LIB_OSSL_HPKE_CTX_set1_authpriv(struct Library * _base, OSSL_HPKE_CTX * ___ctx, EVP_PKEY * ___priv);

int LIBSTUB_OSSL_HPKE_CTX_set1_authpriv(void)
{
  OSSL_HPKE_CTX * ___ctx = (OSSL_HPKE_CTX *)REG_A0;
  EVP_PKEY * ___priv = (EVP_PKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_CTX_set1_authpriv(_base, ___ctx, ___priv);
}

int LIB_OSSL_HPKE_CTX_set1_authpub(struct Library * _base, OSSL_HPKE_CTX * ___ctx, const unsigned char * ___pub, size_t ___publen);

int LIBSTUB_OSSL_HPKE_CTX_set1_authpub(void)
{
  OSSL_HPKE_CTX * ___ctx = (OSSL_HPKE_CTX *)REG_A0;
  const unsigned char * ___pub = (const unsigned char *)REG_A1;
  size_t ___publen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_CTX_set1_authpub(_base, ___ctx, ___pub, ___publen);
}

int LIB_OSSL_HPKE_CTX_set1_psk(struct Library * _base, OSSL_HPKE_CTX * ___ctx, const char * ___pskid, const unsigned char * ___psk, size_t ___psklen);

int LIBSTUB_OSSL_HPKE_CTX_set1_psk(void)
{
  OSSL_HPKE_CTX * ___ctx = (OSSL_HPKE_CTX *)REG_A0;
  const char * ___pskid = (const char *)REG_A1;
  const unsigned char * ___psk = (const unsigned char *)REG_A2;
  size_t ___psklen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_CTX_set1_psk(_base, ___ctx, ___pskid, ___psk, ___psklen);
}

int LIB_OSSL_HPKE_CTX_set1_ikme(struct Library * _base, OSSL_HPKE_CTX * ___ctx, const unsigned char * ___ikme, size_t ___ikmelen);

int LIBSTUB_OSSL_HPKE_CTX_set1_ikme(void)
{
  OSSL_HPKE_CTX * ___ctx = (OSSL_HPKE_CTX *)REG_A0;
  const unsigned char * ___ikme = (const unsigned char *)REG_A1;
  size_t ___ikmelen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_CTX_set1_ikme(_base, ___ctx, ___ikme, ___ikmelen);
}

size_t LIB_OSSL_HPKE_get_ciphertext_size_amiga(struct Library * _base, OSSL_HPKE_SUITE * ___suite, size_t ___clearlen);

size_t LIBSTUB_OSSL_HPKE_get_ciphertext_size_amiga(void)
{
  OSSL_HPKE_SUITE * ___suite = (OSSL_HPKE_SUITE *)REG_A0;
  size_t ___clearlen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_get_ciphertext_size_amiga(_base, ___suite, ___clearlen);
}

size_t LIB_OSSL_HPKE_get_public_encap_size_amiga(struct Library * _base, OSSL_HPKE_SUITE * ___suite);

size_t LIBSTUB_OSSL_HPKE_get_public_encap_size_amiga(void)
{
  OSSL_HPKE_SUITE * ___suite = (OSSL_HPKE_SUITE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_get_public_encap_size_amiga(_base, ___suite);
}

int LIB_OSSL_HPKE_export(struct Library * _base, OSSL_HPKE_CTX * ___ctx, unsigned char * ___secret, size_t ___secretlen, const unsigned char * ___label, size_t ___labellen);

int LIBSTUB_OSSL_HPKE_export(void)
{
  OSSL_HPKE_CTX * ___ctx = (OSSL_HPKE_CTX *)REG_A0;
  unsigned char * ___secret = (unsigned char *)REG_A1;
  size_t ___secretlen = (size_t)REG_D0;
  const unsigned char * ___label = (const unsigned char *)REG_A2;
  size_t ___labellen = (size_t)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_export(_base, ___ctx, ___secret, ___secretlen, ___label, ___labellen);
}

int LIB_OSSL_HPKE_encap(struct Library * _base, OSSL_HPKE_CTX * ___ctx, unsigned char * ___enc, size_t * ___enclen, const unsigned char * ___pub, size_t ___publen, const unsigned char * ___info, size_t ___infolen);

int LIBSTUB_OSSL_HPKE_encap(void)
{
  OSSL_HPKE_CTX * ___ctx = (OSSL_HPKE_CTX *)REG_A0;
  unsigned char * ___enc = (unsigned char *)REG_A1;
  size_t * ___enclen = (size_t *)REG_A2;
  const unsigned char * ___pub = (const unsigned char *)REG_A3;
  size_t ___publen = (size_t)REG_D0;
  const unsigned char * ___info = (const unsigned char *)REG_D1;
  size_t ___infolen = (size_t)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_encap(_base, ___ctx, ___enc, ___enclen, ___pub, ___publen, ___info, ___infolen);
}

int LIB_OSSL_HPKE_decap(struct Library * _base, OSSL_HPKE_CTX * ___ctx, const unsigned char * ___enc, size_t ___enclen, EVP_PKEY * ___recippriv, const unsigned char * ___info, size_t ___infolen);

int LIBSTUB_OSSL_HPKE_decap(void)
{
  OSSL_HPKE_CTX * ___ctx = (OSSL_HPKE_CTX *)REG_A0;
  const unsigned char * ___enc = (const unsigned char *)REG_A1;
  size_t ___enclen = (size_t)REG_D0;
  EVP_PKEY * ___recippriv = (EVP_PKEY *)REG_A2;
  const unsigned char * ___info = (const unsigned char *)REG_A3;
  size_t ___infolen = (size_t)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_decap(_base, ___ctx, ___enc, ___enclen, ___recippriv, ___info, ___infolen);
}

int LIB_OSSL_HPKE_seal(struct Library * _base, OSSL_HPKE_CTX * ___ctx, unsigned char * ___ct, size_t * ___ctlen, const unsigned char * ___aad, size_t ___aadlen, const unsigned char * ___pt, size_t ___ptlen);

int LIBSTUB_OSSL_HPKE_seal(void)
{
  OSSL_HPKE_CTX * ___ctx = (OSSL_HPKE_CTX *)REG_A0;
  unsigned char * ___ct = (unsigned char *)REG_A1;
  size_t * ___ctlen = (size_t *)REG_A2;
  const unsigned char * ___aad = (const unsigned char *)REG_A3;
  size_t ___aadlen = (size_t)REG_D0;
  const unsigned char * ___pt = (const unsigned char *)REG_D1;
  size_t ___ptlen = (size_t)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_seal(_base, ___ctx, ___ct, ___ctlen, ___aad, ___aadlen, ___pt, ___ptlen);
}

int LIB_OSSL_HPKE_open(struct Library * _base, OSSL_HPKE_CTX * ___ctx, unsigned char * ___pt, size_t * ___ptlen, const unsigned char * ___aad, size_t ___aadlen, const unsigned char * ___ct, size_t ___ctlen);

int LIBSTUB_OSSL_HPKE_open(void)
{
  OSSL_HPKE_CTX * ___ctx = (OSSL_HPKE_CTX *)REG_A0;
  unsigned char * ___pt = (unsigned char *)REG_A1;
  size_t * ___ptlen = (size_t *)REG_A2;
  const unsigned char * ___aad = (const unsigned char *)REG_A3;
  size_t ___aadlen = (size_t)REG_D0;
  const unsigned char * ___ct = (const unsigned char *)REG_D1;
  size_t ___ctlen = (size_t)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_open(_base, ___ctx, ___pt, ___ptlen, ___aad, ___aadlen, ___ct, ___ctlen);
}

int LIB_OSSL_HPKE_CTX_get_seq(struct Library * _base, OSSL_HPKE_CTX * ___ctx, uint64_t * ___seq);

int LIBSTUB_OSSL_HPKE_CTX_get_seq(void)
{
  OSSL_HPKE_CTX * ___ctx = (OSSL_HPKE_CTX *)REG_A0;
  uint64_t * ___seq = (uint64_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_CTX_get_seq(_base, ___ctx, ___seq);
}

int LIB_OSSL_HPKE_CTX_set_seq(struct Library * _base, OSSL_HPKE_CTX * ___ctx, uint64_t ___seq);

int LIBSTUB_OSSL_HPKE_CTX_set_seq(void)
{
  OSSL_HPKE_CTX * ___ctx = (OSSL_HPKE_CTX *)REG_A0;
  uint64_t ___seq = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_CTX_set_seq(_base, ___ctx, ___seq);
}

size_t LIB_OSSL_HPKE_get_recommended_ikmelen_amiga(struct Library * _base, OSSL_HPKE_SUITE * ___suite);

size_t LIBSTUB_OSSL_HPKE_get_recommended_ikmelen_amiga(void)
{
  OSSL_HPKE_SUITE * ___suite = (OSSL_HPKE_SUITE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HPKE_get_recommended_ikmelen_amiga(_base, ___suite);
}

const char * LIB_OSSL_PROVIDER_get0_default_search_path(struct Library * _base, OSSL_LIB_CTX * ___libctx);

const char * LIBSTUB_OSSL_PROVIDER_get0_default_search_path(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_get0_default_search_path(_base, ___libctx);
}

int LIB_BIO_get_rpoll_descriptor(struct Library * _base, BIO * ___b, BIO_POLL_DESCRIPTOR * ___desc);

int LIBSTUB_BIO_get_rpoll_descriptor(void)
{
  BIO * ___b = (BIO *)REG_A0;
  BIO_POLL_DESCRIPTOR * ___desc = (BIO_POLL_DESCRIPTOR *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_get_rpoll_descriptor(_base, ___b, ___desc);
}

int LIB_BIO_get_wpoll_descriptor(struct Library * _base, BIO * ___b, BIO_POLL_DESCRIPTOR * ___desc);

int LIBSTUB_BIO_get_wpoll_descriptor(void)
{
  BIO * ___b = (BIO *)REG_A0;
  BIO_POLL_DESCRIPTOR * ___desc = (BIO_POLL_DESCRIPTOR *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_get_wpoll_descriptor(_base, ___b, ___desc);
}

void * LIB_ASN1_item_unpack_ex(struct Library * _base, const ASN1_STRING * ___oct, const ASN1_ITEM * ___it, OSSL_LIB_CTX * ___libctx, const char * ___propq);

void * LIBSTUB_ASN1_item_unpack_ex(void)
{
  const ASN1_STRING * ___oct = (const ASN1_STRING *)REG_A0;
  const ASN1_ITEM * ___it = (const ASN1_ITEM *)REG_A1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A2;
  const char * ___propq = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ASN1_item_unpack_ex(_base, ___oct, ___it, ___libctx, ___propq);
}

X509 * LIB_PKCS12_SAFEBAG_get1_cert_ex(struct Library * _base, const PKCS12_SAFEBAG * ___bag, OSSL_LIB_CTX * ___libctx, const char * ___propq);

X509 * LIBSTUB_PKCS12_SAFEBAG_get1_cert_ex(void)
{
  const PKCS12_SAFEBAG * ___bag = (const PKCS12_SAFEBAG *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_SAFEBAG_get1_cert_ex(_base, ___bag, ___libctx, ___propq);
}

X509_CRL * LIB_PKCS12_SAFEBAG_get1_crl_ex(struct Library * _base, const PKCS12_SAFEBAG * ___bag, OSSL_LIB_CTX * ___libctx, const char * ___propq);

X509_CRL * LIBSTUB_PKCS12_SAFEBAG_get1_crl_ex(void)
{
  const PKCS12_SAFEBAG * ___bag = (const PKCS12_SAFEBAG *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_SAFEBAG_get1_crl_ex(_base, ___bag, ___libctx, ___propq);
}

OSSL_PARAM * LIB_EC_GROUP_to_params(struct Library * _base, const EC_GROUP * ___group, OSSL_LIB_CTX * ___libctx, const char * ___propq, BN_CTX * ___bnctx);

OSSL_PARAM * LIBSTUB_EC_GROUP_to_params(void)
{
  const EC_GROUP * ___group = (const EC_GROUP *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  BN_CTX * ___bnctx = (BN_CTX *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EC_GROUP_to_params(_base, ___group, ___libctx, ___propq, ___bnctx);
}

int LIB_X509_STORE_CTX_init_rpk(struct Library * _base, X509_STORE_CTX * ___ctx, X509_STORE * ___trust_store, EVP_PKEY* ___rpk);

int LIBSTUB_X509_STORE_CTX_init_rpk(void)
{
  X509_STORE_CTX * ___ctx = (X509_STORE_CTX *)REG_A0;
  X509_STORE * ___trust_store = (X509_STORE *)REG_A1;
  EVP_PKEY* ___rpk = (EVP_PKEY*)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_CTX_init_rpk(_base, ___ctx, ___trust_store, ___rpk);
}

EVP_PKEY * LIB_X509_STORE_CTX_get0_rpk(struct Library * _base, const X509_STORE_CTX * ___ctx);

EVP_PKEY * LIBSTUB_X509_STORE_CTX_get0_rpk(void)
{
  const X509_STORE_CTX * ___ctx = (const X509_STORE_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_CTX_get0_rpk(_base, ___ctx);
}

void LIB_X509_STORE_CTX_set0_rpk(struct Library * _base, X509_STORE_CTX * ___ctx, EVP_PKEY * ___target);

void LIBSTUB_X509_STORE_CTX_set0_rpk(void)
{
  X509_STORE_CTX * ___ctx = (X509_STORE_CTX *)REG_A0;
  EVP_PKEY * ___target = (EVP_PKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_CTX_set0_rpk(_base, ___ctx, ___target);
}

int LIB_CRYPTO_atomic_load_int(struct Library * _base, int * ___val, int * ___ret, CRYPTO_RWLOCK * ___lock);

int LIBSTUB_CRYPTO_atomic_load_int(void)
{
  int * ___val = (int *)REG_A0;
  int * ___ret = (int *)REG_A1;
  CRYPTO_RWLOCK * ___lock = (CRYPTO_RWLOCK *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CRYPTO_atomic_load_int(_base, ___val, ___ret, ___lock);
}

ERR_STATE * LIB_OSSL_ERR_STATE_new(struct Library * _base);

ERR_STATE * LIBSTUB_OSSL_ERR_STATE_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ERR_STATE_new(_base);
}

void LIB_OSSL_ERR_STATE_save(struct Library * _base, ERR_STATE * ___es);

void LIBSTUB_OSSL_ERR_STATE_save(void)
{
  ERR_STATE * ___es = (ERR_STATE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ERR_STATE_save(_base, ___es);
}

void LIB_OSSL_ERR_STATE_restore(struct Library * _base, const ERR_STATE * ___es);

void LIBSTUB_OSSL_ERR_STATE_restore(void)
{
  const ERR_STATE * ___es = (const ERR_STATE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ERR_STATE_restore(_base, ___es);
}

void LIB_OSSL_ERR_STATE_free(struct Library * _base, ERR_STATE * ___es);

void LIBSTUB_OSSL_ERR_STATE_free(void)
{
  ERR_STATE * ___es = (ERR_STATE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ERR_STATE_free(_base, ___es);
}

int LIB_ERR_count_to_mark(struct Library * _base);

int LIBSTUB_ERR_count_to_mark(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_count_to_mark(_base);
}

OSSL_PROVIDER * LIB_OSSL_PROVIDER_load_ex(struct Library * _base, OSSL_LIB_CTX * ___a, const char * ___name, OSSL_PARAM * ___params);

OSSL_PROVIDER * LIBSTUB_OSSL_PROVIDER_load_ex(void)
{
  OSSL_LIB_CTX * ___a = (OSSL_LIB_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_load_ex(_base, ___a, ___name, ___params);
}

OSSL_PROVIDER * LIB_OSSL_PROVIDER_try_load_ex(struct Library * _base, OSSL_LIB_CTX * ___a, const char * ___name, OSSL_PARAM * ___params, int ___retain_fallbacks);

OSSL_PROVIDER * LIBSTUB_OSSL_PROVIDER_try_load_ex(void)
{
  OSSL_LIB_CTX * ___a = (OSSL_LIB_CTX *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A2;
  int ___retain_fallbacks = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_try_load_ex(_base, ___a, ___name, ___params, ___retain_fallbacks);
}

void LIB_OSSL_ERR_STATE_save_to_mark(struct Library * _base, ERR_STATE * ___es);

void LIBSTUB_OSSL_ERR_STATE_save_to_mark(void)
{
  ERR_STATE * ___es = (ERR_STATE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ERR_STATE_save_to_mark(_base, ___es);
}

void LIB_X509_STORE_CTX_set_get_crl(struct Library * _base, X509_STORE_CTX * ___ctx, X509_STORE_CTX_get_crl_fn ___get_crl);

void LIBSTUB_X509_STORE_CTX_set_get_crl(void)
{
  X509_STORE_CTX * ___ctx = (X509_STORE_CTX *)REG_A0;
  X509_STORE_CTX_get_crl_fn ___get_crl = (X509_STORE_CTX_get_crl_fn)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_CTX_set_get_crl(_base, ___ctx, ___get_crl);
}

void LIB_X509_STORE_CTX_set_current_reasons(struct Library * _base, X509_STORE_CTX * ___ctx, unsigned int ___current_reasons);

void LIBSTUB_X509_STORE_CTX_set_current_reasons(void)
{
  X509_STORE_CTX * ___ctx = (X509_STORE_CTX *)REG_A0;
  unsigned int ___current_reasons = (unsigned int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_CTX_set_current_reasons(_base, ___ctx, ___current_reasons);
}

int LIB_OSSL_STORE_delete(struct Library * _base, const char * ___uri, OSSL_LIB_CTX * ___libctx, const char * ___propq, const UI_METHOD * ___ui_method, void * ___ui_data, const OSSL_PARAM * ___params);

int LIBSTUB_OSSL_STORE_delete(void)
{
  const char * ___uri = (const char *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  const UI_METHOD * ___ui_method = (const UI_METHOD *)REG_A3;
  void * ___ui_data = (void *)REG_D0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_STORE_delete(_base, ___uri, ___libctx, ___propq, ___ui_method, ___ui_data, ___params);
}

int LIB_BIO_ADDR_copy(struct Library * _base, BIO_ADDR * ___dst, const BIO_ADDR * ___src);

int LIBSTUB_BIO_ADDR_copy(void)
{
  BIO_ADDR * ___dst = (BIO_ADDR *)REG_A0;
  const BIO_ADDR * ___src = (const BIO_ADDR *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_BIO_ADDR_copy(_base, ___dst, ___src);
}

int LIB_SSL_write_ex2(struct Library * _base, SSL * ___s, const void * ___buf, size_t ___num, uint64_t ___flags, size_t * ___written);

int LIBSTUB_SSL_write_ex2(void)
{
  SSL * ___s = (SSL *)REG_A0;
  const void * ___buf = (const void *)REG_A1;
  size_t ___num = (size_t)REG_D2;
  uint64_t ___flags = (uint64_t)REG_D0;
  size_t * ___written = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_write_ex2(_base, ___s, ___buf, ___num, ___flags, ___written);
}

int LIB_SSL_get_value_uint(struct Library * _base, SSL * ___s, uint32_t ___class_, uint32_t ___id, uint64_t * ___v);

int LIBSTUB_SSL_get_value_uint(void)
{
  SSL * ___s = (SSL *)REG_A0;
  uint32_t ___class_ = (uint32_t)REG_D0;
  uint32_t ___id = (uint32_t)REG_D1;
  uint64_t * ___v = (uint64_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_value_uint(_base, ___s, ___class_, ___id, ___v);
}

int LIB_SSL_set_value_uint(struct Library * _base, SSL * ___s, uint32_t ___class_, uint32_t ___id, uint64_t ___v);

int LIBSTUB_SSL_set_value_uint(void)
{
  SSL * ___s = (SSL *)REG_A0;
  uint32_t ___class_ = (uint32_t)REG_D0;
  uint32_t ___id = (uint32_t)REG_D1;
  uint64_t ___v = (uint64_t)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set_value_uint(_base, ___s, ___class_, ___id, ___v);
}

int LIB_SSL_poll(struct Library * _base, SSL_POLL_ITEM * ___items, size_t ___num_items, size_t ___stride, const struct timeval * ___timeout, uint64_t ___flags, size_t * ___result_count);

int LIBSTUB_SSL_poll(void)
{
  SSL_POLL_ITEM * ___items = (SSL_POLL_ITEM *)REG_A0;
  size_t ___num_items = (size_t)REG_D0;
  size_t ___stride = (size_t)REG_D1;
  const struct timeval * ___timeout = (const struct timeval *)REG_A1;
  uint64_t ___flags = (uint64_t)REG_D2;
  size_t * ___result_count = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_poll(_base, ___items, ___num_items, ___stride, ___timeout, ___flags, ___result_count);
}

time_t LIB_SSL_SESSION_get_time_ex(struct Library * _base, const SSL_SESSION * ___s);

time_t LIBSTUB_SSL_SESSION_get_time_ex(void)
{
  const SSL_SESSION * ___s = (const SSL_SESSION *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_SESSION_get_time_ex(_base, ___s);
}

time_t LIB_SSL_SESSION_set_time_ex(struct Library * _base, SSL_SESSION * ___s, time_t ___t);

time_t LIBSTUB_SSL_SESSION_set_time_ex(void)
{
  SSL_SESSION * ___s = (SSL_SESSION *)REG_A0;
  time_t ___t = (time_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_SESSION_set_time_ex(_base, ___s, ___t);
}

STACK_OF(OSSL_CMP_ITAV) * LIB_OSSL_CMP_CTX_get0_geninfo_ITAVs(struct Library * _base, const OSSL_CMP_CTX * ___ctx);

STACK_OF(OSSL_CMP_ITAV) * LIBSTUB_OSSL_CMP_CTX_get0_geninfo_ITAVs(void)
{
  const OSSL_CMP_CTX * ___ctx = (const OSSL_CMP_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CTX_get0_geninfo_ITAVs(_base, ___ctx);
}

STACK_OF(OSSL_CMP_ITAV) * LIB_OSSL_CMP_HDR_get0_geninfo_ITAVs(struct Library * _base, const OSSL_CMP_PKIHEADER * ___hdr);

STACK_OF(OSSL_CMP_ITAV) * LIBSTUB_OSSL_CMP_HDR_get0_geninfo_ITAVs(void)
{
  const OSSL_CMP_PKIHEADER * ___hdr = (const OSSL_CMP_PKIHEADER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_HDR_get0_geninfo_ITAVs(_base, ___hdr);
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_new0_certProfile(struct Library * _base, STACK_OF(ASN1_UTF8STRING) * ___certProfile);

OSSL_CMP_ITAV * LIBSTUB_OSSL_CMP_ITAV_new0_certProfile(void)
{
  STACK_OF(ASN1_UTF8STRING) * ___certProfile = (STACK_OF(ASN1_UTF8STRING) *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_new0_certProfile(_base, ___certProfile);
}

int LIB_OSSL_CMP_ITAV_get0_certProfile(struct Library * _base, const OSSL_CMP_ITAV * ___itav, STACK_OF(ASN1_UTF8STRING) ** ___out);

int LIBSTUB_OSSL_CMP_ITAV_get0_certProfile(void)
{
  const OSSL_CMP_ITAV * ___itav = (const OSSL_CMP_ITAV *)REG_A0;
  STACK_OF(ASN1_UTF8STRING) ** ___out = (STACK_OF(ASN1_UTF8STRING) **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_get0_certProfile(_base, ___itav, ___out);
}

X509_PUBKEY * LIB_OSSL_CMP_MSG_get0_certreq_publickey(struct Library * _base, const OSSL_CMP_MSG * ___msg);

X509_PUBKEY * LIBSTUB_OSSL_CMP_MSG_get0_certreq_publickey(void)
{
  const OSSL_CMP_MSG * ___msg = (const OSSL_CMP_MSG *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_MSG_get0_certreq_publickey(_base, ___msg);
}

int LIB_OSSL_CMP_SRV_CTX_init_trans(struct Library * _base, OSSL_CMP_SRV_CTX * ___srv_ctx, OSSL_CMP_SRV_delayed_delivery_cb_t ___delay, OSSL_CMP_SRV_clean_transaction_cb_t ___clean);

int LIBSTUB_OSSL_CMP_SRV_CTX_init_trans(void)
{
  OSSL_CMP_SRV_CTX * ___srv_ctx = (OSSL_CMP_SRV_CTX *)REG_A0;
  OSSL_CMP_SRV_delayed_delivery_cb_t ___delay = (OSSL_CMP_SRV_delayed_delivery_cb_t)REG_A1;
  OSSL_CMP_SRV_clean_transaction_cb_t ___clean = (OSSL_CMP_SRV_clean_transaction_cb_t)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_SRV_CTX_init_trans(_base, ___srv_ctx, ___delay, ___clean);
}

int LIB_EVP_DigestSqueeze(struct Library * _base, EVP_MD_CTX * ___ctx, unsigned char * ___out, size_t ___outlen);

int LIBSTUB_EVP_DigestSqueeze(void)
{
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A0;
  unsigned char * ___out = (unsigned char *)REG_A1;
  size_t ___outlen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_DigestSqueeze(_base, ___ctx, ___out, ___outlen);
}

int LIB_ERR_pop(struct Library * _base);

int LIBSTUB_ERR_pop(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_ERR_pop(_base);
}

STACK_OF(X509_OBJECT) * LIB_X509_STORE_get1_objects(struct Library * _base, X509_STORE * ___xs);

STACK_OF(X509_OBJECT) * LIBSTUB_X509_STORE_get1_objects(void)
{
  X509_STORE * ___xs = (X509_STORE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_STORE_get1_objects(_base, ___xs);
}

OPENSSL_LHASH * LIB_OPENSSL_LH_set_thunks(struct Library * _base, OPENSSL_LHASH * ___lh, OPENSSL_LH_HASHFUNCTHUNK ___hw, OPENSSL_LH_COMPFUNCTHUNK ___cw, OPENSSL_LH_DOALL_FUNC_THUNK ___daw, OPENSSL_LH_DOALL_FUNCARG_THUNK ___daaw);

OPENSSL_LHASH * LIBSTUB_OPENSSL_LH_set_thunks(void)
{
  OPENSSL_LHASH * ___lh = (OPENSSL_LHASH *)REG_A0;
  OPENSSL_LH_HASHFUNCTHUNK ___hw = (OPENSSL_LH_HASHFUNCTHUNK)REG_A1;
  OPENSSL_LH_COMPFUNCTHUNK ___cw = (OPENSSL_LH_COMPFUNCTHUNK)REG_A2;
  OPENSSL_LH_DOALL_FUNC_THUNK ___daw = (OPENSSL_LH_DOALL_FUNC_THUNK)REG_A3;
  OPENSSL_LH_DOALL_FUNCARG_THUNK ___daaw = (OPENSSL_LH_DOALL_FUNCARG_THUNK)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OPENSSL_LH_set_thunks(_base, ___lh, ___hw, ___cw, ___daw, ___daaw);
}

void LIB_OPENSSL_LH_doall_arg_thunk(struct Library * _base, OPENSSL_LHASH * ___lh, OPENSSL_LH_DOALL_FUNCARG_THUNK ___daaw, OPENSSL_LH_DOALL_FUNCARG ___fn, void * ___arg);

void LIBSTUB_OPENSSL_LH_doall_arg_thunk(void)
{
  OPENSSL_LHASH * ___lh = (OPENSSL_LHASH *)REG_A0;
  OPENSSL_LH_DOALL_FUNCARG_THUNK ___daaw = (OPENSSL_LH_DOALL_FUNCARG_THUNK)REG_D0;
  OPENSSL_LH_DOALL_FUNCARG ___fn = (OPENSSL_LH_DOALL_FUNCARG)REG_D1;
  void * ___arg = (void *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OPENSSL_LH_doall_arg_thunk(_base, ___lh, ___daaw, ___fn, ___arg);
}

void LIB_OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(struct Library * _base, OSSL_HTTP_REQ_CTX * ___rctx, size_t ___count);

void LIBSTUB_OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(void)
{
  OSSL_HTTP_REQ_CTX * ___rctx = (OSSL_HTTP_REQ_CTX *)REG_A0;
  size_t ___count = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(_base, ___rctx, ___count);
}

void LIB_SSL_CTX_flush_sessions_ex(struct Library * _base, SSL_CTX * ___ctx, time_t ___tm);

void LIBSTUB_SSL_CTX_flush_sessions_ex(void)
{
  SSL_CTX * ___ctx = (SSL_CTX *)REG_A0;
  time_t ___tm = (time_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_flush_sessions_ex(_base, ___ctx, ___tm);
}

int LIB_SSL_CTX_set_block_padding_ex(struct Library * _base, SSL_CTX * ___ctx, size_t ___app_block_size, size_t ___hs_block_size);

int LIBSTUB_SSL_CTX_set_block_padding_ex(void)
{
  SSL_CTX * ___ctx = (SSL_CTX *)REG_A0;
  size_t ___app_block_size = (size_t)REG_D0;
  size_t ___hs_block_size = (size_t)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_set_block_padding_ex(_base, ___ctx, ___app_block_size, ___hs_block_size);
}

int LIB_SSL_set_block_padding_ex(struct Library * _base, SSL * ___ssl, size_t ___app_block_size, size_t ___hs_block_size);

int LIBSTUB_SSL_set_block_padding_ex(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  size_t ___app_block_size = (size_t)REG_D0;
  size_t ___hs_block_size = (size_t)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set_block_padding_ex(_base, ___ssl, ___app_block_size, ___hs_block_size);
}

char * LIB_SSL_get1_builtin_sigalgs(struct Library * _base, OSSL_LIB_CTX * ___libctx);

char * LIBSTUB_SSL_get1_builtin_sigalgs(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get1_builtin_sigalgs(_base, ___libctx);
}

DIST_POINT_NAME * LIB_DIST_POINT_NAME_dup(struct Library * _base, const DIST_POINT_NAME * ___a);

DIST_POINT_NAME * LIBSTUB_DIST_POINT_NAME_dup(void)
{
  const DIST_POINT_NAME * ___a = (const DIST_POINT_NAME *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_DIST_POINT_NAME_dup(_base, ___a);
}

int LIB_GENERAL_NAME_set1_X509_NAME(struct Library * _base, GENERAL_NAME ** ___tgt, const X509_NAME * ___src);

int LIBSTUB_GENERAL_NAME_set1_X509_NAME(void)
{
  GENERAL_NAME ** ___tgt = (GENERAL_NAME **)REG_A0;
  const X509_NAME * ___src = (const X509_NAME *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_GENERAL_NAME_set1_X509_NAME(_base, ___tgt, ___src);
}

OSSL_CMP_CRLSTATUS * LIB_OSSL_CMP_CRLSTATUS_create(struct Library * _base, const X509_CRL * ___crl, const X509 * ___cert, int ___only_DN);

OSSL_CMP_CRLSTATUS * LIBSTUB_OSSL_CMP_CRLSTATUS_create(void)
{
  const X509_CRL * ___crl = (const X509_CRL *)REG_A0;
  const X509 * ___cert = (const X509 *)REG_A1;
  int ___only_DN = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CRLSTATUS_create(_base, ___crl, ___cert, ___only_DN);
}

void LIB_OSSL_CMP_CRLSTATUS_free(struct Library * _base, OSSL_CMP_CRLSTATUS * ___crlstatus);

void LIBSTUB_OSSL_CMP_CRLSTATUS_free(void)
{
  OSSL_CMP_CRLSTATUS * ___crlstatus = (OSSL_CMP_CRLSTATUS *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CRLSTATUS_free(_base, ___crlstatus);
}

int LIB_OSSL_CMP_CRLSTATUS_get0(struct Library * _base, const OSSL_CMP_CRLSTATUS * ___crlstatus, DIST_POINT_NAME ** ___dpn, GENERAL_NAMES ** ___issuer, ASN1_TIME ** ___thisUpdate);

int LIBSTUB_OSSL_CMP_CRLSTATUS_get0(void)
{
  const OSSL_CMP_CRLSTATUS * ___crlstatus = (const OSSL_CMP_CRLSTATUS *)REG_A0;
  DIST_POINT_NAME ** ___dpn = (DIST_POINT_NAME **)REG_A1;
  GENERAL_NAMES ** ___issuer = (GENERAL_NAMES **)REG_A2;
  ASN1_TIME ** ___thisUpdate = (ASN1_TIME **)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CRLSTATUS_get0(_base, ___crlstatus, ___dpn, ___issuer, ___thisUpdate);
}

OSSL_CMP_CRLSTATUS * LIB_OSSL_CMP_CRLSTATUS_new1(struct Library * _base, const DIST_POINT_NAME * ___dpn, const GENERAL_NAMES * ___issuer, const ASN1_TIME * ___thisUpdate);

OSSL_CMP_CRLSTATUS * LIBSTUB_OSSL_CMP_CRLSTATUS_new1(void)
{
  const DIST_POINT_NAME * ___dpn = (const DIST_POINT_NAME *)REG_A0;
  const GENERAL_NAMES * ___issuer = (const GENERAL_NAMES *)REG_A1;
  const ASN1_TIME * ___thisUpdate = (const ASN1_TIME *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_CRLSTATUS_new1(_base, ___dpn, ___issuer, ___thisUpdate);
}

int LIB_OSSL_CMP_ITAV_get0_crlStatusList(struct Library * _base, const OSSL_CMP_ITAV * ___itav, STACK_OF(OSSL_CMP_CRLSTATUS) ** ___out);

int LIBSTUB_OSSL_CMP_ITAV_get0_crlStatusList(void)
{
  const OSSL_CMP_ITAV * ___itav = (const OSSL_CMP_ITAV *)REG_A0;
  STACK_OF(OSSL_CMP_CRLSTATUS) ** ___out = (STACK_OF(OSSL_CMP_CRLSTATUS) **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_get0_crlStatusList(_base, ___itav, ___out);
}

int LIB_OSSL_CMP_ITAV_get0_crls(struct Library * _base, const OSSL_CMP_ITAV * ___it, STACK_OF(X509_CRL) ** ___out);

int LIBSTUB_OSSL_CMP_ITAV_get0_crls(void)
{
  const OSSL_CMP_ITAV * ___it = (const OSSL_CMP_ITAV *)REG_A0;
  STACK_OF(X509_CRL) ** ___out = (STACK_OF(X509_CRL) **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_get0_crls(_base, ___it, ___out);
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_new0_crlStatusList(struct Library * _base, STACK_OF(OSSL_CMP_CRLSTATUS) * ___crlStatusList);

OSSL_CMP_ITAV * LIBSTUB_OSSL_CMP_ITAV_new0_crlStatusList(void)
{
  STACK_OF(OSSL_CMP_CRLSTATUS) * ___crlStatusList = (STACK_OF(OSSL_CMP_CRLSTATUS) *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_new0_crlStatusList(_base, ___crlStatusList);
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_new_crls(struct Library * _base, const X509_CRL * ___crls);

OSSL_CMP_ITAV * LIBSTUB_OSSL_CMP_ITAV_new_crls(void)
{
  const X509_CRL * ___crls = (const X509_CRL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_new_crls(_base, ___crls);
}

int LIB_OSSL_CMP_get1_crlUpdate(struct Library * _base, OSSL_CMP_CTX * ___ctx, const X509 * ___crlcert, const X509_CRL * ___last_crl, X509_CRL ** ___crl);

int LIBSTUB_OSSL_CMP_get1_crlUpdate(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  const X509 * ___crlcert = (const X509 *)REG_A1;
  const X509_CRL * ___last_crl = (const X509_CRL *)REG_A2;
  X509_CRL ** ___crl = (X509_CRL **)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_get1_crlUpdate(_base, ___ctx, ___crlcert, ___last_crl, ___crl);
}

OSSL_CMP_ITAV * LIB_OSSL_CMP_ITAV_new0_certReqTemplate(struct Library * _base, OSSL_CRMF_CERTTEMPLATE * ___certTemplate, OSSL_CMP_ATAVS * ___keySpec);

OSSL_CMP_ITAV * LIBSTUB_OSSL_CMP_ITAV_new0_certReqTemplate(void)
{
  OSSL_CRMF_CERTTEMPLATE * ___certTemplate = (OSSL_CRMF_CERTTEMPLATE *)REG_A0;
  OSSL_CMP_ATAVS * ___keySpec = (OSSL_CMP_ATAVS *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_new0_certReqTemplate(_base, ___certTemplate, ___keySpec);
}

int LIB_OSSL_CMP_ITAV_get1_certReqTemplate(struct Library * _base, const OSSL_CMP_ITAV * ___itav, OSSL_CRMF_CERTTEMPLATE ** ___certTemplate, OSSL_CMP_ATAVS ** ___keySpec);

int LIBSTUB_OSSL_CMP_ITAV_get1_certReqTemplate(void)
{
  const OSSL_CMP_ITAV * ___itav = (const OSSL_CMP_ITAV *)REG_A0;
  OSSL_CRMF_CERTTEMPLATE ** ___certTemplate = (OSSL_CRMF_CERTTEMPLATE **)REG_A1;
  OSSL_CMP_ATAVS ** ___keySpec = (OSSL_CMP_ATAVS **)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ITAV_get1_certReqTemplate(_base, ___itav, ___certTemplate, ___keySpec);
}

OSSL_CMP_ATAV * LIB_OSSL_CMP_ATAV_create(struct Library * _base, ASN1_OBJECT * ___type, ASN1_TYPE * ___value);

OSSL_CMP_ATAV * LIBSTUB_OSSL_CMP_ATAV_create(void)
{
  ASN1_OBJECT * ___type = (ASN1_OBJECT *)REG_A0;
  ASN1_TYPE * ___value = (ASN1_TYPE *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ATAV_create(_base, ___type, ___value);
}

void LIB_OSSL_CMP_ATAV_set0(struct Library * _base, OSSL_CMP_ATAV * ___itav, ASN1_OBJECT * ___type, ASN1_TYPE * ___value);

void LIBSTUB_OSSL_CMP_ATAV_set0(void)
{
  OSSL_CMP_ATAV * ___itav = (OSSL_CMP_ATAV *)REG_A0;
  ASN1_OBJECT * ___type = (ASN1_OBJECT *)REG_A1;
  ASN1_TYPE * ___value = (ASN1_TYPE *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ATAV_set0(_base, ___itav, ___type, ___value);
}

ASN1_OBJECT * LIB_OSSL_CMP_ATAV_get0_type(struct Library * _base, const OSSL_CMP_ATAV * ___itav);

ASN1_OBJECT * LIBSTUB_OSSL_CMP_ATAV_get0_type(void)
{
  const OSSL_CMP_ATAV * ___itav = (const OSSL_CMP_ATAV *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ATAV_get0_type(_base, ___itav);
}

ASN1_TYPE * LIB_OSSL_CMP_ATAV_get0_value(struct Library * _base, const OSSL_CMP_ATAV * ___itav);

ASN1_TYPE * LIBSTUB_OSSL_CMP_ATAV_get0_value(void)
{
  const OSSL_CMP_ATAV * ___itav = (const OSSL_CMP_ATAV *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ATAV_get0_value(_base, ___itav);
}

OSSL_CMP_ATAV * LIB_OSSL_CMP_ATAV_new_algId(struct Library * _base, const X509_ALGOR * ___alg);

OSSL_CMP_ATAV * LIBSTUB_OSSL_CMP_ATAV_new_algId(void)
{
  const X509_ALGOR * ___alg = (const X509_ALGOR *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ATAV_new_algId(_base, ___alg);
}

X509_ALGOR * LIB_OSSL_CMP_ATAV_get0_algId(struct Library * _base, const OSSL_CMP_ATAV * ___atav);

X509_ALGOR * LIBSTUB_OSSL_CMP_ATAV_get0_algId(void)
{
  const OSSL_CMP_ATAV * ___atav = (const OSSL_CMP_ATAV *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ATAV_get0_algId(_base, ___atav);
}

OSSL_CMP_ATAV * LIB_OSSL_CMP_ATAV_new_rsaKeyLen(struct Library * _base, int ___len);

OSSL_CMP_ATAV * LIBSTUB_OSSL_CMP_ATAV_new_rsaKeyLen(void)
{
  int ___len = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ATAV_new_rsaKeyLen(_base, ___len);
}

int LIB_OSSL_CMP_ATAV_get_rsaKeyLen(struct Library * _base, const OSSL_CMP_ATAV * ___atav);

int LIBSTUB_OSSL_CMP_ATAV_get_rsaKeyLen(void)
{
  const OSSL_CMP_ATAV * ___atav = (const OSSL_CMP_ATAV *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ATAV_get_rsaKeyLen(_base, ___atav);
}

int LIB_OSSL_CMP_ATAV_push1(struct Library * _base, OSSL_CMP_ATAVS ** ___sk_p, const OSSL_CMP_ATAV * ___atav);

int LIBSTUB_OSSL_CMP_ATAV_push1(void)
{
  OSSL_CMP_ATAVS ** ___sk_p = (OSSL_CMP_ATAVS **)REG_A0;
  const OSSL_CMP_ATAV * ___atav = (const OSSL_CMP_ATAV *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ATAV_push1(_base, ___sk_p, ___atav);
}

int LIB_OSSL_CMP_get1_certReqTemplate(struct Library * _base, OSSL_CMP_CTX * ___ctx, OSSL_CRMF_CERTTEMPLATE ** ___certTemplate, OSSL_CMP_ATAVS ** ___keySpec);

int LIBSTUB_OSSL_CMP_get1_certReqTemplate(void)
{
  OSSL_CMP_CTX * ___ctx = (OSSL_CMP_CTX *)REG_A0;
  OSSL_CRMF_CERTTEMPLATE ** ___certTemplate = (OSSL_CRMF_CERTTEMPLATE **)REG_A1;
  OSSL_CMP_ATAVS ** ___keySpec = (OSSL_CMP_ATAVS **)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_get1_certReqTemplate(_base, ___ctx, ___certTemplate, ___keySpec);
}

OSSL_CMP_ATAVS * LIB_d2i_OSSL_CMP_ATAVS(struct Library * _base, OSSL_CMP_ATAVS ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CMP_ATAVS * LIBSTUB_d2i_OSSL_CMP_ATAVS(void)
{
  OSSL_CMP_ATAVS ** ___a = (OSSL_CMP_ATAVS **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CMP_ATAVS(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CMP_ATAVS(struct Library * _base, const OSSL_CMP_ATAVS * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CMP_ATAVS(void)
{
  const OSSL_CMP_ATAVS * ___a = (const OSSL_CMP_ATAVS *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CMP_ATAVS(_base, ___a, ___out);
}

void LIB_OSSL_CMP_ATAVS_free(struct Library * _base, OSSL_CMP_ATAVS * ___a);

void LIBSTUB_OSSL_CMP_ATAVS_free(void)
{
  OSSL_CMP_ATAVS * ___a = (OSSL_CMP_ATAVS *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ATAVS_free(_base, ___a);
}

OSSL_CMP_ATAVS * LIB_OSSL_CMP_ATAVS_new(struct Library * _base);

OSSL_CMP_ATAVS * LIBSTUB_OSSL_CMP_ATAVS_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ATAVS_new(_base);
}

const ASN1_ITEM * LIB_OSSL_CMP_ATAVS_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CMP_ATAVS_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CMP_ATAVS_it(_base);
}

void LIB_OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(struct Library * _base, OSSL_CRMF_ATTRIBUTETYPEANDVALUE * ___v);

void LIBSTUB_OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(void)
{
  OSSL_CRMF_ATTRIBUTETYPEANDVALUE * ___v = (OSSL_CRMF_ATTRIBUTETYPEANDVALUE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free(_base, ___v);
}

OSSL_CRMF_ATTRIBUTETYPEANDVALUE * LIB_OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup(struct Library * _base, const OSSL_CRMF_ATTRIBUTETYPEANDVALUE * ___a);

OSSL_CRMF_ATTRIBUTETYPEANDVALUE * LIBSTUB_OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup(void)
{
  const OSSL_CRMF_ATTRIBUTETYPEANDVALUE * ___a = (const OSSL_CRMF_ATTRIBUTETYPEANDVALUE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ATTRIBUTETYPEANDVALUE_dup(_base, ___a);
}

OSSL_CRMF_CERTTEMPLATE * LIB_OSSL_CRMF_CERTTEMPLATE_dup(struct Library * _base, const OSSL_CRMF_CERTTEMPLATE * ___a);

OSSL_CRMF_CERTTEMPLATE * LIBSTUB_OSSL_CRMF_CERTTEMPLATE_dup(void)
{
  const OSSL_CRMF_CERTTEMPLATE * ___a = (const OSSL_CRMF_CERTTEMPLATE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_CERTTEMPLATE_dup(_base, ___a);
}

int LIB_CRYPTO_atomic_store(struct Library * _base, uint64_t * ___dst, uint64_t ___val, CRYPTO_RWLOCK * ___lock);

int LIBSTUB_CRYPTO_atomic_store(void)
{
  uint64_t * ___dst = (uint64_t *)REG_A0;
  uint64_t ___val = (uint64_t)REG_D0;
  CRYPTO_RWLOCK * ___lock = (CRYPTO_RWLOCK *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CRYPTO_atomic_store(_base, ___dst, ___val, ___lock);
}

void * LIB_CRYPTO_aligned_alloc(struct Library * _base, size_t ___num, size_t ___align, void ** ___freeptr, const char * ___file, int ___line);

void * LIBSTUB_CRYPTO_aligned_alloc(void)
{
  size_t ___num = (size_t)REG_D0;
  size_t ___align = (size_t)REG_D1;
  void ** ___freeptr = (void **)REG_A0;
  const char * ___file = (const char *)REG_A1;
  int ___line = (int)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CRYPTO_aligned_alloc(_base, ___num, ___align, ___freeptr, ___file, ___line);
}

STACK_OF(X509_EXTENSION) * LIB_X509v3_add_extensions(struct Library * _base, STACK_OF(X509_EXTENSION) ** ___target, const STACK_OF(X509_EXTENSION) * ___exts);

STACK_OF(X509_EXTENSION) * LIBSTUB_X509v3_add_extensions(void)
{
  STACK_OF(X509_EXTENSION) ** ___target = (STACK_OF(X509_EXTENSION) **)REG_A0;
  const STACK_OF(X509_EXTENSION) * ___exts = (const STACK_OF(X509_EXTENSION) *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509v3_add_extensions(_base, ___target, ___exts);
}

int LIB_PKCS12_set_pbmac1_pbkdf2(struct Library * _base, PKCS12 * ___p12, const char * ___pass, int ___passlen, unsigned char * ___salt, int ___saltlen, int ___iter, const EVP_MD * ___md_type, const char * ___prf_md_name);

int LIBSTUB_PKCS12_set_pbmac1_pbkdf2(void)
{
  PKCS12 * ___p12 = (PKCS12 *)REG_A0;
  const char * ___pass = (const char *)REG_A1;
  int ___passlen = (int)REG_D0;
  unsigned char * ___salt = (unsigned char *)REG_A2;
  int ___saltlen = (int)REG_D1;
  int ___iter = (int)REG_D2;
  const EVP_MD * ___md_type = (const EVP_MD *)REG_A3;
  const char * ___prf_md_name = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PKCS12_set_pbmac1_pbkdf2(_base, ___p12, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___md_type, ___prf_md_name);
}

PBKDF2PARAM * LIB_PBMAC1_get1_pbkdf2_param(struct Library * _base, const X509_ALGOR * ___macalg);

PBKDF2PARAM * LIBSTUB_PBMAC1_get1_pbkdf2_param(void)
{
  const X509_ALGOR * ___macalg = (const X509_ALGOR *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PBMAC1_get1_pbkdf2_param(_base, ___macalg);
}

PBMAC1PARAM * LIB_d2i_PBMAC1PARAM(struct Library * _base, PBMAC1PARAM ** ___a, const unsigned char ** ___in, long ___len);

PBMAC1PARAM * LIBSTUB_d2i_PBMAC1PARAM(void)
{
  PBMAC1PARAM ** ___a = (PBMAC1PARAM **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_PBMAC1PARAM(_base, ___a, ___in, ___len);
}

int LIB_i2d_PBMAC1PARAM(struct Library * _base, const PBMAC1PARAM * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_PBMAC1PARAM(void)
{
  const PBMAC1PARAM * ___a = (const PBMAC1PARAM *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_PBMAC1PARAM(_base, ___a, ___out);
}

void LIB_PBMAC1PARAM_free(struct Library * _base, PBMAC1PARAM * ___a);

void LIBSTUB_PBMAC1PARAM_free(void)
{
  PBMAC1PARAM * ___a = (PBMAC1PARAM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PBMAC1PARAM_free(_base, ___a);
}

PBMAC1PARAM * LIB_PBMAC1PARAM_new(struct Library * _base);

PBMAC1PARAM * LIBSTUB_PBMAC1PARAM_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PBMAC1PARAM_new(_base);
}

const ASN1_ITEM * LIB_PBMAC1PARAM_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_PBMAC1PARAM_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PBMAC1PARAM_it(_base);
}

int LIB_OSSL_LIB_CTX_get_conf_diagnostics(struct Library * _base, OSSL_LIB_CTX * ___ctx);

int LIBSTUB_OSSL_LIB_CTX_get_conf_diagnostics(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_LIB_CTX_get_conf_diagnostics(_base, ___ctx);
}

void LIB_OSSL_LIB_CTX_set_conf_diagnostics(struct Library * _base, OSSL_LIB_CTX * ___ctx, int ___value);

void LIBSTUB_OSSL_LIB_CTX_set_conf_diagnostics(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  int ___value = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_LIB_CTX_set_conf_diagnostics(_base, ___ctx, ___value);
}

void * LIB_OSSL_LIB_CTX_get_data(struct Library * _base, OSSL_LIB_CTX * ___ctx, int ___index);

void * LIBSTUB_OSSL_LIB_CTX_get_data(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  int ___index = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_LIB_CTX_get_data(_base, ___ctx, ___index);
}

int LIB_OSSL_GENERAL_NAMES_print(struct Library * _base, BIO * ___out, GENERAL_NAMES * ___gens, int ___indent);

int LIBSTUB_OSSL_GENERAL_NAMES_print(void)
{
  BIO * ___out = (BIO *)REG_A0;
  GENERAL_NAMES * ___gens = (GENERAL_NAMES *)REG_A1;
  int ___indent = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_GENERAL_NAMES_print(_base, ___out, ___gens, ___indent);
}

int LIB_TS_VERIFY_CTX_set0_data(struct Library * _base, TS_VERIFY_CTX * ___ctx, BIO * ___b);

int LIBSTUB_TS_VERIFY_CTX_set0_data(void)
{
  TS_VERIFY_CTX * ___ctx = (TS_VERIFY_CTX *)REG_A0;
  BIO * ___b = (BIO *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_TS_VERIFY_CTX_set0_data(_base, ___ctx, ___b);
}

int LIB_TS_VERIFY_CTX_set0_imprint(struct Library * _base, TS_VERIFY_CTX * ___ctx, unsigned char * ___hexstr, long ___len);

int LIBSTUB_TS_VERIFY_CTX_set0_imprint(void)
{
  TS_VERIFY_CTX * ___ctx = (TS_VERIFY_CTX *)REG_A0;
  unsigned char * ___hexstr = (unsigned char *)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_TS_VERIFY_CTX_set0_imprint(_base, ___ctx, ___hexstr, ___len);
}

int LIB_TS_VERIFY_CTX_set0_store(struct Library * _base, TS_VERIFY_CTX * ___ctx, X509_STORE * ___s);

int LIBSTUB_TS_VERIFY_CTX_set0_store(void)
{
  TS_VERIFY_CTX * ___ctx = (TS_VERIFY_CTX *)REG_A0;
  X509_STORE * ___s = (X509_STORE *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_TS_VERIFY_CTX_set0_store(_base, ___ctx, ___s);
}

int LIB_TS_VERIFY_CTX_set0_certs(struct Library * _base, TS_VERIFY_CTX * ___ctx, STACK_OF(X509) * ___certs);

int LIBSTUB_TS_VERIFY_CTX_set0_certs(void)
{
  TS_VERIFY_CTX * ___ctx = (TS_VERIFY_CTX *)REG_A0;
  STACK_OF(X509) * ___certs = (STACK_OF(X509) *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_TS_VERIFY_CTX_set0_certs(_base, ___ctx, ___certs);
}

int LIB_CRYPTO_atomic_add64(struct Library * _base, uint64_t * ___val, uint64_t ___op, uint64_t * ___ret, CRYPTO_RWLOCK * ___lock);

int LIBSTUB_CRYPTO_atomic_add64(void)
{
  uint64_t * ___val = (uint64_t *)REG_A0;
  uint64_t ___op = (uint64_t)REG_D0;
  uint64_t * ___ret = (uint64_t *)REG_A1;
  CRYPTO_RWLOCK * ___lock = (CRYPTO_RWLOCK *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CRYPTO_atomic_add64(_base, ___val, ___op, ___ret, ___lock);
}

int LIB_CRYPTO_atomic_and(struct Library * _base, uint64_t * ___val, uint64_t ___op, uint64_t * ___ret, CRYPTO_RWLOCK * ___lock);

int LIBSTUB_CRYPTO_atomic_and(void)
{
  uint64_t * ___val = (uint64_t *)REG_A0;
  uint64_t ___op = (uint64_t)REG_D0;
  uint64_t * ___ret = (uint64_t *)REG_A1;
  CRYPTO_RWLOCK * ___lock = (CRYPTO_RWLOCK *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CRYPTO_atomic_and(_base, ___val, ___op, ___ret, ___lock);
}

OSSL_ATTRIBUTES_SYNTAX * LIB_d2i_OSSL_ATTRIBUTES_SYNTAX(struct Library * _base, OSSL_ATTRIBUTES_SYNTAX ** ___a, const unsigned char ** ___in, long ___len);

OSSL_ATTRIBUTES_SYNTAX * LIBSTUB_d2i_OSSL_ATTRIBUTES_SYNTAX(void)
{
  OSSL_ATTRIBUTES_SYNTAX ** ___a = (OSSL_ATTRIBUTES_SYNTAX **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_ATTRIBUTES_SYNTAX(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_ATTRIBUTES_SYNTAX(struct Library * _base, const OSSL_ATTRIBUTES_SYNTAX * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_ATTRIBUTES_SYNTAX(void)
{
  const OSSL_ATTRIBUTES_SYNTAX * ___a = (const OSSL_ATTRIBUTES_SYNTAX *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_ATTRIBUTES_SYNTAX(_base, ___a, ___out);
}

void LIB_OSSL_ATTRIBUTES_SYNTAX_free(struct Library * _base, OSSL_ATTRIBUTES_SYNTAX * ___a);

void LIBSTUB_OSSL_ATTRIBUTES_SYNTAX_free(void)
{
  OSSL_ATTRIBUTES_SYNTAX * ___a = (OSSL_ATTRIBUTES_SYNTAX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTES_SYNTAX_free(_base, ___a);
}

OSSL_ATTRIBUTES_SYNTAX * LIB_OSSL_ATTRIBUTES_SYNTAX_new(struct Library * _base);

OSSL_ATTRIBUTES_SYNTAX * LIBSTUB_OSSL_ATTRIBUTES_SYNTAX_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTES_SYNTAX_new(_base);
}

const ASN1_ITEM * LIB_OSSL_ATTRIBUTES_SYNTAX_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_ATTRIBUTES_SYNTAX_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTES_SYNTAX_it(_base);
}

OSSL_USER_NOTICE_SYNTAX * LIB_d2i_OSSL_USER_NOTICE_SYNTAX(struct Library * _base, OSSL_USER_NOTICE_SYNTAX ** ___a, const unsigned char ** ___in, long ___len);

OSSL_USER_NOTICE_SYNTAX * LIBSTUB_d2i_OSSL_USER_NOTICE_SYNTAX(void)
{
  OSSL_USER_NOTICE_SYNTAX ** ___a = (OSSL_USER_NOTICE_SYNTAX **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_USER_NOTICE_SYNTAX(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_USER_NOTICE_SYNTAX(struct Library * _base, const OSSL_USER_NOTICE_SYNTAX * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_USER_NOTICE_SYNTAX(void)
{
  const OSSL_USER_NOTICE_SYNTAX * ___a = (const OSSL_USER_NOTICE_SYNTAX *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_USER_NOTICE_SYNTAX(_base, ___a, ___out);
}

void LIB_OSSL_USER_NOTICE_SYNTAX_free(struct Library * _base, OSSL_USER_NOTICE_SYNTAX * ___a);

void LIBSTUB_OSSL_USER_NOTICE_SYNTAX_free(void)
{
  OSSL_USER_NOTICE_SYNTAX * ___a = (OSSL_USER_NOTICE_SYNTAX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_USER_NOTICE_SYNTAX_free(_base, ___a);
}

OSSL_USER_NOTICE_SYNTAX * LIB_OSSL_USER_NOTICE_SYNTAX_new(struct Library * _base);

OSSL_USER_NOTICE_SYNTAX * LIBSTUB_OSSL_USER_NOTICE_SYNTAX_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_USER_NOTICE_SYNTAX_new(_base);
}

const ASN1_ITEM * LIB_OSSL_USER_NOTICE_SYNTAX_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_USER_NOTICE_SYNTAX_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_USER_NOTICE_SYNTAX_it(_base);
}

void LIB_OSSL_INDICATOR_set_callback(struct Library * _base, OSSL_LIB_CTX * ___libctx, OSSL_INDICATOR_CALLBACK * ___cb);

void LIBSTUB_OSSL_INDICATOR_set_callback(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  OSSL_INDICATOR_CALLBACK * ___cb = (OSSL_INDICATOR_CALLBACK *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_INDICATOR_set_callback(_base, ___libctx, ___cb);
}

void LIB_OSSL_INDICATOR_get_callback(struct Library * _base, OSSL_LIB_CTX * ___libctx, OSSL_INDICATOR_CALLBACK ** ___cb);

void LIBSTUB_OSSL_INDICATOR_get_callback(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  OSSL_INDICATOR_CALLBACK ** ___cb = (OSSL_INDICATOR_CALLBACK **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_INDICATOR_get_callback(_base, ___libctx, ___cb);
}

int LIB_OPENSSL_strtoul(struct Library * _base, const char * ___str, char ** ___endptr, int ___base, unsigned long * ___num);

int LIBSTUB_OPENSSL_strtoul(void)
{
  const char * ___str = (const char *)REG_A0;
  char ** ___endptr = (char **)REG_A1;
  int ___base = (int)REG_D0;
  unsigned long * ___num = (unsigned long *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OPENSSL_strtoul(_base, ___str, ___endptr, ___base, ___num);
}

OSSL_BASIC_ATTR_CONSTRAINTS * LIB_d2i_OSSL_BASIC_ATTR_CONSTRAINTS(struct Library * _base, OSSL_BASIC_ATTR_CONSTRAINTS ** ___a, const unsigned char ** ___in, long ___len);

OSSL_BASIC_ATTR_CONSTRAINTS * LIBSTUB_d2i_OSSL_BASIC_ATTR_CONSTRAINTS(void)
{
  OSSL_BASIC_ATTR_CONSTRAINTS ** ___a = (OSSL_BASIC_ATTR_CONSTRAINTS **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_BASIC_ATTR_CONSTRAINTS(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_BASIC_ATTR_CONSTRAINTS(struct Library * _base, const OSSL_BASIC_ATTR_CONSTRAINTS * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_BASIC_ATTR_CONSTRAINTS(void)
{
  const OSSL_BASIC_ATTR_CONSTRAINTS * ___a = (const OSSL_BASIC_ATTR_CONSTRAINTS *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_BASIC_ATTR_CONSTRAINTS(_base, ___a, ___out);
}

void LIB_OSSL_BASIC_ATTR_CONSTRAINTS_free(struct Library * _base, OSSL_BASIC_ATTR_CONSTRAINTS * ___a);

void LIBSTUB_OSSL_BASIC_ATTR_CONSTRAINTS_free(void)
{
  OSSL_BASIC_ATTR_CONSTRAINTS * ___a = (OSSL_BASIC_ATTR_CONSTRAINTS *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_BASIC_ATTR_CONSTRAINTS_free(_base, ___a);
}

OSSL_BASIC_ATTR_CONSTRAINTS * LIB_OSSL_BASIC_ATTR_CONSTRAINTS_new(struct Library * _base);

OSSL_BASIC_ATTR_CONSTRAINTS * LIBSTUB_OSSL_BASIC_ATTR_CONSTRAINTS_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_BASIC_ATTR_CONSTRAINTS_new(_base);
}

const ASN1_ITEM * LIB_OSSL_BASIC_ATTR_CONSTRAINTS_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_BASIC_ATTR_CONSTRAINTS_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_BASIC_ATTR_CONSTRAINTS_it(_base);
}

const OSSL_PARAM * LIB_EVP_KEYMGMT_gen_gettable_params(struct Library * _base, const EVP_KEYMGMT * ___keymgmt);

const OSSL_PARAM * LIBSTUB_EVP_KEYMGMT_gen_gettable_params(void)
{
  const EVP_KEYMGMT * ___keymgmt = (const EVP_KEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_KEYMGMT_gen_gettable_params(_base, ___keymgmt);
}

int LIB_EVP_PKEY_CTX_set_signature(struct Library * _base, EVP_PKEY_CTX * ___pctx, const unsigned char * ___sig, size_t ___siglen);

int LIBSTUB_EVP_PKEY_CTX_set_signature(void)
{
  EVP_PKEY_CTX * ___pctx = (EVP_PKEY_CTX *)REG_A0;
  const unsigned char * ___sig = (const unsigned char *)REG_A1;
  size_t ___siglen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_signature(_base, ___pctx, ___sig, ___siglen);
}

int LIB_EVP_PKEY_sign_init_ex2(struct Library * _base, EVP_PKEY_CTX * ___ctx, EVP_SIGNATURE * ___algo, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_sign_init_ex2(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  EVP_SIGNATURE * ___algo = (EVP_SIGNATURE *)REG_A1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_sign_init_ex2(_base, ___ctx, ___algo, ___params);
}

int LIB_EVP_PKEY_sign_message_init(struct Library * _base, EVP_PKEY_CTX * ___ctx, EVP_SIGNATURE * ___algo, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_sign_message_init(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  EVP_SIGNATURE * ___algo = (EVP_SIGNATURE *)REG_A1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_sign_message_init(_base, ___ctx, ___algo, ___params);
}

int LIB_EVP_PKEY_sign_message_update(struct Library * _base, EVP_PKEY_CTX * ___ctx, const unsigned char * ___in, size_t ___inlen);

int LIBSTUB_EVP_PKEY_sign_message_update(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const unsigned char * ___in = (const unsigned char *)REG_A1;
  size_t ___inlen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_sign_message_update(_base, ___ctx, ___in, ___inlen);
}

int LIB_EVP_PKEY_sign_message_final(struct Library * _base, EVP_PKEY_CTX * ___ctx, unsigned char * ___sig, size_t * ___siglen);

int LIBSTUB_EVP_PKEY_sign_message_final(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  unsigned char * ___sig = (unsigned char *)REG_A1;
  size_t * ___siglen = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_sign_message_final(_base, ___ctx, ___sig, ___siglen);
}

int LIB_EVP_PKEY_verify_init_ex2(struct Library * _base, EVP_PKEY_CTX * ___ctx, EVP_SIGNATURE * ___algo, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_verify_init_ex2(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  EVP_SIGNATURE * ___algo = (EVP_SIGNATURE *)REG_A1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_verify_init_ex2(_base, ___ctx, ___algo, ___params);
}

int LIB_EVP_PKEY_verify_message_init(struct Library * _base, EVP_PKEY_CTX * ___ctx, EVP_SIGNATURE * ___algo, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_verify_message_init(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  EVP_SIGNATURE * ___algo = (EVP_SIGNATURE *)REG_A1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_verify_message_init(_base, ___ctx, ___algo, ___params);
}

int LIB_EVP_PKEY_verify_message_update(struct Library * _base, EVP_PKEY_CTX * ___ctx, const unsigned char * ___in, size_t ___inlen);

int LIBSTUB_EVP_PKEY_verify_message_update(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const unsigned char * ___in = (const unsigned char *)REG_A1;
  size_t ___inlen = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_verify_message_update(_base, ___ctx, ___in, ___inlen);
}

int LIB_EVP_PKEY_verify_message_final(struct Library * _base, EVP_PKEY_CTX * ___ctx);

int LIBSTUB_EVP_PKEY_verify_message_final(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_verify_message_final(_base, ___ctx);
}

int LIB_EVP_PKEY_verify_recover_init_ex2(struct Library * _base, EVP_PKEY_CTX * ___ctx, EVP_SIGNATURE * ___algo, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_PKEY_verify_recover_init_ex2(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  EVP_SIGNATURE * ___algo = (EVP_SIGNATURE *)REG_A1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_verify_recover_init_ex2(_base, ___ctx, ___algo, ___params);
}

int LIB_EVP_MD_xof(struct Library * _base, const EVP_MD * ___md);

int LIBSTUB_EVP_MD_xof(void)
{
  const EVP_MD * ___md = (const EVP_MD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_xof(_base, ___md);
}

int LIB_EVP_MD_CTX_get_size_ex(struct Library * _base, const EVP_MD_CTX * ___ctx);

int LIBSTUB_EVP_MD_CTX_get_size_ex(void)
{
  const EVP_MD_CTX * ___ctx = (const EVP_MD_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MD_CTX_get_size_ex(_base, ___ctx);
}

int LIB_EVP_CIPHER_CTX_set_algor_params(struct Library * _base, EVP_CIPHER_CTX * ___ctx, const X509_ALGOR * ___alg);

int LIBSTUB_EVP_CIPHER_CTX_set_algor_params(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  const X509_ALGOR * ___alg = (const X509_ALGOR *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_set_algor_params(_base, ___ctx, ___alg);
}

int LIB_EVP_CIPHER_CTX_get_algor_params(struct Library * _base, EVP_CIPHER_CTX * ___ctx, X509_ALGOR * ___alg);

int LIBSTUB_EVP_CIPHER_CTX_get_algor_params(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  X509_ALGOR * ___alg = (X509_ALGOR *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_get_algor_params(_base, ___ctx, ___alg);
}

int LIB_EVP_CIPHER_CTX_get_algor(struct Library * _base, EVP_CIPHER_CTX * ___ctx, X509_ALGOR ** ___alg);

int LIBSTUB_EVP_CIPHER_CTX_get_algor(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  X509_ALGOR ** ___alg = (X509_ALGOR **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_CTX_get_algor(_base, ___ctx, ___alg);
}

int LIB_EVP_PKEY_CTX_set_algor_params(struct Library * _base, EVP_PKEY_CTX * ___ctx, const X509_ALGOR * ___alg);

int LIBSTUB_EVP_PKEY_CTX_set_algor_params(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  const X509_ALGOR * ___alg = (const X509_ALGOR *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_set_algor_params(_base, ___ctx, ___alg);
}

int LIB_EVP_PKEY_CTX_get_algor_params(struct Library * _base, EVP_PKEY_CTX * ___ctx, X509_ALGOR * ___alg);

int LIBSTUB_EVP_PKEY_CTX_get_algor_params(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  X509_ALGOR * ___alg = (X509_ALGOR *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_algor_params(_base, ___ctx, ___alg);
}

int LIB_EVP_PKEY_CTX_get_algor(struct Library * _base, EVP_PKEY_CTX * ___ctx, X509_ALGOR ** ___alg);

int LIBSTUB_EVP_PKEY_CTX_get_algor(void)
{
  EVP_PKEY_CTX * ___ctx = (EVP_PKEY_CTX *)REG_A0;
  X509_ALGOR ** ___alg = (X509_ALGOR **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_PKEY_CTX_get_algor(_base, ___ctx, ___alg);
}

X509_ACERT * LIB_d2i_X509_ACERT(struct Library * _base, X509_ACERT ** ___a, const unsigned char ** ___in, long ___len);

X509_ACERT * LIBSTUB_d2i_X509_ACERT(void)
{
  X509_ACERT ** ___a = (X509_ACERT **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_X509_ACERT(_base, ___a, ___in, ___len);
}

int LIB_i2d_X509_ACERT(struct Library * _base, const X509_ACERT * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_X509_ACERT(void)
{
  const X509_ACERT * ___a = (const X509_ACERT *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_X509_ACERT(_base, ___a, ___out);
}

void LIB_X509_ACERT_free(struct Library * _base, X509_ACERT * ___a);

void LIBSTUB_X509_ACERT_free(void)
{
  X509_ACERT * ___a = (X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_free(_base, ___a);
}

X509_ACERT * LIB_X509_ACERT_new(struct Library * _base);

X509_ACERT * LIBSTUB_X509_ACERT_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_new(_base);
}

const ASN1_ITEM * LIB_X509_ACERT_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_X509_ACERT_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_it(_base);
}

X509_ACERT * LIB_X509_ACERT_dup(struct Library * _base, const X509_ACERT * ___a);

X509_ACERT * LIBSTUB_X509_ACERT_dup(void)
{
  const X509_ACERT * ___a = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_dup(_base, ___a);
}

const ASN1_ITEM * LIB_X509_ACERT_INFO_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_X509_ACERT_INFO_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_INFO_it(_base);
}

void LIB_X509_ACERT_INFO_free(struct Library * _base, X509_ACERT_INFO * ___a);

void LIBSTUB_X509_ACERT_INFO_free(void)
{
  X509_ACERT_INFO * ___a = (X509_ACERT_INFO *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_INFO_free(_base, ___a);
}

X509_ACERT_INFO * LIB_X509_ACERT_INFO_new(struct Library * _base);

X509_ACERT_INFO * LIBSTUB_X509_ACERT_INFO_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_INFO_new(_base);
}

void LIB_OSSL_OBJECT_DIGEST_INFO_free(struct Library * _base, OSSL_OBJECT_DIGEST_INFO * ___a);

void LIBSTUB_OSSL_OBJECT_DIGEST_INFO_free(void)
{
  OSSL_OBJECT_DIGEST_INFO * ___a = (OSSL_OBJECT_DIGEST_INFO *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_OBJECT_DIGEST_INFO_free(_base, ___a);
}

OSSL_OBJECT_DIGEST_INFO * LIB_OSSL_OBJECT_DIGEST_INFO_new(struct Library * _base);

OSSL_OBJECT_DIGEST_INFO * LIBSTUB_OSSL_OBJECT_DIGEST_INFO_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_OBJECT_DIGEST_INFO_new(_base);
}

void LIB_OSSL_ISSUER_SERIAL_free(struct Library * _base, OSSL_ISSUER_SERIAL * ___a);

void LIBSTUB_OSSL_ISSUER_SERIAL_free(void)
{
  OSSL_ISSUER_SERIAL * ___a = (OSSL_ISSUER_SERIAL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ISSUER_SERIAL_free(_base, ___a);
}

OSSL_ISSUER_SERIAL * LIB_OSSL_ISSUER_SERIAL_new(struct Library * _base);

OSSL_ISSUER_SERIAL * LIBSTUB_OSSL_ISSUER_SERIAL_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ISSUER_SERIAL_new(_base);
}

void LIB_X509_ACERT_ISSUER_V2FORM_free(struct Library * _base, X509_ACERT_ISSUER_V2FORM * ___a);

void LIBSTUB_X509_ACERT_ISSUER_V2FORM_free(void)
{
  X509_ACERT_ISSUER_V2FORM * ___a = (X509_ACERT_ISSUER_V2FORM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_ISSUER_V2FORM_free(_base, ___a);
}

X509_ACERT_ISSUER_V2FORM * LIB_X509_ACERT_ISSUER_V2FORM_new(struct Library * _base);

X509_ACERT_ISSUER_V2FORM * LIBSTUB_X509_ACERT_ISSUER_V2FORM_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_ISSUER_V2FORM_new(_base);
}

X509_ACERT * LIB_PEM_read_bio_X509_ACERT(struct Library * _base, BIO * ___out, X509_ACERT ** ___x, pem_password_cb * ___cb, void * ___u);

X509_ACERT * LIBSTUB_PEM_read_bio_X509_ACERT(void)
{
  BIO * ___out = (BIO *)REG_A0;
  X509_ACERT ** ___x = (X509_ACERT **)REG_A1;
  pem_password_cb * ___cb = (pem_password_cb *)REG_A2;
  void * ___u = (void *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PEM_read_bio_X509_ACERT(_base, ___out, ___x, ___cb, ___u);
}

int LIB_PEM_write_bio_X509_ACERT(struct Library * _base, BIO * ___out, const X509_ACERT * ___x);

int LIBSTUB_PEM_write_bio_X509_ACERT(void)
{
  BIO * ___out = (BIO *)REG_A0;
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PEM_write_bio_X509_ACERT(_base, ___out, ___x);
}

X509_ACERT * LIB_d2i_X509_ACERT_bio(struct Library * _base, BIO * ___bp, X509_ACERT ** ___acert);

X509_ACERT * LIBSTUB_d2i_X509_ACERT_bio(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  X509_ACERT ** ___acert = (X509_ACERT **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_X509_ACERT_bio(_base, ___bp, ___acert);
}

int LIB_i2d_X509_ACERT_bio(struct Library * _base, BIO * ___bp, const X509_ACERT * ___acert);

int LIBSTUB_i2d_X509_ACERT_bio(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  const X509_ACERT * ___acert = (const X509_ACERT *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_X509_ACERT_bio(_base, ___bp, ___acert);
}

const GENERAL_NAMES * LIB_X509_ACERT_get0_holder_entityName(struct Library * _base, const X509_ACERT * ___x);

const GENERAL_NAMES * LIBSTUB_X509_ACERT_get0_holder_entityName(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get0_holder_entityName(_base, ___x);
}

const OSSL_ISSUER_SERIAL * LIB_X509_ACERT_get0_holder_baseCertId(struct Library * _base, const X509_ACERT * ___x);

const OSSL_ISSUER_SERIAL * LIBSTUB_X509_ACERT_get0_holder_baseCertId(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get0_holder_baseCertId(_base, ___x);
}

const OSSL_OBJECT_DIGEST_INFO * LIB_X509_ACERT_get0_holder_digest(struct Library * _base, const X509_ACERT * ___x);

const OSSL_OBJECT_DIGEST_INFO * LIBSTUB_X509_ACERT_get0_holder_digest(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get0_holder_digest(_base, ___x);
}

const X509_NAME * LIB_X509_ACERT_get0_issuerName(struct Library * _base, const X509_ACERT * ___x);

const X509_NAME * LIBSTUB_X509_ACERT_get0_issuerName(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get0_issuerName(_base, ___x);
}

long LIB_X509_ACERT_get_version(struct Library * _base, const X509_ACERT * ___x);

long LIBSTUB_X509_ACERT_get_version(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get_version(_base, ___x);
}

void LIB_X509_ACERT_get0_signature(struct Library * _base, const X509_ACERT * ___x, const ASN1_BIT_STRING ** ___psig, const X509_ALGOR ** ___palg);

void LIBSTUB_X509_ACERT_get0_signature(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  const ASN1_BIT_STRING ** ___psig = (const ASN1_BIT_STRING **)REG_A1;
  const X509_ALGOR ** ___palg = (const X509_ALGOR **)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get0_signature(_base, ___x, ___psig, ___palg);
}

int LIB_X509_ACERT_get_signature_nid(struct Library * _base, const X509_ACERT * ___x);

int LIBSTUB_X509_ACERT_get_signature_nid(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get_signature_nid(_base, ___x);
}

const X509_ALGOR * LIB_X509_ACERT_get0_info_sigalg(struct Library * _base, const X509_ACERT * ___x);

const X509_ALGOR * LIBSTUB_X509_ACERT_get0_info_sigalg(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get0_info_sigalg(_base, ___x);
}

const ASN1_INTEGER * LIB_X509_ACERT_get0_serialNumber(struct Library * _base, const X509_ACERT * ___x);

const ASN1_INTEGER * LIBSTUB_X509_ACERT_get0_serialNumber(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get0_serialNumber(_base, ___x);
}

const ASN1_TIME * LIB_X509_ACERT_get0_notBefore(struct Library * _base, const X509_ACERT * ___x);

const ASN1_TIME * LIBSTUB_X509_ACERT_get0_notBefore(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get0_notBefore(_base, ___x);
}

const ASN1_TIME * LIB_X509_ACERT_get0_notAfter(struct Library * _base, const X509_ACERT * ___x);

const ASN1_TIME * LIBSTUB_X509_ACERT_get0_notAfter(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get0_notAfter(_base, ___x);
}

const ASN1_BIT_STRING * LIB_X509_ACERT_get0_issuerUID(struct Library * _base, const X509_ACERT * ___x);

const ASN1_BIT_STRING * LIBSTUB_X509_ACERT_get0_issuerUID(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get0_issuerUID(_base, ___x);
}

int LIB_X509_ACERT_set_version(struct Library * _base, X509_ACERT * ___x, long ___version);

int LIBSTUB_X509_ACERT_set_version(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  long ___version = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_set_version(_base, ___x, ___version);
}

void LIB_X509_ACERT_set0_holder_entityName(struct Library * _base, X509_ACERT * ___x, GENERAL_NAMES * ___name);

void LIBSTUB_X509_ACERT_set0_holder_entityName(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  GENERAL_NAMES * ___name = (GENERAL_NAMES *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_set0_holder_entityName(_base, ___x, ___name);
}

void LIB_X509_ACERT_set0_holder_baseCertId(struct Library * _base, X509_ACERT * ___x, OSSL_ISSUER_SERIAL * ___isss);

void LIBSTUB_X509_ACERT_set0_holder_baseCertId(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  OSSL_ISSUER_SERIAL * ___isss = (OSSL_ISSUER_SERIAL *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_set0_holder_baseCertId(_base, ___x, ___isss);
}

void LIB_X509_ACERT_set0_holder_digest(struct Library * _base, X509_ACERT * ___x, OSSL_OBJECT_DIGEST_INFO * ___dinfo);

void LIBSTUB_X509_ACERT_set0_holder_digest(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  OSSL_OBJECT_DIGEST_INFO * ___dinfo = (OSSL_OBJECT_DIGEST_INFO *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_set0_holder_digest(_base, ___x, ___dinfo);
}

int LIB_X509_ACERT_set1_issuerName(struct Library * _base, X509_ACERT * ___x, const X509_NAME * ___name);

int LIBSTUB_X509_ACERT_set1_issuerName(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  const X509_NAME * ___name = (const X509_NAME *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_set1_issuerName(_base, ___x, ___name);
}

int LIB_X509_ACERT_set1_serialNumber(struct Library * _base, X509_ACERT * ___x, const ASN1_INTEGER * ___serial);

int LIBSTUB_X509_ACERT_set1_serialNumber(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  const ASN1_INTEGER * ___serial = (const ASN1_INTEGER *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_set1_serialNumber(_base, ___x, ___serial);
}

int LIB_X509_ACERT_set1_notBefore(struct Library * _base, X509_ACERT * ___x, const ASN1_GENERALIZEDTIME * ___time);

int LIBSTUB_X509_ACERT_set1_notBefore(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  const ASN1_GENERALIZEDTIME * ___time = (const ASN1_GENERALIZEDTIME *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_set1_notBefore(_base, ___x, ___time);
}

int LIB_X509_ACERT_set1_notAfter(struct Library * _base, X509_ACERT * ___x, const ASN1_GENERALIZEDTIME * ___time);

int LIBSTUB_X509_ACERT_set1_notAfter(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  const ASN1_GENERALIZEDTIME * ___time = (const ASN1_GENERALIZEDTIME *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_set1_notAfter(_base, ___x, ___time);
}

void LIB_OSSL_OBJECT_DIGEST_INFO_get0_digest(struct Library * _base, const OSSL_OBJECT_DIGEST_INFO * ___o, int * ___digestedObjectType, const X509_ALGOR ** ___digestAlgorithm, const ASN1_BIT_STRING ** ___digest);

void LIBSTUB_OSSL_OBJECT_DIGEST_INFO_get0_digest(void)
{
  const OSSL_OBJECT_DIGEST_INFO * ___o = (const OSSL_OBJECT_DIGEST_INFO *)REG_A0;
  int * ___digestedObjectType = (int *)REG_A1;
  const X509_ALGOR ** ___digestAlgorithm = (const X509_ALGOR **)REG_A2;
  const ASN1_BIT_STRING ** ___digest = (const ASN1_BIT_STRING **)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_OBJECT_DIGEST_INFO_get0_digest(_base, ___o, ___digestedObjectType, ___digestAlgorithm, ___digest);
}

int LIB_OSSL_OBJECT_DIGEST_INFO_set1_digest(struct Library * _base, OSSL_OBJECT_DIGEST_INFO * ___o, int ___digestedObjectType, X509_ALGOR * ___digestAlgorithm, ASN1_BIT_STRING * ___digest);

int LIBSTUB_OSSL_OBJECT_DIGEST_INFO_set1_digest(void)
{
  OSSL_OBJECT_DIGEST_INFO * ___o = (OSSL_OBJECT_DIGEST_INFO *)REG_A0;
  int ___digestedObjectType = (int)REG_D0;
  X509_ALGOR * ___digestAlgorithm = (X509_ALGOR *)REG_A1;
  ASN1_BIT_STRING * ___digest = (ASN1_BIT_STRING *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_OBJECT_DIGEST_INFO_set1_digest(_base, ___o, ___digestedObjectType, ___digestAlgorithm, ___digest);
}

const X509_NAME * LIB_OSSL_ISSUER_SERIAL_get0_issuer(struct Library * _base, const OSSL_ISSUER_SERIAL * ___isss);

const X509_NAME * LIBSTUB_OSSL_ISSUER_SERIAL_get0_issuer(void)
{
  const OSSL_ISSUER_SERIAL * ___isss = (const OSSL_ISSUER_SERIAL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ISSUER_SERIAL_get0_issuer(_base, ___isss);
}

const ASN1_INTEGER * LIB_OSSL_ISSUER_SERIAL_get0_serial(struct Library * _base, const OSSL_ISSUER_SERIAL * ___isss);

const ASN1_INTEGER * LIBSTUB_OSSL_ISSUER_SERIAL_get0_serial(void)
{
  const OSSL_ISSUER_SERIAL * ___isss = (const OSSL_ISSUER_SERIAL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ISSUER_SERIAL_get0_serial(_base, ___isss);
}

const ASN1_BIT_STRING * LIB_OSSL_ISSUER_SERIAL_get0_issuerUID(struct Library * _base, const OSSL_ISSUER_SERIAL * ___isss);

const ASN1_BIT_STRING * LIBSTUB_OSSL_ISSUER_SERIAL_get0_issuerUID(void)
{
  const OSSL_ISSUER_SERIAL * ___isss = (const OSSL_ISSUER_SERIAL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ISSUER_SERIAL_get0_issuerUID(_base, ___isss);
}

int LIB_OSSL_ISSUER_SERIAL_set1_issuer(struct Library * _base, OSSL_ISSUER_SERIAL * ___isss, const X509_NAME * ___issuer);

int LIBSTUB_OSSL_ISSUER_SERIAL_set1_issuer(void)
{
  OSSL_ISSUER_SERIAL * ___isss = (OSSL_ISSUER_SERIAL *)REG_A0;
  const X509_NAME * ___issuer = (const X509_NAME *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ISSUER_SERIAL_set1_issuer(_base, ___isss, ___issuer);
}

int LIB_OSSL_ISSUER_SERIAL_set1_serial(struct Library * _base, OSSL_ISSUER_SERIAL * ___isss, const ASN1_INTEGER * ___serial);

int LIBSTUB_OSSL_ISSUER_SERIAL_set1_serial(void)
{
  OSSL_ISSUER_SERIAL * ___isss = (OSSL_ISSUER_SERIAL *)REG_A0;
  const ASN1_INTEGER * ___serial = (const ASN1_INTEGER *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ISSUER_SERIAL_set1_serial(_base, ___isss, ___serial);
}

int LIB_OSSL_ISSUER_SERIAL_set1_issuerUID(struct Library * _base, OSSL_ISSUER_SERIAL * ___isss, const ASN1_BIT_STRING * ___uid);

int LIBSTUB_OSSL_ISSUER_SERIAL_set1_issuerUID(void)
{
  OSSL_ISSUER_SERIAL * ___isss = (OSSL_ISSUER_SERIAL *)REG_A0;
  const ASN1_BIT_STRING * ___uid = (const ASN1_BIT_STRING *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ISSUER_SERIAL_set1_issuerUID(_base, ___isss, ___uid);
}

int LIB_X509_ACERT_print(struct Library * _base, BIO * ___bp, X509_ACERT * ___x);

int LIBSTUB_X509_ACERT_print(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  X509_ACERT * ___x = (X509_ACERT *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_print(_base, ___bp, ___x);
}

int LIB_X509_ACERT_print_ex(struct Library * _base, BIO * ___bp, X509_ACERT * ___x, unsigned long ___nmflags, unsigned long ___cflag);

int LIBSTUB_X509_ACERT_print_ex(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  X509_ACERT * ___x = (X509_ACERT *)REG_A1;
  unsigned long ___nmflags = (unsigned long)REG_D0;
  unsigned long ___cflag = (unsigned long)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_print_ex(_base, ___bp, ___x, ___nmflags, ___cflag);
}

int LIB_X509_ACERT_get_attr_count(struct Library * _base, const X509_ACERT * ___x);

int LIBSTUB_X509_ACERT_get_attr_count(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get_attr_count(_base, ___x);
}

int LIB_X509_ACERT_get_attr_by_NID(struct Library * _base, const X509_ACERT * ___x, int ___nid, int ___lastpos);

int LIBSTUB_X509_ACERT_get_attr_by_NID(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  int ___nid = (int)REG_D0;
  int ___lastpos = (int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get_attr_by_NID(_base, ___x, ___nid, ___lastpos);
}

int LIB_X509_ACERT_get_attr_by_OBJ(struct Library * _base, const X509_ACERT * ___x, const ASN1_OBJECT * ___obj, int ___lastpos);

int LIBSTUB_X509_ACERT_get_attr_by_OBJ(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  const ASN1_OBJECT * ___obj = (const ASN1_OBJECT *)REG_A1;
  int ___lastpos = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get_attr_by_OBJ(_base, ___x, ___obj, ___lastpos);
}

X509_ATTRIBUTE * LIB_X509_ACERT_get_attr(struct Library * _base, const X509_ACERT * ___x, int ___loc);

X509_ATTRIBUTE * LIBSTUB_X509_ACERT_get_attr(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  int ___loc = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get_attr(_base, ___x, ___loc);
}

X509_ATTRIBUTE * LIB_X509_ACERT_delete_attr(struct Library * _base, X509_ACERT * ___x, int ___loc);

X509_ATTRIBUTE * LIBSTUB_X509_ACERT_delete_attr(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  int ___loc = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_delete_attr(_base, ___x, ___loc);
}

int LIB_X509_ACERT_add1_attr(struct Library * _base, X509_ACERT * ___x, X509_ATTRIBUTE * ___attr);

int LIBSTUB_X509_ACERT_add1_attr(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  X509_ATTRIBUTE * ___attr = (X509_ATTRIBUTE *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_add1_attr(_base, ___x, ___attr);
}

int LIB_X509_ACERT_add1_attr_by_OBJ(struct Library * _base, X509_ACERT * ___x, const ASN1_OBJECT * ___obj, int ___type, const void * ___bytes, int ___len);

int LIBSTUB_X509_ACERT_add1_attr_by_OBJ(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  const ASN1_OBJECT * ___obj = (const ASN1_OBJECT *)REG_A1;
  int ___type = (int)REG_D0;
  const void * ___bytes = (const void *)REG_A2;
  int ___len = (int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_add1_attr_by_OBJ(_base, ___x, ___obj, ___type, ___bytes, ___len);
}

int LIB_X509_ACERT_add1_attr_by_NID(struct Library * _base, X509_ACERT * ___x, int ___nid, int ___type, const void * ___bytes, int ___len);

int LIBSTUB_X509_ACERT_add1_attr_by_NID(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  int ___nid = (int)REG_D0;
  int ___type = (int)REG_D1;
  const void * ___bytes = (const void *)REG_A1;
  int ___len = (int)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_add1_attr_by_NID(_base, ___x, ___nid, ___type, ___bytes, ___len);
}

int LIB_X509_ACERT_add1_attr_by_txt(struct Library * _base, X509_ACERT * ___x, const char * ___attrname, int ___type, const unsigned char * ___bytes, int ___len);

int LIBSTUB_X509_ACERT_add1_attr_by_txt(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  const char * ___attrname = (const char *)REG_A1;
  int ___type = (int)REG_D0;
  const unsigned char * ___bytes = (const unsigned char *)REG_A2;
  int ___len = (int)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_add1_attr_by_txt(_base, ___x, ___attrname, ___type, ___bytes, ___len);
}

int LIB_X509_ACERT_sign(struct Library * _base, X509_ACERT * ___x, EVP_PKEY * ___pkey, const EVP_MD * ___md);

int LIBSTUB_X509_ACERT_sign(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A1;
  const EVP_MD * ___md = (const EVP_MD *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_sign(_base, ___x, ___pkey, ___md);
}

int LIB_X509_ACERT_sign_ctx(struct Library * _base, X509_ACERT * ___x, EVP_MD_CTX * ___ctx);

int LIBSTUB_X509_ACERT_sign_ctx(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  EVP_MD_CTX * ___ctx = (EVP_MD_CTX *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_sign_ctx(_base, ___x, ___ctx);
}

int LIB_X509_ACERT_verify(struct Library * _base, X509_ACERT * ___a, EVP_PKEY * ___r);

int LIBSTUB_X509_ACERT_verify(void)
{
  X509_ACERT * ___a = (X509_ACERT *)REG_A0;
  EVP_PKEY * ___r = (EVP_PKEY *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_verify(_base, ___a, ___r);
}

void * LIB_X509_ACERT_get_ext_d2i(struct Library * _base, const X509_ACERT * ___x, int ___nid, int * ___crit, int * ___idx);

void * LIBSTUB_X509_ACERT_get_ext_d2i(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  int ___nid = (int)REG_D0;
  int * ___crit = (int *)REG_A1;
  int * ___idx = (int *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get_ext_d2i(_base, ___x, ___nid, ___crit, ___idx);
}

int LIB_X509_ACERT_add1_ext_i2d(struct Library * _base, X509_ACERT * ___x, int ___nid, void * ___value, int ___crit, unsigned long ___flags);

int LIBSTUB_X509_ACERT_add1_ext_i2d(void)
{
  X509_ACERT * ___x = (X509_ACERT *)REG_A0;
  int ___nid = (int)REG_D0;
  void * ___value = (void *)REG_A1;
  int ___crit = (int)REG_D1;
  unsigned long ___flags = (unsigned long)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_add1_ext_i2d(_base, ___x, ___nid, ___value, ___crit, ___flags);
}

const struct stack_st_X509_EXTENSION * LIB_X509_ACERT_get0_extensions(struct Library * _base, const X509_ACERT * ___x);

const struct stack_st_X509_EXTENSION * LIBSTUB_X509_ACERT_get0_extensions(void)
{
  const X509_ACERT * ___x = (const X509_ACERT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_get0_extensions(_base, ___x);
}

const ASN1_ITEM * LIB_OSSL_IETF_ATTR_SYNTAX_VALUE_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_IETF_ATTR_SYNTAX_VALUE_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_IETF_ATTR_SYNTAX_VALUE_it(_base);
}

void LIB_OSSL_IETF_ATTR_SYNTAX_VALUE_free(struct Library * _base, OSSL_IETF_ATTR_SYNTAX_VALUE * ___a);

void LIBSTUB_OSSL_IETF_ATTR_SYNTAX_VALUE_free(void)
{
  OSSL_IETF_ATTR_SYNTAX_VALUE * ___a = (OSSL_IETF_ATTR_SYNTAX_VALUE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_IETF_ATTR_SYNTAX_VALUE_free(_base, ___a);
}

OSSL_IETF_ATTR_SYNTAX_VALUE * LIB_OSSL_IETF_ATTR_SYNTAX_VALUE_new(struct Library * _base);

OSSL_IETF_ATTR_SYNTAX_VALUE * LIBSTUB_OSSL_IETF_ATTR_SYNTAX_VALUE_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_IETF_ATTR_SYNTAX_VALUE_new(_base);
}

OSSL_IETF_ATTR_SYNTAX * LIB_d2i_OSSL_IETF_ATTR_SYNTAX(struct Library * _base, OSSL_IETF_ATTR_SYNTAX ** ___a, const unsigned char ** ___in, long ___len);

OSSL_IETF_ATTR_SYNTAX * LIBSTUB_d2i_OSSL_IETF_ATTR_SYNTAX(void)
{
  OSSL_IETF_ATTR_SYNTAX ** ___a = (OSSL_IETF_ATTR_SYNTAX **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_IETF_ATTR_SYNTAX(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_IETF_ATTR_SYNTAX(struct Library * _base, const OSSL_IETF_ATTR_SYNTAX * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_IETF_ATTR_SYNTAX(void)
{
  const OSSL_IETF_ATTR_SYNTAX * ___a = (const OSSL_IETF_ATTR_SYNTAX *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_IETF_ATTR_SYNTAX(_base, ___a, ___out);
}

void LIB_OSSL_IETF_ATTR_SYNTAX_free(struct Library * _base, OSSL_IETF_ATTR_SYNTAX * ___a);

void LIBSTUB_OSSL_IETF_ATTR_SYNTAX_free(void)
{
  OSSL_IETF_ATTR_SYNTAX * ___a = (OSSL_IETF_ATTR_SYNTAX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_IETF_ATTR_SYNTAX_free(_base, ___a);
}

OSSL_IETF_ATTR_SYNTAX * LIB_OSSL_IETF_ATTR_SYNTAX_new(struct Library * _base);

OSSL_IETF_ATTR_SYNTAX * LIBSTUB_OSSL_IETF_ATTR_SYNTAX_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_IETF_ATTR_SYNTAX_new(_base);
}

const ASN1_ITEM * LIB_OSSL_IETF_ATTR_SYNTAX_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_IETF_ATTR_SYNTAX_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_IETF_ATTR_SYNTAX_it(_base);
}

const GENERAL_NAMES * LIB_OSSL_IETF_ATTR_SYNTAX_get0_policyAuthority(struct Library * _base, const OSSL_IETF_ATTR_SYNTAX * ___a);

const GENERAL_NAMES * LIBSTUB_OSSL_IETF_ATTR_SYNTAX_get0_policyAuthority(void)
{
  const OSSL_IETF_ATTR_SYNTAX * ___a = (const OSSL_IETF_ATTR_SYNTAX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_IETF_ATTR_SYNTAX_get0_policyAuthority(_base, ___a);
}

void LIB_OSSL_IETF_ATTR_SYNTAX_set0_policyAuthority(struct Library * _base, OSSL_IETF_ATTR_SYNTAX * ___a, GENERAL_NAMES * ___names);

void LIBSTUB_OSSL_IETF_ATTR_SYNTAX_set0_policyAuthority(void)
{
  OSSL_IETF_ATTR_SYNTAX * ___a = (OSSL_IETF_ATTR_SYNTAX *)REG_A0;
  GENERAL_NAMES * ___names = (GENERAL_NAMES *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_IETF_ATTR_SYNTAX_set0_policyAuthority(_base, ___a, ___names);
}

int LIB_OSSL_IETF_ATTR_SYNTAX_get_value_num(struct Library * _base, const OSSL_IETF_ATTR_SYNTAX * ___a);

int LIBSTUB_OSSL_IETF_ATTR_SYNTAX_get_value_num(void)
{
  const OSSL_IETF_ATTR_SYNTAX * ___a = (const OSSL_IETF_ATTR_SYNTAX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_IETF_ATTR_SYNTAX_get_value_num(_base, ___a);
}

void * LIB_OSSL_IETF_ATTR_SYNTAX_get0_value(struct Library * _base, const OSSL_IETF_ATTR_SYNTAX * ___a, int ___ind, int * ___type);

void * LIBSTUB_OSSL_IETF_ATTR_SYNTAX_get0_value(void)
{
  const OSSL_IETF_ATTR_SYNTAX * ___a = (const OSSL_IETF_ATTR_SYNTAX *)REG_A0;
  int ___ind = (int)REG_D0;
  int * ___type = (int *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_IETF_ATTR_SYNTAX_get0_value(_base, ___a, ___ind, ___type);
}

int LIB_OSSL_IETF_ATTR_SYNTAX_add1_value(struct Library * _base, OSSL_IETF_ATTR_SYNTAX * ___a, int ___type, void * ___data);

int LIBSTUB_OSSL_IETF_ATTR_SYNTAX_add1_value(void)
{
  OSSL_IETF_ATTR_SYNTAX * ___a = (OSSL_IETF_ATTR_SYNTAX *)REG_A0;
  int ___type = (int)REG_D0;
  void * ___data = (void *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_IETF_ATTR_SYNTAX_add1_value(_base, ___a, ___type, ___data);
}

int LIB_OSSL_IETF_ATTR_SYNTAX_print(struct Library * _base, BIO * ___bp, OSSL_IETF_ATTR_SYNTAX * ___a, int ___indent);

int LIBSTUB_OSSL_IETF_ATTR_SYNTAX_print(void)
{
  BIO * ___bp = (BIO *)REG_A0;
  OSSL_IETF_ATTR_SYNTAX * ___a = (OSSL_IETF_ATTR_SYNTAX *)REG_A1;
  int ___indent = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_IETF_ATTR_SYNTAX_print(_base, ___bp, ___a, ___indent);
}

int LIB_X509_ACERT_add_attr_nconf(struct Library * _base, CONF * ___conf, const char * ___section, X509_ACERT * ___acert);

int LIBSTUB_X509_ACERT_add_attr_nconf(void)
{
  CONF * ___conf = (CONF *)REG_A0;
  const char * ___section = (const char *)REG_A1;
  X509_ACERT * ___acert = (X509_ACERT *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_ACERT_add_attr_nconf(_base, ___conf, ___section, ___acert);
}

OSSL_TARGET * LIB_d2i_OSSL_TARGET(struct Library * _base, OSSL_TARGET ** ___a, const unsigned char ** ___in, long ___len);

OSSL_TARGET * LIBSTUB_d2i_OSSL_TARGET(void)
{
  OSSL_TARGET ** ___a = (OSSL_TARGET **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_TARGET(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_TARGET(struct Library * _base, const OSSL_TARGET * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_TARGET(void)
{
  const OSSL_TARGET * ___a = (const OSSL_TARGET *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_TARGET(_base, ___a, ___out);
}

void LIB_OSSL_TARGET_free(struct Library * _base, OSSL_TARGET * ___a);

void LIBSTUB_OSSL_TARGET_free(void)
{
  OSSL_TARGET * ___a = (OSSL_TARGET *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TARGET_free(_base, ___a);
}

OSSL_TARGET * LIB_OSSL_TARGET_new(struct Library * _base);

OSSL_TARGET * LIBSTUB_OSSL_TARGET_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TARGET_new(_base);
}

const ASN1_ITEM * LIB_OSSL_TARGET_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_TARGET_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TARGET_it(_base);
}

OSSL_TARGETS * LIB_d2i_OSSL_TARGETS(struct Library * _base, OSSL_TARGETS ** ___a, const unsigned char ** ___in, long ___len);

OSSL_TARGETS * LIBSTUB_d2i_OSSL_TARGETS(void)
{
  OSSL_TARGETS ** ___a = (OSSL_TARGETS **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_TARGETS(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_TARGETS(struct Library * _base, const OSSL_TARGETS * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_TARGETS(void)
{
  const OSSL_TARGETS * ___a = (const OSSL_TARGETS *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_TARGETS(_base, ___a, ___out);
}

void LIB_OSSL_TARGETS_free(struct Library * _base, OSSL_TARGETS * ___a);

void LIBSTUB_OSSL_TARGETS_free(void)
{
  OSSL_TARGETS * ___a = (OSSL_TARGETS *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TARGETS_free(_base, ___a);
}

OSSL_TARGETS * LIB_OSSL_TARGETS_new(struct Library * _base);

OSSL_TARGETS * LIBSTUB_OSSL_TARGETS_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TARGETS_new(_base);
}

const ASN1_ITEM * LIB_OSSL_TARGETS_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_TARGETS_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TARGETS_it(_base);
}

OSSL_TARGETING_INFORMATION * LIB_d2i_OSSL_TARGETING_INFORMATION(struct Library * _base, OSSL_TARGETING_INFORMATION ** ___a, const unsigned char ** ___in, long ___len);

OSSL_TARGETING_INFORMATION * LIBSTUB_d2i_OSSL_TARGETING_INFORMATION(void)
{
  OSSL_TARGETING_INFORMATION ** ___a = (OSSL_TARGETING_INFORMATION **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_TARGETING_INFORMATION(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_TARGETING_INFORMATION(struct Library * _base, const OSSL_TARGETING_INFORMATION * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_TARGETING_INFORMATION(void)
{
  const OSSL_TARGETING_INFORMATION * ___a = (const OSSL_TARGETING_INFORMATION *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_TARGETING_INFORMATION(_base, ___a, ___out);
}

void LIB_OSSL_TARGETING_INFORMATION_free(struct Library * _base, OSSL_TARGETING_INFORMATION * ___a);

void LIBSTUB_OSSL_TARGETING_INFORMATION_free(void)
{
  OSSL_TARGETING_INFORMATION * ___a = (OSSL_TARGETING_INFORMATION *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TARGETING_INFORMATION_free(_base, ___a);
}

OSSL_TARGETING_INFORMATION * LIB_OSSL_TARGETING_INFORMATION_new(struct Library * _base);

OSSL_TARGETING_INFORMATION * LIBSTUB_OSSL_TARGETING_INFORMATION_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TARGETING_INFORMATION_new(_base);
}

const ASN1_ITEM * LIB_OSSL_TARGETING_INFORMATION_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_TARGETING_INFORMATION_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TARGETING_INFORMATION_it(_base);
}

int LIB_SSL_set_quic_tls_cbs(struct Library * _base, SSL * ___s, const OSSL_DISPATCH * ___qtdis, void * ___arg);

int LIBSTUB_SSL_set_quic_tls_cbs(void)
{
  SSL * ___s = (SSL *)REG_A0;
  const OSSL_DISPATCH * ___qtdis = (const OSSL_DISPATCH *)REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set_quic_tls_cbs(_base, ___s, ___qtdis, ___arg);
}

int LIB_SSL_set_quic_tls_transport_params(struct Library * _base, SSL * ___s, const unsigned char * ___params, size_t ___params_len);

int LIBSTUB_SSL_set_quic_tls_transport_params(void)
{
  SSL * ___s = (SSL *)REG_A0;
  const unsigned char * ___params = (const unsigned char *)REG_A1;
  size_t ___params_len = (size_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set_quic_tls_transport_params(_base, ___s, ___params, ___params_len);
}

int LIB_SSL_set_quic_tls_early_data_enabled(struct Library * _base, SSL * ___s, int ___enabled);

int LIBSTUB_SSL_set_quic_tls_early_data_enabled(void)
{
  SSL * ___s = (SSL *)REG_A0;
  int ___enabled = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_set_quic_tls_early_data_enabled(_base, ___s, ___enabled);
}

const SSL_METHOD * LIB_OSSL_QUIC_server_method(struct Library * _base);

const SSL_METHOD * LIBSTUB_OSSL_QUIC_server_method(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_QUIC_server_method(_base);
}

int LIB_SSL_is_listener(struct Library * _base, SSL * ___ssl);

int LIBSTUB_SSL_is_listener(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_is_listener(_base, ___ssl);
}

SSL * LIB_SSL_get0_listener(struct Library * _base, SSL * ___s);

SSL * LIBSTUB_SSL_get0_listener(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get0_listener(_base, ___s);
}

SSL * LIB_SSL_new_listener(struct Library * _base, SSL_CTX * ___ctx, uint64_t ___flags);

SSL * LIBSTUB_SSL_new_listener(void)
{
  SSL_CTX * ___ctx = (SSL_CTX *)REG_A0;
  uint64_t ___flags = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_new_listener(_base, ___ctx, ___flags);
}

SSL * LIB_SSL_accept_connection(struct Library * _base, SSL * ___ssl, uint64_t ___flags);

SSL * LIBSTUB_SSL_accept_connection(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  uint64_t ___flags = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_accept_connection(_base, ___ssl, ___flags);
}

size_t LIB_SSL_get_accept_connection_queue_len(struct Library * _base, SSL * ___ssl);

size_t LIBSTUB_SSL_get_accept_connection_queue_len(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_accept_connection_queue_len(_base, ___ssl);
}

int LIB_SSL_listen(struct Library * _base, SSL * ___ssl);

int LIBSTUB_SSL_listen(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_listen(_base, ___ssl);
}

SSL * LIB_SSL_new_from_listener(struct Library * _base, SSL * ___ssl, uint64_t ___flags);

SSL * LIBSTUB_SSL_new_from_listener(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  uint64_t ___flags = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_new_from_listener(_base, ___ssl, ___flags);
}

SSL * LIB_SSL_new_listener_from(struct Library * _base, SSL * ___ssl, uint64_t ___flags);

SSL * LIBSTUB_SSL_new_listener_from(void)
{
  SSL * ___ssl = (SSL *)REG_A0;
  uint64_t ___flags = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_new_listener_from(_base, ___ssl, ___flags);
}

int LIB_SSL_is_domain(struct Library * _base, SSL * ___s);

int LIBSTUB_SSL_is_domain(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_is_domain(_base, ___s);
}

SSL * LIB_SSL_get0_domain(struct Library * _base, SSL * ___s);

SSL * LIBSTUB_SSL_get0_domain(void)
{
  SSL * ___s = (SSL *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get0_domain(_base, ___s);
}

SSL * LIB_SSL_new_domain(struct Library * _base, SSL_CTX * ___ctx, uint64_t ___flags);

SSL * LIBSTUB_SSL_new_domain(void)
{
  SSL_CTX * ___ctx = (SSL_CTX *)REG_A0;
  uint64_t ___flags = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_new_domain(_base, ___ctx, ___flags);
}

int LIB_SSL_CTX_set_domain_flags(struct Library * _base, SSL_CTX * ___ctx, uint64_t ___domain_flags);

int LIBSTUB_SSL_CTX_set_domain_flags(void)
{
  SSL_CTX * ___ctx = (SSL_CTX *)REG_A0;
  uint64_t ___domain_flags = (uint64_t)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_set_domain_flags(_base, ___ctx, ___domain_flags);
}

int LIB_SSL_CTX_get_domain_flags(struct Library * _base, const SSL_CTX * ___ctx, uint64_t * ___domain_flags);

int LIBSTUB_SSL_CTX_get_domain_flags(void)
{
  const SSL_CTX * ___ctx = (const SSL_CTX *)REG_A0;
  uint64_t * ___domain_flags = (uint64_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_get_domain_flags(_base, ___ctx, ___domain_flags);
}

int LIB_SSL_get_domain_flags(struct Library * _base, const SSL * ___ssl, uint64_t * ___domain_flags);

int LIBSTUB_SSL_get_domain_flags(void)
{
  const SSL * ___ssl = (const SSL *)REG_A0;
  uint64_t * ___domain_flags = (uint64_t *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_get_domain_flags(_base, ___ssl, ___domain_flags);
}

void LIB_SSL_CTX_set_new_pending_conn_cb(struct Library * _base, SSL_CTX * ___c, SSL_new_pending_conn_cb_fn ___cb, void * ___arg);

void LIBSTUB_SSL_CTX_set_new_pending_conn_cb(void)
{
  SSL_CTX * ___c = (SSL_CTX *)REG_A0;
  SSL_new_pending_conn_cb_fn ___cb = (SSL_new_pending_conn_cb_fn)REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_SSL_CTX_set_new_pending_conn_cb(_base, ___c, ___cb, ___arg);
}

int LIB_X509_VERIFY_PARAM_get_purpose(struct Library * _base, const X509_VERIFY_PARAM * ___param);

int LIBSTUB_X509_VERIFY_PARAM_get_purpose(void)
{
  const X509_VERIFY_PARAM * ___param = (const X509_VERIFY_PARAM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_VERIFY_PARAM_get_purpose(_base, ___param);
}

OSSL_CRMF_ENCRYPTEDKEY * LIB_d2i_OSSL_CRMF_ENCRYPTEDKEY(struct Library * _base, OSSL_CRMF_ENCRYPTEDKEY ** ___a, const unsigned char ** ___in, long ___len);

OSSL_CRMF_ENCRYPTEDKEY * LIBSTUB_d2i_OSSL_CRMF_ENCRYPTEDKEY(void)
{
  OSSL_CRMF_ENCRYPTEDKEY ** ___a = (OSSL_CRMF_ENCRYPTEDKEY **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_CRMF_ENCRYPTEDKEY(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_CRMF_ENCRYPTEDKEY(struct Library * _base, const OSSL_CRMF_ENCRYPTEDKEY * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_CRMF_ENCRYPTEDKEY(void)
{
  const OSSL_CRMF_ENCRYPTEDKEY * ___a = (const OSSL_CRMF_ENCRYPTEDKEY *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_CRMF_ENCRYPTEDKEY(_base, ___a, ___out);
}

void LIB_OSSL_CRMF_ENCRYPTEDKEY_free(struct Library * _base, OSSL_CRMF_ENCRYPTEDKEY * ___a);

void LIBSTUB_OSSL_CRMF_ENCRYPTEDKEY_free(void)
{
  OSSL_CRMF_ENCRYPTEDKEY * ___a = (OSSL_CRMF_ENCRYPTEDKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ENCRYPTEDKEY_free(_base, ___a);
}

OSSL_CRMF_ENCRYPTEDKEY * LIB_OSSL_CRMF_ENCRYPTEDKEY_new(struct Library * _base);

OSSL_CRMF_ENCRYPTEDKEY * LIBSTUB_OSSL_CRMF_ENCRYPTEDKEY_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ENCRYPTEDKEY_new(_base);
}

const ASN1_ITEM * LIB_OSSL_CRMF_ENCRYPTEDKEY_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_CRMF_ENCRYPTEDKEY_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ENCRYPTEDKEY_it(_base);
}

X509 * LIB_OSSL_CRMF_ENCRYPTEDKEY_get1_encCert(struct Library * _base, const OSSL_CRMF_ENCRYPTEDKEY * ___ecert, OSSL_LIB_CTX * ___libctx, const char * ___propq, EVP_PKEY * ___pkey, unsigned int ___flags);

X509 * LIBSTUB_OSSL_CRMF_ENCRYPTEDKEY_get1_encCert(void)
{
  const OSSL_CRMF_ENCRYPTEDKEY * ___ecert = (const OSSL_CRMF_ENCRYPTEDKEY *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A3;
  unsigned int ___flags = (unsigned int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ENCRYPTEDKEY_get1_encCert(_base, ___ecert, ___libctx, ___propq, ___pkey, ___flags);
}

unsigned char * LIB_OSSL_CRMF_ENCRYPTEDVALUE_decrypt(struct Library * _base, const OSSL_CRMF_ENCRYPTEDVALUE * ___enc, OSSL_LIB_CTX * ___libctx, const char * ___propq, EVP_PKEY * ___pkey, int * ___outlen);

unsigned char * LIBSTUB_OSSL_CRMF_ENCRYPTEDVALUE_decrypt(void)
{
  const OSSL_CRMF_ENCRYPTEDVALUE * ___enc = (const OSSL_CRMF_ENCRYPTEDVALUE *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  const char * ___propq = (const char *)REG_A2;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A3;
  int * ___outlen = (int *)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ENCRYPTEDVALUE_decrypt(_base, ___enc, ___libctx, ___propq, ___pkey, ___outlen);
}

EVP_PKEY * LIB_OSSL_CRMF_ENCRYPTEDKEY_get1_pkey(struct Library * _base, const OSSL_CRMF_ENCRYPTEDKEY * ___encryptedKey, X509_STORE * ___ts, STACK_OF(X509) * ___extra, EVP_PKEY * ___pkey, X509 * ___cert, ASN1_OCTET_STRING * ___secret, OSSL_LIB_CTX * ___libctx, const char * ___propq);

EVP_PKEY * LIBSTUB_OSSL_CRMF_ENCRYPTEDKEY_get1_pkey(void)
{
  const OSSL_CRMF_ENCRYPTEDKEY * ___encryptedKey = (const OSSL_CRMF_ENCRYPTEDKEY *)REG_A0;
  X509_STORE * ___ts = (X509_STORE *)REG_A1;
  STACK_OF(X509) * ___extra = (STACK_OF(X509) *)REG_A2;
  EVP_PKEY * ___pkey = (EVP_PKEY *)REG_A3;
  X509 * ___cert = (X509 *)REG_D0;
  ASN1_OCTET_STRING * ___secret = (ASN1_OCTET_STRING *)REG_D1;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_D2;
  const char * ___propq = (const char *)REG_D3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ENCRYPTEDKEY_get1_pkey(_base, ___encryptedKey, ___ts, ___extra, ___pkey, ___cert, ___secret, ___libctx, ___propq);
}

int LIB_OSSL_CRMF_MSG_centralkeygen_requested(struct Library * _base, const OSSL_CRMF_MSG * ___crm, const X509_REQ * ___p10cr);

int LIBSTUB_OSSL_CRMF_MSG_centralkeygen_requested(void)
{
  const OSSL_CRMF_MSG * ___crm = (const OSSL_CRMF_MSG *)REG_A0;
  const X509_REQ * ___p10cr = (const X509_REQ *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_MSG_centralkeygen_requested(_base, ___crm, ___p10cr);
}

CMS_EnvelopedData * LIB_CMS_EnvelopedData_dup(struct Library * _base, const CMS_EnvelopedData * ___a);

CMS_EnvelopedData * LIBSTUB_CMS_EnvelopedData_dup(void)
{
  const CMS_EnvelopedData * ___a = (const CMS_EnvelopedData *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_CMS_EnvelopedData_dup(_base, ___a);
}

OSSL_CRMF_ENCRYPTEDKEY * LIB_OSSL_CRMF_ENCRYPTEDKEY_init_envdata(struct Library * _base, CMS_EnvelopedData * ___envdata);

OSSL_CRMF_ENCRYPTEDKEY * LIBSTUB_OSSL_CRMF_ENCRYPTEDKEY_init_envdata(void)
{
  CMS_EnvelopedData * ___envdata = (CMS_EnvelopedData *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_CRMF_ENCRYPTEDKEY_init_envdata(_base, ___envdata);
}

char * LIB_EVP_get1_default_properties(struct Library * _base, OSSL_LIB_CTX * ___libctx);

char * LIBSTUB_EVP_get1_default_properties(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_get1_default_properties(_base, ___libctx);
}

int LIB_RAND_set1_random_provider(struct Library * _base, OSSL_LIB_CTX * ___ctx, OSSL_PROVIDER * ___p);

int LIBSTUB_RAND_set1_random_provider(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  OSSL_PROVIDER * ___p = (OSSL_PROVIDER *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_RAND_set1_random_provider(_base, ___ctx, ___p);
}

int LIB_X509_PURPOSE_get_unused_id(struct Library * _base, OSSL_LIB_CTX * ___libctx);

int LIBSTUB_X509_PURPOSE_get_unused_id(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_X509_PURPOSE_get_unused_id(_base, ___libctx);
}

OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX * LIB_d2i_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(struct Library * _base, OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX ** ___a, const unsigned char ** ___in, long ___len);

OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX * LIBSTUB_d2i_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(void)
{
  OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX ** ___a = (OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(struct Library * _base, const OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(void)
{
  const OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX * ___a = (const OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX(_base, ___a, ___out);
}

void LIB_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_free(struct Library * _base, OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX * ___a);

void LIBSTUB_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_free(void)
{
  OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX * ___a = (OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_free(_base, ___a);
}

OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX * LIB_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_new(struct Library * _base);

OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX * LIBSTUB_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_new(_base);
}

const ASN1_ITEM * LIB_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_AUTHORITY_ATTRIBUTE_ID_SYNTAX_it(_base);
}

OSSL_ROLE_SPEC_CERT_ID * LIB_d2i_OSSL_ROLE_SPEC_CERT_ID(struct Library * _base, OSSL_ROLE_SPEC_CERT_ID ** ___a, const unsigned char ** ___in, long ___len);

OSSL_ROLE_SPEC_CERT_ID * LIBSTUB_d2i_OSSL_ROLE_SPEC_CERT_ID(void)
{
  OSSL_ROLE_SPEC_CERT_ID ** ___a = (OSSL_ROLE_SPEC_CERT_ID **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_ROLE_SPEC_CERT_ID(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_ROLE_SPEC_CERT_ID(struct Library * _base, const OSSL_ROLE_SPEC_CERT_ID * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_ROLE_SPEC_CERT_ID(void)
{
  const OSSL_ROLE_SPEC_CERT_ID * ___a = (const OSSL_ROLE_SPEC_CERT_ID *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_ROLE_SPEC_CERT_ID(_base, ___a, ___out);
}

void LIB_OSSL_ROLE_SPEC_CERT_ID_free(struct Library * _base, OSSL_ROLE_SPEC_CERT_ID * ___a);

void LIBSTUB_OSSL_ROLE_SPEC_CERT_ID_free(void)
{
  OSSL_ROLE_SPEC_CERT_ID * ___a = (OSSL_ROLE_SPEC_CERT_ID *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ROLE_SPEC_CERT_ID_free(_base, ___a);
}

OSSL_ROLE_SPEC_CERT_ID * LIB_OSSL_ROLE_SPEC_CERT_ID_new(struct Library * _base);

OSSL_ROLE_SPEC_CERT_ID * LIBSTUB_OSSL_ROLE_SPEC_CERT_ID_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ROLE_SPEC_CERT_ID_new(_base);
}

const ASN1_ITEM * LIB_OSSL_ROLE_SPEC_CERT_ID_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_ROLE_SPEC_CERT_ID_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ROLE_SPEC_CERT_ID_it(_base);
}

OSSL_ROLE_SPEC_CERT_ID_SYNTAX * LIB_d2i_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(struct Library * _base, OSSL_ROLE_SPEC_CERT_ID_SYNTAX ** ___a, const unsigned char ** ___in, long ___len);

OSSL_ROLE_SPEC_CERT_ID_SYNTAX * LIBSTUB_d2i_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(void)
{
  OSSL_ROLE_SPEC_CERT_ID_SYNTAX ** ___a = (OSSL_ROLE_SPEC_CERT_ID_SYNTAX **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(struct Library * _base, const OSSL_ROLE_SPEC_CERT_ID_SYNTAX * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(void)
{
  const OSSL_ROLE_SPEC_CERT_ID_SYNTAX * ___a = (const OSSL_ROLE_SPEC_CERT_ID_SYNTAX *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_ROLE_SPEC_CERT_ID_SYNTAX(_base, ___a, ___out);
}

void LIB_OSSL_ROLE_SPEC_CERT_ID_SYNTAX_free(struct Library * _base, OSSL_ROLE_SPEC_CERT_ID_SYNTAX * ___a);

void LIBSTUB_OSSL_ROLE_SPEC_CERT_ID_SYNTAX_free(void)
{
  OSSL_ROLE_SPEC_CERT_ID_SYNTAX * ___a = (OSSL_ROLE_SPEC_CERT_ID_SYNTAX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ROLE_SPEC_CERT_ID_SYNTAX_free(_base, ___a);
}

OSSL_ROLE_SPEC_CERT_ID_SYNTAX * LIB_OSSL_ROLE_SPEC_CERT_ID_SYNTAX_new(struct Library * _base);

OSSL_ROLE_SPEC_CERT_ID_SYNTAX * LIBSTUB_OSSL_ROLE_SPEC_CERT_ID_SYNTAX_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ROLE_SPEC_CERT_ID_SYNTAX_new(_base);
}

const ASN1_ITEM * LIB_OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ROLE_SPEC_CERT_ID_SYNTAX_it(_base);
}

OSSL_ATTRIBUTE_DESCRIPTOR * LIB_d2i_OSSL_ATTRIBUTE_DESCRIPTOR(struct Library * _base, OSSL_ATTRIBUTE_DESCRIPTOR ** ___a, const unsigned char ** ___in, long ___len);

OSSL_ATTRIBUTE_DESCRIPTOR * LIBSTUB_d2i_OSSL_ATTRIBUTE_DESCRIPTOR(void)
{
  OSSL_ATTRIBUTE_DESCRIPTOR ** ___a = (OSSL_ATTRIBUTE_DESCRIPTOR **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_ATTRIBUTE_DESCRIPTOR(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_ATTRIBUTE_DESCRIPTOR(struct Library * _base, const OSSL_ATTRIBUTE_DESCRIPTOR * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_ATTRIBUTE_DESCRIPTOR(void)
{
  const OSSL_ATTRIBUTE_DESCRIPTOR * ___a = (const OSSL_ATTRIBUTE_DESCRIPTOR *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_ATTRIBUTE_DESCRIPTOR(_base, ___a, ___out);
}

void LIB_OSSL_ATTRIBUTE_DESCRIPTOR_free(struct Library * _base, OSSL_ATTRIBUTE_DESCRIPTOR * ___a);

void LIBSTUB_OSSL_ATTRIBUTE_DESCRIPTOR_free(void)
{
  OSSL_ATTRIBUTE_DESCRIPTOR * ___a = (OSSL_ATTRIBUTE_DESCRIPTOR *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_DESCRIPTOR_free(_base, ___a);
}

OSSL_ATTRIBUTE_DESCRIPTOR * LIB_OSSL_ATTRIBUTE_DESCRIPTOR_new(struct Library * _base);

OSSL_ATTRIBUTE_DESCRIPTOR * LIBSTUB_OSSL_ATTRIBUTE_DESCRIPTOR_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_DESCRIPTOR_new(_base);
}

const ASN1_ITEM * LIB_OSSL_ATTRIBUTE_DESCRIPTOR_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_ATTRIBUTE_DESCRIPTOR_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_DESCRIPTOR_it(_base);
}

const ASN1_ITEM * LIB_OSSL_HASH_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_HASH_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HASH_it(_base);
}

const ASN1_ITEM * LIB_OSSL_INFO_SYNTAX_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_INFO_SYNTAX_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_INFO_SYNTAX_it(_base);
}

const ASN1_ITEM * LIB_OSSL_INFO_SYNTAX_POINTER_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_INFO_SYNTAX_POINTER_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_INFO_SYNTAX_POINTER_it(_base);
}

const ASN1_ITEM * LIB_OSSL_PRIVILEGE_POLICY_ID_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_PRIVILEGE_POLICY_ID_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PRIVILEGE_POLICY_ID_it(_base);
}

OSSL_HASH * LIB_d2i_OSSL_HASH(struct Library * _base, OSSL_HASH ** ___a, const unsigned char ** ___in, long ___len);

OSSL_HASH * LIBSTUB_d2i_OSSL_HASH(void)
{
  OSSL_HASH ** ___a = (OSSL_HASH **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_HASH(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_HASH(struct Library * _base, const OSSL_HASH * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_HASH(void)
{
  const OSSL_HASH * ___a = (const OSSL_HASH *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_HASH(_base, ___a, ___out);
}

void LIB_OSSL_HASH_free(struct Library * _base, OSSL_HASH * ___a);

void LIBSTUB_OSSL_HASH_free(void)
{
  OSSL_HASH * ___a = (OSSL_HASH *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HASH_free(_base, ___a);
}

OSSL_HASH * LIB_OSSL_HASH_new(struct Library * _base);

OSSL_HASH * LIBSTUB_OSSL_HASH_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_HASH_new(_base);
}

OSSL_INFO_SYNTAX * LIB_d2i_OSSL_INFO_SYNTAX(struct Library * _base, OSSL_INFO_SYNTAX ** ___a, const unsigned char ** ___in, long ___len);

OSSL_INFO_SYNTAX * LIBSTUB_d2i_OSSL_INFO_SYNTAX(void)
{
  OSSL_INFO_SYNTAX ** ___a = (OSSL_INFO_SYNTAX **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_INFO_SYNTAX(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_INFO_SYNTAX(struct Library * _base, const OSSL_INFO_SYNTAX * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_INFO_SYNTAX(void)
{
  const OSSL_INFO_SYNTAX * ___a = (const OSSL_INFO_SYNTAX *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_INFO_SYNTAX(_base, ___a, ___out);
}

void LIB_OSSL_INFO_SYNTAX_free(struct Library * _base, OSSL_INFO_SYNTAX * ___a);

void LIBSTUB_OSSL_INFO_SYNTAX_free(void)
{
  OSSL_INFO_SYNTAX * ___a = (OSSL_INFO_SYNTAX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_INFO_SYNTAX_free(_base, ___a);
}

OSSL_INFO_SYNTAX * LIB_OSSL_INFO_SYNTAX_new(struct Library * _base);

OSSL_INFO_SYNTAX * LIBSTUB_OSSL_INFO_SYNTAX_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_INFO_SYNTAX_new(_base);
}

OSSL_INFO_SYNTAX_POINTER * LIB_d2i_OSSL_INFO_SYNTAX_POINTER(struct Library * _base, OSSL_INFO_SYNTAX_POINTER ** ___a, const unsigned char ** ___in, long ___len);

OSSL_INFO_SYNTAX_POINTER * LIBSTUB_d2i_OSSL_INFO_SYNTAX_POINTER(void)
{
  OSSL_INFO_SYNTAX_POINTER ** ___a = (OSSL_INFO_SYNTAX_POINTER **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_INFO_SYNTAX_POINTER(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_INFO_SYNTAX_POINTER(struct Library * _base, const OSSL_INFO_SYNTAX_POINTER * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_INFO_SYNTAX_POINTER(void)
{
  const OSSL_INFO_SYNTAX_POINTER * ___a = (const OSSL_INFO_SYNTAX_POINTER *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_INFO_SYNTAX_POINTER(_base, ___a, ___out);
}

void LIB_OSSL_INFO_SYNTAX_POINTER_free(struct Library * _base, OSSL_INFO_SYNTAX_POINTER * ___a);

void LIBSTUB_OSSL_INFO_SYNTAX_POINTER_free(void)
{
  OSSL_INFO_SYNTAX_POINTER * ___a = (OSSL_INFO_SYNTAX_POINTER *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_INFO_SYNTAX_POINTER_free(_base, ___a);
}

OSSL_INFO_SYNTAX_POINTER * LIB_OSSL_INFO_SYNTAX_POINTER_new(struct Library * _base);

OSSL_INFO_SYNTAX_POINTER * LIBSTUB_OSSL_INFO_SYNTAX_POINTER_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_INFO_SYNTAX_POINTER_new(_base);
}

OSSL_PRIVILEGE_POLICY_ID * LIB_d2i_OSSL_PRIVILEGE_POLICY_ID(struct Library * _base, OSSL_PRIVILEGE_POLICY_ID ** ___a, const unsigned char ** ___in, long ___len);

OSSL_PRIVILEGE_POLICY_ID * LIBSTUB_d2i_OSSL_PRIVILEGE_POLICY_ID(void)
{
  OSSL_PRIVILEGE_POLICY_ID ** ___a = (OSSL_PRIVILEGE_POLICY_ID **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_PRIVILEGE_POLICY_ID(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_PRIVILEGE_POLICY_ID(struct Library * _base, const OSSL_PRIVILEGE_POLICY_ID * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_PRIVILEGE_POLICY_ID(void)
{
  const OSSL_PRIVILEGE_POLICY_ID * ___a = (const OSSL_PRIVILEGE_POLICY_ID *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_PRIVILEGE_POLICY_ID(_base, ___a, ___out);
}

void LIB_OSSL_PRIVILEGE_POLICY_ID_free(struct Library * _base, OSSL_PRIVILEGE_POLICY_ID * ___a);

void LIBSTUB_OSSL_PRIVILEGE_POLICY_ID_free(void)
{
  OSSL_PRIVILEGE_POLICY_ID * ___a = (OSSL_PRIVILEGE_POLICY_ID *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PRIVILEGE_POLICY_ID_free(_base, ___a);
}

OSSL_PRIVILEGE_POLICY_ID * LIB_OSSL_PRIVILEGE_POLICY_ID_new(struct Library * _base);

OSSL_PRIVILEGE_POLICY_ID * LIBSTUB_OSSL_PRIVILEGE_POLICY_ID_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PRIVILEGE_POLICY_ID_new(_base);
}

int LIB_OSSL_PARAM_print_to_bio(struct Library * _base, const OSSL_PARAM * ___params, BIO * ___bio, int ___print_values);

int LIBSTUB_OSSL_PARAM_print_to_bio(void)
{
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A0;
  BIO * ___bio = (BIO *)REG_A1;
  int ___print_values = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PARAM_print_to_bio(_base, ___params, ___bio, ___print_values);
}

OSSL_DAY_TIME * LIB_d2i_OSSL_DAY_TIME(struct Library * _base, OSSL_DAY_TIME ** ___a, const unsigned char ** ___in, long ___len);

OSSL_DAY_TIME * LIBSTUB_d2i_OSSL_DAY_TIME(void)
{
  OSSL_DAY_TIME ** ___a = (OSSL_DAY_TIME **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_DAY_TIME(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_DAY_TIME(struct Library * _base, const OSSL_DAY_TIME * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_DAY_TIME(void)
{
  const OSSL_DAY_TIME * ___a = (const OSSL_DAY_TIME *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_DAY_TIME(_base, ___a, ___out);
}

void LIB_OSSL_DAY_TIME_free(struct Library * _base, OSSL_DAY_TIME * ___a);

void LIBSTUB_OSSL_DAY_TIME_free(void)
{
  OSSL_DAY_TIME * ___a = (OSSL_DAY_TIME *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DAY_TIME_free(_base, ___a);
}

OSSL_DAY_TIME * LIB_OSSL_DAY_TIME_new(struct Library * _base);

OSSL_DAY_TIME * LIBSTUB_OSSL_DAY_TIME_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DAY_TIME_new(_base);
}

const ASN1_ITEM * LIB_OSSL_DAY_TIME_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_DAY_TIME_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DAY_TIME_it(_base);
}

OSSL_DAY_TIME_BAND * LIB_d2i_OSSL_DAY_TIME_BAND(struct Library * _base, OSSL_DAY_TIME_BAND ** ___a, const unsigned char ** ___in, long ___len);

OSSL_DAY_TIME_BAND * LIBSTUB_d2i_OSSL_DAY_TIME_BAND(void)
{
  OSSL_DAY_TIME_BAND ** ___a = (OSSL_DAY_TIME_BAND **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_DAY_TIME_BAND(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_DAY_TIME_BAND(struct Library * _base, const OSSL_DAY_TIME_BAND * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_DAY_TIME_BAND(void)
{
  const OSSL_DAY_TIME_BAND * ___a = (const OSSL_DAY_TIME_BAND *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_DAY_TIME_BAND(_base, ___a, ___out);
}

void LIB_OSSL_DAY_TIME_BAND_free(struct Library * _base, OSSL_DAY_TIME_BAND * ___a);

void LIBSTUB_OSSL_DAY_TIME_BAND_free(void)
{
  OSSL_DAY_TIME_BAND * ___a = (OSSL_DAY_TIME_BAND *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DAY_TIME_BAND_free(_base, ___a);
}

OSSL_DAY_TIME_BAND * LIB_OSSL_DAY_TIME_BAND_new(struct Library * _base);

OSSL_DAY_TIME_BAND * LIBSTUB_OSSL_DAY_TIME_BAND_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DAY_TIME_BAND_new(_base);
}

const ASN1_ITEM * LIB_OSSL_DAY_TIME_BAND_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_DAY_TIME_BAND_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_DAY_TIME_BAND_it(_base);
}

OSSL_TIME_SPEC_DAY * LIB_d2i_OSSL_TIME_SPEC_DAY(struct Library * _base, OSSL_TIME_SPEC_DAY ** ___a, const unsigned char ** ___in, long ___len);

OSSL_TIME_SPEC_DAY * LIBSTUB_d2i_OSSL_TIME_SPEC_DAY(void)
{
  OSSL_TIME_SPEC_DAY ** ___a = (OSSL_TIME_SPEC_DAY **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_TIME_SPEC_DAY(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_TIME_SPEC_DAY(struct Library * _base, const OSSL_TIME_SPEC_DAY * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_TIME_SPEC_DAY(void)
{
  const OSSL_TIME_SPEC_DAY * ___a = (const OSSL_TIME_SPEC_DAY *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_TIME_SPEC_DAY(_base, ___a, ___out);
}

void LIB_OSSL_TIME_SPEC_DAY_free(struct Library * _base, OSSL_TIME_SPEC_DAY * ___a);

void LIBSTUB_OSSL_TIME_SPEC_DAY_free(void)
{
  OSSL_TIME_SPEC_DAY * ___a = (OSSL_TIME_SPEC_DAY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_DAY_free(_base, ___a);
}

OSSL_TIME_SPEC_DAY * LIB_OSSL_TIME_SPEC_DAY_new(struct Library * _base);

OSSL_TIME_SPEC_DAY * LIBSTUB_OSSL_TIME_SPEC_DAY_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_DAY_new(_base);
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_DAY_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_TIME_SPEC_DAY_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_DAY_it(_base);
}

OSSL_TIME_SPEC_WEEKS * LIB_d2i_OSSL_TIME_SPEC_WEEKS(struct Library * _base, OSSL_TIME_SPEC_WEEKS ** ___a, const unsigned char ** ___in, long ___len);

OSSL_TIME_SPEC_WEEKS * LIBSTUB_d2i_OSSL_TIME_SPEC_WEEKS(void)
{
  OSSL_TIME_SPEC_WEEKS ** ___a = (OSSL_TIME_SPEC_WEEKS **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_TIME_SPEC_WEEKS(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_TIME_SPEC_WEEKS(struct Library * _base, const OSSL_TIME_SPEC_WEEKS * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_TIME_SPEC_WEEKS(void)
{
  const OSSL_TIME_SPEC_WEEKS * ___a = (const OSSL_TIME_SPEC_WEEKS *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_TIME_SPEC_WEEKS(_base, ___a, ___out);
}

void LIB_OSSL_TIME_SPEC_WEEKS_free(struct Library * _base, OSSL_TIME_SPEC_WEEKS * ___a);

void LIBSTUB_OSSL_TIME_SPEC_WEEKS_free(void)
{
  OSSL_TIME_SPEC_WEEKS * ___a = (OSSL_TIME_SPEC_WEEKS *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_WEEKS_free(_base, ___a);
}

OSSL_TIME_SPEC_WEEKS * LIB_OSSL_TIME_SPEC_WEEKS_new(struct Library * _base);

OSSL_TIME_SPEC_WEEKS * LIBSTUB_OSSL_TIME_SPEC_WEEKS_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_WEEKS_new(_base);
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_WEEKS_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_TIME_SPEC_WEEKS_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_WEEKS_it(_base);
}

OSSL_TIME_SPEC_MONTH * LIB_d2i_OSSL_TIME_SPEC_MONTH(struct Library * _base, OSSL_TIME_SPEC_MONTH ** ___a, const unsigned char ** ___in, long ___len);

OSSL_TIME_SPEC_MONTH * LIBSTUB_d2i_OSSL_TIME_SPEC_MONTH(void)
{
  OSSL_TIME_SPEC_MONTH ** ___a = (OSSL_TIME_SPEC_MONTH **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_TIME_SPEC_MONTH(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_TIME_SPEC_MONTH(struct Library * _base, const OSSL_TIME_SPEC_MONTH * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_TIME_SPEC_MONTH(void)
{
  const OSSL_TIME_SPEC_MONTH * ___a = (const OSSL_TIME_SPEC_MONTH *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_TIME_SPEC_MONTH(_base, ___a, ___out);
}

void LIB_OSSL_TIME_SPEC_MONTH_free(struct Library * _base, OSSL_TIME_SPEC_MONTH * ___a);

void LIBSTUB_OSSL_TIME_SPEC_MONTH_free(void)
{
  OSSL_TIME_SPEC_MONTH * ___a = (OSSL_TIME_SPEC_MONTH *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_MONTH_free(_base, ___a);
}

OSSL_TIME_SPEC_MONTH * LIB_OSSL_TIME_SPEC_MONTH_new(struct Library * _base);

OSSL_TIME_SPEC_MONTH * LIBSTUB_OSSL_TIME_SPEC_MONTH_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_MONTH_new(_base);
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_MONTH_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_TIME_SPEC_MONTH_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_MONTH_it(_base);
}

OSSL_NAMED_DAY * LIB_d2i_OSSL_NAMED_DAY(struct Library * _base, OSSL_NAMED_DAY ** ___a, const unsigned char ** ___in, long ___len);

OSSL_NAMED_DAY * LIBSTUB_d2i_OSSL_NAMED_DAY(void)
{
  OSSL_NAMED_DAY ** ___a = (OSSL_NAMED_DAY **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_NAMED_DAY(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_NAMED_DAY(struct Library * _base, const OSSL_NAMED_DAY * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_NAMED_DAY(void)
{
  const OSSL_NAMED_DAY * ___a = (const OSSL_NAMED_DAY *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_NAMED_DAY(_base, ___a, ___out);
}

void LIB_OSSL_NAMED_DAY_free(struct Library * _base, OSSL_NAMED_DAY * ___a);

void LIBSTUB_OSSL_NAMED_DAY_free(void)
{
  OSSL_NAMED_DAY * ___a = (OSSL_NAMED_DAY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_NAMED_DAY_free(_base, ___a);
}

OSSL_NAMED_DAY * LIB_OSSL_NAMED_DAY_new(struct Library * _base);

OSSL_NAMED_DAY * LIBSTUB_OSSL_NAMED_DAY_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_NAMED_DAY_new(_base);
}

const ASN1_ITEM * LIB_OSSL_NAMED_DAY_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_NAMED_DAY_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_NAMED_DAY_it(_base);
}

OSSL_TIME_SPEC_X_DAY_OF * LIB_d2i_OSSL_TIME_SPEC_X_DAY_OF(struct Library * _base, OSSL_TIME_SPEC_X_DAY_OF ** ___a, const unsigned char ** ___in, long ___len);

OSSL_TIME_SPEC_X_DAY_OF * LIBSTUB_d2i_OSSL_TIME_SPEC_X_DAY_OF(void)
{
  OSSL_TIME_SPEC_X_DAY_OF ** ___a = (OSSL_TIME_SPEC_X_DAY_OF **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_TIME_SPEC_X_DAY_OF(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_TIME_SPEC_X_DAY_OF(struct Library * _base, const OSSL_TIME_SPEC_X_DAY_OF * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_TIME_SPEC_X_DAY_OF(void)
{
  const OSSL_TIME_SPEC_X_DAY_OF * ___a = (const OSSL_TIME_SPEC_X_DAY_OF *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_TIME_SPEC_X_DAY_OF(_base, ___a, ___out);
}

void LIB_OSSL_TIME_SPEC_X_DAY_OF_free(struct Library * _base, OSSL_TIME_SPEC_X_DAY_OF * ___a);

void LIBSTUB_OSSL_TIME_SPEC_X_DAY_OF_free(void)
{
  OSSL_TIME_SPEC_X_DAY_OF * ___a = (OSSL_TIME_SPEC_X_DAY_OF *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_X_DAY_OF_free(_base, ___a);
}

OSSL_TIME_SPEC_X_DAY_OF * LIB_OSSL_TIME_SPEC_X_DAY_OF_new(struct Library * _base);

OSSL_TIME_SPEC_X_DAY_OF * LIBSTUB_OSSL_TIME_SPEC_X_DAY_OF_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_X_DAY_OF_new(_base);
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_X_DAY_OF_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_TIME_SPEC_X_DAY_OF_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_X_DAY_OF_it(_base);
}

OSSL_TIME_SPEC_ABSOLUTE * LIB_d2i_OSSL_TIME_SPEC_ABSOLUTE(struct Library * _base, OSSL_TIME_SPEC_ABSOLUTE ** ___a, const unsigned char ** ___in, long ___len);

OSSL_TIME_SPEC_ABSOLUTE * LIBSTUB_d2i_OSSL_TIME_SPEC_ABSOLUTE(void)
{
  OSSL_TIME_SPEC_ABSOLUTE ** ___a = (OSSL_TIME_SPEC_ABSOLUTE **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_TIME_SPEC_ABSOLUTE(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_TIME_SPEC_ABSOLUTE(struct Library * _base, const OSSL_TIME_SPEC_ABSOLUTE * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_TIME_SPEC_ABSOLUTE(void)
{
  const OSSL_TIME_SPEC_ABSOLUTE * ___a = (const OSSL_TIME_SPEC_ABSOLUTE *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_TIME_SPEC_ABSOLUTE(_base, ___a, ___out);
}

void LIB_OSSL_TIME_SPEC_ABSOLUTE_free(struct Library * _base, OSSL_TIME_SPEC_ABSOLUTE * ___a);

void LIBSTUB_OSSL_TIME_SPEC_ABSOLUTE_free(void)
{
  OSSL_TIME_SPEC_ABSOLUTE * ___a = (OSSL_TIME_SPEC_ABSOLUTE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_ABSOLUTE_free(_base, ___a);
}

OSSL_TIME_SPEC_ABSOLUTE * LIB_OSSL_TIME_SPEC_ABSOLUTE_new(struct Library * _base);

OSSL_TIME_SPEC_ABSOLUTE * LIBSTUB_OSSL_TIME_SPEC_ABSOLUTE_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_ABSOLUTE_new(_base);
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_ABSOLUTE_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_TIME_SPEC_ABSOLUTE_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_ABSOLUTE_it(_base);
}

OSSL_TIME_SPEC_TIME * LIB_d2i_OSSL_TIME_SPEC_TIME(struct Library * _base, OSSL_TIME_SPEC_TIME ** ___a, const unsigned char ** ___in, long ___len);

OSSL_TIME_SPEC_TIME * LIBSTUB_d2i_OSSL_TIME_SPEC_TIME(void)
{
  OSSL_TIME_SPEC_TIME ** ___a = (OSSL_TIME_SPEC_TIME **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_TIME_SPEC_TIME(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_TIME_SPEC_TIME(struct Library * _base, const OSSL_TIME_SPEC_TIME * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_TIME_SPEC_TIME(void)
{
  const OSSL_TIME_SPEC_TIME * ___a = (const OSSL_TIME_SPEC_TIME *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_TIME_SPEC_TIME(_base, ___a, ___out);
}

void LIB_OSSL_TIME_SPEC_TIME_free(struct Library * _base, OSSL_TIME_SPEC_TIME * ___a);

void LIBSTUB_OSSL_TIME_SPEC_TIME_free(void)
{
  OSSL_TIME_SPEC_TIME * ___a = (OSSL_TIME_SPEC_TIME *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_TIME_free(_base, ___a);
}

OSSL_TIME_SPEC_TIME * LIB_OSSL_TIME_SPEC_TIME_new(struct Library * _base);

OSSL_TIME_SPEC_TIME * LIBSTUB_OSSL_TIME_SPEC_TIME_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_TIME_new(_base);
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_TIME_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_TIME_SPEC_TIME_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_TIME_it(_base);
}

OSSL_TIME_SPEC * LIB_d2i_OSSL_TIME_SPEC(struct Library * _base, OSSL_TIME_SPEC ** ___a, const unsigned char ** ___in, long ___len);

OSSL_TIME_SPEC * LIBSTUB_d2i_OSSL_TIME_SPEC(void)
{
  OSSL_TIME_SPEC ** ___a = (OSSL_TIME_SPEC **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_TIME_SPEC(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_TIME_SPEC(struct Library * _base, const OSSL_TIME_SPEC * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_TIME_SPEC(void)
{
  const OSSL_TIME_SPEC * ___a = (const OSSL_TIME_SPEC *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_TIME_SPEC(_base, ___a, ___out);
}

void LIB_OSSL_TIME_SPEC_free(struct Library * _base, OSSL_TIME_SPEC * ___a);

void LIBSTUB_OSSL_TIME_SPEC_free(void)
{
  OSSL_TIME_SPEC * ___a = (OSSL_TIME_SPEC *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_free(_base, ___a);
}

OSSL_TIME_SPEC * LIB_OSSL_TIME_SPEC_new(struct Library * _base);

OSSL_TIME_SPEC * LIBSTUB_OSSL_TIME_SPEC_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_new(_base);
}

const ASN1_ITEM * LIB_OSSL_TIME_SPEC_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_TIME_SPEC_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_SPEC_it(_base);
}

OSSL_TIME_PERIOD * LIB_d2i_OSSL_TIME_PERIOD(struct Library * _base, OSSL_TIME_PERIOD ** ___a, const unsigned char ** ___in, long ___len);

OSSL_TIME_PERIOD * LIBSTUB_d2i_OSSL_TIME_PERIOD(void)
{
  OSSL_TIME_PERIOD ** ___a = (OSSL_TIME_PERIOD **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_TIME_PERIOD(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_TIME_PERIOD(struct Library * _base, const OSSL_TIME_PERIOD * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_TIME_PERIOD(void)
{
  const OSSL_TIME_PERIOD * ___a = (const OSSL_TIME_PERIOD *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_TIME_PERIOD(_base, ___a, ___out);
}

void LIB_OSSL_TIME_PERIOD_free(struct Library * _base, OSSL_TIME_PERIOD * ___a);

void LIBSTUB_OSSL_TIME_PERIOD_free(void)
{
  OSSL_TIME_PERIOD * ___a = (OSSL_TIME_PERIOD *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_PERIOD_free(_base, ___a);
}

OSSL_TIME_PERIOD * LIB_OSSL_TIME_PERIOD_new(struct Library * _base);

OSSL_TIME_PERIOD * LIBSTUB_OSSL_TIME_PERIOD_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_PERIOD_new(_base);
}

const ASN1_ITEM * LIB_OSSL_TIME_PERIOD_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_TIME_PERIOD_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_TIME_PERIOD_it(_base);
}

int LIB_EVP_CIPHER_can_pipeline(struct Library * _base, const EVP_CIPHER * ___cipher, int ___enc);

int LIBSTUB_EVP_CIPHER_can_pipeline(void)
{
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A0;
  int ___enc = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CIPHER_can_pipeline(_base, ___cipher, ___enc);
}

int LIB_EVP_CipherPipelineEncryptInit(struct Library * _base, EVP_CIPHER_CTX * ___ctx, const EVP_CIPHER * ___cipher, const unsigned char * ___key, size_t ___keylen, size_t ___numpipes, const unsigned char ** ___iv, size_t ___ivlen);

int LIBSTUB_EVP_CipherPipelineEncryptInit(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A1;
  const unsigned char * ___key = (const unsigned char *)REG_A2;
  size_t ___keylen = (size_t)REG_D0;
  size_t ___numpipes = (size_t)REG_D1;
  const unsigned char ** ___iv = (const unsigned char **)REG_A3;
  size_t ___ivlen = (size_t)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CipherPipelineEncryptInit(_base, ___ctx, ___cipher, ___key, ___keylen, ___numpipes, ___iv, ___ivlen);
}

int LIB_EVP_CipherPipelineDecryptInit(struct Library * _base, EVP_CIPHER_CTX * ___ctx, const EVP_CIPHER * ___cipher, const unsigned char * ___key, size_t ___keylen, size_t ___numpipes, const unsigned char ** ___iv, size_t ___ivlen);

int LIBSTUB_EVP_CipherPipelineDecryptInit(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A1;
  const unsigned char * ___key = (const unsigned char *)REG_A2;
  size_t ___keylen = (size_t)REG_D0;
  size_t ___numpipes = (size_t)REG_D1;
  const unsigned char ** ___iv = (const unsigned char **)REG_A3;
  size_t ___ivlen = (size_t)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CipherPipelineDecryptInit(_base, ___ctx, ___cipher, ___key, ___keylen, ___numpipes, ___iv, ___ivlen);
}

int LIB_EVP_CipherPipelineUpdate(struct Library * _base, EVP_CIPHER_CTX * ___ctx, unsigned char ** ___out, size_t * ___outl, const size_t * ___outsize, const unsigned char ** ___in, const size_t * ___inl);

int LIBSTUB_EVP_CipherPipelineUpdate(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  size_t * ___outl = (size_t *)REG_A2;
  const size_t * ___outsize = (const size_t *)REG_A3;
  const unsigned char ** ___in = (const unsigned char **)REG_D0;
  const size_t * ___inl = (const size_t *)REG_D1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CipherPipelineUpdate(_base, ___ctx, ___out, ___outl, ___outsize, ___in, ___inl);
}

int LIB_EVP_CipherPipelineFinal(struct Library * _base, EVP_CIPHER_CTX * ___ctx, unsigned char ** ___outm, size_t * ___outl, const size_t * ___outsize);

int LIBSTUB_EVP_CipherPipelineFinal(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  unsigned char ** ___outm = (unsigned char **)REG_A1;
  size_t * ___outl = (size_t *)REG_A2;
  const size_t * ___outsize = (const size_t *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CipherPipelineFinal(_base, ___ctx, ___outm, ___outl, ___outsize);
}

OSSL_ATTRIBUTE_TYPE_MAPPING * LIB_d2i_OSSL_ATTRIBUTE_TYPE_MAPPING(struct Library * _base, OSSL_ATTRIBUTE_TYPE_MAPPING ** ___a, const unsigned char ** ___in, long ___len);

OSSL_ATTRIBUTE_TYPE_MAPPING * LIBSTUB_d2i_OSSL_ATTRIBUTE_TYPE_MAPPING(void)
{
  OSSL_ATTRIBUTE_TYPE_MAPPING ** ___a = (OSSL_ATTRIBUTE_TYPE_MAPPING **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_ATTRIBUTE_TYPE_MAPPING(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_ATTRIBUTE_TYPE_MAPPING(struct Library * _base, const OSSL_ATTRIBUTE_TYPE_MAPPING * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_ATTRIBUTE_TYPE_MAPPING(void)
{
  const OSSL_ATTRIBUTE_TYPE_MAPPING * ___a = (const OSSL_ATTRIBUTE_TYPE_MAPPING *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_ATTRIBUTE_TYPE_MAPPING(_base, ___a, ___out);
}

void LIB_OSSL_ATTRIBUTE_TYPE_MAPPING_free(struct Library * _base, OSSL_ATTRIBUTE_TYPE_MAPPING * ___a);

void LIBSTUB_OSSL_ATTRIBUTE_TYPE_MAPPING_free(void)
{
  OSSL_ATTRIBUTE_TYPE_MAPPING * ___a = (OSSL_ATTRIBUTE_TYPE_MAPPING *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_TYPE_MAPPING_free(_base, ___a);
}

OSSL_ATTRIBUTE_TYPE_MAPPING * LIB_OSSL_ATTRIBUTE_TYPE_MAPPING_new(struct Library * _base);

OSSL_ATTRIBUTE_TYPE_MAPPING * LIBSTUB_OSSL_ATTRIBUTE_TYPE_MAPPING_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_TYPE_MAPPING_new(_base);
}

const ASN1_ITEM * LIB_OSSL_ATTRIBUTE_TYPE_MAPPING_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_ATTRIBUTE_TYPE_MAPPING_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_TYPE_MAPPING_it(_base);
}

OSSL_ATTRIBUTE_VALUE_MAPPING * LIB_d2i_OSSL_ATTRIBUTE_VALUE_MAPPING(struct Library * _base, OSSL_ATTRIBUTE_VALUE_MAPPING ** ___a, const unsigned char ** ___in, long ___len);

OSSL_ATTRIBUTE_VALUE_MAPPING * LIBSTUB_d2i_OSSL_ATTRIBUTE_VALUE_MAPPING(void)
{
  OSSL_ATTRIBUTE_VALUE_MAPPING ** ___a = (OSSL_ATTRIBUTE_VALUE_MAPPING **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_ATTRIBUTE_VALUE_MAPPING(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_ATTRIBUTE_VALUE_MAPPING(struct Library * _base, const OSSL_ATTRIBUTE_VALUE_MAPPING * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_ATTRIBUTE_VALUE_MAPPING(void)
{
  const OSSL_ATTRIBUTE_VALUE_MAPPING * ___a = (const OSSL_ATTRIBUTE_VALUE_MAPPING *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_ATTRIBUTE_VALUE_MAPPING(_base, ___a, ___out);
}

void LIB_OSSL_ATTRIBUTE_VALUE_MAPPING_free(struct Library * _base, OSSL_ATTRIBUTE_VALUE_MAPPING * ___a);

void LIBSTUB_OSSL_ATTRIBUTE_VALUE_MAPPING_free(void)
{
  OSSL_ATTRIBUTE_VALUE_MAPPING * ___a = (OSSL_ATTRIBUTE_VALUE_MAPPING *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_VALUE_MAPPING_free(_base, ___a);
}

OSSL_ATTRIBUTE_VALUE_MAPPING * LIB_OSSL_ATTRIBUTE_VALUE_MAPPING_new(struct Library * _base);

OSSL_ATTRIBUTE_VALUE_MAPPING * LIBSTUB_OSSL_ATTRIBUTE_VALUE_MAPPING_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_VALUE_MAPPING_new(_base);
}

const ASN1_ITEM * LIB_OSSL_ATTRIBUTE_VALUE_MAPPING_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_ATTRIBUTE_VALUE_MAPPING_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_VALUE_MAPPING_it(_base);
}

OSSL_ATTRIBUTE_MAPPING * LIB_d2i_OSSL_ATTRIBUTE_MAPPING(struct Library * _base, OSSL_ATTRIBUTE_MAPPING ** ___a, const unsigned char ** ___in, long ___len);

OSSL_ATTRIBUTE_MAPPING * LIBSTUB_d2i_OSSL_ATTRIBUTE_MAPPING(void)
{
  OSSL_ATTRIBUTE_MAPPING ** ___a = (OSSL_ATTRIBUTE_MAPPING **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_ATTRIBUTE_MAPPING(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_ATTRIBUTE_MAPPING(struct Library * _base, const OSSL_ATTRIBUTE_MAPPING * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_ATTRIBUTE_MAPPING(void)
{
  const OSSL_ATTRIBUTE_MAPPING * ___a = (const OSSL_ATTRIBUTE_MAPPING *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_ATTRIBUTE_MAPPING(_base, ___a, ___out);
}

void LIB_OSSL_ATTRIBUTE_MAPPING_free(struct Library * _base, OSSL_ATTRIBUTE_MAPPING * ___a);

void LIBSTUB_OSSL_ATTRIBUTE_MAPPING_free(void)
{
  OSSL_ATTRIBUTE_MAPPING * ___a = (OSSL_ATTRIBUTE_MAPPING *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_MAPPING_free(_base, ___a);
}

OSSL_ATTRIBUTE_MAPPING * LIB_OSSL_ATTRIBUTE_MAPPING_new(struct Library * _base);

OSSL_ATTRIBUTE_MAPPING * LIBSTUB_OSSL_ATTRIBUTE_MAPPING_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_MAPPING_new(_base);
}

const ASN1_ITEM * LIB_OSSL_ATTRIBUTE_MAPPING_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_ATTRIBUTE_MAPPING_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_MAPPING_it(_base);
}

OSSL_ATTRIBUTE_MAPPINGS * LIB_d2i_OSSL_ATTRIBUTE_MAPPINGS(struct Library * _base, OSSL_ATTRIBUTE_MAPPINGS ** ___a, const unsigned char ** ___in, long ___len);

OSSL_ATTRIBUTE_MAPPINGS * LIBSTUB_d2i_OSSL_ATTRIBUTE_MAPPINGS(void)
{
  OSSL_ATTRIBUTE_MAPPINGS ** ___a = (OSSL_ATTRIBUTE_MAPPINGS **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_ATTRIBUTE_MAPPINGS(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_ATTRIBUTE_MAPPINGS(struct Library * _base, const OSSL_ATTRIBUTE_MAPPINGS * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_ATTRIBUTE_MAPPINGS(void)
{
  const OSSL_ATTRIBUTE_MAPPINGS * ___a = (const OSSL_ATTRIBUTE_MAPPINGS *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_ATTRIBUTE_MAPPINGS(_base, ___a, ___out);
}

void LIB_OSSL_ATTRIBUTE_MAPPINGS_free(struct Library * _base, OSSL_ATTRIBUTE_MAPPINGS * ___a);

void LIBSTUB_OSSL_ATTRIBUTE_MAPPINGS_free(void)
{
  OSSL_ATTRIBUTE_MAPPINGS * ___a = (OSSL_ATTRIBUTE_MAPPINGS *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_MAPPINGS_free(_base, ___a);
}

OSSL_ATTRIBUTE_MAPPINGS * LIB_OSSL_ATTRIBUTE_MAPPINGS_new(struct Library * _base);

OSSL_ATTRIBUTE_MAPPINGS * LIBSTUB_OSSL_ATTRIBUTE_MAPPINGS_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_MAPPINGS_new(_base);
}

const ASN1_ITEM * LIB_OSSL_ATTRIBUTE_MAPPINGS_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_ATTRIBUTE_MAPPINGS_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATTRIBUTE_MAPPINGS_it(_base);
}

OSSL_ATAV * LIB_d2i_OSSL_ATAV(struct Library * _base, OSSL_ATAV ** ___a, const unsigned char ** ___in, long ___len);

OSSL_ATAV * LIBSTUB_d2i_OSSL_ATAV(void)
{
  OSSL_ATAV ** ___a = (OSSL_ATAV **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_ATAV(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_ATAV(struct Library * _base, const OSSL_ATAV * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_ATAV(void)
{
  const OSSL_ATAV * ___a = (const OSSL_ATAV *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_ATAV(_base, ___a, ___out);
}

void LIB_OSSL_ATAV_free(struct Library * _base, OSSL_ATAV * ___a);

void LIBSTUB_OSSL_ATAV_free(void)
{
  OSSL_ATAV * ___a = (OSSL_ATAV *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATAV_free(_base, ___a);
}

OSSL_ATAV * LIB_OSSL_ATAV_new(struct Library * _base);

OSSL_ATAV * LIBSTUB_OSSL_ATAV_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATAV_new(_base);
}

const ASN1_ITEM * LIB_OSSL_ATAV_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_ATAV_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ATAV_it(_base);
}

OSSL_ALLOWED_ATTRIBUTES_CHOICE * LIB_d2i_OSSL_ALLOWED_ATTRIBUTES_CHOICE(struct Library * _base, OSSL_ALLOWED_ATTRIBUTES_CHOICE ** ___a, const unsigned char ** ___in, long ___len);

OSSL_ALLOWED_ATTRIBUTES_CHOICE * LIBSTUB_d2i_OSSL_ALLOWED_ATTRIBUTES_CHOICE(void)
{
  OSSL_ALLOWED_ATTRIBUTES_CHOICE ** ___a = (OSSL_ALLOWED_ATTRIBUTES_CHOICE **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_ALLOWED_ATTRIBUTES_CHOICE(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_ALLOWED_ATTRIBUTES_CHOICE(struct Library * _base, const OSSL_ALLOWED_ATTRIBUTES_CHOICE * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_ALLOWED_ATTRIBUTES_CHOICE(void)
{
  const OSSL_ALLOWED_ATTRIBUTES_CHOICE * ___a = (const OSSL_ALLOWED_ATTRIBUTES_CHOICE *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_ALLOWED_ATTRIBUTES_CHOICE(_base, ___a, ___out);
}

void LIB_OSSL_ALLOWED_ATTRIBUTES_CHOICE_free(struct Library * _base, OSSL_ALLOWED_ATTRIBUTES_CHOICE * ___a);

void LIBSTUB_OSSL_ALLOWED_ATTRIBUTES_CHOICE_free(void)
{
  OSSL_ALLOWED_ATTRIBUTES_CHOICE * ___a = (OSSL_ALLOWED_ATTRIBUTES_CHOICE *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ALLOWED_ATTRIBUTES_CHOICE_free(_base, ___a);
}

OSSL_ALLOWED_ATTRIBUTES_CHOICE * LIB_OSSL_ALLOWED_ATTRIBUTES_CHOICE_new(struct Library * _base);

OSSL_ALLOWED_ATTRIBUTES_CHOICE * LIBSTUB_OSSL_ALLOWED_ATTRIBUTES_CHOICE_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ALLOWED_ATTRIBUTES_CHOICE_new(_base);
}

const ASN1_ITEM * LIB_OSSL_ALLOWED_ATTRIBUTES_CHOICE_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_ALLOWED_ATTRIBUTES_CHOICE_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ALLOWED_ATTRIBUTES_CHOICE_it(_base);
}

OSSL_ALLOWED_ATTRIBUTES_ITEM * LIB_d2i_OSSL_ALLOWED_ATTRIBUTES_ITEM(struct Library * _base, OSSL_ALLOWED_ATTRIBUTES_ITEM ** ___a, const unsigned char ** ___in, long ___len);

OSSL_ALLOWED_ATTRIBUTES_ITEM * LIBSTUB_d2i_OSSL_ALLOWED_ATTRIBUTES_ITEM(void)
{
  OSSL_ALLOWED_ATTRIBUTES_ITEM ** ___a = (OSSL_ALLOWED_ATTRIBUTES_ITEM **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_ALLOWED_ATTRIBUTES_ITEM(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_ALLOWED_ATTRIBUTES_ITEM(struct Library * _base, const OSSL_ALLOWED_ATTRIBUTES_ITEM * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_ALLOWED_ATTRIBUTES_ITEM(void)
{
  const OSSL_ALLOWED_ATTRIBUTES_ITEM * ___a = (const OSSL_ALLOWED_ATTRIBUTES_ITEM *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_ALLOWED_ATTRIBUTES_ITEM(_base, ___a, ___out);
}

void LIB_OSSL_ALLOWED_ATTRIBUTES_ITEM_free(struct Library * _base, OSSL_ALLOWED_ATTRIBUTES_ITEM * ___a);

void LIBSTUB_OSSL_ALLOWED_ATTRIBUTES_ITEM_free(void)
{
  OSSL_ALLOWED_ATTRIBUTES_ITEM * ___a = (OSSL_ALLOWED_ATTRIBUTES_ITEM *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ALLOWED_ATTRIBUTES_ITEM_free(_base, ___a);
}

OSSL_ALLOWED_ATTRIBUTES_ITEM * LIB_OSSL_ALLOWED_ATTRIBUTES_ITEM_new(struct Library * _base);

OSSL_ALLOWED_ATTRIBUTES_ITEM * LIBSTUB_OSSL_ALLOWED_ATTRIBUTES_ITEM_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ALLOWED_ATTRIBUTES_ITEM_new(_base);
}

const ASN1_ITEM * LIB_OSSL_ALLOWED_ATTRIBUTES_ITEM_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_ALLOWED_ATTRIBUTES_ITEM_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ALLOWED_ATTRIBUTES_ITEM_it(_base);
}

OSSL_ALLOWED_ATTRIBUTES_SYNTAX * LIB_d2i_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(struct Library * _base, OSSL_ALLOWED_ATTRIBUTES_SYNTAX ** ___a, const unsigned char ** ___in, long ___len);

OSSL_ALLOWED_ATTRIBUTES_SYNTAX * LIBSTUB_d2i_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(void)
{
  OSSL_ALLOWED_ATTRIBUTES_SYNTAX ** ___a = (OSSL_ALLOWED_ATTRIBUTES_SYNTAX **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(struct Library * _base, const OSSL_ALLOWED_ATTRIBUTES_SYNTAX * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(void)
{
  const OSSL_ALLOWED_ATTRIBUTES_SYNTAX * ___a = (const OSSL_ALLOWED_ATTRIBUTES_SYNTAX *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_ALLOWED_ATTRIBUTES_SYNTAX(_base, ___a, ___out);
}

void LIB_OSSL_ALLOWED_ATTRIBUTES_SYNTAX_free(struct Library * _base, OSSL_ALLOWED_ATTRIBUTES_SYNTAX * ___a);

void LIBSTUB_OSSL_ALLOWED_ATTRIBUTES_SYNTAX_free(void)
{
  OSSL_ALLOWED_ATTRIBUTES_SYNTAX * ___a = (OSSL_ALLOWED_ATTRIBUTES_SYNTAX *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ALLOWED_ATTRIBUTES_SYNTAX_free(_base, ___a);
}

OSSL_ALLOWED_ATTRIBUTES_SYNTAX * LIB_OSSL_ALLOWED_ATTRIBUTES_SYNTAX_new(struct Library * _base);

OSSL_ALLOWED_ATTRIBUTES_SYNTAX * LIBSTUB_OSSL_ALLOWED_ATTRIBUTES_SYNTAX_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ALLOWED_ATTRIBUTES_SYNTAX_new(_base);
}

const ASN1_ITEM * LIB_OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_ALLOWED_ATTRIBUTES_SYNTAX_it(_base);
}

int LIB_EVP_CipherInit_SKEY(struct Library * _base, EVP_CIPHER_CTX * ___ctx, const EVP_CIPHER * ___cipher, EVP_SKEY * ___skey, const unsigned char * ___iv, size_t ___iv_len, int ___enc, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_CipherInit_SKEY(void)
{
  EVP_CIPHER_CTX * ___ctx = (EVP_CIPHER_CTX *)REG_A0;
  const EVP_CIPHER * ___cipher = (const EVP_CIPHER *)REG_A1;
  EVP_SKEY * ___skey = (EVP_SKEY *)REG_A2;
  const unsigned char * ___iv = (const unsigned char *)REG_A3;
  size_t ___iv_len = (size_t)REG_D0;
  int ___enc = (int)REG_D1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_D2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_CipherInit_SKEY(_base, ___ctx, ___cipher, ___skey, ___iv, ___iv_len, ___enc, ___params);
}

EVP_SKEY * LIB_EVP_SKEY_import(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___skeymgmtname, const char * ___propquery, int ___selection, const OSSL_PARAM * ___params);

EVP_SKEY * LIBSTUB_EVP_SKEY_import(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___skeymgmtname = (const char *)REG_A1;
  const char * ___propquery = (const char *)REG_A2;
  int ___selection = (int)REG_D0;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEY_import(_base, ___libctx, ___skeymgmtname, ___propquery, ___selection, ___params);
}

EVP_SKEY * LIB_EVP_SKEY_generate(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___skeymgmtname, const char * ___propquery, const OSSL_PARAM * ___params);

EVP_SKEY * LIBSTUB_EVP_SKEY_generate(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___skeymgmtname = (const char *)REG_A1;
  const char * ___propquery = (const char *)REG_A2;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEY_generate(_base, ___libctx, ___skeymgmtname, ___propquery, ___params);
}

EVP_SKEY * LIB_EVP_SKEY_import_raw_key(struct Library * _base, OSSL_LIB_CTX * ___libctx, const char * ___skeymgmtname, unsigned char * ___key, size_t ___keylen, const char * ___propquery);

EVP_SKEY * LIBSTUB_EVP_SKEY_import_raw_key(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___skeymgmtname = (const char *)REG_A1;
  unsigned char * ___key = (unsigned char *)REG_A2;
  size_t ___keylen = (size_t)REG_D0;
  const char * ___propquery = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEY_import_raw_key(_base, ___libctx, ___skeymgmtname, ___key, ___keylen, ___propquery);
}

int LIB_EVP_SKEY_get0_raw_key(struct Library * _base, const EVP_SKEY * ___skey, const unsigned char ** ___key, size_t * ___len);

int LIBSTUB_EVP_SKEY_get0_raw_key(void)
{
  const EVP_SKEY * ___skey = (const EVP_SKEY *)REG_A0;
  const unsigned char ** ___key = (const unsigned char **)REG_A1;
  size_t * ___len = (size_t *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEY_get0_raw_key(_base, ___skey, ___key, ___len);
}

int LIB_EVP_SKEY_export(struct Library * _base, const EVP_SKEY * ___skey, int ___selection, OSSL_CALLBACK * ___export_cb, void * ___export_cbarg);

int LIBSTUB_EVP_SKEY_export(void)
{
  const EVP_SKEY * ___skey = (const EVP_SKEY *)REG_A0;
  int ___selection = (int)REG_D0;
  OSSL_CALLBACK * ___export_cb = (OSSL_CALLBACK *)REG_A1;
  void * ___export_cbarg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEY_export(_base, ___skey, ___selection, ___export_cb, ___export_cbarg);
}

int LIB_EVP_SKEY_up_ref(struct Library * _base, EVP_SKEY * ___skey);

int LIBSTUB_EVP_SKEY_up_ref(void)
{
  EVP_SKEY * ___skey = (EVP_SKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEY_up_ref(_base, ___skey);
}

void LIB_EVP_SKEY_free(struct Library * _base, EVP_SKEY * ___skey);

void LIBSTUB_EVP_SKEY_free(void)
{
  EVP_SKEY * ___skey = (EVP_SKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEY_free(_base, ___skey);
}

EVP_SKEYMGMT * LIB_EVP_SKEYMGMT_fetch(struct Library * _base, OSSL_LIB_CTX * ___ctx, const char * ___algorithm, const char * ___properties);

EVP_SKEYMGMT * LIBSTUB_EVP_SKEYMGMT_fetch(void)
{
  OSSL_LIB_CTX * ___ctx = (OSSL_LIB_CTX *)REG_A0;
  const char * ___algorithm = (const char *)REG_A1;
  const char * ___properties = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEYMGMT_fetch(_base, ___ctx, ___algorithm, ___properties);
}

int LIB_EVP_SKEYMGMT_up_ref(struct Library * _base, EVP_SKEYMGMT * ___keymgmt);

int LIBSTUB_EVP_SKEYMGMT_up_ref(void)
{
  EVP_SKEYMGMT * ___keymgmt = (EVP_SKEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEYMGMT_up_ref(_base, ___keymgmt);
}

void LIB_EVP_SKEYMGMT_free(struct Library * _base, EVP_SKEYMGMT * ___keymgmt);

void LIBSTUB_EVP_SKEYMGMT_free(void)
{
  EVP_SKEYMGMT * ___keymgmt = (EVP_SKEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEYMGMT_free(_base, ___keymgmt);
}

const OSSL_PROVIDER * LIB_EVP_SKEYMGMT_get0_provider(struct Library * _base, const EVP_SKEYMGMT * ___keymgmt);

const OSSL_PROVIDER * LIBSTUB_EVP_SKEYMGMT_get0_provider(void)
{
  const EVP_SKEYMGMT * ___keymgmt = (const EVP_SKEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEYMGMT_get0_provider(_base, ___keymgmt);
}

const char * LIB_EVP_SKEYMGMT_get0_name(struct Library * _base, const EVP_SKEYMGMT * ___keymgmt);

const char * LIBSTUB_EVP_SKEYMGMT_get0_name(void)
{
  const EVP_SKEYMGMT * ___keymgmt = (const EVP_SKEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEYMGMT_get0_name(_base, ___keymgmt);
}

const char * LIB_EVP_SKEYMGMT_get0_description(struct Library * _base, const EVP_SKEYMGMT * ___keymgmt);

const char * LIBSTUB_EVP_SKEYMGMT_get0_description(void)
{
  const EVP_SKEYMGMT * ___keymgmt = (const EVP_SKEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEYMGMT_get0_description(_base, ___keymgmt);
}

int LIB_EVP_SKEYMGMT_is_a(struct Library * _base, const EVP_SKEYMGMT * ___keymgmt, const char * ___name);

int LIBSTUB_EVP_SKEYMGMT_is_a(void)
{
  const EVP_SKEYMGMT * ___keymgmt = (const EVP_SKEYMGMT *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEYMGMT_is_a(_base, ___keymgmt, ___name);
}

void LIB_EVP_SKEYMGMT_do_all_provided(struct Library * _base, OSSL_LIB_CTX * ___libctx, void (*___fn)(EVP_SKEYMGMT *keymgmt,void *arg), void * ___arg);

void LIBSTUB_EVP_SKEYMGMT_do_all_provided(void)
{
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A0;
  void (*___fn)(EVP_SKEYMGMT *keymgmt,void *arg) = (void (*)(EVP_SKEYMGMT *keymgmt,void *arg))REG_A1;
  void * ___arg = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEYMGMT_do_all_provided(_base, ___libctx, ___fn, ___arg);
}

int LIB_EVP_SKEYMGMT_names_do_all(struct Library * _base, const EVP_SKEYMGMT * ___keymgmt, void (*___fn)(const char *name,void *data), void * ___data);

int LIBSTUB_EVP_SKEYMGMT_names_do_all(void)
{
  const EVP_SKEYMGMT * ___keymgmt = (const EVP_SKEYMGMT *)REG_A0;
  void (*___fn)(const char *name,void *data) = (void (*)(const char *name,void *data))REG_A1;
  void * ___data = (void *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEYMGMT_names_do_all(_base, ___keymgmt, ___fn, ___data);
}

int LIB_EVP_MAC_init_SKEY(struct Library * _base, EVP_MAC_CTX * ___ctx, EVP_SKEY * ___skey, const OSSL_PARAM * ___params);

int LIBSTUB_EVP_MAC_init_SKEY(void)
{
  EVP_MAC_CTX * ___ctx = (EVP_MAC_CTX *)REG_A0;
  EVP_SKEY * ___skey = (EVP_SKEY *)REG_A1;
  const OSSL_PARAM * ___params = (const OSSL_PARAM *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_MAC_init_SKEY(_base, ___ctx, ___skey, ___params);
}

const char * LIB_EVP_SKEY_get0_key_id(struct Library * _base, const EVP_SKEY * ___skey);

const char * LIBSTUB_EVP_SKEY_get0_key_id(void)
{
  const EVP_SKEY * ___skey = (const EVP_SKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEY_get0_key_id(_base, ___skey);
}

const char * LIB_EVP_SKEY_get0_skeymgmt_name(struct Library * _base, const EVP_SKEY * ___skey);

const char * LIBSTUB_EVP_SKEY_get0_skeymgmt_name(void)
{
  const EVP_SKEY * ___skey = (const EVP_SKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEY_get0_skeymgmt_name(_base, ___skey);
}

const char * LIB_EVP_SKEY_get0_provider_name(struct Library * _base, const EVP_SKEY * ___skey);

const char * LIBSTUB_EVP_SKEY_get0_provider_name(void)
{
  const EVP_SKEY * ___skey = (const EVP_SKEY *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEY_get0_provider_name(_base, ___skey);
}

const OSSL_PARAM * LIB_EVP_SKEYMGMT_get0_gen_settable_params(struct Library * _base, const EVP_SKEYMGMT * ___skeymgmt);

const OSSL_PARAM * LIBSTUB_EVP_SKEYMGMT_get0_gen_settable_params(void)
{
  const EVP_SKEYMGMT * ___skeymgmt = (const EVP_SKEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEYMGMT_get0_gen_settable_params(_base, ___skeymgmt);
}

const OSSL_PARAM * LIB_EVP_SKEYMGMT_get0_imp_settable_params(struct Library * _base, const EVP_SKEYMGMT * ___skeymgmt);

const OSSL_PARAM * LIBSTUB_EVP_SKEYMGMT_get0_imp_settable_params(void)
{
  const EVP_SKEYMGMT * ___skeymgmt = (const EVP_SKEYMGMT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEYMGMT_get0_imp_settable_params(_base, ___skeymgmt);
}

int LIB_EVP_SKEY_is_a(struct Library * _base, const EVP_SKEY * ___skey, const char * ___name);

int LIBSTUB_EVP_SKEY_is_a(void)
{
  const EVP_SKEY * ___skey = (const EVP_SKEY *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEY_is_a(_base, ___skey, ___name);
}

EVP_SKEY * LIB_EVP_SKEY_to_provider(struct Library * _base, EVP_SKEY * ___skey, OSSL_LIB_CTX * ___libctx, OSSL_PROVIDER * ___prov, const char * ___propquery);

EVP_SKEY * LIBSTUB_EVP_SKEY_to_provider(void)
{
  EVP_SKEY * ___skey = (EVP_SKEY *)REG_A0;
  OSSL_LIB_CTX * ___libctx = (OSSL_LIB_CTX *)REG_A1;
  OSSL_PROVIDER * ___prov = (OSSL_PROVIDER *)REG_A2;
  const char * ___propquery = (const char *)REG_A3;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_EVP_SKEY_to_provider(_base, ___skey, ___libctx, ___prov, ___propquery);
}

int LIB_OSSL_PROVIDER_add_conf_parameter(struct Library * _base, OSSL_PROVIDER * ___prov, const char * ___name, const char * ___value);

int LIBSTUB_OSSL_PROVIDER_add_conf_parameter(void)
{
  OSSL_PROVIDER * ___prov = (OSSL_PROVIDER *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  const char * ___value = (const char *)REG_A2;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_add_conf_parameter(_base, ___prov, ___name, ___value);
}

int LIB_OSSL_PROVIDER_get_conf_parameters(struct Library * _base, const OSSL_PROVIDER * ___prov, OSSL_PARAM * ___params);

int LIBSTUB_OSSL_PROVIDER_get_conf_parameters(void)
{
  const OSSL_PROVIDER * ___prov = (const OSSL_PROVIDER *)REG_A0;
  OSSL_PARAM * ___params = (OSSL_PARAM *)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_get_conf_parameters(_base, ___prov, ___params);
}

int LIB_OSSL_PROVIDER_conf_get_bool(struct Library * _base, const OSSL_PROVIDER * ___prov, const char * ___name, int ___defval);

int LIBSTUB_OSSL_PROVIDER_conf_get_bool(void)
{
  const OSSL_PROVIDER * ___prov = (const OSSL_PROVIDER *)REG_A0;
  const char * ___name = (const char *)REG_A1;
  int ___defval = (int)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_PROVIDER_conf_get_bool(_base, ___prov, ___name, ___defval);
}

OSSL_AA_DIST_POINT * LIB_d2i_OSSL_AA_DIST_POINT(struct Library * _base, OSSL_AA_DIST_POINT ** ___a, const unsigned char ** ___in, long ___len);

OSSL_AA_DIST_POINT * LIBSTUB_d2i_OSSL_AA_DIST_POINT(void)
{
  OSSL_AA_DIST_POINT ** ___a = (OSSL_AA_DIST_POINT **)REG_A0;
  const unsigned char ** ___in = (const unsigned char **)REG_A1;
  long ___len = (long)REG_D0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_d2i_OSSL_AA_DIST_POINT(_base, ___a, ___in, ___len);
}

int LIB_i2d_OSSL_AA_DIST_POINT(struct Library * _base, const OSSL_AA_DIST_POINT * ___a, unsigned char ** ___out);

int LIBSTUB_i2d_OSSL_AA_DIST_POINT(void)
{
  const OSSL_AA_DIST_POINT * ___a = (const OSSL_AA_DIST_POINT *)REG_A0;
  unsigned char ** ___out = (unsigned char **)REG_A1;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_i2d_OSSL_AA_DIST_POINT(_base, ___a, ___out);
}

void LIB_OSSL_AA_DIST_POINT_free(struct Library * _base, OSSL_AA_DIST_POINT * ___a);

void LIBSTUB_OSSL_AA_DIST_POINT_free(void)
{
  OSSL_AA_DIST_POINT * ___a = (OSSL_AA_DIST_POINT *)REG_A0;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_AA_DIST_POINT_free(_base, ___a);
}

OSSL_AA_DIST_POINT * LIB_OSSL_AA_DIST_POINT_new(struct Library * _base);

OSSL_AA_DIST_POINT * LIBSTUB_OSSL_AA_DIST_POINT_new(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_AA_DIST_POINT_new(_base);
}

const ASN1_ITEM * LIB_OSSL_AA_DIST_POINT_it(struct Library * _base);

const ASN1_ITEM * LIBSTUB_OSSL_AA_DIST_POINT_it(void)
{
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_OSSL_AA_DIST_POINT_it(_base);
}

int LIB_PEM_ASN1_write_bio_ctx(struct Library * _base, OSSL_i2d_of_void_ctx * ___i2d, void * ___vctx, const char * ___name, BIO * ___bp, const void * ___x, const EVP_CIPHER * ___enc, const unsigned char * ___kstr, int ___klen, pem_password_cb * ___cb, void * ___u);

int LIBSTUB_PEM_ASN1_write_bio_ctx(void)
{
  OSSL_i2d_of_void_ctx * ___i2d = (OSSL_i2d_of_void_ctx *)REG_A0;
  void * ___vctx = (void *)REG_A1;
  const char * ___name = (const char *)REG_A2;
  BIO * ___bp = (BIO *)REG_A3;
  const void * ___x = (const void *)REG_D0;
  const EVP_CIPHER * ___enc = (const EVP_CIPHER *)REG_D1;
  const unsigned char * ___kstr = (const unsigned char *)REG_D2;
  int ___klen = (int)REG_D3;
  pem_password_cb * ___cb = (pem_password_cb *)REG_D4;
  void * ___u = (void *)REG_D5;
  struct Library * _base = (struct Library *)REG_A6;
  return LIB_PEM_ASN1_write_bio_ctx(_base, ___i2d, ___vctx, ___name, ___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u);
}


#ifdef __cplusplus
}
#endif /* __cplusplus */
