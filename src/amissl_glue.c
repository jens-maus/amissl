#include <clib/amissl_protos.h>
#include <internal/compiler.h>

#ifdef __amigaos4__
#define __IFACE_OR_BASE	struct AmiSSLIFace *Self
#else
#define __IFACE_OR_BASE	struct Library *Self
#endif

ASN1_TYPE * ASM SAVEDS ASN1_TYPE_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_TYPE_new());
}

void ASM SAVEDS ASN1_TYPE_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a))
{
	ASN1_TYPE_free(a);
}

ASN1_TYPE * ASM SAVEDS d2i_ASN1_TYPE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_TYPE(a, in, len));
}

int ASM SAVEDS i2d_ASN1_TYPE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_TYPE(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_ANY_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_ANY_it());
}

int ASM SAVEDS ASN1_TYPE_get_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a))
{
	return(ASN1_TYPE_get(a));
}

void ASM SAVEDS ASN1_TYPE_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a), REG(d0, int type), REG(a1, void *value))
{
	ASN1_TYPE_set(a, type, value);
}

ASN1_OBJECT * ASM SAVEDS ASN1_OBJECT_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_OBJECT_new());
}

void ASM SAVEDS ASN1_OBJECT_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OBJECT *a))
{
	ASN1_OBJECT_free(a);
}

int ASM SAVEDS i2d_ASN1_OBJECT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OBJECT *a), REG(a1, unsigned char **pp))
{
	return(i2d_ASN1_OBJECT(a, pp));
}

ASN1_OBJECT * ASM SAVEDS c2i_ASN1_OBJECT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OBJECT **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(c2i_ASN1_OBJECT(a, pp, length));
}

ASN1_OBJECT * ASM SAVEDS d2i_ASN1_OBJECT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OBJECT **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_ASN1_OBJECT(a, pp, length));
}

const ASN1_ITEM * ASM SAVEDS ASN1_OBJECT_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_OBJECT_it());
}

ASN1_STRING * ASM SAVEDS ASN1_STRING_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_STRING_new());
}

void ASM SAVEDS ASN1_STRING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a))
{
	ASN1_STRING_free(a);
}

ASN1_STRING * ASM SAVEDS ASN1_STRING_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a))
{
	return(ASN1_STRING_dup(a));
}

ASN1_STRING * ASM SAVEDS ASN1_STRING_type_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type))
{
	return(ASN1_STRING_type_new(type));
}

int ASM SAVEDS ASN1_STRING_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a), REG(a1, ASN1_STRING *b))
{
	return(ASN1_STRING_cmp(a, b));
}

int ASM SAVEDS ASN1_STRING_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *str), REG(a1, const void *data), REG(d0, int len))
{
	return(ASN1_STRING_set(str, data, len));
}

int ASM SAVEDS ASN1_STRING_length_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *x))
{
	return(ASN1_STRING_length(x));
}

void ASM SAVEDS ASN1_STRING_length_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *x), REG(d0, int n))
{
	ASN1_STRING_length_set(x, n);
}

int ASM SAVEDS ASN1_STRING_type_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *x))
{
	return(ASN1_STRING_type(x));
}

unsigned char * ASM SAVEDS ASN1_STRING_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *x))
{
	return(ASN1_STRING_data(x));
}

ASN1_BIT_STRING * ASM SAVEDS ASN1_BIT_STRING_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_BIT_STRING_new());
}

void ASM SAVEDS ASN1_BIT_STRING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *a))
{
	ASN1_BIT_STRING_free(a);
}

ASN1_BIT_STRING * ASM SAVEDS d2i_ASN1_BIT_STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_BIT_STRING(a, in, len));
}

int ASM SAVEDS i2d_ASN1_BIT_STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_BIT_STRING(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_BIT_STRING_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_BIT_STRING_it());
}

int ASM SAVEDS i2c_ASN1_BIT_STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *a), REG(a1, unsigned char **pp))
{
	return(i2c_ASN1_BIT_STRING(a, pp));
}

ASN1_BIT_STRING * ASM SAVEDS c2i_ASN1_BIT_STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(c2i_ASN1_BIT_STRING(a, pp, length));
}

int ASM SAVEDS ASN1_BIT_STRING_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *a), REG(a1, unsigned char *d), REG(d0, int length))
{
	return(ASN1_BIT_STRING_set(a, d, length));
}

int ASM SAVEDS ASN1_BIT_STRING_set_bit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *a), REG(d0, int n), REG(d1, int value))
{
	return(ASN1_BIT_STRING_set_bit(a, n, value));
}

int ASM SAVEDS ASN1_BIT_STRING_get_bit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *a), REG(d0, int n))
{
	return(ASN1_BIT_STRING_get_bit(a, n));
}

int ASM SAVEDS ASN1_BIT_STRING_name_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, ASN1_BIT_STRING *bs), REG(a2, BIT_STRING_BITNAME *tbl), REG(d0, int indent))
{
	return(ASN1_BIT_STRING_name_print(out, bs, tbl, indent));
}

int ASM SAVEDS ASN1_BIT_STRING_num_asc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *name), REG(a1, BIT_STRING_BITNAME *tbl))
{
	return(ASN1_BIT_STRING_num_asc(name, tbl));
}

int ASM SAVEDS ASN1_BIT_STRING_set_asc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BIT_STRING *bs), REG(a1, char *name), REG(d0, int value), REG(a2, BIT_STRING_BITNAME *tbl))
{
	return(ASN1_BIT_STRING_set_asc(bs, name, value, tbl));
}

int ASM SAVEDS i2d_ASN1_BOOLEAN_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int a), REG(a0, unsigned char **pp))
{
	return(i2d_ASN1_BOOLEAN(a, pp));
}

int ASM SAVEDS d2i_ASN1_BOOLEAN_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int *a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_ASN1_BOOLEAN(a, pp, length));
}

ASN1_INTEGER * ASM SAVEDS ASN1_INTEGER_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_INTEGER_new());
}

void ASM SAVEDS ASN1_INTEGER_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *a))
{
	ASN1_INTEGER_free(a);
}

ASN1_INTEGER * ASM SAVEDS d2i_ASN1_INTEGER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_INTEGER(a, in, len));
}

int ASM SAVEDS i2d_ASN1_INTEGER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_INTEGER(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_INTEGER_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_INTEGER_it());
}

int ASM SAVEDS i2c_ASN1_INTEGER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *a), REG(a1, unsigned char **pp))
{
	return(i2c_ASN1_INTEGER(a, pp));
}

ASN1_INTEGER * ASM SAVEDS c2i_ASN1_INTEGER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(c2i_ASN1_INTEGER(a, pp, length));
}

ASN1_INTEGER * ASM SAVEDS d2i_ASN1_UINTEGER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_ASN1_UINTEGER(a, pp, length));
}

ASN1_INTEGER * ASM SAVEDS ASN1_INTEGER_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *x))
{
	return(ASN1_INTEGER_dup(x));
}

int ASM SAVEDS ASN1_INTEGER_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *x), REG(a1, ASN1_INTEGER *y))
{
	return(ASN1_INTEGER_cmp(x, y));
}

ASN1_ENUMERATED * ASM SAVEDS ASN1_ENUMERATED_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_ENUMERATED_new());
}

void ASM SAVEDS ASN1_ENUMERATED_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_ENUMERATED *a))
{
	ASN1_ENUMERATED_free(a);
}

ASN1_ENUMERATED * ASM SAVEDS d2i_ASN1_ENUMERATED_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_ENUMERATED **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_ENUMERATED(a, in, len));
}

int ASM SAVEDS i2d_ASN1_ENUMERATED_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_ENUMERATED *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_ENUMERATED(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_ENUMERATED_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_ENUMERATED_it());
}

int ASM SAVEDS ASN1_UTCTIME_check_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTCTIME *a))
{
	return(ASN1_UTCTIME_check(a));
}

ASN1_UTCTIME * ASM SAVEDS ASN1_UTCTIME_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTCTIME *s), REG(d0, time_t t))
{
	return(ASN1_UTCTIME_set(s, t));
}

int ASM SAVEDS ASN1_UTCTIME_set_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTCTIME *s), REG(a1, char *str))
{
	return(ASN1_UTCTIME_set_string(s, str));
}

int ASM SAVEDS ASN1_UTCTIME_cmp_time_t_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_UTCTIME *s), REG(d0, time_t t))
{
	return(ASN1_UTCTIME_cmp_time_t(s, t));
}

int ASM SAVEDS ASN1_GENERALIZEDTIME_check_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME *a))
{
	return(ASN1_GENERALIZEDTIME_check(a));
}

ASN1_GENERALIZEDTIME * ASM SAVEDS ASN1_GENERALIZEDTIME_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME *s), REG(d0, time_t t))
{
	return(ASN1_GENERALIZEDTIME_set(s, t));
}

int ASM SAVEDS ASN1_GENERALIZEDTIME_set_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME *s), REG(a1, char *str))
{
	return(ASN1_GENERALIZEDTIME_set_string(s, str));
}

ASN1_OCTET_STRING * ASM SAVEDS ASN1_OCTET_STRING_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_OCTET_STRING_new());
}

void ASM SAVEDS ASN1_OCTET_STRING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING *a))
{
	ASN1_OCTET_STRING_free(a);
}

ASN1_OCTET_STRING * ASM SAVEDS d2i_ASN1_OCTET_STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_OCTET_STRING(a, in, len));
}

int ASM SAVEDS i2d_ASN1_OCTET_STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_OCTET_STRING(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_OCTET_STRING_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_OCTET_STRING_it());
}

ASN1_OCTET_STRING * ASM SAVEDS ASN1_OCTET_STRING_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING *a))
{
	return(ASN1_OCTET_STRING_dup(a));
}

int ASM SAVEDS ASN1_OCTET_STRING_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING *a), REG(a1, ASN1_OCTET_STRING *b))
{
	return(ASN1_OCTET_STRING_cmp(a, b));
}

int ASM SAVEDS ASN1_OCTET_STRING_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING *str), REG(a1, unsigned char *data), REG(d0, int len))
{
	return(ASN1_OCTET_STRING_set(str, data, len));
}

ASN1_VISIBLESTRING * ASM SAVEDS ASN1_VISIBLESTRING_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_VISIBLESTRING_new());
}

void ASM SAVEDS ASN1_VISIBLESTRING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VISIBLESTRING *a))
{
	ASN1_VISIBLESTRING_free(a);
}

ASN1_VISIBLESTRING * ASM SAVEDS d2i_ASN1_VISIBLESTRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VISIBLESTRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_VISIBLESTRING(a, in, len));
}

int ASM SAVEDS i2d_ASN1_VISIBLESTRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VISIBLESTRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_VISIBLESTRING(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_VISIBLESTRING_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_VISIBLESTRING_it());
}

ASN1_UNIVERSALSTRING * ASM SAVEDS ASN1_UNIVERSALSTRING_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_UNIVERSALSTRING_new());
}

void ASM SAVEDS ASN1_UNIVERSALSTRING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UNIVERSALSTRING *a))
{
	ASN1_UNIVERSALSTRING_free(a);
}

ASN1_UNIVERSALSTRING * ASM SAVEDS d2i_ASN1_UNIVERSALSTRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UNIVERSALSTRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_UNIVERSALSTRING(a, in, len));
}

int ASM SAVEDS i2d_ASN1_UNIVERSALSTRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UNIVERSALSTRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_UNIVERSALSTRING(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_UNIVERSALSTRING_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_UNIVERSALSTRING_it());
}

ASN1_UTF8STRING * ASM SAVEDS ASN1_UTF8STRING_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_UTF8STRING_new());
}

void ASM SAVEDS ASN1_UTF8STRING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTF8STRING *a))
{
	ASN1_UTF8STRING_free(a);
}

ASN1_UTF8STRING * ASM SAVEDS d2i_ASN1_UTF8STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTF8STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_UTF8STRING(a, in, len));
}

int ASM SAVEDS i2d_ASN1_UTF8STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTF8STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_UTF8STRING(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_UTF8STRING_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_UTF8STRING_it());
}

ASN1_NULL * ASM SAVEDS ASN1_NULL_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_NULL_new());
}

void ASM SAVEDS ASN1_NULL_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_NULL *a))
{
	ASN1_NULL_free(a);
}

ASN1_NULL * ASM SAVEDS d2i_ASN1_NULL_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_NULL **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_NULL(a, in, len));
}

int ASM SAVEDS i2d_ASN1_NULL_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_NULL *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_NULL(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_NULL_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_NULL_it());
}

ASN1_BMPSTRING * ASM SAVEDS ASN1_BMPSTRING_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_BMPSTRING_new());
}

void ASM SAVEDS ASN1_BMPSTRING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BMPSTRING *a))
{
	ASN1_BMPSTRING_free(a);
}

ASN1_BMPSTRING * ASM SAVEDS d2i_ASN1_BMPSTRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BMPSTRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_BMPSTRING(a, in, len));
}

int ASM SAVEDS i2d_ASN1_BMPSTRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_BMPSTRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_BMPSTRING(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_BMPSTRING_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_BMPSTRING_it());
}

int ASM SAVEDS UTF8_getc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *str), REG(d0, int len), REG(a1, unsigned long *val))
{
	return(UTF8_getc(str, len, val));
}

int ASM SAVEDS UTF8_putc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *str), REG(d0, int len), REG(d1, unsigned long value))
{
	return(UTF8_putc(str, len, value));
}

ASN1_STRING * ASM SAVEDS ASN1_PRINTABLE_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_PRINTABLE_new());
}

void ASM SAVEDS ASN1_PRINTABLE_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a))
{
	ASN1_PRINTABLE_free(a);
}

ASN1_STRING * ASM SAVEDS d2i_ASN1_PRINTABLE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_PRINTABLE(a, in, len));
}

int ASM SAVEDS i2d_ASN1_PRINTABLE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_PRINTABLE(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_PRINTABLE_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_PRINTABLE_it());
}

ASN1_STRING * ASM SAVEDS DIRECTORYSTRING_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DIRECTORYSTRING_new());
}

void ASM SAVEDS DIRECTORYSTRING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a))
{
	DIRECTORYSTRING_free(a);
}

ASN1_STRING * ASM SAVEDS d2i_DIRECTORYSTRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_DIRECTORYSTRING(a, in, len));
}

int ASM SAVEDS i2d_DIRECTORYSTRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_DIRECTORYSTRING(a, out));
}

const ASN1_ITEM * ASM SAVEDS DIRECTORYSTRING_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DIRECTORYSTRING_it());
}

ASN1_STRING * ASM SAVEDS DISPLAYTEXT_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DISPLAYTEXT_new());
}

void ASM SAVEDS DISPLAYTEXT_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a))
{
	DISPLAYTEXT_free(a);
}

ASN1_STRING * ASM SAVEDS d2i_DISPLAYTEXT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_DISPLAYTEXT(a, in, len));
}

int ASM SAVEDS i2d_DISPLAYTEXT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_DISPLAYTEXT(a, out));
}

const ASN1_ITEM * ASM SAVEDS DISPLAYTEXT_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DISPLAYTEXT_it());
}

ASN1_PRINTABLESTRING * ASM SAVEDS ASN1_PRINTABLESTRING_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_PRINTABLESTRING_new());
}

void ASM SAVEDS ASN1_PRINTABLESTRING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_PRINTABLESTRING *a))
{
	ASN1_PRINTABLESTRING_free(a);
}

ASN1_PRINTABLESTRING * ASM SAVEDS d2i_ASN1_PRINTABLESTRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_PRINTABLESTRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_PRINTABLESTRING(a, in, len));
}

int ASM SAVEDS i2d_ASN1_PRINTABLESTRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_PRINTABLESTRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_PRINTABLESTRING(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_PRINTABLESTRING_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_PRINTABLESTRING_it());
}

ASN1_T61STRING * ASM SAVEDS ASN1_T61STRING_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_T61STRING_new());
}

void ASM SAVEDS ASN1_T61STRING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_T61STRING *a))
{
	ASN1_T61STRING_free(a);
}

ASN1_T61STRING * ASM SAVEDS d2i_ASN1_T61STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_T61STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_T61STRING(a, in, len));
}

int ASM SAVEDS i2d_ASN1_T61STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_T61STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_T61STRING(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_T61STRING_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_T61STRING_it());
}

ASN1_IA5STRING * ASM SAVEDS ASN1_IA5STRING_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_IA5STRING_new());
}

void ASM SAVEDS ASN1_IA5STRING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_IA5STRING *a))
{
	ASN1_IA5STRING_free(a);
}

ASN1_IA5STRING * ASM SAVEDS d2i_ASN1_IA5STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_IA5STRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_IA5STRING(a, in, len));
}

int ASM SAVEDS i2d_ASN1_IA5STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_IA5STRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_IA5STRING(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_IA5STRING_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_IA5STRING_it());
}

ASN1_GENERALSTRING * ASM SAVEDS ASN1_GENERALSTRING_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_GENERALSTRING_new());
}

void ASM SAVEDS ASN1_GENERALSTRING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALSTRING *a))
{
	ASN1_GENERALSTRING_free(a);
}

ASN1_GENERALSTRING * ASM SAVEDS d2i_ASN1_GENERALSTRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALSTRING **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_GENERALSTRING(a, in, len));
}

int ASM SAVEDS i2d_ASN1_GENERALSTRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALSTRING *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_GENERALSTRING(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_GENERALSTRING_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_GENERALSTRING_it());
}

ASN1_UTCTIME * ASM SAVEDS ASN1_UTCTIME_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_UTCTIME_new());
}

void ASM SAVEDS ASN1_UTCTIME_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTCTIME *a))
{
	ASN1_UTCTIME_free(a);
}

ASN1_UTCTIME * ASM SAVEDS d2i_ASN1_UTCTIME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTCTIME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_UTCTIME(a, in, len));
}

int ASM SAVEDS i2d_ASN1_UTCTIME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UTCTIME *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_UTCTIME(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_UTCTIME_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_UTCTIME_it());
}

ASN1_GENERALIZEDTIME * ASM SAVEDS ASN1_GENERALIZEDTIME_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_GENERALIZEDTIME_new());
}

void ASM SAVEDS ASN1_GENERALIZEDTIME_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME *a))
{
	ASN1_GENERALIZEDTIME_free(a);
}

ASN1_GENERALIZEDTIME * ASM SAVEDS d2i_ASN1_GENERALIZEDTIME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_GENERALIZEDTIME(a, in, len));
}

int ASM SAVEDS i2d_ASN1_GENERALIZEDTIME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_GENERALIZEDTIME(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_GENERALIZEDTIME_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_GENERALIZEDTIME_it());
}

ASN1_TIME * ASM SAVEDS ASN1_TIME_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_TIME_new());
}

void ASM SAVEDS ASN1_TIME_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *a))
{
	ASN1_TIME_free(a);
}

ASN1_TIME * ASM SAVEDS d2i_ASN1_TIME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ASN1_TIME(a, in, len));
}

int ASM SAVEDS i2d_ASN1_TIME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *a), REG(a1, unsigned char **out))
{
	return(i2d_ASN1_TIME(a, out));
}

const ASN1_ITEM * ASM SAVEDS ASN1_TIME_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_TIME_it());
}

ASN1_TIME * ASM SAVEDS ASN1_TIME_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *s), REG(d0, time_t t))
{
	return(ASN1_TIME_set(s, t));
}

int ASM SAVEDS ASN1_TIME_check_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *t))
{
	return(ASN1_TIME_check(t));
}

ASN1_GENERALIZEDTIME * ASM SAVEDS ASN1_TIME_to_generalizedtime_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *t), REG(a1, ASN1_GENERALIZEDTIME **out))
{
	return(ASN1_TIME_to_generalizedtime(t, out));
}

int ASM SAVEDS i2d_ASN1_SET_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *a), REG(a1, unsigned char **pp), REG(a2, int (*func)()), REG(d0, int ex_tag), REG(d1, int ex_class), REG(d2, int is_set))
{
	return(i2d_ASN1_SET(a, pp, func, ex_tag, ex_class, is_set));
}

STACK * ASM SAVEDS d2i_ASN1_SET_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK **a), REG(a1, unsigned char **pp), REG(d0, long length), REG(a2, char *(*func)()), REG(a3, void (*free_func)(void *)), REG(d1, int ex_tag), REG(d2, int ex_class))
{
	return(d2i_ASN1_SET(a, pp, length, func, free_func, ex_tag, ex_class));
}

int ASM SAVEDS i2a_ASN1_INTEGER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_INTEGER *a))
{
	return(i2a_ASN1_INTEGER(bp, a));
}

int ASM SAVEDS a2i_ASN1_INTEGER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_INTEGER *bs), REG(a2, char *buf), REG(d0, int size))
{
	return(a2i_ASN1_INTEGER(bp, bs, buf, size));
}

int ASM SAVEDS i2a_ASN1_ENUMERATED_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_ENUMERATED *a))
{
	return(i2a_ASN1_ENUMERATED(bp, a));
}

int ASM SAVEDS a2i_ASN1_ENUMERATED_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_ENUMERATED *bs), REG(a2, char *buf), REG(d0, int size))
{
	return(a2i_ASN1_ENUMERATED(bp, bs, buf, size));
}

int ASM SAVEDS i2a_ASN1_OBJECT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_OBJECT *a))
{
	return(i2a_ASN1_OBJECT(bp, a));
}

int ASM SAVEDS a2i_ASN1_STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_STRING *bs), REG(a2, char *buf), REG(d0, int size))
{
	return(a2i_ASN1_STRING(bp, bs, buf, size));
}

int ASM SAVEDS i2a_ASN1_STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_STRING *a), REG(d0, int type))
{
	return(i2a_ASN1_STRING(bp, a, type));
}

int ASM SAVEDS i2t_ASN1_OBJECT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int buf_len), REG(a1, ASN1_OBJECT *a))
{
	return(i2t_ASN1_OBJECT(buf, buf_len, a));
}

int ASM SAVEDS a2d_ASN1_OBJECT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *out), REG(d0, int olen), REG(a1, const char *buf), REG(d1, int num))
{
	return(a2d_ASN1_OBJECT(out, olen, buf, num));
}

ASN1_OBJECT * ASM SAVEDS ASN1_OBJECT_create_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int nid), REG(a0, unsigned char *data), REG(d1, int len), REG(a1, const char *sn), REG(a2, const char *ln))
{
	return(ASN1_OBJECT_create(nid, data, len, sn, ln));
}

int ASM SAVEDS ASN1_INTEGER_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *a), REG(d0, long v))
{
	return(ASN1_INTEGER_set(a, v));
}

long ASM SAVEDS ASN1_INTEGER_get_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *a))
{
	return(ASN1_INTEGER_get(a));
}

ASN1_INTEGER * ASM SAVEDS BN_to_ASN1_INTEGER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *bn), REG(a1, ASN1_INTEGER *ai))
{
	return(BN_to_ASN1_INTEGER(bn, ai));
}

BIGNUM * ASM SAVEDS ASN1_INTEGER_to_BN_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_INTEGER *ai), REG(a1, BIGNUM *bn))
{
	return(ASN1_INTEGER_to_BN(ai, bn));
}

int ASM SAVEDS ASN1_ENUMERATED_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_ENUMERATED *a), REG(d0, long v))
{
	return(ASN1_ENUMERATED_set(a, v));
}

long ASM SAVEDS ASN1_ENUMERATED_get_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_ENUMERATED *a))
{
	return(ASN1_ENUMERATED_get(a));
}

ASN1_ENUMERATED * ASM SAVEDS BN_to_ASN1_ENUMERATED_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *bn), REG(a1, ASN1_ENUMERATED *ai))
{
	return(BN_to_ASN1_ENUMERATED(bn, ai));
}

BIGNUM * ASM SAVEDS ASN1_ENUMERATED_to_BN_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_ENUMERATED *ai), REG(a1, BIGNUM *bn))
{
	return(ASN1_ENUMERATED_to_BN(ai, bn));
}

int ASM SAVEDS ASN1_PRINTABLE_type_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *s), REG(d0, int max))
{
	return(ASN1_PRINTABLE_type(s, max));
}

int ASM SAVEDS i2d_ASN1_bytes_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *a), REG(a1, unsigned char **pp), REG(d0, int tag), REG(d1, int xclass))
{
	return(i2d_ASN1_bytes(a, pp, tag, xclass));
}

ASN1_STRING * ASM SAVEDS d2i_ASN1_bytes_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **a), REG(a1, unsigned char **pp), REG(d0, long length), REG(d1, int Ptag), REG(d2, int Pclass))
{
	return(d2i_ASN1_bytes(a, pp, length, Ptag, Pclass));
}

unsigned long ASM SAVEDS ASN1_tag2bit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int tag))
{
	return(ASN1_tag2bit(tag));
}

ASN1_STRING * ASM SAVEDS d2i_ASN1_type_bytes_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **a), REG(a1, unsigned char **pp), REG(d0, long length), REG(d1, int type))
{
	return(d2i_ASN1_type_bytes(a, pp, length, type));
}

int ASM SAVEDS asn1_Finish_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_CTX *c))
{
	return(asn1_Finish(c));
}

int ASM SAVEDS ASN1_get_object_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char **pp), REG(a1, long *plength), REG(a2, int *ptag), REG(a3, int *pclass), REG(d0, long omax))
{
	return(ASN1_get_object(pp, plength, ptag, pclass, omax));
}

int ASM SAVEDS ASN1_check_infinite_end_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char **p), REG(d0, long len))
{
	return(ASN1_check_infinite_end(p, len));
}

void ASM SAVEDS ASN1_put_object_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char **pp), REG(d0, int constructed), REG(d1, int length), REG(d2, int tag), REG(d3, int xclass))
{
	ASN1_put_object(pp, constructed, length, tag, xclass);
}

int ASM SAVEDS ASN1_object_size_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int constructed), REG(d1, int length), REG(d2, int tag))
{
	return(ASN1_object_size(constructed, length, tag));
}

char * ASM SAVEDS ASN1_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int (*i2d)()), REG(a1, char *(*d2i)()), REG(a2, char *x))
{
	return(ASN1_dup(i2d, d2i, x));
}

void * ASM SAVEDS ASN1_item_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it), REG(a1, void *x))
{
	return(ASN1_item_dup(it, x));
}

int ASM SAVEDS ASN1_STRING_to_UTF8_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char **out), REG(a1, ASN1_STRING *in))
{
	return(ASN1_STRING_to_UTF8(out, in));
}

char * ASM SAVEDS ASN1_d2i_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *(*xnew)()), REG(a1, char *(*d2i)()), REG(a2, BIO *bp), REG(a3, unsigned char **x))
{
	return(ASN1_d2i_bio(xnew, d2i, bp, x));
}

void * ASM SAVEDS ASN1_item_d2i_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it), REG(a1, BIO *in), REG(a2, void *x))
{
	return(ASN1_item_d2i_bio(it, in, x));
}

int ASM SAVEDS ASN1_i2d_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int (*i2d)()), REG(a1, BIO *out), REG(a2, unsigned char *x))
{
	return(ASN1_i2d_bio(i2d, out, x));
}

int ASM SAVEDS ASN1_item_i2d_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it), REG(a1, BIO *out), REG(a2, void *x))
{
	return(ASN1_item_i2d_bio(it, out, x));
}

int ASM SAVEDS ASN1_UTCTIME_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *fp), REG(a1, ASN1_UTCTIME *a))
{
	return(ASN1_UTCTIME_print(fp, a));
}

int ASM SAVEDS ASN1_GENERALIZEDTIME_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *fp), REG(a1, ASN1_GENERALIZEDTIME *a))
{
	return(ASN1_GENERALIZEDTIME_print(fp, a));
}

int ASM SAVEDS ASN1_TIME_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *fp), REG(a1, ASN1_TIME *a))
{
	return(ASN1_TIME_print(fp, a));
}

int ASM SAVEDS ASN1_STRING_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ASN1_STRING *v))
{
	return(ASN1_STRING_print(bp, v));
}

int ASM SAVEDS ASN1_STRING_print_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, ASN1_STRING *str), REG(d0, unsigned long flags))
{
	return(ASN1_STRING_print_ex(out, str, flags));
}

int ASM SAVEDS ASN1_parse_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, unsigned char *pp), REG(d0, long len), REG(d1, int indent))
{
	return(ASN1_parse(bp, pp, len, indent));
}

int ASM SAVEDS ASN1_parse_dump_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, unsigned char *pp), REG(d0, long len), REG(d1, int indent), REG(d2, int dump))
{
	return(ASN1_parse_dump(bp, pp, len, indent, dump));
}

const char * ASM SAVEDS ASN1_tag2str_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int tag))
{
	return(ASN1_tag2str(tag));
}

int ASM SAVEDS i2d_ASN1_HEADER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_HEADER *a), REG(a1, unsigned char **pp))
{
	return(i2d_ASN1_HEADER(a, pp));
}

ASN1_HEADER * ASM SAVEDS d2i_ASN1_HEADER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_HEADER **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_ASN1_HEADER(a, pp, length));
}

ASN1_HEADER * ASM SAVEDS ASN1_HEADER_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_HEADER_new());
}

void ASM SAVEDS ASN1_HEADER_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_HEADER *a))
{
	ASN1_HEADER_free(a);
}

int ASM SAVEDS ASN1_UNIVERSALSTRING_to_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_UNIVERSALSTRING *s))
{
	return(ASN1_UNIVERSALSTRING_to_string(s));
}

ASN1_METHOD * ASM SAVEDS X509_asn1_meth_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_asn1_meth());
}

ASN1_METHOD * ASM SAVEDS RSAPrivateKey_asn1_meth_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(RSAPrivateKey_asn1_meth());
}

ASN1_METHOD * ASM SAVEDS ASN1_IA5STRING_asn1_meth_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_IA5STRING_asn1_meth());
}

ASN1_METHOD * ASM SAVEDS ASN1_BIT_STRING_asn1_meth_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_BIT_STRING_asn1_meth());
}

int ASM SAVEDS ASN1_TYPE_set_octetstring_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a), REG(a1, unsigned char *data), REG(d0, int len))
{
	return(ASN1_TYPE_set_octetstring(a, data, len));
}

int ASM SAVEDS ASN1_TYPE_get_octetstring_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a), REG(a1, unsigned char *data), REG(d0, int max_len))
{
	return(ASN1_TYPE_get_octetstring(a, data, max_len));
}

int ASM SAVEDS ASN1_TYPE_set_int_octetstring_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a), REG(d0, long num), REG(a1, unsigned char *data), REG(d1, int len))
{
	return(ASN1_TYPE_set_int_octetstring(a, num, data, len));
}

int ASM SAVEDS ASN1_TYPE_get_int_octetstring_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TYPE *a), REG(a1, long *num), REG(a2, unsigned char *data), REG(d0, int max_len))
{
	return(ASN1_TYPE_get_int_octetstring(a, num, data, max_len));
}

STACK * ASM SAVEDS ASN1_seq_unpack_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *buf), REG(d0, int len), REG(a1, char *(*d2i)()), REG(a2, void (*free_func)(void *)))
{
	return(ASN1_seq_unpack(buf, len, d2i, free_func));
}

unsigned char * ASM SAVEDS ASN1_seq_pack_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *safes), REG(a1, int (*i2d)()), REG(a2, unsigned char **buf), REG(a3, int *len))
{
	return(ASN1_seq_pack(safes, i2d, buf, len));
}

void * ASM SAVEDS ASN1_unpack_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *oct), REG(a1, char *(*d2i)()))
{
	return(ASN1_unpack_string(oct, d2i));
}

void * ASM SAVEDS ASN1_item_unpack_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *oct), REG(a1, const ASN1_ITEM *it))
{
	return(ASN1_item_unpack(oct, it));
}

ASN1_STRING * ASM SAVEDS ASN1_pack_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *obj), REG(a1, int (*i2d)()), REG(a2, ASN1_OCTET_STRING **oct))
{
	return(ASN1_pack_string(obj, i2d, oct));
}

ASN1_STRING * ASM SAVEDS ASN1_item_pack_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *obj), REG(a1, const ASN1_ITEM *it), REG(a2, ASN1_OCTET_STRING **oct))
{
	return(ASN1_item_pack(obj, it, oct));
}

void ASM SAVEDS ASN1_STRING_set_default_mask_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long mask))
{
	ASN1_STRING_set_default_mask(mask);
}

int ASM SAVEDS ASN1_STRING_set_default_mask_asc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *p))
{
	return(ASN1_STRING_set_default_mask_asc(p));
}

unsigned long ASM SAVEDS ASN1_STRING_get_default_mask_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_STRING_get_default_mask());
}

int ASM SAVEDS ASN1_mbstring_copy_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **out), REG(a1, const unsigned char *in), REG(d0, int len), REG(d1, int inform), REG(d2, unsigned long mask))
{
	return(ASN1_mbstring_copy(out, in, len, inform, mask));
}

int ASM SAVEDS ASN1_mbstring_ncopy_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **out), REG(a1, const unsigned char *in), REG(d0, int len), REG(d1, int inform), REG(d2, unsigned long mask), REG(d3, long minsize), REG(d4, long maxsize))
{
	return(ASN1_mbstring_ncopy(out, in, len, inform, mask, minsize, maxsize));
}

ASN1_STRING * ASM SAVEDS ASN1_STRING_set_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING **out), REG(a1, const unsigned char *in), REG(d0, int inlen), REG(d1, int inform), REG(d2, int nid))
{
	return(ASN1_STRING_set_by_NID(out, in, inlen, inform, nid));
}

ASN1_STRING_TABLE * ASM SAVEDS ASN1_STRING_TABLE_get_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int nid))
{
	return(ASN1_STRING_TABLE_get(nid));
}

int ASM SAVEDS ASN1_STRING_TABLE_add_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int a), REG(d1, long b), REG(d2, long c), REG(d3, unsigned long d), REG(d4, unsigned long e))
{
	return(ASN1_STRING_TABLE_add(a, b, c, d, e));
}

void ASM SAVEDS ASN1_STRING_TABLE_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ASN1_STRING_TABLE_cleanup();
}

ASN1_VALUE * ASM SAVEDS ASN1_item_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it))
{
	return(ASN1_item_new(it));
}

void ASM SAVEDS ASN1_item_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE *val), REG(a1, const ASN1_ITEM *it))
{
	ASN1_item_free(val, it);
}

ASN1_VALUE * ASM SAVEDS ASN1_item_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **val), REG(a1, unsigned char **in), REG(d0, long len), REG(a2, const ASN1_ITEM *it))
{
	return(ASN1_item_d2i(val, in, len, it));
}

int ASM SAVEDS ASN1_item_i2d_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE *val), REG(a1, unsigned char **out), REG(a2, const ASN1_ITEM *it))
{
	return(ASN1_item_i2d(val, out, it));
}

void ASM SAVEDS ASN1_add_oid_module_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ASN1_add_oid_module();
}

void ASM SAVEDS ERR_load_ASN1_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_ASN1_strings();
}

int ASM SAVEDS asn1_GetSequence_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_CTX *c), REG(a1, long *length))
{
	return(asn1_GetSequence(c, length));
}

void ASM SAVEDS asn1_add_error_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *address), REG(d0, int offset))
{
	asn1_add_error(address, offset);
}

const ASN1_ITEM * ASM SAVEDS ASN1_BOOLEAN_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_BOOLEAN_it());
}

const ASN1_ITEM * ASM SAVEDS ASN1_TBOOLEAN_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_TBOOLEAN_it());
}

const ASN1_ITEM * ASM SAVEDS ASN1_FBOOLEAN_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_FBOOLEAN_it());
}

const ASN1_ITEM * ASM SAVEDS ASN1_SEQUENCE_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ASN1_SEQUENCE_it());
}

const ASN1_ITEM * ASM SAVEDS CBIGNUM_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CBIGNUM_it());
}

const ASN1_ITEM * ASM SAVEDS BIGNUM_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIGNUM_it());
}

const ASN1_ITEM * ASM SAVEDS LONG_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(LONG_it());
}

const ASN1_ITEM * ASM SAVEDS ZLONG_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ZLONG_it());
}

int ASM SAVEDS ASN1_item_ex_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	return(ASN1_item_ex_new(pval, it));
}

void ASM SAVEDS ASN1_item_ex_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	ASN1_item_ex_free(pval, it);
}

int ASM SAVEDS ASN1_template_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_TEMPLATE *tt))
{
	return(ASN1_template_new(pval, tt));
}

int ASM SAVEDS ASN1_primitive_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	return(ASN1_primitive_new(pval, it));
}

void ASM SAVEDS ASN1_template_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_TEMPLATE *tt))
{
	ASN1_template_free(pval, tt);
}

int ASM SAVEDS ASN1_template_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char **in), REG(d0, long len), REG(a2, const ASN1_TEMPLATE *tt))
{
	return(ASN1_template_d2i(pval, in, len, tt));
}

int ASM SAVEDS ASN1_item_ex_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char **in), REG(d0, long len), REG(a2, const ASN1_ITEM *it), REG(d1, int tag), REG(d2, int aclass), REG(d3, char opt), REG(a3, ASN1_TLC *ctx))
{
	return(ASN1_item_ex_d2i(pval, in, len, it, tag, aclass, opt, ctx));
}

int ASM SAVEDS ASN1_item_ex_i2d_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char **out), REG(a2, const ASN1_ITEM *it), REG(d0, int tag), REG(d1, int aclass))
{
	return(ASN1_item_ex_i2d(pval, out, it, tag, aclass));
}

int ASM SAVEDS ASN1_template_i2d_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char **out), REG(a2, const ASN1_TEMPLATE *tt))
{
	return(ASN1_template_i2d(pval, out, tt));
}

void ASM SAVEDS ASN1_primitive_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	ASN1_primitive_free(pval, it);
}

int ASM SAVEDS asn1_ex_i2c_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char *cont), REG(a2, int *putype), REG(a3, const ASN1_ITEM *it))
{
	return(asn1_ex_i2c(pval, cont, putype, it));
}

int ASM SAVEDS asn1_ex_c2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char *cont), REG(d0, int len), REG(d1, int utype), REG(a2, char *free_cont), REG(a3, const ASN1_ITEM *it))
{
	return(asn1_ex_c2i(pval, cont, len, utype, free_cont, it));
}

int ASM SAVEDS asn1_get_choice_selector_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	return(asn1_get_choice_selector(pval, it));
}

int ASM SAVEDS asn1_set_choice_selector_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(d0, int value), REG(a1, const ASN1_ITEM *it))
{
	return(asn1_set_choice_selector(pval, value, it));
}

ASN1_VALUE ** ASM SAVEDS asn1_get_field_ptr_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_TEMPLATE *tt))
{
	return(asn1_get_field_ptr(pval, tt));
}

const ASN1_TEMPLATE * ASM SAVEDS asn1_do_adb_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_TEMPLATE *tt), REG(d0, int nullerr))
{
	return(asn1_do_adb(pval, tt, nullerr));
}

int ASM SAVEDS asn1_do_lock_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(d0, int op), REG(a1, const ASN1_ITEM *it))
{
	return(asn1_do_lock(pval, op, it));
}

void ASM SAVEDS asn1_enc_init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	asn1_enc_init(pval, it);
}

void ASM SAVEDS asn1_enc_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, const ASN1_ITEM *it))
{
	asn1_enc_free(pval, it);
}

int ASM SAVEDS asn1_enc_restore_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int *len), REG(a1, unsigned char **out), REG(a2, ASN1_VALUE **pval), REG(a3, const ASN1_ITEM *it))
{
	return(asn1_enc_restore(len, out, pval, it));
}

int ASM SAVEDS asn1_enc_save_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_VALUE **pval), REG(a1, unsigned char *in), REG(d0, int inlen), REG(a2, const ASN1_ITEM *it))
{
	return(asn1_enc_save(pval, in, inlen, it));
}

size_t ASM SAVEDS BIO_ctrl_pending_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_ctrl_pending(b));
}

size_t ASM SAVEDS BIO_ctrl_wpending_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_ctrl_wpending(b));
}

size_t ASM SAVEDS BIO_ctrl_get_write_guarantee_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_ctrl_get_write_guarantee(b));
}

size_t ASM SAVEDS BIO_ctrl_get_read_request_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_ctrl_get_read_request(b));
}

int ASM SAVEDS BIO_ctrl_reset_read_request_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_ctrl_reset_read_request(b));
}

int ASM SAVEDS BIO_set_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(d0, int idx), REG(a1, void *data))
{
	return(BIO_set_ex_data(bio, idx, data));
}

void * ASM SAVEDS BIO_get_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(d0, int idx))
{
	return(BIO_get_ex_data(bio, idx));
}

int ASM SAVEDS BIO_get_ex_new_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(BIO_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

unsigned long ASM SAVEDS BIO_number_read_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio))
{
	return(BIO_number_read(bio));
}

unsigned long ASM SAVEDS BIO_number_written_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio))
{
	return(BIO_number_written(bio));
}

BIO_METHOD * ASM SAVEDS BIO_s_file_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_file());
}

BIO * ASM SAVEDS BIO_new_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *filename), REG(a1, const char *mode))
{
	return(BIO_new_file(filename, mode));
}

BIO * ASM SAVEDS BIO_new_fp_amiga_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, BPTR stream), REG(d1, int close_flag))
{
	return(BIO_new_fp_amiga(stream, close_flag));
}

BIO * ASM SAVEDS BIO_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO_METHOD *type))
{
	return(BIO_new(type));
}

int ASM SAVEDS BIO_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *a), REG(a1, BIO_METHOD *type))
{
	return(BIO_set(a, type));
}

int ASM SAVEDS BIO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *a))
{
	return(BIO_free(a));
}

void ASM SAVEDS BIO_vfree_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *a))
{
	BIO_vfree(a);
}

int ASM SAVEDS BIO_read_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, void *data), REG(d0, int len))
{
	return(BIO_read(b, data, len));
}

int ASM SAVEDS BIO_gets_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, char *buf), REG(d0, int size))
{
	return(BIO_gets(bp, buf, size));
}

int ASM SAVEDS BIO_write_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, const void *data), REG(d0, int len))
{
	return(BIO_write(b, data, len));
}

int ASM SAVEDS BIO_puts_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, const char *buf))
{
	return(BIO_puts(bp, buf));
}

int ASM SAVEDS BIO_indent_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(d0, int indent), REG(d1, int max))
{
	return(BIO_indent(b, indent, max));
}

long ASM SAVEDS BIO_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(d0, int cmd), REG(d1, long larg), REG(a1, void *parg))
{
	return(BIO_ctrl(bp, cmd, larg, parg));
}

long ASM SAVEDS BIO_callback_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(d0, int cmd), REG(a1, void (*fp)(struct bio_st *, int, const char *, int, long, long)))
{
	return(BIO_callback_ctrl(b, cmd, fp));
}

char * ASM SAVEDS BIO_ptr_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(d0, int cmd), REG(d1, long larg))
{
	return(BIO_ptr_ctrl(bp, cmd, larg));
}

long ASM SAVEDS BIO_int_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(d0, int cmd), REG(d1, long larg), REG(d2, int iarg))
{
	return(BIO_int_ctrl(bp, cmd, larg, iarg));
}

BIO * ASM SAVEDS BIO_push_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, BIO *append))
{
	return(BIO_push(b, append));
}

BIO * ASM SAVEDS BIO_pop_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_pop(b));
}

void ASM SAVEDS BIO_free_all_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *a))
{
	BIO_free_all(a);
}

BIO * ASM SAVEDS BIO_find_type_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(d0, int bio_type))
{
	return(BIO_find_type(b, bio_type));
}

BIO * ASM SAVEDS BIO_next_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	return(BIO_next(b));
}

BIO * ASM SAVEDS BIO_get_retry_BIO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, int *reason))
{
	return(BIO_get_retry_BIO(bio, reason));
}

int ASM SAVEDS BIO_get_retry_reason_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio))
{
	return(BIO_get_retry_reason(bio));
}

BIO * ASM SAVEDS BIO_dup_chain_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *in))
{
	return(BIO_dup_chain(in));
}

int ASM SAVEDS BIO_nread0_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, char **buf))
{
	return(BIO_nread0(bio, buf));
}

int ASM SAVEDS BIO_nread_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, char **buf), REG(d0, int num))
{
	return(BIO_nread(bio, buf, num));
}

int ASM SAVEDS BIO_nwrite0_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, char **buf))
{
	return(BIO_nwrite0(bio, buf));
}

int ASM SAVEDS BIO_nwrite_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, char **buf), REG(d0, int num))
{
	return(BIO_nwrite(bio, buf, num));
}

long ASM SAVEDS BIO_debug_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(d0, int cmd), REG(a1, const char *argp), REG(d1, int argi), REG(d2, long argl), REG(d3, long ret))
{
	return(BIO_debug_callback(bio, cmd, argp, argi, argl, ret));
}

BIO_METHOD * ASM SAVEDS BIO_s_mem_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_mem());
}

BIO * ASM SAVEDS BIO_new_mem_buf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *buf), REG(d0, int len))
{
	return(BIO_new_mem_buf(buf, len));
}

BIO_METHOD * ASM SAVEDS BIO_s_socket_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_socket());
}

BIO_METHOD * ASM SAVEDS BIO_s_connect_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_connect());
}

BIO_METHOD * ASM SAVEDS BIO_s_accept_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_accept());
}

BIO_METHOD * ASM SAVEDS BIO_s_fd_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_fd());
}

BIO_METHOD * ASM SAVEDS BIO_s_log_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_log());
}

BIO_METHOD * ASM SAVEDS BIO_s_bio_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_bio());
}

BIO_METHOD * ASM SAVEDS BIO_s_null_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_s_null());
}

BIO_METHOD * ASM SAVEDS BIO_f_null_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_null());
}

BIO_METHOD * ASM SAVEDS BIO_f_buffer_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_buffer());
}

BIO_METHOD * ASM SAVEDS BIO_f_nbio_test_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_nbio_test());
}

int ASM SAVEDS BIO_sock_should_retry_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int i))
{
	return(BIO_sock_should_retry(i));
}

int ASM SAVEDS BIO_sock_non_fatal_error_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int error))
{
	return(BIO_sock_non_fatal_error(error));
}

int ASM SAVEDS BIO_fd_should_retry_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int i))
{
	return(BIO_fd_should_retry(i));
}

int ASM SAVEDS BIO_fd_non_fatal_error_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int error))
{
	return(BIO_fd_non_fatal_error(error));
}

int ASM SAVEDS BIO_dump_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, const char *bytes), REG(d0, int len))
{
	return(BIO_dump(b, bytes, len));
}

int ASM SAVEDS BIO_dump_indent_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, const char *bytes), REG(d0, int len), REG(d1, int indent))
{
	return(BIO_dump_indent(b, bytes, len, indent));
}

struct hostent * ASM SAVEDS BIO_gethostbyname_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name))
{
	return(BIO_gethostbyname(name));
}

int ASM SAVEDS BIO_sock_error_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int sock))
{
	return(BIO_sock_error(sock));
}

int ASM SAVEDS BIO_socket_ioctl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(d1, long type), REG(a0, void *arg))
{
	return(BIO_socket_ioctl(fd, type, arg));
}

int ASM SAVEDS BIO_socket_nbio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(d1, int mode))
{
	return(BIO_socket_nbio(fd, mode));
}

int ASM SAVEDS BIO_get_port_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *str), REG(a1, unsigned short *port_ptr))
{
	return(BIO_get_port(str, port_ptr));
}

int ASM SAVEDS BIO_get_host_ip_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *str), REG(a1, unsigned char *ip))
{
	return(BIO_get_host_ip(str, ip));
}

int ASM SAVEDS BIO_get_accept_socket_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *host_port), REG(d0, int mode))
{
	return(BIO_get_accept_socket(host_port, mode));
}

int ASM SAVEDS BIO_accept_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int sock), REG(a0, char **ip_port))
{
	return(BIO_accept(sock, ip_port));
}

int ASM SAVEDS BIO_sock_init_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_sock_init());
}

void ASM SAVEDS BIO_sock_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	BIO_sock_cleanup();
}

int ASM SAVEDS BIO_set_tcp_ndelay_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int sock), REG(d1, int turn_on))
{
	return(BIO_set_tcp_ndelay(sock, turn_on));
}

BIO * ASM SAVEDS BIO_new_socket_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int sock), REG(d1, int close_flag))
{
	return(BIO_new_socket(sock, close_flag));
}

BIO * ASM SAVEDS BIO_new_fd_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(d1, int close_flag))
{
	return(BIO_new_fd(fd, close_flag));
}

BIO * ASM SAVEDS BIO_new_connect_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *host_port))
{
	return(BIO_new_connect(host_port));
}

BIO * ASM SAVEDS BIO_new_accept_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *host_port))
{
	return(BIO_new_accept(host_port));
}

int ASM SAVEDS BIO_new_bio_pair_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO **bio1), REG(d0, size_t writebuf1), REG(a1, BIO **bio2), REG(d1, size_t writebuf2))
{
	return(BIO_new_bio_pair(bio1, writebuf1, bio2, writebuf2));
}

void ASM SAVEDS BIO_copy_next_retry_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b))
{
	BIO_copy_next_retry(b);
}

int ASM SAVEDS BIO_vprintf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, const char *format), REG(d0, va_list args))
{
	return(BIO_vprintf(bio, format, args));
}

int ASM SAVEDS BIO_vsnprintf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, size_t n), REG(a1, const char *format), REG(d1, va_list args))
{
	return(BIO_vsnprintf(buf, n, format, args));
}

void ASM SAVEDS ERR_load_BIO_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_BIO_strings();
}

const BIGNUM * ASM SAVEDS BN_value_one_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BN_value_one());
}

char * ASM SAVEDS BN_options_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BN_options());
}

BN_CTX * ASM SAVEDS BN_CTX_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BN_CTX_new());
}

void ASM SAVEDS BN_CTX_init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_CTX *c))
{
	BN_CTX_init(c);
}

void ASM SAVEDS BN_CTX_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_CTX *c))
{
	BN_CTX_free(c);
}

void ASM SAVEDS BN_CTX_start_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_CTX *ctx))
{
	BN_CTX_start(ctx);
}

BIGNUM * ASM SAVEDS BN_CTX_get_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_CTX *ctx))
{
	return(BN_CTX_get(ctx));
}

void ASM SAVEDS BN_CTX_end_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_CTX *ctx))
{
	BN_CTX_end(ctx);
}

int ASM SAVEDS BN_rand_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *rnd), REG(d0, int bits), REG(d1, int top), REG(d2, int bottom))
{
	return(BN_rand(rnd, bits, top, bottom));
}

int ASM SAVEDS BN_pseudo_rand_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *rnd), REG(d0, int bits), REG(d1, int top), REG(d2, int bottom))
{
	return(BN_pseudo_rand(rnd, bits, top, bottom));
}

int ASM SAVEDS BN_rand_range_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *rnd), REG(a1, BIGNUM *range))
{
	return(BN_rand_range(rnd, range));
}

int ASM SAVEDS BN_pseudo_rand_range_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *rnd), REG(a1, BIGNUM *range))
{
	return(BN_pseudo_rand_range(rnd, range));
}

int ASM SAVEDS BN_num_bits_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a))
{
	return(BN_num_bits(a));
}

int ASM SAVEDS BN_num_bits_word_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, BN_ULONG a))
{
	return(BN_num_bits_word(a));
}

BIGNUM * ASM SAVEDS BN_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BN_new());
}

void ASM SAVEDS BN_init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a))
{
	BN_init(a);
}

void ASM SAVEDS BN_clear_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a))
{
	BN_clear_free(a);
}

BIGNUM * ASM SAVEDS BN_copy_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(a1, const BIGNUM *b))
{
	return(BN_copy(a, b));
}

void ASM SAVEDS BN_swap_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(a1, BIGNUM *b))
{
	BN_swap(a, b);
}

BIGNUM * ASM SAVEDS BN_bin2bn_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *s), REG(d0, int len), REG(a1, BIGNUM *ret))
{
	return(BN_bin2bn(s, len, ret));
}

int ASM SAVEDS BN_bn2bin_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(a1, unsigned char *to))
{
	return(BN_bn2bin(a, to));
}

BIGNUM * ASM SAVEDS BN_mpi2bn_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *s), REG(d0, int len), REG(a1, BIGNUM *ret))
{
	return(BN_mpi2bn(s, len, ret));
}

int ASM SAVEDS BN_bn2mpi_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(a1, unsigned char *to))
{
	return(BN_bn2mpi(a, to));
}

int ASM SAVEDS BN_sub_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b))
{
	return(BN_sub(r, a, b));
}

int ASM SAVEDS BN_usub_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b))
{
	return(BN_usub(r, a, b));
}

int ASM SAVEDS BN_uadd_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b))
{
	return(BN_uadd(r, a, b));
}

int ASM SAVEDS BN_add_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b))
{
	return(BN_add(r, a, b));
}

int ASM SAVEDS BN_mul_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, BN_CTX *ctx))
{
	return(BN_mul(r, a, b, ctx));
}

int ASM SAVEDS BN_sqr_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, BN_CTX *ctx))
{
	return(BN_sqr(r, a, ctx));
}

int ASM SAVEDS BN_div_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *dv), REG(a1, BIGNUM *rem), REG(a2, const BIGNUM *m), REG(a3, const BIGNUM *d), REG(d0, BN_CTX *ctx))
{
	return(BN_div(dv, rem, m, d, ctx));
}

int ASM SAVEDS BN_nnmod_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *m), REG(a2, const BIGNUM *d), REG(a3, BN_CTX *ctx))
{
	return(BN_nnmod(r, m, d, ctx));
}

int ASM SAVEDS BN_mod_add_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_add(r, a, b, m, ctx));
}

int ASM SAVEDS BN_mod_add_quick_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, const BIGNUM *m))
{
	return(BN_mod_add_quick(r, a, b, m));
}

int ASM SAVEDS BN_mod_sub_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_sub(r, a, b, m, ctx));
}

int ASM SAVEDS BN_mod_sub_quick_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, const BIGNUM *m))
{
	return(BN_mod_sub_quick(r, a, b, m));
}

int ASM SAVEDS BN_mod_mul_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_mul(r, a, b, m, ctx));
}

int ASM SAVEDS BN_mod_sqr_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *m), REG(a3, BN_CTX *ctx))
{
	return(BN_mod_sqr(r, a, m, ctx));
}

int ASM SAVEDS BN_mod_lshift1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *m), REG(a3, BN_CTX *ctx))
{
	return(BN_mod_lshift1(r, a, m, ctx));
}

int ASM SAVEDS BN_mod_lshift1_quick_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *m))
{
	return(BN_mod_lshift1_quick(r, a, m));
}

int ASM SAVEDS BN_mod_lshift_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(d0, int n), REG(a2, const BIGNUM *m), REG(a3, BN_CTX *ctx))
{
	return(BN_mod_lshift(r, a, n, m, ctx));
}

int ASM SAVEDS BN_mod_lshift_quick_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(d0, int n), REG(a2, const BIGNUM *m))
{
	return(BN_mod_lshift_quick(r, a, n, m));
}

BN_ULONG ASM SAVEDS BN_mod_word_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(d0, BN_ULONG w))
{
	return(BN_mod_word(a, w));
}

BN_ULONG ASM SAVEDS BN_div_word_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, BN_ULONG w))
{
	return(BN_div_word(a, w));
}

int ASM SAVEDS BN_mul_word_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, BN_ULONG w))
{
	return(BN_mul_word(a, w));
}

int ASM SAVEDS BN_add_word_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, BN_ULONG w))
{
	return(BN_add_word(a, w));
}

int ASM SAVEDS BN_sub_word_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, BN_ULONG w))
{
	return(BN_sub_word(a, w));
}

int ASM SAVEDS BN_set_word_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, BN_ULONG w))
{
	return(BN_set_word(a, w));
}

BN_ULONG ASM SAVEDS BN_get_word_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a))
{
	return(BN_get_word(a));
}

int ASM SAVEDS BN_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(a1, const BIGNUM *b))
{
	return(BN_cmp(a, b));
}

void ASM SAVEDS BN_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a))
{
	BN_free(a);
}

int ASM SAVEDS BN_is_bit_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(d0, int n))
{
	return(BN_is_bit_set(a, n));
}

int ASM SAVEDS BN_lshift_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(d0, int n))
{
	return(BN_lshift(r, a, n));
}

int ASM SAVEDS BN_lshift1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a))
{
	return(BN_lshift1(r, a));
}

int ASM SAVEDS BN_exp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *p), REG(a3, BN_CTX *ctx))
{
	return(BN_exp(r, a, p, ctx));
}

int ASM SAVEDS BN_mod_exp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *p), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_exp(r, a, p, m, ctx));
}

int ASM SAVEDS BN_mod_exp_mont_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *p), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx), REG(d1, BN_MONT_CTX *m_ctx))
{
	return(BN_mod_exp_mont(r, a, p, m, ctx, m_ctx));
}

int ASM SAVEDS BN_mod_exp_mont_word_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(d0, BN_ULONG a), REG(a1, const BIGNUM *p), REG(a2, const BIGNUM *m), REG(a3, BN_CTX *ctx), REG(d1, BN_MONT_CTX *m_ctx))
{
	return(BN_mod_exp_mont_word(r, a, p, m, ctx, m_ctx));
}

int ASM SAVEDS BN_mod_exp2_mont_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a1), REG(a2, const BIGNUM *p1), REG(a3, const BIGNUM *a2), REG(d0, const BIGNUM *p2), REG(d1, const BIGNUM *m), REG(d2, BN_CTX *ctx), REG(d3, BN_MONT_CTX *m_ctx))
{
	return(BN_mod_exp2_mont(r, a1, p1, a2, p2, m, ctx, m_ctx));
}

int ASM SAVEDS BN_mod_exp_simple_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *p), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_exp_simple(r, a, p, m, ctx));
}

int ASM SAVEDS BN_mask_bits_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, int n))
{
	return(BN_mask_bits(a, n));
}

int ASM SAVEDS BN_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *fp), REG(a1, const BIGNUM *a))
{
	return(BN_print(fp, a));
}

int ASM SAVEDS BN_reciprocal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *m), REG(d0, int len), REG(a2, BN_CTX *ctx))
{
	return(BN_reciprocal(r, m, len, ctx));
}

int ASM SAVEDS BN_rshift_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(d0, int n))
{
	return(BN_rshift(r, a, n));
}

int ASM SAVEDS BN_rshift1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a))
{
	return(BN_rshift1(r, a));
}

void ASM SAVEDS BN_clear_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a))
{
	BN_clear(a);
}

BIGNUM * ASM SAVEDS BN_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a))
{
	return(BN_dup(a));
}

int ASM SAVEDS BN_ucmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(a1, const BIGNUM *b))
{
	return(BN_ucmp(a, b));
}

int ASM SAVEDS BN_set_bit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, int n))
{
	return(BN_set_bit(a, n));
}

int ASM SAVEDS BN_clear_bit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, int n))
{
	return(BN_clear_bit(a, n));
}

char * ASM SAVEDS BN_bn2hex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a))
{
	return(BN_bn2hex(a));
}

char * ASM SAVEDS BN_bn2dec_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a))
{
	return(BN_bn2dec(a));
}

int ASM SAVEDS BN_hex2bn_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM **a), REG(a1, const char *str))
{
	return(BN_hex2bn(a, str));
}

int ASM SAVEDS BN_dec2bn_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM **a), REG(a1, const char *str))
{
	return(BN_dec2bn(a, str));
}

int ASM SAVEDS BN_gcd_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, BN_CTX *ctx))
{
	return(BN_gcd(r, a, b, ctx));
}

int ASM SAVEDS BN_kronecker_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(a1, const BIGNUM *b), REG(a2, BN_CTX *ctx))
{
	return(BN_kronecker(a, b, ctx));
}

BIGNUM * ASM SAVEDS BN_mod_inverse_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *ret), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *n), REG(a3, BN_CTX *ctx))
{
	return(BN_mod_inverse(ret, a, n, ctx));
}

BIGNUM * ASM SAVEDS BN_mod_sqrt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *ret), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *n), REG(a3, BN_CTX *ctx))
{
	return(BN_mod_sqrt(ret, a, n, ctx));
}

BIGNUM * ASM SAVEDS BN_generate_prime_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *ret), REG(d0, int bits), REG(d1, int safe), REG(a1, const BIGNUM *add), REG(a2, const BIGNUM *rem), REG(a3, void (*callback)(int, int, void *)), REG(d2, void *cb_arg))
{
	return(BN_generate_prime(ret, bits, safe, add, rem, callback, cb_arg));
}

int ASM SAVEDS BN_is_prime_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *p), REG(d0, int nchecks), REG(a1, void (*callback)(int, int, void *)), REG(a2, BN_CTX *ctx), REG(a3, void *cb_arg))
{
	return(BN_is_prime(p, nchecks, callback, ctx, cb_arg));
}

int ASM SAVEDS BN_is_prime_fasttest_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *p), REG(d0, int nchecks), REG(a1, void (*callback)(int, int, void *)), REG(a2, BN_CTX *ctx), REG(a3, void *cb_arg), REG(d1, int do_trial_division))
{
	return(BN_is_prime_fasttest(p, nchecks, callback, ctx, cb_arg, do_trial_division));
}

BN_MONT_CTX * ASM SAVEDS BN_MONT_CTX_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BN_MONT_CTX_new());
}

void ASM SAVEDS BN_MONT_CTX_init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_MONT_CTX *ctx))
{
	BN_MONT_CTX_init(ctx);
}

int ASM SAVEDS BN_mod_mul_montgomery_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, BN_MONT_CTX *mont), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_mul_montgomery(r, a, b, mont, ctx));
}

int ASM SAVEDS BN_from_montgomery_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, BN_MONT_CTX *mont), REG(a3, BN_CTX *ctx))
{
	return(BN_from_montgomery(r, a, mont, ctx));
}

void ASM SAVEDS BN_MONT_CTX_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_MONT_CTX *mont))
{
	BN_MONT_CTX_free(mont);
}

int ASM SAVEDS BN_MONT_CTX_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_MONT_CTX *mont), REG(a1, const BIGNUM *mod), REG(a2, BN_CTX *ctx))
{
	return(BN_MONT_CTX_set(mont, mod, ctx));
}

BN_MONT_CTX * ASM SAVEDS BN_MONT_CTX_copy_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_MONT_CTX *to), REG(a1, BN_MONT_CTX *from))
{
	return(BN_MONT_CTX_copy(to, from));
}

BN_BLINDING * ASM SAVEDS BN_BLINDING_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *A), REG(a1, BIGNUM *Ai), REG(a2, BIGNUM *mod))
{
	return(BN_BLINDING_new(A, Ai, mod));
}

void ASM SAVEDS BN_BLINDING_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_BLINDING *b))
{
	BN_BLINDING_free(b);
}

int ASM SAVEDS BN_BLINDING_update_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_BLINDING *b), REG(a1, BN_CTX *ctx))
{
	return(BN_BLINDING_update(b, ctx));
}

int ASM SAVEDS BN_BLINDING_convert_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *n), REG(a1, BN_BLINDING *r), REG(a2, BN_CTX *ctx))
{
	return(BN_BLINDING_convert(n, r, ctx));
}

int ASM SAVEDS BN_BLINDING_invert_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *n), REG(a1, BN_BLINDING *b), REG(a2, BN_CTX *ctx))
{
	return(BN_BLINDING_invert(n, b, ctx));
}

void ASM SAVEDS BN_set_params_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int mul), REG(d1, int high), REG(d2, int low), REG(d3, int mont))
{
	BN_set_params(mul, high, low, mont);
}

int ASM SAVEDS BN_get_params_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int which))
{
	return(BN_get_params(which));
}

void ASM SAVEDS BN_RECP_CTX_init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_RECP_CTX *recp))
{
	BN_RECP_CTX_init(recp);
}

BN_RECP_CTX * ASM SAVEDS BN_RECP_CTX_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BN_RECP_CTX_new());
}

void ASM SAVEDS BN_RECP_CTX_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_RECP_CTX *recp))
{
	BN_RECP_CTX_free(recp);
}

int ASM SAVEDS BN_RECP_CTX_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_RECP_CTX *recp), REG(a1, const BIGNUM *rdiv), REG(a2, BN_CTX *ctx))
{
	return(BN_RECP_CTX_set(recp, rdiv, ctx));
}

int ASM SAVEDS BN_mod_mul_reciprocal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *x), REG(a2, const BIGNUM *y), REG(a3, BN_RECP_CTX *recp), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_mul_reciprocal(r, x, y, recp, ctx));
}

int ASM SAVEDS BN_mod_exp_recp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *r), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *p), REG(a3, const BIGNUM *m), REG(d0, BN_CTX *ctx))
{
	return(BN_mod_exp_recp(r, a, p, m, ctx));
}

int ASM SAVEDS BN_div_recp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *dv), REG(a1, BIGNUM *rem), REG(a2, const BIGNUM *m), REG(a3, BN_RECP_CTX *recp), REG(d0, BN_CTX *ctx))
{
	return(BN_div_recp(dv, rem, m, recp, ctx));
}

BIGNUM * ASM SAVEDS bn_expand2_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *a), REG(d0, int words))
{
	return(bn_expand2(a, words));
}

BIGNUM * ASM SAVEDS bn_dup_expand_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *a), REG(d0, int words))
{
	return(bn_dup_expand(a, words));
}

BN_ULONG ASM SAVEDS bn_mul_add_words_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_ULONG *rp), REG(a1, const BN_ULONG *ap), REG(d0, int num), REG(d1, BN_ULONG w))
{
	return(bn_mul_add_words(rp, ap, num, w));
}

BN_ULONG ASM SAVEDS bn_mul_words_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_ULONG *rp), REG(a1, const BN_ULONG *ap), REG(d0, int num), REG(d1, BN_ULONG w))
{
	return(bn_mul_words(rp, ap, num, w));
}

void ASM SAVEDS bn_sqr_words_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_ULONG *rp), REG(a1, const BN_ULONG *ap), REG(d0, int num))
{
	bn_sqr_words(rp, ap, num);
}

BN_ULONG ASM SAVEDS bn_div_words_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, BN_ULONG h), REG(d1, BN_ULONG l), REG(d2, BN_ULONG d))
{
	return(bn_div_words(h, l, d));
}

BN_ULONG ASM SAVEDS bn_add_words_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_ULONG *rp), REG(a1, const BN_ULONG *ap), REG(a2, const BN_ULONG *bp), REG(d0, int num))
{
	return(bn_add_words(rp, ap, bp, num));
}

BN_ULONG ASM SAVEDS bn_sub_words_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BN_ULONG *rp), REG(a1, const BN_ULONG *ap), REG(a2, const BN_ULONG *bp), REG(d0, int num))
{
	return(bn_sub_words(rp, ap, bp, num));
}

int ASM SAVEDS BN_bntest_rand_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIGNUM *rnd), REG(d0, int bits), REG(d1, int top), REG(d2, int bottom))
{
	return(BN_bntest_rand(rnd, bits, top, bottom));
}

void ASM SAVEDS ERR_load_BN_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_BN_strings();
}

BUF_MEM * ASM SAVEDS BUF_MEM_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BUF_MEM_new());
}

void ASM SAVEDS BUF_MEM_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BUF_MEM *a))
{
	BUF_MEM_free(a);
}

int ASM SAVEDS BUF_MEM_grow_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BUF_MEM *str), REG(d0, int len))
{
	return(BUF_MEM_grow(str, len));
}

int ASM SAVEDS BUF_MEM_grow_clean_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BUF_MEM *str), REG(d0, int len))
{
	return(BUF_MEM_grow_clean(str, len));
}

char * ASM SAVEDS BUF_strdup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *str))
{
	return(BUF_strdup(str));
}

size_t ASM SAVEDS BUF_strlcpy_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *dst), REG(a1, const char *src), REG(d0, size_t siz))
{
	return(BUF_strlcpy(dst, src, siz));
}

size_t ASM SAVEDS BUF_strlcat_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *dst), REG(a1, const char *src), REG(d0, size_t siz))
{
	return(BUF_strlcat(dst, src, siz));
}

void ASM SAVEDS ERR_load_BUF_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_BUF_strings();
}

COMP_CTX * ASM SAVEDS COMP_CTX_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, COMP_METHOD *meth))
{
	return(COMP_CTX_new(meth));
}

void ASM SAVEDS COMP_CTX_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, COMP_CTX *ctx))
{
	COMP_CTX_free(ctx);
}

int ASM SAVEDS COMP_compress_block_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, COMP_CTX *ctx), REG(a1, unsigned char *out), REG(d0, int olen), REG(a2, unsigned char *in), REG(d1, int ilen))
{
	return(COMP_compress_block(ctx, out, olen, in, ilen));
}

int ASM SAVEDS COMP_expand_block_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, COMP_CTX *ctx), REG(a1, unsigned char *out), REG(d0, int olen), REG(a2, unsigned char *in), REG(d1, int ilen))
{
	return(COMP_expand_block(ctx, out, olen, in, ilen));
}

COMP_METHOD * ASM SAVEDS COMP_rle_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(COMP_rle());
}

COMP_METHOD * ASM SAVEDS COMP_zlib_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(COMP_zlib());
}

void ASM SAVEDS ERR_load_COMP_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_COMP_strings();
}

int ASM SAVEDS CONF_set_default_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_METHOD *meth))
{
	return(CONF_set_default_method(meth));
}

void ASM SAVEDS CONF_set_nconf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, LHASH *hash))
{
	CONF_set_nconf(conf, hash);
}

LHASH * ASM SAVEDS CONF_load_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, const char *file), REG(a2, long *eline))
{
	return(CONF_load(conf, file, eline));
}

LHASH * ASM SAVEDS CONF_load_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, BIO *bp), REG(a2, long *eline))
{
	return(CONF_load_bio(conf, bp, eline));
}

STACK_OF(CONF_VALUE) * ASM SAVEDS CONF_get_section_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, const char *section))
{
	return(CONF_get_section(conf, section));
}

char * ASM SAVEDS CONF_get_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, const char *group), REG(a2, const char *name))
{
	return(CONF_get_string(conf, group, name));
}

long ASM SAVEDS CONF_get_number_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, const char *group), REG(a2, const char *name))
{
	return(CONF_get_number(conf, group, name));
}

void ASM SAVEDS CONF_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf))
{
	CONF_free(conf);
}

int ASM SAVEDS CONF_dump_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, BIO *out))
{
	return(CONF_dump_bio(conf, out));
}

void ASM SAVEDS OPENSSL_config_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *config_name))
{
	OPENSSL_config(config_name);
}

void ASM SAVEDS OPENSSL_no_config_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	OPENSSL_no_config();
}

CONF * ASM SAVEDS NCONF_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_METHOD *meth))
{
	return(NCONF_new(meth));
}

CONF_METHOD * ASM SAVEDS NCONF_default_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(NCONF_default());
}

CONF_METHOD * ASM SAVEDS NCONF_WIN32_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(NCONF_WIN32());
}

void ASM SAVEDS NCONF_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf))
{
	NCONF_free(conf);
}

void ASM SAVEDS NCONF_free_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf))
{
	NCONF_free_data(conf);
}

int ASM SAVEDS NCONF_load_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, const char *file), REG(a2, long *eline))
{
	return(NCONF_load(conf, file, eline));
}

int ASM SAVEDS NCONF_load_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, BIO *bp), REG(a2, long *eline))
{
	return(NCONF_load_bio(conf, bp, eline));
}

STACK_OF(CONF_VALUE) * ASM SAVEDS NCONF_get_section_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, const char *section))
{
	return(NCONF_get_section(conf, section));
}

char * ASM SAVEDS NCONF_get_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, const char *group), REG(a2, const char *name))
{
	return(NCONF_get_string(conf, group, name));
}

int ASM SAVEDS NCONF_get_number_e_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, const char *group), REG(a2, const char *name), REG(a3, long *result))
{
	return(NCONF_get_number_e(conf, group, name, result));
}

int ASM SAVEDS NCONF_dump_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, BIO *out))
{
	return(NCONF_dump_bio(conf, out));
}

int ASM SAVEDS CONF_modules_load_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *cnf), REG(a1, const char *appname), REG(d0, unsigned long flags))
{
	return(CONF_modules_load(cnf, appname, flags));
}

int ASM SAVEDS CONF_modules_load_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *filename), REG(a1, const char *appname), REG(d0, unsigned long flags))
{
	return(CONF_modules_load_file(filename, appname, flags));
}

void ASM SAVEDS CONF_modules_unload_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int all))
{
	CONF_modules_unload(all);
}

void ASM SAVEDS CONF_modules_finish_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	CONF_modules_finish();
}

void ASM SAVEDS CONF_modules_free_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	CONF_modules_free();
}

int ASM SAVEDS CONF_module_add_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(a1, conf_init_func *ifunc), REG(a2, conf_finish_func *ffunc))
{
	return(CONF_module_add(name, ifunc, ffunc));
}

const char * ASM SAVEDS CONF_imodule_get_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF_IMODULE *md))
{
	return(CONF_imodule_get_name(md));
}

const char * ASM SAVEDS CONF_imodule_get_value_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF_IMODULE *md))
{
	return(CONF_imodule_get_value(md));
}

void * ASM SAVEDS CONF_imodule_get_usr_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF_IMODULE *md))
{
	return(CONF_imodule_get_usr_data(md));
}

void ASM SAVEDS CONF_imodule_set_usr_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_IMODULE *md), REG(a1, void *usr_data))
{
	CONF_imodule_set_usr_data(md, usr_data);
}

CONF_MODULE * ASM SAVEDS CONF_imodule_get_module_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF_IMODULE *md))
{
	return(CONF_imodule_get_module(md));
}

unsigned long ASM SAVEDS CONF_imodule_get_flags_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF_IMODULE *md))
{
	return(CONF_imodule_get_flags(md));
}

void ASM SAVEDS CONF_imodule_set_flags_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_IMODULE *md), REG(d0, unsigned long flags))
{
	CONF_imodule_set_flags(md, flags);
}

void * ASM SAVEDS CONF_module_get_usr_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_MODULE *pmod))
{
	return(CONF_module_get_usr_data(pmod));
}

void ASM SAVEDS CONF_module_set_usr_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_MODULE *pmod), REG(a1, void *usr_data))
{
	CONF_module_set_usr_data(pmod, usr_data);
}

char * ASM SAVEDS CONF_get1_default_config_file_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CONF_get1_default_config_file());
}

int ASM SAVEDS CONF_parse_list_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *list), REG(d0, int sep), REG(d1, int nospc), REG(a1, int (*list_cb)(const char *elem, int len, void *usr)), REG(a2, void *arg))
{
	return(CONF_parse_list(list, sep, nospc, list_cb, arg));
}

void ASM SAVEDS OPENSSL_load_builtin_modules_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	OPENSSL_load_builtin_modules();
}

void ASM SAVEDS ERR_load_CONF_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_CONF_strings();
}

CONF_VALUE * ASM SAVEDS _CONF_new_section_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, const char *section))
{
	return(_CONF_new_section(conf, section));
}

CONF_VALUE * ASM SAVEDS _CONF_get_section_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, const char *section))
{
	return(_CONF_get_section(conf, section));
}

STACK_OF(CONF_VALUE) * ASM SAVEDS _CONF_get_section_values_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, const char *section))
{
	return(_CONF_get_section_values(conf, section));
}

int ASM SAVEDS _CONF_add_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, CONF_VALUE *section), REG(a2, CONF_VALUE *value))
{
	return(_CONF_add_string(conf, section, value));
}

char * ASM SAVEDS _CONF_get_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CONF *conf), REG(a1, const char *section), REG(a2, const char *name))
{
	return(_CONF_get_string(conf, section, name));
}

int ASM SAVEDS _CONF_new_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf))
{
	return(_CONF_new_data(conf));
}

void ASM SAVEDS _CONF_free_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf))
{
	_CONF_free_data(conf);
}

int ASM SAVEDS CRYPTO_mem_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int mode))
{
	return(CRYPTO_mem_ctrl(mode));
}

int ASM SAVEDS CRYPTO_is_mem_check_on_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_is_mem_check_on());
}

const char * ASM SAVEDS SSLeay_version_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type))
{
	return(SSLeay_version(type));
}

unsigned long ASM SAVEDS SSLeay_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSLeay());
}

int ASM SAVEDS OPENSSL_issetugid_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OPENSSL_issetugid());
}

const CRYPTO_EX_DATA_IMPL * ASM SAVEDS CRYPTO_get_ex_data_implementation_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_get_ex_data_implementation());
}

int ASM SAVEDS CRYPTO_set_ex_data_implementation_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CRYPTO_EX_DATA_IMPL *i))
{
	return(CRYPTO_set_ex_data_implementation(i));
}

int ASM SAVEDS CRYPTO_ex_data_new_class_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_ex_data_new_class());
}

int ASM SAVEDS CRYPTO_get_ex_new_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int class_index), REG(d1, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(CRYPTO_get_ex_new_index(class_index, argl, argp, new_func, dup_func, free_func));
}

int ASM SAVEDS CRYPTO_new_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int class_index), REG(a0, void *obj), REG(a1, CRYPTO_EX_DATA *ad))
{
	return(CRYPTO_new_ex_data(class_index, obj, ad));
}

int ASM SAVEDS CRYPTO_dup_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int class_index), REG(a0, CRYPTO_EX_DATA *to), REG(a1, CRYPTO_EX_DATA *from))
{
	return(CRYPTO_dup_ex_data(class_index, to, from));
}

void ASM SAVEDS CRYPTO_free_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int class_index), REG(a0, void *obj), REG(a1, CRYPTO_EX_DATA *ad))
{
	CRYPTO_free_ex_data(class_index, obj, ad);
}

int ASM SAVEDS CRYPTO_set_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CRYPTO_EX_DATA *ad), REG(d0, int idx), REG(a1, void *val))
{
	return(CRYPTO_set_ex_data(ad, idx, val));
}

void * ASM SAVEDS CRYPTO_get_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const CRYPTO_EX_DATA *ad), REG(d0, int idx))
{
	return(CRYPTO_get_ex_data(ad, idx));
}

void ASM SAVEDS CRYPTO_cleanup_all_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	CRYPTO_cleanup_all_ex_data();
}

int ASM SAVEDS CRYPTO_get_new_lockid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *name))
{
	return(CRYPTO_get_new_lockid(name));
}

int ASM SAVEDS CRYPTO_num_locks_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_num_locks());
}

void ASM SAVEDS CRYPTO_lock_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int mode), REG(d1, int type), REG(a0, const char *file), REG(d2, int line))
{
	CRYPTO_lock(mode, type, file, line);
}

void ASM SAVEDS CRYPTO_set_locking_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void (*func)(int mode, int type, const char *file, int line)))
{
	CRYPTO_set_locking_callback(func);
}

void (* ASM SAVEDS CRYPTO_get_locking_callback_AmiSSL(REG(a6, __IFACE_OR_BASE)))(int mode, int type, const char *file, int line)
{
	return(CRYPTO_get_locking_callback());
}

void ASM SAVEDS CRYPTO_set_add_lock_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int (*func)(int *num, int mount, int type, const char *file, int line)))
{
	CRYPTO_set_add_lock_callback(func);
}

int (* ASM SAVEDS CRYPTO_get_add_lock_callback_AmiSSL(REG(a6, __IFACE_OR_BASE)))(int *num, int mount, int type, const char *file, int line)
{
	return(CRYPTO_get_add_lock_callback());
}

void ASM SAVEDS CRYPTO_set_id_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long (*func)(void)))
{
	CRYPTO_set_id_callback(func);
}

unsigned long ASM SAVEDS (*CRYPTO_get_id_callback_AmiSSL(REG(a6, __IFACE_OR_BASE)))(void)
{
	return(CRYPTO_get_id_callback());
}

unsigned long ASM SAVEDS CRYPTO_thread_id_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_thread_id());
}

const char * ASM SAVEDS CRYPTO_get_lock_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type))
{
	return(CRYPTO_get_lock_name(type));
}

int ASM SAVEDS CRYPTO_add_lock_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int *pointer), REG(d0, int amount), REG(d1, int type), REG(a1, const char *file), REG(d2, int line))
{
	return(CRYPTO_add_lock(pointer, amount, type, file, line));
}

int ASM SAVEDS CRYPTO_get_new_dynlockid_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_get_new_dynlockid());
}

void ASM SAVEDS CRYPTO_destroy_dynlockid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int i))
{
	CRYPTO_destroy_dynlockid(i);
}

struct CRYPTO_dynlock_value * ASM SAVEDS CRYPTO_get_dynlock_value_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int i))
{
	return(CRYPTO_get_dynlock_value(i));
}

void ASM SAVEDS CRYPTO_set_dynlock_create_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, struct CRYPTO_dynlock_value *(*dyn_create_function)(const char *file, int line)))
{
	CRYPTO_set_dynlock_create_callback(dyn_create_function);
}

void ASM SAVEDS CRYPTO_set_dynlock_lock_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void (*dyn_lock_function)(int mode, struct CRYPTO_dynlock_value *l, const char *file, int line)))
{
	CRYPTO_set_dynlock_lock_callback(dyn_lock_function);
}

void ASM SAVEDS CRYPTO_set_dynlock_destroy_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void (*dyn_destroy_function)(struct CRYPTO_dynlock_value *l, const char *file, int line)))
{
	CRYPTO_set_dynlock_destroy_callback(dyn_destroy_function);
}

struct CRYPTO_dynlock_value *(* ASM SAVEDS CRYPTO_get_dynlock_create_callback_AmiSSL(REG(a6, __IFACE_OR_BASE)))(const char *file, int line)
{
	return(CRYPTO_get_dynlock_create_callback());
}

void (* ASM SAVEDS CRYPTO_get_dynlock_lock_callback_AmiSSL(REG(a6, __IFACE_OR_BASE)))(int mode, struct CRYPTO_dynlock_value *l, const char *file, int line)
{
	return(CRYPTO_get_dynlock_lock_callback());
}

void (* ASM SAVEDS CRYPTO_get_dynlock_destroy_callback_AmiSSL(REG(a6, __IFACE_OR_BASE)))(struct CRYPTO_dynlock_value *l, const char *file, int line)
{
	return(CRYPTO_get_dynlock_destroy_callback());
}

int ASM SAVEDS CRYPTO_set_mem_functions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *(*m)(size_t)), REG(a1, void *(*r)(void *, size_t)), REG(a2, void (*f)(void *)))
{
	return(CRYPTO_set_mem_functions(m, r, f));
}

int ASM SAVEDS CRYPTO_set_locked_mem_functions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *(*m)(size_t)), REG(a1, void (*free_func)(void *)))
{
	return(CRYPTO_set_locked_mem_functions(m, free_func));
}

int ASM SAVEDS CRYPTO_set_mem_ex_functions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *(*m)(size_t, const char *, int)), REG(a1, void *(*r)(void *, size_t, const char *, int)), REG(a2, void (*f)(void *)))
{
	return(CRYPTO_set_mem_ex_functions(m, r, f));
}

int ASM SAVEDS CRYPTO_set_locked_mem_ex_functions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *(*m)(size_t, const char *, int)), REG(a1, void (*free_func)(void *)))
{
	return(CRYPTO_set_locked_mem_ex_functions(m, free_func));
}

int ASM SAVEDS CRYPTO_set_mem_debug_functions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void (*m)(void *, int, const char *, int, int)), REG(a1, void (*r)(void *, void *, int, const char *, int, int)), REG(a2, void (*f)(void *, int)), REG(a3, void (*so)(long)), REG(d0, long (*go)(void)))
{
	return(CRYPTO_set_mem_debug_functions(m, r, f, so, go));
}

void ASM SAVEDS CRYPTO_get_mem_functions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *(**m)(size_t)), REG(a1, void *(**r)(void *, size_t)), REG(a2, void (**f)(void *)))
{
	CRYPTO_get_mem_functions(m, r, f);
}

void ASM SAVEDS CRYPTO_get_locked_mem_functions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *(**m)(size_t)), REG(a1, void (**f)(void *)))
{
	CRYPTO_get_locked_mem_functions(m, f);
}

void ASM SAVEDS CRYPTO_get_mem_ex_functions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *(**m)(size_t, const char *, int)), REG(a1, void *(**r)(void *, size_t, const char *, int)), REG(a2, void (**f)(void *)))
{
	CRYPTO_get_mem_ex_functions(m, r, f);
}

void ASM SAVEDS CRYPTO_get_locked_mem_ex_functions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *(**m)(size_t, const char *, int)), REG(a1, void (**f)(void *)))
{
	CRYPTO_get_locked_mem_ex_functions(m, f);
}

void ASM SAVEDS CRYPTO_get_mem_debug_functions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void (**m)(void *, int, const char *, int, int)), REG(a1, void (**r)(void *, void *, int, const char *, int, int)), REG(a2, void (**f)(void *, int)), REG(a3, void (**so)(long)), REG(d0, long (**go)(void)))
{
	CRYPTO_get_mem_debug_functions(m, r, f, so, go);
}

void * ASM SAVEDS CRYPTO_malloc_locked_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int num), REG(a0, const char *file), REG(d1, int line))
{
	return(CRYPTO_malloc_locked(num, file, line));
}

void ASM SAVEDS CRYPTO_free_locked_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *a))
{
	CRYPTO_free_locked(a);
}

void * ASM SAVEDS CRYPTO_malloc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int num), REG(a0, const char *file), REG(d1, int line))
{
	return(CRYPTO_malloc(num, file, line));
}

void ASM SAVEDS CRYPTO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *a))
{
	CRYPTO_free(a);
}

void * ASM SAVEDS CRYPTO_realloc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *addr), REG(d0, int num), REG(a1, const char *file), REG(d1, int line))
{
	return(CRYPTO_realloc(addr, num, file, line));
}

void * ASM SAVEDS CRYPTO_realloc_clean_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *addr), REG(d0, int old_num), REG(d1, int num), REG(a1, const char *file), REG(d2, int line))
{
	return(CRYPTO_realloc_clean(addr, old_num, num, file, line));
}

void * ASM SAVEDS CRYPTO_remalloc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *addr), REG(d0, int num), REG(a1, const char *file), REG(d1, int line))
{
	return(CRYPTO_remalloc(addr, num, file, line));
}

void ASM SAVEDS OPENSSL_cleanse_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *ptr), REG(d0, size_t len))
{
	OPENSSL_cleanse(ptr, len);
}

void ASM SAVEDS CRYPTO_set_mem_debug_options_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long bits))
{
	CRYPTO_set_mem_debug_options(bits);
}

long ASM SAVEDS CRYPTO_get_mem_debug_options_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_get_mem_debug_options());
}

int ASM SAVEDS CRYPTO_push_info__AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *info), REG(a1, const char *file), REG(d0, int line))
{
	return(CRYPTO_push_info_(info, file, line));
}

int ASM SAVEDS CRYPTO_pop_info_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_pop_info());
}

int ASM SAVEDS CRYPTO_remove_all_info_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_remove_all_info());
}

void ASM SAVEDS CRYPTO_dbg_malloc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *addr), REG(d0, int num), REG(a1, const char *file), REG(d1, int line), REG(d2, int before_p))
{
	CRYPTO_dbg_malloc(addr, num, file, line, before_p);
}

void ASM SAVEDS CRYPTO_dbg_realloc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *addr1), REG(a1, void *addr2), REG(d0, int num), REG(a2, const char *file), REG(d1, int line), REG(d2, int before_p))
{
	CRYPTO_dbg_realloc(addr1, addr2, num, file, line, before_p);
}

void ASM SAVEDS CRYPTO_dbg_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *addr), REG(d0, int before_p))
{
	CRYPTO_dbg_free(addr, before_p);
}

void ASM SAVEDS CRYPTO_dbg_set_options_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long bits))
{
	CRYPTO_dbg_set_options(bits);
}

long ASM SAVEDS CRYPTO_dbg_get_options_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CRYPTO_dbg_get_options());
}

void ASM SAVEDS CRYPTO_mem_leaks_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, struct bio_st *bio))
{
	CRYPTO_mem_leaks(bio);
}

void ASM SAVEDS CRYPTO_mem_leaks_cb_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CRYPTO_MEM_LEAK_CB *cb))
{
	CRYPTO_mem_leaks_cb(cb);
}

void ASM SAVEDS OpenSSLDie_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *file), REG(d0, int line), REG(a1, const char *assertion))
{
	OpenSSLDie(file, line, assertion);
}

void ASM SAVEDS ERR_load_CRYPTO_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_CRYPTO_strings();
}

DSO * ASM SAVEDS DSO_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_new());
}

DSO * ASM SAVEDS DSO_new_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO_METHOD *method))
{
	return(DSO_new_method(method));
}

int ASM SAVEDS DSO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso))
{
	return(DSO_free(dso));
}

int ASM SAVEDS DSO_flags_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso))
{
	return(DSO_flags(dso));
}

int ASM SAVEDS DSO_up_ref_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso))
{
	return(DSO_up_ref(dso));
}

long ASM SAVEDS DSO_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(d0, int cmd), REG(d1, long larg), REG(a1, void *parg))
{
	return(DSO_ctrl(dso, cmd, larg, parg));
}

int ASM SAVEDS DSO_set_name_converter_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(d0, DSO_NAME_CONVERTER_FUNC cb), REG(a1, DSO_NAME_CONVERTER_FUNC *oldcb))
{
	return(DSO_set_name_converter(dso, cb, oldcb));
}

const char * ASM SAVEDS DSO_get_filename_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso))
{
	return(DSO_get_filename(dso));
}

int ASM SAVEDS DSO_set_filename_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(a1, const char *filename))
{
	return(DSO_set_filename(dso, filename));
}

char * ASM SAVEDS DSO_convert_filename_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(a1, const char *filename))
{
	return(DSO_convert_filename(dso, filename));
}

const char * ASM SAVEDS DSO_get_loaded_filename_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso))
{
	return(DSO_get_loaded_filename(dso));
}

void ASM SAVEDS DSO_set_default_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO_METHOD *meth))
{
	DSO_set_default_method(meth);
}

DSO_METHOD * ASM SAVEDS DSO_get_default_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_get_default_method());
}

DSO_METHOD * ASM SAVEDS DSO_get_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso))
{
	return(DSO_get_method(dso));
}

DSO_METHOD * ASM SAVEDS DSO_set_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(a1, DSO_METHOD *meth))
{
	return(DSO_set_method(dso, meth));
}

DSO * ASM SAVEDS DSO_load_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(a1, const char *filename), REG(a2, DSO_METHOD *meth), REG(d0, int flags))
{
	return(DSO_load(dso, filename, meth, flags));
}

void * ASM SAVEDS DSO_bind_var_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(a1, const char *symname))
{
	return(DSO_bind_var(dso, symname));
}

DSO_FUNC_TYPE ASM SAVEDS DSO_bind_func_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSO *dso), REG(a1, const char *symname))
{
	return(DSO_bind_func(dso, symname));
}

DSO_METHOD * ASM SAVEDS DSO_METHOD_openssl_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_METHOD_openssl());
}

DSO_METHOD * ASM SAVEDS DSO_METHOD_null_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_METHOD_null());
}

DSO_METHOD * ASM SAVEDS DSO_METHOD_dlfcn_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_METHOD_dlfcn());
}

DSO_METHOD * ASM SAVEDS DSO_METHOD_dl_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_METHOD_dl());
}

DSO_METHOD * ASM SAVEDS DSO_METHOD_win32_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_METHOD_win32());
}

DSO_METHOD * ASM SAVEDS DSO_METHOD_vms_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSO_METHOD_vms());
}

void ASM SAVEDS ERR_load_DSO_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_DSO_strings();
}

const EC_METHOD * ASM SAVEDS EC_GFp_simple_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EC_GFp_simple_method());
}

const EC_METHOD * ASM SAVEDS EC_GFp_mont_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EC_GFp_mont_method());
}

EC_GROUP * ASM SAVEDS EC_GROUP_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_METHOD *a))
{
	return(EC_GROUP_new(a));
}

void ASM SAVEDS EC_GROUP_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EC_GROUP *a))
{
	EC_GROUP_free(a);
}

void ASM SAVEDS EC_GROUP_clear_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EC_GROUP *a))
{
	EC_GROUP_clear_free(a);
}

int ASM SAVEDS EC_GROUP_copy_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EC_GROUP *a), REG(a1, const EC_GROUP *b))
{
	return(EC_GROUP_copy(a, b));
}

const EC_METHOD * ASM SAVEDS EC_GROUP_method_of_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a))
{
	return(EC_GROUP_method_of(a));
}

int ASM SAVEDS EC_GROUP_set_curve_GFp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EC_GROUP *a1), REG(a1, const BIGNUM *p), REG(a2, const BIGNUM *a), REG(a3, const BIGNUM *b), REG(d0, BN_CTX *a2))
{
	return(EC_GROUP_set_curve_GFp(a1, p, a, b, a2));
}

int ASM SAVEDS EC_GROUP_get_curve_GFp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, BIGNUM *p), REG(a2, BIGNUM *a), REG(a3, BIGNUM *b), REG(d0, BN_CTX *a2))
{
	return(EC_GROUP_get_curve_GFp(a1, p, a, b, a2));
}

EC_GROUP * ASM SAVEDS EC_GROUP_new_curve_GFp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const BIGNUM *p), REG(a1, const BIGNUM *a), REG(a2, const BIGNUM *b), REG(a3, BN_CTX *a1))
{
	return(EC_GROUP_new_curve_GFp(p, a, b, a1));
}

int ASM SAVEDS EC_GROUP_set_generator_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EC_GROUP *a1), REG(a1, const EC_POINT *generator), REG(a2, const BIGNUM *order), REG(a3, const BIGNUM *cofactor))
{
	return(EC_GROUP_set_generator(a1, generator, order, cofactor));
}

EC_POINT * ASM SAVEDS EC_GROUP_get0_generator_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1))
{
	return(EC_GROUP_get0_generator(a1));
}

int ASM SAVEDS EC_GROUP_get_order_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, BIGNUM *order), REG(a2, BN_CTX *a2))
{
	return(EC_GROUP_get_order(a1, order, a2));
}

int ASM SAVEDS EC_GROUP_get_cofactor_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, BIGNUM *cofactor), REG(a2, BN_CTX *a2))
{
	return(EC_GROUP_get_cofactor(a1, cofactor, a2));
}

EC_POINT * ASM SAVEDS EC_POINT_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a))
{
	return(EC_POINT_new(a));
}

void ASM SAVEDS EC_POINT_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EC_POINT *a))
{
	EC_POINT_free(a);
}

void ASM SAVEDS EC_POINT_clear_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EC_POINT *a))
{
	EC_POINT_clear_free(a);
}

int ASM SAVEDS EC_POINT_copy_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EC_POINT *a), REG(a1, const EC_POINT *b))
{
	return(EC_POINT_copy(a, b));
}

const EC_METHOD * ASM SAVEDS EC_POINT_method_of_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_POINT *a))
{
	return(EC_POINT_method_of(a));
}

int ASM SAVEDS EC_POINT_set_to_infinity_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a), REG(a1, EC_POINT *b))
{
	return(EC_POINT_set_to_infinity(a, b));
}

int ASM SAVEDS EC_POINT_set_Jprojective_coordinates_GFp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *a2), REG(a2, const BIGNUM *x), REG(a3, const BIGNUM *y), REG(d0, const BIGNUM *z), REG(d1, BN_CTX *a3))
{
	return(EC_POINT_set_Jprojective_coordinates_GFp(a1, a2, x, y, z, a3));
}

int ASM SAVEDS EC_POINT_get_Jprojective_coordinates_GFp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, const EC_POINT *a2), REG(a2, BIGNUM *x), REG(a3, BIGNUM *y), REG(d0, BIGNUM *z), REG(d1, BN_CTX *a3))
{
	return(EC_POINT_get_Jprojective_coordinates_GFp(a1, a2, x, y, z, a3));
}

int ASM SAVEDS EC_POINT_set_affine_coordinates_GFp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *a2), REG(a2, const BIGNUM *x), REG(a3, const BIGNUM *y), REG(d0, BN_CTX *a3))
{
	return(EC_POINT_set_affine_coordinates_GFp(a1, a2, x, y, a3));
}

int ASM SAVEDS EC_POINT_get_affine_coordinates_GFp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, const EC_POINT *a2), REG(a2, BIGNUM *x), REG(a3, BIGNUM *y), REG(d0, BN_CTX *a3))
{
	return(EC_POINT_get_affine_coordinates_GFp(a1, a2, x, y, a3));
}

int ASM SAVEDS EC_POINT_set_compressed_coordinates_GFp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *a2), REG(a2, const BIGNUM *x), REG(d0, int y_bit), REG(a3, BN_CTX *a3))
{
	return(EC_POINT_set_compressed_coordinates_GFp(a1, a2, x, y_bit, a3));
}

size_t ASM SAVEDS EC_POINT_point2oct_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, const EC_POINT *a2), REG(d0, point_conversion_form_t form), REG(a2, unsigned char *buf), REG(d1, size_t len), REG(a3, BN_CTX *a3))
{
	return(EC_POINT_point2oct(a1, a2, form, buf, len, a3));
}

int ASM SAVEDS EC_POINT_oct2point_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *a2), REG(a2, const unsigned char *buf), REG(d0, size_t len), REG(a3, BN_CTX *a3))
{
	return(EC_POINT_oct2point(a1, a2, buf, len, a3));
}

int ASM SAVEDS EC_POINT_add_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *r), REG(a2, const EC_POINT *a), REG(a3, const EC_POINT *b), REG(d0, BN_CTX *a2))
{
	return(EC_POINT_add(a1, r, a, b, a2));
}

int ASM SAVEDS EC_POINT_dbl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *r), REG(a2, const EC_POINT *a), REG(a3, BN_CTX *a2))
{
	return(EC_POINT_dbl(a1, r, a, a2));
}

int ASM SAVEDS EC_POINT_invert_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *a2), REG(a2, BN_CTX *a3))
{
	return(EC_POINT_invert(a1, a2, a3));
}

int ASM SAVEDS EC_POINT_is_at_infinity_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a), REG(a1, const EC_POINT *b))
{
	return(EC_POINT_is_at_infinity(a, b));
}

int ASM SAVEDS EC_POINT_is_on_curve_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a), REG(a1, const EC_POINT *b), REG(a2, BN_CTX *c))
{
	return(EC_POINT_is_on_curve(a, b, c));
}

int ASM SAVEDS EC_POINT_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, const EC_POINT *a), REG(a2, const EC_POINT *b), REG(a3, BN_CTX *a2))
{
	return(EC_POINT_cmp(a1, a, b, a2));
}

int ASM SAVEDS EC_POINT_make_affine_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a), REG(a1, EC_POINT *b), REG(a2, BN_CTX *c))
{
	return(EC_POINT_make_affine(a, b, c));
}

int ASM SAVEDS EC_POINTs_make_affine_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(d0, size_t num), REG(a1, EC_POINT *a2[]), REG(a2, BN_CTX *a3))
{
	return(EC_POINTs_make_affine(a1, num, a2, a3));
}

int ASM SAVEDS EC_POINTs_mul_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *r), REG(a2, const BIGNUM *a2), REG(d0, size_t num), REG(a3, const EC_POINT *a3[]), REG(d1, const BIGNUM *a4[]), REG(d2, BN_CTX *a5))
{
	return(EC_POINTs_mul(a1, r, a2, num, a3, a4, a5));
}

int ASM SAVEDS EC_POINT_mul_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EC_GROUP *a1), REG(a1, EC_POINT *r), REG(a2, const BIGNUM *a2), REG(a3, const EC_POINT *a3), REG(d0, const BIGNUM *a4), REG(d1, BN_CTX *a5))
{
	return(EC_POINT_mul(a1, r, a2, a3, a4, a5));
}

int ASM SAVEDS EC_GROUP_precompute_mult_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EC_GROUP *a), REG(a1, BN_CTX *b))
{
	return(EC_GROUP_precompute_mult(a, b));
}

void ASM SAVEDS ERR_load_EC_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_EC_strings();
}

void ASM SAVEDS ERR_put_error_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int lib), REG(d1, int func), REG(d2, int reason), REG(a0, const char *file), REG(d3, int line))
{
	ERR_put_error(lib, func, reason, file, line);
}

void ASM SAVEDS ERR_set_error_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *data), REG(d0, int flags))
{
	ERR_set_error_data(data, flags);
}

unsigned long ASM SAVEDS ERR_get_error_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_get_error());
}

unsigned long ASM SAVEDS ERR_get_error_line_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char **file), REG(a1, int *line))
{
	return(ERR_get_error_line(file, line));
}

unsigned long ASM SAVEDS ERR_get_error_line_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char **file), REG(a1, int *line), REG(a2, const char **data), REG(a3, int *flags))
{
	return(ERR_get_error_line_data(file, line, data, flags));
}

unsigned long ASM SAVEDS ERR_peek_error_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_peek_error());
}

unsigned long ASM SAVEDS ERR_peek_error_line_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char **file), REG(a1, int *line))
{
	return(ERR_peek_error_line(file, line));
}

unsigned long ASM SAVEDS ERR_peek_error_line_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char **file), REG(a1, int *line), REG(a2, const char **data), REG(a3, int *flags))
{
	return(ERR_peek_error_line_data(file, line, data, flags));
}

unsigned long ASM SAVEDS ERR_peek_last_error_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_peek_last_error());
}

unsigned long ASM SAVEDS ERR_peek_last_error_line_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char **file), REG(a1, int *line))
{
	return(ERR_peek_last_error_line(file, line));
}

unsigned long ASM SAVEDS ERR_peek_last_error_line_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char **file), REG(a1, int *line), REG(a2, const char **data), REG(a3, int *flags))
{
	return(ERR_peek_last_error_line_data(file, line, data, flags));
}

void ASM SAVEDS ERR_clear_error_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_clear_error();
}

char * ASM SAVEDS ERR_error_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long e), REG(a0, char *buf))
{
	return(ERR_error_string(e, buf));
}

void ASM SAVEDS ERR_error_string_n_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long e), REG(a0, char *buf), REG(d1, size_t len))
{
	ERR_error_string_n(e, buf, len);
}

const char * ASM SAVEDS ERR_lib_error_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long e))
{
	return(ERR_lib_error_string(e));
}

const char * ASM SAVEDS ERR_func_error_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long e))
{
	return(ERR_func_error_string(e));
}

const char * ASM SAVEDS ERR_reason_error_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long e))
{
	return(ERR_reason_error_string(e));
}

void ASM SAVEDS ERR_print_errors_cb_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int (*cb)(const char *str, size_t len, void *u)), REG(a1, void *u))
{
	ERR_print_errors_cb(cb, u);
}

void ASM SAVEDS ERR_print_errors_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp))
{
	ERR_print_errors(bp);
}

void ASM SAVEDS ERR_add_error_dataA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int num), REG(d1, va_list args))
{
	ERR_add_error_dataA(num, args);
}

void ASM SAVEDS ERR_load_strings_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int lib), REG(d1, ERR_STRING_DATA str[]))
{
	ERR_load_strings(lib, str);
}

void ASM SAVEDS ERR_unload_strings_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int lib), REG(d1, ERR_STRING_DATA str[]))
{
	ERR_unload_strings(lib, str);
}

void ASM SAVEDS ERR_load_ERR_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_ERR_strings();
}

void ASM SAVEDS ERR_load_crypto_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_crypto_strings();
}

void ASM SAVEDS ERR_free_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_free_strings();
}

void ASM SAVEDS ERR_remove_state_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, unsigned long pid))
{
	ERR_remove_state(pid);
}

ERR_STATE * ASM SAVEDS ERR_get_state_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_get_state());
}

LHASH * ASM SAVEDS ERR_get_string_table_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_get_string_table());
}

LHASH * ASM SAVEDS ERR_get_err_state_table_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_get_err_state_table());
}

void ASM SAVEDS ERR_release_err_state_table_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH **hash))
{
	ERR_release_err_state_table(hash);
}

int ASM SAVEDS ERR_get_next_error_library_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_get_next_error_library());
}

const ERR_FNS * ASM SAVEDS ERR_get_implementation_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ERR_get_implementation());
}

int ASM SAVEDS ERR_set_implementation_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ERR_FNS *fns))
{
	return(ERR_set_implementation(fns));
}

void ASM SAVEDS EVP_MD_CTX_init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx))
{
	EVP_MD_CTX_init(ctx);
}

int ASM SAVEDS EVP_MD_CTX_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx))
{
	return(EVP_MD_CTX_cleanup(ctx));
}

EVP_MD_CTX * ASM SAVEDS EVP_MD_CTX_create_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_MD_CTX_create());
}

void ASM SAVEDS EVP_MD_CTX_destroy_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx))
{
	EVP_MD_CTX_destroy(ctx);
}

int ASM SAVEDS EVP_MD_CTX_copy_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *out), REG(a1, const EVP_MD_CTX *in))
{
	return(EVP_MD_CTX_copy_ex(out, in));
}

int ASM SAVEDS EVP_DigestInit_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, const EVP_MD *type), REG(a2, ENGINE *impl))
{
	return(EVP_DigestInit_ex(ctx, type, impl));
}

int ASM SAVEDS EVP_DigestUpdate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, const void *d), REG(d0, unsigned int cnt))
{
	return(EVP_DigestUpdate(ctx, d, cnt));
}

int ASM SAVEDS EVP_DigestFinal_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, unsigned char *md), REG(a2, unsigned int *s))
{
	return(EVP_DigestFinal_ex(ctx, md, s));
}

int ASM SAVEDS EVP_Digest_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *data), REG(d0, unsigned int count), REG(a1, unsigned char *md), REG(a2, unsigned int *size), REG(a3, const EVP_MD *type), REG(d1, ENGINE *impl))
{
	return(EVP_Digest(data, count, md, size, type, impl));
}

int ASM SAVEDS EVP_MD_CTX_copy_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *out), REG(a1, const EVP_MD_CTX *in))
{
	return(EVP_MD_CTX_copy(out, in));
}

int ASM SAVEDS EVP_DigestInit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, const EVP_MD *type))
{
	return(EVP_DigestInit(ctx, type));
}

int ASM SAVEDS EVP_DigestFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, unsigned char *md), REG(a2, unsigned int *s))
{
	return(EVP_DigestFinal(ctx, md, s));
}

int ASM SAVEDS EVP_read_pw_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int length), REG(a1, const char *prompt), REG(d1, int verify))
{
	return(EVP_read_pw_string(buf, length, prompt, verify));
}

void ASM SAVEDS EVP_set_pw_prompt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *prompt))
{
	EVP_set_pw_prompt(prompt);
}

char * ASM SAVEDS EVP_get_pw_prompt_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_get_pw_prompt());
}

int ASM SAVEDS EVP_BytesToKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_CIPHER *type), REG(a1, const EVP_MD *md), REG(a2, const unsigned char *salt), REG(a3, const unsigned char *data), REG(d0, int datal), REG(d1, int count), REG(d2, unsigned char *key), REG(d3, unsigned char *iv))
{
	return(EVP_BytesToKey(type, md, salt, data, datal, count, key, iv));
}

int ASM SAVEDS EVP_EncryptInit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *cipher), REG(a2, const unsigned char *key), REG(a3, const unsigned char *iv))
{
	return(EVP_EncryptInit(ctx, cipher, key, iv));
}

int ASM SAVEDS EVP_EncryptInit_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *cipher), REG(a2, ENGINE *impl), REG(a3, const unsigned char *key), REG(d0, const unsigned char *iv))
{
	return(EVP_EncryptInit_ex(ctx, cipher, impl, key, iv));
}

int ASM SAVEDS EVP_EncryptUpdate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl), REG(a3, const unsigned char *in), REG(d0, int inl))
{
	return(EVP_EncryptUpdate(ctx, out, outl, in, inl));
}

int ASM SAVEDS EVP_EncryptFinal_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl))
{
	return(EVP_EncryptFinal_ex(ctx, out, outl));
}

int ASM SAVEDS EVP_EncryptFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl))
{
	return(EVP_EncryptFinal(ctx, out, outl));
}

int ASM SAVEDS EVP_DecryptInit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *cipher), REG(a2, const unsigned char *key), REG(a3, const unsigned char *iv))
{
	return(EVP_DecryptInit(ctx, cipher, key, iv));
}

int ASM SAVEDS EVP_DecryptInit_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *cipher), REG(a2, ENGINE *impl), REG(a3, const unsigned char *key), REG(d0, const unsigned char *iv))
{
	return(EVP_DecryptInit_ex(ctx, cipher, impl, key, iv));
}

int ASM SAVEDS EVP_DecryptUpdate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl), REG(a3, const unsigned char *in), REG(d0, int inl))
{
	return(EVP_DecryptUpdate(ctx, out, outl, in, inl));
}

int ASM SAVEDS EVP_DecryptFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *outm), REG(a2, int *outl))
{
	return(EVP_DecryptFinal(ctx, outm, outl));
}

int ASM SAVEDS EVP_DecryptFinal_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *outm), REG(a2, int *outl))
{
	return(EVP_DecryptFinal_ex(ctx, outm, outl));
}

int ASM SAVEDS EVP_CipherInit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *cipher), REG(a2, const unsigned char *key), REG(a3, const unsigned char *iv), REG(d0, int enc))
{
	return(EVP_CipherInit(ctx, cipher, key, iv, enc));
}

int ASM SAVEDS EVP_CipherInit_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *cipher), REG(a2, ENGINE *impl), REG(a3, const unsigned char *key), REG(d0, const unsigned char *iv), REG(d1, int enc))
{
	return(EVP_CipherInit_ex(ctx, cipher, impl, key, iv, enc));
}

int ASM SAVEDS EVP_CipherUpdate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl), REG(a3, const unsigned char *in), REG(d0, int inl))
{
	return(EVP_CipherUpdate(ctx, out, outl, in, inl));
}

int ASM SAVEDS EVP_CipherFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *outm), REG(a2, int *outl))
{
	return(EVP_CipherFinal(ctx, outm, outl));
}

int ASM SAVEDS EVP_CipherFinal_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *outm), REG(a2, int *outl))
{
	return(EVP_CipherFinal_ex(ctx, outm, outl));
}

int ASM SAVEDS EVP_SignFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, unsigned char *md), REG(a2, unsigned int *s), REG(a3, EVP_PKEY *pkey))
{
	return(EVP_SignFinal(ctx, md, s, pkey));
}

int ASM SAVEDS EVP_VerifyFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, unsigned char *sigbuf), REG(d0, unsigned int siglen), REG(a2, EVP_PKEY *pkey))
{
	return(EVP_VerifyFinal(ctx, sigbuf, siglen, pkey));
}

int ASM SAVEDS EVP_OpenInit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *type), REG(a2, unsigned char *ek), REG(d0, int ekl), REG(a3, unsigned char *iv), REG(d1, EVP_PKEY *priv))
{
	return(EVP_OpenInit(ctx, type, ek, ekl, iv, priv));
}

int ASM SAVEDS EVP_OpenFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl))
{
	return(EVP_OpenFinal(ctx, out, outl));
}

int ASM SAVEDS EVP_SealInit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const EVP_CIPHER *type), REG(a2, unsigned char **ek), REG(a3, int *ekl), REG(d0, unsigned char *iv), REG(d1, EVP_PKEY **pubk), REG(d2, int npubk))
{
	return(EVP_SealInit(ctx, type, ek, ekl, iv, pubk, npubk));
}

int ASM SAVEDS EVP_SealFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl))
{
	return(EVP_SealFinal(ctx, out, outl));
}

void ASM SAVEDS EVP_EncodeInit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_ENCODE_CTX *ctx))
{
	EVP_EncodeInit(ctx);
}

void ASM SAVEDS EVP_EncodeUpdate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_ENCODE_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl), REG(a3, unsigned char *in), REG(d0, int inl))
{
	EVP_EncodeUpdate(ctx, out, outl, in, inl);
}

void ASM SAVEDS EVP_EncodeFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_ENCODE_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl))
{
	EVP_EncodeFinal(ctx, out, outl);
}

int ASM SAVEDS EVP_EncodeBlock_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *t), REG(a1, const unsigned char *f), REG(d0, int n))
{
	return(EVP_EncodeBlock(t, f, n));
}

void ASM SAVEDS EVP_DecodeInit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_ENCODE_CTX *ctx))
{
	EVP_DecodeInit(ctx);
}

int ASM SAVEDS EVP_DecodeUpdate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_ENCODE_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl), REG(a3, unsigned char *in), REG(d0, int inl))
{
	return(EVP_DecodeUpdate(ctx, out, outl, in, inl));
}

int ASM SAVEDS EVP_DecodeFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_ENCODE_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl))
{
	return(EVP_DecodeFinal(ctx, out, outl));
}

int ASM SAVEDS EVP_DecodeBlock_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *t), REG(a1, const unsigned char *f), REG(d0, int n))
{
	return(EVP_DecodeBlock(t, f, n));
}

void ASM SAVEDS EVP_CIPHER_CTX_init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *a))
{
	EVP_CIPHER_CTX_init(a);
}

int ASM SAVEDS EVP_CIPHER_CTX_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *a))
{
	return(EVP_CIPHER_CTX_cleanup(a));
}

int ASM SAVEDS EVP_CIPHER_CTX_set_key_length_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *x), REG(d0, int keylen))
{
	return(EVP_CIPHER_CTX_set_key_length(x, keylen));
}

int ASM SAVEDS EVP_CIPHER_CTX_set_padding_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *c), REG(d0, int pad))
{
	return(EVP_CIPHER_CTX_set_padding(c, pad));
}

int ASM SAVEDS EVP_CIPHER_CTX_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(d0, int type), REG(d1, int arg), REG(a1, void *ptr))
{
	return(EVP_CIPHER_CTX_ctrl(ctx, type, arg, ptr));
}

BIO_METHOD * ASM SAVEDS BIO_f_md_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_md());
}

BIO_METHOD * ASM SAVEDS BIO_f_base64_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_base64());
}

BIO_METHOD * ASM SAVEDS BIO_f_cipher_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_cipher());
}

BIO_METHOD * ASM SAVEDS BIO_f_reliable_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_reliable());
}

void ASM SAVEDS BIO_set_cipher_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, const EVP_CIPHER *c), REG(a2, unsigned char *k), REG(a3, unsigned char *i), REG(d0, int enc))
{
	BIO_set_cipher(b, c, k, i, enc);
}

const EVP_MD * ASM SAVEDS EVP_md_null_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_md_null());
}

const EVP_MD * ASM SAVEDS EVP_md2_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_md2());
}

const EVP_MD * ASM SAVEDS EVP_md4_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_md4());
}

const EVP_MD * ASM SAVEDS EVP_md5_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_md5());
}

const EVP_MD * ASM SAVEDS EVP_sha_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_sha());
}

const EVP_MD * ASM SAVEDS EVP_sha1_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_sha1());
}

const EVP_MD * ASM SAVEDS EVP_dss_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_dss());
}

const EVP_MD * ASM SAVEDS EVP_dss1_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_dss1());
}

const EVP_MD * ASM SAVEDS EVP_mdc2_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_mdc2());
}

const EVP_MD * ASM SAVEDS EVP_ripemd160_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_ripemd160());
}

const EVP_CIPHER * ASM SAVEDS EVP_enc_null_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_enc_null());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_ecb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ecb());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_ede_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_ede3_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede3());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_ede_ecb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede_ecb());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_ede3_ecb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede3_ecb());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_cfb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_cfb());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_ede_cfb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede_cfb());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_ede3_cfb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede3_cfb());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_ofb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ofb());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_ede_ofb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede_ofb());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_ede3_ofb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede3_ofb());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_ede_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_des_ede3_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_des_ede3_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_desx_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_desx_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_rc4_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc4());
}

const EVP_CIPHER * ASM SAVEDS EVP_rc4_40_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc4_40());
}

const EVP_CIPHER * ASM SAVEDS EVP_idea_ecb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_idea_ecb());
}

const EVP_CIPHER * ASM SAVEDS EVP_idea_cfb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_idea_cfb());
}

const EVP_CIPHER * ASM SAVEDS EVP_idea_ofb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_idea_ofb());
}

const EVP_CIPHER * ASM SAVEDS EVP_idea_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_idea_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_rc2_ecb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc2_ecb());
}

const EVP_CIPHER * ASM SAVEDS EVP_rc2_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc2_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_rc2_40_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc2_40_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_rc2_64_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc2_64_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_rc2_cfb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc2_cfb());
}

const EVP_CIPHER * ASM SAVEDS EVP_rc2_ofb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc2_ofb());
}

const EVP_CIPHER * ASM SAVEDS EVP_bf_ecb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_bf_ecb());
}

const EVP_CIPHER * ASM SAVEDS EVP_bf_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_bf_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_bf_cfb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_bf_cfb());
}

const EVP_CIPHER * ASM SAVEDS EVP_bf_ofb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_bf_ofb());
}

const EVP_CIPHER * ASM SAVEDS EVP_cast5_ecb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_cast5_ecb());
}

const EVP_CIPHER * ASM SAVEDS EVP_cast5_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_cast5_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_cast5_cfb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_cast5_cfb());
}

const EVP_CIPHER * ASM SAVEDS EVP_cast5_ofb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_cast5_ofb());
}

const EVP_CIPHER * ASM SAVEDS EVP_rc5_32_12_16_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc5_32_12_16_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_rc5_32_12_16_ecb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc5_32_12_16_ecb());
}

const EVP_CIPHER * ASM SAVEDS EVP_rc5_32_12_16_cfb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc5_32_12_16_cfb());
}

const EVP_CIPHER * ASM SAVEDS EVP_rc5_32_12_16_ofb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_rc5_32_12_16_ofb());
}

const EVP_CIPHER * ASM SAVEDS EVP_aes_128_ecb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_128_ecb());
}

const EVP_CIPHER * ASM SAVEDS EVP_aes_128_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_128_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_aes_128_cfb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_128_cfb());
}

const EVP_CIPHER * ASM SAVEDS EVP_aes_128_ofb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_128_ofb());
}

const EVP_CIPHER * ASM SAVEDS EVP_aes_192_ecb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_192_ecb());
}

const EVP_CIPHER * ASM SAVEDS EVP_aes_192_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_192_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_aes_192_cfb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_192_cfb());
}

const EVP_CIPHER * ASM SAVEDS EVP_aes_192_ofb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_192_ofb());
}

const EVP_CIPHER * ASM SAVEDS EVP_aes_256_ecb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_256_ecb());
}

const EVP_CIPHER * ASM SAVEDS EVP_aes_256_cbc_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_256_cbc());
}

const EVP_CIPHER * ASM SAVEDS EVP_aes_256_cfb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_256_cfb());
}

const EVP_CIPHER * ASM SAVEDS EVP_aes_256_ofb_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_aes_256_ofb());
}

void ASM SAVEDS OPENSSL_add_all_algorithms_noconf_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	OPENSSL_add_all_algorithms_noconf();
}

void ASM SAVEDS OPENSSL_add_all_algorithms_conf_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	OPENSSL_add_all_algorithms_conf();
}

void ASM SAVEDS OpenSSL_add_all_ciphers_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	OpenSSL_add_all_ciphers();
}

void ASM SAVEDS OpenSSL_add_all_digests_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	OpenSSL_add_all_digests();
}

int ASM SAVEDS EVP_add_cipher_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_CIPHER *cipher))
{
	return(EVP_add_cipher(cipher));
}

int ASM SAVEDS EVP_add_digest_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_MD *digest))
{
	return(EVP_add_digest(digest));
}

const EVP_CIPHER * ASM SAVEDS EVP_get_cipherbyname_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name))
{
	return(EVP_get_cipherbyname(name));
}

const EVP_MD * ASM SAVEDS EVP_get_digestbyname_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name))
{
	return(EVP_get_digestbyname(name));
}

void ASM SAVEDS EVP_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	EVP_cleanup();
}

int ASM SAVEDS EVP_PKEY_decrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *dec_key), REG(a1, unsigned char *enc_key), REG(d0, int enc_key_len), REG(a2, EVP_PKEY *private_key))
{
	return(EVP_PKEY_decrypt(dec_key, enc_key, enc_key_len, private_key));
}

int ASM SAVEDS EVP_PKEY_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *enc_key), REG(a1, unsigned char *key), REG(d0, int key_len), REG(a2, EVP_PKEY *pub_key))
{
	return(EVP_PKEY_encrypt(enc_key, key, key_len, pub_key));
}

int ASM SAVEDS EVP_PKEY_type_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type))
{
	return(EVP_PKEY_type(type));
}

int ASM SAVEDS EVP_PKEY_bits_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY_bits(pkey));
}

int ASM SAVEDS EVP_PKEY_size_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY_size(pkey));
}

int ASM SAVEDS EVP_PKEY_assign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(d0, int type), REG(a1, char *key))
{
	return(EVP_PKEY_assign(pkey, type, key));
}

int ASM SAVEDS EVP_PKEY_set1_RSA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(a1, struct rsa_st *key))
{
	return(EVP_PKEY_set1_RSA(pkey, key));
}

struct rsa_st * ASM SAVEDS EVP_PKEY_get1_RSA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY_get1_RSA(pkey));
}

int ASM SAVEDS EVP_PKEY_set1_DSA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(a1, struct dsa_st *key))
{
	return(EVP_PKEY_set1_DSA(pkey, key));
}

struct dsa_st * ASM SAVEDS EVP_PKEY_get1_DSA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY_get1_DSA(pkey));
}

int ASM SAVEDS EVP_PKEY_set1_DH_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(a1, struct dh_st *key))
{
	return(EVP_PKEY_set1_DH(pkey, key));
}

struct dh_st * ASM SAVEDS EVP_PKEY_get1_DH_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY_get1_DH(pkey));
}

EVP_PKEY * ASM SAVEDS EVP_PKEY_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EVP_PKEY_new());
}

void ASM SAVEDS EVP_PKEY_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	EVP_PKEY_free(pkey);
}

EVP_PKEY * ASM SAVEDS d2i_PublicKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, EVP_PKEY **a), REG(a1, unsigned char **pp), REG(d1, long length))
{
	return(d2i_PublicKey(type, a, pp, length));
}

int ASM SAVEDS i2d_PublicKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *a), REG(a1, unsigned char **pp))
{
	return(i2d_PublicKey(a, pp));
}

EVP_PKEY * ASM SAVEDS d2i_PrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, EVP_PKEY **a), REG(a1, unsigned char **pp), REG(d1, long length))
{
	return(d2i_PrivateKey(type, a, pp, length));
}

EVP_PKEY * ASM SAVEDS d2i_AutoPrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_AutoPrivateKey(a, pp, length));
}

int ASM SAVEDS i2d_PrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *a), REG(a1, unsigned char **pp))
{
	return(i2d_PrivateKey(a, pp));
}

int ASM SAVEDS EVP_PKEY_copy_parameters_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *to), REG(a1, EVP_PKEY *from))
{
	return(EVP_PKEY_copy_parameters(to, from));
}

int ASM SAVEDS EVP_PKEY_missing_parameters_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY_missing_parameters(pkey));
}

int ASM SAVEDS EVP_PKEY_save_parameters_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(d0, int mode))
{
	return(EVP_PKEY_save_parameters(pkey, mode));
}

int ASM SAVEDS EVP_PKEY_cmp_parameters_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *a), REG(a1, EVP_PKEY *b))
{
	return(EVP_PKEY_cmp_parameters(a, b));
}

int ASM SAVEDS EVP_CIPHER_type_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_CIPHER *ctx))
{
	return(EVP_CIPHER_type(ctx));
}

int ASM SAVEDS EVP_CIPHER_param_to_asn1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *c), REG(a1, ASN1_TYPE *type))
{
	return(EVP_CIPHER_param_to_asn1(c, type));
}

int ASM SAVEDS EVP_CIPHER_asn1_to_param_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *c), REG(a1, ASN1_TYPE *type))
{
	return(EVP_CIPHER_asn1_to_param(c, type));
}

int ASM SAVEDS EVP_CIPHER_set_asn1_iv_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *c), REG(a1, ASN1_TYPE *type))
{
	return(EVP_CIPHER_set_asn1_iv(c, type));
}

int ASM SAVEDS EVP_CIPHER_get_asn1_iv_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *c), REG(a1, ASN1_TYPE *type))
{
	return(EVP_CIPHER_get_asn1_iv(c, type));
}

int ASM SAVEDS PKCS5_PBE_keyivgen_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, ASN1_TYPE *param), REG(a3, const EVP_CIPHER *cipher), REG(d1, const EVP_MD *md), REG(d2, int en_de))
{
	return(PKCS5_PBE_keyivgen(ctx, pass, passlen, param, cipher, md, en_de));
}

int ASM SAVEDS PKCS5_PBKDF2_HMAC_SHA1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *pass), REG(d0, int passlen), REG(a1, unsigned char *salt), REG(d1, int saltlen), REG(d2, int iter), REG(d3, int keylen), REG(a2, unsigned char *out))
{
	return(PKCS5_PBKDF2_HMAC_SHA1(pass, passlen, salt, saltlen, iter, keylen, out));
}

int ASM SAVEDS PKCS5_v2_PBE_keyivgen_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, ASN1_TYPE *param), REG(a3, const EVP_CIPHER *cipher), REG(d1, const EVP_MD *md), REG(d2, int en_de))
{
	return(PKCS5_v2_PBE_keyivgen(ctx, pass, passlen, param, cipher, md, en_de));
}

void ASM SAVEDS PKCS5_PBE_add_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	PKCS5_PBE_add();
}

int ASM SAVEDS EVP_PBE_CipherInit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OBJECT *pbe_obj), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, ASN1_TYPE *param), REG(a3, EVP_CIPHER_CTX *ctx), REG(d1, int en_de))
{
	return(EVP_PBE_CipherInit(pbe_obj, pass, passlen, param, ctx, en_de));
}

int ASM SAVEDS EVP_PBE_alg_add_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int nid), REG(a0, const EVP_CIPHER *cipher), REG(a1, const EVP_MD *md), REG(a2, EVP_PBE_KEYGEN *keygen))
{
	return(EVP_PBE_alg_add(nid, cipher, md, keygen));
}

void ASM SAVEDS EVP_PBE_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	EVP_PBE_cleanup();
}

void ASM SAVEDS ERR_load_EVP_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_EVP_strings();
}

void ASM SAVEDS HMAC_CTX_init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx))
{
	HMAC_CTX_init(ctx);
}

void ASM SAVEDS HMAC_CTX_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx))
{
	HMAC_CTX_cleanup(ctx);
}

void ASM SAVEDS HMAC_Init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx), REG(a1, const void *key), REG(d0, int len), REG(a2, const EVP_MD *md))
{
	HMAC_Init(ctx, key, len, md);
}

void ASM SAVEDS HMAC_Init_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx), REG(a1, const void *key), REG(d0, int len), REG(a2, const EVP_MD *md), REG(a3, ENGINE *impl))
{
	HMAC_Init_ex(ctx, key, len, md, impl);
}

void ASM SAVEDS HMAC_Update_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx), REG(a1, const unsigned char *data), REG(d0, int len))
{
	HMAC_Update(ctx, data, len);
}

void ASM SAVEDS HMAC_Final_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, HMAC_CTX *ctx), REG(a1, unsigned char *md), REG(a2, unsigned int *len))
{
	HMAC_Final(ctx, md, len);
}

unsigned char * ASM SAVEDS HMAC_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_MD *evp_md), REG(a1, const void *key), REG(d0, int key_len), REG(a2, const unsigned char *d), REG(d1, int n), REG(a3, unsigned char *md), REG(d2, unsigned int *md_len))
{
	return(HMAC(evp_md, key, key_len, d, n, md, md_len));
}

KRB5_ENCDATA * ASM SAVEDS KRB5_ENCDATA_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_ENCDATA_new());
}

void ASM SAVEDS KRB5_ENCDATA_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_ENCDATA *a))
{
	KRB5_ENCDATA_free(a);
}

KRB5_ENCDATA * ASM SAVEDS d2i_KRB5_ENCDATA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_ENCDATA **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_ENCDATA(a, in, len));
}

int ASM SAVEDS i2d_KRB5_ENCDATA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_ENCDATA *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_ENCDATA(a, out));
}

const ASN1_ITEM * ASM SAVEDS KRB5_ENCDATA_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_ENCDATA_it());
}

KRB5_PRINCNAME * ASM SAVEDS KRB5_PRINCNAME_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_PRINCNAME_new());
}

void ASM SAVEDS KRB5_PRINCNAME_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_PRINCNAME *a))
{
	KRB5_PRINCNAME_free(a);
}

KRB5_PRINCNAME * ASM SAVEDS d2i_KRB5_PRINCNAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_PRINCNAME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_PRINCNAME(a, in, len));
}

int ASM SAVEDS i2d_KRB5_PRINCNAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_PRINCNAME *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_PRINCNAME(a, out));
}

const ASN1_ITEM * ASM SAVEDS KRB5_PRINCNAME_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_PRINCNAME_it());
}

KRB5_TKTBODY * ASM SAVEDS KRB5_TKTBODY_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_TKTBODY_new());
}

void ASM SAVEDS KRB5_TKTBODY_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_TKTBODY *a))
{
	KRB5_TKTBODY_free(a);
}

KRB5_TKTBODY * ASM SAVEDS d2i_KRB5_TKTBODY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_TKTBODY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_TKTBODY(a, in, len));
}

int ASM SAVEDS i2d_KRB5_TKTBODY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_TKTBODY *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_TKTBODY(a, out));
}

const ASN1_ITEM * ASM SAVEDS KRB5_TKTBODY_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_TKTBODY_it());
}

KRB5_APREQBODY * ASM SAVEDS KRB5_APREQBODY_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_APREQBODY_new());
}

void ASM SAVEDS KRB5_APREQBODY_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_APREQBODY *a))
{
	KRB5_APREQBODY_free(a);
}

KRB5_APREQBODY * ASM SAVEDS d2i_KRB5_APREQBODY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_APREQBODY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_APREQBODY(a, in, len));
}

int ASM SAVEDS i2d_KRB5_APREQBODY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_APREQBODY *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_APREQBODY(a, out));
}

const ASN1_ITEM * ASM SAVEDS KRB5_APREQBODY_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_APREQBODY_it());
}

KRB5_TICKET * ASM SAVEDS KRB5_TICKET_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_TICKET_new());
}

void ASM SAVEDS KRB5_TICKET_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_TICKET *a))
{
	KRB5_TICKET_free(a);
}

KRB5_TICKET * ASM SAVEDS d2i_KRB5_TICKET_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_TICKET **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_TICKET(a, in, len));
}

int ASM SAVEDS i2d_KRB5_TICKET_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_TICKET *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_TICKET(a, out));
}

const ASN1_ITEM * ASM SAVEDS KRB5_TICKET_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_TICKET_it());
}

KRB5_APREQ * ASM SAVEDS KRB5_APREQ_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_APREQ_new());
}

void ASM SAVEDS KRB5_APREQ_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_APREQ *a))
{
	KRB5_APREQ_free(a);
}

KRB5_APREQ * ASM SAVEDS d2i_KRB5_APREQ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_APREQ **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_APREQ(a, in, len));
}

int ASM SAVEDS i2d_KRB5_APREQ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_APREQ *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_APREQ(a, out));
}

const ASN1_ITEM * ASM SAVEDS KRB5_APREQ_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_APREQ_it());
}

KRB5_CHECKSUM * ASM SAVEDS KRB5_CHECKSUM_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_CHECKSUM_new());
}

void ASM SAVEDS KRB5_CHECKSUM_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_CHECKSUM *a))
{
	KRB5_CHECKSUM_free(a);
}

KRB5_CHECKSUM * ASM SAVEDS d2i_KRB5_CHECKSUM_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_CHECKSUM **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_CHECKSUM(a, in, len));
}

int ASM SAVEDS i2d_KRB5_CHECKSUM_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_CHECKSUM *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_CHECKSUM(a, out));
}

const ASN1_ITEM * ASM SAVEDS KRB5_CHECKSUM_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_CHECKSUM_it());
}

KRB5_ENCKEY * ASM SAVEDS KRB5_ENCKEY_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_ENCKEY_new());
}

void ASM SAVEDS KRB5_ENCKEY_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_ENCKEY *a))
{
	KRB5_ENCKEY_free(a);
}

KRB5_ENCKEY * ASM SAVEDS d2i_KRB5_ENCKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_ENCKEY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_ENCKEY(a, in, len));
}

int ASM SAVEDS i2d_KRB5_ENCKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_ENCKEY *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_ENCKEY(a, out));
}

const ASN1_ITEM * ASM SAVEDS KRB5_ENCKEY_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_ENCKEY_it());
}

KRB5_AUTHDATA * ASM SAVEDS KRB5_AUTHDATA_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_AUTHDATA_new());
}

void ASM SAVEDS KRB5_AUTHDATA_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHDATA *a))
{
	KRB5_AUTHDATA_free(a);
}

KRB5_AUTHDATA * ASM SAVEDS d2i_KRB5_AUTHDATA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHDATA **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_AUTHDATA(a, in, len));
}

int ASM SAVEDS i2d_KRB5_AUTHDATA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHDATA *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_AUTHDATA(a, out));
}

const ASN1_ITEM * ASM SAVEDS KRB5_AUTHDATA_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_AUTHDATA_it());
}

KRB5_AUTHENTBODY * ASM SAVEDS KRB5_AUTHENTBODY_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_AUTHENTBODY_new());
}

void ASM SAVEDS KRB5_AUTHENTBODY_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHENTBODY *a))
{
	KRB5_AUTHENTBODY_free(a);
}

KRB5_AUTHENTBODY * ASM SAVEDS d2i_KRB5_AUTHENTBODY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHENTBODY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_AUTHENTBODY(a, in, len));
}

int ASM SAVEDS i2d_KRB5_AUTHENTBODY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHENTBODY *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_AUTHENTBODY(a, out));
}

const ASN1_ITEM * ASM SAVEDS KRB5_AUTHENTBODY_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_AUTHENTBODY_it());
}

KRB5_AUTHENT * ASM SAVEDS KRB5_AUTHENT_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_AUTHENT_new());
}

void ASM SAVEDS KRB5_AUTHENT_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHENT *a))
{
	KRB5_AUTHENT_free(a);
}

KRB5_AUTHENT * ASM SAVEDS d2i_KRB5_AUTHENT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHENT **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_KRB5_AUTHENT(a, in, len));
}

int ASM SAVEDS i2d_KRB5_AUTHENT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, KRB5_AUTHENT *a), REG(a1, unsigned char **out))
{
	return(i2d_KRB5_AUTHENT(a, out));
}

const ASN1_ITEM * ASM SAVEDS KRB5_AUTHENT_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(KRB5_AUTHENT_it());
}

LHASH * ASM SAVEDS lh_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, LHASH_HASH_FN_TYPE h), REG(d1, LHASH_COMP_FN_TYPE c))
{
	return(lh_new(h, c));
}

void ASM SAVEDS lh_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *lh))
{
	lh_free(lh);
}

void * ASM SAVEDS lh_insert_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *lh), REG(a1, const void *data))
{
	return(lh_insert(lh, data));
}

void * ASM SAVEDS lh_delete_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *lh), REG(a1, const void *data))
{
	return(lh_delete(lh, data));
}

void * ASM SAVEDS lh_retrieve_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *lh), REG(a1, const void *data))
{
	return(lh_retrieve(lh, data));
}

void ASM SAVEDS lh_doall_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *lh), REG(d0, LHASH_DOALL_FN_TYPE func))
{
	lh_doall(lh, func);
}

void ASM SAVEDS lh_doall_arg_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *lh), REG(d0, LHASH_DOALL_ARG_FN_TYPE func), REG(a1, void *arg))
{
	lh_doall_arg(lh, func, arg);
}

unsigned long ASM SAVEDS lh_strhash_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *c))
{
	return(lh_strhash(c));
}

unsigned long ASM SAVEDS lh_num_items_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const LHASH *lh))
{
	return(lh_num_items(lh));
}

void ASM SAVEDS lh_stats_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const LHASH *lh), REG(a1, BIO *out))
{
	lh_stats_bio(lh, out);
}

void ASM SAVEDS lh_node_stats_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const LHASH *lh), REG(a1, BIO *out))
{
	lh_node_stats_bio(lh, out);
}

void ASM SAVEDS lh_node_usage_stats_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const LHASH *lh), REG(a1, BIO *out))
{
	lh_node_usage_stats_bio(lh, out);
}

int ASM SAVEDS OBJ_NAME_init_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OBJ_NAME_init());
}

int ASM SAVEDS OBJ_NAME_new_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long (*hash_func)(const char *)), REG(a1, int (*cmp_func)(const char *, const char *)), REG(a2, void (*free_func)(const char *, int, const char *)))
{
	return(OBJ_NAME_new_index(hash_func, cmp_func, free_func));
}

const char * ASM SAVEDS OBJ_NAME_get_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(d0, int type))
{
	return(OBJ_NAME_get(name, type));
}

int ASM SAVEDS OBJ_NAME_add_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(d0, int type), REG(a1, const char *data))
{
	return(OBJ_NAME_add(name, type, data));
}

int ASM SAVEDS OBJ_NAME_remove_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(d0, int type))
{
	return(OBJ_NAME_remove(name, type));
}

void ASM SAVEDS OBJ_NAME_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type))
{
	OBJ_NAME_cleanup(type);
}

void ASM SAVEDS OBJ_NAME_do_all_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, void (*fn)(const OBJ_NAME *, void *arg)), REG(a1, void *arg))
{
	OBJ_NAME_do_all(type, fn, arg);
}

void ASM SAVEDS OBJ_NAME_do_all_sorted_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, void (*fn)(const OBJ_NAME *, void *arg)), REG(a1, void *arg))
{
	OBJ_NAME_do_all_sorted(type, fn, arg);
}

ASN1_OBJECT * ASM SAVEDS OBJ_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_OBJECT *o))
{
	return(OBJ_dup(o));
}

ASN1_OBJECT * ASM SAVEDS OBJ_nid2obj_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int n))
{
	return(OBJ_nid2obj(n));
}

const char * ASM SAVEDS OBJ_nid2ln_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int n))
{
	return(OBJ_nid2ln(n));
}

const char * ASM SAVEDS OBJ_nid2sn_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int n))
{
	return(OBJ_nid2sn(n));
}

int ASM SAVEDS OBJ_obj2nid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_OBJECT *o))
{
	return(OBJ_obj2nid(o));
}

ASN1_OBJECT * ASM SAVEDS OBJ_txt2obj_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *s), REG(d0, int no_name))
{
	return(OBJ_txt2obj(s, no_name));
}

int ASM SAVEDS OBJ_obj2txt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int buf_len), REG(a1, const ASN1_OBJECT *a), REG(d1, int no_name))
{
	return(OBJ_obj2txt(buf, buf_len, a, no_name));
}

int ASM SAVEDS OBJ_txt2nid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *s))
{
	return(OBJ_txt2nid(s));
}

int ASM SAVEDS OBJ_ln2nid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *s))
{
	return(OBJ_ln2nid(s));
}

int ASM SAVEDS OBJ_sn2nid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *s))
{
	return(OBJ_sn2nid(s));
}

int ASM SAVEDS OBJ_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_OBJECT *a), REG(a1, const ASN1_OBJECT *b))
{
	return(OBJ_cmp(a, b));
}

const char * ASM SAVEDS OBJ_bsearch_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *key), REG(a1, const char *base), REG(d0, int num), REG(d1, int size), REG(a2, int (*cmp)(const void *, const void *)))
{
	return(OBJ_bsearch(key, base, num, size, cmp));
}

int ASM SAVEDS OBJ_new_nid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int num))
{
	return(OBJ_new_nid(num));
}

int ASM SAVEDS OBJ_add_object_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_OBJECT *obj))
{
	return(OBJ_add_object(obj));
}

int ASM SAVEDS OBJ_create_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *oid), REG(a1, const char *sn), REG(a2, const char *ln))
{
	return(OBJ_create(oid, sn, ln));
}

void ASM SAVEDS OBJ_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	OBJ_cleanup();
}

int ASM SAVEDS OBJ_create_objects_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *in))
{
	return(OBJ_create_objects(in));
}

void ASM SAVEDS ERR_load_OBJ_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_OBJ_strings();
}

OCSP_RESPONSE * ASM SAVEDS OCSP_sendreq_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *b), REG(a1, char *path), REG(a2, OCSP_REQUEST *req))
{
	return(OCSP_sendreq_bio(b, path, req));
}

OCSP_CERTID * ASM SAVEDS OCSP_cert_to_id_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_MD *dgst), REG(a1, X509 *subject), REG(a2, X509 *issuer))
{
	return(OCSP_cert_to_id(dgst, subject, issuer));
}

OCSP_CERTID * ASM SAVEDS OCSP_cert_id_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_MD *dgst), REG(a1, X509_NAME *issuerName), REG(a2, ASN1_BIT_STRING*issuerKey), REG(a3, ASN1_INTEGER *serialNumber))
{
	return(OCSP_cert_id_new(dgst, issuerName, issuerKey, serialNumber));
}

OCSP_ONEREQ * ASM SAVEDS OCSP_request_add0_id_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, OCSP_CERTID *cid))
{
	return(OCSP_request_add0_id(req, cid));
}

int ASM SAVEDS OCSP_request_add1_nonce_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, unsigned char *val), REG(d0, int len))
{
	return(OCSP_request_add1_nonce(req, val, len));
}

int ASM SAVEDS OCSP_basic_add1_nonce_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *resp), REG(a1, unsigned char *val), REG(d0, int len))
{
	return(OCSP_basic_add1_nonce(resp, val, len));
}

int ASM SAVEDS OCSP_check_nonce_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, OCSP_BASICRESP *bs))
{
	return(OCSP_check_nonce(req, bs));
}

int ASM SAVEDS OCSP_copy_nonce_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *resp), REG(a1, OCSP_REQUEST *req))
{
	return(OCSP_copy_nonce(resp, req));
}

int ASM SAVEDS OCSP_request_set1_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, X509_NAME *nm))
{
	return(OCSP_request_set1_name(req, nm));
}

int ASM SAVEDS OCSP_request_add1_cert_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, X509 *cert))
{
	return(OCSP_request_add1_cert(req, cert));
}

int ASM SAVEDS OCSP_request_sign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, X509 *signer), REG(a2, EVP_PKEY *key), REG(a3, const EVP_MD *dgst), REG(d0, STACK_OF(X509) *certs), REG(d1, unsigned long flags))
{
	return(OCSP_request_sign(req, signer, key, dgst, certs, flags));
}

int ASM SAVEDS OCSP_response_status_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPONSE *resp))
{
	return(OCSP_response_status(resp));
}

OCSP_BASICRESP * ASM SAVEDS OCSP_response_get1_basic_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPONSE *resp))
{
	return(OCSP_response_get1_basic(resp));
}

int ASM SAVEDS OCSP_resp_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *bs))
{
	return(OCSP_resp_count(bs));
}

OCSP_SINGLERESP * ASM SAVEDS OCSP_resp_get0_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *bs), REG(d0, int idx))
{
	return(OCSP_resp_get0(bs, idx));
}

int ASM SAVEDS OCSP_resp_find_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *bs), REG(a1, OCSP_CERTID *id), REG(d0, int last))
{
	return(OCSP_resp_find(bs, id, last));
}

int ASM SAVEDS OCSP_single_get0_status_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *single), REG(a1, int *reason), REG(a2, ASN1_GENERALIZEDTIME **revtime), REG(a3, ASN1_GENERALIZEDTIME **thisupd), REG(d0, ASN1_GENERALIZEDTIME **nextupd))
{
	return(OCSP_single_get0_status(single, reason, revtime, thisupd, nextupd));
}

int ASM SAVEDS OCSP_resp_find_status_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *bs), REG(a1, OCSP_CERTID *id), REG(a2, int *status), REG(a3, int *reason), REG(d0, ASN1_GENERALIZEDTIME **revtime), REG(d1, ASN1_GENERALIZEDTIME **thisupd), REG(d2, ASN1_GENERALIZEDTIME **nextupd))
{
	return(OCSP_resp_find_status(bs, id, status, reason, revtime, thisupd, nextupd));
}

int ASM SAVEDS OCSP_check_validity_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_GENERALIZEDTIME *thisupd), REG(a1, ASN1_GENERALIZEDTIME *nextupd), REG(d0, long sec), REG(d1, long maxsec))
{
	return(OCSP_check_validity(thisupd, nextupd, sec, maxsec));
}

int ASM SAVEDS OCSP_request_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(a1, STACK_OF(X509) *certs), REG(a2, X509_STORE *store), REG(d0, unsigned long flags))
{
	return(OCSP_request_verify(req, certs, store, flags));
}

int ASM SAVEDS OCSP_parse_url_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *url), REG(a1, char **phost), REG(a2, char **pport), REG(a3, char **ppath), REG(d0, int *pssl))
{
	return(OCSP_parse_url(url, phost, pport, ppath, pssl));
}

int ASM SAVEDS OCSP_id_issuer_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTID *a), REG(a1, OCSP_CERTID *b))
{
	return(OCSP_id_issuer_cmp(a, b));
}

int ASM SAVEDS OCSP_id_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTID *a), REG(a1, OCSP_CERTID *b))
{
	return(OCSP_id_cmp(a, b));
}

int ASM SAVEDS OCSP_request_onereq_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req))
{
	return(OCSP_request_onereq_count(req));
}

OCSP_ONEREQ * ASM SAVEDS OCSP_request_onereq_get0_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req), REG(d0, int i))
{
	return(OCSP_request_onereq_get0(req, i));
}

OCSP_CERTID * ASM SAVEDS OCSP_onereq_get0_id_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *one))
{
	return(OCSP_onereq_get0_id(one));
}

int ASM SAVEDS OCSP_id_get0_info_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_OCTET_STRING **piNameHash), REG(a1, ASN1_OBJECT **pmd), REG(a2, ASN1_OCTET_STRING **pikeyHash), REG(a3, ASN1_INTEGER **pserial), REG(d0, OCSP_CERTID *cid))
{
	return(OCSP_id_get0_info(piNameHash, pmd, pikeyHash, pserial, cid));
}

int ASM SAVEDS OCSP_request_is_signed_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *req))
{
	return(OCSP_request_is_signed(req));
}

OCSP_RESPONSE * ASM SAVEDS OCSP_response_create_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int status), REG(a0, OCSP_BASICRESP *bs))
{
	return(OCSP_response_create(status, bs));
}

OCSP_SINGLERESP * ASM SAVEDS OCSP_basic_add1_status_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *rsp), REG(a1, OCSP_CERTID *cid), REG(d0, int status), REG(d1, int reason), REG(a2, ASN1_TIME *revtime), REG(a3, ASN1_TIME *thisupd), REG(d2, ASN1_TIME *nextupd))
{
	return(OCSP_basic_add1_status(rsp, cid, status, reason, revtime, thisupd, nextupd));
}

int ASM SAVEDS OCSP_basic_add1_cert_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *resp), REG(a1, X509 *cert))
{
	return(OCSP_basic_add1_cert(resp, cert));
}

int ASM SAVEDS OCSP_basic_sign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *brsp), REG(a1, X509 *signer), REG(a2, EVP_PKEY *key), REG(a3, const EVP_MD *dgst), REG(d0, STACK_OF(X509) *certs), REG(d1, unsigned long flags))
{
	return(OCSP_basic_sign(brsp, signer, key, dgst, certs, flags));
}

ASN1_STRING * ASM SAVEDS ASN1_STRING_encode_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_STRING *s), REG(a1, int (*i2d)()), REG(a2, char *data), REG(a3, STACK_OF(ASN1_OBJECT) *sk))
{
	return(ASN1_STRING_encode(s, i2d, data, sk));
}

X509_EXTENSION * ASM SAVEDS OCSP_crlID_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *url), REG(a1, long *n), REG(a2, char *tim))
{
	return(OCSP_crlID_new(url, n, tim));
}

X509_EXTENSION * ASM SAVEDS OCSP_accept_responses_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char **oids))
{
	return(OCSP_accept_responses_new(oids));
}

X509_EXTENSION * ASM SAVEDS OCSP_archive_cutoff_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char*tim))
{
	return(OCSP_archive_cutoff_new(tim));
}

X509_EXTENSION * ASM SAVEDS OCSP_url_svcloc_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME*issuer), REG(a1, char **urls))
{
	return(OCSP_url_svcloc_new(issuer, urls));
}

int ASM SAVEDS OCSP_REQUEST_get_ext_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x))
{
	return(OCSP_REQUEST_get_ext_count(x));
}

int ASM SAVEDS OCSP_REQUEST_get_ext_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(OCSP_REQUEST_get_ext_by_NID(x, nid, lastpos));
}

int ASM SAVEDS OCSP_REQUEST_get_ext_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(OCSP_REQUEST_get_ext_by_OBJ(x, obj, lastpos));
}

int ASM SAVEDS OCSP_REQUEST_get_ext_by_critical_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(OCSP_REQUEST_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * ASM SAVEDS OCSP_REQUEST_get_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(d0, int loc))
{
	return(OCSP_REQUEST_get_ext(x, loc));
}

X509_EXTENSION * ASM SAVEDS OCSP_REQUEST_delete_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(d0, int loc))
{
	return(OCSP_REQUEST_delete_ext(x, loc));
}

void * ASM SAVEDS OCSP_REQUEST_get1_ext_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(OCSP_REQUEST_get1_ext_d2i(x, nid, crit, idx));
}

int ASM SAVEDS OCSP_REQUEST_add1_ext_i2d_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(OCSP_REQUEST_add1_ext_i2d(x, nid, value, crit, flags));
}

int ASM SAVEDS OCSP_REQUEST_add_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(OCSP_REQUEST_add_ext(x, ex, loc));
}

int ASM SAVEDS OCSP_ONEREQ_get_ext_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x))
{
	return(OCSP_ONEREQ_get_ext_count(x));
}

int ASM SAVEDS OCSP_ONEREQ_get_ext_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(OCSP_ONEREQ_get_ext_by_NID(x, nid, lastpos));
}

int ASM SAVEDS OCSP_ONEREQ_get_ext_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(OCSP_ONEREQ_get_ext_by_OBJ(x, obj, lastpos));
}

int ASM SAVEDS OCSP_ONEREQ_get_ext_by_critical_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(OCSP_ONEREQ_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * ASM SAVEDS OCSP_ONEREQ_get_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(d0, int loc))
{
	return(OCSP_ONEREQ_get_ext(x, loc));
}

X509_EXTENSION * ASM SAVEDS OCSP_ONEREQ_delete_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(d0, int loc))
{
	return(OCSP_ONEREQ_delete_ext(x, loc));
}

void * ASM SAVEDS OCSP_ONEREQ_get1_ext_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(OCSP_ONEREQ_get1_ext_d2i(x, nid, crit, idx));
}

int ASM SAVEDS OCSP_ONEREQ_add1_ext_i2d_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(OCSP_ONEREQ_add1_ext_i2d(x, nid, value, crit, flags));
}

int ASM SAVEDS OCSP_ONEREQ_add_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(OCSP_ONEREQ_add_ext(x, ex, loc));
}

int ASM SAVEDS OCSP_BASICRESP_get_ext_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x))
{
	return(OCSP_BASICRESP_get_ext_count(x));
}

int ASM SAVEDS OCSP_BASICRESP_get_ext_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(OCSP_BASICRESP_get_ext_by_NID(x, nid, lastpos));
}

int ASM SAVEDS OCSP_BASICRESP_get_ext_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(OCSP_BASICRESP_get_ext_by_OBJ(x, obj, lastpos));
}

int ASM SAVEDS OCSP_BASICRESP_get_ext_by_critical_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(OCSP_BASICRESP_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * ASM SAVEDS OCSP_BASICRESP_get_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(d0, int loc))
{
	return(OCSP_BASICRESP_get_ext(x, loc));
}

X509_EXTENSION * ASM SAVEDS OCSP_BASICRESP_delete_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(d0, int loc))
{
	return(OCSP_BASICRESP_delete_ext(x, loc));
}

void * ASM SAVEDS OCSP_BASICRESP_get1_ext_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(OCSP_BASICRESP_get1_ext_d2i(x, nid, crit, idx));
}

int ASM SAVEDS OCSP_BASICRESP_add1_ext_i2d_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(OCSP_BASICRESP_add1_ext_i2d(x, nid, value, crit, flags));
}

int ASM SAVEDS OCSP_BASICRESP_add_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(OCSP_BASICRESP_add_ext(x, ex, loc));
}

int ASM SAVEDS OCSP_SINGLERESP_get_ext_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x))
{
	return(OCSP_SINGLERESP_get_ext_count(x));
}

int ASM SAVEDS OCSP_SINGLERESP_get_ext_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(OCSP_SINGLERESP_get_ext_by_NID(x, nid, lastpos));
}

int ASM SAVEDS OCSP_SINGLERESP_get_ext_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(OCSP_SINGLERESP_get_ext_by_OBJ(x, obj, lastpos));
}

int ASM SAVEDS OCSP_SINGLERESP_get_ext_by_critical_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(OCSP_SINGLERESP_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * ASM SAVEDS OCSP_SINGLERESP_get_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(d0, int loc))
{
	return(OCSP_SINGLERESP_get_ext(x, loc));
}

X509_EXTENSION * ASM SAVEDS OCSP_SINGLERESP_delete_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(d0, int loc))
{
	return(OCSP_SINGLERESP_delete_ext(x, loc));
}

void * ASM SAVEDS OCSP_SINGLERESP_get1_ext_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(OCSP_SINGLERESP_get1_ext_d2i(x, nid, crit, idx));
}

int ASM SAVEDS OCSP_SINGLERESP_add1_ext_i2d_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(OCSP_SINGLERESP_add1_ext_i2d(x, nid, value, crit, flags));
}

int ASM SAVEDS OCSP_SINGLERESP_add_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(OCSP_SINGLERESP_add_ext(x, ex, loc));
}

OCSP_SINGLERESP * ASM SAVEDS OCSP_SINGLERESP_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_SINGLERESP_new());
}

void ASM SAVEDS OCSP_SINGLERESP_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *a))
{
	OCSP_SINGLERESP_free(a);
}

OCSP_SINGLERESP * ASM SAVEDS d2i_OCSP_SINGLERESP_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_SINGLERESP(a, in, len));
}

int ASM SAVEDS i2d_OCSP_SINGLERESP_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SINGLERESP *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_SINGLERESP(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_SINGLERESP_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_SINGLERESP_it());
}

OCSP_CERTSTATUS * ASM SAVEDS OCSP_CERTSTATUS_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_CERTSTATUS_new());
}

void ASM SAVEDS OCSP_CERTSTATUS_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTSTATUS *a))
{
	OCSP_CERTSTATUS_free(a);
}

OCSP_CERTSTATUS * ASM SAVEDS d2i_OCSP_CERTSTATUS_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTSTATUS **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_CERTSTATUS(a, in, len));
}

int ASM SAVEDS i2d_OCSP_CERTSTATUS_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTSTATUS *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_CERTSTATUS(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_CERTSTATUS_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_CERTSTATUS_it());
}

OCSP_REVOKEDINFO * ASM SAVEDS OCSP_REVOKEDINFO_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_REVOKEDINFO_new());
}

void ASM SAVEDS OCSP_REVOKEDINFO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REVOKEDINFO *a))
{
	OCSP_REVOKEDINFO_free(a);
}

OCSP_REVOKEDINFO * ASM SAVEDS d2i_OCSP_REVOKEDINFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REVOKEDINFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_REVOKEDINFO(a, in, len));
}

int ASM SAVEDS i2d_OCSP_REVOKEDINFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REVOKEDINFO *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_REVOKEDINFO(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_REVOKEDINFO_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_REVOKEDINFO_it());
}

OCSP_BASICRESP * ASM SAVEDS OCSP_BASICRESP_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_BASICRESP_new());
}

void ASM SAVEDS OCSP_BASICRESP_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *a))
{
	OCSP_BASICRESP_free(a);
}

OCSP_BASICRESP * ASM SAVEDS d2i_OCSP_BASICRESP_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_BASICRESP(a, in, len));
}

int ASM SAVEDS i2d_OCSP_BASICRESP_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_BASICRESP(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_BASICRESP_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_BASICRESP_it());
}

OCSP_RESPDATA * ASM SAVEDS OCSP_RESPDATA_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPDATA_new());
}

void ASM SAVEDS OCSP_RESPDATA_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPDATA *a))
{
	OCSP_RESPDATA_free(a);
}

OCSP_RESPDATA * ASM SAVEDS d2i_OCSP_RESPDATA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPDATA **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_RESPDATA(a, in, len));
}

int ASM SAVEDS i2d_OCSP_RESPDATA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPDATA *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_RESPDATA(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_RESPDATA_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPDATA_it());
}

OCSP_RESPID * ASM SAVEDS OCSP_RESPID_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPID_new());
}

void ASM SAVEDS OCSP_RESPID_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPID *a))
{
	OCSP_RESPID_free(a);
}

OCSP_RESPID * ASM SAVEDS d2i_OCSP_RESPID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPID **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_RESPID(a, in, len));
}

int ASM SAVEDS i2d_OCSP_RESPID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPID *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_RESPID(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_RESPID_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPID_it());
}

OCSP_RESPONSE * ASM SAVEDS OCSP_RESPONSE_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPONSE_new());
}

void ASM SAVEDS OCSP_RESPONSE_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPONSE *a))
{
	OCSP_RESPONSE_free(a);
}

OCSP_RESPONSE * ASM SAVEDS d2i_OCSP_RESPONSE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPONSE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_RESPONSE(a, in, len));
}

int ASM SAVEDS i2d_OCSP_RESPONSE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPONSE *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_RESPONSE(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_RESPONSE_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPONSE_it());
}

OCSP_RESPBYTES * ASM SAVEDS OCSP_RESPBYTES_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPBYTES_new());
}

void ASM SAVEDS OCSP_RESPBYTES_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPBYTES *a))
{
	OCSP_RESPBYTES_free(a);
}

OCSP_RESPBYTES * ASM SAVEDS d2i_OCSP_RESPBYTES_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPBYTES **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_RESPBYTES(a, in, len));
}

int ASM SAVEDS i2d_OCSP_RESPBYTES_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_RESPBYTES *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_RESPBYTES(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_RESPBYTES_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_RESPBYTES_it());
}

OCSP_ONEREQ * ASM SAVEDS OCSP_ONEREQ_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_ONEREQ_new());
}

void ASM SAVEDS OCSP_ONEREQ_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *a))
{
	OCSP_ONEREQ_free(a);
}

OCSP_ONEREQ * ASM SAVEDS d2i_OCSP_ONEREQ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_ONEREQ(a, in, len));
}

int ASM SAVEDS i2d_OCSP_ONEREQ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_ONEREQ *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_ONEREQ(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_ONEREQ_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_ONEREQ_it());
}

OCSP_CERTID * ASM SAVEDS OCSP_CERTID_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_CERTID_new());
}

void ASM SAVEDS OCSP_CERTID_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTID *a))
{
	OCSP_CERTID_free(a);
}

OCSP_CERTID * ASM SAVEDS d2i_OCSP_CERTID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTID **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_CERTID(a, in, len));
}

int ASM SAVEDS i2d_OCSP_CERTID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CERTID *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_CERTID(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_CERTID_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_CERTID_it());
}

OCSP_REQUEST * ASM SAVEDS OCSP_REQUEST_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_REQUEST_new());
}

void ASM SAVEDS OCSP_REQUEST_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *a))
{
	OCSP_REQUEST_free(a);
}

OCSP_REQUEST * ASM SAVEDS d2i_OCSP_REQUEST_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_REQUEST(a, in, len));
}

int ASM SAVEDS i2d_OCSP_REQUEST_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQUEST *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_REQUEST(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_REQUEST_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_REQUEST_it());
}

OCSP_SIGNATURE * ASM SAVEDS OCSP_SIGNATURE_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_SIGNATURE_new());
}

void ASM SAVEDS OCSP_SIGNATURE_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SIGNATURE *a))
{
	OCSP_SIGNATURE_free(a);
}

OCSP_SIGNATURE * ASM SAVEDS d2i_OCSP_SIGNATURE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SIGNATURE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_SIGNATURE(a, in, len));
}

int ASM SAVEDS i2d_OCSP_SIGNATURE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SIGNATURE *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_SIGNATURE(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_SIGNATURE_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_SIGNATURE_it());
}

OCSP_REQINFO * ASM SAVEDS OCSP_REQINFO_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_REQINFO_new());
}

void ASM SAVEDS OCSP_REQINFO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQINFO *a))
{
	OCSP_REQINFO_free(a);
}

OCSP_REQINFO * ASM SAVEDS d2i_OCSP_REQINFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQINFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_REQINFO(a, in, len));
}

int ASM SAVEDS i2d_OCSP_REQINFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_REQINFO *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_REQINFO(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_REQINFO_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_REQINFO_it());
}

OCSP_CRLID * ASM SAVEDS OCSP_CRLID_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_CRLID_new());
}

void ASM SAVEDS OCSP_CRLID_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CRLID *a))
{
	OCSP_CRLID_free(a);
}

OCSP_CRLID * ASM SAVEDS d2i_OCSP_CRLID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CRLID **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_CRLID(a, in, len));
}

int ASM SAVEDS i2d_OCSP_CRLID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_CRLID *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_CRLID(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_CRLID_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_CRLID_it());
}

OCSP_SERVICELOC * ASM SAVEDS OCSP_SERVICELOC_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_SERVICELOC_new());
}

void ASM SAVEDS OCSP_SERVICELOC_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SERVICELOC *a))
{
	OCSP_SERVICELOC_free(a);
}

OCSP_SERVICELOC * ASM SAVEDS d2i_OCSP_SERVICELOC_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SERVICELOC **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OCSP_SERVICELOC(a, in, len));
}

int ASM SAVEDS i2d_OCSP_SERVICELOC_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_SERVICELOC *a), REG(a1, unsigned char **out))
{
	return(i2d_OCSP_SERVICELOC(a, out));
}

const ASN1_ITEM * ASM SAVEDS OCSP_SERVICELOC_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OCSP_SERVICELOC_it());
}

char * ASM SAVEDS OCSP_response_status_str_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long s))
{
	return(OCSP_response_status_str(s));
}

char * ASM SAVEDS OCSP_cert_status_str_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long s))
{
	return(OCSP_cert_status_str(s));
}

char * ASM SAVEDS OCSP_crl_reason_str_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long s))
{
	return(OCSP_crl_reason_str(s));
}

int ASM SAVEDS OCSP_REQUEST_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, OCSP_REQUEST*a), REG(d0, unsigned long flags))
{
	return(OCSP_REQUEST_print(bp, a, flags));
}

int ASM SAVEDS OCSP_RESPONSE_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, OCSP_RESPONSE*o), REG(d0, unsigned long flags))
{
	return(OCSP_RESPONSE_print(bp, o, flags));
}

int ASM SAVEDS OCSP_basic_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OCSP_BASICRESP *bs), REG(a1, STACK_OF(X509) *certs), REG(a2, X509_STORE *st), REG(d0, unsigned long flags))
{
	return(OCSP_basic_verify(bs, certs, st, flags));
}

void ASM SAVEDS ERR_load_OCSP_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_OCSP_strings();
}

int ASM SAVEDS PEM_get_EVP_CIPHER_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *header), REG(a1, EVP_CIPHER_INFO *cipher))
{
	return(PEM_get_EVP_CIPHER_INFO(header, cipher));
}

int ASM SAVEDS PEM_do_header_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_INFO *cipher), REG(a1, unsigned char *data), REG(a2, long *len), REG(a3, pem_password_cb *callback), REG(d0, void *u))
{
	return(PEM_do_header(cipher, data, len, callback, u));
}

int ASM SAVEDS PEM_read_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, char **name), REG(a2, char **header), REG(a3, unsigned char **data), REG(d0, long *len))
{
	return(PEM_read_bio(bp, name, header, data, len));
}

int ASM SAVEDS PEM_write_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, const char *name), REG(a2, char *hdr), REG(a3, unsigned char *data), REG(d0, long len))
{
	return(PEM_write_bio(bp, name, hdr, data, len));
}

int ASM SAVEDS PEM_bytes_read_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char **pdata), REG(a1, long *plen), REG(a2, char **pnm), REG(a3, const char *name), REG(d0, BIO *bp), REG(d1, pem_password_cb *cb), REG(d2, void *u))
{
	return(PEM_bytes_read_bio(pdata, plen, pnm, name, bp, cb, u));
}

char * ASM SAVEDS PEM_ASN1_read_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *(*d2i)()), REG(a1, const char *name), REG(a2, BIO *bp), REG(a3, char **x), REG(d0, pem_password_cb *cb), REG(d1, void *u))
{
	return(PEM_ASN1_read_bio(d2i, name, bp, x, cb, u));
}

int ASM SAVEDS PEM_ASN1_write_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int (*i2d)()), REG(a1, const char *name), REG(a2, BIO *bp), REG(a3, char *x), REG(d0, const EVP_CIPHER *enc), REG(d1, unsigned char *kstr), REG(d2, int klen), REG(d3, pem_password_cb *cb), REG(d4, void *u))
{
	return(PEM_ASN1_write_bio(i2d, name, bp, x, enc, kstr, klen, cb, u));
}

STACK_OF(X509_INFO) * ASM SAVEDS PEM_X509_INFO_read_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, STACK_OF(X509_INFO) *sk), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_X509_INFO_read_bio(bp, sk, cb, u));
}

int ASM SAVEDS PEM_X509_INFO_write_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_INFO *xi), REG(a2, EVP_CIPHER *enc), REG(a3, unsigned char *kstr), REG(d0, int klen), REG(d1, pem_password_cb *cd), REG(d2, void *u))
{
	return(PEM_X509_INFO_write_bio(bp, xi, enc, kstr, klen, cd, u));
}

int ASM SAVEDS PEM_SealInit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PEM_ENCODE_SEAL_CTX *ctx), REG(a1, EVP_CIPHER *type), REG(a2, EVP_MD *md_type), REG(a3, unsigned char **ek), REG(d0, int *ekl), REG(d1, unsigned char *iv), REG(d2, EVP_PKEY **pubk), REG(d3, int npubk))
{
	return(PEM_SealInit(ctx, type, md_type, ek, ekl, iv, pubk, npubk));
}

void ASM SAVEDS PEM_SealUpdate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PEM_ENCODE_SEAL_CTX *ctx), REG(a1, unsigned char *out), REG(a2, int *outl), REG(a3, unsigned char *in), REG(d0, int inl))
{
	PEM_SealUpdate(ctx, out, outl, in, inl);
}

int ASM SAVEDS PEM_SealFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PEM_ENCODE_SEAL_CTX *ctx), REG(a1, unsigned char *sig), REG(a2, int *sigl), REG(a3, unsigned char *out), REG(d0, int *outl), REG(d1, EVP_PKEY *priv))
{
	return(PEM_SealFinal(ctx, sig, sigl, out, outl, priv));
}

void ASM SAVEDS PEM_SignInit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, EVP_MD *type))
{
	PEM_SignInit(ctx, type);
}

void ASM SAVEDS PEM_SignUpdate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, unsigned char *d), REG(d0, unsigned int cnt))
{
	PEM_SignUpdate(ctx, d, cnt);
}

int ASM SAVEDS PEM_SignFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_MD_CTX *ctx), REG(a1, unsigned char *sigret), REG(a2, unsigned int *siglen), REG(a3, EVP_PKEY *pkey))
{
	return(PEM_SignFinal(ctx, sigret, siglen, pkey));
}

int ASM SAVEDS PEM_def_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int num), REG(d1, int w), REG(a1, void *key))
{
	return(PEM_def_callback(buf, num, w, key));
}

void ASM SAVEDS PEM_proc_type_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int type))
{
	PEM_proc_type(buf, type);
}

void ASM SAVEDS PEM_dek_info_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(a1, const char *type), REG(d0, int len), REG(a2, char *str))
{
	PEM_dek_info(buf, type, len, str);
}

X509 * ASM SAVEDS PEM_read_bio_X509_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_X509(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_X509_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 *x))
{
	return(PEM_write_bio_X509(bp, x));
}

X509 * ASM SAVEDS PEM_read_bio_X509_AUX_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_X509_AUX(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_X509_AUX_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 *x))
{
	return(PEM_write_bio_X509_AUX(bp, x));
}

X509_REQ * ASM SAVEDS PEM_read_bio_X509_REQ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_X509_REQ(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_X509_REQ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ *x))
{
	return(PEM_write_bio_X509_REQ(bp, x));
}

int ASM SAVEDS PEM_write_bio_X509_REQ_NEW_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ *x))
{
	return(PEM_write_bio_X509_REQ_NEW(bp, x));
}

X509_CRL * ASM SAVEDS PEM_read_bio_X509_CRL_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_CRL **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_X509_CRL(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_X509_CRL_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_CRL *x))
{
	return(PEM_write_bio_X509_CRL(bp, x));
}

PKCS7 * ASM SAVEDS PEM_read_bio_PKCS7_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS7 **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_PKCS7(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_PKCS7_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS7 *x))
{
	return(PEM_write_bio_PKCS7(bp, x));
}

NETSCAPE_CERT_SEQUENCE * ASM SAVEDS PEM_read_bio_NETSCAPE_CERT_SEQUENCE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, NETSCAPE_CERT_SEQUENCE **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_NETSCAPE_CERT_SEQUENCE(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_NETSCAPE_CERT_SEQUENCE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, NETSCAPE_CERT_SEQUENCE *x))
{
	return(PEM_write_bio_NETSCAPE_CERT_SEQUENCE(bp, x));
}

X509_SIG * ASM SAVEDS PEM_read_bio_PKCS8_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_SIG **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_PKCS8(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_PKCS8_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_SIG *x))
{
	return(PEM_write_bio_PKCS8(bp, x));
}

PKCS8_PRIV_KEY_INFO * ASM SAVEDS PEM_read_bio_PKCS8_PRIV_KEY_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS8_PRIV_KEY_INFO **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_PKCS8_PRIV_KEY_INFO(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_PKCS8_PRIV_KEY_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS8_PRIV_KEY_INFO *x))
{
	return(PEM_write_bio_PKCS8_PRIV_KEY_INFO(bp, x));
}

RSA * ASM SAVEDS PEM_read_bio_RSAPrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_RSAPrivateKey(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_RSAPrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA *x), REG(a2, const EVP_CIPHER *enc), REG(a3, unsigned char *kstr), REG(d0, int klen), REG(d1, pem_password_cb *cb), REG(d2, void *u))
{
	return(PEM_write_bio_RSAPrivateKey(bp, x, enc, kstr, klen, cb, u));
}

RSA * ASM SAVEDS PEM_read_bio_RSAPublicKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_RSAPublicKey(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_RSAPublicKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA *x))
{
	return(PEM_write_bio_RSAPublicKey(bp, x));
}

RSA * ASM SAVEDS PEM_read_bio_RSA_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_RSA_PUBKEY(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_RSA_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA *x))
{
	return(PEM_write_bio_RSA_PUBKEY(bp, x));
}

DSA * ASM SAVEDS PEM_read_bio_DSAPrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_DSAPrivateKey(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_DSAPrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA *x), REG(a2, const EVP_CIPHER *enc), REG(a3, unsigned char *kstr), REG(d0, int klen), REG(d1, pem_password_cb *cb), REG(d2, void *u))
{
	return(PEM_write_bio_DSAPrivateKey(bp, x, enc, kstr, klen, cb, u));
}

DSA * ASM SAVEDS PEM_read_bio_DSA_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_DSA_PUBKEY(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_DSA_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA *x))
{
	return(PEM_write_bio_DSA_PUBKEY(bp, x));
}

DSA * ASM SAVEDS PEM_read_bio_DSAparams_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_DSAparams(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_DSAparams_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA *x))
{
	return(PEM_write_bio_DSAparams(bp, x));
}

DH * ASM SAVEDS PEM_read_bio_DHparams_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DH **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_DHparams(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_DHparams_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DH *x))
{
	return(PEM_write_bio_DHparams(bp, x));
}

EVP_PKEY * ASM SAVEDS PEM_read_bio_PrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_PrivateKey(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_PrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *x), REG(a2, const EVP_CIPHER *enc), REG(a3, unsigned char *kstr), REG(d0, int klen), REG(d1, pem_password_cb *cb), REG(d2, void *u))
{
	return(PEM_write_bio_PrivateKey(bp, x, enc, kstr, klen, cb, u));
}

EVP_PKEY * ASM SAVEDS PEM_read_bio_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(PEM_read_bio_PUBKEY(bp, x, cb, u));
}

int ASM SAVEDS PEM_write_bio_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *x))
{
	return(PEM_write_bio_PUBKEY(bp, x));
}

int ASM SAVEDS PEM_write_bio_PKCS8PrivateKey_nid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *x), REG(d0, int nid), REG(a2, char *kstr), REG(d1, int klen), REG(a3, pem_password_cb *cb), REG(d2, void *u))
{
	return(PEM_write_bio_PKCS8PrivateKey_nid(bp, x, nid, kstr, klen, cb, u));
}

int ASM SAVEDS PEM_write_bio_PKCS8PrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *a), REG(a1, EVP_PKEY *b), REG(a2, const EVP_CIPHER *c), REG(a3, char *d), REG(d0, int a1), REG(d1, pem_password_cb *e), REG(d2, void *f))
{
	return(PEM_write_bio_PKCS8PrivateKey(a, b, c, d, a1, e, f));
}

int ASM SAVEDS i2d_PKCS8PrivateKey_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *x), REG(a2, const EVP_CIPHER *enc), REG(a3, char *kstr), REG(d0, int klen), REG(d1, pem_password_cb *cb), REG(d2, void *u))
{
	return(i2d_PKCS8PrivateKey_bio(bp, x, enc, kstr, klen, cb, u));
}

int ASM SAVEDS i2d_PKCS8PrivateKey_nid_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *x), REG(d0, int nid), REG(a2, char *kstr), REG(d1, int klen), REG(a3, pem_password_cb *cb), REG(d2, void *u))
{
	return(i2d_PKCS8PrivateKey_nid_bio(bp, x, nid, kstr, klen, cb, u));
}

EVP_PKEY * ASM SAVEDS d2i_PKCS8PrivateKey_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY **x), REG(a2, pem_password_cb *cb), REG(a3, void *u))
{
	return(d2i_PKCS8PrivateKey_bio(bp, x, cb, u));
}

void ASM SAVEDS ERR_load_PEM_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_PEM_strings();
}

PKCS12_SAFEBAG * ASM SAVEDS PKCS12_x5092certbag_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x509))
{
	return(PKCS12_x5092certbag(x509));
}

PKCS12_SAFEBAG * ASM SAVEDS PKCS12_x509crl2certbag_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *crl))
{
	return(PKCS12_x509crl2certbag(crl));
}

X509 * ASM SAVEDS PKCS12_certbag2x509_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag))
{
	return(PKCS12_certbag2x509(bag));
}

X509_CRL * ASM SAVEDS PKCS12_certbag2x509crl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag))
{
	return(PKCS12_certbag2x509crl(bag));
}

PKCS12_SAFEBAG * ASM SAVEDS PKCS12_item_pack_safebag_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, void *obj), REG(a1, const ASN1_ITEM *it), REG(d0, int nid1), REG(d1, int nid2))
{
	return(PKCS12_item_pack_safebag(obj, it, nid1, nid2));
}

PKCS12_SAFEBAG * ASM SAVEDS PKCS12_MAKE_KEYBAG_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO *p8))
{
	return(PKCS12_MAKE_KEYBAG(p8));
}

PKCS8_PRIV_KEY_INFO * ASM SAVEDS PKCS8_decrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_SIG *p8), REG(a1, const char *pass), REG(d0, int passlen))
{
	return(PKCS8_decrypt(p8, pass, passlen));
}

PKCS8_PRIV_KEY_INFO * ASM SAVEDS PKCS12_decrypt_skey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag), REG(a1, const char *pass), REG(d0, int passlen))
{
	return(PKCS12_decrypt_skey(bag, pass, passlen));
}

X509_SIG * ASM SAVEDS PKCS8_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int pbe_nid), REG(a0, const EVP_CIPHER *cipher), REG(a1, const char *pass), REG(d1, int passlen), REG(a2, unsigned char *salt), REG(d2, int saltlen), REG(d3, int iter), REG(a3, PKCS8_PRIV_KEY_INFO *p8))
{
	return(PKCS8_encrypt(pbe_nid, cipher, pass, passlen, salt, saltlen, iter, p8));
}

PKCS12_SAFEBAG * ASM SAVEDS PKCS12_MAKE_SHKEYBAG_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int pbe_nid), REG(a0, const char *pass), REG(d1, int passlen), REG(a1, unsigned char *salt), REG(d2, int saltlen), REG(d3, int iter), REG(a2, PKCS8_PRIV_KEY_INFO *p8))
{
	return(PKCS12_MAKE_SHKEYBAG(pbe_nid, pass, passlen, salt, saltlen, iter, p8));
}

PKCS7 * ASM SAVEDS PKCS12_pack_p7data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(PKCS12_SAFEBAG) *sk))
{
	return(PKCS12_pack_p7data(sk));
}

STACK_OF(PKCS12_SAFEBAG) * ASM SAVEDS PKCS12_unpack_p7data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7))
{
	return(PKCS12_unpack_p7data(p7));
}

PKCS7 * ASM SAVEDS PKCS12_pack_p7encdata_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int pbe_nid), REG(a0, const char *pass), REG(d1, int passlen), REG(a1, unsigned char *salt), REG(d2, int saltlen), REG(d3, int iter), REG(a2, STACK_OF(PKCS12_SAFEBAG) *bags))
{
	return(PKCS12_pack_p7encdata(pbe_nid, pass, passlen, salt, saltlen, iter, bags));
}

STACK_OF(PKCS12_SAFEBAG) * ASM SAVEDS PKCS12_unpack_p7encdata_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, const char *pass), REG(d0, int passlen))
{
	return(PKCS12_unpack_p7encdata(p7, pass, passlen));
}

int ASM SAVEDS PKCS12_pack_authsafes_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(a1, STACK_OF(PKCS7) *safes))
{
	return(PKCS12_pack_authsafes(p12, safes));
}

STACK_OF(PKCS7) * ASM SAVEDS PKCS12_unpack_authsafes_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12))
{
	return(PKCS12_unpack_authsafes(p12));
}

int ASM SAVEDS PKCS12_add_localkeyid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag), REG(a1, unsigned char *name), REG(d0, int namelen))
{
	return(PKCS12_add_localkeyid(bag, name, namelen));
}

int ASM SAVEDS PKCS12_add_friendlyname_asc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag), REG(a1, const char *name), REG(d0, int namelen))
{
	return(PKCS12_add_friendlyname_asc(bag, name, namelen));
}

int ASM SAVEDS PKCS12_add_CSPName_asc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag), REG(a1, const char *name), REG(d0, int namelen))
{
	return(PKCS12_add_CSPName_asc(bag, name, namelen));
}

int ASM SAVEDS PKCS12_add_friendlyname_uni_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag), REG(a1, const unsigned char *name), REG(d0, int namelen))
{
	return(PKCS12_add_friendlyname_uni(bag, name, namelen));
}

int ASM SAVEDS PKCS8_add_keyusage_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO *p8), REG(d0, int usage))
{
	return(PKCS8_add_keyusage(p8, usage));
}

ASN1_TYPE * ASM SAVEDS PKCS12_get_attr_gen_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) *attrs), REG(d0, int attr_nid))
{
	return(PKCS12_get_attr_gen(attrs, attr_nid));
}

char * ASM SAVEDS PKCS12_get_friendlyname_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *bag))
{
	return(PKCS12_get_friendlyname(bag));
}

unsigned char * ASM SAVEDS PKCS12_pbe_crypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR *algor), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, unsigned char *in), REG(d1, int inlen), REG(a3, unsigned char **data), REG(d2, int *datalen), REG(d3, int en_de))
{
	return(PKCS12_pbe_crypt(algor, pass, passlen, in, inlen, data, datalen, en_de));
}

void * ASM SAVEDS PKCS12_item_decrypt_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR *algor), REG(a1, const ASN1_ITEM *it), REG(a2, const char *pass), REG(d0, int passlen), REG(a3, ASN1_OCTET_STRING *oct), REG(d1, int zbuf))
{
	return(PKCS12_item_decrypt_d2i(algor, it, pass, passlen, oct, zbuf));
}

ASN1_OCTET_STRING * ASM SAVEDS PKCS12_item_i2d_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR *algor), REG(a1, const ASN1_ITEM *it), REG(a2, const char *pass), REG(d0, int passlen), REG(a3, void *obj), REG(d1, int zbuf))
{
	return(PKCS12_item_i2d_encrypt(algor, it, pass, passlen, obj, zbuf));
}

PKCS12 * ASM SAVEDS PKCS12_init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int mode))
{
	return(PKCS12_init(mode));
}

int ASM SAVEDS PKCS12_key_gen_asc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *pass), REG(d0, int passlen), REG(a1, unsigned char *salt), REG(d1, int saltlen), REG(d2, int id), REG(d3, int iter), REG(d4, int n), REG(a2, unsigned char *out), REG(a3, const EVP_MD *md_type))
{
	return(PKCS12_key_gen_asc(pass, passlen, salt, saltlen, id, iter, n, out, md_type));
}

int ASM SAVEDS PKCS12_key_gen_uni_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *pass), REG(d0, int passlen), REG(a1, unsigned char *salt), REG(d1, int saltlen), REG(d2, int id), REG(d3, int iter), REG(d4, int n), REG(a2, unsigned char *out), REG(a3, const EVP_MD *md_type))
{
	return(PKCS12_key_gen_uni(pass, passlen, salt, saltlen, id, iter, n, out, md_type));
}

int ASM SAVEDS PKCS12_PBE_keyivgen_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_CIPHER_CTX *ctx), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, ASN1_TYPE *param), REG(a3, const EVP_CIPHER *cipher), REG(d1, const EVP_MD *md_type), REG(d2, int en_de))
{
	return(PKCS12_PBE_keyivgen(ctx, pass, passlen, param, cipher, md_type, en_de));
}

int ASM SAVEDS PKCS12_gen_mac_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, unsigned char *mac), REG(a3, unsigned int *maclen))
{
	return(PKCS12_gen_mac(p12, pass, passlen, mac, maclen));
}

int ASM SAVEDS PKCS12_verify_mac_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(a1, const char *pass), REG(d0, int passlen))
{
	return(PKCS12_verify_mac(p12, pass, passlen));
}

int ASM SAVEDS PKCS12_set_mac_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(a1, const char *pass), REG(d0, int passlen), REG(a2, unsigned char *salt), REG(d1, int saltlen), REG(d2, int iter), REG(a3, const EVP_MD *md_type))
{
	return(PKCS12_set_mac(p12, pass, passlen, salt, saltlen, iter, md_type));
}

int ASM SAVEDS PKCS12_setup_mac_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(d0, int iter), REG(a1, unsigned char *salt), REG(d1, int saltlen), REG(a2, const EVP_MD *md_type))
{
	return(PKCS12_setup_mac(p12, iter, salt, saltlen, md_type));
}

unsigned char * ASM SAVEDS asc2uni_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *asc), REG(d0, int asclen), REG(a1, unsigned char **uni), REG(a2, int *unilen))
{
	return(asc2uni(asc, asclen, uni, unilen));
}

char * ASM SAVEDS uni2asc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *uni), REG(d0, int unilen))
{
	return(uni2asc(uni, unilen));
}

PKCS12 * ASM SAVEDS PKCS12_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_new());
}

void ASM SAVEDS PKCS12_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *a))
{
	PKCS12_free(a);
}

PKCS12 * ASM SAVEDS d2i_PKCS12_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS12(a, in, len));
}

int ASM SAVEDS i2d_PKCS12_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS12(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS12_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_it());
}

PKCS12_MAC_DATA * ASM SAVEDS PKCS12_MAC_DATA_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_MAC_DATA_new());
}

void ASM SAVEDS PKCS12_MAC_DATA_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_MAC_DATA *a))
{
	PKCS12_MAC_DATA_free(a);
}

PKCS12_MAC_DATA * ASM SAVEDS d2i_PKCS12_MAC_DATA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_MAC_DATA **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS12_MAC_DATA(a, in, len));
}

int ASM SAVEDS i2d_PKCS12_MAC_DATA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_MAC_DATA *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS12_MAC_DATA(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS12_MAC_DATA_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_MAC_DATA_it());
}

PKCS12_SAFEBAG * ASM SAVEDS PKCS12_SAFEBAG_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_SAFEBAG_new());
}

void ASM SAVEDS PKCS12_SAFEBAG_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *a))
{
	PKCS12_SAFEBAG_free(a);
}

PKCS12_SAFEBAG * ASM SAVEDS d2i_PKCS12_SAFEBAG_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS12_SAFEBAG(a, in, len));
}

int ASM SAVEDS i2d_PKCS12_SAFEBAG_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_SAFEBAG *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS12_SAFEBAG(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS12_SAFEBAG_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_SAFEBAG_it());
}

PKCS12_BAGS * ASM SAVEDS PKCS12_BAGS_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_BAGS_new());
}

void ASM SAVEDS PKCS12_BAGS_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_BAGS *a))
{
	PKCS12_BAGS_free(a);
}

PKCS12_BAGS * ASM SAVEDS d2i_PKCS12_BAGS_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_BAGS **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS12_BAGS(a, in, len));
}

int ASM SAVEDS i2d_PKCS12_BAGS_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12_BAGS *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS12_BAGS(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS12_BAGS_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_BAGS_it());
}

const ASN1_ITEM * ASM SAVEDS PKCS12_SAFEBAGS_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_SAFEBAGS_it());
}

const ASN1_ITEM * ASM SAVEDS PKCS12_AUTHSAFES_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS12_AUTHSAFES_it());
}

void ASM SAVEDS PKCS12_PBE_add_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	PKCS12_PBE_add();
}

int ASM SAVEDS PKCS12_parse_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(a1, const char *pass), REG(a2, EVP_PKEY **pkey), REG(a3, X509 **cert), REG(d0, STACK_OF(X509) **ca))
{
	return(PKCS12_parse(p12, pass, pkey, cert, ca));
}

PKCS12 * ASM SAVEDS PKCS12_create_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *pass), REG(a1, char *name), REG(a2, EVP_PKEY *pkey), REG(a3, X509 *cert), REG(d0, STACK_OF(X509) *ca), REG(d1, int nid_key), REG(d2, int nid_cert), REG(d3, int iter), REG(d4, int mac_iter), REG(d5, int keytype))
{
	return(PKCS12_create(pass, name, pkey, cert, ca, nid_key, nid_cert, iter, mac_iter, keytype));
}

int ASM SAVEDS i2d_PKCS12_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS12 *p12))
{
	return(i2d_PKCS12_bio(bp, p12));
}

PKCS12 * ASM SAVEDS d2i_PKCS12_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS12 **p12))
{
	return(d2i_PKCS12_bio(bp, p12));
}

int ASM SAVEDS PKCS12_newpass_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS12 *p12), REG(a1, char *oldpass), REG(a2, char *newpass))
{
	return(PKCS12_newpass(p12, oldpass, newpass));
}

void ASM SAVEDS ERR_load_PKCS12_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_PKCS12_strings();
}

int ASM SAVEDS PKCS7_ISSUER_AND_SERIAL_digest_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ISSUER_AND_SERIAL *data), REG(a1, const EVP_MD *type), REG(a2, unsigned char *md), REG(a3, unsigned int *len))
{
	return(PKCS7_ISSUER_AND_SERIAL_digest(data, type, md, len));
}

PKCS7 * ASM SAVEDS PKCS7_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7))
{
	return(PKCS7_dup(p7));
}

PKCS7 * ASM SAVEDS d2i_PKCS7_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS7 **p7))
{
	return(d2i_PKCS7_bio(bp, p7));
}

int ASM SAVEDS i2d_PKCS7_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS7 *p7))
{
	return(i2d_PKCS7_bio(bp, p7));
}

PKCS7_ISSUER_AND_SERIAL * ASM SAVEDS PKCS7_ISSUER_AND_SERIAL_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ISSUER_AND_SERIAL_new());
}

void ASM SAVEDS PKCS7_ISSUER_AND_SERIAL_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ISSUER_AND_SERIAL *a))
{
	PKCS7_ISSUER_AND_SERIAL_free(a);
}

PKCS7_ISSUER_AND_SERIAL * ASM SAVEDS d2i_PKCS7_ISSUER_AND_SERIAL_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ISSUER_AND_SERIAL **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_ISSUER_AND_SERIAL(a, in, len));
}

int ASM SAVEDS i2d_PKCS7_ISSUER_AND_SERIAL_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ISSUER_AND_SERIAL *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_ISSUER_AND_SERIAL(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS7_ISSUER_AND_SERIAL_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ISSUER_AND_SERIAL_it());
}

PKCS7_SIGNER_INFO * ASM SAVEDS PKCS7_SIGNER_INFO_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_SIGNER_INFO_new());
}

void ASM SAVEDS PKCS7_SIGNER_INFO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *a))
{
	PKCS7_SIGNER_INFO_free(a);
}

PKCS7_SIGNER_INFO * ASM SAVEDS d2i_PKCS7_SIGNER_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_SIGNER_INFO(a, in, len));
}

int ASM SAVEDS i2d_PKCS7_SIGNER_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_SIGNER_INFO(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS7_SIGNER_INFO_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_SIGNER_INFO_it());
}

PKCS7_RECIP_INFO * ASM SAVEDS PKCS7_RECIP_INFO_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_RECIP_INFO_new());
}

void ASM SAVEDS PKCS7_RECIP_INFO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_RECIP_INFO *a))
{
	PKCS7_RECIP_INFO_free(a);
}

PKCS7_RECIP_INFO * ASM SAVEDS d2i_PKCS7_RECIP_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_RECIP_INFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_RECIP_INFO(a, in, len));
}

int ASM SAVEDS i2d_PKCS7_RECIP_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_RECIP_INFO *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_RECIP_INFO(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS7_RECIP_INFO_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_RECIP_INFO_it());
}

PKCS7_SIGNED * ASM SAVEDS PKCS7_SIGNED_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_SIGNED_new());
}

void ASM SAVEDS PKCS7_SIGNED_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNED *a))
{
	PKCS7_SIGNED_free(a);
}

PKCS7_SIGNED * ASM SAVEDS d2i_PKCS7_SIGNED_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNED **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_SIGNED(a, in, len));
}

int ASM SAVEDS i2d_PKCS7_SIGNED_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNED *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_SIGNED(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS7_SIGNED_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_SIGNED_it());
}

PKCS7_ENC_CONTENT * ASM SAVEDS PKCS7_ENC_CONTENT_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ENC_CONTENT_new());
}

void ASM SAVEDS PKCS7_ENC_CONTENT_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENC_CONTENT *a))
{
	PKCS7_ENC_CONTENT_free(a);
}

PKCS7_ENC_CONTENT * ASM SAVEDS d2i_PKCS7_ENC_CONTENT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENC_CONTENT **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_ENC_CONTENT(a, in, len));
}

int ASM SAVEDS i2d_PKCS7_ENC_CONTENT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENC_CONTENT *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_ENC_CONTENT(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS7_ENC_CONTENT_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ENC_CONTENT_it());
}

PKCS7_ENVELOPE * ASM SAVEDS PKCS7_ENVELOPE_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ENVELOPE_new());
}

void ASM SAVEDS PKCS7_ENVELOPE_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENVELOPE *a))
{
	PKCS7_ENVELOPE_free(a);
}

PKCS7_ENVELOPE * ASM SAVEDS d2i_PKCS7_ENVELOPE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENVELOPE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_ENVELOPE(a, in, len));
}

int ASM SAVEDS i2d_PKCS7_ENVELOPE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENVELOPE *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_ENVELOPE(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS7_ENVELOPE_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ENVELOPE_it());
}

PKCS7_SIGN_ENVELOPE * ASM SAVEDS PKCS7_SIGN_ENVELOPE_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_SIGN_ENVELOPE_new());
}

void ASM SAVEDS PKCS7_SIGN_ENVELOPE_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGN_ENVELOPE *a))
{
	PKCS7_SIGN_ENVELOPE_free(a);
}

PKCS7_SIGN_ENVELOPE * ASM SAVEDS d2i_PKCS7_SIGN_ENVELOPE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGN_ENVELOPE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_SIGN_ENVELOPE(a, in, len));
}

int ASM SAVEDS i2d_PKCS7_SIGN_ENVELOPE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGN_ENVELOPE *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_SIGN_ENVELOPE(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS7_SIGN_ENVELOPE_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_SIGN_ENVELOPE_it());
}

PKCS7_DIGEST * ASM SAVEDS PKCS7_DIGEST_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_DIGEST_new());
}

void ASM SAVEDS PKCS7_DIGEST_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_DIGEST *a))
{
	PKCS7_DIGEST_free(a);
}

PKCS7_DIGEST * ASM SAVEDS d2i_PKCS7_DIGEST_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_DIGEST **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_DIGEST(a, in, len));
}

int ASM SAVEDS i2d_PKCS7_DIGEST_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_DIGEST *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_DIGEST(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS7_DIGEST_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_DIGEST_it());
}

PKCS7_ENCRYPT * ASM SAVEDS PKCS7_ENCRYPT_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ENCRYPT_new());
}

void ASM SAVEDS PKCS7_ENCRYPT_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENCRYPT *a))
{
	PKCS7_ENCRYPT_free(a);
}

PKCS7_ENCRYPT * ASM SAVEDS d2i_PKCS7_ENCRYPT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENCRYPT **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7_ENCRYPT(a, in, len));
}

int ASM SAVEDS i2d_PKCS7_ENCRYPT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_ENCRYPT *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7_ENCRYPT(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS7_ENCRYPT_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ENCRYPT_it());
}

PKCS7 * ASM SAVEDS PKCS7_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_new());
}

void ASM SAVEDS PKCS7_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *a))
{
	PKCS7_free(a);
}

PKCS7 * ASM SAVEDS d2i_PKCS7_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS7(a, in, len));
}

int ASM SAVEDS i2d_PKCS7_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS7(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS7_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_it());
}

const ASN1_ITEM * ASM SAVEDS PKCS7_ATTR_SIGN_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ATTR_SIGN_it());
}

const ASN1_ITEM * ASM SAVEDS PKCS7_ATTR_VERIFY_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS7_ATTR_VERIFY_it());
}

long ASM SAVEDS PKCS7_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(d0, int cmd), REG(d1, long larg), REG(a1, char *parg))
{
	return(PKCS7_ctrl(p7, cmd, larg, parg));
}

int ASM SAVEDS PKCS7_set_type_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(d0, int type))
{
	return(PKCS7_set_type(p7, type));
}

int ASM SAVEDS PKCS7_set_content_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, PKCS7 *p7_data))
{
	return(PKCS7_set_content(p7, p7_data));
}

int ASM SAVEDS PKCS7_SIGNER_INFO_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *p7i), REG(a1, X509 *x509), REG(a2, EVP_PKEY *pkey), REG(a3, const EVP_MD *dgst))
{
	return(PKCS7_SIGNER_INFO_set(p7i, x509, pkey, dgst));
}

int ASM SAVEDS PKCS7_add_signer_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, PKCS7_SIGNER_INFO *p7i))
{
	return(PKCS7_add_signer(p7, p7i));
}

int ASM SAVEDS PKCS7_add_certificate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, X509 *x509))
{
	return(PKCS7_add_certificate(p7, x509));
}

int ASM SAVEDS PKCS7_add_crl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, X509_CRL *x509))
{
	return(PKCS7_add_crl(p7, x509));
}

int ASM SAVEDS PKCS7_content_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(d0, int nid))
{
	return(PKCS7_content_new(p7, nid));
}

int ASM SAVEDS PKCS7_dataVerify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *cert_store), REG(a1, X509_STORE_CTX *ctx), REG(a2, BIO *bio), REG(a3, PKCS7 *p7), REG(d0, PKCS7_SIGNER_INFO *si))
{
	return(PKCS7_dataVerify(cert_store, ctx, bio, p7, si));
}

int ASM SAVEDS PKCS7_signatureVerify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, PKCS7 *p7), REG(a2, PKCS7_SIGNER_INFO *si), REG(a3, X509 *x509))
{
	return(PKCS7_signatureVerify(bio, p7, si, x509));
}

BIO * ASM SAVEDS PKCS7_dataInit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, BIO *bio))
{
	return(PKCS7_dataInit(p7, bio));
}

int ASM SAVEDS PKCS7_dataFinal_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, BIO *bio))
{
	return(PKCS7_dataFinal(p7, bio));
}

BIO * ASM SAVEDS PKCS7_dataDecode_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, EVP_PKEY *pkey), REG(a2, BIO *in_bio), REG(a3, X509 *pcert))
{
	return(PKCS7_dataDecode(p7, pkey, in_bio, pcert));
}

PKCS7_SIGNER_INFO * ASM SAVEDS PKCS7_add_signature_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, X509 *x509), REG(a2, EVP_PKEY *pkey), REG(a3, const EVP_MD *dgst))
{
	return(PKCS7_add_signature(p7, x509, pkey, dgst));
}

X509 * ASM SAVEDS PKCS7_cert_from_signer_info_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, PKCS7_SIGNER_INFO *si))
{
	return(PKCS7_cert_from_signer_info(p7, si));
}

STACK_OF(PKCS7_SIGNER_INFO) * ASM SAVEDS PKCS7_get_signer_info_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7))
{
	return(PKCS7_get_signer_info(p7));
}

PKCS7_RECIP_INFO * ASM SAVEDS PKCS7_add_recipient_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, X509 *x509))
{
	return(PKCS7_add_recipient(p7, x509));
}

int ASM SAVEDS PKCS7_add_recipient_info_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, PKCS7_RECIP_INFO *ri))
{
	return(PKCS7_add_recipient_info(p7, ri));
}

int ASM SAVEDS PKCS7_RECIP_INFO_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_RECIP_INFO *p7i), REG(a1, X509 *x509))
{
	return(PKCS7_RECIP_INFO_set(p7i, x509));
}

int ASM SAVEDS PKCS7_set_cipher_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, const EVP_CIPHER *cipher))
{
	return(PKCS7_set_cipher(p7, cipher));
}

PKCS7_ISSUER_AND_SERIAL * ASM SAVEDS PKCS7_get_issuer_and_serial_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(d0, int idx))
{
	return(PKCS7_get_issuer_and_serial(p7, idx));
}

ASN1_OCTET_STRING * ASM SAVEDS PKCS7_digest_from_attributes_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) *sk))
{
	return(PKCS7_digest_from_attributes(sk));
}

int ASM SAVEDS PKCS7_add_signed_attribute_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *p7si), REG(d0, int nid), REG(d1, int type), REG(a1, void *data))
{
	return(PKCS7_add_signed_attribute(p7si, nid, type, data));
}

int ASM SAVEDS PKCS7_add_attribute_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *p7si), REG(d0, int nid), REG(d1, int atrtype), REG(a1, void *value))
{
	return(PKCS7_add_attribute(p7si, nid, atrtype, value));
}

ASN1_TYPE * ASM SAVEDS PKCS7_get_attribute_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *si), REG(d0, int nid))
{
	return(PKCS7_get_attribute(si, nid));
}

ASN1_TYPE * ASM SAVEDS PKCS7_get_signed_attribute_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *si), REG(d0, int nid))
{
	return(PKCS7_get_signed_attribute(si, nid));
}

int ASM SAVEDS PKCS7_set_signed_attributes_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *p7si), REG(a1, STACK_OF(X509_ATTRIBUTE) *sk))
{
	return(PKCS7_set_signed_attributes(p7si, sk));
}

int ASM SAVEDS PKCS7_set_attributes_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *p7si), REG(a1, STACK_OF(X509_ATTRIBUTE) *sk))
{
	return(PKCS7_set_attributes(p7si, sk));
}

PKCS7 * ASM SAVEDS PKCS7_sign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *signcert), REG(a1, EVP_PKEY *pkey), REG(a2, STACK_OF(X509) *certs), REG(a3, BIO *data), REG(d0, int flags))
{
	return(PKCS7_sign(signcert, pkey, certs, data, flags));
}

int ASM SAVEDS PKCS7_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, STACK_OF(X509) *certs), REG(a2, X509_STORE *store), REG(a3, BIO *indata), REG(d0, BIO *out), REG(d1, int flags))
{
	return(PKCS7_verify(p7, certs, store, indata, out, flags));
}

STACK_OF(X509) * ASM SAVEDS PKCS7_get0_signers_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, STACK_OF(X509) *certs), REG(d0, int flags))
{
	return(PKCS7_get0_signers(p7, certs, flags));
}

PKCS7 * ASM SAVEDS PKCS7_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509) *certs), REG(a1, BIO *in), REG(a2, const EVP_CIPHER *cipher), REG(d0, int flags))
{
	return(PKCS7_encrypt(certs, in, cipher, flags));
}

int ASM SAVEDS PKCS7_decrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7 *p7), REG(a1, EVP_PKEY *pkey), REG(a2, X509 *cert), REG(a3, BIO *data), REG(d0, int flags))
{
	return(PKCS7_decrypt(p7, pkey, cert, data, flags));
}

int ASM SAVEDS PKCS7_add_attrib_smimecap_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *si), REG(a1, STACK_OF(X509_ALGOR) *cap))
{
	return(PKCS7_add_attrib_smimecap(si, cap));
}

STACK_OF(X509_ALGOR) * ASM SAVEDS PKCS7_get_smimecap_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS7_SIGNER_INFO *si))
{
	return(PKCS7_get_smimecap(si));
}

int ASM SAVEDS PKCS7_simple_smimecap_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ALGOR) *sk), REG(d0, int nid), REG(d1, int arg))
{
	return(PKCS7_simple_smimecap(sk, nid, arg));
}

int ASM SAVEDS SMIME_write_PKCS7_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, PKCS7 *p7), REG(a2, BIO *data), REG(d0, int flags))
{
	return(SMIME_write_PKCS7(bio, p7, data, flags));
}

PKCS7 * ASM SAVEDS SMIME_read_PKCS7_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bio), REG(a1, BIO **bcont))
{
	return(SMIME_read_PKCS7(bio, bcont));
}

int ASM SAVEDS SMIME_crlf_copy_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *in), REG(a1, BIO *out), REG(d0, int flags))
{
	return(SMIME_crlf_copy(in, out, flags));
}

int ASM SAVEDS SMIME_text_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *in), REG(a1, BIO *out))
{
	return(SMIME_text(in, out));
}

void ASM SAVEDS ERR_load_PKCS7_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_PKCS7_strings();
}

int ASM SAVEDS RAND_set_rand_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const RAND_METHOD *meth))
{
	return(RAND_set_rand_method(meth));
}

const RAND_METHOD * ASM SAVEDS RAND_get_rand_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(RAND_get_rand_method());
}

RAND_METHOD * ASM SAVEDS RAND_SSLeay_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(RAND_SSLeay());
}

void ASM SAVEDS RAND_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	RAND_cleanup();
}

int ASM SAVEDS RAND_bytes_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *buf), REG(d0, int num))
{
	return(RAND_bytes(buf, num));
}

int ASM SAVEDS RAND_pseudo_bytes_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *buf), REG(d0, int num))
{
	return(RAND_pseudo_bytes(buf, num));
}

void ASM SAVEDS RAND_seed_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const void *buf), REG(d0, int num))
{
	RAND_seed(buf, num);
}

#if 0
void ASM SAVEDS RAND_add_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const void *buf), REG(d0, int num), REG(d1, float entropy))
{
	RAND_add(buf, num, entropy);
}
#endif

int ASM SAVEDS RAND_load_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *file), REG(d0, long max_bytes))
{
	return(RAND_load_file(file, max_bytes));
}

int ASM SAVEDS RAND_write_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *file))
{
	return(RAND_write_file(file));
}

const char * ASM SAVEDS RAND_file_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *file), REG(d0, size_t num))
{
	return(RAND_file_name(file, num));
}

int ASM SAVEDS RAND_status_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(RAND_status());
}

int ASM SAVEDS RAND_query_egd_bytes_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *path), REG(a1, unsigned char *buf), REG(d0, int bytes))
{
	return(RAND_query_egd_bytes(path, buf, bytes));
}

int ASM SAVEDS RAND_egd_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *path))
{
	return(RAND_egd(path));
}

int ASM SAVEDS RAND_egd_bytes_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *path), REG(d0, int bytes))
{
	return(RAND_egd_bytes(path, bytes));
}

int ASM SAVEDS RAND_poll_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(RAND_poll());
}

void ASM SAVEDS ERR_load_RAND_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_RAND_strings();
}

void ASM SAVEDS SSL_CTX_set_msg_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, void (*cb)(int write_p, int version, int content_type, const void *buf, size_t len, SSL *ssl, void *arg)))
{
	SSL_CTX_set_msg_callback(ctx, cb);
}

void ASM SAVEDS SSL_set_msg_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, void (*cb)(int write_p, int version, int content_type, const void *buf, size_t len, SSL *ssl, void *arg)))
{
	SSL_set_msg_callback(ssl, cb);
}

struct lhash_st * ASM SAVEDS SSL_CTX_sessions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(SSL_CTX_sessions(ctx));
}

size_t ASM SAVEDS SSL_get_finished_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(a1, void *buf), REG(d0, size_t count))
{
	return(SSL_get_finished(s, buf, count));
}

size_t ASM SAVEDS SSL_get_peer_finished_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(a1, void *buf), REG(d0, size_t count))
{
	return(SSL_get_peer_finished(s, buf, count));
}

BIO_METHOD * ASM SAVEDS BIO_f_ssl_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BIO_f_ssl());
}

BIO * ASM SAVEDS BIO_new_ssl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, int client))
{
	return(BIO_new_ssl(ctx, client));
}

BIO * ASM SAVEDS BIO_new_ssl_connect_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(BIO_new_ssl_connect(ctx));
}

BIO * ASM SAVEDS BIO_new_buffer_ssl_connect_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(BIO_new_buffer_ssl_connect(ctx));
}

int ASM SAVEDS BIO_ssl_copy_session_id_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *to), REG(a1, BIO *from))
{
	return(BIO_ssl_copy_session_id(to, from));
}

void ASM SAVEDS BIO_ssl_shutdown_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *ssl_bio))
{
	BIO_ssl_shutdown(ssl_bio);
}

int ASM SAVEDS SSL_CTX_set_cipher_list_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a1), REG(a1, const char *str))
{
	return(SSL_CTX_set_cipher_list(a1, str));
}

SSL_CTX * ASM SAVEDS SSL_CTX_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_METHOD *meth))
{
	return(SSL_CTX_new(meth));
}

void ASM SAVEDS SSL_CTX_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a))
{
	SSL_CTX_free(a);
}

long ASM SAVEDS SSL_CTX_set_timeout_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, long t))
{
	return(SSL_CTX_set_timeout(ctx, t));
}

long ASM SAVEDS SSL_CTX_get_timeout_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(SSL_CTX_get_timeout(ctx));
}

X509_STORE * ASM SAVEDS SSL_CTX_get_cert_store_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a))
{
	return(SSL_CTX_get_cert_store(a));
}

void ASM SAVEDS SSL_CTX_set_cert_store_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a), REG(a1, X509_STORE *b))
{
	SSL_CTX_set_cert_store(a, b);
}

int ASM SAVEDS SSL_want_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_want(s));
}

int ASM SAVEDS SSL_clear_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_clear(s));
}

void ASM SAVEDS SSL_CTX_flush_sessions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, long tm))
{
	SSL_CTX_flush_sessions(ctx, tm);
}

SSL_CIPHER * ASM SAVEDS SSL_get_current_cipher_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_current_cipher(s));
}

int ASM SAVEDS SSL_CIPHER_get_bits_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *c), REG(a1, int *alg_bits))
{
	return(SSL_CIPHER_get_bits(c, alg_bits));
}

char * ASM SAVEDS SSL_CIPHER_get_version_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *c))
{
	return(SSL_CIPHER_get_version(c));
}

const char * ASM SAVEDS SSL_CIPHER_get_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *c))
{
	return(SSL_CIPHER_get_name(c));
}

const char * ASM SAVEDS SSL_CIPHER_get_mac_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *cipher))
{
	return(SSL_CIPHER_get_mac(cipher));
}

const char * ASM SAVEDS SSL_CIPHER_get_encryption_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *cipher))
{
	return(SSL_CIPHER_get_encryption(cipher));
}

const char * ASM SAVEDS SSL_CIPHER_get_authentication_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *cipher))
{
	return(SSL_CIPHER_get_authentication(cipher));
}

const char * ASM SAVEDS SSL_CIPHER_get_key_exchange_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *cipher))
{
	return(SSL_CIPHER_get_key_exchange(cipher));
}

const char * ASM SAVEDS SSL_CIPHER_get_export_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *cipher))
{
	return(SSL_CIPHER_get_export(cipher));
}

int ASM SAVEDS SSL_get_fd_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_fd(s));
}

int ASM SAVEDS SSL_get_rfd_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_rfd(s));
}

int ASM SAVEDS SSL_get_wfd_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_wfd(s));
}

const char * ASM SAVEDS SSL_get_cipher_list_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int n))
{
	return(SSL_get_cipher_list(s, n));
}

char * ASM SAVEDS SSL_get_shared_ciphers_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(a1, char *buf), REG(d0, int len))
{
	return(SSL_get_shared_ciphers(s, buf, len));
}

int ASM SAVEDS SSL_get_read_ahead_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_read_ahead(s));
}

int ASM SAVEDS SSL_pending_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_pending(s));
}

int ASM SAVEDS SSL_set_fd_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int fd))
{
	return(SSL_set_fd(s, fd));
}

int ASM SAVEDS SSL_set_rfd_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int fd))
{
	return(SSL_set_rfd(s, fd));
}

int ASM SAVEDS SSL_set_wfd_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int fd))
{
	return(SSL_set_wfd(s, fd));
}

void ASM SAVEDS SSL_set_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(a1, BIO *rbio), REG(a2, BIO *wbio))
{
	SSL_set_bio(s, rbio, wbio);
}

BIO * ASM SAVEDS SSL_get_rbio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_rbio(s));
}

BIO * ASM SAVEDS SSL_get_wbio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_wbio(s));
}

int ASM SAVEDS SSL_set_cipher_list_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(a1, const char *str))
{
	return(SSL_set_cipher_list(s, str));
}

void ASM SAVEDS SSL_set_read_ahead_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int yes))
{
	SSL_set_read_ahead(s, yes);
}

int ASM SAVEDS SSL_get_verify_mode_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_verify_mode(s));
}

int ASM SAVEDS SSL_get_verify_depth_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_verify_depth(s));
}

int (* ASM SAVEDS SSL_get_verify_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s)))(int, X509_STORE_CTX *)
{
	return(SSL_get_verify_callback(s));
}

void ASM SAVEDS SSL_set_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int mode), REG(a1, int (*callback)(int ok, X509_STORE_CTX *ctx)))
{
	SSL_set_verify(s, mode, callback);
}

void ASM SAVEDS SSL_set_verify_depth_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int depth))
{
	SSL_set_verify_depth(s, depth);
}

int ASM SAVEDS SSL_use_RSAPrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, RSA *rsa))
{
	return(SSL_use_RSAPrivateKey(ssl, rsa));
}

int ASM SAVEDS SSL_use_RSAPrivateKey_ASN1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, unsigned char *d), REG(d0, long len))
{
	return(SSL_use_RSAPrivateKey_ASN1(ssl, d, len));
}

int ASM SAVEDS SSL_use_PrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, EVP_PKEY *pkey))
{
	return(SSL_use_PrivateKey(ssl, pkey));
}

int ASM SAVEDS SSL_use_PrivateKey_ASN1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int pk), REG(a0, SSL *ssl), REG(a1, unsigned char *d), REG(d1, long len))
{
	return(SSL_use_PrivateKey_ASN1(pk, ssl, d, len));
}

int ASM SAVEDS SSL_use_certificate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, X509 *x))
{
	return(SSL_use_certificate(ssl, x));
}

int ASM SAVEDS SSL_use_certificate_ASN1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, unsigned char *d), REG(d0, int len))
{
	return(SSL_use_certificate_ASN1(ssl, d, len));
}

int ASM SAVEDS SSL_use_RSAPrivateKey_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, const char *file), REG(d0, int type))
{
	return(SSL_use_RSAPrivateKey_file(ssl, file, type));
}

int ASM SAVEDS SSL_use_PrivateKey_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, const char *file), REG(d0, int type))
{
	return(SSL_use_PrivateKey_file(ssl, file, type));
}

int ASM SAVEDS SSL_use_certificate_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, const char *file), REG(d0, int type))
{
	return(SSL_use_certificate_file(ssl, file, type));
}

int ASM SAVEDS SSL_CTX_use_RSAPrivateKey_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, const char *file), REG(d0, int type))
{
	return(SSL_CTX_use_RSAPrivateKey_file(ctx, file, type));
}

int ASM SAVEDS SSL_CTX_use_PrivateKey_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, const char *file), REG(d0, int type))
{
	return(SSL_CTX_use_PrivateKey_file(ctx, file, type));
}

int ASM SAVEDS SSL_CTX_use_certificate_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, const char *file), REG(d0, int type))
{
	return(SSL_CTX_use_certificate_file(ctx, file, type));
}

int ASM SAVEDS SSL_CTX_use_certificate_chain_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, const char *file))
{
	return(SSL_CTX_use_certificate_chain_file(ctx, file));
}

STACK_OF(X509_NAME) * ASM SAVEDS SSL_load_client_CA_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *file))
{
	return(SSL_load_client_CA_file(file));
}

int ASM SAVEDS SSL_add_file_cert_subjects_to_stack_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_NAME) *stackCAs), REG(a1, const char *file))
{
	return(SSL_add_file_cert_subjects_to_stack(stackCAs, file));
}

int ASM SAVEDS SSL_add_dir_cert_subjects_to_stack_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_NAME) *stackCAs), REG(a1, const char *dir))
{
	return(SSL_add_dir_cert_subjects_to_stack(stackCAs, dir));
}

void ASM SAVEDS SSL_load_error_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	SSL_load_error_strings();
}

const char * ASM SAVEDS SSL_state_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_state_string(s));
}

const char * ASM SAVEDS SSL_rstate_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_rstate_string(s));
}

const char * ASM SAVEDS SSL_state_string_long_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_state_string_long(s));
}

const char * ASM SAVEDS SSL_rstate_string_long_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *s))
{
	return(SSL_rstate_string_long(s));
}

long ASM SAVEDS SSL_SESSION_get_time_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *s))
{
	return(SSL_SESSION_get_time(s));
}

long ASM SAVEDS SSL_SESSION_set_time_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *s), REG(d0, long t))
{
	return(SSL_SESSION_set_time(s, t));
}

long ASM SAVEDS SSL_SESSION_get_timeout_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *s))
{
	return(SSL_SESSION_get_timeout(s));
}

long ASM SAVEDS SSL_SESSION_set_timeout_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *s), REG(d0, long t))
{
	return(SSL_SESSION_set_timeout(s, t));
}

void ASM SAVEDS SSL_copy_session_id_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *to), REG(a1, SSL *from))
{
	SSL_copy_session_id(to, from);
}

SSL_SESSION * ASM SAVEDS SSL_SESSION_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSL_SESSION_new());
}

unsigned long ASM SAVEDS SSL_SESSION_hash_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *a))
{
	return(SSL_SESSION_hash(a));
}

int ASM SAVEDS SSL_SESSION_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *a), REG(a1, SSL_SESSION *b))
{
	return(SSL_SESSION_cmp(a, b));
}

int ASM SAVEDS SSL_SESSION_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *fp), REG(a1, SSL_SESSION *ses))
{
	return(SSL_SESSION_print(fp, ses));
}

void ASM SAVEDS SSL_SESSION_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *ses))
{
	SSL_SESSION_free(ses);
}

int ASM SAVEDS i2d_SSL_SESSION_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *in), REG(a1, unsigned char **pp))
{
	return(i2d_SSL_SESSION(in, pp));
}

int ASM SAVEDS SSL_set_session_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *to), REG(a1, SSL_SESSION *session))
{
	return(SSL_set_session(to, session));
}

int ASM SAVEDS SSL_CTX_add_session_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *s), REG(a1, SSL_SESSION *c))
{
	return(SSL_CTX_add_session(s, c));
}

int ASM SAVEDS SSL_CTX_remove_session_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a1), REG(a1, SSL_SESSION *c))
{
	return(SSL_CTX_remove_session(a1, c));
}

int ASM SAVEDS SSL_CTX_set_generate_session_id_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a), REG(d0, GEN_SESSION_CB b))
{
	return(SSL_CTX_set_generate_session_id(a, b));
}

int ASM SAVEDS SSL_set_generate_session_id_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *a), REG(d0, GEN_SESSION_CB b))
{
	return(SSL_set_generate_session_id(a, b));
}

int ASM SAVEDS SSL_has_matching_session_id_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const SSL *ssl), REG(a1, const unsigned char *id), REG(d0, unsigned int id_len))
{
	return(SSL_has_matching_session_id(ssl, id, id_len));
}

SSL_SESSION * ASM SAVEDS d2i_SSL_SESSION_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_SSL_SESSION(a, pp, length));
}

X509 * ASM SAVEDS SSL_get_peer_certificate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_peer_certificate(s));
}

STACK_OF(X509) * ASM SAVEDS SSL_get_peer_cert_chain_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_peer_cert_chain(s));
}

int ASM SAVEDS SSL_CTX_get_verify_mode_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(SSL_CTX_get_verify_mode(ctx));
}

int ASM SAVEDS SSL_CTX_get_verify_depth_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(SSL_CTX_get_verify_depth(ctx));
}

int (* ASM SAVEDS SSL_CTX_get_verify_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx)))(int, X509_STORE_CTX *)
{
	return(SSL_CTX_get_verify_callback(ctx));
}

void ASM SAVEDS SSL_CTX_set_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, int mode), REG(a1, int (*callback)(int, X509_STORE_CTX *)))
{
	SSL_CTX_set_verify(ctx, mode, callback);
}

void ASM SAVEDS SSL_CTX_set_verify_depth_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, int depth))
{
	SSL_CTX_set_verify_depth(ctx, depth);
}

void ASM SAVEDS SSL_CTX_set_cert_verify_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, int (*cb)(X509_STORE_CTX *, void *)), REG(a2, void *arg))
{
	SSL_CTX_set_cert_verify_callback(ctx, cb, arg);
}

int ASM SAVEDS SSL_CTX_use_RSAPrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, RSA *rsa))
{
	return(SSL_CTX_use_RSAPrivateKey(ctx, rsa));
}

int ASM SAVEDS SSL_CTX_use_RSAPrivateKey_ASN1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, unsigned char *d), REG(d0, long len))
{
	return(SSL_CTX_use_RSAPrivateKey_ASN1(ctx, d, len));
}

int ASM SAVEDS SSL_CTX_use_PrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, EVP_PKEY *pkey))
{
	return(SSL_CTX_use_PrivateKey(ctx, pkey));
}

int ASM SAVEDS SSL_CTX_use_PrivateKey_ASN1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int pk), REG(a0, SSL_CTX *ctx), REG(a1, unsigned char *d), REG(d1, long len))
{
	return(SSL_CTX_use_PrivateKey_ASN1(pk, ctx, d, len));
}

int ASM SAVEDS SSL_CTX_use_certificate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, X509 *x))
{
	return(SSL_CTX_use_certificate(ctx, x));
}

int ASM SAVEDS SSL_CTX_use_certificate_ASN1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, int len), REG(a1, unsigned char *d))
{
	return(SSL_CTX_use_certificate_ASN1(ctx, len, d));
}

void ASM SAVEDS SSL_CTX_set_default_passwd_cb_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, pem_password_cb *cb))
{
	SSL_CTX_set_default_passwd_cb(ctx, cb);
}

void ASM SAVEDS SSL_CTX_set_default_passwd_cb_userdata_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, void *u))
{
	SSL_CTX_set_default_passwd_cb_userdata(ctx, u);
}

int ASM SAVEDS SSL_CTX_check_private_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(SSL_CTX_check_private_key(ctx));
}

int ASM SAVEDS SSL_check_private_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ctx))
{
	return(SSL_check_private_key(ctx));
}

int ASM SAVEDS SSL_CTX_set_session_id_context_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, const unsigned char *sid_ctx), REG(d0, unsigned int sid_ctx_len))
{
	return(SSL_CTX_set_session_id_context(ctx, sid_ctx, sid_ctx_len));
}

SSL * ASM SAVEDS SSL_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(SSL_new(ctx));
}

int ASM SAVEDS SSL_set_session_id_context_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, const unsigned char *sid_ctx), REG(d0, unsigned int sid_ctx_len))
{
	return(SSL_set_session_id_context(ssl, sid_ctx, sid_ctx_len));
}

int ASM SAVEDS SSL_CTX_set_purpose_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *s), REG(d0, int purpose))
{
	return(SSL_CTX_set_purpose(s, purpose));
}

int ASM SAVEDS SSL_set_purpose_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int purpose))
{
	return(SSL_set_purpose(s, purpose));
}

int ASM SAVEDS SSL_CTX_set_trust_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *s), REG(d0, int trust))
{
	return(SSL_CTX_set_trust(s, trust));
}

int ASM SAVEDS SSL_set_trust_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int trust))
{
	return(SSL_set_trust(s, trust));
}

void ASM SAVEDS SSL_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	SSL_free(ssl);
}

int ASM SAVEDS SSL_accept_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_accept(ssl));
}

int ASM SAVEDS SSL_connect_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_connect(ssl));
}

int ASM SAVEDS SSL_read_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, void *buf), REG(d0, int num))
{
	return(SSL_read(ssl, buf, num));
}

int ASM SAVEDS SSL_peek_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, void *buf), REG(d0, int num))
{
	return(SSL_peek(ssl, buf, num));
}

int ASM SAVEDS SSL_write_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, const void *buf), REG(d0, int num))
{
	return(SSL_write(ssl, buf, num));
}

long ASM SAVEDS SSL_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(d0, int cmd), REG(d1, long larg), REG(a1, void *parg))
{
	return(SSL_ctrl(ssl, cmd, larg, parg));
}

long ASM SAVEDS SSL_callback_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *a), REG(d0, int a1), REG(a1, void (*b)()))
{
	return(SSL_callback_ctrl(a, a1, b));
}

long ASM SAVEDS SSL_CTX_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, int cmd), REG(d1, long larg), REG(a1, void *parg))
{
	return(SSL_CTX_ctrl(ctx, cmd, larg, parg));
}

long ASM SAVEDS SSL_CTX_callback_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *a1), REG(d0, int a2), REG(a1, void (*a3)()))
{
	return(SSL_CTX_callback_ctrl(a1, a2, a3));
}

int ASM SAVEDS SSL_get_error_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(d0, int ret_code))
{
	return(SSL_get_error(s, ret_code));
}

const char * ASM SAVEDS SSL_get_version_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_version(s));
}

int ASM SAVEDS SSL_CTX_set_ssl_version_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, SSL_METHOD *meth))
{
	return(SSL_CTX_set_ssl_version(ctx, meth));
}

SSL_METHOD * ASM SAVEDS SSLv2_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv2_method());
}

SSL_METHOD * ASM SAVEDS SSLv2_server_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv2_server_method());
}

SSL_METHOD * ASM SAVEDS SSLv2_client_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv2_client_method());
}

SSL_METHOD * ASM SAVEDS SSLv3_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv3_method());
}

SSL_METHOD * ASM SAVEDS SSLv3_server_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv3_server_method());
}

SSL_METHOD * ASM SAVEDS SSLv3_client_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv3_client_method());
}

#if 0
SSL_METHOD * ASM SAVEDS SSLv23_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv23_method());
}

SSL_METHOD * ASM SAVEDS SSLv23_server_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv23_server_method());
}

SSL_METHOD * ASM SAVEDS SSLv23_client_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSLv23_client_method());
}
#endif

SSL_METHOD * ASM SAVEDS TLSv1_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(TLSv1_method());
}

SSL_METHOD * ASM SAVEDS TLSv1_server_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(TLSv1_server_method());
}

SSL_METHOD * ASM SAVEDS TLSv1_client_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(TLSv1_client_method());
}

STACK_OF(SSL_CIPHER) * ASM SAVEDS SSL_get_ciphers_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_ciphers(s));
}

int ASM SAVEDS SSL_do_handshake_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_do_handshake(s));
}

int ASM SAVEDS SSL_renegotiate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_renegotiate(s));
}

int ASM SAVEDS SSL_renegotiate_pending_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_renegotiate_pending(s));
}

int ASM SAVEDS SSL_shutdown_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_shutdown(s));
}

SSL_METHOD * ASM SAVEDS SSL_get_ssl_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_ssl_method(s));
}

int ASM SAVEDS SSL_set_ssl_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(a1, SSL_METHOD *method))
{
	return(SSL_set_ssl_method(s, method));
}

const char * ASM SAVEDS SSL_alert_type_string_long_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int value))
{
	return(SSL_alert_type_string_long(value));
}

const char * ASM SAVEDS SSL_alert_type_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int value))
{
	return(SSL_alert_type_string(value));
}

const char * ASM SAVEDS SSL_alert_desc_string_long_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int value))
{
	return(SSL_alert_desc_string_long(value));
}

const char * ASM SAVEDS SSL_alert_desc_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int value))
{
	return(SSL_alert_desc_string(value));
}

void ASM SAVEDS SSL_set_client_CA_list_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s), REG(a1, STACK_OF(X509_NAME) *list))
{
	SSL_set_client_CA_list(s, list);
}

void ASM SAVEDS SSL_CTX_set_client_CA_list_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, STACK_OF(X509_NAME) *list))
{
	SSL_CTX_set_client_CA_list(ctx, list);
}

STACK_OF(X509_NAME) * ASM SAVEDS SSL_get_client_CA_list_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_client_CA_list(s));
}

STACK_OF(X509_NAME) * ASM SAVEDS SSL_CTX_get_client_CA_list_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *s))
{
	return(SSL_CTX_get_client_CA_list(s));
}

int ASM SAVEDS SSL_add_client_CA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, X509 *x))
{
	return(SSL_add_client_CA(ssl, x));
}

int ASM SAVEDS SSL_CTX_add_client_CA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, X509 *x))
{
	return(SSL_CTX_add_client_CA(ctx, x));
}

void ASM SAVEDS SSL_set_connect_state_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	SSL_set_connect_state(s);
}

void ASM SAVEDS SSL_set_accept_state_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	SSL_set_accept_state(s);
}

long ASM SAVEDS SSL_get_default_timeout_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *s))
{
	return(SSL_get_default_timeout(s));
}

int ASM SAVEDS SSL_library_init_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSL_library_init());
}

char * ASM SAVEDS SSL_CIPHER_description_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CIPHER *a1), REG(a1, char *buf), REG(d0, int size))
{
	return(SSL_CIPHER_description(a1, buf, size));
}

STACK_OF(X509_NAME) * ASM SAVEDS SSL_dup_CA_list_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_NAME) *sk))
{
	return(SSL_dup_CA_list(sk));
}

SSL * ASM SAVEDS SSL_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_dup(ssl));
}

X509 * ASM SAVEDS SSL_get_certificate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_get_certificate(ssl));
}

struct evp_pkey_st * ASM SAVEDS SSL_get_privatekey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_get_privatekey(ssl));
}

void ASM SAVEDS SSL_CTX_set_quiet_shutdown_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(d0, int mode))
{
	SSL_CTX_set_quiet_shutdown(ctx, mode);
}

int ASM SAVEDS SSL_CTX_get_quiet_shutdown_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(SSL_CTX_get_quiet_shutdown(ctx));
}

void ASM SAVEDS SSL_set_quiet_shutdown_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(d0, int mode))
{
	SSL_set_quiet_shutdown(ssl, mode);
}

int ASM SAVEDS SSL_get_quiet_shutdown_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_get_quiet_shutdown(ssl));
}

void ASM SAVEDS SSL_set_shutdown_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(d0, int mode))
{
	SSL_set_shutdown(ssl, mode);
}

int ASM SAVEDS SSL_get_shutdown_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_get_shutdown(ssl));
}

int ASM SAVEDS SSL_version_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_version(ssl));
}

int ASM SAVEDS SSL_CTX_set_default_verify_paths_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx))
{
	return(SSL_CTX_set_default_verify_paths(ctx));
}

int ASM SAVEDS SSL_CTX_load_verify_locations_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, const char *CAfile), REG(a2, const char *CApath))
{
	return(SSL_CTX_load_verify_locations(ctx, CAfile, CApath));
}

SSL_SESSION * ASM SAVEDS SSL_get_session_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_get_session(ssl));
}

SSL_SESSION * ASM SAVEDS SSL_get1_session_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_get1_session(ssl));
}

SSL_CTX * ASM SAVEDS SSL_get_SSL_CTX_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_get_SSL_CTX(ssl));
}

void ASM SAVEDS SSL_set_info_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, void (*cb)(const SSL *ssl, int type, int val)))
{
	SSL_set_info_callback(ssl, cb);
}

void (* ASM SAVEDS SSL_get_info_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl)))(const SSL *ssl, int type, int val)
{
	return(SSL_get_info_callback(ssl));
}

int ASM SAVEDS SSL_state_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_state(ssl));
}

void ASM SAVEDS SSL_set_verify_result_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(d0, long v))
{
	SSL_set_verify_result(ssl, v);
}

long ASM SAVEDS SSL_get_verify_result_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl))
{
	return(SSL_get_verify_result(ssl));
}

int ASM SAVEDS SSL_set_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(d0, int idx), REG(a1, void *data))
{
	return(SSL_set_ex_data(ssl, idx, data));
}

void * ASM SAVEDS SSL_get_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(d0, int idx))
{
	return(SSL_get_ex_data(ssl, idx));
}

int ASM SAVEDS SSL_get_ex_new_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(SSL_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int ASM SAVEDS SSL_SESSION_set_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *ss), REG(d0, int idx), REG(a1, void *data))
{
	return(SSL_SESSION_set_ex_data(ss, idx, data));
}

void * ASM SAVEDS SSL_SESSION_get_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_SESSION *ss), REG(d0, int idx))
{
	return(SSL_SESSION_get_ex_data(ss, idx));
}

int ASM SAVEDS SSL_SESSION_get_ex_new_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(SSL_SESSION_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int ASM SAVEDS SSL_CTX_set_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ssl), REG(d0, int idx), REG(a1, void *data))
{
	return(SSL_CTX_set_ex_data(ssl, idx, data));
}

void * ASM SAVEDS SSL_CTX_get_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ssl), REG(d0, int idx))
{
	return(SSL_CTX_get_ex_data(ssl, idx));
}

int ASM SAVEDS SSL_CTX_get_ex_new_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(SSL_CTX_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int ASM SAVEDS SSL_get_ex_data_X509_STORE_CTX_idx_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SSL_get_ex_data_X509_STORE_CTX_idx());
}

void ASM SAVEDS SSL_CTX_set_tmp_rsa_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, RSA *(*cb)(SSL *ssl, int is_export, int keylength)))
{
	SSL_CTX_set_tmp_rsa_callback(ctx, cb);
}

void ASM SAVEDS SSL_set_tmp_rsa_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, RSA *(*cb)(SSL *ssl, int is_export, int keylength)))
{
	SSL_set_tmp_rsa_callback(ssl, cb);
}

void ASM SAVEDS SSL_CTX_set_tmp_dh_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL_CTX *ctx), REG(a1, DH *(*dh)(SSL *ssl, int is_export, int keylength)))
{
	SSL_CTX_set_tmp_dh_callback(ctx, dh);
}

void ASM SAVEDS SSL_set_tmp_dh_callback_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SSL *ssl), REG(a1, DH *(*dh)(SSL *ssl, int is_export, int keylength)))
{
	SSL_set_tmp_dh_callback(ssl, dh);
}

int ASM SAVEDS SSL_COMP_add_compression_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int id), REG(a0, COMP_METHOD *cm))
{
	return(SSL_COMP_add_compression_method(id, cm));
}

void ASM SAVEDS ERR_load_SSL_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_SSL_strings();
}

int ASM SAVEDS sk_num_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK *a))
{
	return(sk_num(a));
}

char * ASM SAVEDS sk_value_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK *a), REG(d0, int b))
{
	return(sk_value(a, b));
}

char * ASM SAVEDS sk_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *a), REG(d0, int b), REG(a1, char *c))
{
	return(sk_set(a, b, c));
}

STACK * ASM SAVEDS sk_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int (*cmp)(const char *const *, const char *const *)))
{
	return(sk_new(cmp));
}

STACK * ASM SAVEDS sk_new_null_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(sk_new_null());
}

void ASM SAVEDS sk_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *a))
{
	sk_free(a);
}

void ASM SAVEDS sk_pop_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st), REG(a1, void (*func)(void *)))
{
	sk_pop_free(st, func);
}

int ASM SAVEDS sk_insert_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *sk), REG(a1, char *data), REG(d0, int where))
{
	return(sk_insert(sk, data, where));
}

char * ASM SAVEDS sk_delete_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st), REG(d0, int loc))
{
	return(sk_delete(st, loc));
}

char * ASM SAVEDS sk_delete_ptr_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st), REG(a1, char *p))
{
	return(sk_delete_ptr(st, p));
}

int ASM SAVEDS sk_find_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st), REG(a1, char *data))
{
	return(sk_find(st, data));
}

int ASM SAVEDS sk_push_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st), REG(a1, char *data))
{
	return(sk_push(st, data));
}

int ASM SAVEDS sk_unshift_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st), REG(a1, char *data))
{
	return(sk_unshift(st, data));
}

char * ASM SAVEDS sk_shift_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st))
{
	return(sk_shift(st));
}

char * ASM SAVEDS sk_pop_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st))
{
	return(sk_pop(st));
}

void ASM SAVEDS sk_zero_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st))
{
	sk_zero(st);
}

int (* ASM SAVEDS sk_set_cmp_func_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *sk), REG(a1, int (*c)(const char *const *, const char *const *)))) (const char *const *, const char *const *)
{
	return(sk_set_cmp_func(sk, c));
}

STACK * ASM SAVEDS sk_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st))
{
	return(sk_dup(st));
}

void ASM SAVEDS sk_sort_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *st))
{
	sk_sort(st);
}

char * ASM SAVEDS ms_time_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ms_time_new());
}

void ASM SAVEDS ms_time_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *a))
{
	ms_time_free(a);
}

void ASM SAVEDS ms_time_get_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *a))
{
	ms_time_get(a);
}

double ASM SAVEDS ms_time_diff_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *start), REG(a1, char *end))
{
	return(ms_time_diff(start, end));
}

int ASM SAVEDS ms_time_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *ap), REG(a1, char *bp))
{
	return(ms_time_cmp(ap, bp));
}

TXT_DB * ASM SAVEDS TXT_DB_read_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *in), REG(d0, int num))
{
	return(TXT_DB_read(in, num));
}

long ASM SAVEDS TXT_DB_write_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, TXT_DB *db))
{
	return(TXT_DB_write(out, db));
}

int ASM SAVEDS TXT_DB_create_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, TXT_DB *db), REG(d0, int field), REG(a1, int (*qual)()), REG(d1, LHASH_HASH_FN_TYPE hash), REG(d2, LHASH_COMP_FN_TYPE cmp))
{
	return(TXT_DB_create_index(db, field, qual, hash, cmp));
}

void ASM SAVEDS TXT_DB_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, TXT_DB *db))
{
	TXT_DB_free(db);
}

char ** ASM SAVEDS TXT_DB_get_by_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, TXT_DB *db), REG(d0, int idx), REG(a1, char **value))
{
	return(TXT_DB_get_by_index(db, idx, value));
}

int ASM SAVEDS TXT_DB_insert_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, TXT_DB *db), REG(a1, char **value))
{
	return(TXT_DB_insert(db, value));
}

UI * ASM SAVEDS UI_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(UI_new());
}

UI * ASM SAVEDS UI_new_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const UI_METHOD *method))
{
	return(UI_new_method(method));
}

void ASM SAVEDS UI_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui))
{
	UI_free(ui);
}

int ASM SAVEDS UI_add_input_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *prompt), REG(d0, int flags), REG(a2, char *result_buf), REG(d1, int minsize), REG(d2, int maxsize))
{
	return(UI_add_input_string(ui, prompt, flags, result_buf, minsize, maxsize));
}

int ASM SAVEDS UI_dup_input_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *prompt), REG(d0, int flags), REG(a2, char *result_buf), REG(d1, int minsize), REG(d2, int maxsize))
{
	return(UI_dup_input_string(ui, prompt, flags, result_buf, minsize, maxsize));
}

int ASM SAVEDS UI_add_verify_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *prompt), REG(d0, int flags), REG(a2, char *result_buf), REG(d1, int minsize), REG(d2, int maxsize), REG(a3, const char *test_buf))
{
	return(UI_add_verify_string(ui, prompt, flags, result_buf, minsize, maxsize, test_buf));
}

int ASM SAVEDS UI_dup_verify_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *prompt), REG(d0, int flags), REG(a2, char *result_buf), REG(d1, int minsize), REG(d2, int maxsize), REG(a3, const char *test_buf))
{
	return(UI_dup_verify_string(ui, prompt, flags, result_buf, minsize, maxsize, test_buf));
}

int ASM SAVEDS UI_add_input_boolean_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *prompt), REG(a2, const char *action_desc), REG(a3, const char *ok_chars), REG(d0, const char *cancel_chars), REG(d1, int flags), REG(d2, char *result_buf))
{
	return(UI_add_input_boolean(ui, prompt, action_desc, ok_chars, cancel_chars, flags, result_buf));
}

int ASM SAVEDS UI_dup_input_boolean_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *prompt), REG(a2, const char *action_desc), REG(a3, const char *ok_chars), REG(d0, const char *cancel_chars), REG(d1, int flags), REG(d2, char *result_buf))
{
	return(UI_dup_input_boolean(ui, prompt, action_desc, ok_chars, cancel_chars, flags, result_buf));
}

int ASM SAVEDS UI_add_info_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *text))
{
	return(UI_add_info_string(ui, text));
}

int ASM SAVEDS UI_dup_info_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *text))
{
	return(UI_dup_info_string(ui, text));
}

int ASM SAVEDS UI_add_error_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *text))
{
	return(UI_add_error_string(ui, text));
}

int ASM SAVEDS UI_dup_error_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const char *text))
{
	return(UI_dup_error_string(ui, text));
}

char * ASM SAVEDS UI_construct_prompt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui_method), REG(a1, const char *object_desc), REG(a2, const char *object_name))
{
	return(UI_construct_prompt(ui_method, object_desc, object_name));
}

void * ASM SAVEDS UI_add_user_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, void *user_data))
{
	return(UI_add_user_data(ui, user_data));
}

void * ASM SAVEDS UI_get0_user_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui))
{
	return(UI_get0_user_data(ui));
}

const char * ASM SAVEDS UI_get0_result_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(d0, int i))
{
	return(UI_get0_result(ui, i));
}

int ASM SAVEDS UI_process_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui))
{
	return(UI_process(ui));
}

int ASM SAVEDS UI_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(d0, int cmd), REG(d1, long i), REG(a1, void *p), REG(a2, void (*f)()))
{
	return(UI_ctrl(ui, cmd, i, p, f));
}

int ASM SAVEDS UI_get_ex_new_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(UI_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int ASM SAVEDS UI_set_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *r), REG(d0, int idx), REG(a1, void *arg))
{
	return(UI_set_ex_data(r, idx, arg));
}

void * ASM SAVEDS UI_get_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *r), REG(d0, int idx))
{
	return(UI_get_ex_data(r, idx));
}

void ASM SAVEDS UI_set_default_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const UI_METHOD *meth))
{
	UI_set_default_method(meth);
}

const UI_METHOD * ASM SAVEDS UI_get_default_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(UI_get_default_method());
}

const UI_METHOD * ASM SAVEDS UI_get_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui))
{
	return(UI_get_method(ui));
}

const UI_METHOD * ASM SAVEDS UI_set_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, const UI_METHOD *meth))
{
	return(UI_set_method(ui, meth));
}

UI_METHOD * ASM SAVEDS UI_OpenSSL_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(UI_OpenSSL());
}

UI_METHOD * ASM SAVEDS UI_create_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *name))
{
	return(UI_create_method(name));
}

void ASM SAVEDS UI_destroy_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *ui_method))
{
	UI_destroy_method(ui_method);
}

int ASM SAVEDS UI_method_set_opener_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method), REG(a1, int (*opener)(UI *ui)))
{
	return(UI_method_set_opener(method, opener));
}

int ASM SAVEDS UI_method_set_writer_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method), REG(a1, int (*writer)(UI *ui, UI_STRING *uis)))
{
	return(UI_method_set_writer(method, writer));
}

int ASM SAVEDS UI_method_set_flusher_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method), REG(a1, int (*flusher)(UI *ui)))
{
	return(UI_method_set_flusher(method, flusher));
}

int ASM SAVEDS UI_method_set_reader_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method), REG(a1, int (*reader)(UI *ui, UI_STRING *uis)))
{
	return(UI_method_set_reader(method, reader));
}

int ASM SAVEDS UI_method_set_closer_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method), REG(a1, int (*closer)(UI *ui)))
{
	return(UI_method_set_closer(method, closer));
}

int (* ASM SAVEDS UI_method_get_opener_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method)))(UI*)
{
	return(UI_method_get_opener(method));
}

int (* ASM SAVEDS UI_method_get_writer_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method)))(UI*, UI_STRING*)
{
	return(UI_method_get_writer(method));
}

int (* ASM SAVEDS UI_method_get_flusher_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method)))(UI*)
{
	return(UI_method_get_flusher(method));
}

int (* ASM SAVEDS UI_method_get_reader_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method)))(UI*, UI_STRING*)
{
	return(UI_method_get_reader(method));
}

int (* ASM SAVEDS UI_method_get_closer_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_METHOD *method)))(UI*)
{
	return(UI_method_get_closer(method));
}

enum UI_string_types ASM SAVEDS UI_get_string_type_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get_string_type(uis));
}

int ASM SAVEDS UI_get_input_flags_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get_input_flags(uis));
}

const char * ASM SAVEDS UI_get0_output_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get0_output_string(uis));
}

const char * ASM SAVEDS UI_get0_action_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get0_action_string(uis));
}

const char * ASM SAVEDS UI_get0_result_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get0_result_string(uis));
}

const char * ASM SAVEDS UI_get0_test_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get0_test_string(uis));
}

int ASM SAVEDS UI_get_result_minsize_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get_result_minsize(uis));
}

int ASM SAVEDS UI_get_result_maxsize_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI_STRING *uis))
{
	return(UI_get_result_maxsize(uis));
}

int ASM SAVEDS UI_set_result_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, UI *ui), REG(a1, UI_STRING *uis), REG(a2, const char *result))
{
	return(UI_set_result(ui, uis, result));
}

int ASM SAVEDS UI_UTIL_read_pw_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int length), REG(a1, const char *prompt), REG(d1, int verify))
{
	return(UI_UTIL_read_pw_string(buf, length, prompt, verify));
}

int ASM SAVEDS UI_UTIL_read_pw_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(a1, char *buff), REG(d0, int size), REG(a2, const char *prompt), REG(d1, int verify))
{
	return(UI_UTIL_read_pw(buf, buff, size, prompt, verify));
}

void ASM SAVEDS ERR_load_UI_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_UI_strings();
}

int ASM SAVEDS _ossl_old_des_read_pw_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(d0, int length), REG(a1, const char *prompt), REG(d1, int verify))
{
	return(_ossl_old_des_read_pw_string(buf, length, prompt, verify));
}

int ASM SAVEDS _ossl_old_des_read_pw_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *buf), REG(a1, char *buff), REG(d0, int size), REG(a2, const char *prompt), REG(d1, int verify))
{
	return(_ossl_old_des_read_pw(buf, buff, size, prompt, verify));
}

const char * ASM SAVEDS X509_verify_cert_error_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long n))
{
	return(X509_verify_cert_error_string(n));
}

int ASM SAVEDS X509_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a), REG(a1, EVP_PKEY *r))
{
	return(X509_verify(a, r));
}

int ASM SAVEDS X509_REQ_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *a), REG(a1, EVP_PKEY *r))
{
	return(X509_REQ_verify(a, r));
}

int ASM SAVEDS X509_CRL_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *a), REG(a1, EVP_PKEY *r))
{
	return(X509_CRL_verify(a, r));
}

int ASM SAVEDS NETSCAPE_SPKI_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *a), REG(a1, EVP_PKEY *r))
{
	return(NETSCAPE_SPKI_verify(a, r));
}

NETSCAPE_SPKI * ASM SAVEDS NETSCAPE_SPKI_b64_decode_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *str), REG(d0, int len))
{
	return(NETSCAPE_SPKI_b64_decode(str, len));
}

char * ASM SAVEDS NETSCAPE_SPKI_b64_encode_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *x))
{
	return(NETSCAPE_SPKI_b64_encode(x));
}

EVP_PKEY * ASM SAVEDS NETSCAPE_SPKI_get_pubkey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *x))
{
	return(NETSCAPE_SPKI_get_pubkey(x));
}

int ASM SAVEDS NETSCAPE_SPKI_set_pubkey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *x), REG(a1, EVP_PKEY *pkey))
{
	return(NETSCAPE_SPKI_set_pubkey(x, pkey));
}

int ASM SAVEDS NETSCAPE_SPKI_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, NETSCAPE_SPKI *spki))
{
	return(NETSCAPE_SPKI_print(out, spki));
}

int ASM SAVEDS X509_signature_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_ALGOR *alg), REG(a2, ASN1_STRING *sig))
{
	return(X509_signature_print(bp, alg, sig));
}

int ASM SAVEDS X509_sign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, EVP_PKEY *pkey), REG(a2, const EVP_MD *md))
{
	return(X509_sign(x, pkey, md));
}

int ASM SAVEDS X509_REQ_sign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *x), REG(a1, EVP_PKEY *pkey), REG(a2, const EVP_MD *md))
{
	return(X509_REQ_sign(x, pkey, md));
}

int ASM SAVEDS X509_CRL_sign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(a1, EVP_PKEY *pkey), REG(a2, const EVP_MD *md))
{
	return(X509_CRL_sign(x, pkey, md));
}

int ASM SAVEDS NETSCAPE_SPKI_sign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *x), REG(a1, EVP_PKEY *pkey), REG(a2, const EVP_MD *md))
{
	return(NETSCAPE_SPKI_sign(x, pkey, md));
}

int ASM SAVEDS X509_pubkey_digest_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *data), REG(a1, const EVP_MD *type), REG(a2, unsigned char *md), REG(a3, unsigned int *len))
{
	return(X509_pubkey_digest(data, type, md, len));
}

int ASM SAVEDS X509_digest_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *data), REG(a1, const EVP_MD *type), REG(a2, unsigned char *md), REG(a3, unsigned int *len))
{
	return(X509_digest(data, type, md, len));
}

int ASM SAVEDS X509_CRL_digest_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_CRL *data), REG(a1, const EVP_MD *type), REG(a2, unsigned char *md), REG(a3, unsigned int *len))
{
	return(X509_CRL_digest(data, type, md, len));
}

int ASM SAVEDS X509_REQ_digest_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_REQ *data), REG(a1, const EVP_MD *type), REG(a2, unsigned char *md), REG(a3, unsigned int *len))
{
	return(X509_REQ_digest(data, type, md, len));
}

int ASM SAVEDS X509_NAME_digest_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_NAME *data), REG(a1, const EVP_MD *type), REG(a2, unsigned char *md), REG(a3, unsigned int *len))
{
	return(X509_NAME_digest(data, type, md, len));
}

X509 * ASM SAVEDS d2i_X509_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 **x509))
{
	return(d2i_X509_bio(bp, x509));
}

int ASM SAVEDS i2d_X509_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 *x509))
{
	return(i2d_X509_bio(bp, x509));
}

X509_CRL * ASM SAVEDS d2i_X509_CRL_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_CRL **crl))
{
	return(d2i_X509_CRL_bio(bp, crl));
}

int ASM SAVEDS i2d_X509_CRL_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_CRL *crl))
{
	return(i2d_X509_CRL_bio(bp, crl));
}

X509_REQ * ASM SAVEDS d2i_X509_REQ_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ **req))
{
	return(d2i_X509_REQ_bio(bp, req));
}

int ASM SAVEDS i2d_X509_REQ_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ *req))
{
	return(i2d_X509_REQ_bio(bp, req));
}

RSA * ASM SAVEDS d2i_RSAPrivateKey_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA **rsa))
{
	return(d2i_RSAPrivateKey_bio(bp, rsa));
}

int ASM SAVEDS i2d_RSAPrivateKey_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA *rsa))
{
	return(i2d_RSAPrivateKey_bio(bp, rsa));
}

RSA * ASM SAVEDS d2i_RSAPublicKey_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA **rsa))
{
	return(d2i_RSAPublicKey_bio(bp, rsa));
}

int ASM SAVEDS i2d_RSAPublicKey_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA *rsa))
{
	return(i2d_RSAPublicKey_bio(bp, rsa));
}

RSA * ASM SAVEDS d2i_RSA_PUBKEY_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA **rsa))
{
	return(d2i_RSA_PUBKEY_bio(bp, rsa));
}

int ASM SAVEDS i2d_RSA_PUBKEY_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, RSA *rsa))
{
	return(i2d_RSA_PUBKEY_bio(bp, rsa));
}

DSA * ASM SAVEDS d2i_DSA_PUBKEY_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA **dsa))
{
	return(d2i_DSA_PUBKEY_bio(bp, dsa));
}

int ASM SAVEDS i2d_DSA_PUBKEY_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA *dsa))
{
	return(i2d_DSA_PUBKEY_bio(bp, dsa));
}

DSA * ASM SAVEDS d2i_DSAPrivateKey_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA **dsa))
{
	return(d2i_DSAPrivateKey_bio(bp, dsa));
}

int ASM SAVEDS i2d_DSAPrivateKey_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, DSA *dsa))
{
	return(i2d_DSAPrivateKey_bio(bp, dsa));
}

X509_SIG * ASM SAVEDS d2i_PKCS8_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_SIG **p8))
{
	return(d2i_PKCS8_bio(bp, p8));
}

int ASM SAVEDS i2d_PKCS8_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_SIG *p8))
{
	return(i2d_PKCS8_bio(bp, p8));
}

PKCS8_PRIV_KEY_INFO * ASM SAVEDS d2i_PKCS8_PRIV_KEY_INFO_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS8_PRIV_KEY_INFO **p8inf))
{
	return(d2i_PKCS8_PRIV_KEY_INFO_bio(bp, p8inf));
}

int ASM SAVEDS i2d_PKCS8_PRIV_KEY_INFO_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, PKCS8_PRIV_KEY_INFO *p8inf))
{
	return(i2d_PKCS8_PRIV_KEY_INFO_bio(bp, p8inf));
}

int ASM SAVEDS i2d_PKCS8PrivateKeyInfo_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *key))
{
	return(i2d_PKCS8PrivateKeyInfo_bio(bp, key));
}

int ASM SAVEDS i2d_PrivateKey_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *pkey))
{
	return(i2d_PrivateKey_bio(bp, pkey));
}

EVP_PKEY * ASM SAVEDS d2i_PrivateKey_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY **a))
{
	return(d2i_PrivateKey_bio(bp, a));
}

int ASM SAVEDS i2d_PUBKEY_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY *pkey))
{
	return(i2d_PUBKEY_bio(bp, pkey));
}

EVP_PKEY * ASM SAVEDS d2i_PUBKEY_bio_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, EVP_PKEY **a))
{
	return(d2i_PUBKEY_bio(bp, a));
}

X509 * ASM SAVEDS X509_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x509))
{
	return(X509_dup(x509));
}

X509_ATTRIBUTE * ASM SAVEDS X509_ATTRIBUTE_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *xa))
{
	return(X509_ATTRIBUTE_dup(xa));
}

X509_EXTENSION * ASM SAVEDS X509_EXTENSION_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex))
{
	return(X509_EXTENSION_dup(ex));
}

X509_CRL * ASM SAVEDS X509_CRL_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *crl))
{
	return(X509_CRL_dup(crl));
}

X509_REQ * ASM SAVEDS X509_REQ_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req))
{
	return(X509_REQ_dup(req));
}

X509_ALGOR * ASM SAVEDS X509_ALGOR_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR *xn))
{
	return(X509_ALGOR_dup(xn));
}

X509_NAME * ASM SAVEDS X509_NAME_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *xn))
{
	return(X509_NAME_dup(xn));
}

X509_NAME_ENTRY * ASM SAVEDS X509_NAME_ENTRY_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *ne))
{
	return(X509_NAME_ENTRY_dup(ne));
}

int ASM SAVEDS X509_cmp_time_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *s), REG(a1, time_t *t))
{
	return(X509_cmp_time(s, t));
}

int ASM SAVEDS X509_cmp_current_time_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *s))
{
	return(X509_cmp_current_time(s));
}

ASN1_TIME * ASM SAVEDS X509_time_adj_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *s), REG(d0, long adj), REG(a1, time_t *t))
{
	return(X509_time_adj(s, adj, t));
}

ASN1_TIME * ASM SAVEDS X509_gmtime_adj_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ASN1_TIME *s), REG(d0, long adj))
{
	return(X509_gmtime_adj(s, adj));
}

const char * ASM SAVEDS X509_get_default_cert_area_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_get_default_cert_area());
}

const char * ASM SAVEDS X509_get_default_cert_dir_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_get_default_cert_dir());
}

const char * ASM SAVEDS X509_get_default_cert_file_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_get_default_cert_file());
}

const char * ASM SAVEDS X509_get_default_cert_dir_env_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_get_default_cert_dir_env());
}

const char * ASM SAVEDS X509_get_default_cert_file_env_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_get_default_cert_file_env());
}

const char * ASM SAVEDS X509_get_default_private_dir_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_get_default_private_dir());
}

X509_REQ * ASM SAVEDS X509_to_X509_REQ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, EVP_PKEY *pkey), REG(a2, const EVP_MD *md))
{
	return(X509_to_X509_REQ(x, pkey, md));
}

X509 * ASM SAVEDS X509_REQ_to_X509_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *r), REG(d0, int days), REG(a1, EVP_PKEY *pkey))
{
	return(X509_REQ_to_X509(r, days, pkey));
}

X509_ALGOR * ASM SAVEDS X509_ALGOR_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_ALGOR_new());
}

void ASM SAVEDS X509_ALGOR_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR *a))
{
	X509_ALGOR_free(a);
}

X509_ALGOR * ASM SAVEDS d2i_X509_ALGOR_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_ALGOR(a, in, len));
}

int ASM SAVEDS i2d_X509_ALGOR_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ALGOR *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_ALGOR(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_ALGOR_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_ALGOR_it());
}

X509_VAL * ASM SAVEDS X509_VAL_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_VAL_new());
}

void ASM SAVEDS X509_VAL_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_VAL *a))
{
	X509_VAL_free(a);
}

X509_VAL * ASM SAVEDS d2i_X509_VAL_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_VAL **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_VAL(a, in, len));
}

int ASM SAVEDS i2d_X509_VAL_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_VAL *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_VAL(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_VAL_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_VAL_it());
}

X509_PUBKEY * ASM SAVEDS X509_PUBKEY_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_PUBKEY_new());
}

void ASM SAVEDS X509_PUBKEY_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PUBKEY *a))
{
	X509_PUBKEY_free(a);
}

X509_PUBKEY * ASM SAVEDS d2i_X509_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PUBKEY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_PUBKEY(a, in, len));
}

int ASM SAVEDS i2d_X509_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PUBKEY *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_PUBKEY(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_PUBKEY_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_PUBKEY_it());
}

int ASM SAVEDS X509_PUBKEY_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PUBKEY **x), REG(a1, EVP_PKEY *pkey))
{
	return(X509_PUBKEY_set(x, pkey));
}

EVP_PKEY * ASM SAVEDS X509_PUBKEY_get_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PUBKEY *key))
{
	return(X509_PUBKEY_get(key));
}

int ASM SAVEDS X509_get_pubkey_parameters_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(a1, STACK_OF(X509) *chain))
{
	return(X509_get_pubkey_parameters(pkey, chain));
}

int ASM SAVEDS i2d_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *a), REG(a1, unsigned char **pp))
{
	return(i2d_PUBKEY(a, pp));
}

EVP_PKEY * ASM SAVEDS d2i_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_PUBKEY(a, pp, length));
}

int ASM SAVEDS i2d_RSA_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *a), REG(a1, unsigned char **pp))
{
	return(i2d_RSA_PUBKEY(a, pp));
}

RSA * ASM SAVEDS d2i_RSA_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_RSA_PUBKEY(a, pp, length));
}

int ASM SAVEDS i2d_DSA_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *a), REG(a1, unsigned char **pp))
{
	return(i2d_DSA_PUBKEY(a, pp));
}

DSA * ASM SAVEDS d2i_DSA_PUBKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_DSA_PUBKEY(a, pp, length));
}

X509_SIG * ASM SAVEDS X509_SIG_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_SIG_new());
}

void ASM SAVEDS X509_SIG_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_SIG *a))
{
	X509_SIG_free(a);
}

X509_SIG * ASM SAVEDS d2i_X509_SIG_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_SIG **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_SIG(a, in, len));
}

int ASM SAVEDS i2d_X509_SIG_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_SIG *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_SIG(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_SIG_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_SIG_it());
}

X509_REQ_INFO * ASM SAVEDS X509_REQ_INFO_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REQ_INFO_new());
}

void ASM SAVEDS X509_REQ_INFO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ_INFO *a))
{
	X509_REQ_INFO_free(a);
}

X509_REQ_INFO * ASM SAVEDS d2i_X509_REQ_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ_INFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_REQ_INFO(a, in, len));
}

int ASM SAVEDS i2d_X509_REQ_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ_INFO *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_REQ_INFO(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_REQ_INFO_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REQ_INFO_it());
}

X509_REQ * ASM SAVEDS X509_REQ_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REQ_new());
}

void ASM SAVEDS X509_REQ_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *a))
{
	X509_REQ_free(a);
}

X509_REQ * ASM SAVEDS d2i_X509_REQ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_REQ(a, in, len));
}

int ASM SAVEDS i2d_X509_REQ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_REQ(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_REQ_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REQ_it());
}

X509_ATTRIBUTE * ASM SAVEDS X509_ATTRIBUTE_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_ATTRIBUTE_new());
}

void ASM SAVEDS X509_ATTRIBUTE_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *a))
{
	X509_ATTRIBUTE_free(a);
}

X509_ATTRIBUTE * ASM SAVEDS d2i_X509_ATTRIBUTE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_ATTRIBUTE(a, in, len));
}

int ASM SAVEDS i2d_X509_ATTRIBUTE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_ATTRIBUTE(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_ATTRIBUTE_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_ATTRIBUTE_it());
}

X509_ATTRIBUTE * ASM SAVEDS X509_ATTRIBUTE_create_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int nid), REG(d1, int atrtype), REG(a0, void *value))
{
	return(X509_ATTRIBUTE_create(nid, atrtype, value));
}

X509_EXTENSION * ASM SAVEDS X509_EXTENSION_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_EXTENSION_new());
}

void ASM SAVEDS X509_EXTENSION_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *a))
{
	X509_EXTENSION_free(a);
}

X509_EXTENSION * ASM SAVEDS d2i_X509_EXTENSION_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_EXTENSION(a, in, len));
}

int ASM SAVEDS i2d_X509_EXTENSION_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_EXTENSION(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_EXTENSION_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_EXTENSION_it());
}

X509_NAME_ENTRY * ASM SAVEDS X509_NAME_ENTRY_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_NAME_ENTRY_new());
}

void ASM SAVEDS X509_NAME_ENTRY_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *a))
{
	X509_NAME_ENTRY_free(a);
}

X509_NAME_ENTRY * ASM SAVEDS d2i_X509_NAME_ENTRY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_NAME_ENTRY(a, in, len));
}

int ASM SAVEDS i2d_X509_NAME_ENTRY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_NAME_ENTRY(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_NAME_ENTRY_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_NAME_ENTRY_it());
}

X509_NAME * ASM SAVEDS X509_NAME_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_NAME_new());
}

void ASM SAVEDS X509_NAME_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *a))
{
	X509_NAME_free(a);
}

X509_NAME * ASM SAVEDS d2i_X509_NAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_NAME(a, in, len));
}

int ASM SAVEDS i2d_X509_NAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_NAME(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_NAME_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_NAME_it());
}

int ASM SAVEDS X509_NAME_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME **xn), REG(a1, X509_NAME *name))
{
	return(X509_NAME_set(xn, name));
}

X509_CINF * ASM SAVEDS X509_CINF_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CINF_new());
}

void ASM SAVEDS X509_CINF_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CINF *a))
{
	X509_CINF_free(a);
}

X509_CINF * ASM SAVEDS d2i_X509_CINF_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CINF **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_CINF(a, in, len));
}

int ASM SAVEDS i2d_X509_CINF_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CINF *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_CINF(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_CINF_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CINF_it());
}

X509 * ASM SAVEDS X509_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_new());
}

void ASM SAVEDS X509_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a))
{
	X509_free(a);
}

X509 * ASM SAVEDS d2i_X509_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509(a, in, len));
}

int ASM SAVEDS i2d_X509_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a), REG(a1, unsigned char **out))
{
	return(i2d_X509(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_it());
}

X509_CERT_AUX * ASM SAVEDS X509_CERT_AUX_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CERT_AUX_new());
}

void ASM SAVEDS X509_CERT_AUX_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CERT_AUX *a))
{
	X509_CERT_AUX_free(a);
}

X509_CERT_AUX * ASM SAVEDS d2i_X509_CERT_AUX_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CERT_AUX **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_CERT_AUX(a, in, len));
}

int ASM SAVEDS i2d_X509_CERT_AUX_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CERT_AUX *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_CERT_AUX(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_CERT_AUX_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CERT_AUX_it());
}

int ASM SAVEDS X509_get_ex_new_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(X509_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int ASM SAVEDS X509_set_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *r), REG(d0, int idx), REG(a1, void *arg))
{
	return(X509_set_ex_data(r, idx, arg));
}

void * ASM SAVEDS X509_get_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *r), REG(d0, int idx))
{
	return(X509_get_ex_data(r, idx));
}

int ASM SAVEDS i2d_X509_AUX_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a), REG(a1, unsigned char **pp))
{
	return(i2d_X509_AUX(a, pp));
}

X509 * ASM SAVEDS d2i_X509_AUX_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_X509_AUX(a, pp, length));
}

int ASM SAVEDS X509_alias_set1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, unsigned char *name), REG(d0, int len))
{
	return(X509_alias_set1(x, name, len));
}

int ASM SAVEDS X509_keyid_set1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, unsigned char *id), REG(d0, int len))
{
	return(X509_keyid_set1(x, id, len));
}

unsigned char * ASM SAVEDS X509_alias_get0_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, int *len))
{
	return(X509_alias_get0(x, len));
}

int (* ASM SAVEDS X509_TRUST_set_default_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int (*trust)(int, X509 *, int))))(int, X509 *, int)
{
	return(X509_TRUST_set_default(trust));
}

int ASM SAVEDS X509_TRUST_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int *t), REG(d0, int trust))
{
	return(X509_TRUST_set(t, trust));
}

int ASM SAVEDS X509_add1_trust_object_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, ASN1_OBJECT *obj))
{
	return(X509_add1_trust_object(x, obj));
}

int ASM SAVEDS X509_add1_reject_object_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, ASN1_OBJECT *obj))
{
	return(X509_add1_reject_object(x, obj));
}

void ASM SAVEDS X509_trust_clear_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	X509_trust_clear(x);
}

void ASM SAVEDS X509_reject_clear_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	X509_reject_clear(x);
}

X509_REVOKED * ASM SAVEDS X509_REVOKED_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REVOKED_new());
}

void ASM SAVEDS X509_REVOKED_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *a))
{
	X509_REVOKED_free(a);
}

X509_REVOKED * ASM SAVEDS d2i_X509_REVOKED_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_REVOKED(a, in, len));
}

int ASM SAVEDS i2d_X509_REVOKED_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_REVOKED(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_REVOKED_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REVOKED_it());
}

X509_CRL_INFO * ASM SAVEDS X509_CRL_INFO_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CRL_INFO_new());
}

void ASM SAVEDS X509_CRL_INFO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL_INFO *a))
{
	X509_CRL_INFO_free(a);
}

X509_CRL_INFO * ASM SAVEDS d2i_X509_CRL_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL_INFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_CRL_INFO(a, in, len));
}

int ASM SAVEDS i2d_X509_CRL_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL_INFO *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_CRL_INFO(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_CRL_INFO_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CRL_INFO_it());
}

X509_CRL * ASM SAVEDS X509_CRL_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CRL_new());
}

void ASM SAVEDS X509_CRL_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *a))
{
	X509_CRL_free(a);
}

X509_CRL * ASM SAVEDS d2i_X509_CRL_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_X509_CRL(a, in, len));
}

int ASM SAVEDS i2d_X509_CRL_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *a), REG(a1, unsigned char **out))
{
	return(i2d_X509_CRL(a, out));
}

const ASN1_ITEM * ASM SAVEDS X509_CRL_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_CRL_it());
}

int ASM SAVEDS X509_CRL_add0_revoked_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *crl), REG(a1, X509_REVOKED *rev))
{
	return(X509_CRL_add0_revoked(crl, rev));
}

X509_PKEY * ASM SAVEDS X509_PKEY_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_PKEY_new());
}

void ASM SAVEDS X509_PKEY_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PKEY *a))
{
	X509_PKEY_free(a);
}

int ASM SAVEDS i2d_X509_PKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PKEY *a), REG(a1, unsigned char **pp))
{
	return(i2d_X509_PKEY(a, pp));
}

X509_PKEY * ASM SAVEDS d2i_X509_PKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PKEY **a), REG(a1, unsigned char **pp), REG(d0, long length))
{
	return(d2i_X509_PKEY(a, pp, length));
}

NETSCAPE_SPKI * ASM SAVEDS NETSCAPE_SPKI_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(NETSCAPE_SPKI_new());
}

void ASM SAVEDS NETSCAPE_SPKI_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *a))
{
	NETSCAPE_SPKI_free(a);
}

NETSCAPE_SPKI * ASM SAVEDS d2i_NETSCAPE_SPKI_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_NETSCAPE_SPKI(a, in, len));
}

int ASM SAVEDS i2d_NETSCAPE_SPKI_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKI *a), REG(a1, unsigned char **out))
{
	return(i2d_NETSCAPE_SPKI(a, out));
}

const ASN1_ITEM * ASM SAVEDS NETSCAPE_SPKI_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(NETSCAPE_SPKI_it());
}

NETSCAPE_SPKAC * ASM SAVEDS NETSCAPE_SPKAC_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(NETSCAPE_SPKAC_new());
}

void ASM SAVEDS NETSCAPE_SPKAC_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKAC *a))
{
	NETSCAPE_SPKAC_free(a);
}

NETSCAPE_SPKAC * ASM SAVEDS d2i_NETSCAPE_SPKAC_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKAC **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_NETSCAPE_SPKAC(a, in, len));
}

int ASM SAVEDS i2d_NETSCAPE_SPKAC_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_SPKAC *a), REG(a1, unsigned char **out))
{
	return(i2d_NETSCAPE_SPKAC(a, out));
}

const ASN1_ITEM * ASM SAVEDS NETSCAPE_SPKAC_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(NETSCAPE_SPKAC_it());
}

NETSCAPE_CERT_SEQUENCE * ASM SAVEDS NETSCAPE_CERT_SEQUENCE_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(NETSCAPE_CERT_SEQUENCE_new());
}

void ASM SAVEDS NETSCAPE_CERT_SEQUENCE_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_CERT_SEQUENCE *a))
{
	NETSCAPE_CERT_SEQUENCE_free(a);
}

NETSCAPE_CERT_SEQUENCE * ASM SAVEDS d2i_NETSCAPE_CERT_SEQUENCE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_CERT_SEQUENCE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_NETSCAPE_CERT_SEQUENCE(a, in, len));
}

int ASM SAVEDS i2d_NETSCAPE_CERT_SEQUENCE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NETSCAPE_CERT_SEQUENCE *a), REG(a1, unsigned char **out))
{
	return(i2d_NETSCAPE_CERT_SEQUENCE(a, out));
}

const ASN1_ITEM * ASM SAVEDS NETSCAPE_CERT_SEQUENCE_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(NETSCAPE_CERT_SEQUENCE_it());
}

X509_INFO * ASM SAVEDS X509_INFO_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_INFO_new());
}

void ASM SAVEDS X509_INFO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_INFO *a))
{
	X509_INFO_free(a);
}

char * ASM SAVEDS X509_NAME_oneline_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *a), REG(a1, char *buf), REG(d0, int size))
{
	return(X509_NAME_oneline(a, buf, size));
}

int ASM SAVEDS ASN1_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int (*i2d)()), REG(a1, X509_ALGOR *algor1), REG(a2, ASN1_BIT_STRING *signature), REG(a3, char *data), REG(d0, EVP_PKEY *pkey))
{
	return(ASN1_verify(i2d, algor1, signature, data, pkey));
}

int ASM SAVEDS ASN1_digest_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int (*i2d)()), REG(a1, const EVP_MD *type), REG(a2, char *data), REG(a3, unsigned char *md), REG(d0, unsigned int *len))
{
	return(ASN1_digest(i2d, type, data, md, len));
}

int ASM SAVEDS ASN1_sign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int (*i2d)()), REG(a1, X509_ALGOR *algor1), REG(a2, X509_ALGOR *algor2), REG(a3, ASN1_BIT_STRING *signature), REG(d0, char *data), REG(d1, EVP_PKEY *pkey), REG(d2, const EVP_MD *type))
{
	return(ASN1_sign(i2d, algor1, algor2, signature, data, pkey, type));
}

int ASM SAVEDS ASN1_item_digest_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it), REG(a1, const EVP_MD *type), REG(a2, void *data), REG(a3, unsigned char *md), REG(d0, unsigned int *len))
{
	return(ASN1_item_digest(it, type, data, md, len));
}

int ASM SAVEDS ASN1_item_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it), REG(a1, X509_ALGOR *algor1), REG(a2, ASN1_BIT_STRING *signature), REG(a3, void *data), REG(d0, EVP_PKEY *pkey))
{
	return(ASN1_item_verify(it, algor1, signature, data, pkey));
}

int ASM SAVEDS ASN1_item_sign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const ASN1_ITEM *it), REG(a1, X509_ALGOR *algor1), REG(a2, X509_ALGOR *algor2), REG(a3, ASN1_BIT_STRING *signature), REG(d0, void *data), REG(d1, EVP_PKEY *pkey), REG(d2, const EVP_MD *type))
{
	return(ASN1_item_sign(it, algor1, algor2, signature, data, pkey, type));
}

int ASM SAVEDS X509_set_version_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, long version))
{
	return(X509_set_version(x, version));
}

int ASM SAVEDS X509_set_serialNumber_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, ASN1_INTEGER *serial))
{
	return(X509_set_serialNumber(x, serial));
}

ASN1_INTEGER * ASM SAVEDS X509_get_serialNumber_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	return(X509_get_serialNumber(x));
}

int ASM SAVEDS X509_set_issuer_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, X509_NAME *name))
{
	return(X509_set_issuer_name(x, name));
}

X509_NAME * ASM SAVEDS X509_get_issuer_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a))
{
	return(X509_get_issuer_name(a));
}

int ASM SAVEDS X509_set_subject_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, X509_NAME *name))
{
	return(X509_set_subject_name(x, name));
}

X509_NAME * ASM SAVEDS X509_get_subject_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a))
{
	return(X509_get_subject_name(a));
}

int ASM SAVEDS X509_set_notBefore_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, ASN1_TIME *tm))
{
	return(X509_set_notBefore(x, tm));
}

int ASM SAVEDS X509_set_notAfter_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, ASN1_TIME *tm))
{
	return(X509_set_notAfter(x, tm));
}

int ASM SAVEDS X509_set_pubkey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, EVP_PKEY *pkey))
{
	return(X509_set_pubkey(x, pkey));
}

EVP_PKEY * ASM SAVEDS X509_get_pubkey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	return(X509_get_pubkey(x));
}

ASN1_BIT_STRING * ASM SAVEDS X509_get0_pubkey_bitstr_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *x))
{
	return(X509_get0_pubkey_bitstr(x));
}

int ASM SAVEDS X509_certificate_type_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, EVP_PKEY *pubkey))
{
	return(X509_certificate_type(x, pubkey));
}

int ASM SAVEDS X509_REQ_set_version_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *x), REG(d0, long version))
{
	return(X509_REQ_set_version(x, version));
}

int ASM SAVEDS X509_REQ_set_subject_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(a1, X509_NAME *name))
{
	return(X509_REQ_set_subject_name(req, name));
}

int ASM SAVEDS X509_REQ_set_pubkey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *x), REG(a1, EVP_PKEY *pkey))
{
	return(X509_REQ_set_pubkey(x, pkey));
}

EVP_PKEY * ASM SAVEDS X509_REQ_get_pubkey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req))
{
	return(X509_REQ_get_pubkey(req));
}

int ASM SAVEDS X509_REQ_extension_nid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int nid))
{
	return(X509_REQ_extension_nid(nid));
}

int * ASM SAVEDS X509_REQ_get_extension_nids_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_REQ_get_extension_nids());
}

void ASM SAVEDS X509_REQ_set_extension_nids_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int *nids))
{
	X509_REQ_set_extension_nids(nids);
}

STACK_OF(X509_EXTENSION) * ASM SAVEDS X509_REQ_get_extensions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req))
{
	return(X509_REQ_get_extensions(req));
}

int ASM SAVEDS X509_REQ_add_extensions_nid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(a1, STACK_OF(X509_EXTENSION) *exts), REG(d0, int nid))
{
	return(X509_REQ_add_extensions_nid(req, exts, nid));
}

int ASM SAVEDS X509_REQ_add_extensions_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(a1, STACK_OF(X509_EXTENSION) *exts))
{
	return(X509_REQ_add_extensions(req, exts));
}

int ASM SAVEDS X509_REQ_get_attr_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_REQ *req))
{
	return(X509_REQ_get_attr_count(req));
}

int ASM SAVEDS X509_REQ_get_attr_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_REQ *req), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509_REQ_get_attr_by_NID(req, nid, lastpos));
}

int ASM SAVEDS X509_REQ_get_attr_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_REQ *req), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509_REQ_get_attr_by_OBJ(req, obj, lastpos));
}

X509_ATTRIBUTE * ASM SAVEDS X509_REQ_get_attr_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_REQ *req), REG(d0, int loc))
{
	return(X509_REQ_get_attr(req, loc));
}

X509_ATTRIBUTE * ASM SAVEDS X509_REQ_delete_attr_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(d0, int loc))
{
	return(X509_REQ_delete_attr(req, loc));
}

int ASM SAVEDS X509_REQ_add1_attr_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(a1, X509_ATTRIBUTE *attr))
{
	return(X509_REQ_add1_attr(req, attr));
}

int ASM SAVEDS X509_REQ_add1_attr_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(a1, const ASN1_OBJECT *obj), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len))
{
	return(X509_REQ_add1_attr_by_OBJ(req, obj, type, bytes, len));
}

int ASM SAVEDS X509_REQ_add1_attr_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(d0, int nid), REG(d1, int type), REG(a1, const unsigned char *bytes), REG(d2, int len))
{
	return(X509_REQ_add1_attr_by_NID(req, nid, type, bytes, len));
}

int ASM SAVEDS X509_REQ_add1_attr_by_txt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *req), REG(a1, const char *attrname), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len))
{
	return(X509_REQ_add1_attr_by_txt(req, attrname, type, bytes, len));
}

int ASM SAVEDS X509_CRL_set_version_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, long version))
{
	return(X509_CRL_set_version(x, version));
}

int ASM SAVEDS X509_CRL_set_issuer_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(a1, X509_NAME *name))
{
	return(X509_CRL_set_issuer_name(x, name));
}

int ASM SAVEDS X509_CRL_set_lastUpdate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(a1, ASN1_TIME *tm))
{
	return(X509_CRL_set_lastUpdate(x, tm));
}

int ASM SAVEDS X509_CRL_set_nextUpdate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(a1, ASN1_TIME *tm))
{
	return(X509_CRL_set_nextUpdate(x, tm));
}

int ASM SAVEDS X509_CRL_sort_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *crl))
{
	return(X509_CRL_sort(crl));
}

int ASM SAVEDS X509_REVOKED_set_serialNumber_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(a1, ASN1_INTEGER *serial))
{
	return(X509_REVOKED_set_serialNumber(x, serial));
}

int ASM SAVEDS X509_REVOKED_set_revocationDate_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *r), REG(a1, ASN1_TIME *tm))
{
	return(X509_REVOKED_set_revocationDate(r, tm));
}

int ASM SAVEDS X509_check_private_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x509), REG(a1, EVP_PKEY *pkey))
{
	return(X509_check_private_key(x509, pkey));
}

int ASM SAVEDS X509_issuer_and_serial_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *a), REG(a1, const X509 *b))
{
	return(X509_issuer_and_serial_cmp(a, b));
}

unsigned long ASM SAVEDS X509_issuer_and_serial_hash_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a))
{
	return(X509_issuer_and_serial_hash(a));
}

int ASM SAVEDS X509_issuer_name_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *a), REG(a1, const X509 *b))
{
	return(X509_issuer_name_cmp(a, b));
}

unsigned long ASM SAVEDS X509_issuer_name_hash_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *a))
{
	return(X509_issuer_name_hash(a));
}

int ASM SAVEDS X509_subject_name_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *a), REG(a1, const X509 *b))
{
	return(X509_subject_name_cmp(a, b));
}

unsigned long ASM SAVEDS X509_subject_name_hash_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	return(X509_subject_name_hash(x));
}

int ASM SAVEDS X509_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509 *a), REG(a1, const X509 *b))
{
	return(X509_cmp(a, b));
}

int ASM SAVEDS X509_NAME_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_NAME *a), REG(a1, const X509_NAME *b))
{
	return(X509_NAME_cmp(a, b));
}

unsigned long ASM SAVEDS X509_NAME_hash_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *x))
{
	return(X509_NAME_hash(x));
}

int ASM SAVEDS X509_CRL_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const X509_CRL *a), REG(a1, const X509_CRL *b))
{
	return(X509_CRL_cmp(a, b));
}

int ASM SAVEDS X509_NAME_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_NAME *name), REG(d0, int obase))
{
	return(X509_NAME_print(bp, name, obase));
}

int ASM SAVEDS X509_NAME_print_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, X509_NAME *nm), REG(d0, int indent), REG(d1, unsigned long flags))
{
	return(X509_NAME_print_ex(out, nm, indent, flags));
}

int ASM SAVEDS X509_print_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 *x), REG(d0, unsigned long nmflag), REG(d1, unsigned long cflag))
{
	return(X509_print_ex(bp, x, nmflag, cflag));
}

int ASM SAVEDS X509_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 *x))
{
	return(X509_print(bp, x));
}

int ASM SAVEDS X509_ocspid_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509 *x))
{
	return(X509_ocspid_print(bp, x));
}

int ASM SAVEDS X509_CERT_AUX_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_CERT_AUX *x), REG(d0, int indent))
{
	return(X509_CERT_AUX_print(bp, x, indent));
}

int ASM SAVEDS X509_CRL_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_CRL *x))
{
	return(X509_CRL_print(bp, x));
}

int ASM SAVEDS X509_REQ_print_ex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ *x), REG(d0, unsigned long nmflag), REG(d1, unsigned long cflag))
{
	return(X509_REQ_print_ex(bp, x, nmflag, cflag));
}

int ASM SAVEDS X509_REQ_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, X509_REQ *req))
{
	return(X509_REQ_print(bp, req));
}

int ASM SAVEDS X509_NAME_entry_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name))
{
	return(X509_NAME_entry_count(name));
}

int ASM SAVEDS X509_NAME_get_text_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(d0, int nid), REG(a1, char *buf), REG(d1, int len))
{
	return(X509_NAME_get_text_by_NID(name, nid, buf, len));
}

int ASM SAVEDS X509_NAME_get_text_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(a1, ASN1_OBJECT *obj), REG(a2, char *buf), REG(d0, int len))
{
	return(X509_NAME_get_text_by_OBJ(name, obj, buf, len));
}

int ASM SAVEDS X509_NAME_get_index_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509_NAME_get_index_by_NID(name, nid, lastpos));
}

int ASM SAVEDS X509_NAME_get_index_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509_NAME_get_index_by_OBJ(name, obj, lastpos));
}

X509_NAME_ENTRY * ASM SAVEDS X509_NAME_get_entry_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(d0, int loc))
{
	return(X509_NAME_get_entry(name, loc));
}

X509_NAME_ENTRY * ASM SAVEDS X509_NAME_delete_entry_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(d0, int loc))
{
	return(X509_NAME_delete_entry(name, loc));
}

int ASM SAVEDS X509_NAME_add_entry_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(a1, X509_NAME_ENTRY *ne), REG(d0, int loc), REG(d1, int set))
{
	return(X509_NAME_add_entry(name, ne, loc, set));
}

int ASM SAVEDS X509_NAME_add_entry_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(a1, ASN1_OBJECT *obj), REG(d0, int type), REG(a2, unsigned char *bytes), REG(d1, int len), REG(d2, int loc), REG(d3, int set))
{
	return(X509_NAME_add_entry_by_OBJ(name, obj, type, bytes, len, loc, set));
}

int ASM SAVEDS X509_NAME_add_entry_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(d0, int nid), REG(d1, int type), REG(a1, unsigned char *bytes), REG(d2, int len), REG(d3, int loc), REG(d4, int set))
{
	return(X509_NAME_add_entry_by_NID(name, nid, type, bytes, len, loc, set));
}

X509_NAME_ENTRY * ASM SAVEDS X509_NAME_ENTRY_create_by_txt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY **ne), REG(a1, char *field), REG(d0, int type), REG(a2, unsigned char *bytes), REG(d1, int len))
{
	return(X509_NAME_ENTRY_create_by_txt(ne, field, type, bytes, len));
}

X509_NAME_ENTRY * ASM SAVEDS X509_NAME_ENTRY_create_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY **ne), REG(d0, int nid), REG(d1, int type), REG(a1, unsigned char *bytes), REG(d2, int len))
{
	return(X509_NAME_ENTRY_create_by_NID(ne, nid, type, bytes, len));
}

int ASM SAVEDS X509_NAME_add_entry_by_txt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME *name), REG(a1, char *field), REG(d0, int type), REG(a2, unsigned char *bytes), REG(d1, int len), REG(d2, int loc), REG(d3, int set))
{
	return(X509_NAME_add_entry_by_txt(name, field, type, bytes, len, loc, set));
}

X509_NAME_ENTRY * ASM SAVEDS X509_NAME_ENTRY_create_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY **ne), REG(a1, ASN1_OBJECT *obj), REG(d0, int type), REG(a2, unsigned char *bytes), REG(d1, int len))
{
	return(X509_NAME_ENTRY_create_by_OBJ(ne, obj, type, bytes, len));
}

int ASM SAVEDS X509_NAME_ENTRY_set_object_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *ne), REG(a1, ASN1_OBJECT *obj))
{
	return(X509_NAME_ENTRY_set_object(ne, obj));
}

int ASM SAVEDS X509_NAME_ENTRY_set_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *ne), REG(d0, int type), REG(a1, unsigned char *bytes), REG(d1, int len))
{
	return(X509_NAME_ENTRY_set_data(ne, type, bytes, len));
}

ASN1_OBJECT * ASM SAVEDS X509_NAME_ENTRY_get_object_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *ne))
{
	return(X509_NAME_ENTRY_get_object(ne));
}

ASN1_STRING * ASM SAVEDS X509_NAME_ENTRY_get_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_NAME_ENTRY *ne))
{
	return(X509_NAME_ENTRY_get_data(ne));
}

int ASM SAVEDS X509v3_get_ext_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_EXTENSION) *x))
{
	return(X509v3_get_ext_count(x));
}

int ASM SAVEDS X509v3_get_ext_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_EXTENSION) *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509v3_get_ext_by_NID(x, nid, lastpos));
}

int ASM SAVEDS X509v3_get_ext_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_EXTENSION) *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509v3_get_ext_by_OBJ(x, obj, lastpos));
}

int ASM SAVEDS X509v3_get_ext_by_critical_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_EXTENSION) *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(X509v3_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * ASM SAVEDS X509v3_get_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_EXTENSION) *x), REG(d0, int loc))
{
	return(X509v3_get_ext(x, loc));
}

X509_EXTENSION * ASM SAVEDS X509v3_delete_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_EXTENSION) *x), REG(d0, int loc))
{
	return(X509v3_delete_ext(x, loc));
}

STACK_OF(X509_EXTENSION) * ASM SAVEDS X509v3_add_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_EXTENSION) **x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(X509v3_add_ext(x, ex, loc));
}

int ASM SAVEDS X509_get_ext_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	return(X509_get_ext_count(x));
}

int ASM SAVEDS X509_get_ext_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509_get_ext_by_NID(x, nid, lastpos));
}

int ASM SAVEDS X509_get_ext_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509_get_ext_by_OBJ(x, obj, lastpos));
}

int ASM SAVEDS X509_get_ext_by_critical_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(X509_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * ASM SAVEDS X509_get_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int loc))
{
	return(X509_get_ext(x, loc));
}

X509_EXTENSION * ASM SAVEDS X509_delete_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int loc))
{
	return(X509_delete_ext(x, loc));
}

int ASM SAVEDS X509_add_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(X509_add_ext(x, ex, loc));
}

void * ASM SAVEDS X509_get_ext_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(X509_get_ext_d2i(x, nid, crit, idx));
}

int ASM SAVEDS X509_add1_ext_i2d_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(X509_add1_ext_i2d(x, nid, value, crit, flags));
}

int ASM SAVEDS X509_CRL_get_ext_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x))
{
	return(X509_CRL_get_ext_count(x));
}

int ASM SAVEDS X509_CRL_get_ext_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509_CRL_get_ext_by_NID(x, nid, lastpos));
}

int ASM SAVEDS X509_CRL_get_ext_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509_CRL_get_ext_by_OBJ(x, obj, lastpos));
}

int ASM SAVEDS X509_CRL_get_ext_by_critical_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(X509_CRL_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * ASM SAVEDS X509_CRL_get_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, int loc))
{
	return(X509_CRL_get_ext(x, loc));
}

X509_EXTENSION * ASM SAVEDS X509_CRL_delete_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, int loc))
{
	return(X509_CRL_delete_ext(x, loc));
}

int ASM SAVEDS X509_CRL_add_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(X509_CRL_add_ext(x, ex, loc));
}

void * ASM SAVEDS X509_CRL_get_ext_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(X509_CRL_get_ext_d2i(x, nid, crit, idx));
}

int ASM SAVEDS X509_CRL_add1_ext_i2d_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_CRL *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(X509_CRL_add1_ext_i2d(x, nid, value, crit, flags));
}

int ASM SAVEDS X509_REVOKED_get_ext_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x))
{
	return(X509_REVOKED_get_ext_count(x));
}

int ASM SAVEDS X509_REVOKED_get_ext_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509_REVOKED_get_ext_by_NID(x, nid, lastpos));
}

int ASM SAVEDS X509_REVOKED_get_ext_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509_REVOKED_get_ext_by_OBJ(x, obj, lastpos));
}

int ASM SAVEDS X509_REVOKED_get_ext_by_critical_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(d0, int crit), REG(d1, int lastpos))
{
	return(X509_REVOKED_get_ext_by_critical(x, crit, lastpos));
}

X509_EXTENSION * ASM SAVEDS X509_REVOKED_get_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(d0, int loc))
{
	return(X509_REVOKED_get_ext(x, loc));
}

X509_EXTENSION * ASM SAVEDS X509_REVOKED_delete_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(d0, int loc))
{
	return(X509_REVOKED_delete_ext(x, loc));
}

int ASM SAVEDS X509_REVOKED_add_ext_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(a1, X509_EXTENSION *ex), REG(d0, int loc))
{
	return(X509_REVOKED_add_ext(x, ex, loc));
}

void * ASM SAVEDS X509_REVOKED_get_ext_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(X509_REVOKED_get_ext_d2i(x, nid, crit, idx));
}

int ASM SAVEDS X509_REVOKED_add1_ext_i2d_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REVOKED *x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(X509_REVOKED_add1_ext_i2d(x, nid, value, crit, flags));
}

X509_EXTENSION * ASM SAVEDS X509_EXTENSION_create_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION **ex), REG(d0, int nid), REG(d1, int crit), REG(a1, ASN1_OCTET_STRING *data))
{
	return(X509_EXTENSION_create_by_NID(ex, nid, crit, data));
}

X509_EXTENSION * ASM SAVEDS X509_EXTENSION_create_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION **ex), REG(a1, ASN1_OBJECT *obj), REG(d0, int crit), REG(a2, ASN1_OCTET_STRING *data))
{
	return(X509_EXTENSION_create_by_OBJ(ex, obj, crit, data));
}

int ASM SAVEDS X509_EXTENSION_set_object_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex), REG(a1, ASN1_OBJECT *obj))
{
	return(X509_EXTENSION_set_object(ex, obj));
}

int ASM SAVEDS X509_EXTENSION_set_critical_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex), REG(d0, int crit))
{
	return(X509_EXTENSION_set_critical(ex, crit));
}

int ASM SAVEDS X509_EXTENSION_set_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex), REG(a1, ASN1_OCTET_STRING *data))
{
	return(X509_EXTENSION_set_data(ex, data));
}

ASN1_OBJECT * ASM SAVEDS X509_EXTENSION_get_object_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex))
{
	return(X509_EXTENSION_get_object(ex));
}

ASN1_OCTET_STRING * ASM SAVEDS X509_EXTENSION_get_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ne))
{
	return(X509_EXTENSION_get_data(ne));
}

int ASM SAVEDS X509_EXTENSION_get_critical_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex))
{
	return(X509_EXTENSION_get_critical(ex));
}

int ASM SAVEDS X509at_get_attr_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_ATTRIBUTE) *x))
{
	return(X509at_get_attr_count(x));
}

int ASM SAVEDS X509at_get_attr_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_ATTRIBUTE) *x), REG(d0, int nid), REG(d1, int lastpos))
{
	return(X509at_get_attr_by_NID(x, nid, lastpos));
}

int ASM SAVEDS X509at_get_attr_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_ATTRIBUTE) *sk), REG(a1, ASN1_OBJECT *obj), REG(d0, int lastpos))
{
	return(X509at_get_attr_by_OBJ(sk, obj, lastpos));
}

X509_ATTRIBUTE * ASM SAVEDS X509at_get_attr_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const STACK_OF(X509_ATTRIBUTE) *x), REG(d0, int loc))
{
	return(X509at_get_attr(x, loc));
}

X509_ATTRIBUTE * ASM SAVEDS X509at_delete_attr_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) *x), REG(d0, int loc))
{
	return(X509at_delete_attr(x, loc));
}

STACK_OF(X509_ATTRIBUTE) * ASM SAVEDS X509at_add1_attr_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) **x), REG(a1, X509_ATTRIBUTE *attr))
{
	return(X509at_add1_attr(x, attr));
}

STACK_OF(X509_ATTRIBUTE) * ASM SAVEDS X509at_add1_attr_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) **x), REG(a1, const ASN1_OBJECT *obj), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len))
{
	return(X509at_add1_attr_by_OBJ(x, obj, type, bytes, len));
}

STACK_OF(X509_ATTRIBUTE) * ASM SAVEDS X509at_add1_attr_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) **x), REG(d0, int nid), REG(d1, int type), REG(a1, const unsigned char *bytes), REG(d2, int len))
{
	return(X509at_add1_attr_by_NID(x, nid, type, bytes, len));
}

STACK_OF(X509_ATTRIBUTE) * ASM SAVEDS X509at_add1_attr_by_txt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_ATTRIBUTE) **x), REG(a1, const char *attrname), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len))
{
	return(X509at_add1_attr_by_txt(x, attrname, type, bytes, len));
}

X509_ATTRIBUTE * ASM SAVEDS X509_ATTRIBUTE_create_by_NID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE **attr), REG(d0, int nid), REG(d1, int atrtype), REG(a1, const void *data), REG(d2, int len))
{
	return(X509_ATTRIBUTE_create_by_NID(attr, nid, atrtype, data, len));
}

X509_ATTRIBUTE * ASM SAVEDS X509_ATTRIBUTE_create_by_OBJ_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE **attr), REG(a1, const ASN1_OBJECT *obj), REG(d0, int atrtype), REG(a2, const void *data), REG(d1, int len))
{
	return(X509_ATTRIBUTE_create_by_OBJ(attr, obj, atrtype, data, len));
}

X509_ATTRIBUTE * ASM SAVEDS X509_ATTRIBUTE_create_by_txt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE **attr), REG(a1, const char *atrname), REG(d0, int type), REG(a2, const unsigned char *bytes), REG(d1, int len))
{
	return(X509_ATTRIBUTE_create_by_txt(attr, atrname, type, bytes, len));
}

int ASM SAVEDS X509_ATTRIBUTE_set1_object_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *attr), REG(a1, const ASN1_OBJECT *obj))
{
	return(X509_ATTRIBUTE_set1_object(attr, obj));
}

int ASM SAVEDS X509_ATTRIBUTE_set1_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *attr), REG(d0, int attrtype), REG(a1, const void *data), REG(d1, int len))
{
	return(X509_ATTRIBUTE_set1_data(attr, attrtype, data, len));
}

void * ASM SAVEDS X509_ATTRIBUTE_get0_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *attr), REG(d0, int idx), REG(d1, int atrtype), REG(a1, void *data))
{
	return(X509_ATTRIBUTE_get0_data(attr, idx, atrtype, data));
}

int ASM SAVEDS X509_ATTRIBUTE_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *attr))
{
	return(X509_ATTRIBUTE_count(attr));
}

ASN1_OBJECT * ASM SAVEDS X509_ATTRIBUTE_get0_object_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *attr))
{
	return(X509_ATTRIBUTE_get0_object(attr));
}

ASN1_TYPE * ASM SAVEDS X509_ATTRIBUTE_get0_type_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_ATTRIBUTE *attr), REG(d0, int idx))
{
	return(X509_ATTRIBUTE_get0_type(attr, idx));
}

int ASM SAVEDS X509_verify_cert_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	return(X509_verify_cert(ctx));
}

X509 * ASM SAVEDS X509_find_by_issuer_and_serial_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509) *sk), REG(a1, X509_NAME *name), REG(a2, ASN1_INTEGER *serial))
{
	return(X509_find_by_issuer_and_serial(sk, name, serial));
}

X509 * ASM SAVEDS X509_find_by_subject_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509) *sk), REG(a1, X509_NAME *name))
{
	return(X509_find_by_subject(sk, name));
}

PBEPARAM * ASM SAVEDS PBEPARAM_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PBEPARAM_new());
}

void ASM SAVEDS PBEPARAM_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PBEPARAM *a))
{
	PBEPARAM_free(a);
}

PBEPARAM * ASM SAVEDS d2i_PBEPARAM_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PBEPARAM **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PBEPARAM(a, in, len));
}

int ASM SAVEDS i2d_PBEPARAM_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PBEPARAM *a), REG(a1, unsigned char **out))
{
	return(i2d_PBEPARAM(a, out));
}

const ASN1_ITEM * ASM SAVEDS PBEPARAM_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PBEPARAM_it());
}

PBE2PARAM * ASM SAVEDS PBE2PARAM_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PBE2PARAM_new());
}

void ASM SAVEDS PBE2PARAM_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PBE2PARAM *a))
{
	PBE2PARAM_free(a);
}

PBE2PARAM * ASM SAVEDS d2i_PBE2PARAM_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PBE2PARAM **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PBE2PARAM(a, in, len));
}

int ASM SAVEDS i2d_PBE2PARAM_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PBE2PARAM *a), REG(a1, unsigned char **out))
{
	return(i2d_PBE2PARAM(a, out));
}

const ASN1_ITEM * ASM SAVEDS PBE2PARAM_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PBE2PARAM_it());
}

PBKDF2PARAM * ASM SAVEDS PBKDF2PARAM_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PBKDF2PARAM_new());
}

void ASM SAVEDS PBKDF2PARAM_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PBKDF2PARAM *a))
{
	PBKDF2PARAM_free(a);
}

PBKDF2PARAM * ASM SAVEDS d2i_PBKDF2PARAM_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PBKDF2PARAM **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PBKDF2PARAM(a, in, len));
}

int ASM SAVEDS i2d_PBKDF2PARAM_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PBKDF2PARAM *a), REG(a1, unsigned char **out))
{
	return(i2d_PBKDF2PARAM(a, out));
}

const ASN1_ITEM * ASM SAVEDS PBKDF2PARAM_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PBKDF2PARAM_it());
}

X509_ALGOR * ASM SAVEDS PKCS5_pbe_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int alg), REG(d1, int iter), REG(a0, unsigned char *salt), REG(d2, int saltlen))
{
	return(PKCS5_pbe_set(alg, iter, salt, saltlen));
}

X509_ALGOR * ASM SAVEDS PKCS5_pbe2_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const EVP_CIPHER *cipher), REG(d0, int iter), REG(a1, unsigned char *salt), REG(d1, int saltlen))
{
	return(PKCS5_pbe2_set(cipher, iter, salt, saltlen));
}

PKCS8_PRIV_KEY_INFO * ASM SAVEDS PKCS8_PRIV_KEY_INFO_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS8_PRIV_KEY_INFO_new());
}

void ASM SAVEDS PKCS8_PRIV_KEY_INFO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO *a))
{
	PKCS8_PRIV_KEY_INFO_free(a);
}

PKCS8_PRIV_KEY_INFO * ASM SAVEDS d2i_PKCS8_PRIV_KEY_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKCS8_PRIV_KEY_INFO(a, in, len));
}

int ASM SAVEDS i2d_PKCS8_PRIV_KEY_INFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO *a), REG(a1, unsigned char **out))
{
	return(i2d_PKCS8_PRIV_KEY_INFO(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKCS8_PRIV_KEY_INFO_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKCS8_PRIV_KEY_INFO_it());
}

EVP_PKEY * ASM SAVEDS EVP_PKCS82PKEY_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO *p8))
{
	return(EVP_PKCS82PKEY(p8));
}

PKCS8_PRIV_KEY_INFO * ASM SAVEDS EVP_PKEY2PKCS8_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey))
{
	return(EVP_PKEY2PKCS8(pkey));
}

PKCS8_PRIV_KEY_INFO * ASM SAVEDS EVP_PKEY2PKCS8_broken_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EVP_PKEY *pkey), REG(d0, int broken))
{
	return(EVP_PKEY2PKCS8_broken(pkey, broken));
}

PKCS8_PRIV_KEY_INFO * ASM SAVEDS PKCS8_set_broken_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKCS8_PRIV_KEY_INFO *p8), REG(d0, int broken))
{
	return(PKCS8_set_broken(p8, broken));
}

int ASM SAVEDS X509_check_trust_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int id), REG(d1, int flags))
{
	return(X509_check_trust(x, id, flags));
}

int ASM SAVEDS X509_TRUST_get_count_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_TRUST_get_count());
}

X509_TRUST * ASM SAVEDS X509_TRUST_get0_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int idx))
{
	return(X509_TRUST_get0(idx));
}

int ASM SAVEDS X509_TRUST_get_by_id_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int id))
{
	return(X509_TRUST_get_by_id(id));
}

int ASM SAVEDS X509_TRUST_add_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int id), REG(d1, int flags), REG(a0, int (*ck)(X509_TRUST *, X509 *, int)), REG(a1, char *name), REG(d2, int arg1), REG(a2, void *arg2))
{
	return(X509_TRUST_add(id, flags, ck, name, arg1, arg2));
}

void ASM SAVEDS X509_TRUST_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	X509_TRUST_cleanup();
}

int ASM SAVEDS X509_TRUST_get_flags_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_TRUST *xp))
{
	return(X509_TRUST_get_flags(xp));
}

char * ASM SAVEDS X509_TRUST_get0_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_TRUST *xp))
{
	return(X509_TRUST_get0_name(xp));
}

int ASM SAVEDS X509_TRUST_get_trust_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_TRUST *xp))
{
	return(X509_TRUST_get_trust(xp));
}

void ASM SAVEDS ERR_load_X509_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_X509_strings();
}

int ASM SAVEDS X509_OBJECT_idx_by_subject_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_OBJECT) *h), REG(d0, int type), REG(a1, X509_NAME *name))
{
	return(X509_OBJECT_idx_by_subject(h, type, name));
}

X509_OBJECT * ASM SAVEDS X509_OBJECT_retrieve_by_subject_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_OBJECT) *h), REG(d0, int type), REG(a1, X509_NAME *name))
{
	return(X509_OBJECT_retrieve_by_subject(h, type, name));
}

X509_OBJECT * ASM SAVEDS X509_OBJECT_retrieve_match_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_OBJECT) *h), REG(a1, X509_OBJECT *x))
{
	return(X509_OBJECT_retrieve_match(h, x));
}

void ASM SAVEDS X509_OBJECT_up_ref_count_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_OBJECT *a))
{
	X509_OBJECT_up_ref_count(a);
}

void ASM SAVEDS X509_OBJECT_free_contents_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_OBJECT *a))
{
	X509_OBJECT_free_contents(a);
}

X509_STORE * ASM SAVEDS X509_STORE_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_STORE_new());
}

void ASM SAVEDS X509_STORE_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *v))
{
	X509_STORE_free(v);
}

void ASM SAVEDS X509_STORE_set_flags_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx), REG(d0, long flags))
{
	X509_STORE_set_flags(ctx, flags);
}

int ASM SAVEDS X509_STORE_set_purpose_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx), REG(d0, int purpose))
{
	return(X509_STORE_set_purpose(ctx, purpose));
}

int ASM SAVEDS X509_STORE_set_trust_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx), REG(d0, int trust))
{
	return(X509_STORE_set_trust(ctx, trust));
}

X509_STORE_CTX * ASM SAVEDS X509_STORE_CTX_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_STORE_CTX_new());
}

int ASM SAVEDS X509_STORE_CTX_get1_issuer_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 **issuer), REG(a1, X509_STORE_CTX *ctx), REG(a2, X509 *x))
{
	return(X509_STORE_CTX_get1_issuer(issuer, ctx, x));
}

void ASM SAVEDS X509_STORE_CTX_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	X509_STORE_CTX_free(ctx);
}

int ASM SAVEDS X509_STORE_CTX_init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(a1, X509_STORE *store), REG(a2, X509 *x509), REG(a3, STACK_OF(X509) *chain))
{
	return(X509_STORE_CTX_init(ctx, store, x509, chain));
}

void ASM SAVEDS X509_STORE_CTX_trusted_stack_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(a1, STACK_OF(X509) *sk))
{
	X509_STORE_CTX_trusted_stack(ctx, sk);
}

void ASM SAVEDS X509_STORE_CTX_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	X509_STORE_CTX_cleanup(ctx);
}

X509_LOOKUP * ASM SAVEDS X509_STORE_add_lookup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *v), REG(a1, X509_LOOKUP_METHOD *m))
{
	return(X509_STORE_add_lookup(v, m));
}

X509_LOOKUP_METHOD * ASM SAVEDS X509_LOOKUP_hash_dir_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_LOOKUP_hash_dir());
}

X509_LOOKUP_METHOD * ASM SAVEDS X509_LOOKUP_file_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_LOOKUP_file());
}

int ASM SAVEDS X509_STORE_add_cert_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx), REG(a1, X509 *x))
{
	return(X509_STORE_add_cert(ctx, x));
}

int ASM SAVEDS X509_STORE_add_crl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx), REG(a1, X509_CRL *x))
{
	return(X509_STORE_add_crl(ctx, x));
}

int ASM SAVEDS X509_STORE_get_by_subject_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *vs), REG(d0, int type), REG(a1, X509_NAME *name), REG(a2, X509_OBJECT *ret))
{
	return(X509_STORE_get_by_subject(vs, type, name, ret));
}

int ASM SAVEDS X509_LOOKUP_ctrl_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(d0, int cmd), REG(a1, const char *argc), REG(d1, long argl), REG(a2, char **ret))
{
	return(X509_LOOKUP_ctrl(ctx, cmd, argc, argl, ret));
}

int ASM SAVEDS X509_load_cert_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(a1, const char *file), REG(d0, int type))
{
	return(X509_load_cert_file(ctx, file, type));
}

int ASM SAVEDS X509_load_crl_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(a1, const char *file), REG(d0, int type))
{
	return(X509_load_crl_file(ctx, file, type));
}

int ASM SAVEDS X509_load_cert_crl_file_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(a1, const char *file), REG(d0, int type))
{
	return(X509_load_cert_crl_file(ctx, file, type));
}

X509_LOOKUP * ASM SAVEDS X509_LOOKUP_new_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP_METHOD *method))
{
	return(X509_LOOKUP_new(method));
}

void ASM SAVEDS X509_LOOKUP_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx))
{
	X509_LOOKUP_free(ctx);
}

int ASM SAVEDS X509_LOOKUP_init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx))
{
	return(X509_LOOKUP_init(ctx));
}

int ASM SAVEDS X509_LOOKUP_by_subject_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(d0, int type), REG(a1, X509_NAME *name), REG(a2, X509_OBJECT *ret))
{
	return(X509_LOOKUP_by_subject(ctx, type, name, ret));
}

int ASM SAVEDS X509_LOOKUP_by_issuer_serial_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(d0, int type), REG(a1, X509_NAME *name), REG(a2, ASN1_INTEGER *serial), REG(a3, X509_OBJECT *ret))
{
	return(X509_LOOKUP_by_issuer_serial(ctx, type, name, serial, ret));
}

int ASM SAVEDS X509_LOOKUP_by_fingerprint_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(d0, int type), REG(a1, unsigned char *bytes), REG(d1, int len), REG(a2, X509_OBJECT *ret))
{
	return(X509_LOOKUP_by_fingerprint(ctx, type, bytes, len, ret));
}

int ASM SAVEDS X509_LOOKUP_by_alias_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx), REG(d0, int type), REG(a1, char *str), REG(d1, int len), REG(a2, X509_OBJECT *ret))
{
	return(X509_LOOKUP_by_alias(ctx, type, str, len, ret));
}

int ASM SAVEDS X509_LOOKUP_shutdown_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_LOOKUP *ctx))
{
	return(X509_LOOKUP_shutdown(ctx));
}

int ASM SAVEDS X509_STORE_load_locations_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx), REG(a1, const char *file), REG(a2, const char *dir))
{
	return(X509_STORE_load_locations(ctx, file, dir));
}

int ASM SAVEDS X509_STORE_set_default_paths_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE *ctx))
{
	return(X509_STORE_set_default_paths(ctx));
}

int ASM SAVEDS X509_STORE_CTX_get_ex_new_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(X509_STORE_CTX_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int ASM SAVEDS X509_STORE_CTX_set_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, int idx), REG(a1, void *data))
{
	return(X509_STORE_CTX_set_ex_data(ctx, idx, data));
}

void * ASM SAVEDS X509_STORE_CTX_get_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, int idx))
{
	return(X509_STORE_CTX_get_ex_data(ctx, idx));
}

int ASM SAVEDS X509_STORE_CTX_get_error_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	return(X509_STORE_CTX_get_error(ctx));
}

void ASM SAVEDS X509_STORE_CTX_set_error_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, int s))
{
	X509_STORE_CTX_set_error(ctx, s);
}

int ASM SAVEDS X509_STORE_CTX_get_error_depth_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	return(X509_STORE_CTX_get_error_depth(ctx));
}

X509 * ASM SAVEDS X509_STORE_CTX_get_current_cert_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	return(X509_STORE_CTX_get_current_cert(ctx));
}

STACK_OF(X509) * ASM SAVEDS X509_STORE_CTX_get_chain_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	return(X509_STORE_CTX_get_chain(ctx));
}

STACK_OF(X509) * ASM SAVEDS X509_STORE_CTX_get1_chain_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx))
{
	return(X509_STORE_CTX_get1_chain(ctx));
}

void ASM SAVEDS X509_STORE_CTX_set_cert_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *c), REG(a1, X509 *x))
{
	X509_STORE_CTX_set_cert(c, x);
}

void ASM SAVEDS X509_STORE_CTX_set_chain_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *c), REG(a1, STACK_OF(X509) *sk))
{
	X509_STORE_CTX_set_chain(c, sk);
}

int ASM SAVEDS X509_STORE_CTX_set_purpose_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, int purpose))
{
	return(X509_STORE_CTX_set_purpose(ctx, purpose));
}

int ASM SAVEDS X509_STORE_CTX_set_trust_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, int trust))
{
	return(X509_STORE_CTX_set_trust(ctx, trust));
}

int ASM SAVEDS X509_STORE_CTX_purpose_inherit_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, int def_purpose), REG(d1, int purpose), REG(d2, int trust))
{
	return(X509_STORE_CTX_purpose_inherit(ctx, def_purpose, purpose, trust));
}

void ASM SAVEDS X509_STORE_CTX_set_flags_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, long flags))
{
	X509_STORE_CTX_set_flags(ctx, flags);
}

void ASM SAVEDS X509_STORE_CTX_set_time_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(d0, long flags), REG(d1, time_t t))
{
	X509_STORE_CTX_set_time(ctx, flags, t);
}

void ASM SAVEDS X509_STORE_CTX_set_verify_cb_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_STORE_CTX *ctx), REG(a1, int (*verify_cb)(int, X509_STORE_CTX *)))
{
	X509_STORE_CTX_set_verify_cb(ctx, verify_cb);
}

BASIC_CONSTRAINTS * ASM SAVEDS BASIC_CONSTRAINTS_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BASIC_CONSTRAINTS_new());
}

void ASM SAVEDS BASIC_CONSTRAINTS_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BASIC_CONSTRAINTS *a))
{
	BASIC_CONSTRAINTS_free(a);
}

BASIC_CONSTRAINTS * ASM SAVEDS d2i_BASIC_CONSTRAINTS_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BASIC_CONSTRAINTS **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_BASIC_CONSTRAINTS(a, in, len));
}

int ASM SAVEDS i2d_BASIC_CONSTRAINTS_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BASIC_CONSTRAINTS *a), REG(a1, unsigned char **out))
{
	return(i2d_BASIC_CONSTRAINTS(a, out));
}

const ASN1_ITEM * ASM SAVEDS BASIC_CONSTRAINTS_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BASIC_CONSTRAINTS_it());
}

SXNET * ASM SAVEDS SXNET_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SXNET_new());
}

void ASM SAVEDS SXNET_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET *a))
{
	SXNET_free(a);
}

SXNET * ASM SAVEDS d2i_SXNET_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_SXNET(a, in, len));
}

int ASM SAVEDS i2d_SXNET_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET *a), REG(a1, unsigned char **out))
{
	return(i2d_SXNET(a, out));
}

const ASN1_ITEM * ASM SAVEDS SXNET_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SXNET_it());
}

SXNETID * ASM SAVEDS SXNETID_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SXNETID_new());
}

void ASM SAVEDS SXNETID_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SXNETID *a))
{
	SXNETID_free(a);
}

SXNETID * ASM SAVEDS d2i_SXNETID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SXNETID **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_SXNETID(a, in, len));
}

int ASM SAVEDS i2d_SXNETID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SXNETID *a), REG(a1, unsigned char **out))
{
	return(i2d_SXNETID(a, out));
}

const ASN1_ITEM * ASM SAVEDS SXNETID_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(SXNETID_it());
}

int ASM SAVEDS SXNET_add_id_asc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET **psx), REG(a1, char *zone), REG(a2, char *user), REG(d0, int userlen))
{
	return(SXNET_add_id_asc(psx, zone, user, userlen));
}

int ASM SAVEDS SXNET_add_id_ulong_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET **psx), REG(d0, unsigned long lzone), REG(a1, char *user), REG(d1, int userlen))
{
	return(SXNET_add_id_ulong(psx, lzone, user, userlen));
}

int ASM SAVEDS SXNET_add_id_INTEGER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET **psx), REG(a1, ASN1_INTEGER *izone), REG(a2, char *user), REG(d0, int userlen))
{
	return(SXNET_add_id_INTEGER(psx, izone, user, userlen));
}

ASN1_OCTET_STRING * ASM SAVEDS SXNET_get_id_asc_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET *sx), REG(a1, char *zone))
{
	return(SXNET_get_id_asc(sx, zone));
}

ASN1_OCTET_STRING * ASM SAVEDS SXNET_get_id_ulong_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET *sx), REG(d0, unsigned long lzone))
{
	return(SXNET_get_id_ulong(sx, lzone));
}

ASN1_OCTET_STRING * ASM SAVEDS SXNET_get_id_INTEGER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SXNET *sx), REG(a1, ASN1_INTEGER *zone))
{
	return(SXNET_get_id_INTEGER(sx, zone));
}

AUTHORITY_KEYID * ASM SAVEDS AUTHORITY_KEYID_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(AUTHORITY_KEYID_new());
}

void ASM SAVEDS AUTHORITY_KEYID_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, AUTHORITY_KEYID *a))
{
	AUTHORITY_KEYID_free(a);
}

AUTHORITY_KEYID * ASM SAVEDS d2i_AUTHORITY_KEYID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, AUTHORITY_KEYID **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_AUTHORITY_KEYID(a, in, len));
}

int ASM SAVEDS i2d_AUTHORITY_KEYID_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, AUTHORITY_KEYID *a), REG(a1, unsigned char **out))
{
	return(i2d_AUTHORITY_KEYID(a, out));
}

const ASN1_ITEM * ASM SAVEDS AUTHORITY_KEYID_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(AUTHORITY_KEYID_it());
}

PKEY_USAGE_PERIOD * ASM SAVEDS PKEY_USAGE_PERIOD_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKEY_USAGE_PERIOD_new());
}

void ASM SAVEDS PKEY_USAGE_PERIOD_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKEY_USAGE_PERIOD *a))
{
	PKEY_USAGE_PERIOD_free(a);
}

PKEY_USAGE_PERIOD * ASM SAVEDS d2i_PKEY_USAGE_PERIOD_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKEY_USAGE_PERIOD **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_PKEY_USAGE_PERIOD(a, in, len));
}

int ASM SAVEDS i2d_PKEY_USAGE_PERIOD_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, PKEY_USAGE_PERIOD *a), REG(a1, unsigned char **out))
{
	return(i2d_PKEY_USAGE_PERIOD(a, out));
}

const ASN1_ITEM * ASM SAVEDS PKEY_USAGE_PERIOD_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(PKEY_USAGE_PERIOD_it());
}

GENERAL_NAME * ASM SAVEDS GENERAL_NAME_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(GENERAL_NAME_new());
}

void ASM SAVEDS GENERAL_NAME_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, GENERAL_NAME *a))
{
	GENERAL_NAME_free(a);
}

GENERAL_NAME * ASM SAVEDS d2i_GENERAL_NAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, GENERAL_NAME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_GENERAL_NAME(a, in, len));
}

int ASM SAVEDS i2d_GENERAL_NAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, GENERAL_NAME *a), REG(a1, unsigned char **out))
{
	return(i2d_GENERAL_NAME(a, out));
}

const ASN1_ITEM * ASM SAVEDS GENERAL_NAME_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(GENERAL_NAME_it());
}

STACK_OF(CONF_VALUE) * ASM SAVEDS i2v_GENERAL_NAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *method), REG(a1, GENERAL_NAME *gen), REG(a2, STACK_OF(CONF_VALUE) *ret))
{
	return(i2v_GENERAL_NAME(method, gen, ret));
}

int ASM SAVEDS GENERAL_NAME_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, GENERAL_NAME *gen))
{
	return(GENERAL_NAME_print(out, gen));
}

GENERAL_NAMES * ASM SAVEDS GENERAL_NAMES_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(GENERAL_NAMES_new());
}

void ASM SAVEDS GENERAL_NAMES_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, GENERAL_NAMES *a))
{
	GENERAL_NAMES_free(a);
}

GENERAL_NAMES * ASM SAVEDS d2i_GENERAL_NAMES_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, GENERAL_NAMES **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_GENERAL_NAMES(a, in, len));
}

int ASM SAVEDS i2d_GENERAL_NAMES_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, GENERAL_NAMES *a), REG(a1, unsigned char **out))
{
	return(i2d_GENERAL_NAMES(a, out));
}

const ASN1_ITEM * ASM SAVEDS GENERAL_NAMES_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(GENERAL_NAMES_it());
}

STACK_OF(CONF_VALUE) * ASM SAVEDS i2v_GENERAL_NAMES_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *method), REG(a1, GENERAL_NAMES *gen), REG(a2, STACK_OF(CONF_VALUE) *extlist))
{
	return(i2v_GENERAL_NAMES(method, gen, extlist));
}

GENERAL_NAMES * ASM SAVEDS v2i_GENERAL_NAMES_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *method), REG(a1, X509V3_CTX *ctx), REG(a2, STACK_OF(CONF_VALUE) *nval))
{
	return(v2i_GENERAL_NAMES(method, ctx, nval));
}

OTHERNAME * ASM SAVEDS OTHERNAME_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OTHERNAME_new());
}

void ASM SAVEDS OTHERNAME_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OTHERNAME *a))
{
	OTHERNAME_free(a);
}

OTHERNAME * ASM SAVEDS d2i_OTHERNAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OTHERNAME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_OTHERNAME(a, in, len));
}

int ASM SAVEDS i2d_OTHERNAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, OTHERNAME *a), REG(a1, unsigned char **out))
{
	return(i2d_OTHERNAME(a, out));
}

const ASN1_ITEM * ASM SAVEDS OTHERNAME_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(OTHERNAME_it());
}

EDIPARTYNAME * ASM SAVEDS EDIPARTYNAME_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EDIPARTYNAME_new());
}

void ASM SAVEDS EDIPARTYNAME_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EDIPARTYNAME *a))
{
	EDIPARTYNAME_free(a);
}

EDIPARTYNAME * ASM SAVEDS d2i_EDIPARTYNAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EDIPARTYNAME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_EDIPARTYNAME(a, in, len));
}

int ASM SAVEDS i2d_EDIPARTYNAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EDIPARTYNAME *a), REG(a1, unsigned char **out))
{
	return(i2d_EDIPARTYNAME(a, out));
}

const ASN1_ITEM * ASM SAVEDS EDIPARTYNAME_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EDIPARTYNAME_it());
}

char * ASM SAVEDS i2s_ASN1_OCTET_STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *method), REG(a1, ASN1_OCTET_STRING *ia5))
{
	return(i2s_ASN1_OCTET_STRING(method, ia5));
}

ASN1_OCTET_STRING * ASM SAVEDS s2i_ASN1_OCTET_STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *method), REG(a1, X509V3_CTX *ctx), REG(a2, char *str))
{
	return(s2i_ASN1_OCTET_STRING(method, ctx, str));
}

EXTENDED_KEY_USAGE * ASM SAVEDS EXTENDED_KEY_USAGE_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EXTENDED_KEY_USAGE_new());
}

void ASM SAVEDS EXTENDED_KEY_USAGE_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EXTENDED_KEY_USAGE *a))
{
	EXTENDED_KEY_USAGE_free(a);
}

EXTENDED_KEY_USAGE * ASM SAVEDS d2i_EXTENDED_KEY_USAGE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EXTENDED_KEY_USAGE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_EXTENDED_KEY_USAGE(a, in, len));
}

int ASM SAVEDS i2d_EXTENDED_KEY_USAGE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, EXTENDED_KEY_USAGE *a), REG(a1, unsigned char **out))
{
	return(i2d_EXTENDED_KEY_USAGE(a, out));
}

const ASN1_ITEM * ASM SAVEDS EXTENDED_KEY_USAGE_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(EXTENDED_KEY_USAGE_it());
}

int ASM SAVEDS i2a_ACCESS_DESCRIPTION_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, ACCESS_DESCRIPTION*a))
{
	return(i2a_ACCESS_DESCRIPTION(bp, a));
}

CERTIFICATEPOLICIES * ASM SAVEDS CERTIFICATEPOLICIES_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CERTIFICATEPOLICIES_new());
}

void ASM SAVEDS CERTIFICATEPOLICIES_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CERTIFICATEPOLICIES *a))
{
	CERTIFICATEPOLICIES_free(a);
}

CERTIFICATEPOLICIES * ASM SAVEDS d2i_CERTIFICATEPOLICIES_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CERTIFICATEPOLICIES **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_CERTIFICATEPOLICIES(a, in, len));
}

int ASM SAVEDS i2d_CERTIFICATEPOLICIES_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CERTIFICATEPOLICIES *a), REG(a1, unsigned char **out))
{
	return(i2d_CERTIFICATEPOLICIES(a, out));
}

const ASN1_ITEM * ASM SAVEDS CERTIFICATEPOLICIES_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CERTIFICATEPOLICIES_it());
}

POLICYINFO * ASM SAVEDS POLICYINFO_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(POLICYINFO_new());
}

void ASM SAVEDS POLICYINFO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, POLICYINFO *a))
{
	POLICYINFO_free(a);
}

POLICYINFO * ASM SAVEDS d2i_POLICYINFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, POLICYINFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_POLICYINFO(a, in, len));
}

int ASM SAVEDS i2d_POLICYINFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, POLICYINFO *a), REG(a1, unsigned char **out))
{
	return(i2d_POLICYINFO(a, out));
}

const ASN1_ITEM * ASM SAVEDS POLICYINFO_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(POLICYINFO_it());
}

POLICYQUALINFO * ASM SAVEDS POLICYQUALINFO_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(POLICYQUALINFO_new());
}

void ASM SAVEDS POLICYQUALINFO_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, POLICYQUALINFO *a))
{
	POLICYQUALINFO_free(a);
}

POLICYQUALINFO * ASM SAVEDS d2i_POLICYQUALINFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, POLICYQUALINFO **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_POLICYQUALINFO(a, in, len));
}

int ASM SAVEDS i2d_POLICYQUALINFO_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, POLICYQUALINFO *a), REG(a1, unsigned char **out))
{
	return(i2d_POLICYQUALINFO(a, out));
}

const ASN1_ITEM * ASM SAVEDS POLICYQUALINFO_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(POLICYQUALINFO_it());
}

USERNOTICE * ASM SAVEDS USERNOTICE_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(USERNOTICE_new());
}

void ASM SAVEDS USERNOTICE_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, USERNOTICE *a))
{
	USERNOTICE_free(a);
}

USERNOTICE * ASM SAVEDS d2i_USERNOTICE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, USERNOTICE **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_USERNOTICE(a, in, len));
}

int ASM SAVEDS i2d_USERNOTICE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, USERNOTICE *a), REG(a1, unsigned char **out))
{
	return(i2d_USERNOTICE(a, out));
}

const ASN1_ITEM * ASM SAVEDS USERNOTICE_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(USERNOTICE_it());
}

NOTICEREF * ASM SAVEDS NOTICEREF_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(NOTICEREF_new());
}

void ASM SAVEDS NOTICEREF_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NOTICEREF *a))
{
	NOTICEREF_free(a);
}

NOTICEREF * ASM SAVEDS d2i_NOTICEREF_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NOTICEREF **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_NOTICEREF(a, in, len));
}

int ASM SAVEDS i2d_NOTICEREF_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, NOTICEREF *a), REG(a1, unsigned char **out))
{
	return(i2d_NOTICEREF(a, out));
}

const ASN1_ITEM * ASM SAVEDS NOTICEREF_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(NOTICEREF_it());
}

CRL_DIST_POINTS * ASM SAVEDS CRL_DIST_POINTS_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CRL_DIST_POINTS_new());
}

void ASM SAVEDS CRL_DIST_POINTS_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CRL_DIST_POINTS *a))
{
	CRL_DIST_POINTS_free(a);
}

CRL_DIST_POINTS * ASM SAVEDS d2i_CRL_DIST_POINTS_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CRL_DIST_POINTS **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_CRL_DIST_POINTS(a, in, len));
}

int ASM SAVEDS i2d_CRL_DIST_POINTS_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CRL_DIST_POINTS *a), REG(a1, unsigned char **out))
{
	return(i2d_CRL_DIST_POINTS(a, out));
}

const ASN1_ITEM * ASM SAVEDS CRL_DIST_POINTS_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(CRL_DIST_POINTS_it());
}

DIST_POINT * ASM SAVEDS DIST_POINT_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DIST_POINT_new());
}

void ASM SAVEDS DIST_POINT_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DIST_POINT *a))
{
	DIST_POINT_free(a);
}

DIST_POINT * ASM SAVEDS d2i_DIST_POINT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DIST_POINT **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_DIST_POINT(a, in, len));
}

int ASM SAVEDS i2d_DIST_POINT_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DIST_POINT *a), REG(a1, unsigned char **out))
{
	return(i2d_DIST_POINT(a, out));
}

const ASN1_ITEM * ASM SAVEDS DIST_POINT_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DIST_POINT_it());
}

DIST_POINT_NAME * ASM SAVEDS DIST_POINT_NAME_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DIST_POINT_NAME_new());
}

void ASM SAVEDS DIST_POINT_NAME_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DIST_POINT_NAME *a))
{
	DIST_POINT_NAME_free(a);
}

DIST_POINT_NAME * ASM SAVEDS d2i_DIST_POINT_NAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DIST_POINT_NAME **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_DIST_POINT_NAME(a, in, len));
}

int ASM SAVEDS i2d_DIST_POINT_NAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DIST_POINT_NAME *a), REG(a1, unsigned char **out))
{
	return(i2d_DIST_POINT_NAME(a, out));
}

const ASN1_ITEM * ASM SAVEDS DIST_POINT_NAME_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DIST_POINT_NAME_it());
}

ACCESS_DESCRIPTION * ASM SAVEDS ACCESS_DESCRIPTION_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ACCESS_DESCRIPTION_new());
}

void ASM SAVEDS ACCESS_DESCRIPTION_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ACCESS_DESCRIPTION *a))
{
	ACCESS_DESCRIPTION_free(a);
}

ACCESS_DESCRIPTION * ASM SAVEDS d2i_ACCESS_DESCRIPTION_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ACCESS_DESCRIPTION **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_ACCESS_DESCRIPTION(a, in, len));
}

int ASM SAVEDS i2d_ACCESS_DESCRIPTION_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ACCESS_DESCRIPTION *a), REG(a1, unsigned char **out))
{
	return(i2d_ACCESS_DESCRIPTION(a, out));
}

const ASN1_ITEM * ASM SAVEDS ACCESS_DESCRIPTION_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(ACCESS_DESCRIPTION_it());
}

AUTHORITY_INFO_ACCESS * ASM SAVEDS AUTHORITY_INFO_ACCESS_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(AUTHORITY_INFO_ACCESS_new());
}

void ASM SAVEDS AUTHORITY_INFO_ACCESS_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, AUTHORITY_INFO_ACCESS *a))
{
	AUTHORITY_INFO_ACCESS_free(a);
}

AUTHORITY_INFO_ACCESS * ASM SAVEDS d2i_AUTHORITY_INFO_ACCESS_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, AUTHORITY_INFO_ACCESS **a), REG(a1, unsigned char **in), REG(d0, long len))
{
	return(d2i_AUTHORITY_INFO_ACCESS(a, in, len));
}

int ASM SAVEDS i2d_AUTHORITY_INFO_ACCESS_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, AUTHORITY_INFO_ACCESS *a), REG(a1, unsigned char **out))
{
	return(i2d_AUTHORITY_INFO_ACCESS(a, out));
}

const ASN1_ITEM * ASM SAVEDS AUTHORITY_INFO_ACCESS_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(AUTHORITY_INFO_ACCESS_it());
}

GENERAL_NAME * ASM SAVEDS v2i_GENERAL_NAME_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *method), REG(a1, X509V3_CTX *ctx), REG(a2, CONF_VALUE *cnf))
{
	return(v2i_GENERAL_NAME(method, ctx, cnf));
}

void ASM SAVEDS X509V3_conf_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_VALUE *val))
{
	X509V3_conf_free(val);
}

X509_EXTENSION * ASM SAVEDS X509V3_EXT_nconf_nid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, X509V3_CTX *ctx), REG(d0, int ext_nid), REG(a2, char *value))
{
	return(X509V3_EXT_nconf_nid(conf, ctx, ext_nid, value));
}

X509_EXTENSION * ASM SAVEDS X509V3_EXT_nconf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *name), REG(a3, char *value))
{
	return(X509V3_EXT_nconf(conf, ctx, name, value));
}

int ASM SAVEDS X509V3_EXT_add_nconf_sk_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, STACK_OF(X509_EXTENSION) **sk))
{
	return(X509V3_EXT_add_nconf_sk(conf, ctx, section, sk));
}

int ASM SAVEDS X509V3_EXT_add_nconf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, X509 *cert))
{
	return(X509V3_EXT_add_nconf(conf, ctx, section, cert));
}

int ASM SAVEDS X509V3_EXT_REQ_add_nconf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, X509_REQ *req))
{
	return(X509V3_EXT_REQ_add_nconf(conf, ctx, section, req));
}

int ASM SAVEDS X509V3_EXT_CRL_add_nconf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, X509_CRL *crl))
{
	return(X509V3_EXT_CRL_add_nconf(conf, ctx, section, crl));
}

X509_EXTENSION * ASM SAVEDS X509V3_EXT_conf_nid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, X509V3_CTX *ctx), REG(d0, int ext_nid), REG(a2, char *value))
{
	return(X509V3_EXT_conf_nid(conf, ctx, ext_nid, value));
}

X509_EXTENSION * ASM SAVEDS X509V3_EXT_conf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *name), REG(a3, char *value))
{
	return(X509V3_EXT_conf(conf, ctx, name, value));
}

int ASM SAVEDS X509V3_EXT_add_conf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, X509 *cert))
{
	return(X509V3_EXT_add_conf(conf, ctx, section, cert));
}

int ASM SAVEDS X509V3_EXT_REQ_add_conf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, X509_REQ *req))
{
	return(X509V3_EXT_REQ_add_conf(conf, ctx, section, req));
}

int ASM SAVEDS X509V3_EXT_CRL_add_conf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, LHASH *conf), REG(a1, X509V3_CTX *ctx), REG(a2, char *section), REG(a3, X509_CRL *crl))
{
	return(X509V3_EXT_CRL_add_conf(conf, ctx, section, crl));
}

int ASM SAVEDS X509V3_add_value_bool_nf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *name), REG(d0, int asn1_bool), REG(a1, STACK_OF(CONF_VALUE) **extlist))
{
	return(X509V3_add_value_bool_nf(name, asn1_bool, extlist));
}

int ASM SAVEDS X509V3_get_value_bool_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_VALUE *value), REG(a1, int *asn1_bool))
{
	return(X509V3_get_value_bool(value, asn1_bool));
}

int ASM SAVEDS X509V3_get_value_int_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CONF_VALUE *value), REG(a1, ASN1_INTEGER **aint))
{
	return(X509V3_get_value_int(value, aint));
}

void ASM SAVEDS X509V3_set_nconf_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, CONF *conf))
{
	X509V3_set_nconf(ctx, conf);
}

void ASM SAVEDS X509V3_set_conf_lhash_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, LHASH *lhash))
{
	X509V3_set_conf_lhash(ctx, lhash);
}

char * ASM SAVEDS X509V3_get_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, char *name), REG(a2, char *section))
{
	return(X509V3_get_string(ctx, name, section));
}

STACK_OF(CONF_VALUE) * ASM SAVEDS X509V3_get_section_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, char *section))
{
	return(X509V3_get_section(ctx, section));
}

void ASM SAVEDS X509V3_string_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, char *str))
{
	X509V3_string_free(ctx, str);
}

void ASM SAVEDS X509V3_section_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, STACK_OF(CONF_VALUE) *section))
{
	X509V3_section_free(ctx, section);
}

void ASM SAVEDS X509V3_set_ctx_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_CTX *ctx), REG(a1, X509 *issuer), REG(a2, X509 *subject), REG(a3, X509_REQ *req), REG(d0, X509_CRL *crl), REG(d1, int flags))
{
	X509V3_set_ctx(ctx, issuer, subject, req, crl, flags);
}

int ASM SAVEDS X509V3_add_value_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(a1, const char *value), REG(a2, STACK_OF(CONF_VALUE) **extlist))
{
	return(X509V3_add_value(name, value, extlist));
}

int ASM SAVEDS X509V3_add_value_uchar_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(a1, const unsigned char *value), REG(a2, STACK_OF(CONF_VALUE) **extlist))
{
	return(X509V3_add_value_uchar(name, value, extlist));
}

int ASM SAVEDS X509V3_add_value_bool_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(d0, int asn1_bool), REG(a1, STACK_OF(CONF_VALUE) **extlist))
{
	return(X509V3_add_value_bool(name, asn1_bool, extlist));
}

int ASM SAVEDS X509V3_add_value_int_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(a1, ASN1_INTEGER *aint), REG(a2, STACK_OF(CONF_VALUE) **extlist))
{
	return(X509V3_add_value_int(name, aint, extlist));
}

char * ASM SAVEDS i2s_ASN1_INTEGER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *meth), REG(a1, ASN1_INTEGER *aint))
{
	return(i2s_ASN1_INTEGER(meth, aint));
}

ASN1_INTEGER * ASM SAVEDS s2i_ASN1_INTEGER_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *meth), REG(a1, char *value))
{
	return(s2i_ASN1_INTEGER(meth, value));
}

char * ASM SAVEDS i2s_ASN1_ENUMERATED_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *meth), REG(a1, ASN1_ENUMERATED *aint))
{
	return(i2s_ASN1_ENUMERATED(meth, aint));
}

char * ASM SAVEDS i2s_ASN1_ENUMERATED_TABLE_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *meth), REG(a1, ASN1_ENUMERATED *aint))
{
	return(i2s_ASN1_ENUMERATED_TABLE(meth, aint));
}

int ASM SAVEDS X509V3_EXT_add_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *ext))
{
	return(X509V3_EXT_add(ext));
}

int ASM SAVEDS X509V3_EXT_add_list_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509V3_EXT_METHOD *extlist))
{
	return(X509V3_EXT_add_list(extlist));
}

int ASM SAVEDS X509V3_EXT_add_alias_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int nid_to), REG(d1, int nid_from))
{
	return(X509V3_EXT_add_alias(nid_to, nid_from));
}

void ASM SAVEDS X509V3_EXT_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	X509V3_EXT_cleanup();
}

X509V3_EXT_METHOD * ASM SAVEDS X509V3_EXT_get_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ext))
{
	return(X509V3_EXT_get(ext));
}

X509V3_EXT_METHOD * ASM SAVEDS X509V3_EXT_get_nid_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int nid))
{
	return(X509V3_EXT_get_nid(nid));
}

int ASM SAVEDS X509V3_add_standard_extensions_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509V3_add_standard_extensions());
}

STACK_OF(CONF_VALUE) * ASM SAVEDS X509V3_parse_list_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *line))
{
	return(X509V3_parse_list(line));
}

void * ASM SAVEDS X509V3_EXT_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ext))
{
	return(X509V3_EXT_d2i(ext));
}

void * ASM SAVEDS X509V3_get_d2i_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_EXTENSION) *x), REG(d0, int nid), REG(a1, int *crit), REG(a2, int *idx))
{
	return(X509V3_get_d2i(x, nid, crit, idx));
}

X509_EXTENSION * ASM SAVEDS X509V3_EXT_i2d_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int ext_nid), REG(d1, int crit), REG(a0, void *ext_struc))
{
	return(X509V3_EXT_i2d(ext_nid, crit, ext_struc));
}

int ASM SAVEDS X509V3_add1_i2d_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK_OF(X509_EXTENSION) **x), REG(d0, int nid), REG(a1, void *value), REG(d1, int crit), REG(d2, unsigned long flags))
{
	return(X509V3_add1_i2d(x, nid, value, crit, flags));
}

char * ASM SAVEDS hex_to_string_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *buffer), REG(d0, long len))
{
	return(hex_to_string(buffer, len));
}

unsigned char * ASM SAVEDS string_to_hex_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *str), REG(a1, long *len))
{
	return(string_to_hex(str, len));
}

int ASM SAVEDS name_cmp_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *name), REG(a1, const char *cmp))
{
	return(name_cmp(name, cmp));
}

void ASM SAVEDS X509V3_EXT_val_prn_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, STACK_OF(CONF_VALUE) *val), REG(d0, int indent), REG(d1, int ml))
{
	X509V3_EXT_val_prn(out, val, indent, ml);
}

int ASM SAVEDS X509V3_EXT_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, X509_EXTENSION *ext), REG(d0, unsigned long flag), REG(d1, int indent))
{
	return(X509V3_EXT_print(out, ext, flag, indent));
}

int ASM SAVEDS X509V3_extensions_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *out), REG(a1, char *title), REG(a2, STACK_OF(X509_EXTENSION) *exts), REG(d0, unsigned long flag), REG(d1, int indent))
{
	return(X509V3_extensions_print(out, title, exts, flag, indent));
}

int ASM SAVEDS X509_check_purpose_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x), REG(d0, int id), REG(d1, int ca))
{
	return(X509_check_purpose(x, id, ca));
}

int ASM SAVEDS X509_supported_extension_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_EXTENSION *ex))
{
	return(X509_supported_extension(ex));
}

int ASM SAVEDS X509_PURPOSE_set_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, int *p), REG(d0, int purpose))
{
	return(X509_PURPOSE_set(p, purpose));
}

int ASM SAVEDS X509_check_issued_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *issuer), REG(a1, X509 *subject))
{
	return(X509_check_issued(issuer, subject));
}

int ASM SAVEDS X509_PURPOSE_get_count_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(X509_PURPOSE_get_count());
}

X509_PURPOSE * ASM SAVEDS X509_PURPOSE_get0_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int idx))
{
	return(X509_PURPOSE_get0(idx));
}

int ASM SAVEDS X509_PURPOSE_get_by_sname_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *sname))
{
	return(X509_PURPOSE_get_by_sname(sname));
}

int ASM SAVEDS X509_PURPOSE_get_by_id_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int id))
{
	return(X509_PURPOSE_get_by_id(id));
}

int ASM SAVEDS X509_PURPOSE_add_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int id), REG(d1, int trust), REG(d2, int flags), REG(a0, int (*ck)(const X509_PURPOSE *, const X509 *, int)), REG(a1, char *name), REG(a2, char *sname), REG(a3, void *arg))
{
	return(X509_PURPOSE_add(id, trust, flags, ck, name, sname, arg));
}

char * ASM SAVEDS X509_PURPOSE_get0_name_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PURPOSE *xp))
{
	return(X509_PURPOSE_get0_name(xp));
}

char * ASM SAVEDS X509_PURPOSE_get0_sname_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PURPOSE *xp))
{
	return(X509_PURPOSE_get0_sname(xp));
}

int ASM SAVEDS X509_PURPOSE_get_trust_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PURPOSE *xp))
{
	return(X509_PURPOSE_get_trust(xp));
}

void ASM SAVEDS X509_PURPOSE_cleanup_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	X509_PURPOSE_cleanup();
}

int ASM SAVEDS X509_PURPOSE_get_id_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_PURPOSE *a))
{
	return(X509_PURPOSE_get_id(a));
}

STACK * ASM SAVEDS X509_get1_email_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509 *x))
{
	return(X509_get1_email(x));
}

STACK * ASM SAVEDS X509_REQ_get1_email_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, X509_REQ *x))
{
	return(X509_REQ_get1_email(x));
}

void ASM SAVEDS X509_email_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, STACK *sk))
{
	X509_email_free(sk);
}

void ASM SAVEDS ERR_load_X509V3_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_X509V3_strings();
}

DH * ASM SAVEDS DSA_dup_DH_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA *r))
{
	return(DSA_dup_DH(r));
}

const char * ASM SAVEDS AES_options_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(AES_options());
}

int ASM SAVEDS AES_set_encrypt_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *userKey), REG(d0, const int bits), REG(a1, AES_KEY *key))
{
	return(AES_set_encrypt_key(userKey, bits, key));
}

int ASM SAVEDS AES_set_decrypt_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *userKey), REG(d0, const int bits), REG(a1, AES_KEY *key))
{
	return(AES_set_decrypt_key(userKey, bits, key));
}

void ASM SAVEDS AES_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, const AES_KEY *key))
{
	AES_encrypt(in, out, key);
}

void ASM SAVEDS AES_decrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, const AES_KEY *key))
{
	AES_decrypt(in, out, key);
}

void ASM SAVEDS AES_ecb_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, const AES_KEY *key), REG(d0, const int enc))
{
	AES_ecb_encrypt(in, out, key, enc);
}

void ASM SAVEDS AES_cbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, const unsigned long length), REG(a2, const AES_KEY *key), REG(a3, unsigned char *ivec), REG(d1, const int enc))
{
	AES_cbc_encrypt(in, out, length, key, ivec, enc);
}

void ASM SAVEDS AES_cfb128_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, const unsigned long length), REG(a2, const AES_KEY *key), REG(a3, unsigned char *ivec), REG(d1, int *num), REG(d2, const int enc))
{
	AES_cfb128_encrypt(in, out, length, key, ivec, num, enc);
}

void ASM SAVEDS AES_ofb128_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, const unsigned long length), REG(a2, const AES_KEY *key), REG(a3, unsigned char *ivec), REG(d1, int *num))
{
	AES_ofb128_encrypt(in, out, length, key, ivec, num);
}

void ASM SAVEDS AES_ctr128_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, const unsigned long length), REG(a2, const AES_KEY *key), REG(d1, unsigned char ivec[AES_BLOCK_SIZE]), REG(d2, unsigned char ecount_buf[AES_BLOCK_SIZE]), REG(a3, unsigned int *num))
{
	AES_ctr128_encrypt(in, out, length, key, ivec, ecount_buf, num);
}

void ASM SAVEDS BF_set_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BF_KEY *key), REG(d0, int len), REG(a1, const unsigned char *data))
{
	BF_set_key(key, len, data);
}

void ASM SAVEDS BF_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BF_LONG *data), REG(a1, const BF_KEY *key))
{
	BF_encrypt(data, key);
}

void ASM SAVEDS BF_decrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BF_LONG *data), REG(a1, const BF_KEY *key))
{
	BF_decrypt(data, key);
}

void ASM SAVEDS BF_ecb_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, const BF_KEY *key), REG(d0, int enc))
{
	BF_ecb_encrypt(in, out, key, enc);
}

void ASM SAVEDS BF_cbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, const BF_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int enc))
{
	BF_cbc_encrypt(in, out, length, schedule, ivec, enc);
}

void ASM SAVEDS BF_cfb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, const BF_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num), REG(d2, int enc))
{
	BF_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

void ASM SAVEDS BF_ofb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, const BF_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num))
{
	BF_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

const char * ASM SAVEDS BF_options_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(BF_options());
}

void ASM SAVEDS CAST_set_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CAST_KEY *key), REG(d0, int len), REG(a1, const unsigned char *data))
{
	CAST_set_key(key, len, data);
}

void ASM SAVEDS CAST_ecb_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, CAST_KEY *key), REG(d0, int enc))
{
	CAST_ecb_encrypt(in, out, key, enc);
}

void ASM SAVEDS CAST_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CAST_LONG *data), REG(a1, CAST_KEY *key))
{
	CAST_encrypt(data, key);
}

void ASM SAVEDS CAST_decrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, CAST_LONG *data), REG(a1, CAST_KEY *key))
{
	CAST_decrypt(data, key);
}

void ASM SAVEDS CAST_cbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, CAST_KEY *ks), REG(a3, unsigned char *iv), REG(d1, int enc))
{
	CAST_cbc_encrypt(in, out, length, ks, iv, enc);
}

void ASM SAVEDS CAST_cfb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, CAST_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num), REG(d2, int enc))
{
	CAST_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

void ASM SAVEDS CAST_ofb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, CAST_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num))
{
	CAST_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

int * ASM SAVEDS _shadow_DES_check_key_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(_shadow_DES_check_key());
}

int * ASM SAVEDS _shadow_DES_rw_mode_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(_shadow_DES_rw_mode());
}

const char * ASM SAVEDS DES_options_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DES_options());
}

void ASM SAVEDS DES_ecb3_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *input), REG(a1, DES_cblock *output), REG(a2, DES_key_schedule *ks1), REG(a3, DES_key_schedule *ks2), REG(d0, DES_key_schedule *ks3), REG(d1, int enc))
{
	DES_ecb3_encrypt(input, output, ks1, ks2, ks3, enc);
}

DES_LONG ASM SAVEDS DES_cbc_cksum_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, DES_cblock *output), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, const_DES_cblock *ivec))
{
	return(DES_cbc_cksum(input, output, length, schedule, ivec));
}

void ASM SAVEDS DES_cbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, unsigned char *output), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d1, int enc))
{
	DES_cbc_encrypt(input, output, length, schedule, ivec, enc);
}

void ASM SAVEDS DES_ncbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, unsigned char *output), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d1, int enc))
{
	DES_ncbc_encrypt(input, output, length, schedule, ivec, enc);
}

void ASM SAVEDS DES_xcbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, unsigned char *output), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d1, const_DES_cblock *inw), REG(d2, const_DES_cblock *outw), REG(d3, int enc))
{
	DES_xcbc_encrypt(input, output, length, schedule, ivec, inw, outw, enc);
}

void ASM SAVEDS DES_cfb_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, int numbits), REG(d1, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d2, int enc))
{
	DES_cfb_encrypt(in, out, numbits, length, schedule, ivec, enc);
}

void ASM SAVEDS DES_ecb_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *input), REG(a1, DES_cblock *output), REG(a2, DES_key_schedule *ks), REG(d0, int enc))
{
	DES_ecb_encrypt(input, output, ks, enc);
}

void ASM SAVEDS DES_encrypt1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(a1, DES_key_schedule *ks), REG(d0, int enc))
{
	DES_encrypt1(data, ks, enc);
}

void ASM SAVEDS DES_encrypt2_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(a1, DES_key_schedule *ks), REG(d0, int enc))
{
	DES_encrypt2(data, ks, enc);
}

void ASM SAVEDS DES_encrypt3_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(a1, DES_key_schedule *ks1), REG(a2, DES_key_schedule *ks2), REG(a3, DES_key_schedule *ks3))
{
	DES_encrypt3(data, ks1, ks2, ks3);
}

void ASM SAVEDS DES_decrypt3_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(a1, DES_key_schedule *ks1), REG(a2, DES_key_schedule *ks2), REG(a3, DES_key_schedule *ks3))
{
	DES_decrypt3(data, ks1, ks2, ks3);
}

void ASM SAVEDS DES_ede3_cbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, unsigned char *output), REG(d0, long length), REG(a2, DES_key_schedule *ks1), REG(a3, DES_key_schedule *ks2), REG(d1, DES_key_schedule *ks3), REG(d2, DES_cblock *ivec), REG(d3, int enc))
{
	DES_ede3_cbc_encrypt(input, output, length, ks1, ks2, ks3, ivec, enc);
}

void ASM SAVEDS DES_ede3_cbcm_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, DES_key_schedule *ks1), REG(a3, DES_key_schedule *ks2), REG(d1, DES_key_schedule *ks3), REG(d2, DES_cblock *ivec1), REG(d3, DES_cblock *ivec2), REG(d4, int enc))
{
	DES_ede3_cbcm_encrypt(in, out, length, ks1, ks2, ks3, ivec1, ivec2, enc);
}

void ASM SAVEDS DES_ede3_cfb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, DES_key_schedule *ks1), REG(a3, DES_key_schedule *ks2), REG(d1, DES_key_schedule *ks3), REG(d2, DES_cblock *ivec), REG(d3, int *num), REG(d4, int enc))
{
	DES_ede3_cfb64_encrypt(in, out, length, ks1, ks2, ks3, ivec, num, enc);
}

void ASM SAVEDS DES_ede3_ofb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, DES_key_schedule *ks1), REG(a3, DES_key_schedule *ks2), REG(d1, DES_key_schedule *ks3), REG(d2, DES_cblock *ivec), REG(d3, int *num))
{
	DES_ede3_ofb64_encrypt(in, out, length, ks1, ks2, ks3, ivec, num);
}

void ASM SAVEDS DES_xwhite_in2out_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *DES_key), REG(a1, const_DES_cblock *in_white), REG(a2, DES_cblock *out_white))
{
	DES_xwhite_in2out(DES_key, in_white, out_white);
}

int ASM SAVEDS DES_enc_read_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(a0, void *buf), REG(d1, int len), REG(a1, DES_key_schedule *sched), REG(a2, DES_cblock *iv))
{
	return(DES_enc_read(fd, buf, len, sched, iv));
}

int ASM SAVEDS DES_enc_write_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(a0, const void *buf), REG(d1, int len), REG(a1, DES_key_schedule *sched), REG(a2, DES_cblock *iv))
{
	return(DES_enc_write(fd, buf, len, sched, iv));
}

char * ASM SAVEDS DES_fcrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *buf), REG(a1, const char *salt), REG(a2, char *ret))
{
	return(DES_fcrypt(buf, salt, ret));
}

char * ASM SAVEDS DES_crypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *buf), REG(a1, const char *salt))
{
	return(DES_crypt(buf, salt));
}

void ASM SAVEDS DES_ofb_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, int numbits), REG(d1, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec))
{
	DES_ofb_encrypt(in, out, numbits, length, schedule, ivec);
}

void ASM SAVEDS DES_pcbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(a1, unsigned char *output), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d1, int enc))
{
	DES_pcbc_encrypt(input, output, length, schedule, ivec, enc);
}

DES_LONG ASM SAVEDS DES_quad_cksum_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *input), REG(d0, DES_cblock output[]), REG(d1, long length), REG(d2, int out_count), REG(a1, DES_cblock *seed))
{
	return(DES_quad_cksum(input, output, length, out_count, seed));
}

int ASM SAVEDS DES_random_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DES_cblock *ret))
{
	return(DES_random_key(ret));
}

void ASM SAVEDS DES_set_odd_parity_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DES_cblock *key))
{
	DES_set_odd_parity(key);
}

int ASM SAVEDS DES_check_key_parity_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *key))
{
	return(DES_check_key_parity(key));
}

int ASM SAVEDS DES_is_weak_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *key))
{
	return(DES_is_weak_key(key));
}

int ASM SAVEDS DES_set_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *key), REG(a1, DES_key_schedule *schedule))
{
	return(DES_set_key(key, schedule));
}

int ASM SAVEDS DES_key_sched_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *key), REG(a1, DES_key_schedule *schedule))
{
	return(DES_key_sched(key, schedule));
}

int ASM SAVEDS DES_set_key_checked_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *key), REG(a1, DES_key_schedule *schedule))
{
	return(DES_set_key_checked(key, schedule));
}

void ASM SAVEDS DES_set_key_unchecked_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const_DES_cblock *key), REG(a1, DES_key_schedule *schedule))
{
	DES_set_key_unchecked(key, schedule);
}

void ASM SAVEDS DES_string_to_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *str), REG(a1, DES_cblock *key))
{
	DES_string_to_key(str, key);
}

void ASM SAVEDS DES_string_to_2keys_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *str), REG(a1, DES_cblock *key1), REG(a2, DES_cblock *key2))
{
	DES_string_to_2keys(str, key1, key2);
}

void ASM SAVEDS DES_cfb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d1, int *num), REG(d2, int enc))
{
	DES_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

void ASM SAVEDS DES_ofb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, DES_key_schedule *schedule), REG(a3, DES_cblock *ivec), REG(d1, int *num))
{
	DES_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

int ASM SAVEDS DES_read_password_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DES_cblock *key), REG(a1, const char *prompt), REG(d0, int verify))
{
	return(DES_read_password(key, prompt, verify));
}

int ASM SAVEDS DES_read_2passwords_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DES_cblock *key1), REG(a1, DES_cblock *key2), REG(a2, const char *prompt), REG(d0, int verify))
{
	return(DES_read_2passwords(key1, key2, prompt, verify));
}

const char * ASM SAVEDS _ossl_old_des_options_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(_ossl_old_des_options());
}

void ASM SAVEDS _ossl_old_des_ecb3_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, _ossl_old_des_key_schedule ks1), REG(d1, _ossl_old_des_key_schedule ks2), REG(d2, _ossl_old_des_key_schedule ks3), REG(d3, int enc))
{
	_ossl_old_des_ecb3_encrypt(input, output, ks1, ks2, ks3, enc);
}

DES_LONG ASM SAVEDS _ossl_old_des_cbc_cksum_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec))
{
	return(_ossl_old_des_cbc_cksum(input, output, length, schedule, ivec));
}

void ASM SAVEDS _ossl_old_des_cbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(d2, int enc))
{
	_ossl_old_des_cbc_encrypt(input, output, length, schedule, ivec, enc);
}

void ASM SAVEDS _ossl_old_des_ncbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(d2, int enc))
{
	_ossl_old_des_ncbc_encrypt(input, output, length, schedule, ivec, enc);
}

void ASM SAVEDS _ossl_old_des_xcbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(a3, _ossl_old_des_cblock *inw), REG(d2, _ossl_old_des_cblock *outw), REG(d3, int enc))
{
	_ossl_old_des_xcbc_encrypt(input, output, length, schedule, ivec, inw, outw, enc);
}

void ASM SAVEDS _ossl_old_des_cfb_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *in), REG(a1, unsigned char *out), REG(d0, int numbits), REG(d1, long length), REG(d2, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(d3, int enc))
{
	_ossl_old_des_cfb_encrypt(in, out, numbits, length, schedule, ivec, enc);
}

void ASM SAVEDS _ossl_old_des_ecb_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, _ossl_old_des_key_schedule ks), REG(d1, int enc))
{
	_ossl_old_des_ecb_encrypt(input, output, ks, enc);
}

void ASM SAVEDS _ossl_old_des_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(d0, _ossl_old_des_key_schedule ks), REG(d1, int enc))
{
	_ossl_old_des_encrypt(data, ks, enc);
}

void ASM SAVEDS _ossl_old_des_encrypt2_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(d0, _ossl_old_des_key_schedule ks), REG(d1, int enc))
{
	_ossl_old_des_encrypt2(data, ks, enc);
}

void ASM SAVEDS _ossl_old_des_encrypt3_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(d0, _ossl_old_des_key_schedule ks1), REG(d1, _ossl_old_des_key_schedule ks2), REG(d2, _ossl_old_des_key_schedule ks3))
{
	_ossl_old_des_encrypt3(data, ks1, ks2, ks3);
}

void ASM SAVEDS _ossl_old_des_decrypt3_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DES_LONG *data), REG(d0, _ossl_old_des_key_schedule ks1), REG(d1, _ossl_old_des_key_schedule ks2), REG(d2, _ossl_old_des_key_schedule ks3))
{
	_ossl_old_des_decrypt3(data, ks1, ks2, ks3);
}

void ASM SAVEDS _ossl_old_des_ede3_cbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule ks1), REG(d2, _ossl_old_des_key_schedule ks2), REG(d3, _ossl_old_des_key_schedule ks3), REG(a2, _ossl_old_des_cblock *ivec), REG(d4, int enc))
{
	_ossl_old_des_ede3_cbc_encrypt(input, output, length, ks1, ks2, ks3, ivec, enc);
}

void ASM SAVEDS _ossl_old_des_ede3_cfb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule ks1), REG(d2, _ossl_old_des_key_schedule ks2), REG(d3, _ossl_old_des_key_schedule ks3), REG(a2, _ossl_old_des_cblock *ivec), REG(a3, int *num), REG(d4, int enc))
{
	_ossl_old_des_ede3_cfb64_encrypt(in, out, length, ks1, ks2, ks3, ivec, num, enc);
}

void ASM SAVEDS _ossl_old_des_ede3_ofb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule ks1), REG(d2, _ossl_old_des_key_schedule ks2), REG(d3, _ossl_old_des_key_schedule ks3), REG(a2, _ossl_old_des_cblock *ivec), REG(a3, int *num))
{
	_ossl_old_des_ede3_ofb64_encrypt(in, out, length, ks1, ks2, ks3, ivec, num);
}

void ASM SAVEDS _ossl_old_des_xwhite_in2out_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock (*des_key)), REG(a1, _ossl_old_des_cblock (*in_white)), REG(a2, _ossl_old_des_cblock (*out_white)))
{
	_ossl_old_des_xwhite_in2out(des_key, in_white, out_white);
}

int ASM SAVEDS _ossl_old_des_enc_read_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(a0, char *buf), REG(d1, int len), REG(d2, _ossl_old_des_key_schedule sched), REG(a1, _ossl_old_des_cblock *iv))
{
	return(_ossl_old_des_enc_read(fd, buf, len, sched, iv));
}

int ASM SAVEDS _ossl_old_des_enc_write_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int fd), REG(a0, char *buf), REG(d1, int len), REG(d2, _ossl_old_des_key_schedule sched), REG(a1, _ossl_old_des_cblock *iv))
{
	return(_ossl_old_des_enc_write(fd, buf, len, sched, iv));
}

char * ASM SAVEDS _ossl_old_des_fcrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *buf), REG(a1, const char *salt), REG(a2, char *ret))
{
	return(_ossl_old_des_fcrypt(buf, salt, ret));
}

char * ASM SAVEDS _ossl_old_des_crypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *buf), REG(a1, const char *salt))
{
	return(_ossl_old_des_crypt(buf, salt));
}

char * ASM SAVEDS _ossl_old_crypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const char *buf), REG(a1, const char *salt))
{
	return(_ossl_old_crypt(buf, salt));
}

void ASM SAVEDS _ossl_old_des_ofb_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *in), REG(a1, unsigned char *out), REG(d0, int numbits), REG(d1, long length), REG(d2, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec))
{
	_ossl_old_des_ofb_encrypt(in, out, numbits, length, schedule, ivec);
}

void ASM SAVEDS _ossl_old_des_pcbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(d2, int enc))
{
	_ossl_old_des_pcbc_encrypt(input, output, length, schedule, ivec, enc);
}

DES_LONG ASM SAVEDS _ossl_old_des_quad_cksum_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *input), REG(a1, _ossl_old_des_cblock *output), REG(d0, long length), REG(d1, int out_count), REG(a2, _ossl_old_des_cblock *seed))
{
	return(_ossl_old_des_quad_cksum(input, output, length, out_count, seed));
}

void ASM SAVEDS _ossl_old_des_random_seed_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, _ossl_old_des_cblock key))
{
	_ossl_old_des_random_seed(key);
}

void ASM SAVEDS _ossl_old_des_random_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, _ossl_old_des_cblock ret))
{
	_ossl_old_des_random_key(ret);
}

int ASM SAVEDS _ossl_old_des_read_password_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *key), REG(a1, const char *prompt), REG(d0, int verify))
{
	return(_ossl_old_des_read_password(key, prompt, verify));
}

int ASM SAVEDS _ossl_old_des_read_2passwords_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *key1), REG(a1, _ossl_old_des_cblock *key2), REG(a2, const char *prompt), REG(d0, int verify))
{
	return(_ossl_old_des_read_2passwords(key1, key2, prompt, verify));
}

void ASM SAVEDS _ossl_old_des_set_odd_parity_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *key))
{
	_ossl_old_des_set_odd_parity(key);
}

int ASM SAVEDS _ossl_old_des_is_weak_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *key))
{
	return(_ossl_old_des_is_weak_key(key));
}

int ASM SAVEDS _ossl_old_des_set_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *key), REG(d0, _ossl_old_des_key_schedule schedule))
{
	return(_ossl_old_des_set_key(key, schedule));
}

int ASM SAVEDS _ossl_old_des_key_sched_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, _ossl_old_des_cblock *key), REG(d0, _ossl_old_des_key_schedule schedule))
{
	return(_ossl_old_des_key_sched(key, schedule));
}

void ASM SAVEDS _ossl_old_des_string_to_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *str), REG(a1, _ossl_old_des_cblock *key))
{
	_ossl_old_des_string_to_key(str, key);
}

void ASM SAVEDS _ossl_old_des_string_to_2keys_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, char *str), REG(a1, _ossl_old_des_cblock *key1), REG(a2, _ossl_old_des_cblock *key2))
{
	_ossl_old_des_string_to_2keys(str, key1, key2);
}

void ASM SAVEDS _ossl_old_des_cfb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(a3, int *num), REG(d2, int enc))
{
	_ossl_old_des_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

void ASM SAVEDS _ossl_old_des_ofb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(d1, _ossl_old_des_key_schedule schedule), REG(a2, _ossl_old_des_cblock *ivec), REG(a3, int *num))
{
	_ossl_old_des_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

void ASM SAVEDS _ossl_096_des_random_seed_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, des_cblock *key))
{
	_ossl_096_des_random_seed(key);
}

const DH_METHOD * ASM SAVEDS DH_OpenSSL_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DH_OpenSSL());
}

void ASM SAVEDS DH_set_default_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const DH_METHOD *meth))
{
	DH_set_default_method(meth);
}

const DH_METHOD * ASM SAVEDS DH_get_default_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DH_get_default_method());
}

int ASM SAVEDS DH_set_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DH *dh), REG(a1, const DH_METHOD *meth))
{
	return(DH_set_method(dh, meth));
}

DH * ASM SAVEDS DH_new_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ENGINE *engine))
{
	return(DH_new_method(engine));
}

DH * ASM SAVEDS DH_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DH_new());
}

void ASM SAVEDS DH_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DH *dh))
{
	DH_free(dh);
}

int ASM SAVEDS DH_up_ref_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DH *dh))
{
	return(DH_up_ref(dh));
}

int ASM SAVEDS DH_size_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const DH *dh))
{
	return(DH_size(dh));
}

int ASM SAVEDS DH_get_ex_new_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(DH_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int ASM SAVEDS DH_set_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DH *d), REG(d0, int idx), REG(a1, void *arg))
{
	return(DH_set_ex_data(d, idx, arg));
}

void * ASM SAVEDS DH_get_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DH *d), REG(d0, int idx))
{
	return(DH_get_ex_data(d, idx));
}

DH * ASM SAVEDS DH_generate_parameters_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int prime_len), REG(d1, int generator), REG(a0, void (*callback)(int, int, void *)), REG(a1, void *cb_arg))
{
	return(DH_generate_parameters(prime_len, generator, callback, cb_arg));
}

int ASM SAVEDS DH_check_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const DH *dh), REG(a1, int *codes))
{
	return(DH_check(dh, codes));
}

int ASM SAVEDS DH_generate_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DH *dh))
{
	return(DH_generate_key(dh));
}

int ASM SAVEDS DH_compute_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *key), REG(a1, const BIGNUM *pub_key), REG(a2, DH *dh))
{
	return(DH_compute_key(key, pub_key, dh));
}

DH * ASM SAVEDS d2i_DHparams_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DH **a), REG(a1, const unsigned char **pp), REG(d0, long length))
{
	return(d2i_DHparams(a, pp, length));
}

int ASM SAVEDS i2d_DHparams_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const DH *a), REG(a1, unsigned char **pp))
{
	return(i2d_DHparams(a, pp));
}

int ASM SAVEDS DHparams_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, const DH *x))
{
	return(DHparams_print(bp, x));
}

void ASM SAVEDS ERR_load_DH_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_DH_strings();
}

DSA_SIG * ASM SAVEDS DSA_SIG_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSA_SIG_new());
}

void ASM SAVEDS DSA_SIG_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA_SIG *a))
{
	DSA_SIG_free(a);
}

int ASM SAVEDS i2d_DSA_SIG_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA_SIG *a), REG(a1, unsigned char **pp))
{
	return(i2d_DSA_SIG(a, pp));
}

DSA_SIG * ASM SAVEDS d2i_DSA_SIG_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA_SIG **v), REG(a1, const unsigned char **pp), REG(d0, long length))
{
	return(d2i_DSA_SIG(v, pp, length));
}

DSA_SIG * ASM SAVEDS DSA_do_sign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *dgst), REG(d0, int dlen), REG(a1, DSA *dsa))
{
	return(DSA_do_sign(dgst, dlen, dsa));
}

int ASM SAVEDS DSA_do_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *dgst), REG(d0, int dgst_len), REG(a1, DSA_SIG *sig), REG(a2, DSA *dsa))
{
	return(DSA_do_verify(dgst, dgst_len, sig, dsa));
}

const DSA_METHOD * ASM SAVEDS DSA_OpenSSL_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSA_OpenSSL());
}

void ASM SAVEDS DSA_set_default_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA_METHOD *a))
{
	DSA_set_default_method(a);
}

const DSA_METHOD * ASM SAVEDS DSA_get_default_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSA_get_default_method());
}

int ASM SAVEDS DSA_set_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *dsa), REG(a1, const DSA_METHOD *a))
{
	return(DSA_set_method(dsa, a));
}

DSA * ASM SAVEDS DSA_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(DSA_new());
}

DSA * ASM SAVEDS DSA_new_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ENGINE *engine))
{
	return(DSA_new_method(engine));
}

void ASM SAVEDS DSA_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *r))
{
	DSA_free(r);
}

int ASM SAVEDS DSA_up_ref_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *r))
{
	return(DSA_up_ref(r));
}

int ASM SAVEDS DSA_size_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA *a))
{
	return(DSA_size(a));
}

int ASM SAVEDS DSA_sign_setup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *dsa), REG(a1, BN_CTX *ctx_in), REG(a2, BIGNUM **kinvp), REG(a3, BIGNUM **rp))
{
	return(DSA_sign_setup(dsa, ctx_in, kinvp, rp));
}

int ASM SAVEDS DSA_sign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, const unsigned char *dgst), REG(d1, int dlen), REG(a1, unsigned char *sig), REG(a2, unsigned int *siglen), REG(a3, DSA *dsa))
{
	return(DSA_sign(type, dgst, dlen, sig, siglen, dsa));
}

int ASM SAVEDS DSA_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, const unsigned char *dgst), REG(d1, int dgst_len), REG(a1, const unsigned char *sigbuf), REG(d2, int siglen), REG(a2, DSA *dsa))
{
	return(DSA_verify(type, dgst, dgst_len, sigbuf, siglen, dsa));
}

int ASM SAVEDS DSA_get_ex_new_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(DSA_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int ASM SAVEDS DSA_set_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *d), REG(d0, int idx), REG(a1, void *arg))
{
	return(DSA_set_ex_data(d, idx, arg));
}

void * ASM SAVEDS DSA_get_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *d), REG(d0, int idx))
{
	return(DSA_get_ex_data(d, idx));
}

DSA * ASM SAVEDS d2i_DSAPublicKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA **a), REG(a1, const unsigned char **pp), REG(d0, long length))
{
	return(d2i_DSAPublicKey(a, pp, length));
}

DSA * ASM SAVEDS d2i_DSAPrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA **a), REG(a1, const unsigned char **pp), REG(d0, long length))
{
	return(d2i_DSAPrivateKey(a, pp, length));
}

DSA * ASM SAVEDS d2i_DSAparams_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA **a), REG(a1, const unsigned char **pp), REG(d0, long length))
{
	return(d2i_DSAparams(a, pp, length));
}

DSA * ASM SAVEDS DSA_generate_parameters_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int bits), REG(a0, unsigned char *seed), REG(d1, int seed_len), REG(a1, int *counter_ret), REG(a2, unsigned long *h_ret), REG(a3, void (*callback)(int, int, void *)), REG(d2, void *cb_arg))
{
	return(DSA_generate_parameters(bits, seed, seed_len, counter_ret, h_ret, callback, cb_arg));
}

int ASM SAVEDS DSA_generate_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, DSA *a))
{
	return(DSA_generate_key(a));
}

int ASM SAVEDS i2d_DSAPublicKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA *a), REG(a1, unsigned char **pp))
{
	return(i2d_DSAPublicKey(a, pp));
}

int ASM SAVEDS i2d_DSAPrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA *a), REG(a1, unsigned char **pp))
{
	return(i2d_DSAPrivateKey(a, pp));
}

int ASM SAVEDS i2d_DSAparams_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const DSA *a), REG(a1, unsigned char **pp))
{
	return(i2d_DSAparams(a, pp));
}

int ASM SAVEDS DSAparams_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, const DSA *x))
{
	return(DSAparams_print(bp, x));
}

int ASM SAVEDS DSA_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, const DSA *x), REG(d0, int off))
{
	return(DSA_print(bp, x, off));
}

void ASM SAVEDS ERR_load_DSA_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_DSA_strings();
}

const char * ASM SAVEDS idea_options_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(idea_options());
}

void ASM SAVEDS idea_ecb_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, IDEA_KEY_SCHEDULE *ks))
{
	idea_ecb_encrypt(in, out, ks);
}

void ASM SAVEDS idea_set_encrypt_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *key), REG(a1, IDEA_KEY_SCHEDULE *ks))
{
	idea_set_encrypt_key(key, ks);
}

void ASM SAVEDS idea_set_decrypt_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, IDEA_KEY_SCHEDULE *ek), REG(a1, IDEA_KEY_SCHEDULE *dk))
{
	idea_set_decrypt_key(ek, dk);
}

void ASM SAVEDS idea_cbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, IDEA_KEY_SCHEDULE *ks), REG(a3, unsigned char *iv), REG(d1, int enc))
{
	idea_cbc_encrypt(in, out, length, ks, iv, enc);
}

void ASM SAVEDS idea_cfb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, IDEA_KEY_SCHEDULE *ks), REG(a3, unsigned char *iv), REG(d1, int *num), REG(d2, int enc))
{
	idea_cfb64_encrypt(in, out, length, ks, iv, num, enc);
}

void ASM SAVEDS idea_ofb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, IDEA_KEY_SCHEDULE *ks), REG(a3, unsigned char *iv), REG(d1, int *num))
{
	idea_ofb64_encrypt(in, out, length, ks, iv, num);
}

void ASM SAVEDS idea_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long *in), REG(a1, IDEA_KEY_SCHEDULE *ks))
{
	idea_encrypt(in, ks);
}

const char * ASM SAVEDS MD2_options_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(MD2_options());
}

int ASM SAVEDS MD2_Init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, MD2_CTX *c))
{
	return(MD2_Init(c));
}

int ASM SAVEDS MD2_Update_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, MD2_CTX *c), REG(a1, const unsigned char *data), REG(d0, unsigned long len))
{
	return(MD2_Update(c, data, len));
}

int ASM SAVEDS MD2_Final_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, MD2_CTX *c))
{
	return(MD2_Final(md, c));
}

unsigned char * ASM SAVEDS MD2_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(MD2(d, n, md));
}

int ASM SAVEDS MD4_Init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, MD4_CTX *c))
{
	return(MD4_Init(c));
}

int ASM SAVEDS MD4_Update_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, MD4_CTX *c), REG(a1, const void *data), REG(d0, unsigned long len))
{
	return(MD4_Update(c, data, len));
}

int ASM SAVEDS MD4_Final_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, MD4_CTX *c))
{
	return(MD4_Final(md, c));
}

unsigned char * ASM SAVEDS MD4_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(MD4(d, n, md));
}

void ASM SAVEDS MD4_Transform_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, MD4_CTX *c), REG(a1, const unsigned char *b))
{
	MD4_Transform(c, b);
}

int ASM SAVEDS MD5_Init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, MD5_CTX *c))
{
	return(MD5_Init(c));
}

int ASM SAVEDS MD5_Update_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, MD5_CTX *c), REG(a1, const void *data), REG(d0, unsigned long len))
{
	return(MD5_Update(c, data, len));
}

int ASM SAVEDS MD5_Final_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, MD5_CTX *c))
{
	return(MD5_Final(md, c));
}

unsigned char * ASM SAVEDS MD5_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(MD5(d, n, md));
}

void ASM SAVEDS MD5_Transform_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, MD5_CTX *c), REG(a1, const unsigned char *b))
{
	MD5_Transform(c, b);
}

int ASM SAVEDS MDC2_Init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, MDC2_CTX *c))
{
	return(MDC2_Init(c));
}

int ASM SAVEDS MDC2_Update_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, MDC2_CTX *c), REG(a1, const unsigned char *data), REG(d0, unsigned long len))
{
	return(MDC2_Update(c, data, len));
}

int ASM SAVEDS MDC2_Final_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, MDC2_CTX *c))
{
	return(MDC2_Final(md, c));
}

unsigned char * ASM SAVEDS MDC2_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(MDC2(d, n, md));
}

void ASM SAVEDS RC2_set_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RC2_KEY *key), REG(d0, int len), REG(a1, const unsigned char *data), REG(d1, int bits))
{
	RC2_set_key(key, len, data, bits);
}

void ASM SAVEDS RC2_ecb_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, RC2_KEY *key), REG(d0, int enc))
{
	RC2_ecb_encrypt(in, out, key, enc);
}

void ASM SAVEDS RC2_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long *data), REG(a1, RC2_KEY *key))
{
	RC2_encrypt(data, key);
}

void ASM SAVEDS RC2_decrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long *data), REG(a1, RC2_KEY *key))
{
	RC2_decrypt(data, key);
}

void ASM SAVEDS RC2_cbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, RC2_KEY *ks), REG(a3, unsigned char *iv), REG(d1, int enc))
{
	RC2_cbc_encrypt(in, out, length, ks, iv, enc);
}

void ASM SAVEDS RC2_cfb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, RC2_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num), REG(d2, int enc))
{
	RC2_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

void ASM SAVEDS RC2_ofb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, RC2_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num))
{
	RC2_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

const char * ASM SAVEDS RC4_options_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(RC4_options());
}

void ASM SAVEDS RC4_set_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RC4_KEY *key), REG(d0, int len), REG(a1, const unsigned char *data))
{
	RC4_set_key(key, len, data);
}

void ASM SAVEDS RC4_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RC4_KEY *key), REG(d0, unsigned long len), REG(a1, const unsigned char *indata), REG(a2, unsigned char *outdata))
{
	RC4(key, len, indata, outdata);
}

void ASM SAVEDS RC5_32_set_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RC5_32_KEY *key), REG(d0, int len), REG(a1, const unsigned char *data), REG(d1, int rounds))
{
	RC5_32_set_key(key, len, data, rounds);
}

void ASM SAVEDS RC5_32_ecb_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(a2, RC5_32_KEY *key), REG(d0, int enc))
{
	RC5_32_ecb_encrypt(in, out, key, enc);
}

void ASM SAVEDS RC5_32_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long *data), REG(a1, RC5_32_KEY *key))
{
	RC5_32_encrypt(data, key);
}

void ASM SAVEDS RC5_32_decrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned long *data), REG(a1, RC5_32_KEY *key))
{
	RC5_32_decrypt(data, key);
}

void ASM SAVEDS RC5_32_cbc_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, RC5_32_KEY *ks), REG(a3, unsigned char *iv), REG(d1, int enc))
{
	RC5_32_cbc_encrypt(in, out, length, ks, iv, enc);
}

void ASM SAVEDS RC5_32_cfb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, RC5_32_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num), REG(d2, int enc))
{
	RC5_32_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

void ASM SAVEDS RC5_32_ofb64_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *in), REG(a1, unsigned char *out), REG(d0, long length), REG(a2, RC5_32_KEY *schedule), REG(a3, unsigned char *ivec), REG(d1, int *num))
{
	RC5_32_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

int ASM SAVEDS RIPEMD160_Init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RIPEMD160_CTX *c))
{
	return(RIPEMD160_Init(c));
}

int ASM SAVEDS RIPEMD160_Update_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RIPEMD160_CTX *c), REG(a1, const void *data), REG(d0, unsigned long len))
{
	return(RIPEMD160_Update(c, data, len));
}

int ASM SAVEDS RIPEMD160_Final_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, RIPEMD160_CTX *c))
{
	return(RIPEMD160_Final(md, c));
}

unsigned char * ASM SAVEDS RIPEMD160_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(RIPEMD160(d, n, md));
}

void ASM SAVEDS RIPEMD160_Transform_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RIPEMD160_CTX *c), REG(a1, const unsigned char *b))
{
	RIPEMD160_Transform(c, b);
}

RSA * ASM SAVEDS RSA_new_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(RSA_new());
}

RSA * ASM SAVEDS RSA_new_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, ENGINE *engine))
{
	return(RSA_new_method(engine));
}

int ASM SAVEDS RSA_size_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *a))
{
	return(RSA_size(a));
}

RSA * ASM SAVEDS RSA_generate_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int bits), REG(d1, unsigned long e), REG(a0, void (*callback)(int, int, void *)), REG(a1, void *cb_arg))
{
	return(RSA_generate_key(bits, e, callback, cb_arg));
}

int ASM SAVEDS RSA_check_key_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *a))
{
	return(RSA_check_key(a));
}

int ASM SAVEDS RSA_public_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int flen), REG(a0, const unsigned char *from), REG(a1, unsigned char *to), REG(a2, RSA *rsa), REG(d1, int padding))
{
	return(RSA_public_encrypt(flen, from, to, rsa, padding));
}

int ASM SAVEDS RSA_private_encrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int flen), REG(a0, const unsigned char *from), REG(a1, unsigned char *to), REG(a2, RSA *rsa), REG(d1, int padding))
{
	return(RSA_private_encrypt(flen, from, to, rsa, padding));
}

int ASM SAVEDS RSA_public_decrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int flen), REG(a0, const unsigned char *from), REG(a1, unsigned char *to), REG(a2, RSA *rsa), REG(d1, int padding))
{
	return(RSA_public_decrypt(flen, from, to, rsa, padding));
}

int ASM SAVEDS RSA_private_decrypt_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int flen), REG(a0, const unsigned char *from), REG(a1, unsigned char *to), REG(a2, RSA *rsa), REG(d1, int padding))
{
	return(RSA_private_decrypt(flen, from, to, rsa, padding));
}

void ASM SAVEDS RSA_free_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *r))
{
	RSA_free(r);
}

int ASM SAVEDS RSA_up_ref_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *r))
{
	return(RSA_up_ref(r));
}

int ASM SAVEDS RSA_flags_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *r))
{
	return(RSA_flags(r));
}

void ASM SAVEDS RSA_set_default_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA_METHOD *meth))
{
	RSA_set_default_method(meth);
}

const RSA_METHOD * ASM SAVEDS RSA_get_default_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(RSA_get_default_method());
}

const RSA_METHOD * ASM SAVEDS RSA_get_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *rsa))
{
	return(RSA_get_method(rsa));
}

int ASM SAVEDS RSA_set_method_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *rsa), REG(a1, const RSA_METHOD *meth))
{
	return(RSA_set_method(rsa, meth));
}

int ASM SAVEDS RSA_memory_lock_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *r))
{
	return(RSA_memory_lock(r));
}

const RSA_METHOD * ASM SAVEDS RSA_PKCS1_SSLeay_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(RSA_PKCS1_SSLeay());
}

const RSA_METHOD * ASM SAVEDS RSA_null_method_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(RSA_null_method());
}

RSA * ASM SAVEDS d2i_RSAPublicKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA **a), REG(a1, const unsigned char **in), REG(d0, long len))
{
	return(d2i_RSAPublicKey(a, in, len));
}

int ASM SAVEDS i2d_RSAPublicKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *a), REG(a1, unsigned char **out))
{
	return(i2d_RSAPublicKey(a, out));
}

const ASN1_ITEM * ASM SAVEDS RSAPublicKey_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(RSAPublicKey_it());
}

RSA * ASM SAVEDS d2i_RSAPrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA **a), REG(a1, const unsigned char **in), REG(d0, long len))
{
	return(d2i_RSAPrivateKey(a, in, len));
}

int ASM SAVEDS i2d_RSAPrivateKey_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *a), REG(a1, unsigned char **out))
{
	return(i2d_RSAPrivateKey(a, out));
}

const ASN1_ITEM * ASM SAVEDS RSAPrivateKey_it_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	return(RSAPrivateKey_it());
}

int ASM SAVEDS RSA_print_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, BIO *bp), REG(a1, const RSA *r), REG(d0, int offset))
{
	return(RSA_print(bp, r, offset));
}

int ASM SAVEDS i2d_RSA_NET_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *a), REG(a1, unsigned char **pp), REG(a2, int (*cb)()), REG(d0, int sgckey))
{
	return(i2d_RSA_NET(a, pp, cb, sgckey));
}

RSA * ASM SAVEDS d2i_RSA_NET_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA **a), REG(a1, const unsigned char **pp), REG(d0, long length), REG(a2, int (*cb)()), REG(d1, int sgckey))
{
	return(d2i_RSA_NET(a, pp, length, cb, sgckey));
}

int ASM SAVEDS i2d_Netscape_RSA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *a), REG(a1, unsigned char **pp), REG(a2, int (*cb)()))
{
	return(i2d_Netscape_RSA(a, pp, cb));
}

RSA * ASM SAVEDS d2i_Netscape_RSA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA **a), REG(a1, const unsigned char **pp), REG(d0, long length), REG(a2, int (*cb)()))
{
	return(d2i_Netscape_RSA(a, pp, length, cb));
}

int ASM SAVEDS RSA_sign_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, const unsigned char *m), REG(d1, unsigned int m_length), REG(a1, unsigned char *sigret), REG(a2, unsigned int *siglen), REG(a3, RSA *rsa))
{
	return(RSA_sign(type, m, m_length, sigret, siglen, rsa));
}

int ASM SAVEDS RSA_verify_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, const unsigned char *m), REG(d1, unsigned int m_length), REG(a1, unsigned char *sigbuf), REG(d2, unsigned int siglen), REG(a2, RSA *rsa))
{
	return(RSA_verify(type, m, m_length, sigbuf, siglen, rsa));
}

int ASM SAVEDS RSA_sign_ASN1_OCTET_STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, const unsigned char *m), REG(d1, unsigned int m_length), REG(a1, unsigned char *sigret), REG(a2, unsigned int *siglen), REG(a3, RSA *rsa))
{
	return(RSA_sign_ASN1_OCTET_STRING(type, m, m_length, sigret, siglen, rsa));
}

int ASM SAVEDS RSA_verify_ASN1_OCTET_STRING_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, int type), REG(a0, const unsigned char *m), REG(d1, unsigned int m_length), REG(a1, unsigned char *sigbuf), REG(d2, unsigned int siglen), REG(a2, RSA *rsa))
{
	return(RSA_verify_ASN1_OCTET_STRING(type, m, m_length, sigbuf, siglen, rsa));
}

int ASM SAVEDS RSA_blinding_on_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *rsa), REG(a1, BN_CTX *ctx))
{
	return(RSA_blinding_on(rsa, ctx));
}

void ASM SAVEDS RSA_blinding_off_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *rsa))
{
	RSA_blinding_off(rsa);
}

int ASM SAVEDS RSA_padding_add_PKCS1_type_1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl))
{
	return(RSA_padding_add_PKCS1_type_1(to, tlen, f, fl));
}

int ASM SAVEDS RSA_padding_check_PKCS1_type_1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl), REG(d2, int rsa_len))
{
	return(RSA_padding_check_PKCS1_type_1(to, tlen, f, fl, rsa_len));
}

int ASM SAVEDS RSA_padding_add_PKCS1_type_2_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl))
{
	return(RSA_padding_add_PKCS1_type_2(to, tlen, f, fl));
}

int ASM SAVEDS RSA_padding_check_PKCS1_type_2_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl), REG(d2, int rsa_len))
{
	return(RSA_padding_check_PKCS1_type_2(to, tlen, f, fl, rsa_len));
}

int ASM SAVEDS RSA_padding_add_PKCS1_OAEP_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl), REG(a2, const unsigned char *p), REG(d2, int pl))
{
	return(RSA_padding_add_PKCS1_OAEP(to, tlen, f, fl, p, pl));
}

int ASM SAVEDS RSA_padding_check_PKCS1_OAEP_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl), REG(d2, int rsa_len), REG(a2, const unsigned char *p), REG(d3, int pl))
{
	return(RSA_padding_check_PKCS1_OAEP(to, tlen, f, fl, rsa_len, p, pl));
}

int ASM SAVEDS RSA_padding_add_SSLv23_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl))
{
	return(RSA_padding_add_SSLv23(to, tlen, f, fl));
}

int ASM SAVEDS RSA_padding_check_SSLv23_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl), REG(d2, int rsa_len))
{
	return(RSA_padding_check_SSLv23(to, tlen, f, fl, rsa_len));
}

int ASM SAVEDS RSA_padding_add_none_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl))
{
	return(RSA_padding_add_none(to, tlen, f, fl));
}

int ASM SAVEDS RSA_padding_check_none_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *to), REG(d0, int tlen), REG(a1, const unsigned char *f), REG(d1, int fl), REG(d2, int rsa_len))
{
	return(RSA_padding_check_none(to, tlen, f, fl, rsa_len));
}

int ASM SAVEDS RSA_get_ex_new_index_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(d0, long argl), REG(a0, void *argp), REG(a1, CRYPTO_EX_new *new_func), REG(a2, CRYPTO_EX_dup *dup_func), REG(a3, CRYPTO_EX_free *free_func))
{
	return(RSA_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

int ASM SAVEDS RSA_set_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *r), REG(d0, int idx), REG(a1, void *arg))
{
	return(RSA_set_ex_data(r, idx, arg));
}

void * ASM SAVEDS RSA_get_ex_data_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const RSA *r), REG(d0, int idx))
{
	return(RSA_get_ex_data(r, idx));
}

RSA * ASM SAVEDS RSAPublicKey_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *rsa))
{
	return(RSAPublicKey_dup(rsa));
}

RSA * ASM SAVEDS RSAPrivateKey_dup_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, RSA *rsa))
{
	return(RSAPrivateKey_dup(rsa));
}

void ASM SAVEDS ERR_load_RSA_strings_AmiSSL(REG(a6, __IFACE_OR_BASE))
{
	ERR_load_RSA_strings();
}

int ASM SAVEDS SHA_Init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SHA_CTX *c))
{
	return(SHA_Init(c));
}

int ASM SAVEDS SHA_Update_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SHA_CTX *c), REG(a1, const void *data), REG(d0, unsigned long len))
{
	return(SHA_Update(c, data, len));
}

int ASM SAVEDS SHA_Final_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, SHA_CTX *c))
{
	return(SHA_Final(md, c));
}

unsigned char * ASM SAVEDS SHA_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(SHA(d, n, md));
}

void ASM SAVEDS SHA_Transform_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SHA_CTX *c), REG(a1, const unsigned char *data))
{
	SHA_Transform(c, data);
}

int ASM SAVEDS SHA1_Init_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SHA_CTX *c))
{
	return(SHA1_Init(c));
}

int ASM SAVEDS SHA1_Update_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SHA_CTX *c), REG(a1, const void *data), REG(d0, unsigned long len))
{
	return(SHA1_Update(c, data, len));
}

int ASM SAVEDS SHA1_Final_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, unsigned char *md), REG(a1, SHA_CTX *c))
{
	return(SHA1_Final(md, c));
}

unsigned char * ASM SAVEDS SHA1_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, const unsigned char *d), REG(d0, unsigned long n), REG(a1, unsigned char *md))
{
	return(SHA1(d, n, md));
}

void ASM SAVEDS SHA1_Transform_AmiSSL(REG(a6, __IFACE_OR_BASE), REG(a0, SHA_CTX *c), REG(a1, const unsigned char *data))
{
	SHA1_Transform(c, data);
}
