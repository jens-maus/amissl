#include <clib/amissl_protos.h>

__asm __saveds ASN1_TYPE *ASN1_TYPE_new_AmiSSL(void)
{
	return(ASN1_TYPE_new());
}

__asm __saveds void ASN1_TYPE_free_AmiSSL(register __a0 ASN1_TYPE *a)
{
	ASN1_TYPE_free(a);
}

__asm __saveds int i2d_ASN1_TYPE_AmiSSL(register __a0 ASN1_TYPE *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_TYPE(a, pp));
}

__asm __saveds ASN1_TYPE *d2i_ASN1_TYPE_AmiSSL(register __a0 ASN1_TYPE **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_TYPE(a, pp, length));
}

__asm __saveds int ASN1_TYPE_get_AmiSSL(register __a0 ASN1_TYPE *a)
{
	return(ASN1_TYPE_get(a));
}

__asm __saveds void ASN1_TYPE_set_AmiSSL(register __a0 ASN1_TYPE *a, register __d0 int type, register __a1 void *value)
{
	ASN1_TYPE_set(a, type, value);
}

__asm __saveds ASN1_OBJECT *ASN1_OBJECT_new_AmiSSL(void)
{
	return(ASN1_OBJECT_new());
}

__asm __saveds void ASN1_OBJECT_free_AmiSSL(register __a0 ASN1_OBJECT *a)
{
	ASN1_OBJECT_free(a);
}

__asm __saveds int i2d_ASN1_OBJECT_AmiSSL(register __a0 ASN1_OBJECT *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_OBJECT(a, pp));
}

__asm __saveds ASN1_OBJECT *c2i_ASN1_OBJECT_AmiSSL(register __a0 ASN1_OBJECT **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(c2i_ASN1_OBJECT(a, pp, length));
}

__asm __saveds ASN1_OBJECT *d2i_ASN1_OBJECT_AmiSSL(register __a0 ASN1_OBJECT **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_OBJECT(a, pp, length));
}

__asm __saveds ASN1_STRING *ASN1_STRING_new_AmiSSL(void)
{
	return(ASN1_STRING_new());
}

__asm __saveds void ASN1_STRING_free_AmiSSL(register __a0 ASN1_STRING *a)
{
	ASN1_STRING_free(a);
}

__asm __saveds ASN1_STRING *ASN1_STRING_dup_AmiSSL(register __a0 ASN1_STRING *a)
{
	return(ASN1_STRING_dup(a));
}

__asm __saveds ASN1_STRING *ASN1_STRING_type_new_AmiSSL(register __d0 int type)
{
	return(ASN1_STRING_type_new(type));
}

__asm __saveds int ASN1_STRING_cmp_AmiSSL(register __a0 ASN1_STRING *a, register __a1 ASN1_STRING *b)
{
	return(ASN1_STRING_cmp(a, b));
}

__asm __saveds int ASN1_STRING_set_AmiSSL(register __a0 ASN1_STRING *str, register __a1 const void *data, register __d0 int len)
{
	return(ASN1_STRING_set(str, data, len));
}

__asm __saveds int ASN1_STRING_length_AmiSSL(register __a0 ASN1_STRING *x)
{
	return(ASN1_STRING_length(x));
}

__asm __saveds void ASN1_STRING_length_set_AmiSSL(register __a0 ASN1_STRING *x, register __d0 int n)
{
	ASN1_STRING_length_set(x, n);
}

__asm __saveds int ASN1_STRING_type_AmiSSL(register __a0 ASN1_STRING *x)
{
	return(ASN1_STRING_type(x));
}

__asm __saveds unsigned char *ASN1_STRING_data_AmiSSL(register __a0 ASN1_STRING *x)
{
	return(ASN1_STRING_data(x));
}

__asm __saveds ASN1_BIT_STRING *ASN1_BIT_STRING_new_AmiSSL(void)
{
	return(ASN1_BIT_STRING_new());
}

__asm __saveds void ASN1_BIT_STRING_free_AmiSSL(register __a0 ASN1_BIT_STRING *a)
{
	ASN1_BIT_STRING_free(a);
}

__asm __saveds int i2d_ASN1_BIT_STRING_AmiSSL(register __a0 ASN1_BIT_STRING *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_BIT_STRING(a, pp));
}

__asm __saveds int i2c_ASN1_BIT_STRING_AmiSSL(register __a0 ASN1_BIT_STRING *a, register __a1 unsigned char **pp)
{
	return(i2c_ASN1_BIT_STRING(a, pp));
}

__asm __saveds ASN1_BIT_STRING *d2i_ASN1_BIT_STRING_AmiSSL(register __a0 ASN1_BIT_STRING **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_BIT_STRING(a, pp, length));
}

__asm __saveds ASN1_BIT_STRING *c2i_ASN1_BIT_STRING_AmiSSL(register __a0 ASN1_BIT_STRING **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(c2i_ASN1_BIT_STRING(a, pp, length));
}

__asm __saveds int ASN1_BIT_STRING_set_AmiSSL(register __a0 ASN1_BIT_STRING *a, register __a1 unsigned char *d, register __d0 int length)
{
	return(ASN1_BIT_STRING_set(a, d, length));
}

__asm __saveds int ASN1_BIT_STRING_set_bit_AmiSSL(register __a0 ASN1_BIT_STRING *a, register __d0 int n, register __d1 int value)
{
	return(ASN1_BIT_STRING_set_bit(a, n, value));
}

__asm __saveds int ASN1_BIT_STRING_get_bit_AmiSSL(register __a0 ASN1_BIT_STRING *a, register __d0 int n)
{
	return(ASN1_BIT_STRING_get_bit(a, n));
}

__asm __saveds int ASN1_BIT_STRING_name_print_AmiSSL(register __a0 BIO *out, register __a1 ASN1_BIT_STRING *bs, register __a2 BIT_STRING_BITNAME *tbl, register __d0 int indent)
{
	return(ASN1_BIT_STRING_name_print(out, bs, tbl, indent));
}

__asm __saveds int ASN1_BIT_STRING_num_asc_AmiSSL(register __a0 char *name, register __a1 BIT_STRING_BITNAME *tbl)
{
	return(ASN1_BIT_STRING_num_asc(name, tbl));
}

__asm __saveds int ASN1_BIT_STRING_set_asc_AmiSSL(register __a0 ASN1_BIT_STRING *bs, register __a1 char *name, register __d0 int value, register __a2 BIT_STRING_BITNAME *tbl)
{
	return(ASN1_BIT_STRING_set_asc(bs, name, value, tbl));
}

__asm __saveds int i2d_ASN1_BOOLEAN_AmiSSL(register __d0 int a, register __a0 unsigned char **pp)
{
	return(i2d_ASN1_BOOLEAN(a, pp));
}

__asm __saveds int d2i_ASN1_BOOLEAN_AmiSSL(register __a0 int *a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_BOOLEAN(a, pp, length));
}

__asm __saveds ASN1_INTEGER *ASN1_INTEGER_new_AmiSSL(void)
{
	return(ASN1_INTEGER_new());
}

__asm __saveds void ASN1_INTEGER_free_AmiSSL(register __a0 ASN1_INTEGER *a)
{
	ASN1_INTEGER_free(a);
}

__asm __saveds int i2d_ASN1_INTEGER_AmiSSL(register __a0 ASN1_INTEGER *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_INTEGER(a, pp));
}

__asm __saveds int i2c_ASN1_INTEGER_AmiSSL(register __a0 ASN1_INTEGER *a, register __a1 unsigned char **pp)
{
	return(i2c_ASN1_INTEGER(a, pp));
}

__asm __saveds ASN1_INTEGER *d2i_ASN1_INTEGER_AmiSSL(register __a0 ASN1_INTEGER **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_INTEGER(a, pp, length));
}

__asm __saveds ASN1_INTEGER *c2i_ASN1_INTEGER_AmiSSL(register __a0 ASN1_INTEGER **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(c2i_ASN1_INTEGER(a, pp, length));
}

__asm __saveds ASN1_INTEGER *d2i_ASN1_UINTEGER_AmiSSL(register __a0 ASN1_INTEGER **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_UINTEGER(a, pp, length));
}

__asm __saveds ASN1_INTEGER *ASN1_INTEGER_dup_AmiSSL(register __a0 ASN1_INTEGER *x)
{
	return(ASN1_INTEGER_dup(x));
}

__asm __saveds int ASN1_INTEGER_cmp_AmiSSL(register __a0 ASN1_INTEGER *x, register __a1 ASN1_INTEGER *y)
{
	return(ASN1_INTEGER_cmp(x, y));
}

__asm __saveds ASN1_ENUMERATED *ASN1_ENUMERATED_new_AmiSSL(void)
{
	return(ASN1_ENUMERATED_new());
}

__asm __saveds void ASN1_ENUMERATED_free_AmiSSL(register __a0 ASN1_ENUMERATED *a)
{
	ASN1_ENUMERATED_free(a);
}

__asm __saveds int i2d_ASN1_ENUMERATED_AmiSSL(register __a0 ASN1_ENUMERATED *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_ENUMERATED(a, pp));
}

__asm __saveds ASN1_ENUMERATED *d2i_ASN1_ENUMERATED_AmiSSL(register __a0 ASN1_ENUMERATED **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_ENUMERATED(a, pp, length));
}

__asm __saveds int ASN1_UTCTIME_check_AmiSSL(register __a0 ASN1_UTCTIME *a)
{
	return(ASN1_UTCTIME_check(a));
}

__asm __saveds ASN1_UTCTIME *ASN1_UTCTIME_set_AmiSSL(register __a0 ASN1_UTCTIME *s, register __d0 time_t t)
{
	return(ASN1_UTCTIME_set(s, t));
}

__asm __saveds int ASN1_UTCTIME_set_string_AmiSSL(register __a0 ASN1_UTCTIME *s, register __a1 char *str)
{
	return(ASN1_UTCTIME_set_string(s, str));
}

__asm __saveds int ASN1_UTCTIME_cmp_time_t_AmiSSL(register __a0 const ASN1_UTCTIME *s, register __d0 time_t t)
{
	return(ASN1_UTCTIME_cmp_time_t(s, t));
}

__asm __saveds int ASN1_GENERALIZEDTIME_check_AmiSSL(register __a0 ASN1_GENERALIZEDTIME *a)
{
	return(ASN1_GENERALIZEDTIME_check(a));
}

__asm __saveds ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_set_AmiSSL(register __a0 ASN1_GENERALIZEDTIME *s, register __d0 time_t t)
{
	return(ASN1_GENERALIZEDTIME_set(s, t));
}

__asm __saveds int ASN1_GENERALIZEDTIME_set_string_AmiSSL(register __a0 ASN1_GENERALIZEDTIME *s, register __a1 char *str)
{
	return(ASN1_GENERALIZEDTIME_set_string(s, str));
}

__asm __saveds ASN1_OCTET_STRING *ASN1_OCTET_STRING_new_AmiSSL(void)
{
	return(ASN1_OCTET_STRING_new());
}

__asm __saveds void ASN1_OCTET_STRING_free_AmiSSL(register __a0 ASN1_OCTET_STRING *a)
{
	ASN1_OCTET_STRING_free(a);
}

__asm __saveds int i2d_ASN1_OCTET_STRING_AmiSSL(register __a0 ASN1_OCTET_STRING *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_OCTET_STRING(a, pp));
}

__asm __saveds ASN1_OCTET_STRING *d2i_ASN1_OCTET_STRING_AmiSSL(register __a0 ASN1_OCTET_STRING **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_OCTET_STRING(a, pp, length));
}

__asm __saveds ASN1_OCTET_STRING *ASN1_OCTET_STRING_dup_AmiSSL(register __a0 ASN1_OCTET_STRING *a)
{
	return(ASN1_OCTET_STRING_dup(a));
}

__asm __saveds int ASN1_OCTET_STRING_cmp_AmiSSL(register __a0 ASN1_OCTET_STRING *a, register __a1 ASN1_OCTET_STRING *b)
{
	return(ASN1_OCTET_STRING_cmp(a, b));
}

__asm __saveds int ASN1_OCTET_STRING_set_AmiSSL(register __a0 ASN1_OCTET_STRING *str, register __a1 unsigned char *data, register __d0 int len)
{
	return(ASN1_OCTET_STRING_set(str, data, len));
}

__asm __saveds ASN1_VISIBLESTRING *ASN1_VISIBLESTRING_new_AmiSSL(void)
{
	return(ASN1_VISIBLESTRING_new());
}

__asm __saveds void ASN1_VISIBLESTRING_free_AmiSSL(register __a0 ASN1_VISIBLESTRING *a)
{
	ASN1_VISIBLESTRING_free(a);
}

__asm __saveds int i2d_ASN1_VISIBLESTRING_AmiSSL(register __a0 ASN1_VISIBLESTRING *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_VISIBLESTRING(a, pp));
}

__asm __saveds ASN1_VISIBLESTRING *d2i_ASN1_VISIBLESTRING_AmiSSL(register __a0 ASN1_VISIBLESTRING **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_VISIBLESTRING(a, pp, length));
}

__asm __saveds ASN1_UTF8STRING *ASN1_UTF8STRING_new_AmiSSL(void)
{
	return(ASN1_UTF8STRING_new());
}

__asm __saveds void ASN1_UTF8STRING_free_AmiSSL(register __a0 ASN1_UTF8STRING *a)
{
	ASN1_UTF8STRING_free(a);
}

__asm __saveds int i2d_ASN1_UTF8STRING_AmiSSL(register __a0 ASN1_UTF8STRING *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_UTF8STRING(a, pp));
}

__asm __saveds ASN1_UTF8STRING *d2i_ASN1_UTF8STRING_AmiSSL(register __a0 ASN1_UTF8STRING **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_UTF8STRING(a, pp, length));
}

__asm __saveds ASN1_NULL *ASN1_NULL_new_AmiSSL(void)
{
	return(ASN1_NULL_new());
}

__asm __saveds void ASN1_NULL_free_AmiSSL(register __a0 ASN1_NULL *a)
{
	ASN1_NULL_free(a);
}

__asm __saveds int i2d_ASN1_NULL_AmiSSL(register __a0 ASN1_NULL *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_NULL(a, pp));
}

__asm __saveds ASN1_NULL *d2i_ASN1_NULL_AmiSSL(register __a0 ASN1_NULL **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_NULL(a, pp, length));
}

__asm __saveds ASN1_BMPSTRING *ASN1_BMPSTRING_new_AmiSSL(void)
{
	return(ASN1_BMPSTRING_new());
}

__asm __saveds void ASN1_BMPSTRING_free_AmiSSL(register __a0 ASN1_BMPSTRING *a)
{
	ASN1_BMPSTRING_free(a);
}

__asm __saveds int i2d_ASN1_BMPSTRING_AmiSSL(register __a0 ASN1_BMPSTRING *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_BMPSTRING(a, pp));
}

__asm __saveds ASN1_BMPSTRING *d2i_ASN1_BMPSTRING_AmiSSL(register __a0 ASN1_BMPSTRING **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_BMPSTRING(a, pp, length));
}

__asm __saveds int UTF8_getc_AmiSSL(register __a0 const unsigned char *str, register __d0 int len, register __a1 unsigned long *val)
{
	return(UTF8_getc(str, len, val));
}

__asm __saveds int UTF8_putc_AmiSSL(register __a0 unsigned char *str, register __d0 int len, register __d1 unsigned long value)
{
	return(UTF8_putc(str, len, value));
}

__asm __saveds int i2d_ASN1_PRINTABLE_AmiSSL(register __a0 ASN1_STRING *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_PRINTABLE(a, pp));
}

__asm __saveds ASN1_STRING *d2i_ASN1_PRINTABLE_AmiSSL(register __a0 ASN1_STRING **a, register __a1 unsigned char **pp, register __d0 long l)
{
	return(d2i_ASN1_PRINTABLE(a, pp, l));
}

__asm __saveds ASN1_PRINTABLESTRING *ASN1_PRINTABLESTRING_new_AmiSSL(void)
{
	return(ASN1_PRINTABLESTRING_new());
}

__asm __saveds void ASN1_PRINTABLESTRING_free_AmiSSL(register __a0 ASN1_PRINTABLESTRING *a)
{
	ASN1_PRINTABLESTRING_free(a);
}

__asm __saveds ASN1_PRINTABLESTRING *d2i_ASN1_PRINTABLESTRING_AmiSSL(register __a0 ASN1_PRINTABLESTRING **a, register __a1 unsigned char **pp, register __d0 long l)
{
	return(d2i_ASN1_PRINTABLESTRING(a, pp, l));
}

__asm __saveds int i2d_ASN1_PRINTABLESTRING_AmiSSL(register __a0 ASN1_PRINTABLESTRING *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_PRINTABLESTRING(a, pp));
}

__asm __saveds ASN1_STRING *DIRECTORYSTRING_new_AmiSSL(void)
{
	return(DIRECTORYSTRING_new());
}

__asm __saveds void DIRECTORYSTRING_free_AmiSSL(register __a0 ASN1_STRING *a)
{
	DIRECTORYSTRING_free(a);
}

__asm __saveds int i2d_DIRECTORYSTRING_AmiSSL(register __a0 ASN1_STRING *a, register __a1 unsigned char **pp)
{
	return(i2d_DIRECTORYSTRING(a, pp));
}

__asm __saveds ASN1_STRING *d2i_DIRECTORYSTRING_AmiSSL(register __a0 ASN1_STRING **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_DIRECTORYSTRING(a, pp, length));
}

__asm __saveds ASN1_STRING *DISPLAYTEXT_new_AmiSSL(void)
{
	return(DISPLAYTEXT_new());
}

__asm __saveds void DISPLAYTEXT_free_AmiSSL(register __a0 ASN1_STRING *a)
{
	DISPLAYTEXT_free(a);
}

__asm __saveds int i2d_DISPLAYTEXT_AmiSSL(register __a0 ASN1_STRING *a, register __a1 unsigned char **pp)
{
	return(i2d_DISPLAYTEXT(a, pp));
}

__asm __saveds ASN1_STRING *d2i_DISPLAYTEXT_AmiSSL(register __a0 ASN1_STRING **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_DISPLAYTEXT(a, pp, length));
}

__asm __saveds ASN1_T61STRING *ASN1_T61STRING_new_AmiSSL(void)
{
	return(ASN1_T61STRING_new());
}

__asm __saveds void ASN1_T61STRING_free_AmiSSL(register __a0 ASN1_IA5STRING *a)
{
	ASN1_T61STRING_free(a);
}

__asm __saveds ASN1_T61STRING *d2i_ASN1_T61STRING_AmiSSL(register __a0 ASN1_T61STRING **a, register __a1 unsigned char **pp, register __d0 long l)
{
	return(d2i_ASN1_T61STRING(a, pp, l));
}

__asm __saveds ASN1_IA5STRING *ASN1_IA5STRING_new_AmiSSL(void)
{
	return(ASN1_IA5STRING_new());
}

__asm __saveds void ASN1_IA5STRING_free_AmiSSL(register __a0 ASN1_IA5STRING *a)
{
	ASN1_IA5STRING_free(a);
}

__asm __saveds int i2d_ASN1_IA5STRING_AmiSSL(register __a0 ASN1_IA5STRING *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_IA5STRING(a, pp));
}

__asm __saveds ASN1_IA5STRING *d2i_ASN1_IA5STRING_AmiSSL(register __a0 ASN1_IA5STRING **a, register __a1 unsigned char **pp, register __d0 long l)
{
	return(d2i_ASN1_IA5STRING(a, pp, l));
}

__asm __saveds ASN1_UTCTIME *ASN1_UTCTIME_new_AmiSSL(void)
{
	return(ASN1_UTCTIME_new());
}

__asm __saveds void ASN1_UTCTIME_free_AmiSSL(register __a0 ASN1_UTCTIME *a)
{
	ASN1_UTCTIME_free(a);
}

__asm __saveds int i2d_ASN1_UTCTIME_AmiSSL(register __a0 ASN1_UTCTIME *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_UTCTIME(a, pp));
}

__asm __saveds ASN1_UTCTIME *d2i_ASN1_UTCTIME_AmiSSL(register __a0 ASN1_UTCTIME **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_UTCTIME(a, pp, length));
}

__asm __saveds ASN1_GENERALIZEDTIME *ASN1_GENERALIZEDTIME_new_AmiSSL(void)
{
	return(ASN1_GENERALIZEDTIME_new());
}

__asm __saveds void ASN1_GENERALIZEDTIME_free_AmiSSL(register __a0 ASN1_GENERALIZEDTIME *a)
{
	ASN1_GENERALIZEDTIME_free(a);
}

__asm __saveds int i2d_ASN1_GENERALIZEDTIME_AmiSSL(register __a0 ASN1_GENERALIZEDTIME *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_GENERALIZEDTIME(a, pp));
}

__asm __saveds ASN1_GENERALIZEDTIME *d2i_ASN1_GENERALIZEDTIME_AmiSSL(register __a0 ASN1_GENERALIZEDTIME **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_GENERALIZEDTIME(a, pp, length));
}

__asm __saveds ASN1_TIME *ASN1_TIME_new_AmiSSL(void)
{
	return(ASN1_TIME_new());
}

__asm __saveds void ASN1_TIME_free_AmiSSL(register __a0 ASN1_TIME *a)
{
	ASN1_TIME_free(a);
}

__asm __saveds int i2d_ASN1_TIME_AmiSSL(register __a0 ASN1_TIME *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_TIME(a, pp));
}

__asm __saveds ASN1_TIME *d2i_ASN1_TIME_AmiSSL(register __a0 ASN1_TIME **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_TIME(a, pp, length));
}

__asm __saveds ASN1_TIME *ASN1_TIME_set_AmiSSL(register __a0 ASN1_TIME *s, register __d0 time_t t)
{
	return(ASN1_TIME_set(s, t));
}

__asm __saveds int i2d_ASN1_SET_AmiSSL(register __a0 STACK *a, register __a1 unsigned char **pp, register __a2 int (*func)(), register __d0 int ex_tag, register __d1 int ex_class, register __d2 int is_set)
{
	return(i2d_ASN1_SET(a, pp, func, ex_tag, ex_class, is_set));
}

__asm __saveds STACK *d2i_ASN1_SET_AmiSSL(register __a0 STACK **a, register __a1 unsigned char **pp, register __d0 long length, register __a2 char *(*func)(), register __a3 void (*free_func)(void *), register __d1 int ex_tag, register __d2 int ex_class)
{
	return(d2i_ASN1_SET(a, pp, length, func, free_func, ex_tag, ex_class));
}

__asm __saveds int i2a_ASN1_INTEGER_AmiSSL(register __a0 BIO *bp, register __a1 ASN1_INTEGER *a)
{
	return(i2a_ASN1_INTEGER(bp, a));
}

__asm __saveds int a2i_ASN1_INTEGER_AmiSSL(register __a0 BIO *bp, register __a1 ASN1_INTEGER *bs, register __a2 char *buf, register __d0 int size)
{
	return(a2i_ASN1_INTEGER(bp, bs, buf, size));
}

__asm __saveds int i2a_ASN1_ENUMERATED_AmiSSL(register __a0 BIO *bp, register __a1 ASN1_ENUMERATED *a)
{
	return(i2a_ASN1_ENUMERATED(bp, a));
}

__asm __saveds int a2i_ASN1_ENUMERATED_AmiSSL(register __a0 BIO *bp, register __a1 ASN1_ENUMERATED *bs, register __a2 char *buf, register __d0 int size)
{
	return(a2i_ASN1_ENUMERATED(bp, bs, buf, size));
}

__asm __saveds int i2a_ASN1_OBJECT_AmiSSL(register __a0 BIO *bp, register __a1 ASN1_OBJECT *a)
{
	return(i2a_ASN1_OBJECT(bp, a));
}

__asm __saveds int a2i_ASN1_STRING_AmiSSL(register __a0 BIO *bp, register __a1 ASN1_STRING *bs, register __a2 char *buf, register __d0 int size)
{
	return(a2i_ASN1_STRING(bp, bs, buf, size));
}

__asm __saveds int i2a_ASN1_STRING_AmiSSL(register __a0 BIO *bp, register __a1 ASN1_STRING *a, register __d0 int type)
{
	return(i2a_ASN1_STRING(bp, a, type));
}

__asm __saveds int i2t_ASN1_OBJECT_AmiSSL(register __a0 char *buf, register __d0 int buf_len, register __a1 ASN1_OBJECT *a)
{
	return(i2t_ASN1_OBJECT(buf, buf_len, a));
}

__asm __saveds int a2d_ASN1_OBJECT_AmiSSL(register __a0 unsigned char *out, register __d0 int olen, register __a1 const char *buf, register __d1 int num)
{
	return(a2d_ASN1_OBJECT(out, olen, buf, num));
}

__asm __saveds ASN1_OBJECT *ASN1_OBJECT_create_AmiSSL(register __d0 int nid, register __a0 unsigned char *data, register __d1 int len, register __a1 char *sn, register __a2 char *ln)
{
	return(ASN1_OBJECT_create(nid, data, len, sn, ln));
}

__asm __saveds int ASN1_INTEGER_set_AmiSSL(register __a0 ASN1_INTEGER *a, register __d0 long v)
{
	return(ASN1_INTEGER_set(a, v));
}

__asm __saveds long ASN1_INTEGER_get_AmiSSL(register __a0 ASN1_INTEGER *a)
{
	return(ASN1_INTEGER_get(a));
}

__asm __saveds ASN1_INTEGER *BN_to_ASN1_INTEGER_AmiSSL(register __a0 BIGNUM *bn, register __a1 ASN1_INTEGER *ai)
{
	return(BN_to_ASN1_INTEGER(bn, ai));
}

__asm __saveds BIGNUM *ASN1_INTEGER_to_BN_AmiSSL(register __a0 ASN1_INTEGER *ai, register __a1 BIGNUM *bn)
{
	return(ASN1_INTEGER_to_BN(ai, bn));
}

__asm __saveds int ASN1_ENUMERATED_set_AmiSSL(register __a0 ASN1_ENUMERATED *a, register __d0 long v)
{
	return(ASN1_ENUMERATED_set(a, v));
}

__asm __saveds long ASN1_ENUMERATED_get_AmiSSL(register __a0 ASN1_ENUMERATED *a)
{
	return(ASN1_ENUMERATED_get(a));
}

__asm __saveds ASN1_ENUMERATED *BN_to_ASN1_ENUMERATED_AmiSSL(register __a0 BIGNUM *bn, register __a1 ASN1_ENUMERATED *ai)
{
	return(BN_to_ASN1_ENUMERATED(bn, ai));
}

__asm __saveds BIGNUM *ASN1_ENUMERATED_to_BN_AmiSSL(register __a0 ASN1_ENUMERATED *ai, register __a1 BIGNUM *bn)
{
	return(ASN1_ENUMERATED_to_BN(ai, bn));
}

__asm __saveds int ASN1_PRINTABLE_type_AmiSSL(register __a0 unsigned char *s, register __d0 int max)
{
	return(ASN1_PRINTABLE_type(s, max));
}

__asm __saveds int i2d_ASN1_bytes_AmiSSL(register __a0 ASN1_STRING *a, register __a1 unsigned char **pp, register __d0 int tag, register __d1 int xclass)
{
	return(i2d_ASN1_bytes(a, pp, tag, xclass));
}

__asm __saveds ASN1_STRING *d2i_ASN1_bytes_AmiSSL(register __a0 ASN1_STRING **a, register __a1 unsigned char **pp, register __d0 long length, register __d1 int Ptag, register __d2 int Pclass)
{
	return(d2i_ASN1_bytes(a, pp, length, Ptag, Pclass));
}

__asm __saveds ASN1_STRING *d2i_ASN1_type_bytes_AmiSSL(register __a0 ASN1_STRING **a, register __a1 unsigned char **pp, register __d0 long length, register __d1 int type)
{
	return(d2i_ASN1_type_bytes(a, pp, length, type));
}

__asm __saveds int asn1_Finish_AmiSSL(register __a0 ASN1_CTX *c)
{
	return(asn1_Finish(c));
}

__asm __saveds int ASN1_get_object_AmiSSL(register __a0 unsigned char **pp, register __a1 long *plength, register __a2 int *ptag, register __a3 int *pclass, register __d0 long omax)
{
	return(ASN1_get_object(pp, plength, ptag, pclass, omax));
}

__asm __saveds int ASN1_check_infinite_end_AmiSSL(register __a0 unsigned char **p, register __d0 long len)
{
	return(ASN1_check_infinite_end(p, len));
}

__asm __saveds void ASN1_put_object_AmiSSL(register __a0 unsigned char **pp, register __d0 int constructed, register __d1 int length, register __d2 int tag, register __d3 int xclass)
{
	ASN1_put_object(pp, constructed, length, tag, xclass);
}

__asm __saveds int ASN1_object_size_AmiSSL(register __d0 int constructed, register __d1 int length, register __d2 int tag)
{
	return(ASN1_object_size(constructed, length, tag));
}

__asm __saveds char *ASN1_dup_AmiSSL(register __a0 int (*i2d)(), register __a1 char *(*d2i)(), register __a2 char *x)
{
	return(ASN1_dup(i2d, d2i, x));
}

__asm __saveds int ASN1_STRING_to_UTF8_AmiSSL(register __a0 unsigned char **out, register __a1 ASN1_STRING *in)
{
	return(ASN1_STRING_to_UTF8(out, in));
}

__asm __saveds char *ASN1_d2i_bio_AmiSSL(register __a0 char *(*xnew)(), register __a1 char *(*d2i)(), register __a2 BIO *bp, register __a3 unsigned char **x)
{
	return(ASN1_d2i_bio(xnew, d2i, bp, x));
}

__asm __saveds int ASN1_i2d_bio_AmiSSL(register __a0 int (*i2d)(), register __a1 BIO *out, register __a2 unsigned char *x)
{
	return(ASN1_i2d_bio(i2d, out, x));
}

__asm __saveds int ASN1_UTCTIME_print_AmiSSL(register __a0 BIO *fp, register __a1 ASN1_UTCTIME *a)
{
	return(ASN1_UTCTIME_print(fp, a));
}

__asm __saveds int ASN1_GENERALIZEDTIME_print_AmiSSL(register __a0 BIO *fp, register __a1 ASN1_GENERALIZEDTIME *a)
{
	return(ASN1_GENERALIZEDTIME_print(fp, a));
}

__asm __saveds int ASN1_TIME_print_AmiSSL(register __a0 BIO *fp, register __a1 ASN1_TIME *a)
{
	return(ASN1_TIME_print(fp, a));
}

__asm __saveds int ASN1_STRING_print_AmiSSL(register __a0 BIO *bp, register __a1 ASN1_STRING *v)
{
	return(ASN1_STRING_print(bp, v));
}

__asm __saveds int ASN1_STRING_print_ex_AmiSSL(register __a0 BIO *out, register __a1 ASN1_STRING *str, register __d0 unsigned long flags)
{
	return(ASN1_STRING_print_ex(out, str, flags));
}

__asm __saveds int ASN1_parse_AmiSSL(register __a0 BIO *bp, register __a1 unsigned char *pp, register __d0 long len, register __d1 int indent)
{
	return(ASN1_parse(bp, pp, len, indent));
}

__asm __saveds int ASN1_parse_dump_AmiSSL(register __a0 BIO *bp, register __a1 unsigned char *pp, register __d0 long len, register __d1 int indent, register __d2 int dump)
{
	return(ASN1_parse_dump(bp, pp, len, indent, dump));
}

__asm __saveds const char *ASN1_tag2str_AmiSSL(register __d0 int tag)
{
	return(ASN1_tag2str(tag));
}

__asm __saveds int i2d_ASN1_HEADER_AmiSSL(register __a0 ASN1_HEADER *a, register __a1 unsigned char **pp)
{
	return(i2d_ASN1_HEADER(a, pp));
}

__asm __saveds ASN1_HEADER *d2i_ASN1_HEADER_AmiSSL(register __a0 ASN1_HEADER **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ASN1_HEADER(a, pp, length));
}

__asm __saveds ASN1_HEADER *ASN1_HEADER_new_AmiSSL(void)
{
	return(ASN1_HEADER_new());
}

__asm __saveds void ASN1_HEADER_free_AmiSSL(register __a0 ASN1_HEADER *a)
{
	ASN1_HEADER_free(a);
}

__asm __saveds int ASN1_UNIVERSALSTRING_to_string_AmiSSL(register __a0 ASN1_UNIVERSALSTRING *s)
{
	return(ASN1_UNIVERSALSTRING_to_string(s));
}

__asm __saveds ASN1_METHOD *X509_asn1_meth_AmiSSL(void)
{
	return(X509_asn1_meth());
}

__asm __saveds ASN1_METHOD *RSAPrivateKey_asn1_meth_AmiSSL(void)
{
	return(RSAPrivateKey_asn1_meth());
}

__asm __saveds ASN1_METHOD *ASN1_IA5STRING_asn1_meth_AmiSSL(void)
{
	return(ASN1_IA5STRING_asn1_meth());
}

__asm __saveds ASN1_METHOD *ASN1_BIT_STRING_asn1_meth_AmiSSL(void)
{
	return(ASN1_BIT_STRING_asn1_meth());
}

__asm __saveds int ASN1_TYPE_set_octetstring_AmiSSL(register __a0 ASN1_TYPE *a, register __a1 unsigned char *data, register __d0 int len)
{
	return(ASN1_TYPE_set_octetstring(a, data, len));
}

__asm __saveds int ASN1_TYPE_get_octetstring_AmiSSL(register __a0 ASN1_TYPE *a, register __a1 unsigned char *data, register __d0 int max_len)
{
	return(ASN1_TYPE_get_octetstring(a, data, max_len));
}

__asm __saveds int ASN1_TYPE_set_int_octetstring_AmiSSL(register __a0 ASN1_TYPE *a, register __d0 long num, register __a1 unsigned char *data, register __d1 int len)
{
	return(ASN1_TYPE_set_int_octetstring(a, num, data, len));
}

__asm __saveds int ASN1_TYPE_get_int_octetstring_AmiSSL(register __a0 ASN1_TYPE *a, register __a1 long *num, register __a2 unsigned char *data, register __d0 int max_len)
{
	return(ASN1_TYPE_get_int_octetstring(a, num, data, max_len));
}

__asm __saveds STACK *ASN1_seq_unpack_AmiSSL(register __a0 unsigned char *buf, register __d0 int len, register __a1 char *(*d2i)(), register __a2 void (*free_func)(void *))
{
	return(ASN1_seq_unpack(buf, len, d2i, free_func));
}

__asm __saveds unsigned char *ASN1_seq_pack_AmiSSL(register __a0 STACK *safes, register __a1 int (*i2d)(), register __a2 unsigned char **buf, register __a3 int *len)
{
	return(ASN1_seq_pack(safes, i2d, buf, len));
}

__asm __saveds void *ASN1_unpack_string_AmiSSL(register __a0 ASN1_STRING *oct, register __a1 char *(*d2i)())
{
	return(ASN1_unpack_string(oct, d2i));
}

__asm __saveds ASN1_STRING *ASN1_pack_string_AmiSSL(register __a0 void *obj, register __a1 int (*i2d)(), register __a2 ASN1_OCTET_STRING **oct)
{
	return(ASN1_pack_string(obj, i2d, oct));
}

__asm __saveds void ASN1_STRING_set_default_mask_AmiSSL(register __d0 unsigned long mask)
{
	ASN1_STRING_set_default_mask(mask);
}

__asm __saveds int ASN1_STRING_set_default_mask_asc_AmiSSL(register __a0 char *p)
{
	return(ASN1_STRING_set_default_mask_asc(p));
}

__asm __saveds unsigned long ASN1_STRING_get_default_mask_AmiSSL(void)
{
	return(ASN1_STRING_get_default_mask());
}

__asm __saveds int ASN1_mbstring_copy_AmiSSL(register __a0 ASN1_STRING **out, register __a1 const unsigned char *in, register __d0 int len, register __d1 int inform, register __d2 unsigned long mask)
{
	return(ASN1_mbstring_copy(out, in, len, inform, mask));
}

__asm __saveds int ASN1_mbstring_ncopy_AmiSSL(register __a0 ASN1_STRING **out, register __a1 const unsigned char *in, register __d0 int len, register __d1 int inform, register __d2 unsigned long mask, register __d3 long minsize, register __d4 long maxsize)
{
	return(ASN1_mbstring_ncopy(out, in, len, inform, mask, minsize, maxsize));
}

__asm __saveds ASN1_STRING *ASN1_STRING_set_by_NID_AmiSSL(register __a0 ASN1_STRING **out, register __a1 const unsigned char *in, register __d0 int inlen, register __d1 int inform, register __d2 int nid)
{
	return(ASN1_STRING_set_by_NID(out, in, inlen, inform, nid));
}

__asm __saveds ASN1_STRING_TABLE *ASN1_STRING_TABLE_get_AmiSSL(register __d0 int nid)
{
	return(ASN1_STRING_TABLE_get(nid));
}

__asm __saveds int ASN1_STRING_TABLE_add_AmiSSL(register __d0 int a, register __d1 long b, register __d2 long c, register __d3 unsigned long d, register __d4 unsigned long e)
{
	return(ASN1_STRING_TABLE_add(a, b, c, d, e));
}

__asm __saveds void ASN1_STRING_TABLE_cleanup_AmiSSL(void)
{
	ASN1_STRING_TABLE_cleanup();
}

__asm __saveds void ERR_load_ASN1_strings_AmiSSL(void)
{
	ERR_load_ASN1_strings();
}

__asm __saveds int asn1_GetSequence_AmiSSL(register __a0 ASN1_CTX *c, register __a1 long *length)
{
	return(asn1_GetSequence(c, length));
}

__asm __saveds void asn1_add_error_AmiSSL(register __a0 unsigned char *address, register __d0 int offset)
{
	asn1_add_error(address, offset);
}

__asm __saveds size_t BIO_ctrl_pending_AmiSSL(register __a0 BIO *b)
{
	return(BIO_ctrl_pending(b));
}

__asm __saveds size_t BIO_ctrl_wpending_AmiSSL(register __a0 BIO *b)
{
	return(BIO_ctrl_wpending(b));
}

__asm __saveds size_t BIO_ctrl_get_write_guarantee_AmiSSL(register __a0 BIO *b)
{
	return(BIO_ctrl_get_write_guarantee(b));
}

__asm __saveds size_t BIO_ctrl_get_read_request_AmiSSL(register __a0 BIO *b)
{
	return(BIO_ctrl_get_read_request(b));
}

__asm __saveds int BIO_ctrl_reset_read_request_AmiSSL(register __a0 BIO *b)
{
	return(BIO_ctrl_reset_read_request(b));
}

__asm __saveds int BIO_set_ex_data_AmiSSL(register __a0 BIO *bio, register __d0 int idx, register __a1 void *data)
{
	return(BIO_set_ex_data(bio, idx, data));
}

__asm __saveds void *BIO_get_ex_data_AmiSSL(register __a0 BIO *bio, register __d0 int idx)
{
	return(BIO_get_ex_data(bio, idx));
}

__asm __saveds int BIO_get_ex_new_index_AmiSSL(register __d0 long argl, register __a0 void *argp, register __a1 CRYPTO_EX_new *new_func, register __a2 CRYPTO_EX_dup *dup_func, register __a3 CRYPTO_EX_free *free_func)
{
	return(BIO_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

__asm __saveds unsigned long BIO_number_read_AmiSSL(register __a0 BIO *bio)
{
	return(BIO_number_read(bio));
}

__asm __saveds unsigned long BIO_number_written_AmiSSL(register __a0 BIO *bio)
{
	return(BIO_number_written(bio));
}

__asm __saveds BIO_METHOD *BIO_s_file_AmiSSL(void)
{
	return(BIO_s_file());
}

__asm __saveds BIO *BIO_new_file_AmiSSL(register __a0 const char *filename, register __a1 const char *mode)
{
	return(BIO_new_file(filename, mode));
}

__asm __saveds BIO *BIO_new_fp_amiga_AmiSSL(register __d0 BPTR stream, register __d1 int close_flag)
{
	return(BIO_new_fp_amiga(stream, close_flag));
}

__asm __saveds BIO *BIO_new_AmiSSL(register __a0 BIO_METHOD *type)
{
	return(BIO_new(type));
}

__asm __saveds int BIO_set_AmiSSL(register __a0 BIO *a, register __a1 BIO_METHOD *type)
{
	return(BIO_set(a, type));
}

__asm __saveds int BIO_free_AmiSSL(register __a0 BIO *a)
{
	return(BIO_free(a));
}

__asm __saveds void BIO_vfree_AmiSSL(register __a0 BIO *a)
{
	BIO_vfree(a);
}

__asm __saveds int BIO_read_AmiSSL(register __a0 BIO *b, register __a1 void *data, register __d0 int len)
{
	return(BIO_read(b, data, len));
}

__asm __saveds int BIO_gets_AmiSSL(register __a0 BIO *bp, register __a1 char *buf, register __d0 int size)
{
	return(BIO_gets(bp, buf, size));
}

__asm __saveds int BIO_write_AmiSSL(register __a0 BIO *b, register __a1 const void *data, register __d0 int len)
{
	return(BIO_write(b, data, len));
}

__asm __saveds int BIO_puts_AmiSSL(register __a0 BIO *bp, register __a1 const char *buf)
{
	return(BIO_puts(bp, buf));
}

__asm __saveds long BIO_ctrl_AmiSSL(register __a0 BIO *bp, register __d0 int cmd, register __d1 long larg, register __a1 void *parg)
{
	return(BIO_ctrl(bp, cmd, larg, parg));
}

__asm __saveds long BIO_callback_ctrl_AmiSSL(register __a0 BIO *b, register __d0 int cmd, register __a1 void (*fp)(struct bio_st *, int, const char *, int, long, long))
{
	return(BIO_callback_ctrl(b, cmd, fp));
}

__asm __saveds char *BIO_ptr_ctrl_AmiSSL(register __a0 BIO *bp, register __d0 int cmd, register __d1 long larg)
{
	return(BIO_ptr_ctrl(bp, cmd, larg));
}

__asm __saveds long BIO_int_ctrl_AmiSSL(register __a0 BIO *bp, register __d0 int cmd, register __d1 long larg, register __d2 int iarg)
{
	return(BIO_int_ctrl(bp, cmd, larg, iarg));
}

__asm __saveds BIO *BIO_push_AmiSSL(register __a0 BIO *b, register __a1 BIO *append)
{
	return(BIO_push(b, append));
}

__asm __saveds BIO *BIO_pop_AmiSSL(register __a0 BIO *b)
{
	return(BIO_pop(b));
}

__asm __saveds void BIO_free_all_AmiSSL(register __a0 BIO *a)
{
	BIO_free_all(a);
}

__asm __saveds BIO *BIO_find_type_AmiSSL(register __a0 BIO *b, register __d0 int bio_type)
{
	return(BIO_find_type(b, bio_type));
}

__asm __saveds BIO *BIO_next_AmiSSL(register __a0 BIO *b)
{
	return(BIO_next(b));
}

__asm __saveds BIO *BIO_get_retry_BIO_AmiSSL(register __a0 BIO *bio, register __a1 int *reason)
{
	return(BIO_get_retry_BIO(bio, reason));
}

__asm __saveds int BIO_get_retry_reason_AmiSSL(register __a0 BIO *bio)
{
	return(BIO_get_retry_reason(bio));
}

__asm __saveds BIO *BIO_dup_chain_AmiSSL(register __a0 BIO *in)
{
	return(BIO_dup_chain(in));
}

__asm __saveds int BIO_nread0_AmiSSL(register __a0 BIO *bio, register __a1 char **buf)
{
	return(BIO_nread0(bio, buf));
}

__asm __saveds int BIO_nread_AmiSSL(register __a0 BIO *bio, register __a1 char **buf, register __d0 int num)
{
	return(BIO_nread(bio, buf, num));
}

__asm __saveds int BIO_nwrite0_AmiSSL(register __a0 BIO *bio, register __a1 char **buf)
{
	return(BIO_nwrite0(bio, buf));
}

__asm __saveds int BIO_nwrite_AmiSSL(register __a0 BIO *bio, register __a1 char **buf, register __d0 int num)
{
	return(BIO_nwrite(bio, buf, num));
}

__asm __saveds long BIO_debug_callback_AmiSSL(register __a0 BIO *bio, register __d0 int cmd, register __a1 const char *argp, register __d1 int argi, register __d2 long argl, register __d3 long ret)
{
	return(BIO_debug_callback(bio, cmd, argp, argi, argl, ret));
}

__asm __saveds BIO_METHOD *BIO_s_mem_AmiSSL(void)
{
	return(BIO_s_mem());
}

__asm __saveds BIO *BIO_new_mem_buf_AmiSSL(register __a0 void *buf, register __d0 int len)
{
	return(BIO_new_mem_buf(buf, len));
}

__asm __saveds BIO_METHOD *BIO_s_socket_AmiSSL(void)
{
	return(BIO_s_socket());
}

__asm __saveds BIO_METHOD *BIO_s_connect_AmiSSL(void)
{
	return(BIO_s_connect());
}

__asm __saveds BIO_METHOD *BIO_s_accept_AmiSSL(void)
{
	return(BIO_s_accept());
}

__asm __saveds BIO_METHOD *BIO_s_fd_AmiSSL(void)
{
	return(BIO_s_fd());
}

__asm __saveds BIO_METHOD *BIO_s_log_AmiSSL(void)
{
	return(BIO_s_log());
}

__asm __saveds BIO_METHOD *BIO_s_bio_AmiSSL(void)
{
	return(BIO_s_bio());
}

__asm __saveds BIO_METHOD *BIO_s_null_AmiSSL(void)
{
	return(BIO_s_null());
}

__asm __saveds BIO_METHOD *BIO_f_null_AmiSSL(void)
{
	return(BIO_f_null());
}

__asm __saveds BIO_METHOD *BIO_f_buffer_AmiSSL(void)
{
	return(BIO_f_buffer());
}

__asm __saveds BIO_METHOD *BIO_f_nbio_test_AmiSSL(void)
{
	return(BIO_f_nbio_test());
}

__asm __saveds int BIO_sock_should_retry_AmiSSL(register __d0 int i)
{
	return(BIO_sock_should_retry(i));
}

__asm __saveds int BIO_sock_non_fatal_error_AmiSSL(register __d0 int error)
{
	return(BIO_sock_non_fatal_error(error));
}

__asm __saveds int BIO_fd_should_retry_AmiSSL(register __d0 int i)
{
	return(BIO_fd_should_retry(i));
}

__asm __saveds int BIO_fd_non_fatal_error_AmiSSL(register __d0 int error)
{
	return(BIO_fd_non_fatal_error(error));
}

__asm __saveds int BIO_dump_AmiSSL(register __a0 BIO *b, register __a1 const char *bytes, register __d0 int len)
{
	return(BIO_dump(b, bytes, len));
}

__asm __saveds int BIO_dump_indent_AmiSSL(register __a0 BIO *b, register __a1 const char *bytes, register __d0 int len, register __d1 int indent)
{
	return(BIO_dump_indent(b, bytes, len, indent));
}

__asm __saveds struct hostent *BIO_gethostbyname_AmiSSL(register __a0 const char *name)
{
	return(BIO_gethostbyname(name));
}

__asm __saveds int BIO_sock_error_AmiSSL(register __d0 int sock)
{
	return(BIO_sock_error(sock));
}

__asm __saveds int BIO_socket_ioctl_AmiSSL(register __d0 int fd, register __d1 long type, register __a0 unsigned long *arg)
{
	return(BIO_socket_ioctl(fd, type, arg));
}

__asm __saveds int BIO_socket_nbio_AmiSSL(register __d0 int fd, register __d1 int mode)
{
	return(BIO_socket_nbio(fd, mode));
}

__asm __saveds int BIO_get_port_AmiSSL(register __a0 const char *str, register __a1 unsigned short *port_ptr)
{
	return(BIO_get_port(str, port_ptr));
}

__asm __saveds int BIO_get_host_ip_AmiSSL(register __a0 const char *str, register __a1 unsigned char *ip)
{
	return(BIO_get_host_ip(str, ip));
}

__asm __saveds int BIO_get_accept_socket_AmiSSL(register __a0 char *host_port, register __d0 int mode)
{
	return(BIO_get_accept_socket(host_port, mode));
}

__asm __saveds int BIO_accept_AmiSSL(register __d0 int sock, register __a0 char **ip_port)
{
	return(BIO_accept(sock, ip_port));
}

__asm __saveds int BIO_sock_init_AmiSSL(void)
{
	return(BIO_sock_init());
}

__asm __saveds void BIO_sock_cleanup_AmiSSL(void)
{
	BIO_sock_cleanup();
}

__asm __saveds int BIO_set_tcp_ndelay_AmiSSL(register __d0 int sock, register __d1 int turn_on)
{
	return(BIO_set_tcp_ndelay(sock, turn_on));
}

__asm __saveds BIO *BIO_new_socket_AmiSSL(register __d0 int sock, register __d1 int close_flag)
{
	return(BIO_new_socket(sock, close_flag));
}

__asm __saveds BIO *BIO_new_fd_AmiSSL(register __d0 int fd, register __d1 int close_flag)
{
	return(BIO_new_fd(fd, close_flag));
}

__asm __saveds BIO *BIO_new_connect_AmiSSL(register __a0 char *host_port)
{
	return(BIO_new_connect(host_port));
}

__asm __saveds BIO *BIO_new_accept_AmiSSL(register __a0 char *host_port)
{
	return(BIO_new_accept(host_port));
}

__asm __saveds int BIO_new_bio_pair_AmiSSL(register __a0 BIO **bio1, register __d0 size_t writebuf1, register __a1 BIO **bio2, register __d1 size_t writebuf2)
{
	return(BIO_new_bio_pair(bio1, writebuf1, bio2, writebuf2));
}

__asm __saveds void BIO_copy_next_retry_AmiSSL(register __a0 BIO *b)
{
	BIO_copy_next_retry(b);
}

__asm __saveds long BIO_ghbn_ctrl_AmiSSL(register __d0 int cmd, register __d1 int iarg, register __a0 char *parg)
{
	return(BIO_ghbn_ctrl(cmd, iarg, parg));
}

__asm __saveds int BIO_vprintf_AmiSSL(register __a0 BIO *bio, register __a1 const char *format, register __d0 va_list args)
{
	return(BIO_vprintf(bio, format, args));
}

__asm __saveds int BIO_vsnprintf_AmiSSL(register __a0 char *buf, register __d0 size_t n, register __a1 const char *format, register __d1 va_list args)
{
	return(BIO_vsnprintf(buf, n, format, args));
}

__asm __saveds void ERR_load_BIO_strings_AmiSSL(void)
{
	ERR_load_BIO_strings();
}

__asm __saveds BIGNUM *BN_value_one_AmiSSL(void)
{
	return(BN_value_one());
}

__asm __saveds char *BN_options_AmiSSL(void)
{
	return(BN_options());
}

__asm __saveds BN_CTX *BN_CTX_new_AmiSSL(void)
{
	return(BN_CTX_new());
}

__asm __saveds void BN_CTX_init_AmiSSL(register __a0 BN_CTX *c)
{
	BN_CTX_init(c);
}

__asm __saveds void BN_CTX_free_AmiSSL(register __a0 BN_CTX *c)
{
	BN_CTX_free(c);
}

__asm __saveds void BN_CTX_start_AmiSSL(register __a0 BN_CTX *ctx)
{
	BN_CTX_start(ctx);
}

__asm __saveds BIGNUM *BN_CTX_get_AmiSSL(register __a0 BN_CTX *ctx)
{
	return(BN_CTX_get(ctx));
}

__asm __saveds void BN_CTX_end_AmiSSL(register __a0 BN_CTX *ctx)
{
	BN_CTX_end(ctx);
}

__asm __saveds int BN_rand_AmiSSL(register __a0 BIGNUM *rnd, register __d0 int bits, register __d1 int top, register __d2 int bottom)
{
	return(BN_rand(rnd, bits, top, bottom));
}

__asm __saveds int BN_pseudo_rand_AmiSSL(register __a0 BIGNUM *rnd, register __d0 int bits, register __d1 int top, register __d2 int bottom)
{
	return(BN_pseudo_rand(rnd, bits, top, bottom));
}

__asm __saveds int BN_rand_range_AmiSSL(register __a0 BIGNUM *rnd, register __a1 BIGNUM *range)
{
	return(BN_rand_range(rnd, range));
}

__asm __saveds int BN_pseudo_rand_range_AmiSSL(register __a0 BIGNUM *rnd, register __a1 BIGNUM *range)
{
	return(BN_pseudo_rand_range(rnd, range));
}

__asm __saveds int BN_num_bits_AmiSSL(register __a0 const BIGNUM *a)
{
	return(BN_num_bits(a));
}

__asm __saveds int BN_num_bits_word_AmiSSL(register __d0 BN_ULONG a)
{
	return(BN_num_bits_word(a));
}

__asm __saveds BIGNUM *BN_new_AmiSSL(void)
{
	return(BN_new());
}

__asm __saveds void BN_init_AmiSSL(register __a0 BIGNUM *a)
{
	BN_init(a);
}

__asm __saveds void BN_clear_free_AmiSSL(register __a0 BIGNUM *a)
{
	BN_clear_free(a);
}

__asm __saveds BIGNUM *BN_copy_AmiSSL(register __a0 BIGNUM *a, register __a1 const BIGNUM *b)
{
	return(BN_copy(a, b));
}

__asm __saveds BIGNUM *BN_bin2bn_AmiSSL(register __a0 const unsigned char *s, register __d0 int len, register __a1 BIGNUM *ret)
{
	return(BN_bin2bn(s, len, ret));
}

__asm __saveds int BN_bn2bin_AmiSSL(register __a0 const BIGNUM *a, register __a1 unsigned char *to)
{
	return(BN_bn2bin(a, to));
}

__asm __saveds BIGNUM *BN_mpi2bn_AmiSSL(register __a0 unsigned char *s, register __d0 int len, register __a1 BIGNUM *ret)
{
	return(BN_mpi2bn(s, len, ret));
}

__asm __saveds int BN_bn2mpi_AmiSSL(register __a0 const BIGNUM *a, register __a1 unsigned char *to)
{
	return(BN_bn2mpi(a, to));
}

__asm __saveds int BN_sub_AmiSSL(register __a0 BIGNUM *r, register __a1 const BIGNUM *a, register __a2 const BIGNUM *b)
{
	return(BN_sub(r, a, b));
}

__asm __saveds int BN_usub_AmiSSL(register __a0 BIGNUM *r, register __a1 const BIGNUM *a, register __a2 const BIGNUM *b)
{
	return(BN_usub(r, a, b));
}

__asm __saveds int BN_uadd_AmiSSL(register __a0 BIGNUM *r, register __a1 const BIGNUM *a, register __a2 const BIGNUM *b)
{
	return(BN_uadd(r, a, b));
}

__asm __saveds int BN_add_AmiSSL(register __a0 BIGNUM *r, register __a1 const BIGNUM *a, register __a2 const BIGNUM *b)
{
	return(BN_add(r, a, b));
}

__asm __saveds int BN_mod_AmiSSL(register __a0 BIGNUM *rem, register __a1 const BIGNUM *m, register __a2 const BIGNUM *d, register __a3 BN_CTX *ctx)
{
	return(BN_mod(rem, m, d, ctx));
}

__asm __saveds int BN_div_AmiSSL(register __a0 BIGNUM *dv, register __a1 BIGNUM *rem, register __a2 const BIGNUM *m, register __a3 const BIGNUM *d, register __d0 BN_CTX *ctx)
{
	return(BN_div(dv, rem, m, d, ctx));
}

__asm __saveds int BN_mul_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *a, register __a2 BIGNUM *b, register __a3 BN_CTX *ctx)
{
	return(BN_mul(r, a, b, ctx));
}

__asm __saveds int BN_sqr_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *a, register __a2 BN_CTX *ctx)
{
	return(BN_sqr(r, a, ctx));
}

__asm __saveds BN_ULONG BN_mod_word_AmiSSL(register __a0 const BIGNUM *a, register __d0 BN_ULONG w)
{
	return(BN_mod_word(a, w));
}

__asm __saveds BN_ULONG BN_div_word_AmiSSL(register __a0 BIGNUM *a, register __d0 BN_ULONG w)
{
	return(BN_div_word(a, w));
}

__asm __saveds int BN_mul_word_AmiSSL(register __a0 BIGNUM *a, register __d0 BN_ULONG w)
{
	return(BN_mul_word(a, w));
}

__asm __saveds int BN_add_word_AmiSSL(register __a0 BIGNUM *a, register __d0 BN_ULONG w)
{
	return(BN_add_word(a, w));
}

__asm __saveds int BN_sub_word_AmiSSL(register __a0 BIGNUM *a, register __d0 BN_ULONG w)
{
	return(BN_sub_word(a, w));
}

__asm __saveds int BN_set_word_AmiSSL(register __a0 BIGNUM *a, register __d0 BN_ULONG w)
{
	return(BN_set_word(a, w));
}

__asm __saveds BN_ULONG BN_get_word_AmiSSL(register __a0 BIGNUM *a)
{
	return(BN_get_word(a));
}

__asm __saveds int BN_cmp_AmiSSL(register __a0 const BIGNUM *a, register __a1 const BIGNUM *b)
{
	return(BN_cmp(a, b));
}

__asm __saveds void BN_free_AmiSSL(register __a0 BIGNUM *a)
{
	BN_free(a);
}

__asm __saveds int BN_is_bit_set_AmiSSL(register __a0 const BIGNUM *a, register __d0 int n)
{
	return(BN_is_bit_set(a, n));
}

__asm __saveds int BN_lshift_AmiSSL(register __a0 BIGNUM *r, register __a1 const BIGNUM *a, register __d0 int n)
{
	return(BN_lshift(r, a, n));
}

__asm __saveds int BN_lshift1_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *a)
{
	return(BN_lshift1(r, a));
}

__asm __saveds int BN_exp_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *a, register __a2 BIGNUM *p, register __a3 BN_CTX *ctx)
{
	return(BN_exp(r, a, p, ctx));
}

__asm __saveds int BN_mod_exp_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *a, register __a2 const BIGNUM *p, register __a3 const BIGNUM *m, register __d0 BN_CTX *ctx)
{
	return(BN_mod_exp(r, a, p, m, ctx));
}

__asm __saveds int BN_mod_exp_mont_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *a, register __a2 const BIGNUM *p, register __a3 const BIGNUM *m, register __d0 BN_CTX *ctx, register __d1 BN_MONT_CTX *m_ctx)
{
	return(BN_mod_exp_mont(r, a, p, m, ctx, m_ctx));
}

__asm __saveds int BN_mod_exp_mont_word_AmiSSL(register __a0 BIGNUM *r, register __d0 BN_ULONG a, register __a1 const BIGNUM *p, register __a2 const BIGNUM *m, register __a3 BN_CTX *ctx, register __d1 BN_MONT_CTX *m_ctx)
{
	return(BN_mod_exp_mont_word(r, a, p, m, ctx, m_ctx));
}

__asm __saveds int BN_mod_exp2_mont_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *a1, register __a2 BIGNUM *p1, register __a3 BIGNUM *a2, register __d0 BIGNUM *p2, register __d1 BIGNUM *m, register __d2 BN_CTX *ctx, register __d3 BN_MONT_CTX *m_ctx)
{
	return(BN_mod_exp2_mont(r, a1, p1, a2, p2, m, ctx, m_ctx));
}

__asm __saveds int BN_mod_exp_simple_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *a, register __a2 BIGNUM *p, register __a3 BIGNUM *m, register __d0 BN_CTX *ctx)
{
	return(BN_mod_exp_simple(r, a, p, m, ctx));
}

__asm __saveds int BN_mask_bits_AmiSSL(register __a0 BIGNUM *a, register __d0 int n)
{
	return(BN_mask_bits(a, n));
}

__asm __saveds int BN_mod_mul_AmiSSL(register __a0 BIGNUM *ret, register __a1 BIGNUM *a, register __a2 BIGNUM *b, register __a3 const BIGNUM *m, register __d0 BN_CTX *ctx)
{
	return(BN_mod_mul(ret, a, b, m, ctx));
}

__asm __saveds int BN_print_AmiSSL(register __a0 BIO *fp, register __a1 const BIGNUM *a)
{
	return(BN_print(fp, a));
}

__asm __saveds int BN_reciprocal_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *m, register __d0 int len, register __a2 BN_CTX *ctx)
{
	return(BN_reciprocal(r, m, len, ctx));
}

__asm __saveds int BN_rshift_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *a, register __d0 int n)
{
	return(BN_rshift(r, a, n));
}

__asm __saveds int BN_rshift1_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *a)
{
	return(BN_rshift1(r, a));
}

__asm __saveds void BN_clear_AmiSSL(register __a0 BIGNUM *a)
{
	BN_clear(a);
}

__asm __saveds BIGNUM *BN_dup_AmiSSL(register __a0 const BIGNUM *a)
{
	return(BN_dup(a));
}

__asm __saveds int BN_ucmp_AmiSSL(register __a0 const BIGNUM *a, register __a1 const BIGNUM *b)
{
	return(BN_ucmp(a, b));
}

__asm __saveds int BN_set_bit_AmiSSL(register __a0 BIGNUM *a, register __d0 int n)
{
	return(BN_set_bit(a, n));
}

__asm __saveds int BN_clear_bit_AmiSSL(register __a0 BIGNUM *a, register __d0 int n)
{
	return(BN_clear_bit(a, n));
}

__asm __saveds char *BN_bn2hex_AmiSSL(register __a0 const BIGNUM *a)
{
	return(BN_bn2hex(a));
}

__asm __saveds char *BN_bn2dec_AmiSSL(register __a0 const BIGNUM *a)
{
	return(BN_bn2dec(a));
}

__asm __saveds int BN_hex2bn_AmiSSL(register __a0 BIGNUM **a, register __a1 const char *str)
{
	return(BN_hex2bn(a, str));
}

__asm __saveds int BN_dec2bn_AmiSSL(register __a0 BIGNUM **a, register __a1 const char *str)
{
	return(BN_dec2bn(a, str));
}

__asm __saveds int BN_gcd_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *in_a, register __a2 BIGNUM *in_b, register __a3 BN_CTX *ctx)
{
	return(BN_gcd(r, in_a, in_b, ctx));
}

__asm __saveds BIGNUM *BN_mod_inverse_AmiSSL(register __a0 BIGNUM *ret, register __a1 BIGNUM *a, register __a2 const BIGNUM *n, register __a3 BN_CTX *ctx)
{
	return(BN_mod_inverse(ret, a, n, ctx));
}

__asm __saveds BIGNUM *BN_generate_prime_AmiSSL(register __a0 BIGNUM *ret, register __d0 int bits, register __d1 int safe, register __a1 BIGNUM *add, register __a2 BIGNUM *rem, register __a3 void (*callback)(int, int, void *), register __d2 void *cb_arg)
{
	return(BN_generate_prime(ret, bits, safe, add, rem, callback, cb_arg));
}

__asm __saveds int BN_is_prime_AmiSSL(register __a0 const BIGNUM *p, register __d0 int nchecks, register __a1 void (*callback)(int, int, void *), register __a2 BN_CTX *ctx, register __a3 void *cb_arg)
{
	return(BN_is_prime(p, nchecks, callback, ctx, cb_arg));
}

__asm __saveds int BN_is_prime_fasttest_AmiSSL(register __a0 const BIGNUM *p, register __d0 int nchecks, register __a1 void (*callback)(int, int, void *), register __a2 BN_CTX *ctx, register __a3 void *cb_arg, register __d1 int do_trial_division)
{
	return(BN_is_prime_fasttest(p, nchecks, callback, ctx, cb_arg, do_trial_division));
}

__asm __saveds BN_MONT_CTX *BN_MONT_CTX_new_AmiSSL(void)
{
	return(BN_MONT_CTX_new());
}

__asm __saveds void BN_MONT_CTX_init_AmiSSL(register __a0 BN_MONT_CTX *ctx)
{
	BN_MONT_CTX_init(ctx);
}

__asm __saveds int BN_mod_mul_montgomery_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *a, register __a2 BIGNUM *b, register __a3 BN_MONT_CTX *mont, register __d0 BN_CTX *ctx)
{
	return(BN_mod_mul_montgomery(r, a, b, mont, ctx));
}

__asm __saveds int BN_from_montgomery_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *a, register __a2 BN_MONT_CTX *mont, register __a3 BN_CTX *ctx)
{
	return(BN_from_montgomery(r, a, mont, ctx));
}

__asm __saveds void BN_MONT_CTX_free_AmiSSL(register __a0 BN_MONT_CTX *mont)
{
	BN_MONT_CTX_free(mont);
}

__asm __saveds int BN_MONT_CTX_set_AmiSSL(register __a0 BN_MONT_CTX *mont, register __a1 const BIGNUM *modulus, register __a2 BN_CTX *ctx)
{
	return(BN_MONT_CTX_set(mont, modulus, ctx));
}

__asm __saveds BN_MONT_CTX *BN_MONT_CTX_copy_AmiSSL(register __a0 BN_MONT_CTX *to, register __a1 BN_MONT_CTX *from)
{
	return(BN_MONT_CTX_copy(to, from));
}

__asm __saveds BN_BLINDING *BN_BLINDING_new_AmiSSL(register __a0 BIGNUM *A, register __a1 BIGNUM *Ai, register __a2 BIGNUM *mod)
{
	return(BN_BLINDING_new(A, Ai, mod));
}

__asm __saveds void BN_BLINDING_free_AmiSSL(register __a0 BN_BLINDING *b)
{
	BN_BLINDING_free(b);
}

__asm __saveds int BN_BLINDING_update_AmiSSL(register __a0 BN_BLINDING *b, register __a1 BN_CTX *ctx)
{
	return(BN_BLINDING_update(b, ctx));
}

__asm __saveds int BN_BLINDING_convert_AmiSSL(register __a0 BIGNUM *n, register __a1 BN_BLINDING *r, register __a2 BN_CTX *ctx)
{
	return(BN_BLINDING_convert(n, r, ctx));
}

__asm __saveds int BN_BLINDING_invert_AmiSSL(register __a0 BIGNUM *n, register __a1 BN_BLINDING *b, register __a2 BN_CTX *ctx)
{
	return(BN_BLINDING_invert(n, b, ctx));
}

__asm __saveds void BN_set_params_AmiSSL(register __d0 int mul, register __d1 int high, register __d2 int low, register __d3 int mont)
{
	BN_set_params(mul, high, low, mont);
}

__asm __saveds int BN_get_params_AmiSSL(register __d0 int which)
{
	return(BN_get_params(which));
}

__asm __saveds void BN_RECP_CTX_init_AmiSSL(register __a0 BN_RECP_CTX *recp)
{
	BN_RECP_CTX_init(recp);
}

__asm __saveds BN_RECP_CTX *BN_RECP_CTX_new_AmiSSL(void)
{
	return(BN_RECP_CTX_new());
}

__asm __saveds void BN_RECP_CTX_free_AmiSSL(register __a0 BN_RECP_CTX *recp)
{
	BN_RECP_CTX_free(recp);
}

__asm __saveds int BN_RECP_CTX_set_AmiSSL(register __a0 BN_RECP_CTX *recp, register __a1 const BIGNUM *rdiv, register __a2 BN_CTX *ctx)
{
	return(BN_RECP_CTX_set(recp, rdiv, ctx));
}

__asm __saveds int BN_mod_mul_reciprocal_AmiSSL(register __a0 BIGNUM *r, register __a1 BIGNUM *x, register __a2 BIGNUM *y, register __a3 BN_RECP_CTX *recp, register __d0 BN_CTX *ctx)
{
	return(BN_mod_mul_reciprocal(r, x, y, recp, ctx));
}

__asm __saveds int BN_mod_exp_recp_AmiSSL(register __a0 BIGNUM *r, register __a1 const BIGNUM *a, register __a2 const BIGNUM *p, register __a3 const BIGNUM *m, register __d0 BN_CTX *ctx)
{
	return(BN_mod_exp_recp(r, a, p, m, ctx));
}

__asm __saveds int BN_div_recp_AmiSSL(register __a0 BIGNUM *dv, register __a1 BIGNUM *rem, register __a2 BIGNUM *m, register __a3 BN_RECP_CTX *recp, register __d0 BN_CTX *ctx)
{
	return(BN_div_recp(dv, rem, m, recp, ctx));
}

__asm __saveds BIGNUM *bn_expand2_AmiSSL(register __a0 BIGNUM *a, register __d0 int words)
{
	return(bn_expand2(a, words));
}

__asm __saveds BN_ULONG bn_mul_add_words_AmiSSL(register __a0 BN_ULONG *rp, register __a1 BN_ULONG *ap, register __d0 int num, register __d1 BN_ULONG w)
{
	return(bn_mul_add_words(rp, ap, num, w));
}

__asm __saveds BN_ULONG bn_mul_words_AmiSSL(register __a0 BN_ULONG *rp, register __a1 BN_ULONG *ap, register __d0 int num, register __d1 BN_ULONG w)
{
	return(bn_mul_words(rp, ap, num, w));
}

__asm __saveds void bn_sqr_words_AmiSSL(register __a0 BN_ULONG *rp, register __a1 BN_ULONG *ap, register __d0 int num)
{
	bn_sqr_words(rp, ap, num);
}

__asm __saveds BN_ULONG bn_div_words_AmiSSL(register __d0 BN_ULONG h, register __d1 BN_ULONG l, register __d2 BN_ULONG d)
{
	return(bn_div_words(h, l, d));
}

__asm __saveds BN_ULONG bn_add_words_AmiSSL(register __a0 BN_ULONG *rp, register __a1 BN_ULONG *ap, register __a2 BN_ULONG *bp, register __d0 int num)
{
	return(bn_add_words(rp, ap, bp, num));
}

__asm __saveds BN_ULONG bn_sub_words_AmiSSL(register __a0 BN_ULONG *rp, register __a1 BN_ULONG *ap, register __a2 BN_ULONG *bp, register __d0 int num)
{
	return(bn_sub_words(rp, ap, bp, num));
}

__asm __saveds int BN_bntest_rand_AmiSSL(register __a0 BIGNUM *rnd, register __d0 int bits, register __d1 int top, register __d2 int bottom)
{
	return(BN_bntest_rand(rnd, bits, top, bottom));
}

__asm __saveds void ERR_load_BN_strings_AmiSSL(void)
{
	ERR_load_BN_strings();
}

__asm __saveds BUF_MEM *BUF_MEM_new_AmiSSL(void)
{
	return(BUF_MEM_new());
}

__asm __saveds void BUF_MEM_free_AmiSSL(register __a0 BUF_MEM *a)
{
	BUF_MEM_free(a);
}

__asm __saveds int BUF_MEM_grow_AmiSSL(register __a0 BUF_MEM *str, register __d0 int len)
{
	return(BUF_MEM_grow(str, len));
}

__asm __saveds char *BUF_strdup_AmiSSL(register __a0 const char *str)
{
	return(BUF_strdup(str));
}

__asm __saveds void ERR_load_BUF_strings_AmiSSL(void)
{
	ERR_load_BUF_strings();
}

__asm __saveds COMP_CTX *COMP_CTX_new_AmiSSL(register __a0 COMP_METHOD *meth)
{
	return(COMP_CTX_new(meth));
}

__asm __saveds void COMP_CTX_free_AmiSSL(register __a0 COMP_CTX *ctx)
{
	COMP_CTX_free(ctx);
}

__asm __saveds int COMP_compress_block_AmiSSL(register __a0 COMP_CTX *ctx, register __a1 unsigned char *out, register __d0 int olen, register __a2 unsigned char *in, register __d1 int ilen)
{
	return(COMP_compress_block(ctx, out, olen, in, ilen));
}

__asm __saveds int COMP_expand_block_AmiSSL(register __a0 COMP_CTX *ctx, register __a1 unsigned char *out, register __d0 int olen, register __a2 unsigned char *in, register __d1 int ilen)
{
	return(COMP_expand_block(ctx, out, olen, in, ilen));
}

__asm __saveds COMP_METHOD *COMP_rle_AmiSSL(void)
{
	return(COMP_rle());
}

__asm __saveds void ERR_load_COMP_strings_AmiSSL(void)
{
	ERR_load_COMP_strings();
}

__asm __saveds CONF_VALUE *_CONF_new_section_AmiSSL(register __a0 CONF *conf, register __a1 char *section)
{
	return(_CONF_new_section(conf, section));
}

__asm __saveds CONF_VALUE *_CONF_get_section_AmiSSL(register __a0 CONF *conf, register __a1 char *section)
{
	return(_CONF_get_section(conf, section));
}

__asm __saveds STACK_OF(CONF_VALUE) *_CONF_get_section_values_AmiSSL(register __a0 CONF *conf, register __a1 char *section)
{
	return(_CONF_get_section_values(conf, section));
}

__asm __saveds int _CONF_add_string_AmiSSL(register __a0 CONF *conf, register __a1 CONF_VALUE *section, register __a2 CONF_VALUE *value)
{
	return(_CONF_add_string(conf, section, value));
}

__asm __saveds char *_CONF_get_string_AmiSSL(register __a0 CONF *conf, register __a1 char *section, register __a2 char *name)
{
	return(_CONF_get_string(conf, section, name));
}

__asm __saveds long _CONF_get_number_AmiSSL(register __a0 CONF *conf, register __a1 char *section, register __a2 char *name)
{
	return(_CONF_get_number(conf, section, name));
}

__asm __saveds int _CONF_new_data_AmiSSL(register __a0 CONF *conf)
{
	return(_CONF_new_data(conf));
}

__asm __saveds void _CONF_free_data_AmiSSL(register __a0 CONF *conf)
{
	_CONF_free_data(conf);
}

__asm __saveds int CONF_set_default_method_AmiSSL(register __a0 CONF_METHOD *meth)
{
	return(CONF_set_default_method(meth));
}

__asm __saveds LHASH *CONF_load_AmiSSL(register __a0 LHASH *conf, register __a1 const char *file, register __a2 long *eline)
{
	return(CONF_load(conf, file, eline));
}

__asm __saveds LHASH *CONF_load_bio_AmiSSL(register __a0 LHASH *conf, register __a1 BIO *bp, register __a2 long *eline)
{
	return(CONF_load_bio(conf, bp, eline));
}

__asm __saveds STACK_OF(CONF_VALUE) *CONF_get_section_AmiSSL(register __a0 LHASH *conf, register __a1 char *section)
{
	return(CONF_get_section(conf, section));
}

__asm __saveds char *CONF_get_string_AmiSSL(register __a0 LHASH *conf, register __a1 char *group, register __a2 char *name)
{
	return(CONF_get_string(conf, group, name));
}

__asm __saveds long CONF_get_number_AmiSSL(register __a0 LHASH *conf, register __a1 char *group, register __a2 char *name)
{
	return(CONF_get_number(conf, group, name));
}

__asm __saveds void CONF_free_AmiSSL(register __a0 LHASH *conf)
{
	CONF_free(conf);
}

__asm __saveds int CONF_dump_bio_AmiSSL(register __a0 LHASH *conf, register __a1 BIO *out)
{
	return(CONF_dump_bio(conf, out));
}

__asm __saveds CONF *NCONF_new_AmiSSL(register __a0 CONF_METHOD *meth)
{
	return(NCONF_new(meth));
}

__asm __saveds CONF_METHOD *NCONF_default_AmiSSL(void)
{
	return(NCONF_default());
}

__asm __saveds CONF_METHOD *NCONF_WIN32_AmiSSL(void)
{
	return(NCONF_WIN32());
}

__asm __saveds void NCONF_free_AmiSSL(register __a0 CONF *conf)
{
	NCONF_free(conf);
}

__asm __saveds void NCONF_free_data_AmiSSL(register __a0 CONF *conf)
{
	NCONF_free_data(conf);
}

__asm __saveds int NCONF_load_AmiSSL(register __a0 CONF *conf, register __a1 const char *file, register __a2 long *eline)
{
	return(NCONF_load(conf, file, eline));
}

__asm __saveds int NCONF_load_bio_AmiSSL(register __a0 CONF *conf, register __a1 BIO *bp, register __a2 long *eline)
{
	return(NCONF_load_bio(conf, bp, eline));
}

__asm __saveds STACK_OF(CONF_VALUE) *NCONF_get_section_AmiSSL(register __a0 CONF *conf, register __a1 char *section)
{
	return(NCONF_get_section(conf, section));
}

__asm __saveds char *NCONF_get_string_AmiSSL(register __a0 CONF *conf, register __a1 char *group, register __a2 char *name)
{
	return(NCONF_get_string(conf, group, name));
}

__asm __saveds long NCONF_get_number_AmiSSL(register __a0 CONF *conf, register __a1 char *group, register __a2 char *name)
{
	return(NCONF_get_number(conf, group, name));
}

__asm __saveds int NCONF_dump_bio_AmiSSL(register __a0 CONF *conf, register __a1 BIO *out)
{
	return(NCONF_dump_bio(conf, out));
}

__asm __saveds void ERR_load_CONF_strings_AmiSSL(void)
{
	ERR_load_CONF_strings();
}

__asm __saveds int CRYPTO_mem_ctrl_AmiSSL(register __d0 int mode)
{
	return(CRYPTO_mem_ctrl(mode));
}

__asm __saveds int CRYPTO_is_mem_check_on_AmiSSL(void)
{
	return(CRYPTO_is_mem_check_on());
}

__asm __saveds const char *SSLeay_version_AmiSSL(register __d0 int type)
{
	return(SSLeay_version(type));
}

__asm __saveds unsigned long SSLeay_AmiSSL(void)
{
	return(SSLeay());
}

__asm __saveds int OPENSSL_issetugid_AmiSSL(void)
{
	return(OPENSSL_issetugid());
}

__asm __saveds int CRYPTO_get_ex_new_index_AmiSSL(register __d0 int idx, register __a0 STACK_OF(CRYPTO_EX_DATA_FUNCS) **skp, register __d1 long argl, register __a1 void *argp, register __a2 CRYPTO_EX_new *new_func, register __a3 CRYPTO_EX_dup *dup_func, register __d2 CRYPTO_EX_free *free_func)
{
	return(CRYPTO_get_ex_new_index(idx, skp, argl, argp, new_func, dup_func, free_func));
}

__asm __saveds int CRYPTO_set_ex_data_AmiSSL(register __a0 CRYPTO_EX_DATA *ad, register __d0 int idx, register __a1 void *val)
{
	return(CRYPTO_set_ex_data(ad, idx, val));
}

__asm __saveds void *CRYPTO_get_ex_data_AmiSSL(register __a0 CRYPTO_EX_DATA *ad, register __d0 int idx)
{
	return(CRYPTO_get_ex_data(ad, idx));
}

__asm __saveds int CRYPTO_dup_ex_data_AmiSSL(register __a0 STACK_OF(CRYPTO_EX_DATA_FUNCS) *meth, register __a1 CRYPTO_EX_DATA *to, register __a2 CRYPTO_EX_DATA *from)
{
	return(CRYPTO_dup_ex_data(meth, to, from));
}

__asm __saveds void CRYPTO_free_ex_data_AmiSSL(register __a0 STACK_OF(CRYPTO_EX_DATA_FUNCS) *meth, register __a1 void *obj, register __a2 CRYPTO_EX_DATA *ad)
{
	CRYPTO_free_ex_data(meth, obj, ad);
}

__asm __saveds void CRYPTO_new_ex_data_AmiSSL(register __a0 STACK_OF(CRYPTO_EX_DATA_FUNCS) *meth, register __a1 void *obj, register __a2 CRYPTO_EX_DATA *ad)
{
	CRYPTO_new_ex_data(meth, obj, ad);
}

__asm __saveds int CRYPTO_get_new_lockid_AmiSSL(register __a0 char *name)
{
	return(CRYPTO_get_new_lockid(name));
}

__asm __saveds int CRYPTO_num_locks_AmiSSL(void)
{
	return(CRYPTO_num_locks());
}

__asm __saveds void CRYPTO_lock_AmiSSL(register __d0 int mode, register __d1 int type, register __a0 const char *file, register __d2 int line)
{
	CRYPTO_lock(mode, type, file, line);
}

__asm __saveds void CRYPTO_set_locking_callback_AmiSSL(register __a0 void (*func)(int mode, int type, const char *file, int line))
{
	CRYPTO_set_locking_callback(func);
}

__asm __saveds void (*CRYPTO_get_locking_callback_AmiSSL(void))(int mode, int type, const char *file, int line)
{
	return(CRYPTO_get_locking_callback());
}

__asm __saveds void CRYPTO_set_add_lock_callback_AmiSSL(register __a0 int (*func)(int *num, int mount, int type, const char *file, int line))
{
	CRYPTO_set_add_lock_callback(func);
}

__asm __saveds int (*CRYPTO_get_add_lock_callback_AmiSSL(void))(int *num, int mount, int type, const char *file, int line)
{
	return(CRYPTO_get_add_lock_callback());
}

__asm __saveds void CRYPTO_set_id_callback_AmiSSL(register __a0 unsigned long (*func)(void))
{
	CRYPTO_set_id_callback(func);
}

__asm __saveds unsigned long (*CRYPTO_get_id_callback_AmiSSL(void))(void)
{
	return(CRYPTO_get_id_callback());
}

__asm __saveds unsigned long CRYPTO_thread_id_AmiSSL(void)
{
	return(CRYPTO_thread_id());
}

__asm __saveds const char *CRYPTO_get_lock_name_AmiSSL(register __d0 int type)
{
	return(CRYPTO_get_lock_name(type));
}

__asm __saveds int CRYPTO_add_lock_AmiSSL(register __a0 int *pointer, register __d0 int amount, register __d1 int type, register __a1 const char *file, register __d2 int line)
{
	return(CRYPTO_add_lock(pointer, amount, type, file, line));
}

__asm __saveds int CRYPTO_get_new_dynlockid_AmiSSL(void)
{
	return(CRYPTO_get_new_dynlockid());
}

__asm __saveds void CRYPTO_destroy_dynlockid_AmiSSL(register __d0 int i)
{
	CRYPTO_destroy_dynlockid(i);
}

__asm __saveds struct CRYPTO_dynlock_value *CRYPTO_get_dynlock_value_AmiSSL(register __d0 int i)
{
	return(CRYPTO_get_dynlock_value(i));
}

__asm __saveds void CRYPTO_set_dynlock_create_callback_AmiSSL(register __a0 struct CRYPTO_dynlock_value *(*dyn_create_function)(const char *file, int line))
{
	CRYPTO_set_dynlock_create_callback(dyn_create_function);
}

__asm __saveds void CRYPTO_set_dynlock_lock_callback_AmiSSL(register __a0 void (*dyn_lock_function)(int mode, struct CRYPTO_dynlock_value *l, const char *file, int line))
{
	CRYPTO_set_dynlock_lock_callback(dyn_lock_function);
}

__asm __saveds void CRYPTO_set_dynlock_destroy_callback_AmiSSL(register __a0 void (*dyn_destroy_function)(struct CRYPTO_dynlock_value *l, const char *file, int line))
{
	CRYPTO_set_dynlock_destroy_callback(dyn_destroy_function);
}

__asm __saveds struct CRYPTO_dynlock_value *(*CRYPTO_get_dynlock_create_callback_AmiSSL(void))(const char *file, int line)
{
	return(CRYPTO_get_dynlock_create_callback());
}

__asm __saveds void (*CRYPTO_get_dynlock_lock_callback_AmiSSL(void))(int mode, struct CRYPTO_dynlock_value *l, const char *file, int line)
{
	return(CRYPTO_get_dynlock_lock_callback());
}

__asm __saveds void (*CRYPTO_get_dynlock_destroy_callback_AmiSSL(void))(struct CRYPTO_dynlock_value *l, const char *file, int line)
{
	return(CRYPTO_get_dynlock_destroy_callback());
}

__asm __saveds int CRYPTO_set_mem_functions_AmiSSL(register __a0 void *(*m)(size_t), register __a1 void *(*r)(void *, size_t), register __a2 void (*f)(void *))
{
	return(CRYPTO_set_mem_functions(m, r, f));
}

__asm __saveds int CRYPTO_set_locked_mem_functions_AmiSSL(register __a0 void *(*m)(size_t), register __a1 void (*free_func)(void *))
{
	return(CRYPTO_set_locked_mem_functions(m, free_func));
}

__asm __saveds int CRYPTO_set_mem_debug_functions_AmiSSL(register __a0 void (*m)(void *, int, const char *, int, int), register __a1 void (*r)(void *, void *, int, const char *, int, int), register __a2 void (*f)(void *, int), register __a3 void (*so)(long), register __d0 long (*go)(void))
{
	return(CRYPTO_set_mem_debug_functions(m, r, f, so, go));
}

__asm __saveds void CRYPTO_get_mem_functions_AmiSSL(register __a0 void *(**m)(size_t), register __a1 void *(**r)(void *, size_t), register __a2 void (**f)(void *))
{
	CRYPTO_get_mem_functions(m, r, f);
}

__asm __saveds void CRYPTO_get_locked_mem_functions_AmiSSL(register __a0 void *(**m)(size_t), register __a1 void (**f)(void *))
{
	CRYPTO_get_locked_mem_functions(m, f);
}

__asm __saveds void CRYPTO_get_mem_debug_functions_AmiSSL(register __a0 void (**m)(void *, int, const char *, int, int), register __a1 void (**r)(void *, void *, int, const char *, int, int), register __a2 void (**f)(void *, int), register __a3 void (**so)(long), register __d0 long (**go)(void))
{
	CRYPTO_get_mem_debug_functions(m, r, f, so, go);
}

__asm __saveds void *CRYPTO_malloc_locked_AmiSSL(register __d0 int num, register __a0 const char *file, register __d1 int line)
{
	return(CRYPTO_malloc_locked(num, file, line));
}

__asm __saveds void CRYPTO_free_locked_AmiSSL(register __a0 void *a)
{
	CRYPTO_free_locked(a);
}

__asm __saveds void *CRYPTO_malloc_AmiSSL(register __d0 int num, register __a0 const char *file, register __d1 int line)
{
	return(CRYPTO_malloc(num, file, line));
}

__asm __saveds void CRYPTO_free_AmiSSL(register __a0 void *a)
{
	CRYPTO_free(a);
}

__asm __saveds void *CRYPTO_realloc_AmiSSL(register __a0 void *addr, register __d0 int num, register __a1 const char *file, register __d1 int line)
{
	return(CRYPTO_realloc(addr, num, file, line));
}

__asm __saveds void *CRYPTO_remalloc_AmiSSL(register __a0 void *addr, register __d0 int num, register __a1 const char *file, register __d1 int line)
{
	return(CRYPTO_remalloc(addr, num, file, line));
}

__asm __saveds void CRYPTO_set_mem_debug_options_AmiSSL(register __d0 long bits)
{
	CRYPTO_set_mem_debug_options(bits);
}

__asm __saveds long CRYPTO_get_mem_debug_options_AmiSSL(void)
{
	return(CRYPTO_get_mem_debug_options());
}

__asm __saveds int CRYPTO_push_info__AmiSSL(register __a0 const char *info, register __a1 const char *file, register __d0 int line)
{
	return(CRYPTO_push_info_(info, file, line));
}

__asm __saveds int CRYPTO_pop_info_AmiSSL(void)
{
	return(CRYPTO_pop_info());
}

__asm __saveds int CRYPTO_remove_all_info_AmiSSL(void)
{
	return(CRYPTO_remove_all_info());
}

__asm __saveds void CRYPTO_dbg_malloc_AmiSSL(register __a0 void *addr, register __d0 int num, register __a1 const char *file, register __d1 int line, register __d2 int before_p)
{
	CRYPTO_dbg_malloc(addr, num, file, line, before_p);
}

__asm __saveds void CRYPTO_dbg_realloc_AmiSSL(register __a0 void *addr1, register __a1 void *addr2, register __d0 int num, register __a2 const char *file, register __d1 int line, register __d2 int before_p)
{
	CRYPTO_dbg_realloc(addr1, addr2, num, file, line, before_p);
}

__asm __saveds void CRYPTO_dbg_free_AmiSSL(register __a0 void *addr, register __d0 int before_p)
{
	CRYPTO_dbg_free(addr, before_p);
}

__asm __saveds void CRYPTO_dbg_set_options_AmiSSL(register __d0 long bits)
{
	CRYPTO_dbg_set_options(bits);
}

__asm __saveds long CRYPTO_dbg_get_options_AmiSSL(void)
{
	return(CRYPTO_dbg_get_options());
}

__asm __saveds void CRYPTO_mem_leaks_AmiSSL(register __a0 struct bio_st *bio)
{
	CRYPTO_mem_leaks(bio);
}

__asm __saveds void CRYPTO_mem_leaks_cb_AmiSSL(register __a0 void (*cb)(unsigned long, const char *, int, int, void *))
{
	CRYPTO_mem_leaks_cb(cb);
}

__asm __saveds void ERR_load_CRYPTO_strings_AmiSSL(void)
{
	ERR_load_CRYPTO_strings();
}

__asm __saveds DSO *DSO_new_AmiSSL(void)
{
	return(DSO_new());
}

__asm __saveds DSO *DSO_new_method_AmiSSL(register __a0 DSO_METHOD *method)
{
	return(DSO_new_method(method));
}

__asm __saveds int DSO_free_AmiSSL(register __a0 DSO *dso)
{
	return(DSO_free(dso));
}

__asm __saveds int DSO_flags_AmiSSL(register __a0 DSO *dso)
{
	return(DSO_flags(dso));
}

__asm __saveds int DSO_up_AmiSSL(register __a0 DSO *dso)
{
	return(DSO_up(dso));
}

__asm __saveds long DSO_ctrl_AmiSSL(register __a0 DSO *dso, register __d0 int cmd, register __d1 long larg, register __a1 void *parg)
{
	return(DSO_ctrl(dso, cmd, larg, parg));
}

__asm __saveds void DSO_set_default_method_AmiSSL(register __a0 DSO_METHOD *meth)
{
	DSO_set_default_method(meth);
}

__asm __saveds DSO_METHOD *DSO_get_default_method_AmiSSL(void)
{
	return(DSO_get_default_method());
}

__asm __saveds DSO_METHOD *DSO_get_method_AmiSSL(register __a0 DSO *dso)
{
	return(DSO_get_method(dso));
}

__asm __saveds DSO_METHOD *DSO_set_method_AmiSSL(register __a0 DSO *dso, register __a1 DSO_METHOD *meth)
{
	return(DSO_set_method(dso, meth));
}

__asm __saveds DSO *DSO_load_AmiSSL(register __a0 DSO *dso, register __a1 const char *filename, register __a2 DSO_METHOD *meth, register __d0 int flags)
{
	return(DSO_load(dso, filename, meth, flags));
}

__asm __saveds void *DSO_bind_var_AmiSSL(register __a0 DSO *dso, register __a1 const char *symname)
{
	return(DSO_bind_var(dso, symname));
}

__asm __saveds DSO_FUNC_TYPE DSO_bind_func_AmiSSL(register __a0 DSO *dso, register __a1 const char *symname)
{
	return(DSO_bind_func(dso, symname));
}

__asm __saveds DSO_METHOD *DSO_METHOD_openssl_AmiSSL(void)
{
	return(DSO_METHOD_openssl());
}

__asm __saveds DSO_METHOD *DSO_METHOD_null_AmiSSL(void)
{
	return(DSO_METHOD_null());
}

__asm __saveds DSO_METHOD *DSO_METHOD_dlfcn_AmiSSL(void)
{
	return(DSO_METHOD_dlfcn());
}

__asm __saveds DSO_METHOD *DSO_METHOD_dl_AmiSSL(void)
{
	return(DSO_METHOD_dl());
}

__asm __saveds DSO_METHOD *DSO_METHOD_win32_AmiSSL(void)
{
	return(DSO_METHOD_win32());
}

__asm __saveds DSO_METHOD *DSO_METHOD_vms_AmiSSL(void)
{
	return(DSO_METHOD_vms());
}

__asm __saveds void ERR_load_DSO_strings_AmiSSL(void)
{
	ERR_load_DSO_strings();
}

__asm __saveds void ERR_put_error_AmiSSL(register __d0 int lib, register __d1 int func, register __d2 int reason, register __a0 const char *file, register __d3 int line)
{
	ERR_put_error(lib, func, reason, file, line);
}

__asm __saveds void ERR_set_error_data_AmiSSL(register __a0 char *data, register __d0 int flags)
{
	ERR_set_error_data(data, flags);
}

__asm __saveds unsigned long ERR_get_error_AmiSSL(void)
{
	return(ERR_get_error());
}

__asm __saveds unsigned long ERR_get_error_line_AmiSSL(register __a0 const char **file, register __a1 int *line)
{
	return(ERR_get_error_line(file, line));
}

__asm __saveds unsigned long ERR_get_error_line_data_AmiSSL(register __a0 const char **file, register __a1 int *line, register __a2 const char **data, register __a3 int *flags)
{
	return(ERR_get_error_line_data(file, line, data, flags));
}

__asm __saveds unsigned long ERR_peek_error_AmiSSL(void)
{
	return(ERR_peek_error());
}

__asm __saveds unsigned long ERR_peek_error_line_AmiSSL(register __a0 const char **file, register __a1 int *line)
{
	return(ERR_peek_error_line(file, line));
}

__asm __saveds unsigned long ERR_peek_error_line_data_AmiSSL(register __a0 const char **file, register __a1 int *line, register __a2 const char **data, register __a3 int *flags)
{
	return(ERR_peek_error_line_data(file, line, data, flags));
}

__asm __saveds void ERR_clear_error_AmiSSL(void)
{
	ERR_clear_error();
}

__asm __saveds char *ERR_error_string_AmiSSL(register __d0 unsigned long e, register __a0 char *buf)
{
	return(ERR_error_string(e, buf));
}

__asm __saveds void ERR_error_string_n_AmiSSL(register __d0 unsigned long e, register __a0 char *buf, register __d1 size_t len)
{
	ERR_error_string_n(e, buf, len);
}

__asm __saveds const char *ERR_lib_error_string_AmiSSL(register __d0 unsigned long e)
{
	return(ERR_lib_error_string(e));
}

__asm __saveds const char *ERR_func_error_string_AmiSSL(register __d0 unsigned long e)
{
	return(ERR_func_error_string(e));
}

__asm __saveds const char *ERR_reason_error_string_AmiSSL(register __d0 unsigned long e)
{
	return(ERR_reason_error_string(e));
}

__asm __saveds void ERR_print_errors_AmiSSL(register __a0 BIO *bp)
{
	ERR_print_errors(bp);
}

__asm __saveds void ERR_add_error_dataA_AmiSSL(register __d0 int num, register __a0 void *args)
{
	ERR_add_error_dataA(num, args);
}

__asm __saveds void ERR_load_strings_AmiSSL(register __d0 int lib, register __a0 ERR_STRING_DATA *str)
{
	ERR_load_strings(lib, str);
}

__asm __saveds void ERR_load_ERR_strings_AmiSSL(void)
{
	ERR_load_ERR_strings();
}

__asm __saveds void ERR_load_crypto_strings_AmiSSL(void)
{
	ERR_load_crypto_strings();
}

__asm __saveds void ERR_free_strings_AmiSSL(void)
{
	ERR_free_strings();
}

__asm __saveds void ERR_remove_state_AmiSSL(register __d0 unsigned long pid)
{
	ERR_remove_state(pid);
}

__asm __saveds ERR_STATE *ERR_get_state_AmiSSL(void)
{
	return(ERR_get_state());
}

__asm __saveds LHASH *ERR_get_string_table_AmiSSL(void)
{
	return(ERR_get_string_table());
}

__asm __saveds LHASH *ERR_get_err_state_table_AmiSSL(void)
{
	return(ERR_get_err_state_table());
}

__asm __saveds int ERR_get_next_error_library_AmiSSL(void)
{
	return(ERR_get_next_error_library());
}

__asm __saveds int EVP_MD_CTX_copy_AmiSSL(register __a0 EVP_MD_CTX *out, register __a1 EVP_MD_CTX *in)
{
	return(EVP_MD_CTX_copy(out, in));
}

__asm __saveds void EVP_DigestInit_AmiSSL(register __a0 EVP_MD_CTX *ctx, register __a1 const EVP_MD *type)
{
	EVP_DigestInit(ctx, type);
}

__asm __saveds void EVP_DigestUpdate_AmiSSL(register __a0 EVP_MD_CTX *ctx, register __a1 const void *d, register __d0 unsigned int cnt)
{
	EVP_DigestUpdate(ctx, d, cnt);
}

__asm __saveds void EVP_DigestFinal_AmiSSL(register __a0 EVP_MD_CTX *ctx, register __a1 unsigned char *md, register __a2 unsigned int *s)
{
	EVP_DigestFinal(ctx, md, s);
}

__asm __saveds int EVP_read_pw_string_AmiSSL(register __a0 char *buf, register __d0 int length, register __a1 const char *prompt, register __d1 int verify)
{
	return(EVP_read_pw_string(buf, length, prompt, verify));
}

__asm __saveds void EVP_set_pw_prompt_AmiSSL(register __a0 char *prompt)
{
	EVP_set_pw_prompt(prompt);
}

__asm __saveds char *EVP_get_pw_prompt_AmiSSL(void)
{
	return(EVP_get_pw_prompt());
}

__asm __saveds int EVP_BytesToKey_AmiSSL(register __a0 const EVP_CIPHER *type, register __a1 EVP_MD *md, register __a2 const unsigned char *salt, register __a3 const unsigned char *data, register __d0 int datal, register __d1 int count, register __d2 unsigned char *key, register __d3 unsigned char *iv)
{
	return(EVP_BytesToKey(type, md, salt, data, datal, count, key, iv));
}

__asm __saveds int EVP_EncryptInit_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 const EVP_CIPHER *type, register __a2 unsigned char *key, register __a3 unsigned char *iv)
{
	return(EVP_EncryptInit(ctx, type, key, iv));
}

__asm __saveds int EVP_EncryptUpdate_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 unsigned char *out, register __a2 int *outl, register __a3 unsigned char *in, register __d0 int inl)
{
	return(EVP_EncryptUpdate(ctx, out, outl, in, inl));
}

__asm __saveds int EVP_EncryptFinal_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 unsigned char *out, register __a2 int *outl)
{
	return(EVP_EncryptFinal(ctx, out, outl));
}

__asm __saveds int EVP_DecryptInit_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 const EVP_CIPHER *type, register __a2 unsigned char *key, register __a3 unsigned char *iv)
{
	return(EVP_DecryptInit(ctx, type, key, iv));
}

__asm __saveds int EVP_DecryptUpdate_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 unsigned char *out, register __a2 int *outl, register __a3 unsigned char *in, register __d0 int inl)
{
	return(EVP_DecryptUpdate(ctx, out, outl, in, inl));
}

__asm __saveds int EVP_DecryptFinal_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 unsigned char *outm, register __a2 int *outl)
{
	return(EVP_DecryptFinal(ctx, outm, outl));
}

__asm __saveds int EVP_CipherInit_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 const EVP_CIPHER *type, register __a2 unsigned char *key, register __a3 unsigned char *iv, register __d0 int enc)
{
	return(EVP_CipherInit(ctx, type, key, iv, enc));
}

__asm __saveds int EVP_CipherUpdate_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 unsigned char *out, register __a2 int *outl, register __a3 unsigned char *in, register __d0 int inl)
{
	return(EVP_CipherUpdate(ctx, out, outl, in, inl));
}

__asm __saveds int EVP_CipherFinal_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 unsigned char *outm, register __a2 int *outl)
{
	return(EVP_CipherFinal(ctx, outm, outl));
}

__asm __saveds int EVP_SignFinal_AmiSSL(register __a0 EVP_MD_CTX *ctx, register __a1 unsigned char *md, register __a2 unsigned int *s, register __a3 EVP_PKEY *pkey)
{
	return(EVP_SignFinal(ctx, md, s, pkey));
}

__asm __saveds int EVP_VerifyFinal_AmiSSL(register __a0 EVP_MD_CTX *ctx, register __a1 unsigned char *sigbuf, register __d0 unsigned int siglen, register __a2 EVP_PKEY *pkey)
{
	return(EVP_VerifyFinal(ctx, sigbuf, siglen, pkey));
}

__asm __saveds int EVP_OpenInit_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 EVP_CIPHER *type, register __a2 unsigned char *ek, register __d0 int ekl, register __a3 unsigned char *iv, register __d1 EVP_PKEY *priv)
{
	return(EVP_OpenInit(ctx, type, ek, ekl, iv, priv));
}

__asm __saveds int EVP_OpenFinal_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 unsigned char *out, register __a2 int *outl)
{
	return(EVP_OpenFinal(ctx, out, outl));
}

__asm __saveds int EVP_SealInit_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 EVP_CIPHER *type, register __a2 unsigned char **ek, register __a3 int *ekl, register __d0 unsigned char *iv, register __d1 EVP_PKEY **pubk, register __d2 int npubk)
{
	return(EVP_SealInit(ctx, type, ek, ekl, iv, pubk, npubk));
}

__asm __saveds void EVP_SealFinal_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 unsigned char *out, register __a2 int *outl)
{
	EVP_SealFinal(ctx, out, outl);
}

__asm __saveds void EVP_EncodeInit_AmiSSL(register __a0 EVP_ENCODE_CTX *ctx)
{
	EVP_EncodeInit(ctx);
}

__asm __saveds void EVP_EncodeUpdate_AmiSSL(register __a0 EVP_ENCODE_CTX *ctx, register __a1 unsigned char *out, register __a2 int *outl, register __a3 unsigned char *in, register __d0 int inl)
{
	EVP_EncodeUpdate(ctx, out, outl, in, inl);
}

__asm __saveds void EVP_EncodeFinal_AmiSSL(register __a0 EVP_ENCODE_CTX *ctx, register __a1 unsigned char *out, register __a2 int *outl)
{
	EVP_EncodeFinal(ctx, out, outl);
}

__asm __saveds int EVP_EncodeBlock_AmiSSL(register __a0 unsigned char *t, register __a1 const unsigned char *f, register __d0 int n)
{
	return(EVP_EncodeBlock(t, f, n));
}

__asm __saveds void EVP_DecodeInit_AmiSSL(register __a0 EVP_ENCODE_CTX *ctx)
{
	EVP_DecodeInit(ctx);
}

__asm __saveds int EVP_DecodeUpdate_AmiSSL(register __a0 EVP_ENCODE_CTX *ctx, register __a1 unsigned char *out, register __a2 int *outl, register __a3 unsigned char *in, register __d0 int inl)
{
	return(EVP_DecodeUpdate(ctx, out, outl, in, inl));
}

__asm __saveds int EVP_DecodeFinal_AmiSSL(register __a0 EVP_ENCODE_CTX *ctx, register __a1 unsigned char *out, register __a2 int *outl)
{
	return(EVP_DecodeFinal(ctx, out, outl));
}

__asm __saveds int EVP_DecodeBlock_AmiSSL(register __a0 unsigned char *t, register __a1 const unsigned char *f, register __d0 int n)
{
	return(EVP_DecodeBlock(t, f, n));
}

__asm __saveds void EVP_CIPHER_CTX_init_AmiSSL(register __a0 EVP_CIPHER_CTX *a)
{
	EVP_CIPHER_CTX_init(a);
}

__asm __saveds int EVP_CIPHER_CTX_cleanup_AmiSSL(register __a0 EVP_CIPHER_CTX *a)
{
	return(EVP_CIPHER_CTX_cleanup(a));
}

__asm __saveds int EVP_CIPHER_CTX_set_key_length_AmiSSL(register __a0 EVP_CIPHER_CTX *x, register __d0 int keylen)
{
	return(EVP_CIPHER_CTX_set_key_length(x, keylen));
}

__asm __saveds int EVP_CIPHER_CTX_ctrl_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __d0 int type, register __d1 int arg, register __a1 void *ptr)
{
	return(EVP_CIPHER_CTX_ctrl(ctx, type, arg, ptr));
}

__asm __saveds BIO_METHOD *BIO_f_md_AmiSSL(void)
{
	return(BIO_f_md());
}

__asm __saveds BIO_METHOD *BIO_f_base64_AmiSSL(void)
{
	return(BIO_f_base64());
}

__asm __saveds BIO_METHOD *BIO_f_cipher_AmiSSL(void)
{
	return(BIO_f_cipher());
}

__asm __saveds BIO_METHOD *BIO_f_reliable_AmiSSL(void)
{
	return(BIO_f_reliable());
}

__asm __saveds void BIO_set_cipher_AmiSSL(register __a0 BIO *b, register __a1 const EVP_CIPHER *c, register __a2 unsigned char *k, register __a3 unsigned char *i, register __d0 int enc)
{
	BIO_set_cipher(b, c, k, i, enc);
}

__asm __saveds EVP_MD *EVP_md_null_AmiSSL(void)
{
	return(EVP_md_null());
}

__asm __saveds EVP_MD *EVP_md2_AmiSSL(void)
{
	return(EVP_md2());
}

__asm __saveds EVP_MD *EVP_md4_AmiSSL(void)
{
	return(EVP_md4());
}

__asm __saveds EVP_MD *EVP_md5_AmiSSL(void)
{
	return(EVP_md5());
}

__asm __saveds EVP_MD *EVP_sha_AmiSSL(void)
{
	return(EVP_sha());
}

__asm __saveds EVP_MD *EVP_sha1_AmiSSL(void)
{
	return(EVP_sha1());
}

__asm __saveds EVP_MD *EVP_dss_AmiSSL(void)
{
	return(EVP_dss());
}

__asm __saveds EVP_MD *EVP_dss1_AmiSSL(void)
{
	return(EVP_dss1());
}

__asm __saveds EVP_MD *EVP_mdc2_AmiSSL(void)
{
	return(EVP_mdc2());
}

__asm __saveds EVP_MD *EVP_ripemd160_AmiSSL(void)
{
	return(EVP_ripemd160());
}

__asm __saveds EVP_CIPHER *EVP_enc_null_AmiSSL(void)
{
	return(EVP_enc_null());
}

__asm __saveds EVP_CIPHER *EVP_des_ecb_AmiSSL(void)
{
	return(EVP_des_ecb());
}

__asm __saveds EVP_CIPHER *EVP_des_ede_AmiSSL(void)
{
	return(EVP_des_ede());
}

__asm __saveds EVP_CIPHER *EVP_des_ede3_AmiSSL(void)
{
	return(EVP_des_ede3());
}

__asm __saveds EVP_CIPHER *EVP_des_cfb_AmiSSL(void)
{
	return(EVP_des_cfb());
}

__asm __saveds EVP_CIPHER *EVP_des_ede_cfb_AmiSSL(void)
{
	return(EVP_des_ede_cfb());
}

__asm __saveds EVP_CIPHER *EVP_des_ede3_cfb_AmiSSL(void)
{
	return(EVP_des_ede3_cfb());
}

__asm __saveds EVP_CIPHER *EVP_des_ofb_AmiSSL(void)
{
	return(EVP_des_ofb());
}

__asm __saveds EVP_CIPHER *EVP_des_ede_ofb_AmiSSL(void)
{
	return(EVP_des_ede_ofb());
}

__asm __saveds EVP_CIPHER *EVP_des_ede3_ofb_AmiSSL(void)
{
	return(EVP_des_ede3_ofb());
}

__asm __saveds EVP_CIPHER *EVP_des_cbc_AmiSSL(void)
{
	return(EVP_des_cbc());
}

__asm __saveds EVP_CIPHER *EVP_des_ede_cbc_AmiSSL(void)
{
	return(EVP_des_ede_cbc());
}

__asm __saveds EVP_CIPHER *EVP_des_ede3_cbc_AmiSSL(void)
{
	return(EVP_des_ede3_cbc());
}

__asm __saveds EVP_CIPHER *EVP_desx_cbc_AmiSSL(void)
{
	return(EVP_desx_cbc());
}

__asm __saveds EVP_CIPHER *EVP_rc4_AmiSSL(void)
{
	return(EVP_rc4());
}

__asm __saveds EVP_CIPHER *EVP_rc4_40_AmiSSL(void)
{
	return(EVP_rc4_40());
}

__asm __saveds EVP_CIPHER *EVP_idea_ecb_AmiSSL(void)
{
	return(EVP_idea_ecb());
}

__asm __saveds EVP_CIPHER *EVP_idea_cfb_AmiSSL(void)
{
	return(EVP_idea_cfb());
}

__asm __saveds EVP_CIPHER *EVP_idea_ofb_AmiSSL(void)
{
	return(EVP_idea_ofb());
}

__asm __saveds EVP_CIPHER *EVP_idea_cbc_AmiSSL(void)
{
	return(EVP_idea_cbc());
}

__asm __saveds EVP_CIPHER *EVP_rc2_ecb_AmiSSL(void)
{
	return(EVP_rc2_ecb());
}

__asm __saveds EVP_CIPHER *EVP_rc2_cbc_AmiSSL(void)
{
	return(EVP_rc2_cbc());
}

__asm __saveds EVP_CIPHER *EVP_rc2_40_cbc_AmiSSL(void)
{
	return(EVP_rc2_40_cbc());
}

__asm __saveds EVP_CIPHER *EVP_rc2_64_cbc_AmiSSL(void)
{
	return(EVP_rc2_64_cbc());
}

__asm __saveds EVP_CIPHER *EVP_rc2_cfb_AmiSSL(void)
{
	return(EVP_rc2_cfb());
}

__asm __saveds EVP_CIPHER *EVP_rc2_ofb_AmiSSL(void)
{
	return(EVP_rc2_ofb());
}

__asm __saveds EVP_CIPHER *EVP_bf_ecb_AmiSSL(void)
{
	return(EVP_bf_ecb());
}

__asm __saveds EVP_CIPHER *EVP_bf_cbc_AmiSSL(void)
{
	return(EVP_bf_cbc());
}

__asm __saveds EVP_CIPHER *EVP_bf_cfb_AmiSSL(void)
{
	return(EVP_bf_cfb());
}

__asm __saveds EVP_CIPHER *EVP_bf_ofb_AmiSSL(void)
{
	return(EVP_bf_ofb());
}

__asm __saveds EVP_CIPHER *EVP_cast5_ecb_AmiSSL(void)
{
	return(EVP_cast5_ecb());
}

__asm __saveds EVP_CIPHER *EVP_cast5_cbc_AmiSSL(void)
{
	return(EVP_cast5_cbc());
}

__asm __saveds EVP_CIPHER *EVP_cast5_cfb_AmiSSL(void)
{
	return(EVP_cast5_cfb());
}

__asm __saveds EVP_CIPHER *EVP_cast5_ofb_AmiSSL(void)
{
	return(EVP_cast5_ofb());
}

__asm __saveds EVP_CIPHER *EVP_rc5_32_12_16_cbc_AmiSSL(void)
{
	return(EVP_rc5_32_12_16_cbc());
}

__asm __saveds EVP_CIPHER *EVP_rc5_32_12_16_ecb_AmiSSL(void)
{
	return(EVP_rc5_32_12_16_ecb());
}

__asm __saveds EVP_CIPHER *EVP_rc5_32_12_16_cfb_AmiSSL(void)
{
	return(EVP_rc5_32_12_16_cfb());
}

__asm __saveds EVP_CIPHER *EVP_rc5_32_12_16_ofb_AmiSSL(void)
{
	return(EVP_rc5_32_12_16_ofb());
}

__asm __saveds void OpenSSL_add_all_algorithms_AmiSSL(void)
{
	OpenSSL_add_all_algorithms();
}

__asm __saveds void OpenSSL_add_all_ciphers_AmiSSL(void)
{
	OpenSSL_add_all_ciphers();
}

__asm __saveds void OpenSSL_add_all_digests_AmiSSL(void)
{
	OpenSSL_add_all_digests();
}

__asm __saveds int EVP_add_cipher_AmiSSL(register __a0 EVP_CIPHER *cipher)
{
	return(EVP_add_cipher(cipher));
}

__asm __saveds int EVP_add_digest_AmiSSL(register __a0 EVP_MD *digest)
{
	return(EVP_add_digest(digest));
}

__asm __saveds const EVP_CIPHER *EVP_get_cipherbyname_AmiSSL(register __a0 const char *name)
{
	return(EVP_get_cipherbyname(name));
}

__asm __saveds const EVP_MD *EVP_get_digestbyname_AmiSSL(register __a0 const char *name)
{
	return(EVP_get_digestbyname(name));
}

__asm __saveds void EVP_cleanup_AmiSSL(void)
{
	EVP_cleanup();
}

__asm __saveds int EVP_PKEY_decrypt_AmiSSL(register __a0 unsigned char *dec_key, register __a1 unsigned char *enc_key, register __d0 int enc_key_len, register __a2 EVP_PKEY *private_key)
{
	return(EVP_PKEY_decrypt(dec_key, enc_key, enc_key_len, private_key));
}

__asm __saveds int EVP_PKEY_encrypt_AmiSSL(register __a0 unsigned char *enc_key, register __a1 unsigned char *key, register __d0 int key_len, register __a2 EVP_PKEY *pub_key)
{
	return(EVP_PKEY_encrypt(enc_key, key, key_len, pub_key));
}

__asm __saveds int EVP_PKEY_type_AmiSSL(register __d0 int type)
{
	return(EVP_PKEY_type(type));
}

__asm __saveds int EVP_PKEY_bits_AmiSSL(register __a0 EVP_PKEY *pkey)
{
	return(EVP_PKEY_bits(pkey));
}

__asm __saveds int EVP_PKEY_size_AmiSSL(register __a0 EVP_PKEY *pkey)
{
	return(EVP_PKEY_size(pkey));
}

__asm __saveds int EVP_PKEY_assign_AmiSSL(register __a0 EVP_PKEY *pkey, register __d0 int type, register __a1 char *key)
{
	return(EVP_PKEY_assign(pkey, type, key));
}

__asm __saveds int EVP_PKEY_set1_RSA_AmiSSL(register __a0 EVP_PKEY *pkey, register __a1 RSA *key)
{
	return(EVP_PKEY_set1_RSA(pkey, key));
}

__asm __saveds RSA *EVP_PKEY_get1_RSA_AmiSSL(register __a0 EVP_PKEY *pkey)
{
	return(EVP_PKEY_get1_RSA(pkey));
}

__asm __saveds int EVP_PKEY_set1_DSA_AmiSSL(register __a0 EVP_PKEY *pkey, register __a1 DSA *key)
{
	return(EVP_PKEY_set1_DSA(pkey, key));
}

__asm __saveds DSA *EVP_PKEY_get1_DSA_AmiSSL(register __a0 EVP_PKEY *pkey)
{
	return(EVP_PKEY_get1_DSA(pkey));
}

__asm __saveds int EVP_PKEY_set1_DH_AmiSSL(register __a0 EVP_PKEY *pkey, register __a1 DH *key)
{
	return(EVP_PKEY_set1_DH(pkey, key));
}

__asm __saveds DH *EVP_PKEY_get1_DH_AmiSSL(register __a0 EVP_PKEY *pkey)
{
	return(EVP_PKEY_get1_DH(pkey));
}

__asm __saveds EVP_PKEY *EVP_PKEY_new_AmiSSL(void)
{
	return(EVP_PKEY_new());
}

__asm __saveds void EVP_PKEY_free_AmiSSL(register __a0 EVP_PKEY *pkey)
{
	EVP_PKEY_free(pkey);
}

__asm __saveds EVP_PKEY *d2i_PublicKey_AmiSSL(register __d0 int type, register __a0 EVP_PKEY **a, register __a1 unsigned char **pp, register __d1 long length)
{
	return(d2i_PublicKey(type, a, pp, length));
}

__asm __saveds int i2d_PublicKey_AmiSSL(register __a0 EVP_PKEY *a, register __a1 unsigned char **pp)
{
	return(i2d_PublicKey(a, pp));
}

__asm __saveds EVP_PKEY *d2i_PrivateKey_AmiSSL(register __d0 int type, register __a0 EVP_PKEY **a, register __a1 unsigned char **pp, register __d1 long length)
{
	return(d2i_PrivateKey(type, a, pp, length));
}

__asm __saveds EVP_PKEY *d2i_AutoPrivateKey_AmiSSL(register __a0 EVP_PKEY **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_AutoPrivateKey(a, pp, length));
}

__asm __saveds int i2d_PrivateKey_AmiSSL(register __a0 EVP_PKEY *a, register __a1 unsigned char **pp)
{
	return(i2d_PrivateKey(a, pp));
}

__asm __saveds int EVP_PKEY_copy_parameters_AmiSSL(register __a0 EVP_PKEY *to, register __a1 EVP_PKEY *from)
{
	return(EVP_PKEY_copy_parameters(to, from));
}

__asm __saveds int EVP_PKEY_missing_parameters_AmiSSL(register __a0 EVP_PKEY *pkey)
{
	return(EVP_PKEY_missing_parameters(pkey));
}

__asm __saveds int EVP_PKEY_save_parameters_AmiSSL(register __a0 EVP_PKEY *pkey, register __d0 int mode)
{
	return(EVP_PKEY_save_parameters(pkey, mode));
}

__asm __saveds int EVP_PKEY_cmp_parameters_AmiSSL(register __a0 EVP_PKEY *a, register __a1 EVP_PKEY *b)
{
	return(EVP_PKEY_cmp_parameters(a, b));
}

__asm __saveds int EVP_CIPHER_type_AmiSSL(register __a0 const EVP_CIPHER *ctx)
{
	return(EVP_CIPHER_type(ctx));
}

__asm __saveds int EVP_CIPHER_param_to_asn1_AmiSSL(register __a0 EVP_CIPHER_CTX *c, register __a1 ASN1_TYPE *type)
{
	return(EVP_CIPHER_param_to_asn1(c, type));
}

__asm __saveds int EVP_CIPHER_asn1_to_param_AmiSSL(register __a0 EVP_CIPHER_CTX *c, register __a1 ASN1_TYPE *type)
{
	return(EVP_CIPHER_asn1_to_param(c, type));
}

__asm __saveds int EVP_CIPHER_set_asn1_iv_AmiSSL(register __a0 EVP_CIPHER_CTX *c, register __a1 ASN1_TYPE *type)
{
	return(EVP_CIPHER_set_asn1_iv(c, type));
}

__asm __saveds int EVP_CIPHER_get_asn1_iv_AmiSSL(register __a0 EVP_CIPHER_CTX *c, register __a1 ASN1_TYPE *type)
{
	return(EVP_CIPHER_get_asn1_iv(c, type));
}

__asm __saveds int PKCS5_PBE_keyivgen_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 const char *pass, register __d0 int passlen, register __a2 ASN1_TYPE *param, register __a3 EVP_CIPHER *cipher, register __d1 EVP_MD *md, register __d2 int en_de)
{
	return(PKCS5_PBE_keyivgen(ctx, pass, passlen, param, cipher, md, en_de));
}

__asm __saveds int PKCS5_PBKDF2_HMAC_SHA1_AmiSSL(register __a0 const char *pass, register __d0 int passlen, register __a1 unsigned char *salt, register __d1 int saltlen, register __d2 int iter, register __d3 int keylen, register __a2 unsigned char *out)
{
	return(PKCS5_PBKDF2_HMAC_SHA1(pass, passlen, salt, saltlen, iter, keylen, out));
}

__asm __saveds int PKCS5_v2_PBE_keyivgen_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 const char *pass, register __d0 int passlen, register __a2 ASN1_TYPE *param, register __a3 EVP_CIPHER *cipher, register __d1 EVP_MD *md, register __d2 int en_de)
{
	return(PKCS5_v2_PBE_keyivgen(ctx, pass, passlen, param, cipher, md, en_de));
}

__asm __saveds void PKCS5_PBE_add_AmiSSL(void)
{
	PKCS5_PBE_add();
}

__asm __saveds int EVP_PBE_CipherInit_AmiSSL(register __a0 ASN1_OBJECT *pbe_obj, register __a1 const char *pass, register __d0 int passlen, register __a2 ASN1_TYPE *param, register __a3 EVP_CIPHER_CTX *ctx, register __d1 int en_de)
{
	return(EVP_PBE_CipherInit(pbe_obj, pass, passlen, param, ctx, en_de));
}

__asm __saveds int EVP_PBE_alg_add_AmiSSL(register __d0 int nid, register __a0 EVP_CIPHER *cipher, register __a1 EVP_MD *md, register __a2 EVP_PBE_KEYGEN *keygen)
{
	return(EVP_PBE_alg_add(nid, cipher, md, keygen));
}

__asm __saveds void EVP_PBE_cleanup_AmiSSL(void)
{
	EVP_PBE_cleanup();
}

__asm __saveds void ERR_load_EVP_strings_AmiSSL(void)
{
	ERR_load_EVP_strings();
}

__asm __saveds void HMAC_Init_AmiSSL(register __a0 HMAC_CTX *ctx, register __a1 const void *key, register __d0 int len, register __a2 const EVP_MD *md)
{
	HMAC_Init(ctx, key, len, md);
}

__asm __saveds void HMAC_Update_AmiSSL(register __a0 HMAC_CTX *ctx, register __a1 const unsigned char *data, register __d0 int len)
{
	HMAC_Update(ctx, data, len);
}

__asm __saveds void HMAC_Final_AmiSSL(register __a0 HMAC_CTX *ctx, register __a1 unsigned char *md, register __a2 unsigned int *len)
{
	HMAC_Final(ctx, md, len);
}

__asm __saveds void HMAC_cleanup_AmiSSL(register __a0 HMAC_CTX *ctx)
{
	HMAC_cleanup(ctx);
}

__asm __saveds unsigned char *HMAC_AmiSSL(register __a0 const EVP_MD *evp_md, register __a1 const void *key, register __d0 int key_len, register __a2 const unsigned char *d, register __d1 int n, register __a3 unsigned char *md, register __d2 unsigned int *md_len)
{
	return(HMAC(evp_md, key, key_len, d, n, md, md_len));
}

__asm __saveds LHASH *lh_new_AmiSSL(register __a0 unsigned long (*h)(), register __a1 int (*c)())
{
	return(lh_new(h, c));
}

__asm __saveds void lh_free_AmiSSL(register __a0 LHASH *lh)
{
	lh_free(lh);
}

__asm __saveds void *lh_insert_AmiSSL(register __a0 LHASH *lh, register __a1 void *data)
{
	return(lh_insert(lh, data));
}

__asm __saveds void *lh_delete_AmiSSL(register __a0 LHASH *lh, register __a1 void *data)
{
	return(lh_delete(lh, data));
}

__asm __saveds void *lh_retrieve_AmiSSL(register __a0 LHASH *lh, register __a1 void *data)
{
	return(lh_retrieve(lh, data));
}

__asm __saveds void lh_doall_AmiSSL(register __a0 LHASH *lh, register __a1 void (*func)())
{
	lh_doall(lh, func);
}

__asm __saveds void lh_doall_arg_AmiSSL(register __a0 LHASH *lh, register __a1 void (*func)(), register __a2 void *arg)
{
	lh_doall_arg(lh, func, arg);
}

__asm __saveds unsigned long lh_strhash_AmiSSL(register __a0 const char *c)
{
	return(lh_strhash(c));
}

__asm __saveds unsigned long lh_num_items_AmiSSL(register __a0 LHASH *lh)
{
	return(lh_num_items(lh));
}

__asm __saveds void lh_stats_bio_AmiSSL(register __a0 LHASH *lh, register __a1 BIO *out)
{
	lh_stats_bio(lh, out);
}

__asm __saveds void lh_node_stats_bio_AmiSSL(register __a0 LHASH *lh, register __a1 BIO *out)
{
	lh_node_stats_bio(lh, out);
}

__asm __saveds void lh_node_usage_stats_bio_AmiSSL(register __a0 LHASH *lh, register __a1 BIO *out)
{
	lh_node_usage_stats_bio(lh, out);
}

__asm __saveds int OBJ_NAME_init_AmiSSL(void)
{
	return(OBJ_NAME_init());
}

__asm __saveds int OBJ_NAME_new_index_AmiSSL(register __a0 unsigned long (*hash_func)(const char *), register __a1 int (*cmp_func)(const void *, const void *), register __a2 void (*free_func)(const char *, int, const char *))
{
	return(OBJ_NAME_new_index(hash_func, cmp_func, free_func));
}

__asm __saveds const char *OBJ_NAME_get_AmiSSL(register __a0 const char *name, register __d0 int type)
{
	return(OBJ_NAME_get(name, type));
}

__asm __saveds int OBJ_NAME_add_AmiSSL(register __a0 const char *name, register __d0 int type, register __a1 const char *data)
{
	return(OBJ_NAME_add(name, type, data));
}

__asm __saveds int OBJ_NAME_remove_AmiSSL(register __a0 const char *name, register __d0 int type)
{
	return(OBJ_NAME_remove(name, type));
}

__asm __saveds void OBJ_NAME_cleanup_AmiSSL(register __d0 int type)
{
	OBJ_NAME_cleanup(type);
}

__asm __saveds ASN1_OBJECT *OBJ_dup_AmiSSL(register __a0 ASN1_OBJECT *o)
{
	return(OBJ_dup(o));
}

__asm __saveds ASN1_OBJECT *OBJ_nid2obj_AmiSSL(register __d0 int n)
{
	return(OBJ_nid2obj(n));
}

__asm __saveds const char *OBJ_nid2ln_AmiSSL(register __d0 int n)
{
	return(OBJ_nid2ln(n));
}

__asm __saveds const char *OBJ_nid2sn_AmiSSL(register __d0 int n)
{
	return(OBJ_nid2sn(n));
}

__asm __saveds int OBJ_obj2nid_AmiSSL(register __a0 ASN1_OBJECT *o)
{
	return(OBJ_obj2nid(o));
}

__asm __saveds ASN1_OBJECT *OBJ_txt2obj_AmiSSL(register __a0 const char *s, register __d0 int no_name)
{
	return(OBJ_txt2obj(s, no_name));
}

__asm __saveds int OBJ_obj2txt_AmiSSL(register __a0 char *buf, register __d0 int buf_len, register __a1 ASN1_OBJECT *a, register __d1 int no_name)
{
	return(OBJ_obj2txt(buf, buf_len, a, no_name));
}

__asm __saveds int OBJ_txt2nid_AmiSSL(register __a0 char *s)
{
	return(OBJ_txt2nid(s));
}

__asm __saveds int OBJ_ln2nid_AmiSSL(register __a0 const char *s)
{
	return(OBJ_ln2nid(s));
}

__asm __saveds int OBJ_sn2nid_AmiSSL(register __a0 const char *s)
{
	return(OBJ_sn2nid(s));
}

__asm __saveds int OBJ_cmp_AmiSSL(register __a0 ASN1_OBJECT *a, register __a1 ASN1_OBJECT *b)
{
	return(OBJ_cmp(a, b));
}

__asm __saveds char *OBJ_bsearch_AmiSSL(register __a0 char *key, register __a1 char *base, register __d0 int num, register __d1 int size, register __a2 int (*cmp)(const void *, const void *))
{
	return(OBJ_bsearch(key, base, num, size, cmp));
}

__asm __saveds int OBJ_new_nid_AmiSSL(register __d0 int num)
{
	return(OBJ_new_nid(num));
}

__asm __saveds int OBJ_add_object_AmiSSL(register __a0 ASN1_OBJECT *obj)
{
	return(OBJ_add_object(obj));
}

__asm __saveds int OBJ_create_AmiSSL(register __a0 char *oid, register __a1 char *sn, register __a2 char *ln)
{
	return(OBJ_create(oid, sn, ln));
}

__asm __saveds void OBJ_cleanup_AmiSSL(void)
{
	OBJ_cleanup();
}

__asm __saveds int OBJ_create_objects_AmiSSL(register __a0 BIO *in)
{
	return(OBJ_create_objects(in));
}

__asm __saveds void ERR_load_OBJ_strings_AmiSSL(void)
{
	ERR_load_OBJ_strings();
}

__asm __saveds int PEM_get_EVP_CIPHER_INFO_AmiSSL(register __a0 char *header, register __a1 EVP_CIPHER_INFO *cipher)
{
	return(PEM_get_EVP_CIPHER_INFO(header, cipher));
}

__asm __saveds int PEM_do_header_AmiSSL(register __a0 EVP_CIPHER_INFO *cipher, register __a1 unsigned char *data, register __a2 long *len, register __a3 pem_password_cb *callback, register __d0 void *u)
{
	return(PEM_do_header(cipher, data, len, callback, u));
}

__asm __saveds int PEM_read_bio_AmiSSL(register __a0 BIO *bp, register __a1 char **name, register __a2 char **header, register __a3 unsigned char **data, register __d0 long *len)
{
	return(PEM_read_bio(bp, name, header, data, len));
}

__asm __saveds int PEM_write_bio_AmiSSL(register __a0 BIO *bp, register __a1 const char *name, register __a2 char *hdr, register __a3 unsigned char *data, register __d0 long len)
{
	return(PEM_write_bio(bp, name, hdr, data, len));
}

__asm __saveds char *PEM_ASN1_read_bio_AmiSSL(register __a0 char *(*d2i)(), register __a1 const char *name, register __a2 BIO *bp, register __a3 char **x, register __d0 pem_password_cb *cb, register __d1 void *u)
{
	return(PEM_ASN1_read_bio(d2i, name, bp, x, cb, u));
}

__asm __saveds int PEM_ASN1_write_bio_AmiSSL(register __a0 int (*i2d)(), register __a1 const char *name, register __a2 BIO *bp, register __a3 char *x, register __d0 const EVP_CIPHER *enc, register __d1 unsigned char *kstr, register __d2 int klen, register __d3 pem_password_cb *cb, register __d4 void *u)
{
	return(PEM_ASN1_write_bio(i2d, name, bp, x, enc, kstr, klen, cb, u));
}

__asm __saveds STACK_OF(X509_INFO) *PEM_X509_INFO_read_bio_AmiSSL(register __a0 BIO *bp, register __a1 STACK_OF(X509_INFO) *sk, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_X509_INFO_read_bio(bp, sk, cb, u));
}

__asm __saveds int PEM_X509_INFO_write_bio_AmiSSL(register __a0 BIO *bp, register __a1 X509_INFO *xi, register __a2 EVP_CIPHER *enc, register __a3 unsigned char *kstr, register __d0 int klen, register __d1 pem_password_cb *cd, register __d2 void *u)
{
	return(PEM_X509_INFO_write_bio(bp, xi, enc, kstr, klen, cd, u));
}

__asm __saveds int PEM_SealInit_AmiSSL(register __a0 PEM_ENCODE_SEAL_CTX *ctx, register __a1 EVP_CIPHER *type, register __a2 EVP_MD *md_type, register __a3 unsigned char **ek, register __d0 int *ekl, register __d1 unsigned char *iv, register __d2 EVP_PKEY **pubk, register __d3 int npubk)
{
	return(PEM_SealInit(ctx, type, md_type, ek, ekl, iv, pubk, npubk));
}

__asm __saveds void PEM_SealUpdate_AmiSSL(register __a0 PEM_ENCODE_SEAL_CTX *ctx, register __a1 unsigned char *out, register __a2 int *outl, register __a3 unsigned char *in, register __d0 int inl)
{
	PEM_SealUpdate(ctx, out, outl, in, inl);
}

__asm __saveds int PEM_SealFinal_AmiSSL(register __a0 PEM_ENCODE_SEAL_CTX *ctx, register __a1 unsigned char *sig, register __a2 int *sigl, register __a3 unsigned char *out, register __d0 int *outl, register __d1 EVP_PKEY *priv)
{
	return(PEM_SealFinal(ctx, sig, sigl, out, outl, priv));
}

__asm __saveds void PEM_SignInit_AmiSSL(register __a0 EVP_MD_CTX *ctx, register __a1 EVP_MD *type)
{
	PEM_SignInit(ctx, type);
}

__asm __saveds void PEM_SignUpdate_AmiSSL(register __a0 EVP_MD_CTX *ctx, register __a1 unsigned char *d, register __d0 unsigned int cnt)
{
	PEM_SignUpdate(ctx, d, cnt);
}

__asm __saveds int PEM_SignFinal_AmiSSL(register __a0 EVP_MD_CTX *ctx, register __a1 unsigned char *sigret, register __a2 unsigned int *siglen, register __a3 EVP_PKEY *pkey)
{
	return(PEM_SignFinal(ctx, sigret, siglen, pkey));
}

__asm __saveds void PEM_proc_type_AmiSSL(register __a0 char *buf, register __d0 int type)
{
	PEM_proc_type(buf, type);
}

__asm __saveds void PEM_dek_info_AmiSSL(register __a0 char *buf, register __a1 const char *type, register __d0 int len, register __a2 char *str)
{
	PEM_dek_info(buf, type, len, str);
}

__asm __saveds X509 *PEM_read_bio_X509_AmiSSL(register __a0 BIO *bp, register __a1 X509 **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_X509(bp, x, cb, u));
}

__asm __saveds X509 *PEM_read_bio_X509_AUX_AmiSSL(register __a0 BIO *bp, register __a1 X509 **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_X509_AUX(bp, x, cb, u));
}

__asm __saveds X509_REQ *PEM_read_bio_X509_REQ_AmiSSL(register __a0 BIO *bp, register __a1 X509_REQ **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_X509_REQ(bp, x, cb, u));
}

__asm __saveds X509_CRL *PEM_read_bio_X509_CRL_AmiSSL(register __a0 BIO *bp, register __a1 X509_CRL **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_X509_CRL(bp, x, cb, u));
}

__asm __saveds PKCS7 *PEM_read_bio_PKCS7_AmiSSL(register __a0 BIO *bp, register __a1 PKCS7 **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_PKCS7(bp, x, cb, u));
}

__asm __saveds NETSCAPE_CERT_SEQUENCE *PEM_read_bio_NETSCAPE_CERT_SEQUENCE_AmiSSL(register __a0 BIO *bp, register __a1 NETSCAPE_CERT_SEQUENCE **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_NETSCAPE_CERT_SEQUENCE(bp, x, cb, u));
}

__asm __saveds X509_SIG *PEM_read_bio_PKCS8_AmiSSL(register __a0 BIO *bp, register __a1 X509_SIG **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_PKCS8(bp, x, cb, u));
}

__asm __saveds PKCS8_PRIV_KEY_INFO *PEM_read_bio_PKCS8_PRIV_KEY_INFO_AmiSSL(register __a0 BIO *bp, register __a1 PKCS8_PRIV_KEY_INFO **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_PKCS8_PRIV_KEY_INFO(bp, x, cb, u));
}

__asm __saveds RSA *PEM_read_bio_RSAPrivateKey_AmiSSL(register __a0 BIO *bp, register __a1 RSA **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_RSAPrivateKey(bp, x, cb, u));
}

__asm __saveds RSA *PEM_read_bio_RSAPublicKey_AmiSSL(register __a0 BIO *bp, register __a1 RSA **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_RSAPublicKey(bp, x, cb, u));
}

__asm __saveds RSA *PEM_read_bio_RSA_PUBKEY_AmiSSL(register __a0 BIO *bp, register __a1 RSA **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_RSA_PUBKEY(bp, x, cb, u));
}

__asm __saveds DSA *PEM_read_bio_DSAPrivateKey_AmiSSL(register __a0 BIO *bp, register __a1 DSA **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_DSAPrivateKey(bp, x, cb, u));
}

__asm __saveds DSA *PEM_read_bio_DSA_PUBKEY_AmiSSL(register __a0 BIO *bp, register __a1 DSA **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_DSA_PUBKEY(bp, x, cb, u));
}

__asm __saveds DSA *PEM_read_bio_DSAparams_AmiSSL(register __a0 BIO *bp, register __a1 DSA **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_DSAparams(bp, x, cb, u));
}

__asm __saveds DH *PEM_read_bio_DHparams_AmiSSL(register __a0 BIO *bp, register __a1 DH **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_DHparams(bp, x, cb, u));
}

__asm __saveds EVP_PKEY *PEM_read_bio_PrivateKey_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_PrivateKey(bp, x, cb, u));
}

__asm __saveds EVP_PKEY *PEM_read_bio_PUBKEY_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(PEM_read_bio_PUBKEY(bp, x, cb, u));
}

__asm __saveds int PEM_write_bio_X509_AmiSSL(register __a0 BIO *bp, register __a1 X509 *x)
{
	return(PEM_write_bio_X509(bp, x));
}

__asm __saveds int PEM_write_bio_X509_AUX_AmiSSL(register __a0 BIO *bp, register __a1 X509 *x)
{
	return(PEM_write_bio_X509_AUX(bp, x));
}

__asm __saveds int PEM_write_bio_X509_REQ_AmiSSL(register __a0 BIO *bp, register __a1 X509_REQ *x)
{
	return(PEM_write_bio_X509_REQ(bp, x));
}

__asm __saveds int PEM_write_bio_X509_REQ_NEW_AmiSSL(register __a0 BIO *bp, register __a1 X509_REQ *x)
{
	return(PEM_write_bio_X509_REQ_NEW(bp, x));
}

__asm __saveds int PEM_write_bio_X509_CRL_AmiSSL(register __a0 BIO *bp, register __a1 X509_CRL *x)
{
	return(PEM_write_bio_X509_CRL(bp, x));
}

__asm __saveds int PEM_write_bio_PKCS7_AmiSSL(register __a0 BIO *bp, register __a1 PKCS7 *x)
{
	return(PEM_write_bio_PKCS7(bp, x));
}

__asm __saveds int PEM_write_bio_NETSCAPE_CERT_SEQUENCE_AmiSSL(register __a0 BIO *bp, register __a1 NETSCAPE_CERT_SEQUENCE *x)
{
	return(PEM_write_bio_NETSCAPE_CERT_SEQUENCE(bp, x));
}

__asm __saveds int PEM_write_bio_PKCS8_AmiSSL(register __a0 BIO *bp, register __a1 X509_SIG *x)
{
	return(PEM_write_bio_PKCS8(bp, x));
}

__asm __saveds int PEM_write_bio_PKCS8_PRIV_KEY_INFO_AmiSSL(register __a0 BIO *bp, register __a1 PKCS8_PRIV_KEY_INFO *x)
{
	return(PEM_write_bio_PKCS8_PRIV_KEY_INFO(bp, x));
}

__asm __saveds int PEM_write_bio_RSAPrivateKey_AmiSSL(register __a0 BIO *bp, register __a1 RSA *x, register __a2 const EVP_CIPHER *enc, register __a3 unsigned char *kstr, register __d0 int klen, register __d1 pem_password_cb *cb, register __d2 void *u)
{
	return(PEM_write_bio_RSAPrivateKey(bp, x, enc, kstr, klen, cb, u));
}

__asm __saveds int PEM_write_bio_RSAPublicKey_AmiSSL(register __a0 BIO *bp, register __a1 RSA *x)
{
	return(PEM_write_bio_RSAPublicKey(bp, x));
}

__asm __saveds int PEM_write_bio_RSA_PUBKEY_AmiSSL(register __a0 BIO *bp, register __a1 RSA *x)
{
	return(PEM_write_bio_RSA_PUBKEY(bp, x));
}

__asm __saveds int PEM_write_bio_DSAPrivateKey_AmiSSL(register __a0 BIO *bp, register __a1 DSA *x, register __a2 const EVP_CIPHER *enc, register __a3 unsigned char *kstr, register __d0 int klen, register __d1 pem_password_cb *cb, register __d2 void *u)
{
	return(PEM_write_bio_DSAPrivateKey(bp, x, enc, kstr, klen, cb, u));
}

__asm __saveds int PEM_write_bio_DSA_PUBKEY_AmiSSL(register __a0 BIO *bp, register __a1 DSA *x)
{
	return(PEM_write_bio_DSA_PUBKEY(bp, x));
}

__asm __saveds int PEM_write_bio_DSAparams_AmiSSL(register __a0 BIO *bp, register __a1 DSA *x)
{
	return(PEM_write_bio_DSAparams(bp, x));
}

__asm __saveds int PEM_write_bio_DHparams_AmiSSL(register __a0 BIO *bp, register __a1 DH *x)
{
	return(PEM_write_bio_DHparams(bp, x));
}

__asm __saveds int PEM_write_bio_PrivateKey_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY *x, register __a2 const EVP_CIPHER *enc, register __a3 unsigned char *kstr, register __d0 int klen, register __d1 pem_password_cb *cb, register __d2 void *u)
{
	return(PEM_write_bio_PrivateKey(bp, x, enc, kstr, klen, cb, u));
}

__asm __saveds int PEM_write_bio_PUBKEY_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY *x)
{
	return(PEM_write_bio_PUBKEY(bp, x));
}

__asm __saveds int PEM_write_bio_PKCS8PrivateKey_nid_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY *x, register __d0 int nid, register __a2 char *kstr, register __d1 int klen, register __a3 pem_password_cb *cb, register __d2 void *u)
{
	return(PEM_write_bio_PKCS8PrivateKey_nid(bp, x, nid, kstr, klen, cb, u));
}

__asm __saveds int PEM_write_bio_PKCS8PrivateKey_AmiSSL(register __a0 BIO *a, register __a1 EVP_PKEY *b, register __a2 const EVP_CIPHER *c, register __a3 char *d, register __d0 int e, register __d1 pem_password_cb *f, register __d2 void *g)
{
	return(PEM_write_bio_PKCS8PrivateKey(a, b, c, d, e, f, g));
}

__asm __saveds int i2d_PKCS8PrivateKey_bio_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY *x, register __a2 const EVP_CIPHER *enc, register __a3 char *kstr, register __d0 int klen, register __d1 pem_password_cb *cb, register __d2 void *u)
{
	return(i2d_PKCS8PrivateKey_bio(bp, x, enc, kstr, klen, cb, u));
}

__asm __saveds int i2d_PKCS8PrivateKey_nid_bio_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY *x, register __d0 int nid, register __a2 char *kstr, register __d1 int klen, register __a3 pem_password_cb *cb, register __d2 void *u)
{
	return(i2d_PKCS8PrivateKey_nid_bio(bp, x, nid, kstr, klen, cb, u));
}

__asm __saveds EVP_PKEY *d2i_PKCS8PrivateKey_bio_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY **x, register __a2 pem_password_cb *cb, register __a3 void *u)
{
	return(d2i_PKCS8PrivateKey_bio(bp, x, cb, u));
}

__asm __saveds void ERR_load_PEM_strings_AmiSSL(void)
{
	ERR_load_PEM_strings();
}

__asm __saveds PKCS12_SAFEBAG *PKCS12_pack_safebag_AmiSSL(register __a0 char *obj, register __a1 int (*i2d)(), register __d0 int nid1, register __d1 int nid2)
{
	return(PKCS12_pack_safebag(obj, i2d, nid1, nid2));
}

__asm __saveds PKCS12_SAFEBAG *PKCS12_MAKE_KEYBAG_AmiSSL(register __a0 PKCS8_PRIV_KEY_INFO *p8)
{
	return(PKCS12_MAKE_KEYBAG(p8));
}

__asm __saveds X509_SIG *PKCS8_encrypt_AmiSSL(register __d0 int pbe_nid, register __a0 const EVP_CIPHER *cipher, register __a1 const char *pass, register __d1 int passlen, register __a2 unsigned char *salt, register __d2 int saltlen, register __d3 int iter, register __a3 PKCS8_PRIV_KEY_INFO *p8)
{
	return(PKCS8_encrypt(pbe_nid, cipher, pass, passlen, salt, saltlen, iter, p8));
}

__asm __saveds PKCS12_SAFEBAG *PKCS12_MAKE_SHKEYBAG_AmiSSL(register __d0 int pbe_nid, register __a0 const char *pass, register __d1 int passlen, register __a1 unsigned char *salt, register __d2 int saltlen, register __d3 int iter, register __a2 PKCS8_PRIV_KEY_INFO *p8)
{
	return(PKCS12_MAKE_SHKEYBAG(pbe_nid, pass, passlen, salt, saltlen, iter, p8));
}

__asm __saveds PKCS7 *PKCS12_pack_p7data_AmiSSL(register __a0 STACK_OF(PKCS12_SAFEBAG) *sk)
{
	return(PKCS12_pack_p7data(sk));
}

__asm __saveds PKCS7 *PKCS12_pack_p7encdata_AmiSSL(register __d0 int pbe_nid, register __a0 const char *pass, register __d1 int passlen, register __a1 unsigned char *salt, register __d2 int saltlen, register __d3 int iter, register __a2 STACK_OF(PKCS12_SAFEBAG) *bags)
{
	return(PKCS12_pack_p7encdata(pbe_nid, pass, passlen, salt, saltlen, iter, bags));
}

__asm __saveds int PKCS12_add_localkeyid_AmiSSL(register __a0 PKCS12_SAFEBAG *bag, register __a1 unsigned char *name, register __d0 int namelen)
{
	return(PKCS12_add_localkeyid(bag, name, namelen));
}

__asm __saveds int PKCS12_add_friendlyname_asc_AmiSSL(register __a0 PKCS12_SAFEBAG *bag, register __a1 const char *name, register __d0 int namelen)
{
	return(PKCS12_add_friendlyname_asc(bag, name, namelen));
}

__asm __saveds int PKCS12_add_friendlyname_uni_AmiSSL(register __a0 PKCS12_SAFEBAG *bag, register __a1 const unsigned char *name, register __d0 int namelen)
{
	return(PKCS12_add_friendlyname_uni(bag, name, namelen));
}

__asm __saveds int PKCS8_add_keyusage_AmiSSL(register __a0 PKCS8_PRIV_KEY_INFO *p8, register __d0 int usage)
{
	return(PKCS8_add_keyusage(p8, usage));
}

__asm __saveds ASN1_TYPE *PKCS12_get_attr_gen_AmiSSL(register __a0 STACK_OF(X509_ATTRIBUTE) *attrs, register __d0 int attr_nid)
{
	return(PKCS12_get_attr_gen(attrs, attr_nid));
}

__asm __saveds char *PKCS12_get_friendlyname_AmiSSL(register __a0 PKCS12_SAFEBAG *bag)
{
	return(PKCS12_get_friendlyname(bag));
}

__asm __saveds unsigned char *PKCS12_pbe_crypt_AmiSSL(register __a0 X509_ALGOR *algor, register __a1 const char *pass, register __d0 int passlen, register __a2 unsigned char *in, register __d1 int inlen, register __a3 unsigned char **data, register __d2 int *datalen, register __d3 int en_de)
{
	return(PKCS12_pbe_crypt(algor, pass, passlen, in, inlen, data, datalen, en_de));
}

__asm __saveds char *PKCS12_decrypt_d2i_AmiSSL(register __a0 X509_ALGOR *algor, register __a1 char *(*d2i)(), register __a2 void (*free_func)(void *), register __a3 const char *pass, register __d0 int passlen, register __d1 ASN1_STRING *oct, register __d2 int seq)
{
	return(PKCS12_decrypt_d2i(algor, d2i, free_func, pass, passlen, oct, seq));
}

__asm __saveds ASN1_STRING *PKCS12_i2d_encrypt_AmiSSL(register __a0 X509_ALGOR *algor, register __a1 int (*i2d)(), register __a2 const char *pass, register __d0 int passlen, register __a3 char *obj, register __d1 int seq)
{
	return(PKCS12_i2d_encrypt(algor, i2d, pass, passlen, obj, seq));
}

__asm __saveds PKCS12 *PKCS12_init_AmiSSL(register __d0 int mode)
{
	return(PKCS12_init(mode));
}

__asm __saveds int PKCS12_key_gen_asc_AmiSSL(register __a0 const char *pass, register __d0 int passlen, register __a1 unsigned char *salt, register __d1 int saltlen, register __d2 int id, register __d3 int iter, register __d4 int n, register __a2 unsigned char *out, register __a3 const EVP_MD *md_type)
{
	return(PKCS12_key_gen_asc(pass, passlen, salt, saltlen, id, iter, n, out, md_type));
}

__asm __saveds int PKCS12_key_gen_uni_AmiSSL(register __a0 unsigned char *pass, register __d0 int passlen, register __a1 unsigned char *salt, register __d1 int saltlen, register __d2 int id, register __d3 int iter, register __d4 int n, register __a2 unsigned char *out, register __a3 const EVP_MD *md_type)
{
	return(PKCS12_key_gen_uni(pass, passlen, salt, saltlen, id, iter, n, out, md_type));
}

__asm __saveds int PKCS12_PBE_keyivgen_AmiSSL(register __a0 EVP_CIPHER_CTX *ctx, register __a1 const char *pass, register __d0 int passlen, register __a2 ASN1_TYPE *param, register __a3 EVP_CIPHER *cipher, register __d1 EVP_MD *md_type, register __d2 int en_de)
{
	return(PKCS12_PBE_keyivgen(ctx, pass, passlen, param, cipher, md_type, en_de));
}

__asm __saveds int PKCS12_gen_mac_AmiSSL(register __a0 PKCS12 *p12, register __a1 const char *pass, register __d0 int passlen, register __a2 unsigned char *mac, register __a3 unsigned int *maclen)
{
	return(PKCS12_gen_mac(p12, pass, passlen, mac, maclen));
}

__asm __saveds int PKCS12_verify_mac_AmiSSL(register __a0 PKCS12 *p12, register __a1 const char *pass, register __d0 int passlen)
{
	return(PKCS12_verify_mac(p12, pass, passlen));
}

__asm __saveds int PKCS12_set_mac_AmiSSL(register __a0 PKCS12 *p12, register __a1 const char *pass, register __d0 int passlen, register __a2 unsigned char *salt, register __d1 int saltlen, register __d2 int iter, register __a3 EVP_MD *md_type)
{
	return(PKCS12_set_mac(p12, pass, passlen, salt, saltlen, iter, md_type));
}

__asm __saveds int PKCS12_setup_mac_AmiSSL(register __a0 PKCS12 *p12, register __d0 int iter, register __a1 unsigned char *salt, register __d1 int saltlen, register __a2 EVP_MD *md_type)
{
	return(PKCS12_setup_mac(p12, iter, salt, saltlen, md_type));
}

__asm __saveds unsigned char *asc2uni_AmiSSL(register __a0 const char *asc, register __d0 int asclen, register __a1 unsigned char **uni, register __a2 int *unilen)
{
	return(asc2uni(asc, asclen, uni, unilen));
}

__asm __saveds char *uni2asc_AmiSSL(register __a0 unsigned char *uni, register __d0 int unilen)
{
	return(uni2asc(uni, unilen));
}

__asm __saveds int i2d_PKCS12_BAGS_AmiSSL(register __a0 PKCS12_BAGS *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS12_BAGS(a, pp));
}

__asm __saveds PKCS12_BAGS *PKCS12_BAGS_new_AmiSSL(void)
{
	return(PKCS12_BAGS_new());
}

__asm __saveds PKCS12_BAGS *d2i_PKCS12_BAGS_AmiSSL(register __a0 PKCS12_BAGS **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS12_BAGS(a, pp, length));
}

__asm __saveds void PKCS12_BAGS_free_AmiSSL(register __a0 PKCS12_BAGS *a)
{
	PKCS12_BAGS_free(a);
}

__asm __saveds int i2d_PKCS12_AmiSSL(register __a0 PKCS12 *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS12(a, pp));
}

__asm __saveds PKCS12 *d2i_PKCS12_AmiSSL(register __a0 PKCS12 **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS12(a, pp, length));
}

__asm __saveds PKCS12 *PKCS12_new_AmiSSL(void)
{
	return(PKCS12_new());
}

__asm __saveds void PKCS12_free_AmiSSL(register __a0 PKCS12 *a)
{
	PKCS12_free(a);
}

__asm __saveds int i2d_PKCS12_MAC_DATA_AmiSSL(register __a0 PKCS12_MAC_DATA *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS12_MAC_DATA(a, pp));
}

__asm __saveds PKCS12_MAC_DATA *PKCS12_MAC_DATA_new_AmiSSL(void)
{
	return(PKCS12_MAC_DATA_new());
}

__asm __saveds PKCS12_MAC_DATA *d2i_PKCS12_MAC_DATA_AmiSSL(register __a0 PKCS12_MAC_DATA **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS12_MAC_DATA(a, pp, length));
}

__asm __saveds void PKCS12_MAC_DATA_free_AmiSSL(register __a0 PKCS12_MAC_DATA *a)
{
	PKCS12_MAC_DATA_free(a);
}

__asm __saveds int i2d_PKCS12_SAFEBAG_AmiSSL(register __a0 PKCS12_SAFEBAG *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS12_SAFEBAG(a, pp));
}

__asm __saveds PKCS12_SAFEBAG *PKCS12_SAFEBAG_new_AmiSSL(void)
{
	return(PKCS12_SAFEBAG_new());
}

__asm __saveds PKCS12_SAFEBAG *d2i_PKCS12_SAFEBAG_AmiSSL(register __a0 PKCS12_SAFEBAG **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS12_SAFEBAG(a, pp, length));
}

__asm __saveds void PKCS12_SAFEBAG_free_AmiSSL(register __a0 PKCS12_SAFEBAG *a)
{
	PKCS12_SAFEBAG_free(a);
}

__asm __saveds void PKCS12_PBE_add_AmiSSL(void)
{
	PKCS12_PBE_add();
}

__asm __saveds int PKCS12_parse_AmiSSL(register __a0 PKCS12 *p12, register __a1 const char *pass, register __a2 EVP_PKEY **pkey, register __a3 X509 **cert, register __d0 STACK_OF(X509) **ca)
{
	return(PKCS12_parse(p12, pass, pkey, cert, ca));
}

__asm __saveds PKCS12 *PKCS12_create_AmiSSL(register __a0 char *pass, register __a1 char *name, register __a2 EVP_PKEY *pkey, register __a3 X509 *cert, register __d0 STACK_OF(X509) *ca, register __d1 int nid_key, register __d2 int nid_cert, register __d3 int iter, register __d4 int mac_iter, register __d5 int keytype)
{
	return(PKCS12_create(pass, name, pkey, cert, ca, nid_key, nid_cert, iter, mac_iter, keytype));
}

__asm __saveds int i2d_PKCS12_bio_AmiSSL(register __a0 BIO *bp, register __a1 PKCS12 *p12)
{
	return(i2d_PKCS12_bio(bp, p12));
}

__asm __saveds PKCS12 *d2i_PKCS12_bio_AmiSSL(register __a0 BIO *bp, register __a1 PKCS12 **p12)
{
	return(d2i_PKCS12_bio(bp, p12));
}

__asm __saveds int PKCS12_newpass_AmiSSL(register __a0 PKCS12 *p12, register __a1 char *oldpass, register __a2 char *newpass)
{
	return(PKCS12_newpass(p12, oldpass, newpass));
}

__asm __saveds void ERR_load_PKCS12_strings_AmiSSL(void)
{
	ERR_load_PKCS12_strings();
}

__asm __saveds PKCS7_ISSUER_AND_SERIAL *PKCS7_ISSUER_AND_SERIAL_new_AmiSSL(void)
{
	return(PKCS7_ISSUER_AND_SERIAL_new());
}

__asm __saveds void PKCS7_ISSUER_AND_SERIAL_free_AmiSSL(register __a0 PKCS7_ISSUER_AND_SERIAL *a)
{
	PKCS7_ISSUER_AND_SERIAL_free(a);
}

__asm __saveds int i2d_PKCS7_ISSUER_AND_SERIAL_AmiSSL(register __a0 PKCS7_ISSUER_AND_SERIAL *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS7_ISSUER_AND_SERIAL(a, pp));
}

__asm __saveds PKCS7_ISSUER_AND_SERIAL *d2i_PKCS7_ISSUER_AND_SERIAL_AmiSSL(register __a0 PKCS7_ISSUER_AND_SERIAL **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS7_ISSUER_AND_SERIAL(a, pp, length));
}

__asm __saveds int PKCS7_ISSUER_AND_SERIAL_digest_AmiSSL(register __a0 PKCS7_ISSUER_AND_SERIAL *data, register __a1 const EVP_MD *type, register __a2 unsigned char *md, register __a3 unsigned int *len)
{
	return(PKCS7_ISSUER_AND_SERIAL_digest(data, type, md, len));
}

__asm __saveds PKCS7 *PKCS7_dup_AmiSSL(register __a0 PKCS7 *p7)
{
	return(PKCS7_dup(p7));
}

__asm __saveds PKCS7 *d2i_PKCS7_bio_AmiSSL(register __a0 BIO *bp, register __a1 PKCS7 **p7)
{
	return(d2i_PKCS7_bio(bp, p7));
}

__asm __saveds int i2d_PKCS7_bio_AmiSSL(register __a0 BIO *bp, register __a1 PKCS7 *p7)
{
	return(i2d_PKCS7_bio(bp, p7));
}

__asm __saveds PKCS7_SIGNER_INFO *PKCS7_SIGNER_INFO_new_AmiSSL(void)
{
	return(PKCS7_SIGNER_INFO_new());
}

__asm __saveds void PKCS7_SIGNER_INFO_free_AmiSSL(register __a0 PKCS7_SIGNER_INFO *a)
{
	PKCS7_SIGNER_INFO_free(a);
}

__asm __saveds int i2d_PKCS7_SIGNER_INFO_AmiSSL(register __a0 PKCS7_SIGNER_INFO *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS7_SIGNER_INFO(a, pp));
}

__asm __saveds PKCS7_SIGNER_INFO *d2i_PKCS7_SIGNER_INFO_AmiSSL(register __a0 PKCS7_SIGNER_INFO **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS7_SIGNER_INFO(a, pp, length));
}

__asm __saveds PKCS7_RECIP_INFO *PKCS7_RECIP_INFO_new_AmiSSL(void)
{
	return(PKCS7_RECIP_INFO_new());
}

__asm __saveds void PKCS7_RECIP_INFO_free_AmiSSL(register __a0 PKCS7_RECIP_INFO *a)
{
	PKCS7_RECIP_INFO_free(a);
}

__asm __saveds int i2d_PKCS7_RECIP_INFO_AmiSSL(register __a0 PKCS7_RECIP_INFO *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS7_RECIP_INFO(a, pp));
}

__asm __saveds PKCS7_RECIP_INFO *d2i_PKCS7_RECIP_INFO_AmiSSL(register __a0 PKCS7_RECIP_INFO **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS7_RECIP_INFO(a, pp, length));
}

__asm __saveds PKCS7_SIGNED *PKCS7_SIGNED_new_AmiSSL(void)
{
	return(PKCS7_SIGNED_new());
}

__asm __saveds void PKCS7_SIGNED_free_AmiSSL(register __a0 PKCS7_SIGNED *a)
{
	PKCS7_SIGNED_free(a);
}

__asm __saveds int i2d_PKCS7_SIGNED_AmiSSL(register __a0 PKCS7_SIGNED *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS7_SIGNED(a, pp));
}

__asm __saveds PKCS7_SIGNED *d2i_PKCS7_SIGNED_AmiSSL(register __a0 PKCS7_SIGNED **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS7_SIGNED(a, pp, length));
}

__asm __saveds PKCS7_ENC_CONTENT *PKCS7_ENC_CONTENT_new_AmiSSL(void)
{
	return(PKCS7_ENC_CONTENT_new());
}

__asm __saveds void PKCS7_ENC_CONTENT_free_AmiSSL(register __a0 PKCS7_ENC_CONTENT *a)
{
	PKCS7_ENC_CONTENT_free(a);
}

__asm __saveds int i2d_PKCS7_ENC_CONTENT_AmiSSL(register __a0 PKCS7_ENC_CONTENT *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS7_ENC_CONTENT(a, pp));
}

__asm __saveds PKCS7_ENC_CONTENT *d2i_PKCS7_ENC_CONTENT_AmiSSL(register __a0 PKCS7_ENC_CONTENT **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS7_ENC_CONTENT(a, pp, length));
}

__asm __saveds PKCS7_ENVELOPE *PKCS7_ENVELOPE_new_AmiSSL(void)
{
	return(PKCS7_ENVELOPE_new());
}

__asm __saveds void PKCS7_ENVELOPE_free_AmiSSL(register __a0 PKCS7_ENVELOPE *a)
{
	PKCS7_ENVELOPE_free(a);
}

__asm __saveds int i2d_PKCS7_ENVELOPE_AmiSSL(register __a0 PKCS7_ENVELOPE *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS7_ENVELOPE(a, pp));
}

__asm __saveds PKCS7_ENVELOPE *d2i_PKCS7_ENVELOPE_AmiSSL(register __a0 PKCS7_ENVELOPE **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS7_ENVELOPE(a, pp, length));
}

__asm __saveds PKCS7_SIGN_ENVELOPE *PKCS7_SIGN_ENVELOPE_new_AmiSSL(void)
{
	return(PKCS7_SIGN_ENVELOPE_new());
}

__asm __saveds void PKCS7_SIGN_ENVELOPE_free_AmiSSL(register __a0 PKCS7_SIGN_ENVELOPE *a)
{
	PKCS7_SIGN_ENVELOPE_free(a);
}

__asm __saveds int i2d_PKCS7_SIGN_ENVELOPE_AmiSSL(register __a0 PKCS7_SIGN_ENVELOPE *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS7_SIGN_ENVELOPE(a, pp));
}

__asm __saveds PKCS7_SIGN_ENVELOPE *d2i_PKCS7_SIGN_ENVELOPE_AmiSSL(register __a0 PKCS7_SIGN_ENVELOPE **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS7_SIGN_ENVELOPE(a, pp, length));
}

__asm __saveds PKCS7_DIGEST *PKCS7_DIGEST_new_AmiSSL(void)
{
	return(PKCS7_DIGEST_new());
}

__asm __saveds void PKCS7_DIGEST_free_AmiSSL(register __a0 PKCS7_DIGEST *a)
{
	PKCS7_DIGEST_free(a);
}

__asm __saveds int i2d_PKCS7_DIGEST_AmiSSL(register __a0 PKCS7_DIGEST *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS7_DIGEST(a, pp));
}

__asm __saveds PKCS7_DIGEST *d2i_PKCS7_DIGEST_AmiSSL(register __a0 PKCS7_DIGEST **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS7_DIGEST(a, pp, length));
}

__asm __saveds PKCS7_ENCRYPT *PKCS7_ENCRYPT_new_AmiSSL(void)
{
	return(PKCS7_ENCRYPT_new());
}

__asm __saveds void PKCS7_ENCRYPT_free_AmiSSL(register __a0 PKCS7_ENCRYPT *a)
{
	PKCS7_ENCRYPT_free(a);
}

__asm __saveds int i2d_PKCS7_ENCRYPT_AmiSSL(register __a0 PKCS7_ENCRYPT *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS7_ENCRYPT(a, pp));
}

__asm __saveds PKCS7_ENCRYPT *d2i_PKCS7_ENCRYPT_AmiSSL(register __a0 PKCS7_ENCRYPT **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS7_ENCRYPT(a, pp, length));
}

__asm __saveds PKCS7 *PKCS7_new_AmiSSL(void)
{
	return(PKCS7_new());
}

__asm __saveds void PKCS7_free_AmiSSL(register __a0 PKCS7 *a)
{
	PKCS7_free(a);
}

__asm __saveds void PKCS7_content_free_AmiSSL(register __a0 PKCS7 *a)
{
	PKCS7_content_free(a);
}

__asm __saveds int i2d_PKCS7_AmiSSL(register __a0 PKCS7 *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS7(a, pp));
}

__asm __saveds PKCS7 *d2i_PKCS7_AmiSSL(register __a0 PKCS7 **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS7(a, pp, length));
}

__asm __saveds long PKCS7_ctrl_AmiSSL(register __a0 PKCS7 *p7, register __d0 int cmd, register __d1 long larg, register __a1 char *parg)
{
	return(PKCS7_ctrl(p7, cmd, larg, parg));
}

__asm __saveds int PKCS7_set_type_AmiSSL(register __a0 PKCS7 *p7, register __d0 int type)
{
	return(PKCS7_set_type(p7, type));
}

__asm __saveds int PKCS7_set_content_AmiSSL(register __a0 PKCS7 *p7, register __a1 PKCS7 *p7_data)
{
	return(PKCS7_set_content(p7, p7_data));
}

__asm __saveds int PKCS7_SIGNER_INFO_set_AmiSSL(register __a0 PKCS7_SIGNER_INFO *p7i, register __a1 X509 *x509, register __a2 EVP_PKEY *pkey, register __a3 EVP_MD *dgst)
{
	return(PKCS7_SIGNER_INFO_set(p7i, x509, pkey, dgst));
}

__asm __saveds int PKCS7_add_signer_AmiSSL(register __a0 PKCS7 *p7, register __a1 PKCS7_SIGNER_INFO *p7i)
{
	return(PKCS7_add_signer(p7, p7i));
}

__asm __saveds int PKCS7_add_certificate_AmiSSL(register __a0 PKCS7 *p7, register __a1 X509 *x509)
{
	return(PKCS7_add_certificate(p7, x509));
}

__asm __saveds int PKCS7_add_crl_AmiSSL(register __a0 PKCS7 *p7, register __a1 X509_CRL *x509)
{
	return(PKCS7_add_crl(p7, x509));
}

__asm __saveds int PKCS7_content_new_AmiSSL(register __a0 PKCS7 *p7, register __d0 int nid)
{
	return(PKCS7_content_new(p7, nid));
}

__asm __saveds int PKCS7_dataVerify_AmiSSL(register __a0 X509_STORE *cert_store, register __a1 X509_STORE_CTX *ctx, register __a2 BIO *bio, register __a3 PKCS7 *p7, register __d0 PKCS7_SIGNER_INFO *si)
{
	return(PKCS7_dataVerify(cert_store, ctx, bio, p7, si));
}

__asm __saveds int PKCS7_signatureVerify_AmiSSL(register __a0 BIO *bio, register __a1 PKCS7 *p7, register __a2 PKCS7_SIGNER_INFO *si, register __a3 X509 *x509)
{
	return(PKCS7_signatureVerify(bio, p7, si, x509));
}

__asm __saveds BIO *PKCS7_dataInit_AmiSSL(register __a0 PKCS7 *p7, register __a1 BIO *bio)
{
	return(PKCS7_dataInit(p7, bio));
}

__asm __saveds int PKCS7_dataFinal_AmiSSL(register __a0 PKCS7 *p7, register __a1 BIO *bio)
{
	return(PKCS7_dataFinal(p7, bio));
}

__asm __saveds BIO *PKCS7_dataDecode_AmiSSL(register __a0 PKCS7 *p7, register __a1 EVP_PKEY *pkey, register __a2 BIO *in_bio, register __a3 X509 *pcert)
{
	return(PKCS7_dataDecode(p7, pkey, in_bio, pcert));
}

__asm __saveds PKCS7_SIGNER_INFO *PKCS7_add_signature_AmiSSL(register __a0 PKCS7 *p7, register __a1 X509 *x509, register __a2 EVP_PKEY *pkey, register __a3 EVP_MD *dgst)
{
	return(PKCS7_add_signature(p7, x509, pkey, dgst));
}

__asm __saveds X509 *PKCS7_cert_from_signer_info_AmiSSL(register __a0 PKCS7 *p7, register __a1 PKCS7_SIGNER_INFO *si)
{
	return(PKCS7_cert_from_signer_info(p7, si));
}

__asm __saveds STACK_OF(PKCS7_SIGNER_INFO) *PKCS7_get_signer_info_AmiSSL(register __a0 PKCS7 *p7)
{
	return(PKCS7_get_signer_info(p7));
}

__asm __saveds PKCS7_RECIP_INFO *PKCS7_add_recipient_AmiSSL(register __a0 PKCS7 *p7, register __a1 X509 *x509)
{
	return(PKCS7_add_recipient(p7, x509));
}

__asm __saveds int PKCS7_add_recipient_info_AmiSSL(register __a0 PKCS7 *p7, register __a1 PKCS7_RECIP_INFO *ri)
{
	return(PKCS7_add_recipient_info(p7, ri));
}

__asm __saveds int PKCS7_RECIP_INFO_set_AmiSSL(register __a0 PKCS7_RECIP_INFO *p7i, register __a1 X509 *x509)
{
	return(PKCS7_RECIP_INFO_set(p7i, x509));
}

__asm __saveds int PKCS7_set_cipher_AmiSSL(register __a0 PKCS7 *p7, register __a1 const EVP_CIPHER *cipher)
{
	return(PKCS7_set_cipher(p7, cipher));
}

__asm __saveds PKCS7_ISSUER_AND_SERIAL *PKCS7_get_issuer_and_serial_AmiSSL(register __a0 PKCS7 *p7, register __d0 int idx)
{
	return(PKCS7_get_issuer_and_serial(p7, idx));
}

__asm __saveds ASN1_OCTET_STRING *PKCS7_digest_from_attributes_AmiSSL(register __a0 STACK_OF(X509_ATTRIBUTE) *sk)
{
	return(PKCS7_digest_from_attributes(sk));
}

__asm __saveds int PKCS7_add_signed_attribute_AmiSSL(register __a0 PKCS7_SIGNER_INFO *p7si, register __d0 int nid, register __d1 int type, register __a1 void *data)
{
	return(PKCS7_add_signed_attribute(p7si, nid, type, data));
}

__asm __saveds int PKCS7_add_attribute_AmiSSL(register __a0 PKCS7_SIGNER_INFO *p7si, register __d0 int nid, register __d1 int atrtype, register __a1 void *value)
{
	return(PKCS7_add_attribute(p7si, nid, atrtype, value));
}

__asm __saveds ASN1_TYPE *PKCS7_get_attribute_AmiSSL(register __a0 PKCS7_SIGNER_INFO *si, register __d0 int nid)
{
	return(PKCS7_get_attribute(si, nid));
}

__asm __saveds ASN1_TYPE *PKCS7_get_signed_attribute_AmiSSL(register __a0 PKCS7_SIGNER_INFO *si, register __d0 int nid)
{
	return(PKCS7_get_signed_attribute(si, nid));
}

__asm __saveds int PKCS7_set_signed_attributes_AmiSSL(register __a0 PKCS7_SIGNER_INFO *p7si, register __a1 STACK_OF(X509_ATTRIBUTE) *sk)
{
	return(PKCS7_set_signed_attributes(p7si, sk));
}

__asm __saveds int PKCS7_set_attributes_AmiSSL(register __a0 PKCS7_SIGNER_INFO *p7si, register __a1 STACK_OF(X509_ATTRIBUTE) *sk)
{
	return(PKCS7_set_attributes(p7si, sk));
}

__asm __saveds PKCS7 *PKCS7_sign_AmiSSL(register __a0 X509 *signcert, register __a1 EVP_PKEY *pkey, register __a2 STACK_OF(X509) *certs, register __a3 BIO *data, register __d0 int flags)
{
	return(PKCS7_sign(signcert, pkey, certs, data, flags));
}

__asm __saveds int PKCS7_verify_AmiSSL(register __a0 PKCS7 *p7, register __a1 STACK_OF(X509) *certs, register __a2 X509_STORE *store, register __a3 BIO *indata, register __d0 BIO *out, register __d1 int flags)
{
	return(PKCS7_verify(p7, certs, store, indata, out, flags));
}

__asm __saveds STACK_OF(X509) *PKCS7_get0_signers_AmiSSL(register __a0 PKCS7 *p7, register __a1 STACK_OF(X509) *certs, register __d0 int flags)
{
	return(PKCS7_get0_signers(p7, certs, flags));
}

__asm __saveds PKCS7 *PKCS7_encrypt_AmiSSL(register __a0 STACK_OF(X509) *certs, register __a1 BIO *in, register __a2 EVP_CIPHER *cipher, register __d0 int flags)
{
	return(PKCS7_encrypt(certs, in, cipher, flags));
}

__asm __saveds int PKCS7_decrypt_AmiSSL(register __a0 PKCS7 *p7, register __a1 EVP_PKEY *pkey, register __a2 X509 *cert, register __a3 BIO *data, register __d0 int flags)
{
	return(PKCS7_decrypt(p7, pkey, cert, data, flags));
}

__asm __saveds int PKCS7_add_attrib_smimecap_AmiSSL(register __a0 PKCS7_SIGNER_INFO *si, register __a1 STACK_OF(X509_ALGOR) *cap)
{
	return(PKCS7_add_attrib_smimecap(si, cap));
}

__asm __saveds STACK_OF(X509_ALGOR) *PKCS7_get_smimecap_AmiSSL(register __a0 PKCS7_SIGNER_INFO *si)
{
	return(PKCS7_get_smimecap(si));
}

__asm __saveds int PKCS7_simple_smimecap_AmiSSL(register __a0 STACK_OF(X509_ALGOR) *sk, register __d0 int nid, register __d1 int arg)
{
	return(PKCS7_simple_smimecap(sk, nid, arg));
}

__asm __saveds int SMIME_write_PKCS7_AmiSSL(register __a0 BIO *bio, register __a1 PKCS7 *p7, register __a2 BIO *data, register __d0 int flags)
{
	return(SMIME_write_PKCS7(bio, p7, data, flags));
}

__asm __saveds PKCS7 *SMIME_read_PKCS7_AmiSSL(register __a0 BIO *bio, register __a1 BIO **bcont)
{
	return(SMIME_read_PKCS7(bio, bcont));
}

__asm __saveds int SMIME_crlf_copy_AmiSSL(register __a0 BIO *in, register __a1 BIO *out, register __d0 int flags)
{
	return(SMIME_crlf_copy(in, out, flags));
}

__asm __saveds int SMIME_text_AmiSSL(register __a0 BIO *in, register __a1 BIO *out)
{
	return(SMIME_text(in, out));
}

__asm __saveds void ERR_load_PKCS7_strings_AmiSSL(void)
{
	ERR_load_PKCS7_strings();
}

__asm __saveds void RAND_set_rand_method_AmiSSL(register __a0 RAND_METHOD *meth)
{
	RAND_set_rand_method(meth);
}

__asm __saveds RAND_METHOD *RAND_get_rand_method_AmiSSL(void)
{
	return(RAND_get_rand_method());
}

__asm __saveds RAND_METHOD *RAND_SSLeay_AmiSSL(void)
{
	return(RAND_SSLeay());
}

__asm __saveds void RAND_cleanup_AmiSSL(void)
{
	RAND_cleanup();
}

__asm __saveds int RAND_bytes_AmiSSL(register __a0 unsigned char *buf, register __d0 int num)
{
	return(RAND_bytes(buf, num));
}

__asm __saveds int RAND_pseudo_bytes_AmiSSL(register __a0 unsigned char *buf, register __d0 int num)
{
	return(RAND_pseudo_bytes(buf, num));
}

__asm __saveds void RAND_seed_AmiSSL(register __a0 const void *buf, register __d0 int num)
{
	RAND_seed(buf, num);
}

/*

__asm __saveds void RAND_add_AmiSSL(register __a0 const void *buf, register __d0 int num, register __d1 float entropy)
{
	RAND_add(buf, num, entropy);
}

*/

__asm __saveds int RAND_load_file_AmiSSL(register __a0 const char *file, register __d0 long max_bytes)
{
	return(RAND_load_file(file, max_bytes));
}

__asm __saveds int RAND_write_file_AmiSSL(register __a0 const char *file)
{
	return(RAND_write_file(file));
}

__asm __saveds const char *RAND_file_name_AmiSSL(register __a0 char *file, register __d0 size_t num)
{
	return(RAND_file_name(file, num));
}

__asm __saveds int RAND_status_AmiSSL(void)
{
	return(RAND_status());
}

__asm __saveds int RAND_egd_AmiSSL(register __a0 const char *path)
{
	return(RAND_egd(path));
}

__asm __saveds int RAND_egd_bytes_AmiSSL(register __a0 const char *path, register __d0 int bytes)
{
	return(RAND_egd_bytes(path, bytes));
}

__asm __saveds int RAND_poll_AmiSSL(void)
{
	return(RAND_poll());
}

__asm __saveds BIO_METHOD *BIO_f_ssl_AmiSSL(void)
{
	return(BIO_f_ssl());
}

__asm __saveds BIO *BIO_new_ssl_AmiSSL(register __a0 SSL_CTX *ctx, register __d0 int client)
{
	return(BIO_new_ssl(ctx, client));
}

__asm __saveds BIO *BIO_new_ssl_connect_AmiSSL(register __a0 SSL_CTX *ctx)
{
	return(BIO_new_ssl_connect(ctx));
}

__asm __saveds BIO *BIO_new_buffer_ssl_connect_AmiSSL(register __a0 SSL_CTX *ctx)
{
	return(BIO_new_buffer_ssl_connect(ctx));
}

__asm __saveds int BIO_ssl_copy_session_id_AmiSSL(register __a0 BIO *to, register __a1 BIO *from)
{
	return(BIO_ssl_copy_session_id(to, from));
}

__asm __saveds void BIO_ssl_shutdown_AmiSSL(register __a0 BIO *ssl_bio)
{
	BIO_ssl_shutdown(ssl_bio);
}

__asm __saveds int SSL_CTX_set_cipher_list_AmiSSL(register __a0 SSL_CTX *a, register __a1 const char *str)
{
	return(SSL_CTX_set_cipher_list(a, str));
}

__asm __saveds SSL_CTX *SSL_CTX_new_AmiSSL(register __a0 SSL_METHOD *meth)
{
	return(SSL_CTX_new(meth));
}

__asm __saveds void SSL_CTX_free_AmiSSL(register __a0 SSL_CTX *a)
{
	SSL_CTX_free(a);
}

__asm __saveds long SSL_CTX_set_timeout_AmiSSL(register __a0 SSL_CTX *ctx, register __d0 long t)
{
	return(SSL_CTX_set_timeout(ctx, t));
}

__asm __saveds long SSL_CTX_get_timeout_AmiSSL(register __a0 SSL_CTX *ctx)
{
	return(SSL_CTX_get_timeout(ctx));
}

__asm __saveds X509_STORE *SSL_CTX_get_cert_store_AmiSSL(register __a0 SSL_CTX *a)
{
	return(SSL_CTX_get_cert_store(a));
}

__asm __saveds void SSL_CTX_set_cert_store_AmiSSL(register __a0 SSL_CTX *a, register __a1 X509_STORE *b)
{
	SSL_CTX_set_cert_store(a, b);
}

__asm __saveds int SSL_want_AmiSSL(register __a0 SSL *s)
{
	return(SSL_want(s));
}

__asm __saveds int SSL_clear_AmiSSL(register __a0 SSL *s)
{
	return(SSL_clear(s));
}

__asm __saveds void SSL_CTX_flush_sessions_AmiSSL(register __a0 SSL_CTX *ctx, register __d0 long tm)
{
	SSL_CTX_flush_sessions(ctx, tm);
}

__asm __saveds SSL_CIPHER *SSL_get_current_cipher_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_current_cipher(s));
}

__asm __saveds int SSL_CIPHER_get_bits_AmiSSL(register __a0 SSL_CIPHER *c, register __a1 int *alg_bits)
{
	return(SSL_CIPHER_get_bits(c, alg_bits));
}

__asm __saveds char *SSL_CIPHER_get_version_AmiSSL(register __a0 SSL_CIPHER *c)
{
	return(SSL_CIPHER_get_version(c));
}

__asm __saveds const char *SSL_CIPHER_get_name_AmiSSL(register __a0 SSL_CIPHER *c)
{
	return(SSL_CIPHER_get_name(c));
}

__asm __saveds const char *SSL_CIPHER_get_mac_AmiSSL(register __a0 SSL_CIPHER *c)
{
	return(SSL_CIPHER_get_mac(c));
}

__asm __saveds const char *SSL_CIPHER_get_encryption_AmiSSL(register __a0 SSL_CIPHER *c)
{
	return(SSL_CIPHER_get_encryption(c));
}

__asm __saveds const char *SSL_CIPHER_get_authentication_AmiSSL(register __a0 SSL_CIPHER *c)
{
	return(SSL_CIPHER_get_authentication(c));
}

__asm __saveds const char *SSL_CIPHER_get_key_exchange_AmiSSL(register __a0 SSL_CIPHER *c)
{
	return(SSL_CIPHER_get_key_exchange(c));
}

__asm __saveds const char *SSL_CIPHER_get_export_AmiSSL(register __a0 SSL_CIPHER *c)
{
	return(SSL_CIPHER_get_export(c));
}

__asm __saveds int SSL_get_fd_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_fd(s));
}

__asm __saveds int SSL_get_rfd_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_rfd(s));
}

__asm __saveds int SSL_get_wfd_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_wfd(s));
}

__asm __saveds const char *SSL_get_cipher_list_AmiSSL(register __a0 SSL *s, register __d0 int n)
{
	return(SSL_get_cipher_list(s, n));
}

__asm __saveds char *SSL_get_shared_ciphers_AmiSSL(register __a0 SSL *s, register __a1 char *buf, register __d0 int len)
{
	return(SSL_get_shared_ciphers(s, buf, len));
}

__asm __saveds int SSL_get_read_ahead_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_read_ahead(s));
}

__asm __saveds int SSL_pending_AmiSSL(register __a0 SSL *s)
{
	return(SSL_pending(s));
}

__asm __saveds int SSL_set_fd_AmiSSL(register __a0 SSL *s, register __d0 int fd)
{
	return(SSL_set_fd(s, fd));
}

__asm __saveds int SSL_set_rfd_AmiSSL(register __a0 SSL *s, register __d0 int fd)
{
	return(SSL_set_rfd(s, fd));
}

__asm __saveds int SSL_set_wfd_AmiSSL(register __a0 SSL *s, register __d0 int fd)
{
	return(SSL_set_wfd(s, fd));
}

__asm __saveds void SSL_set_bio_AmiSSL(register __a0 SSL *s, register __a1 BIO *rbio, register __a2 BIO *wbio)
{
	SSL_set_bio(s, rbio, wbio);
}

__asm __saveds BIO *SSL_get_rbio_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_rbio(s));
}

__asm __saveds BIO *SSL_get_wbio_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_wbio(s));
}

__asm __saveds int SSL_set_cipher_list_AmiSSL(register __a0 SSL *s, register __a1 const char *str)
{
	return(SSL_set_cipher_list(s, str));
}

__asm __saveds void SSL_set_read_ahead_AmiSSL(register __a0 SSL *s, register __d0 int yes)
{
	SSL_set_read_ahead(s, yes);
}

__asm __saveds int SSL_get_verify_mode_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_verify_mode(s));
}

__asm __saveds int SSL_get_verify_depth_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_verify_depth(s));
}

__asm __saveds int (*SSL_get_verify_callback_AmiSSL(register __a0 SSL *s))(int, X509_STORE_CTX *a)
{
	return(SSL_get_verify_callback(s));
}

__asm __saveds void SSL_set_verify_AmiSSL(register __a0 SSL *s, register __d0 int mode, register __a1 int (*callback)(int ok, X509_STORE_CTX *ctx))
{
	SSL_set_verify(s, mode, callback);
}

__asm __saveds void SSL_set_verify_depth_AmiSSL(register __a0 SSL *s, register __d0 int depth)
{
	SSL_set_verify_depth(s, depth);
}

__asm __saveds int SSL_use_RSAPrivateKey_AmiSSL(register __a0 SSL *ssl, register __a1 RSA *rsa)
{
	return(SSL_use_RSAPrivateKey(ssl, rsa));
}

__asm __saveds int SSL_use_RSAPrivateKey_ASN1_AmiSSL(register __a0 SSL *ssl, register __a1 unsigned char *d, register __d0 long len)
{
	return(SSL_use_RSAPrivateKey_ASN1(ssl, d, len));
}

__asm __saveds int SSL_use_PrivateKey_AmiSSL(register __a0 SSL *ssl, register __a1 EVP_PKEY *pkey)
{
	return(SSL_use_PrivateKey(ssl, pkey));
}

__asm __saveds int SSL_use_PrivateKey_ASN1_AmiSSL(register __d0 int pk, register __a0 SSL *ssl, register __a1 unsigned char *d, register __d1 long len)
{
	return(SSL_use_PrivateKey_ASN1(pk, ssl, d, len));
}

__asm __saveds int SSL_use_certificate_AmiSSL(register __a0 SSL *ssl, register __a1 X509 *x)
{
	return(SSL_use_certificate(ssl, x));
}

__asm __saveds int SSL_use_certificate_ASN1_AmiSSL(register __a0 SSL *ssl, register __a1 unsigned char *d, register __d0 int len)
{
	return(SSL_use_certificate_ASN1(ssl, d, len));
}

__asm __saveds int SSL_use_RSAPrivateKey_file_AmiSSL(register __a0 SSL *ssl, register __a1 const char *file, register __d0 int type)
{
	return(SSL_use_RSAPrivateKey_file(ssl, file, type));
}

__asm __saveds int SSL_use_PrivateKey_file_AmiSSL(register __a0 SSL *ssl, register __a1 const char *file, register __d0 int type)
{
	return(SSL_use_PrivateKey_file(ssl, file, type));
}

__asm __saveds int SSL_use_certificate_file_AmiSSL(register __a0 SSL *ssl, register __a1 const char *file, register __d0 int type)
{
	return(SSL_use_certificate_file(ssl, file, type));
}

__asm __saveds int SSL_CTX_use_RSAPrivateKey_file_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 const char *file, register __d0 int type)
{
	return(SSL_CTX_use_RSAPrivateKey_file(ctx, file, type));
}

__asm __saveds int SSL_CTX_use_PrivateKey_file_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 const char *file, register __d0 int type)
{
	return(SSL_CTX_use_PrivateKey_file(ctx, file, type));
}

__asm __saveds int SSL_CTX_use_certificate_file_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 const char *file, register __d0 int type)
{
	return(SSL_CTX_use_certificate_file(ctx, file, type));
}

__asm __saveds int SSL_CTX_use_certificate_chain_file_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 const char *file)
{
	return(SSL_CTX_use_certificate_chain_file(ctx, file));
}

__asm __saveds STACK_OF(X509_NAME) *SSL_load_client_CA_file_AmiSSL(register __a0 const char *file)
{
	return(SSL_load_client_CA_file(file));
}

__asm __saveds int SSL_add_file_cert_subjects_to_stack_AmiSSL(register __a0 STACK_OF(X509_NAME) *stackCAs, register __a1 const char *file)
{
	return(SSL_add_file_cert_subjects_to_stack(stackCAs, file));
}

__asm __saveds int SSL_add_dir_cert_subjects_to_stack_AmiSSL(register __a0 STACK_OF(X509_NAME) *stackCAs, register __a1 const char *dir)
{
	return(SSL_add_dir_cert_subjects_to_stack(stackCAs, dir));
}

__asm __saveds void SSL_load_error_strings_AmiSSL(void)
{
	SSL_load_error_strings();
}

__asm __saveds char *SSL_state_string_AmiSSL(register __a0 SSL *s)
{
	return(SSL_state_string(s));
}

__asm __saveds char *SSL_rstate_string_AmiSSL(register __a0 SSL *s)
{
	return(SSL_rstate_string(s));
}

__asm __saveds char *SSL_state_string_long_AmiSSL(register __a0 SSL *s)
{
	return(SSL_state_string_long(s));
}

__asm __saveds char *SSL_rstate_string_long_AmiSSL(register __a0 SSL *s)
{
	return(SSL_rstate_string_long(s));
}

__asm __saveds long SSL_SESSION_get_time_AmiSSL(register __a0 SSL_SESSION *s)
{
	return(SSL_SESSION_get_time(s));
}

__asm __saveds long SSL_SESSION_set_time_AmiSSL(register __a0 SSL_SESSION *s, register __d0 long t)
{
	return(SSL_SESSION_set_time(s, t));
}

__asm __saveds long SSL_SESSION_get_timeout_AmiSSL(register __a0 SSL_SESSION *s)
{
	return(SSL_SESSION_get_timeout(s));
}

__asm __saveds long SSL_SESSION_set_timeout_AmiSSL(register __a0 SSL_SESSION *s, register __d0 long t)
{
	return(SSL_SESSION_set_timeout(s, t));
}

__asm __saveds void SSL_copy_session_id_AmiSSL(register __a0 SSL *to, register __a1 SSL *from)
{
	SSL_copy_session_id(to, from);
}

__asm __saveds SSL_SESSION *SSL_SESSION_new_AmiSSL(void)
{
	return(SSL_SESSION_new());
}

__asm __saveds unsigned long SSL_SESSION_hash_AmiSSL(register __a0 SSL_SESSION *a)
{
	return(SSL_SESSION_hash(a));
}

__asm __saveds int SSL_SESSION_cmp_AmiSSL(register __a0 SSL_SESSION *a, register __a1 SSL_SESSION *b)
{
	return(SSL_SESSION_cmp(a, b));
}

__asm __saveds int SSL_SESSION_print_AmiSSL(register __a0 BIO *fp, register __a1 SSL_SESSION *ses)
{
	return(SSL_SESSION_print(fp, ses));
}

__asm __saveds void SSL_SESSION_free_AmiSSL(register __a0 SSL_SESSION *ses)
{
	SSL_SESSION_free(ses);
}

__asm __saveds int i2d_SSL_SESSION_AmiSSL(register __a0 SSL_SESSION *in, register __a1 unsigned char **pp)
{
	return(i2d_SSL_SESSION(in, pp));
}

__asm __saveds int SSL_set_session_AmiSSL(register __a0 SSL *to, register __a1 SSL_SESSION *session)
{
	return(SSL_set_session(to, session));
}

__asm __saveds int SSL_CTX_add_session_AmiSSL(register __a0 SSL_CTX *s, register __a1 SSL_SESSION *c)
{
	return(SSL_CTX_add_session(s, c));
}

__asm __saveds int SSL_CTX_remove_session_AmiSSL(register __a0 SSL_CTX *a, register __a1 SSL_SESSION *c)
{
	return(SSL_CTX_remove_session(a, c));
}

__asm __saveds SSL_SESSION *d2i_SSL_SESSION_AmiSSL(register __a0 SSL_SESSION **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_SSL_SESSION(a, pp, length));
}

__asm __saveds X509 *SSL_get_peer_certificate_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_peer_certificate(s));
}

__asm __saveds STACK_OF(X509) *SSL_get_peer_cert_chain_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_peer_cert_chain(s));
}

__asm __saveds int SSL_CTX_get_verify_mode_AmiSSL(register __a0 SSL_CTX *ctx)
{
	return(SSL_CTX_get_verify_mode(ctx));
}

__asm __saveds int SSL_CTX_get_verify_depth_AmiSSL(register __a0 SSL_CTX *ctx)
{
	return(SSL_CTX_get_verify_depth(ctx));
}

__asm __saveds int (*SSL_CTX_get_verify_callback_AmiSSL(register __a0 SSL_CTX *ctx))(int, X509_STORE_CTX *a)
{
	return(SSL_CTX_get_verify_callback(ctx));
}

__asm __saveds void SSL_CTX_set_verify_AmiSSL(register __a0 SSL_CTX *ctx, register __d0 int mode, register __a1 int (*callback)(int, X509_STORE_CTX *))
{
	SSL_CTX_set_verify(ctx, mode, callback);
}

__asm __saveds void SSL_CTX_set_verify_depth_AmiSSL(register __a0 SSL_CTX *ctx, register __d0 int depth)
{
	SSL_CTX_set_verify_depth(ctx, depth);
}

__asm __saveds void SSL_CTX_set_cert_verify_callback_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 int (*cb)(), register __a2 char *arg)
{
	SSL_CTX_set_cert_verify_callback(ctx, cb, arg);
}

__asm __saveds int SSL_CTX_use_RSAPrivateKey_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 RSA *rsa)
{
	return(SSL_CTX_use_RSAPrivateKey(ctx, rsa));
}

__asm __saveds int SSL_CTX_use_RSAPrivateKey_ASN1_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 unsigned char *d, register __d0 long len)
{
	return(SSL_CTX_use_RSAPrivateKey_ASN1(ctx, d, len));
}

__asm __saveds int SSL_CTX_use_PrivateKey_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 EVP_PKEY *pkey)
{
	return(SSL_CTX_use_PrivateKey(ctx, pkey));
}

__asm __saveds int SSL_CTX_use_PrivateKey_ASN1_AmiSSL(register __d0 int pk, register __a0 SSL_CTX *ctx, register __a1 unsigned char *d, register __d1 long len)
{
	return(SSL_CTX_use_PrivateKey_ASN1(pk, ctx, d, len));
}

__asm __saveds int SSL_CTX_use_certificate_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 X509 *x)
{
	return(SSL_CTX_use_certificate(ctx, x));
}

__asm __saveds int SSL_CTX_use_certificate_ASN1_AmiSSL(register __a0 SSL_CTX *ctx, register __d0 int len, register __a1 unsigned char *d)
{
	return(SSL_CTX_use_certificate_ASN1(ctx, len, d));
}

__asm __saveds void SSL_CTX_set_default_passwd_cb_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 pem_password_cb *cb)
{
	SSL_CTX_set_default_passwd_cb(ctx, cb);
}

__asm __saveds void SSL_CTX_set_default_passwd_cb_userdata_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 void *u)
{
	SSL_CTX_set_default_passwd_cb_userdata(ctx, u);
}

__asm __saveds int SSL_CTX_check_private_key_AmiSSL(register __a0 SSL_CTX *ctx)
{
	return(SSL_CTX_check_private_key(ctx));
}

__asm __saveds int SSL_check_private_key_AmiSSL(register __a0 SSL *ctx)
{
	return(SSL_check_private_key(ctx));
}

__asm __saveds int SSL_CTX_set_session_id_context_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 const unsigned char *sid_ctx, register __d0 unsigned int sid_ctx_len)
{
	return(SSL_CTX_set_session_id_context(ctx, sid_ctx, sid_ctx_len));
}

__asm __saveds SSL *SSL_new_AmiSSL(register __a0 SSL_CTX *ctx)
{
	return(SSL_new(ctx));
}

__asm __saveds int SSL_set_session_id_context_AmiSSL(register __a0 SSL *ssl, register __a1 const unsigned char *sid_ctx, register __d0 unsigned int sid_ctx_len)
{
	return(SSL_set_session_id_context(ssl, sid_ctx, sid_ctx_len));
}

__asm __saveds int SSL_CTX_set_purpose_AmiSSL(register __a0 SSL_CTX *s, register __d0 int purpose)
{
	return(SSL_CTX_set_purpose(s, purpose));
}

__asm __saveds int SSL_set_purpose_AmiSSL(register __a0 SSL *s, register __d0 int purpose)
{
	return(SSL_set_purpose(s, purpose));
}

__asm __saveds int SSL_CTX_set_trust_AmiSSL(register __a0 SSL_CTX *s, register __d0 int trust)
{
	return(SSL_CTX_set_trust(s, trust));
}

__asm __saveds int SSL_set_trust_AmiSSL(register __a0 SSL *s, register __d0 int trust)
{
	return(SSL_set_trust(s, trust));
}

__asm __saveds void SSL_free_AmiSSL(register __a0 SSL *ssl)
{
	SSL_free(ssl);
}

__asm __saveds int SSL_accept_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_accept(ssl));
}

__asm __saveds int SSL_connect_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_connect(ssl));
}

__asm __saveds int SSL_read_AmiSSL(register __a0 SSL *ssl, register __a1 void *buf, register __d0 int num)
{
	return(SSL_read(ssl, buf, num));
}

__asm __saveds int SSL_peek_AmiSSL(register __a0 SSL *ssl, register __a1 void *buf, register __d0 int num)
{
	return(SSL_peek(ssl, buf, num));
}

__asm __saveds int SSL_write_AmiSSL(register __a0 SSL *ssl, register __a1 const void *buf, register __d0 int num)
{
	return(SSL_write(ssl, buf, num));
}

__asm __saveds long SSL_ctrl_AmiSSL(register __a0 SSL *ssl, register __d0 int cmd, register __d1 long larg, register __a1 char *parg)
{
	return(SSL_ctrl(ssl, cmd, larg, parg));
}

__asm __saveds long SSL_callback_ctrl_AmiSSL(register __a0 SSL *a, register __d0 int b, register __a1 void (*c)())
{
	return(SSL_callback_ctrl(a, b, c));
}

__asm __saveds long SSL_CTX_ctrl_AmiSSL(register __a0 SSL_CTX *ctx, register __d0 int cmd, register __d1 long larg, register __a1 char *parg)
{
	return(SSL_CTX_ctrl(ctx, cmd, larg, parg));
}

__asm __saveds long SSL_CTX_callback_ctrl_AmiSSL(register __a0 SSL_CTX *a, register __d0 int b, register __a1 void (*c)())
{
	return(SSL_CTX_callback_ctrl(a, b, c));
}

__asm __saveds int SSL_get_error_AmiSSL(register __a0 SSL *s, register __d0 int ret_code)
{
	return(SSL_get_error(s, ret_code));
}

__asm __saveds const char *SSL_get_version_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_version(s));
}

__asm __saveds int SSL_CTX_set_ssl_version_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 SSL_METHOD *meth)
{
	return(SSL_CTX_set_ssl_version(ctx, meth));
}

/*

__asm __saveds SSL_METHOD *SSLv2_method_AmiSSL(void)
{
	return(SSLv2_method());
}

__asm __saveds SSL_METHOD *SSLv2_server_method_AmiSSL(void)
{
	return(SSLv2_server_method());
}

__asm __saveds SSL_METHOD *SSLv2_client_method_AmiSSL(void)
{
	return(SSLv2_client_method());
}

__asm __saveds SSL_METHOD *SSLv3_method_AmiSSL(void)
{
	return(SSLv3_method());
}

__asm __saveds SSL_METHOD *SSLv3_server_method_AmiSSL(void)
{
	return(SSLv3_server_method());
}

__asm __saveds SSL_METHOD *SSLv3_client_method_AmiSSL(void)
{
	return(SSLv3_client_method());
}

__asm __saveds SSL_METHOD *SSLv23_method_AmiSSL(void)
{
	return(SSLv23_method());
}

__asm __saveds SSL_METHOD *SSLv23_server_method_AmiSSL(void)
{
	return(SSLv23_server_method());
}

__asm __saveds SSL_METHOD *SSLv23_client_method_AmiSSL(void)
{
	return(SSLv23_client_method());
}

__asm __saveds SSL_METHOD *TLSv1_method_AmiSSL(void)
{
	return(TLSv1_method());
}

__asm __saveds SSL_METHOD *TLSv1_server_method_AmiSSL(void)
{
	return(TLSv1_server_method());
}

__asm __saveds SSL_METHOD *TLSv1_client_method_AmiSSL(void)
{
	return(TLSv1_client_method());
}

*/

__asm __saveds STACK_OF(SSL_CIPHER) *SSL_get_ciphers_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_ciphers(s));
}

__asm __saveds int SSL_do_handshake_AmiSSL(register __a0 SSL *s)
{
	return(SSL_do_handshake(s));
}

__asm __saveds int SSL_renegotiate_AmiSSL(register __a0 SSL *s)
{
	return(SSL_renegotiate(s));
}

__asm __saveds int SSL_shutdown_AmiSSL(register __a0 SSL *s)
{
	return(SSL_shutdown(s));
}

__asm __saveds SSL_METHOD *SSL_get_ssl_method_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_ssl_method(s));
}

__asm __saveds int SSL_set_ssl_method_AmiSSL(register __a0 SSL *s, register __a1 SSL_METHOD *method)
{
	return(SSL_set_ssl_method(s, method));
}

__asm __saveds char *SSL_alert_type_string_long_AmiSSL(register __d0 int value)
{
	return(SSL_alert_type_string_long(value));
}

__asm __saveds char *SSL_alert_type_string_AmiSSL(register __d0 int value)
{
	return(SSL_alert_type_string(value));
}

__asm __saveds char *SSL_alert_desc_string_long_AmiSSL(register __d0 int value)
{
	return(SSL_alert_desc_string_long(value));
}

__asm __saveds char *SSL_alert_desc_string_AmiSSL(register __d0 int value)
{
	return(SSL_alert_desc_string(value));
}

__asm __saveds void SSL_set_client_CA_list_AmiSSL(register __a0 SSL *s, register __a1 STACK_OF(X509_NAME) *list)
{
	SSL_set_client_CA_list(s, list);
}

__asm __saveds void SSL_CTX_set_client_CA_list_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 STACK_OF(X509_NAME) *list)
{
	SSL_CTX_set_client_CA_list(ctx, list);
}

__asm __saveds STACK_OF(X509_NAME) *SSL_get_client_CA_list_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_client_CA_list(s));
}

__asm __saveds STACK_OF(X509_NAME) *SSL_CTX_get_client_CA_list_AmiSSL(register __a0 SSL_CTX *s)
{
	return(SSL_CTX_get_client_CA_list(s));
}

__asm __saveds int SSL_add_client_CA_AmiSSL(register __a0 SSL *ssl, register __a1 X509 *x)
{
	return(SSL_add_client_CA(ssl, x));
}

__asm __saveds int SSL_CTX_add_client_CA_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 X509 *x)
{
	return(SSL_CTX_add_client_CA(ctx, x));
}

__asm __saveds void SSL_set_connect_state_AmiSSL(register __a0 SSL *s)
{
	SSL_set_connect_state(s);
}

__asm __saveds void SSL_set_accept_state_AmiSSL(register __a0 SSL *s)
{
	SSL_set_accept_state(s);
}

__asm __saveds long SSL_get_default_timeout_AmiSSL(register __a0 SSL *s)
{
	return(SSL_get_default_timeout(s));
}

__asm __saveds int SSL_library_init_AmiSSL(void)
{
	return(SSL_library_init());
}

__asm __saveds char *SSL_CIPHER_description_AmiSSL(register __a0 SSL_CIPHER *a, register __a1 char *buf, register __d0 int size)
{
	return(SSL_CIPHER_description(a, buf, size));
}

__asm __saveds STACK_OF(X509_NAME) *SSL_dup_CA_list_AmiSSL(register __a0 STACK_OF(X509_NAME) *sk)
{
	return(SSL_dup_CA_list(sk));
}

__asm __saveds SSL *SSL_dup_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_dup(ssl));
}

__asm __saveds X509 *SSL_get_certificate_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_get_certificate(ssl));
}

__asm __saveds struct evp_pkey_st *SSL_get_privatekey_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_get_privatekey(ssl));
}

__asm __saveds void SSL_CTX_set_quiet_shutdown_AmiSSL(register __a0 SSL_CTX *ctx, register __d0 int mode)
{
	SSL_CTX_set_quiet_shutdown(ctx, mode);
}

__asm __saveds int SSL_CTX_get_quiet_shutdown_AmiSSL(register __a0 SSL_CTX *ctx)
{
	return(SSL_CTX_get_quiet_shutdown(ctx));
}

__asm __saveds void SSL_set_quiet_shutdown_AmiSSL(register __a0 SSL *ssl, register __d0 int mode)
{
	SSL_set_quiet_shutdown(ssl, mode);
}

__asm __saveds int SSL_get_quiet_shutdown_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_get_quiet_shutdown(ssl));
}

__asm __saveds void SSL_set_shutdown_AmiSSL(register __a0 SSL *ssl, register __d0 int mode)
{
	SSL_set_shutdown(ssl, mode);
}

__asm __saveds int SSL_get_shutdown_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_get_shutdown(ssl));
}

__asm __saveds int SSL_version_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_version(ssl));
}

__asm __saveds int SSL_CTX_set_default_verify_paths_AmiSSL(register __a0 SSL_CTX *ctx)
{
	return(SSL_CTX_set_default_verify_paths(ctx));
}

__asm __saveds int SSL_CTX_load_verify_locations_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 const char *CAfile, register __a2 const char *CApath)
{
	return(SSL_CTX_load_verify_locations(ctx, CAfile, CApath));
}

__asm __saveds SSL_SESSION *SSL_get_session_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_get_session(ssl));
}

__asm __saveds SSL_SESSION *SSL_get1_session_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_get1_session(ssl));
}

__asm __saveds SSL_CTX *SSL_get_SSL_CTX_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_get_SSL_CTX(ssl));
}

__asm __saveds void SSL_set_info_callback_AmiSSL(register __a0 SSL *ssl, register __a1 void (*cb)())
{
	SSL_set_info_callback(ssl, cb);
}

__asm __saveds void (*SSL_get_info_callback_AmiSSL(register __a0 SSL *ssl))()
{
	return(SSL_get_info_callback(ssl));
}

__asm __saveds int SSL_state_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_state(ssl));
}

__asm __saveds void SSL_set_verify_result_AmiSSL(register __a0 SSL *ssl, register __d0 long v)
{
	SSL_set_verify_result(ssl, v);
}

__asm __saveds long SSL_get_verify_result_AmiSSL(register __a0 SSL *ssl)
{
	return(SSL_get_verify_result(ssl));
}

__asm __saveds int SSL_set_ex_data_AmiSSL(register __a0 SSL *ssl, register __d0 int idx, register __a1 void *data)
{
	return(SSL_set_ex_data(ssl, idx, data));
}

__asm __saveds void *SSL_get_ex_data_AmiSSL(register __a0 SSL *ssl, register __d0 int idx)
{
	return(SSL_get_ex_data(ssl, idx));
}

__asm __saveds int SSL_get_ex_new_index_AmiSSL(register __d0 long argl, register __a0 void *argp, register __a1 CRYPTO_EX_new *new_func, register __a2 CRYPTO_EX_dup *dup_func, register __a3 CRYPTO_EX_free *free_func)
{
	return(SSL_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

__asm __saveds int SSL_SESSION_set_ex_data_AmiSSL(register __a0 SSL_SESSION *ss, register __d0 int idx, register __a1 void *data)
{
	return(SSL_SESSION_set_ex_data(ss, idx, data));
}

__asm __saveds void *SSL_SESSION_get_ex_data_AmiSSL(register __a0 SSL_SESSION *ss, register __d0 int idx)
{
	return(SSL_SESSION_get_ex_data(ss, idx));
}

__asm __saveds int SSL_SESSION_get_ex_new_index_AmiSSL(register __d0 long argl, register __a0 void *argp, register __a1 CRYPTO_EX_new *new_func, register __a2 CRYPTO_EX_dup *dup_func, register __a3 CRYPTO_EX_free *free_func)
{
	return(SSL_SESSION_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

__asm __saveds int SSL_CTX_set_ex_data_AmiSSL(register __a0 SSL_CTX *ssl, register __d0 int idx, register __a1 void *data)
{
	return(SSL_CTX_set_ex_data(ssl, idx, data));
}

__asm __saveds void *SSL_CTX_get_ex_data_AmiSSL(register __a0 SSL_CTX *ssl, register __d0 int idx)
{
	return(SSL_CTX_get_ex_data(ssl, idx));
}

__asm __saveds int SSL_CTX_get_ex_new_index_AmiSSL(register __d0 long argl, register __a0 void *argp, register __a1 CRYPTO_EX_new *new_func, register __a2 CRYPTO_EX_dup *dup_func, register __a3 CRYPTO_EX_free *free_func)
{
	return(SSL_CTX_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

__asm __saveds int SSL_get_ex_data_X509_STORE_CTX_idx_AmiSSL(void)
{
	return(SSL_get_ex_data_X509_STORE_CTX_idx());
}

__asm __saveds void SSL_CTX_set_tmp_rsa_callback_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 RSA *(*cb)(SSL *ssl, int is_export, int keylength))
{
	SSL_CTX_set_tmp_rsa_callback(ctx, cb);
}

__asm __saveds void SSL_set_tmp_rsa_callback_AmiSSL(register __a0 SSL *ssl, register __a1 RSA *(*cb)(SSL *ssl, int is_export, int keylength))
{
	SSL_set_tmp_rsa_callback(ssl, cb);
}

__asm __saveds void SSL_CTX_set_tmp_dh_callback_AmiSSL(register __a0 SSL_CTX *ctx, register __a1 DH *(*dh)(SSL *ssl, int is_export, int keylength))
{
	SSL_CTX_set_tmp_dh_callback(ctx, dh);
}

__asm __saveds void SSL_set_tmp_dh_callback_AmiSSL(register __a0 SSL *ssl, register __a1 DH *(*dh)(SSL *ssl, int is_export, int keylength))
{
	SSL_set_tmp_dh_callback(ssl, dh);
}

__asm __saveds int SSL_COMP_add_compression_method_AmiSSL(register __d0 int id, register __a0 COMP_METHOD *cm)
{
	return(SSL_COMP_add_compression_method(id, cm));
}

__asm __saveds void ERR_load_SSL_strings_AmiSSL(void)
{
	ERR_load_SSL_strings();
}

__asm __saveds int sk_num_AmiSSL(register __a0 const STACK *a)
{
	return(sk_num(a));
}

__asm __saveds char *sk_value_AmiSSL(register __a0 const STACK *a, register __d0 int b)
{
	return(sk_value(a, b));
}

__asm __saveds char *sk_set_AmiSSL(register __a0 STACK *a, register __d0 int b, register __a1 char *c)
{
	return(sk_set(a, b, c));
}

__asm __saveds STACK *sk_new_AmiSSL(register __a0 int (*cmp)(const char *const *, const char *const *))
{
	return(sk_new(cmp));
}

__asm __saveds STACK *sk_new_null_AmiSSL(void)
{
	return(sk_new_null());
}

__asm __saveds void sk_free_AmiSSL(register __a0 STACK *a)
{
	sk_free(a);
}

__asm __saveds void sk_pop_free_AmiSSL(register __a0 STACK *st, register __a1 void (*func)(void *))
{
	sk_pop_free(st, func);
}

__asm __saveds int sk_insert_AmiSSL(register __a0 STACK *sk, register __a1 char *data, register __d0 int where)
{
	return(sk_insert(sk, data, where));
}

__asm __saveds char *sk_delete_AmiSSL(register __a0 STACK *st, register __d0 int loc)
{
	return(sk_delete(st, loc));
}

__asm __saveds char *sk_delete_ptr_AmiSSL(register __a0 STACK *st, register __a1 char *p)
{
	return(sk_delete_ptr(st, p));
}

__asm __saveds int sk_find_AmiSSL(register __a0 STACK *st, register __a1 char *data)
{
	return(sk_find(st, data));
}

__asm __saveds int sk_push_AmiSSL(register __a0 STACK *st, register __a1 char *data)
{
	return(sk_push(st, data));
}

__asm __saveds int sk_unshift_AmiSSL(register __a0 STACK *st, register __a1 char *data)
{
	return(sk_unshift(st, data));
}

__asm __saveds char *sk_shift_AmiSSL(register __a0 STACK *st)
{
	return(sk_shift(st));
}

__asm __saveds char *sk_pop_AmiSSL(register __a0 STACK *st)
{
	return(sk_pop(st));
}

__asm __saveds void sk_zero_AmiSSL(register __a0 STACK *st)
{
	sk_zero(st);
}

__asm __saveds int (*sk_set_cmp_func_AmiSSL(register __a0 STACK *sk, register __a1 int (*c)(const char *const *, const char *const *)))(const char *const *, const char *const *)
{
	return(sk_set_cmp_func(sk, c));
}

__asm __saveds STACK *sk_dup_AmiSSL(register __a0 STACK *st)
{
	return(sk_dup(st));
}

__asm __saveds void sk_sort_AmiSSL(register __a0 STACK *st)
{
	sk_sort(st);
}

__asm __saveds char *ms_time_new_AmiSSL(void)
{
	return(ms_time_new());
}

__asm __saveds void ms_time_free_AmiSSL(register __a0 char *a)
{
	ms_time_free(a);
}

__asm __saveds void ms_time_get_AmiSSL(register __a0 char *a)
{
	ms_time_get(a);
}

__asm __saveds double ms_time_diff_AmiSSL(register __a0 char *start, register __a1 char *end)
{
	return(ms_time_diff(start, end));
}

__asm __saveds int ms_time_cmp_AmiSSL(register __a0 char *ap, register __a1 char *bp)
{
	return(ms_time_cmp(ap, bp));
}

__asm __saveds TXT_DB *TXT_DB_read_AmiSSL(register __a0 BIO *in, register __d0 int num)
{
	return(TXT_DB_read(in, num));
}

__asm __saveds long TXT_DB_write_AmiSSL(register __a0 BIO *out, register __a1 TXT_DB *db)
{
	return(TXT_DB_write(out, db));
}

__asm __saveds int TXT_DB_create_index_AmiSSL(register __a0 TXT_DB *db, register __d0 int field, register __a1 int (*qual)(), register __a2 unsigned long (*hash)(), register __a3 int (*cmp)())
{
	return(TXT_DB_create_index(db, field, qual, hash, cmp));
}

__asm __saveds void TXT_DB_free_AmiSSL(register __a0 TXT_DB *db)
{
	TXT_DB_free(db);
}

__asm __saveds char **TXT_DB_get_by_index_AmiSSL(register __a0 TXT_DB *db, register __d0 int idx, register __a1 char **value)
{
	return(TXT_DB_get_by_index(db, idx, value));
}

__asm __saveds int TXT_DB_insert_AmiSSL(register __a0 TXT_DB *db, register __a1 char **value)
{
	return(TXT_DB_insert(db, value));
}

__asm __saveds int i2d_BASIC_CONSTRAINTS_AmiSSL(register __a0 BASIC_CONSTRAINTS *a, register __a1 unsigned char **pp)
{
	return(i2d_BASIC_CONSTRAINTS(a, pp));
}

__asm __saveds BASIC_CONSTRAINTS *d2i_BASIC_CONSTRAINTS_AmiSSL(register __a0 BASIC_CONSTRAINTS **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_BASIC_CONSTRAINTS(a, pp, length));
}

__asm __saveds BASIC_CONSTRAINTS *BASIC_CONSTRAINTS_new_AmiSSL(void)
{
	return(BASIC_CONSTRAINTS_new());
}

__asm __saveds void BASIC_CONSTRAINTS_free_AmiSSL(register __a0 BASIC_CONSTRAINTS *a)
{
	BASIC_CONSTRAINTS_free(a);
}

__asm __saveds int i2d_GENERAL_NAME_AmiSSL(register __a0 GENERAL_NAME *a, register __a1 unsigned char **pp)
{
	return(i2d_GENERAL_NAME(a, pp));
}

__asm __saveds GENERAL_NAME *d2i_GENERAL_NAME_AmiSSL(register __a0 GENERAL_NAME **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_GENERAL_NAME(a, pp, length));
}

__asm __saveds GENERAL_NAME *GENERAL_NAME_new_AmiSSL(void)
{
	return(GENERAL_NAME_new());
}

__asm __saveds void GENERAL_NAME_free_AmiSSL(register __a0 GENERAL_NAME *a)
{
	GENERAL_NAME_free(a);
}

__asm __saveds STACK_OF(CONF_VALUE) *i2v_GENERAL_NAME_AmiSSL(register __a0 X509V3_EXT_METHOD *method, register __a1 GENERAL_NAME *gen, register __a2 STACK_OF(CONF_VALUE) *ret)
{
	return(i2v_GENERAL_NAME(method, gen, ret));
}

__asm __saveds int i2d_SXNET_AmiSSL(register __a0 SXNET *a, register __a1 unsigned char **pp)
{
	return(i2d_SXNET(a, pp));
}

__asm __saveds SXNET *d2i_SXNET_AmiSSL(register __a0 SXNET **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_SXNET(a, pp, length));
}

__asm __saveds SXNET *SXNET_new_AmiSSL(void)
{
	return(SXNET_new());
}

__asm __saveds void SXNET_free_AmiSSL(register __a0 SXNET *a)
{
	SXNET_free(a);
}

__asm __saveds int i2d_SXNETID_AmiSSL(register __a0 SXNETID *a, register __a1 unsigned char **pp)
{
	return(i2d_SXNETID(a, pp));
}

__asm __saveds SXNETID *d2i_SXNETID_AmiSSL(register __a0 SXNETID **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_SXNETID(a, pp, length));
}

__asm __saveds SXNETID *SXNETID_new_AmiSSL(void)
{
	return(SXNETID_new());
}

__asm __saveds void SXNETID_free_AmiSSL(register __a0 SXNETID *a)
{
	SXNETID_free(a);
}

__asm __saveds int SXNET_add_id_asc_AmiSSL(register __a0 SXNET **psx, register __a1 char *zone, register __a2 char *user, register __d0 int userlen)
{
	return(SXNET_add_id_asc(psx, zone, user, userlen));
}

__asm __saveds int SXNET_add_id_ulong_AmiSSL(register __a0 SXNET **psx, register __d0 unsigned long lzone, register __a1 char *user, register __d1 int userlen)
{
	return(SXNET_add_id_ulong(psx, lzone, user, userlen));
}

__asm __saveds int SXNET_add_id_INTEGER_AmiSSL(register __a0 SXNET **psx, register __a1 ASN1_INTEGER *izone, register __a2 char *user, register __d0 int userlen)
{
	return(SXNET_add_id_INTEGER(psx, izone, user, userlen));
}

__asm __saveds ASN1_OCTET_STRING *SXNET_get_id_asc_AmiSSL(register __a0 SXNET *sx, register __a1 char *zone)
{
	return(SXNET_get_id_asc(sx, zone));
}

__asm __saveds ASN1_OCTET_STRING *SXNET_get_id_ulong_AmiSSL(register __a0 SXNET *sx, register __d0 unsigned long lzone)
{
	return(SXNET_get_id_ulong(sx, lzone));
}

__asm __saveds ASN1_OCTET_STRING *SXNET_get_id_INTEGER_AmiSSL(register __a0 SXNET *sx, register __a1 ASN1_INTEGER *zone)
{
	return(SXNET_get_id_INTEGER(sx, zone));
}

__asm __saveds int i2d_AUTHORITY_KEYID_AmiSSL(register __a0 AUTHORITY_KEYID *a, register __a1 unsigned char **pp)
{
	return(i2d_AUTHORITY_KEYID(a, pp));
}

__asm __saveds AUTHORITY_KEYID *d2i_AUTHORITY_KEYID_AmiSSL(register __a0 AUTHORITY_KEYID **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_AUTHORITY_KEYID(a, pp, length));
}

__asm __saveds AUTHORITY_KEYID *AUTHORITY_KEYID_new_AmiSSL(void)
{
	return(AUTHORITY_KEYID_new());
}

__asm __saveds void AUTHORITY_KEYID_free_AmiSSL(register __a0 AUTHORITY_KEYID *a)
{
	AUTHORITY_KEYID_free(a);
}

__asm __saveds int i2d_PKEY_USAGE_PERIOD_AmiSSL(register __a0 PKEY_USAGE_PERIOD *a, register __a1 unsigned char **pp)
{
	return(i2d_PKEY_USAGE_PERIOD(a, pp));
}

__asm __saveds PKEY_USAGE_PERIOD *d2i_PKEY_USAGE_PERIOD_AmiSSL(register __a0 PKEY_USAGE_PERIOD **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKEY_USAGE_PERIOD(a, pp, length));
}

__asm __saveds PKEY_USAGE_PERIOD *PKEY_USAGE_PERIOD_new_AmiSSL(void)
{
	return(PKEY_USAGE_PERIOD_new());
}

__asm __saveds void PKEY_USAGE_PERIOD_free_AmiSSL(register __a0 PKEY_USAGE_PERIOD *a)
{
	PKEY_USAGE_PERIOD_free(a);
}

__asm __saveds STACK_OF(GENERAL_NAME) *GENERAL_NAMES_new_AmiSSL(void)
{
	return(GENERAL_NAMES_new());
}

__asm __saveds void GENERAL_NAMES_free_AmiSSL(register __a0 STACK_OF(GENERAL_NAME) *a)
{
	GENERAL_NAMES_free(a);
}

__asm __saveds STACK_OF(GENERAL_NAME) *d2i_GENERAL_NAMES_AmiSSL(register __a0 STACK_OF(GENERAL_NAME) **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_GENERAL_NAMES(a, pp, length));
}

__asm __saveds int i2d_GENERAL_NAMES_AmiSSL(register __a0 STACK_OF(GENERAL_NAME) *a, register __a1 unsigned char **pp)
{
	return(i2d_GENERAL_NAMES(a, pp));
}

__asm __saveds STACK_OF(CONF_VALUE) *i2v_GENERAL_NAMES_AmiSSL(register __a0 X509V3_EXT_METHOD *method, register __a1 STACK_OF(GENERAL_NAME) *gen, register __a2 STACK_OF(CONF_VALUE) *extlist)
{
	return(i2v_GENERAL_NAMES(method, gen, extlist));
}

__asm __saveds STACK_OF(GENERAL_NAME) *v2i_GENERAL_NAMES_AmiSSL(register __a0 X509V3_EXT_METHOD *method, register __a1 X509V3_CTX *ctx, register __a2 STACK_OF(CONF_VALUE) *nval)
{
	return(v2i_GENERAL_NAMES(method, ctx, nval));
}

__asm __saveds int i2d_OTHERNAME_AmiSSL(register __a0 OTHERNAME *a, register __a1 unsigned char **pp)
{
	return(i2d_OTHERNAME(a, pp));
}

__asm __saveds OTHERNAME *OTHERNAME_new_AmiSSL(void)
{
	return(OTHERNAME_new());
}

__asm __saveds OTHERNAME *d2i_OTHERNAME_AmiSSL(register __a0 OTHERNAME **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_OTHERNAME(a, pp, length));
}

__asm __saveds void OTHERNAME_free_AmiSSL(register __a0 OTHERNAME *a)
{
	OTHERNAME_free(a);
}

__asm __saveds char *i2s_ASN1_OCTET_STRING_AmiSSL(register __a0 X509V3_EXT_METHOD *method, register __a1 ASN1_OCTET_STRING *ia5)
{
	return(i2s_ASN1_OCTET_STRING(method, ia5));
}

__asm __saveds ASN1_OCTET_STRING *s2i_ASN1_OCTET_STRING_AmiSSL(register __a0 X509V3_EXT_METHOD *method, register __a1 X509V3_CTX *ctx, register __a2 char *str)
{
	return(s2i_ASN1_OCTET_STRING(method, ctx, str));
}

__asm __saveds int i2d_ext_ku_AmiSSL(register __a0 STACK_OF(ASN1_OBJECT) *a, register __a1 unsigned char **pp)
{
	return(i2d_ext_ku(a, pp));
}

__asm __saveds STACK_OF(ASN1_OBJECT) *d2i_ext_ku_AmiSSL(register __a0 STACK_OF(ASN1_OBJECT) **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ext_ku(a, pp, length));
}

__asm __saveds void ext_ku_free_AmiSSL(register __a0 STACK_OF(ASN1_OBJECT) *a)
{
	ext_ku_free(a);
}

__asm __saveds STACK_OF(ASN1_OBJECT) *ext_ku_new_AmiSSL(void)
{
	return(ext_ku_new());
}

__asm __saveds int i2d_CERTIFICATEPOLICIES_AmiSSL(register __a0 STACK_OF(POLICYINFO) *a, register __a1 unsigned char **pp)
{
	return(i2d_CERTIFICATEPOLICIES(a, pp));
}

__asm __saveds STACK_OF(POLICYINFO) *CERTIFICATEPOLICIES_new_AmiSSL(void)
{
	return(CERTIFICATEPOLICIES_new());
}

__asm __saveds void CERTIFICATEPOLICIES_free_AmiSSL(register __a0 STACK_OF(POLICYINFO) *a)
{
	CERTIFICATEPOLICIES_free(a);
}

__asm __saveds STACK_OF(POLICYINFO) *d2i_CERTIFICATEPOLICIES_AmiSSL(register __a0 STACK_OF(POLICYINFO) **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_CERTIFICATEPOLICIES(a, pp, length));
}

__asm __saveds int i2d_POLICYINFO_AmiSSL(register __a0 POLICYINFO *a, register __a1 unsigned char **pp)
{
	return(i2d_POLICYINFO(a, pp));
}

__asm __saveds POLICYINFO *POLICYINFO_new_AmiSSL(void)
{
	return(POLICYINFO_new());
}

__asm __saveds POLICYINFO *d2i_POLICYINFO_AmiSSL(register __a0 POLICYINFO **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_POLICYINFO(a, pp, length));
}

__asm __saveds void POLICYINFO_free_AmiSSL(register __a0 POLICYINFO *a)
{
	POLICYINFO_free(a);
}

__asm __saveds int i2d_POLICYQUALINFO_AmiSSL(register __a0 POLICYQUALINFO *a, register __a1 unsigned char **pp)
{
	return(i2d_POLICYQUALINFO(a, pp));
}

__asm __saveds POLICYQUALINFO *POLICYQUALINFO_new_AmiSSL(void)
{
	return(POLICYQUALINFO_new());
}

__asm __saveds POLICYQUALINFO *d2i_POLICYQUALINFO_AmiSSL(register __a0 POLICYQUALINFO **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_POLICYQUALINFO(a, pp, length));
}

__asm __saveds void POLICYQUALINFO_free_AmiSSL(register __a0 POLICYQUALINFO *a)
{
	POLICYQUALINFO_free(a);
}

__asm __saveds int i2d_USERNOTICE_AmiSSL(register __a0 USERNOTICE *a, register __a1 unsigned char **pp)
{
	return(i2d_USERNOTICE(a, pp));
}

__asm __saveds USERNOTICE *USERNOTICE_new_AmiSSL(void)
{
	return(USERNOTICE_new());
}

__asm __saveds USERNOTICE *d2i_USERNOTICE_AmiSSL(register __a0 USERNOTICE **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_USERNOTICE(a, pp, length));
}

__asm __saveds void USERNOTICE_free_AmiSSL(register __a0 USERNOTICE *a)
{
	USERNOTICE_free(a);
}

__asm __saveds int i2d_NOTICEREF_AmiSSL(register __a0 NOTICEREF *a, register __a1 unsigned char **pp)
{
	return(i2d_NOTICEREF(a, pp));
}

__asm __saveds NOTICEREF *NOTICEREF_new_AmiSSL(void)
{
	return(NOTICEREF_new());
}

__asm __saveds NOTICEREF *d2i_NOTICEREF_AmiSSL(register __a0 NOTICEREF **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_NOTICEREF(a, pp, length));
}

__asm __saveds void NOTICEREF_free_AmiSSL(register __a0 NOTICEREF *a)
{
	NOTICEREF_free(a);
}

__asm __saveds int i2d_CRL_DIST_POINTS_AmiSSL(register __a0 STACK_OF(DIST_POINT) *a, register __a1 unsigned char **pp)
{
	return(i2d_CRL_DIST_POINTS(a, pp));
}

__asm __saveds STACK_OF(DIST_POINT) *CRL_DIST_POINTS_new_AmiSSL(void)
{
	return(CRL_DIST_POINTS_new());
}

__asm __saveds void CRL_DIST_POINTS_free_AmiSSL(register __a0 STACK_OF(DIST_POINT) *a)
{
	CRL_DIST_POINTS_free(a);
}

__asm __saveds STACK_OF(DIST_POINT) *d2i_CRL_DIST_POINTS_AmiSSL(register __a0 STACK_OF(DIST_POINT) **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_CRL_DIST_POINTS(a, pp, length));
}

__asm __saveds int i2d_DIST_POINT_AmiSSL(register __a0 DIST_POINT *a, register __a1 unsigned char **pp)
{
	return(i2d_DIST_POINT(a, pp));
}

__asm __saveds DIST_POINT *DIST_POINT_new_AmiSSL(void)
{
	return(DIST_POINT_new());
}

__asm __saveds DIST_POINT *d2i_DIST_POINT_AmiSSL(register __a0 DIST_POINT **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_DIST_POINT(a, pp, length));
}

__asm __saveds void DIST_POINT_free_AmiSSL(register __a0 DIST_POINT *a)
{
	DIST_POINT_free(a);
}

__asm __saveds int i2d_DIST_POINT_NAME_AmiSSL(register __a0 DIST_POINT_NAME *a, register __a1 unsigned char **pp)
{
	return(i2d_DIST_POINT_NAME(a, pp));
}

__asm __saveds DIST_POINT_NAME *DIST_POINT_NAME_new_AmiSSL(void)
{
	return(DIST_POINT_NAME_new());
}

__asm __saveds void DIST_POINT_NAME_free_AmiSSL(register __a0 DIST_POINT_NAME *a)
{
	DIST_POINT_NAME_free(a);
}

__asm __saveds DIST_POINT_NAME *d2i_DIST_POINT_NAME_AmiSSL(register __a0 DIST_POINT_NAME **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_DIST_POINT_NAME(a, pp, length));
}

__asm __saveds int i2d_ACCESS_DESCRIPTION_AmiSSL(register __a0 ACCESS_DESCRIPTION *a, register __a1 unsigned char **pp)
{
	return(i2d_ACCESS_DESCRIPTION(a, pp));
}

__asm __saveds ACCESS_DESCRIPTION *ACCESS_DESCRIPTION_new_AmiSSL(void)
{
	return(ACCESS_DESCRIPTION_new());
}

__asm __saveds void ACCESS_DESCRIPTION_free_AmiSSL(register __a0 ACCESS_DESCRIPTION *a)
{
	ACCESS_DESCRIPTION_free(a);
}

__asm __saveds ACCESS_DESCRIPTION *d2i_ACCESS_DESCRIPTION_AmiSSL(register __a0 ACCESS_DESCRIPTION **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_ACCESS_DESCRIPTION(a, pp, length));
}

__asm __saveds STACK_OF(ACCESS_DESCRIPTION) *AUTHORITY_INFO_ACCESS_new_AmiSSL(void)
{
	return(AUTHORITY_INFO_ACCESS_new());
}

__asm __saveds void AUTHORITY_INFO_ACCESS_free_AmiSSL(register __a0 STACK_OF(ACCESS_DESCRIPTION) *a)
{
	AUTHORITY_INFO_ACCESS_free(a);
}

__asm __saveds STACK_OF(ACCESS_DESCRIPTION) *d2i_AUTHORITY_INFO_ACCESS_AmiSSL(register __a0 STACK_OF(ACCESS_DESCRIPTION) **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_AUTHORITY_INFO_ACCESS(a, pp, length));
}

__asm __saveds int i2d_AUTHORITY_INFO_ACCESS_AmiSSL(register __a0 STACK_OF(ACCESS_DESCRIPTION) *a, register __a1 unsigned char **pp)
{
	return(i2d_AUTHORITY_INFO_ACCESS(a, pp));
}

__asm __saveds GENERAL_NAME *v2i_GENERAL_NAME_AmiSSL(register __a0 X509V3_EXT_METHOD *method, register __a1 X509V3_CTX *ctx, register __a2 CONF_VALUE *cnf)
{
	return(v2i_GENERAL_NAME(method, ctx, cnf));
}

__asm __saveds void X509V3_conf_free_AmiSSL(register __a0 CONF_VALUE *val)
{
	X509V3_conf_free(val);
}

__asm __saveds X509_EXTENSION *X509V3_EXT_conf_nid_AmiSSL(register __a0 LHASH *conf, register __a1 X509V3_CTX *ctx, register __d0 int ext_nid, register __a2 char *value)
{
	return(X509V3_EXT_conf_nid(conf, ctx, ext_nid, value));
}

__asm __saveds X509_EXTENSION *X509V3_EXT_conf_AmiSSL(register __a0 LHASH *conf, register __a1 X509V3_CTX *ctx, register __a2 char *name, register __a3 char *value)
{
	return(X509V3_EXT_conf(conf, ctx, name, value));
}

__asm __saveds int X509V3_EXT_add_conf_AmiSSL(register __a0 LHASH *conf, register __a1 X509V3_CTX *ctx, register __a2 char *section, register __a3 X509 *cert)
{
	return(X509V3_EXT_add_conf(conf, ctx, section, cert));
}

__asm __saveds int X509V3_EXT_REQ_add_conf_AmiSSL(register __a0 LHASH *conf, register __a1 X509V3_CTX *ctx, register __a2 char *section, register __a3 X509_REQ *req)
{
	return(X509V3_EXT_REQ_add_conf(conf, ctx, section, req));
}

__asm __saveds int X509V3_EXT_CRL_add_conf_AmiSSL(register __a0 LHASH *conf, register __a1 X509V3_CTX *ctx, register __a2 char *section, register __a3 X509_CRL *crl)
{
	return(X509V3_EXT_CRL_add_conf(conf, ctx, section, crl));
}

__asm __saveds int X509V3_add_value_bool_nf_AmiSSL(register __a0 char *name, register __d0 int asn1_bool, register __a1 STACK_OF(CONF_VALUE) **extlist)
{
	return(X509V3_add_value_bool_nf(name, asn1_bool, extlist));
}

__asm __saveds int X509V3_get_value_bool_AmiSSL(register __a0 CONF_VALUE *value, register __a1 int *asn1_bool)
{
	return(X509V3_get_value_bool(value, asn1_bool));
}

__asm __saveds int X509V3_get_value_int_AmiSSL(register __a0 CONF_VALUE *value, register __a1 ASN1_INTEGER **aint)
{
	return(X509V3_get_value_int(value, aint));
}

__asm __saveds void X509V3_set_conf_lhash_AmiSSL(register __a0 X509V3_CTX *ctx, register __a1 LHASH *lhash)
{
	X509V3_set_conf_lhash(ctx, lhash);
}

__asm __saveds char *X509V3_get_string_AmiSSL(register __a0 X509V3_CTX *ctx, register __a1 char *name, register __a2 char *section)
{
	return(X509V3_get_string(ctx, name, section));
}

__asm __saveds STACK_OF(CONF_VALUE) *X509V3_get_section_AmiSSL(register __a0 X509V3_CTX *ctx, register __a1 char *section)
{
	return(X509V3_get_section(ctx, section));
}

__asm __saveds void X509V3_string_free_AmiSSL(register __a0 X509V3_CTX *ctx, register __a1 char *str)
{
	X509V3_string_free(ctx, str);
}

__asm __saveds void X509V3_section_free_AmiSSL(register __a0  X509V3_CTX *ctx, register __a1 STACK_OF(CONF_VALUE) *section)
{
	X509V3_section_free(ctx, section);
}

__asm __saveds void X509V3_set_ctx_AmiSSL(register __a0 X509V3_CTX *ctx, register __a1 X509 *issuer, register __a2 X509 *subject, register __a3 X509_REQ *req, register __d0 X509_CRL *crl, register __d1 int flags)
{
	X509V3_set_ctx(ctx, issuer, subject, req, crl, flags);
}

__asm __saveds int X509V3_add_value_AmiSSL(register __a0 const char *name, register __a1 const char *value, register __a2 STACK_OF(CONF_VALUE) **extlist)
{
	return(X509V3_add_value(name, value, extlist));
}

__asm __saveds int X509V3_add_value_uchar_AmiSSL(register __a0 const char *name, register __a1 const unsigned char *value, register __a2 STACK_OF(CONF_VALUE) **extlist)
{
	return(X509V3_add_value_uchar(name, value, extlist));
}

__asm __saveds int X509V3_add_value_bool_AmiSSL(register __a0 const char *name, register __d0 int asn1_bool, register __a1 STACK_OF(CONF_VALUE) **extlist)
{
	return(X509V3_add_value_bool(name, asn1_bool, extlist));
}

__asm __saveds int X509V3_add_value_int_AmiSSL(register __a0 const char *name, register __a1 ASN1_INTEGER *aint, register __a2 STACK_OF(CONF_VALUE) **extlist)
{
	return(X509V3_add_value_int(name, aint, extlist));
}

__asm __saveds char *i2s_ASN1_INTEGER_AmiSSL(register __a0 X509V3_EXT_METHOD *meth, register __a1 ASN1_INTEGER *aint)
{
	return(i2s_ASN1_INTEGER(meth, aint));
}

__asm __saveds ASN1_INTEGER *s2i_ASN1_INTEGER_AmiSSL(register __a0 X509V3_EXT_METHOD *meth, register __a1 char *value)
{
	return(s2i_ASN1_INTEGER(meth, value));
}

__asm __saveds char *i2s_ASN1_ENUMERATED_AmiSSL(register __a0 X509V3_EXT_METHOD *meth, register __a1 ASN1_ENUMERATED *aint)
{
	return(i2s_ASN1_ENUMERATED(meth, aint));
}

__asm __saveds char *i2s_ASN1_ENUMERATED_TABLE_AmiSSL(register __a0 X509V3_EXT_METHOD *meth, register __a1 ASN1_ENUMERATED *aint)
{
	return(i2s_ASN1_ENUMERATED_TABLE(meth, aint));
}

__asm __saveds int X509V3_EXT_add_AmiSSL(register __a0 X509V3_EXT_METHOD *ext)
{
	return(X509V3_EXT_add(ext));
}

__asm __saveds int X509V3_EXT_add_list_AmiSSL(register __a0 X509V3_EXT_METHOD *extlist)
{
	return(X509V3_EXT_add_list(extlist));
}

__asm __saveds int X509V3_EXT_add_alias_AmiSSL(register __d0 int nid_to, register __d1 int nid_from)
{
	return(X509V3_EXT_add_alias(nid_to, nid_from));
}

__asm __saveds void X509V3_EXT_cleanup_AmiSSL(void)
{
	X509V3_EXT_cleanup();
}

__asm __saveds X509V3_EXT_METHOD *X509V3_EXT_get_AmiSSL(register __a0 X509_EXTENSION *ext)
{
	return(X509V3_EXT_get(ext));
}

__asm __saveds X509V3_EXT_METHOD *X509V3_EXT_get_nid_AmiSSL(register __d0 int nid)
{
	return(X509V3_EXT_get_nid(nid));
}

__asm __saveds int X509V3_add_standard_extensions_AmiSSL(void)
{
	return(X509V3_add_standard_extensions());
}

__asm __saveds STACK_OF(CONF_VALUE) *X509V3_parse_list_AmiSSL(register __a0 char *line)
{
	return(X509V3_parse_list(line));
}

__asm __saveds void *X509V3_EXT_d2i_AmiSSL(register __a0 X509_EXTENSION *ext)
{
	return(X509V3_EXT_d2i(ext));
}

__asm __saveds void *X509V3_get_d2i_AmiSSL(register __a0 STACK_OF(X509_EXTENSION) *x, register __d0 int nid, register __a1 int *crit, register __a2 int *idx)
{
	return(X509V3_get_d2i(x, nid, crit, idx));
}

__asm __saveds X509_EXTENSION *X509V3_EXT_i2d_AmiSSL(register __d0 int ext_nid, register __d1 int crit, register __a0 void *ext_struc)
{
	return(X509V3_EXT_i2d(ext_nid, crit, ext_struc));
}

__asm __saveds char *hex_to_string_AmiSSL(register __a0 unsigned char *buffer, register __d0 long len)
{
	return(hex_to_string(buffer, len));
}

__asm __saveds unsigned char *string_to_hex_AmiSSL(register __a0 char *str, register __a1 long *len)
{
	return(string_to_hex(str, len));
}

__asm __saveds int name_cmp_AmiSSL(register __a0 const char *name, register __a1 const char *cmp)
{
	return(name_cmp(name, cmp));
}

__asm __saveds void X509V3_EXT_val_prn_AmiSSL(register __a0 BIO *out, register __a1 STACK_OF(CONF_VALUE) *val, register __d0 int indent, register __d1 int ml)
{
	X509V3_EXT_val_prn(out, val, indent, ml);
}

__asm __saveds int X509V3_EXT_print_AmiSSL(register __a0 BIO *out, register __a1 X509_EXTENSION *ext, register __d0 int flag, register __d1 int indent)
{
	return(X509V3_EXT_print(out, ext, flag, indent));
}

__asm __saveds int X509_check_purpose_AmiSSL(register __a0 X509 *x, register __d0 int id, register __d1 int ca)
{
	return(X509_check_purpose(x, id, ca));
}

__asm __saveds int X509_check_issued_AmiSSL(register __a0 X509 *issuer, register __a1 X509 *subject)
{
	return(X509_check_issued(issuer, subject));
}

__asm __saveds int X509_PURPOSE_get_count_AmiSSL(void)
{
	return(X509_PURPOSE_get_count());
}

__asm __saveds X509_PURPOSE *X509_PURPOSE_get0_AmiSSL(register __d0 int idx)
{
	return(X509_PURPOSE_get0(idx));
}

__asm __saveds int X509_PURPOSE_get_by_sname_AmiSSL(register __a0 char *sname)
{
	return(X509_PURPOSE_get_by_sname(sname));
}

__asm __saveds int X509_PURPOSE_get_by_id_AmiSSL(register __d0 int id)
{
	return(X509_PURPOSE_get_by_id(id));
}

__asm __saveds int X509_PURPOSE_add_AmiSSL(register __d0 int id, register __d1 int trust, register __d2 int flags, register __a0 int (*ck)(const X509_PURPOSE *, const X509 *, int), register __a1 char *name, register __a2 char *sname, register __a3 void *arg)
{
	return(X509_PURPOSE_add(id, trust, flags, ck, name, sname, arg));
}

__asm __saveds char *X509_PURPOSE_get0_name_AmiSSL(register __a0 X509_PURPOSE *xp)
{
	return(X509_PURPOSE_get0_name(xp));
}

__asm __saveds char *X509_PURPOSE_get0_sname_AmiSSL(register __a0 X509_PURPOSE *xp)
{
	return(X509_PURPOSE_get0_sname(xp));
}

__asm __saveds int X509_PURPOSE_get_trust_AmiSSL(register __a0 X509_PURPOSE *xp)
{
	return(X509_PURPOSE_get_trust(xp));
}

__asm __saveds void X509_PURPOSE_cleanup_AmiSSL(void)
{
	X509_PURPOSE_cleanup();
}

__asm __saveds int X509_PURPOSE_get_id_AmiSSL(register __a0 X509_PURPOSE *a)
{
	return(X509_PURPOSE_get_id(a));
}

__asm __saveds STACK *X509_get1_email_AmiSSL(register __a0 X509 *x)
{
	return(X509_get1_email(x));
}

__asm __saveds STACK *X509_REQ_get1_email_AmiSSL(register __a0 X509_REQ *x)
{
	return(X509_REQ_get1_email(x));
}

__asm __saveds void X509_email_free_AmiSSL(register __a0 STACK *sk)
{
	X509_email_free(sk);
}

__asm __saveds void ERR_load_X509V3_strings_AmiSSL(void)
{
	ERR_load_X509V3_strings();
}

__asm __saveds const char *X509_verify_cert_error_string_AmiSSL(register __d0 long n)
{
	return(X509_verify_cert_error_string(n));
}

__asm __saveds int X509_verify_AmiSSL(register __a0 X509 *a, register __a1 EVP_PKEY *r)
{
	return(X509_verify(a, r));
}

__asm __saveds int X509_REQ_verify_AmiSSL(register __a0 X509_REQ *a, register __a1 EVP_PKEY *r)
{
	return(X509_REQ_verify(a, r));
}

__asm __saveds int X509_CRL_verify_AmiSSL(register __a0 X509_CRL *a, register __a1 EVP_PKEY *r)
{
	return(X509_CRL_verify(a, r));
}

__asm __saveds int NETSCAPE_SPKI_verify_AmiSSL(register __a0 NETSCAPE_SPKI *a, register __a1 EVP_PKEY *r)
{
	return(NETSCAPE_SPKI_verify(a, r));
}

__asm __saveds NETSCAPE_SPKI *NETSCAPE_SPKI_b64_decode_AmiSSL(register __a0 const char *str, register __d0 int len)
{
	return(NETSCAPE_SPKI_b64_decode(str, len));
}

__asm __saveds char *NETSCAPE_SPKI_b64_encode_AmiSSL(register __a0 NETSCAPE_SPKI *x)
{
	return(NETSCAPE_SPKI_b64_encode(x));
}

__asm __saveds EVP_PKEY *NETSCAPE_SPKI_get_pubkey_AmiSSL(register __a0 NETSCAPE_SPKI *x)
{
	return(NETSCAPE_SPKI_get_pubkey(x));
}

__asm __saveds int NETSCAPE_SPKI_set_pubkey_AmiSSL(register __a0 NETSCAPE_SPKI *x, register __a1 EVP_PKEY *pkey)
{
	return(NETSCAPE_SPKI_set_pubkey(x, pkey));
}

__asm __saveds int NETSCAPE_SPKI_print_AmiSSL(register __a0 BIO *out, register __a1 NETSCAPE_SPKI *spki)
{
	return(NETSCAPE_SPKI_print(out, spki));
}

__asm __saveds int X509_sign_AmiSSL(register __a0 X509 *x, register __a1 EVP_PKEY *pkey, register __a2 const EVP_MD *md)
{
	return(X509_sign(x, pkey, md));
}

__asm __saveds int X509_REQ_sign_AmiSSL(register __a0 X509_REQ *x, register __a1 EVP_PKEY *pkey, register __a2 const EVP_MD *md)
{
	return(X509_REQ_sign(x, pkey, md));
}

__asm __saveds int X509_CRL_sign_AmiSSL(register __a0 X509_CRL *x, register __a1 EVP_PKEY *pkey, register __a2 const EVP_MD *md)
{
	return(X509_CRL_sign(x, pkey, md));
}

__asm __saveds int NETSCAPE_SPKI_sign_AmiSSL(register __a0 NETSCAPE_SPKI *x, register __a1 EVP_PKEY *pkey, register __a2 const EVP_MD *md)
{
	return(NETSCAPE_SPKI_sign(x, pkey, md));
}

__asm __saveds int X509_digest_AmiSSL(register __a0 const X509 *data, register __a1 const EVP_MD *type, register __a2 unsigned char *md, register __a3 unsigned int *len)
{
	return(X509_digest(data, type, md, len));
}

__asm __saveds int X509_CRL_digest_AmiSSL(register __a0 const X509_CRL *data, register __a1 const EVP_MD *type, register __a2 unsigned char *md, register __a3 unsigned int *len)
{
	return(X509_CRL_digest(data, type, md, len));
}

__asm __saveds int X509_REQ_digest_AmiSSL(register __a0 const X509_REQ *data, register __a1 const EVP_MD *type, register __a2 unsigned char *md, register __a3 unsigned int *len)
{
	return(X509_REQ_digest(data, type, md, len));
}

__asm __saveds int X509_NAME_digest_AmiSSL(register __a0 const X509_NAME *data, register __a1 const EVP_MD *type, register __a2 unsigned char *md, register __a3 unsigned int *len)
{
	return(X509_NAME_digest(data, type, md, len));
}

__asm __saveds X509 *d2i_X509_bio_AmiSSL(register __a0 BIO *bp, register __a1 X509 **x509)
{
	return(d2i_X509_bio(bp, x509));
}

__asm __saveds int i2d_X509_bio_AmiSSL(register __a0 BIO *bp, register __a1 X509 *x509)
{
	return(i2d_X509_bio(bp, x509));
}

__asm __saveds X509_CRL *d2i_X509_CRL_bio_AmiSSL(register __a0 BIO *bp, register __a1 X509_CRL **crl)
{
	return(d2i_X509_CRL_bio(bp, crl));
}

__asm __saveds int i2d_X509_CRL_bio_AmiSSL(register __a0 BIO *bp, register __a1 X509_CRL *crl)
{
	return(i2d_X509_CRL_bio(bp, crl));
}

__asm __saveds X509_REQ *d2i_X509_REQ_bio_AmiSSL(register __a0 BIO *bp, register __a1 X509_REQ **req)
{
	return(d2i_X509_REQ_bio(bp, req));
}

__asm __saveds int i2d_X509_REQ_bio_AmiSSL(register __a0 BIO *bp, register __a1 X509_REQ *req)
{
	return(i2d_X509_REQ_bio(bp, req));
}

__asm __saveds RSA *d2i_RSAPrivateKey_bio_AmiSSL(register __a0 BIO *bp, register __a1 RSA **rsa)
{
	return(d2i_RSAPrivateKey_bio(bp, rsa));
}

__asm __saveds int i2d_RSAPrivateKey_bio_AmiSSL(register __a0 BIO *bp, register __a1 RSA *rsa)
{
	return(i2d_RSAPrivateKey_bio(bp, rsa));
}

__asm __saveds RSA *d2i_RSAPublicKey_bio_AmiSSL(register __a0 BIO *bp, register __a1 RSA **rsa)
{
	return(d2i_RSAPublicKey_bio(bp, rsa));
}

__asm __saveds int i2d_RSAPublicKey_bio_AmiSSL(register __a0 BIO *bp, register __a1 RSA *rsa)
{
	return(i2d_RSAPublicKey_bio(bp, rsa));
}

__asm __saveds RSA *d2i_RSA_PUBKEY_bio_AmiSSL(register __a0 BIO *bp, register __a1 RSA **rsa)
{
	return(d2i_RSA_PUBKEY_bio(bp, rsa));
}

__asm __saveds int i2d_RSA_PUBKEY_bio_AmiSSL(register __a0 BIO *bp, register __a1 RSA *rsa)
{
	return(i2d_RSA_PUBKEY_bio(bp, rsa));
}

__asm __saveds DSA *d2i_DSA_PUBKEY_bio_AmiSSL(register __a0 BIO *bp, register __a1 DSA **dsa)
{
	return(d2i_DSA_PUBKEY_bio(bp, dsa));
}

__asm __saveds int i2d_DSA_PUBKEY_bio_AmiSSL(register __a0 BIO *bp, register __a1 DSA *dsa)
{
	return(i2d_DSA_PUBKEY_bio(bp, dsa));
}

__asm __saveds DSA *d2i_DSAPrivateKey_bio_AmiSSL(register __a0 BIO *bp, register __a1 DSA **dsa)
{
	return(d2i_DSAPrivateKey_bio(bp, dsa));
}

__asm __saveds int i2d_DSAPrivateKey_bio_AmiSSL(register __a0 BIO *bp, register __a1 DSA *dsa)
{
	return(i2d_DSAPrivateKey_bio(bp, dsa));
}

__asm __saveds X509_SIG *d2i_PKCS8_bio_AmiSSL(register __a0 BIO *bp, register __a1 X509_SIG **p8)
{
	return(d2i_PKCS8_bio(bp, p8));
}

__asm __saveds int i2d_PKCS8_bio_AmiSSL(register __a0 BIO *bp, register __a1 X509_SIG *p8)
{
	return(i2d_PKCS8_bio(bp, p8));
}

__asm __saveds PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO_bio_AmiSSL(register __a0 BIO *bp, register __a1 PKCS8_PRIV_KEY_INFO **p8inf)
{
	return(d2i_PKCS8_PRIV_KEY_INFO_bio(bp, p8inf));
}

__asm __saveds int i2d_PKCS8_PRIV_KEY_INFO_bio_AmiSSL(register __a0 BIO *bp, register __a1 PKCS8_PRIV_KEY_INFO *p8inf)
{
	return(i2d_PKCS8_PRIV_KEY_INFO_bio(bp, p8inf));
}

__asm __saveds int i2d_PKCS8PrivateKeyInfo_bio_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY *key)
{
	return(i2d_PKCS8PrivateKeyInfo_bio(bp, key));
}

__asm __saveds int i2d_PrivateKey_bio_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY *pkey)
{
	return(i2d_PrivateKey_bio(bp, pkey));
}

__asm __saveds EVP_PKEY *d2i_PrivateKey_bio_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY **a)
{
	return(d2i_PrivateKey_bio(bp, a));
}

__asm __saveds int i2d_PUBKEY_bio_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY *pkey)
{
	return(i2d_PUBKEY_bio(bp, pkey));
}

__asm __saveds EVP_PKEY *d2i_PUBKEY_bio_AmiSSL(register __a0 BIO *bp, register __a1 EVP_PKEY **a)
{
	return(d2i_PUBKEY_bio(bp, a));
}

__asm __saveds X509 *X509_dup_AmiSSL(register __a0 X509 *x509)
{
	return(X509_dup(x509));
}

__asm __saveds X509_ATTRIBUTE *X509_ATTRIBUTE_dup_AmiSSL(register __a0 X509_ATTRIBUTE *xa)
{
	return(X509_ATTRIBUTE_dup(xa));
}

__asm __saveds X509_EXTENSION *X509_EXTENSION_dup_AmiSSL(register __a0 X509_EXTENSION *ex)
{
	return(X509_EXTENSION_dup(ex));
}

__asm __saveds X509_CRL *X509_CRL_dup_AmiSSL(register __a0 X509_CRL *crl)
{
	return(X509_CRL_dup(crl));
}

__asm __saveds X509_REQ *X509_REQ_dup_AmiSSL(register __a0 X509_REQ *req)
{
	return(X509_REQ_dup(req));
}

__asm __saveds X509_ALGOR *X509_ALGOR_dup_AmiSSL(register __a0 X509_ALGOR *xn)
{
	return(X509_ALGOR_dup(xn));
}

__asm __saveds X509_NAME *X509_NAME_dup_AmiSSL(register __a0 X509_NAME *xn)
{
	return(X509_NAME_dup(xn));
}

__asm __saveds X509_NAME_ENTRY *X509_NAME_ENTRY_dup_AmiSSL(register __a0 X509_NAME_ENTRY *ne)
{
	return(X509_NAME_ENTRY_dup(ne));
}

__asm __saveds RSA *RSAPublicKey_dup_AmiSSL(register __a0 RSA *rsa)
{
	return(RSAPublicKey_dup(rsa));
}

__asm __saveds RSA *RSAPrivateKey_dup_AmiSSL(register __a0 RSA *rsa)
{
	return(RSAPrivateKey_dup(rsa));
}

__asm __saveds int X509_cmp_time_AmiSSL(register __a0 ASN1_TIME *s, register __a1 time_t *t)
{
	return(X509_cmp_time(s, t));
}

__asm __saveds int X509_cmp_current_time_AmiSSL(register __a0 ASN1_TIME *s)
{
	return(X509_cmp_current_time(s));
}

__asm __saveds ASN1_TIME *X509_time_adj_AmiSSL(register __a0 ASN1_TIME *s, register __d0 long adj, register __a1 time_t *t)
{
	return(X509_time_adj(s, adj, t));
}

__asm __saveds ASN1_TIME *X509_gmtime_adj_AmiSSL(register __a0 ASN1_TIME *s, register __d0 long adj)
{
	return(X509_gmtime_adj(s, adj));
}

__asm __saveds const char *X509_get_default_cert_area_AmiSSL(void)
{
	return(X509_get_default_cert_area());
}

__asm __saveds const char *X509_get_default_cert_dir_AmiSSL(void)
{
	return(X509_get_default_cert_dir());
}

__asm __saveds const char *X509_get_default_cert_file_AmiSSL(void)
{
	return(X509_get_default_cert_file());
}

__asm __saveds const char *X509_get_default_cert_dir_env_AmiSSL(void)
{
	return(X509_get_default_cert_dir_env());
}

__asm __saveds const char *X509_get_default_cert_file_env_AmiSSL(void)
{
	return(X509_get_default_cert_file_env());
}

__asm __saveds const char *X509_get_default_private_dir_AmiSSL(void)
{
	return(X509_get_default_private_dir());
}

__asm __saveds X509_REQ *X509_to_X509_REQ_AmiSSL(register __a0 X509 *x, register __a1 EVP_PKEY *pkey, register __a2 const EVP_MD *md)
{
	return(X509_to_X509_REQ(x, pkey, md));
}

__asm __saveds X509 *X509_REQ_to_X509_AmiSSL(register __a0 X509_REQ *r, register __d0 int days, register __a1 EVP_PKEY *pkey)
{
	return(X509_REQ_to_X509(r, days, pkey));
}

__asm __saveds X509_ALGOR *X509_ALGOR_new_AmiSSL(void)
{
	return(X509_ALGOR_new());
}

__asm __saveds void X509_ALGOR_free_AmiSSL(register __a0 X509_ALGOR *a)
{
	X509_ALGOR_free(a);
}

__asm __saveds int i2d_X509_ALGOR_AmiSSL(register __a0 X509_ALGOR *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_ALGOR(a, pp));
}

__asm __saveds X509_ALGOR *d2i_X509_ALGOR_AmiSSL(register __a0 X509_ALGOR **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_ALGOR(a, pp, length));
}

__asm __saveds X509_VAL *X509_VAL_new_AmiSSL(void)
{
	return(X509_VAL_new());
}

__asm __saveds void X509_VAL_free_AmiSSL(register __a0 X509_VAL *a)
{
	X509_VAL_free(a);
}

__asm __saveds int i2d_X509_VAL_AmiSSL(register __a0 X509_VAL *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_VAL(a, pp));
}

__asm __saveds X509_VAL *d2i_X509_VAL_AmiSSL(register __a0 X509_VAL **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_VAL(a, pp, length));
}

__asm __saveds X509_PUBKEY *X509_PUBKEY_new_AmiSSL(void)
{
	return(X509_PUBKEY_new());
}

__asm __saveds void X509_PUBKEY_free_AmiSSL(register __a0 X509_PUBKEY *a)
{
	X509_PUBKEY_free(a);
}

__asm __saveds int i2d_X509_PUBKEY_AmiSSL(register __a0 X509_PUBKEY *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_PUBKEY(a, pp));
}

__asm __saveds X509_PUBKEY *d2i_X509_PUBKEY_AmiSSL(register __a0 X509_PUBKEY **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_PUBKEY(a, pp, length));
}

__asm __saveds int X509_PUBKEY_set_AmiSSL(register __a0 X509_PUBKEY **x, register __a1 EVP_PKEY *pkey)
{
	return(X509_PUBKEY_set(x, pkey));
}

__asm __saveds EVP_PKEY *X509_PUBKEY_get_AmiSSL(register __a0 X509_PUBKEY *key)
{
	return(X509_PUBKEY_get(key));
}

__asm __saveds int X509_get_pubkey_parameters_AmiSSL(register __a0 EVP_PKEY *pkey, register __a1 STACK_OF(X509) *chain)
{
	return(X509_get_pubkey_parameters(pkey, chain));
}

__asm __saveds int i2d_PUBKEY_AmiSSL(register __a0 EVP_PKEY *a, register __a1 unsigned char **pp)
{
	return(i2d_PUBKEY(a, pp));
}

__asm __saveds EVP_PKEY *d2i_PUBKEY_AmiSSL(register __a0 EVP_PKEY **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PUBKEY(a, pp, length));
}

__asm __saveds int i2d_RSA_PUBKEY_AmiSSL(register __a0 RSA *a, register __a1 unsigned char **pp)
{
	return(i2d_RSA_PUBKEY(a, pp));
}

__asm __saveds RSA *d2i_RSA_PUBKEY_AmiSSL(register __a0 RSA **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_RSA_PUBKEY(a, pp, length));
}

__asm __saveds int i2d_DSA_PUBKEY_AmiSSL(register __a0 DSA *a, register __a1 unsigned char **pp)
{
	return(i2d_DSA_PUBKEY(a, pp));
}

__asm __saveds DSA *d2i_DSA_PUBKEY_AmiSSL(register __a0 DSA **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_DSA_PUBKEY(a, pp, length));
}

__asm __saveds X509_SIG *X509_SIG_new_AmiSSL(void)
{
	return(X509_SIG_new());
}

__asm __saveds void X509_SIG_free_AmiSSL(register __a0 X509_SIG *a)
{
	X509_SIG_free(a);
}

__asm __saveds int i2d_X509_SIG_AmiSSL(register __a0 X509_SIG *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_SIG(a, pp));
}

__asm __saveds X509_SIG *d2i_X509_SIG_AmiSSL(register __a0 X509_SIG **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_SIG(a, pp, length));
}

__asm __saveds X509_REQ_INFO *X509_REQ_INFO_new_AmiSSL(void)
{
	return(X509_REQ_INFO_new());
}

__asm __saveds void X509_REQ_INFO_free_AmiSSL(register __a0 X509_REQ_INFO *a)
{
	X509_REQ_INFO_free(a);
}

__asm __saveds int i2d_X509_REQ_INFO_AmiSSL(register __a0 X509_REQ_INFO *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_REQ_INFO(a, pp));
}

__asm __saveds X509_REQ_INFO *d2i_X509_REQ_INFO_AmiSSL(register __a0 X509_REQ_INFO **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_REQ_INFO(a, pp, length));
}

__asm __saveds X509_REQ *X509_REQ_new_AmiSSL(void)
{
	return(X509_REQ_new());
}

__asm __saveds void X509_REQ_free_AmiSSL(register __a0 X509_REQ *a)
{
	X509_REQ_free(a);
}

__asm __saveds int i2d_X509_REQ_AmiSSL(register __a0 X509_REQ *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_REQ(a, pp));
}

__asm __saveds X509_REQ *d2i_X509_REQ_AmiSSL(register __a0 X509_REQ **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_REQ(a, pp, length));
}

__asm __saveds X509_ATTRIBUTE *X509_ATTRIBUTE_new_AmiSSL(void)
{
	return(X509_ATTRIBUTE_new());
}

__asm __saveds void X509_ATTRIBUTE_free_AmiSSL(register __a0 X509_ATTRIBUTE *a)
{
	X509_ATTRIBUTE_free(a);
}

__asm __saveds int i2d_X509_ATTRIBUTE_AmiSSL(register __a0 X509_ATTRIBUTE *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_ATTRIBUTE(a, pp));
}

__asm __saveds X509_ATTRIBUTE *d2i_X509_ATTRIBUTE_AmiSSL(register __a0 X509_ATTRIBUTE **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_ATTRIBUTE(a, pp, length));
}

__asm __saveds X509_ATTRIBUTE *X509_ATTRIBUTE_create_AmiSSL(register __d0 int nid, register __d1 int atrtype, register __a0 void *value)
{
	return(X509_ATTRIBUTE_create(nid, atrtype, value));
}

__asm __saveds X509_EXTENSION *X509_EXTENSION_new_AmiSSL(void)
{
	return(X509_EXTENSION_new());
}

__asm __saveds void X509_EXTENSION_free_AmiSSL(register __a0 X509_EXTENSION *a)
{
	X509_EXTENSION_free(a);
}

__asm __saveds int i2d_X509_EXTENSION_AmiSSL(register __a0 X509_EXTENSION *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_EXTENSION(a, pp));
}

__asm __saveds X509_EXTENSION *d2i_X509_EXTENSION_AmiSSL(register __a0 X509_EXTENSION **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_EXTENSION(a, pp, length));
}

__asm __saveds X509_NAME_ENTRY *X509_NAME_ENTRY_new_AmiSSL(void)
{
	return(X509_NAME_ENTRY_new());
}

__asm __saveds void X509_NAME_ENTRY_free_AmiSSL(register __a0 X509_NAME_ENTRY *a)
{
	X509_NAME_ENTRY_free(a);
}

__asm __saveds int i2d_X509_NAME_ENTRY_AmiSSL(register __a0 X509_NAME_ENTRY *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_NAME_ENTRY(a, pp));
}

__asm __saveds X509_NAME_ENTRY *d2i_X509_NAME_ENTRY_AmiSSL(register __a0 X509_NAME_ENTRY **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_NAME_ENTRY(a, pp, length));
}

__asm __saveds X509_NAME *X509_NAME_new_AmiSSL(void)
{
	return(X509_NAME_new());
}

__asm __saveds void X509_NAME_free_AmiSSL(register __a0 X509_NAME *a)
{
	X509_NAME_free(a);
}

__asm __saveds int i2d_X509_NAME_AmiSSL(register __a0 X509_NAME *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_NAME(a, pp));
}

__asm __saveds X509_NAME *d2i_X509_NAME_AmiSSL(register __a0 X509_NAME **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_NAME(a, pp, length));
}

__asm __saveds int X509_NAME_set_AmiSSL(register __a0 X509_NAME **xn, register __a1 X509_NAME *name)
{
	return(X509_NAME_set(xn, name));
}

__asm __saveds X509_CINF *X509_CINF_new_AmiSSL(void)
{
	return(X509_CINF_new());
}

__asm __saveds void X509_CINF_free_AmiSSL(register __a0 X509_CINF *a)
{
	X509_CINF_free(a);
}

__asm __saveds int i2d_X509_CINF_AmiSSL(register __a0 X509_CINF *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_CINF(a, pp));
}

__asm __saveds X509_CINF *d2i_X509_CINF_AmiSSL(register __a0 X509_CINF **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_CINF(a, pp, length));
}

__asm __saveds X509 *X509_new_AmiSSL(void)
{
	return(X509_new());
}

__asm __saveds void X509_free_AmiSSL(register __a0 X509 *a)
{
	X509_free(a);
}

__asm __saveds int i2d_X509_AmiSSL(register __a0 X509 *a, register __a1 unsigned char **pp)
{
	return(i2d_X509(a, pp));
}

__asm __saveds X509 *d2i_X509_AmiSSL(register __a0 X509 **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509(a, pp, length));
}

__asm __saveds int X509_get_ex_new_index_AmiSSL(register __d0 long argl, register __a0 void *argp, register __a1 CRYPTO_EX_new *new_func, register __a2 CRYPTO_EX_dup *dup_func, register __a3 CRYPTO_EX_free *free_func)
{
	return(X509_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

__asm __saveds int X509_set_ex_data_AmiSSL(register __a0 X509 *r, register __d0 int idx, register __a1 void *arg)
{
	return(X509_set_ex_data(r, idx, arg));
}

__asm __saveds void *X509_get_ex_data_AmiSSL(register __a0 X509 *r, register __d0 int idx)
{
	return(X509_get_ex_data(r, idx));
}

__asm __saveds int i2d_X509_AUX_AmiSSL(register __a0 X509 *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_AUX(a, pp));
}

__asm __saveds X509 *d2i_X509_AUX_AmiSSL(register __a0 X509 **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_AUX(a, pp, length));
}

__asm __saveds X509_CERT_AUX *X509_CERT_AUX_new_AmiSSL(void)
{
	return(X509_CERT_AUX_new());
}

__asm __saveds void X509_CERT_AUX_free_AmiSSL(register __a0 X509_CERT_AUX *a)
{
	X509_CERT_AUX_free(a);
}

__asm __saveds int i2d_X509_CERT_AUX_AmiSSL(register __a0 X509_CERT_AUX *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_CERT_AUX(a, pp));
}

__asm __saveds X509_CERT_AUX *d2i_X509_CERT_AUX_AmiSSL(register __a0 X509_CERT_AUX **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_CERT_AUX(a, pp, length));
}

__asm __saveds int X509_alias_set1_AmiSSL(register __a0 X509 *x, register __a1 unsigned char *name, register __d0 int len)
{
	return(X509_alias_set1(x, name, len));
}

__asm __saveds int X509_keyid_set1_AmiSSL(register __a0 X509 *x, register __a1 unsigned char *id, register __d0 int len)
{
	return(X509_keyid_set1(x, id, len));
}

__asm __saveds unsigned char *X509_alias_get0_AmiSSL(register __a0 X509 *x, register __a1 int *len)
{
	return(X509_alias_get0(x, len));
}

__asm __saveds int (*X509_TRUST_set_default_AmiSSL(register __a0 int (*trust)(int , X509 *, int)))(int, X509 *, int)
{
	return(X509_TRUST_set_default(trust));
}

__asm __saveds int X509_add1_trust_object_AmiSSL(register __a0 X509 *x, register __a1 ASN1_OBJECT *obj)
{
	return(X509_add1_trust_object(x, obj));
}

__asm __saveds int X509_add1_reject_object_AmiSSL(register __a0 X509 *x, register __a1 ASN1_OBJECT *obj)
{
	return(X509_add1_reject_object(x, obj));
}

__asm __saveds void X509_trust_clear_AmiSSL(register __a0 X509 *x)
{
	X509_trust_clear(x);
}

__asm __saveds void X509_reject_clear_AmiSSL(register __a0 X509 *x)
{
	X509_reject_clear(x);
}

__asm __saveds X509_REVOKED *X509_REVOKED_new_AmiSSL(void)
{
	return(X509_REVOKED_new());
}

__asm __saveds void X509_REVOKED_free_AmiSSL(register __a0 X509_REVOKED *a)
{
	X509_REVOKED_free(a);
}

__asm __saveds int i2d_X509_REVOKED_AmiSSL(register __a0 X509_REVOKED *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_REVOKED(a, pp));
}

__asm __saveds X509_REVOKED *d2i_X509_REVOKED_AmiSSL(register __a0 X509_REVOKED **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_REVOKED(a, pp, length));
}

__asm __saveds X509_CRL_INFO *X509_CRL_INFO_new_AmiSSL(void)
{
	return(X509_CRL_INFO_new());
}

__asm __saveds void X509_CRL_INFO_free_AmiSSL(register __a0 X509_CRL_INFO *a)
{
	X509_CRL_INFO_free(a);
}

__asm __saveds int i2d_X509_CRL_INFO_AmiSSL(register __a0 X509_CRL_INFO *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_CRL_INFO(a, pp));
}

__asm __saveds X509_CRL_INFO *d2i_X509_CRL_INFO_AmiSSL(register __a0 X509_CRL_INFO **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_CRL_INFO(a, pp, length));
}

__asm __saveds X509_CRL *X509_CRL_new_AmiSSL(void)
{
	return(X509_CRL_new());
}

__asm __saveds void X509_CRL_free_AmiSSL(register __a0 X509_CRL *a)
{
	X509_CRL_free(a);
}

__asm __saveds int i2d_X509_CRL_AmiSSL(register __a0 X509_CRL *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_CRL(a, pp));
}

__asm __saveds X509_CRL *d2i_X509_CRL_AmiSSL(register __a0 X509_CRL **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_CRL(a, pp, length));
}

__asm __saveds X509_PKEY *X509_PKEY_new_AmiSSL(void)
{
	return(X509_PKEY_new());
}

__asm __saveds void X509_PKEY_free_AmiSSL(register __a0 X509_PKEY *a)
{
	X509_PKEY_free(a);
}

__asm __saveds int i2d_X509_PKEY_AmiSSL(register __a0 X509_PKEY *a, register __a1 unsigned char **pp)
{
	return(i2d_X509_PKEY(a, pp));
}

__asm __saveds X509_PKEY *d2i_X509_PKEY_AmiSSL(register __a0 X509_PKEY **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_X509_PKEY(a, pp, length));
}

__asm __saveds NETSCAPE_SPKI *NETSCAPE_SPKI_new_AmiSSL(void)
{
	return(NETSCAPE_SPKI_new());
}

__asm __saveds void NETSCAPE_SPKI_free_AmiSSL(register __a0 NETSCAPE_SPKI *a)
{
	NETSCAPE_SPKI_free(a);
}

__asm __saveds int i2d_NETSCAPE_SPKI_AmiSSL(register __a0 NETSCAPE_SPKI *a, register __a1 unsigned char **pp)
{
	return(i2d_NETSCAPE_SPKI(a, pp));
}

__asm __saveds NETSCAPE_SPKI *d2i_NETSCAPE_SPKI_AmiSSL(register __a0 NETSCAPE_SPKI **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_NETSCAPE_SPKI(a, pp, length));
}

__asm __saveds NETSCAPE_SPKAC *NETSCAPE_SPKAC_new_AmiSSL(void)
{
	return(NETSCAPE_SPKAC_new());
}

__asm __saveds void NETSCAPE_SPKAC_free_AmiSSL(register __a0 NETSCAPE_SPKAC *a)
{
	NETSCAPE_SPKAC_free(a);
}

__asm __saveds int i2d_NETSCAPE_SPKAC_AmiSSL(register __a0 NETSCAPE_SPKAC *a, register __a1 unsigned char **pp)
{
	return(i2d_NETSCAPE_SPKAC(a, pp));
}

__asm __saveds NETSCAPE_SPKAC *d2i_NETSCAPE_SPKAC_AmiSSL(register __a0 NETSCAPE_SPKAC **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_NETSCAPE_SPKAC(a, pp, length));
}

__asm __saveds int i2d_NETSCAPE_CERT_SEQUENCE_AmiSSL(register __a0 NETSCAPE_CERT_SEQUENCE *a, register __a1 unsigned char **pp)
{
	return(i2d_NETSCAPE_CERT_SEQUENCE(a, pp));
}

__asm __saveds NETSCAPE_CERT_SEQUENCE *NETSCAPE_CERT_SEQUENCE_new_AmiSSL(void)
{
	return(NETSCAPE_CERT_SEQUENCE_new());
}

__asm __saveds NETSCAPE_CERT_SEQUENCE *d2i_NETSCAPE_CERT_SEQUENCE_AmiSSL(register __a0 NETSCAPE_CERT_SEQUENCE **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_NETSCAPE_CERT_SEQUENCE(a, pp, length));
}

__asm __saveds void NETSCAPE_CERT_SEQUENCE_free_AmiSSL(register __a0 NETSCAPE_CERT_SEQUENCE *a)
{
	NETSCAPE_CERT_SEQUENCE_free(a);
}

__asm __saveds X509_INFO *X509_INFO_new_AmiSSL(void)
{
	return(X509_INFO_new());
}

__asm __saveds void X509_INFO_free_AmiSSL(register __a0 X509_INFO *a)
{
	X509_INFO_free(a);
}

__asm __saveds char *X509_NAME_oneline_AmiSSL(register __a0 X509_NAME *a, register __a1 char *buf, register __d0 int size)
{
	return(X509_NAME_oneline(a, buf, size));
}

__asm __saveds int ASN1_verify_AmiSSL(register __a0 int (*i2d)(), register __a1 X509_ALGOR *algor1, register __a2 ASN1_BIT_STRING *signature, register __a3 char *data, register __d0 EVP_PKEY *pkey)
{
	return(ASN1_verify(i2d, algor1, signature, data, pkey));
}

__asm __saveds int ASN1_digest_AmiSSL(register __a0 int (*i2d)(), register __a1 const EVP_MD *type, register __a2 char *data, register __a3 unsigned char *md, register __d0 unsigned int *len)
{
	return(ASN1_digest(i2d, type, data, md, len));
}

__asm __saveds int ASN1_sign_AmiSSL(register __a0 int (*i2d)(), register __a1 X509_ALGOR *algor1, register __a2 X509_ALGOR *algor2, register __a3 ASN1_BIT_STRING *signature, register __d0 char *data, register __d1 EVP_PKEY *pkey, register __d2 const EVP_MD *type)
{
	return(ASN1_sign(i2d, algor1, algor2, signature, data, pkey, type));
}

__asm __saveds int X509_set_version_AmiSSL(register __a0 X509 *x, register __d0 long version)
{
	return(X509_set_version(x, version));
}

__asm __saveds int X509_set_serialNumber_AmiSSL(register __a0 X509 *x, register __a1 ASN1_INTEGER *serial)
{
	return(X509_set_serialNumber(x, serial));
}

__asm __saveds ASN1_INTEGER *X509_get_serialNumber_AmiSSL(register __a0 X509 *x)
{
	return(X509_get_serialNumber(x));
}

__asm __saveds int X509_set_issuer_name_AmiSSL(register __a0 X509 *x, register __a1 X509_NAME *name)
{
	return(X509_set_issuer_name(x, name));
}

__asm __saveds X509_NAME *X509_get_issuer_name_AmiSSL(register __a0 X509 *a)
{
	return(X509_get_issuer_name(a));
}

__asm __saveds int X509_set_subject_name_AmiSSL(register __a0 X509 *x, register __a1 X509_NAME *name)
{
	return(X509_set_subject_name(x, name));
}

__asm __saveds X509_NAME *X509_get_subject_name_AmiSSL(register __a0 X509 *a)
{
	return(X509_get_subject_name(a));
}

__asm __saveds int X509_set_notBefore_AmiSSL(register __a0 X509 *x, register __a1 ASN1_TIME *tm)
{
	return(X509_set_notBefore(x, tm));
}

__asm __saveds int X509_set_notAfter_AmiSSL(register __a0 X509 *x, register __a1 ASN1_TIME *tm)
{
	return(X509_set_notAfter(x, tm));
}

__asm __saveds int X509_set_pubkey_AmiSSL(register __a0 X509 *x, register __a1 EVP_PKEY *pkey)
{
	return(X509_set_pubkey(x, pkey));
}

__asm __saveds EVP_PKEY *X509_get_pubkey_AmiSSL(register __a0 X509 *x)
{
	return(X509_get_pubkey(x));
}

__asm __saveds int X509_certificate_type_AmiSSL(register __a0 X509 *x, register __a1 EVP_PKEY *pubkey)
{
	return(X509_certificate_type(x, pubkey));
}

__asm __saveds int X509_REQ_set_version_AmiSSL(register __a0 X509_REQ *x, register __d0 long version)
{
	return(X509_REQ_set_version(x, version));
}

__asm __saveds int X509_REQ_set_subject_name_AmiSSL(register __a0 X509_REQ *req, register __a1 X509_NAME *name)
{
	return(X509_REQ_set_subject_name(req, name));
}

__asm __saveds int X509_REQ_set_pubkey_AmiSSL(register __a0 X509_REQ *x, register __a1 EVP_PKEY *pkey)
{
	return(X509_REQ_set_pubkey(x, pkey));
}

__asm __saveds EVP_PKEY *X509_REQ_get_pubkey_AmiSSL(register __a0 X509_REQ *req)
{
	return(X509_REQ_get_pubkey(req));
}

__asm __saveds int X509_REQ_extension_nid_AmiSSL(register __d0 int nid)
{
	return(X509_REQ_extension_nid(nid));
}

__asm __saveds int *X509_REQ_get_extension_nids_AmiSSL(void)
{
	return(X509_REQ_get_extension_nids());
}

__asm __saveds void X509_REQ_set_extension_nids_AmiSSL(register __a0 int *nids)
{
	X509_REQ_set_extension_nids(nids);
}

__asm __saveds STACK_OF(X509_EXTENSION) *X509_REQ_get_extensions_AmiSSL(register __a0 X509_REQ *req)
{
	return(X509_REQ_get_extensions(req));
}

__asm __saveds int X509_REQ_add_extensions_nid_AmiSSL(register __a0 X509_REQ *req, register __a1 STACK_OF(X509_EXTENSION) *exts, register __d0 int nid)
{
	return(X509_REQ_add_extensions_nid(req, exts, nid));
}

__asm __saveds int X509_REQ_add_extensions_AmiSSL(register __a0 X509_REQ *req, register __a1 STACK_OF(X509_EXTENSION) *exts)
{
	return(X509_REQ_add_extensions(req, exts));
}

__asm __saveds int X509_REQ_get_attr_count_AmiSSL(register __a0 const X509_REQ *req)
{
	return(X509_REQ_get_attr_count(req));
}

__asm __saveds int X509_REQ_get_attr_by_NID_AmiSSL(register __a0 const X509_REQ *req, register __d0 int nid, register __d1 int lastpos)
{
	return(X509_REQ_get_attr_by_NID(req, nid, lastpos));
}

__asm __saveds int X509_REQ_get_attr_by_OBJ_AmiSSL(register __a0 const X509_REQ *req, register __a1 ASN1_OBJECT *obj, register __d0 int lastpos)
{
	return(X509_REQ_get_attr_by_OBJ(req, obj, lastpos));
}

__asm __saveds X509_ATTRIBUTE *X509_REQ_get_attr_AmiSSL(register __a0 const X509_REQ *req, register __d0 int loc)
{
	return(X509_REQ_get_attr(req, loc));
}

__asm __saveds X509_ATTRIBUTE *X509_REQ_delete_attr_AmiSSL(register __a0 X509_REQ *req, register __d0 int loc)
{
	return(X509_REQ_delete_attr(req, loc));
}

__asm __saveds int X509_REQ_add1_attr_AmiSSL(register __a0 X509_REQ *req, register __a1 X509_ATTRIBUTE *attr)
{
	return(X509_REQ_add1_attr(req, attr));
}

__asm __saveds int X509_REQ_add1_attr_by_OBJ_AmiSSL(register __a0 X509_REQ *req, register __a1 ASN1_OBJECT *obj, register __d0 int type, register __a2 unsigned char *bytes, register __d1 int len)
{
	return(X509_REQ_add1_attr_by_OBJ(req, obj, type, bytes, len));
}

__asm __saveds int X509_REQ_add1_attr_by_NID_AmiSSL(register __a0 X509_REQ *req, register __d0 int nid, register __d1 int type, register __a1 unsigned char *bytes, register __d2 int len)
{
	return(X509_REQ_add1_attr_by_NID(req, nid, type, bytes, len));
}

__asm __saveds int X509_REQ_add1_attr_by_txt_AmiSSL(register __a0 X509_REQ *req, register __a1 char *attrname, register __d0 int type, register __a2 unsigned char *bytes, register __d1 int len)
{
	return(X509_REQ_add1_attr_by_txt(req, attrname, type, bytes, len));
}

__asm __saveds int X509_check_private_key_AmiSSL(register __a0 X509 *x509, register __a1 EVP_PKEY *pkey)
{
	return(X509_check_private_key(x509, pkey));
}

__asm __saveds int X509_issuer_and_serial_cmp_AmiSSL(register __a0 const X509 *a, register __a1 const X509 *b)
{
	return(X509_issuer_and_serial_cmp(a, b));
}

__asm __saveds unsigned long X509_issuer_and_serial_hash_AmiSSL(register __a0 X509 *a)
{
	return(X509_issuer_and_serial_hash(a));
}

__asm __saveds int X509_issuer_name_cmp_AmiSSL(register __a0 const X509 *a, register __a1 const X509 *b)
{
	return(X509_issuer_name_cmp(a, b));
}

__asm __saveds unsigned long X509_issuer_name_hash_AmiSSL(register __a0 X509 *a)
{
	return(X509_issuer_name_hash(a));
}

__asm __saveds int X509_subject_name_cmp_AmiSSL(register __a0 const X509 *a, register __a1 const X509 *b)
{
	return(X509_subject_name_cmp(a, b));
}

__asm __saveds unsigned long X509_subject_name_hash_AmiSSL(register __a0 X509 *x)
{
	return(X509_subject_name_hash(x));
}

__asm __saveds int X509_cmp_AmiSSL(register __a0 const X509 *a, register __a1 const X509 *b)
{
	return(X509_cmp(a, b));
}

__asm __saveds int X509_NAME_cmp_AmiSSL(register __a0 const X509_NAME *a, register __a1 const X509_NAME *b)
{
	return(X509_NAME_cmp(a, b));
}

__asm __saveds unsigned long X509_NAME_hash_AmiSSL(register __a0 X509_NAME *x)
{
	return(X509_NAME_hash(x));
}

__asm __saveds int X509_CRL_cmp_AmiSSL(register __a0 const X509_CRL *a, register __a1 const X509_CRL *b)
{
	return(X509_CRL_cmp(a, b));
}

__asm __saveds int X509_NAME_print_AmiSSL(register __a0 BIO *bp, register __a1 X509_NAME *name, register __d0 int obase)
{
	return(X509_NAME_print(bp, name, obase));
}

__asm __saveds int X509_NAME_print_ex_AmiSSL(register __a0 BIO *out, register __a1 X509_NAME *nm, register __d0 int indent, register __d1 unsigned long flags)
{
	return(X509_NAME_print_ex(out, nm, indent, flags));
}

__asm __saveds int X509_print_AmiSSL(register __a0 BIO *bp, register __a1 X509 *x)
{
	return(X509_print(bp, x));
}

__asm __saveds int X509_CERT_AUX_print_AmiSSL(register __a0 BIO *bp, register __a1 X509_CERT_AUX *x, register __d0 int indent)
{
	return(X509_CERT_AUX_print(bp, x, indent));
}

__asm __saveds int X509_CRL_print_AmiSSL(register __a0 BIO *bp, register __a1 X509_CRL *x)
{
	return(X509_CRL_print(bp, x));
}

__asm __saveds int X509_REQ_print_AmiSSL(register __a0 BIO *bp, register __a1 X509_REQ *req)
{
	return(X509_REQ_print(bp, req));
}

__asm __saveds int X509_NAME_entry_count_AmiSSL(register __a0 X509_NAME *name)
{
	return(X509_NAME_entry_count(name));
}

__asm __saveds int X509_NAME_get_text_by_NID_AmiSSL(register __a0 X509_NAME *name, register __d0 int nid, register __a1 char *buf, register __d1 int len)
{
	return(X509_NAME_get_text_by_NID(name, nid, buf, len));
}

__asm __saveds int X509_NAME_get_text_by_OBJ_AmiSSL(register __a0 X509_NAME *name, register __a1 ASN1_OBJECT *obj, register __a2 char *buf, register __d0 int len)
{
	return(X509_NAME_get_text_by_OBJ(name, obj, buf, len));
}

__asm __saveds int X509_NAME_get_index_by_NID_AmiSSL(register __a0 X509_NAME *name, register __d0 int nid, register __d1 int lastpos)
{
	return(X509_NAME_get_index_by_NID(name, nid, lastpos));
}

__asm __saveds int X509_NAME_get_index_by_OBJ_AmiSSL(register __a0 X509_NAME *name, register __a1 ASN1_OBJECT *obj, register __d0 int lastpos)
{
	return(X509_NAME_get_index_by_OBJ(name, obj, lastpos));
}

__asm __saveds X509_NAME_ENTRY *X509_NAME_get_entry_AmiSSL(register __a0 X509_NAME *name, register __d0 int loc)
{
	return(X509_NAME_get_entry(name, loc));
}

__asm __saveds X509_NAME_ENTRY *X509_NAME_delete_entry_AmiSSL(register __a0 X509_NAME *name, register __d0 int loc)
{
	return(X509_NAME_delete_entry(name, loc));
}

__asm __saveds int X509_NAME_add_entry_AmiSSL(register __a0 X509_NAME *name, register __a1 X509_NAME_ENTRY *ne, register __d0 int loc, register __d1 int set)
{
	return(X509_NAME_add_entry(name, ne, loc, set));
}

__asm __saveds int X509_NAME_add_entry_by_OBJ_AmiSSL(register __a0 X509_NAME *name, register __a1 ASN1_OBJECT *obj, register __d0 int type, register __a2 unsigned char *bytes, register __d1 int len, register __d2 int loc, register __d3 int set)
{
	return(X509_NAME_add_entry_by_OBJ(name, obj, type, bytes, len, loc, set));
}

__asm __saveds int X509_NAME_add_entry_by_NID_AmiSSL(register __a0 X509_NAME *name, register __d0 int nid, register __d1 int type, register __a1 unsigned char *bytes, register __d2 int len, register __d3 int loc, register __d4 int set)
{
	return(X509_NAME_add_entry_by_NID(name, nid, type, bytes, len, loc, set));
}

__asm __saveds X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_txt_AmiSSL(register __a0 X509_NAME_ENTRY **ne, register __a1 char *field, register __d0 int type, register __a2 unsigned char *bytes, register __d1 int len)
{
	return(X509_NAME_ENTRY_create_by_txt(ne, field, type, bytes, len));
}

__asm __saveds X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_NID_AmiSSL(register __a0 X509_NAME_ENTRY **ne, register __d0 int nid, register __d1 int type, register __a1 unsigned char *bytes, register __d2 int len)
{
	return(X509_NAME_ENTRY_create_by_NID(ne, nid, type, bytes, len));
}

__asm __saveds int X509_NAME_add_entry_by_txt_AmiSSL(register __a0 X509_NAME *name, register __a1 char *field, register __d0 int type, register __a2 unsigned char *bytes, register __d1 int len, register __d2 int loc, register __d3 int set)
{
	return(X509_NAME_add_entry_by_txt(name, field, type, bytes, len, loc, set));
}

__asm __saveds X509_NAME_ENTRY *X509_NAME_ENTRY_create_by_OBJ_AmiSSL(register __a0 X509_NAME_ENTRY **ne, register __a1 ASN1_OBJECT *obj, register __d0 int type, register __a2 unsigned char *bytes, register __d1 int len)
{
	return(X509_NAME_ENTRY_create_by_OBJ(ne, obj, type, bytes, len));
}

__asm __saveds int X509_NAME_ENTRY_set_object_AmiSSL(register __a0 X509_NAME_ENTRY *ne, register __a1 ASN1_OBJECT *obj)
{
	return(X509_NAME_ENTRY_set_object(ne, obj));
}

__asm __saveds int X509_NAME_ENTRY_set_data_AmiSSL(register __a0 X509_NAME_ENTRY *ne, register __d0 int type, register __a1 unsigned char *bytes, register __d1 int len)
{
	return(X509_NAME_ENTRY_set_data(ne, type, bytes, len));
}

__asm __saveds ASN1_OBJECT *X509_NAME_ENTRY_get_object_AmiSSL(register __a0 X509_NAME_ENTRY *ne)
{
	return(X509_NAME_ENTRY_get_object(ne));
}

__asm __saveds ASN1_STRING *X509_NAME_ENTRY_get_data_AmiSSL(register __a0 X509_NAME_ENTRY *ne)
{
	return(X509_NAME_ENTRY_get_data(ne));
}

__asm __saveds int X509v3_get_ext_count_AmiSSL(register __a0 const STACK_OF(X509_EXTENSION) *x)
{
	return(X509v3_get_ext_count(x));
}

__asm __saveds int X509v3_get_ext_by_NID_AmiSSL(register __a0 const STACK_OF(X509_EXTENSION) *x, register __d0 int nid, register __d1 int lastpos)
{
	return(X509v3_get_ext_by_NID(x, nid, lastpos));
}

__asm __saveds int X509v3_get_ext_by_OBJ_AmiSSL(register __a0 const STACK_OF(X509_EXTENSION) *x, register __a1 ASN1_OBJECT *obj, register __d0 int lastpos)
{
	return(X509v3_get_ext_by_OBJ(x, obj, lastpos));
}

__asm __saveds int X509v3_get_ext_by_critical_AmiSSL(register __a0 const STACK_OF(X509_EXTENSION) *x, register __d0 int crit, register __d1 int lastpos)
{
	return(X509v3_get_ext_by_critical(x, crit, lastpos));
}

__asm __saveds X509_EXTENSION *X509v3_get_ext_AmiSSL(register __a0 const STACK_OF(X509_EXTENSION) *x, register __d0 int loc)
{
	return(X509v3_get_ext(x, loc));
}

__asm __saveds X509_EXTENSION *X509v3_delete_ext_AmiSSL(register __a0 STACK_OF(X509_EXTENSION) *x, register __d0 int loc)
{
	return(X509v3_delete_ext(x, loc));
}

__asm __saveds STACK_OF(X509_EXTENSION) *X509v3_add_ext_AmiSSL(register __a0 STACK_OF(X509_EXTENSION) **x, register __a1 X509_EXTENSION *ex, register __d0 int loc)
{
	return(X509v3_add_ext(x, ex, loc));
}

__asm __saveds int X509_get_ext_count_AmiSSL(register __a0 X509 *x)
{
	return(X509_get_ext_count(x));
}

__asm __saveds int X509_get_ext_by_NID_AmiSSL(register __a0 X509 *x, register __d0 int nid, register __d1 int lastpos)
{
	return(X509_get_ext_by_NID(x, nid, lastpos));
}

__asm __saveds int X509_get_ext_by_OBJ_AmiSSL(register __a0 X509 *x, register __a1 ASN1_OBJECT *obj, register __d0 int lastpos)
{
	return(X509_get_ext_by_OBJ(x, obj, lastpos));
}

__asm __saveds int X509_get_ext_by_critical_AmiSSL(register __a0 X509 *x, register __d0 int crit, register __d1 int lastpos)
{
	return(X509_get_ext_by_critical(x, crit, lastpos));
}

__asm __saveds X509_EXTENSION *X509_get_ext_AmiSSL(register __a0 X509 *x, register __d0 int loc)
{
	return(X509_get_ext(x, loc));
}

__asm __saveds X509_EXTENSION *X509_delete_ext_AmiSSL(register __a0 X509 *x, register __d0 int loc)
{
	return(X509_delete_ext(x, loc));
}

__asm __saveds int X509_add_ext_AmiSSL(register __a0 X509 *x, register __a1 X509_EXTENSION *ex, register __d0 int loc)
{
	return(X509_add_ext(x, ex, loc));
}

__asm __saveds void *X509_get_ext_d2i_AmiSSL(register __a0 X509 *x, register __d0 int nid, register __a1 int *crit, register __a2 int *idx)
{
	return(X509_get_ext_d2i(x, nid, crit, idx));
}

__asm __saveds int X509_CRL_get_ext_count_AmiSSL(register __a0 X509_CRL *x)
{
	return(X509_CRL_get_ext_count(x));
}

__asm __saveds int X509_CRL_get_ext_by_NID_AmiSSL(register __a0 X509_CRL *x, register __d0 int nid, register __d1 int lastpos)
{
	return(X509_CRL_get_ext_by_NID(x, nid, lastpos));
}

__asm __saveds int X509_CRL_get_ext_by_OBJ_AmiSSL(register __a0 X509_CRL *x, register __a1 ASN1_OBJECT *obj, register __d0 int lastpos)
{
	return(X509_CRL_get_ext_by_OBJ(x, obj, lastpos));
}

__asm __saveds int X509_CRL_get_ext_by_critical_AmiSSL(register __a0 X509_CRL *x, register __d0 int crit, register __d1 int lastpos)
{
	return(X509_CRL_get_ext_by_critical(x, crit, lastpos));
}

__asm __saveds X509_EXTENSION *X509_CRL_get_ext_AmiSSL(register __a0 X509_CRL *x, register __d0 int loc)
{
	return(X509_CRL_get_ext(x, loc));
}

__asm __saveds X509_EXTENSION *X509_CRL_delete_ext_AmiSSL(register __a0 X509_CRL *x, register __d0 int loc)
{
	return(X509_CRL_delete_ext(x, loc));
}

__asm __saveds int X509_CRL_add_ext_AmiSSL(register __a0 X509_CRL *x, register __a1 X509_EXTENSION *ex, register __d0 int loc)
{
	return(X509_CRL_add_ext(x, ex, loc));
}

__asm __saveds void *X509_CRL_get_ext_d2i_AmiSSL(register __a0 X509_CRL *x, register __d0 int nid, register __a1 int *crit, register __a2 int *idx)
{
	return(X509_CRL_get_ext_d2i(x, nid, crit, idx));
}

__asm __saveds int X509_REVOKED_get_ext_count_AmiSSL(register __a0 X509_REVOKED *x)
{
	return(X509_REVOKED_get_ext_count(x));
}

__asm __saveds int X509_REVOKED_get_ext_by_NID_AmiSSL(register __a0 X509_REVOKED *x, register __d0 int nid, register __d1 int lastpos)
{
	return(X509_REVOKED_get_ext_by_NID(x, nid, lastpos));
}

__asm __saveds int X509_REVOKED_get_ext_by_OBJ_AmiSSL(register __a0 X509_REVOKED *x, register __a1 ASN1_OBJECT *obj, register __d0 int lastpos)
{
	return(X509_REVOKED_get_ext_by_OBJ(x, obj, lastpos));
}

__asm __saveds int X509_REVOKED_get_ext_by_critical_AmiSSL(register __a0 X509_REVOKED *x, register __d0 int crit, register __d1 int lastpos)
{
	return(X509_REVOKED_get_ext_by_critical(x, crit, lastpos));
}

__asm __saveds X509_EXTENSION *X509_REVOKED_get_ext_AmiSSL(register __a0 X509_REVOKED *x, register __d0 int loc)
{
	return(X509_REVOKED_get_ext(x, loc));
}

__asm __saveds X509_EXTENSION *X509_REVOKED_delete_ext_AmiSSL(register __a0 X509_REVOKED *x, register __d0 int loc)
{
	return(X509_REVOKED_delete_ext(x, loc));
}

__asm __saveds int X509_REVOKED_add_ext_AmiSSL(register __a0 X509_REVOKED *x, register __a1 X509_EXTENSION *ex, register __d0 int loc)
{
	return(X509_REVOKED_add_ext(x, ex, loc));
}

__asm __saveds void *X509_REVOKED_get_ext_d2i_AmiSSL(register __a0 X509_REVOKED *x, register __d0 int nid, register __a1 int *crit, register __a2 int *idx)
{
	return(X509_REVOKED_get_ext_d2i(x, nid, crit, idx));
}

__asm __saveds X509_EXTENSION *X509_EXTENSION_create_by_NID_AmiSSL(register __a0 X509_EXTENSION **ex, register __d0 int nid, register __d1 int crit, register __a1 ASN1_OCTET_STRING *data)
{
	return(X509_EXTENSION_create_by_NID(ex, nid, crit, data));
}

__asm __saveds X509_EXTENSION *X509_EXTENSION_create_by_OBJ_AmiSSL(register __a0 X509_EXTENSION **ex, register __a1 ASN1_OBJECT *obj, register __d0 int crit, register __a2 ASN1_OCTET_STRING *data)
{
	return(X509_EXTENSION_create_by_OBJ(ex, obj, crit, data));
}

__asm __saveds int X509_EXTENSION_set_object_AmiSSL(register __a0 X509_EXTENSION *ex, register __a1 ASN1_OBJECT *obj)
{
	return(X509_EXTENSION_set_object(ex, obj));
}

__asm __saveds int X509_EXTENSION_set_critical_AmiSSL(register __a0 X509_EXTENSION *ex, register __d0 int crit)
{
	return(X509_EXTENSION_set_critical(ex, crit));
}

__asm __saveds int X509_EXTENSION_set_data_AmiSSL(register __a0 X509_EXTENSION *ex, register __a1 ASN1_OCTET_STRING *data)
{
	return(X509_EXTENSION_set_data(ex, data));
}

__asm __saveds ASN1_OBJECT *X509_EXTENSION_get_object_AmiSSL(register __a0 X509_EXTENSION *ex)
{
	return(X509_EXTENSION_get_object(ex));
}

__asm __saveds ASN1_OCTET_STRING *X509_EXTENSION_get_data_AmiSSL(register __a0 X509_EXTENSION *ne)
{
	return(X509_EXTENSION_get_data(ne));
}

__asm __saveds int X509_EXTENSION_get_critical_AmiSSL(register __a0 X509_EXTENSION *ex)
{
	return(X509_EXTENSION_get_critical(ex));
}

__asm __saveds int X509at_get_attr_count_AmiSSL(register __a0 const STACK_OF(X509_ATTRIBUTE) *x)
{
	return(X509at_get_attr_count(x));
}

__asm __saveds int X509at_get_attr_by_NID_AmiSSL(register __a0 const STACK_OF(X509_ATTRIBUTE) *x, register __d0 int nid, register __d1 int lastpos)
{
	return(X509at_get_attr_by_NID(x, nid, lastpos));
}

__asm __saveds int X509at_get_attr_by_OBJ_AmiSSL(register __a0 const STACK_OF(X509_ATTRIBUTE) *sk, register __a1 ASN1_OBJECT *obj, register __d0 int lastpos)
{
	return(X509at_get_attr_by_OBJ(sk, obj, lastpos));
}

__asm __saveds X509_ATTRIBUTE *X509at_get_attr_AmiSSL(register __a0 const STACK_OF(X509_ATTRIBUTE) *x, register __d0 int loc)
{
	return(X509at_get_attr(x, loc));
}

__asm __saveds X509_ATTRIBUTE *X509at_delete_attr_AmiSSL(register __a0 STACK_OF(X509_ATTRIBUTE) *x, register __d0 int loc)
{
	return(X509at_delete_attr(x, loc));
}

__asm __saveds STACK_OF(X509_ATTRIBUTE) *X509at_add1_attr_AmiSSL(register __a0 STACK_OF(X509_ATTRIBUTE) **x, register __a1 X509_ATTRIBUTE *attr)
{
	return(X509at_add1_attr(x, attr));
}

__asm __saveds STACK_OF(X509_ATTRIBUTE) *X509at_add1_attr_by_OBJ_AmiSSL(register __a0 STACK_OF(X509_ATTRIBUTE) **x, register __a1 ASN1_OBJECT *obj, register __d0 int type, register __a2 unsigned char *bytes, register __d1 int len)
{
	return(X509at_add1_attr_by_OBJ(x, obj, type, bytes, len));
}

__asm __saveds STACK_OF(X509_ATTRIBUTE) *X509at_add1_attr_by_NID_AmiSSL(register __a0 STACK_OF(X509_ATTRIBUTE) **x, register __d0 int nid, register __d1 int type, register __a1 unsigned char *bytes, register __d2 int len)
{
	return(X509at_add1_attr_by_NID(x, nid, type, bytes, len));
}

__asm __saveds STACK_OF(X509_ATTRIBUTE) *X509at_add1_attr_by_txt_AmiSSL(register __a0 STACK_OF(X509_ATTRIBUTE) **x, register __a1 char *attrname, register __d0 int type, register __a2 unsigned char *bytes, register __d1 int len)
{
	return(X509at_add1_attr_by_txt(x, attrname, type, bytes, len));
}

__asm __saveds X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_NID_AmiSSL(register __a0 X509_ATTRIBUTE **attr, register __d0 int nid, register __d1 int atrtype, register __a1 void *data, register __d2 int len)
{
	return(X509_ATTRIBUTE_create_by_NID(attr, nid, atrtype, data, len));
}

__asm __saveds X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_OBJ_AmiSSL(register __a0 X509_ATTRIBUTE **attr, register __a1 ASN1_OBJECT *obj, register __d0 int atrtype, register __a2 void *data, register __d1 int len)
{
	return(X509_ATTRIBUTE_create_by_OBJ(attr, obj, atrtype, data, len));
}

__asm __saveds X509_ATTRIBUTE *X509_ATTRIBUTE_create_by_txt_AmiSSL(register __a0 X509_ATTRIBUTE **attr, register __a1 char *atrname, register __d0 int type, register __a2 unsigned char *bytes, register __d1 int len)
{
	return(X509_ATTRIBUTE_create_by_txt(attr, atrname, type, bytes, len));
}

__asm __saveds int X509_ATTRIBUTE_set1_object_AmiSSL(register __a0 X509_ATTRIBUTE *attr, register __a1 ASN1_OBJECT *obj)
{
	return(X509_ATTRIBUTE_set1_object(attr, obj));
}

__asm __saveds int X509_ATTRIBUTE_set1_data_AmiSSL(register __a0 X509_ATTRIBUTE *attr, register __d0 int attrtype, register __a1 void *data, register __d1 int len)
{
	return(X509_ATTRIBUTE_set1_data(attr, attrtype, data, len));
}

__asm __saveds void *X509_ATTRIBUTE_get0_data_AmiSSL(register __a0 X509_ATTRIBUTE *attr, register __d0 int idx, register __d1 int atrtype, register __a1 void *data)
{
	return(X509_ATTRIBUTE_get0_data(attr, idx, atrtype, data));
}

__asm __saveds int X509_ATTRIBUTE_count_AmiSSL(register __a0 X509_ATTRIBUTE *attr)
{
	return(X509_ATTRIBUTE_count(attr));
}

__asm __saveds ASN1_OBJECT *X509_ATTRIBUTE_get0_object_AmiSSL(register __a0 X509_ATTRIBUTE *attr)
{
	return(X509_ATTRIBUTE_get0_object(attr));
}

__asm __saveds ASN1_TYPE *X509_ATTRIBUTE_get0_type_AmiSSL(register __a0 X509_ATTRIBUTE *attr, register __d0 int idx)
{
	return(X509_ATTRIBUTE_get0_type(attr, idx));
}

__asm __saveds int X509_verify_cert_AmiSSL(register __a0 X509_STORE_CTX *ctx)
{
	return(X509_verify_cert(ctx));
}

__asm __saveds X509 *X509_find_by_issuer_and_serial_AmiSSL(register __a0 STACK_OF(X509) *sk, register __a1 X509_NAME *name, register __a2 ASN1_INTEGER *serial)
{
	return(X509_find_by_issuer_and_serial(sk, name, serial));
}

__asm __saveds X509 *X509_find_by_subject_AmiSSL(register __a0 STACK_OF(X509) *sk, register __a1 X509_NAME *name)
{
	return(X509_find_by_subject(sk, name));
}

__asm __saveds int i2d_PBEPARAM_AmiSSL(register __a0 PBEPARAM *a, register __a1 unsigned char **pp)
{
	return(i2d_PBEPARAM(a, pp));
}

__asm __saveds PBEPARAM *PBEPARAM_new_AmiSSL(void)
{
	return(PBEPARAM_new());
}

__asm __saveds PBEPARAM *d2i_PBEPARAM_AmiSSL(register __a0 PBEPARAM **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PBEPARAM(a, pp, length));
}

__asm __saveds void PBEPARAM_free_AmiSSL(register __a0 PBEPARAM *a)
{
	PBEPARAM_free(a);
}

__asm __saveds X509_ALGOR *PKCS5_pbe_set_AmiSSL(register __d0 int alg, register __d1 int iter, register __a0 unsigned char *salt, register __d2 int saltlen)
{
	return(PKCS5_pbe_set(alg, iter, salt, saltlen));
}

__asm __saveds X509_ALGOR *PKCS5_pbe2_set_AmiSSL(register __a0 const EVP_CIPHER *cipher, register __d0 int iter, register __a1 unsigned char *salt, register __d1 int saltlen)
{
	return(PKCS5_pbe2_set(cipher, iter, salt, saltlen));
}

__asm __saveds int i2d_PBKDF2PARAM_AmiSSL(register __a0 PBKDF2PARAM *a, register __a1 unsigned char **pp)
{
	return(i2d_PBKDF2PARAM(a, pp));
}

__asm __saveds PBKDF2PARAM *PBKDF2PARAM_new_AmiSSL(void)
{
	return(PBKDF2PARAM_new());
}

__asm __saveds PBKDF2PARAM *d2i_PBKDF2PARAM_AmiSSL(register __a0 PBKDF2PARAM **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PBKDF2PARAM(a, pp, length));
}

__asm __saveds void PBKDF2PARAM_free_AmiSSL(register __a0 PBKDF2PARAM *a)
{
	PBKDF2PARAM_free(a);
}

__asm __saveds int i2d_PBE2PARAM_AmiSSL(register __a0 PBE2PARAM *a, register __a1 unsigned char **pp)
{
	return(i2d_PBE2PARAM(a, pp));
}

__asm __saveds PBE2PARAM *PBE2PARAM_new_AmiSSL(void)
{
	return(PBE2PARAM_new());
}

__asm __saveds PBE2PARAM *d2i_PBE2PARAM_AmiSSL(register __a0 PBE2PARAM **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PBE2PARAM(a, pp, length));
}

__asm __saveds void PBE2PARAM_free_AmiSSL(register __a0 PBE2PARAM *a)
{
	PBE2PARAM_free(a);
}

__asm __saveds int i2d_PKCS8_PRIV_KEY_INFO_AmiSSL(register __a0 PKCS8_PRIV_KEY_INFO *a, register __a1 unsigned char **pp)
{
	return(i2d_PKCS8_PRIV_KEY_INFO(a, pp));
}

__asm __saveds PKCS8_PRIV_KEY_INFO *PKCS8_PRIV_KEY_INFO_new_AmiSSL(void)
{
	return(PKCS8_PRIV_KEY_INFO_new());
}

__asm __saveds PKCS8_PRIV_KEY_INFO *d2i_PKCS8_PRIV_KEY_INFO_AmiSSL(register __a0 PKCS8_PRIV_KEY_INFO **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_PKCS8_PRIV_KEY_INFO(a, pp, length));
}

__asm __saveds void PKCS8_PRIV_KEY_INFO_free_AmiSSL(register __a0 PKCS8_PRIV_KEY_INFO *a)
{
	PKCS8_PRIV_KEY_INFO_free(a);
}

__asm __saveds EVP_PKEY *EVP_PKCS82PKEY_AmiSSL(register __a0 PKCS8_PRIV_KEY_INFO *p8)
{
	return(EVP_PKCS82PKEY(p8));
}

__asm __saveds PKCS8_PRIV_KEY_INFO *EVP_PKEY2PKCS8_AmiSSL(register __a0 EVP_PKEY *pkey)
{
	return(EVP_PKEY2PKCS8(pkey));
}

__asm __saveds PKCS8_PRIV_KEY_INFO *EVP_PKEY2PKCS8_broken_AmiSSL(register __a0 EVP_PKEY *pkey, register __d0 int broken)
{
	return(EVP_PKEY2PKCS8_broken(pkey, broken));
}

__asm __saveds PKCS8_PRIV_KEY_INFO *PKCS8_set_broken_AmiSSL(register __a0 PKCS8_PRIV_KEY_INFO *p8, register __d0 int broken)
{
	return(PKCS8_set_broken(p8, broken));
}

__asm __saveds int X509_check_trust_AmiSSL(register __a0 X509 *x, register __d0 int id, register __d1 int flags)
{
	return(X509_check_trust(x, id, flags));
}

__asm __saveds int X509_TRUST_get_count_AmiSSL(void)
{
	return(X509_TRUST_get_count());
}

__asm __saveds X509_TRUST *X509_TRUST_get0_AmiSSL(register __d0 int idx)
{
	return(X509_TRUST_get0(idx));
}

__asm __saveds int X509_TRUST_get_by_id_AmiSSL(register __d0 int id)
{
	return(X509_TRUST_get_by_id(id));
}

__asm __saveds int X509_TRUST_add_AmiSSL(register __d0 int id, register __d1 int flags, register __a0 int (*ck)(X509_TRUST *, X509 *, int), register __a1 char *name, register __d2 int arg1, register __a2 void *arg2)
{
	return(X509_TRUST_add(id, flags, ck, name, arg1, arg2));
}

__asm __saveds void X509_TRUST_cleanup_AmiSSL(void)
{
	X509_TRUST_cleanup();
}

__asm __saveds int X509_TRUST_get_flags_AmiSSL(register __a0 X509_TRUST *xp)
{
	return(X509_TRUST_get_flags(xp));
}

__asm __saveds char *X509_TRUST_get0_name_AmiSSL(register __a0 X509_TRUST *xp)
{
	return(X509_TRUST_get0_name(xp));
}

__asm __saveds int X509_TRUST_get_trust_AmiSSL(register __a0 X509_TRUST *xp)
{
	return(X509_TRUST_get_trust(xp));
}

__asm __saveds void ERR_load_X509_strings_AmiSSL(void)
{
	ERR_load_X509_strings();
}

__asm __saveds int X509_OBJECT_idx_by_subject_AmiSSL(register __a0 STACK_OF(X509_OBJECT) *h, register __d0 int type, register __a1 X509_NAME *name)
{
	return(X509_OBJECT_idx_by_subject(h, type, name));
}

__asm __saveds X509_OBJECT *X509_OBJECT_retrieve_by_subject_AmiSSL(register __a0 STACK_OF(X509_OBJECT) *h, register __d0 int type, register __a1 X509_NAME *name)
{
	return(X509_OBJECT_retrieve_by_subject(h, type, name));
}

__asm __saveds X509_OBJECT *X509_OBJECT_retrieve_match_AmiSSL(register __a0 STACK_OF(X509_OBJECT) *h, register __a1 X509_OBJECT *x)
{
	return(X509_OBJECT_retrieve_match(h, x));
}

__asm __saveds void X509_OBJECT_up_ref_count_AmiSSL(register __a0 X509_OBJECT *a)
{
	X509_OBJECT_up_ref_count(a);
}

__asm __saveds void X509_OBJECT_free_contents_AmiSSL(register __a0 X509_OBJECT *a)
{
	X509_OBJECT_free_contents(a);
}

__asm __saveds X509_STORE *X509_STORE_new_AmiSSL(void)
{
	return(X509_STORE_new());
}

__asm __saveds void X509_STORE_free_AmiSSL(register __a0 X509_STORE *v)
{
	X509_STORE_free(v);
}

__asm __saveds X509_STORE_CTX *X509_STORE_CTX_new_AmiSSL(void)
{
	return(X509_STORE_CTX_new());
}

__asm __saveds int X509_STORE_CTX_get1_issuer_AmiSSL(register __a0 X509 **issuer, register __a1 X509_STORE_CTX *ctx, register __a2 X509 *x)
{
	return(X509_STORE_CTX_get1_issuer(issuer, ctx, x));
}

__asm __saveds void X509_STORE_CTX_free_AmiSSL(register __a0 X509_STORE_CTX *ctx)
{
	X509_STORE_CTX_free(ctx);
}

__asm __saveds void X509_STORE_CTX_init_AmiSSL(register __a0 X509_STORE_CTX *ctx, register __a1 X509_STORE *store, register __a2 X509 *x509, register __a3 STACK_OF(X509) *chain)
{
	X509_STORE_CTX_init(ctx, store, x509, chain);
}

__asm __saveds void X509_STORE_CTX_trusted_stack_AmiSSL(register __a0 X509_STORE_CTX *ctx, register __a1 STACK_OF(X509) *sk)
{
	X509_STORE_CTX_trusted_stack(ctx, sk);
}

__asm __saveds void X509_STORE_CTX_cleanup_AmiSSL(register __a0 X509_STORE_CTX *ctx)
{
	X509_STORE_CTX_cleanup(ctx);
}

__asm __saveds X509_LOOKUP *X509_STORE_add_lookup_AmiSSL(register __a0 X509_STORE *v, register __a1 X509_LOOKUP_METHOD *m)
{
	return(X509_STORE_add_lookup(v, m));
}

__asm __saveds X509_LOOKUP_METHOD *X509_LOOKUP_hash_dir_AmiSSL(void)
{
	return(X509_LOOKUP_hash_dir());
}

__asm __saveds X509_LOOKUP_METHOD *X509_LOOKUP_file_AmiSSL(void)
{
	return(X509_LOOKUP_file());
}

__asm __saveds int X509_STORE_add_cert_AmiSSL(register __a0 X509_STORE *ctx, register __a1 X509 *x)
{
	return(X509_STORE_add_cert(ctx, x));
}

__asm __saveds int X509_STORE_add_crl_AmiSSL(register __a0 X509_STORE *ctx, register __a1 X509_CRL *x)
{
	return(X509_STORE_add_crl(ctx, x));
}

__asm __saveds int X509_STORE_get_by_subject_AmiSSL(register __a0 X509_STORE_CTX *vs, register __d0 int type, register __a1 X509_NAME *name, register __a2 X509_OBJECT *ret)
{
	return(X509_STORE_get_by_subject(vs, type, name, ret));
}

__asm __saveds int X509_LOOKUP_ctrl_AmiSSL(register __a0 X509_LOOKUP *ctx, register __d0 int cmd, register __a1 const char *argc, register __d1 long argl, register __a2 char **ret)
{
	return(X509_LOOKUP_ctrl(ctx, cmd, argc, argl, ret));
}

__asm __saveds int X509_load_cert_file_AmiSSL(register __a0 X509_LOOKUP *ctx, register __a1 const char *file, register __d0 int type)
{
	return(X509_load_cert_file(ctx, file, type));
}

__asm __saveds int X509_load_crl_file_AmiSSL(register __a0 X509_LOOKUP *ctx, register __a1 const char *file, register __d0 int type)
{
	return(X509_load_crl_file(ctx, file, type));
}

__asm __saveds int X509_load_cert_crl_file_AmiSSL(register __a0 X509_LOOKUP *ctx, register __a1 const char *file, register __d0 int type)
{
	return(X509_load_cert_crl_file(ctx, file, type));
}

__asm __saveds X509_LOOKUP *X509_LOOKUP_new_AmiSSL(register __a0 X509_LOOKUP_METHOD *method)
{
	return(X509_LOOKUP_new(method));
}

__asm __saveds void X509_LOOKUP_free_AmiSSL(register __a0 X509_LOOKUP *ctx)
{
	X509_LOOKUP_free(ctx);
}

__asm __saveds int X509_LOOKUP_init_AmiSSL(register __a0 X509_LOOKUP *ctx)
{
	return(X509_LOOKUP_init(ctx));
}

__asm __saveds int X509_LOOKUP_by_subject_AmiSSL(register __a0 X509_LOOKUP *ctx, register __d0 int type, register __a1 X509_NAME *name, register __a2 X509_OBJECT *ret)
{
	return(X509_LOOKUP_by_subject(ctx, type, name, ret));
}

__asm __saveds int X509_LOOKUP_by_issuer_serial_AmiSSL(register __a0 X509_LOOKUP *ctx, register __d0 int type, register __a1 X509_NAME *name, register __a2 ASN1_INTEGER *serial, register __a3 X509_OBJECT *ret)
{
	return(X509_LOOKUP_by_issuer_serial(ctx, type, name, serial, ret));
}

__asm __saveds int X509_LOOKUP_by_fingerprint_AmiSSL(register __a0 X509_LOOKUP *ctx, register __d0 int type, register __a1 unsigned char *bytes, register __d1 int len, register __a2 X509_OBJECT *ret)
{
	return(X509_LOOKUP_by_fingerprint(ctx, type, bytes, len, ret));
}

__asm __saveds int X509_LOOKUP_by_alias_AmiSSL(register __a0 X509_LOOKUP *ctx, register __d0 int type, register __a1 char *str, register __d1 int len, register __a2 X509_OBJECT *ret)
{
	return(X509_LOOKUP_by_alias(ctx, type, str, len, ret));
}

__asm __saveds int X509_LOOKUP_shutdown_AmiSSL(register __a0 X509_LOOKUP *ctx)
{
	return(X509_LOOKUP_shutdown(ctx));
}

__asm __saveds int X509_STORE_load_locations_AmiSSL(register __a0 X509_STORE *ctx, register __a1 const char *file, register __a2 const char *dir)
{
	return(X509_STORE_load_locations(ctx, file, dir));
}

__asm __saveds int X509_STORE_set_default_paths_AmiSSL(register __a0 X509_STORE *ctx)
{
	return(X509_STORE_set_default_paths(ctx));
}

__asm __saveds int X509_STORE_CTX_get_ex_new_index_AmiSSL(register __d0 long argl, register __a0 void *argp, register __a1 CRYPTO_EX_new *new_func, register __a2 CRYPTO_EX_dup *dup_func, register __a3 CRYPTO_EX_free *free_func)
{
	return(X509_STORE_CTX_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

__asm __saveds int X509_STORE_CTX_set_ex_data_AmiSSL(register __a0 X509_STORE_CTX *ctx, register __d0 int idx, register __a1 void *data)
{
	return(X509_STORE_CTX_set_ex_data(ctx, idx, data));
}

__asm __saveds void *X509_STORE_CTX_get_ex_data_AmiSSL(register __a0 X509_STORE_CTX *ctx, register __d0 int idx)
{
	return(X509_STORE_CTX_get_ex_data(ctx, idx));
}

__asm __saveds int X509_STORE_CTX_get_error_AmiSSL(register __a0 X509_STORE_CTX *ctx)
{
	return(X509_STORE_CTX_get_error(ctx));
}

__asm __saveds void X509_STORE_CTX_set_error_AmiSSL(register __a0 X509_STORE_CTX *ctx, register __d0 int s)
{
	X509_STORE_CTX_set_error(ctx, s);
}

__asm __saveds int X509_STORE_CTX_get_error_depth_AmiSSL(register __a0 X509_STORE_CTX *ctx)
{
	return(X509_STORE_CTX_get_error_depth(ctx));
}

__asm __saveds X509 *X509_STORE_CTX_get_current_cert_AmiSSL(register __a0 X509_STORE_CTX *ctx)
{
	return(X509_STORE_CTX_get_current_cert(ctx));
}

__asm __saveds STACK_OF(X509) *X509_STORE_CTX_get_chain_AmiSSL(register __a0 X509_STORE_CTX *ctx)
{
	return(X509_STORE_CTX_get_chain(ctx));
}

__asm __saveds STACK_OF(X509) *X509_STORE_CTX_get1_chain_AmiSSL(register __a0 X509_STORE_CTX *ctx)
{
	return(X509_STORE_CTX_get1_chain(ctx));
}

__asm __saveds void X509_STORE_CTX_set_cert_AmiSSL(register __a0 X509_STORE_CTX *c, register __a1 X509 *x)
{
	X509_STORE_CTX_set_cert(c, x);
}

__asm __saveds void X509_STORE_CTX_set_chain_AmiSSL(register __a0 X509_STORE_CTX *c, register __a1 STACK_OF(X509) *sk)
{
	X509_STORE_CTX_set_chain(c, sk);
}

__asm __saveds int X509_STORE_CTX_set_purpose_AmiSSL(register __a0 X509_STORE_CTX *ctx, register __d0 int purpose)
{
	return(X509_STORE_CTX_set_purpose(ctx, purpose));
}

__asm __saveds int X509_STORE_CTX_set_trust_AmiSSL(register __a0 X509_STORE_CTX *ctx, register __d0 int trust)
{
	return(X509_STORE_CTX_set_trust(ctx, trust));
}

__asm __saveds int X509_STORE_CTX_purpose_inherit_AmiSSL(register __a0 X509_STORE_CTX *ctx, register __d0 int def_purpose, register __d1 int purpose, register __d2 int trust)
{
	return(X509_STORE_CTX_purpose_inherit(ctx, def_purpose, purpose, trust));
}

__asm __saveds void X509_STORE_CTX_set_flags_AmiSSL(register __a0 X509_STORE_CTX *ctx, register __d0 long flags)
{
	X509_STORE_CTX_set_flags(ctx, flags);
}

__asm __saveds void X509_STORE_CTX_set_time_AmiSSL(register __a0 X509_STORE_CTX *ctx, register __d0 long flags, register __d1 time_t t)
{
	X509_STORE_CTX_set_time(ctx, flags, t);
}

__asm __saveds void X509_STORE_CTX_set_verify_cb_AmiSSL(register __a0 X509_STORE_CTX *ctx, register __a1 int (*verify_cb)(int, X509_STORE_CTX *))
{
	X509_STORE_CTX_set_verify_cb(ctx, verify_cb);
}

__asm __saveds int DHparams_print_AmiSSL(register __a0 BIO *bp, register __a1 DH *x)
{
	return(DHparams_print(bp, x));
}

__asm __saveds DH *d2i_DHparams_AmiSSL(register __a0 DH **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_DHparams(a, pp, length));
}

__asm __saveds int i2d_DHparams_AmiSSL(register __a0 DH *a, register __a1 unsigned char **pp)
{
	return(i2d_DHparams(a, pp));
}

__asm __saveds DH *DSA_dup_DH_AmiSSL(register __a0 DSA *r)
{
	return(DSA_dup_DH(r));
}

__asm __saveds DSA *d2i_DSAPublicKey_AmiSSL(register __a0 DSA **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_DSAPublicKey(a, pp, length));
}

__asm __saveds DSA *d2i_DSAPrivateKey_AmiSSL(register __a0 DSA **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_DSAPrivateKey(a, pp, length));
}

__asm __saveds DSA *d2i_DSAparams_AmiSSL(register __a0 DSA **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_DSAparams(a, pp, length));
}

__asm __saveds int i2d_DSAPublicKey_AmiSSL(register __a0 DSA *a, register __a1 unsigned char **pp)
{
	return(i2d_DSAPublicKey(a, pp));
}

__asm __saveds int i2d_DSAPrivateKey_AmiSSL(register __a0 DSA *a, register __a1 unsigned char **pp)
{
	return(i2d_DSAPrivateKey(a, pp));
}

__asm __saveds int i2d_DSAparams_AmiSSL(register __a0 DSA *a, register __a1 unsigned char **pp)
{
	return(i2d_DSAparams(a, pp));
}

__asm __saveds int DSAparams_print_AmiSSL(register __a0 BIO *bp, register __a1 DSA *x)
{
	return(DSAparams_print(bp, x));
}

__asm __saveds int DSA_print_AmiSSL(register __a0 BIO *bp, register __a1 DSA *x, register __d0 int off)
{
	return(DSA_print(bp, x, off));
}

__asm __saveds RSA *d2i_RSAPublicKey_AmiSSL(register __a0 RSA **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_RSAPublicKey(a, pp, length));
}

__asm __saveds int i2d_RSAPublicKey_AmiSSL(register __a0 RSA *a, register __a1 unsigned char **pp)
{
	return(i2d_RSAPublicKey(a, pp));
}

__asm __saveds RSA *d2i_RSAPrivateKey_AmiSSL(register __a0 RSA **a, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_RSAPrivateKey(a, pp, length));
}

__asm __saveds int i2d_RSAPrivateKey_AmiSSL(register __a0 RSA *a, register __a1 unsigned char **pp)
{
	return(i2d_RSAPrivateKey(a, pp));
}

__asm __saveds int RSA_print_AmiSSL(register __a0 BIO *bp, register __a1 RSA *r, register __d0 int offset)
{
	return(RSA_print(bp, r, offset));
}

__asm __saveds int i2d_RSA_NET_AmiSSL(register __a0 RSA *a, register __a1 unsigned char **pp, register __a2 int (*cb)(), register __d0 int sgckey)
{
	return(i2d_RSA_NET(a, pp, cb, sgckey));
}

__asm __saveds RSA *d2i_RSA_NET_AmiSSL(register __a0 RSA **a, register __a1 unsigned char **pp, register __d0 long length, register __a2 int (*cb)(), register __d1 int sgckey)
{
	return(d2i_RSA_NET(a, pp, length, cb, sgckey));
}

__asm __saveds RSA *d2i_RSA_NET_2_AmiSSL(register __a0 RSA **a, register __a1 unsigned char **pp, register __d0 long length, register __a2 int (*cb)(), register __d1 int sgckey)
{
	return(d2i_RSA_NET_2(a, pp, length, cb, sgckey));
}

__asm __saveds int i2d_Netscape_RSA_AmiSSL(register __a0 RSA *a, register __a1 unsigned char **pp, register __a2 int (*cb)())
{
	return(i2d_Netscape_RSA(a, pp, cb));
}

__asm __saveds RSA *d2i_Netscape_RSA_AmiSSL(register __a0 RSA **a, register __a1 unsigned char **pp, register __d0 long length, register __a2 int (*cb)())
{
	return(d2i_Netscape_RSA(a, pp, length, cb));
}

__asm __saveds RSA *d2i_Netscape_RSA_2_AmiSSL(register __a0 RSA **a, register __a1 unsigned char **pp, register __d0 long length, register __a2 int (*cb)())
{
	return(d2i_Netscape_RSA_2(a, pp, length, cb));
}

