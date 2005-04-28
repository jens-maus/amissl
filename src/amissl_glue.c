#define PROTO_AMISSL_H // Don't include amissl protos

#include <internal/debug.h>
#include <amissl/amissl.h>
#include <internal/amissl_compiler.h>

#ifdef __amigaos4__
struct AmiSSLIFace;
#define __IFACE_OR_BASE	struct AmiSSLIFace *Self
#else
#define __IFACE_OR_BASE	struct Library *Self
#endif

ASN1_TYPE * AMISSL_LIB_ENTRY _AmiSSL_ASN1_TYPE_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_TYPE_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_TYPE_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a))
{
	ASN1_TYPE_free(a);
}

ASN1_TYPE * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_TYPE(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_TYPE(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_TYPE(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_TYPE(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_ANY_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_ANY_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_TYPE_get(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a))
{
	return(ASN1_TYPE_get(a));
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_TYPE_set(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a), REG(d0, int type), REG(a1, void *value))
{
	ASN1_TYPE_set(a, type, value);
}

ASN1_OBJECT * AMISSL_LIB_ENTRY _AmiSSL_ASN1_OBJECT_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_OBJECT_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_OBJECT_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OBJECT *a))
{
	ASN1_OBJECT_free(a);
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_OBJECT(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OBJECT *a), REG(a1, unsigned char **pp))
{
	return(i2d_ASN1_OBJECT(a, pp));
}

ASN1_OBJECT * AMISSL_LIB_ENTRY _AmiSSL_c2i_ASN1_OBJECT(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OBJECT **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(c2i_ASN1_OBJECT(a, pp, length));
}

ASN1_OBJECT * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_OBJECT(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OBJECT **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_ASN1_OBJECT(a, pp, length));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_OBJECT_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_OBJECT_it());
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_STRING_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a))
{
	ASN1_STRING_free(a);
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_dup(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a))
{
	return(ASN1_STRING_dup(a));
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_type_new(REG(a6, __IFACE_OR_BASE), REG(d0, int type))
{
	return(ASN1_STRING_type_new(type));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a), REG(a1, ASN1_STRING *b))
{
	return(ASN1_STRING_cmp(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_set(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *str), REG(a1, const void *data), REG(d0, int len))
{
	return(ASN1_STRING_set(str, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_length(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *x))
{
	return(ASN1_STRING_length(x));
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_length_set(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *x), REG(d0, int n))
{
	ASN1_STRING_length_set(x, n);
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_type(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *x))
{
	return(ASN1_STRING_type(x));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_data(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *x))
{
	return(ASN1_STRING_data(x));
}

ASN1_BIT_STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_BIT_STRING_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_BIT_STRING_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_BIT_STRING_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *a))
{
	ASN1_BIT_STRING_free(a);
}

ASN1_BIT_STRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_BIT_STRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_BIT_STRING(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_BIT_STRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_BIT_STRING(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_BIT_STRING_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_BIT_STRING_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_i2c_ASN1_BIT_STRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *a), REG(a1, unsigned char **pp))
{
	return(i2c_ASN1_BIT_STRING(a, pp));
}

ASN1_BIT_STRING * AMISSL_LIB_ENTRY _AmiSSL_c2i_ASN1_BIT_STRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(c2i_ASN1_BIT_STRING(a, pp, length));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_BIT_STRING_set(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *a), REG(a1, unsigned char *d), REG(d0, int length))
{
	return(ASN1_BIT_STRING_set(a, d, length));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_BIT_STRING_set_bit(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *a), REG(d0, int n), REG(d1, int value))
{
	return(ASN1_BIT_STRING_set_bit(a, n, value));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_BIT_STRING_get_bit(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *a), REG(d0, int n))
{
	return(ASN1_BIT_STRING_get_bit(a, n));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_BIT_STRING_name_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, ASN1_BIT_STRING *bs), REG(a2, BIT_STRING_BITNAME *tbl), REG(d0, int indent))
{
	return(ASN1_BIT_STRING_name_print(out, bs, tbl, indent));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_BIT_STRING_num_asc(REG(a6, __IFACE_OR_BASE), REG(a0, char *name), REG(a1, BIT_STRING_BITNAME *tbl))
{
	return(ASN1_BIT_STRING_num_asc(name, tbl));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_BIT_STRING_set_asc(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *bs), REG(a1, char *name), REG(d0, int value), REG(a2, BIT_STRING_BITNAME *tbl))
{
	return(ASN1_BIT_STRING_set_asc(bs, name, value, tbl));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_BOOLEAN(REG(a6, __IFACE_OR_BASE), REG(d0, int a), REG(a0, unsigned char **pp))
{
	return(i2d_ASN1_BOOLEAN(a, pp));
}

int AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_BOOLEAN(REG(a6, __IFACE_OR_BASE), REG(a0, int *a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_ASN1_BOOLEAN(a, pp, length));
}

ASN1_INTEGER * AMISSL_LIB_ENTRY _AmiSSL_ASN1_INTEGER_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_INTEGER_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_INTEGER_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *a))
{
	ASN1_INTEGER_free(a);
}

ASN1_INTEGER * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_INTEGER(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_INTEGER(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_INTEGER(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_INTEGER(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_INTEGER_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_INTEGER_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_i2c_ASN1_INTEGER(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *a), REG(a1, unsigned char **pp))
{
	return(i2c_ASN1_INTEGER(a, pp));
}

ASN1_INTEGER * AMISSL_LIB_ENTRY _AmiSSL_c2i_ASN1_INTEGER(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(c2i_ASN1_INTEGER(a, pp, length));
}

ASN1_INTEGER * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_UINTEGER(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_ASN1_UINTEGER(a, pp, length));
}

ASN1_INTEGER * AMISSL_LIB_ENTRY _AmiSSL_ASN1_INTEGER_dup(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *x))
{
	return(ASN1_INTEGER_dup(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_INTEGER_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *x), REG(a1, ASN1_INTEGER *y))
{
	return(ASN1_INTEGER_cmp(x, y));
}

ASN1_ENUMERATED * AMISSL_LIB_ENTRY _AmiSSL_ASN1_ENUMERATED_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_ENUMERATED_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_ENUMERATED_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_ENUMERATED *a))
{
	ASN1_ENUMERATED_free(a);
}

ASN1_ENUMERATED * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_ENUMERATED(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_ENUMERATED **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_ENUMERATED(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_ENUMERATED(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_ENUMERATED *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_ENUMERATED(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_ENUMERATED_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_ENUMERATED_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_UTCTIME_check(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTCTIME *a))
{
	return(ASN1_UTCTIME_check(a));
}

ASN1_UTCTIME * AMISSL_LIB_ENTRY _AmiSSL_ASN1_UTCTIME_set(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTCTIME *s), REG(d0, time_t t))
{
	return(ASN1_UTCTIME_set(s, t));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_UTCTIME_set_string(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTCTIME *s), REG(a1, char *str))
{
	return(ASN1_UTCTIME_set_string(s, str));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_UTCTIME_cmp_time_t(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_UTCTIME *s), REG(d0, time_t t))
{
	return(ASN1_UTCTIME_cmp_time_t(s, t));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_GENERALIZEDTIME_check(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME *a))
{
	return(ASN1_GENERALIZEDTIME_check(a));
}

ASN1_GENERALIZEDTIME * AMISSL_LIB_ENTRY _AmiSSL_ASN1_GENERALIZEDTIME_set(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME *s), REG(d0, time_t t))
{
	return(ASN1_GENERALIZEDTIME_set(s, t));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_GENERALIZEDTIME_set_string(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME *s), REG(a1, char *str))
{
	return(ASN1_GENERALIZEDTIME_set_string(s, str));
}

ASN1_OCTET_STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_OCTET_STRING_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_OCTET_STRING_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_OCTET_STRING_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING *a))
{
	ASN1_OCTET_STRING_free(a);
}

ASN1_OCTET_STRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_OCTET_STRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_OCTET_STRING(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_OCTET_STRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_OCTET_STRING(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_OCTET_STRING_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_OCTET_STRING_it());
}

ASN1_OCTET_STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_OCTET_STRING_dup(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING *a))
{
	return(ASN1_OCTET_STRING_dup(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_OCTET_STRING_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING *a), REG(a1, ASN1_OCTET_STRING *b))
{
	return(ASN1_OCTET_STRING_cmp(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_OCTET_STRING_set(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING *str), REG(a1, unsigned char *data), REG(d0, int len))
{
	return(ASN1_OCTET_STRING_set(str, data, len));
}

ASN1_VISIBLESTRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_VISIBLESTRING_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_VISIBLESTRING_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_VISIBLESTRING_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VISIBLESTRING *a))
{
	ASN1_VISIBLESTRING_free(a);
}

ASN1_VISIBLESTRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_VISIBLESTRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VISIBLESTRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_VISIBLESTRING(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_VISIBLESTRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VISIBLESTRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_VISIBLESTRING(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_VISIBLESTRING_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_VISIBLESTRING_it());
}

ASN1_UNIVERSALSTRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_UNIVERSALSTRING_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_UNIVERSALSTRING_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_UNIVERSALSTRING_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UNIVERSALSTRING *a))
{
	ASN1_UNIVERSALSTRING_free(a);
}

ASN1_UNIVERSALSTRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_UNIVERSALSTRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UNIVERSALSTRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_UNIVERSALSTRING(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_UNIVERSALSTRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UNIVERSALSTRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_UNIVERSALSTRING(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_UNIVERSALSTRING_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_UNIVERSALSTRING_it());
}

ASN1_UTF8STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_UTF8STRING_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_UTF8STRING_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_UTF8STRING_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTF8STRING *a))
{
	ASN1_UTF8STRING_free(a);
}

ASN1_UTF8STRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_UTF8STRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTF8STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_UTF8STRING(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_UTF8STRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTF8STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_UTF8STRING(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_UTF8STRING_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_UTF8STRING_it());
}

ASN1_NULL * AMISSL_LIB_ENTRY _AmiSSL_ASN1_NULL_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_NULL_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_NULL_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_NULL *a))
{
	ASN1_NULL_free(a);
}

ASN1_NULL * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_NULL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_NULL **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_NULL(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_NULL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_NULL *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_NULL(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_NULL_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_NULL_it());
}

ASN1_BMPSTRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_BMPSTRING_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_BMPSTRING_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_BMPSTRING_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BMPSTRING *a))
{
	ASN1_BMPSTRING_free(a);
}

ASN1_BMPSTRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_BMPSTRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BMPSTRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_BMPSTRING(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_BMPSTRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BMPSTRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_BMPSTRING(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_BMPSTRING_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_BMPSTRING_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_UTF8_getc(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *str), REG(d0, int len), REG(a1, unsigned long *val))
{
	return(UTF8_getc(str, len, val));
}

int AMISSL_LIB_ENTRY _AmiSSL_UTF8_putc(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *str), REG(d0, int len), REG(d1, unsigned long value))
{
	return(UTF8_putc(str, len, value));
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_PRINTABLE_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_PRINTABLE_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_PRINTABLE_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a))
{
	ASN1_PRINTABLE_free(a);
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_PRINTABLE(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_PRINTABLE(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_PRINTABLE(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_PRINTABLE(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_PRINTABLE_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_PRINTABLE_it());
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_DIRECTORYSTRING_new(REG(a6, __IFACE_OR_BASE))
{
	return(DIRECTORYSTRING_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_DIRECTORYSTRING_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a))
{
	DIRECTORYSTRING_free(a);
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_DIRECTORYSTRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_DIRECTORYSTRING(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_DIRECTORYSTRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_DIRECTORYSTRING(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_DIRECTORYSTRING_it(REG(a6, __IFACE_OR_BASE))
{
	return(DIRECTORYSTRING_it());
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_DISPLAYTEXT_new(REG(a6, __IFACE_OR_BASE))
{
	return(DISPLAYTEXT_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_DISPLAYTEXT_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a))
{
	DISPLAYTEXT_free(a);
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_DISPLAYTEXT(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_DISPLAYTEXT(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_DISPLAYTEXT(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_DISPLAYTEXT(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_DISPLAYTEXT_it(REG(a6, __IFACE_OR_BASE))
{
	return(DISPLAYTEXT_it());
}

ASN1_PRINTABLESTRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_PRINTABLESTRING_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_PRINTABLESTRING_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_PRINTABLESTRING_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_PRINTABLESTRING *a))
{
	ASN1_PRINTABLESTRING_free(a);
}

ASN1_PRINTABLESTRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_PRINTABLESTRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_PRINTABLESTRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_PRINTABLESTRING(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_PRINTABLESTRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_PRINTABLESTRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_PRINTABLESTRING(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_PRINTABLESTRING_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_PRINTABLESTRING_it());
}

ASN1_T61STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_T61STRING_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_T61STRING_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_T61STRING_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_T61STRING *a))
{
	ASN1_T61STRING_free(a);
}

ASN1_T61STRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_T61STRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_T61STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_T61STRING(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_T61STRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_T61STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_T61STRING(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_T61STRING_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_T61STRING_it());
}

ASN1_IA5STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_IA5STRING_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_IA5STRING_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_IA5STRING_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_IA5STRING *a))
{
	ASN1_IA5STRING_free(a);
}

ASN1_IA5STRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_IA5STRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_IA5STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_IA5STRING(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_IA5STRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_IA5STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_IA5STRING(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_IA5STRING_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_IA5STRING_it());
}

ASN1_GENERALSTRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_GENERALSTRING_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_GENERALSTRING_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_GENERALSTRING_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALSTRING *a))
{
	ASN1_GENERALSTRING_free(a);
}

ASN1_GENERALSTRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_GENERALSTRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALSTRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_GENERALSTRING(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_GENERALSTRING(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALSTRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_GENERALSTRING(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_GENERALSTRING_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_GENERALSTRING_it());
}

ASN1_UTCTIME * AMISSL_LIB_ENTRY _AmiSSL_ASN1_UTCTIME_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_UTCTIME_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_UTCTIME_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTCTIME *a))
{
	ASN1_UTCTIME_free(a);
}

ASN1_UTCTIME * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_UTCTIME(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTCTIME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_UTCTIME(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_UTCTIME(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTCTIME *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_UTCTIME(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_UTCTIME_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_UTCTIME_it());
}

ASN1_GENERALIZEDTIME * AMISSL_LIB_ENTRY _AmiSSL_ASN1_GENERALIZEDTIME_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_GENERALIZEDTIME_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_GENERALIZEDTIME_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME *a))
{
	ASN1_GENERALIZEDTIME_free(a);
}

ASN1_GENERALIZEDTIME * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_GENERALIZEDTIME(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_GENERALIZEDTIME(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_GENERALIZEDTIME(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_GENERALIZEDTIME(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_GENERALIZEDTIME_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_GENERALIZEDTIME_it());
}

ASN1_TIME * AMISSL_LIB_ENTRY _AmiSSL_ASN1_TIME_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_TIME_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_TIME_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *a))
{
	ASN1_TIME_free(a);
}

ASN1_TIME * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_TIME(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_TIME(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_TIME(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_TIME(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_TIME_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_TIME_it());
}

ASN1_TIME * AMISSL_LIB_ENTRY _AmiSSL_ASN1_TIME_set(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *s), REG(d0, time_t t))
{
	return(ASN1_TIME_set(s, t));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_TIME_check(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *t))
{
	return(ASN1_TIME_check(t));
}

ASN1_GENERALIZEDTIME * AMISSL_LIB_ENTRY _AmiSSL_ASN1_TIME_to_generalizedtime(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *t), REG(a1, ASN1_GENERALIZEDTIME **out))
{
	return(ASN1_TIME_to_generalizedtime(t, out));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_SET(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *a), REG(a1, unsigned char **pp), REG(a2, int (*func)()), REG(d0, int ex_tag), REG(d1, int ex_class), REG(d2, int is_set))
{
	return(i2d_ASN1_SET(a, pp, func, ex_tag, ex_class, is_set));
}

STACK * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_SET(REG(a6, __IFACE_OR_BASE), REG(a0, STACK **a), REG(a1, unsigned char **pp), REG(d0, long length), REG(a2, char *(*func)()), REG(a3, void (*free_func)(void *)), REG(d1, int ex_tag), REG(d2, int ex_class))
{
	return(d2i_ASN1_SET(a, pp, length, func, free_func, ex_tag, ex_class));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2a_ASN1_INTEGER(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_INTEGER *a))
{
	return(i2a_ASN1_INTEGER(bp, a));
}

int AMISSL_LIB_ENTRY _AmiSSL_a2i_ASN1_INTEGER(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_INTEGER *bs), REG(a2, char *buf), REG(d0, int size))
{
	return(a2i_ASN1_INTEGER(bp, bs, buf, size));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2a_ASN1_ENUMERATED(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_ENUMERATED *a))
{
	return(i2a_ASN1_ENUMERATED(bp, a));
}

int AMISSL_LIB_ENTRY _AmiSSL_a2i_ASN1_ENUMERATED(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_ENUMERATED *bs), REG(a2, char *buf), REG(d0, int size))
{
	return(a2i_ASN1_ENUMERATED(bp, bs, buf, size));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2a_ASN1_OBJECT(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_OBJECT *a))
{
	return(i2a_ASN1_OBJECT(bp, a));
}

int AMISSL_LIB_ENTRY _AmiSSL_a2i_ASN1_STRING(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_STRING *bs), REG(a2, char *buf), REG(d0, int size))
{
	return(a2i_ASN1_STRING(bp, bs, buf, size));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2a_ASN1_STRING(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_STRING *a), REG(d0, int type))
{
	return(i2a_ASN1_STRING(bp, a, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2t_ASN1_OBJECT(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int buf_len), REG(a1, ASN1_OBJECT *a))
{
	return(i2t_ASN1_OBJECT(buf, buf_len, a));
}

int AMISSL_LIB_ENTRY _AmiSSL_a2d_ASN1_OBJECT(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *out), REG(d0, int olen), REG(a1, const char *buf), REG(d1, int num))
{
	return(a2d_ASN1_OBJECT(out, olen, buf, num));
}

ASN1_OBJECT * AMISSL_LIB_ENTRY _AmiSSL_ASN1_OBJECT_create(REG(a6, __IFACE_OR_BASE), REG(d0, int nid), REG(a0, unsigned char *data), REG(d1, int len), REG(a1, const char *sn), REG(a2, const char *ln))
{
	return(ASN1_OBJECT_create(nid, data, len, sn, ln));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_INTEGER_set(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *a), REG(d0, long v))
{
	return(ASN1_INTEGER_set(a, v));
}

long AMISSL_LIB_ENTRY _AmiSSL_ASN1_INTEGER_get(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *a))
{
	return(ASN1_INTEGER_get(a));
}

ASN1_INTEGER * AMISSL_LIB_ENTRY _AmiSSL_BN_to_ASN1_INTEGER(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *bn), REG(a1, ASN1_INTEGER *ai))
{
	return(BN_to_ASN1_INTEGER(bn, ai));
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_INTEGER_to_BN(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *ai), REG(a1, BIGNUM *bn))
{
	return(ASN1_INTEGER_to_BN(ai, bn));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_ENUMERATED_set(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_ENUMERATED *a), REG(d0, long v))
{
	return(ASN1_ENUMERATED_set(a, v));
}

long AMISSL_LIB_ENTRY _AmiSSL_ASN1_ENUMERATED_get(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_ENUMERATED *a))
{
	return(ASN1_ENUMERATED_get(a));
}

ASN1_ENUMERATED * AMISSL_LIB_ENTRY _AmiSSL_BN_to_ASN1_ENUMERATED(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *bn), REG(a1, ASN1_ENUMERATED *ai))
{
	return(BN_to_ASN1_ENUMERATED(bn, ai));
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_ENUMERATED_to_BN(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_ENUMERATED *ai), REG(a1, BIGNUM *bn))
{
	return(ASN1_ENUMERATED_to_BN(ai, bn));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_PRINTABLE_type(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *s), REG(d0, int max))
{
	return(ASN1_PRINTABLE_type(s, max));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_bytes(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a), REG(a1, unsigned char **pp), REG(d0, int tag), REG(d1, int xclass))
{
	return(i2d_ASN1_bytes(a, pp, tag, xclass));
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_bytes(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **a), REG(a1, unsigned char **pp), REG(d0, long length), REG(d1, int Ptag), REG(d2, int Pclass))
{
	return(d2i_ASN1_bytes(a, pp, length, Ptag, Pclass));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_ASN1_tag2bit(REG(a6, __IFACE_OR_BASE), REG(d0, int tag))
{
	return(ASN1_tag2bit(tag));
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_type_bytes(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **a), REG(a1, unsigned char **pp), REG(d0, long length), REG(d1, int type))
{
	return(d2i_ASN1_type_bytes(a, pp, length, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_asn1_Finish(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_CTX *c))
{
	return(asn1_Finish(c));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_get_object(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char **pp), REG(a1, long *plength), REG(a2, int *ptag), REG(a3, int *pclass), REG(d0, long omax))
{
	return(ASN1_get_object(pp, plength, ptag, pclass, omax));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_check_infinite_end(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char **p), REG(d0, long len))
{
	return(ASN1_check_infinite_end(p, len));
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_put_object(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char **pp), REG(d0, int constructed), REG(d1, int length), REG(d2, int tag), REG(d3, int xclass))
{
	ASN1_put_object(pp, constructed, length, tag, xclass);
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_object_size(REG(a6, __IFACE_OR_BASE), REG(d0, int constructed), REG(d1, int length), REG(d2, int tag))
{
	return(ASN1_object_size(constructed, length, tag));
}

char * AMISSL_LIB_ENTRY _AmiSSL_ASN1_dup(REG(a6, __IFACE_OR_BASE), REG(a0, int (*i2d)()), REG(a1, char *(*d2i)()), REG(a2, char *x))
{
	return(ASN1_dup(i2d, d2i, x));
}

void * AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_dup(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it), REG(a1, void *x))
{
	return(ASN1_item_dup(it, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_to_UTF8(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char **out), REG(a1, ASN1_STRING *in))
{
	return(ASN1_STRING_to_UTF8(out, in));
}

char * AMISSL_LIB_ENTRY _AmiSSL_ASN1_d2i_bio(REG(a6, __IFACE_OR_BASE), REG(a0, char *(*xnew)()), REG(a1, char *(*d2i)()), REG(a2, BIO *bp), REG(a3, unsigned char **x))
{
	return(ASN1_d2i_bio(xnew, d2i, bp, x));
}

void * AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_d2i_bio(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it), REG(a1, BIO *in), REG(a2, void *x))
{
	return(ASN1_item_d2i_bio(it, in, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_i2d_bio(REG(a6, __IFACE_OR_BASE), REG(a0, int (*i2d)()), REG(a1, BIO *out), REG(a2, unsigned char *x))
{
	return(ASN1_i2d_bio(i2d, out, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_i2d_bio(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it), REG(a1, BIO *out), REG(a2, void *x))
{
	return(ASN1_item_i2d_bio(it, out, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_UTCTIME_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *fp), REG(a1, ASN1_UTCTIME *a))
{
	return(ASN1_UTCTIME_print(fp, a));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_GENERALIZEDTIME_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *fp), REG(a1, ASN1_GENERALIZEDTIME *a))
{
	return(ASN1_GENERALIZEDTIME_print(fp, a));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_TIME_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *fp), REG(a1, ASN1_TIME *a))
{
	return(ASN1_TIME_print(fp, a));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_STRING *v))
{
	return(ASN1_STRING_print(bp, v));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_print_ex(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, ASN1_STRING *str), REG(d0, unsigned long flags))
{
	return(ASN1_STRING_print_ex(out, str, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_parse(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, unsigned char *pp), REG(d0, long len), REG(d1, int indent))
{
	return(ASN1_parse(bp, pp, len, indent));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_parse_dump(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, unsigned char *pp), REG(d0, long len), REG(d1, int indent), REG(d2, int dump))
{
	return(ASN1_parse_dump(bp, pp, len, indent, dump));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_ASN1_tag2str(REG(a6, __IFACE_OR_BASE), REG(d0, int tag))
{
	return(ASN1_tag2str(tag));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ASN1_HEADER(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_HEADER *a), REG(a1, unsigned char **pp))
{
	return(i2d_ASN1_HEADER(a, pp));
}

ASN1_HEADER * AMISSL_LIB_ENTRY _AmiSSL_d2i_ASN1_HEADER(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_HEADER **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_ASN1_HEADER(a, pp, length));
}

ASN1_HEADER * AMISSL_LIB_ENTRY _AmiSSL_ASN1_HEADER_new(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_HEADER_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_HEADER_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_HEADER *a))
{
	ASN1_HEADER_free(a);
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_UNIVERSALSTRING_to_string(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UNIVERSALSTRING *s))
{
	return(ASN1_UNIVERSALSTRING_to_string(s));
}

ASN1_METHOD * AMISSL_LIB_ENTRY _AmiSSL_X509_asn1_meth(REG(a6, __IFACE_OR_BASE))
{
	return(X509_asn1_meth());
}

ASN1_METHOD * AMISSL_LIB_ENTRY _AmiSSL_RSAPrivateKey_asn1_meth(REG(a6, __IFACE_OR_BASE))
{
	return(RSAPrivateKey_asn1_meth());
}

ASN1_METHOD * AMISSL_LIB_ENTRY _AmiSSL_ASN1_IA5STRING_asn1_meth(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_IA5STRING_asn1_meth());
}

ASN1_METHOD * AMISSL_LIB_ENTRY _AmiSSL_ASN1_BIT_STRING_asn1_meth(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_BIT_STRING_asn1_meth());
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_TYPE_set_octetstring(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a), REG(a1, unsigned char *data), REG(d0, int len))
{
	return(ASN1_TYPE_set_octetstring(a, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_TYPE_get_octetstring(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a), REG(a1, unsigned char *data), REG(d0, int max_len))
{
	return(ASN1_TYPE_get_octetstring(a, data, max_len));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_TYPE_set_int_octetstring(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a), REG(d0, long num), REG(a1, unsigned char *data), REG(d1, int len))
{
	return(ASN1_TYPE_set_int_octetstring(a, num, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_TYPE_get_int_octetstring(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a), REG(a1, long *num), REG(a2, unsigned char *data), REG(d0, int max_len))
{
	return(ASN1_TYPE_get_int_octetstring(a, num, data, max_len));
}

STACK * AMISSL_LIB_ENTRY _AmiSSL_ASN1_seq_unpack(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *buf), REG(d0, int len), REG(a1, char *(*d2i)()), REG(a2, void (*free_func)(void *)))
{
	return(ASN1_seq_unpack(buf, len, d2i, free_func));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_ASN1_seq_pack(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *safes), REG(a1, int (*i2d)()), REG(a2, unsigned char **buf), REG(a3, int *len))
{
	return(ASN1_seq_pack(safes, i2d, buf, len));
}

void * AMISSL_LIB_ENTRY _AmiSSL_ASN1_unpack_string(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *oct), REG(a1, char *(*d2i)()))
{
	return(ASN1_unpack_string(oct, d2i));
}

void * AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_unpack(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *oct), REG(a1, const ASN1_ITEM *it))
{
	return(ASN1_item_unpack(oct, it));
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_pack_string(REG(a6, __IFACE_OR_BASE), REG(a0, void *obj), REG(a1, int (*i2d)()), REG(a2, ASN1_OCTET_STRING **oct))
{
	return(ASN1_pack_string(obj, i2d, oct));
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_pack(REG(a6, __IFACE_OR_BASE), REG(a0, void *obj), REG(a1, const ASN1_ITEM *it), REG(a2, ASN1_OCTET_STRING **oct))
{
	return(ASN1_item_pack(obj, it, oct));
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_set_default_mask(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long mask))
{
	ASN1_STRING_set_default_mask(mask);
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_set_default_mask_asc(REG(a6, __IFACE_OR_BASE), REG(a0, char *p))
{
	return(ASN1_STRING_set_default_mask_asc(p));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_get_default_mask(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_STRING_get_default_mask());
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_mbstring_copy(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **out), REG(a1, const unsigned char *in), REG(d0, int len), REG(d1, int inform), REG(d2, unsigned long mask))
{
	return(ASN1_mbstring_copy(out, in, len, inform, mask));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_mbstring_ncopy(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **out), REG(a1, const unsigned char *in), REG(d0, int len), REG(d1, int inform), REG(d2, unsigned long mask), REG(d3, long minsize), REG(d4, long maxsize))
{
	return(ASN1_mbstring_ncopy(out, in, len, inform, mask, minsize, maxsize));
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_set_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **out), REG(a1, const unsigned char *in), REG(d0, int inlen), REG(d1, int inform), REG(d2, int nid))
{
	return(ASN1_STRING_set_by_NID(out, in, inlen, inform, nid));
}

ASN1_STRING_TABLE * AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_TABLE_get(REG(a6, __IFACE_OR_BASE), REG(d0, int nid))
{
	return(ASN1_STRING_TABLE_get(nid));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_TABLE_add(REG(a6, __IFACE_OR_BASE), REG(d0, int a), REG(d1, long b), REG(d2, long c), REG(d3, unsigned long d), REG(d4, unsigned long e))
{
	return(ASN1_STRING_TABLE_add(a, b, c, d, e));
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_TABLE_cleanup(REG(a6, __IFACE_OR_BASE))
{
	ASN1_STRING_TABLE_cleanup();
}

ASN1_VALUE * AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_new(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it))
{
	return(ASN1_item_new(it));
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE *val), REG(a1, const ASN1_ITEM *it))
{
	ASN1_item_free(val, it);
}

ASN1_VALUE * AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **val), REG(a1, unsigned char **in), REG(d0, long len), REG(a2, const ASN1_ITEM *it))
{
	return(ASN1_item_d2i(val, in, len, it));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_i2d(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE *val), REG(a1, unsigned char **out), REG(a2, const ASN1_ITEM *it))
{
	return(ASN1_item_i2d(val, out, it));
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_add_oid_module(REG(a6, __IFACE_OR_BASE))
{
	ASN1_add_oid_module();
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_ASN1_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_ASN1_strings();
}

int AMISSL_LIB_ENTRY _AmiSSL_asn1_GetSequence(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_CTX *c), REG(a1, long *length))
{
	return(asn1_GetSequence(c, length));
}

void AMISSL_LIB_ENTRY _AmiSSL_asn1_add_error(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *address), REG(d0, int offset))
{
	asn1_add_error(address, offset);
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_BOOLEAN_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_BOOLEAN_it());
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_TBOOLEAN_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_TBOOLEAN_it());
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_FBOOLEAN_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_FBOOLEAN_it());
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ASN1_SEQUENCE_it(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_SEQUENCE_it());
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_CBIGNUM_it(REG(a6, __IFACE_OR_BASE))
{
	return(CBIGNUM_it());
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_BIGNUM_it(REG(a6, __IFACE_OR_BASE))
{
	return(BIGNUM_it());
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_LONG_it(REG(a6, __IFACE_OR_BASE))
{
	return(LONG_it());
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ZLONG_it(REG(a6, __IFACE_OR_BASE))
{
	return(ZLONG_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_ex_new(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	return(ASN1_item_ex_new(pval, it));
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_ex_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	ASN1_item_ex_free(pval, it);
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_template_new(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_TEMPLATE *tt))
{
	return(ASN1_template_new(pval, tt));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_primitive_new(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	return(ASN1_primitive_new(pval, it));
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_template_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_TEMPLATE *tt))
{
	ASN1_template_free(pval, tt);
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_template_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char **in), REG(d0, long len), REG(a2, const ASN1_TEMPLATE *tt))
{
	return(ASN1_template_d2i(pval, in, len, tt));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_ex_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char **in), REG(d0, long len), REG(a2, const ASN1_ITEM *it), REG(d1, int tag), REG(d2, int aclass), REG(d3, char opt), REG(a3, ASN1_TLC *ctx))
{
	return(ASN1_item_ex_d2i(pval, in, len, it, tag, aclass, opt, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_ex_i2d(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char **out), REG(a2, const ASN1_ITEM *it), REG(d0, int tag), REG(d1, int aclass))
{
	return(ASN1_item_ex_i2d(pval, out, it, tag, aclass));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_template_i2d(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char **out), REG(a2, const ASN1_TEMPLATE *tt))
{
	return(ASN1_template_i2d(pval, out, tt));
}

void AMISSL_LIB_ENTRY _AmiSSL_ASN1_primitive_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	ASN1_primitive_free(pval, it);
}

int AMISSL_LIB_ENTRY _AmiSSL_asn1_ex_i2c(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char *cont), REG(a2, int *putype), REG(a3, const ASN1_ITEM *it))
{
	return(asn1_ex_i2c(pval, cont, putype, it));
}

int AMISSL_LIB_ENTRY _AmiSSL_asn1_ex_c2i(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char *cont), REG(d0, int len), REG(d1, int utype), REG(a2, char *free_cont), REG(a3, const ASN1_ITEM *it))
{
	return(asn1_ex_c2i(pval, cont, len, utype, free_cont, it));
}

int AMISSL_LIB_ENTRY _AmiSSL_asn1_get_choice_selector(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	return(asn1_get_choice_selector(pval, it));
}

int AMISSL_LIB_ENTRY _AmiSSL_asn1_set_choice_selector(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(d0, int value), REG(a1, const ASN1_ITEM *it))
{
	return(asn1_set_choice_selector(pval, value, it));
}

ASN1_VALUE ** AMISSL_LIB_ENTRY _AmiSSL_asn1_get_field_ptr(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_TEMPLATE *tt))
{
	return(asn1_get_field_ptr(pval, tt));
}

const ASN1_TEMPLATE * AMISSL_LIB_ENTRY _AmiSSL_asn1_do_adb(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_TEMPLATE *tt), REG(d0, int nullerr))
{
	return(asn1_do_adb(pval, tt, nullerr));
}

int AMISSL_LIB_ENTRY _AmiSSL_asn1_do_lock(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(d0, int op), REG(a1, const ASN1_ITEM *it))
{
	return(asn1_do_lock(pval, op, it));
}

void AMISSL_LIB_ENTRY _AmiSSL_asn1_enc_init(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	asn1_enc_init(pval, it);
}

void AMISSL_LIB_ENTRY _AmiSSL_asn1_enc_free(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	asn1_enc_free(pval, it);
}

int AMISSL_LIB_ENTRY _AmiSSL_asn1_enc_restore(REG(a6, __IFACE_OR_BASE), REG(a0, int *len), REG(a1, unsigned char **out), REG(a2, ASN1_VALUE **pval), REG(a3, const ASN1_ITEM *it))
{
	return(asn1_enc_restore(len, out, pval, it));
}

int AMISSL_LIB_ENTRY _AmiSSL_asn1_enc_save(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char *in), REG(d0, int inlen), REG(a2, const ASN1_ITEM *it))
{
	return(asn1_enc_save(pval, in, inlen, it));
}

size_t AMISSL_LIB_ENTRY _AmiSSL_BIO_ctrl_pending(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_ctrl_pending(b));
}

size_t AMISSL_LIB_ENTRY _AmiSSL_BIO_ctrl_wpending(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_ctrl_wpending(b));
}

size_t AMISSL_LIB_ENTRY _AmiSSL_BIO_ctrl_get_write_guarantee(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_ctrl_get_write_guarantee(b));
}

size_t AMISSL_LIB_ENTRY _AmiSSL_BIO_ctrl_get_read_request(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_ctrl_get_read_request(b));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_ctrl_reset_read_request(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_ctrl_reset_read_request(b));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_set_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(d0, int idx), REG(a1, void *data))
{
	return(BIO_set_ex_data(bio, idx, data));
}

void * AMISSL_LIB_ENTRY _AmiSSL_BIO_get_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(d0, int idx))
{
	return(BIO_get_ex_data(bio, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_get_ex_new_index(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(BIO_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_BIO_number_read(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio))
{
	return(BIO_number_read(bio));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_BIO_number_written(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio))
{
	return(BIO_number_written(bio));
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_s_file(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_file());
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_new_file(REG(a6, __IFACE_OR_BASE), REG(a0, const char *filename), REG(a1, const char *mode))
{
	return(BIO_new_file(filename, mode));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_new_fp_amiga(REG(a6, __IFACE_OR_BASE), REG(d0, BPTR stream), REG(d1, int close_flag))
{
	return(BIO_new_fp_amiga(stream, close_flag));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_new(REG(a6, __IFACE_OR_BASE), REG(a0, BIO_METHOD *type))
{
	return(BIO_new(type));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_set(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *a), REG(a1, BIO_METHOD *type))
{
	return(BIO_set(a, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_free(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *a))
{
	return(BIO_free(a));
}

void AMISSL_LIB_ENTRY _AmiSSL_BIO_vfree(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *a))
{
	BIO_vfree(a);
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_read(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, void *data), REG(d0, int len))
{
	return(BIO_read(b, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_gets(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, char *buf), REG(d0, int size))
{
	return(BIO_gets(bp, buf, size));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_write(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, const void *data), REG(d0, int len))
{
	return(BIO_write(b, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_puts(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, const char *buf))
{
	return(BIO_puts(bp, buf));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_indent(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(d0, int indent), REG(d1, int max))
{
	return(BIO_indent(b, indent, max));
}

long AMISSL_LIB_ENTRY _AmiSSL_BIO_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(d0, int cmd), REG(d1, long larg), REG(a1, void *parg))
{
	return(BIO_ctrl(bp, cmd, larg, parg));
}

long AMISSL_LIB_ENTRY _AmiSSL_BIO_callback_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(d0, int cmd), REG(a1, void (*fp)(struct bio_st *, int, const char *, int, long, long)))
{
	return(BIO_callback_ctrl(b, cmd, fp));
}

char * AMISSL_LIB_ENTRY _AmiSSL_BIO_ptr_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(d0, int cmd), REG(d1, long larg))
{
	return(BIO_ptr_ctrl(bp, cmd, larg));
}

long AMISSL_LIB_ENTRY _AmiSSL_BIO_int_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(d0, int cmd), REG(d1, long larg), REG(d2, int iarg))
{
	return(BIO_int_ctrl(bp, cmd, larg, iarg));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_push(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, BIO *append))
{
	return(BIO_push(b, append));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_pop(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_pop(b));
}

void AMISSL_LIB_ENTRY _AmiSSL_BIO_free_all(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *a))
{
	BIO_free_all(a);
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_find_type(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(d0, int bio_type))
{
	return(BIO_find_type(b, bio_type));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_next(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_next(b));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_get_retry_BIO(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, int *reason))
{
	return(BIO_get_retry_BIO(bio, reason));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_get_retry_reason(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio))
{
	return(BIO_get_retry_reason(bio));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_dup_chain(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *in))
{
	return(BIO_dup_chain(in));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_nread0(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, char **buf))
{
	return(BIO_nread0(bio, buf));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_nread(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, char **buf), REG(d0, int num))
{
	return(BIO_nread(bio, buf, num));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_nwrite0(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, char **buf))
{
	return(BIO_nwrite0(bio, buf));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_nwrite(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, char **buf), REG(d0, int num))
{
	return(BIO_nwrite(bio, buf, num));
}

long AMISSL_LIB_ENTRY _AmiSSL_BIO_debug_callback(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(d0, int cmd), REG(a1, const char *argp), REG(d1, int argi), REG(d2, long argl), REG(d3, long ret))
{
	return(BIO_debug_callback(bio, cmd, argp, argi, argl, ret));
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_s_mem(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_mem());
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_new_mem_buf(REG(a6, __IFACE_OR_BASE), REG(a0, void *buf), REG(d0, int len))
{
	return(BIO_new_mem_buf(buf, len));
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_s_socket(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_socket());
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_s_connect(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_connect());
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_s_accept(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_accept());
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_s_fd(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_fd());
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_s_log(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_log());
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_s_bio(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_bio());
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_s_null(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_null());
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_f_null(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_null());
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_f_buffer(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_buffer());
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_f_nbio_test(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_nbio_test());
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_sock_should_retry(REG(a6, __IFACE_OR_BASE), REG(d0, int i))
{
	return(BIO_sock_should_retry(i));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_sock_non_fatal_error(REG(a6, __IFACE_OR_BASE), REG(d0, int error))
{
	return(BIO_sock_non_fatal_error(error));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_fd_should_retry(REG(a6, __IFACE_OR_BASE), REG(d0, int i))
{
	return(BIO_fd_should_retry(i));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_fd_non_fatal_error(REG(a6, __IFACE_OR_BASE), REG(d0, int error))
{
	return(BIO_fd_non_fatal_error(error));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_dump(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, const char *bytes), REG(d0, int len))
{
	return(BIO_dump(b, bytes, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_dump_indent(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, const char *bytes), REG(d0, int len), REG(d1, int indent))
{
	return(BIO_dump_indent(b, bytes, len, indent));
}

struct hostent * AMISSL_LIB_ENTRY _AmiSSL_BIO_gethostbyname(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name))
{
	return(BIO_gethostbyname(name));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_sock_error(REG(a6, __IFACE_OR_BASE), REG(d0, int sock))
{
	return(BIO_sock_error(sock));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_socket_ioctl(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(d1, long type), REG(a0, void *arg))
{
	return(BIO_socket_ioctl(fd, type, arg));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_socket_nbio(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(d1, int mode))
{
	return(BIO_socket_nbio(fd, mode));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_get_port(REG(a6, __IFACE_OR_BASE), REG(a0, const char *str), REG(a1, unsigned short *port_ptr))
{
	return(BIO_get_port(str, port_ptr));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_get_host_ip(REG(a6, __IFACE_OR_BASE), REG(a0, const char *str), REG(a1, unsigned char *ip))
{
	return(BIO_get_host_ip(str, ip));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_get_accept_socket(REG(a6, __IFACE_OR_BASE), REG(a0, char *host_port), REG(d0, int mode))
{
	return(BIO_get_accept_socket(host_port, mode));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_accept(REG(a6, __IFACE_OR_BASE), REG(d0, int sock), REG(a0, char **ip_port))
{
	return(BIO_accept(sock, ip_port));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_sock_init(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_sock_init());
}

void AMISSL_LIB_ENTRY _AmiSSL_BIO_sock_cleanup(REG(a6, __IFACE_OR_BASE))
{
	BIO_sock_cleanup();
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_set_tcp_ndelay(REG(a6, __IFACE_OR_BASE), REG(d0, int sock), REG(d1, int turn_on))
{
	return(BIO_set_tcp_ndelay(sock, turn_on));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_new_socket(REG(a6, __IFACE_OR_BASE), REG(d0, int sock), REG(d1, int close_flag))
{
	return(BIO_new_socket(sock, close_flag));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_new_fd(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(d1, int close_flag))
{
	return(BIO_new_fd(fd, close_flag));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_new_connect(REG(a6, __IFACE_OR_BASE), REG(a0, char *host_port))
{
	return(BIO_new_connect(host_port));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_new_accept(REG(a6, __IFACE_OR_BASE), REG(a0, char *host_port))
{
	return(BIO_new_accept(host_port));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_new_bio_pair(REG(a6, __IFACE_OR_BASE), REG(a0, BIO **bio1), REG(d0, size_t writebuf1), REG(a1, BIO **bio2), REG(d1, size_t writebuf2))
{
	return(BIO_new_bio_pair(bio1, writebuf1, bio2, writebuf2));
}

void AMISSL_LIB_ENTRY _AmiSSL_BIO_copy_next_retry(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	BIO_copy_next_retry(b);
}

#ifndef __amigaos4__
int AMISSL_LIB_ENTRY _AmiSSL_BIO_vprintf(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, const char *format), REG(d0, va_list args))
{
	return(BIO_vprintf(bio, format, args));
}
#endif

#ifndef __amigaos4__
int AMISSL_LIB_ENTRY _AmiSSL_BIO_vsnprintf(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, size_t n), REG(a1, const char *format), REG(d1, va_list args))
{
	return(BIO_vsnprintf(buf, n, format, args));
}
#endif

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_BIO_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_BIO_strings();
}

const BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_BN_value_one(REG(a6, __IFACE_OR_BASE))
{
	return(BN_value_one());
}

char * AMISSL_LIB_ENTRY _AmiSSL_BN_options(REG(a6, __IFACE_OR_BASE))
{
	return(BN_options());
}

BN_CTX * AMISSL_LIB_ENTRY _AmiSSL_BN_CTX_new(REG(a6, __IFACE_OR_BASE))
{
	return(BN_CTX_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_CTX_init(REG(a6, __IFACE_OR_BASE), REG(a0, BN_CTX *c))
{
	BN_CTX_init(c);
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_CTX_free(REG(a6, __IFACE_OR_BASE), REG(a0, BN_CTX *c))
{
	BN_CTX_free(c);
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_CTX_start(REG(a6, __IFACE_OR_BASE), REG(a0, BN_CTX *ctx))
{
	BN_CTX_start(ctx);
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_BN_CTX_get(REG(a6, __IFACE_OR_BASE), REG(a0, BN_CTX *ctx))
{
	return(BN_CTX_get(ctx));
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_CTX_end(REG(a6, __IFACE_OR_BASE), REG(a0, BN_CTX *ctx))
{
	BN_CTX_end(ctx);
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_rand(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *rnd), REG(d0, int bits), REG(d1, int top), REG(d2, int bottom))
{
	return(BN_rand(rnd, bits, top, bottom));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_pseudo_rand(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *rnd), REG(d0, int bits), REG(d1, int top), REG(d2, int bottom))
{
	return(BN_pseudo_rand(rnd, bits, top, bottom));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_rand_range(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *rnd), REG(a1, BIGNUM *range))
{
	return(BN_rand_range(rnd, range));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_pseudo_rand_range(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *rnd), REG(a1, BIGNUM *range))
{
	return(BN_pseudo_rand_range(rnd, range));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_num_bits(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a))
{
	return(BN_num_bits(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_num_bits_word(REG(a6, __IFACE_OR_BASE), REG(d0, BN_ULONG a))
{
	return(BN_num_bits_word(a));
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_BN_new(REG(a6, __IFACE_OR_BASE))
{
	return(BN_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_init(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a))
{
	BN_init(a);
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_clear_free(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a))
{
	BN_clear_free(a);
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_BN_copy(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(a1, const BIGNUM *b))
{
	return(BN_copy(a, b));
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_swap(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(a1, BIGNUM *b))
{
	BN_swap(a, b);
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_BN_bin2bn(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *s), REG(d0, int len), REG(a1, BIGNUM *ret))
{
	return(BN_bin2bn(s, len, ret));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_bn2bin(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(a1, unsigned char *to))
{
	return(BN_bn2bin(a, to));
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_BN_mpi2bn(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *s), REG(d0, int len), REG(a1, BIGNUM *ret))
{
	return(BN_mpi2bn(s, len, ret));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_bn2mpi(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(a1, unsigned char *to))
{
	return(BN_bn2mpi(a, to));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_sub(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b))
{
	return(BN_sub(r, a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_usub(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b))
{
	return(BN_usub(r, a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_uadd(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b))
{
	return(BN_uadd(r, a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_add(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b))
{
	return(BN_add(r, a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mul(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, BN_CTX *ctx))
{
	return(BN_mul(r, a, b, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_sqr(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, BN_CTX *ctx))
{
	return(BN_sqr(r, a, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_div(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *dv), REG(a1, BIGNUM *rem), REG(a2, const BIGNUM *m), REG(a3, const BIGNUM *d), REG(d0, BN_CTX *ctx))
{
	return(BN_div(dv, rem, m, d, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_nnmod(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *m), REG(a2, const BIGNUM *d), REG(a3, BN_CTX *ctx))
{
	return(BN_nnmod(r, m, d, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_add(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_add(r, a, b, m, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_add_quick(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, const BIGNUM *m))
{
	return(BN_mod_add_quick(r, a, b, m));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_sub(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_sub(r, a, b, m, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_sub_quick(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, const BIGNUM *m))
{
	return(BN_mod_sub_quick(r, a, b, m));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_mul(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_mul(r, a, b, m, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_sqr(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *m), REG(a3, BN_CTX *ctx))
{
	return(BN_mod_sqr(r, a, m, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_lshift1(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *m), REG(a3, BN_CTX *ctx))
{
	return(BN_mod_lshift1(r, a, m, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_lshift1_quick(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *m))
{
	return(BN_mod_lshift1_quick(r, a, m));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_lshift(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(d0, int n), REG(a2, const BIGNUM *m), REG(a3, BN_CTX *ctx))
{
	return(BN_mod_lshift(r, a, n, m, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_lshift_quick(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(d0, int n), REG(a2, const BIGNUM *m))
{
	return(BN_mod_lshift_quick(r, a, n, m));
}

BN_ULONG AMISSL_LIB_ENTRY _AmiSSL_BN_mod_word(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(d0, BN_ULONG w))
{
	return(BN_mod_word(a, w));
}

BN_ULONG AMISSL_LIB_ENTRY _AmiSSL_BN_div_word(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, BN_ULONG w))
{
	return(BN_div_word(a, w));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mul_word(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, BN_ULONG w))
{
	return(BN_mul_word(a, w));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_add_word(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, BN_ULONG w))
{
	return(BN_add_word(a, w));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_sub_word(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, BN_ULONG w))
{
	return(BN_sub_word(a, w));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_set_word(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, BN_ULONG w))
{
	return(BN_set_word(a, w));
}

BN_ULONG AMISSL_LIB_ENTRY _AmiSSL_BN_get_word(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a))
{
	return(BN_get_word(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(a1, const BIGNUM *b))
{
	return(BN_cmp(a, b));
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_free(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a))
{
	BN_free(a);
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_is_bit_set(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(d0, int n))
{
	return(BN_is_bit_set(a, n));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_lshift(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(d0, int n))
{
	return(BN_lshift(r, a, n));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_lshift1(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a))
{
	return(BN_lshift1(r, a));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_exp(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *p), REG(a3, BN_CTX *ctx))
{
	return(BN_exp(r, a, p, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_exp(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *p), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_exp(r, a, p, m, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_exp_mont(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *p), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx), REG(d1, BN_MONT_CTX *m_ctx))
{
	return(BN_mod_exp_mont(r, a, p, m, ctx, m_ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_exp_mont_word(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(d0, BN_ULONG a), REG(a1, const BIGNUM *p), REG(a2, const BIGNUM *m), REG(a3, BN_CTX *ctx), REG(d1, BN_MONT_CTX *m_ctx))
{
	return(BN_mod_exp_mont_word(r, a, p, m, ctx, m_ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_exp2_mont(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a1), REG(a2, const BIGNUM *p1), REG(a3, const BIGNUM *a2), REG(d0, const BIGNUM *p2), REG(d1, const BIGNUM *m), REG(d2, BN_CTX *ctx), REG(d3, BN_MONT_CTX *m_ctx))
{
	return(BN_mod_exp2_mont(r, a1, p1, a2, p2, m, ctx, m_ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_exp_simple(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *p), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_exp_simple(r, a, p, m, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mask_bits(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, int n))
{
	return(BN_mask_bits(a, n));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *fp), REG(a1, const BIGNUM *a))
{
	return(BN_print(fp, a));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_reciprocal(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *m), REG(d0, int len), REG(a2, BN_CTX *ctx))
{
	return(BN_reciprocal(r, m, len, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_rshift(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(d0, int n))
{
	return(BN_rshift(r, a, n));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_rshift1(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a))
{
	return(BN_rshift1(r, a));
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_clear(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a))
{
	BN_clear(a);
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_BN_dup(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a))
{
	return(BN_dup(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_ucmp(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(a1, const BIGNUM *b))
{
	return(BN_ucmp(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_set_bit(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, int n))
{
	return(BN_set_bit(a, n));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_clear_bit(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, int n))
{
	return(BN_clear_bit(a, n));
}

char * AMISSL_LIB_ENTRY _AmiSSL_BN_bn2hex(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a))
{
	return(BN_bn2hex(a));
}

char * AMISSL_LIB_ENTRY _AmiSSL_BN_bn2dec(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a))
{
	return(BN_bn2dec(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_hex2bn(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM **a), REG(a1, const char *str))
{
	return(BN_hex2bn(a, str));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_dec2bn(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM **a), REG(a1, const char *str))
{
	return(BN_dec2bn(a, str));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_gcd(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, BN_CTX *ctx))
{
	return(BN_gcd(r, a, b, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_kronecker(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(a1, const BIGNUM *b), REG(a2, BN_CTX *ctx))
{
	return(BN_kronecker(a, b, ctx));
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_BN_mod_inverse(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *ret), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *n), REG(a3, BN_CTX *ctx))
{
	return(BN_mod_inverse(ret, a, n, ctx));
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_BN_mod_sqrt(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *ret), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *n), REG(a3, BN_CTX *ctx))
{
	return(BN_mod_sqrt(ret, a, n, ctx));
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_BN_generate_prime(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *ret), REG(d0, int bits), REG(d1, int safe), REG(a1, const BIGNUM *add), REG(a2, const BIGNUM *rem), REG(a3, void (*callback)(int, int, void *)), REG(d2, void *cb_arg))
{
	return(BN_generate_prime(ret, bits, safe, add, rem, callback, cb_arg));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_is_prime(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *p), REG(d0, int nchecks), REG(a1, void (*callback)(int, int, void *)), REG(a2, BN_CTX *ctx), REG(a3, void *cb_arg))
{
	return(BN_is_prime(p, nchecks, callback, ctx, cb_arg));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_is_prime_fasttest(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *p), REG(d0, int nchecks), REG(a1, void (*callback)(int, int, void *)), REG(a2, BN_CTX *ctx), REG(a3, void *cb_arg), REG(d1, int do_trial_division))
{
	return(BN_is_prime_fasttest(p, nchecks, callback, ctx, cb_arg, do_trial_division));
}

BN_MONT_CTX * AMISSL_LIB_ENTRY _AmiSSL_BN_MONT_CTX_new(REG(a6, __IFACE_OR_BASE))
{
	return(BN_MONT_CTX_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_MONT_CTX_init(REG(a6, __IFACE_OR_BASE), REG(a0, BN_MONT_CTX *ctx))
{
	BN_MONT_CTX_init(ctx);
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_mul_montgomery(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, BN_MONT_CTX *mont), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_mul_montgomery(r, a, b, mont, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_from_montgomery(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, BN_MONT_CTX *mont), REG(a3, BN_CTX *ctx))
{
	return(BN_from_montgomery(r, a, mont, ctx));
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_MONT_CTX_free(REG(a6, __IFACE_OR_BASE), REG(a0, BN_MONT_CTX *mont))
{
	BN_MONT_CTX_free(mont);
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_MONT_CTX_set(REG(a6, __IFACE_OR_BASE), REG(a0, BN_MONT_CTX *mont), REG(a1, const BIGNUM *mod), REG(a2, BN_CTX *ctx))
{
	return(BN_MONT_CTX_set(mont, mod, ctx));
}

BN_MONT_CTX * AMISSL_LIB_ENTRY _AmiSSL_BN_MONT_CTX_copy(REG(a6, __IFACE_OR_BASE), REG(a0, BN_MONT_CTX *to), REG(a1, BN_MONT_CTX *from))
{
	return(BN_MONT_CTX_copy(to, from));
}

BN_BLINDING * AMISSL_LIB_ENTRY _AmiSSL_BN_BLINDING_new(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *A), REG(a1, BIGNUM *Ai), REG(a2, BIGNUM *mod))
{
	return(BN_BLINDING_new(A, Ai, mod));
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_BLINDING_free(REG(a6, __IFACE_OR_BASE), REG(a0, BN_BLINDING *b))
{
	BN_BLINDING_free(b);
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_BLINDING_update(REG(a6, __IFACE_OR_BASE), REG(a0, BN_BLINDING *b), REG(a1, BN_CTX *ctx))
{
	return(BN_BLINDING_update(b, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_BLINDING_convert(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *n), REG(a1, BN_BLINDING *r), REG(a2, BN_CTX *ctx))
{
	return(BN_BLINDING_convert(n, r, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_BLINDING_invert(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *n), REG(a1, BN_BLINDING *b), REG(a2, BN_CTX *ctx))
{
	return(BN_BLINDING_invert(n, b, ctx));
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_set_params(REG(a6, __IFACE_OR_BASE), REG(d0, int mul), REG(d1, int high), REG(d2, int low), REG(d3, int mont))
{
	BN_set_params(mul, high, low, mont);
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_get_params(REG(a6, __IFACE_OR_BASE), REG(d0, int which))
{
	return(BN_get_params(which));
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_RECP_CTX_init(REG(a6, __IFACE_OR_BASE), REG(a0, BN_RECP_CTX *recp))
{
	BN_RECP_CTX_init(recp);
}

BN_RECP_CTX * AMISSL_LIB_ENTRY _AmiSSL_BN_RECP_CTX_new(REG(a6, __IFACE_OR_BASE))
{
	return(BN_RECP_CTX_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_BN_RECP_CTX_free(REG(a6, __IFACE_OR_BASE), REG(a0, BN_RECP_CTX *recp))
{
	BN_RECP_CTX_free(recp);
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_RECP_CTX_set(REG(a6, __IFACE_OR_BASE), REG(a0, BN_RECP_CTX *recp), REG(a1, const BIGNUM *rdiv), REG(a2, BN_CTX *ctx))
{
	return(BN_RECP_CTX_set(recp, rdiv, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_mul_reciprocal(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *x), REG(a2, const BIGNUM *y), REG(a3, BN_RECP_CTX *recp), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_mul_reciprocal(r, x, y, recp, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_mod_exp_recp(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *p), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_exp_recp(r, a, p, m, ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_div_recp(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *dv), REG(a1, BIGNUM *rem), REG(a2, const BIGNUM *m), REG(a3, BN_RECP_CTX *recp), REG(d0, BN_CTX *ctx))
{
	return(BN_div_recp(dv, rem, m, recp, ctx));
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_bn_expand2(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, int words))
{
	return(bn_expand2(a, words));
}

BIGNUM * AMISSL_LIB_ENTRY _AmiSSL_bn_dup_expand(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(d0, int words))
{
	return(bn_dup_expand(a, words));
}

BN_ULONG AMISSL_LIB_ENTRY _AmiSSL_bn_mul_add_words(REG(a6, __IFACE_OR_BASE), REG(a0, BN_ULONG *rp), REG(a1, const BN_ULONG *ap), REG(d0, int num), REG(d1, BN_ULONG w))
{
	return(bn_mul_add_words(rp, ap, num, w));
}

BN_ULONG AMISSL_LIB_ENTRY _AmiSSL_bn_mul_words(REG(a6, __IFACE_OR_BASE), REG(a0, BN_ULONG *rp), REG(a1, const BN_ULONG *ap), REG(d0, int num), REG(d1, BN_ULONG w))
{
	return(bn_mul_words(rp, ap, num, w));
}

void AMISSL_LIB_ENTRY _AmiSSL_bn_sqr_words(REG(a6, __IFACE_OR_BASE), REG(a0, BN_ULONG *rp), REG(a1, const BN_ULONG *ap), REG(d0, int num))
{
	bn_sqr_words(rp, ap, num);
}

BN_ULONG AMISSL_LIB_ENTRY _AmiSSL_bn_div_words(REG(a6, __IFACE_OR_BASE), REG(d0, BN_ULONG h), REG(d1, BN_ULONG l), REG(d2, BN_ULONG d))
{
	return(bn_div_words(h, l, d));
}

BN_ULONG AMISSL_LIB_ENTRY _AmiSSL_bn_add_words(REG(a6, __IFACE_OR_BASE), REG(a0, BN_ULONG *rp), REG(a1, const BN_ULONG *ap), REG(a2, const BN_ULONG *bp), REG(d0, int num))
{
	return(bn_add_words(rp, ap, bp, num));
}

BN_ULONG AMISSL_LIB_ENTRY _AmiSSL_bn_sub_words(REG(a6, __IFACE_OR_BASE), REG(a0, BN_ULONG *rp), REG(a1, const BN_ULONG *ap), REG(a2, const BN_ULONG *bp), REG(d0, int num))
{
	return(bn_sub_words(rp, ap, bp, num));
}

int AMISSL_LIB_ENTRY _AmiSSL_BN_bntest_rand(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *rnd), REG(d0, int bits), REG(d1, int top), REG(d2, int bottom))
{
	return(BN_bntest_rand(rnd, bits, top, bottom));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_BN_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_BN_strings();
}

BUF_MEM * AMISSL_LIB_ENTRY _AmiSSL_BUF_MEM_new(REG(a6, __IFACE_OR_BASE))
{
	return(BUF_MEM_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_BUF_MEM_free(REG(a6, __IFACE_OR_BASE), REG(a0, BUF_MEM *a))
{
	BUF_MEM_free(a);
}

int AMISSL_LIB_ENTRY _AmiSSL_BUF_MEM_grow(REG(a6, __IFACE_OR_BASE), REG(a0, BUF_MEM *str), REG(d0, int len))
{
	return(BUF_MEM_grow(str, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_BUF_MEM_grow_clean(REG(a6, __IFACE_OR_BASE), REG(a0, BUF_MEM *str), REG(d0, int len))
{
	return(BUF_MEM_grow_clean(str, len));
}

char * AMISSL_LIB_ENTRY _AmiSSL_BUF_strdup(REG(a6, __IFACE_OR_BASE), REG(a0, const char *str))
{
	return(BUF_strdup(str));
}

size_t AMISSL_LIB_ENTRY _AmiSSL_BUF_strlcpy(REG(a6, __IFACE_OR_BASE), REG(a0, char *dst), REG(a1, const char *src), REG(d0, size_t siz))
{
	return(BUF_strlcpy(dst, src, siz));
}

size_t AMISSL_LIB_ENTRY _AmiSSL_BUF_strlcat(REG(a6, __IFACE_OR_BASE), REG(a0, char *dst), REG(a1, const char *src), REG(d0, size_t siz))
{
	return(BUF_strlcat(dst, src, siz));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_BUF_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_BUF_strings();
}

COMP_CTX * AMISSL_LIB_ENTRY _AmiSSL_COMP_CTX_new(REG(a6, __IFACE_OR_BASE), REG(a0, COMP_METHOD *meth))
{
	return(COMP_CTX_new(meth));
}

void AMISSL_LIB_ENTRY _AmiSSL_COMP_CTX_free(REG(a6, __IFACE_OR_BASE), REG(a0, COMP_CTX *ctx))
{
	COMP_CTX_free(ctx);
}

int AMISSL_LIB_ENTRY _AmiSSL_COMP_compress_block(REG(a6, __IFACE_OR_BASE), REG(a0, COMP_CTX *ctx), REG(a1, unsigned char *out), REG(d0, int olen), REG(a2, unsigned char *in), REG(d1, int ilen))
{
	return(COMP_compress_block(ctx, out, olen, in, ilen));
}

int AMISSL_LIB_ENTRY _AmiSSL_COMP_expand_block(REG(a6, __IFACE_OR_BASE), REG(a0, COMP_CTX *ctx), REG(a1, unsigned char *out), REG(d0, int olen), REG(a2, unsigned char *in), REG(d1, int ilen))
{
	return(COMP_expand_block(ctx, out, olen, in, ilen));
}

COMP_METHOD * AMISSL_LIB_ENTRY _AmiSSL_COMP_rle(REG(a6, __IFACE_OR_BASE))
{
	return(COMP_rle());
}

COMP_METHOD * AMISSL_LIB_ENTRY _AmiSSL_COMP_zlib(REG(a6, __IFACE_OR_BASE))
{
	return(COMP_zlib());
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_COMP_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_COMP_strings();
}

int AMISSL_LIB_ENTRY _AmiSSL_CONF_set_default_method(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_METHOD *meth))
{
	return(CONF_set_default_method(meth));
}

void AMISSL_LIB_ENTRY _AmiSSL_CONF_set_nconf(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, LHASH *hash))
{
	CONF_set_nconf(conf, hash);
}

LHASH * AMISSL_LIB_ENTRY _AmiSSL_CONF_load(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, const char *file), REG(a2, long *eline))
{
	return(CONF_load(conf, file, eline));
}

LHASH * AMISSL_LIB_ENTRY _AmiSSL_CONF_load_bio(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, BIO *bp), REG(a2, long *eline))
{
	return(CONF_load_bio(conf, bp, eline));
}

STACK_OF(CONF_VALUE) * AMISSL_LIB_ENTRY _AmiSSL_CONF_get_section(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, const char *section))
{
	return(CONF_get_section(conf, section));
}

char * AMISSL_LIB_ENTRY _AmiSSL_CONF_get_string(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, const char *group), REG(a2, const char *name))
{
	return(CONF_get_string(conf, group, name));
}

long AMISSL_LIB_ENTRY _AmiSSL_CONF_get_number(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, const char *group), REG(a2, const char *name))
{
	return(CONF_get_number(conf, group, name));
}

void AMISSL_LIB_ENTRY _AmiSSL_CONF_free(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf))
{
	CONF_free(conf);
}

int AMISSL_LIB_ENTRY _AmiSSL_CONF_dump_bio(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, BIO *out))
{
	return(CONF_dump_bio(conf, out));
}

void AMISSL_LIB_ENTRY _AmiSSL_OPENSSL_config(REG(a6, __IFACE_OR_BASE), REG(a0, const char *config_name))
{
	OPENSSL_config(config_name);
}

void AMISSL_LIB_ENTRY _AmiSSL_OPENSSL_no_config(REG(a6, __IFACE_OR_BASE))
{
	OPENSSL_no_config();
}

CONF * AMISSL_LIB_ENTRY _AmiSSL_NCONF_new(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_METHOD *meth))
{
	return(NCONF_new(meth));
}

CONF_METHOD * AMISSL_LIB_ENTRY _AmiSSL_NCONF_default(REG(a6, __IFACE_OR_BASE))
{
	return(NCONF_default());
}

CONF_METHOD * AMISSL_LIB_ENTRY _AmiSSL_NCONF_WIN32(REG(a6, __IFACE_OR_BASE))
{
	return(NCONF_WIN32());
}

void AMISSL_LIB_ENTRY _AmiSSL_NCONF_free(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf))
{
	NCONF_free(conf);
}

void AMISSL_LIB_ENTRY _AmiSSL_NCONF_free_data(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf))
{
	NCONF_free_data(conf);
}

int AMISSL_LIB_ENTRY _AmiSSL_NCONF_load(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, const char *file), REG(a2, long *eline))
{
	return(NCONF_load(conf, file, eline));
}

int AMISSL_LIB_ENTRY _AmiSSL_NCONF_load_bio(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, BIO *bp), REG(a2, long *eline))
{
	return(NCONF_load_bio(conf, bp, eline));
}

STACK_OF(CONF_VALUE) * AMISSL_LIB_ENTRY _AmiSSL_NCONF_get_section(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, const char *section))
{
	return(NCONF_get_section(conf, section));
}

char * AMISSL_LIB_ENTRY _AmiSSL_NCONF_get_string(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, const char *group), REG(a2, const char *name))
{
	return(NCONF_get_string(conf, group, name));
}

int AMISSL_LIB_ENTRY _AmiSSL_NCONF_get_number_e(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, const char *group), REG(a2, const char *name), REG(a3, long *result))
{
	return(NCONF_get_number_e(conf, group, name, result));
}

int AMISSL_LIB_ENTRY _AmiSSL_NCONF_dump_bio(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, BIO *out))
{
	return(NCONF_dump_bio(conf, out));
}

int AMISSL_LIB_ENTRY _AmiSSL_CONF_modules_load(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *cnf), REG(a1, const char *appname), REG(d0, unsigned long flags))
{
	return(CONF_modules_load(cnf, appname, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_CONF_modules_load_file(REG(a6, __IFACE_OR_BASE), REG(a0, const char *filename), REG(a1, const char *appname), REG(d0, unsigned long flags))
{
	return(CONF_modules_load_file(filename, appname, flags));
}

void AMISSL_LIB_ENTRY _AmiSSL_CONF_modules_unload(REG(a6, __IFACE_OR_BASE), REG(d0, int all))
{
	CONF_modules_unload(all);
}

void AMISSL_LIB_ENTRY _AmiSSL_CONF_modules_finish(REG(a6, __IFACE_OR_BASE))
{
	CONF_modules_finish();
}

void AMISSL_LIB_ENTRY _AmiSSL_CONF_modules_free(REG(a6, __IFACE_OR_BASE))
{
	CONF_modules_free();
}

int AMISSL_LIB_ENTRY _AmiSSL_CONF_module_add(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(a1, conf_init_func *ifunc), REG(a2, conf_finish_func *ffunc))
{
	return(CONF_module_add(name, ifunc, ffunc));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_CONF_imodule_get_name(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF_IMODULE *md))
{
	return(CONF_imodule_get_name(md));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_CONF_imodule_get_value(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF_IMODULE *md))
{
	return(CONF_imodule_get_value(md));
}

void * AMISSL_LIB_ENTRY _AmiSSL_CONF_imodule_get_usr_data(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF_IMODULE *md))
{
	return(CONF_imodule_get_usr_data(md));
}

void AMISSL_LIB_ENTRY _AmiSSL_CONF_imodule_set_usr_data(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_IMODULE *md), REG(a1, void *usr_data))
{
	CONF_imodule_set_usr_data(md, usr_data);
}

CONF_MODULE * AMISSL_LIB_ENTRY _AmiSSL_CONF_imodule_get_module(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF_IMODULE *md))
{
	return(CONF_imodule_get_module(md));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_CONF_imodule_get_flags(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF_IMODULE *md))
{
	return(CONF_imodule_get_flags(md));
}

void AMISSL_LIB_ENTRY _AmiSSL_CONF_imodule_set_flags(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_IMODULE *md), REG(d0, unsigned long flags))
{
	CONF_imodule_set_flags(md, flags);
}

void * AMISSL_LIB_ENTRY _AmiSSL_CONF_module_get_usr_data(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_MODULE *pmod))
{
	return(CONF_module_get_usr_data(pmod));
}

void AMISSL_LIB_ENTRY _AmiSSL_CONF_module_set_usr_data(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_MODULE *pmod), REG(a1, void *usr_data))
{
	CONF_module_set_usr_data(pmod, usr_data);
}

char * AMISSL_LIB_ENTRY _AmiSSL_CONF_get1_default_config_file(REG(a6, __IFACE_OR_BASE))
{
	return(CONF_get1_default_config_file());
}

int AMISSL_LIB_ENTRY _AmiSSL_CONF_parse_list(REG(a6, __IFACE_OR_BASE), REG(a0, const char *list), REG(d0, int sep), REG(d1, int nospc), REG(a1, int (*list_cb)(const char *elem, int len, void *usr)), REG(a2, void *arg))
{
	return(CONF_parse_list(list, sep, nospc, list_cb, arg));
}

void AMISSL_LIB_ENTRY _AmiSSL_OPENSSL_load_builtin_modules(REG(a6, __IFACE_OR_BASE))
{
	OPENSSL_load_builtin_modules();
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_CONF_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_CONF_strings();
}

CONF_VALUE * AMISSL_LIB_ENTRY _AmiSSL__CONF_new_section(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, const char *section))
{
	return(_CONF_new_section(conf, section));
}

CONF_VALUE * AMISSL_LIB_ENTRY _AmiSSL__CONF_get_section(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, const char *section))
{
	return(_CONF_get_section(conf, section));
}

STACK_OF(CONF_VALUE) * AMISSL_LIB_ENTRY _AmiSSL__CONF_get_section_values(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, const char *section))
{
	return(_CONF_get_section_values(conf, section));
}

int AMISSL_LIB_ENTRY _AmiSSL__CONF_add_string(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, CONF_VALUE *section), REG(a2, CONF_VALUE *value))
{
	return(_CONF_add_string(conf, section, value));
}

char * AMISSL_LIB_ENTRY _AmiSSL__CONF_get_string(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, const char *section), REG(a2, const char *name))
{
	return(_CONF_get_string(conf, section, name));
}

int AMISSL_LIB_ENTRY _AmiSSL__CONF_new_data(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf))
{
	return(_CONF_new_data(conf));
}

void AMISSL_LIB_ENTRY _AmiSSL__CONF_free_data(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf))
{
	_CONF_free_data(conf);
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_mem_ctrl(REG(a6, __IFACE_OR_BASE), REG(d0, int mode))
{
	return(CRYPTO_mem_ctrl(mode));
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_is_mem_check_on(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_is_mem_check_on());
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSLeay_version(REG(a6, __IFACE_OR_BASE), REG(d0, int type))
{
	return(SSLeay_version(type));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_SSLeay(REG(a6, __IFACE_OR_BASE))
{
	return(SSLeay());
}

int AMISSL_LIB_ENTRY _AmiSSL_OPENSSL_issetugid(REG(a6, __IFACE_OR_BASE))
{
	return(OPENSSL_issetugid());
}

const CRYPTO_EX_DATA_IMPL * AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_ex_data_implementation(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_get_ex_data_implementation());
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_ex_data_implementation(REG(a6, __IFACE_OR_BASE), REG(a0, const CRYPTO_EX_DATA_IMPL *i))
{
	return(CRYPTO_set_ex_data_implementation(i));
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_ex_data_new_class(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_ex_data_new_class());
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_ex_new_index(REG(a6, __IFACE_OR_BASE), REG(d0, int class_index), REG(d1, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(CRYPTO_get_ex_new_index(class_index, argl, argp, new_func, dup_func, free_func));
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_new_ex_data(REG(a6, __IFACE_OR_BASE), REG(d0, int class_index), REG(a0, void *obj), REG(a1, CRYPTO_EX_DATA *ad))
{
	return(CRYPTO_new_ex_data(class_index, obj, ad));
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_dup_ex_data(REG(a6, __IFACE_OR_BASE), REG(d0, int class_index), REG(a0, CRYPTO_EX_DATA *to), REG(a1, CRYPTO_EX_DATA *from))
{
	return(CRYPTO_dup_ex_data(class_index, to, from));
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_free_ex_data(REG(a6, __IFACE_OR_BASE), REG(d0, int class_index), REG(a0, void *obj), REG(a1, CRYPTO_EX_DATA *ad))
{
	CRYPTO_free_ex_data(class_index, obj, ad);
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, CRYPTO_EX_DATA *ad), REG(d0, int idx), REG(a1, void *val))
{
	return(CRYPTO_set_ex_data(ad, idx, val));
}

void * AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, const CRYPTO_EX_DATA *ad), REG(d0, int idx))
{
	return(CRYPTO_get_ex_data(ad, idx));
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_cleanup_all_ex_data(REG(a6, __IFACE_OR_BASE))
{
	CRYPTO_cleanup_all_ex_data();
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_new_lockid(REG(a6, __IFACE_OR_BASE), REG(a0, char *name))
{
	return(CRYPTO_get_new_lockid(name));
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_num_locks(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_num_locks());
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_lock(REG(a6, __IFACE_OR_BASE), REG(d0, int mode), REG(d1, int type), REG(a0, const char *file), REG(d2, int line))
{
	CRYPTO_lock(mode, type, file, line);
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_locking_callback(REG(a6, __IFACE_OR_BASE), REG(a0, void (*func)(int mode, int type, const char *file, int line)))
{
	CRYPTO_set_locking_callback(func);
}

void AMISSL_LIB_ENTRY (*_AmiSSL_CRYPTO_get_locking_callback(REG(a6, __IFACE_OR_BASE)))(int mode, int type, const char *file, int line)
{
	return(CRYPTO_get_locking_callback());
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_add_lock_callback(REG(a6, __IFACE_OR_BASE), REG(a0, int (*func)(int *num, int mount, int type, const char *file, int line)))
{
	CRYPTO_set_add_lock_callback(func);
}

int AMISSL_LIB_ENTRY (*_AmiSSL_CRYPTO_get_add_lock_callback(REG(a6, __IFACE_OR_BASE)))(int *num, int mount, int type, const char *file, int line)
{
	return(CRYPTO_get_add_lock_callback());
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_id_callback(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long (*func)(void)))
{
	CRYPTO_set_id_callback(func);
}

unsigned long AMISSL_LIB_ENTRY (*_AmiSSL_CRYPTO_get_id_callback(REG(a6, __IFACE_OR_BASE)))(void)
{
	return(CRYPTO_get_id_callback());
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_thread_id(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_thread_id());
}

const char * AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_lock_name(REG(a6, __IFACE_OR_BASE), REG(d0, int type))
{
	return(CRYPTO_get_lock_name(type));
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_add_lock(REG(a6, __IFACE_OR_BASE), REG(a0, int *pointer), REG(d0, int amount), REG(d1, int type), REG(a1, const char *file), REG(d2, int line))
{
	return(CRYPTO_add_lock(pointer, amount, type, file, line));
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_new_dynlockid(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_get_new_dynlockid());
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_destroy_dynlockid(REG(a6, __IFACE_OR_BASE), REG(d0, int i))
{
	CRYPTO_destroy_dynlockid(i);
}

struct CRYPTO_dynlock_value * AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_dynlock_value(REG(a6, __IFACE_OR_BASE), REG(d0, int i))
{
	return(CRYPTO_get_dynlock_value(i));
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_dynlock_create_callback(REG(a6, __IFACE_OR_BASE), REG(a0, struct CRYPTO_dynlock_value *(*dyn_create_function)(const char *file, int line)))
{
	CRYPTO_set_dynlock_create_callback(dyn_create_function);
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_dynlock_lock_callback(REG(a6, __IFACE_OR_BASE), REG(a0, void (*dyn_lock_function)(int mode, struct CRYPTO_dynlock_value *l, const char *file, int line)))
{
	CRYPTO_set_dynlock_lock_callback(dyn_lock_function);
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_dynlock_destroy_callback(REG(a6, __IFACE_OR_BASE), REG(a0, void (*dyn_destroy_function)(struct CRYPTO_dynlock_value *l, const char *file, int line)))
{
	CRYPTO_set_dynlock_destroy_callback(dyn_destroy_function);
}

struct CRYPTO_dynlock_value * AMISSL_LIB_ENTRY (*_AmiSSL_CRYPTO_get_dynlock_create_callback(REG(a6, __IFACE_OR_BASE)))(const char *file, int line)
{
	return(CRYPTO_get_dynlock_create_callback());
}

void AMISSL_LIB_ENTRY (*_AmiSSL_CRYPTO_get_dynlock_lock_callback(REG(a6, __IFACE_OR_BASE)))(int mode, struct CRYPTO_dynlock_value *l, const char *file, int line)
{
	return(CRYPTO_get_dynlock_lock_callback());
}

void AMISSL_LIB_ENTRY (*_AmiSSL_CRYPTO_get_dynlock_destroy_callback(REG(a6, __IFACE_OR_BASE)))(struct CRYPTO_dynlock_value *l, const char *file, int line)
{
	return(CRYPTO_get_dynlock_destroy_callback());
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_mem_functions(REG(a6, __IFACE_OR_BASE), REG(a0, void *(*m)(size_t)), REG(a1, void *(*r)(void *, size_t)), REG(a2, void (*f)(void *)))
{
	return(CRYPTO_set_mem_functions(m, r, f));
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_locked_mem_functions(REG(a6, __IFACE_OR_BASE), REG(a0, void *(*m)(size_t)), REG(a1, void (*free_func)(void *)))
{
	return(CRYPTO_set_locked_mem_functions(m, free_func));
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_mem_ex_functions(REG(a6, __IFACE_OR_BASE), REG(a0, void *(*m)(size_t, const char *, int)), REG(a1, void *(*r)(void *, size_t, const char *, int)), REG(a2, void (*f)(void *)))
{
	return(CRYPTO_set_mem_ex_functions(m, r, f));
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_locked_mem_ex_functions(REG(a6, __IFACE_OR_BASE), REG(a0, void *(*m)(size_t, const char *, int)), REG(a1, void (*free_func)(void *)))
{
	return(CRYPTO_set_locked_mem_ex_functions(m, free_func));
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_mem_debug_functions(REG(a6, __IFACE_OR_BASE), REG(a0, void (*m)(void *, int, const char *, int, int)), REG(a1, void (*r)(void *, void *, int, const char *, int, int)), REG(a2, void (*f)(void *, int)), REG(a3, void (*so)(long)), REG(d0, long (*go)(void)))
{
	return(CRYPTO_set_mem_debug_functions(m, r, f, so, go));
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_mem_functions(REG(a6, __IFACE_OR_BASE), REG(a0, void *(**m)(size_t)), REG(a1, void *(**r)(void *, size_t)), REG(a2, void (**f)(void *)))
{
	CRYPTO_get_mem_functions(m, r, f);
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_locked_mem_functions(REG(a6, __IFACE_OR_BASE), REG(a0, void *(**m)(size_t)), REG(a1, void (**f)(void *)))
{
	CRYPTO_get_locked_mem_functions(m, f);
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_mem_ex_functions(REG(a6, __IFACE_OR_BASE), REG(a0, void *(**m)(size_t, const char *, int)), REG(a1, void *(**r)(void *, size_t, const char *, int)), REG(a2, void (**f)(void *)))
{
	CRYPTO_get_mem_ex_functions(m, r, f);
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_locked_mem_ex_functions(REG(a6, __IFACE_OR_BASE), REG(a0, void *(**m)(size_t, const char *, int)), REG(a1, void (**f)(void *)))
{
	CRYPTO_get_locked_mem_ex_functions(m, f);
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_mem_debug_functions(REG(a6, __IFACE_OR_BASE), REG(a0, void (**m)(void *, int, const char *, int, int)), REG(a1, void (**r)(void *, void *, int, const char *, int, int)), REG(a2, void (**f)(void *, int)), REG(a3, void (**so)(long)), REG(d0, long (**go)(void)))
{
	CRYPTO_get_mem_debug_functions(m, r, f, so, go);
}

void * AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_malloc_locked(REG(a6, __IFACE_OR_BASE), REG(d0, int num), REG(a0, const char *file), REG(d1, int line))
{
	return(CRYPTO_malloc_locked(num, file, line));
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_free_locked(REG(a6, __IFACE_OR_BASE), REG(a0, void *a))
{
	CRYPTO_free_locked(a);
}

void * AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_malloc(REG(a6, __IFACE_OR_BASE), REG(d0, int num), REG(a0, const char *file), REG(d1, int line))
{
	return(CRYPTO_malloc(num, file, line));
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_free(REG(a6, __IFACE_OR_BASE), REG(a0, void *a))
{
	CRYPTO_free(a);
}

void * AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_realloc(REG(a6, __IFACE_OR_BASE), REG(a0, void *addr), REG(d0, int num), REG(a1, const char *file), REG(d1, int line))
{
	return(CRYPTO_realloc(addr, num, file, line));
}

void * AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_realloc_clean(REG(a6, __IFACE_OR_BASE), REG(a0, void *addr), REG(d0, int old_num), REG(d1, int num), REG(a1, const char *file), REG(d2, int line))
{
	return(CRYPTO_realloc_clean(addr, old_num, num, file, line));
}

void * AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_remalloc(REG(a6, __IFACE_OR_BASE), REG(a0, void *addr), REG(d0, int num), REG(a1, const char *file), REG(d1, int line))
{
	return(CRYPTO_remalloc(addr, num, file, line));
}

void AMISSL_LIB_ENTRY _AmiSSL_OPENSSL_cleanse(REG(a6, __IFACE_OR_BASE), REG(a0, void *ptr), REG(d0, size_t len))
{
	OPENSSL_cleanse(ptr, len);
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_set_mem_debug_options(REG(a6, __IFACE_OR_BASE), REG(d0, long bits))
{
	CRYPTO_set_mem_debug_options(bits);
}

long AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_get_mem_debug_options(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_get_mem_debug_options());
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_push_info_(REG(a6, __IFACE_OR_BASE), REG(a0, const char *info), REG(a1, const char *file), REG(d0, int line))
{
	return(CRYPTO_push_info_(info, file, line));
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_pop_info(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_pop_info());
}

int AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_remove_all_info(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_remove_all_info());
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_dbg_malloc(REG(a6, __IFACE_OR_BASE), REG(a0, void *addr), REG(d0, int num), REG(a1, const char *file), REG(d1, int line), REG(d2, int before_p))
{
	CRYPTO_dbg_malloc(addr, num, file, line, before_p);
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_dbg_realloc(REG(a6, __IFACE_OR_BASE), REG(a0, void *addr1), REG(a1, void *addr2), REG(d0, int num), REG(a2, const char *file), REG(d1, int line), REG(d2, int before_p))
{
	CRYPTO_dbg_realloc(addr1, addr2, num, file, line, before_p);
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_dbg_free(REG(a6, __IFACE_OR_BASE), REG(a0, void *addr), REG(d0, int before_p))
{
	CRYPTO_dbg_free(addr, before_p);
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_dbg_set_options(REG(a6, __IFACE_OR_BASE), REG(d0, long bits))
{
	CRYPTO_dbg_set_options(bits);
}

long AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_dbg_get_options(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_dbg_get_options());
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_mem_leaks(REG(a6, __IFACE_OR_BASE), REG(a0, struct bio_st *bio))
{
	CRYPTO_mem_leaks(bio);
}

void AMISSL_LIB_ENTRY _AmiSSL_CRYPTO_mem_leaks_cb(REG(a6, __IFACE_OR_BASE), REG(a0, CRYPTO_MEM_LEAK_CB *cb))
{
	CRYPTO_mem_leaks_cb(cb);
}

void AMISSL_LIB_ENTRY _AmiSSL_OpenSSLDie(REG(a6, __IFACE_OR_BASE), REG(a0, const char *file), REG(d0, int line), REG(a1, const char *assertion))
{
	OpenSSLDie(file, line, assertion);
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_CRYPTO_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_CRYPTO_strings();
}

DSO * AMISSL_LIB_ENTRY _AmiSSL_DSO_new(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_new());
}

DSO * AMISSL_LIB_ENTRY _AmiSSL_DSO_new_method(REG(a6, __IFACE_OR_BASE), REG(a0, DSO_METHOD *method))
{
	return(DSO_new_method(method));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSO_free(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso))
{
	return(DSO_free(dso));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSO_flags(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso))
{
	return(DSO_flags(dso));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSO_up_ref(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso))
{
	return(DSO_up_ref(dso));
}

long AMISSL_LIB_ENTRY _AmiSSL_DSO_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(d0, int cmd), REG(d1, long larg), REG(a1, void *parg))
{
	return(DSO_ctrl(dso, cmd, larg, parg));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSO_set_name_converter(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(d0, DSO_NAME_CONVERTER_FUNC cb), REG(a1, DSO_NAME_CONVERTER_FUNC *oldcb))
{
	return(DSO_set_name_converter(dso, cb, oldcb));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_DSO_get_filename(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso))
{
	return(DSO_get_filename(dso));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSO_set_filename(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(a1, const char *filename))
{
	return(DSO_set_filename(dso, filename));
}

char * AMISSL_LIB_ENTRY _AmiSSL_DSO_convert_filename(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(a1, const char *filename))
{
	return(DSO_convert_filename(dso, filename));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_DSO_get_loaded_filename(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso))
{
	return(DSO_get_loaded_filename(dso));
}

void AMISSL_LIB_ENTRY _AmiSSL_DSO_set_default_method(REG(a6, __IFACE_OR_BASE), REG(a0, DSO_METHOD *meth))
{
	DSO_set_default_method(meth);
}

DSO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DSO_get_default_method(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_get_default_method());
}

DSO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DSO_get_method(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso))
{
	return(DSO_get_method(dso));
}

DSO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DSO_set_method(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(a1, DSO_METHOD *meth))
{
	return(DSO_set_method(dso, meth));
}

DSO * AMISSL_LIB_ENTRY _AmiSSL_DSO_load(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(a1, const char *filename), REG(a2, DSO_METHOD *meth), REG(d0, int flags))
{
	return(DSO_load(dso, filename, meth, flags));
}

void * AMISSL_LIB_ENTRY _AmiSSL_DSO_bind_var(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(a1, const char *symname))
{
	return(DSO_bind_var(dso, symname));
}

DSO_FUNC_TYPE AMISSL_LIB_ENTRY _AmiSSL_DSO_bind_func(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(a1, const char *symname))
{
	return(DSO_bind_func(dso, symname));
}

DSO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DSO_METHOD_openssl(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_METHOD_openssl());
}

DSO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DSO_METHOD_null(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_METHOD_null());
}

DSO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DSO_METHOD_dlfcn(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_METHOD_dlfcn());
}

DSO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DSO_METHOD_dl(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_METHOD_dl());
}

DSO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DSO_METHOD_win32(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_METHOD_win32());
}

DSO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DSO_METHOD_vms(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_METHOD_vms());
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_DSO_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_DSO_strings();
}

const EC_METHOD * AMISSL_LIB_ENTRY _AmiSSL_EC_GFp_simple_method(REG(a6, __IFACE_OR_BASE))
{
	return(EC_GFp_simple_method());
}

const EC_METHOD * AMISSL_LIB_ENTRY _AmiSSL_EC_GFp_mont_method(REG(a6, __IFACE_OR_BASE))
{
	return(EC_GFp_mont_method());
}

EC_GROUP * AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_new(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_METHOD *a))
{
	return(EC_GROUP_new(a));
}

void AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_free(REG(a6, __IFACE_OR_BASE), REG(a0, EC_GROUP *a))
{
	EC_GROUP_free(a);
}

void AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_clear_free(REG(a6, __IFACE_OR_BASE), REG(a0, EC_GROUP *a))
{
	EC_GROUP_clear_free(a);
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_copy(REG(a6, __IFACE_OR_BASE), REG(a0, EC_GROUP *a), REG(a1, const EC_GROUP *b))
{
	return(EC_GROUP_copy(a, b));
}

const EC_METHOD * AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_method_of(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a))
{
	return(EC_GROUP_method_of(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_set_curve_GFp(REG(a6, __IFACE_OR_BASE), REG(a0, EC_GROUP *a1), REG(a1, const BIGNUM *p), REG(a2, const BIGNUM *a), REG(a3, const BIGNUM *b), REG(d0, BN_CTX *a2))
{
	return(EC_GROUP_set_curve_GFp(a1, p, a, b, a2));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_get_curve_GFp(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, BIGNUM *p), REG(a2, BIGNUM *a), REG(a3, BIGNUM *b), REG(d0, BN_CTX *a2))
{
	return(EC_GROUP_get_curve_GFp(a1, p, a, b, a2));
}

EC_GROUP * AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_new_curve_GFp(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *p), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, BN_CTX *a1))
{
	return(EC_GROUP_new_curve_GFp(p, a, b, a1));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_set_generator(REG(a6, __IFACE_OR_BASE), REG(a0, EC_GROUP *a1), REG(a1, const EC_POINT *generator), REG(a2, const BIGNUM *order), REG(a3, const BIGNUM *cofactor))
{
	return(EC_GROUP_set_generator(a1, generator, order, cofactor));
}

EC_POINT * AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_get0_generator(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1))
{
	return(EC_GROUP_get0_generator(a1));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_get_order(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, BIGNUM *order), REG(a2, BN_CTX *a2))
{
	return(EC_GROUP_get_order(a1, order, a2));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_get_cofactor(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, BIGNUM *cofactor), REG(a2, BN_CTX *a2))
{
	return(EC_GROUP_get_cofactor(a1, cofactor, a2));
}

EC_POINT * AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_new(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a))
{
	return(EC_POINT_new(a));
}

void AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_free(REG(a6, __IFACE_OR_BASE), REG(a0, EC_POINT *a))
{
	EC_POINT_free(a);
}

void AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_clear_free(REG(a6, __IFACE_OR_BASE), REG(a0, EC_POINT *a))
{
	EC_POINT_clear_free(a);
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_copy(REG(a6, __IFACE_OR_BASE), REG(a0, EC_POINT *a), REG(a1, const EC_POINT *b))
{
	return(EC_POINT_copy(a, b));
}

const EC_METHOD * AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_method_of(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_POINT *a))
{
	return(EC_POINT_method_of(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_set_to_infinity(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a), REG(a1, EC_POINT *b))
{
	return(EC_POINT_set_to_infinity(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_set_Jprojective_coordinates_GFp(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *a2), REG(a2, const BIGNUM *x), REG(a3, const BIGNUM *y), REG(d0, const BIGNUM *z), REG(d1, BN_CTX *a3))
{
	return(EC_POINT_set_Jprojective_coordinates_GFp(a1, a2, x, y, z, a3));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_get_Jprojective_coordinates_GFp(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, const EC_POINT *a2), REG(a2, BIGNUM *x), REG(a3, BIGNUM *y), REG(d0, BIGNUM *z), REG(d1, BN_CTX *a3))
{
	return(EC_POINT_get_Jprojective_coordinates_GFp(a1, a2, x, y, z, a3));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_set_affine_coordinates_GFp(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *a2), REG(a2, const BIGNUM *x), REG(a3, const BIGNUM *y), REG(d0, BN_CTX *a3))
{
	return(EC_POINT_set_affine_coordinates_GFp(a1, a2, x, y, a3));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_get_affine_coordinates_GFp(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, const EC_POINT *a2), REG(a2, BIGNUM *x), REG(a3, BIGNUM *y), REG(d0, BN_CTX *a3))
{
	return(EC_POINT_get_affine_coordinates_GFp(a1, a2, x, y, a3));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_set_compressed_coordinates_GFp(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *a2), REG(a2, const BIGNUM *x), REG(d0, int y_bit), REG(a3, BN_CTX *a3))
{
	return(EC_POINT_set_compressed_coordinates_GFp(a1, a2, x, y_bit, a3));
}

size_t AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_point2oct(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, const EC_POINT *a2), REG(d0, point_conversion_form_t form), REG(a2, unsigned char *buf), REG(d1, size_t len), REG(a3, BN_CTX *a3))
{
	return(EC_POINT_point2oct(a1, a2, form, buf, len, a3));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_oct2point(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *a2), REG(a2, const unsigned char *buf), REG(d0, size_t len), REG(a3, BN_CTX *a3))
{
	return(EC_POINT_oct2point(a1, a2, buf, len, a3));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_add(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *r), REG(a2, const EC_POINT *a), REG(a3, const EC_POINT *b), REG(d0, BN_CTX *a2))
{
	return(EC_POINT_add(a1, r, a, b, a2));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_dbl(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *r), REG(a2, const EC_POINT *a), REG(a3, BN_CTX *a2))
{
	return(EC_POINT_dbl(a1, r, a, a2));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_invert(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *a2), REG(a2, BN_CTX *a3))
{
	return(EC_POINT_invert(a1, a2, a3));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_is_at_infinity(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a), REG(a1, const EC_POINT *b))
{
	return(EC_POINT_is_at_infinity(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_is_on_curve(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a), REG(a1, const EC_POINT *b), REG(a2, BN_CTX *c))
{
	return(EC_POINT_is_on_curve(a, b, c));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, const EC_POINT *a), REG(a2, const EC_POINT *b), REG(a3, BN_CTX *a2))
{
	return(EC_POINT_cmp(a1, a, b, a2));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_make_affine(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a), REG(a1, EC_POINT *b), REG(a2, BN_CTX *c))
{
	return(EC_POINT_make_affine(a, b, c));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINTs_make_affine(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(d0, size_t num), REG(a1, EC_POINT **a2), REG(a2, BN_CTX *a3))
{
	return(EC_POINTs_make_affine(a1, num, a2, a3));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINTs_mul(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *r), REG(a2, const BIGNUM *a2), REG(d0, size_t num), REG(a3, const EC_POINT **a3), REG(d1, const BIGNUM **a4), REG(d2, BN_CTX *a5))
{
	return(EC_POINTs_mul(a1, r, a2, num, a3, a4, a5));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_POINT_mul(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *r), REG(a2, const BIGNUM *a2), REG(a3, const EC_POINT *a3), REG(d0, const BIGNUM *a4), REG(d1, BN_CTX *a5))
{
	return(EC_POINT_mul(a1, r, a2, a3, a4, a5));
}

int AMISSL_LIB_ENTRY _AmiSSL_EC_GROUP_precompute_mult(REG(a6, __IFACE_OR_BASE), REG(a0, EC_GROUP *a), REG(a1, BN_CTX *b))
{
	return(EC_GROUP_precompute_mult(a, b));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_EC_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_EC_strings();
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_put_error(REG(a6, __IFACE_OR_BASE), REG(d0, int lib), REG(d1, int func), REG(d2, int reason), REG(a0, const char *file), REG(d3, int line))
{
	ERR_put_error(lib, func, reason, file, line);
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_set_error_data(REG(a6, __IFACE_OR_BASE), REG(a0, char *data), REG(d0, int flags))
{
	ERR_set_error_data(data, flags);
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_ERR_get_error(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_get_error());
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_ERR_get_error_line(REG(a6, __IFACE_OR_BASE), REG(a0, const char **file), REG(a1, int *line))
{
	return(ERR_get_error_line(file, line));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_ERR_get_error_line_data(REG(a6, __IFACE_OR_BASE), REG(a0, const char **file), REG(a1, int *line), REG(a2, const char **data), REG(a3, int *flags))
{
	return(ERR_get_error_line_data(file, line, data, flags));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_ERR_peek_error(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_peek_error());
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_ERR_peek_error_line(REG(a6, __IFACE_OR_BASE), REG(a0, const char **file), REG(a1, int *line))
{
	return(ERR_peek_error_line(file, line));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_ERR_peek_error_line_data(REG(a6, __IFACE_OR_BASE), REG(a0, const char **file), REG(a1, int *line), REG(a2, const char **data), REG(a3, int *flags))
{
	return(ERR_peek_error_line_data(file, line, data, flags));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_ERR_peek_last_error(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_peek_last_error());
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_ERR_peek_last_error_line(REG(a6, __IFACE_OR_BASE), REG(a0, const char **file), REG(a1, int *line))
{
	return(ERR_peek_last_error_line(file, line));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_ERR_peek_last_error_line_data(REG(a6, __IFACE_OR_BASE), REG(a0, const char **file), REG(a1, int *line), REG(a2, const char **data), REG(a3, int *flags))
{
	return(ERR_peek_last_error_line_data(file, line, data, flags));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_clear_error(REG(a6, __IFACE_OR_BASE))
{
	ERR_clear_error();
}

char * AMISSL_LIB_ENTRY _AmiSSL_ERR_error_string(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long e), REG(a0, char *buf))
{
	return(ERR_error_string(e, buf));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_error_string_n(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long e), REG(a0, char *buf), REG(d1, size_t len))
{
	ERR_error_string_n(e, buf, len);
}

const char * AMISSL_LIB_ENTRY _AmiSSL_ERR_lib_error_string(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long e))
{
	return(ERR_lib_error_string(e));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_ERR_func_error_string(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long e))
{
	return(ERR_func_error_string(e));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_ERR_reason_error_string(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long e))
{
	return(ERR_reason_error_string(e));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_print_errors_cb(REG(a6, __IFACE_OR_BASE), REG(a0, int (*cb)(const char *str, size_t len, void *u)), REG(a1, void *u))
{
	ERR_print_errors_cb(cb, u);
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_print_errors(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp))
{
	ERR_print_errors(bp);
}

#ifndef __amigaos4__
void AMISSL_LIB_ENTRY _AmiSSL_ERR_add_error_dataA(REG(a6, __IFACE_OR_BASE), REG(d0, int num), REG(d1, va_list args))
{
	ERR_add_error_dataA(num, args);
}
#endif

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_strings(REG(a6, __IFACE_OR_BASE), REG(d0, int lib), REG(a0, ERR_STRING_DATA *str))
{
	ERR_load_strings(lib, str);
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_unload_strings(REG(a6, __IFACE_OR_BASE), REG(d0, int lib), REG(a0, ERR_STRING_DATA *str))
{
	ERR_unload_strings(lib, str);
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_ERR_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_ERR_strings();
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_crypto_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_crypto_strings();
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_free_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_free_strings();
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_remove_state(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long pid))
{
	ERR_remove_state(pid);
}

ERR_STATE * AMISSL_LIB_ENTRY _AmiSSL_ERR_get_state(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_get_state());
}

LHASH * AMISSL_LIB_ENTRY _AmiSSL_ERR_get_string_table(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_get_string_table());
}

LHASH * AMISSL_LIB_ENTRY _AmiSSL_ERR_get_err_state_table(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_get_err_state_table());
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_release_err_state_table(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH **hash))
{
	ERR_release_err_state_table(hash);
}

int AMISSL_LIB_ENTRY _AmiSSL_ERR_get_next_error_library(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_get_next_error_library());
}

const ERR_FNS * AMISSL_LIB_ENTRY _AmiSSL_ERR_get_implementation(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_get_implementation());
}

int AMISSL_LIB_ENTRY _AmiSSL_ERR_set_implementation(REG(a6, __IFACE_OR_BASE), REG(a0, const ERR_FNS *fns))
{
	return(ERR_set_implementation(fns));
}

void AMISSL_LIB_ENTRY _AmiSSL_EVP_MD_CTX_init(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx))
{
	EVP_MD_CTX_init(ctx);
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_MD_CTX_cleanup(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx))
{
	return(EVP_MD_CTX_cleanup(ctx));
}

EVP_MD_CTX * AMISSL_LIB_ENTRY _AmiSSL_EVP_MD_CTX_create(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_MD_CTX_create());
}

void AMISSL_LIB_ENTRY _AmiSSL_EVP_MD_CTX_destroy(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx))
{
	EVP_MD_CTX_destroy(ctx);
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_MD_CTX_copy_ex(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *out), REG(a1, const EVP_MD_CTX *in))
{
	return(EVP_MD_CTX_copy_ex(out, in));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DigestInit_ex(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, const EVP_MD *type), REG(a2, ENGINE *impl))
{
	return(EVP_DigestInit_ex(ctx, type, impl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DigestUpdate(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, const void *d), REG(d0, unsigned int cnt))
{
	return(EVP_DigestUpdate(ctx, d, cnt));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DigestFinal_ex(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, unsigned char *md), REG(a2, unsigned int *s))
{
	return(EVP_DigestFinal_ex(ctx, md, s));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_Digest(REG(a6, __IFACE_OR_BASE), REG(a0, void *data), REG(d0, unsigned int count), REG(a1, unsigned char *md), REG(a2, unsigned int *size), REG(a3, const EVP_MD *type), REG(d1, ENGINE *impl))
{
	return(EVP_Digest(data, count, md, size, type, impl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_MD_CTX_copy(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *out), REG(a1, const EVP_MD_CTX *in))
{
	return(EVP_MD_CTX_copy(out, in));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DigestInit(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, const EVP_MD *type))
{
	return(EVP_DigestInit(ctx, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DigestFinal(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, unsigned char *md), REG(a2, unsigned int *s))
{
	return(EVP_DigestFinal(ctx, md, s));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_read_pw_string(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int length), REG(a1, const char *prompt), REG(d1, int verify))
{
	return(EVP_read_pw_string(buf, length, prompt, verify));
}

void AMISSL_LIB_ENTRY _AmiSSL_EVP_set_pw_prompt(REG(a6, __IFACE_OR_BASE), REG(a0, char *prompt))
{
	EVP_set_pw_prompt(prompt);
}

char * AMISSL_LIB_ENTRY _AmiSSL_EVP_get_pw_prompt(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_get_pw_prompt());
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_BytesToKey(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_CIPHER *type), REG(a1, const EVP_MD *md), REG(a2, const unsigned char *salt), REG(a3, const unsigned char *data), REG(d0, int datal), REG(d1, int count), REG(d2, unsigned char *key), REG(d3, unsigned char *iv))
{
	return(EVP_BytesToKey(type, md, salt, data, datal, count, key, iv));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_EncryptInit(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *cipher), REG(a2, const unsigned char *key), REG(a3, const unsigned char *iv))
{
	return(EVP_EncryptInit(ctx, cipher, key, iv));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_EncryptInit_ex(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *cipher), REG(a2, ENGINE *impl), REG(a3, const unsigned char *key), REG(d0, const unsigned char *iv))
{
	return(EVP_EncryptInit_ex(ctx, cipher, impl, key, iv));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_EncryptUpdate(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl), REG(a3, const unsigned char *in), REG(d0, int inl))
{
	return(EVP_EncryptUpdate(ctx, out, outl, in, inl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_EncryptFinal_ex(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl))
{
	return(EVP_EncryptFinal_ex(ctx, out, outl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_EncryptFinal(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl))
{
	return(EVP_EncryptFinal(ctx, out, outl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DecryptInit(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *cipher), REG(a2, const unsigned char *key), REG(a3, const unsigned char *iv))
{
	return(EVP_DecryptInit(ctx, cipher, key, iv));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DecryptInit_ex(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *cipher), REG(a2, ENGINE *impl), REG(a3, const unsigned char *key), REG(d0, const unsigned char *iv))
{
	return(EVP_DecryptInit_ex(ctx, cipher, impl, key, iv));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DecryptUpdate(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl), REG(a3, const unsigned char *in), REG(d0, int inl))
{
	return(EVP_DecryptUpdate(ctx, out, outl, in, inl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DecryptFinal(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *outm), REG(a2, int *outl))
{
	return(EVP_DecryptFinal(ctx, outm, outl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DecryptFinal_ex(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *outm), REG(a2, int *outl))
{
	return(EVP_DecryptFinal_ex(ctx, outm, outl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CipherInit(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *cipher), REG(a2, const unsigned char *key), REG(a3, const unsigned char *iv), REG(d0, int enc))
{
	return(EVP_CipherInit(ctx, cipher, key, iv, enc));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CipherInit_ex(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *cipher), REG(a2, ENGINE *impl), REG(a3, const unsigned char *key), REG(d0, const unsigned char *iv), REG(d1, int enc))
{
	return(EVP_CipherInit_ex(ctx, cipher, impl, key, iv, enc));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CipherUpdate(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl), REG(a3, const unsigned char *in), REG(d0, int inl))
{
	return(EVP_CipherUpdate(ctx, out, outl, in, inl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CipherFinal(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *outm), REG(a2, int *outl))
{
	return(EVP_CipherFinal(ctx, outm, outl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CipherFinal_ex(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *outm), REG(a2, int *outl))
{
	return(EVP_CipherFinal_ex(ctx, outm, outl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_SignFinal(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, unsigned char *md), REG(a2, unsigned int *s), REG(a3, EVP_PKEY *pkey))
{
	return(EVP_SignFinal(ctx, md, s, pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_VerifyFinal(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, unsigned char *sigbuf), REG(d0, unsigned int siglen), REG(a2, EVP_PKEY *pkey))
{
	return(EVP_VerifyFinal(ctx, sigbuf, siglen, pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_OpenInit(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *type), REG(a2, unsigned char *ek), REG(d0, int ekl), REG(a3, unsigned char *iv), REG(d1, EVP_PKEY *priv))
{
	return(EVP_OpenInit(ctx, type, ek, ekl, iv, priv));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_OpenFinal(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl))
{
	return(EVP_OpenFinal(ctx, out, outl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_SealInit(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *type), REG(a2, unsigned char **ek), REG(a3, int *ekl), REG(d0, unsigned char *iv), REG(d1, EVP_PKEY **pubk), REG(d2, int npubk))
{
	return(EVP_SealInit(ctx, type, ek, ekl, iv, pubk, npubk));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_SealFinal(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl))
{
	return(EVP_SealFinal(ctx, out, outl));
}

void AMISSL_LIB_ENTRY _AmiSSL_EVP_EncodeInit(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_ENCODE_CTX *ctx))
{
	EVP_EncodeInit(ctx);
}

void AMISSL_LIB_ENTRY _AmiSSL_EVP_EncodeUpdate(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_ENCODE_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl), REG(a3, unsigned char *in), REG(d0, int inl))
{
	EVP_EncodeUpdate(ctx, out, outl, in, inl);
}

void AMISSL_LIB_ENTRY _AmiSSL_EVP_EncodeFinal(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_ENCODE_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl))
{
	EVP_EncodeFinal(ctx, out, outl);
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_EncodeBlock(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *t), REG(a1, const unsigned char *f), REG(d0, int n))
{
	return(EVP_EncodeBlock(t, f, n));
}

void AMISSL_LIB_ENTRY _AmiSSL_EVP_DecodeInit(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_ENCODE_CTX *ctx))
{
	EVP_DecodeInit(ctx);
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DecodeUpdate(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_ENCODE_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl), REG(a3, unsigned char *in), REG(d0, int inl))
{
	return(EVP_DecodeUpdate(ctx, out, outl, in, inl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DecodeFinal(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_ENCODE_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl))
{
	return(EVP_DecodeFinal(ctx, out, outl));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_DecodeBlock(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *t), REG(a1, const unsigned char *f), REG(d0, int n))
{
	return(EVP_DecodeBlock(t, f, n));
}

void AMISSL_LIB_ENTRY _AmiSSL_EVP_CIPHER_CTX_init(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *a))
{
	EVP_CIPHER_CTX_init(a);
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CIPHER_CTX_cleanup(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *a))
{
	return(EVP_CIPHER_CTX_cleanup(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CIPHER_CTX_set_key_length(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *x), REG(d0, int keylen))
{
	return(EVP_CIPHER_CTX_set_key_length(x, keylen));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CIPHER_CTX_set_padding(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *c), REG(d0, int pad))
{
	return(EVP_CIPHER_CTX_set_padding(c, pad));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CIPHER_CTX_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(d0, int type), REG(d1, int arg), REG(a1, void *ptr))
{
	return(EVP_CIPHER_CTX_ctrl(ctx, type, arg, ptr));
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_f_md(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_md());
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_f_base64(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_base64());
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_f_cipher(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_cipher());
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_f_reliable(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_reliable());
}

void AMISSL_LIB_ENTRY _AmiSSL_BIO_set_cipher(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, const EVP_CIPHER *c), REG(a2, unsigned char *k), REG(a3, unsigned char *i), REG(d0, int enc))
{
	BIO_set_cipher(b, c, k, i, enc);
}

const EVP_MD * AMISSL_LIB_ENTRY _AmiSSL_EVP_md_null(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_md_null());
}

const EVP_MD * AMISSL_LIB_ENTRY _AmiSSL_EVP_md2(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_md2());
}

const EVP_MD * AMISSL_LIB_ENTRY _AmiSSL_EVP_md4(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_md4());
}

const EVP_MD * AMISSL_LIB_ENTRY _AmiSSL_EVP_md5(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_md5());
}

const EVP_MD * AMISSL_LIB_ENTRY _AmiSSL_EVP_sha(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_sha());
}

const EVP_MD * AMISSL_LIB_ENTRY _AmiSSL_EVP_sha1(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_sha1());
}

const EVP_MD * AMISSL_LIB_ENTRY _AmiSSL_EVP_dss(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_dss());
}

const EVP_MD * AMISSL_LIB_ENTRY _AmiSSL_EVP_dss1(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_dss1());
}

const EVP_MD * AMISSL_LIB_ENTRY _AmiSSL_EVP_mdc2(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_mdc2());
}

const EVP_MD * AMISSL_LIB_ENTRY _AmiSSL_EVP_ripemd160(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_ripemd160());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_enc_null(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_enc_null());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ecb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ecb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ede(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ede3(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede3());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ede_ecb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede_ecb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ede3_ecb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede3_ecb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_cfb64(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_cfb64());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_cfb1(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_cfb1());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_cfb8(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_cfb8());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ede_cfb64(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede_cfb64());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ede3_cfb64(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede3_cfb64());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ede3_cfb1(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede3_cfb1());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ede3_cfb8(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede3_cfb8());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ofb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ofb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ede_ofb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede_ofb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ede3_ofb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede3_ofb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ede_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_des_ede3_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede3_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_desx_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_desx_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_rc4(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc4());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_rc4_40(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc4_40());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_idea_ecb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_idea_ecb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_idea_cfb64(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_idea_cfb64());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_idea_ofb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_idea_ofb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_idea_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_idea_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_rc2_ecb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc2_ecb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_rc2_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc2_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_rc2_40_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc2_40_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_rc2_64_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc2_64_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_rc2_cfb64(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc2_cfb64());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_rc2_ofb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc2_ofb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_bf_ecb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_bf_ecb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_bf_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_bf_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_bf_cfb64(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_bf_cfb64());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_bf_ofb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_bf_ofb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_cast5_ecb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_cast5_ecb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_cast5_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_cast5_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_cast5_cfb64(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_cast5_cfb64());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_cast5_ofb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_cast5_ofb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_rc5_32_12_16_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc5_32_12_16_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_rc5_32_12_16_ecb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc5_32_12_16_ecb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_rc5_32_12_16_cfb64(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc5_32_12_16_cfb64());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_rc5_32_12_16_ofb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc5_32_12_16_ofb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_128_ecb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_128_ecb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_128_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_128_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_128_cfb1(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_128_cfb1());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_128_cfb8(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_128_cfb8());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_128_cfb128(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_128_cfb128());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_128_ofb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_128_ofb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_192_ecb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_192_ecb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_192_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_192_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_192_cfb1(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_192_cfb1());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_192_cfb8(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_192_cfb8());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_192_cfb128(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_192_cfb128());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_192_ofb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_192_ofb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_256_ecb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_256_ecb());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_256_cbc(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_256_cbc());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_256_cfb1(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_256_cfb1());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_256_cfb8(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_256_cfb8());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_256_cfb128(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_256_cfb128());
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_aes_256_ofb(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_256_ofb());
}

void AMISSL_LIB_ENTRY _AmiSSL_OPENSSL_add_all_algorithms_noconf(REG(a6, __IFACE_OR_BASE))
{
	OPENSSL_add_all_algorithms_noconf();
}

void AMISSL_LIB_ENTRY _AmiSSL_OPENSSL_add_all_algorithms_conf(REG(a6, __IFACE_OR_BASE))
{
	OPENSSL_add_all_algorithms_conf();
}

void AMISSL_LIB_ENTRY _AmiSSL_OpenSSL_add_all_ciphers(REG(a6, __IFACE_OR_BASE))
{
	OpenSSL_add_all_ciphers();
}

void AMISSL_LIB_ENTRY _AmiSSL_OpenSSL_add_all_digests(REG(a6, __IFACE_OR_BASE))
{
	OpenSSL_add_all_digests();
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_add_cipher(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_CIPHER *cipher))
{
	return(EVP_add_cipher(cipher));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_add_digest(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_MD *digest))
{
	return(EVP_add_digest(digest));
}

const EVP_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_EVP_get_cipherbyname(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name))
{
	return(EVP_get_cipherbyname(name));
}

const EVP_MD * AMISSL_LIB_ENTRY _AmiSSL_EVP_get_digestbyname(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name))
{
	return(EVP_get_digestbyname(name));
}

void AMISSL_LIB_ENTRY _AmiSSL_EVP_cleanup(REG(a6, __IFACE_OR_BASE))
{
	EVP_cleanup();
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_decrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *dec_key), REG(a1, unsigned char *enc_key), REG(d0, int enc_key_len), REG(a2, EVP_PKEY *private_key))
{
	return(EVP_PKEY_decrypt(dec_key, enc_key, enc_key_len, private_key));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *enc_key), REG(a1, unsigned char *key), REG(d0, int key_len), REG(a2, EVP_PKEY *pub_key))
{
	return(EVP_PKEY_encrypt(enc_key, key, key_len, pub_key));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_type(REG(a6, __IFACE_OR_BASE), REG(d0, int type))
{
	return(EVP_PKEY_type(type));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_bits(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY_bits(pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_size(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY_size(pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_assign(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(d0, int type), REG(a1, char *key))
{
	return(EVP_PKEY_assign(pkey, type, key));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_set1_RSA(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(a1, struct rsa_st *key))
{
	return(EVP_PKEY_set1_RSA(pkey, key));
}

struct rsa_st * AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_get1_RSA(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY_get1_RSA(pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_set1_DSA(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(a1, struct dsa_st *key))
{
	return(EVP_PKEY_set1_DSA(pkey, key));
}

struct dsa_st * AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_get1_DSA(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY_get1_DSA(pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_set1_DH(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(a1, struct dh_st *key))
{
	return(EVP_PKEY_set1_DH(pkey, key));
}

struct dh_st * AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_get1_DH(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY_get1_DH(pkey));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_new(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_PKEY_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_free(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	EVP_PKEY_free(pkey);
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_d2i_PublicKey(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, EVP_PKEY **a), REG(a1, unsigned char **pp), REG(d1, long length))
{
	return(d2i_PublicKey(type, a, pp, length));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PublicKey(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *a), REG(a1, unsigned char **pp))
{
	return(i2d_PublicKey(a, pp));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_d2i_PrivateKey(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, EVP_PKEY **a), REG(a1, unsigned char **pp), REG(d1, long length))
{
	return(d2i_PrivateKey(type, a, pp, length));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_d2i_AutoPrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_AutoPrivateKey(a, pp, length));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *a), REG(a1, unsigned char **pp))
{
	return(i2d_PrivateKey(a, pp));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_copy_parameters(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *to), REG(a1, EVP_PKEY *from))
{
	return(EVP_PKEY_copy_parameters(to, from));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_missing_parameters(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY_missing_parameters(pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_save_parameters(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(d0, int mode))
{
	return(EVP_PKEY_save_parameters(pkey, mode));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY_cmp_parameters(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *a), REG(a1, EVP_PKEY *b))
{
	return(EVP_PKEY_cmp_parameters(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CIPHER_type(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_CIPHER *ctx))
{
	return(EVP_CIPHER_type(ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CIPHER_param_to_asn1(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *c), REG(a1, ASN1_TYPE *type))
{
	return(EVP_CIPHER_param_to_asn1(c, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CIPHER_asn1_to_param(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *c), REG(a1, ASN1_TYPE *type))
{
	return(EVP_CIPHER_asn1_to_param(c, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CIPHER_set_asn1_iv(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *c), REG(a1, ASN1_TYPE *type))
{
	return(EVP_CIPHER_set_asn1_iv(c, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_CIPHER_get_asn1_iv(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *c), REG(a1, ASN1_TYPE *type))
{
	return(EVP_CIPHER_get_asn1_iv(c, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS5_PBE_keyivgen(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, ASN1_TYPE *param), REG(a3, const EVP_CIPHER *cipher), REG(d1, const EVP_MD *md), REG(d2, int en_de))
{
	return(PKCS5_PBE_keyivgen(ctx, pass, passlen, param, cipher, md, en_de));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS5_PBKDF2_HMAC_SHA1(REG(a6, __IFACE_OR_BASE), REG(a0, const char *pass), REG(d0, int passlen), REG(a1, unsigned char *salt), REG(d1, int saltlen), REG(d2, int iter), REG(d3, int keylen), REG(a2, unsigned char *out))
{
	return(PKCS5_PBKDF2_HMAC_SHA1(pass, passlen, salt, saltlen, iter, keylen, out));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS5_v2_PBE_keyivgen(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, ASN1_TYPE *param), REG(a3, const EVP_CIPHER *cipher), REG(d1, const EVP_MD *md), REG(d2, int en_de))
{
	return(PKCS5_v2_PBE_keyivgen(ctx, pass, passlen, param, cipher, md, en_de));
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS5_PBE_add(REG(a6, __IFACE_OR_BASE))
{
	PKCS5_PBE_add();
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PBE_CipherInit(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OBJECT *pbe_obj), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, ASN1_TYPE *param), REG(a3, EVP_CIPHER_CTX *ctx), REG(d1, int en_de))
{
	return(EVP_PBE_CipherInit(pbe_obj, pass, passlen, param, ctx, en_de));
}

int AMISSL_LIB_ENTRY _AmiSSL_EVP_PBE_alg_add(REG(a6, __IFACE_OR_BASE), REG(d0, int nid), REG(a0, const EVP_CIPHER *cipher), REG(a1, const EVP_MD *md), REG(a2, EVP_PBE_KEYGEN *keygen))
{
	return(EVP_PBE_alg_add(nid, cipher, md, keygen));
}

void AMISSL_LIB_ENTRY _AmiSSL_EVP_PBE_cleanup(REG(a6, __IFACE_OR_BASE))
{
	EVP_PBE_cleanup();
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_EVP_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_EVP_strings();
}

void AMISSL_LIB_ENTRY _AmiSSL_HMAC_CTX_init(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx))
{
	HMAC_CTX_init(ctx);
}

void AMISSL_LIB_ENTRY _AmiSSL_HMAC_CTX_cleanup(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx))
{
	HMAC_CTX_cleanup(ctx);
}

void AMISSL_LIB_ENTRY _AmiSSL_HMAC_Init(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx), REG(a1, const void *key), REG(d0, int len), REG(a2, const EVP_MD *md))
{
	HMAC_Init(ctx, key, len, md);
}

void AMISSL_LIB_ENTRY _AmiSSL_HMAC_Init_ex(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx), REG(a1, const void *key), REG(d0, int len), REG(a2, const EVP_MD *md), REG(a3, ENGINE *impl))
{
	HMAC_Init_ex(ctx, key, len, md, impl);
}

void AMISSL_LIB_ENTRY _AmiSSL_HMAC_Update(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx), REG(a1, const unsigned char *data), REG(d0, int len))
{
	HMAC_Update(ctx, data, len);
}

void AMISSL_LIB_ENTRY _AmiSSL_HMAC_Final(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx), REG(a1, unsigned char *md), REG(a2, unsigned int *len))
{
	HMAC_Final(ctx, md, len);
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_HMAC(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_MD *evp_md), REG(a1, const void *key), REG(d0, int key_len), REG(a2, const unsigned char *d), REG(d1, int n), REG(a3, unsigned char *md), REG(d2, unsigned int *md_len))
{
	return(HMAC(evp_md, key, key_len, d, n, md, md_len));
}

KRB5_ENCDATA * AMISSL_LIB_ENTRY _AmiSSL_KRB5_ENCDATA_new(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_ENCDATA_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_KRB5_ENCDATA_free(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_ENCDATA *a))
{
	KRB5_ENCDATA_free(a);
}

KRB5_ENCDATA * AMISSL_LIB_ENTRY _AmiSSL_d2i_KRB5_ENCDATA(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_ENCDATA **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_ENCDATA(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_KRB5_ENCDATA(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_ENCDATA *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_ENCDATA(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_KRB5_ENCDATA_it(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_ENCDATA_it());
}

KRB5_PRINCNAME * AMISSL_LIB_ENTRY _AmiSSL_KRB5_PRINCNAME_new(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_PRINCNAME_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_KRB5_PRINCNAME_free(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_PRINCNAME *a))
{
	KRB5_PRINCNAME_free(a);
}

KRB5_PRINCNAME * AMISSL_LIB_ENTRY _AmiSSL_d2i_KRB5_PRINCNAME(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_PRINCNAME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_PRINCNAME(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_KRB5_PRINCNAME(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_PRINCNAME *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_PRINCNAME(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_KRB5_PRINCNAME_it(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_PRINCNAME_it());
}

KRB5_TKTBODY * AMISSL_LIB_ENTRY _AmiSSL_KRB5_TKTBODY_new(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_TKTBODY_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_KRB5_TKTBODY_free(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_TKTBODY *a))
{
	KRB5_TKTBODY_free(a);
}

KRB5_TKTBODY * AMISSL_LIB_ENTRY _AmiSSL_d2i_KRB5_TKTBODY(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_TKTBODY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_TKTBODY(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_KRB5_TKTBODY(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_TKTBODY *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_TKTBODY(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_KRB5_TKTBODY_it(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_TKTBODY_it());
}

KRB5_APREQBODY * AMISSL_LIB_ENTRY _AmiSSL_KRB5_APREQBODY_new(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_APREQBODY_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_KRB5_APREQBODY_free(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_APREQBODY *a))
{
	KRB5_APREQBODY_free(a);
}

KRB5_APREQBODY * AMISSL_LIB_ENTRY _AmiSSL_d2i_KRB5_APREQBODY(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_APREQBODY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_APREQBODY(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_KRB5_APREQBODY(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_APREQBODY *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_APREQBODY(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_KRB5_APREQBODY_it(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_APREQBODY_it());
}

KRB5_TICKET * AMISSL_LIB_ENTRY _AmiSSL_KRB5_TICKET_new(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_TICKET_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_KRB5_TICKET_free(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_TICKET *a))
{
	KRB5_TICKET_free(a);
}

KRB5_TICKET * AMISSL_LIB_ENTRY _AmiSSL_d2i_KRB5_TICKET(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_TICKET **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_TICKET(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_KRB5_TICKET(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_TICKET *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_TICKET(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_KRB5_TICKET_it(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_TICKET_it());
}

KRB5_APREQ * AMISSL_LIB_ENTRY _AmiSSL_KRB5_APREQ_new(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_APREQ_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_KRB5_APREQ_free(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_APREQ *a))
{
	KRB5_APREQ_free(a);
}

KRB5_APREQ * AMISSL_LIB_ENTRY _AmiSSL_d2i_KRB5_APREQ(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_APREQ **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_APREQ(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_KRB5_APREQ(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_APREQ *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_APREQ(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_KRB5_APREQ_it(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_APREQ_it());
}

KRB5_CHECKSUM * AMISSL_LIB_ENTRY _AmiSSL_KRB5_CHECKSUM_new(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_CHECKSUM_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_KRB5_CHECKSUM_free(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_CHECKSUM *a))
{
	KRB5_CHECKSUM_free(a);
}

KRB5_CHECKSUM * AMISSL_LIB_ENTRY _AmiSSL_d2i_KRB5_CHECKSUM(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_CHECKSUM **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_CHECKSUM(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_KRB5_CHECKSUM(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_CHECKSUM *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_CHECKSUM(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_KRB5_CHECKSUM_it(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_CHECKSUM_it());
}

KRB5_ENCKEY * AMISSL_LIB_ENTRY _AmiSSL_KRB5_ENCKEY_new(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_ENCKEY_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_KRB5_ENCKEY_free(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_ENCKEY *a))
{
	KRB5_ENCKEY_free(a);
}

KRB5_ENCKEY * AMISSL_LIB_ENTRY _AmiSSL_d2i_KRB5_ENCKEY(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_ENCKEY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_ENCKEY(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_KRB5_ENCKEY(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_ENCKEY *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_ENCKEY(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_KRB5_ENCKEY_it(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_ENCKEY_it());
}

KRB5_AUTHDATA * AMISSL_LIB_ENTRY _AmiSSL_KRB5_AUTHDATA_new(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_AUTHDATA_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_KRB5_AUTHDATA_free(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHDATA *a))
{
	KRB5_AUTHDATA_free(a);
}

KRB5_AUTHDATA * AMISSL_LIB_ENTRY _AmiSSL_d2i_KRB5_AUTHDATA(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHDATA **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_AUTHDATA(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_KRB5_AUTHDATA(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHDATA *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_AUTHDATA(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_KRB5_AUTHDATA_it(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_AUTHDATA_it());
}

KRB5_AUTHENTBODY * AMISSL_LIB_ENTRY _AmiSSL_KRB5_AUTHENTBODY_new(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_AUTHENTBODY_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_KRB5_AUTHENTBODY_free(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHENTBODY *a))
{
	KRB5_AUTHENTBODY_free(a);
}

KRB5_AUTHENTBODY * AMISSL_LIB_ENTRY _AmiSSL_d2i_KRB5_AUTHENTBODY(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHENTBODY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_AUTHENTBODY(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_KRB5_AUTHENTBODY(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHENTBODY *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_AUTHENTBODY(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_KRB5_AUTHENTBODY_it(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_AUTHENTBODY_it());
}

KRB5_AUTHENT * AMISSL_LIB_ENTRY _AmiSSL_KRB5_AUTHENT_new(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_AUTHENT_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_KRB5_AUTHENT_free(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHENT *a))
{
	KRB5_AUTHENT_free(a);
}

KRB5_AUTHENT * AMISSL_LIB_ENTRY _AmiSSL_d2i_KRB5_AUTHENT(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHENT **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_AUTHENT(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_KRB5_AUTHENT(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHENT *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_AUTHENT(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_KRB5_AUTHENT_it(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_AUTHENT_it());
}

LHASH * AMISSL_LIB_ENTRY _AmiSSL_lh_new(REG(a6, __IFACE_OR_BASE), REG(d0, LHASH_HASH_FN_TYPE h), REG(d1, LHASH_COMP_FN_TYPE c))
{
	return(lh_new(h, c));
}

void AMISSL_LIB_ENTRY _AmiSSL_lh_free(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *lh))
{
	lh_free(lh);
}

void * AMISSL_LIB_ENTRY _AmiSSL_lh_insert(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *lh), REG(a1, const void *data))
{
	return(lh_insert(lh, data));
}

void * AMISSL_LIB_ENTRY _AmiSSL_lh_delete(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *lh), REG(a1, const void *data))
{
	return(lh_delete(lh, data));
}

void * AMISSL_LIB_ENTRY _AmiSSL_lh_retrieve(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *lh), REG(a1, const void *data))
{
	return(lh_retrieve(lh, data));
}

void AMISSL_LIB_ENTRY _AmiSSL_lh_doall(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *lh), REG(d0, LHASH_DOALL_FN_TYPE func))
{
	lh_doall(lh, func);
}

void AMISSL_LIB_ENTRY _AmiSSL_lh_doall_arg(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *lh), REG(d0, LHASH_DOALL_ARG_FN_TYPE func), REG(a1, void *arg))
{
	lh_doall_arg(lh, func, arg);
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_lh_strhash(REG(a6, __IFACE_OR_BASE), REG(a0, const char *c))
{
	return(lh_strhash(c));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_lh_num_items(REG(a6, __IFACE_OR_BASE), REG(a0, const LHASH *lh))
{
	return(lh_num_items(lh));
}

void AMISSL_LIB_ENTRY _AmiSSL_lh_stats_bio(REG(a6, __IFACE_OR_BASE), REG(a0, const LHASH *lh), REG(a1, BIO *out))
{
	lh_stats_bio(lh, out);
}

void AMISSL_LIB_ENTRY _AmiSSL_lh_node_stats_bio(REG(a6, __IFACE_OR_BASE), REG(a0, const LHASH *lh), REG(a1, BIO *out))
{
	lh_node_stats_bio(lh, out);
}

void AMISSL_LIB_ENTRY _AmiSSL_lh_node_usage_stats_bio(REG(a6, __IFACE_OR_BASE), REG(a0, const LHASH *lh), REG(a1, BIO *out))
{
	lh_node_usage_stats_bio(lh, out);
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_NAME_init(REG(a6, __IFACE_OR_BASE))
{
	return(OBJ_NAME_init());
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_NAME_new_index(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long (*hash_func)(const char *)), REG(a1, int (*cmp_func)(const char *, const char *)), REG(a2, void (*free_func)(const char *, int, const char *)))
{
	return(OBJ_NAME_new_index(hash_func, cmp_func, free_func));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_OBJ_NAME_get(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(d0, int type))
{
	return(OBJ_NAME_get(name, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_NAME_add(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(d0, int type), REG(a1, const char *data))
{
	return(OBJ_NAME_add(name, type, data));
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_NAME_remove(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(d0, int type))
{
	return(OBJ_NAME_remove(name, type));
}

void AMISSL_LIB_ENTRY _AmiSSL_OBJ_NAME_cleanup(REG(a6, __IFACE_OR_BASE), REG(d0, int type))
{
	OBJ_NAME_cleanup(type);
}

void AMISSL_LIB_ENTRY _AmiSSL_OBJ_NAME_do_all(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, void (*fn)(const OBJ_NAME *, void *arg)), REG(a1, void *arg))
{
	OBJ_NAME_do_all(type, fn, arg);
}

void AMISSL_LIB_ENTRY _AmiSSL_OBJ_NAME_do_all_sorted(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, void (*fn)(const OBJ_NAME *, void *arg)), REG(a1, void *arg))
{
	OBJ_NAME_do_all_sorted(type, fn, arg);
}

ASN1_OBJECT * AMISSL_LIB_ENTRY _AmiSSL_OBJ_dup(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_OBJECT *o))
{
	return(OBJ_dup(o));
}

ASN1_OBJECT * AMISSL_LIB_ENTRY _AmiSSL_OBJ_nid2obj(REG(a6, __IFACE_OR_BASE), REG(d0, int n))
{
	return(OBJ_nid2obj(n));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_OBJ_nid2ln(REG(a6, __IFACE_OR_BASE), REG(d0, int n))
{
	return(OBJ_nid2ln(n));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_OBJ_nid2sn(REG(a6, __IFACE_OR_BASE), REG(d0, int n))
{
	return(OBJ_nid2sn(n));
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_obj2nid(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_OBJECT *o))
{
	return(OBJ_obj2nid(o));
}

ASN1_OBJECT * AMISSL_LIB_ENTRY _AmiSSL_OBJ_txt2obj(REG(a6, __IFACE_OR_BASE), REG(a0, const char *s), REG(d0, int no_name))
{
	return(OBJ_txt2obj(s, no_name));
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_obj2txt(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int buf_len), REG(a1, const ASN1_OBJECT *a), REG(d1, int no_name))
{
	return(OBJ_obj2txt(buf, buf_len, a, no_name));
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_txt2nid(REG(a6, __IFACE_OR_BASE), REG(a0, const char *s))
{
	return(OBJ_txt2nid(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_ln2nid(REG(a6, __IFACE_OR_BASE), REG(a0, const char *s))
{
	return(OBJ_ln2nid(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_sn2nid(REG(a6, __IFACE_OR_BASE), REG(a0, const char *s))
{
	return(OBJ_sn2nid(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_OBJECT *a), REG(a1, const ASN1_OBJECT *b))
{
	return(OBJ_cmp(a, b));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_OBJ_bsearch(REG(a6, __IFACE_OR_BASE), REG(a0, const char *key), REG(a1, const char *base), REG(d0, int num), REG(d1, int size), REG(a2, int (*cmp)(const void *, const void *)))
{
	return(OBJ_bsearch(key, base, num, size, cmp));
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_new_nid(REG(a6, __IFACE_OR_BASE), REG(d0, int num))
{
	return(OBJ_new_nid(num));
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_add_object(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_OBJECT *obj))
{
	return(OBJ_add_object(obj));
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_create(REG(a6, __IFACE_OR_BASE), REG(a0, const char *oid), REG(a1, const char *sn), REG(a2, const char *ln))
{
	return(OBJ_create(oid, sn, ln));
}

void AMISSL_LIB_ENTRY _AmiSSL_OBJ_cleanup(REG(a6, __IFACE_OR_BASE))
{
	OBJ_cleanup();
}

int AMISSL_LIB_ENTRY _AmiSSL_OBJ_create_objects(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *in))
{
	return(OBJ_create_objects(in));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_OBJ_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_OBJ_strings();
}

OCSP_RESPONSE * AMISSL_LIB_ENTRY _AmiSSL_OCSP_sendreq_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, char *path), REG(a2, OCSP_REQUEST *req))
{
	return(OCSP_sendreq_bio(b, path, req));
}

OCSP_CERTID * AMISSL_LIB_ENTRY _AmiSSL_OCSP_cert_to_id(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_MD *dgst), REG(a1, X509 *subject), REG(a2, X509 *issuer))
{
	return(OCSP_cert_to_id(dgst, subject, issuer));
}

OCSP_CERTID * AMISSL_LIB_ENTRY _AmiSSL_OCSP_cert_id_new(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_MD *dgst), REG(a1, X509_NAME *issuerName), REG(a2, ASN1_BIT_STRING*issuerKey), REG(a3, ASN1_INTEGER *serialNumber))
{
	return(OCSP_cert_id_new(dgst, issuerName, issuerKey, serialNumber));
}

OCSP_ONEREQ * AMISSL_LIB_ENTRY _AmiSSL_OCSP_request_add0_id(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, OCSP_CERTID *cid))
{
	return(OCSP_request_add0_id(req, cid));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_request_add1_nonce(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, unsigned char *val), REG(d0, int len))
{
	return(OCSP_request_add1_nonce(req, val, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_basic_add1_nonce(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *resp), REG(a1, unsigned char *val), REG(d0, int len))
{
	return(OCSP_basic_add1_nonce(resp, val, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_check_nonce(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, OCSP_BASICRESP *bs))
{
	return(OCSP_check_nonce(req, bs));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_copy_nonce(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *resp), REG(a1, OCSP_REQUEST *req))
{
	return(OCSP_copy_nonce(resp, req));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_request_set1_name(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, X509_NAME *nm))
{
	return(OCSP_request_set1_name(req, nm));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_request_add1_cert(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, X509 *cert))
{
	return(OCSP_request_add1_cert(req, cert));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_request_sign(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, X509 *signer), REG(a2, EVP_PKEY *key), REG(a3, const EVP_MD *dgst), REG(d0, STACK_OF(X509) *certs), REG(d1, unsigned long flags))
{
	return(OCSP_request_sign(req, signer, key, dgst, certs, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_response_status(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPONSE *resp))
{
	return(OCSP_response_status(resp));
}

OCSP_BASICRESP * AMISSL_LIB_ENTRY _AmiSSL_OCSP_response_get1_basic(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPONSE *resp))
{
	return(OCSP_response_get1_basic(resp));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_resp_count(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *bs))
{
	return(OCSP_resp_count(bs));
}

OCSP_SINGLERESP * AMISSL_LIB_ENTRY _AmiSSL_OCSP_resp_get0(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *bs), REG(d0, int idx))
{
	return(OCSP_resp_get0(bs, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_resp_find(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *bs), REG(a1, OCSP_CERTID *id), REG(d0, int last))
{
	return(OCSP_resp_find(bs, id, last));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_single_get0_status(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *single), REG(a1, int *reason), REG(a2, ASN1_GENERALIZEDTIME **revtime), REG(a3, ASN1_GENERALIZEDTIME **thisupd), REG(d0, ASN1_GENERALIZEDTIME **nextupd))
{
	return(OCSP_single_get0_status(single, reason, revtime, thisupd, nextupd));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_resp_find_status(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *bs), REG(a1, OCSP_CERTID *id), REG(a2, int *status), REG(a3, int *reason), REG(d0, ASN1_GENERALIZEDTIME **revtime), REG(d1, ASN1_GENERALIZEDTIME **thisupd), REG(d2, ASN1_GENERALIZEDTIME **nextupd))
{
	return(OCSP_resp_find_status(bs, id, status, reason, revtime, thisupd, nextupd));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_check_validity(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME *thisupd), REG(a1, ASN1_GENERALIZEDTIME *nextupd), REG(d0, long sec), REG(d1, long maxsec))
{
	return(OCSP_check_validity(thisupd, nextupd, sec, maxsec));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_request_verify(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, STACK_OF(X509) *certs), REG(a2, X509_STORE *store), REG(d0, unsigned long flags))
{
	return(OCSP_request_verify(req, certs, store, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_parse_url(REG(a6, __IFACE_OR_BASE), REG(a0, char *url), REG(a1, char **phost), REG(a2, char **pport), REG(a3, char **ppath), REG(d0, int *pssl))
{
	return(OCSP_parse_url(url, phost, pport, ppath, pssl));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_id_issuer_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTID *a), REG(a1, OCSP_CERTID *b))
{
	return(OCSP_id_issuer_cmp(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_id_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTID *a), REG(a1, OCSP_CERTID *b))
{
	return(OCSP_id_cmp(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_request_onereq_count(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req))
{
	return(OCSP_request_onereq_count(req));
}

OCSP_ONEREQ * AMISSL_LIB_ENTRY _AmiSSL_OCSP_request_onereq_get0(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(d0, int i))
{
	return(OCSP_request_onereq_get0(req, i));
}

OCSP_CERTID * AMISSL_LIB_ENTRY _AmiSSL_OCSP_onereq_get0_id(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *one))
{
	return(OCSP_onereq_get0_id(one));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_id_get0_info(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING **piNameHash), REG(a1, ASN1_OBJECT **pmd), REG(a2, ASN1_OCTET_STRING **pikeyHash), REG(a3, ASN1_INTEGER **pserial), REG(d0, OCSP_CERTID *cid))
{
	return(OCSP_id_get0_info(piNameHash, pmd, pikeyHash, pserial, cid));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_request_is_signed(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req))
{
	return(OCSP_request_is_signed(req));
}

OCSP_RESPONSE * AMISSL_LIB_ENTRY _AmiSSL_OCSP_response_create(REG(a6, __IFACE_OR_BASE), REG(d0, int status), REG(a0, OCSP_BASICRESP *bs))
{
	return(OCSP_response_create(status, bs));
}

OCSP_SINGLERESP * AMISSL_LIB_ENTRY _AmiSSL_OCSP_basic_add1_status(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *rsp), REG(a1, OCSP_CERTID *cid), REG(d0, int status), REG(d1, int reason), REG(a2, ASN1_TIME *revtime), REG(a3, ASN1_TIME *thisupd), REG(d2, ASN1_TIME *nextupd))
{
	return(OCSP_basic_add1_status(rsp, cid, status, reason, revtime, thisupd, nextupd));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_basic_add1_cert(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *resp), REG(a1, X509 *cert))
{
	return(OCSP_basic_add1_cert(resp, cert));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_basic_sign(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *brsp), REG(a1, X509 *signer), REG(a2, EVP_PKEY *key), REG(a3, const EVP_MD *dgst), REG(d0, STACK_OF(X509) *certs), REG(d1, unsigned long flags))
{
	return(OCSP_basic_sign(brsp, signer, key, dgst, certs, flags));
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_ASN1_STRING_encode(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *s), REG(a1, int (*i2d)()), REG(a2, char *data), REG(a3, STACK_OF(ASN1_OBJECT) *sk))
{
	return(ASN1_STRING_encode(s, i2d, data, sk));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_OCSP_crlID_new(REG(a6, __IFACE_OR_BASE), REG(a0, char *url), REG(a1, long *n), REG(a2, char *tim))
{
	return(OCSP_crlID_new(url, n, tim));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_OCSP_accept_responses_new(REG(a6, __IFACE_OR_BASE), REG(a0, char **oids))
{
	return(OCSP_accept_responses_new(oids));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_OCSP_archive_cutoff_new(REG(a6, __IFACE_OR_BASE), REG(a0, char*tim))
{
	return(OCSP_archive_cutoff_new(tim));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_OCSP_url_svcloc_new(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME*issuer), REG(a1, char **urls))
{
	return(OCSP_url_svcloc_new(issuer, urls));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_get_ext_count(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x))
{
	return(OCSP_REQUEST_get_ext_count(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_get_ext_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(OCSP_REQUEST_get_ext_by_NID(x, nid, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_get_ext_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(OCSP_REQUEST_get_ext_by_OBJ(x, obj, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_get_ext_by_critical(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(OCSP_REQUEST_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_get_ext(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(d0, int loc))
{
	return(OCSP_REQUEST_get_ext(x, loc));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_delete_ext(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(d0, int loc))
{
	return(OCSP_REQUEST_delete_ext(x, loc));
}

void * AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_get1_ext_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(OCSP_REQUEST_get1_ext_d2i(x, nid, crit, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_add1_ext_i2d(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(OCSP_REQUEST_add1_ext_i2d(x, nid, value, crit, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_add_ext(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(OCSP_REQUEST_add_ext(x, ex, loc));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_ONEREQ_get_ext_count(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x))
{
	return(OCSP_ONEREQ_get_ext_count(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_ONEREQ_get_ext_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(OCSP_ONEREQ_get_ext_by_NID(x, nid, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_ONEREQ_get_ext_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(OCSP_ONEREQ_get_ext_by_OBJ(x, obj, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_ONEREQ_get_ext_by_critical(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(OCSP_ONEREQ_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_OCSP_ONEREQ_get_ext(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(d0, int loc))
{
	return(OCSP_ONEREQ_get_ext(x, loc));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_OCSP_ONEREQ_delete_ext(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(d0, int loc))
{
	return(OCSP_ONEREQ_delete_ext(x, loc));
}

void * AMISSL_LIB_ENTRY _AmiSSL_OCSP_ONEREQ_get1_ext_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(OCSP_ONEREQ_get1_ext_d2i(x, nid, crit, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_ONEREQ_add1_ext_i2d(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(OCSP_ONEREQ_add1_ext_i2d(x, nid, value, crit, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_ONEREQ_add_ext(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(OCSP_ONEREQ_add_ext(x, ex, loc));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_BASICRESP_get_ext_count(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x))
{
	return(OCSP_BASICRESP_get_ext_count(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_BASICRESP_get_ext_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(OCSP_BASICRESP_get_ext_by_NID(x, nid, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_BASICRESP_get_ext_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(OCSP_BASICRESP_get_ext_by_OBJ(x, obj, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_BASICRESP_get_ext_by_critical(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(OCSP_BASICRESP_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_OCSP_BASICRESP_get_ext(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(d0, int loc))
{
	return(OCSP_BASICRESP_get_ext(x, loc));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_OCSP_BASICRESP_delete_ext(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(d0, int loc))
{
	return(OCSP_BASICRESP_delete_ext(x, loc));
}

void * AMISSL_LIB_ENTRY _AmiSSL_OCSP_BASICRESP_get1_ext_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(OCSP_BASICRESP_get1_ext_d2i(x, nid, crit, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_BASICRESP_add1_ext_i2d(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(OCSP_BASICRESP_add1_ext_i2d(x, nid, value, crit, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_BASICRESP_add_ext(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(OCSP_BASICRESP_add_ext(x, ex, loc));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_SINGLERESP_get_ext_count(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x))
{
	return(OCSP_SINGLERESP_get_ext_count(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_SINGLERESP_get_ext_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(OCSP_SINGLERESP_get_ext_by_NID(x, nid, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_SINGLERESP_get_ext_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(OCSP_SINGLERESP_get_ext_by_OBJ(x, obj, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_SINGLERESP_get_ext_by_critical(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(OCSP_SINGLERESP_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_OCSP_SINGLERESP_get_ext(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(d0, int loc))
{
	return(OCSP_SINGLERESP_get_ext(x, loc));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_OCSP_SINGLERESP_delete_ext(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(d0, int loc))
{
	return(OCSP_SINGLERESP_delete_ext(x, loc));
}

void * AMISSL_LIB_ENTRY _AmiSSL_OCSP_SINGLERESP_get1_ext_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(OCSP_SINGLERESP_get1_ext_d2i(x, nid, crit, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_SINGLERESP_add1_ext_i2d(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(OCSP_SINGLERESP_add1_ext_i2d(x, nid, value, crit, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_SINGLERESP_add_ext(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(OCSP_SINGLERESP_add_ext(x, ex, loc));
}

OCSP_SINGLERESP * AMISSL_LIB_ENTRY _AmiSSL_OCSP_SINGLERESP_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_SINGLERESP_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_SINGLERESP_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *a))
{
	OCSP_SINGLERESP_free(a);
}

OCSP_SINGLERESP * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_SINGLERESP(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_SINGLERESP(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_SINGLERESP(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_SINGLERESP(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_SINGLERESP_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_SINGLERESP_it());
}

OCSP_CERTSTATUS * AMISSL_LIB_ENTRY _AmiSSL_OCSP_CERTSTATUS_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_CERTSTATUS_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_CERTSTATUS_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTSTATUS *a))
{
	OCSP_CERTSTATUS_free(a);
}

OCSP_CERTSTATUS * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_CERTSTATUS(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTSTATUS **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_CERTSTATUS(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_CERTSTATUS(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTSTATUS *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_CERTSTATUS(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_CERTSTATUS_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_CERTSTATUS_it());
}

OCSP_REVOKEDINFO * AMISSL_LIB_ENTRY _AmiSSL_OCSP_REVOKEDINFO_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_REVOKEDINFO_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_REVOKEDINFO_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REVOKEDINFO *a))
{
	OCSP_REVOKEDINFO_free(a);
}

OCSP_REVOKEDINFO * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_REVOKEDINFO(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REVOKEDINFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_REVOKEDINFO(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_REVOKEDINFO(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REVOKEDINFO *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_REVOKEDINFO(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_REVOKEDINFO_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_REVOKEDINFO_it());
}

OCSP_BASICRESP * AMISSL_LIB_ENTRY _AmiSSL_OCSP_BASICRESP_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_BASICRESP_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_BASICRESP_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *a))
{
	OCSP_BASICRESP_free(a);
}

OCSP_BASICRESP * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_BASICRESP(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_BASICRESP(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_BASICRESP(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_BASICRESP(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_BASICRESP_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_BASICRESP_it());
}

OCSP_RESPDATA * AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPDATA_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPDATA_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPDATA_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPDATA *a))
{
	OCSP_RESPDATA_free(a);
}

OCSP_RESPDATA * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_RESPDATA(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPDATA **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_RESPDATA(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_RESPDATA(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPDATA *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_RESPDATA(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPDATA_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPDATA_it());
}

OCSP_RESPID * AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPID_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPID_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPID_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPID *a))
{
	OCSP_RESPID_free(a);
}

OCSP_RESPID * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_RESPID(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPID **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_RESPID(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_RESPID(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPID *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_RESPID(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPID_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPID_it());
}

OCSP_RESPONSE * AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPONSE_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPONSE_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPONSE_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPONSE *a))
{
	OCSP_RESPONSE_free(a);
}

OCSP_RESPONSE * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_RESPONSE(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPONSE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_RESPONSE(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_RESPONSE(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPONSE *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_RESPONSE(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPONSE_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPONSE_it());
}

OCSP_RESPBYTES * AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPBYTES_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPBYTES_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPBYTES_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPBYTES *a))
{
	OCSP_RESPBYTES_free(a);
}

OCSP_RESPBYTES * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_RESPBYTES(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPBYTES **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_RESPBYTES(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_RESPBYTES(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPBYTES *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_RESPBYTES(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPBYTES_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPBYTES_it());
}

OCSP_ONEREQ * AMISSL_LIB_ENTRY _AmiSSL_OCSP_ONEREQ_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_ONEREQ_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_ONEREQ_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *a))
{
	OCSP_ONEREQ_free(a);
}

OCSP_ONEREQ * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_ONEREQ(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_ONEREQ(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_ONEREQ(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_ONEREQ(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_ONEREQ_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_ONEREQ_it());
}

OCSP_CERTID * AMISSL_LIB_ENTRY _AmiSSL_OCSP_CERTID_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_CERTID_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_CERTID_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTID *a))
{
	OCSP_CERTID_free(a);
}

OCSP_CERTID * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_CERTID(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTID **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_CERTID(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_CERTID(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTID *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_CERTID(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_CERTID_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_CERTID_it());
}

OCSP_REQUEST * AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_REQUEST_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *a))
{
	OCSP_REQUEST_free(a);
}

OCSP_REQUEST * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_REQUEST(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_REQUEST(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_REQUEST(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_REQUEST(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_REQUEST_it());
}

OCSP_SIGNATURE * AMISSL_LIB_ENTRY _AmiSSL_OCSP_SIGNATURE_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_SIGNATURE_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_SIGNATURE_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SIGNATURE *a))
{
	OCSP_SIGNATURE_free(a);
}

OCSP_SIGNATURE * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_SIGNATURE(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SIGNATURE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_SIGNATURE(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_SIGNATURE(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SIGNATURE *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_SIGNATURE(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_SIGNATURE_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_SIGNATURE_it());
}

OCSP_REQINFO * AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQINFO_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_REQINFO_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQINFO_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQINFO *a))
{
	OCSP_REQINFO_free(a);
}

OCSP_REQINFO * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_REQINFO(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQINFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_REQINFO(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_REQINFO(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQINFO *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_REQINFO(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQINFO_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_REQINFO_it());
}

OCSP_CRLID * AMISSL_LIB_ENTRY _AmiSSL_OCSP_CRLID_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_CRLID_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_CRLID_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CRLID *a))
{
	OCSP_CRLID_free(a);
}

OCSP_CRLID * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_CRLID(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CRLID **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_CRLID(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_CRLID(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CRLID *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_CRLID(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_CRLID_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_CRLID_it());
}

OCSP_SERVICELOC * AMISSL_LIB_ENTRY _AmiSSL_OCSP_SERVICELOC_new(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_SERVICELOC_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OCSP_SERVICELOC_free(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SERVICELOC *a))
{
	OCSP_SERVICELOC_free(a);
}

OCSP_SERVICELOC * AMISSL_LIB_ENTRY _AmiSSL_d2i_OCSP_SERVICELOC(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SERVICELOC **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_SERVICELOC(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OCSP_SERVICELOC(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SERVICELOC *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_SERVICELOC(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OCSP_SERVICELOC_it(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_SERVICELOC_it());
}

char * AMISSL_LIB_ENTRY _AmiSSL_OCSP_response_status_str(REG(a6, __IFACE_OR_BASE), REG(d0, long s))
{
	return(OCSP_response_status_str(s));
}

char * AMISSL_LIB_ENTRY _AmiSSL_OCSP_cert_status_str(REG(a6, __IFACE_OR_BASE), REG(d0, long s))
{
	return(OCSP_cert_status_str(s));
}

char * AMISSL_LIB_ENTRY _AmiSSL_OCSP_crl_reason_str(REG(a6, __IFACE_OR_BASE), REG(d0, long s))
{
	return(OCSP_crl_reason_str(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_REQUEST_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, OCSP_REQUEST*a), REG(d0, unsigned long flags))
{
	return(OCSP_REQUEST_print(bp, a, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_RESPONSE_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, OCSP_RESPONSE*o), REG(d0, unsigned long flags))
{
	return(OCSP_RESPONSE_print(bp, o, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_OCSP_basic_verify(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *bs), REG(a1, STACK_OF(X509) *certs), REG(a2, X509_STORE *st), REG(d0, unsigned long flags))
{
	return(OCSP_basic_verify(bs, certs, st, flags));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_OCSP_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_OCSP_strings();
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_get_EVP_CIPHER_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, char *header), REG(a1, EVP_CIPHER_INFO *cipher))
{
	return(PEM_get_EVP_CIPHER_INFO(header, cipher));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_do_header(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_INFO *cipher), REG(a1, unsigned char *data), REG(a2, long *len), REG(a3, pem_password_cb *callback), REG(d0, void *u))
{
	return(PEM_do_header(cipher, data, len, callback, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, char **name), REG(a2, char **header), REG(a3, unsigned char **data), REG(d0, long *len))
{
	return(PEM_read_bio(bp, name, header, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, const char *name), REG(a2, char *hdr), REG(a3, unsigned char *data), REG(d0, long len))
{
	return(PEM_write_bio(bp, name, hdr, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_bytes_read_bio(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char **pdata), REG(a1, long *plen), REG(a2, char **pnm), REG(a3, const char *name), REG(d0, BIO *bp), REG(d1, pem_password_cb *cb), REG(d2, void *u))
{
	return(PEM_bytes_read_bio(pdata, plen, pnm, name, bp, cb, u));
}

char * AMISSL_LIB_ENTRY _AmiSSL_PEM_ASN1_read_bio(REG(a6, __IFACE_OR_BASE), REG(a0, char *(*d2i)()), REG(a1, const char *name), REG(a2, BIO *bp), REG(a3, char **x), REG(d0, pem_password_cb *cb), REG(d1, void *u))
{
	return(PEM_ASN1_read_bio(d2i, name, bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_ASN1_write_bio(REG(a6, __IFACE_OR_BASE), REG(a0, int (*i2d)()), REG(a1, const char *name), REG(a2, BIO *bp), REG(a3, char *x), REG(d0, const EVP_CIPHER *enc), REG(d1, unsigned char *kstr), REG(d2, int klen), REG(d3, pem_password_cb *cb), REG(d4, void *u))
{
	return(PEM_ASN1_write_bio(i2d, name, bp, x, enc, kstr, klen, cb, u));
}

STACK_OF(X509_INFO) * AMISSL_LIB_ENTRY _AmiSSL_PEM_X509_INFO_read_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, STACK_OF(X509_INFO) *sk), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_X509_INFO_read_bio(bp, sk, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_X509_INFO_write_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_INFO *xi), REG(a2, EVP_CIPHER *enc), REG(a3, unsigned char *kstr), REG(d0, int klen), REG(d1, pem_password_cb *cd), REG(d2, void *u))
{
	return(PEM_X509_INFO_write_bio(bp, xi, enc, kstr, klen, cd, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_SealInit(REG(a6, __IFACE_OR_BASE), REG(a0, PEM_ENCODE_SEAL_CTX *ctx), REG(a1, EVP_CIPHER *type), REG(a2, EVP_MD *md_type), REG(a3, unsigned char **ek), REG(d0, int *ekl), REG(d1, unsigned char *iv), REG(d2, EVP_PKEY **pubk), REG(d3, int npubk))
{
	return(PEM_SealInit(ctx, type, md_type, ek, ekl, iv, pubk, npubk));
}

void AMISSL_LIB_ENTRY _AmiSSL_PEM_SealUpdate(REG(a6, __IFACE_OR_BASE), REG(a0, PEM_ENCODE_SEAL_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl), REG(a3, unsigned char *in), REG(d0, int inl))
{
	PEM_SealUpdate(ctx, out, outl, in, inl);
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_SealFinal(REG(a6, __IFACE_OR_BASE), REG(a0, PEM_ENCODE_SEAL_CTX *ctx), REG(a1, unsigned char *sig), REG(a2, int *sigl), REG(a3, unsigned char *out), REG(d0, int *outl), REG(d1, EVP_PKEY *priv))
{
	return(PEM_SealFinal(ctx, sig, sigl, out, outl, priv));
}

void AMISSL_LIB_ENTRY _AmiSSL_PEM_SignInit(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, EVP_MD *type))
{
	PEM_SignInit(ctx, type);
}

void AMISSL_LIB_ENTRY _AmiSSL_PEM_SignUpdate(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, unsigned char *d), REG(d0, unsigned int cnt))
{
	PEM_SignUpdate(ctx, d, cnt);
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_SignFinal(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, unsigned char *sigret), REG(a2, unsigned int *siglen), REG(a3, EVP_PKEY *pkey))
{
	return(PEM_SignFinal(ctx, sigret, siglen, pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_def_callback(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int num), REG(d1, int w), REG(a1, void *key))
{
	return(PEM_def_callback(buf, num, w, key));
}

void AMISSL_LIB_ENTRY _AmiSSL_PEM_proc_type(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int type))
{
	PEM_proc_type(buf, type);
}

void AMISSL_LIB_ENTRY _AmiSSL_PEM_dek_info(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(a1, const char *type), REG(d0, int len), REG(a2, char *str))
{
	PEM_dek_info(buf, type, len, str);
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_X509(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_X509(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_X509(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 *x))
{
	return(PEM_write_bio_X509(bp, x));
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_X509_AUX(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_X509_AUX(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_X509_AUX(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 *x))
{
	return(PEM_write_bio_X509_AUX(bp, x));
}

X509_REQ * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_X509_REQ(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_X509_REQ(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_X509_REQ(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ *x))
{
	return(PEM_write_bio_X509_REQ(bp, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_X509_REQ_NEW(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ *x))
{
	return(PEM_write_bio_X509_REQ_NEW(bp, x));
}

X509_CRL * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_X509_CRL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_CRL **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_X509_CRL(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_X509_CRL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_CRL *x))
{
	return(PEM_write_bio_X509_CRL(bp, x));
}

PKCS7 * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_PKCS7(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS7 **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_PKCS7(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_PKCS7(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS7 *x))
{
	return(PEM_write_bio_PKCS7(bp, x));
}

NETSCAPE_CERT_SEQUENCE * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_NETSCAPE_CERT_SEQUENCE(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, NETSCAPE_CERT_SEQUENCE **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_NETSCAPE_CERT_SEQUENCE(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_NETSCAPE_CERT_SEQUENCE(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, NETSCAPE_CERT_SEQUENCE *x))
{
	return(PEM_write_bio_NETSCAPE_CERT_SEQUENCE(bp, x));
}

X509_SIG * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_PKCS8(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_SIG **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_PKCS8(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_PKCS8(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_SIG *x))
{
	return(PEM_write_bio_PKCS8(bp, x));
}

PKCS8_PRIV_KEY_INFO * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_PKCS8_PRIV_KEY_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS8_PRIV_KEY_INFO **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_PKCS8_PRIV_KEY_INFO(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_PKCS8_PRIV_KEY_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS8_PRIV_KEY_INFO *x))
{
	return(PEM_write_bio_PKCS8_PRIV_KEY_INFO(bp, x));
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_RSAPrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_RSAPrivateKey(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_RSAPrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA *x), REG(a2, const EVP_CIPHER *enc), REG(a3, unsigned char *kstr), REG(d0, int klen), REG(d1, pem_password_cb *cb), REG(d2, void *u))
{
	return(PEM_write_bio_RSAPrivateKey(bp, x, enc, kstr, klen, cb, u));
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_RSAPublicKey(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_RSAPublicKey(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_RSAPublicKey(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA *x))
{
	return(PEM_write_bio_RSAPublicKey(bp, x));
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_RSA_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_RSA_PUBKEY(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_RSA_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA *x))
{
	return(PEM_write_bio_RSA_PUBKEY(bp, x));
}

DSA * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_DSAPrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_DSAPrivateKey(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_DSAPrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA *x), REG(a2, const EVP_CIPHER *enc), REG(a3, unsigned char *kstr), REG(d0, int klen), REG(d1, pem_password_cb *cb), REG(d2, void *u))
{
	return(PEM_write_bio_DSAPrivateKey(bp, x, enc, kstr, klen, cb, u));
}

DSA * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_DSA_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_DSA_PUBKEY(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_DSA_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA *x))
{
	return(PEM_write_bio_DSA_PUBKEY(bp, x));
}

DSA * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_DSAparams(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_DSAparams(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_DSAparams(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA *x))
{
	return(PEM_write_bio_DSAparams(bp, x));
}

DH * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_DHparams(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DH **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_DHparams(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_DHparams(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DH *x))
{
	return(PEM_write_bio_DHparams(bp, x));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_PrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_PrivateKey(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_PrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *x), REG(a2, const EVP_CIPHER *enc), REG(a3, unsigned char *kstr), REG(d0, int klen), REG(d1, pem_password_cb *cb), REG(d2, void *u))
{
	return(PEM_write_bio_PrivateKey(bp, x, enc, kstr, klen, cb, u));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_PEM_read_bio_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_PUBKEY(bp, x, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *x))
{
	return(PEM_write_bio_PUBKEY(bp, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_PKCS8PrivateKey_nid(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *x), REG(d0, int nid), REG(a2, char *kstr), REG(d1, int klen), REG(a3, pem_password_cb *cb), REG(d2, void *u))
{
	return(PEM_write_bio_PKCS8PrivateKey_nid(bp, x, nid, kstr, klen, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_PEM_write_bio_PKCS8PrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *a), REG(a1, EVP_PKEY *b), REG(a2, const EVP_CIPHER *c), REG(a3, char *d), REG(d0, int a1), REG(d1, pem_password_cb *e), REG(d2, void *f))
{
	return(PEM_write_bio_PKCS8PrivateKey(a, b, c, d, a1, e, f));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS8PrivateKey_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *x), REG(a2, const EVP_CIPHER *enc), REG(a3, char *kstr), REG(d0, int klen), REG(d1, pem_password_cb *cb), REG(d2, void *u))
{
	return(i2d_PKCS8PrivateKey_bio(bp, x, enc, kstr, klen, cb, u));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS8PrivateKey_nid_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *x), REG(d0, int nid), REG(a2, char *kstr), REG(d1, int klen), REG(a3, pem_password_cb *cb), REG(d2, void *u))
{
	return(i2d_PKCS8PrivateKey_nid_bio(bp, x, nid, kstr, klen, cb, u));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS8PrivateKey_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(d2i_PKCS8PrivateKey_bio(bp, x, cb, u));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_PEM_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_PEM_strings();
}

PKCS12_SAFEBAG * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_x5092certbag(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x509))
{
	return(PKCS12_x5092certbag(x509));
}

PKCS12_SAFEBAG * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_x509crl2certbag(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *crl))
{
	return(PKCS12_x509crl2certbag(crl));
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_certbag2x509(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag))
{
	return(PKCS12_certbag2x509(bag));
}

X509_CRL * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_certbag2x509crl(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag))
{
	return(PKCS12_certbag2x509crl(bag));
}

PKCS12_SAFEBAG * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_item_pack_safebag(REG(a6, __IFACE_OR_BASE), REG(a0, void *obj), REG(a1, const ASN1_ITEM *it), REG(d0, int nid1), REG(d1, int nid2))
{
	return(PKCS12_item_pack_safebag(obj, it, nid1, nid2));
}

PKCS12_SAFEBAG * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_MAKE_KEYBAG(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO *p8))
{
	return(PKCS12_MAKE_KEYBAG(p8));
}

PKCS8_PRIV_KEY_INFO * AMISSL_LIB_ENTRY _AmiSSL_PKCS8_decrypt(REG(a6, __IFACE_OR_BASE), REG(a0, X509_SIG *p8), REG(a1, const char *pass), REG(d0, int passlen))
{
	return(PKCS8_decrypt(p8, pass, passlen));
}

PKCS8_PRIV_KEY_INFO * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_decrypt_skey(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag), REG(a1, const char *pass), REG(d0, int passlen))
{
	return(PKCS12_decrypt_skey(bag, pass, passlen));
}

X509_SIG * AMISSL_LIB_ENTRY _AmiSSL_PKCS8_encrypt(REG(a6, __IFACE_OR_BASE), REG(d0, int pbe_nid), REG(a0, const EVP_CIPHER *cipher), REG(a1, const char *pass), REG(d1, int passlen), REG(a2, unsigned char *salt), REG(d2, int saltlen), REG(d3, int iter), REG(a3, PKCS8_PRIV_KEY_INFO *p8))
{
	return(PKCS8_encrypt(pbe_nid, cipher, pass, passlen, salt, saltlen, iter, p8));
}

PKCS12_SAFEBAG * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_MAKE_SHKEYBAG(REG(a6, __IFACE_OR_BASE), REG(d0, int pbe_nid), REG(a0, const char *pass), REG(d1, int passlen), REG(a1, unsigned char *salt), REG(d2, int saltlen), REG(d3, int iter), REG(a2, PKCS8_PRIV_KEY_INFO *p8))
{
	return(PKCS12_MAKE_SHKEYBAG(pbe_nid, pass, passlen, salt, saltlen, iter, p8));
}

PKCS7 * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_pack_p7data(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(PKCS12_SAFEBAG) *sk))
{
	return(PKCS12_pack_p7data(sk));
}

STACK_OF(PKCS12_SAFEBAG) * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_unpack_p7data(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7))
{
	return(PKCS12_unpack_p7data(p7));
}

PKCS7 * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_pack_p7encdata(REG(a6, __IFACE_OR_BASE), REG(d0, int pbe_nid), REG(a0, const char *pass), REG(d1, int passlen), REG(a1, unsigned char *salt), REG(d2, int saltlen), REG(d3, int iter), REG(a2, STACK_OF(PKCS12_SAFEBAG) *bags))
{
	return(PKCS12_pack_p7encdata(pbe_nid, pass, passlen, salt, saltlen, iter, bags));
}

STACK_OF(PKCS12_SAFEBAG) * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_unpack_p7encdata(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, const char *pass), REG(d0, int passlen))
{
	return(PKCS12_unpack_p7encdata(p7, pass, passlen));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_pack_authsafes(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(a1, STACK_OF(PKCS7) *safes))
{
	return(PKCS12_pack_authsafes(p12, safes));
}

STACK_OF(PKCS7) * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_unpack_authsafes(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12))
{
	return(PKCS12_unpack_authsafes(p12));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_add_localkeyid(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag), REG(a1, unsigned char *name), REG(d0, int namelen))
{
	return(PKCS12_add_localkeyid(bag, name, namelen));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_add_friendlyname_asc(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag), REG(a1, const char *name), REG(d0, int namelen))
{
	return(PKCS12_add_friendlyname_asc(bag, name, namelen));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_add_CSPName_asc(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag), REG(a1, const char *name), REG(d0, int namelen))
{
	return(PKCS12_add_CSPName_asc(bag, name, namelen));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_add_friendlyname_uni(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag), REG(a1, const unsigned char *name), REG(d0, int namelen))
{
	return(PKCS12_add_friendlyname_uni(bag, name, namelen));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS8_add_keyusage(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO *p8), REG(d0, int usage))
{
	return(PKCS8_add_keyusage(p8, usage));
}

ASN1_TYPE * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_get_attr_gen(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) *attrs), REG(d0, int attr_nid))
{
	return(PKCS12_get_attr_gen(attrs, attr_nid));
}

char * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_get_friendlyname(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag))
{
	return(PKCS12_get_friendlyname(bag));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_pbe_crypt(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR *algor), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, unsigned char *in), REG(d1, int inlen), REG(a3, unsigned char **data), REG(d2, int *datalen), REG(d3, int en_de))
{
	return(PKCS12_pbe_crypt(algor, pass, passlen, in, inlen, data, datalen, en_de));
}

void * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_item_decrypt_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR *algor), REG(a1, const ASN1_ITEM *it), REG(a2, const char *pass), REG(d0, int passlen), REG(a3, ASN1_OCTET_STRING *oct), REG(d1, int zbuf))
{
	return(PKCS12_item_decrypt_d2i(algor, it, pass, passlen, oct, zbuf));
}

ASN1_OCTET_STRING * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_item_i2d_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR *algor), REG(a1, const ASN1_ITEM *it), REG(a2, const char *pass), REG(d0, int passlen), REG(a3, void *obj), REG(d1, int zbuf))
{
	return(PKCS12_item_i2d_encrypt(algor, it, pass, passlen, obj, zbuf));
}

PKCS12 * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_init(REG(a6, __IFACE_OR_BASE), REG(d0, int mode))
{
	return(PKCS12_init(mode));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_key_gen_asc(REG(a6, __IFACE_OR_BASE), REG(a0, const char *pass), REG(d0, int passlen), REG(a1, unsigned char *salt), REG(d1, int saltlen), REG(d2, int id), REG(d3, int iter), REG(d4, int n), REG(a2, unsigned char *out), REG(a3, const EVP_MD *md_type))
{
	return(PKCS12_key_gen_asc(pass, passlen, salt, saltlen, id, iter, n, out, md_type));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_key_gen_uni(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *pass), REG(d0, int passlen), REG(a1, unsigned char *salt), REG(d1, int saltlen), REG(d2, int id), REG(d3, int iter), REG(d4, int n), REG(a2, unsigned char *out), REG(a3, const EVP_MD *md_type))
{
	return(PKCS12_key_gen_uni(pass, passlen, salt, saltlen, id, iter, n, out, md_type));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_PBE_keyivgen(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, ASN1_TYPE *param), REG(a3, const EVP_CIPHER *cipher), REG(d1, const EVP_MD *md_type), REG(d2, int en_de))
{
	return(PKCS12_PBE_keyivgen(ctx, pass, passlen, param, cipher, md_type, en_de));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_gen_mac(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, unsigned char *mac), REG(a3, unsigned int *maclen))
{
	return(PKCS12_gen_mac(p12, pass, passlen, mac, maclen));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_verify_mac(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(a1, const char *pass), REG(d0, int passlen))
{
	return(PKCS12_verify_mac(p12, pass, passlen));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_set_mac(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, unsigned char *salt), REG(d1, int saltlen), REG(d2, int iter), REG(a3, const EVP_MD *md_type))
{
	return(PKCS12_set_mac(p12, pass, passlen, salt, saltlen, iter, md_type));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_setup_mac(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(d0, int iter), REG(a1, unsigned char *salt), REG(d1, int saltlen), REG(a2, const EVP_MD *md_type))
{
	return(PKCS12_setup_mac(p12, iter, salt, saltlen, md_type));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_asc2uni(REG(a6, __IFACE_OR_BASE), REG(a0, const char *asc), REG(d0, int asclen), REG(a1, unsigned char **uni), REG(a2, int *unilen))
{
	return(asc2uni(asc, asclen, uni, unilen));
}

char * AMISSL_LIB_ENTRY _AmiSSL_uni2asc(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *uni), REG(d0, int unilen))
{
	return(uni2asc(uni, unilen));
}

PKCS12 * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS12_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *a))
{
	PKCS12_free(a);
}

PKCS12 * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS12(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS12(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS12(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS12(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_it());
}

PKCS12_MAC_DATA * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_MAC_DATA_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_MAC_DATA_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS12_MAC_DATA_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_MAC_DATA *a))
{
	PKCS12_MAC_DATA_free(a);
}

PKCS12_MAC_DATA * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS12_MAC_DATA(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_MAC_DATA **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS12_MAC_DATA(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS12_MAC_DATA(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_MAC_DATA *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS12_MAC_DATA(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_MAC_DATA_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_MAC_DATA_it());
}

PKCS12_SAFEBAG * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_SAFEBAG_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_SAFEBAG_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS12_SAFEBAG_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *a))
{
	PKCS12_SAFEBAG_free(a);
}

PKCS12_SAFEBAG * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS12_SAFEBAG(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS12_SAFEBAG(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS12_SAFEBAG(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS12_SAFEBAG(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_SAFEBAG_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_SAFEBAG_it());
}

PKCS12_BAGS * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_BAGS_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_BAGS_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS12_BAGS_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_BAGS *a))
{
	PKCS12_BAGS_free(a);
}

PKCS12_BAGS * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS12_BAGS(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_BAGS **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS12_BAGS(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS12_BAGS(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_BAGS *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS12_BAGS(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_BAGS_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_BAGS_it());
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_SAFEBAGS_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_SAFEBAGS_it());
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_AUTHSAFES_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_AUTHSAFES_it());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS12_PBE_add(REG(a6, __IFACE_OR_BASE))
{
	PKCS12_PBE_add();
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_parse(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(a1, const char *pass), REG(a2, EVP_PKEY **pkey), REG(a3, X509 **cert), REG(d0, STACK_OF(X509) **ca))
{
	return(PKCS12_parse(p12, pass, pkey, cert, ca));
}

PKCS12 * AMISSL_LIB_ENTRY _AmiSSL_PKCS12_create(REG(a6, __IFACE_OR_BASE), REG(a0, char *pass), REG(a1, char *name), REG(a2, EVP_PKEY *pkey), REG(a3, X509 *cert), REG(d0, STACK_OF(X509) *ca), REG(d1, int nid_key), REG(d2, int nid_cert), REG(d3, int iter), REG(d4, int mac_iter), REG(d5, int keytype))
{
	return(PKCS12_create(pass, name, pkey, cert, ca, nid_key, nid_cert, iter, mac_iter, keytype));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS12_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS12 *p12))
{
	return(i2d_PKCS12_bio(bp, p12));
}

PKCS12 * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS12_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS12 **p12))
{
	return(d2i_PKCS12_bio(bp, p12));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS12_newpass(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(a1, char *oldpass), REG(a2, char *newpass))
{
	return(PKCS12_newpass(p12, oldpass, newpass));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_PKCS12_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_PKCS12_strings();
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ISSUER_AND_SERIAL_digest(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ISSUER_AND_SERIAL *data), REG(a1, const EVP_MD *type), REG(a2, unsigned char *md), REG(a3, unsigned int *len))
{
	return(PKCS7_ISSUER_AND_SERIAL_digest(data, type, md, len));
}

PKCS7 * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_dup(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7))
{
	return(PKCS7_dup(p7));
}

PKCS7 * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS7_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS7 **p7))
{
	return(d2i_PKCS7_bio(bp, p7));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS7_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS7 *p7))
{
	return(i2d_PKCS7_bio(bp, p7));
}

PKCS7_ISSUER_AND_SERIAL * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ISSUER_AND_SERIAL_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ISSUER_AND_SERIAL_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ISSUER_AND_SERIAL_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ISSUER_AND_SERIAL *a))
{
	PKCS7_ISSUER_AND_SERIAL_free(a);
}

PKCS7_ISSUER_AND_SERIAL * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS7_ISSUER_AND_SERIAL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ISSUER_AND_SERIAL **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_ISSUER_AND_SERIAL(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS7_ISSUER_AND_SERIAL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ISSUER_AND_SERIAL *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_ISSUER_AND_SERIAL(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ISSUER_AND_SERIAL_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ISSUER_AND_SERIAL_it());
}

PKCS7_SIGNER_INFO * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_SIGNER_INFO_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_SIGNER_INFO_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS7_SIGNER_INFO_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *a))
{
	PKCS7_SIGNER_INFO_free(a);
}

PKCS7_SIGNER_INFO * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS7_SIGNER_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_SIGNER_INFO(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS7_SIGNER_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_SIGNER_INFO(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_SIGNER_INFO_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_SIGNER_INFO_it());
}

PKCS7_RECIP_INFO * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_RECIP_INFO_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_RECIP_INFO_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS7_RECIP_INFO_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_RECIP_INFO *a))
{
	PKCS7_RECIP_INFO_free(a);
}

PKCS7_RECIP_INFO * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS7_RECIP_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_RECIP_INFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_RECIP_INFO(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS7_RECIP_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_RECIP_INFO *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_RECIP_INFO(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_RECIP_INFO_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_RECIP_INFO_it());
}

PKCS7_SIGNED * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_SIGNED_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_SIGNED_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS7_SIGNED_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNED *a))
{
	PKCS7_SIGNED_free(a);
}

PKCS7_SIGNED * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS7_SIGNED(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNED **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_SIGNED(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS7_SIGNED(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNED *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_SIGNED(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_SIGNED_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_SIGNED_it());
}

PKCS7_ENC_CONTENT * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ENC_CONTENT_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ENC_CONTENT_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ENC_CONTENT_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENC_CONTENT *a))
{
	PKCS7_ENC_CONTENT_free(a);
}

PKCS7_ENC_CONTENT * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS7_ENC_CONTENT(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENC_CONTENT **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_ENC_CONTENT(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS7_ENC_CONTENT(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENC_CONTENT *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_ENC_CONTENT(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ENC_CONTENT_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ENC_CONTENT_it());
}

PKCS7_ENVELOPE * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ENVELOPE_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ENVELOPE_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ENVELOPE_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENVELOPE *a))
{
	PKCS7_ENVELOPE_free(a);
}

PKCS7_ENVELOPE * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS7_ENVELOPE(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENVELOPE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_ENVELOPE(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS7_ENVELOPE(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENVELOPE *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_ENVELOPE(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ENVELOPE_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ENVELOPE_it());
}

PKCS7_SIGN_ENVELOPE * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_SIGN_ENVELOPE_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_SIGN_ENVELOPE_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS7_SIGN_ENVELOPE_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGN_ENVELOPE *a))
{
	PKCS7_SIGN_ENVELOPE_free(a);
}

PKCS7_SIGN_ENVELOPE * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS7_SIGN_ENVELOPE(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGN_ENVELOPE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_SIGN_ENVELOPE(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS7_SIGN_ENVELOPE(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGN_ENVELOPE *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_SIGN_ENVELOPE(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_SIGN_ENVELOPE_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_SIGN_ENVELOPE_it());
}

PKCS7_DIGEST * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_DIGEST_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_DIGEST_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS7_DIGEST_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_DIGEST *a))
{
	PKCS7_DIGEST_free(a);
}

PKCS7_DIGEST * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS7_DIGEST(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_DIGEST **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_DIGEST(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS7_DIGEST(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_DIGEST *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_DIGEST(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_DIGEST_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_DIGEST_it());
}

PKCS7_ENCRYPT * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ENCRYPT_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ENCRYPT_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ENCRYPT_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENCRYPT *a))
{
	PKCS7_ENCRYPT_free(a);
}

PKCS7_ENCRYPT * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS7_ENCRYPT(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENCRYPT **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_ENCRYPT(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS7_ENCRYPT(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENCRYPT *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_ENCRYPT(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ENCRYPT_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ENCRYPT_it());
}

PKCS7 * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS7_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *a))
{
	PKCS7_free(a);
}

PKCS7 * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS7(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS7(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_it());
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ATTR_SIGN_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ATTR_SIGN_it());
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ATTR_VERIFY_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ATTR_VERIFY_it());
}

long AMISSL_LIB_ENTRY _AmiSSL_PKCS7_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(d0, int cmd), REG(d1, long larg), REG(a1, char *parg))
{
	return(PKCS7_ctrl(p7, cmd, larg, parg));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_set_type(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(d0, int type))
{
	return(PKCS7_set_type(p7, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_set_content(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, PKCS7 *p7_data))
{
	return(PKCS7_set_content(p7, p7_data));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_SIGNER_INFO_set(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *p7i), REG(a1, X509 *x509), REG(a2, EVP_PKEY *pkey), REG(a3, const EVP_MD *dgst))
{
	return(PKCS7_SIGNER_INFO_set(p7i, x509, pkey, dgst));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_add_signer(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, PKCS7_SIGNER_INFO *p7i))
{
	return(PKCS7_add_signer(p7, p7i));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_add_certificate(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, X509 *x509))
{
	return(PKCS7_add_certificate(p7, x509));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_add_crl(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, X509_CRL *x509))
{
	return(PKCS7_add_crl(p7, x509));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_content_new(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(d0, int nid))
{
	return(PKCS7_content_new(p7, nid));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_dataVerify(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *cert_store), REG(a1, X509_STORE_CTX *ctx), REG(a2, BIO *bio), REG(a3, PKCS7 *p7), REG(d0, PKCS7_SIGNER_INFO *si))
{
	return(PKCS7_dataVerify(cert_store, ctx, bio, p7, si));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_signatureVerify(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, PKCS7 *p7), REG(a2, PKCS7_SIGNER_INFO *si), REG(a3, X509 *x509))
{
	return(PKCS7_signatureVerify(bio, p7, si, x509));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_dataInit(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, BIO *bio))
{
	return(PKCS7_dataInit(p7, bio));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_dataFinal(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, BIO *bio))
{
	return(PKCS7_dataFinal(p7, bio));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_dataDecode(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, EVP_PKEY *pkey), REG(a2, BIO *in_bio), REG(a3, X509 *pcert))
{
	return(PKCS7_dataDecode(p7, pkey, in_bio, pcert));
}

PKCS7_SIGNER_INFO * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_add_signature(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, X509 *x509), REG(a2, EVP_PKEY *pkey), REG(a3, const EVP_MD *dgst))
{
	return(PKCS7_add_signature(p7, x509, pkey, dgst));
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_cert_from_signer_info(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, PKCS7_SIGNER_INFO *si))
{
	return(PKCS7_cert_from_signer_info(p7, si));
}

STACK_OF(PKCS7_SIGNER_INFO) * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_get_signer_info(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7))
{
	return(PKCS7_get_signer_info(p7));
}

PKCS7_RECIP_INFO * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_add_recipient(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, X509 *x509))
{
	return(PKCS7_add_recipient(p7, x509));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_add_recipient_info(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, PKCS7_RECIP_INFO *ri))
{
	return(PKCS7_add_recipient_info(p7, ri));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_RECIP_INFO_set(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_RECIP_INFO *p7i), REG(a1, X509 *x509))
{
	return(PKCS7_RECIP_INFO_set(p7i, x509));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_set_cipher(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, const EVP_CIPHER *cipher))
{
	return(PKCS7_set_cipher(p7, cipher));
}

PKCS7_ISSUER_AND_SERIAL * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_get_issuer_and_serial(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(d0, int idx))
{
	return(PKCS7_get_issuer_and_serial(p7, idx));
}

ASN1_OCTET_STRING * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_digest_from_attributes(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) *sk))
{
	return(PKCS7_digest_from_attributes(sk));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_add_signed_attribute(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *p7si), REG(d0, int nid), REG(d1, int type), REG(a1, void *data))
{
	return(PKCS7_add_signed_attribute(p7si, nid, type, data));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_add_attribute(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *p7si), REG(d0, int nid), REG(d1, int atrtype), REG(a1, void *value))
{
	return(PKCS7_add_attribute(p7si, nid, atrtype, value));
}

ASN1_TYPE * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_get_attribute(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *si), REG(d0, int nid))
{
	return(PKCS7_get_attribute(si, nid));
}

ASN1_TYPE * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_get_signed_attribute(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *si), REG(d0, int nid))
{
	return(PKCS7_get_signed_attribute(si, nid));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_set_signed_attributes(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *p7si), REG(a1, STACK_OF(X509_ATTRIBUTE) *sk))
{
	return(PKCS7_set_signed_attributes(p7si, sk));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_set_attributes(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *p7si), REG(a1, STACK_OF(X509_ATTRIBUTE) *sk))
{
	return(PKCS7_set_attributes(p7si, sk));
}

PKCS7 * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_sign(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *signcert), REG(a1, EVP_PKEY *pkey), REG(a2, STACK_OF(X509) *certs), REG(a3, BIO *data), REG(d0, int flags))
{
	return(PKCS7_sign(signcert, pkey, certs, data, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_verify(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, STACK_OF(X509) *certs), REG(a2, X509_STORE *store), REG(a3, BIO *indata), REG(d0, BIO *out), REG(d1, int flags))
{
	return(PKCS7_verify(p7, certs, store, indata, out, flags));
}

STACK_OF(X509) * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_get0_signers(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, STACK_OF(X509) *certs), REG(d0, int flags))
{
	return(PKCS7_get0_signers(p7, certs, flags));
}

PKCS7 * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509) *certs), REG(a1, BIO *in), REG(a2, const EVP_CIPHER *cipher), REG(d0, int flags))
{
	return(PKCS7_encrypt(certs, in, cipher, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_decrypt(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, EVP_PKEY *pkey), REG(a2, X509 *cert), REG(a3, BIO *data), REG(d0, int flags))
{
	return(PKCS7_decrypt(p7, pkey, cert, data, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_add_attrib_smimecap(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *si), REG(a1, STACK_OF(X509_ALGOR) *cap))
{
	return(PKCS7_add_attrib_smimecap(si, cap));
}

STACK_OF(X509_ALGOR) * AMISSL_LIB_ENTRY _AmiSSL_PKCS7_get_smimecap(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *si))
{
	return(PKCS7_get_smimecap(si));
}

int AMISSL_LIB_ENTRY _AmiSSL_PKCS7_simple_smimecap(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ALGOR) *sk), REG(d0, int nid), REG(d1, int arg))
{
	return(PKCS7_simple_smimecap(sk, nid, arg));
}

int AMISSL_LIB_ENTRY _AmiSSL_SMIME_write_PKCS7(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, PKCS7 *p7), REG(a2, BIO *data), REG(d0, int flags))
{
	return(SMIME_write_PKCS7(bio, p7, data, flags));
}

PKCS7 * AMISSL_LIB_ENTRY _AmiSSL_SMIME_read_PKCS7(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, BIO **bcont))
{
	return(SMIME_read_PKCS7(bio, bcont));
}

int AMISSL_LIB_ENTRY _AmiSSL_SMIME_crlf_copy(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *in), REG(a1, BIO *out), REG(d0, int flags))
{
	return(SMIME_crlf_copy(in, out, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_SMIME_text(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *in), REG(a1, BIO *out))
{
	return(SMIME_text(in, out));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_PKCS7_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_PKCS7_strings();
}

int AMISSL_LIB_ENTRY _AmiSSL_RAND_set_rand_method(REG(a6, __IFACE_OR_BASE), REG(a0, const RAND_METHOD *meth))
{
	return(RAND_set_rand_method(meth));
}

const RAND_METHOD * AMISSL_LIB_ENTRY _AmiSSL_RAND_get_rand_method(REG(a6, __IFACE_OR_BASE))
{
	return(RAND_get_rand_method());
}

RAND_METHOD * AMISSL_LIB_ENTRY _AmiSSL_RAND_SSLeay(REG(a6, __IFACE_OR_BASE))
{
	return(RAND_SSLeay());
}

void AMISSL_LIB_ENTRY _AmiSSL_RAND_cleanup(REG(a6, __IFACE_OR_BASE))
{
	RAND_cleanup();
}

int AMISSL_LIB_ENTRY _AmiSSL_RAND_bytes(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *buf), REG(d0, int num))
{
	return(RAND_bytes(buf, num));
}

int AMISSL_LIB_ENTRY _AmiSSL_RAND_pseudo_bytes(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *buf), REG(d0, int num))
{
	return(RAND_pseudo_bytes(buf, num));
}

void AMISSL_LIB_ENTRY _AmiSSL_RAND_seed(REG(a6, __IFACE_OR_BASE), REG(a0, const void *buf), REG(d0, int num))
{
	RAND_seed(buf, num);
}

#ifdef __amigaos4__
void AMISSL_LIB_ENTRY _AmiSSL_RAND_add(REG(a6, __IFACE_OR_BASE), REG(a0, const void *buf), REG(d0, int num), REG(d1, double entropy))
{
	RAND_add(buf, num, entropy);
}
#else
void AMISSL_LIB_ENTRY _AmiSSL_RAND_add(REG(a6, __IFACE_OR_BASE), REG(a0, const void *buf), REG(d0, int num), REG(d1, float entropy))
{
	RAND_add(buf, num, (double)entropy);
}
#endif

int AMISSL_LIB_ENTRY _AmiSSL_RAND_load_file(REG(a6, __IFACE_OR_BASE), REG(a0, const char *file), REG(d0, long max_bytes))
{
	return(RAND_load_file(file, max_bytes));
}

int AMISSL_LIB_ENTRY _AmiSSL_RAND_write_file(REG(a6, __IFACE_OR_BASE), REG(a0, const char *file))
{
	return(RAND_write_file(file));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_RAND_file_name(REG(a6, __IFACE_OR_BASE), REG(a0, char *file), REG(d0, size_t num))
{
	return(RAND_file_name(file, num));
}

int AMISSL_LIB_ENTRY _AmiSSL_RAND_status(REG(a6, __IFACE_OR_BASE))
{
	return(RAND_status());
}

int AMISSL_LIB_ENTRY _AmiSSL_RAND_query_egd_bytes(REG(a6, __IFACE_OR_BASE), REG(a0, const char *path), REG(a1, unsigned char *buf), REG(d0, int bytes))
{
	return(RAND_query_egd_bytes(path, buf, bytes));
}

int AMISSL_LIB_ENTRY _AmiSSL_RAND_egd(REG(a6, __IFACE_OR_BASE), REG(a0, const char *path))
{
	return(RAND_egd(path));
}

int AMISSL_LIB_ENTRY _AmiSSL_RAND_egd_bytes(REG(a6, __IFACE_OR_BASE), REG(a0, const char *path), REG(d0, int bytes))
{
	return(RAND_egd_bytes(path, bytes));
}

int AMISSL_LIB_ENTRY _AmiSSL_RAND_poll(REG(a6, __IFACE_OR_BASE))
{
	return(RAND_poll());
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_RAND_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_RAND_strings();
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_msg_callback(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, void (*cb)(int write_p, int version, int content_type, const void *buf, size_t len, SSL *ssl, void *arg)))
{
	SSL_CTX_set_msg_callback(ctx, cb);
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_msg_callback(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, void (*cb)(int write_p, int version, int content_type, const void *buf, size_t len, SSL *ssl, void *arg)))
{
	SSL_set_msg_callback(ssl, cb);
}

struct lhash_st * AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_sessions(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(SSL_CTX_sessions(ctx));
}

size_t AMISSL_LIB_ENTRY _AmiSSL_SSL_get_finished(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s), REG(a1, void *buf), REG(d0, size_t count))
{
	return(SSL_get_finished(s, buf, count));
}

size_t AMISSL_LIB_ENTRY _AmiSSL_SSL_get_peer_finished(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s), REG(a1, void *buf), REG(d0, size_t count))
{
	return(SSL_get_peer_finished(s, buf, count));
}

BIO_METHOD * AMISSL_LIB_ENTRY _AmiSSL_BIO_f_ssl(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_ssl());
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_new_ssl(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, int client))
{
	return(BIO_new_ssl(ctx, client));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_new_ssl_connect(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(BIO_new_ssl_connect(ctx));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_BIO_new_buffer_ssl_connect(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(BIO_new_buffer_ssl_connect(ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_BIO_ssl_copy_session_id(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *to), REG(a1, BIO *from))
{
	return(BIO_ssl_copy_session_id(to, from));
}

void AMISSL_LIB_ENTRY _AmiSSL_BIO_ssl_shutdown(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *ssl_bio))
{
	BIO_ssl_shutdown(ssl_bio);
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_cipher_list(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a1), REG(a1, const char *str))
{
	return(SSL_CTX_set_cipher_list(a1, str));
}

SSL_CTX * AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_new(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_METHOD *meth))
{
	return(SSL_CTX_new(meth));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_free(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a))
{
	SSL_CTX_free(a);
}

long AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_timeout(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, long t))
{
	return(SSL_CTX_set_timeout(ctx, t));
}

long AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_get_timeout(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_CTX *ctx))
{
	return(SSL_CTX_get_timeout(ctx));
}

X509_STORE * AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_get_cert_store(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_CTX *a))
{
	return(SSL_CTX_get_cert_store(a));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_cert_store(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a), REG(a1, X509_STORE *b))
{
	SSL_CTX_set_cert_store(a, b);
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_want(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_want(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_clear(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_clear(s));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_flush_sessions(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, long tm))
{
	SSL_CTX_flush_sessions(ctx, tm);
}

SSL_CIPHER * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_current_cipher(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_current_cipher(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CIPHER_get_bits(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_CIPHER *c), REG(a1, int *alg_bits))
{
	return(SSL_CIPHER_get_bits(c, alg_bits));
}

char * AMISSL_LIB_ENTRY _AmiSSL_SSL_CIPHER_get_version(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_CIPHER *c))
{
	return(SSL_CIPHER_get_version(c));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_CIPHER_get_name(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_CIPHER *c))
{
	return(SSL_CIPHER_get_name(c));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_CIPHER_get_mac(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *cipher))
{
	return(SSL_CIPHER_get_mac(cipher));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_CIPHER_get_encryption(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *cipher))
{
	return(SSL_CIPHER_get_encryption(cipher));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_CIPHER_get_authentication(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *cipher))
{
	return(SSL_CIPHER_get_authentication(cipher));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_CIPHER_get_key_exchange(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *cipher))
{
	return(SSL_CIPHER_get_key_exchange(cipher));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_CIPHER_get_export(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *cipher))
{
	return(SSL_CIPHER_get_export(cipher));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_get_fd(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_fd(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_get_rfd(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_rfd(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_get_wfd(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_wfd(s));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_cipher_list(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s), REG(d0, int n))
{
	return(SSL_get_cipher_list(s, n));
}

char * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_shared_ciphers(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s), REG(a1, char *buf), REG(d0, int len))
{
	return(SSL_get_shared_ciphers(s, buf, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_get_read_ahead(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_read_ahead(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_pending(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_pending(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_set_fd(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int fd))
{
	return(SSL_set_fd(s, fd));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_set_rfd(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int fd))
{
	return(SSL_set_rfd(s, fd));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_set_wfd(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int fd))
{
	return(SSL_set_wfd(s, fd));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_bio(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(a1, BIO *rbio), REG(a2, BIO *wbio))
{
	SSL_set_bio(s, rbio, wbio);
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_rbio(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_rbio(s));
}

BIO * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_wbio(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_wbio(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_set_cipher_list(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(a1, const char *str))
{
	return(SSL_set_cipher_list(s, str));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_read_ahead(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int yes))
{
	SSL_set_read_ahead(s, yes);
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_get_verify_mode(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_verify_mode(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_get_verify_depth(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_verify_depth(s));
}

int AMISSL_LIB_ENTRY (*_AmiSSL_SSL_get_verify_callback(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s)))(int, X509_STORE_CTX *)
{
	return(SSL_get_verify_callback(s));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_verify(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int mode), REG(a1, int (*callback)(int ok, X509_STORE_CTX *ctx)))
{
	SSL_set_verify(s, mode, callback);
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_verify_depth(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int depth))
{
	SSL_set_verify_depth(s, depth);
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_use_RSAPrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, RSA *rsa))
{
	return(SSL_use_RSAPrivateKey(ssl, rsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_use_RSAPrivateKey_ASN1(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, unsigned char *d), REG(d0, long len))
{
	return(SSL_use_RSAPrivateKey_ASN1(ssl, d, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_use_PrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, EVP_PKEY *pkey))
{
	return(SSL_use_PrivateKey(ssl, pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_use_PrivateKey_ASN1(REG(a6, __IFACE_OR_BASE), REG(d0, int pk), REG(a0, SSL *ssl), REG(a1, unsigned char *d), REG(d1, long len))
{
	return(SSL_use_PrivateKey_ASN1(pk, ssl, d, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_use_certificate(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, X509 *x))
{
	return(SSL_use_certificate(ssl, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_use_certificate_ASN1(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, unsigned char *d), REG(d0, int len))
{
	return(SSL_use_certificate_ASN1(ssl, d, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_use_RSAPrivateKey_file(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, const char *file), REG(d0, int type))
{
	return(SSL_use_RSAPrivateKey_file(ssl, file, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_use_PrivateKey_file(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, const char *file), REG(d0, int type))
{
	return(SSL_use_PrivateKey_file(ssl, file, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_use_certificate_file(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, const char *file), REG(d0, int type))
{
	return(SSL_use_certificate_file(ssl, file, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_use_RSAPrivateKey_file(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, const char *file), REG(d0, int type))
{
	return(SSL_CTX_use_RSAPrivateKey_file(ctx, file, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_use_PrivateKey_file(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, const char *file), REG(d0, int type))
{
	return(SSL_CTX_use_PrivateKey_file(ctx, file, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_use_certificate_file(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, const char *file), REG(d0, int type))
{
	return(SSL_CTX_use_certificate_file(ctx, file, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_use_certificate_chain_file(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, const char *file))
{
	return(SSL_CTX_use_certificate_chain_file(ctx, file));
}

STACK_OF(X509_NAME) * AMISSL_LIB_ENTRY _AmiSSL_SSL_load_client_CA_file(REG(a6, __IFACE_OR_BASE), REG(a0, const char *file))
{
	return(SSL_load_client_CA_file(file));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_add_file_cert_subjects_to_stack(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_NAME) *stackCAs), REG(a1, const char *file))
{
	return(SSL_add_file_cert_subjects_to_stack(stackCAs, file));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_add_dir_cert_subjects_to_stack(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_NAME) *stackCAs), REG(a1, const char *dir))
{
	return(SSL_add_dir_cert_subjects_to_stack(stackCAs, dir));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_load_error_strings(REG(a6, __IFACE_OR_BASE))
{
	SSL_load_error_strings();
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_state_string(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_state_string(s));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_rstate_string(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_rstate_string(s));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_state_string_long(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_state_string_long(s));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_rstate_string_long(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_rstate_string_long(s));
}

long AMISSL_LIB_ENTRY _AmiSSL_SSL_SESSION_get_time(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_SESSION *s))
{
	return(SSL_SESSION_get_time(s));
}

long AMISSL_LIB_ENTRY _AmiSSL_SSL_SESSION_set_time(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *s), REG(d0, long t))
{
	return(SSL_SESSION_set_time(s, t));
}

long AMISSL_LIB_ENTRY _AmiSSL_SSL_SESSION_get_timeout(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_SESSION *s))
{
	return(SSL_SESSION_get_timeout(s));
}

long AMISSL_LIB_ENTRY _AmiSSL_SSL_SESSION_set_timeout(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *s), REG(d0, long t))
{
	return(SSL_SESSION_set_timeout(s, t));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_copy_session_id(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *to), REG(a1, const SSL *from))
{
	SSL_copy_session_id(to, from);
}

SSL_SESSION * AMISSL_LIB_ENTRY _AmiSSL_SSL_SESSION_new(REG(a6, __IFACE_OR_BASE))
{
	return(SSL_SESSION_new());
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_SSL_SESSION_hash(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_SESSION *a))
{
	return(SSL_SESSION_hash(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_SESSION_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_SESSION *a), REG(a1, const SSL_SESSION *b))
{
	return(SSL_SESSION_cmp(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_SESSION_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *fp), REG(a1, const SSL_SESSION *ses))
{
	return(SSL_SESSION_print(fp, ses));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_SESSION_free(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *ses))
{
	SSL_SESSION_free(ses);
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_SSL_SESSION(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *in), REG(a1, unsigned char **pp))
{
	return(i2d_SSL_SESSION(in, pp));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_set_session(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *to), REG(a1, SSL_SESSION *session))
{
	return(SSL_set_session(to, session));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_add_session(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *s), REG(a1, SSL_SESSION *c))
{
	return(SSL_CTX_add_session(s, c));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_remove_session(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a1), REG(a1, SSL_SESSION *c))
{
	return(SSL_CTX_remove_session(a1, c));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_generate_session_id(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a), REG(d0, GEN_SESSION_CB b))
{
	return(SSL_CTX_set_generate_session_id(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_set_generate_session_id(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *a), REG(d0, GEN_SESSION_CB b))
{
	return(SSL_set_generate_session_id(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_has_matching_session_id(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ssl), REG(a1, const unsigned char *id), REG(d0, unsigned int id_len))
{
	return(SSL_has_matching_session_id(ssl, id, id_len));
}

SSL_SESSION * AMISSL_LIB_ENTRY _AmiSSL_d2i_SSL_SESSION(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION **a), REG(a1, const unsigned char *const *pp), REG(d0, long length))
{
	return(d2i_SSL_SESSION(a, pp, length));
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_peer_certificate(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_peer_certificate(s));
}

STACK_OF(X509) * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_peer_cert_chain(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_peer_cert_chain(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_get_verify_mode(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_CTX *ctx))
{
	return(SSL_CTX_get_verify_mode(ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_get_verify_depth(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_CTX *ctx))
{
	return(SSL_CTX_get_verify_depth(ctx));
}

int AMISSL_LIB_ENTRY (*_AmiSSL_SSL_CTX_get_verify_callback(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_CTX *ctx)))(int, X509_STORE_CTX *)
{
	return(SSL_CTX_get_verify_callback(ctx));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_verify(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, int mode), REG(a1, int (*callback)(int, X509_STORE_CTX *)))
{
	SSL_CTX_set_verify(ctx, mode, callback);
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_verify_depth(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, int depth))
{
	SSL_CTX_set_verify_depth(ctx, depth);
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_cert_verify_callback(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, int (*cb)(X509_STORE_CTX *, void *)), REG(a2, void *arg))
{
	SSL_CTX_set_cert_verify_callback(ctx, cb, arg);
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_use_RSAPrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, RSA *rsa))
{
	return(SSL_CTX_use_RSAPrivateKey(ctx, rsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_use_RSAPrivateKey_ASN1(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, unsigned char *d), REG(d0, long len))
{
	return(SSL_CTX_use_RSAPrivateKey_ASN1(ctx, d, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_use_PrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, EVP_PKEY *pkey))
{
	return(SSL_CTX_use_PrivateKey(ctx, pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_use_PrivateKey_ASN1(REG(a6, __IFACE_OR_BASE), REG(d0, int pk), REG(a0, SSL_CTX *ctx), REG(a1, unsigned char *d), REG(d1, long len))
{
	return(SSL_CTX_use_PrivateKey_ASN1(pk, ctx, d, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_use_certificate(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, X509 *x))
{
	return(SSL_CTX_use_certificate(ctx, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_use_certificate_ASN1(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, int len), REG(a1, unsigned char *d))
{
	return(SSL_CTX_use_certificate_ASN1(ctx, len, d));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_default_passwd_cb(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, pem_password_cb *cb))
{
	SSL_CTX_set_default_passwd_cb(ctx, cb);
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_default_passwd_cb_userdata(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, void *u))
{
	SSL_CTX_set_default_passwd_cb_userdata(ctx, u);
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_check_private_key(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_CTX *ctx))
{
	return(SSL_CTX_check_private_key(ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_check_private_key(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ctx))
{
	return(SSL_check_private_key(ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_session_id_context(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, const unsigned char *sid_ctx), REG(d0, unsigned int sid_ctx_len))
{
	return(SSL_CTX_set_session_id_context(ctx, sid_ctx, sid_ctx_len));
}

SSL * AMISSL_LIB_ENTRY _AmiSSL_SSL_new(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(SSL_new(ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_set_session_id_context(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, const unsigned char *sid_ctx), REG(d0, unsigned int sid_ctx_len))
{
	return(SSL_set_session_id_context(ssl, sid_ctx, sid_ctx_len));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_purpose(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *s), REG(d0, int purpose))
{
	return(SSL_CTX_set_purpose(s, purpose));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_set_purpose(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int purpose))
{
	return(SSL_set_purpose(s, purpose));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_trust(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *s), REG(d0, int trust))
{
	return(SSL_CTX_set_trust(s, trust));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_set_trust(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int trust))
{
	return(SSL_set_trust(s, trust));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_free(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	SSL_free(ssl);
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_accept(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_accept(ssl));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_connect(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_connect(ssl));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_read(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, void *buf), REG(d0, int num))
{
	return(SSL_read(ssl, buf, num));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_peek(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, void *buf), REG(d0, int num))
{
	return(SSL_peek(ssl, buf, num));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_write(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, const void *buf), REG(d0, int num))
{
	return(SSL_write(ssl, buf, num));
}

long AMISSL_LIB_ENTRY _AmiSSL_SSL_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(d0, int cmd), REG(d1, long larg), REG(a1, void *parg))
{
	return(SSL_ctrl(ssl, cmd, larg, parg));
}

long AMISSL_LIB_ENTRY _AmiSSL_SSL_callback_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *a), REG(d0, int a1), REG(a1, void (*b)()))
{
	return(SSL_callback_ctrl(a, a1, b));
}

long AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, int cmd), REG(d1, long larg), REG(a1, void *parg))
{
	return(SSL_CTX_ctrl(ctx, cmd, larg, parg));
}

long AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_callback_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a1), REG(d0, int a2), REG(a1, void (*a3)()))
{
	return(SSL_CTX_callback_ctrl(a1, a2, a3));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_get_error(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s), REG(d0, int ret_code))
{
	return(SSL_get_error(s, ret_code));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_version(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_version(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_ssl_version(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, SSL_METHOD *meth))
{
	return(SSL_CTX_set_ssl_version(ctx, meth));
}

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_SSLv2_method(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv2_method());
}

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_SSLv2_server_method(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv2_server_method());
}

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_SSLv2_client_method(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv2_client_method());
}

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_SSLv3_method(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv3_method());
}

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_SSLv3_server_method(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv3_server_method());
}

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_SSLv3_client_method(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv3_client_method());
}

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_TLSv1_method(REG(a6, __IFACE_OR_BASE))
{
	return(TLSv1_method());
}

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_TLSv1_server_method(REG(a6, __IFACE_OR_BASE))
{
	return(TLSv1_server_method());
}

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_TLSv1_client_method(REG(a6, __IFACE_OR_BASE))
{
	return(TLSv1_client_method());
}

STACK_OF(SSL_CIPHER) * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_ciphers(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_ciphers(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_do_handshake(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_do_handshake(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_renegotiate(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_renegotiate(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_renegotiate_pending(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_renegotiate_pending(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_shutdown(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_shutdown(s));
}

SSL_METHOD * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_ssl_method(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_ssl_method(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_set_ssl_method(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(a1, SSL_METHOD *method))
{
	return(SSL_set_ssl_method(s, method));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_alert_type_string_long(REG(a6, __IFACE_OR_BASE), REG(d0, int value))
{
	return(SSL_alert_type_string_long(value));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_alert_type_string(REG(a6, __IFACE_OR_BASE), REG(d0, int value))
{
	return(SSL_alert_type_string(value));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_alert_desc_string_long(REG(a6, __IFACE_OR_BASE), REG(d0, int value))
{
	return(SSL_alert_desc_string_long(value));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_SSL_alert_desc_string(REG(a6, __IFACE_OR_BASE), REG(d0, int value))
{
	return(SSL_alert_desc_string(value));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_client_CA_list(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(a1, STACK_OF(X509_NAME) *name_list))
{
	SSL_set_client_CA_list(s, name_list);
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_client_CA_list(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, STACK_OF(X509_NAME) *name_list))
{
	SSL_CTX_set_client_CA_list(ctx, name_list);
}

STACK_OF(X509_NAME) * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_client_CA_list(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_client_CA_list(s));
}

STACK_OF(X509_NAME) * AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_get_client_CA_list(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_CTX *s))
{
	return(SSL_CTX_get_client_CA_list(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_add_client_CA(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, X509 *x))
{
	return(SSL_add_client_CA(ssl, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_add_client_CA(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, X509 *x))
{
	return(SSL_CTX_add_client_CA(ctx, x));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_connect_state(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	SSL_set_connect_state(s);
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_accept_state(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	SSL_set_accept_state(s);
}

long AMISSL_LIB_ENTRY _AmiSSL_SSL_get_default_timeout(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_get_default_timeout(s));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_library_init(REG(a6, __IFACE_OR_BASE))
{
	return(SSL_library_init());
}

char * AMISSL_LIB_ENTRY _AmiSSL_SSL_CIPHER_description(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *a1), REG(a1, char *buf), REG(d0, int size))
{
	return(SSL_CIPHER_description(a1, buf, size));
}

STACK_OF(X509_NAME) * AMISSL_LIB_ENTRY _AmiSSL_SSL_dup_CA_list(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_NAME) *sk))
{
	return(SSL_dup_CA_list(sk));
}

SSL * AMISSL_LIB_ENTRY _AmiSSL_SSL_dup(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_dup(ssl));
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_certificate(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ssl))
{
	return(SSL_get_certificate(ssl));
}

struct evp_pkey_st * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_privatekey(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_get_privatekey(ssl));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_quiet_shutdown(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, int mode))
{
	SSL_CTX_set_quiet_shutdown(ctx, mode);
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_get_quiet_shutdown(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_CTX *ctx))
{
	return(SSL_CTX_get_quiet_shutdown(ctx));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_quiet_shutdown(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(d0, int mode))
{
	SSL_set_quiet_shutdown(ssl, mode);
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_get_quiet_shutdown(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ssl))
{
	return(SSL_get_quiet_shutdown(ssl));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_shutdown(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(d0, int mode))
{
	SSL_set_shutdown(ssl, mode);
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_get_shutdown(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ssl))
{
	return(SSL_get_shutdown(ssl));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_version(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ssl))
{
	return(SSL_version(ssl));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_default_verify_paths(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(SSL_CTX_set_default_verify_paths(ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_load_verify_locations(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, const char *CAfile), REG(a2, const char *CApath))
{
	return(SSL_CTX_load_verify_locations(ctx, CAfile, CApath));
}

SSL_SESSION * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_session(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ssl))
{
	return(SSL_get_session(ssl));
}

SSL_SESSION * AMISSL_LIB_ENTRY _AmiSSL_SSL_get1_session(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_get1_session(ssl));
}

SSL_CTX * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_SSL_CTX(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ssl))
{
	return(SSL_get_SSL_CTX(ssl));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_info_callback(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, void (*cb)(const SSL *ssl, int type, int val)))
{
	SSL_set_info_callback(ssl, cb);
}

void AMISSL_LIB_ENTRY (*_AmiSSL_SSL_get_info_callback(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ssl)))(const SSL *ssl, int type, int val)
{
	return(SSL_get_info_callback(ssl));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_state(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ssl))
{
	return(SSL_state(ssl));
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_verify_result(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(d0, long v))
{
	SSL_set_verify_result(ssl, v);
}

long AMISSL_LIB_ENTRY _AmiSSL_SSL_get_verify_result(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ssl))
{
	return(SSL_get_verify_result(ssl));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_set_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(d0, int idx), REG(a1, void *data))
{
	return(SSL_set_ex_data(ssl, idx, data));
}

void * AMISSL_LIB_ENTRY _AmiSSL_SSL_get_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ssl), REG(d0, int idx))
{
	return(SSL_get_ex_data(ssl, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_get_ex_new_index(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(SSL_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_SESSION_set_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *ss), REG(d0, int idx), REG(a1, void *data))
{
	return(SSL_SESSION_set_ex_data(ss, idx, data));
}

void * AMISSL_LIB_ENTRY _AmiSSL_SSL_SESSION_get_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_SESSION *ss), REG(d0, int idx))
{
	return(SSL_SESSION_get_ex_data(ss, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_SESSION_get_ex_new_index(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(SSL_SESSION_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ssl), REG(d0, int idx), REG(a1, void *data))
{
	return(SSL_CTX_set_ex_data(ssl, idx, data));
}

void * AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_get_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL_CTX *ssl), REG(d0, int idx))
{
	return(SSL_CTX_get_ex_data(ssl, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_get_ex_new_index(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(SSL_CTX_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_get_ex_data_X509_STORE_CTX_idx(REG(a6, __IFACE_OR_BASE))
{
	return(SSL_get_ex_data_X509_STORE_CTX_idx());
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_tmp_rsa_callback(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, RSA *(*cb)(SSL *ssl, int is_export, int keylength)))
{
	SSL_CTX_set_tmp_rsa_callback(ctx, cb);
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_tmp_rsa_callback(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, RSA *(*cb)(SSL *ssl, int is_export, int keylength)))
{
	SSL_set_tmp_rsa_callback(ssl, cb);
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_CTX_set_tmp_dh_callback(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, DH *(*dh)(SSL *ssl, int is_export, int keylength)))
{
	SSL_CTX_set_tmp_dh_callback(ctx, dh);
}

void AMISSL_LIB_ENTRY _AmiSSL_SSL_set_tmp_dh_callback(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, DH *(*dh)(SSL *ssl, int is_export, int keylength)))
{
	SSL_set_tmp_dh_callback(ssl, dh);
}

int AMISSL_LIB_ENTRY _AmiSSL_SSL_COMP_add_compression_method(REG(a6, __IFACE_OR_BASE), REG(d0, int id), REG(a0, COMP_METHOD *cm))
{
	return(SSL_COMP_add_compression_method(id, cm));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_SSL_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_SSL_strings();
}

int AMISSL_LIB_ENTRY _AmiSSL_sk_num(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK *a))
{
	return(sk_num(a));
}

char * AMISSL_LIB_ENTRY _AmiSSL_sk_value(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK *a), REG(d0, int b))
{
	return(sk_value(a, b));
}

char * AMISSL_LIB_ENTRY _AmiSSL_sk_set(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *a), REG(d0, int b), REG(a1, char *c))
{
	return(sk_set(a, b, c));
}

STACK * AMISSL_LIB_ENTRY _AmiSSL_sk_new(REG(a6, __IFACE_OR_BASE), REG(a0, int (*cmp)(const char *const *, const char *const *)))
{
	return(sk_new(cmp));
}

STACK * AMISSL_LIB_ENTRY _AmiSSL_sk_new_null(REG(a6, __IFACE_OR_BASE))
{
	return(sk_new_null());
}

void AMISSL_LIB_ENTRY _AmiSSL_sk_free(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *a))
{
	sk_free(a);
}

void AMISSL_LIB_ENTRY _AmiSSL_sk_pop_free(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st), REG(a1, void (*func)(void *)))
{
	sk_pop_free(st, func);
}

int AMISSL_LIB_ENTRY _AmiSSL_sk_insert(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *sk), REG(a1, char *data), REG(d0, int where))
{
	return(sk_insert(sk, data, where));
}

char * AMISSL_LIB_ENTRY _AmiSSL_sk_delete(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st), REG(d0, int loc))
{
	return(sk_delete(st, loc));
}

char * AMISSL_LIB_ENTRY _AmiSSL_sk_delete_ptr(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st), REG(a1, char *p))
{
	return(sk_delete_ptr(st, p));
}

int AMISSL_LIB_ENTRY _AmiSSL_sk_find(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st), REG(a1, char *data))
{
	return(sk_find(st, data));
}

int AMISSL_LIB_ENTRY _AmiSSL_sk_push(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st), REG(a1, char *data))
{
	return(sk_push(st, data));
}

int AMISSL_LIB_ENTRY _AmiSSL_sk_unshift(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st), REG(a1, char *data))
{
	return(sk_unshift(st, data));
}

char * AMISSL_LIB_ENTRY _AmiSSL_sk_shift(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st))
{
	return(sk_shift(st));
}

char * AMISSL_LIB_ENTRY _AmiSSL_sk_pop(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st))
{
	return(sk_pop(st));
}

void AMISSL_LIB_ENTRY _AmiSSL_sk_zero(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st))
{
	sk_zero(st);
}

int AMISSL_LIB_ENTRY (*_AmiSSL_sk_set_cmp_func(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *sk), REG(a1, int (*c)(const char *const *, const char *const *)))) (const char *const *, const char *const *)
{
	return(sk_set_cmp_func(sk, c));
}

STACK * AMISSL_LIB_ENTRY _AmiSSL_sk_dup(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st))
{
	return(sk_dup(st));
}

void AMISSL_LIB_ENTRY _AmiSSL_sk_sort(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st))
{
	sk_sort(st);
}

int AMISSL_LIB_ENTRY _AmiSSL_sk_is_sorted(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK *st))
{
	return(sk_is_sorted(st));
}

char * AMISSL_LIB_ENTRY _AmiSSL_ms_time_new(REG(a6, __IFACE_OR_BASE))
{
	return(ms_time_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ms_time_free(REG(a6, __IFACE_OR_BASE), REG(a0, char *a))
{
	ms_time_free(a);
}

void AMISSL_LIB_ENTRY _AmiSSL_ms_time_get(REG(a6, __IFACE_OR_BASE), REG(a0, char *a))
{
	ms_time_get(a);
}

double AMISSL_LIB_ENTRY _AmiSSL_ms_time_diff(REG(a6, __IFACE_OR_BASE), REG(a0, char *start), REG(a1, char *end))
{
	return(ms_time_diff(start, end));
}

int AMISSL_LIB_ENTRY _AmiSSL_ms_time_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, char *ap), REG(a1, char *bp))
{
	return(ms_time_cmp(ap, bp));
}

TXT_DB * AMISSL_LIB_ENTRY _AmiSSL_TXT_DB_read(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *in), REG(d0, int num))
{
	return(TXT_DB_read(in, num));
}

long AMISSL_LIB_ENTRY _AmiSSL_TXT_DB_write(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, TXT_DB *db))
{
	return(TXT_DB_write(out, db));
}

int AMISSL_LIB_ENTRY _AmiSSL_TXT_DB_create_index(REG(a6, __IFACE_OR_BASE), REG(a0, TXT_DB *db), REG(d0, int field), REG(a1, int (*qual)()), REG(d1, LHASH_HASH_FN_TYPE hash), REG(d2, LHASH_COMP_FN_TYPE cmp))
{
	return(TXT_DB_create_index(db, field, qual, hash, cmp));
}

void AMISSL_LIB_ENTRY _AmiSSL_TXT_DB_free(REG(a6, __IFACE_OR_BASE), REG(a0, TXT_DB *db))
{
	TXT_DB_free(db);
}

char ** AMISSL_LIB_ENTRY _AmiSSL_TXT_DB_get_by_index(REG(a6, __IFACE_OR_BASE), REG(a0, TXT_DB *db), REG(d0, int idx), REG(a1, char **value))
{
	return(TXT_DB_get_by_index(db, idx, value));
}

int AMISSL_LIB_ENTRY _AmiSSL_TXT_DB_insert(REG(a6, __IFACE_OR_BASE), REG(a0, TXT_DB *db), REG(a1, char **value))
{
	return(TXT_DB_insert(db, value));
}

UI * AMISSL_LIB_ENTRY _AmiSSL_UI_new(REG(a6, __IFACE_OR_BASE))
{
	return(UI_new());
}

UI * AMISSL_LIB_ENTRY _AmiSSL_UI_new_method(REG(a6, __IFACE_OR_BASE), REG(a0, const UI_METHOD *method))
{
	return(UI_new_method(method));
}

void AMISSL_LIB_ENTRY _AmiSSL_UI_free(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui))
{
	UI_free(ui);
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_add_input_string(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *prompt), REG(d0, int flags), REG(a2, char *result_buf), REG(d1, int minsize), REG(d2, int maxsize))
{
	return(UI_add_input_string(ui, prompt, flags, result_buf, minsize, maxsize));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_dup_input_string(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *prompt), REG(d0, int flags), REG(a2, char *result_buf), REG(d1, int minsize), REG(d2, int maxsize))
{
	return(UI_dup_input_string(ui, prompt, flags, result_buf, minsize, maxsize));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_add_verify_string(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *prompt), REG(d0, int flags), REG(a2, char *result_buf), REG(d1, int minsize), REG(d2, int maxsize), REG(a3, const char *test_buf))
{
	return(UI_add_verify_string(ui, prompt, flags, result_buf, minsize, maxsize, test_buf));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_dup_verify_string(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *prompt), REG(d0, int flags), REG(a2, char *result_buf), REG(d1, int minsize), REG(d2, int maxsize), REG(a3, const char *test_buf))
{
	return(UI_dup_verify_string(ui, prompt, flags, result_buf, minsize, maxsize, test_buf));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_add_input_boolean(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *prompt), REG(a2, const char *action_desc), REG(a3, const char *ok_chars), REG(d0, const char *cancel_chars), REG(d1, int flags), REG(d2, char *result_buf))
{
	return(UI_add_input_boolean(ui, prompt, action_desc, ok_chars, cancel_chars, flags, result_buf));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_dup_input_boolean(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *prompt), REG(a2, const char *action_desc), REG(a3, const char *ok_chars), REG(d0, const char *cancel_chars), REG(d1, int flags), REG(d2, char *result_buf))
{
	return(UI_dup_input_boolean(ui, prompt, action_desc, ok_chars, cancel_chars, flags, result_buf));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_add_info_string(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *text))
{
	return(UI_add_info_string(ui, text));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_dup_info_string(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *text))
{
	return(UI_dup_info_string(ui, text));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_add_error_string(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *text))
{
	return(UI_add_error_string(ui, text));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_dup_error_string(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *text))
{
	return(UI_dup_error_string(ui, text));
}

char * AMISSL_LIB_ENTRY _AmiSSL_UI_construct_prompt(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui_method), REG(a1, const char *object_desc), REG(a2, const char *object_name))
{
	return(UI_construct_prompt(ui_method, object_desc, object_name));
}

void * AMISSL_LIB_ENTRY _AmiSSL_UI_add_user_data(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, void *user_data))
{
	return(UI_add_user_data(ui, user_data));
}

void * AMISSL_LIB_ENTRY _AmiSSL_UI_get0_user_data(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui))
{
	return(UI_get0_user_data(ui));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_UI_get0_result(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(d0, int i))
{
	return(UI_get0_result(ui, i));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_process(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui))
{
	return(UI_process(ui));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(d0, int cmd), REG(d1, long i), REG(a1, void *p), REG(a2, void (*f)()))
{
	return(UI_ctrl(ui, cmd, i, p, f));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_get_ex_new_index(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(UI_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_set_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, UI *r), REG(d0, int idx), REG(a1, void *arg))
{
	return(UI_set_ex_data(r, idx, arg));
}

void * AMISSL_LIB_ENTRY _AmiSSL_UI_get_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, UI *r), REG(d0, int idx))
{
	return(UI_get_ex_data(r, idx));
}

void AMISSL_LIB_ENTRY _AmiSSL_UI_set_default_method(REG(a6, __IFACE_OR_BASE), REG(a0, const UI_METHOD *meth))
{
	UI_set_default_method(meth);
}

const UI_METHOD * AMISSL_LIB_ENTRY _AmiSSL_UI_get_default_method(REG(a6, __IFACE_OR_BASE))
{
	return(UI_get_default_method());
}

const UI_METHOD * AMISSL_LIB_ENTRY _AmiSSL_UI_get_method(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui))
{
	return(UI_get_method(ui));
}

const UI_METHOD * AMISSL_LIB_ENTRY _AmiSSL_UI_set_method(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const UI_METHOD *meth))
{
	return(UI_set_method(ui, meth));
}

UI_METHOD * AMISSL_LIB_ENTRY _AmiSSL_UI_OpenSSL(REG(a6, __IFACE_OR_BASE))
{
	return(UI_OpenSSL());
}

UI_METHOD * AMISSL_LIB_ENTRY _AmiSSL_UI_create_method(REG(a6, __IFACE_OR_BASE), REG(a0, char *name))
{
	return(UI_create_method(name));
}

void AMISSL_LIB_ENTRY _AmiSSL_UI_destroy_method(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *ui_method))
{
	UI_destroy_method(ui_method);
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_method_set_opener(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method), REG(a1, int (*opener)(UI *ui)))
{
	return(UI_method_set_opener(method, opener));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_method_set_writer(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method), REG(a1, int (*writer)(UI *ui, UI_STRING *uis)))
{
	return(UI_method_set_writer(method, writer));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_method_set_flusher(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method), REG(a1, int (*flusher)(UI *ui)))
{
	return(UI_method_set_flusher(method, flusher));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_method_set_reader(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method), REG(a1, int (*reader)(UI *ui, UI_STRING *uis)))
{
	return(UI_method_set_reader(method, reader));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_method_set_closer(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method), REG(a1, int (*closer)(UI *ui)))
{
	return(UI_method_set_closer(method, closer));
}

int AMISSL_LIB_ENTRY (*_AmiSSL_UI_method_get_opener(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method)))(UI*)
{
	return(UI_method_get_opener(method));
}

int AMISSL_LIB_ENTRY (*_AmiSSL_UI_method_get_writer(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method)))(UI*, UI_STRING*)
{
	return(UI_method_get_writer(method));
}

int AMISSL_LIB_ENTRY (*_AmiSSL_UI_method_get_flusher(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method)))(UI*)
{
	return(UI_method_get_flusher(method));
}

int AMISSL_LIB_ENTRY (*_AmiSSL_UI_method_get_reader(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method)))(UI*, UI_STRING*)
{
	return(UI_method_get_reader(method));
}

int AMISSL_LIB_ENTRY (*_AmiSSL_UI_method_get_closer(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method)))(UI*)
{
	return(UI_method_get_closer(method));
}

enum UI_string_types AMISSL_LIB_ENTRY _AmiSSL_UI_get_string_type(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get_string_type(uis));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_get_input_flags(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get_input_flags(uis));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_UI_get0_output_string(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get0_output_string(uis));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_UI_get0_action_string(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get0_action_string(uis));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_UI_get0_result_string(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get0_result_string(uis));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_UI_get0_test_string(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get0_test_string(uis));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_get_result_minsize(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get_result_minsize(uis));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_get_result_maxsize(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get_result_maxsize(uis));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_set_result(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, UI_STRING *uis), REG(a2, const char *result))
{
	return(UI_set_result(ui, uis, result));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_UTIL_read_pw_string(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int length), REG(a1, const char *prompt), REG(d1, int verify))
{
	return(UI_UTIL_read_pw_string(buf, length, prompt, verify));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_UTIL_read_pw(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(a1, char *buff), REG(d0, int size), REG(a2, const char *prompt), REG(d1, int verify))
{
	return(UI_UTIL_read_pw(buf, buff, size, prompt, verify));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_UI_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_UI_strings();
}

int AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_read_pw_string(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int length), REG(a1, const char *prompt), REG(d1, int verify))
{
	return(_ossl_old_des_read_pw_string(buf, length, prompt, verify));
}

int AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_read_pw(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(a1, char *buff), REG(d0, int size), REG(a2, const char *prompt), REG(d1, int verify))
{
	return(_ossl_old_des_read_pw(buf, buff, size, prompt, verify));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_X509_verify_cert_error_string(REG(a6, __IFACE_OR_BASE), REG(d0, long n))
{
	return(X509_verify_cert_error_string(n));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_verify(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a), REG(a1, EVP_PKEY *r))
{
	return(X509_verify(a, r));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_verify(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *a), REG(a1, EVP_PKEY *r))
{
	return(X509_REQ_verify(a, r));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_verify(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *a), REG(a1, EVP_PKEY *r))
{
	return(X509_CRL_verify(a, r));
}

int AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKI_verify(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *a), REG(a1, EVP_PKEY *r))
{
	return(NETSCAPE_SPKI_verify(a, r));
}

NETSCAPE_SPKI * AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKI_b64_decode(REG(a6, __IFACE_OR_BASE), REG(a0, const char *str), REG(d0, int len))
{
	return(NETSCAPE_SPKI_b64_decode(str, len));
}

char * AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKI_b64_encode(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *x))
{
	return(NETSCAPE_SPKI_b64_encode(x));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKI_get_pubkey(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *x))
{
	return(NETSCAPE_SPKI_get_pubkey(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKI_set_pubkey(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *x), REG(a1, EVP_PKEY *pkey))
{
	return(NETSCAPE_SPKI_set_pubkey(x, pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKI_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, NETSCAPE_SPKI *spki))
{
	return(NETSCAPE_SPKI_print(out, spki));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_signature_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_ALGOR *alg), REG(a2, ASN1_STRING *sig))
{
	return(X509_signature_print(bp, alg, sig));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_sign(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, EVP_PKEY *pkey), REG(a2, const EVP_MD *md))
{
	return(X509_sign(x, pkey, md));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_sign(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *x), REG(a1, EVP_PKEY *pkey), REG(a2, const EVP_MD *md))
{
	return(X509_REQ_sign(x, pkey, md));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_sign(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(a1, EVP_PKEY *pkey), REG(a2, const EVP_MD *md))
{
	return(X509_CRL_sign(x, pkey, md));
}

int AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKI_sign(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *x), REG(a1, EVP_PKEY *pkey), REG(a2, const EVP_MD *md))
{
	return(NETSCAPE_SPKI_sign(x, pkey, md));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_pubkey_digest(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *data), REG(a1, const EVP_MD *type), REG(a2, unsigned char *md), REG(a3, unsigned int *len))
{
	return(X509_pubkey_digest(data, type, md, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_digest(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *data), REG(a1, const EVP_MD *type), REG(a2, unsigned char *md), REG(a3, unsigned int *len))
{
	return(X509_digest(data, type, md, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_digest(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_CRL *data), REG(a1, const EVP_MD *type), REG(a2, unsigned char *md), REG(a3, unsigned int *len))
{
	return(X509_CRL_digest(data, type, md, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_digest(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_REQ *data), REG(a1, const EVP_MD *type), REG(a2, unsigned char *md), REG(a3, unsigned int *len))
{
	return(X509_REQ_digest(data, type, md, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_digest(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_NAME *data), REG(a1, const EVP_MD *type), REG(a2, unsigned char *md), REG(a3, unsigned int *len))
{
	return(X509_NAME_digest(data, type, md, len));
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 **x509))
{
	return(d2i_X509_bio(bp, x509));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 *x509))
{
	return(i2d_X509_bio(bp, x509));
}

X509_CRL * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_CRL_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_CRL **crl))
{
	return(d2i_X509_CRL_bio(bp, crl));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_CRL_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_CRL *crl))
{
	return(i2d_X509_CRL_bio(bp, crl));
}

X509_REQ * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_REQ_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ **req))
{
	return(d2i_X509_REQ_bio(bp, req));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_REQ_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ *req))
{
	return(i2d_X509_REQ_bio(bp, req));
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_RSAPrivateKey_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA **rsa))
{
	return(d2i_RSAPrivateKey_bio(bp, rsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_RSAPrivateKey_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA *rsa))
{
	return(i2d_RSAPrivateKey_bio(bp, rsa));
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_RSAPublicKey_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA **rsa))
{
	return(d2i_RSAPublicKey_bio(bp, rsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_RSAPublicKey_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA *rsa))
{
	return(i2d_RSAPublicKey_bio(bp, rsa));
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_RSA_PUBKEY_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA **rsa))
{
	return(d2i_RSA_PUBKEY_bio(bp, rsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_RSA_PUBKEY_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA *rsa))
{
	return(i2d_RSA_PUBKEY_bio(bp, rsa));
}

DSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_DSA_PUBKEY_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA **dsa))
{
	return(d2i_DSA_PUBKEY_bio(bp, dsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_DSA_PUBKEY_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA *dsa))
{
	return(i2d_DSA_PUBKEY_bio(bp, dsa));
}

DSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_DSAPrivateKey_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA **dsa))
{
	return(d2i_DSAPrivateKey_bio(bp, dsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_DSAPrivateKey_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA *dsa))
{
	return(i2d_DSAPrivateKey_bio(bp, dsa));
}

X509_SIG * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS8_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_SIG **p8))
{
	return(d2i_PKCS8_bio(bp, p8));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS8_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_SIG *p8))
{
	return(i2d_PKCS8_bio(bp, p8));
}

PKCS8_PRIV_KEY_INFO * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS8_PRIV_KEY_INFO_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS8_PRIV_KEY_INFO **p8inf))
{
	return(d2i_PKCS8_PRIV_KEY_INFO_bio(bp, p8inf));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS8_PRIV_KEY_INFO_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS8_PRIV_KEY_INFO *p8inf))
{
	return(i2d_PKCS8_PRIV_KEY_INFO_bio(bp, p8inf));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS8PrivateKeyInfo_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *key))
{
	return(i2d_PKCS8PrivateKeyInfo_bio(bp, key));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PrivateKey_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *pkey))
{
	return(i2d_PrivateKey_bio(bp, pkey));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_d2i_PrivateKey_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY **a))
{
	return(d2i_PrivateKey_bio(bp, a));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PUBKEY_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *pkey))
{
	return(i2d_PUBKEY_bio(bp, pkey));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_d2i_PUBKEY_bio(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY **a))
{
	return(d2i_PUBKEY_bio(bp, a));
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_X509_dup(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x509))
{
	return(X509_dup(x509));
}

X509_ATTRIBUTE * AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_dup(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *xa))
{
	return(X509_ATTRIBUTE_dup(xa));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509_EXTENSION_dup(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex))
{
	return(X509_EXTENSION_dup(ex));
}

X509_CRL * AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_dup(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *crl))
{
	return(X509_CRL_dup(crl));
}

X509_REQ * AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_dup(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req))
{
	return(X509_REQ_dup(req));
}

X509_ALGOR * AMISSL_LIB_ENTRY _AmiSSL_X509_ALGOR_dup(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR *xn))
{
	return(X509_ALGOR_dup(xn));
}

X509_NAME * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_dup(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *xn))
{
	return(X509_NAME_dup(xn));
}

X509_NAME_ENTRY * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_ENTRY_dup(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *ne))
{
	return(X509_NAME_ENTRY_dup(ne));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_cmp_time(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *s), REG(a1, time_t *t))
{
	return(X509_cmp_time(s, t));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_cmp_current_time(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *s))
{
	return(X509_cmp_current_time(s));
}

ASN1_TIME * AMISSL_LIB_ENTRY _AmiSSL_X509_time_adj(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *s), REG(d0, long adj), REG(a1, time_t *t))
{
	return(X509_time_adj(s, adj, t));
}

ASN1_TIME * AMISSL_LIB_ENTRY _AmiSSL_X509_gmtime_adj(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *s), REG(d0, long adj))
{
	return(X509_gmtime_adj(s, adj));
}

const char * AMISSL_LIB_ENTRY _AmiSSL_X509_get_default_cert_area(REG(a6, __IFACE_OR_BASE))
{
	return(X509_get_default_cert_area());
}

const char * AMISSL_LIB_ENTRY _AmiSSL_X509_get_default_cert_dir(REG(a6, __IFACE_OR_BASE))
{
	return(X509_get_default_cert_dir());
}

const char * AMISSL_LIB_ENTRY _AmiSSL_X509_get_default_cert_file(REG(a6, __IFACE_OR_BASE))
{
	return(X509_get_default_cert_file());
}

const char * AMISSL_LIB_ENTRY _AmiSSL_X509_get_default_cert_dir_env(REG(a6, __IFACE_OR_BASE))
{
	return(X509_get_default_cert_dir_env());
}

const char * AMISSL_LIB_ENTRY _AmiSSL_X509_get_default_cert_file_env(REG(a6, __IFACE_OR_BASE))
{
	return(X509_get_default_cert_file_env());
}

const char * AMISSL_LIB_ENTRY _AmiSSL_X509_get_default_private_dir(REG(a6, __IFACE_OR_BASE))
{
	return(X509_get_default_private_dir());
}

X509_REQ * AMISSL_LIB_ENTRY _AmiSSL_X509_to_X509_REQ(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, EVP_PKEY *pkey), REG(a2, const EVP_MD *md))
{
	return(X509_to_X509_REQ(x, pkey, md));
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_to_X509(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *r), REG(d0, int days), REG(a1, EVP_PKEY *pkey))
{
	return(X509_REQ_to_X509(r, days, pkey));
}

X509_ALGOR * AMISSL_LIB_ENTRY _AmiSSL_X509_ALGOR_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_ALGOR_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_ALGOR_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR *a))
{
	X509_ALGOR_free(a);
}

X509_ALGOR * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_ALGOR(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_ALGOR(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_ALGOR(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_ALGOR(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_ALGOR_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_ALGOR_it());
}

X509_VAL * AMISSL_LIB_ENTRY _AmiSSL_X509_VAL_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_VAL_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_VAL_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_VAL *a))
{
	X509_VAL_free(a);
}

X509_VAL * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_VAL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_VAL **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_VAL(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_VAL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_VAL *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_VAL(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_VAL_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_VAL_it());
}

X509_PUBKEY * AMISSL_LIB_ENTRY _AmiSSL_X509_PUBKEY_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_PUBKEY_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_PUBKEY_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PUBKEY *a))
{
	X509_PUBKEY_free(a);
}

X509_PUBKEY * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PUBKEY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_PUBKEY(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PUBKEY *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_PUBKEY(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_PUBKEY_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_PUBKEY_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_PUBKEY_set(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PUBKEY **x), REG(a1, EVP_PKEY *pkey))
{
	return(X509_PUBKEY_set(x, pkey));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_X509_PUBKEY_get(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PUBKEY *key))
{
	return(X509_PUBKEY_get(key));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_get_pubkey_parameters(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(a1, STACK_OF(X509) *chain))
{
	return(X509_get_pubkey_parameters(pkey, chain));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *a), REG(a1, unsigned char **pp))
{
	return(i2d_PUBKEY(a, pp));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_d2i_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_PUBKEY(a, pp, length));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_RSA_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *a), REG(a1, unsigned char **pp))
{
	return(i2d_RSA_PUBKEY(a, pp));
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_RSA_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, RSA **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_RSA_PUBKEY(a, pp, length));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_DSA_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *a), REG(a1, unsigned char **pp))
{
	return(i2d_DSA_PUBKEY(a, pp));
}

DSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_DSA_PUBKEY(REG(a6, __IFACE_OR_BASE), REG(a0, DSA **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_DSA_PUBKEY(a, pp, length));
}

X509_SIG * AMISSL_LIB_ENTRY _AmiSSL_X509_SIG_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_SIG_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_SIG_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_SIG *a))
{
	X509_SIG_free(a);
}

X509_SIG * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_SIG(REG(a6, __IFACE_OR_BASE), REG(a0, X509_SIG **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_SIG(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_SIG(REG(a6, __IFACE_OR_BASE), REG(a0, X509_SIG *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_SIG(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_SIG_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_SIG_it());
}

X509_REQ_INFO * AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_INFO_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REQ_INFO_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_INFO_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ_INFO *a))
{
	X509_REQ_INFO_free(a);
}

X509_REQ_INFO * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_REQ_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ_INFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_REQ_INFO(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_REQ_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ_INFO *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_REQ_INFO(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_INFO_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REQ_INFO_it());
}

X509_REQ * AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REQ_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *a))
{
	X509_REQ_free(a);
}

X509_REQ * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_REQ(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_REQ(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_REQ(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_REQ(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REQ_it());
}

X509_ATTRIBUTE * AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_ATTRIBUTE_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *a))
{
	X509_ATTRIBUTE_free(a);
}

X509_ATTRIBUTE * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_ATTRIBUTE(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_ATTRIBUTE(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_ATTRIBUTE(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_ATTRIBUTE(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_ATTRIBUTE_it());
}

X509_ATTRIBUTE * AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_create(REG(a6, __IFACE_OR_BASE), REG(d0, int nid), REG(d1, int atrtype), REG(a0, void *value))
{
	return(X509_ATTRIBUTE_create(nid, atrtype, value));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509_EXTENSION_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_EXTENSION_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_EXTENSION_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *a))
{
	X509_EXTENSION_free(a);
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_EXTENSION(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_EXTENSION(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_EXTENSION(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_EXTENSION(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_EXTENSION_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_EXTENSION_it());
}

X509_NAME_ENTRY * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_ENTRY_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_NAME_ENTRY_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_ENTRY_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *a))
{
	X509_NAME_ENTRY_free(a);
}

X509_NAME_ENTRY * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_NAME_ENTRY(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_NAME_ENTRY(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_NAME_ENTRY(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_NAME_ENTRY(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_ENTRY_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_NAME_ENTRY_it());
}

X509_NAME * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_NAME_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *a))
{
	X509_NAME_free(a);
}

X509_NAME * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_NAME(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_NAME(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_NAME(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_NAME(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_NAME_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_set(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME **xn), REG(a1, X509_NAME *name))
{
	return(X509_NAME_set(xn, name));
}

X509_CINF * AMISSL_LIB_ENTRY _AmiSSL_X509_CINF_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CINF_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_CINF_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CINF *a))
{
	X509_CINF_free(a);
}

X509_CINF * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_CINF(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CINF **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_CINF(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_CINF(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CINF *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_CINF(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_CINF_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CINF_it());
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_X509_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a))
{
	X509_free(a);
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509(REG(a6, __IFACE_OR_BASE), REG(a0, X509 **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a), REG(a1, unsigned char **out))
{
	return(i2d_X509(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_it());
}

X509_CERT_AUX * AMISSL_LIB_ENTRY _AmiSSL_X509_CERT_AUX_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CERT_AUX_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_CERT_AUX_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CERT_AUX *a))
{
	X509_CERT_AUX_free(a);
}

X509_CERT_AUX * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_CERT_AUX(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CERT_AUX **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_CERT_AUX(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_CERT_AUX(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CERT_AUX *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_CERT_AUX(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_CERT_AUX_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CERT_AUX_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_get_ex_new_index(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(X509_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_set_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *r), REG(d0, int idx), REG(a1, void *arg))
{
	return(X509_set_ex_data(r, idx, arg));
}

void * AMISSL_LIB_ENTRY _AmiSSL_X509_get_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *r), REG(d0, int idx))
{
	return(X509_get_ex_data(r, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_AUX(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a), REG(a1, unsigned char **pp))
{
	return(i2d_X509_AUX(a, pp));
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_AUX(REG(a6, __IFACE_OR_BASE), REG(a0, X509 **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_X509_AUX(a, pp, length));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_alias_set1(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, unsigned char *name), REG(d0, int len))
{
	return(X509_alias_set1(x, name, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_keyid_set1(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, unsigned char *id), REG(d0, int len))
{
	return(X509_keyid_set1(x, id, len));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_X509_alias_get0(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, int *len))
{
	return(X509_alias_get0(x, len));
}

int AMISSL_LIB_ENTRY (*_AmiSSL_X509_TRUST_set_default(REG(a6, __IFACE_OR_BASE), REG(a0, int (*trust)(int, X509 *, int))))(int, X509 *, int)
{
	return(X509_TRUST_set_default(trust));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_TRUST_set(REG(a6, __IFACE_OR_BASE), REG(a0, int *t), REG(d0, int trust))
{
	return(X509_TRUST_set(t, trust));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_add1_trust_object(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, ASN1_OBJECT *obj))
{
	return(X509_add1_trust_object(x, obj));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_add1_reject_object(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, ASN1_OBJECT *obj))
{
	return(X509_add1_reject_object(x, obj));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_trust_clear(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	X509_trust_clear(x);
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_reject_clear(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	X509_reject_clear(x);
}

X509_REVOKED * AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REVOKED_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *a))
{
	X509_REVOKED_free(a);
}

X509_REVOKED * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_REVOKED(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_REVOKED(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_REVOKED(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_REVOKED(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REVOKED_it());
}

X509_CRL_INFO * AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_INFO_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CRL_INFO_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_INFO_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL_INFO *a))
{
	X509_CRL_INFO_free(a);
}

X509_CRL_INFO * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_CRL_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL_INFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_CRL_INFO(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_CRL_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL_INFO *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_CRL_INFO(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_INFO_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CRL_INFO_it());
}

X509_CRL * AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CRL_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *a))
{
	X509_CRL_free(a);
}

X509_CRL * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_CRL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_CRL(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_CRL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_CRL(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_it(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CRL_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_add0_revoked(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *crl), REG(a1, X509_REVOKED *rev))
{
	return(X509_CRL_add0_revoked(crl, rev));
}

X509_PKEY * AMISSL_LIB_ENTRY _AmiSSL_X509_PKEY_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_PKEY_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_PKEY_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PKEY *a))
{
	X509_PKEY_free(a);
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_X509_PKEY(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PKEY *a), REG(a1, unsigned char **pp))
{
	return(i2d_X509_PKEY(a, pp));
}

X509_PKEY * AMISSL_LIB_ENTRY _AmiSSL_d2i_X509_PKEY(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PKEY **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_X509_PKEY(a, pp, length));
}

NETSCAPE_SPKI * AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKI_new(REG(a6, __IFACE_OR_BASE))
{
	return(NETSCAPE_SPKI_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKI_free(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *a))
{
	NETSCAPE_SPKI_free(a);
}

NETSCAPE_SPKI * AMISSL_LIB_ENTRY _AmiSSL_d2i_NETSCAPE_SPKI(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_NETSCAPE_SPKI(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_NETSCAPE_SPKI(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *a), REG(a1, unsigned char **out))
{
	return(i2d_NETSCAPE_SPKI(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKI_it(REG(a6, __IFACE_OR_BASE))
{
	return(NETSCAPE_SPKI_it());
}

NETSCAPE_SPKAC * AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKAC_new(REG(a6, __IFACE_OR_BASE))
{
	return(NETSCAPE_SPKAC_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKAC_free(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKAC *a))
{
	NETSCAPE_SPKAC_free(a);
}

NETSCAPE_SPKAC * AMISSL_LIB_ENTRY _AmiSSL_d2i_NETSCAPE_SPKAC(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKAC **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_NETSCAPE_SPKAC(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_NETSCAPE_SPKAC(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKAC *a), REG(a1, unsigned char **out))
{
	return(i2d_NETSCAPE_SPKAC(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_SPKAC_it(REG(a6, __IFACE_OR_BASE))
{
	return(NETSCAPE_SPKAC_it());
}

NETSCAPE_CERT_SEQUENCE * AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_CERT_SEQUENCE_new(REG(a6, __IFACE_OR_BASE))
{
	return(NETSCAPE_CERT_SEQUENCE_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_CERT_SEQUENCE_free(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_CERT_SEQUENCE *a))
{
	NETSCAPE_CERT_SEQUENCE_free(a);
}

NETSCAPE_CERT_SEQUENCE * AMISSL_LIB_ENTRY _AmiSSL_d2i_NETSCAPE_CERT_SEQUENCE(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_CERT_SEQUENCE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_NETSCAPE_CERT_SEQUENCE(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_NETSCAPE_CERT_SEQUENCE(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_CERT_SEQUENCE *a), REG(a1, unsigned char **out))
{
	return(i2d_NETSCAPE_CERT_SEQUENCE(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_NETSCAPE_CERT_SEQUENCE_it(REG(a6, __IFACE_OR_BASE))
{
	return(NETSCAPE_CERT_SEQUENCE_it());
}

X509_INFO * AMISSL_LIB_ENTRY _AmiSSL_X509_INFO_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_INFO_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_INFO_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_INFO *a))
{
	X509_INFO_free(a);
}

char * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_oneline(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *a), REG(a1, char *buf), REG(d0, int size))
{
	return(X509_NAME_oneline(a, buf, size));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_verify(REG(a6, __IFACE_OR_BASE), REG(a0, int (*i2d)()), REG(a1, X509_ALGOR *algor1), REG(a2, ASN1_BIT_STRING *signature), REG(a3, char *data), REG(d0, EVP_PKEY *pkey))
{
	return(ASN1_verify(i2d, algor1, signature, data, pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_digest(REG(a6, __IFACE_OR_BASE), REG(a0, int (*i2d)()), REG(a1, const EVP_MD *type), REG(a2, char *data), REG(a3, unsigned char *md), REG(d0, unsigned int *len))
{
	return(ASN1_digest(i2d, type, data, md, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_sign(REG(a6, __IFACE_OR_BASE), REG(a0, int (*i2d)()), REG(a1, X509_ALGOR *algor1), REG(a2, X509_ALGOR *algor2), REG(a3, ASN1_BIT_STRING *signature), REG(d0, char *data), REG(d1, EVP_PKEY *pkey), REG(d2, const EVP_MD *type))
{
	return(ASN1_sign(i2d, algor1, algor2, signature, data, pkey, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_digest(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it), REG(a1, const EVP_MD *type), REG(a2, void *data), REG(a3, unsigned char *md), REG(d0, unsigned int *len))
{
	return(ASN1_item_digest(it, type, data, md, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_verify(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it), REG(a1, X509_ALGOR *algor1), REG(a2, ASN1_BIT_STRING *signature), REG(a3, void *data), REG(d0, EVP_PKEY *pkey))
{
	return(ASN1_item_verify(it, algor1, signature, data, pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_ASN1_item_sign(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it), REG(a1, X509_ALGOR *algor1), REG(a2, X509_ALGOR *algor2), REG(a3, ASN1_BIT_STRING *signature), REG(d0, void *data), REG(d1, EVP_PKEY *pkey), REG(d2, const EVP_MD *type))
{
	return(ASN1_item_sign(it, algor1, algor2, signature, data, pkey, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_set_version(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, long version))
{
	return(X509_set_version(x, version));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_set_serialNumber(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, ASN1_INTEGER *serial))
{
	return(X509_set_serialNumber(x, serial));
}

ASN1_INTEGER * AMISSL_LIB_ENTRY _AmiSSL_X509_get_serialNumber(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	return(X509_get_serialNumber(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_set_issuer_name(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, X509_NAME *name))
{
	return(X509_set_issuer_name(x, name));
}

X509_NAME * AMISSL_LIB_ENTRY _AmiSSL_X509_get_issuer_name(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a))
{
	return(X509_get_issuer_name(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_set_subject_name(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, X509_NAME *name))
{
	return(X509_set_subject_name(x, name));
}

X509_NAME * AMISSL_LIB_ENTRY _AmiSSL_X509_get_subject_name(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a))
{
	return(X509_get_subject_name(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_set_notBefore(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, ASN1_TIME *tm))
{
	return(X509_set_notBefore(x, tm));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_set_notAfter(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, ASN1_TIME *tm))
{
	return(X509_set_notAfter(x, tm));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_set_pubkey(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, EVP_PKEY *pkey))
{
	return(X509_set_pubkey(x, pkey));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_X509_get_pubkey(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	return(X509_get_pubkey(x));
}

ASN1_BIT_STRING * AMISSL_LIB_ENTRY _AmiSSL_X509_get0_pubkey_bitstr(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *x))
{
	return(X509_get0_pubkey_bitstr(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_certificate_type(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, EVP_PKEY *pubkey))
{
	return(X509_certificate_type(x, pubkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_set_version(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *x), REG(d0, long version))
{
	return(X509_REQ_set_version(x, version));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_set_subject_name(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(a1, X509_NAME *name))
{
	return(X509_REQ_set_subject_name(req, name));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_set_pubkey(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *x), REG(a1, EVP_PKEY *pkey))
{
	return(X509_REQ_set_pubkey(x, pkey));
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_get_pubkey(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req))
{
	return(X509_REQ_get_pubkey(req));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_extension_nid(REG(a6, __IFACE_OR_BASE), REG(d0, int nid))
{
	return(X509_REQ_extension_nid(nid));
}

int * AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_get_extension_nids(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REQ_get_extension_nids());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_set_extension_nids(REG(a6, __IFACE_OR_BASE), REG(a0, int *nids))
{
	X509_REQ_set_extension_nids(nids);
}

STACK_OF(X509_EXTENSION) * AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_get_extensions(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req))
{
	return(X509_REQ_get_extensions(req));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_add_extensions_nid(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(a1, STACK_OF(X509_EXTENSION) *exts), REG(d0, int nid))
{
	return(X509_REQ_add_extensions_nid(req, exts, nid));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_add_extensions(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(a1, STACK_OF(X509_EXTENSION) *exts))
{
	return(X509_REQ_add_extensions(req, exts));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_get_attr_count(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_REQ *req))
{
	return(X509_REQ_get_attr_count(req));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_get_attr_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_REQ *req), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509_REQ_get_attr_by_NID(req, nid, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_get_attr_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_REQ *req), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509_REQ_get_attr_by_OBJ(req, obj, lastpos));
}

X509_ATTRIBUTE * AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_get_attr(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_REQ *req), REG(d0, int loc))
{
	return(X509_REQ_get_attr(req, loc));
}

X509_ATTRIBUTE * AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_delete_attr(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(d0, int loc))
{
	return(X509_REQ_delete_attr(req, loc));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_add1_attr(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(a1, X509_ATTRIBUTE *attr))
{
	return(X509_REQ_add1_attr(req, attr));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_add1_attr_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(a1, const ASN1_OBJECT *obj), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len))
{
	return(X509_REQ_add1_attr_by_OBJ(req, obj, type, bytes, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_add1_attr_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(d0, int nid), REG(d1, int type), REG(a1, const unsigned char *bytes), REG(d2, int len))
{
	return(X509_REQ_add1_attr_by_NID(req, nid, type, bytes, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_add1_attr_by_txt(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(a1, const char *attrname), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len))
{
	return(X509_REQ_add1_attr_by_txt(req, attrname, type, bytes, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_set_version(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, long version))
{
	return(X509_CRL_set_version(x, version));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_set_issuer_name(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(a1, X509_NAME *name))
{
	return(X509_CRL_set_issuer_name(x, name));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_set_lastUpdate(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(a1, ASN1_TIME *tm))
{
	return(X509_CRL_set_lastUpdate(x, tm));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_set_nextUpdate(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(a1, ASN1_TIME *tm))
{
	return(X509_CRL_set_nextUpdate(x, tm));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_sort(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *crl))
{
	return(X509_CRL_sort(crl));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_set_serialNumber(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(a1, ASN1_INTEGER *serial))
{
	return(X509_REVOKED_set_serialNumber(x, serial));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_set_revocationDate(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *r), REG(a1, ASN1_TIME *tm))
{
	return(X509_REVOKED_set_revocationDate(r, tm));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_check_private_key(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x509), REG(a1, EVP_PKEY *pkey))
{
	return(X509_check_private_key(x509, pkey));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_issuer_and_serial_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *a), REG(a1, const X509 *b))
{
	return(X509_issuer_and_serial_cmp(a, b));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_X509_issuer_and_serial_hash(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a))
{
	return(X509_issuer_and_serial_hash(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_issuer_name_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *a), REG(a1, const X509 *b))
{
	return(X509_issuer_name_cmp(a, b));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_X509_issuer_name_hash(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a))
{
	return(X509_issuer_name_hash(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_subject_name_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *a), REG(a1, const X509 *b))
{
	return(X509_subject_name_cmp(a, b));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_X509_subject_name_hash(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	return(X509_subject_name_hash(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *a), REG(a1, const X509 *b))
{
	return(X509_cmp(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_NAME *a), REG(a1, const X509_NAME *b))
{
	return(X509_NAME_cmp(a, b));
}

unsigned long AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_hash(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *x))
{
	return(X509_NAME_hash(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_CRL *a), REG(a1, const X509_CRL *b))
{
	return(X509_CRL_cmp(a, b));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_NAME *name), REG(d0, int obase))
{
	return(X509_NAME_print(bp, name, obase));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_print_ex(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, X509_NAME *nm), REG(d0, int indent), REG(d1, unsigned long flags))
{
	return(X509_NAME_print_ex(out, nm, indent, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_print_ex(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 *x), REG(d0, unsigned long nmflag), REG(d1, unsigned long cflag))
{
	return(X509_print_ex(bp, x, nmflag, cflag));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 *x))
{
	return(X509_print(bp, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_ocspid_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 *x))
{
	return(X509_ocspid_print(bp, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CERT_AUX_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_CERT_AUX *x), REG(d0, int indent))
{
	return(X509_CERT_AUX_print(bp, x, indent));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_CRL *x))
{
	return(X509_CRL_print(bp, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_print_ex(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ *x), REG(d0, unsigned long nmflag), REG(d1, unsigned long cflag))
{
	return(X509_REQ_print_ex(bp, x, nmflag, cflag));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ *req))
{
	return(X509_REQ_print(bp, req));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_entry_count(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name))
{
	return(X509_NAME_entry_count(name));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_get_text_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(d0, int nid), REG(a1, char *buf), REG(d1, int len))
{
	return(X509_NAME_get_text_by_NID(name, nid, buf, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_get_text_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(a1, ASN1_OBJECT *obj), REG(a2, char *buf), REG(d0, int len))
{
	return(X509_NAME_get_text_by_OBJ(name, obj, buf, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_get_index_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509_NAME_get_index_by_NID(name, nid, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_get_index_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509_NAME_get_index_by_OBJ(name, obj, lastpos));
}

X509_NAME_ENTRY * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_get_entry(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(d0, int loc))
{
	return(X509_NAME_get_entry(name, loc));
}

X509_NAME_ENTRY * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_delete_entry(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(d0, int loc))
{
	return(X509_NAME_delete_entry(name, loc));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_add_entry(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(a1, X509_NAME_ENTRY *ne), REG(d0, int loc), REG(d1, int set))
{
	return(X509_NAME_add_entry(name, ne, loc, set));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_add_entry_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(a1, ASN1_OBJECT *obj), REG(d0, int type), REG(a2, unsigned char *bytes), REG(d1, int len), REG(d2, int loc), REG(d3, int set))
{
	return(X509_NAME_add_entry_by_OBJ(name, obj, type, bytes, len, loc, set));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_add_entry_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(d0, int nid), REG(d1, int type), REG(a1, unsigned char *bytes), REG(d2, int len), REG(d3, int loc), REG(d4, int set))
{
	return(X509_NAME_add_entry_by_NID(name, nid, type, bytes, len, loc, set));
}

X509_NAME_ENTRY * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_ENTRY_create_by_txt(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY **ne), REG(a1, const char *field), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len))
{
	return(X509_NAME_ENTRY_create_by_txt(ne, field, type, bytes, len));
}

X509_NAME_ENTRY * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_ENTRY_create_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY **ne), REG(d0, int nid), REG(d1, int type), REG(a1, unsigned char *bytes), REG(d2, int len))
{
	return(X509_NAME_ENTRY_create_by_NID(ne, nid, type, bytes, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_add_entry_by_txt(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(a1, const char *field), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len), REG(d2, int loc), REG(d3, int set))
{
	return(X509_NAME_add_entry_by_txt(name, field, type, bytes, len, loc, set));
}

X509_NAME_ENTRY * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_ENTRY_create_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY **ne), REG(a1, ASN1_OBJECT *obj), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len))
{
	return(X509_NAME_ENTRY_create_by_OBJ(ne, obj, type, bytes, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_ENTRY_set_object(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *ne), REG(a1, ASN1_OBJECT *obj))
{
	return(X509_NAME_ENTRY_set_object(ne, obj));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_ENTRY_set_data(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *ne), REG(d0, int type), REG(a1, const unsigned char *bytes), REG(d1, int len))
{
	return(X509_NAME_ENTRY_set_data(ne, type, bytes, len));
}

ASN1_OBJECT * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_ENTRY_get_object(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *ne))
{
	return(X509_NAME_ENTRY_get_object(ne));
}

ASN1_STRING * AMISSL_LIB_ENTRY _AmiSSL_X509_NAME_ENTRY_get_data(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *ne))
{
	return(X509_NAME_ENTRY_get_data(ne));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509v3_get_ext_count(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_EXTENSION) *x))
{
	return(X509v3_get_ext_count(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509v3_get_ext_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_EXTENSION) *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509v3_get_ext_by_NID(x, nid, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509v3_get_ext_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_EXTENSION) *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509v3_get_ext_by_OBJ(x, obj, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509v3_get_ext_by_critical(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_EXTENSION) *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(X509v3_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509v3_get_ext(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_EXTENSION) *x), REG(d0, int loc))
{
	return(X509v3_get_ext(x, loc));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509v3_delete_ext(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_EXTENSION) *x), REG(d0, int loc))
{
	return(X509v3_delete_ext(x, loc));
}

STACK_OF(X509_EXTENSION) * AMISSL_LIB_ENTRY _AmiSSL_X509v3_add_ext(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_EXTENSION) **x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(X509v3_add_ext(x, ex, loc));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_get_ext_count(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	return(X509_get_ext_count(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_get_ext_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509_get_ext_by_NID(x, nid, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_get_ext_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509_get_ext_by_OBJ(x, obj, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_get_ext_by_critical(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(X509_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509_get_ext(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int loc))
{
	return(X509_get_ext(x, loc));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509_delete_ext(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int loc))
{
	return(X509_delete_ext(x, loc));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_add_ext(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(X509_add_ext(x, ex, loc));
}

void * AMISSL_LIB_ENTRY _AmiSSL_X509_get_ext_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(X509_get_ext_d2i(x, nid, crit, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_add1_ext_i2d(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(X509_add1_ext_i2d(x, nid, value, crit, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_get_ext_count(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x))
{
	return(X509_CRL_get_ext_count(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_get_ext_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509_CRL_get_ext_by_NID(x, nid, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_get_ext_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509_CRL_get_ext_by_OBJ(x, obj, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_get_ext_by_critical(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(X509_CRL_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_get_ext(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, int loc))
{
	return(X509_CRL_get_ext(x, loc));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_delete_ext(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, int loc))
{
	return(X509_CRL_delete_ext(x, loc));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_add_ext(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(X509_CRL_add_ext(x, ex, loc));
}

void * AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_get_ext_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(X509_CRL_get_ext_d2i(x, nid, crit, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_CRL_add1_ext_i2d(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(X509_CRL_add1_ext_i2d(x, nid, value, crit, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_get_ext_count(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x))
{
	return(X509_REVOKED_get_ext_count(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_get_ext_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509_REVOKED_get_ext_by_NID(x, nid, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_get_ext_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509_REVOKED_get_ext_by_OBJ(x, obj, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_get_ext_by_critical(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(X509_REVOKED_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_get_ext(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(d0, int loc))
{
	return(X509_REVOKED_get_ext(x, loc));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_delete_ext(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(d0, int loc))
{
	return(X509_REVOKED_delete_ext(x, loc));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_add_ext(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(X509_REVOKED_add_ext(x, ex, loc));
}

void * AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_get_ext_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(X509_REVOKED_get_ext_d2i(x, nid, crit, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_REVOKED_add1_ext_i2d(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(X509_REVOKED_add1_ext_i2d(x, nid, value, crit, flags));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509_EXTENSION_create_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION **ex), REG(d0, int nid), REG(d1, int crit), REG(a1, ASN1_OCTET_STRING *data))
{
	return(X509_EXTENSION_create_by_NID(ex, nid, crit, data));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509_EXTENSION_create_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION **ex), REG(a1, ASN1_OBJECT *obj), REG(d0, int crit), REG(a2, ASN1_OCTET_STRING *data))
{
	return(X509_EXTENSION_create_by_OBJ(ex, obj, crit, data));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_EXTENSION_set_object(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex), REG(a1, ASN1_OBJECT *obj))
{
	return(X509_EXTENSION_set_object(ex, obj));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_EXTENSION_set_critical(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex), REG(d0, int crit))
{
	return(X509_EXTENSION_set_critical(ex, crit));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_EXTENSION_set_data(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex), REG(a1, ASN1_OCTET_STRING *data))
{
	return(X509_EXTENSION_set_data(ex, data));
}

ASN1_OBJECT * AMISSL_LIB_ENTRY _AmiSSL_X509_EXTENSION_get_object(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex))
{
	return(X509_EXTENSION_get_object(ex));
}

ASN1_OCTET_STRING * AMISSL_LIB_ENTRY _AmiSSL_X509_EXTENSION_get_data(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ne))
{
	return(X509_EXTENSION_get_data(ne));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_EXTENSION_get_critical(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex))
{
	return(X509_EXTENSION_get_critical(ex));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509at_get_attr_count(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_ATTRIBUTE) *x))
{
	return(X509at_get_attr_count(x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509at_get_attr_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_ATTRIBUTE) *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509at_get_attr_by_NID(x, nid, lastpos));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509at_get_attr_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_ATTRIBUTE) *sk), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509at_get_attr_by_OBJ(sk, obj, lastpos));
}

X509_ATTRIBUTE * AMISSL_LIB_ENTRY _AmiSSL_X509at_get_attr(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_ATTRIBUTE) *x), REG(d0, int loc))
{
	return(X509at_get_attr(x, loc));
}

X509_ATTRIBUTE * AMISSL_LIB_ENTRY _AmiSSL_X509at_delete_attr(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) *x), REG(d0, int loc))
{
	return(X509at_delete_attr(x, loc));
}

STACK_OF(X509_ATTRIBUTE) * AMISSL_LIB_ENTRY _AmiSSL_X509at_add1_attr(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) **x), REG(a1, X509_ATTRIBUTE *attr))
{
	return(X509at_add1_attr(x, attr));
}

STACK_OF(X509_ATTRIBUTE) * AMISSL_LIB_ENTRY _AmiSSL_X509at_add1_attr_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) **x), REG(a1, const ASN1_OBJECT *obj), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len))
{
	return(X509at_add1_attr_by_OBJ(x, obj, type, bytes, len));
}

STACK_OF(X509_ATTRIBUTE) * AMISSL_LIB_ENTRY _AmiSSL_X509at_add1_attr_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) **x), REG(d0, int nid), REG(d1, int type), REG(a1, const unsigned char *bytes), REG(d2, int len))
{
	return(X509at_add1_attr_by_NID(x, nid, type, bytes, len));
}

STACK_OF(X509_ATTRIBUTE) * AMISSL_LIB_ENTRY _AmiSSL_X509at_add1_attr_by_txt(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) **x), REG(a1, const char *attrname), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len))
{
	return(X509at_add1_attr_by_txt(x, attrname, type, bytes, len));
}

X509_ATTRIBUTE * AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_create_by_NID(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE **attr), REG(d0, int nid), REG(d1, int atrtype), REG(a1, const void *data), REG(d2, int len))
{
	return(X509_ATTRIBUTE_create_by_NID(attr, nid, atrtype, data, len));
}

X509_ATTRIBUTE * AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_create_by_OBJ(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE **attr), REG(a1, const ASN1_OBJECT *obj), REG(d0, int atrtype), REG(a2, const void *data), REG(d1, int len))
{
	return(X509_ATTRIBUTE_create_by_OBJ(attr, obj, atrtype, data, len));
}

X509_ATTRIBUTE * AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_create_by_txt(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE **attr), REG(a1, const char *atrname), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len))
{
	return(X509_ATTRIBUTE_create_by_txt(attr, atrname, type, bytes, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_set1_object(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *attr), REG(a1, const ASN1_OBJECT *obj))
{
	return(X509_ATTRIBUTE_set1_object(attr, obj));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_set1_data(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *attr), REG(d0, int attrtype), REG(a1, const void *data), REG(d1, int len))
{
	return(X509_ATTRIBUTE_set1_data(attr, attrtype, data, len));
}

void * AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_get0_data(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *attr), REG(d0, int idx), REG(d1, int atrtype), REG(a1, void *data))
{
	return(X509_ATTRIBUTE_get0_data(attr, idx, atrtype, data));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_count(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *attr))
{
	return(X509_ATTRIBUTE_count(attr));
}

ASN1_OBJECT * AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_get0_object(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *attr))
{
	return(X509_ATTRIBUTE_get0_object(attr));
}

ASN1_TYPE * AMISSL_LIB_ENTRY _AmiSSL_X509_ATTRIBUTE_get0_type(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *attr), REG(d0, int idx))
{
	return(X509_ATTRIBUTE_get0_type(attr, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_verify_cert(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	return(X509_verify_cert(ctx));
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_X509_find_by_issuer_and_serial(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509) *sk), REG(a1, X509_NAME *name), REG(a2, ASN1_INTEGER *serial))
{
	return(X509_find_by_issuer_and_serial(sk, name, serial));
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_X509_find_by_subject(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509) *sk), REG(a1, X509_NAME *name))
{
	return(X509_find_by_subject(sk, name));
}

PBEPARAM * AMISSL_LIB_ENTRY _AmiSSL_PBEPARAM_new(REG(a6, __IFACE_OR_BASE))
{
	return(PBEPARAM_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PBEPARAM_free(REG(a6, __IFACE_OR_BASE), REG(a0, PBEPARAM *a))
{
	PBEPARAM_free(a);
}

PBEPARAM * AMISSL_LIB_ENTRY _AmiSSL_d2i_PBEPARAM(REG(a6, __IFACE_OR_BASE), REG(a0, PBEPARAM **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PBEPARAM(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PBEPARAM(REG(a6, __IFACE_OR_BASE), REG(a0, PBEPARAM *a), REG(a1, unsigned char **out))
{
	return(i2d_PBEPARAM(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PBEPARAM_it(REG(a6, __IFACE_OR_BASE))
{
	return(PBEPARAM_it());
}

PBE2PARAM * AMISSL_LIB_ENTRY _AmiSSL_PBE2PARAM_new(REG(a6, __IFACE_OR_BASE))
{
	return(PBE2PARAM_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PBE2PARAM_free(REG(a6, __IFACE_OR_BASE), REG(a0, PBE2PARAM *a))
{
	PBE2PARAM_free(a);
}

PBE2PARAM * AMISSL_LIB_ENTRY _AmiSSL_d2i_PBE2PARAM(REG(a6, __IFACE_OR_BASE), REG(a0, PBE2PARAM **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PBE2PARAM(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PBE2PARAM(REG(a6, __IFACE_OR_BASE), REG(a0, PBE2PARAM *a), REG(a1, unsigned char **out))
{
	return(i2d_PBE2PARAM(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PBE2PARAM_it(REG(a6, __IFACE_OR_BASE))
{
	return(PBE2PARAM_it());
}

PBKDF2PARAM * AMISSL_LIB_ENTRY _AmiSSL_PBKDF2PARAM_new(REG(a6, __IFACE_OR_BASE))
{
	return(PBKDF2PARAM_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PBKDF2PARAM_free(REG(a6, __IFACE_OR_BASE), REG(a0, PBKDF2PARAM *a))
{
	PBKDF2PARAM_free(a);
}

PBKDF2PARAM * AMISSL_LIB_ENTRY _AmiSSL_d2i_PBKDF2PARAM(REG(a6, __IFACE_OR_BASE), REG(a0, PBKDF2PARAM **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PBKDF2PARAM(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PBKDF2PARAM(REG(a6, __IFACE_OR_BASE), REG(a0, PBKDF2PARAM *a), REG(a1, unsigned char **out))
{
	return(i2d_PBKDF2PARAM(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PBKDF2PARAM_it(REG(a6, __IFACE_OR_BASE))
{
	return(PBKDF2PARAM_it());
}

X509_ALGOR * AMISSL_LIB_ENTRY _AmiSSL_PKCS5_pbe_set(REG(a6, __IFACE_OR_BASE), REG(d0, int alg), REG(d1, int iter), REG(a0, unsigned char *salt), REG(d2, int saltlen))
{
	return(PKCS5_pbe_set(alg, iter, salt, saltlen));
}

X509_ALGOR * AMISSL_LIB_ENTRY _AmiSSL_PKCS5_pbe2_set(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_CIPHER *cipher), REG(d0, int iter), REG(a1, unsigned char *salt), REG(d1, int saltlen))
{
	return(PKCS5_pbe2_set(cipher, iter, salt, saltlen));
}

PKCS8_PRIV_KEY_INFO * AMISSL_LIB_ENTRY _AmiSSL_PKCS8_PRIV_KEY_INFO_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS8_PRIV_KEY_INFO_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKCS8_PRIV_KEY_INFO_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO *a))
{
	PKCS8_PRIV_KEY_INFO_free(a);
}

PKCS8_PRIV_KEY_INFO * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKCS8_PRIV_KEY_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS8_PRIV_KEY_INFO(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKCS8_PRIV_KEY_INFO(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS8_PRIV_KEY_INFO(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKCS8_PRIV_KEY_INFO_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS8_PRIV_KEY_INFO_it());
}

EVP_PKEY * AMISSL_LIB_ENTRY _AmiSSL_EVP_PKCS82PKEY(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO *p8))
{
	return(EVP_PKCS82PKEY(p8));
}

PKCS8_PRIV_KEY_INFO * AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY2PKCS8(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY2PKCS8(pkey));
}

PKCS8_PRIV_KEY_INFO * AMISSL_LIB_ENTRY _AmiSSL_EVP_PKEY2PKCS8_broken(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(d0, int broken))
{
	return(EVP_PKEY2PKCS8_broken(pkey, broken));
}

PKCS8_PRIV_KEY_INFO * AMISSL_LIB_ENTRY _AmiSSL_PKCS8_set_broken(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO *p8), REG(d0, int broken))
{
	return(PKCS8_set_broken(p8, broken));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_check_trust(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int id), REG(d1, int flags))
{
	return(X509_check_trust(x, id, flags));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_TRUST_get_count(REG(a6, __IFACE_OR_BASE))
{
	return(X509_TRUST_get_count());
}

X509_TRUST * AMISSL_LIB_ENTRY _AmiSSL_X509_TRUST_get0(REG(a6, __IFACE_OR_BASE), REG(d0, int idx))
{
	return(X509_TRUST_get0(idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_TRUST_get_by_id(REG(a6, __IFACE_OR_BASE), REG(d0, int id))
{
	return(X509_TRUST_get_by_id(id));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_TRUST_add(REG(a6, __IFACE_OR_BASE), REG(d0, int id), REG(d1, int flags), REG(a0, int (*ck)(X509_TRUST *, X509 *, int)), REG(a1, char *name), REG(d2, int arg1), REG(a2, void *arg2))
{
	return(X509_TRUST_add(id, flags, ck, name, arg1, arg2));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_TRUST_cleanup(REG(a6, __IFACE_OR_BASE))
{
	X509_TRUST_cleanup();
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_TRUST_get_flags(REG(a6, __IFACE_OR_BASE), REG(a0, X509_TRUST *xp))
{
	return(X509_TRUST_get_flags(xp));
}

char * AMISSL_LIB_ENTRY _AmiSSL_X509_TRUST_get0_name(REG(a6, __IFACE_OR_BASE), REG(a0, X509_TRUST *xp))
{
	return(X509_TRUST_get0_name(xp));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_TRUST_get_trust(REG(a6, __IFACE_OR_BASE), REG(a0, X509_TRUST *xp))
{
	return(X509_TRUST_get_trust(xp));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_X509_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_X509_strings();
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_OBJECT_idx_by_subject(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_OBJECT) *h), REG(d0, int type), REG(a1, X509_NAME *name))
{
	return(X509_OBJECT_idx_by_subject(h, type, name));
}

X509_OBJECT * AMISSL_LIB_ENTRY _AmiSSL_X509_OBJECT_retrieve_by_subject(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_OBJECT) *h), REG(d0, int type), REG(a1, X509_NAME *name))
{
	return(X509_OBJECT_retrieve_by_subject(h, type, name));
}

X509_OBJECT * AMISSL_LIB_ENTRY _AmiSSL_X509_OBJECT_retrieve_match(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_OBJECT) *h), REG(a1, X509_OBJECT *x))
{
	return(X509_OBJECT_retrieve_match(h, x));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_OBJECT_up_ref_count(REG(a6, __IFACE_OR_BASE), REG(a0, X509_OBJECT *a))
{
	X509_OBJECT_up_ref_count(a);
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_OBJECT_free_contents(REG(a6, __IFACE_OR_BASE), REG(a0, X509_OBJECT *a))
{
	X509_OBJECT_free_contents(a);
}

X509_STORE * AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_STORE_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *v))
{
	X509_STORE_free(v);
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_set_flags(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx), REG(d0, long flags))
{
	X509_STORE_set_flags(ctx, flags);
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_set_purpose(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx), REG(d0, int purpose))
{
	return(X509_STORE_set_purpose(ctx, purpose));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_set_trust(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx), REG(d0, int trust))
{
	return(X509_STORE_set_trust(ctx, trust));
}

X509_STORE_CTX * AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_new(REG(a6, __IFACE_OR_BASE))
{
	return(X509_STORE_CTX_new());
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_get1_issuer(REG(a6, __IFACE_OR_BASE), REG(a0, X509 **issuer), REG(a1, X509_STORE_CTX *ctx), REG(a2, X509 *x))
{
	return(X509_STORE_CTX_get1_issuer(issuer, ctx, x));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	X509_STORE_CTX_free(ctx);
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_init(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(a1, X509_STORE *store), REG(a2, X509 *x509), REG(a3, STACK_OF(X509) *chain))
{
	return(X509_STORE_CTX_init(ctx, store, x509, chain));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_trusted_stack(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(a1, STACK_OF(X509) *sk))
{
	X509_STORE_CTX_trusted_stack(ctx, sk);
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_cleanup(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	X509_STORE_CTX_cleanup(ctx);
}

X509_LOOKUP * AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_add_lookup(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *v), REG(a1, X509_LOOKUP_METHOD *m))
{
	return(X509_STORE_add_lookup(v, m));
}

X509_LOOKUP_METHOD * AMISSL_LIB_ENTRY _AmiSSL_X509_LOOKUP_hash_dir(REG(a6, __IFACE_OR_BASE))
{
	return(X509_LOOKUP_hash_dir());
}

X509_LOOKUP_METHOD * AMISSL_LIB_ENTRY _AmiSSL_X509_LOOKUP_file(REG(a6, __IFACE_OR_BASE))
{
	return(X509_LOOKUP_file());
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_add_cert(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx), REG(a1, X509 *x))
{
	return(X509_STORE_add_cert(ctx, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_add_crl(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx), REG(a1, X509_CRL *x))
{
	return(X509_STORE_add_crl(ctx, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_get_by_subject(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *vs), REG(d0, int type), REG(a1, X509_NAME *name), REG(a2, X509_OBJECT *ret))
{
	return(X509_STORE_get_by_subject(vs, type, name, ret));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_LOOKUP_ctrl(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(d0, int cmd), REG(a1, const char *argc), REG(d1, long argl), REG(a2, char **ret))
{
	return(X509_LOOKUP_ctrl(ctx, cmd, argc, argl, ret));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_load_cert_file(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(a1, const char *file), REG(d0, int type))
{
	return(X509_load_cert_file(ctx, file, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_load_crl_file(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(a1, const char *file), REG(d0, int type))
{
	return(X509_load_crl_file(ctx, file, type));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_load_cert_crl_file(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(a1, const char *file), REG(d0, int type))
{
	return(X509_load_cert_crl_file(ctx, file, type));
}

X509_LOOKUP * AMISSL_LIB_ENTRY _AmiSSL_X509_LOOKUP_new(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP_METHOD *method))
{
	return(X509_LOOKUP_new(method));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_LOOKUP_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx))
{
	X509_LOOKUP_free(ctx);
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_LOOKUP_init(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx))
{
	return(X509_LOOKUP_init(ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_LOOKUP_by_subject(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(d0, int type), REG(a1, X509_NAME *name), REG(a2, X509_OBJECT *ret))
{
	return(X509_LOOKUP_by_subject(ctx, type, name, ret));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_LOOKUP_by_issuer_serial(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(d0, int type), REG(a1, X509_NAME *name), REG(a2, ASN1_INTEGER *serial), REG(a3, X509_OBJECT *ret))
{
	return(X509_LOOKUP_by_issuer_serial(ctx, type, name, serial, ret));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_LOOKUP_by_fingerprint(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(d0, int type), REG(a1, unsigned char *bytes), REG(d1, int len), REG(a2, X509_OBJECT *ret))
{
	return(X509_LOOKUP_by_fingerprint(ctx, type, bytes, len, ret));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_LOOKUP_by_alias(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(d0, int type), REG(a1, char *str), REG(d1, int len), REG(a2, X509_OBJECT *ret))
{
	return(X509_LOOKUP_by_alias(ctx, type, str, len, ret));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_LOOKUP_shutdown(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx))
{
	return(X509_LOOKUP_shutdown(ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_load_locations(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx), REG(a1, const char *file), REG(a2, const char *dir))
{
	return(X509_STORE_load_locations(ctx, file, dir));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_set_default_paths(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx))
{
	return(X509_STORE_set_default_paths(ctx));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_get_ex_new_index(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(X509_STORE_CTX_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_set_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, int idx), REG(a1, void *data))
{
	return(X509_STORE_CTX_set_ex_data(ctx, idx, data));
}

void * AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_get_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, int idx))
{
	return(X509_STORE_CTX_get_ex_data(ctx, idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_get_error(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	return(X509_STORE_CTX_get_error(ctx));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_set_error(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, int s))
{
	X509_STORE_CTX_set_error(ctx, s);
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_get_error_depth(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	return(X509_STORE_CTX_get_error_depth(ctx));
}

X509 * AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_get_current_cert(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	return(X509_STORE_CTX_get_current_cert(ctx));
}

STACK_OF(X509) * AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_get_chain(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	return(X509_STORE_CTX_get_chain(ctx));
}

STACK_OF(X509) * AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_get1_chain(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	return(X509_STORE_CTX_get1_chain(ctx));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_set_cert(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *c), REG(a1, X509 *x))
{
	X509_STORE_CTX_set_cert(c, x);
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_set_chain(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *c), REG(a1, STACK_OF(X509) *sk))
{
	X509_STORE_CTX_set_chain(c, sk);
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_set_purpose(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, int purpose))
{
	return(X509_STORE_CTX_set_purpose(ctx, purpose));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_set_trust(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, int trust))
{
	return(X509_STORE_CTX_set_trust(ctx, trust));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_purpose_inherit(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, int def_purpose), REG(d1, int purpose), REG(d2, int trust))
{
	return(X509_STORE_CTX_purpose_inherit(ctx, def_purpose, purpose, trust));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_set_flags(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, long flags))
{
	X509_STORE_CTX_set_flags(ctx, flags);
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_set_time(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, long flags), REG(d1, time_t t))
{
	X509_STORE_CTX_set_time(ctx, flags, t);
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_STORE_CTX_set_verify_cb(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(a1, int (*verify_cb)(int, X509_STORE_CTX *)))
{
	X509_STORE_CTX_set_verify_cb(ctx, verify_cb);
}

BASIC_CONSTRAINTS * AMISSL_LIB_ENTRY _AmiSSL_BASIC_CONSTRAINTS_new(REG(a6, __IFACE_OR_BASE))
{
	return(BASIC_CONSTRAINTS_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_BASIC_CONSTRAINTS_free(REG(a6, __IFACE_OR_BASE), REG(a0, BASIC_CONSTRAINTS *a))
{
	BASIC_CONSTRAINTS_free(a);
}

BASIC_CONSTRAINTS * AMISSL_LIB_ENTRY _AmiSSL_d2i_BASIC_CONSTRAINTS(REG(a6, __IFACE_OR_BASE), REG(a0, BASIC_CONSTRAINTS **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_BASIC_CONSTRAINTS(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_BASIC_CONSTRAINTS(REG(a6, __IFACE_OR_BASE), REG(a0, BASIC_CONSTRAINTS *a), REG(a1, unsigned char **out))
{
	return(i2d_BASIC_CONSTRAINTS(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_BASIC_CONSTRAINTS_it(REG(a6, __IFACE_OR_BASE))
{
	return(BASIC_CONSTRAINTS_it());
}

SXNET * AMISSL_LIB_ENTRY _AmiSSL_SXNET_new(REG(a6, __IFACE_OR_BASE))
{
	return(SXNET_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_SXNET_free(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET *a))
{
	SXNET_free(a);
}

SXNET * AMISSL_LIB_ENTRY _AmiSSL_d2i_SXNET(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_SXNET(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_SXNET(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET *a), REG(a1, unsigned char **out))
{
	return(i2d_SXNET(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_SXNET_it(REG(a6, __IFACE_OR_BASE))
{
	return(SXNET_it());
}

SXNETID * AMISSL_LIB_ENTRY _AmiSSL_SXNETID_new(REG(a6, __IFACE_OR_BASE))
{
	return(SXNETID_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_SXNETID_free(REG(a6, __IFACE_OR_BASE), REG(a0, SXNETID *a))
{
	SXNETID_free(a);
}

SXNETID * AMISSL_LIB_ENTRY _AmiSSL_d2i_SXNETID(REG(a6, __IFACE_OR_BASE), REG(a0, SXNETID **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_SXNETID(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_SXNETID(REG(a6, __IFACE_OR_BASE), REG(a0, SXNETID *a), REG(a1, unsigned char **out))
{
	return(i2d_SXNETID(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_SXNETID_it(REG(a6, __IFACE_OR_BASE))
{
	return(SXNETID_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_SXNET_add_id_asc(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET **psx), REG(a1, char *zone), REG(a2, char *user), REG(d0, int userlen))
{
	return(SXNET_add_id_asc(psx, zone, user, userlen));
}

int AMISSL_LIB_ENTRY _AmiSSL_SXNET_add_id_ulong(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET **psx), REG(d0, unsigned long lzone), REG(a1, char *user), REG(d1, int userlen))
{
	return(SXNET_add_id_ulong(psx, lzone, user, userlen));
}

int AMISSL_LIB_ENTRY _AmiSSL_SXNET_add_id_INTEGER(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET **psx), REG(a1, ASN1_INTEGER *izone), REG(a2, char *user), REG(d0, int userlen))
{
	return(SXNET_add_id_INTEGER(psx, izone, user, userlen));
}

ASN1_OCTET_STRING * AMISSL_LIB_ENTRY _AmiSSL_SXNET_get_id_asc(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET *sx), REG(a1, char *zone))
{
	return(SXNET_get_id_asc(sx, zone));
}

ASN1_OCTET_STRING * AMISSL_LIB_ENTRY _AmiSSL_SXNET_get_id_ulong(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET *sx), REG(d0, unsigned long lzone))
{
	return(SXNET_get_id_ulong(sx, lzone));
}

ASN1_OCTET_STRING * AMISSL_LIB_ENTRY _AmiSSL_SXNET_get_id_INTEGER(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET *sx), REG(a1, ASN1_INTEGER *zone))
{
	return(SXNET_get_id_INTEGER(sx, zone));
}

AUTHORITY_KEYID * AMISSL_LIB_ENTRY _AmiSSL_AUTHORITY_KEYID_new(REG(a6, __IFACE_OR_BASE))
{
	return(AUTHORITY_KEYID_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_AUTHORITY_KEYID_free(REG(a6, __IFACE_OR_BASE), REG(a0, AUTHORITY_KEYID *a))
{
	AUTHORITY_KEYID_free(a);
}

AUTHORITY_KEYID * AMISSL_LIB_ENTRY _AmiSSL_d2i_AUTHORITY_KEYID(REG(a6, __IFACE_OR_BASE), REG(a0, AUTHORITY_KEYID **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_AUTHORITY_KEYID(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_AUTHORITY_KEYID(REG(a6, __IFACE_OR_BASE), REG(a0, AUTHORITY_KEYID *a), REG(a1, unsigned char **out))
{
	return(i2d_AUTHORITY_KEYID(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_AUTHORITY_KEYID_it(REG(a6, __IFACE_OR_BASE))
{
	return(AUTHORITY_KEYID_it());
}

PKEY_USAGE_PERIOD * AMISSL_LIB_ENTRY _AmiSSL_PKEY_USAGE_PERIOD_new(REG(a6, __IFACE_OR_BASE))
{
	return(PKEY_USAGE_PERIOD_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PKEY_USAGE_PERIOD_free(REG(a6, __IFACE_OR_BASE), REG(a0, PKEY_USAGE_PERIOD *a))
{
	PKEY_USAGE_PERIOD_free(a);
}

PKEY_USAGE_PERIOD * AMISSL_LIB_ENTRY _AmiSSL_d2i_PKEY_USAGE_PERIOD(REG(a6, __IFACE_OR_BASE), REG(a0, PKEY_USAGE_PERIOD **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKEY_USAGE_PERIOD(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PKEY_USAGE_PERIOD(REG(a6, __IFACE_OR_BASE), REG(a0, PKEY_USAGE_PERIOD *a), REG(a1, unsigned char **out))
{
	return(i2d_PKEY_USAGE_PERIOD(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PKEY_USAGE_PERIOD_it(REG(a6, __IFACE_OR_BASE))
{
	return(PKEY_USAGE_PERIOD_it());
}

GENERAL_NAME * AMISSL_LIB_ENTRY _AmiSSL_GENERAL_NAME_new(REG(a6, __IFACE_OR_BASE))
{
	return(GENERAL_NAME_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_GENERAL_NAME_free(REG(a6, __IFACE_OR_BASE), REG(a0, GENERAL_NAME *a))
{
	GENERAL_NAME_free(a);
}

GENERAL_NAME * AMISSL_LIB_ENTRY _AmiSSL_d2i_GENERAL_NAME(REG(a6, __IFACE_OR_BASE), REG(a0, GENERAL_NAME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_GENERAL_NAME(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_GENERAL_NAME(REG(a6, __IFACE_OR_BASE), REG(a0, GENERAL_NAME *a), REG(a1, unsigned char **out))
{
	return(i2d_GENERAL_NAME(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_GENERAL_NAME_it(REG(a6, __IFACE_OR_BASE))
{
	return(GENERAL_NAME_it());
}

STACK_OF(CONF_VALUE) * AMISSL_LIB_ENTRY _AmiSSL_i2v_GENERAL_NAME(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *method), REG(a1, GENERAL_NAME *gen), REG(a2, STACK_OF(CONF_VALUE) *ret))
{
	return(i2v_GENERAL_NAME(method, gen, ret));
}

int AMISSL_LIB_ENTRY _AmiSSL_GENERAL_NAME_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, GENERAL_NAME *gen))
{
	return(GENERAL_NAME_print(out, gen));
}

GENERAL_NAMES * AMISSL_LIB_ENTRY _AmiSSL_GENERAL_NAMES_new(REG(a6, __IFACE_OR_BASE))
{
	return(GENERAL_NAMES_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_GENERAL_NAMES_free(REG(a6, __IFACE_OR_BASE), REG(a0, GENERAL_NAMES *a))
{
	GENERAL_NAMES_free(a);
}

GENERAL_NAMES * AMISSL_LIB_ENTRY _AmiSSL_d2i_GENERAL_NAMES(REG(a6, __IFACE_OR_BASE), REG(a0, GENERAL_NAMES **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_GENERAL_NAMES(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_GENERAL_NAMES(REG(a6, __IFACE_OR_BASE), REG(a0, GENERAL_NAMES *a), REG(a1, unsigned char **out))
{
	return(i2d_GENERAL_NAMES(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_GENERAL_NAMES_it(REG(a6, __IFACE_OR_BASE))
{
	return(GENERAL_NAMES_it());
}

STACK_OF(CONF_VALUE) * AMISSL_LIB_ENTRY _AmiSSL_i2v_GENERAL_NAMES(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *method), REG(a1, GENERAL_NAMES *gen), REG(a2, STACK_OF(CONF_VALUE) *extlist))
{
	return(i2v_GENERAL_NAMES(method, gen, extlist));
}

GENERAL_NAMES * AMISSL_LIB_ENTRY _AmiSSL_v2i_GENERAL_NAMES(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *method), REG(a1, X509V3_CTX *ctx), REG(a2, STACK_OF(CONF_VALUE) *nval))
{
	return(v2i_GENERAL_NAMES(method, ctx, nval));
}

OTHERNAME * AMISSL_LIB_ENTRY _AmiSSL_OTHERNAME_new(REG(a6, __IFACE_OR_BASE))
{
	return(OTHERNAME_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_OTHERNAME_free(REG(a6, __IFACE_OR_BASE), REG(a0, OTHERNAME *a))
{
	OTHERNAME_free(a);
}

OTHERNAME * AMISSL_LIB_ENTRY _AmiSSL_d2i_OTHERNAME(REG(a6, __IFACE_OR_BASE), REG(a0, OTHERNAME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OTHERNAME(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_OTHERNAME(REG(a6, __IFACE_OR_BASE), REG(a0, OTHERNAME *a), REG(a1, unsigned char **out))
{
	return(i2d_OTHERNAME(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_OTHERNAME_it(REG(a6, __IFACE_OR_BASE))
{
	return(OTHERNAME_it());
}

EDIPARTYNAME * AMISSL_LIB_ENTRY _AmiSSL_EDIPARTYNAME_new(REG(a6, __IFACE_OR_BASE))
{
	return(EDIPARTYNAME_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_EDIPARTYNAME_free(REG(a6, __IFACE_OR_BASE), REG(a0, EDIPARTYNAME *a))
{
	EDIPARTYNAME_free(a);
}

EDIPARTYNAME * AMISSL_LIB_ENTRY _AmiSSL_d2i_EDIPARTYNAME(REG(a6, __IFACE_OR_BASE), REG(a0, EDIPARTYNAME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_EDIPARTYNAME(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_EDIPARTYNAME(REG(a6, __IFACE_OR_BASE), REG(a0, EDIPARTYNAME *a), REG(a1, unsigned char **out))
{
	return(i2d_EDIPARTYNAME(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_EDIPARTYNAME_it(REG(a6, __IFACE_OR_BASE))
{
	return(EDIPARTYNAME_it());
}

char * AMISSL_LIB_ENTRY _AmiSSL_i2s_ASN1_OCTET_STRING(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *method), REG(a1, ASN1_OCTET_STRING *ia5))
{
	return(i2s_ASN1_OCTET_STRING(method, ia5));
}

ASN1_OCTET_STRING * AMISSL_LIB_ENTRY _AmiSSL_s2i_ASN1_OCTET_STRING(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *method), REG(a1, X509V3_CTX *ctx), REG(a2, char *str))
{
	return(s2i_ASN1_OCTET_STRING(method, ctx, str));
}

EXTENDED_KEY_USAGE * AMISSL_LIB_ENTRY _AmiSSL_EXTENDED_KEY_USAGE_new(REG(a6, __IFACE_OR_BASE))
{
	return(EXTENDED_KEY_USAGE_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_EXTENDED_KEY_USAGE_free(REG(a6, __IFACE_OR_BASE), REG(a0, EXTENDED_KEY_USAGE *a))
{
	EXTENDED_KEY_USAGE_free(a);
}

EXTENDED_KEY_USAGE * AMISSL_LIB_ENTRY _AmiSSL_d2i_EXTENDED_KEY_USAGE(REG(a6, __IFACE_OR_BASE), REG(a0, EXTENDED_KEY_USAGE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_EXTENDED_KEY_USAGE(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_EXTENDED_KEY_USAGE(REG(a6, __IFACE_OR_BASE), REG(a0, EXTENDED_KEY_USAGE *a), REG(a1, unsigned char **out))
{
	return(i2d_EXTENDED_KEY_USAGE(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_EXTENDED_KEY_USAGE_it(REG(a6, __IFACE_OR_BASE))
{
	return(EXTENDED_KEY_USAGE_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_i2a_ACCESS_DESCRIPTION(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ACCESS_DESCRIPTION*a))
{
	return(i2a_ACCESS_DESCRIPTION(bp, a));
}

CERTIFICATEPOLICIES * AMISSL_LIB_ENTRY _AmiSSL_CERTIFICATEPOLICIES_new(REG(a6, __IFACE_OR_BASE))
{
	return(CERTIFICATEPOLICIES_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_CERTIFICATEPOLICIES_free(REG(a6, __IFACE_OR_BASE), REG(a0, CERTIFICATEPOLICIES *a))
{
	CERTIFICATEPOLICIES_free(a);
}

CERTIFICATEPOLICIES * AMISSL_LIB_ENTRY _AmiSSL_d2i_CERTIFICATEPOLICIES(REG(a6, __IFACE_OR_BASE), REG(a0, CERTIFICATEPOLICIES **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_CERTIFICATEPOLICIES(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_CERTIFICATEPOLICIES(REG(a6, __IFACE_OR_BASE), REG(a0, CERTIFICATEPOLICIES *a), REG(a1, unsigned char **out))
{
	return(i2d_CERTIFICATEPOLICIES(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_CERTIFICATEPOLICIES_it(REG(a6, __IFACE_OR_BASE))
{
	return(CERTIFICATEPOLICIES_it());
}

POLICYINFO * AMISSL_LIB_ENTRY _AmiSSL_POLICYINFO_new(REG(a6, __IFACE_OR_BASE))
{
	return(POLICYINFO_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_POLICYINFO_free(REG(a6, __IFACE_OR_BASE), REG(a0, POLICYINFO *a))
{
	POLICYINFO_free(a);
}

POLICYINFO * AMISSL_LIB_ENTRY _AmiSSL_d2i_POLICYINFO(REG(a6, __IFACE_OR_BASE), REG(a0, POLICYINFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_POLICYINFO(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_POLICYINFO(REG(a6, __IFACE_OR_BASE), REG(a0, POLICYINFO *a), REG(a1, unsigned char **out))
{
	return(i2d_POLICYINFO(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_POLICYINFO_it(REG(a6, __IFACE_OR_BASE))
{
	return(POLICYINFO_it());
}

POLICYQUALINFO * AMISSL_LIB_ENTRY _AmiSSL_POLICYQUALINFO_new(REG(a6, __IFACE_OR_BASE))
{
	return(POLICYQUALINFO_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_POLICYQUALINFO_free(REG(a6, __IFACE_OR_BASE), REG(a0, POLICYQUALINFO *a))
{
	POLICYQUALINFO_free(a);
}

POLICYQUALINFO * AMISSL_LIB_ENTRY _AmiSSL_d2i_POLICYQUALINFO(REG(a6, __IFACE_OR_BASE), REG(a0, POLICYQUALINFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_POLICYQUALINFO(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_POLICYQUALINFO(REG(a6, __IFACE_OR_BASE), REG(a0, POLICYQUALINFO *a), REG(a1, unsigned char **out))
{
	return(i2d_POLICYQUALINFO(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_POLICYQUALINFO_it(REG(a6, __IFACE_OR_BASE))
{
	return(POLICYQUALINFO_it());
}

USERNOTICE * AMISSL_LIB_ENTRY _AmiSSL_USERNOTICE_new(REG(a6, __IFACE_OR_BASE))
{
	return(USERNOTICE_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_USERNOTICE_free(REG(a6, __IFACE_OR_BASE), REG(a0, USERNOTICE *a))
{
	USERNOTICE_free(a);
}

USERNOTICE * AMISSL_LIB_ENTRY _AmiSSL_d2i_USERNOTICE(REG(a6, __IFACE_OR_BASE), REG(a0, USERNOTICE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_USERNOTICE(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_USERNOTICE(REG(a6, __IFACE_OR_BASE), REG(a0, USERNOTICE *a), REG(a1, unsigned char **out))
{
	return(i2d_USERNOTICE(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_USERNOTICE_it(REG(a6, __IFACE_OR_BASE))
{
	return(USERNOTICE_it());
}

NOTICEREF * AMISSL_LIB_ENTRY _AmiSSL_NOTICEREF_new(REG(a6, __IFACE_OR_BASE))
{
	return(NOTICEREF_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_NOTICEREF_free(REG(a6, __IFACE_OR_BASE), REG(a0, NOTICEREF *a))
{
	NOTICEREF_free(a);
}

NOTICEREF * AMISSL_LIB_ENTRY _AmiSSL_d2i_NOTICEREF(REG(a6, __IFACE_OR_BASE), REG(a0, NOTICEREF **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_NOTICEREF(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_NOTICEREF(REG(a6, __IFACE_OR_BASE), REG(a0, NOTICEREF *a), REG(a1, unsigned char **out))
{
	return(i2d_NOTICEREF(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_NOTICEREF_it(REG(a6, __IFACE_OR_BASE))
{
	return(NOTICEREF_it());
}

CRL_DIST_POINTS * AMISSL_LIB_ENTRY _AmiSSL_CRL_DIST_POINTS_new(REG(a6, __IFACE_OR_BASE))
{
	return(CRL_DIST_POINTS_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_CRL_DIST_POINTS_free(REG(a6, __IFACE_OR_BASE), REG(a0, CRL_DIST_POINTS *a))
{
	CRL_DIST_POINTS_free(a);
}

CRL_DIST_POINTS * AMISSL_LIB_ENTRY _AmiSSL_d2i_CRL_DIST_POINTS(REG(a6, __IFACE_OR_BASE), REG(a0, CRL_DIST_POINTS **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_CRL_DIST_POINTS(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_CRL_DIST_POINTS(REG(a6, __IFACE_OR_BASE), REG(a0, CRL_DIST_POINTS *a), REG(a1, unsigned char **out))
{
	return(i2d_CRL_DIST_POINTS(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_CRL_DIST_POINTS_it(REG(a6, __IFACE_OR_BASE))
{
	return(CRL_DIST_POINTS_it());
}

DIST_POINT * AMISSL_LIB_ENTRY _AmiSSL_DIST_POINT_new(REG(a6, __IFACE_OR_BASE))
{
	return(DIST_POINT_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_DIST_POINT_free(REG(a6, __IFACE_OR_BASE), REG(a0, DIST_POINT *a))
{
	DIST_POINT_free(a);
}

DIST_POINT * AMISSL_LIB_ENTRY _AmiSSL_d2i_DIST_POINT(REG(a6, __IFACE_OR_BASE), REG(a0, DIST_POINT **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_DIST_POINT(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_DIST_POINT(REG(a6, __IFACE_OR_BASE), REG(a0, DIST_POINT *a), REG(a1, unsigned char **out))
{
	return(i2d_DIST_POINT(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_DIST_POINT_it(REG(a6, __IFACE_OR_BASE))
{
	return(DIST_POINT_it());
}

DIST_POINT_NAME * AMISSL_LIB_ENTRY _AmiSSL_DIST_POINT_NAME_new(REG(a6, __IFACE_OR_BASE))
{
	return(DIST_POINT_NAME_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_DIST_POINT_NAME_free(REG(a6, __IFACE_OR_BASE), REG(a0, DIST_POINT_NAME *a))
{
	DIST_POINT_NAME_free(a);
}

DIST_POINT_NAME * AMISSL_LIB_ENTRY _AmiSSL_d2i_DIST_POINT_NAME(REG(a6, __IFACE_OR_BASE), REG(a0, DIST_POINT_NAME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_DIST_POINT_NAME(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_DIST_POINT_NAME(REG(a6, __IFACE_OR_BASE), REG(a0, DIST_POINT_NAME *a), REG(a1, unsigned char **out))
{
	return(i2d_DIST_POINT_NAME(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_DIST_POINT_NAME_it(REG(a6, __IFACE_OR_BASE))
{
	return(DIST_POINT_NAME_it());
}

ACCESS_DESCRIPTION * AMISSL_LIB_ENTRY _AmiSSL_ACCESS_DESCRIPTION_new(REG(a6, __IFACE_OR_BASE))
{
	return(ACCESS_DESCRIPTION_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_ACCESS_DESCRIPTION_free(REG(a6, __IFACE_OR_BASE), REG(a0, ACCESS_DESCRIPTION *a))
{
	ACCESS_DESCRIPTION_free(a);
}

ACCESS_DESCRIPTION * AMISSL_LIB_ENTRY _AmiSSL_d2i_ACCESS_DESCRIPTION(REG(a6, __IFACE_OR_BASE), REG(a0, ACCESS_DESCRIPTION **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ACCESS_DESCRIPTION(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_ACCESS_DESCRIPTION(REG(a6, __IFACE_OR_BASE), REG(a0, ACCESS_DESCRIPTION *a), REG(a1, unsigned char **out))
{
	return(i2d_ACCESS_DESCRIPTION(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_ACCESS_DESCRIPTION_it(REG(a6, __IFACE_OR_BASE))
{
	return(ACCESS_DESCRIPTION_it());
}

AUTHORITY_INFO_ACCESS * AMISSL_LIB_ENTRY _AmiSSL_AUTHORITY_INFO_ACCESS_new(REG(a6, __IFACE_OR_BASE))
{
	return(AUTHORITY_INFO_ACCESS_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_AUTHORITY_INFO_ACCESS_free(REG(a6, __IFACE_OR_BASE), REG(a0, AUTHORITY_INFO_ACCESS *a))
{
	AUTHORITY_INFO_ACCESS_free(a);
}

AUTHORITY_INFO_ACCESS * AMISSL_LIB_ENTRY _AmiSSL_d2i_AUTHORITY_INFO_ACCESS(REG(a6, __IFACE_OR_BASE), REG(a0, AUTHORITY_INFO_ACCESS **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_AUTHORITY_INFO_ACCESS(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_AUTHORITY_INFO_ACCESS(REG(a6, __IFACE_OR_BASE), REG(a0, AUTHORITY_INFO_ACCESS *a), REG(a1, unsigned char **out))
{
	return(i2d_AUTHORITY_INFO_ACCESS(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_AUTHORITY_INFO_ACCESS_it(REG(a6, __IFACE_OR_BASE))
{
	return(AUTHORITY_INFO_ACCESS_it());
}

GENERAL_NAME * AMISSL_LIB_ENTRY _AmiSSL_v2i_GENERAL_NAME(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *method), REG(a1, X509V3_CTX *ctx), REG(a2, CONF_VALUE *cnf))
{
	return(v2i_GENERAL_NAME(method, ctx, cnf));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509V3_conf_free(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_VALUE *val))
{
	X509V3_conf_free(val);
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_nconf_nid(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, X509V3_CTX *ctx), REG(d0, int ext_nid), REG(a2, char *value))
{
	return(X509V3_EXT_nconf_nid(conf, ctx, ext_nid, value));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_nconf(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *name), REG(a3, char *value))
{
	return(X509V3_EXT_nconf(conf, ctx, name, value));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_add_nconf_sk(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, STACK_OF(X509_EXTENSION) **sk))
{
	return(X509V3_EXT_add_nconf_sk(conf, ctx, section, sk));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_add_nconf(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, X509 *cert))
{
	return(X509V3_EXT_add_nconf(conf, ctx, section, cert));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_REQ_add_nconf(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, X509_REQ *req))
{
	return(X509V3_EXT_REQ_add_nconf(conf, ctx, section, req));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_CRL_add_nconf(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, X509_CRL *crl))
{
	return(X509V3_EXT_CRL_add_nconf(conf, ctx, section, crl));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_conf_nid(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, X509V3_CTX *ctx), REG(d0, int ext_nid), REG(a2, char *value))
{
	return(X509V3_EXT_conf_nid(conf, ctx, ext_nid, value));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_conf(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *name), REG(a3, char *value))
{
	return(X509V3_EXT_conf(conf, ctx, name, value));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_add_conf(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, X509 *cert))
{
	return(X509V3_EXT_add_conf(conf, ctx, section, cert));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_REQ_add_conf(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, X509_REQ *req))
{
	return(X509V3_EXT_REQ_add_conf(conf, ctx, section, req));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_CRL_add_conf(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, X509_CRL *crl))
{
	return(X509V3_EXT_CRL_add_conf(conf, ctx, section, crl));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_add_value_bool_nf(REG(a6, __IFACE_OR_BASE), REG(a0, char *name), REG(d0, int asn1_bool), REG(a1, STACK_OF(CONF_VALUE) **extlist))
{
	return(X509V3_add_value_bool_nf(name, asn1_bool, extlist));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_get_value_bool(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_VALUE *value), REG(a1, int *asn1_bool))
{
	return(X509V3_get_value_bool(value, asn1_bool));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_get_value_int(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_VALUE *value), REG(a1, ASN1_INTEGER **aint))
{
	return(X509V3_get_value_int(value, aint));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509V3_set_nconf(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, CONF *conf))
{
	X509V3_set_nconf(ctx, conf);
}

void AMISSL_LIB_ENTRY _AmiSSL_X509V3_set_conf_lhash(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, LHASH *lhash))
{
	X509V3_set_conf_lhash(ctx, lhash);
}

char * AMISSL_LIB_ENTRY _AmiSSL_X509V3_get_string(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, char *name), REG(a2, char *section))
{
	return(X509V3_get_string(ctx, name, section));
}

STACK_OF(CONF_VALUE) * AMISSL_LIB_ENTRY _AmiSSL_X509V3_get_section(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, char *section))
{
	return(X509V3_get_section(ctx, section));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509V3_string_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, char *str))
{
	X509V3_string_free(ctx, str);
}

void AMISSL_LIB_ENTRY _AmiSSL_X509V3_section_free(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, STACK_OF(CONF_VALUE) *section))
{
	X509V3_section_free(ctx, section);
}

void AMISSL_LIB_ENTRY _AmiSSL_X509V3_set_ctx(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, X509 *issuer), REG(a2, X509 *subject), REG(a3, X509_REQ *req), REG(d0, X509_CRL *crl), REG(d1, int flags))
{
	X509V3_set_ctx(ctx, issuer, subject, req, crl, flags);
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_add_value(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(a1, const char *value), REG(a2, STACK_OF(CONF_VALUE) **extlist))
{
	return(X509V3_add_value(name, value, extlist));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_add_value_uchar(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(a1, const unsigned char *value), REG(a2, STACK_OF(CONF_VALUE) **extlist))
{
	return(X509V3_add_value_uchar(name, value, extlist));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_add_value_bool(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(d0, int asn1_bool), REG(a1, STACK_OF(CONF_VALUE) **extlist))
{
	return(X509V3_add_value_bool(name, asn1_bool, extlist));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_add_value_int(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(a1, ASN1_INTEGER *aint), REG(a2, STACK_OF(CONF_VALUE) **extlist))
{
	return(X509V3_add_value_int(name, aint, extlist));
}

char * AMISSL_LIB_ENTRY _AmiSSL_i2s_ASN1_INTEGER(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *meth), REG(a1, ASN1_INTEGER *aint))
{
	return(i2s_ASN1_INTEGER(meth, aint));
}

ASN1_INTEGER * AMISSL_LIB_ENTRY _AmiSSL_s2i_ASN1_INTEGER(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *meth), REG(a1, char *value))
{
	return(s2i_ASN1_INTEGER(meth, value));
}

char * AMISSL_LIB_ENTRY _AmiSSL_i2s_ASN1_ENUMERATED(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *meth), REG(a1, ASN1_ENUMERATED *aint))
{
	return(i2s_ASN1_ENUMERATED(meth, aint));
}

char * AMISSL_LIB_ENTRY _AmiSSL_i2s_ASN1_ENUMERATED_TABLE(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *meth), REG(a1, ASN1_ENUMERATED *aint))
{
	return(i2s_ASN1_ENUMERATED_TABLE(meth, aint));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_add(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *ext))
{
	return(X509V3_EXT_add(ext));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_add_list(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *extlist))
{
	return(X509V3_EXT_add_list(extlist));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_add_alias(REG(a6, __IFACE_OR_BASE), REG(d0, int nid_to), REG(d1, int nid_from))
{
	return(X509V3_EXT_add_alias(nid_to, nid_from));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_cleanup(REG(a6, __IFACE_OR_BASE))
{
	X509V3_EXT_cleanup();
}

X509V3_EXT_METHOD * AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_get(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ext))
{
	return(X509V3_EXT_get(ext));
}

X509V3_EXT_METHOD * AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_get_nid(REG(a6, __IFACE_OR_BASE), REG(d0, int nid))
{
	return(X509V3_EXT_get_nid(nid));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_add_standard_extensions(REG(a6, __IFACE_OR_BASE))
{
	return(X509V3_add_standard_extensions());
}

STACK_OF(CONF_VALUE) * AMISSL_LIB_ENTRY _AmiSSL_X509V3_parse_list(REG(a6, __IFACE_OR_BASE), REG(a0, const char *line))
{
	return(X509V3_parse_list(line));
}

void * AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ext))
{
	return(X509V3_EXT_d2i(ext));
}

void * AMISSL_LIB_ENTRY _AmiSSL_X509V3_get_d2i(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_EXTENSION) *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(X509V3_get_d2i(x, nid, crit, idx));
}

X509_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_i2d(REG(a6, __IFACE_OR_BASE), REG(d0, int ext_nid), REG(d1, int crit), REG(a0, void *ext_struc))
{
	return(X509V3_EXT_i2d(ext_nid, crit, ext_struc));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_add1_i2d(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_EXTENSION) **x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(X509V3_add1_i2d(x, nid, value, crit, flags));
}

char * AMISSL_LIB_ENTRY _AmiSSL_hex_to_string(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *buffer), REG(d0, long len))
{
	return(hex_to_string(buffer, len));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_string_to_hex(REG(a6, __IFACE_OR_BASE), REG(a0, char *str), REG(a1, long *len))
{
	return(string_to_hex(str, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_name_cmp(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(a1, const char *cmp))
{
	return(name_cmp(name, cmp));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_val_prn(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, STACK_OF(CONF_VALUE) *val), REG(d0, int indent), REG(d1, int ml))
{
	X509V3_EXT_val_prn(out, val, indent, ml);
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_EXT_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, X509_EXTENSION *ext), REG(d0, unsigned long flag), REG(d1, int indent))
{
	return(X509V3_EXT_print(out, ext, flag, indent));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509V3_extensions_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, char *title), REG(a2, STACK_OF(X509_EXTENSION) *exts), REG(d0, unsigned long flag), REG(d1, int indent))
{
	return(X509V3_extensions_print(out, title, exts, flag, indent));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_check_purpose(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int id), REG(d1, int ca))
{
	return(X509_check_purpose(x, id, ca));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_supported_extension(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex))
{
	return(X509_supported_extension(ex));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_PURPOSE_set(REG(a6, __IFACE_OR_BASE), REG(a0, int *p), REG(d0, int purpose))
{
	return(X509_PURPOSE_set(p, purpose));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_check_issued(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *issuer), REG(a1, X509 *subject))
{
	return(X509_check_issued(issuer, subject));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_PURPOSE_get_count(REG(a6, __IFACE_OR_BASE))
{
	return(X509_PURPOSE_get_count());
}

X509_PURPOSE * AMISSL_LIB_ENTRY _AmiSSL_X509_PURPOSE_get0(REG(a6, __IFACE_OR_BASE), REG(d0, int idx))
{
	return(X509_PURPOSE_get0(idx));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_PURPOSE_get_by_sname(REG(a6, __IFACE_OR_BASE), REG(a0, char *sname))
{
	return(X509_PURPOSE_get_by_sname(sname));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_PURPOSE_get_by_id(REG(a6, __IFACE_OR_BASE), REG(d0, int id))
{
	return(X509_PURPOSE_get_by_id(id));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_PURPOSE_add(REG(a6, __IFACE_OR_BASE), REG(d0, int id), REG(d1, int trust), REG(d2, int flags), REG(a0, int (*ck)(const X509_PURPOSE *, const X509 *, int)), REG(a1, char *name), REG(a2, char *sname), REG(a3, void *arg))
{
	return(X509_PURPOSE_add(id, trust, flags, ck, name, sname, arg));
}

char * AMISSL_LIB_ENTRY _AmiSSL_X509_PURPOSE_get0_name(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PURPOSE *xp))
{
	return(X509_PURPOSE_get0_name(xp));
}

char * AMISSL_LIB_ENTRY _AmiSSL_X509_PURPOSE_get0_sname(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PURPOSE *xp))
{
	return(X509_PURPOSE_get0_sname(xp));
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_PURPOSE_get_trust(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PURPOSE *xp))
{
	return(X509_PURPOSE_get_trust(xp));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_PURPOSE_cleanup(REG(a6, __IFACE_OR_BASE))
{
	X509_PURPOSE_cleanup();
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_PURPOSE_get_id(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PURPOSE *a))
{
	return(X509_PURPOSE_get_id(a));
}

STACK * AMISSL_LIB_ENTRY _AmiSSL_X509_get1_email(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	return(X509_get1_email(x));
}

STACK * AMISSL_LIB_ENTRY _AmiSSL_X509_REQ_get1_email(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *x))
{
	return(X509_REQ_get1_email(x));
}

void AMISSL_LIB_ENTRY _AmiSSL_X509_email_free(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *sk))
{
	X509_email_free(sk);
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_X509V3_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_X509V3_strings();
}

const char * AMISSL_LIB_ENTRY _AmiSSL_AES_options(REG(a6, __IFACE_OR_BASE))
{
	return(AES_options());
}

int AMISSL_LIB_ENTRY _AmiSSL_AES_set_encrypt_key(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *userKey), REG(d0, const int bits), REG(a1, AES_KEY *key))
{
	return(AES_set_encrypt_key(userKey, bits, key));
}

int AMISSL_LIB_ENTRY _AmiSSL_AES_set_decrypt_key(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *userKey), REG(d0, const int bits), REG(a1, AES_KEY *key))
{
	return(AES_set_decrypt_key(userKey, bits, key));
}

void AMISSL_LIB_ENTRY _AmiSSL_AES_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, const AES_KEY *key))
{
	AES_encrypt(in, out, key);
}

void AMISSL_LIB_ENTRY _AmiSSL_AES_decrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, const AES_KEY *key))
{
	AES_decrypt(in, out, key);
}

void AMISSL_LIB_ENTRY _AmiSSL_AES_ecb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, const AES_KEY *key), REG(d0, const int enc))
{
	AES_ecb_encrypt(in, out, key, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_AES_cbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, const unsigned long length), REG(a2, const AES_KEY *key), REG(a3, unsigned char *ivec), REG(d1, const int enc))
{
	AES_cbc_encrypt(in, out, length, key, ivec, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_AES_cfb128_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, const unsigned long length), REG(a2, const AES_KEY *key), REG(a3, unsigned char *ivec), REG(d1, int *num), REG(d2, const int enc))
{
	AES_cfb128_encrypt(in, out, length, key, ivec, num, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_AES_cfb1_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, const unsigned long length), REG(a2, const AES_KEY *key), REG(a3, unsigned char *ivec), REG(d1, int *num), REG(d2, const int enc))
{
	AES_cfb1_encrypt(in, out, length, key, ivec, num, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_AES_cfb8_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, const unsigned long length), REG(a2, const AES_KEY *key), REG(a3, unsigned char *ivec), REG(d1, int *num), REG(d2, const int enc))
{
	AES_cfb8_encrypt(in, out, length, key, ivec, num, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_AES_cfbr_encrypt_block(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, const int nbits), REG(a2, const AES_KEY *key), REG(a3, unsigned char *ivec), REG(d1, const int enc))
{
	AES_cfbr_encrypt_block(in, out, nbits, key, ivec, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_AES_ofb128_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, const unsigned long length), REG(a2, const AES_KEY *key), REG(a3, unsigned char *ivec), REG(d1, int *num))
{
	AES_ofb128_encrypt(in, out, length, key, ivec, num);
}

void AMISSL_LIB_ENTRY _AmiSSL_AES_ctr128_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, const unsigned long length), REG(a2, const AES_KEY *key), REG(d1, unsigned char ivec[AES_BLOCK_SIZE]), REG(d2, unsigned char ecount_buf[AES_BLOCK_SIZE]), REG(a3, unsigned int *num))
{
	AES_ctr128_encrypt(in, out, length, key, ivec, ecount_buf, num);
}

void AMISSL_LIB_ENTRY _AmiSSL_BF_set_key(REG(a6, __IFACE_OR_BASE), REG(a0, BF_KEY *key), REG(d0, int len), REG(a1, const unsigned char *data))
{
	BF_set_key(key, len, data);
}

void AMISSL_LIB_ENTRY _AmiSSL_BF_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, BF_LONG *data), REG(a1, const BF_KEY *key))
{
	BF_encrypt(data, key);
}

void AMISSL_LIB_ENTRY _AmiSSL_BF_decrypt(REG(a6, __IFACE_OR_BASE), REG(a0, BF_LONG *data), REG(a1, const BF_KEY *key))
{
	BF_decrypt(data, key);
}

void AMISSL_LIB_ENTRY _AmiSSL_BF_ecb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, const BF_KEY *key), REG(d0, int enc))
{
	BF_ecb_encrypt(in, out, key, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_BF_cbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, const BF_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int enc))
{
	BF_cbc_encrypt(in, out, length, schedule, ivec, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_BF_cfb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, const BF_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num), REG(d2, int enc))
{
	BF_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_BF_ofb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, const BF_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num))
{
	BF_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

const char * AMISSL_LIB_ENTRY _AmiSSL_BF_options(REG(a6, __IFACE_OR_BASE))
{
	return(BF_options());
}

void AMISSL_LIB_ENTRY _AmiSSL_CAST_set_key(REG(a6, __IFACE_OR_BASE), REG(a0, CAST_KEY *key), REG(d0, int len), REG(a1, const unsigned char *data))
{
	CAST_set_key(key, len, data);
}

void AMISSL_LIB_ENTRY _AmiSSL_CAST_ecb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, CAST_KEY *key), REG(d0, int enc))
{
	CAST_ecb_encrypt(in, out, key, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_CAST_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, CAST_LONG *data), REG(a1, CAST_KEY *key))
{
	CAST_encrypt(data, key);
}

void AMISSL_LIB_ENTRY _AmiSSL_CAST_decrypt(REG(a6, __IFACE_OR_BASE), REG(a0, CAST_LONG *data), REG(a1, CAST_KEY *key))
{
	CAST_decrypt(data, key);
}

void AMISSL_LIB_ENTRY _AmiSSL_CAST_cbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, CAST_KEY *ks), REG(a3, unsigned char *iv), REG(d1, int enc))
{
	CAST_cbc_encrypt(in, out, length, ks, iv, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_CAST_cfb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, CAST_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num), REG(d2, int enc))
{
	CAST_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_CAST_ofb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, CAST_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num))
{
	CAST_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

int * AMISSL_LIB_ENTRY _AmiSSL__shadow_DES_check_key(REG(a6, __IFACE_OR_BASE))
{
	return(_shadow_DES_check_key());
}

int * AMISSL_LIB_ENTRY _AmiSSL__shadow_DES_rw_mode(REG(a6, __IFACE_OR_BASE))
{
	return(_shadow_DES_rw_mode());
}

const char * AMISSL_LIB_ENTRY _AmiSSL_DES_options(REG(a6, __IFACE_OR_BASE))
{
	return(DES_options());
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_ecb3_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, unsigned char *output), REG(a2, DES_key_schedule *ks1), REG(a3, DES_key_schedule *ks2), REG(d0, DES_key_schedule *ks3), REG(d1, int enc))
{
	DES_ecb3_encrypt(input, output, ks1, ks2, ks3, enc);
}

DES_LONG AMISSL_LIB_ENTRY _AmiSSL_DES_cbc_cksum(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, DES_cblock *output), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, const_DES_cblock *ivec))
{
	return(DES_cbc_cksum(input, output, length, schedule, ivec));
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_cbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, unsigned char *output), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d1, int enc))
{
	DES_cbc_encrypt(input, output, length, schedule, ivec, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_ncbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, unsigned char *output), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d1, int enc))
{
	DES_ncbc_encrypt(input, output, length, schedule, ivec, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_xcbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, unsigned char *output), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d1, const_DES_cblock *inw), REG(d2, const_DES_cblock *outw), REG(d3, int enc))
{
	DES_xcbc_encrypt(input, output, length, schedule, ivec, inw, outw, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_cfb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, int numbits), REG(d1, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d2, int enc))
{
	DES_cfb_encrypt(in, out, numbits, length, schedule, ivec, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_ecb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *input), REG(a1, DES_cblock *output), REG(a2, DES_key_schedule *ks), REG(d0, int enc))
{
	DES_ecb_encrypt(input, output, ks, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_encrypt1(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(a1, DES_key_schedule *ks), REG(d0, int enc))
{
	DES_encrypt1(data, ks, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_encrypt2(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(a1, DES_key_schedule *ks), REG(d0, int enc))
{
	DES_encrypt2(data, ks, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_encrypt3(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(a1, DES_key_schedule *ks1), REG(a2, DES_key_schedule *ks2), REG(a3, DES_key_schedule *ks3))
{
	DES_encrypt3(data, ks1, ks2, ks3);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_decrypt3(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(a1, DES_key_schedule *ks1), REG(a2, DES_key_schedule *ks2), REG(a3, DES_key_schedule *ks3))
{
	DES_decrypt3(data, ks1, ks2, ks3);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_ede3_cbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, unsigned char *output), REG(d0, long length), REG(a2, DES_key_schedule *ks1), REG(a3, DES_key_schedule *ks2), REG(d1, DES_key_schedule *ks3), REG(d2, DES_cblock *ivec), REG(d3, int enc))
{
	DES_ede3_cbc_encrypt(input, output, length, ks1, ks2, ks3, ivec, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_ede3_cbcm_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, DES_key_schedule *ks1), REG(a3, DES_key_schedule *ks2), REG(d1, DES_key_schedule *ks3), REG(d2, DES_cblock *ivec1), REG(d3, DES_cblock *ivec2), REG(d4, int enc))
{
	DES_ede3_cbcm_encrypt(in, out, length, ks1, ks2, ks3, ivec1, ivec2, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_ede3_cfb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, DES_key_schedule *ks1), REG(a3, DES_key_schedule *ks2), REG(d1, DES_key_schedule *ks3), REG(d2, DES_cblock *ivec), REG(d3, int *num), REG(d4, int enc))
{
	DES_ede3_cfb64_encrypt(in, out, length, ks1, ks2, ks3, ivec, num, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_ede3_cfb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, int numbits), REG(d1, long length), REG(a2, DES_key_schedule *ks1), REG(a3, DES_key_schedule *ks2), REG(d2, DES_key_schedule *ks3), REG(d3, DES_cblock *ivec), REG(d4, int enc))
{
	DES_ede3_cfb_encrypt(in, out, numbits, length, ks1, ks2, ks3, ivec, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_ede3_ofb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, DES_key_schedule *ks1), REG(a3, DES_key_schedule *ks2), REG(d1, DES_key_schedule *ks3), REG(d2, DES_cblock *ivec), REG(d3, int *num))
{
	DES_ede3_ofb64_encrypt(in, out, length, ks1, ks2, ks3, ivec, num);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_xwhite_in2out(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *DES_key), REG(a1, const_DES_cblock *in_white), REG(a2, DES_cblock *out_white))
{
	DES_xwhite_in2out(DES_key, in_white, out_white);
}

int AMISSL_LIB_ENTRY _AmiSSL_DES_enc_read(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(a0, void *buf), REG(d1, int len), REG(a1, DES_key_schedule *sched), REG(a2, DES_cblock *iv))
{
	return(DES_enc_read(fd, buf, len, sched, iv));
}

int AMISSL_LIB_ENTRY _AmiSSL_DES_enc_write(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(a0, const void *buf), REG(d1, int len), REG(a1, DES_key_schedule *sched), REG(a2, DES_cblock *iv))
{
	return(DES_enc_write(fd, buf, len, sched, iv));
}

char * AMISSL_LIB_ENTRY _AmiSSL_DES_fcrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const char *buf), REG(a1, const char *salt), REG(a2, char *ret))
{
	return(DES_fcrypt(buf, salt, ret));
}

char * AMISSL_LIB_ENTRY _AmiSSL_DES_crypt(REG(a6, __IFACE_OR_BASE), REG(a0, const char *buf), REG(a1, const char *salt))
{
	return(DES_crypt(buf, salt));
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_ofb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, int numbits), REG(d1, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec))
{
	DES_ofb_encrypt(in, out, numbits, length, schedule, ivec);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_pcbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, unsigned char *output), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d1, int enc))
{
	DES_pcbc_encrypt(input, output, length, schedule, ivec, enc);
}

DES_LONG AMISSL_LIB_ENTRY _AmiSSL_DES_quad_cksum(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, DES_cblock *output), REG(d0, long length), REG(d1, int out_count), REG(a2, DES_cblock *seed))
{
	return(DES_quad_cksum(input, output, length, out_count, seed));
}

int AMISSL_LIB_ENTRY _AmiSSL_DES_random_key(REG(a6, __IFACE_OR_BASE), REG(a0, DES_cblock *ret))
{
	return(DES_random_key(ret));
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_set_odd_parity(REG(a6, __IFACE_OR_BASE), REG(a0, DES_cblock *key))
{
	DES_set_odd_parity(key);
}

int AMISSL_LIB_ENTRY _AmiSSL_DES_check_key_parity(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *key))
{
	return(DES_check_key_parity(key));
}

int AMISSL_LIB_ENTRY _AmiSSL_DES_is_weak_key(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *key))
{
	return(DES_is_weak_key(key));
}

int AMISSL_LIB_ENTRY _AmiSSL_DES_set_key(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *key), REG(a1, DES_key_schedule *schedule))
{
	return(DES_set_key(key, schedule));
}

int AMISSL_LIB_ENTRY _AmiSSL_DES_key_sched(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *key), REG(a1, DES_key_schedule *schedule))
{
	return(DES_key_sched(key, schedule));
}

int AMISSL_LIB_ENTRY _AmiSSL_DES_set_key_checked(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *key), REG(a1, DES_key_schedule *schedule))
{
	return(DES_set_key_checked(key, schedule));
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_set_key_unchecked(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *key), REG(a1, DES_key_schedule *schedule))
{
	DES_set_key_unchecked(key, schedule);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_string_to_key(REG(a6, __IFACE_OR_BASE), REG(a0, const char *str), REG(a1, DES_cblock *key))
{
	DES_string_to_key(str, key);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_string_to_2keys(REG(a6, __IFACE_OR_BASE), REG(a0, const char *str), REG(a1, DES_cblock *key1), REG(a2, DES_cblock *key2))
{
	DES_string_to_2keys(str, key1, key2);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_cfb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d1, int *num), REG(d2, int enc))
{
	DES_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_DES_ofb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d1, int *num))
{
	DES_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

int AMISSL_LIB_ENTRY _AmiSSL_DES_read_password(REG(a6, __IFACE_OR_BASE), REG(a0, DES_cblock *key), REG(a1, const char *prompt), REG(d0, int verify))
{
	return(DES_read_password(key, prompt, verify));
}

int AMISSL_LIB_ENTRY _AmiSSL_DES_read_2passwords(REG(a6, __IFACE_OR_BASE), REG(a0, DES_cblock *key1), REG(a1, DES_cblock *key2), REG(a2, const char *prompt), REG(d0, int verify))
{
	return(DES_read_2passwords(key1, key2, prompt, verify));
}

const char * AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_options(REG(a6, __IFACE_OR_BASE))
{
	return(_ossl_old_des_options());
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_ecb3_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, _ossl_old_des_key_schedule ks1), REG(d1, _ossl_old_des_key_schedule ks2), REG(d2, _ossl_old_des_key_schedule ks3), REG(d3, int enc))
{
	_ossl_old_des_ecb3_encrypt(input, output, ks1, ks2, ks3, enc);
}

DES_LONG AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_cbc_cksum(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec))
{
	return(_ossl_old_des_cbc_cksum(input, output, length, schedule, ivec));
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_cbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(d2, int enc))
{
	_ossl_old_des_cbc_encrypt(input, output, length, schedule, ivec, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_ncbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(d2, int enc))
{
	_ossl_old_des_ncbc_encrypt(input, output, length, schedule, ivec, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_xcbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(a3, _ossl_old_des_cblock *inw), REG(d2, _ossl_old_des_cblock *outw), REG(d3, int enc))
{
	_ossl_old_des_xcbc_encrypt(input, output, length, schedule, ivec, inw, outw, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_cfb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *in), REG(a1, unsigned char *out), REG(d0, int numbits), REG(d1, long length), REG(d2, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(d3, int enc))
{
	_ossl_old_des_cfb_encrypt(in, out, numbits, length, schedule, ivec, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_ecb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, _ossl_old_des_key_schedule ks), REG(d1, int enc))
{
	_ossl_old_des_ecb_encrypt(input, output, ks, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(d0, _ossl_old_des_key_schedule ks), REG(d1, int enc))
{
	_ossl_old_des_encrypt(data, ks, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_encrypt2(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(d0, _ossl_old_des_key_schedule ks), REG(d1, int enc))
{
	_ossl_old_des_encrypt2(data, ks, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_encrypt3(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(d0, _ossl_old_des_key_schedule ks1), REG(d1, _ossl_old_des_key_schedule ks2), REG(d2, _ossl_old_des_key_schedule ks3))
{
	_ossl_old_des_encrypt3(data, ks1, ks2, ks3);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_decrypt3(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(d0, _ossl_old_des_key_schedule ks1), REG(d1, _ossl_old_des_key_schedule ks2), REG(d2, _ossl_old_des_key_schedule ks3))
{
	_ossl_old_des_decrypt3(data, ks1, ks2, ks3);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_ede3_cbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule ks1), REG(d2, _ossl_old_des_key_schedule ks2), REG(d3, _ossl_old_des_key_schedule ks3), REG(a2, _ossl_old_des_cblock *ivec), REG(d4, int enc))
{
	_ossl_old_des_ede3_cbc_encrypt(input, output, length, ks1, ks2, ks3, ivec, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_ede3_cfb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule ks1), REG(d2, _ossl_old_des_key_schedule ks2), REG(d3, _ossl_old_des_key_schedule ks3), REG(a2, _ossl_old_des_cblock *ivec), REG(a3, int *num), REG(d4, int enc))
{
	_ossl_old_des_ede3_cfb64_encrypt(in, out, length, ks1, ks2, ks3, ivec, num, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_ede3_ofb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule ks1), REG(d2, _ossl_old_des_key_schedule ks2), REG(d3, _ossl_old_des_key_schedule ks3), REG(a2, _ossl_old_des_cblock *ivec), REG(a3, int *num))
{
	_ossl_old_des_ede3_ofb64_encrypt(in, out, length, ks1, ks2, ks3, ivec, num);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_xwhite_in2out(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *des_key), REG(a1, _ossl_old_des_cblock *in_white), REG(a2, _ossl_old_des_cblock *out_white))
{
	_ossl_old_des_xwhite_in2out(des_key, in_white, out_white);
}

int AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_enc_read(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(a0, char *buf), REG(d1, int len), REG(d2, _ossl_old_des_key_schedule sched), REG(a1, _ossl_old_des_cblock *iv))
{
	return(_ossl_old_des_enc_read(fd, buf, len, sched, iv));
}

int AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_enc_write(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(a0, char *buf), REG(d1, int len), REG(d2, _ossl_old_des_key_schedule sched), REG(a1, _ossl_old_des_cblock *iv))
{
	return(_ossl_old_des_enc_write(fd, buf, len, sched, iv));
}

char * AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_fcrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const char *buf), REG(a1, const char *salt), REG(a2, char *ret))
{
	return(_ossl_old_des_fcrypt(buf, salt, ret));
}

char * AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_crypt(REG(a6, __IFACE_OR_BASE), REG(a0, const char *buf), REG(a1, const char *salt))
{
	return(_ossl_old_des_crypt(buf, salt));
}

char * AMISSL_LIB_ENTRY _AmiSSL__ossl_old_crypt(REG(a6, __IFACE_OR_BASE), REG(a0, const char *buf), REG(a1, const char *salt))
{
	return(_ossl_old_crypt(buf, salt));
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_ofb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *in), REG(a1, unsigned char *out), REG(d0, int numbits), REG(d1, long length), REG(d2, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec))
{
	_ossl_old_des_ofb_encrypt(in, out, numbits, length, schedule, ivec);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_pcbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(d2, int enc))
{
	_ossl_old_des_pcbc_encrypt(input, output, length, schedule, ivec, enc);
}

DES_LONG AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_quad_cksum(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, int out_count), REG(a2, _ossl_old_des_cblock *seed))
{
	return(_ossl_old_des_quad_cksum(input, output, length, out_count, seed));
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_random_seed(REG(a6, __IFACE_OR_BASE), REG(d0, _ossl_old_des_cblock key))
{
	_ossl_old_des_random_seed(key);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_random_key(REG(a6, __IFACE_OR_BASE), REG(d0, _ossl_old_des_cblock ret))
{
	_ossl_old_des_random_key(ret);
}

int AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_read_password(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *key), REG(a1, const char *prompt), REG(d0, int verify))
{
	return(_ossl_old_des_read_password(key, prompt, verify));
}

int AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_read_2passwords(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *key1), REG(a1, _ossl_old_des_cblock *key2), REG(a2, const char *prompt), REG(d0, int verify))
{
	return(_ossl_old_des_read_2passwords(key1, key2, prompt, verify));
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_set_odd_parity(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *key))
{
	_ossl_old_des_set_odd_parity(key);
}

int AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_is_weak_key(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *key))
{
	return(_ossl_old_des_is_weak_key(key));
}

int AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_set_key(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *key), REG(d0, _ossl_old_des_key_schedule schedule))
{
	return(_ossl_old_des_set_key(key, schedule));
}

int AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_key_sched(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *key), REG(d0, _ossl_old_des_key_schedule schedule))
{
	return(_ossl_old_des_key_sched(key, schedule));
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_string_to_key(REG(a6, __IFACE_OR_BASE), REG(a0, char *str), REG(a1, _ossl_old_des_cblock *key))
{
	_ossl_old_des_string_to_key(str, key);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_string_to_2keys(REG(a6, __IFACE_OR_BASE), REG(a0, char *str), REG(a1, _ossl_old_des_cblock *key1), REG(a2, _ossl_old_des_cblock *key2))
{
	_ossl_old_des_string_to_2keys(str, key1, key2);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_cfb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(a3, int *num), REG(d2, int enc))
{
	_ossl_old_des_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_old_des_ofb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(a3, int *num))
{
	_ossl_old_des_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

void AMISSL_LIB_ENTRY _AmiSSL__ossl_096_des_random_seed(REG(a6, __IFACE_OR_BASE), REG(a0, des_cblock *key))
{
	_ossl_096_des_random_seed(key);
}

const DH_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DH_OpenSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DH_OpenSSL());
}

void AMISSL_LIB_ENTRY _AmiSSL_DH_set_default_method(REG(a6, __IFACE_OR_BASE), REG(a0, const DH_METHOD *meth))
{
	DH_set_default_method(meth);
}

const DH_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DH_get_default_method(REG(a6, __IFACE_OR_BASE))
{
	return(DH_get_default_method());
}

int AMISSL_LIB_ENTRY _AmiSSL_DH_set_method(REG(a6, __IFACE_OR_BASE), REG(a0, DH *dh), REG(a1, const DH_METHOD *meth))
{
	return(DH_set_method(dh, meth));
}

DH * AMISSL_LIB_ENTRY _AmiSSL_DH_new_method(REG(a6, __IFACE_OR_BASE), REG(a0, ENGINE *engine))
{
	return(DH_new_method(engine));
}

DH * AMISSL_LIB_ENTRY _AmiSSL_DH_new(REG(a6, __IFACE_OR_BASE))
{
	return(DH_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_DH_free(REG(a6, __IFACE_OR_BASE), REG(a0, DH *dh))
{
	DH_free(dh);
}

int AMISSL_LIB_ENTRY _AmiSSL_DH_up_ref(REG(a6, __IFACE_OR_BASE), REG(a0, DH *dh))
{
	return(DH_up_ref(dh));
}

int AMISSL_LIB_ENTRY _AmiSSL_DH_size(REG(a6, __IFACE_OR_BASE), REG(a0, const DH *dh))
{
	return(DH_size(dh));
}

int AMISSL_LIB_ENTRY _AmiSSL_DH_get_ex_new_index(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(DH_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int AMISSL_LIB_ENTRY _AmiSSL_DH_set_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, DH *d), REG(d0, int idx), REG(a1, void *arg))
{
	return(DH_set_ex_data(d, idx, arg));
}

void * AMISSL_LIB_ENTRY _AmiSSL_DH_get_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, DH *d), REG(d0, int idx))
{
	return(DH_get_ex_data(d, idx));
}

DH * AMISSL_LIB_ENTRY _AmiSSL_DH_generate_parameters(REG(a6, __IFACE_OR_BASE), REG(d0, int prime_len), REG(d1, int generator), REG(a0, void (*callback)(int, int, void *)), REG(a1, void *cb_arg))
{
	return(DH_generate_parameters(prime_len, generator, callback, cb_arg));
}

int AMISSL_LIB_ENTRY _AmiSSL_DH_check(REG(a6, __IFACE_OR_BASE), REG(a0, const DH *dh), REG(a1, int *codes))
{
	return(DH_check(dh, codes));
}

int AMISSL_LIB_ENTRY _AmiSSL_DH_generate_key(REG(a6, __IFACE_OR_BASE), REG(a0, DH *dh))
{
	return(DH_generate_key(dh));
}

int AMISSL_LIB_ENTRY _AmiSSL_DH_compute_key(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *key), REG(a1, const BIGNUM *pub_key), REG(a2, DH *dh))
{
	return(DH_compute_key(key, pub_key, dh));
}

DH * AMISSL_LIB_ENTRY _AmiSSL_d2i_DHparams(REG(a6, __IFACE_OR_BASE), REG(a0, DH **a), REG(a1, const unsigned char **pp), REG(d0, long length))
{
	return(d2i_DHparams(a, pp, length));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_DHparams(REG(a6, __IFACE_OR_BASE), REG(a0, const DH *a), REG(a1, unsigned char **pp))
{
	return(i2d_DHparams(a, pp));
}

int AMISSL_LIB_ENTRY _AmiSSL_DHparams_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, const DH *x))
{
	return(DHparams_print(bp, x));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_DH_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_DH_strings();
}

DSA_SIG * AMISSL_LIB_ENTRY _AmiSSL_DSA_SIG_new(REG(a6, __IFACE_OR_BASE))
{
	return(DSA_SIG_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_DSA_SIG_free(REG(a6, __IFACE_OR_BASE), REG(a0, DSA_SIG *a))
{
	DSA_SIG_free(a);
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_DSA_SIG(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA_SIG *a), REG(a1, unsigned char **pp))
{
	return(i2d_DSA_SIG(a, pp));
}

DSA_SIG * AMISSL_LIB_ENTRY _AmiSSL_d2i_DSA_SIG(REG(a6, __IFACE_OR_BASE), REG(a0, DSA_SIG **v), REG(a1, const unsigned char **pp), REG(d0, long length))
{
	return(d2i_DSA_SIG(v, pp, length));
}

DSA_SIG * AMISSL_LIB_ENTRY _AmiSSL_DSA_do_sign(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *dgst), REG(d0, int dlen), REG(a1, DSA *dsa))
{
	return(DSA_do_sign(dgst, dlen, dsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSA_do_verify(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *dgst), REG(d0, int dgst_len), REG(a1, DSA_SIG *sig), REG(a2, DSA *dsa))
{
	return(DSA_do_verify(dgst, dgst_len, sig, dsa));
}

const DSA_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DSA_OpenSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSA_OpenSSL());
}

void AMISSL_LIB_ENTRY _AmiSSL_DSA_set_default_method(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA_METHOD *a))
{
	DSA_set_default_method(a);
}

const DSA_METHOD * AMISSL_LIB_ENTRY _AmiSSL_DSA_get_default_method(REG(a6, __IFACE_OR_BASE))
{
	return(DSA_get_default_method());
}

int AMISSL_LIB_ENTRY _AmiSSL_DSA_set_method(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *dsa), REG(a1, const DSA_METHOD *a))
{
	return(DSA_set_method(dsa, a));
}

DSA * AMISSL_LIB_ENTRY _AmiSSL_DSA_new(REG(a6, __IFACE_OR_BASE))
{
	return(DSA_new());
}

DSA * AMISSL_LIB_ENTRY _AmiSSL_DSA_new_method(REG(a6, __IFACE_OR_BASE), REG(a0, ENGINE *engine))
{
	return(DSA_new_method(engine));
}

void AMISSL_LIB_ENTRY _AmiSSL_DSA_free(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *r))
{
	DSA_free(r);
}

int AMISSL_LIB_ENTRY _AmiSSL_DSA_up_ref(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *r))
{
	return(DSA_up_ref(r));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSA_size(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA *a))
{
	return(DSA_size(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSA_sign_setup(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *dsa), REG(a1, BN_CTX *ctx_in), REG(a2, BIGNUM **kinvp), REG(a3, BIGNUM **rp))
{
	return(DSA_sign_setup(dsa, ctx_in, kinvp, rp));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSA_sign(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, const unsigned char *dgst), REG(d1, int dlen), REG(a1, unsigned char *sig), REG(a2, unsigned int *siglen), REG(a3, DSA *dsa))
{
	return(DSA_sign(type, dgst, dlen, sig, siglen, dsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSA_verify(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, const unsigned char *dgst), REG(d1, int dgst_len), REG(a1, const unsigned char *sigbuf), REG(d2, int siglen), REG(a2, DSA *dsa))
{
	return(DSA_verify(type, dgst, dgst_len, sigbuf, siglen, dsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSA_get_ex_new_index(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(DSA_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSA_set_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *d), REG(d0, int idx), REG(a1, void *arg))
{
	return(DSA_set_ex_data(d, idx, arg));
}

void * AMISSL_LIB_ENTRY _AmiSSL_DSA_get_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *d), REG(d0, int idx))
{
	return(DSA_get_ex_data(d, idx));
}

DSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_DSAPublicKey(REG(a6, __IFACE_OR_BASE), REG(a0, DSA **a), REG(a1, const unsigned char **pp), REG(d0, long length))
{
	return(d2i_DSAPublicKey(a, pp, length));
}

DSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_DSAPrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, DSA **a), REG(a1, const unsigned char **pp), REG(d0, long length))
{
	return(d2i_DSAPrivateKey(a, pp, length));
}

DSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_DSAparams(REG(a6, __IFACE_OR_BASE), REG(a0, DSA **a), REG(a1, const unsigned char **pp), REG(d0, long length))
{
	return(d2i_DSAparams(a, pp, length));
}

DSA * AMISSL_LIB_ENTRY _AmiSSL_DSA_generate_parameters(REG(a6, __IFACE_OR_BASE), REG(d0, int bits), REG(a0, unsigned char *seed), REG(d1, int seed_len), REG(a1, int *counter_ret), REG(a2, unsigned long *h_ret), REG(a3, void (*callback)(int, int, void *)), REG(d2, void *cb_arg))
{
	return(DSA_generate_parameters(bits, seed, seed_len, counter_ret, h_ret, callback, cb_arg));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSA_generate_key(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *a))
{
	return(DSA_generate_key(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_DSAPublicKey(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA *a), REG(a1, unsigned char **pp))
{
	return(i2d_DSAPublicKey(a, pp));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_DSAPrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA *a), REG(a1, unsigned char **pp))
{
	return(i2d_DSAPrivateKey(a, pp));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_DSAparams(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA *a), REG(a1, unsigned char **pp))
{
	return(i2d_DSAparams(a, pp));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSAparams_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, const DSA *x))
{
	return(DSAparams_print(bp, x));
}

int AMISSL_LIB_ENTRY _AmiSSL_DSA_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, const DSA *x), REG(d0, int off))
{
	return(DSA_print(bp, x, off));
}

DH * AMISSL_LIB_ENTRY _AmiSSL_DSA_dup_DH(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA *r))
{
	return(DSA_dup_DH(r));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_DSA_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_DSA_strings();
}

const char * AMISSL_LIB_ENTRY _AmiSSL_idea_options(REG(a6, __IFACE_OR_BASE))
{
	return(idea_options());
}

void AMISSL_LIB_ENTRY _AmiSSL_idea_ecb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, IDEA_KEY_SCHEDULE *ks))
{
	idea_ecb_encrypt(in, out, ks);
}

void AMISSL_LIB_ENTRY _AmiSSL_idea_set_encrypt_key(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *key), REG(a1, IDEA_KEY_SCHEDULE *ks))
{
	idea_set_encrypt_key(key, ks);
}

void AMISSL_LIB_ENTRY _AmiSSL_idea_set_decrypt_key(REG(a6, __IFACE_OR_BASE), REG(a0, IDEA_KEY_SCHEDULE *ek), REG(a1, IDEA_KEY_SCHEDULE *dk))
{
	idea_set_decrypt_key(ek, dk);
}

void AMISSL_LIB_ENTRY _AmiSSL_idea_cbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, IDEA_KEY_SCHEDULE *ks), REG(a3, unsigned char *iv), REG(d1, int enc))
{
	idea_cbc_encrypt(in, out, length, ks, iv, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_idea_cfb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, IDEA_KEY_SCHEDULE *ks), REG(a3, unsigned char *iv), REG(d1, int *num), REG(d2, int enc))
{
	idea_cfb64_encrypt(in, out, length, ks, iv, num, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_idea_ofb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, IDEA_KEY_SCHEDULE *ks), REG(a3, unsigned char *iv), REG(d1, int *num))
{
	idea_ofb64_encrypt(in, out, length, ks, iv, num);
}

void AMISSL_LIB_ENTRY _AmiSSL_idea_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long *in), REG(a1, IDEA_KEY_SCHEDULE *ks))
{
	idea_encrypt(in, ks);
}

const char * AMISSL_LIB_ENTRY _AmiSSL_MD2_options(REG(a6, __IFACE_OR_BASE))
{
	return(MD2_options());
}

int AMISSL_LIB_ENTRY _AmiSSL_MD2_Init(REG(a6, __IFACE_OR_BASE), REG(a0, MD2_CTX *c))
{
	return(MD2_Init(c));
}

int AMISSL_LIB_ENTRY _AmiSSL_MD2_Update(REG(a6, __IFACE_OR_BASE), REG(a0, MD2_CTX *c), REG(a1, const unsigned char *data), REG(d0, unsigned long len))
{
	return(MD2_Update(c, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_MD2_Final(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, MD2_CTX *c))
{
	return(MD2_Final(md, c));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_MD2(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(MD2(d, n, md));
}

int AMISSL_LIB_ENTRY _AmiSSL_MD4_Init(REG(a6, __IFACE_OR_BASE), REG(a0, MD4_CTX *c))
{
	return(MD4_Init(c));
}

int AMISSL_LIB_ENTRY _AmiSSL_MD4_Update(REG(a6, __IFACE_OR_BASE), REG(a0, MD4_CTX *c), REG(a1, const void *data), REG(d0, unsigned long len))
{
	return(MD4_Update(c, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_MD4_Final(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, MD4_CTX *c))
{
	return(MD4_Final(md, c));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_MD4(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(MD4(d, n, md));
}

void AMISSL_LIB_ENTRY _AmiSSL_MD4_Transform(REG(a6, __IFACE_OR_BASE), REG(a0, MD4_CTX *c), REG(a1, const unsigned char *b))
{
	MD4_Transform(c, b);
}

int AMISSL_LIB_ENTRY _AmiSSL_MD5_Init(REG(a6, __IFACE_OR_BASE), REG(a0, MD5_CTX *c))
{
	return(MD5_Init(c));
}

int AMISSL_LIB_ENTRY _AmiSSL_MD5_Update(REG(a6, __IFACE_OR_BASE), REG(a0, MD5_CTX *c), REG(a1, const void *data), REG(d0, unsigned long len))
{
	return(MD5_Update(c, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_MD5_Final(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, MD5_CTX *c))
{
	return(MD5_Final(md, c));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_MD5(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(MD5(d, n, md));
}

void AMISSL_LIB_ENTRY _AmiSSL_MD5_Transform(REG(a6, __IFACE_OR_BASE), REG(a0, MD5_CTX *c), REG(a1, const unsigned char *b))
{
	MD5_Transform(c, b);
}

int AMISSL_LIB_ENTRY _AmiSSL_MDC2_Init(REG(a6, __IFACE_OR_BASE), REG(a0, MDC2_CTX *c))
{
	return(MDC2_Init(c));
}

int AMISSL_LIB_ENTRY _AmiSSL_MDC2_Update(REG(a6, __IFACE_OR_BASE), REG(a0, MDC2_CTX *c), REG(a1, const unsigned char *data), REG(d0, unsigned long len))
{
	return(MDC2_Update(c, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_MDC2_Final(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, MDC2_CTX *c))
{
	return(MDC2_Final(md, c));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_MDC2(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(MDC2(d, n, md));
}

void AMISSL_LIB_ENTRY _AmiSSL_RC2_set_key(REG(a6, __IFACE_OR_BASE), REG(a0, RC2_KEY *key), REG(d0, int len), REG(a1, const unsigned char *data), REG(d1, int bits))
{
	RC2_set_key(key, len, data, bits);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC2_ecb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, RC2_KEY *key), REG(d0, int enc))
{
	RC2_ecb_encrypt(in, out, key, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC2_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long *data), REG(a1, RC2_KEY *key))
{
	RC2_encrypt(data, key);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC2_decrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long *data), REG(a1, RC2_KEY *key))
{
	RC2_decrypt(data, key);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC2_cbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, RC2_KEY *ks), REG(a3, unsigned char *iv), REG(d1, int enc))
{
	RC2_cbc_encrypt(in, out, length, ks, iv, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC2_cfb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, RC2_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num), REG(d2, int enc))
{
	RC2_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC2_ofb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, RC2_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num))
{
	RC2_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

const char * AMISSL_LIB_ENTRY _AmiSSL_RC4_options(REG(a6, __IFACE_OR_BASE))
{
	return(RC4_options());
}

void AMISSL_LIB_ENTRY _AmiSSL_RC4_set_key(REG(a6, __IFACE_OR_BASE), REG(a0, RC4_KEY *key), REG(d0, int len), REG(a1, const unsigned char *data))
{
	RC4_set_key(key, len, data);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC4(REG(a6, __IFACE_OR_BASE), REG(a0, RC4_KEY *key), REG(d0, unsigned long len), REG(a1, const unsigned char *indata), REG(a2, unsigned char *outdata))
{
	RC4(key, len, indata, outdata);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC5_32_set_key(REG(a6, __IFACE_OR_BASE), REG(a0, RC5_32_KEY *key), REG(d0, int len), REG(a1, const unsigned char *data), REG(d1, int rounds))
{
	RC5_32_set_key(key, len, data, rounds);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC5_32_ecb_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, RC5_32_KEY *key), REG(d0, int enc))
{
	RC5_32_ecb_encrypt(in, out, key, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC5_32_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long *data), REG(a1, RC5_32_KEY *key))
{
	RC5_32_encrypt(data, key);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC5_32_decrypt(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long *data), REG(a1, RC5_32_KEY *key))
{
	RC5_32_decrypt(data, key);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC5_32_cbc_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, RC5_32_KEY *ks), REG(a3, unsigned char *iv), REG(d1, int enc))
{
	RC5_32_cbc_encrypt(in, out, length, ks, iv, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC5_32_cfb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, RC5_32_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num), REG(d2, int enc))
{
	RC5_32_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

void AMISSL_LIB_ENTRY _AmiSSL_RC5_32_ofb64_encrypt(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, RC5_32_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num))
{
	RC5_32_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

int AMISSL_LIB_ENTRY _AmiSSL_RIPEMD160_Init(REG(a6, __IFACE_OR_BASE), REG(a0, RIPEMD160_CTX *c))
{
	return(RIPEMD160_Init(c));
}

int AMISSL_LIB_ENTRY _AmiSSL_RIPEMD160_Update(REG(a6, __IFACE_OR_BASE), REG(a0, RIPEMD160_CTX *c), REG(a1, const void *data), REG(d0, unsigned long len))
{
	return(RIPEMD160_Update(c, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_RIPEMD160_Final(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, RIPEMD160_CTX *c))
{
	return(RIPEMD160_Final(md, c));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_RIPEMD160(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(RIPEMD160(d, n, md));
}

void AMISSL_LIB_ENTRY _AmiSSL_RIPEMD160_Transform(REG(a6, __IFACE_OR_BASE), REG(a0, RIPEMD160_CTX *c), REG(a1, const unsigned char *b))
{
	RIPEMD160_Transform(c, b);
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_RSA_new(REG(a6, __IFACE_OR_BASE))
{
	return(RSA_new());
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_RSA_new_method(REG(a6, __IFACE_OR_BASE), REG(a0, ENGINE *engine))
{
	return(RSA_new_method(engine));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_size(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *a))
{
	return(RSA_size(a));
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_RSA_generate_key(REG(a6, __IFACE_OR_BASE), REG(d0, int bits), REG(d1, unsigned long e), REG(a0, void (*callback)(int, int, void *)), REG(a1, void *cb_arg))
{
	return(RSA_generate_key(bits, e, callback, cb_arg));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_check_key(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *a))
{
	return(RSA_check_key(a));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_public_encrypt(REG(a6, __IFACE_OR_BASE), REG(d0, int flen), REG(a0, const unsigned char *from), REG(a1, unsigned char *to), REG(a2, RSA *rsa), REG(d1, int padding))
{
	return(RSA_public_encrypt(flen, from, to, rsa, padding));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_private_encrypt(REG(a6, __IFACE_OR_BASE), REG(d0, int flen), REG(a0, const unsigned char *from), REG(a1, unsigned char *to), REG(a2, RSA *rsa), REG(d1, int padding))
{
	return(RSA_private_encrypt(flen, from, to, rsa, padding));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_public_decrypt(REG(a6, __IFACE_OR_BASE), REG(d0, int flen), REG(a0, const unsigned char *from), REG(a1, unsigned char *to), REG(a2, RSA *rsa), REG(d1, int padding))
{
	return(RSA_public_decrypt(flen, from, to, rsa, padding));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_private_decrypt(REG(a6, __IFACE_OR_BASE), REG(d0, int flen), REG(a0, const unsigned char *from), REG(a1, unsigned char *to), REG(a2, RSA *rsa), REG(d1, int padding))
{
	return(RSA_private_decrypt(flen, from, to, rsa, padding));
}

void AMISSL_LIB_ENTRY _AmiSSL_RSA_free(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *r))
{
	RSA_free(r);
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_up_ref(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *r))
{
	return(RSA_up_ref(r));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_flags(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *r))
{
	return(RSA_flags(r));
}

void AMISSL_LIB_ENTRY _AmiSSL_RSA_set_default_method(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA_METHOD *meth))
{
	RSA_set_default_method(meth);
}

const RSA_METHOD * AMISSL_LIB_ENTRY _AmiSSL_RSA_get_default_method(REG(a6, __IFACE_OR_BASE))
{
	return(RSA_get_default_method());
}

const RSA_METHOD * AMISSL_LIB_ENTRY _AmiSSL_RSA_get_method(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *rsa))
{
	return(RSA_get_method(rsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_set_method(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *rsa), REG(a1, const RSA_METHOD *meth))
{
	return(RSA_set_method(rsa, meth));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_memory_lock(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *r))
{
	return(RSA_memory_lock(r));
}

const RSA_METHOD * AMISSL_LIB_ENTRY _AmiSSL_RSA_PKCS1_SSLeay(REG(a6, __IFACE_OR_BASE))
{
	return(RSA_PKCS1_SSLeay());
}

const RSA_METHOD * AMISSL_LIB_ENTRY _AmiSSL_RSA_null_method(REG(a6, __IFACE_OR_BASE))
{
	return(RSA_null_method());
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_RSAPublicKey(REG(a6, __IFACE_OR_BASE), REG(a0, RSA **a), REG(a1, const unsigned char **in), REG(d0, long len))
{
	return(d2i_RSAPublicKey(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_RSAPublicKey(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *a), REG(a1, unsigned char **out))
{
	return(i2d_RSAPublicKey(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_RSAPublicKey_it(REG(a6, __IFACE_OR_BASE))
{
	return(RSAPublicKey_it());
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_RSAPrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, RSA **a), REG(a1, const unsigned char **in), REG(d0, long len))
{
	return(d2i_RSAPrivateKey(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_RSAPrivateKey(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *a), REG(a1, unsigned char **out))
{
	return(i2d_RSAPrivateKey(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_RSAPrivateKey_it(REG(a6, __IFACE_OR_BASE))
{
	return(RSAPrivateKey_it());
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_print(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, const RSA *r), REG(d0, int offset))
{
	return(RSA_print(bp, r, offset));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_RSA_NET(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *a), REG(a1, unsigned char **pp), REG(a2, int (*cb)()), REG(d0, int sgckey))
{
	return(i2d_RSA_NET(a, pp, cb, sgckey));
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_RSA_NET(REG(a6, __IFACE_OR_BASE), REG(a0, RSA **a), REG(a1, const unsigned char **pp), REG(d0, long length), REG(a2, int (*cb)()), REG(d1, int sgckey))
{
	return(d2i_RSA_NET(a, pp, length, cb, sgckey));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_Netscape_RSA(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *a), REG(a1, unsigned char **pp), REG(a2, int (*cb)()))
{
	return(i2d_Netscape_RSA(a, pp, cb));
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_d2i_Netscape_RSA(REG(a6, __IFACE_OR_BASE), REG(a0, RSA **a), REG(a1, const unsigned char **pp), REG(d0, long length), REG(a2, int (*cb)()))
{
	return(d2i_Netscape_RSA(a, pp, length, cb));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_sign(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, const unsigned char *m), REG(d1, unsigned int m_length), REG(a1, unsigned char *sigret), REG(a2, unsigned int *siglen), REG(a3, RSA *rsa))
{
	return(RSA_sign(type, m, m_length, sigret, siglen, rsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_verify(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, const unsigned char *m), REG(d1, unsigned int m_length), REG(a1, unsigned char *sigbuf), REG(d2, unsigned int siglen), REG(a2, RSA *rsa))
{
	return(RSA_verify(type, m, m_length, sigbuf, siglen, rsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_sign_ASN1_OCTET_STRING(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, const unsigned char *m), REG(d1, unsigned int m_length), REG(a1, unsigned char *sigret), REG(a2, unsigned int *siglen), REG(a3, RSA *rsa))
{
	return(RSA_sign_ASN1_OCTET_STRING(type, m, m_length, sigret, siglen, rsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_verify_ASN1_OCTET_STRING(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, const unsigned char *m), REG(d1, unsigned int m_length), REG(a1, unsigned char *sigbuf), REG(d2, unsigned int siglen), REG(a2, RSA *rsa))
{
	return(RSA_verify_ASN1_OCTET_STRING(type, m, m_length, sigbuf, siglen, rsa));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_blinding_on(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *rsa), REG(a1, BN_CTX *ctx))
{
	return(RSA_blinding_on(rsa, ctx));
}

void AMISSL_LIB_ENTRY _AmiSSL_RSA_blinding_off(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *rsa))
{
	RSA_blinding_off(rsa);
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_padding_add_PKCS1_type_1(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl))
{
	return(RSA_padding_add_PKCS1_type_1(to, tlen, f, fl));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_padding_check_PKCS1_type_1(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl), REG(d2, int rsa_len))
{
	return(RSA_padding_check_PKCS1_type_1(to, tlen, f, fl, rsa_len));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_padding_add_PKCS1_type_2(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl))
{
	return(RSA_padding_add_PKCS1_type_2(to, tlen, f, fl));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_padding_check_PKCS1_type_2(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl), REG(d2, int rsa_len))
{
	return(RSA_padding_check_PKCS1_type_2(to, tlen, f, fl, rsa_len));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_padding_add_PKCS1_OAEP(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl), REG(a2, const unsigned char *p), REG(d2, int pl))
{
	return(RSA_padding_add_PKCS1_OAEP(to, tlen, f, fl, p, pl));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_padding_check_PKCS1_OAEP(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl), REG(d2, int rsa_len), REG(a2, const unsigned char *p), REG(d3, int pl))
{
	return(RSA_padding_check_PKCS1_OAEP(to, tlen, f, fl, rsa_len, p, pl));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_padding_add_SSLv23(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl))
{
	return(RSA_padding_add_SSLv23(to, tlen, f, fl));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_padding_check_SSLv23(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl), REG(d2, int rsa_len))
{
	return(RSA_padding_check_SSLv23(to, tlen, f, fl, rsa_len));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_padding_add_none(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl))
{
	return(RSA_padding_add_none(to, tlen, f, fl));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_padding_check_none(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl), REG(d2, int rsa_len))
{
	return(RSA_padding_check_none(to, tlen, f, fl, rsa_len));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_get_ex_new_index(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(RSA_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int AMISSL_LIB_ENTRY _AmiSSL_RSA_set_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *r), REG(d0, int idx), REG(a1, void *arg))
{
	return(RSA_set_ex_data(r, idx, arg));
}

void * AMISSL_LIB_ENTRY _AmiSSL_RSA_get_ex_data(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *r), REG(d0, int idx))
{
	return(RSA_get_ex_data(r, idx));
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_RSAPublicKey_dup(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *rsa))
{
	return(RSAPublicKey_dup(rsa));
}

RSA * AMISSL_LIB_ENTRY _AmiSSL_RSAPrivateKey_dup(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *rsa))
{
	return(RSAPrivateKey_dup(rsa));
}

void AMISSL_LIB_ENTRY _AmiSSL_ERR_load_RSA_strings(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_RSA_strings();
}

int AMISSL_LIB_ENTRY _AmiSSL_SHA_Init(REG(a6, __IFACE_OR_BASE), REG(a0, SHA_CTX *c))
{
	return(SHA_Init(c));
}

int AMISSL_LIB_ENTRY _AmiSSL_SHA_Update(REG(a6, __IFACE_OR_BASE), REG(a0, SHA_CTX *c), REG(a1, const void *data), REG(d0, unsigned long len))
{
	return(SHA_Update(c, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_SHA_Final(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, SHA_CTX *c))
{
	return(SHA_Final(md, c));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_SHA(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(SHA(d, n, md));
}

void AMISSL_LIB_ENTRY _AmiSSL_SHA_Transform(REG(a6, __IFACE_OR_BASE), REG(a0, SHA_CTX *c), REG(a1, const unsigned char *data))
{
	SHA_Transform(c, data);
}

int AMISSL_LIB_ENTRY _AmiSSL_SHA1_Init(REG(a6, __IFACE_OR_BASE), REG(a0, SHA_CTX *c))
{
	return(SHA1_Init(c));
}

int AMISSL_LIB_ENTRY _AmiSSL_SHA1_Update(REG(a6, __IFACE_OR_BASE), REG(a0, SHA_CTX *c), REG(a1, const void *data), REG(d0, unsigned long len))
{
	return(SHA1_Update(c, data, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_SHA1_Final(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, SHA_CTX *c))
{
	return(SHA1_Final(md, c));
}

unsigned char * AMISSL_LIB_ENTRY _AmiSSL_SHA1(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(SHA1(d, n, md));
}

void AMISSL_LIB_ENTRY _AmiSSL_SHA1_Transform(REG(a6, __IFACE_OR_BASE), REG(a0, SHA_CTX *c), REG(a1, const unsigned char *data))
{
	SHA1_Transform(c, data);
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_read_string_lib(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, UI_STRING *uis))
{
	return(UI_read_string_lib(ui, uis));
}

int AMISSL_LIB_ENTRY _AmiSSL_UI_write_string_lib(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, UI_STRING *uis))
{
	return(UI_write_string_lib(ui, uis));
}

void AMISSL_LIB_ENTRY _AmiSSL_HMAC_CTX_set_flags(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx), REG(d0, unsigned long flags))
{
	HMAC_CTX_set_flags(ctx, flags);
}

int AMISSL_LIB_ENTRY _AmiSSL_X509_check_ca(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	return(X509_check_ca(x));
}

PROXY_POLICY * AMISSL_LIB_ENTRY _AmiSSL_PROXY_POLICY_new(REG(a6, __IFACE_OR_BASE))
{
	return(PROXY_POLICY_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PROXY_POLICY_free(REG(a6, __IFACE_OR_BASE), REG(a0, PROXY_POLICY *a))
{
	PROXY_POLICY_free(a);
}

PROXY_POLICY * AMISSL_LIB_ENTRY _AmiSSL_d2i_PROXY_POLICY(REG(a6, __IFACE_OR_BASE), REG(a0, PROXY_POLICY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PROXY_POLICY(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PROXY_POLICY(REG(a6, __IFACE_OR_BASE), REG(a0, PROXY_POLICY *a), REG(a1, unsigned char **out))
{
	return(i2d_PROXY_POLICY(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PROXY_POLICY_it(REG(a6, __IFACE_OR_BASE))
{
	return(PROXY_POLICY_it());
}

PROXY_CERT_INFO_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_PROXY_CERT_INFO_EXTENSION_new(REG(a6, __IFACE_OR_BASE))
{
	return(PROXY_CERT_INFO_EXTENSION_new());
}

void AMISSL_LIB_ENTRY _AmiSSL_PROXY_CERT_INFO_EXTENSION_free(REG(a6, __IFACE_OR_BASE), REG(a0, PROXY_CERT_INFO_EXTENSION *a))
{
	PROXY_CERT_INFO_EXTENSION_free(a);
}

PROXY_CERT_INFO_EXTENSION * AMISSL_LIB_ENTRY _AmiSSL_d2i_PROXY_CERT_INFO_EXTENSION(REG(a6, __IFACE_OR_BASE), REG(a0, PROXY_CERT_INFO_EXTENSION **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PROXY_CERT_INFO_EXTENSION(a, in, len));
}

int AMISSL_LIB_ENTRY _AmiSSL_i2d_PROXY_CERT_INFO_EXTENSION(REG(a6, __IFACE_OR_BASE), REG(a0, PROXY_CERT_INFO_EXTENSION *a), REG(a1, unsigned char **out))
{
	return(i2d_PROXY_CERT_INFO_EXTENSION(a, out));
}

const ASN1_ITEM * AMISSL_LIB_ENTRY _AmiSSL_PROXY_CERT_INFO_EXTENSION_it(REG(a6, __IFACE_OR_BASE))
{
	return(PROXY_CERT_INFO_EXTENSION_it());
}

