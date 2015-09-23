/* Automatically generated header (sfdc 1.5)! Do not edit! */

#ifndef _INLINE_AMISSL_H
#define _INLINE_AMISSL_H

#ifndef _SFDC_VARARG_DEFINED
#define _SFDC_VARARG_DEFINED
#ifdef __HAVE_IPTR_ATTR__
typedef APTR _sfdc_vararg __attribute__((iptr));
#else
typedef ULONG _sfdc_vararg;
#endif /* __HAVE_IPTR_ATTR__ */
#endif /* _SFDC_VARARG_DEFINED */

#ifndef __INLINE_MACROS_H
#include <inline/macros.h>
#endif /* !__INLINE_MACROS_H */

#ifndef AMISSL_BASE_NAME
#define AMISSL_BASE_NAME AmiSSLBase
#endif /* !AMISSL_BASE_NAME */

#define InitAmiSSLA(___tagList) \
	LP1(0x24, long, InitAmiSSLA , struct TagItem *, ___tagList, a0,\
	, AMISSL_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define InitAmiSSL(___tag, ...) \
	({_sfdc_vararg _tags[] = { ___tag, __VA_ARGS__ }; InitAmiSSLA((struct TagItem *) _tags); })
#endif /* !NO_INLINE_STDARG */

#define CleanupAmiSSLA(___tagList) \
	LP1(0x2a, long, CleanupAmiSSLA , struct TagItem *, ___tagList, a0,\
	, AMISSL_BASE_NAME)

#ifndef NO_INLINE_STDARG
#define CleanupAmiSSL(___tag, ...) \
	({_sfdc_vararg _tags[] = { ___tag, __VA_ARGS__ }; CleanupAmiSSLA((struct TagItem *) _tags); })
#endif /* !NO_INLINE_STDARG */

#define ASN1_TYPE_new() \
	LP0(0x66, ASN1_TYPE *, ASN1_TYPE_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_TYPE_free(___a) \
	LP1NR(0x6c, ASN1_TYPE_free , ASN1_TYPE *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_TYPE(___a, ___in, ___len) \
	LP3(0x72, ASN1_TYPE *, d2i_ASN1_TYPE , ASN1_TYPE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_TYPE(___a, ___out) \
	LP2(0x78, int, i2d_ASN1_TYPE , ASN1_TYPE *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_ANY_it() \
	LP0(0x7e, const ASN1_ITEM *, ASN1_ANY_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_TYPE_get(___a) \
	LP1(0x84, int, ASN1_TYPE_get , ASN1_TYPE *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_TYPE_set(___a, ___type, ___value) \
	LP3NR(0x8a, ASN1_TYPE_set , ASN1_TYPE *, ___a, a0, int, ___type, d0, void *, ___value, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_OBJECT_new() \
	LP0(0x90, ASN1_OBJECT *, ASN1_OBJECT_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_OBJECT_free(___a) \
	LP1NR(0x96, ASN1_OBJECT_free , ASN1_OBJECT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_OBJECT(___a, ___pp) \
	LP2(0x9c, int, i2d_ASN1_OBJECT , ASN1_OBJECT *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define c2i_ASN1_OBJECT(___a, ___pp, ___length) \
	LP3(0xa2, ASN1_OBJECT *, c2i_ASN1_OBJECT , ASN1_OBJECT **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_OBJECT(___a, ___pp, ___length) \
	LP3(0xa8, ASN1_OBJECT *, d2i_ASN1_OBJECT , ASN1_OBJECT **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_OBJECT_it() \
	LP0(0xae, const ASN1_ITEM *, ASN1_OBJECT_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_new() \
	LP0(0xb4, ASN1_STRING *, ASN1_STRING_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_free(___a) \
	LP1NR(0xba, ASN1_STRING_free , ASN1_STRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_dup(___a) \
	LP1(0xc0, ASN1_STRING *, ASN1_STRING_dup , ASN1_STRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_type_new(___type) \
	LP1(0xc6, ASN1_STRING *, ASN1_STRING_type_new , int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_cmp(___a, ___b) \
	LP2(0xcc, int, ASN1_STRING_cmp , ASN1_STRING *, ___a, a0, ASN1_STRING *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_set(___str, ___data, ___len) \
	LP3(0xd2, int, ASN1_STRING_set , ASN1_STRING *, ___str, a0, const void *, ___data, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_length(___x) \
	LP1(0xd8, int, ASN1_STRING_length , ASN1_STRING *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_length_set(___x, ___n) \
	LP2NR(0xde, ASN1_STRING_length_set , ASN1_STRING *, ___x, a0, int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_type(___x) \
	LP1(0xe4, int, ASN1_STRING_type , ASN1_STRING *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_data(___x) \
	LP1(0xea, unsigned char *, ASN1_STRING_data , ASN1_STRING *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_new() \
	LP0(0xf0, ASN1_BIT_STRING *, ASN1_BIT_STRING_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_free(___a) \
	LP1NR(0xf6, ASN1_BIT_STRING_free , ASN1_BIT_STRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_BIT_STRING(___a, ___in, ___len) \
	LP3(0xfc, ASN1_BIT_STRING *, d2i_ASN1_BIT_STRING , ASN1_BIT_STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_BIT_STRING(___a, ___out) \
	LP2(0x102, int, i2d_ASN1_BIT_STRING , ASN1_BIT_STRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_it() \
	LP0(0x108, const ASN1_ITEM *, ASN1_BIT_STRING_it ,\
	, AMISSL_BASE_NAME)

#define i2c_ASN1_BIT_STRING(___a, ___pp) \
	LP2(0x10e, int, i2c_ASN1_BIT_STRING , ASN1_BIT_STRING *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define c2i_ASN1_BIT_STRING(___a, ___pp, ___length) \
	LP3(0x114, ASN1_BIT_STRING *, c2i_ASN1_BIT_STRING , ASN1_BIT_STRING **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_set(___a, ___d, ___length) \
	LP3(0x11a, int, ASN1_BIT_STRING_set , ASN1_BIT_STRING *, ___a, a0, unsigned char *, ___d, a1, int, ___length, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_set_bit(___a, ___n, ___value) \
	LP3(0x120, int, ASN1_BIT_STRING_set_bit , ASN1_BIT_STRING *, ___a, a0, int, ___n, d0, int, ___value, d1,\
	, AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_get_bit(___a, ___n) \
	LP2(0x126, int, ASN1_BIT_STRING_get_bit , ASN1_BIT_STRING *, ___a, a0, int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_name_print(___out, ___bs, ___tbl, ___indent) \
	LP4(0x12c, int, ASN1_BIT_STRING_name_print , BIO *, ___out, a0, ASN1_BIT_STRING *, ___bs, a1, BIT_STRING_BITNAME *, ___tbl, a2, int, ___indent, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_num_asc(___name, ___tbl) \
	LP2(0x132, int, ASN1_BIT_STRING_num_asc , char *, ___name, a0, BIT_STRING_BITNAME *, ___tbl, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_set_asc(___bs, ___name, ___value, ___tbl) \
	LP4(0x138, int, ASN1_BIT_STRING_set_asc , ASN1_BIT_STRING *, ___bs, a0, char *, ___name, a1, int, ___value, d0, BIT_STRING_BITNAME *, ___tbl, a2,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_BOOLEAN(___a, ___pp) \
	LP2(0x13e, int, i2d_ASN1_BOOLEAN , int, ___a, d0, unsigned char **, ___pp, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_BOOLEAN(___a, ___pp, ___length) \
	LP3(0x144, int, d2i_ASN1_BOOLEAN , int *, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_INTEGER_new() \
	LP0(0x14a, ASN1_INTEGER *, ASN1_INTEGER_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_INTEGER_free(___a) \
	LP1NR(0x150, ASN1_INTEGER_free , ASN1_INTEGER *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_INTEGER(___a, ___in, ___len) \
	LP3(0x156, ASN1_INTEGER *, d2i_ASN1_INTEGER , ASN1_INTEGER **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_INTEGER(___a, ___out) \
	LP2(0x15c, int, i2d_ASN1_INTEGER , ASN1_INTEGER *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_INTEGER_it() \
	LP0(0x162, const ASN1_ITEM *, ASN1_INTEGER_it ,\
	, AMISSL_BASE_NAME)

#define i2c_ASN1_INTEGER(___a, ___pp) \
	LP2(0x168, int, i2c_ASN1_INTEGER , ASN1_INTEGER *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define c2i_ASN1_INTEGER(___a, ___pp, ___length) \
	LP3(0x16e, ASN1_INTEGER *, c2i_ASN1_INTEGER , ASN1_INTEGER **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_UINTEGER(___a, ___pp, ___length) \
	LP3(0x174, ASN1_INTEGER *, d2i_ASN1_UINTEGER , ASN1_INTEGER **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_INTEGER_dup(___x) \
	LP1(0x17a, ASN1_INTEGER *, ASN1_INTEGER_dup , ASN1_INTEGER *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_INTEGER_cmp(___x, ___y) \
	LP2(0x180, int, ASN1_INTEGER_cmp , ASN1_INTEGER *, ___x, a0, ASN1_INTEGER *, ___y, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_ENUMERATED_new() \
	LP0(0x186, ASN1_ENUMERATED *, ASN1_ENUMERATED_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_ENUMERATED_free(___a) \
	LP1NR(0x18c, ASN1_ENUMERATED_free , ASN1_ENUMERATED *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_ENUMERATED(___a, ___in, ___len) \
	LP3(0x192, ASN1_ENUMERATED *, d2i_ASN1_ENUMERATED , ASN1_ENUMERATED **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_ENUMERATED(___a, ___out) \
	LP2(0x198, int, i2d_ASN1_ENUMERATED , ASN1_ENUMERATED *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_ENUMERATED_it() \
	LP0(0x19e, const ASN1_ITEM *, ASN1_ENUMERATED_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_UTCTIME_check(___a) \
	LP1(0x1a4, int, ASN1_UTCTIME_check , ASN1_UTCTIME *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_UTCTIME_set(___s, ___t) \
	LP2(0x1aa, ASN1_UTCTIME *, ASN1_UTCTIME_set , ASN1_UTCTIME *, ___s, a0, time_t, ___t, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_UTCTIME_set_string(___s, ___str) \
	LP2(0x1b0, int, ASN1_UTCTIME_set_string , ASN1_UTCTIME *, ___s, a0, char *, ___str, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_UTCTIME_cmp_time_t(___s, ___t) \
	LP2(0x1b6, int, ASN1_UTCTIME_cmp_time_t , const ASN1_UTCTIME *, ___s, a0, time_t, ___t, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_check(___a) \
	LP1(0x1bc, int, ASN1_GENERALIZEDTIME_check , ASN1_GENERALIZEDTIME *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_set(___s, ___t) \
	LP2(0x1c2, ASN1_GENERALIZEDTIME *, ASN1_GENERALIZEDTIME_set , ASN1_GENERALIZEDTIME *, ___s, a0, time_t, ___t, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_set_string(___s, ___str) \
	LP2(0x1c8, int, ASN1_GENERALIZEDTIME_set_string , ASN1_GENERALIZEDTIME *, ___s, a0, char *, ___str, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_new() \
	LP0(0x1ce, ASN1_OCTET_STRING *, ASN1_OCTET_STRING_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_free(___a) \
	LP1NR(0x1d4, ASN1_OCTET_STRING_free , ASN1_OCTET_STRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_OCTET_STRING(___a, ___in, ___len) \
	LP3(0x1da, ASN1_OCTET_STRING *, d2i_ASN1_OCTET_STRING , ASN1_OCTET_STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_OCTET_STRING(___a, ___out) \
	LP2(0x1e0, int, i2d_ASN1_OCTET_STRING , ASN1_OCTET_STRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_it() \
	LP0(0x1e6, const ASN1_ITEM *, ASN1_OCTET_STRING_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_dup(___a) \
	LP1(0x1ec, ASN1_OCTET_STRING *, ASN1_OCTET_STRING_dup , ASN1_OCTET_STRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_cmp(___a, ___b) \
	LP2(0x1f2, int, ASN1_OCTET_STRING_cmp , ASN1_OCTET_STRING *, ___a, a0, ASN1_OCTET_STRING *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_set(___str, ___data, ___len) \
	LP3(0x1f8, int, ASN1_OCTET_STRING_set , ASN1_OCTET_STRING *, ___str, a0, unsigned char *, ___data, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_VISIBLESTRING_new() \
	LP0(0x1fe, ASN1_VISIBLESTRING *, ASN1_VISIBLESTRING_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_VISIBLESTRING_free(___a) \
	LP1NR(0x204, ASN1_VISIBLESTRING_free , ASN1_VISIBLESTRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_VISIBLESTRING(___a, ___in, ___len) \
	LP3(0x20a, ASN1_VISIBLESTRING *, d2i_ASN1_VISIBLESTRING , ASN1_VISIBLESTRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_VISIBLESTRING(___a, ___out) \
	LP2(0x210, int, i2d_ASN1_VISIBLESTRING , ASN1_VISIBLESTRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_VISIBLESTRING_it() \
	LP0(0x216, const ASN1_ITEM *, ASN1_VISIBLESTRING_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_UNIVERSALSTRING_new() \
	LP0(0x21c, ASN1_UNIVERSALSTRING *, ASN1_UNIVERSALSTRING_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_UNIVERSALSTRING_free(___a) \
	LP1NR(0x222, ASN1_UNIVERSALSTRING_free , ASN1_UNIVERSALSTRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_UNIVERSALSTRING(___a, ___in, ___len) \
	LP3(0x228, ASN1_UNIVERSALSTRING *, d2i_ASN1_UNIVERSALSTRING , ASN1_UNIVERSALSTRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_UNIVERSALSTRING(___a, ___out) \
	LP2(0x22e, int, i2d_ASN1_UNIVERSALSTRING , ASN1_UNIVERSALSTRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_UNIVERSALSTRING_it() \
	LP0(0x234, const ASN1_ITEM *, ASN1_UNIVERSALSTRING_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_UTF8STRING_new() \
	LP0(0x23a, ASN1_UTF8STRING *, ASN1_UTF8STRING_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_UTF8STRING_free(___a) \
	LP1NR(0x240, ASN1_UTF8STRING_free , ASN1_UTF8STRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_UTF8STRING(___a, ___in, ___len) \
	LP3(0x246, ASN1_UTF8STRING *, d2i_ASN1_UTF8STRING , ASN1_UTF8STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_UTF8STRING(___a, ___out) \
	LP2(0x24c, int, i2d_ASN1_UTF8STRING , ASN1_UTF8STRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_UTF8STRING_it() \
	LP0(0x252, const ASN1_ITEM *, ASN1_UTF8STRING_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_NULL_new() \
	LP0(0x258, ASN1_NULL *, ASN1_NULL_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_NULL_free(___a) \
	LP1NR(0x25e, ASN1_NULL_free , ASN1_NULL *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_NULL(___a, ___in, ___len) \
	LP3(0x264, ASN1_NULL *, d2i_ASN1_NULL , ASN1_NULL **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_NULL(___a, ___out) \
	LP2(0x26a, int, i2d_ASN1_NULL , ASN1_NULL *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_NULL_it() \
	LP0(0x270, const ASN1_ITEM *, ASN1_NULL_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_BMPSTRING_new() \
	LP0(0x276, ASN1_BMPSTRING *, ASN1_BMPSTRING_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_BMPSTRING_free(___a) \
	LP1NR(0x27c, ASN1_BMPSTRING_free , ASN1_BMPSTRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_BMPSTRING(___a, ___in, ___len) \
	LP3(0x282, ASN1_BMPSTRING *, d2i_ASN1_BMPSTRING , ASN1_BMPSTRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_BMPSTRING(___a, ___out) \
	LP2(0x288, int, i2d_ASN1_BMPSTRING , ASN1_BMPSTRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_BMPSTRING_it() \
	LP0(0x28e, const ASN1_ITEM *, ASN1_BMPSTRING_it ,\
	, AMISSL_BASE_NAME)

#define UTF8_getc(___str, ___len, ___val) \
	LP3(0x294, int, UTF8_getc , const unsigned char *, ___str, a0, int, ___len, d0, unsigned long *, ___val, a1,\
	, AMISSL_BASE_NAME)

#define UTF8_putc(___str, ___len, ___value) \
	LP3(0x29a, int, UTF8_putc , unsigned char *, ___str, a0, int, ___len, d0, unsigned long, ___value, d1,\
	, AMISSL_BASE_NAME)

#define ASN1_PRINTABLE_new() \
	LP0(0x2a0, ASN1_STRING *, ASN1_PRINTABLE_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_PRINTABLE_free(___a) \
	LP1NR(0x2a6, ASN1_PRINTABLE_free , ASN1_STRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_PRINTABLE(___a, ___in, ___len) \
	LP3(0x2ac, ASN1_STRING *, d2i_ASN1_PRINTABLE , ASN1_STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_PRINTABLE(___a, ___out) \
	LP2(0x2b2, int, i2d_ASN1_PRINTABLE , ASN1_STRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_PRINTABLE_it() \
	LP0(0x2b8, const ASN1_ITEM *, ASN1_PRINTABLE_it ,\
	, AMISSL_BASE_NAME)

#define DIRECTORYSTRING_new() \
	LP0(0x2be, ASN1_STRING *, DIRECTORYSTRING_new ,\
	, AMISSL_BASE_NAME)

#define DIRECTORYSTRING_free(___a) \
	LP1NR(0x2c4, DIRECTORYSTRING_free , ASN1_STRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_DIRECTORYSTRING(___a, ___in, ___len) \
	LP3(0x2ca, ASN1_STRING *, d2i_DIRECTORYSTRING , ASN1_STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_DIRECTORYSTRING(___a, ___out) \
	LP2(0x2d0, int, i2d_DIRECTORYSTRING , ASN1_STRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define DIRECTORYSTRING_it() \
	LP0(0x2d6, const ASN1_ITEM *, DIRECTORYSTRING_it ,\
	, AMISSL_BASE_NAME)

#define DISPLAYTEXT_new() \
	LP0(0x2dc, ASN1_STRING *, DISPLAYTEXT_new ,\
	, AMISSL_BASE_NAME)

#define DISPLAYTEXT_free(___a) \
	LP1NR(0x2e2, DISPLAYTEXT_free , ASN1_STRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_DISPLAYTEXT(___a, ___in, ___len) \
	LP3(0x2e8, ASN1_STRING *, d2i_DISPLAYTEXT , ASN1_STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_DISPLAYTEXT(___a, ___out) \
	LP2(0x2ee, int, i2d_DISPLAYTEXT , ASN1_STRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define DISPLAYTEXT_it() \
	LP0(0x2f4, const ASN1_ITEM *, DISPLAYTEXT_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_PRINTABLESTRING_new() \
	LP0(0x2fa, ASN1_PRINTABLESTRING *, ASN1_PRINTABLESTRING_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_PRINTABLESTRING_free(___a) \
	LP1NR(0x300, ASN1_PRINTABLESTRING_free , ASN1_PRINTABLESTRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_PRINTABLESTRING(___a, ___in, ___len) \
	LP3(0x306, ASN1_PRINTABLESTRING *, d2i_ASN1_PRINTABLESTRING , ASN1_PRINTABLESTRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_PRINTABLESTRING(___a, ___out) \
	LP2(0x30c, int, i2d_ASN1_PRINTABLESTRING , ASN1_PRINTABLESTRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_PRINTABLESTRING_it() \
	LP0(0x312, const ASN1_ITEM *, ASN1_PRINTABLESTRING_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_T61STRING_new() \
	LP0(0x318, ASN1_T61STRING *, ASN1_T61STRING_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_T61STRING_free(___a) \
	LP1NR(0x31e, ASN1_T61STRING_free , ASN1_T61STRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_T61STRING(___a, ___in, ___len) \
	LP3(0x324, ASN1_T61STRING *, d2i_ASN1_T61STRING , ASN1_T61STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_T61STRING(___a, ___out) \
	LP2(0x32a, int, i2d_ASN1_T61STRING , ASN1_T61STRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_T61STRING_it() \
	LP0(0x330, const ASN1_ITEM *, ASN1_T61STRING_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_IA5STRING_new() \
	LP0(0x336, ASN1_IA5STRING *, ASN1_IA5STRING_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_IA5STRING_free(___a) \
	LP1NR(0x33c, ASN1_IA5STRING_free , ASN1_IA5STRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_IA5STRING(___a, ___in, ___len) \
	LP3(0x342, ASN1_IA5STRING *, d2i_ASN1_IA5STRING , ASN1_IA5STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_IA5STRING(___a, ___out) \
	LP2(0x348, int, i2d_ASN1_IA5STRING , ASN1_IA5STRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_IA5STRING_it() \
	LP0(0x34e, const ASN1_ITEM *, ASN1_IA5STRING_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_GENERALSTRING_new() \
	LP0(0x354, ASN1_GENERALSTRING *, ASN1_GENERALSTRING_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_GENERALSTRING_free(___a) \
	LP1NR(0x35a, ASN1_GENERALSTRING_free , ASN1_GENERALSTRING *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_GENERALSTRING(___a, ___in, ___len) \
	LP3(0x360, ASN1_GENERALSTRING *, d2i_ASN1_GENERALSTRING , ASN1_GENERALSTRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_GENERALSTRING(___a, ___out) \
	LP2(0x366, int, i2d_ASN1_GENERALSTRING , ASN1_GENERALSTRING *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_GENERALSTRING_it() \
	LP0(0x36c, const ASN1_ITEM *, ASN1_GENERALSTRING_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_UTCTIME_new() \
	LP0(0x372, ASN1_UTCTIME *, ASN1_UTCTIME_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_UTCTIME_free(___a) \
	LP1NR(0x378, ASN1_UTCTIME_free , ASN1_UTCTIME *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_UTCTIME(___a, ___in, ___len) \
	LP3(0x37e, ASN1_UTCTIME *, d2i_ASN1_UTCTIME , ASN1_UTCTIME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_UTCTIME(___a, ___out) \
	LP2(0x384, int, i2d_ASN1_UTCTIME , ASN1_UTCTIME *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_UTCTIME_it() \
	LP0(0x38a, const ASN1_ITEM *, ASN1_UTCTIME_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_new() \
	LP0(0x390, ASN1_GENERALIZEDTIME *, ASN1_GENERALIZEDTIME_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_free(___a) \
	LP1NR(0x396, ASN1_GENERALIZEDTIME_free , ASN1_GENERALIZEDTIME *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_GENERALIZEDTIME(___a, ___in, ___len) \
	LP3(0x39c, ASN1_GENERALIZEDTIME *, d2i_ASN1_GENERALIZEDTIME , ASN1_GENERALIZEDTIME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_GENERALIZEDTIME(___a, ___out) \
	LP2(0x3a2, int, i2d_ASN1_GENERALIZEDTIME , ASN1_GENERALIZEDTIME *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_it() \
	LP0(0x3a8, const ASN1_ITEM *, ASN1_GENERALIZEDTIME_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_TIME_new() \
	LP0(0x3ae, ASN1_TIME *, ASN1_TIME_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_TIME_free(___a) \
	LP1NR(0x3b4, ASN1_TIME_free , ASN1_TIME *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_TIME(___a, ___in, ___len) \
	LP3(0x3ba, ASN1_TIME *, d2i_ASN1_TIME , ASN1_TIME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_TIME(___a, ___out) \
	LP2(0x3c0, int, i2d_ASN1_TIME , ASN1_TIME *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_TIME_it() \
	LP0(0x3c6, const ASN1_ITEM *, ASN1_TIME_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_TIME_set(___s, ___t) \
	LP2(0x3cc, ASN1_TIME *, ASN1_TIME_set , ASN1_TIME *, ___s, a0, time_t, ___t, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_TIME_check(___t) \
	LP1(0x3d2, int, ASN1_TIME_check , ASN1_TIME *, ___t, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_TIME_to_generalizedtime(___t, ___out) \
	LP2(0x3d8, ASN1_GENERALIZEDTIME *, ASN1_TIME_to_generalizedtime , ASN1_TIME *, ___t, a0, ASN1_GENERALIZEDTIME **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_SET(___a, ___pp, ___i2d, ___ex_tag, ___ex_class, ___is_set) \
	LP6(0x3de, int, i2d_ASN1_SET , STACK_OF(OPENSSL_BLOCK) *, ___a, a0, unsigned char **, ___pp, a1, i2d_of_void *, ___i2d, a2, int, ___ex_tag, d0, int, ___ex_class, d1, int, ___is_set, d2,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_SET(___a, ___pp, ___length, ___d2i, ___free_func, ___ex_tag, ___ex_class) \
	LP7FP(0x3e4, STACK_OF(OPENSSL_BLOCK) *, d2i_ASN1_SET , STACK_OF(OPENSSL_BLOCK) **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0, d2i_of_void *, ___d2i, a2, __fpt, ___free_func, a3, int, ___ex_tag, d1, int, ___ex_class, d2,\
	, AMISSL_BASE_NAME, void (*__fpt)(OPENSSL_BLOCK))

#define i2a_ASN1_INTEGER(___bp, ___a) \
	LP2(0x3ea, int, i2a_ASN1_INTEGER , BIO *, ___bp, a0, ASN1_INTEGER *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define a2i_ASN1_INTEGER(___bp, ___bs, ___buf, ___size) \
	LP4(0x3f0, int, a2i_ASN1_INTEGER , BIO *, ___bp, a0, ASN1_INTEGER *, ___bs, a1, char *, ___buf, a2, int, ___size, d0,\
	, AMISSL_BASE_NAME)

#define i2a_ASN1_ENUMERATED(___bp, ___a) \
	LP2(0x3f6, int, i2a_ASN1_ENUMERATED , BIO *, ___bp, a0, ASN1_ENUMERATED *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define a2i_ASN1_ENUMERATED(___bp, ___bs, ___buf, ___size) \
	LP4(0x3fc, int, a2i_ASN1_ENUMERATED , BIO *, ___bp, a0, ASN1_ENUMERATED *, ___bs, a1, char *, ___buf, a2, int, ___size, d0,\
	, AMISSL_BASE_NAME)

#define i2a_ASN1_OBJECT(___bp, ___a) \
	LP2(0x402, int, i2a_ASN1_OBJECT , BIO *, ___bp, a0, ASN1_OBJECT *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define a2i_ASN1_STRING(___bp, ___bs, ___buf, ___size) \
	LP4(0x408, int, a2i_ASN1_STRING , BIO *, ___bp, a0, ASN1_STRING *, ___bs, a1, char *, ___buf, a2, int, ___size, d0,\
	, AMISSL_BASE_NAME)

#define i2a_ASN1_STRING(___bp, ___a, ___type) \
	LP3(0x40e, int, i2a_ASN1_STRING , BIO *, ___bp, a0, ASN1_STRING *, ___a, a1, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define i2t_ASN1_OBJECT(___buf, ___buf_len, ___a) \
	LP3(0x414, int, i2t_ASN1_OBJECT , char *, ___buf, a0, int, ___buf_len, d0, ASN1_OBJECT *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define a2d_ASN1_OBJECT(___out, ___olen, ___buf, ___num) \
	LP4(0x41a, int, a2d_ASN1_OBJECT , unsigned char *, ___out, a0, int, ___olen, d0, const char *, ___buf, a1, int, ___num, d1,\
	, AMISSL_BASE_NAME)

#define ASN1_OBJECT_create(___nid, ___data, ___len, ___sn, ___ln) \
	LP5(0x420, ASN1_OBJECT *, ASN1_OBJECT_create , int, ___nid, d0, unsigned char *, ___data, a0, int, ___len, d1, const char *, ___sn, a1, const char *, ___ln, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_INTEGER_set(___a, ___v) \
	LP2(0x426, int, ASN1_INTEGER_set , ASN1_INTEGER *, ___a, a0, long, ___v, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_INTEGER_get(___a) \
	LP1(0x42c, long, ASN1_INTEGER_get , ASN1_INTEGER *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BN_to_ASN1_INTEGER(___bn, ___ai) \
	LP2(0x432, ASN1_INTEGER *, BN_to_ASN1_INTEGER , BIGNUM *, ___bn, a0, ASN1_INTEGER *, ___ai, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_INTEGER_to_BN(___ai, ___bn) \
	LP2(0x438, BIGNUM *, ASN1_INTEGER_to_BN , ASN1_INTEGER *, ___ai, a0, BIGNUM *, ___bn, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_ENUMERATED_set(___a, ___v) \
	LP2(0x43e, int, ASN1_ENUMERATED_set , ASN1_ENUMERATED *, ___a, a0, long, ___v, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_ENUMERATED_get(___a) \
	LP1(0x444, long, ASN1_ENUMERATED_get , ASN1_ENUMERATED *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BN_to_ASN1_ENUMERATED(___bn, ___ai) \
	LP2(0x44a, ASN1_ENUMERATED *, BN_to_ASN1_ENUMERATED , BIGNUM *, ___bn, a0, ASN1_ENUMERATED *, ___ai, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_ENUMERATED_to_BN(___ai, ___bn) \
	LP2(0x450, BIGNUM *, ASN1_ENUMERATED_to_BN , ASN1_ENUMERATED *, ___ai, a0, BIGNUM *, ___bn, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_PRINTABLE_type(___s, ___max) \
	LP2(0x456, int, ASN1_PRINTABLE_type , const unsigned char *, ___s, a0, int, ___max, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_bytes(___a, ___pp, ___tag, ___xclass) \
	LP4(0x45c, int, i2d_ASN1_bytes , ASN1_STRING *, ___a, a0, unsigned char **, ___pp, a1, int, ___tag, d0, int, ___xclass, d1,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_bytes(___a, ___pp, ___length, ___Ptag, ___Pclass) \
	LP5(0x462, ASN1_STRING *, d2i_ASN1_bytes , ASN1_STRING **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0, int, ___Ptag, d1, int, ___Pclass, d2,\
	, AMISSL_BASE_NAME)

#define ASN1_tag2bit(___tag) \
	LP1(0x468, unsigned long, ASN1_tag2bit , int, ___tag, d0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_type_bytes(___a, ___pp, ___length, ___type) \
	LP4(0x46e, ASN1_STRING *, d2i_ASN1_type_bytes , ASN1_STRING **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0, int, ___type, d1,\
	, AMISSL_BASE_NAME)

#define asn1_Finish(___c) \
	LP1(0x474, int, asn1_Finish , ASN1_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_get_object(___pp, ___plength, ___ptag, ___pclass, ___omax) \
	LP5(0x47a, int, ASN1_get_object , const unsigned char **, ___pp, a0, long *, ___plength, a1, int *, ___ptag, a2, int *, ___pclass, a3, long, ___omax, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_check_infinite_end(___p, ___len) \
	LP2(0x480, int, ASN1_check_infinite_end , unsigned char **, ___p, a0, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_put_object(___pp, ___constructed, ___length, ___tag, ___xclass) \
	LP5NR(0x486, ASN1_put_object , unsigned char **, ___pp, a0, int, ___constructed, d0, int, ___length, d1, int, ___tag, d2, int, ___xclass, d3,\
	, AMISSL_BASE_NAME)

#define ASN1_object_size(___constructed, ___length, ___tag) \
	LP3(0x48c, int, ASN1_object_size , int, ___constructed, d0, int, ___length, d1, int, ___tag, d2,\
	, AMISSL_BASE_NAME)

#define ASN1_dup(___i2d, ___d2i, ___x) \
	LP3(0x492, void *, ASN1_dup , i2d_of_void *, ___i2d, a0, d2i_of_void *, ___d2i, a1, char *, ___x, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_item_dup(___it, ___x) \
	LP2(0x498, void *, ASN1_item_dup , const ASN1_ITEM *, ___it, a0, void *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_to_UTF8(___out, ___in) \
	LP2(0x49e, int, ASN1_STRING_to_UTF8 , unsigned char **, ___out, a0, ASN1_STRING *, ___in, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_d2i_bio(___xnew, ___d2i, ___in, ___x) \
	LP4FP(0x4a4, void *, ASN1_d2i_bio , __fpt, ___xnew, a0, d2i_of_void *, ___d2i, a1, BIO *, ___in, a2, void **, ___x, a3,\
	, AMISSL_BASE_NAME, void * (*__fpt)(void))

#define ASN1_item_d2i_bio(___it, ___in, ___x) \
	LP3(0x4aa, void *, ASN1_item_d2i_bio , const ASN1_ITEM *, ___it, a0, BIO *, ___in, a1, void *, ___x, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_i2d_bio(___i2d, ___out, ___x) \
	LP3(0x4b0, int, ASN1_i2d_bio , i2d_of_void *, ___i2d, a0, BIO *, ___out, a1, unsigned char *, ___x, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_item_i2d_bio(___it, ___out, ___x) \
	LP3(0x4b6, int, ASN1_item_i2d_bio , const ASN1_ITEM *, ___it, a0, BIO *, ___out, a1, void *, ___x, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_UTCTIME_print(___fp, ___a) \
	LP2(0x4bc, int, ASN1_UTCTIME_print , BIO *, ___fp, a0, ASN1_UTCTIME *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_print(___fp, ___a) \
	LP2(0x4c2, int, ASN1_GENERALIZEDTIME_print , BIO *, ___fp, a0, ASN1_GENERALIZEDTIME *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_TIME_print(___fp, ___a) \
	LP2(0x4c8, int, ASN1_TIME_print , BIO *, ___fp, a0, ASN1_TIME *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_print(___bp, ___v) \
	LP2(0x4ce, int, ASN1_STRING_print , BIO *, ___bp, a0, ASN1_STRING *, ___v, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_print_ex(___out, ___str, ___flags) \
	LP3(0x4d4, int, ASN1_STRING_print_ex , BIO *, ___out, a0, ASN1_STRING *, ___str, a1, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_parse(___bp, ___pp, ___len, ___indent) \
	LP4(0x4da, int, ASN1_parse , BIO *, ___bp, a0, unsigned char *, ___pp, a1, long, ___len, d0, int, ___indent, d1,\
	, AMISSL_BASE_NAME)

#define ASN1_parse_dump(___bp, ___pp, ___len, ___indent, ___dump) \
	LP5(0x4e0, int, ASN1_parse_dump , BIO *, ___bp, a0, unsigned char *, ___pp, a1, long, ___len, d0, int, ___indent, d1, int, ___dump, d2,\
	, AMISSL_BASE_NAME)

#define ASN1_tag2str(___tag) \
	LP1(0x4e6, const char *, ASN1_tag2str , int, ___tag, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_UNIVERSALSTRING_to_string(___s) \
	LP1(0x4ec, int, ASN1_UNIVERSALSTRING_to_string , ASN1_UNIVERSALSTRING *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_TYPE_set_octetstring(___a, ___data, ___len) \
	LP3(0x4f2, int, ASN1_TYPE_set_octetstring , ASN1_TYPE *, ___a, a0, unsigned char *, ___data, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_TYPE_get_octetstring(___a, ___data, ___max_len) \
	LP3(0x4f8, int, ASN1_TYPE_get_octetstring , ASN1_TYPE *, ___a, a0, unsigned char *, ___data, a1, int, ___max_len, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_TYPE_set_int_octetstring(___a, ___num, ___data, ___len) \
	LP4(0x4fe, int, ASN1_TYPE_set_int_octetstring , ASN1_TYPE *, ___a, a0, long, ___num, d0, unsigned char *, ___data, a1, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define ASN1_TYPE_get_int_octetstring(___a, ___num, ___data, ___max_len) \
	LP4(0x504, int, ASN1_TYPE_get_int_octetstring , ASN1_TYPE *, ___a, a0, long *, ___num, a1, unsigned char *, ___data, a2, int, ___max_len, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_seq_unpack(___buf, ___len, ___d2i, ___free_func) \
	LP4FP(0x50a, STACK_OF(OPENSSL_BLOCK) *, ASN1_seq_unpack , const unsigned char *, ___buf, a0, int, ___len, d0, d2i_of_void *, ___d2i, a1, __fpt, ___free_func, a2,\
	, AMISSL_BASE_NAME, void (*__fpt)(OPENSSL_BLOCK))

#define ASN1_seq_pack(___safes, ___i2d, ___buf, ___len) \
	LP4(0x510, unsigned char *, ASN1_seq_pack , STACK_OF(OPENSSL_BLOCK) *, ___safes, a0, i2d_of_void *, ___i2d, a1, unsigned char **, ___buf, a2, int *, ___len, a3,\
	, AMISSL_BASE_NAME)

#define ASN1_unpack_string(___oct, ___d2i) \
	LP2(0x516, void *, ASN1_unpack_string , ASN1_STRING *, ___oct, a0, d2i_of_void *, ___d2i, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_item_unpack(___oct, ___it) \
	LP2(0x51c, void *, ASN1_item_unpack , ASN1_STRING *, ___oct, a0, const ASN1_ITEM *, ___it, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_pack_string(___obj, ___i2d, ___oct) \
	LP3FP(0x522, ASN1_STRING *, ASN1_pack_string , void *, ___obj, a0, __fpt, ___i2d, a1, ASN1_OCTET_STRING **, ___oct, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)())

#define ASN1_item_pack(___obj, ___it, ___oct) \
	LP3(0x528, ASN1_STRING *, ASN1_item_pack , void *, ___obj, a0, const ASN1_ITEM *, ___it, a1, ASN1_OCTET_STRING **, ___oct, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_set_default_mask(___mask) \
	LP1NR(0x52e, ASN1_STRING_set_default_mask , unsigned long, ___mask, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_set_default_mask_asc(___p) \
	LP1(0x534, int, ASN1_STRING_set_default_mask_asc , char *, ___p, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_get_default_mask() \
	LP0(0x53a, unsigned long, ASN1_STRING_get_default_mask ,\
	, AMISSL_BASE_NAME)

#define ASN1_mbstring_copy(___out, ___in, ___len, ___inform, ___mask) \
	LP5(0x540, int, ASN1_mbstring_copy , ASN1_STRING **, ___out, a0, const unsigned char *, ___in, a1, int, ___len, d0, int, ___inform, d1, unsigned long, ___mask, d2,\
	, AMISSL_BASE_NAME)

#define ASN1_mbstring_ncopy(___out, ___in, ___len, ___inform, ___mask, ___minsize, ___maxsize) \
	LP7(0x546, int, ASN1_mbstring_ncopy , ASN1_STRING **, ___out, a0, const unsigned char *, ___in, a1, int, ___len, d0, int, ___inform, d1, unsigned long, ___mask, d2, long, ___minsize, d3, long, ___maxsize, d4,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_set_by_NID(___out, ___in, ___inlen, ___inform, ___nid) \
	LP5(0x54c, ASN1_STRING *, ASN1_STRING_set_by_NID , ASN1_STRING **, ___out, a0, const unsigned char *, ___in, a1, int, ___inlen, d0, int, ___inform, d1, int, ___nid, d2,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_TABLE_get(___nid) \
	LP1(0x552, ASN1_STRING_TABLE *, ASN1_STRING_TABLE_get , int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_TABLE_add(___a, ___b, ___c, ___d, ___e) \
	LP5(0x558, int, ASN1_STRING_TABLE_add , int, ___a, d0, long, ___b, d1, long, ___c, d2, unsigned long, ___d, d3, unsigned long, ___e, d4,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_TABLE_cleanup() \
	LP0NR(0x55e, ASN1_STRING_TABLE_cleanup ,\
	, AMISSL_BASE_NAME)

#define ASN1_item_new(___it) \
	LP1(0x564, ASN1_VALUE *, ASN1_item_new , const ASN1_ITEM *, ___it, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_item_free(___val, ___it) \
	LP2NR(0x56a, ASN1_item_free , ASN1_VALUE *, ___val, a0, const ASN1_ITEM *, ___it, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_item_d2i(___val, ___in, ___len, ___it) \
	LP4(0x570, ASN1_VALUE *, ASN1_item_d2i , ASN1_VALUE **, ___val, a0, const unsigned char **, ___in, a1, long, ___len, d0, const ASN1_ITEM *, ___it, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_item_i2d(___val, ___out, ___it) \
	LP3(0x576, int, ASN1_item_i2d , ASN1_VALUE *, ___val, a0, unsigned char **, ___out, a1, const ASN1_ITEM *, ___it, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_add_oid_module() \
	LP0NR(0x57c, ASN1_add_oid_module ,\
	, AMISSL_BASE_NAME)

#define ERR_load_ASN1_strings() \
	LP0NR(0x582, ERR_load_ASN1_strings ,\
	, AMISSL_BASE_NAME)

#define asn1_GetSequence(___c, ___length) \
	LP2(0x588, int, asn1_GetSequence , ASN1_const_CTX *, ___c, a0, long *, ___length, a1,\
	, AMISSL_BASE_NAME)

#define asn1_add_error(___address, ___offset) \
	LP2NR(0x58e, asn1_add_error , unsigned char *, ___address, a0, int, ___offset, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_BOOLEAN_it() \
	LP0(0x594, const ASN1_ITEM *, ASN1_BOOLEAN_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_TBOOLEAN_it() \
	LP0(0x59a, const ASN1_ITEM *, ASN1_TBOOLEAN_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_FBOOLEAN_it() \
	LP0(0x5a0, const ASN1_ITEM *, ASN1_FBOOLEAN_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_SEQUENCE_it() \
	LP0(0x5a6, const ASN1_ITEM *, ASN1_SEQUENCE_it ,\
	, AMISSL_BASE_NAME)

#define CBIGNUM_it() \
	LP0(0x5ac, const ASN1_ITEM *, CBIGNUM_it ,\
	, AMISSL_BASE_NAME)

#define BIGNUM_it() \
	LP0(0x5b2, const ASN1_ITEM *, BIGNUM_it ,\
	, AMISSL_BASE_NAME)

#define LONG_it() \
	LP0(0x5b8, const ASN1_ITEM *, LONG_it ,\
	, AMISSL_BASE_NAME)

#define ZLONG_it() \
	LP0(0x5be, const ASN1_ITEM *, ZLONG_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_item_ex_new(___pval, ___it) \
	LP2(0x5c4, int, ASN1_item_ex_new , ASN1_VALUE **, ___pval, a0, const ASN1_ITEM *, ___it, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_item_ex_free(___pval, ___it) \
	LP2NR(0x5ca, ASN1_item_ex_free , ASN1_VALUE **, ___pval, a0, const ASN1_ITEM *, ___it, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_template_new(___pval, ___tt) \
	LP2(0x5d0, int, ASN1_template_new , ASN1_VALUE **, ___pval, a0, const ASN1_TEMPLATE *, ___tt, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_primitive_new(___pval, ___it) \
	LP2(0x5d6, int, ASN1_primitive_new , ASN1_VALUE **, ___pval, a0, const ASN1_ITEM *, ___it, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_template_free(___pval, ___tt) \
	LP2NR(0x5dc, ASN1_template_free , ASN1_VALUE **, ___pval, a0, const ASN1_TEMPLATE *, ___tt, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_template_d2i(___pval, ___in, ___len, ___tt) \
	LP4(0x5e2, int, ASN1_template_d2i , ASN1_VALUE **, ___pval, a0, const unsigned char **, ___in, a1, long, ___len, d0, const ASN1_TEMPLATE *, ___tt, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_item_ex_d2i(___pval, ___in, ___len, ___it, ___tag, ___aclass, ___opt, ___ctx) \
	LP8(0x5e8, int, ASN1_item_ex_d2i , ASN1_VALUE **, ___pval, a0, const unsigned char **, ___in, a1, long, ___len, d0, const ASN1_ITEM *, ___it, a2, int, ___tag, d1, int, ___aclass, d2, char, ___opt, d3, ASN1_TLC *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define ASN1_item_ex_i2d(___pval, ___out, ___it, ___tag, ___aclass) \
	LP5(0x5ee, int, ASN1_item_ex_i2d , ASN1_VALUE **, ___pval, a0, unsigned char **, ___out, a1, const ASN1_ITEM *, ___it, a2, int, ___tag, d0, int, ___aclass, d1,\
	, AMISSL_BASE_NAME)

#define ASN1_template_i2d(___pval, ___out, ___tt) \
	LP3(0x5f4, int, ASN1_template_i2d , ASN1_VALUE **, ___pval, a0, unsigned char **, ___out, a1, const ASN1_TEMPLATE *, ___tt, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_primitive_free(___pval, ___it) \
	LP2NR(0x5fa, ASN1_primitive_free , ASN1_VALUE **, ___pval, a0, const ASN1_ITEM *, ___it, a1,\
	, AMISSL_BASE_NAME)

#define asn1_ex_i2c(___pval, ___cont, ___putype, ___it) \
	LP4(0x600, int, asn1_ex_i2c , ASN1_VALUE **, ___pval, a0, unsigned char *, ___cont, a1, int *, ___putype, a2, const ASN1_ITEM *, ___it, a3,\
	, AMISSL_BASE_NAME)

#define asn1_ex_c2i(___pval, ___cont, ___len, ___utype, ___free_cont, ___it) \
	LP6(0x606, int, asn1_ex_c2i , ASN1_VALUE **, ___pval, a0, unsigned char *, ___cont, a1, int, ___len, d0, int, ___utype, d1, char *, ___free_cont, a2, const ASN1_ITEM *, ___it, a3,\
	, AMISSL_BASE_NAME)

#define asn1_get_choice_selector(___pval, ___it) \
	LP2(0x60c, int, asn1_get_choice_selector , ASN1_VALUE **, ___pval, a0, const ASN1_ITEM *, ___it, a1,\
	, AMISSL_BASE_NAME)

#define asn1_set_choice_selector(___pval, ___value, ___it) \
	LP3(0x612, int, asn1_set_choice_selector , ASN1_VALUE **, ___pval, a0, int, ___value, d0, const ASN1_ITEM *, ___it, a1,\
	, AMISSL_BASE_NAME)

#define asn1_get_field_ptr(___pval, ___tt) \
	LP2(0x618, ASN1_VALUE **, asn1_get_field_ptr , ASN1_VALUE **, ___pval, a0, const ASN1_TEMPLATE *, ___tt, a1,\
	, AMISSL_BASE_NAME)

#define asn1_do_adb(___pval, ___tt, ___nullerr) \
	LP3(0x61e, const ASN1_TEMPLATE *, asn1_do_adb , ASN1_VALUE **, ___pval, a0, const ASN1_TEMPLATE *, ___tt, a1, int, ___nullerr, d0,\
	, AMISSL_BASE_NAME)

#define asn1_do_lock(___pval, ___op, ___it) \
	LP3(0x624, int, asn1_do_lock , ASN1_VALUE **, ___pval, a0, int, ___op, d0, const ASN1_ITEM *, ___it, a1,\
	, AMISSL_BASE_NAME)

#define asn1_enc_init(___pval, ___it) \
	LP2NR(0x62a, asn1_enc_init , ASN1_VALUE **, ___pval, a0, const ASN1_ITEM *, ___it, a1,\
	, AMISSL_BASE_NAME)

#define asn1_enc_free(___pval, ___it) \
	LP2NR(0x630, asn1_enc_free , ASN1_VALUE **, ___pval, a0, const ASN1_ITEM *, ___it, a1,\
	, AMISSL_BASE_NAME)

#define asn1_enc_restore(___len, ___out, ___pval, ___it) \
	LP4(0x636, int, asn1_enc_restore , int *, ___len, a0, unsigned char **, ___out, a1, ASN1_VALUE **, ___pval, a2, const ASN1_ITEM *, ___it, a3,\
	, AMISSL_BASE_NAME)

#define asn1_enc_save(___pval, ___in, ___inlen, ___it) \
	LP4(0x63c, int, asn1_enc_save , ASN1_VALUE **, ___pval, a0, unsigned char *, ___in, a1, int, ___inlen, d0, const ASN1_ITEM *, ___it, a2,\
	, AMISSL_BASE_NAME)

#define BIO_ctrl_pending(___b) \
	LP1(0x642, size_t, BIO_ctrl_pending , BIO *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define BIO_ctrl_wpending(___b) \
	LP1(0x648, size_t, BIO_ctrl_wpending , BIO *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define BIO_ctrl_get_write_guarantee(___b) \
	LP1(0x64e, size_t, BIO_ctrl_get_write_guarantee , BIO *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define BIO_ctrl_get_read_request(___b) \
	LP1(0x654, size_t, BIO_ctrl_get_read_request , BIO *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define BIO_ctrl_reset_read_request(___b) \
	LP1(0x65a, int, BIO_ctrl_reset_read_request , BIO *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define BIO_set_ex_data(___bio, ___idx, ___data) \
	LP3(0x660, int, BIO_set_ex_data , BIO *, ___bio, a0, int, ___idx, d0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define BIO_get_ex_data(___bio, ___idx) \
	LP2(0x666, void *, BIO_get_ex_data , BIO *, ___bio, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define BIO_get_ex_new_index(___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP5(0x66c, int, BIO_get_ex_new_index , long, ___argl, d0, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define BIO_number_read(___bio) \
	LP1(0x672, unsigned long, BIO_number_read , BIO *, ___bio, a0,\
	, AMISSL_BASE_NAME)

#define BIO_number_written(___bio) \
	LP1(0x678, unsigned long, BIO_number_written , BIO *, ___bio, a0,\
	, AMISSL_BASE_NAME)

#define BIO_s_file() \
	LP0(0x67e, BIO_METHOD *, BIO_s_file ,\
	, AMISSL_BASE_NAME)

#define BIO_new_file(___filename, ___mode) \
	LP2(0x684, BIO *, BIO_new_file , const char *, ___filename, a0, const char *, ___mode, a1,\
	, AMISSL_BASE_NAME)

#define BIO_new_fp_amiga(___stream, ___close_flag) \
	LP2(0x68a, BIO *, BIO_new_fp_amiga , BPTR, ___stream, a0, int, ___close_flag, d0,\
	, AMISSL_BASE_NAME)

#define BIO_new(___type) \
	LP1(0x690, BIO *, BIO_new , BIO_METHOD *, ___type, a0,\
	, AMISSL_BASE_NAME)

#define BIO_set(___a, ___type) \
	LP2(0x696, int, BIO_set , BIO *, ___a, a0, BIO_METHOD *, ___type, a1,\
	, AMISSL_BASE_NAME)

#define BIO_free(___a) \
	LP1(0x69c, int, BIO_free , BIO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BIO_vfree(___a) \
	LP1NR(0x6a2, BIO_vfree , BIO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BIO_read(___b, ___data, ___len) \
	LP3(0x6a8, int, BIO_read , BIO *, ___b, a0, void *, ___data, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define BIO_gets(___bp, ___buf, ___size) \
	LP3(0x6ae, int, BIO_gets , BIO *, ___bp, a0, char *, ___buf, a1, int, ___size, d0,\
	, AMISSL_BASE_NAME)

#define BIO_write(___b, ___data, ___len) \
	LP3(0x6b4, int, BIO_write , BIO *, ___b, a0, const void *, ___data, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define BIO_puts(___bp, ___buf) \
	LP2(0x6ba, int, BIO_puts , BIO *, ___bp, a0, const char *, ___buf, a1,\
	, AMISSL_BASE_NAME)

#define BIO_indent(___b, ___indent, ___max) \
	LP3(0x6c0, int, BIO_indent , BIO *, ___b, a0, int, ___indent, d0, int, ___max, d1,\
	, AMISSL_BASE_NAME)

#define BIO_ctrl(___bp, ___cmd, ___larg, ___parg) \
	LP4(0x6c6, long, BIO_ctrl , BIO *, ___bp, a0, int, ___cmd, d0, long, ___larg, d1, void *, ___parg, a1,\
	, AMISSL_BASE_NAME)

#define BIO_callback_ctrl(___b, ___cmd, ___fp) \
	LP3FP(0x6cc, long, BIO_callback_ctrl , BIO *, ___b, a0, int, ___cmd, d0, __fpt, ___fp, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(struct bio_st *,int,const char *,int,long,long))

#define BIO_ptr_ctrl(___bp, ___cmd, ___larg) \
	LP3(0x6d2, char *, BIO_ptr_ctrl , BIO *, ___bp, a0, int, ___cmd, d0, long, ___larg, d1,\
	, AMISSL_BASE_NAME)

#define BIO_int_ctrl(___bp, ___cmd, ___larg, ___iarg) \
	LP4(0x6d8, long, BIO_int_ctrl , BIO *, ___bp, a0, int, ___cmd, d0, long, ___larg, d1, int, ___iarg, d2,\
	, AMISSL_BASE_NAME)

#define BIO_push(___b, ___append) \
	LP2(0x6de, BIO *, BIO_push , BIO *, ___b, a0, BIO *, ___append, a1,\
	, AMISSL_BASE_NAME)

#define BIO_pop(___b) \
	LP1(0x6e4, BIO *, BIO_pop , BIO *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define BIO_free_all(___a) \
	LP1NR(0x6ea, BIO_free_all , BIO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BIO_find_type(___b, ___bio_type) \
	LP2(0x6f0, BIO *, BIO_find_type , BIO *, ___b, a0, int, ___bio_type, d0,\
	, AMISSL_BASE_NAME)

#define BIO_next(___b) \
	LP1(0x6f6, BIO *, BIO_next , BIO *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define BIO_get_retry_BIO(___bio, ___reason) \
	LP2(0x6fc, BIO *, BIO_get_retry_BIO , BIO *, ___bio, a0, int *, ___reason, a1,\
	, AMISSL_BASE_NAME)

#define BIO_get_retry_reason(___bio) \
	LP1(0x702, int, BIO_get_retry_reason , BIO *, ___bio, a0,\
	, AMISSL_BASE_NAME)

#define BIO_dup_chain(___in) \
	LP1(0x708, BIO *, BIO_dup_chain , BIO *, ___in, a0,\
	, AMISSL_BASE_NAME)

#define BIO_nread0(___bio, ___buf) \
	LP2(0x70e, int, BIO_nread0 , BIO *, ___bio, a0, char **, ___buf, a1,\
	, AMISSL_BASE_NAME)

#define BIO_nread(___bio, ___buf, ___num) \
	LP3(0x714, int, BIO_nread , BIO *, ___bio, a0, char **, ___buf, a1, int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define BIO_nwrite0(___bio, ___buf) \
	LP2(0x71a, int, BIO_nwrite0 , BIO *, ___bio, a0, char **, ___buf, a1,\
	, AMISSL_BASE_NAME)

#define BIO_nwrite(___bio, ___buf, ___num) \
	LP3(0x720, int, BIO_nwrite , BIO *, ___bio, a0, char **, ___buf, a1, int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define BIO_debug_callback(___bio, ___cmd, ___argp, ___argi, ___argl, ___ret) \
	LP6(0x726, long, BIO_debug_callback , BIO *, ___bio, a0, int, ___cmd, d0, const char *, ___argp, a1, int, ___argi, d1, long, ___argl, d2, long, ___ret, d3,\
	, AMISSL_BASE_NAME)

#define BIO_s_mem() \
	LP0(0x72c, BIO_METHOD *, BIO_s_mem ,\
	, AMISSL_BASE_NAME)

#define BIO_new_mem_buf(___buf, ___len) \
	LP2(0x732, BIO *, BIO_new_mem_buf , void *, ___buf, a0, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define BIO_s_socket() \
	LP0(0x738, BIO_METHOD *, BIO_s_socket ,\
	, AMISSL_BASE_NAME)

#define BIO_s_connect() \
	LP0(0x73e, BIO_METHOD *, BIO_s_connect ,\
	, AMISSL_BASE_NAME)

#define BIO_s_accept() \
	LP0(0x744, BIO_METHOD *, BIO_s_accept ,\
	, AMISSL_BASE_NAME)

#define BIO_s_fd() \
	LP0(0x74a, BIO_METHOD *, BIO_s_fd ,\
	, AMISSL_BASE_NAME)

#define BIO_s_log() \
	LP0(0x750, BIO_METHOD *, BIO_s_log ,\
	, AMISSL_BASE_NAME)

#define BIO_s_bio() \
	LP0(0x756, BIO_METHOD *, BIO_s_bio ,\
	, AMISSL_BASE_NAME)

#define BIO_s_null() \
	LP0(0x75c, BIO_METHOD *, BIO_s_null ,\
	, AMISSL_BASE_NAME)

#define BIO_f_null() \
	LP0(0x762, BIO_METHOD *, BIO_f_null ,\
	, AMISSL_BASE_NAME)

#define BIO_f_buffer() \
	LP0(0x768, BIO_METHOD *, BIO_f_buffer ,\
	, AMISSL_BASE_NAME)

#define BIO_f_nbio_test() \
	LP0(0x76e, BIO_METHOD *, BIO_f_nbio_test ,\
	, AMISSL_BASE_NAME)

#define BIO_sock_should_retry(___i) \
	LP1(0x774, int, BIO_sock_should_retry , int, ___i, d0,\
	, AMISSL_BASE_NAME)

#define BIO_sock_non_fatal_error(___error) \
	LP1(0x77a, int, BIO_sock_non_fatal_error , int, ___error, d0,\
	, AMISSL_BASE_NAME)

#define BIO_fd_should_retry(___i) \
	LP1(0x780, int, BIO_fd_should_retry , int, ___i, d0,\
	, AMISSL_BASE_NAME)

#define BIO_fd_non_fatal_error(___error) \
	LP1(0x786, int, BIO_fd_non_fatal_error , int, ___error, d0,\
	, AMISSL_BASE_NAME)

#define BIO_dump(___b, ___bytes, ___len) \
	LP3(0x78c, int, BIO_dump , BIO *, ___b, a0, const char *, ___bytes, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define BIO_dump_indent(___b, ___bytes, ___len, ___indent) \
	LP4(0x792, int, BIO_dump_indent , BIO *, ___b, a0, const char *, ___bytes, a1, int, ___len, d0, int, ___indent, d1,\
	, AMISSL_BASE_NAME)

#define BIO_gethostbyname(___name) \
	LP1(0x798, struct hostent *, BIO_gethostbyname , const char *, ___name, a0,\
	, AMISSL_BASE_NAME)

#define BIO_sock_error(___sock) \
	LP1(0x79e, int, BIO_sock_error , int, ___sock, d0,\
	, AMISSL_BASE_NAME)

#define BIO_socket_ioctl(___fd, ___type, ___arg) \
	LP3(0x7a4, int, BIO_socket_ioctl , int, ___fd, d0, long, ___type, d1, void *, ___arg, a0,\
	, AMISSL_BASE_NAME)

#define BIO_socket_nbio(___fd, ___mode) \
	LP2(0x7aa, int, BIO_socket_nbio , int, ___fd, d0, int, ___mode, d1,\
	, AMISSL_BASE_NAME)

#define BIO_get_port(___str, ___port_ptr) \
	LP2(0x7b0, int, BIO_get_port , const char *, ___str, a0, unsigned short *, ___port_ptr, a1,\
	, AMISSL_BASE_NAME)

#define BIO_get_host_ip(___str, ___ip) \
	LP2(0x7b6, int, BIO_get_host_ip , const char *, ___str, a0, unsigned char *, ___ip, a1,\
	, AMISSL_BASE_NAME)

#define BIO_get_accept_socket(___host_port, ___mode) \
	LP2(0x7bc, int, BIO_get_accept_socket , char *, ___host_port, a0, int, ___mode, d0,\
	, AMISSL_BASE_NAME)

#define BIO_accept(___sock, ___ip_port) \
	LP2(0x7c2, int, BIO_accept , int, ___sock, d0, char **, ___ip_port, a0,\
	, AMISSL_BASE_NAME)

#define BIO_sock_init() \
	LP0(0x7c8, int, BIO_sock_init ,\
	, AMISSL_BASE_NAME)

#define BIO_sock_cleanup() \
	LP0NR(0x7ce, BIO_sock_cleanup ,\
	, AMISSL_BASE_NAME)

#define BIO_set_tcp_ndelay(___sock, ___turn_on) \
	LP2(0x7d4, int, BIO_set_tcp_ndelay , int, ___sock, d0, int, ___turn_on, d1,\
	, AMISSL_BASE_NAME)

#define BIO_new_socket(___sock, ___close_flag) \
	LP2(0x7da, BIO *, BIO_new_socket , int, ___sock, d0, int, ___close_flag, d1,\
	, AMISSL_BASE_NAME)

#define BIO_new_fd(___fd, ___close_flag) \
	LP2(0x7e0, BIO *, BIO_new_fd , int, ___fd, d0, int, ___close_flag, d1,\
	, AMISSL_BASE_NAME)

#define BIO_new_connect(___host_port) \
	LP1(0x7e6, BIO *, BIO_new_connect , char *, ___host_port, a0,\
	, AMISSL_BASE_NAME)

#define BIO_new_accept(___host_port) \
	LP1(0x7ec, BIO *, BIO_new_accept , char *, ___host_port, a0,\
	, AMISSL_BASE_NAME)

#define BIO_new_bio_pair(___bio1, ___writebuf1, ___bio2, ___writebuf2) \
	LP4(0x7f2, int, BIO_new_bio_pair , BIO **, ___bio1, a0, size_t, ___writebuf1, d0, BIO **, ___bio2, a1, size_t, ___writebuf2, d1,\
	, AMISSL_BASE_NAME)

#define BIO_copy_next_retry(___b) \
	LP1NR(0x7f8, BIO_copy_next_retry , BIO *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define BIO_vprintf(___bio, ___format, ___args) \
	LP3(0x7fe, int, BIO_vprintf , BIO *, ___bio, a0, const char *, ___format, a1, long *, ___args, a2,\
	, AMISSL_BASE_NAME)

#ifndef NO_INLINE_VARARGS
#define BIO_printf(___bio, ___format, ___dummy, ...) \
	({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; BIO_vprintf((___bio), (___format), (long *) _message); })
#endif /* !NO_INLINE_VARARGS */

#define BIO_vsnprintf(___buf, ___n, ___format, ___args) \
	LP4(0x804, int, BIO_vsnprintf , char *, ___buf, a0, size_t, ___n, d0, const char *, ___format, a1, long *, ___args, a2,\
	, AMISSL_BASE_NAME)

#ifndef NO_INLINE_VARARGS
#define BIO_snprintf(___buf, ___n, ___format, ___dummy, ...) \
	({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; BIO_vsnprintf((___buf), (___n), (___format), (long *) _message); })
#endif /* !NO_INLINE_VARARGS */

#define ERR_load_BIO_strings() \
	LP0NR(0x80a, ERR_load_BIO_strings ,\
	, AMISSL_BASE_NAME)

#define BN_value_one() \
	LP0(0x810, const BIGNUM *, BN_value_one ,\
	, AMISSL_BASE_NAME)

#define BN_options() \
	LP0(0x816, char *, BN_options ,\
	, AMISSL_BASE_NAME)

#define BN_CTX_new() \
	LP0(0x81c, BN_CTX *, BN_CTX_new ,\
	, AMISSL_BASE_NAME)

#define BN_CTX_init(___c) \
	LP1NR(0x822, BN_CTX_init , BN_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define BN_CTX_free(___c) \
	LP1NR(0x828, BN_CTX_free , BN_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define BN_CTX_start(___ctx) \
	LP1NR(0x82e, BN_CTX_start , BN_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define BN_CTX_get(___ctx) \
	LP1(0x834, BIGNUM *, BN_CTX_get , BN_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define BN_CTX_end(___ctx) \
	LP1NR(0x83a, BN_CTX_end , BN_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define BN_rand(___rnd, ___bits, ___top, ___bottom) \
	LP4(0x840, int, BN_rand , BIGNUM *, ___rnd, a0, int, ___bits, d0, int, ___top, d1, int, ___bottom, d2,\
	, AMISSL_BASE_NAME)

#define BN_pseudo_rand(___rnd, ___bits, ___top, ___bottom) \
	LP4(0x846, int, BN_pseudo_rand , BIGNUM *, ___rnd, a0, int, ___bits, d0, int, ___top, d1, int, ___bottom, d2,\
	, AMISSL_BASE_NAME)

#define BN_rand_range(___rnd, ___range) \
	LP2(0x84c, int, BN_rand_range , BIGNUM *, ___rnd, a0, BIGNUM *, ___range, a1,\
	, AMISSL_BASE_NAME)

#define BN_pseudo_rand_range(___rnd, ___range) \
	LP2(0x852, int, BN_pseudo_rand_range , BIGNUM *, ___rnd, a0, BIGNUM *, ___range, a1,\
	, AMISSL_BASE_NAME)

#define BN_num_bits(___a) \
	LP1(0x858, int, BN_num_bits , const BIGNUM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BN_num_bits_word(___a) \
	LP1(0x85e, int, BN_num_bits_word , BN_ULONG, ___a, d0,\
	, AMISSL_BASE_NAME)

#define BN_new() \
	LP0(0x864, BIGNUM *, BN_new ,\
	, AMISSL_BASE_NAME)

#define BN_init(___a) \
	LP1NR(0x86a, BN_init , BIGNUM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BN_clear_free(___a) \
	LP1NR(0x870, BN_clear_free , BIGNUM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BN_copy(___a, ___b) \
	LP2(0x876, BIGNUM *, BN_copy , BIGNUM *, ___a, a0, const BIGNUM *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define BN_swap(___a, ___b) \
	LP2NR(0x87c, BN_swap , BIGNUM *, ___a, a0, BIGNUM *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define BN_bin2bn(___s, ___len, ___ret) \
	LP3(0x882, BIGNUM *, BN_bin2bn , const unsigned char *, ___s, a0, int, ___len, d0, BIGNUM *, ___ret, a1,\
	, AMISSL_BASE_NAME)

#define BN_bn2bin(___a, ___to) \
	LP2(0x888, int, BN_bn2bin , const BIGNUM *, ___a, a0, unsigned char *, ___to, a1,\
	, AMISSL_BASE_NAME)

#define BN_mpi2bn(___s, ___len, ___ret) \
	LP3(0x88e, BIGNUM *, BN_mpi2bn , const unsigned char *, ___s, a0, int, ___len, d0, BIGNUM *, ___ret, a1,\
	, AMISSL_BASE_NAME)

#define BN_bn2mpi(___a, ___to) \
	LP2(0x894, int, BN_bn2mpi , const BIGNUM *, ___a, a0, unsigned char *, ___to, a1,\
	, AMISSL_BASE_NAME)

#define BN_sub(___r, ___a, ___b) \
	LP3(0x89a, int, BN_sub , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2,\
	, AMISSL_BASE_NAME)

#define BN_usub(___r, ___a, ___b) \
	LP3(0x8a0, int, BN_usub , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2,\
	, AMISSL_BASE_NAME)

#define BN_uadd(___r, ___a, ___b) \
	LP3(0x8a6, int, BN_uadd , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2,\
	, AMISSL_BASE_NAME)

#define BN_add(___r, ___a, ___b) \
	LP3(0x8ac, int, BN_add , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2,\
	, AMISSL_BASE_NAME)

#define BN_mul(___r, ___a, ___b, ___ctx) \
	LP4(0x8b2, int, BN_mul , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_sqr(___r, ___a, ___ctx) \
	LP3(0x8b8, int, BN_sqr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, BN_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define BN_div(___dv, ___rem, ___m, ___d, ___ctx) \
	LP5(0x8be, int, BN_div , BIGNUM *, ___dv, a0, BIGNUM *, ___rem, a1, const BIGNUM *, ___m, a2, const BIGNUM *, ___d, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_nnmod(___r, ___m, ___d, ___ctx) \
	LP4(0x8c4, int, BN_nnmod , BIGNUM *, ___r, a0, const BIGNUM *, ___m, a1, const BIGNUM *, ___d, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_mod_add(___r, ___a, ___b, ___m, ___ctx) \
	LP5(0x8ca, int, BN_mod_add , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_mod_add_quick(___r, ___a, ___b, ___m) \
	LP4(0x8d0, int, BN_mod_add_quick , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___m, a3,\
	, AMISSL_BASE_NAME)

#define BN_mod_sub(___r, ___a, ___b, ___m, ___ctx) \
	LP5(0x8d6, int, BN_mod_sub , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_mod_sub_quick(___r, ___a, ___b, ___m) \
	LP4(0x8dc, int, BN_mod_sub_quick , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___m, a3,\
	, AMISSL_BASE_NAME)

#define BN_mod_mul(___r, ___a, ___b, ___m, ___ctx) \
	LP5(0x8e2, int, BN_mod_mul , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_mod_sqr(___r, ___a, ___m, ___ctx) \
	LP4(0x8e8, int, BN_mod_sqr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___m, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_mod_lshift1(___r, ___a, ___m, ___ctx) \
	LP4(0x8ee, int, BN_mod_lshift1 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___m, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_mod_lshift1_quick(___r, ___a, ___m) \
	LP3(0x8f4, int, BN_mod_lshift1_quick , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___m, a2,\
	, AMISSL_BASE_NAME)

#define BN_mod_lshift(___r, ___a, ___n, ___m, ___ctx) \
	LP5(0x8fa, int, BN_mod_lshift , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, int, ___n, d0, const BIGNUM *, ___m, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_mod_lshift_quick(___r, ___a, ___n, ___m) \
	LP4(0x900, int, BN_mod_lshift_quick , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, int, ___n, d0, const BIGNUM *, ___m, a2,\
	, AMISSL_BASE_NAME)

#define BN_mod_word(___a, ___w) \
	LP2(0x906, BN_ULONG, BN_mod_word , const BIGNUM *, ___a, a0, BN_ULONG, ___w, d0,\
	, AMISSL_BASE_NAME)

#define BN_div_word(___a, ___w) \
	LP2(0x90c, BN_ULONG, BN_div_word , BIGNUM *, ___a, a0, BN_ULONG, ___w, d0,\
	, AMISSL_BASE_NAME)

#define BN_mul_word(___a, ___w) \
	LP2(0x912, int, BN_mul_word , BIGNUM *, ___a, a0, BN_ULONG, ___w, d0,\
	, AMISSL_BASE_NAME)

#define BN_add_word(___a, ___w) \
	LP2(0x918, int, BN_add_word , BIGNUM *, ___a, a0, BN_ULONG, ___w, d0,\
	, AMISSL_BASE_NAME)

#define BN_sub_word(___a, ___w) \
	LP2(0x91e, int, BN_sub_word , BIGNUM *, ___a, a0, BN_ULONG, ___w, d0,\
	, AMISSL_BASE_NAME)

#define BN_set_word(___a, ___w) \
	LP2(0x924, int, BN_set_word , BIGNUM *, ___a, a0, BN_ULONG, ___w, d0,\
	, AMISSL_BASE_NAME)

#define BN_get_word(___a) \
	LP1(0x92a, BN_ULONG, BN_get_word , const BIGNUM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BN_cmp(___a, ___b) \
	LP2(0x930, int, BN_cmp , const BIGNUM *, ___a, a0, const BIGNUM *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define BN_free(___a) \
	LP1NR(0x936, BN_free , BIGNUM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BN_is_bit_set(___a, ___n) \
	LP2(0x93c, int, BN_is_bit_set , const BIGNUM *, ___a, a0, int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define BN_lshift(___r, ___a, ___n) \
	LP3(0x942, int, BN_lshift , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define BN_lshift1(___r, ___a) \
	LP2(0x948, int, BN_lshift1 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define BN_exp(___r, ___a, ___p, ___ctx) \
	LP4(0x94e, int, BN_exp , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_mod_exp(___r, ___a, ___p, ___m, ___ctx) \
	LP5(0x954, int, BN_mod_exp , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_mod_exp_mont(___r, ___a, ___p, ___m, ___ctx, ___m_ctx) \
	LP6(0x95a, int, BN_mod_exp_mont , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0, BN_MONT_CTX *, ___m_ctx, d1,\
	, AMISSL_BASE_NAME)

#define BN_mod_exp_mont_word(___r, ___a, ___p, ___m, ___ctx, ___m_ctx) \
	LP6(0x960, int, BN_mod_exp_mont_word , BIGNUM *, ___r, a0, BN_ULONG, ___a, d0, const BIGNUM *, ___p, a1, const BIGNUM *, ___m, a2, BN_CTX *, ___ctx, a3, BN_MONT_CTX *, ___m_ctx, d1,\
	, AMISSL_BASE_NAME)

#define BN_mod_exp2_mont(___r, ___a1, ___p1, ___a2, ___p2, ___m, ___ctx, ___m_ctx) \
	LP8(0x966, int, BN_mod_exp2_mont , BIGNUM *, ___r, a0, const BIGNUM *, ___a1, a1, const BIGNUM *, ___p1, a2, const BIGNUM *, ___a2, a3, const BIGNUM *, ___p2, d0, const BIGNUM *, ___m, d1, BN_CTX *, ___ctx, d2, BN_MONT_CTX *, ___m_ctx, d3,\
	, AMISSL_BASE_NAME)

#define BN_mod_exp_simple(___r, ___a, ___p, ___m, ___ctx) \
	LP5(0x96c, int, BN_mod_exp_simple , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_mask_bits(___a, ___n) \
	LP2(0x972, int, BN_mask_bits , BIGNUM *, ___a, a0, int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define BN_print(___fp, ___a) \
	LP2(0x978, int, BN_print , BIO *, ___fp, a0, const BIGNUM *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define BN_reciprocal(___r, ___m, ___len, ___ctx) \
	LP4(0x97e, int, BN_reciprocal , BIGNUM *, ___r, a0, const BIGNUM *, ___m, a1, int, ___len, d0, BN_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define BN_rshift(___r, ___a, ___n) \
	LP3(0x984, int, BN_rshift , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define BN_rshift1(___r, ___a) \
	LP2(0x98a, int, BN_rshift1 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define BN_clear(___a) \
	LP1NR(0x990, BN_clear , BIGNUM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BN_dup(___a) \
	LP1(0x996, BIGNUM *, BN_dup , const BIGNUM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BN_ucmp(___a, ___b) \
	LP2(0x99c, int, BN_ucmp , const BIGNUM *, ___a, a0, const BIGNUM *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define BN_set_bit(___a, ___n) \
	LP2(0x9a2, int, BN_set_bit , BIGNUM *, ___a, a0, int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define BN_clear_bit(___a, ___n) \
	LP2(0x9a8, int, BN_clear_bit , BIGNUM *, ___a, a0, int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define BN_bn2hex(___a) \
	LP1(0x9ae, char *, BN_bn2hex , const BIGNUM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BN_bn2dec(___a) \
	LP1(0x9b4, char *, BN_bn2dec , const BIGNUM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BN_hex2bn(___a, ___str) \
	LP2(0x9ba, int, BN_hex2bn , BIGNUM **, ___a, a0, const char *, ___str, a1,\
	, AMISSL_BASE_NAME)

#define BN_dec2bn(___a, ___str) \
	LP2(0x9c0, int, BN_dec2bn , BIGNUM **, ___a, a0, const char *, ___str, a1,\
	, AMISSL_BASE_NAME)

#define BN_gcd(___r, ___a, ___b, ___ctx) \
	LP4(0x9c6, int, BN_gcd , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_kronecker(___a, ___b, ___ctx) \
	LP3(0x9cc, int, BN_kronecker , const BIGNUM *, ___a, a0, const BIGNUM *, ___b, a1, BN_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define BN_mod_inverse(___ret, ___a, ___n, ___ctx) \
	LP4(0x9d2, BIGNUM *, BN_mod_inverse , BIGNUM *, ___ret, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___n, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_mod_sqrt(___ret, ___a, ___n, ___ctx) \
	LP4(0x9d8, BIGNUM *, BN_mod_sqrt , BIGNUM *, ___ret, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___n, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_generate_prime(___ret, ___bits, ___safe, ___add, ___rem, ___callback, ___cb_arg) \
	LP7FP(0x9de, BIGNUM *, BN_generate_prime , BIGNUM *, ___ret, a0, int, ___bits, d0, int, ___safe, d1, const BIGNUM *, ___add, a1, const BIGNUM *, ___rem, a2, __fpt, ___callback, a3, void *, ___cb_arg, d2,\
	, AMISSL_BASE_NAME, void (*__fpt)(int,int,void *))

#define BN_is_prime(___p, ___nchecks, ___callback, ___ctx, ___cb_arg) \
	LP5FP(0x9e4, int, BN_is_prime , const BIGNUM *, ___p, a0, int, ___nchecks, d0, __fpt, ___callback, a1, BN_CTX *, ___ctx, a2, void *, ___cb_arg, a3,\
	, AMISSL_BASE_NAME, void (*__fpt)(int,int,void *))

#define BN_is_prime_fasttest(___p, ___nchecks, ___callback, ___ctx, ___cb_arg, ___do_trial_division) \
	LP6FP(0x9ea, int, BN_is_prime_fasttest , const BIGNUM *, ___p, a0, int, ___nchecks, d0, __fpt, ___callback, a1, BN_CTX *, ___ctx, a2, void *, ___cb_arg, a3, int, ___do_trial_division, d1,\
	, AMISSL_BASE_NAME, void (*__fpt)(int,int,void *))

#define BN_MONT_CTX_new() \
	LP0(0x9f0, BN_MONT_CTX *, BN_MONT_CTX_new ,\
	, AMISSL_BASE_NAME)

#define BN_MONT_CTX_init(___ctx) \
	LP1NR(0x9f6, BN_MONT_CTX_init , BN_MONT_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define BN_mod_mul_montgomery(___r, ___a, ___b, ___mont, ___ctx) \
	LP5(0x9fc, int, BN_mod_mul_montgomery , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, BN_MONT_CTX *, ___mont, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_from_montgomery(___r, ___a, ___mont, ___ctx) \
	LP4(0xa02, int, BN_from_montgomery , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, BN_MONT_CTX *, ___mont, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_MONT_CTX_free(___mont) \
	LP1NR(0xa08, BN_MONT_CTX_free , BN_MONT_CTX *, ___mont, a0,\
	, AMISSL_BASE_NAME)

#define BN_MONT_CTX_set(___mont, ___mod, ___ctx) \
	LP3(0xa0e, int, BN_MONT_CTX_set , BN_MONT_CTX *, ___mont, a0, const BIGNUM *, ___mod, a1, BN_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define BN_MONT_CTX_copy(___to, ___from) \
	LP2(0xa14, BN_MONT_CTX *, BN_MONT_CTX_copy , BN_MONT_CTX *, ___to, a0, BN_MONT_CTX *, ___from, a1,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_new(___A, ___Ai, ___mod) \
	LP3(0xa1a, BN_BLINDING *, BN_BLINDING_new , BIGNUM *, ___A, a0, BIGNUM *, ___Ai, a1, BIGNUM *, ___mod, a2,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_free(___b) \
	LP1NR(0xa20, BN_BLINDING_free , BN_BLINDING *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_update(___b, ___ctx) \
	LP2(0xa26, int, BN_BLINDING_update , BN_BLINDING *, ___b, a0, BN_CTX *, ___ctx, a1,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_convert(___n, ___r, ___ctx) \
	LP3(0xa2c, int, BN_BLINDING_convert , BIGNUM *, ___n, a0, BN_BLINDING *, ___r, a1, BN_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_invert(___n, ___b, ___ctx) \
	LP3(0xa32, int, BN_BLINDING_invert , BIGNUM *, ___n, a0, BN_BLINDING *, ___b, a1, BN_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define BN_set_params(___mul, ___high, ___low, ___mont) \
	LP4NR(0xa38, BN_set_params , int, ___mul, d0, int, ___high, d1, int, ___low, d2, int, ___mont, d3,\
	, AMISSL_BASE_NAME)

#define BN_get_params(___which) \
	LP1(0xa3e, int, BN_get_params , int, ___which, d0,\
	, AMISSL_BASE_NAME)

#define BN_RECP_CTX_init(___recp) \
	LP1NR(0xa44, BN_RECP_CTX_init , BN_RECP_CTX *, ___recp, a0,\
	, AMISSL_BASE_NAME)

#define BN_RECP_CTX_new() \
	LP0(0xa4a, BN_RECP_CTX *, BN_RECP_CTX_new ,\
	, AMISSL_BASE_NAME)

#define BN_RECP_CTX_free(___recp) \
	LP1NR(0xa50, BN_RECP_CTX_free , BN_RECP_CTX *, ___recp, a0,\
	, AMISSL_BASE_NAME)

#define BN_RECP_CTX_set(___recp, ___rdiv, ___ctx) \
	LP3(0xa56, int, BN_RECP_CTX_set , BN_RECP_CTX *, ___recp, a0, const BIGNUM *, ___rdiv, a1, BN_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define BN_mod_mul_reciprocal(___r, ___x, ___y, ___recp, ___ctx) \
	LP5(0xa5c, int, BN_mod_mul_reciprocal , BIGNUM *, ___r, a0, const BIGNUM *, ___x, a1, const BIGNUM *, ___y, a2, BN_RECP_CTX *, ___recp, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_mod_exp_recp(___r, ___a, ___p, ___m, ___ctx) \
	LP5(0xa62, int, BN_mod_exp_recp , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_div_recp(___dv, ___rem, ___m, ___recp, ___ctx) \
	LP5(0xa68, int, BN_div_recp , BIGNUM *, ___dv, a0, BIGNUM *, ___rem, a1, const BIGNUM *, ___m, a2, BN_RECP_CTX *, ___recp, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define bn_expand2(___a, ___words) \
	LP2(0xa6e, BIGNUM *, bn_expand2 , BIGNUM *, ___a, a0, int, ___words, d0,\
	, AMISSL_BASE_NAME)

#define bn_dup_expand(___a, ___words) \
	LP2(0xa74, BIGNUM *, bn_dup_expand , const BIGNUM *, ___a, a0, int, ___words, d0,\
	, AMISSL_BASE_NAME)

#define bn_mul_add_words(___rp, ___ap, ___num, ___w) \
	LP4(0xa7a, BN_ULONG, bn_mul_add_words , BN_ULONG *, ___rp, a0, const BN_ULONG *, ___ap, a1, int, ___num, d0, BN_ULONG, ___w, d1,\
	, AMISSL_BASE_NAME)

#define bn_mul_words(___rp, ___ap, ___num, ___w) \
	LP4(0xa80, BN_ULONG, bn_mul_words , BN_ULONG *, ___rp, a0, const BN_ULONG *, ___ap, a1, int, ___num, d0, BN_ULONG, ___w, d1,\
	, AMISSL_BASE_NAME)

#define bn_sqr_words(___rp, ___ap, ___num) \
	LP3NR(0xa86, bn_sqr_words , BN_ULONG *, ___rp, a0, const BN_ULONG *, ___ap, a1, int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define bn_div_words(___h, ___l, ___d) \
	LP3(0xa8c, BN_ULONG, bn_div_words , BN_ULONG, ___h, d0, BN_ULONG, ___l, d1, BN_ULONG, ___d, d2,\
	, AMISSL_BASE_NAME)

#define bn_add_words(___rp, ___ap, ___bp, ___num) \
	LP4(0xa92, BN_ULONG, bn_add_words , BN_ULONG *, ___rp, a0, const BN_ULONG *, ___ap, a1, const BN_ULONG *, ___bp, a2, int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define bn_sub_words(___rp, ___ap, ___bp, ___num) \
	LP4(0xa98, BN_ULONG, bn_sub_words , BN_ULONG *, ___rp, a0, const BN_ULONG *, ___ap, a1, const BN_ULONG *, ___bp, a2, int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define BN_bntest_rand(___rnd, ___bits, ___top, ___bottom) \
	LP4(0xa9e, int, BN_bntest_rand , BIGNUM *, ___rnd, a0, int, ___bits, d0, int, ___top, d1, int, ___bottom, d2,\
	, AMISSL_BASE_NAME)

#define ERR_load_BN_strings() \
	LP0NR(0xaa4, ERR_load_BN_strings ,\
	, AMISSL_BASE_NAME)

#define BUF_MEM_new() \
	LP0(0xaaa, BUF_MEM *, BUF_MEM_new ,\
	, AMISSL_BASE_NAME)

#define BUF_MEM_free(___a) \
	LP1NR(0xab0, BUF_MEM_free , BUF_MEM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BUF_MEM_grow(___str, ___len) \
	LP2(0xab6, int, BUF_MEM_grow , BUF_MEM *, ___str, a0, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define BUF_MEM_grow_clean(___str, ___len) \
	LP2(0xabc, int, BUF_MEM_grow_clean , BUF_MEM *, ___str, a0, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define BUF_strdup(___str) \
	LP1(0xac2, char *, BUF_strdup , const char *, ___str, a0,\
	, AMISSL_BASE_NAME)

#define BUF_strlcpy(___dst, ___src, ___siz) \
	LP3(0xac8, size_t, BUF_strlcpy , char *, ___dst, a0, const char *, ___src, a1, size_t, ___siz, d0,\
	, AMISSL_BASE_NAME)

#define BUF_strlcat(___dst, ___src, ___siz) \
	LP3(0xace, size_t, BUF_strlcat , char *, ___dst, a0, const char *, ___src, a1, size_t, ___siz, d0,\
	, AMISSL_BASE_NAME)

#define ERR_load_BUF_strings() \
	LP0NR(0xad4, ERR_load_BUF_strings ,\
	, AMISSL_BASE_NAME)

#define COMP_CTX_new(___meth) \
	LP1(0xada, COMP_CTX *, COMP_CTX_new , COMP_METHOD *, ___meth, a0,\
	, AMISSL_BASE_NAME)

#define COMP_CTX_free(___ctx) \
	LP1NR(0xae0, COMP_CTX_free , COMP_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define COMP_compress_block(___ctx, ___out, ___olen, ___in, ___ilen) \
	LP5(0xae6, int, COMP_compress_block , COMP_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int, ___olen, d0, unsigned char *, ___in, a2, int, ___ilen, d1,\
	, AMISSL_BASE_NAME)

#define COMP_expand_block(___ctx, ___out, ___olen, ___in, ___ilen) \
	LP5(0xaec, int, COMP_expand_block , COMP_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int, ___olen, d0, unsigned char *, ___in, a2, int, ___ilen, d1,\
	, AMISSL_BASE_NAME)

#define COMP_rle() \
	LP0(0xaf2, COMP_METHOD *, COMP_rle ,\
	, AMISSL_BASE_NAME)

#define COMP_zlib() \
	LP0(0xaf8, COMP_METHOD *, COMP_zlib ,\
	, AMISSL_BASE_NAME)

#define ERR_load_COMP_strings() \
	LP0NR(0xafe, ERR_load_COMP_strings ,\
	, AMISSL_BASE_NAME)

#define CONF_set_default_method(___meth) \
	LP1(0xb04, int, CONF_set_default_method , CONF_METHOD *, ___meth, a0,\
	, AMISSL_BASE_NAME)

#define CONF_set_nconf(___conf, ___hash) \
	LP2NR(0xb0a, CONF_set_nconf , CONF *, ___conf, a0, LHASH_OF(CONF_VALUE) *, ___hash, a1,\
	, AMISSL_BASE_NAME)

#define CONF_load(___conf, ___file, ___eline) \
	LP3(0xb10, LHASH_OF(CONF_VALUE) *, CONF_load , LHASH_OF(CONF_VALUE) *, ___conf, a0, const char *, ___file, a1, long *, ___eline, a2,\
	, AMISSL_BASE_NAME)

#define CONF_load_bio(___conf, ___bp, ___eline) \
	LP3(0xb16, LHASH_OF(CONF_VALUE) *, CONF_load_bio , LHASH_OF(CONF_VALUE) *, ___conf, a0, BIO *, ___bp, a1, long *, ___eline, a2,\
	, AMISSL_BASE_NAME)

#define CONF_get_section(___conf, ___section) \
	LP2(0xb1c, STACK_OF(CONF_VALUE) *, CONF_get_section , LHASH_OF(CONF_VALUE) *, ___conf, a0, const char *, ___section, a1,\
	, AMISSL_BASE_NAME)

#define CONF_get_string(___conf, ___group, ___name) \
	LP3(0xb22, char *, CONF_get_string , LHASH_OF(CONF_VALUE) *, ___conf, a0, const char *, ___group, a1, const char *, ___name, a2,\
	, AMISSL_BASE_NAME)

#define CONF_get_number(___conf, ___group, ___name) \
	LP3(0xb28, long, CONF_get_number , LHASH_OF(CONF_VALUE) *, ___conf, a0, const char *, ___group, a1, const char *, ___name, a2,\
	, AMISSL_BASE_NAME)

#define CONF_free(___conf) \
	LP1NR(0xb2e, CONF_free , LHASH_OF(CONF_VALUE) *, ___conf, a0,\
	, AMISSL_BASE_NAME)

#define CONF_dump_bio(___conf, ___out) \
	LP2(0xb34, int, CONF_dump_bio , LHASH_OF(CONF_VALUE) *, ___conf, a0, BIO *, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OPENSSL_config(___config_name) \
	LP1NR(0xb3a, OPENSSL_config , const char *, ___config_name, a0,\
	, AMISSL_BASE_NAME)

#define OPENSSL_no_config() \
	LP0NR(0xb40, OPENSSL_no_config ,\
	, AMISSL_BASE_NAME)

#define NCONF_new(___meth) \
	LP1(0xb46, CONF *, NCONF_new , CONF_METHOD *, ___meth, a0,\
	, AMISSL_BASE_NAME)

#define NCONF_default() \
	LP0(0xb4c, CONF_METHOD *, NCONF_default ,\
	, AMISSL_BASE_NAME)

#define NCONF_WIN32() \
	LP0(0xb52, CONF_METHOD *, NCONF_WIN32 ,\
	, AMISSL_BASE_NAME)

#define NCONF_free(___conf) \
	LP1NR(0xb58, NCONF_free , CONF *, ___conf, a0,\
	, AMISSL_BASE_NAME)

#define NCONF_free_data(___conf) \
	LP1NR(0xb5e, NCONF_free_data , CONF *, ___conf, a0,\
	, AMISSL_BASE_NAME)

#define NCONF_load(___conf, ___file, ___eline) \
	LP3(0xb64, int, NCONF_load , CONF *, ___conf, a0, const char *, ___file, a1, long *, ___eline, a2,\
	, AMISSL_BASE_NAME)

#define NCONF_load_bio(___conf, ___bp, ___eline) \
	LP3(0xb6a, int, NCONF_load_bio , CONF *, ___conf, a0, BIO *, ___bp, a1, long *, ___eline, a2,\
	, AMISSL_BASE_NAME)

#define NCONF_get_section(___conf, ___section) \
	LP2(0xb70, STACK_OF(CONF_VALUE) *, NCONF_get_section , const CONF *, ___conf, a0, const char *, ___section, a1,\
	, AMISSL_BASE_NAME)

#define NCONF_get_string(___conf, ___group, ___name) \
	LP3(0xb76, char *, NCONF_get_string , const CONF *, ___conf, a0, const char *, ___group, a1, const char *, ___name, a2,\
	, AMISSL_BASE_NAME)

#define NCONF_get_number_e(___conf, ___group, ___name, ___result) \
	LP4(0xb7c, int, NCONF_get_number_e , const CONF *, ___conf, a0, const char *, ___group, a1, const char *, ___name, a2, long *, ___result, a3,\
	, AMISSL_BASE_NAME)

#define NCONF_dump_bio(___conf, ___out) \
	LP2(0xb82, int, NCONF_dump_bio , const CONF *, ___conf, a0, BIO *, ___out, a1,\
	, AMISSL_BASE_NAME)

#define CONF_modules_load(___cnf, ___appname, ___flags) \
	LP3(0xb88, int, CONF_modules_load , const CONF *, ___cnf, a0, const char *, ___appname, a1, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CONF_modules_load_file(___filename, ___appname, ___flags) \
	LP3(0xb8e, int, CONF_modules_load_file , const char *, ___filename, a0, const char *, ___appname, a1, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CONF_modules_unload(___all) \
	LP1NR(0xb94, CONF_modules_unload , int, ___all, d0,\
	, AMISSL_BASE_NAME)

#define CONF_modules_finish() \
	LP0NR(0xb9a, CONF_modules_finish ,\
	, AMISSL_BASE_NAME)

#define CONF_modules_free() \
	LP0NR(0xba0, CONF_modules_free ,\
	, AMISSL_BASE_NAME)

#define CONF_module_add(___name, ___ifunc, ___ffunc) \
	LP3(0xba6, int, CONF_module_add , const char *, ___name, a0, conf_init_func *, ___ifunc, a1, conf_finish_func *, ___ffunc, a2,\
	, AMISSL_BASE_NAME)

#define CONF_imodule_get_name(___md) \
	LP1(0xbac, const char *, CONF_imodule_get_name , const CONF_IMODULE *, ___md, a0,\
	, AMISSL_BASE_NAME)

#define CONF_imodule_get_value(___md) \
	LP1(0xbb2, const char *, CONF_imodule_get_value , const CONF_IMODULE *, ___md, a0,\
	, AMISSL_BASE_NAME)

#define CONF_imodule_get_usr_data(___md) \
	LP1(0xbb8, void *, CONF_imodule_get_usr_data , const CONF_IMODULE *, ___md, a0,\
	, AMISSL_BASE_NAME)

#define CONF_imodule_set_usr_data(___md, ___usr_data) \
	LP2NR(0xbbe, CONF_imodule_set_usr_data , CONF_IMODULE *, ___md, a0, void *, ___usr_data, a1,\
	, AMISSL_BASE_NAME)

#define CONF_imodule_get_module(___md) \
	LP1(0xbc4, CONF_MODULE *, CONF_imodule_get_module , const CONF_IMODULE *, ___md, a0,\
	, AMISSL_BASE_NAME)

#define CONF_imodule_get_flags(___md) \
	LP1(0xbca, unsigned long, CONF_imodule_get_flags , const CONF_IMODULE *, ___md, a0,\
	, AMISSL_BASE_NAME)

#define CONF_imodule_set_flags(___md, ___flags) \
	LP2NR(0xbd0, CONF_imodule_set_flags , CONF_IMODULE *, ___md, a0, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CONF_module_get_usr_data(___pmod) \
	LP1(0xbd6, void *, CONF_module_get_usr_data , CONF_MODULE *, ___pmod, a0,\
	, AMISSL_BASE_NAME)

#define CONF_module_set_usr_data(___pmod, ___usr_data) \
	LP2NR(0xbdc, CONF_module_set_usr_data , CONF_MODULE *, ___pmod, a0, void *, ___usr_data, a1,\
	, AMISSL_BASE_NAME)

#define CONF_get1_default_config_file() \
	LP0(0xbe2, char *, CONF_get1_default_config_file ,\
	, AMISSL_BASE_NAME)

#define CONF_parse_list(___list, ___sep, ___nospc, ___list_cb, ___arg) \
	LP5FP(0xbe8, int, CONF_parse_list , const char *, ___list, a0, int, ___sep, d0, int, ___nospc, d1, __fpt, ___list_cb, a1, void *, ___arg, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(const char *elem,int len,void *usr))

#define OPENSSL_load_builtin_modules() \
	LP0NR(0xbee, OPENSSL_load_builtin_modules ,\
	, AMISSL_BASE_NAME)

#define ERR_load_CONF_strings() \
	LP0NR(0xbf4, ERR_load_CONF_strings ,\
	, AMISSL_BASE_NAME)

#define _CONF_new_section(___conf, ___section) \
	LP2(0xbfa, CONF_VALUE *, _CONF_new_section , CONF *, ___conf, a0, const char *, ___section, a1,\
	, AMISSL_BASE_NAME)

#define _CONF_get_section(___conf, ___section) \
	LP2(0xc00, CONF_VALUE *, _CONF_get_section , const CONF *, ___conf, a0, const char *, ___section, a1,\
	, AMISSL_BASE_NAME)

#define _CONF_get_section_values(___conf, ___section) \
	LP2(0xc06, STACK_OF(CONF_VALUE) *, _CONF_get_section_values , const CONF *, ___conf, a0, const char *, ___section, a1,\
	, AMISSL_BASE_NAME)

#define _CONF_add_string(___conf, ___section, ___value) \
	LP3(0xc0c, int, _CONF_add_string , CONF *, ___conf, a0, CONF_VALUE *, ___section, a1, CONF_VALUE *, ___value, a2,\
	, AMISSL_BASE_NAME)

#define _CONF_get_string(___conf, ___section, ___name) \
	LP3(0xc12, char *, _CONF_get_string , const CONF *, ___conf, a0, const char *, ___section, a1, const char *, ___name, a2,\
	, AMISSL_BASE_NAME)

#define _CONF_new_data(___conf) \
	LP1(0xc18, int, _CONF_new_data , CONF *, ___conf, a0,\
	, AMISSL_BASE_NAME)

#define _CONF_free_data(___conf) \
	LP1NR(0xc1e, _CONF_free_data , CONF *, ___conf, a0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_mem_ctrl(___mode) \
	LP1(0xc24, int, CRYPTO_mem_ctrl , int, ___mode, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_is_mem_check_on() \
	LP0(0xc2a, int, CRYPTO_is_mem_check_on ,\
	, AMISSL_BASE_NAME)

#define SSLeay_version(___type) \
	LP1(0xc30, const char *, SSLeay_version , int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define SSLeay() \
	LP0(0xc36, unsigned long, SSLeay ,\
	, AMISSL_BASE_NAME)

#define OPENSSL_issetugid() \
	LP0(0xc3c, int, OPENSSL_issetugid ,\
	, AMISSL_BASE_NAME)

#define CRYPTO_get_ex_data_implementation() \
	LP0(0xc42, const CRYPTO_EX_DATA_IMPL *, CRYPTO_get_ex_data_implementation ,\
	, AMISSL_BASE_NAME)

#define CRYPTO_set_ex_data_implementation(___i) \
	LP1(0xc48, int, CRYPTO_set_ex_data_implementation , const CRYPTO_EX_DATA_IMPL *, ___i, a0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_ex_data_new_class() \
	LP0(0xc4e, int, CRYPTO_ex_data_new_class ,\
	, AMISSL_BASE_NAME)

#define CRYPTO_get_ex_new_index(___class_index, ___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP6(0xc54, int, CRYPTO_get_ex_new_index , int, ___class_index, d0, long, ___argl, d1, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define CRYPTO_new_ex_data(___class_index, ___obj, ___ad) \
	LP3(0xc5a, int, CRYPTO_new_ex_data , int, ___class_index, d0, void *, ___obj, a0, CRYPTO_EX_DATA *, ___ad, a1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_dup_ex_data(___class_index, ___to, ___from) \
	LP3(0xc60, int, CRYPTO_dup_ex_data , int, ___class_index, d0, CRYPTO_EX_DATA *, ___to, a0, CRYPTO_EX_DATA *, ___from, a1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_free_ex_data(___class_index, ___obj, ___ad) \
	LP3NR(0xc66, CRYPTO_free_ex_data , int, ___class_index, d0, void *, ___obj, a0, CRYPTO_EX_DATA *, ___ad, a1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_set_ex_data(___ad, ___idx, ___val) \
	LP3(0xc6c, int, CRYPTO_set_ex_data , CRYPTO_EX_DATA *, ___ad, a0, int, ___idx, d0, void *, ___val, a1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_get_ex_data(___ad, ___idx) \
	LP2(0xc72, void *, CRYPTO_get_ex_data , const CRYPTO_EX_DATA *, ___ad, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_cleanup_all_ex_data() \
	LP0NR(0xc78, CRYPTO_cleanup_all_ex_data ,\
	, AMISSL_BASE_NAME)

#define CRYPTO_get_new_lockid(___name) \
	LP1(0xc7e, int, CRYPTO_get_new_lockid , char *, ___name, a0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_num_locks() \
	LP0(0xc84, int, CRYPTO_num_locks ,\
	, AMISSL_BASE_NAME)

#define CRYPTO_lock(___mode, ___type, ___file, ___line) \
	LP4NR(0xc8a, CRYPTO_lock , int, ___mode, d0, int, ___type, d1, const char *, ___file, a0, int, ___line, d2,\
	, AMISSL_BASE_NAME)

#define CRYPTO_set_locking_callback(___func) \
	LP1NRFP(0xc90, CRYPTO_set_locking_callback , __fpt, ___func, a0,\
	, AMISSL_BASE_NAME, void (*__fpt)(int mode,int type,const char *file,int line))

#define CRYPTO_get_locking_callback() \
	LP0FR(0xc96, __fpr, CRYPTO_get_locking_callback ,\
	, AMISSL_BASE_NAME, void (*__fpr)(int mode, int type, const char *file, int line))

#define CRYPTO_set_add_lock_callback(___func) \
	LP1NRFP(0xc9c, CRYPTO_set_add_lock_callback , __fpt, ___func, a0,\
	, AMISSL_BASE_NAME, int (*__fpt)(int *num,int mount,int type,const char *file,int line))

#define CRYPTO_get_add_lock_callback() \
	LP0FR(0xca2, __fpr, CRYPTO_get_add_lock_callback ,\
	, AMISSL_BASE_NAME, int (*__fpr)(int *num, int mount, int type, const char *file, int line))

#define CRYPTO_set_id_callback(___func) \
	LP1NRFP(0xca8, CRYPTO_set_id_callback , __fpt, ___func, a0,\
	, AMISSL_BASE_NAME, unsigned long (*__fpt)(void))

#define CRYPTO_get_id_callback() \
	LP0FR(0xcae, __fpr, CRYPTO_get_id_callback ,\
	, AMISSL_BASE_NAME, unsigned long (*__fpr)(void))

#define CRYPTO_thread_id() \
	LP0(0xcb4, unsigned long, CRYPTO_thread_id ,\
	, AMISSL_BASE_NAME)

#define CRYPTO_get_lock_name(___type) \
	LP1(0xcba, const char *, CRYPTO_get_lock_name , int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_add_lock(___pointer, ___amount, ___type, ___file, ___line) \
	LP5(0xcc0, int, CRYPTO_add_lock , int *, ___pointer, a0, int, ___amount, d0, int, ___type, d1, const char *, ___file, a1, int, ___line, d2,\
	, AMISSL_BASE_NAME)

#define CRYPTO_get_new_dynlockid() \
	LP0(0xcc6, int, CRYPTO_get_new_dynlockid ,\
	, AMISSL_BASE_NAME)

#define CRYPTO_destroy_dynlockid(___i) \
	LP1NR(0xccc, CRYPTO_destroy_dynlockid , int, ___i, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_get_dynlock_value(___i) \
	LP1(0xcd2, struct CRYPTO_dynlock_value *, CRYPTO_get_dynlock_value , int, ___i, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_set_dynlock_create_callback(___dyn_create_function) \
	LP1NRFP(0xcd8, CRYPTO_set_dynlock_create_callback , __fpt, ___dyn_create_function, a0,\
	, AMISSL_BASE_NAME, struct CRYPTO_dynlock_value * (*__fpt)(const char *file,int line))

#define CRYPTO_set_dynlock_lock_callback(___dyn_lock_function) \
	LP1NRFP(0xcde, CRYPTO_set_dynlock_lock_callback , __fpt, ___dyn_lock_function, a0,\
	, AMISSL_BASE_NAME, void (*__fpt)(int mode,struct CRYPTO_dynlock_value *l,const char *file,int line))

#define CRYPTO_set_dynlock_destroy_callback(___dyn_destroy_function) \
	LP1NRFP(0xce4, CRYPTO_set_dynlock_destroy_callback , __fpt, ___dyn_destroy_function, a0,\
	, AMISSL_BASE_NAME, void (*__fpt)(struct CRYPTO_dynlock_value *l,const char *file,int line))

#define CRYPTO_get_dynlock_create_callback() \
	LP0FR(0xcea, __fpr, CRYPTO_get_dynlock_create_callback ,\
	, AMISSL_BASE_NAME, struct CRYPTO_dynlock_value * (*__fpr)(const char *file, int line))

#define CRYPTO_get_dynlock_lock_callback() \
	LP0FR(0xcf0, __fpr, CRYPTO_get_dynlock_lock_callback ,\
	, AMISSL_BASE_NAME, void (*__fpr)(int mode, struct CRYPTO_dynlock_value *l, const char *file, int line))

#define CRYPTO_get_dynlock_destroy_callback() \
	LP0FR(0xcf6, __fpr, CRYPTO_get_dynlock_destroy_callback ,\
	, AMISSL_BASE_NAME, void (*__fpr)(struct CRYPTO_dynlock_value *l, const char *file, int line))

#define CRYPTO_set_mem_functions(___m, ___r, ___f) \
	LP3FP(0xcfc, int, CRYPTO_set_mem_functions , __fpt, ___m, a0, __fpt, ___r, a1, __fpt, ___f, a2,\
	, AMISSL_BASE_NAME, void * (*__fpt)(size_t))

#define CRYPTO_set_locked_mem_functions(___m, ___free_func) \
	LP2FP(0xd02, int, CRYPTO_set_locked_mem_functions , __fpt, ___m, a0, __fpt, ___free_func, a1,\
	, AMISSL_BASE_NAME, void * (*__fpt)(size_t))

#define CRYPTO_set_mem_ex_functions(___m, ___r, ___f) \
	LP3FP(0xd08, int, CRYPTO_set_mem_ex_functions , __fpt, ___m, a0, __fpt, ___r, a1, __fpt, ___f, a2,\
	, AMISSL_BASE_NAME, void * (*__fpt)(size_t,const char *,int))

#define CRYPTO_set_locked_mem_ex_functions(___m, ___free_func) \
	LP2FP(0xd0e, int, CRYPTO_set_locked_mem_ex_functions , __fpt, ___m, a0, __fpt, ___free_func, a1,\
	, AMISSL_BASE_NAME, void * (*__fpt)(size_t,const char *,int))

#define CRYPTO_set_mem_debug_functions(___m, ___r, ___f, ___so, ___go) \
	LP5FP(0xd14, int, CRYPTO_set_mem_debug_functions , __fpt, ___m, a0, __fpt, ___r, a1, __fpt, ___f, a2, __fpt, ___so, a3, __fpt, ___go, d0,\
	, AMISSL_BASE_NAME, void (*__fpt)(void *,int,const char *,int,int))

#define CRYPTO_get_mem_functions(___m, ___r, ___f) \
	LP3NRFP(0xd1a, CRYPTO_get_mem_functions , __fpt, ___m, a0, __fpt, ___r, a1, __fpt, ___f, a2,\
	, AMISSL_BASE_NAME, void * (*__fpt)(size_t))

#define CRYPTO_get_locked_mem_functions(___m, ___f) \
	LP2NRFP(0xd20, CRYPTO_get_locked_mem_functions , __fpt, ___m, a0, __fpt, ___f, a1,\
	, AMISSL_BASE_NAME, void * (*__fpt)(size_t))

#define CRYPTO_get_mem_ex_functions(___m, ___r, ___f) \
	LP3NRFP(0xd26, CRYPTO_get_mem_ex_functions , __fpt, ___m, a0, __fpt, ___r, a1, __fpt, ___f, a2,\
	, AMISSL_BASE_NAME, void * (*__fpt)(size_t,const char *,int))

#define CRYPTO_get_locked_mem_ex_functions(___m, ___f) \
	LP2NRFP(0xd2c, CRYPTO_get_locked_mem_ex_functions , __fpt, ___m, a0, __fpt, ___f, a1,\
	, AMISSL_BASE_NAME, void * (*__fpt)(size_t,const char *,int))

#define CRYPTO_get_mem_debug_functions(___m, ___r, ___f, ___so, ___go) \
	LP5NRFP(0xd32, CRYPTO_get_mem_debug_functions , __fpt, ___m, a0, __fpt, ___r, a1, __fpt, ___f, a2, __fpt, ___so, a3, __fpt, ___go, d0,\
	, AMISSL_BASE_NAME, void (*__fpt)(void *,int,const char *,int,int))

#define CRYPTO_malloc_locked(___num, ___file, ___line) \
	LP3(0xd38, void *, CRYPTO_malloc_locked , int, ___num, d0, const char *, ___file, a0, int, ___line, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_free_locked(___a) \
	LP1NR(0xd3e, CRYPTO_free_locked , void *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_malloc(___num, ___file, ___line) \
	LP3(0xd44, void *, CRYPTO_malloc , int, ___num, d0, const char *, ___file, a0, int, ___line, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_free(___a) \
	LP1NR(0xd4a, CRYPTO_free , void *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_realloc(___addr, ___num, ___file, ___line) \
	LP4(0xd50, void *, CRYPTO_realloc , void *, ___addr, a0, int, ___num, d0, const char *, ___file, a1, int, ___line, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_realloc_clean(___addr, ___old_num, ___num, ___file, ___line) \
	LP5(0xd56, void *, CRYPTO_realloc_clean , void *, ___addr, a0, int, ___old_num, d0, int, ___num, d1, const char *, ___file, a1, int, ___line, d2,\
	, AMISSL_BASE_NAME)

#define CRYPTO_remalloc(___addr, ___num, ___file, ___line) \
	LP4(0xd5c, void *, CRYPTO_remalloc , void *, ___addr, a0, int, ___num, d0, const char *, ___file, a1, int, ___line, d1,\
	, AMISSL_BASE_NAME)

#define OPENSSL_cleanse(___ptr, ___len) \
	LP2NR(0xd62, OPENSSL_cleanse , void *, ___ptr, a0, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_set_mem_debug_options(___bits) \
	LP1NR(0xd68, CRYPTO_set_mem_debug_options , long, ___bits, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_get_mem_debug_options() \
	LP0(0xd6e, long, CRYPTO_get_mem_debug_options ,\
	, AMISSL_BASE_NAME)

#define CRYPTO_push_info_(___info, ___file, ___line) \
	LP3(0xd74, int, CRYPTO_push_info_ , const char *, ___info, a0, const char *, ___file, a1, int, ___line, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_pop_info() \
	LP0(0xd7a, int, CRYPTO_pop_info ,\
	, AMISSL_BASE_NAME)

#define CRYPTO_remove_all_info() \
	LP0(0xd80, int, CRYPTO_remove_all_info ,\
	, AMISSL_BASE_NAME)

#define CRYPTO_dbg_malloc(___addr, ___num, ___file, ___line, ___before_p) \
	LP5NR(0xd86, CRYPTO_dbg_malloc , void *, ___addr, a0, int, ___num, d0, const char *, ___file, a1, int, ___line, d1, int, ___before_p, d2,\
	, AMISSL_BASE_NAME)

#define CRYPTO_dbg_realloc(___addr1, ___addr2, ___num, ___file, ___line, ___before_p) \
	LP6NR(0xd8c, CRYPTO_dbg_realloc , void *, ___addr1, a0, void *, ___addr2, a1, int, ___num, d0, const char *, ___file, a2, int, ___line, d1, int, ___before_p, d2,\
	, AMISSL_BASE_NAME)

#define CRYPTO_dbg_free(___addr, ___before_p) \
	LP2NR(0xd92, CRYPTO_dbg_free , void *, ___addr, a0, int, ___before_p, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_dbg_set_options(___bits) \
	LP1NR(0xd98, CRYPTO_dbg_set_options , long, ___bits, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_dbg_get_options() \
	LP0(0xd9e, long, CRYPTO_dbg_get_options ,\
	, AMISSL_BASE_NAME)

#define CRYPTO_mem_leaks(___bio) \
	LP1NR(0xda4, CRYPTO_mem_leaks , struct bio_st *, ___bio, a0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_mem_leaks_cb(___cb) \
	LP1NR(0xdaa, CRYPTO_mem_leaks_cb , CRYPTO_MEM_LEAK_CB *, ___cb, a0,\
	, AMISSL_BASE_NAME)

#define OpenSSLDie(___file, ___line, ___assertion) \
	LP3NR(0xdb0, OpenSSLDie , const char *, ___file, a0, int, ___line, d0, const char *, ___assertion, a1,\
	, AMISSL_BASE_NAME)

#define ERR_load_CRYPTO_strings() \
	LP0NR(0xdb6, ERR_load_CRYPTO_strings ,\
	, AMISSL_BASE_NAME)

#define DSO_new() \
	LP0(0xdbc, DSO *, DSO_new ,\
	, AMISSL_BASE_NAME)

#define DSO_new_method(___method) \
	LP1(0xdc2, DSO *, DSO_new_method , DSO_METHOD *, ___method, a0,\
	, AMISSL_BASE_NAME)

#define DSO_free(___dso) \
	LP1(0xdc8, int, DSO_free , DSO *, ___dso, a0,\
	, AMISSL_BASE_NAME)

#define DSO_flags(___dso) \
	LP1(0xdce, int, DSO_flags , DSO *, ___dso, a0,\
	, AMISSL_BASE_NAME)

#define DSO_up_ref(___dso) \
	LP1(0xdd4, int, DSO_up_ref , DSO *, ___dso, a0,\
	, AMISSL_BASE_NAME)

#define DSO_ctrl(___dso, ___cmd, ___larg, ___parg) \
	LP4(0xdda, long, DSO_ctrl , DSO *, ___dso, a0, int, ___cmd, d0, long, ___larg, d1, void *, ___parg, a1,\
	, AMISSL_BASE_NAME)

#define DSO_set_name_converter(___dso, ___cb, ___oldcb) \
	LP3(0xde0, int, DSO_set_name_converter , DSO *, ___dso, a0, DSO_NAME_CONVERTER_FUNC, ___cb, d0, DSO_NAME_CONVERTER_FUNC *, ___oldcb, a1,\
	, AMISSL_BASE_NAME)

#define DSO_get_filename(___dso) \
	LP1(0xde6, const char *, DSO_get_filename , DSO *, ___dso, a0,\
	, AMISSL_BASE_NAME)

#define DSO_set_filename(___dso, ___filename) \
	LP2(0xdec, int, DSO_set_filename , DSO *, ___dso, a0, const char *, ___filename, a1,\
	, AMISSL_BASE_NAME)

#define DSO_convert_filename(___dso, ___filename) \
	LP2(0xdf2, char *, DSO_convert_filename , DSO *, ___dso, a0, const char *, ___filename, a1,\
	, AMISSL_BASE_NAME)

#define DSO_get_loaded_filename(___dso) \
	LP1(0xdf8, const char *, DSO_get_loaded_filename , DSO *, ___dso, a0,\
	, AMISSL_BASE_NAME)

#define DSO_set_default_method(___meth) \
	LP1NR(0xdfe, DSO_set_default_method , DSO_METHOD *, ___meth, a0,\
	, AMISSL_BASE_NAME)

#define DSO_get_default_method() \
	LP0(0xe04, DSO_METHOD *, DSO_get_default_method ,\
	, AMISSL_BASE_NAME)

#define DSO_get_method(___dso) \
	LP1(0xe0a, DSO_METHOD *, DSO_get_method , DSO *, ___dso, a0,\
	, AMISSL_BASE_NAME)

#define DSO_set_method(___dso, ___meth) \
	LP2(0xe10, DSO_METHOD *, DSO_set_method , DSO *, ___dso, a0, DSO_METHOD *, ___meth, a1,\
	, AMISSL_BASE_NAME)

#define DSO_load(___dso, ___filename, ___meth, ___flags) \
	LP4(0xe16, DSO *, DSO_load , DSO *, ___dso, a0, const char *, ___filename, a1, DSO_METHOD *, ___meth, a2, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define DSO_bind_var(___dso, ___symname) \
	LP2(0xe1c, void *, DSO_bind_var , DSO *, ___dso, a0, const char *, ___symname, a1,\
	, AMISSL_BASE_NAME)

#define DSO_bind_func(___dso, ___symname) \
	LP2(0xe22, DSO_FUNC_TYPE, DSO_bind_func , DSO *, ___dso, a0, const char *, ___symname, a1,\
	, AMISSL_BASE_NAME)

#define DSO_METHOD_openssl() \
	LP0(0xe28, DSO_METHOD *, DSO_METHOD_openssl ,\
	, AMISSL_BASE_NAME)

#define DSO_METHOD_null() \
	LP0(0xe2e, DSO_METHOD *, DSO_METHOD_null ,\
	, AMISSL_BASE_NAME)

#define DSO_METHOD_dlfcn() \
	LP0(0xe34, DSO_METHOD *, DSO_METHOD_dlfcn ,\
	, AMISSL_BASE_NAME)

#define DSO_METHOD_dl() \
	LP0(0xe3a, DSO_METHOD *, DSO_METHOD_dl ,\
	, AMISSL_BASE_NAME)

#define DSO_METHOD_win32() \
	LP0(0xe40, DSO_METHOD *, DSO_METHOD_win32 ,\
	, AMISSL_BASE_NAME)

#define DSO_METHOD_vms() \
	LP0(0xe46, DSO_METHOD *, DSO_METHOD_vms ,\
	, AMISSL_BASE_NAME)

#define ERR_load_DSO_strings() \
	LP0NR(0xe4c, ERR_load_DSO_strings ,\
	, AMISSL_BASE_NAME)

#define EC_GFp_simple_method() \
	LP0(0xe52, const EC_METHOD *, EC_GFp_simple_method ,\
	, AMISSL_BASE_NAME)

#define EC_GFp_mont_method() \
	LP0(0xe58, const EC_METHOD *, EC_GFp_mont_method ,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_new(___a) \
	LP1(0xe5e, EC_GROUP *, EC_GROUP_new , const EC_METHOD *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_free(___a) \
	LP1NR(0xe64, EC_GROUP_free , EC_GROUP *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_clear_free(___a) \
	LP1NR(0xe6a, EC_GROUP_clear_free , EC_GROUP *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_copy(___a, ___b) \
	LP2(0xe70, int, EC_GROUP_copy , EC_GROUP *, ___a, a0, const EC_GROUP *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_method_of(___a) \
	LP1(0xe76, const EC_METHOD *, EC_GROUP_method_of , const EC_GROUP *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_set_curve_GFp(___a1, ___p, ___a, ___b, ___a2) \
	LP5(0xe7c, int, EC_GROUP_set_curve_GFp , EC_GROUP *, ___a1, a0, const BIGNUM *, ___p, a1, const BIGNUM *, ___a, a2, const BIGNUM *, ___b, a3, BN_CTX *, ___a2, d0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get_curve_GFp(___a1, ___p, ___a, ___b, ___a2) \
	LP5(0xe82, int, EC_GROUP_get_curve_GFp , const EC_GROUP *, ___a1, a0, BIGNUM *, ___p, a1, BIGNUM *, ___a, a2, BIGNUM *, ___b, a3, BN_CTX *, ___a2, d0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_new_curve_GFp(___p, ___a, ___b, ___a1) \
	LP4(0xe88, EC_GROUP *, EC_GROUP_new_curve_GFp , const BIGNUM *, ___p, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, BN_CTX *, ___a1, a3,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_set_generator(___a1, ___generator, ___order, ___cofactor) \
	LP4(0xe8e, int, EC_GROUP_set_generator , EC_GROUP *, ___a1, a0, const EC_POINT *, ___generator, a1, const BIGNUM *, ___order, a2, const BIGNUM *, ___cofactor, a3,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get0_generator(___a1) \
	LP1(0xe94, const EC_POINT *, EC_GROUP_get0_generator , const EC_GROUP *, ___a1, a0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get_order(___a1, ___order, ___a2) \
	LP3(0xe9a, int, EC_GROUP_get_order , const EC_GROUP *, ___a1, a0, BIGNUM *, ___order, a1, BN_CTX *, ___a2, a2,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get_cofactor(___a1, ___cofactor, ___a2) \
	LP3(0xea0, int, EC_GROUP_get_cofactor , const EC_GROUP *, ___a1, a0, BIGNUM *, ___cofactor, a1, BN_CTX *, ___a2, a2,\
	, AMISSL_BASE_NAME)

#define EC_POINT_new(___a) \
	LP1(0xea6, EC_POINT *, EC_POINT_new , const EC_GROUP *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_free(___a) \
	LP1NR(0xeac, EC_POINT_free , EC_POINT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_clear_free(___a) \
	LP1NR(0xeb2, EC_POINT_clear_free , EC_POINT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_copy(___a, ___b) \
	LP2(0xeb8, int, EC_POINT_copy , EC_POINT *, ___a, a0, const EC_POINT *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define EC_POINT_method_of(___a) \
	LP1(0xebe, const EC_METHOD *, EC_POINT_method_of , const EC_POINT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_set_to_infinity(___a, ___b) \
	LP2(0xec4, int, EC_POINT_set_to_infinity , const EC_GROUP *, ___a, a0, EC_POINT *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define EC_POINT_set_Jprojective_coordinates_GFp(___a1, ___a2, ___x, ___y, ___z, ___a3) \
	LP6(0xeca, int, EC_POINT_set_Jprojective_coordinates_GFp , const EC_GROUP *, ___a1, a0, EC_POINT *, ___a2, a1, const BIGNUM *, ___x, a2, const BIGNUM *, ___y, a3, const BIGNUM *, ___z, d0, BN_CTX *, ___a3, d1,\
	, AMISSL_BASE_NAME)

#define EC_POINT_get_Jprojective_coordinates_GFp(___a1, ___a2, ___x, ___y, ___z, ___a3) \
	LP6(0xed0, int, EC_POINT_get_Jprojective_coordinates_GFp , const EC_GROUP *, ___a1, a0, const EC_POINT *, ___a2, a1, BIGNUM *, ___x, a2, BIGNUM *, ___y, a3, BIGNUM *, ___z, d0, BN_CTX *, ___a3, d1,\
	, AMISSL_BASE_NAME)

#define EC_POINT_set_affine_coordinates_GFp(___a1, ___a2, ___x, ___y, ___a3) \
	LP5(0xed6, int, EC_POINT_set_affine_coordinates_GFp , const EC_GROUP *, ___a1, a0, EC_POINT *, ___a2, a1, const BIGNUM *, ___x, a2, const BIGNUM *, ___y, a3, BN_CTX *, ___a3, d0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_get_affine_coordinates_GFp(___a1, ___a2, ___x, ___y, ___a3) \
	LP5(0xedc, int, EC_POINT_get_affine_coordinates_GFp , const EC_GROUP *, ___a1, a0, const EC_POINT *, ___a2, a1, BIGNUM *, ___x, a2, BIGNUM *, ___y, a3, BN_CTX *, ___a3, d0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_set_compressed_coordinates_GFp(___a1, ___a2, ___x, ___y_bit, ___a3) \
	LP5(0xee2, int, EC_POINT_set_compressed_coordinates_GFp , const EC_GROUP *, ___a1, a0, EC_POINT *, ___a2, a1, const BIGNUM *, ___x, a2, int, ___y_bit, d0, BN_CTX *, ___a3, a3,\
	, AMISSL_BASE_NAME)

#define EC_POINT_point2oct(___a1, ___a2, ___form, ___buf, ___len, ___a3) \
	LP6(0xee8, size_t, EC_POINT_point2oct , const EC_GROUP *, ___a1, a0, const EC_POINT *, ___a2, a1, point_conversion_form_t, ___form, d0, unsigned char *, ___buf, a2, size_t, ___len, d1, BN_CTX *, ___a3, a3,\
	, AMISSL_BASE_NAME)

#define EC_POINT_oct2point(___a1, ___a2, ___buf, ___len, ___a3) \
	LP5(0xeee, int, EC_POINT_oct2point , const EC_GROUP *, ___a1, a0, EC_POINT *, ___a2, a1, const unsigned char *, ___buf, a2, size_t, ___len, d0, BN_CTX *, ___a3, a3,\
	, AMISSL_BASE_NAME)

#define EC_POINT_add(___a1, ___r, ___a, ___b, ___a2) \
	LP5(0xef4, int, EC_POINT_add , const EC_GROUP *, ___a1, a0, EC_POINT *, ___r, a1, const EC_POINT *, ___a, a2, const EC_POINT *, ___b, a3, BN_CTX *, ___a2, d0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_dbl(___a1, ___r, ___a, ___a2) \
	LP4(0xefa, int, EC_POINT_dbl , const EC_GROUP *, ___a1, a0, EC_POINT *, ___r, a1, const EC_POINT *, ___a, a2, BN_CTX *, ___a2, a3,\
	, AMISSL_BASE_NAME)

#define EC_POINT_invert(___a1, ___a2, ___a3) \
	LP3(0xf00, int, EC_POINT_invert , const EC_GROUP *, ___a1, a0, EC_POINT *, ___a2, a1, BN_CTX *, ___a3, a2,\
	, AMISSL_BASE_NAME)

#define EC_POINT_is_at_infinity(___a, ___b) \
	LP2(0xf06, int, EC_POINT_is_at_infinity , const EC_GROUP *, ___a, a0, const EC_POINT *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define EC_POINT_is_on_curve(___a, ___b, ___c) \
	LP3(0xf0c, int, EC_POINT_is_on_curve , const EC_GROUP *, ___a, a0, const EC_POINT *, ___b, a1, BN_CTX *, ___c, a2,\
	, AMISSL_BASE_NAME)

#define EC_POINT_cmp(___a1, ___a, ___b, ___a2) \
	LP4(0xf12, int, EC_POINT_cmp , const EC_GROUP *, ___a1, a0, const EC_POINT *, ___a, a1, const EC_POINT *, ___b, a2, BN_CTX *, ___a2, a3,\
	, AMISSL_BASE_NAME)

#define EC_POINT_make_affine(___a, ___b, ___c) \
	LP3(0xf18, int, EC_POINT_make_affine , const EC_GROUP *, ___a, a0, EC_POINT *, ___b, a1, BN_CTX *, ___c, a2,\
	, AMISSL_BASE_NAME)

#define EC_POINTs_make_affine(___a1, ___num, ___a2, ___a3) \
	LP4(0xf1e, int, EC_POINTs_make_affine , const EC_GROUP *, ___a1, a0, size_t, ___num, d0, EC_POINT **, ___a2, a1, BN_CTX *, ___a3, a2,\
	, AMISSL_BASE_NAME)

#define EC_POINTs_mul(___a1, ___r, ___a2, ___num, ___a3, ___a4, ___a5) \
	LP7(0xf24, int, EC_POINTs_mul , const EC_GROUP *, ___a1, a0, EC_POINT *, ___r, a1, const BIGNUM *, ___a2, a2, size_t, ___num, d0, const EC_POINT **, ___a3, a3, const BIGNUM **, ___a4, d1, BN_CTX *, ___a5, d2,\
	, AMISSL_BASE_NAME)

#define EC_POINT_mul(___a1, ___r, ___a2, ___a3, ___a4, ___a5) \
	LP6(0xf2a, int, EC_POINT_mul , const EC_GROUP *, ___a1, a0, EC_POINT *, ___r, a1, const BIGNUM *, ___a2, a2, const EC_POINT *, ___a3, a3, const BIGNUM *, ___a4, d0, BN_CTX *, ___a5, d1,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_precompute_mult(___a, ___b) \
	LP2(0xf30, int, EC_GROUP_precompute_mult , EC_GROUP *, ___a, a0, BN_CTX *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define ERR_load_EC_strings() \
	LP0NR(0xf36, ERR_load_EC_strings ,\
	, AMISSL_BASE_NAME)

#define ERR_put_error(___lib, ___func, ___reason, ___file, ___line) \
	LP5NR(0xf3c, ERR_put_error , int, ___lib, d0, int, ___func, d1, int, ___reason, d2, const char *, ___file, a0, int, ___line, d3,\
	, AMISSL_BASE_NAME)

#define ERR_set_error_data(___data, ___flags) \
	LP2NR(0xf42, ERR_set_error_data , char *, ___data, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define ERR_get_error() \
	LP0(0xf48, unsigned long, ERR_get_error ,\
	, AMISSL_BASE_NAME)

#define ERR_get_error_line(___file, ___line) \
	LP2(0xf4e, unsigned long, ERR_get_error_line , const char **, ___file, a0, int *, ___line, a1,\
	, AMISSL_BASE_NAME)

#define ERR_get_error_line_data(___file, ___line, ___data, ___flags) \
	LP4(0xf54, unsigned long, ERR_get_error_line_data , const char **, ___file, a0, int *, ___line, a1, const char **, ___data, a2, int *, ___flags, a3,\
	, AMISSL_BASE_NAME)

#define ERR_peek_error() \
	LP0(0xf5a, unsigned long, ERR_peek_error ,\
	, AMISSL_BASE_NAME)

#define ERR_peek_error_line(___file, ___line) \
	LP2(0xf60, unsigned long, ERR_peek_error_line , const char **, ___file, a0, int *, ___line, a1,\
	, AMISSL_BASE_NAME)

#define ERR_peek_error_line_data(___file, ___line, ___data, ___flags) \
	LP4(0xf66, unsigned long, ERR_peek_error_line_data , const char **, ___file, a0, int *, ___line, a1, const char **, ___data, a2, int *, ___flags, a3,\
	, AMISSL_BASE_NAME)

#define ERR_peek_last_error() \
	LP0(0xf6c, unsigned long, ERR_peek_last_error ,\
	, AMISSL_BASE_NAME)

#define ERR_peek_last_error_line(___file, ___line) \
	LP2(0xf72, unsigned long, ERR_peek_last_error_line , const char **, ___file, a0, int *, ___line, a1,\
	, AMISSL_BASE_NAME)

#define ERR_peek_last_error_line_data(___file, ___line, ___data, ___flags) \
	LP4(0xf78, unsigned long, ERR_peek_last_error_line_data , const char **, ___file, a0, int *, ___line, a1, const char **, ___data, a2, int *, ___flags, a3,\
	, AMISSL_BASE_NAME)

#define ERR_clear_error() \
	LP0NR(0xf7e, ERR_clear_error ,\
	, AMISSL_BASE_NAME)

#define ERR_error_string(___e, ___buf) \
	LP2(0xf84, char *, ERR_error_string , unsigned long, ___e, d0, char *, ___buf, a0,\
	, AMISSL_BASE_NAME)

#define ERR_error_string_n(___e, ___buf, ___len) \
	LP3NR(0xf8a, ERR_error_string_n , unsigned long, ___e, d0, char *, ___buf, a0, size_t, ___len, d1,\
	, AMISSL_BASE_NAME)

#define ERR_lib_error_string(___e) \
	LP1(0xf90, const char *, ERR_lib_error_string , unsigned long, ___e, d0,\
	, AMISSL_BASE_NAME)

#define ERR_func_error_string(___e) \
	LP1(0xf96, const char *, ERR_func_error_string , unsigned long, ___e, d0,\
	, AMISSL_BASE_NAME)

#define ERR_reason_error_string(___e) \
	LP1(0xf9c, const char *, ERR_reason_error_string , unsigned long, ___e, d0,\
	, AMISSL_BASE_NAME)

#define ERR_print_errors_cb(___cb, ___u) \
	LP2NRFP(0xfa2, ERR_print_errors_cb , __fpt, ___cb, a0, void *, ___u, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(const char *str,size_t len,void *u))

#define ERR_print_errors(___bp) \
	LP1NR(0xfa8, ERR_print_errors , BIO *, ___bp, a0,\
	, AMISSL_BASE_NAME)

#define ERR_add_error_vdata(___num, ___args) \
	LP2NR(0xfae, ERR_add_error_vdata , int, ___num, d0, va_list, ___args, a0,\
	, AMISSL_BASE_NAME)

#ifndef NO_INLINE_VARARGS
#define ERR_add_error_data(___num, ___dummy, ...) \
	({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; ERR_add_error_vdata((___num), (va_list) _message); })
#endif /* !NO_INLINE_VARARGS */

#define ERR_load_strings(___lib, ___str) \
	LP2NR(0xfb4, ERR_load_strings , int, ___lib, d0, ERR_STRING_DATA *, ___str, a0,\
	, AMISSL_BASE_NAME)

#define ERR_unload_strings(___lib, ___str) \
	LP2NR(0xfba, ERR_unload_strings , int, ___lib, d0, ERR_STRING_DATA *, ___str, a0,\
	, AMISSL_BASE_NAME)

#define ERR_load_ERR_strings() \
	LP0NR(0xfc0, ERR_load_ERR_strings ,\
	, AMISSL_BASE_NAME)

#define ERR_load_crypto_strings() \
	LP0NR(0xfc6, ERR_load_crypto_strings ,\
	, AMISSL_BASE_NAME)

#define ERR_free_strings() \
	LP0NR(0xfcc, ERR_free_strings ,\
	, AMISSL_BASE_NAME)

#define ERR_remove_state(___pid) \
	LP1NR(0xfd2, ERR_remove_state , unsigned long, ___pid, d0,\
	, AMISSL_BASE_NAME)

#define ERR_get_state() \
	LP0(0xfd8, ERR_STATE *, ERR_get_state ,\
	, AMISSL_BASE_NAME)

#define ERR_get_string_table() \
	LP0(0xfde, LHASH_OF(ERR_STRING_DATA) *, ERR_get_string_table ,\
	, AMISSL_BASE_NAME)

#define ERR_get_err_state_table() \
	LP0(0xfe4, LHASH_OF(ERR_STATE) *, ERR_get_err_state_table ,\
	, AMISSL_BASE_NAME)

#define ERR_release_err_state_table(___hash) \
	LP1NR(0xfea, ERR_release_err_state_table , LHASH_OF(ERR_STATE) **, ___hash, a0,\
	, AMISSL_BASE_NAME)

#define ERR_get_next_error_library() \
	LP0(0xff0, int, ERR_get_next_error_library ,\
	, AMISSL_BASE_NAME)

#define ERR_get_implementation() \
	LP0(0xff6, const ERR_FNS *, ERR_get_implementation ,\
	, AMISSL_BASE_NAME)

#define ERR_set_implementation(___fns) \
	LP1(0xffc, int, ERR_set_implementation , const ERR_FNS *, ___fns, a0,\
	, AMISSL_BASE_NAME)

#define EVP_MD_CTX_init(___ctx) \
	LP1NR(0x1002, EVP_MD_CTX_init , EVP_MD_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_MD_CTX_cleanup(___ctx) \
	LP1(0x1008, int, EVP_MD_CTX_cleanup , EVP_MD_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_MD_CTX_create() \
	LP0(0x100e, EVP_MD_CTX *, EVP_MD_CTX_create ,\
	, AMISSL_BASE_NAME)

#define EVP_MD_CTX_destroy(___ctx) \
	LP1NR(0x1014, EVP_MD_CTX_destroy , EVP_MD_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_MD_CTX_copy_ex(___out, ___in) \
	LP2(0x101a, int, EVP_MD_CTX_copy_ex , EVP_MD_CTX *, ___out, a0, const EVP_MD_CTX *, ___in, a1,\
	, AMISSL_BASE_NAME)

#define EVP_DigestInit_ex(___ctx, ___type, ___impl) \
	LP3(0x1020, int, EVP_DigestInit_ex , EVP_MD_CTX *, ___ctx, a0, const EVP_MD *, ___type, a1, ENGINE *, ___impl, a2,\
	, AMISSL_BASE_NAME)

#define EVP_DigestUpdate(___ctx, ___d, ___cnt) \
	LP3(0x1026, int, EVP_DigestUpdate , EVP_MD_CTX *, ___ctx, a0, const void *, ___d, a1, unsigned int, ___cnt, d0,\
	, AMISSL_BASE_NAME)

#define EVP_DigestFinal_ex(___ctx, ___md, ___s) \
	LP3(0x102c, int, EVP_DigestFinal_ex , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___md, a1, unsigned int *, ___s, a2,\
	, AMISSL_BASE_NAME)

#define EVP_Digest(___data, ___count, ___md, ___size, ___type, ___impl) \
	LP6(0x1032, int, EVP_Digest , void *, ___data, a0, unsigned int, ___count, d0, unsigned char *, ___md, a1, unsigned int *, ___size, a2, const EVP_MD *, ___type, a3, ENGINE *, ___impl, d1,\
	, AMISSL_BASE_NAME)

#define EVP_MD_CTX_copy(___out, ___in) \
	LP2(0x1038, int, EVP_MD_CTX_copy , EVP_MD_CTX *, ___out, a0, const EVP_MD_CTX *, ___in, a1,\
	, AMISSL_BASE_NAME)

#define EVP_DigestInit(___ctx, ___type) \
	LP2(0x103e, int, EVP_DigestInit , EVP_MD_CTX *, ___ctx, a0, const EVP_MD *, ___type, a1,\
	, AMISSL_BASE_NAME)

#define EVP_DigestFinal(___ctx, ___md, ___s) \
	LP3(0x1044, int, EVP_DigestFinal , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___md, a1, unsigned int *, ___s, a2,\
	, AMISSL_BASE_NAME)

#define EVP_read_pw_string(___buf, ___length, ___prompt, ___verify) \
	LP4(0x104a, int, EVP_read_pw_string , char *, ___buf, a0, int, ___length, d0, const char *, ___prompt, a1, int, ___verify, d1,\
	, AMISSL_BASE_NAME)

#define EVP_set_pw_prompt(___prompt) \
	LP1NR(0x1050, EVP_set_pw_prompt , char *, ___prompt, a0,\
	, AMISSL_BASE_NAME)

#define EVP_get_pw_prompt() \
	LP0(0x1056, char *, EVP_get_pw_prompt ,\
	, AMISSL_BASE_NAME)

#define EVP_BytesToKey(___type, ___md, ___salt, ___data, ___datal, ___count, ___key, ___iv) \
	LP8(0x105c, int, EVP_BytesToKey , const EVP_CIPHER *, ___type, a0, const EVP_MD *, ___md, a1, const unsigned char *, ___salt, a2, const unsigned char *, ___data, a3, int, ___datal, d0, int, ___count, d1, unsigned char *, ___key, d2, unsigned char *, ___iv, d3,\
	, AMISSL_BASE_NAME)

#define EVP_EncryptInit(___ctx, ___cipher, ___key, ___iv) \
	LP4(0x1062, int, EVP_EncryptInit , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, const unsigned char *, ___iv, a3,\
	, AMISSL_BASE_NAME)

#define EVP_EncryptInit_ex(___ctx, ___cipher, ___impl, ___key, ___iv) \
	LP5(0x1068, int, EVP_EncryptInit_ex , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, ENGINE *, ___impl, a2, const unsigned char *, ___key, a3, const unsigned char *, ___iv, d0,\
	, AMISSL_BASE_NAME)

#define EVP_EncryptUpdate(___ctx, ___out, ___outl, ___in, ___inl) \
	LP5(0x106e, int, EVP_EncryptUpdate , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2, const unsigned char *, ___in, a3, int, ___inl, d0,\
	, AMISSL_BASE_NAME)

#define EVP_EncryptFinal_ex(___ctx, ___out, ___outl) \
	LP3(0x1074, int, EVP_EncryptFinal_ex , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2,\
	, AMISSL_BASE_NAME)

#define EVP_EncryptFinal(___ctx, ___out, ___outl) \
	LP3(0x107a, int, EVP_EncryptFinal , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2,\
	, AMISSL_BASE_NAME)

#define EVP_DecryptInit(___ctx, ___cipher, ___key, ___iv) \
	LP4(0x1080, int, EVP_DecryptInit , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, const unsigned char *, ___iv, a3,\
	, AMISSL_BASE_NAME)

#define EVP_DecryptInit_ex(___ctx, ___cipher, ___impl, ___key, ___iv) \
	LP5(0x1086, int, EVP_DecryptInit_ex , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, ENGINE *, ___impl, a2, const unsigned char *, ___key, a3, const unsigned char *, ___iv, d0,\
	, AMISSL_BASE_NAME)

#define EVP_DecryptUpdate(___ctx, ___out, ___outl, ___in, ___inl) \
	LP5(0x108c, int, EVP_DecryptUpdate , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2, const unsigned char *, ___in, a3, int, ___inl, d0,\
	, AMISSL_BASE_NAME)

#define EVP_DecryptFinal(___ctx, ___outm, ___outl) \
	LP3(0x1092, int, EVP_DecryptFinal , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___outm, a1, int *, ___outl, a2,\
	, AMISSL_BASE_NAME)

#define EVP_DecryptFinal_ex(___ctx, ___outm, ___outl) \
	LP3(0x1098, int, EVP_DecryptFinal_ex , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___outm, a1, int *, ___outl, a2,\
	, AMISSL_BASE_NAME)

#define EVP_CipherInit(___ctx, ___cipher, ___key, ___iv, ___enc) \
	LP5(0x109e, int, EVP_CipherInit , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, const unsigned char *, ___iv, a3, int, ___enc, d0,\
	, AMISSL_BASE_NAME)

#define EVP_CipherInit_ex(___ctx, ___cipher, ___impl, ___key, ___iv, ___enc) \
	LP6(0x10a4, int, EVP_CipherInit_ex , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, ENGINE *, ___impl, a2, const unsigned char *, ___key, a3, const unsigned char *, ___iv, d0, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define EVP_CipherUpdate(___ctx, ___out, ___outl, ___in, ___inl) \
	LP5(0x10aa, int, EVP_CipherUpdate , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2, const unsigned char *, ___in, a3, int, ___inl, d0,\
	, AMISSL_BASE_NAME)

#define EVP_CipherFinal(___ctx, ___outm, ___outl) \
	LP3(0x10b0, int, EVP_CipherFinal , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___outm, a1, int *, ___outl, a2,\
	, AMISSL_BASE_NAME)

#define EVP_CipherFinal_ex(___ctx, ___outm, ___outl) \
	LP3(0x10b6, int, EVP_CipherFinal_ex , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___outm, a1, int *, ___outl, a2,\
	, AMISSL_BASE_NAME)

#define EVP_SignFinal(___ctx, ___md, ___s, ___pkey) \
	LP4(0x10bc, int, EVP_SignFinal , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___md, a1, unsigned int *, ___s, a2, EVP_PKEY *, ___pkey, a3,\
	, AMISSL_BASE_NAME)

#define EVP_VerifyFinal(___ctx, ___sigbuf, ___siglen, ___pkey) \
	LP4(0x10c2, int, EVP_VerifyFinal , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___sigbuf, a1, unsigned int, ___siglen, d0, EVP_PKEY *, ___pkey, a2,\
	, AMISSL_BASE_NAME)

#define EVP_OpenInit(___ctx, ___type, ___ek, ___ekl, ___iv, ___priv) \
	LP6(0x10c8, int, EVP_OpenInit , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___type, a1, unsigned char *, ___ek, a2, int, ___ekl, d0, unsigned char *, ___iv, a3, EVP_PKEY *, ___priv, d1,\
	, AMISSL_BASE_NAME)

#define EVP_OpenFinal(___ctx, ___out, ___outl) \
	LP3(0x10ce, int, EVP_OpenFinal , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2,\
	, AMISSL_BASE_NAME)

#define EVP_SealInit(___ctx, ___type, ___ek, ___ekl, ___iv, ___pubk, ___npubk) \
	LP7(0x10d4, int, EVP_SealInit , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___type, a1, unsigned char **, ___ek, a2, int *, ___ekl, a3, unsigned char *, ___iv, d0, EVP_PKEY **, ___pubk, d1, int, ___npubk, d2,\
	, AMISSL_BASE_NAME)

#define EVP_SealFinal(___ctx, ___out, ___outl) \
	LP3(0x10da, int, EVP_SealFinal , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2,\
	, AMISSL_BASE_NAME)

#define EVP_EncodeInit(___ctx) \
	LP1NR(0x10e0, EVP_EncodeInit , EVP_ENCODE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_EncodeUpdate(___ctx, ___out, ___outl, ___in, ___inl) \
	LP5NR(0x10e6, EVP_EncodeUpdate , EVP_ENCODE_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2, unsigned char *, ___in, a3, int, ___inl, d0,\
	, AMISSL_BASE_NAME)

#define EVP_EncodeFinal(___ctx, ___out, ___outl) \
	LP3NR(0x10ec, EVP_EncodeFinal , EVP_ENCODE_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2,\
	, AMISSL_BASE_NAME)

#define EVP_EncodeBlock(___t, ___f, ___n) \
	LP3(0x10f2, int, EVP_EncodeBlock , unsigned char *, ___t, a0, const unsigned char *, ___f, a1, int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define EVP_DecodeInit(___ctx) \
	LP1NR(0x10f8, EVP_DecodeInit , EVP_ENCODE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_DecodeUpdate(___ctx, ___out, ___outl, ___in, ___inl) \
	LP5(0x10fe, int, EVP_DecodeUpdate , EVP_ENCODE_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2, unsigned char *, ___in, a3, int, ___inl, d0,\
	, AMISSL_BASE_NAME)

#define EVP_DecodeFinal(___ctx, ___out, ___outl) \
	LP3(0x1104, int, EVP_DecodeFinal , EVP_ENCODE_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2,\
	, AMISSL_BASE_NAME)

#define EVP_DecodeBlock(___t, ___f, ___n) \
	LP3(0x110a, int, EVP_DecodeBlock , unsigned char *, ___t, a0, const unsigned char *, ___f, a1, int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_init(___a) \
	LP1NR(0x1110, EVP_CIPHER_CTX_init , EVP_CIPHER_CTX *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_cleanup(___a) \
	LP1(0x1116, int, EVP_CIPHER_CTX_cleanup , EVP_CIPHER_CTX *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_set_key_length(___x, ___keylen) \
	LP2(0x111c, int, EVP_CIPHER_CTX_set_key_length , EVP_CIPHER_CTX *, ___x, a0, int, ___keylen, d0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_set_padding(___c, ___pad) \
	LP2(0x1122, int, EVP_CIPHER_CTX_set_padding , EVP_CIPHER_CTX *, ___c, a0, int, ___pad, d0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_ctrl(___ctx, ___type, ___arg, ___ptr) \
	LP4(0x1128, int, EVP_CIPHER_CTX_ctrl , EVP_CIPHER_CTX *, ___ctx, a0, int, ___type, d0, int, ___arg, d1, void *, ___ptr, a1,\
	, AMISSL_BASE_NAME)

#define BIO_f_md() \
	LP0(0x112e, BIO_METHOD *, BIO_f_md ,\
	, AMISSL_BASE_NAME)

#define BIO_f_base64() \
	LP0(0x1134, BIO_METHOD *, BIO_f_base64 ,\
	, AMISSL_BASE_NAME)

#define BIO_f_cipher() \
	LP0(0x113a, BIO_METHOD *, BIO_f_cipher ,\
	, AMISSL_BASE_NAME)

#define BIO_f_reliable() \
	LP0(0x1140, BIO_METHOD *, BIO_f_reliable ,\
	, AMISSL_BASE_NAME)

#define BIO_set_cipher(___b, ___c, ___k, ___i, ___enc) \
	LP5NR(0x1146, BIO_set_cipher , BIO *, ___b, a0, const EVP_CIPHER *, ___c, a1, unsigned char *, ___k, a2, unsigned char *, ___i, a3, int, ___enc, d0,\
	, AMISSL_BASE_NAME)

#define EVP_md_null() \
	LP0(0x114c, const EVP_MD *, EVP_md_null ,\
	, AMISSL_BASE_NAME)

#define EVP_md2() \
	LP0(0x1152, const EVP_MD *, EVP_md2 ,\
	, AMISSL_BASE_NAME)

#define EVP_md4() \
	LP0(0x1158, const EVP_MD *, EVP_md4 ,\
	, AMISSL_BASE_NAME)

#define EVP_md5() \
	LP0(0x115e, const EVP_MD *, EVP_md5 ,\
	, AMISSL_BASE_NAME)

#define EVP_sha() \
	LP0(0x1164, const EVP_MD *, EVP_sha ,\
	, AMISSL_BASE_NAME)

#define EVP_sha1() \
	LP0(0x116a, const EVP_MD *, EVP_sha1 ,\
	, AMISSL_BASE_NAME)

#define EVP_dss() \
	LP0(0x1170, const EVP_MD *, EVP_dss ,\
	, AMISSL_BASE_NAME)

#define EVP_dss1() \
	LP0(0x1176, const EVP_MD *, EVP_dss1 ,\
	, AMISSL_BASE_NAME)

#define EVP_mdc2() \
	LP0(0x117c, const EVP_MD *, EVP_mdc2 ,\
	, AMISSL_BASE_NAME)

#define EVP_ripemd160() \
	LP0(0x1182, const EVP_MD *, EVP_ripemd160 ,\
	, AMISSL_BASE_NAME)

#define EVP_enc_null() \
	LP0(0x1188, const EVP_CIPHER *, EVP_enc_null ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ecb() \
	LP0(0x118e, const EVP_CIPHER *, EVP_des_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ede() \
	LP0(0x1194, const EVP_CIPHER *, EVP_des_ede ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ede3() \
	LP0(0x119a, const EVP_CIPHER *, EVP_des_ede3 ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ede_ecb() \
	LP0(0x11a0, const EVP_CIPHER *, EVP_des_ede_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ede3_ecb() \
	LP0(0x11a6, const EVP_CIPHER *, EVP_des_ede3_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_des_cfb64() \
	LP0(0x11ac, const EVP_CIPHER *, EVP_des_cfb64 ,\
	, AMISSL_BASE_NAME)

#define EVP_des_cfb1() \
	LP0(0x11b2, const EVP_CIPHER *, EVP_des_cfb1 ,\
	, AMISSL_BASE_NAME)

#define EVP_des_cfb8() \
	LP0(0x11b8, const EVP_CIPHER *, EVP_des_cfb8 ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ede_cfb64() \
	LP0(0x11be, const EVP_CIPHER *, EVP_des_ede_cfb64 ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ede3_cfb64() \
	LP0(0x11c4, const EVP_CIPHER *, EVP_des_ede3_cfb64 ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ede3_cfb1() \
	LP0(0x11ca, const EVP_CIPHER *, EVP_des_ede3_cfb1 ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ede3_cfb8() \
	LP0(0x11d0, const EVP_CIPHER *, EVP_des_ede3_cfb8 ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ofb() \
	LP0(0x11d6, const EVP_CIPHER *, EVP_des_ofb ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ede_ofb() \
	LP0(0x11dc, const EVP_CIPHER *, EVP_des_ede_ofb ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ede3_ofb() \
	LP0(0x11e2, const EVP_CIPHER *, EVP_des_ede3_ofb ,\
	, AMISSL_BASE_NAME)

#define EVP_des_cbc() \
	LP0(0x11e8, const EVP_CIPHER *, EVP_des_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ede_cbc() \
	LP0(0x11ee, const EVP_CIPHER *, EVP_des_ede_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_des_ede3_cbc() \
	LP0(0x11f4, const EVP_CIPHER *, EVP_des_ede3_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_desx_cbc() \
	LP0(0x11fa, const EVP_CIPHER *, EVP_desx_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_rc4() \
	LP0(0x1200, const EVP_CIPHER *, EVP_rc4 ,\
	, AMISSL_BASE_NAME)

#define EVP_rc4_40() \
	LP0(0x1206, const EVP_CIPHER *, EVP_rc4_40 ,\
	, AMISSL_BASE_NAME)

#define EVP_idea_ecb() \
	LP0(0x120c, const EVP_CIPHER *, EVP_idea_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_idea_cfb64() \
	LP0(0x1212, const EVP_CIPHER *, EVP_idea_cfb64 ,\
	, AMISSL_BASE_NAME)

#define EVP_idea_ofb() \
	LP0(0x1218, const EVP_CIPHER *, EVP_idea_ofb ,\
	, AMISSL_BASE_NAME)

#define EVP_idea_cbc() \
	LP0(0x121e, const EVP_CIPHER *, EVP_idea_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_rc2_ecb() \
	LP0(0x1224, const EVP_CIPHER *, EVP_rc2_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_rc2_cbc() \
	LP0(0x122a, const EVP_CIPHER *, EVP_rc2_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_rc2_40_cbc() \
	LP0(0x1230, const EVP_CIPHER *, EVP_rc2_40_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_rc2_64_cbc() \
	LP0(0x1236, const EVP_CIPHER *, EVP_rc2_64_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_rc2_cfb64() \
	LP0(0x123c, const EVP_CIPHER *, EVP_rc2_cfb64 ,\
	, AMISSL_BASE_NAME)

#define EVP_rc2_ofb() \
	LP0(0x1242, const EVP_CIPHER *, EVP_rc2_ofb ,\
	, AMISSL_BASE_NAME)

#define EVP_bf_ecb() \
	LP0(0x1248, const EVP_CIPHER *, EVP_bf_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_bf_cbc() \
	LP0(0x124e, const EVP_CIPHER *, EVP_bf_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_bf_cfb64() \
	LP0(0x1254, const EVP_CIPHER *, EVP_bf_cfb64 ,\
	, AMISSL_BASE_NAME)

#define EVP_bf_ofb() \
	LP0(0x125a, const EVP_CIPHER *, EVP_bf_ofb ,\
	, AMISSL_BASE_NAME)

#define EVP_cast5_ecb() \
	LP0(0x1260, const EVP_CIPHER *, EVP_cast5_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_cast5_cbc() \
	LP0(0x1266, const EVP_CIPHER *, EVP_cast5_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_cast5_cfb64() \
	LP0(0x126c, const EVP_CIPHER *, EVP_cast5_cfb64 ,\
	, AMISSL_BASE_NAME)

#define EVP_cast5_ofb() \
	LP0(0x1272, const EVP_CIPHER *, EVP_cast5_ofb ,\
	, AMISSL_BASE_NAME)

#define EVP_rc5_32_12_16_cbc() \
	LP0(0x1278, const EVP_CIPHER *, EVP_rc5_32_12_16_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_rc5_32_12_16_ecb() \
	LP0(0x127e, const EVP_CIPHER *, EVP_rc5_32_12_16_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_rc5_32_12_16_cfb64() \
	LP0(0x1284, const EVP_CIPHER *, EVP_rc5_32_12_16_cfb64 ,\
	, AMISSL_BASE_NAME)

#define EVP_rc5_32_12_16_ofb() \
	LP0(0x128a, const EVP_CIPHER *, EVP_rc5_32_12_16_ofb ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_128_ecb() \
	LP0(0x1290, const EVP_CIPHER *, EVP_aes_128_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_128_cbc() \
	LP0(0x1296, const EVP_CIPHER *, EVP_aes_128_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_128_cfb1() \
	LP0(0x129c, const EVP_CIPHER *, EVP_aes_128_cfb1 ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_128_cfb8() \
	LP0(0x12a2, const EVP_CIPHER *, EVP_aes_128_cfb8 ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_128_cfb128() \
	LP0(0x12a8, const EVP_CIPHER *, EVP_aes_128_cfb128 ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_128_ofb() \
	LP0(0x12ae, const EVP_CIPHER *, EVP_aes_128_ofb ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_192_ecb() \
	LP0(0x12b4, const EVP_CIPHER *, EVP_aes_192_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_192_cbc() \
	LP0(0x12ba, const EVP_CIPHER *, EVP_aes_192_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_192_cfb1() \
	LP0(0x12c0, const EVP_CIPHER *, EVP_aes_192_cfb1 ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_192_cfb8() \
	LP0(0x12c6, const EVP_CIPHER *, EVP_aes_192_cfb8 ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_192_cfb128() \
	LP0(0x12cc, const EVP_CIPHER *, EVP_aes_192_cfb128 ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_192_ofb() \
	LP0(0x12d2, const EVP_CIPHER *, EVP_aes_192_ofb ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_256_ecb() \
	LP0(0x12d8, const EVP_CIPHER *, EVP_aes_256_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_256_cbc() \
	LP0(0x12de, const EVP_CIPHER *, EVP_aes_256_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_256_cfb1() \
	LP0(0x12e4, const EVP_CIPHER *, EVP_aes_256_cfb1 ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_256_cfb8() \
	LP0(0x12ea, const EVP_CIPHER *, EVP_aes_256_cfb8 ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_256_cfb128() \
	LP0(0x12f0, const EVP_CIPHER *, EVP_aes_256_cfb128 ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_256_ofb() \
	LP0(0x12f6, const EVP_CIPHER *, EVP_aes_256_ofb ,\
	, AMISSL_BASE_NAME)

#define OPENSSL_add_all_algorithms_noconf() \
	LP0NR(0x12fc, OPENSSL_add_all_algorithms_noconf ,\
	, AMISSL_BASE_NAME)

#define OPENSSL_add_all_algorithms_conf() \
	LP0NR(0x1302, OPENSSL_add_all_algorithms_conf ,\
	, AMISSL_BASE_NAME)

#define OpenSSL_add_all_ciphers() \
	LP0NR(0x1308, OpenSSL_add_all_ciphers ,\
	, AMISSL_BASE_NAME)

#define OpenSSL_add_all_digests() \
	LP0NR(0x130e, OpenSSL_add_all_digests ,\
	, AMISSL_BASE_NAME)

#define EVP_add_cipher(___cipher) \
	LP1(0x1314, int, EVP_add_cipher , const EVP_CIPHER *, ___cipher, a0,\
	, AMISSL_BASE_NAME)

#define EVP_add_digest(___digest) \
	LP1(0x131a, int, EVP_add_digest , const EVP_MD *, ___digest, a0,\
	, AMISSL_BASE_NAME)

#define EVP_get_cipherbyname(___name) \
	LP1(0x1320, const EVP_CIPHER *, EVP_get_cipherbyname , const char *, ___name, a0,\
	, AMISSL_BASE_NAME)

#define EVP_get_digestbyname(___name) \
	LP1(0x1326, const EVP_MD *, EVP_get_digestbyname , const char *, ___name, a0,\
	, AMISSL_BASE_NAME)

#define EVP_cleanup() \
	LP0NR(0x132c, EVP_cleanup ,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_decrypt(___ctx, ___out, ___outlen, ___in, ___inlen) \
	LP5(0x1332, int, EVP_PKEY_decrypt , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t *, ___outlen, a2, const unsigned char *, ___in, a3, size_t, ___inlen, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_encrypt(___ctx, ___out, ___outlen, ___in, ___inlen) \
	LP5(0x1338, int, EVP_PKEY_encrypt , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t *, ___outlen, a2, const unsigned char *, ___in, a3, size_t, ___inlen, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_type(___type) \
	LP1(0x133e, int, EVP_PKEY_type , int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_bits(___pkey) \
	LP1(0x1344, int, EVP_PKEY_bits , EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_size(___pkey) \
	LP1(0x134a, int, EVP_PKEY_size , EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_assign(___pkey, ___type, ___key) \
	LP3(0x1350, int, EVP_PKEY_assign , EVP_PKEY *, ___pkey, a0, int, ___type, d0, char *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_set1_RSA(___pkey, ___key) \
	LP2(0x1356, int, EVP_PKEY_set1_RSA , EVP_PKEY *, ___pkey, a0, struct rsa_st *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_get1_RSA(___pkey) \
	LP1(0x135c, struct rsa_st *, EVP_PKEY_get1_RSA , EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_set1_DSA(___pkey, ___key) \
	LP2(0x1362, int, EVP_PKEY_set1_DSA , EVP_PKEY *, ___pkey, a0, struct dsa_st *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_get1_DSA(___pkey) \
	LP1(0x1368, struct dsa_st *, EVP_PKEY_get1_DSA , EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_set1_DH(___pkey, ___key) \
	LP2(0x136e, int, EVP_PKEY_set1_DH , EVP_PKEY *, ___pkey, a0, struct dh_st *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_get1_DH(___pkey) \
	LP1(0x1374, struct dh_st *, EVP_PKEY_get1_DH , EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_new() \
	LP0(0x137a, EVP_PKEY *, EVP_PKEY_new ,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_free(___pkey) \
	LP1NR(0x1380, EVP_PKEY_free , EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PublicKey(___type, ___a, ___pp, ___length) \
	LP4(0x1386, EVP_PKEY *, d2i_PublicKey , int, ___type, d0, EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d1,\
	, AMISSL_BASE_NAME)

#define i2d_PublicKey(___a, ___pp) \
	LP2(0x138c, int, i2d_PublicKey , EVP_PKEY *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define d2i_PrivateKey(___type, ___a, ___pp, ___length) \
	LP4(0x1392, EVP_PKEY *, d2i_PrivateKey , int, ___type, d0, EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d1,\
	, AMISSL_BASE_NAME)

#define d2i_AutoPrivateKey(___a, ___pp, ___length) \
	LP3(0x1398, EVP_PKEY *, d2i_AutoPrivateKey , EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PrivateKey(___a, ___pp) \
	LP2(0x139e, int, i2d_PrivateKey , EVP_PKEY *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_copy_parameters(___to, ___from) \
	LP2(0x13a4, int, EVP_PKEY_copy_parameters , EVP_PKEY *, ___to, a0, EVP_PKEY *, ___from, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_missing_parameters(___pkey) \
	LP1(0x13aa, int, EVP_PKEY_missing_parameters , EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_save_parameters(___pkey, ___mode) \
	LP2(0x13b0, int, EVP_PKEY_save_parameters , EVP_PKEY *, ___pkey, a0, int, ___mode, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_cmp_parameters(___a, ___b) \
	LP2(0x13b6, int, EVP_PKEY_cmp_parameters , EVP_PKEY *, ___a, a0, EVP_PKEY *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_type(___ctx) \
	LP1(0x13bc, int, EVP_CIPHER_type , const EVP_CIPHER *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_param_to_asn1(___c, ___type) \
	LP2(0x13c2, int, EVP_CIPHER_param_to_asn1 , EVP_CIPHER_CTX *, ___c, a0, ASN1_TYPE *, ___type, a1,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_asn1_to_param(___c, ___type) \
	LP2(0x13c8, int, EVP_CIPHER_asn1_to_param , EVP_CIPHER_CTX *, ___c, a0, ASN1_TYPE *, ___type, a1,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_set_asn1_iv(___c, ___type) \
	LP2(0x13ce, int, EVP_CIPHER_set_asn1_iv , EVP_CIPHER_CTX *, ___c, a0, ASN1_TYPE *, ___type, a1,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_get_asn1_iv(___c, ___type) \
	LP2(0x13d4, int, EVP_CIPHER_get_asn1_iv , EVP_CIPHER_CTX *, ___c, a0, ASN1_TYPE *, ___type, a1,\
	, AMISSL_BASE_NAME)

#define PKCS5_PBE_keyivgen(___ctx, ___pass, ___passlen, ___param, ___cipher, ___md, ___en_de) \
	LP7(0x13da, int, PKCS5_PBE_keyivgen , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___cipher, a3, const EVP_MD *, ___md, d1, int, ___en_de, d2,\
	, AMISSL_BASE_NAME)

#define PKCS5_PBKDF2_HMAC_SHA1(___pass, ___passlen, ___salt, ___saltlen, ___iter, ___keylen, ___out) \
	LP7(0x13e0, int, PKCS5_PBKDF2_HMAC_SHA1 , const char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___iter, d2, int, ___keylen, d3, unsigned char *, ___out, a2,\
	, AMISSL_BASE_NAME)

#define PKCS5_v2_PBE_keyivgen(___ctx, ___pass, ___passlen, ___param, ___cipher, ___md, ___en_de) \
	LP7(0x13e6, int, PKCS5_v2_PBE_keyivgen , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___cipher, a3, const EVP_MD *, ___md, d1, int, ___en_de, d2,\
	, AMISSL_BASE_NAME)

#define PKCS5_PBE_add() \
	LP0NR(0x13ec, PKCS5_PBE_add ,\
	, AMISSL_BASE_NAME)

#define EVP_PBE_CipherInit(___pbe_obj, ___pass, ___passlen, ___param, ___ctx, ___en_de) \
	LP6(0x13f2, int, EVP_PBE_CipherInit , ASN1_OBJECT *, ___pbe_obj, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, EVP_CIPHER_CTX *, ___ctx, a3, int, ___en_de, d1,\
	, AMISSL_BASE_NAME)

#define EVP_PBE_alg_add(___nid, ___cipher, ___md, ___keygen) \
	LP4(0x13f8, int, EVP_PBE_alg_add , int, ___nid, d0, const EVP_CIPHER *, ___cipher, a0, const EVP_MD *, ___md, a1, EVP_PBE_KEYGEN *, ___keygen, a2,\
	, AMISSL_BASE_NAME)

#define EVP_PBE_cleanup() \
	LP0NR(0x13fe, EVP_PBE_cleanup ,\
	, AMISSL_BASE_NAME)

#define ERR_load_EVP_strings() \
	LP0NR(0x1404, ERR_load_EVP_strings ,\
	, AMISSL_BASE_NAME)

#define HMAC_CTX_init(___ctx) \
	LP1NR(0x140a, HMAC_CTX_init , HMAC_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define HMAC_CTX_cleanup(___ctx) \
	LP1NR(0x1410, HMAC_CTX_cleanup , HMAC_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define HMAC_Init(___ctx, ___key, ___len, ___md) \
	LP4NR(0x1416, HMAC_Init , HMAC_CTX *, ___ctx, a0, const void *, ___key, a1, int, ___len, d0, const EVP_MD *, ___md, a2,\
	, AMISSL_BASE_NAME)

#define HMAC_Init_ex(___ctx, ___key, ___len, ___md, ___impl) \
	LP5NR(0x141c, HMAC_Init_ex , HMAC_CTX *, ___ctx, a0, const void *, ___key, a1, int, ___len, d0, const EVP_MD *, ___md, a2, ENGINE *, ___impl, a3,\
	, AMISSL_BASE_NAME)

#define HMAC_Update(___ctx, ___data, ___len) \
	LP3NR(0x1422, HMAC_Update , HMAC_CTX *, ___ctx, a0, const unsigned char *, ___data, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define HMAC_Final(___ctx, ___md, ___len) \
	LP3NR(0x1428, HMAC_Final , HMAC_CTX *, ___ctx, a0, unsigned char *, ___md, a1, unsigned int *, ___len, a2,\
	, AMISSL_BASE_NAME)

#define HMAC(___evp_md, ___key, ___key_len, ___d, ___n, ___md, ___md_len) \
	LP7(0x142e, unsigned char *, HMAC , const EVP_MD *, ___evp_md, a0, const void *, ___key, a1, int, ___key_len, d0, const unsigned char *, ___d, a2, int, ___n, d1, unsigned char *, ___md, a3, unsigned int *, ___md_len, d2,\
	, AMISSL_BASE_NAME)

#define KRB5_ENCDATA_new() \
	LP0(0x1434, KRB5_ENCDATA *, KRB5_ENCDATA_new ,\
	, AMISSL_BASE_NAME)

#define KRB5_ENCDATA_free(___a) \
	LP1NR(0x143a, KRB5_ENCDATA_free , KRB5_ENCDATA *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_KRB5_ENCDATA(___a, ___in, ___len) \
	LP3(0x1440, KRB5_ENCDATA *, d2i_KRB5_ENCDATA , KRB5_ENCDATA **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_KRB5_ENCDATA(___a, ___out) \
	LP2(0x1446, int, i2d_KRB5_ENCDATA , KRB5_ENCDATA *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define KRB5_ENCDATA_it() \
	LP0(0x144c, const ASN1_ITEM *, KRB5_ENCDATA_it ,\
	, AMISSL_BASE_NAME)

#define KRB5_PRINCNAME_new() \
	LP0(0x1452, KRB5_PRINCNAME *, KRB5_PRINCNAME_new ,\
	, AMISSL_BASE_NAME)

#define KRB5_PRINCNAME_free(___a) \
	LP1NR(0x1458, KRB5_PRINCNAME_free , KRB5_PRINCNAME *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_KRB5_PRINCNAME(___a, ___in, ___len) \
	LP3(0x145e, KRB5_PRINCNAME *, d2i_KRB5_PRINCNAME , KRB5_PRINCNAME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_KRB5_PRINCNAME(___a, ___out) \
	LP2(0x1464, int, i2d_KRB5_PRINCNAME , KRB5_PRINCNAME *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define KRB5_PRINCNAME_it() \
	LP0(0x146a, const ASN1_ITEM *, KRB5_PRINCNAME_it ,\
	, AMISSL_BASE_NAME)

#define KRB5_TKTBODY_new() \
	LP0(0x1470, KRB5_TKTBODY *, KRB5_TKTBODY_new ,\
	, AMISSL_BASE_NAME)

#define KRB5_TKTBODY_free(___a) \
	LP1NR(0x1476, KRB5_TKTBODY_free , KRB5_TKTBODY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_KRB5_TKTBODY(___a, ___in, ___len) \
	LP3(0x147c, KRB5_TKTBODY *, d2i_KRB5_TKTBODY , KRB5_TKTBODY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_KRB5_TKTBODY(___a, ___out) \
	LP2(0x1482, int, i2d_KRB5_TKTBODY , KRB5_TKTBODY *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define KRB5_TKTBODY_it() \
	LP0(0x1488, const ASN1_ITEM *, KRB5_TKTBODY_it ,\
	, AMISSL_BASE_NAME)

#define KRB5_APREQBODY_new() \
	LP0(0x148e, KRB5_APREQBODY *, KRB5_APREQBODY_new ,\
	, AMISSL_BASE_NAME)

#define KRB5_APREQBODY_free(___a) \
	LP1NR(0x1494, KRB5_APREQBODY_free , KRB5_APREQBODY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_KRB5_APREQBODY(___a, ___in, ___len) \
	LP3(0x149a, KRB5_APREQBODY *, d2i_KRB5_APREQBODY , KRB5_APREQBODY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_KRB5_APREQBODY(___a, ___out) \
	LP2(0x14a0, int, i2d_KRB5_APREQBODY , KRB5_APREQBODY *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define KRB5_APREQBODY_it() \
	LP0(0x14a6, const ASN1_ITEM *, KRB5_APREQBODY_it ,\
	, AMISSL_BASE_NAME)

#define KRB5_TICKET_new() \
	LP0(0x14ac, KRB5_TICKET *, KRB5_TICKET_new ,\
	, AMISSL_BASE_NAME)

#define KRB5_TICKET_free(___a) \
	LP1NR(0x14b2, KRB5_TICKET_free , KRB5_TICKET *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_KRB5_TICKET(___a, ___in, ___len) \
	LP3(0x14b8, KRB5_TICKET *, d2i_KRB5_TICKET , KRB5_TICKET **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_KRB5_TICKET(___a, ___out) \
	LP2(0x14be, int, i2d_KRB5_TICKET , KRB5_TICKET *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define KRB5_TICKET_it() \
	LP0(0x14c4, const ASN1_ITEM *, KRB5_TICKET_it ,\
	, AMISSL_BASE_NAME)

#define KRB5_APREQ_new() \
	LP0(0x14ca, KRB5_APREQ *, KRB5_APREQ_new ,\
	, AMISSL_BASE_NAME)

#define KRB5_APREQ_free(___a) \
	LP1NR(0x14d0, KRB5_APREQ_free , KRB5_APREQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_KRB5_APREQ(___a, ___in, ___len) \
	LP3(0x14d6, KRB5_APREQ *, d2i_KRB5_APREQ , KRB5_APREQ **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_KRB5_APREQ(___a, ___out) \
	LP2(0x14dc, int, i2d_KRB5_APREQ , KRB5_APREQ *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define KRB5_APREQ_it() \
	LP0(0x14e2, const ASN1_ITEM *, KRB5_APREQ_it ,\
	, AMISSL_BASE_NAME)

#define KRB5_CHECKSUM_new() \
	LP0(0x14e8, KRB5_CHECKSUM *, KRB5_CHECKSUM_new ,\
	, AMISSL_BASE_NAME)

#define KRB5_CHECKSUM_free(___a) \
	LP1NR(0x14ee, KRB5_CHECKSUM_free , KRB5_CHECKSUM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_KRB5_CHECKSUM(___a, ___in, ___len) \
	LP3(0x14f4, KRB5_CHECKSUM *, d2i_KRB5_CHECKSUM , KRB5_CHECKSUM **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_KRB5_CHECKSUM(___a, ___out) \
	LP2(0x14fa, int, i2d_KRB5_CHECKSUM , KRB5_CHECKSUM *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define KRB5_CHECKSUM_it() \
	LP0(0x1500, const ASN1_ITEM *, KRB5_CHECKSUM_it ,\
	, AMISSL_BASE_NAME)

#define KRB5_ENCKEY_new() \
	LP0(0x1506, KRB5_ENCKEY *, KRB5_ENCKEY_new ,\
	, AMISSL_BASE_NAME)

#define KRB5_ENCKEY_free(___a) \
	LP1NR(0x150c, KRB5_ENCKEY_free , KRB5_ENCKEY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_KRB5_ENCKEY(___a, ___in, ___len) \
	LP3(0x1512, KRB5_ENCKEY *, d2i_KRB5_ENCKEY , KRB5_ENCKEY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_KRB5_ENCKEY(___a, ___out) \
	LP2(0x1518, int, i2d_KRB5_ENCKEY , KRB5_ENCKEY *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define KRB5_ENCKEY_it() \
	LP0(0x151e, const ASN1_ITEM *, KRB5_ENCKEY_it ,\
	, AMISSL_BASE_NAME)

#define KRB5_AUTHDATA_new() \
	LP0(0x1524, KRB5_AUTHDATA *, KRB5_AUTHDATA_new ,\
	, AMISSL_BASE_NAME)

#define KRB5_AUTHDATA_free(___a) \
	LP1NR(0x152a, KRB5_AUTHDATA_free , KRB5_AUTHDATA *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_KRB5_AUTHDATA(___a, ___in, ___len) \
	LP3(0x1530, KRB5_AUTHDATA *, d2i_KRB5_AUTHDATA , KRB5_AUTHDATA **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_KRB5_AUTHDATA(___a, ___out) \
	LP2(0x1536, int, i2d_KRB5_AUTHDATA , KRB5_AUTHDATA *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define KRB5_AUTHDATA_it() \
	LP0(0x153c, const ASN1_ITEM *, KRB5_AUTHDATA_it ,\
	, AMISSL_BASE_NAME)

#define KRB5_AUTHENTBODY_new() \
	LP0(0x1542, KRB5_AUTHENTBODY *, KRB5_AUTHENTBODY_new ,\
	, AMISSL_BASE_NAME)

#define KRB5_AUTHENTBODY_free(___a) \
	LP1NR(0x1548, KRB5_AUTHENTBODY_free , KRB5_AUTHENTBODY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_KRB5_AUTHENTBODY(___a, ___in, ___len) \
	LP3(0x154e, KRB5_AUTHENTBODY *, d2i_KRB5_AUTHENTBODY , KRB5_AUTHENTBODY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_KRB5_AUTHENTBODY(___a, ___out) \
	LP2(0x1554, int, i2d_KRB5_AUTHENTBODY , KRB5_AUTHENTBODY *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define KRB5_AUTHENTBODY_it() \
	LP0(0x155a, const ASN1_ITEM *, KRB5_AUTHENTBODY_it ,\
	, AMISSL_BASE_NAME)

#define KRB5_AUTHENT_new() \
	LP0(0x1560, KRB5_AUTHENT *, KRB5_AUTHENT_new ,\
	, AMISSL_BASE_NAME)

#define KRB5_AUTHENT_free(___a) \
	LP1NR(0x1566, KRB5_AUTHENT_free , KRB5_AUTHENT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_KRB5_AUTHENT(___a, ___in, ___len) \
	LP3(0x156c, KRB5_AUTHENT *, d2i_KRB5_AUTHENT , KRB5_AUTHENT **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_KRB5_AUTHENT(___a, ___out) \
	LP2(0x1572, int, i2d_KRB5_AUTHENT , KRB5_AUTHENT *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define KRB5_AUTHENT_it() \
	LP0(0x1578, const ASN1_ITEM *, KRB5_AUTHENT_it ,\
	, AMISSL_BASE_NAME)

#define lh_new(___h, ___c) \
	LP2(0x157e, _LHASH *, lh_new , LHASH_HASH_FN_TYPE, ___h, d0, LHASH_COMP_FN_TYPE, ___c, d1,\
	, AMISSL_BASE_NAME)

#define lh_free(___lh) \
	LP1NR(0x1584, lh_free , _LHASH *, ___lh, a0,\
	, AMISSL_BASE_NAME)

#define lh_insert(___lh, ___data) \
	LP2(0x158a, void *, lh_insert , _LHASH *, ___lh, a0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define lh_delete(___lh, ___data) \
	LP2(0x1590, void *, lh_delete , _LHASH *, ___lh, a0, const void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define lh_retrieve(___lh, ___data) \
	LP2(0x1596, void *, lh_retrieve , _LHASH *, ___lh, a0, const void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define lh_doall(___lh, ___func) \
	LP2NR(0x159c, lh_doall , _LHASH *, ___lh, a0, LHASH_DOALL_FN_TYPE, ___func, d0,\
	, AMISSL_BASE_NAME)

#define lh_doall_arg(___lh, ___func, ___arg) \
	LP3NR(0x15a2, lh_doall_arg , _LHASH *, ___lh, a0, LHASH_DOALL_ARG_FN_TYPE, ___func, d0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME)

#define lh_strhash(___c) \
	LP1(0x15a8, unsigned long, lh_strhash , const char *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define lh_num_items(___lh) \
	LP1(0x15ae, unsigned long, lh_num_items , const _LHASH *, ___lh, a0,\
	, AMISSL_BASE_NAME)

#define lh_stats_bio(___lh, ___out) \
	LP2NR(0x15b4, lh_stats_bio , const _LHASH *, ___lh, a0, BIO *, ___out, a1,\
	, AMISSL_BASE_NAME)

#define lh_node_stats_bio(___lh, ___out) \
	LP2NR(0x15ba, lh_node_stats_bio , const _LHASH *, ___lh, a0, BIO *, ___out, a1,\
	, AMISSL_BASE_NAME)

#define lh_node_usage_stats_bio(___lh, ___out) \
	LP2NR(0x15c0, lh_node_usage_stats_bio , const _LHASH *, ___lh, a0, BIO *, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OBJ_NAME_init() \
	LP0(0x15c6, int, OBJ_NAME_init ,\
	, AMISSL_BASE_NAME)

#define OBJ_NAME_new_index(___hash_func, ___cmp_func, ___free_func) \
	LP3FP(0x15cc, int, OBJ_NAME_new_index , __fpt, ___hash_func, a0, __fpt, ___cmp_func, a1, __fpt, ___free_func, a2,\
	, AMISSL_BASE_NAME, unsigned long (*__fpt)(const char *))

#define OBJ_NAME_get(___name, ___type) \
	LP2(0x15d2, const char *, OBJ_NAME_get , const char *, ___name, a0, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define OBJ_NAME_add(___name, ___type, ___data) \
	LP3(0x15d8, int, OBJ_NAME_add , const char *, ___name, a0, int, ___type, d0, const char *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define OBJ_NAME_remove(___name, ___type) \
	LP2(0x15de, int, OBJ_NAME_remove , const char *, ___name, a0, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define OBJ_NAME_cleanup(___type) \
	LP1NR(0x15e4, OBJ_NAME_cleanup , int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define OBJ_NAME_do_all(___type, ___fn, ___arg) \
	LP3NRFP(0x15ea, OBJ_NAME_do_all , int, ___type, d0, __fpt, ___fn, a0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(const OBJ_NAME *,void *arg))

#define OBJ_NAME_do_all_sorted(___type, ___fn, ___arg) \
	LP3NRFP(0x15f0, OBJ_NAME_do_all_sorted , int, ___type, d0, __fpt, ___fn, a0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(const OBJ_NAME *,void *arg))

#define OBJ_dup(___o) \
	LP1(0x15f6, ASN1_OBJECT *, OBJ_dup , const ASN1_OBJECT *, ___o, a0,\
	, AMISSL_BASE_NAME)

#define OBJ_nid2obj(___n) \
	LP1(0x15fc, ASN1_OBJECT *, OBJ_nid2obj , int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define OBJ_nid2ln(___n) \
	LP1(0x1602, const char *, OBJ_nid2ln , int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define OBJ_nid2sn(___n) \
	LP1(0x1608, const char *, OBJ_nid2sn , int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define OBJ_obj2nid(___o) \
	LP1(0x160e, int, OBJ_obj2nid , const ASN1_OBJECT *, ___o, a0,\
	, AMISSL_BASE_NAME)

#define OBJ_txt2obj(___s, ___no_name) \
	LP2(0x1614, ASN1_OBJECT *, OBJ_txt2obj , const char *, ___s, a0, int, ___no_name, d0,\
	, AMISSL_BASE_NAME)

#define OBJ_obj2txt(___buf, ___buf_len, ___a, ___no_name) \
	LP4(0x161a, int, OBJ_obj2txt , char *, ___buf, a0, int, ___buf_len, d0, const ASN1_OBJECT *, ___a, a1, int, ___no_name, d1,\
	, AMISSL_BASE_NAME)

#define OBJ_txt2nid(___s) \
	LP1(0x1620, int, OBJ_txt2nid , const char *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define OBJ_ln2nid(___s) \
	LP1(0x1626, int, OBJ_ln2nid , const char *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define OBJ_sn2nid(___s) \
	LP1(0x162c, int, OBJ_sn2nid , const char *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define OBJ_cmp(___a, ___b) \
	LP2(0x1632, int, OBJ_cmp , const ASN1_OBJECT *, ___a, a0, const ASN1_OBJECT *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define OBJ_new_nid(___num) \
	LP1(0x1638, int, OBJ_new_nid , int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define OBJ_add_object(___obj) \
	LP1(0x163e, int, OBJ_add_object , const ASN1_OBJECT *, ___obj, a0,\
	, AMISSL_BASE_NAME)

#define OBJ_create(___oid, ___sn, ___ln) \
	LP3(0x1644, int, OBJ_create , const char *, ___oid, a0, const char *, ___sn, a1, const char *, ___ln, a2,\
	, AMISSL_BASE_NAME)

#define OBJ_cleanup() \
	LP0NR(0x164a, OBJ_cleanup ,\
	, AMISSL_BASE_NAME)

#define OBJ_create_objects(___in) \
	LP1(0x1650, int, OBJ_create_objects , BIO *, ___in, a0,\
	, AMISSL_BASE_NAME)

#define ERR_load_OBJ_strings() \
	LP0NR(0x1656, ERR_load_OBJ_strings ,\
	, AMISSL_BASE_NAME)

#define OCSP_sendreq_bio(___b, ___path, ___req) \
	LP3(0x165c, OCSP_RESPONSE *, OCSP_sendreq_bio , BIO *, ___b, a0, char *, ___path, a1, OCSP_REQUEST *, ___req, a2,\
	, AMISSL_BASE_NAME)

#define OCSP_cert_to_id(___dgst, ___subject, ___issuer) \
	LP3(0x1662, OCSP_CERTID *, OCSP_cert_to_id , const EVP_MD *, ___dgst, a0, X509 *, ___subject, a1, X509 *, ___issuer, a2,\
	, AMISSL_BASE_NAME)

#define OCSP_cert_id_new(___dgst, ___issuerName, ___issuerKey, ___serialNumber) \
	LP4(0x1668, OCSP_CERTID *, OCSP_cert_id_new , const EVP_MD *, ___dgst, a0, X509_NAME *, ___issuerName, a1, ASN1_BIT_STRING *, ___issuerKey, a2, ASN1_INTEGER *, ___serialNumber, a3,\
	, AMISSL_BASE_NAME)

#define OCSP_request_add0_id(___req, ___cid) \
	LP2(0x166e, OCSP_ONEREQ *, OCSP_request_add0_id , OCSP_REQUEST *, ___req, a0, OCSP_CERTID *, ___cid, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_request_add1_nonce(___req, ___val, ___len) \
	LP3(0x1674, int, OCSP_request_add1_nonce , OCSP_REQUEST *, ___req, a0, unsigned char *, ___val, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_basic_add1_nonce(___resp, ___val, ___len) \
	LP3(0x167a, int, OCSP_basic_add1_nonce , OCSP_BASICRESP *, ___resp, a0, unsigned char *, ___val, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_check_nonce(___req, ___bs) \
	LP2(0x1680, int, OCSP_check_nonce , OCSP_REQUEST *, ___req, a0, OCSP_BASICRESP *, ___bs, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_copy_nonce(___resp, ___req) \
	LP2(0x1686, int, OCSP_copy_nonce , OCSP_BASICRESP *, ___resp, a0, OCSP_REQUEST *, ___req, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_request_set1_name(___req, ___nm) \
	LP2(0x168c, int, OCSP_request_set1_name , OCSP_REQUEST *, ___req, a0, X509_NAME *, ___nm, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_request_add1_cert(___req, ___cert) \
	LP2(0x1692, int, OCSP_request_add1_cert , OCSP_REQUEST *, ___req, a0, X509 *, ___cert, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_request_sign(___req, ___signer, ___key, ___dgst, ___certs, ___flags) \
	LP6(0x1698, int, OCSP_request_sign , OCSP_REQUEST *, ___req, a0, X509 *, ___signer, a1, EVP_PKEY *, ___key, a2, const EVP_MD *, ___dgst, a3, STACK_OF(X509) *, ___certs, d0, unsigned long, ___flags, d1,\
	, AMISSL_BASE_NAME)

#define OCSP_response_status(___resp) \
	LP1(0x169e, int, OCSP_response_status , OCSP_RESPONSE *, ___resp, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_response_get1_basic(___resp) \
	LP1(0x16a4, OCSP_BASICRESP *, OCSP_response_get1_basic , OCSP_RESPONSE *, ___resp, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_resp_count(___bs) \
	LP1(0x16aa, int, OCSP_resp_count , OCSP_BASICRESP *, ___bs, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_resp_get0(___bs, ___idx) \
	LP2(0x16b0, OCSP_SINGLERESP *, OCSP_resp_get0 , OCSP_BASICRESP *, ___bs, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_resp_find(___bs, ___id, ___last) \
	LP3(0x16b6, int, OCSP_resp_find , OCSP_BASICRESP *, ___bs, a0, OCSP_CERTID *, ___id, a1, int, ___last, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_single_get0_status(___single, ___reason, ___revtime, ___thisupd, ___nextupd) \
	LP5(0x16bc, int, OCSP_single_get0_status , OCSP_SINGLERESP *, ___single, a0, int *, ___reason, a1, ASN1_GENERALIZEDTIME **, ___revtime, a2, ASN1_GENERALIZEDTIME **, ___thisupd, a3, ASN1_GENERALIZEDTIME **, ___nextupd, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_resp_find_status(___bs, ___id, ___status, ___reason, ___revtime, ___thisupd, ___nextupd) \
	LP7(0x16c2, int, OCSP_resp_find_status , OCSP_BASICRESP *, ___bs, a0, OCSP_CERTID *, ___id, a1, int *, ___status, a2, int *, ___reason, a3, ASN1_GENERALIZEDTIME **, ___revtime, d0, ASN1_GENERALIZEDTIME **, ___thisupd, d1, ASN1_GENERALIZEDTIME **, ___nextupd, d2,\
	, AMISSL_BASE_NAME)

#define OCSP_check_validity(___thisupd, ___nextupd, ___sec, ___maxsec) \
	LP4(0x16c8, int, OCSP_check_validity , ASN1_GENERALIZEDTIME *, ___thisupd, a0, ASN1_GENERALIZEDTIME *, ___nextupd, a1, long, ___sec, d0, long, ___maxsec, d1,\
	, AMISSL_BASE_NAME)

#define OCSP_request_verify(___req, ___certs, ___store, ___flags) \
	LP4(0x16ce, int, OCSP_request_verify , OCSP_REQUEST *, ___req, a0, STACK_OF(X509) *, ___certs, a1, X509_STORE *, ___store, a2, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_parse_url(___url, ___phost, ___pport, ___ppath, ___pssl) \
	LP5(0x16d4, int, OCSP_parse_url , char *, ___url, a0, char **, ___phost, a1, char **, ___pport, a2, char **, ___ppath, a3, int *, ___pssl, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_id_issuer_cmp(___a, ___b) \
	LP2(0x16da, int, OCSP_id_issuer_cmp , OCSP_CERTID *, ___a, a0, OCSP_CERTID *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_id_cmp(___a, ___b) \
	LP2(0x16e0, int, OCSP_id_cmp , OCSP_CERTID *, ___a, a0, OCSP_CERTID *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_request_onereq_count(___req) \
	LP1(0x16e6, int, OCSP_request_onereq_count , OCSP_REQUEST *, ___req, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_request_onereq_get0(___req, ___i) \
	LP2(0x16ec, OCSP_ONEREQ *, OCSP_request_onereq_get0 , OCSP_REQUEST *, ___req, a0, int, ___i, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_onereq_get0_id(___one) \
	LP1(0x16f2, OCSP_CERTID *, OCSP_onereq_get0_id , OCSP_ONEREQ *, ___one, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_id_get0_info(___piNameHash, ___pmd, ___pikeyHash, ___pserial, ___cid) \
	LP5(0x16f8, int, OCSP_id_get0_info , ASN1_OCTET_STRING **, ___piNameHash, a0, ASN1_OBJECT **, ___pmd, a1, ASN1_OCTET_STRING **, ___pikeyHash, a2, ASN1_INTEGER **, ___pserial, a3, OCSP_CERTID *, ___cid, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_request_is_signed(___req) \
	LP1(0x16fe, int, OCSP_request_is_signed , OCSP_REQUEST *, ___req, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_response_create(___status, ___bs) \
	LP2(0x1704, OCSP_RESPONSE *, OCSP_response_create , int, ___status, d0, OCSP_BASICRESP *, ___bs, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_basic_add1_status(___rsp, ___cid, ___status, ___reason, ___revtime, ___thisupd, ___nextupd) \
	LP7(0x170a, OCSP_SINGLERESP *, OCSP_basic_add1_status , OCSP_BASICRESP *, ___rsp, a0, OCSP_CERTID *, ___cid, a1, int, ___status, d0, int, ___reason, d1, ASN1_TIME *, ___revtime, a2, ASN1_TIME *, ___thisupd, a3, ASN1_TIME *, ___nextupd, d2,\
	, AMISSL_BASE_NAME)

#define OCSP_basic_add1_cert(___resp, ___cert) \
	LP2(0x1710, int, OCSP_basic_add1_cert , OCSP_BASICRESP *, ___resp, a0, X509 *, ___cert, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_basic_sign(___brsp, ___signer, ___key, ___dgst, ___certs, ___flags) \
	LP6(0x1716, int, OCSP_basic_sign , OCSP_BASICRESP *, ___brsp, a0, X509 *, ___signer, a1, EVP_PKEY *, ___key, a2, const EVP_MD *, ___dgst, a3, STACK_OF(X509) *, ___certs, d0, unsigned long, ___flags, d1,\
	, AMISSL_BASE_NAME)

#define OCSP_crlID_new(___url, ___n, ___tim) \
	LP3(0x171c, X509_EXTENSION *, OCSP_crlID_new , char *, ___url, a0, long *, ___n, a1, char *, ___tim, a2,\
	, AMISSL_BASE_NAME)

#define OCSP_accept_responses_new(___oids) \
	LP1(0x1722, X509_EXTENSION *, OCSP_accept_responses_new , char **, ___oids, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_archive_cutoff_new(___tim) \
	LP1(0x1728, X509_EXTENSION *, OCSP_archive_cutoff_new , char *, ___tim, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_url_svcloc_new(___issuer, ___urls) \
	LP2(0x172e, X509_EXTENSION *, OCSP_url_svcloc_new , X509_NAME *, ___issuer, a0, char **, ___urls, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_get_ext_count(___x) \
	LP1(0x1734, int, OCSP_REQUEST_get_ext_count , OCSP_REQUEST *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_get_ext_by_NID(___x, ___nid, ___lastpos) \
	LP3(0x173a, int, OCSP_REQUEST_get_ext_by_NID , OCSP_REQUEST *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
	LP3(0x1740, int, OCSP_REQUEST_get_ext_by_OBJ , OCSP_REQUEST *, ___x, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_get_ext_by_critical(___x, ___crit, ___lastpos) \
	LP3(0x1746, int, OCSP_REQUEST_get_ext_by_critical , OCSP_REQUEST *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_get_ext(___x, ___loc) \
	LP2(0x174c, X509_EXTENSION *, OCSP_REQUEST_get_ext , OCSP_REQUEST *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_delete_ext(___x, ___loc) \
	LP2(0x1752, X509_EXTENSION *, OCSP_REQUEST_delete_ext , OCSP_REQUEST *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_get1_ext_d2i(___x, ___nid, ___crit, ___idx) \
	LP4(0x1758, void *, OCSP_REQUEST_get1_ext_d2i , OCSP_REQUEST *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
	LP5(0x175e, int, OCSP_REQUEST_add1_ext_i2d , OCSP_REQUEST *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_add_ext(___x, ___ex, ___loc) \
	LP3(0x1764, int, OCSP_REQUEST_add_ext , OCSP_REQUEST *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_ONEREQ_get_ext_count(___x) \
	LP1(0x176a, int, OCSP_ONEREQ_get_ext_count , OCSP_ONEREQ *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_ONEREQ_get_ext_by_NID(___x, ___nid, ___lastpos) \
	LP3(0x1770, int, OCSP_ONEREQ_get_ext_by_NID , OCSP_ONEREQ *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define OCSP_ONEREQ_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
	LP3(0x1776, int, OCSP_ONEREQ_get_ext_by_OBJ , OCSP_ONEREQ *, ___x, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_ONEREQ_get_ext_by_critical(___x, ___crit, ___lastpos) \
	LP3(0x177c, int, OCSP_ONEREQ_get_ext_by_critical , OCSP_ONEREQ *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define OCSP_ONEREQ_get_ext(___x, ___loc) \
	LP2(0x1782, X509_EXTENSION *, OCSP_ONEREQ_get_ext , OCSP_ONEREQ *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_ONEREQ_delete_ext(___x, ___loc) \
	LP2(0x1788, X509_EXTENSION *, OCSP_ONEREQ_delete_ext , OCSP_ONEREQ *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_ONEREQ_get1_ext_d2i(___x, ___nid, ___crit, ___idx) \
	LP4(0x178e, void *, OCSP_ONEREQ_get1_ext_d2i , OCSP_ONEREQ *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
	, AMISSL_BASE_NAME)

#define OCSP_ONEREQ_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
	LP5(0x1794, int, OCSP_ONEREQ_add1_ext_i2d , OCSP_ONEREQ *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
	, AMISSL_BASE_NAME)

#define OCSP_ONEREQ_add_ext(___x, ___ex, ___loc) \
	LP3(0x179a, int, OCSP_ONEREQ_add_ext , OCSP_ONEREQ *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_BASICRESP_get_ext_count(___x) \
	LP1(0x17a0, int, OCSP_BASICRESP_get_ext_count , OCSP_BASICRESP *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_BASICRESP_get_ext_by_NID(___x, ___nid, ___lastpos) \
	LP3(0x17a6, int, OCSP_BASICRESP_get_ext_by_NID , OCSP_BASICRESP *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define OCSP_BASICRESP_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
	LP3(0x17ac, int, OCSP_BASICRESP_get_ext_by_OBJ , OCSP_BASICRESP *, ___x, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_BASICRESP_get_ext_by_critical(___x, ___crit, ___lastpos) \
	LP3(0x17b2, int, OCSP_BASICRESP_get_ext_by_critical , OCSP_BASICRESP *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define OCSP_BASICRESP_get_ext(___x, ___loc) \
	LP2(0x17b8, X509_EXTENSION *, OCSP_BASICRESP_get_ext , OCSP_BASICRESP *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_BASICRESP_delete_ext(___x, ___loc) \
	LP2(0x17be, X509_EXTENSION *, OCSP_BASICRESP_delete_ext , OCSP_BASICRESP *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_BASICRESP_get1_ext_d2i(___x, ___nid, ___crit, ___idx) \
	LP4(0x17c4, void *, OCSP_BASICRESP_get1_ext_d2i , OCSP_BASICRESP *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
	, AMISSL_BASE_NAME)

#define OCSP_BASICRESP_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
	LP5(0x17ca, int, OCSP_BASICRESP_add1_ext_i2d , OCSP_BASICRESP *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
	, AMISSL_BASE_NAME)

#define OCSP_BASICRESP_add_ext(___x, ___ex, ___loc) \
	LP3(0x17d0, int, OCSP_BASICRESP_add_ext , OCSP_BASICRESP *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_get_ext_count(___x) \
	LP1(0x17d6, int, OCSP_SINGLERESP_get_ext_count , OCSP_SINGLERESP *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_get_ext_by_NID(___x, ___nid, ___lastpos) \
	LP3(0x17dc, int, OCSP_SINGLERESP_get_ext_by_NID , OCSP_SINGLERESP *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
	LP3(0x17e2, int, OCSP_SINGLERESP_get_ext_by_OBJ , OCSP_SINGLERESP *, ___x, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_get_ext_by_critical(___x, ___crit, ___lastpos) \
	LP3(0x17e8, int, OCSP_SINGLERESP_get_ext_by_critical , OCSP_SINGLERESP *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_get_ext(___x, ___loc) \
	LP2(0x17ee, X509_EXTENSION *, OCSP_SINGLERESP_get_ext , OCSP_SINGLERESP *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_delete_ext(___x, ___loc) \
	LP2(0x17f4, X509_EXTENSION *, OCSP_SINGLERESP_delete_ext , OCSP_SINGLERESP *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_get1_ext_d2i(___x, ___nid, ___crit, ___idx) \
	LP4(0x17fa, void *, OCSP_SINGLERESP_get1_ext_d2i , OCSP_SINGLERESP *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
	, AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
	LP5(0x1800, int, OCSP_SINGLERESP_add1_ext_i2d , OCSP_SINGLERESP *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
	, AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_add_ext(___x, ___ex, ___loc) \
	LP3(0x1806, int, OCSP_SINGLERESP_add_ext , OCSP_SINGLERESP *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_new() \
	LP0(0x180c, OCSP_SINGLERESP *, OCSP_SINGLERESP_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_free(___a) \
	LP1NR(0x1812, OCSP_SINGLERESP_free , OCSP_SINGLERESP *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_SINGLERESP(___a, ___in, ___len) \
	LP3(0x1818, OCSP_SINGLERESP *, d2i_OCSP_SINGLERESP , OCSP_SINGLERESP **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_SINGLERESP(___a, ___out) \
	LP2(0x181e, int, i2d_OCSP_SINGLERESP , OCSP_SINGLERESP *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_SINGLERESP_it() \
	LP0(0x1824, const ASN1_ITEM *, OCSP_SINGLERESP_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_CERTSTATUS_new() \
	LP0(0x182a, OCSP_CERTSTATUS *, OCSP_CERTSTATUS_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_CERTSTATUS_free(___a) \
	LP1NR(0x1830, OCSP_CERTSTATUS_free , OCSP_CERTSTATUS *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_CERTSTATUS(___a, ___in, ___len) \
	LP3(0x1836, OCSP_CERTSTATUS *, d2i_OCSP_CERTSTATUS , OCSP_CERTSTATUS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_CERTSTATUS(___a, ___out) \
	LP2(0x183c, int, i2d_OCSP_CERTSTATUS , OCSP_CERTSTATUS *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_CERTSTATUS_it() \
	LP0(0x1842, const ASN1_ITEM *, OCSP_CERTSTATUS_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_REVOKEDINFO_new() \
	LP0(0x1848, OCSP_REVOKEDINFO *, OCSP_REVOKEDINFO_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_REVOKEDINFO_free(___a) \
	LP1NR(0x184e, OCSP_REVOKEDINFO_free , OCSP_REVOKEDINFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_REVOKEDINFO(___a, ___in, ___len) \
	LP3(0x1854, OCSP_REVOKEDINFO *, d2i_OCSP_REVOKEDINFO , OCSP_REVOKEDINFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_REVOKEDINFO(___a, ___out) \
	LP2(0x185a, int, i2d_OCSP_REVOKEDINFO , OCSP_REVOKEDINFO *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_REVOKEDINFO_it() \
	LP0(0x1860, const ASN1_ITEM *, OCSP_REVOKEDINFO_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_BASICRESP_new() \
	LP0(0x1866, OCSP_BASICRESP *, OCSP_BASICRESP_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_BASICRESP_free(___a) \
	LP1NR(0x186c, OCSP_BASICRESP_free , OCSP_BASICRESP *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_BASICRESP(___a, ___in, ___len) \
	LP3(0x1872, OCSP_BASICRESP *, d2i_OCSP_BASICRESP , OCSP_BASICRESP **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_BASICRESP(___a, ___out) \
	LP2(0x1878, int, i2d_OCSP_BASICRESP , OCSP_BASICRESP *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_BASICRESP_it() \
	LP0(0x187e, const ASN1_ITEM *, OCSP_BASICRESP_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPDATA_new() \
	LP0(0x1884, OCSP_RESPDATA *, OCSP_RESPDATA_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPDATA_free(___a) \
	LP1NR(0x188a, OCSP_RESPDATA_free , OCSP_RESPDATA *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_RESPDATA(___a, ___in, ___len) \
	LP3(0x1890, OCSP_RESPDATA *, d2i_OCSP_RESPDATA , OCSP_RESPDATA **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_RESPDATA(___a, ___out) \
	LP2(0x1896, int, i2d_OCSP_RESPDATA , OCSP_RESPDATA *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPDATA_it() \
	LP0(0x189c, const ASN1_ITEM *, OCSP_RESPDATA_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPID_new() \
	LP0(0x18a2, OCSP_RESPID *, OCSP_RESPID_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPID_free(___a) \
	LP1NR(0x18a8, OCSP_RESPID_free , OCSP_RESPID *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_RESPID(___a, ___in, ___len) \
	LP3(0x18ae, OCSP_RESPID *, d2i_OCSP_RESPID , OCSP_RESPID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_RESPID(___a, ___out) \
	LP2(0x18b4, int, i2d_OCSP_RESPID , OCSP_RESPID *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPID_it() \
	LP0(0x18ba, const ASN1_ITEM *, OCSP_RESPID_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPONSE_new() \
	LP0(0x18c0, OCSP_RESPONSE *, OCSP_RESPONSE_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPONSE_free(___a) \
	LP1NR(0x18c6, OCSP_RESPONSE_free , OCSP_RESPONSE *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_RESPONSE(___a, ___in, ___len) \
	LP3(0x18cc, OCSP_RESPONSE *, d2i_OCSP_RESPONSE , OCSP_RESPONSE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_RESPONSE(___a, ___out) \
	LP2(0x18d2, int, i2d_OCSP_RESPONSE , OCSP_RESPONSE *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPONSE_it() \
	LP0(0x18d8, const ASN1_ITEM *, OCSP_RESPONSE_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPBYTES_new() \
	LP0(0x18de, OCSP_RESPBYTES *, OCSP_RESPBYTES_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPBYTES_free(___a) \
	LP1NR(0x18e4, OCSP_RESPBYTES_free , OCSP_RESPBYTES *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_RESPBYTES(___a, ___in, ___len) \
	LP3(0x18ea, OCSP_RESPBYTES *, d2i_OCSP_RESPBYTES , OCSP_RESPBYTES **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_RESPBYTES(___a, ___out) \
	LP2(0x18f0, int, i2d_OCSP_RESPBYTES , OCSP_RESPBYTES *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPBYTES_it() \
	LP0(0x18f6, const ASN1_ITEM *, OCSP_RESPBYTES_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_ONEREQ_new() \
	LP0(0x18fc, OCSP_ONEREQ *, OCSP_ONEREQ_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_ONEREQ_free(___a) \
	LP1NR(0x1902, OCSP_ONEREQ_free , OCSP_ONEREQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_ONEREQ(___a, ___in, ___len) \
	LP3(0x1908, OCSP_ONEREQ *, d2i_OCSP_ONEREQ , OCSP_ONEREQ **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_ONEREQ(___a, ___out) \
	LP2(0x190e, int, i2d_OCSP_ONEREQ , OCSP_ONEREQ *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_ONEREQ_it() \
	LP0(0x1914, const ASN1_ITEM *, OCSP_ONEREQ_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_CERTID_new() \
	LP0(0x191a, OCSP_CERTID *, OCSP_CERTID_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_CERTID_free(___a) \
	LP1NR(0x1920, OCSP_CERTID_free , OCSP_CERTID *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_CERTID(___a, ___in, ___len) \
	LP3(0x1926, OCSP_CERTID *, d2i_OCSP_CERTID , OCSP_CERTID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_CERTID(___a, ___out) \
	LP2(0x192c, int, i2d_OCSP_CERTID , OCSP_CERTID *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_CERTID_it() \
	LP0(0x1932, const ASN1_ITEM *, OCSP_CERTID_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_new() \
	LP0(0x1938, OCSP_REQUEST *, OCSP_REQUEST_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_free(___a) \
	LP1NR(0x193e, OCSP_REQUEST_free , OCSP_REQUEST *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_REQUEST(___a, ___in, ___len) \
	LP3(0x1944, OCSP_REQUEST *, d2i_OCSP_REQUEST , OCSP_REQUEST **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_REQUEST(___a, ___out) \
	LP2(0x194a, int, i2d_OCSP_REQUEST , OCSP_REQUEST *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_it() \
	LP0(0x1950, const ASN1_ITEM *, OCSP_REQUEST_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_SIGNATURE_new() \
	LP0(0x1956, OCSP_SIGNATURE *, OCSP_SIGNATURE_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_SIGNATURE_free(___a) \
	LP1NR(0x195c, OCSP_SIGNATURE_free , OCSP_SIGNATURE *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_SIGNATURE(___a, ___in, ___len) \
	LP3(0x1962, OCSP_SIGNATURE *, d2i_OCSP_SIGNATURE , OCSP_SIGNATURE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_SIGNATURE(___a, ___out) \
	LP2(0x1968, int, i2d_OCSP_SIGNATURE , OCSP_SIGNATURE *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_SIGNATURE_it() \
	LP0(0x196e, const ASN1_ITEM *, OCSP_SIGNATURE_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_REQINFO_new() \
	LP0(0x1974, OCSP_REQINFO *, OCSP_REQINFO_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_REQINFO_free(___a) \
	LP1NR(0x197a, OCSP_REQINFO_free , OCSP_REQINFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_REQINFO(___a, ___in, ___len) \
	LP3(0x1980, OCSP_REQINFO *, d2i_OCSP_REQINFO , OCSP_REQINFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_REQINFO(___a, ___out) \
	LP2(0x1986, int, i2d_OCSP_REQINFO , OCSP_REQINFO *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_REQINFO_it() \
	LP0(0x198c, const ASN1_ITEM *, OCSP_REQINFO_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_CRLID_new() \
	LP0(0x1992, OCSP_CRLID *, OCSP_CRLID_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_CRLID_free(___a) \
	LP1NR(0x1998, OCSP_CRLID_free , OCSP_CRLID *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_CRLID(___a, ___in, ___len) \
	LP3(0x199e, OCSP_CRLID *, d2i_OCSP_CRLID , OCSP_CRLID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_CRLID(___a, ___out) \
	LP2(0x19a4, int, i2d_OCSP_CRLID , OCSP_CRLID *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_CRLID_it() \
	LP0(0x19aa, const ASN1_ITEM *, OCSP_CRLID_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_SERVICELOC_new() \
	LP0(0x19b0, OCSP_SERVICELOC *, OCSP_SERVICELOC_new ,\
	, AMISSL_BASE_NAME)

#define OCSP_SERVICELOC_free(___a) \
	LP1NR(0x19b6, OCSP_SERVICELOC_free , OCSP_SERVICELOC *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OCSP_SERVICELOC(___a, ___in, ___len) \
	LP3(0x19bc, OCSP_SERVICELOC *, d2i_OCSP_SERVICELOC , OCSP_SERVICELOC **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OCSP_SERVICELOC(___a, ___out) \
	LP2(0x19c2, int, i2d_OCSP_SERVICELOC , OCSP_SERVICELOC *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_SERVICELOC_it() \
	LP0(0x19c8, const ASN1_ITEM *, OCSP_SERVICELOC_it ,\
	, AMISSL_BASE_NAME)

#define OCSP_response_status_str(___s) \
	LP1(0x19ce, const char *, OCSP_response_status_str , long, ___s, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_cert_status_str(___s) \
	LP1(0x19d4, const char *, OCSP_cert_status_str , long, ___s, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_crl_reason_str(___s) \
	LP1(0x19da, const char *, OCSP_crl_reason_str , long, ___s, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_REQUEST_print(___bp, ___a, ___flags) \
	LP3(0x19e0, int, OCSP_REQUEST_print , BIO *, ___bp, a0, OCSP_REQUEST *, ___a, a1, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_RESPONSE_print(___bp, ___o, ___flags) \
	LP3(0x19e6, int, OCSP_RESPONSE_print , BIO *, ___bp, a0, OCSP_RESPONSE *, ___o, a1, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define OCSP_basic_verify(___bs, ___certs, ___st, ___flags) \
	LP4(0x19ec, int, OCSP_basic_verify , OCSP_BASICRESP *, ___bs, a0, STACK_OF(X509) *, ___certs, a1, X509_STORE *, ___st, a2, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define ERR_load_OCSP_strings() \
	LP0NR(0x19f2, ERR_load_OCSP_strings ,\
	, AMISSL_BASE_NAME)

#define PEM_get_EVP_CIPHER_INFO(___header, ___cipher) \
	LP2(0x19f8, int, PEM_get_EVP_CIPHER_INFO , char *, ___header, a0, EVP_CIPHER_INFO *, ___cipher, a1,\
	, AMISSL_BASE_NAME)

#define PEM_do_header(___cipher, ___data, ___len, ___callback, ___u) \
	LP5(0x19fe, int, PEM_do_header , EVP_CIPHER_INFO *, ___cipher, a0, unsigned char *, ___data, a1, long *, ___len, a2, pem_password_cb *, ___callback, a3, void *, ___u, d0,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio(___bp, ___name, ___header, ___data, ___len) \
	LP5(0x1a04, int, PEM_read_bio , BIO *, ___bp, a0, char **, ___name, a1, char **, ___header, a2, unsigned char **, ___data, a3, long *, ___len, d0,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio(___bp, ___name, ___hdr, ___data, ___len) \
	LP5(0x1a0a, int, PEM_write_bio , BIO *, ___bp, a0, const char *, ___name, a1, char *, ___hdr, a2, unsigned char *, ___data, a3, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define PEM_bytes_read_bio(___pdata, ___plen, ___pnm, ___name, ___bp, ___cb, ___u) \
	LP7(0x1a10, int, PEM_bytes_read_bio , unsigned char **, ___pdata, a0, long *, ___plen, a1, char **, ___pnm, a2, const char *, ___name, a3, BIO *, ___bp, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
	, AMISSL_BASE_NAME)

#define PEM_ASN1_read_bio(___d2i, ___name, ___bp, ___x, ___cb, ___u) \
	LP6(0x1a1c, void *, PEM_ASN1_read_bio , d2i_of_void *, ___d2i, a0, const char *, ___name, a1, BIO *, ___bp, a2, void **, ___x, a3, pem_password_cb *, ___cb, d0, void *, ___u, d1,\
	, AMISSL_BASE_NAME)

#define PEM_ASN1_write_bio(___i2d, ___name, ___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
	LP9(0x1a28, int, PEM_ASN1_write_bio , i2d_of_void *, ___i2d, a0, const char *, ___name, a1, BIO *, ___bp, a2, char *, ___x, a3, const EVP_CIPHER *, ___enc, d0, unsigned char *, ___kstr, d1, int, ___klen, d2, pem_password_cb *, ___cb, d3, void *, ___u, d4,\
	, AMISSL_BASE_NAME)

#define PEM_X509_INFO_read_bio(___bp, ___sk, ___cb, ___u) \
	LP4(0x1a34, STACK_OF(X509_INFO) *, PEM_X509_INFO_read_bio , BIO *, ___bp, a0, STACK_OF(X509_INFO) *, ___sk, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_X509_INFO_write_bio(___bp, ___xi, ___enc, ___kstr, ___klen, ___cd, ___u) \
	LP7(0x1a3a, int, PEM_X509_INFO_write_bio , BIO *, ___bp, a0, X509_INFO *, ___xi, a1, EVP_CIPHER *, ___enc, a2, unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cd, d1, void *, ___u, d2,\
	, AMISSL_BASE_NAME)

#define PEM_SealInit(___ctx, ___type, ___md_type, ___ek, ___ekl, ___iv, ___pubk, ___npubk) \
	LP8(0x1a40, int, PEM_SealInit , PEM_ENCODE_SEAL_CTX *, ___ctx, a0, EVP_CIPHER *, ___type, a1, EVP_MD *, ___md_type, a2, unsigned char **, ___ek, a3, int *, ___ekl, d0, unsigned char *, ___iv, d1, EVP_PKEY **, ___pubk, d2, int, ___npubk, d3,\
	, AMISSL_BASE_NAME)

#define PEM_SealUpdate(___ctx, ___out, ___outl, ___in, ___inl) \
	LP5NR(0x1a46, PEM_SealUpdate , PEM_ENCODE_SEAL_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2, unsigned char *, ___in, a3, int, ___inl, d0,\
	, AMISSL_BASE_NAME)

#define PEM_SealFinal(___ctx, ___sig, ___sigl, ___out, ___outl, ___priv) \
	LP6(0x1a4c, int, PEM_SealFinal , PEM_ENCODE_SEAL_CTX *, ___ctx, a0, unsigned char *, ___sig, a1, int *, ___sigl, a2, unsigned char *, ___out, a3, int *, ___outl, d0, EVP_PKEY *, ___priv, d1,\
	, AMISSL_BASE_NAME)

#define PEM_SignInit(___ctx, ___type) \
	LP2NR(0x1a52, PEM_SignInit , EVP_MD_CTX *, ___ctx, a0, EVP_MD *, ___type, a1,\
	, AMISSL_BASE_NAME)

#define PEM_SignUpdate(___ctx, ___d, ___cnt) \
	LP3NR(0x1a58, PEM_SignUpdate , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___d, a1, unsigned int, ___cnt, d0,\
	, AMISSL_BASE_NAME)

#define PEM_SignFinal(___ctx, ___sigret, ___siglen, ___pkey) \
	LP4(0x1a5e, int, PEM_SignFinal , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___sigret, a1, unsigned int *, ___siglen, a2, EVP_PKEY *, ___pkey, a3,\
	, AMISSL_BASE_NAME)

#define PEM_def_callback(___buf, ___num, ___w, ___key) \
	LP4(0x1a64, int, PEM_def_callback , char *, ___buf, a0, int, ___num, d0, int, ___w, d1, void *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define PEM_proc_type(___buf, ___type) \
	LP2NR(0x1a6a, PEM_proc_type , char *, ___buf, a0, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define PEM_dek_info(___buf, ___type, ___len, ___str) \
	LP4NR(0x1a76, PEM_dek_info , char *, ___buf, a0, const char *, ___type, a1, int, ___len, d0, char *, ___str, a2,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_X509(___bp, ___x, ___cb, ___u) \
	LP4(0x1a7c, X509 *, PEM_read_bio_X509 , BIO *, ___bp, a0, X509 **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_X509(___bp, ___x) \
	LP2(0x1a82, int, PEM_write_bio_X509 , BIO *, ___bp, a0, X509 *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_X509_AUX(___bp, ___x, ___cb, ___u) \
	LP4(0x1a88, X509 *, PEM_read_bio_X509_AUX , BIO *, ___bp, a0, X509 **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_X509_AUX(___bp, ___x) \
	LP2(0x1a8e, int, PEM_write_bio_X509_AUX , BIO *, ___bp, a0, X509 *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_X509_REQ(___bp, ___x, ___cb, ___u) \
	LP4(0x1a94, X509_REQ *, PEM_read_bio_X509_REQ , BIO *, ___bp, a0, X509_REQ **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_X509_REQ(___bp, ___x) \
	LP2(0x1aa0, int, PEM_write_bio_X509_REQ , BIO *, ___bp, a0, X509_REQ *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_X509_REQ_NEW(___bp, ___x) \
	LP2(0x1aa6, int, PEM_write_bio_X509_REQ_NEW , BIO *, ___bp, a0, X509_REQ *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_X509_CRL(___bp, ___x, ___cb, ___u) \
	LP4(0x1aac, X509_CRL *, PEM_read_bio_X509_CRL , BIO *, ___bp, a0, X509_CRL **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_X509_CRL(___bp, ___x) \
	LP2(0x1ab2, int, PEM_write_bio_X509_CRL , BIO *, ___bp, a0, X509_CRL *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_PKCS7(___bp, ___x, ___cb, ___u) \
	LP4(0x1ab8, PKCS7 *, PEM_read_bio_PKCS7 , BIO *, ___bp, a0, PKCS7 **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_PKCS7(___bp, ___x) \
	LP2(0x1abe, int, PEM_write_bio_PKCS7 , BIO *, ___bp, a0, PKCS7 *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_NETSCAPE_CERT_SEQUENCE(___bp, ___x, ___cb, ___u) \
	LP4(0x1ac4, NETSCAPE_CERT_SEQUENCE *, PEM_read_bio_NETSCAPE_CERT_SEQUENCE , BIO *, ___bp, a0, NETSCAPE_CERT_SEQUENCE **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_NETSCAPE_CERT_SEQUENCE(___bp, ___x) \
	LP2(0x1aca, int, PEM_write_bio_NETSCAPE_CERT_SEQUENCE , BIO *, ___bp, a0, NETSCAPE_CERT_SEQUENCE *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_PKCS8(___bp, ___x, ___cb, ___u) \
	LP4(0x1ad0, X509_SIG *, PEM_read_bio_PKCS8 , BIO *, ___bp, a0, X509_SIG **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_PKCS8(___bp, ___x) \
	LP2(0x1ad6, int, PEM_write_bio_PKCS8 , BIO *, ___bp, a0, X509_SIG *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_PKCS8_PRIV_KEY_INFO(___bp, ___x, ___cb, ___u) \
	LP4(0x1adc, PKCS8_PRIV_KEY_INFO *, PEM_read_bio_PKCS8_PRIV_KEY_INFO , BIO *, ___bp, a0, PKCS8_PRIV_KEY_INFO **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_PKCS8_PRIV_KEY_INFO(___bp, ___x) \
	LP2(0x1ae2, int, PEM_write_bio_PKCS8_PRIV_KEY_INFO , BIO *, ___bp, a0, PKCS8_PRIV_KEY_INFO *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_RSAPrivateKey(___bp, ___x, ___cb, ___u) \
	LP4(0x1ae8, RSA *, PEM_read_bio_RSAPrivateKey , BIO *, ___bp, a0, RSA **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_RSAPrivateKey(___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
	LP7(0x1aee, int, PEM_write_bio_RSAPrivateKey , BIO *, ___bp, a0, RSA *, ___x, a1, const EVP_CIPHER *, ___enc, a2, unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_RSAPublicKey(___bp, ___x, ___cb, ___u) \
	LP4(0x1af4, RSA *, PEM_read_bio_RSAPublicKey , BIO *, ___bp, a0, RSA **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_RSAPublicKey(___bp, ___x) \
	LP2(0x1afa, int, PEM_write_bio_RSAPublicKey , BIO *, ___bp, a0, RSA *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_RSA_PUBKEY(___bp, ___x, ___cb, ___u) \
	LP4(0x1b00, RSA *, PEM_read_bio_RSA_PUBKEY , BIO *, ___bp, a0, RSA **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_RSA_PUBKEY(___bp, ___x) \
	LP2(0x1b06, int, PEM_write_bio_RSA_PUBKEY , BIO *, ___bp, a0, RSA *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_DSAPrivateKey(___bp, ___x, ___cb, ___u) \
	LP4(0x1b0c, DSA *, PEM_read_bio_DSAPrivateKey , BIO *, ___bp, a0, DSA **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_DSAPrivateKey(___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
	LP7(0x1b12, int, PEM_write_bio_DSAPrivateKey , BIO *, ___bp, a0, DSA *, ___x, a1, const EVP_CIPHER *, ___enc, a2, unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_DSA_PUBKEY(___bp, ___x, ___cb, ___u) \
	LP4(0x1b18, DSA *, PEM_read_bio_DSA_PUBKEY , BIO *, ___bp, a0, DSA **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_DSA_PUBKEY(___bp, ___x) \
	LP2(0x1b1e, int, PEM_write_bio_DSA_PUBKEY , BIO *, ___bp, a0, DSA *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_DSAparams(___bp, ___x, ___cb, ___u) \
	LP4(0x1b24, DSA *, PEM_read_bio_DSAparams , BIO *, ___bp, a0, DSA **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_DSAparams(___bp, ___x) \
	LP2(0x1b2a, int, PEM_write_bio_DSAparams , BIO *, ___bp, a0, DSA *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_DHparams(___bp, ___x, ___cb, ___u) \
	LP4(0x1b30, DH *, PEM_read_bio_DHparams , BIO *, ___bp, a0, DH **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_DHparams(___bp, ___x) \
	LP2(0x1b36, int, PEM_write_bio_DHparams , BIO *, ___bp, a0, DH *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_PrivateKey(___bp, ___x, ___cb, ___u) \
	LP4(0x1b3c, EVP_PKEY *, PEM_read_bio_PrivateKey , BIO *, ___bp, a0, EVP_PKEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_PrivateKey(___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
	LP7(0x1b42, int, PEM_write_bio_PrivateKey , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1, const EVP_CIPHER *, ___enc, a2, unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_PUBKEY(___bp, ___x, ___cb, ___u) \
	LP4(0x1b48, EVP_PKEY *, PEM_read_bio_PUBKEY , BIO *, ___bp, a0, EVP_PKEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_PUBKEY(___bp, ___x) \
	LP2(0x1b4e, int, PEM_write_bio_PUBKEY , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_PKCS8PrivateKey_nid(___bp, ___x, ___nid, ___kstr, ___klen, ___cb, ___u) \
	LP7(0x1b54, int, PEM_write_bio_PKCS8PrivateKey_nid , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1, int, ___nid, d0, char *, ___kstr, a2, int, ___klen, d1, pem_password_cb *, ___cb, a3, void *, ___u, d2,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_PKCS8PrivateKey(___a, ___b, ___c, ___d, ___a1, ___e, ___f) \
	LP7(0x1b5a, int, PEM_write_bio_PKCS8PrivateKey , BIO *, ___a, a0, EVP_PKEY *, ___b, a1, const EVP_CIPHER *, ___c, a2, char *, ___d, a3, int, ___a1, d0, pem_password_cb *, ___e, d1, void *, ___f, d2,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS8PrivateKey_bio(___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
	LP7(0x1b60, int, i2d_PKCS8PrivateKey_bio , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1, const EVP_CIPHER *, ___enc, a2, char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS8PrivateKey_nid_bio(___bp, ___x, ___nid, ___kstr, ___klen, ___cb, ___u) \
	LP7(0x1b66, int, i2d_PKCS8PrivateKey_nid_bio , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1, int, ___nid, d0, char *, ___kstr, a2, int, ___klen, d1, pem_password_cb *, ___cb, a3, void *, ___u, d2,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS8PrivateKey_bio(___bp, ___x, ___cb, ___u) \
	LP4(0x1b6c, EVP_PKEY *, d2i_PKCS8PrivateKey_bio , BIO *, ___bp, a0, EVP_PKEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define ERR_load_PEM_strings() \
	LP0NR(0x1b72, ERR_load_PEM_strings ,\
	, AMISSL_BASE_NAME)

#define PKCS12_x5092certbag(___x509) \
	LP1(0x1b78, PKCS12_SAFEBAG *, PKCS12_x5092certbag , X509 *, ___x509, a0,\
	, AMISSL_BASE_NAME)

#define PKCS12_x509crl2certbag(___crl) \
	LP1(0x1b7e, PKCS12_SAFEBAG *, PKCS12_x509crl2certbag , X509_CRL *, ___crl, a0,\
	, AMISSL_BASE_NAME)

#define PKCS12_certbag2x509(___bag) \
	LP1(0x1b84, X509 *, PKCS12_certbag2x509 , PKCS12_SAFEBAG *, ___bag, a0,\
	, AMISSL_BASE_NAME)

#define PKCS12_certbag2x509crl(___bag) \
	LP1(0x1b8a, X509_CRL *, PKCS12_certbag2x509crl , PKCS12_SAFEBAG *, ___bag, a0,\
	, AMISSL_BASE_NAME)

#define PKCS12_item_pack_safebag(___obj, ___it, ___nid1, ___nid2) \
	LP4(0x1b90, PKCS12_SAFEBAG *, PKCS12_item_pack_safebag , void *, ___obj, a0, const ASN1_ITEM *, ___it, a1, int, ___nid1, d0, int, ___nid2, d1,\
	, AMISSL_BASE_NAME)

#define PKCS12_MAKE_KEYBAG(___p8) \
	LP1(0x1b96, PKCS12_SAFEBAG *, PKCS12_MAKE_KEYBAG , PKCS8_PRIV_KEY_INFO *, ___p8, a0,\
	, AMISSL_BASE_NAME)

#define PKCS8_decrypt(___p8, ___pass, ___passlen) \
	LP3(0x1b9c, PKCS8_PRIV_KEY_INFO *, PKCS8_decrypt , X509_SIG *, ___p8, a0, const char *, ___pass, a1, int, ___passlen, d0,\
	, AMISSL_BASE_NAME)

#define PKCS12_decrypt_skey(___bag, ___pass, ___passlen) \
	LP3(0x1ba2, PKCS8_PRIV_KEY_INFO *, PKCS12_decrypt_skey , PKCS12_SAFEBAG *, ___bag, a0, const char *, ___pass, a1, int, ___passlen, d0,\
	, AMISSL_BASE_NAME)

#define PKCS8_encrypt(___pbe_nid, ___cipher, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8) \
	LP8(0x1ba8, X509_SIG *, PKCS8_encrypt , int, ___pbe_nid, d0, const EVP_CIPHER *, ___cipher, a0, const char *, ___pass, a1, int, ___passlen, d1, unsigned char *, ___salt, a2, int, ___saltlen, d2, int, ___iter, d3, PKCS8_PRIV_KEY_INFO *, ___p8, a3,\
	, AMISSL_BASE_NAME)

#define PKCS12_MAKE_SHKEYBAG(___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8) \
	LP7(0x1bae, PKCS12_SAFEBAG *, PKCS12_MAKE_SHKEYBAG , int, ___pbe_nid, d0, const char *, ___pass, a0, int, ___passlen, d1, unsigned char *, ___salt, a1, int, ___saltlen, d2, int, ___iter, d3, PKCS8_PRIV_KEY_INFO *, ___p8, a2,\
	, AMISSL_BASE_NAME)

#define PKCS12_pack_p7data(___sk) \
	LP1(0x1bb4, PKCS7 *, PKCS12_pack_p7data , STACK_OF(PKCS12_SAFEBAG) *, ___sk, a0,\
	, AMISSL_BASE_NAME)

#define PKCS12_unpack_p7data(___p7) \
	LP1(0x1bba, STACK_OF(PKCS12_SAFEBAG) *, PKCS12_unpack_p7data , PKCS7 *, ___p7, a0,\
	, AMISSL_BASE_NAME)

#define PKCS12_pack_p7encdata(___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___bags) \
	LP7(0x1bc0, PKCS7 *, PKCS12_pack_p7encdata , int, ___pbe_nid, d0, const char *, ___pass, a0, int, ___passlen, d1, unsigned char *, ___salt, a1, int, ___saltlen, d2, int, ___iter, d3, STACK_OF(PKCS12_SAFEBAG) *, ___bags, a2,\
	, AMISSL_BASE_NAME)

#define PKCS12_unpack_p7encdata(___p7, ___pass, ___passlen) \
	LP3(0x1bc6, STACK_OF(PKCS12_SAFEBAG) *, PKCS12_unpack_p7encdata , PKCS7 *, ___p7, a0, const char *, ___pass, a1, int, ___passlen, d0,\
	, AMISSL_BASE_NAME)

#define PKCS12_pack_authsafes(___p12, ___safes) \
	LP2(0x1bcc, int, PKCS12_pack_authsafes , PKCS12 *, ___p12, a0, STACK_OF(PKCS7) *, ___safes, a1,\
	, AMISSL_BASE_NAME)

#define PKCS12_unpack_authsafes(___p12) \
	LP1(0x1bd2, STACK_OF(PKCS7) *, PKCS12_unpack_authsafes , PKCS12 *, ___p12, a0,\
	, AMISSL_BASE_NAME)

#define PKCS12_add_localkeyid(___bag, ___name, ___namelen) \
	LP3(0x1bd8, int, PKCS12_add_localkeyid , PKCS12_SAFEBAG *, ___bag, a0, unsigned char *, ___name, a1, int, ___namelen, d0,\
	, AMISSL_BASE_NAME)

#define PKCS12_add_friendlyname_asc(___bag, ___name, ___namelen) \
	LP3(0x1bde, int, PKCS12_add_friendlyname_asc , PKCS12_SAFEBAG *, ___bag, a0, const char *, ___name, a1, int, ___namelen, d0,\
	, AMISSL_BASE_NAME)

#define PKCS12_add_CSPName_asc(___bag, ___name, ___namelen) \
	LP3(0x1be4, int, PKCS12_add_CSPName_asc , PKCS12_SAFEBAG *, ___bag, a0, const char *, ___name, a1, int, ___namelen, d0,\
	, AMISSL_BASE_NAME)

#define PKCS12_add_friendlyname_uni(___bag, ___name, ___namelen) \
	LP3(0x1bea, int, PKCS12_add_friendlyname_uni , PKCS12_SAFEBAG *, ___bag, a0, const unsigned char *, ___name, a1, int, ___namelen, d0,\
	, AMISSL_BASE_NAME)

#define PKCS8_add_keyusage(___p8, ___usage) \
	LP2(0x1bf0, int, PKCS8_add_keyusage , PKCS8_PRIV_KEY_INFO *, ___p8, a0, int, ___usage, d0,\
	, AMISSL_BASE_NAME)

#define PKCS12_get_attr_gen(___attrs, ___attr_nid) \
	LP2(0x1bf6, ASN1_TYPE *, PKCS12_get_attr_gen , STACK_OF(X509_ATTRIBUTE) *, ___attrs, a0, int, ___attr_nid, d0,\
	, AMISSL_BASE_NAME)

#define PKCS12_get_friendlyname(___bag) \
	LP1(0x1bfc, char *, PKCS12_get_friendlyname , PKCS12_SAFEBAG *, ___bag, a0,\
	, AMISSL_BASE_NAME)

#define PKCS12_pbe_crypt(___algor, ___pass, ___passlen, ___in, ___inlen, ___data, ___datalen, ___en_de) \
	LP8(0x1c02, unsigned char *, PKCS12_pbe_crypt , X509_ALGOR *, ___algor, a0, const char *, ___pass, a1, int, ___passlen, d0, unsigned char *, ___in, a2, int, ___inlen, d1, unsigned char **, ___data, a3, int *, ___datalen, d2, int, ___en_de, d3,\
	, AMISSL_BASE_NAME)

#define PKCS12_item_decrypt_d2i(___algor, ___it, ___pass, ___passlen, ___oct, ___zbuf) \
	LP6(0x1c08, void *, PKCS12_item_decrypt_d2i , X509_ALGOR *, ___algor, a0, const ASN1_ITEM *, ___it, a1, const char *, ___pass, a2, int, ___passlen, d0, ASN1_OCTET_STRING *, ___oct, a3, int, ___zbuf, d1,\
	, AMISSL_BASE_NAME)

#define PKCS12_item_i2d_encrypt(___algor, ___it, ___pass, ___passlen, ___obj, ___zbuf) \
	LP6(0x1c0e, ASN1_OCTET_STRING *, PKCS12_item_i2d_encrypt , X509_ALGOR *, ___algor, a0, const ASN1_ITEM *, ___it, a1, const char *, ___pass, a2, int, ___passlen, d0, void *, ___obj, a3, int, ___zbuf, d1,\
	, AMISSL_BASE_NAME)

#define PKCS12_init(___mode) \
	LP1(0x1c14, PKCS12 *, PKCS12_init , int, ___mode, d0,\
	, AMISSL_BASE_NAME)

#define PKCS12_key_gen_asc(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type) \
	LP9(0x1c1a, int, PKCS12_key_gen_asc , const char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___id, d2, int, ___iter, d3, int, ___n, d4, unsigned char *, ___out, a2, const EVP_MD *, ___md_type, a3,\
	, AMISSL_BASE_NAME)

#define PKCS12_key_gen_uni(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type) \
	LP9(0x1c20, int, PKCS12_key_gen_uni , unsigned char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___id, d2, int, ___iter, d3, int, ___n, d4, unsigned char *, ___out, a2, const EVP_MD *, ___md_type, a3,\
	, AMISSL_BASE_NAME)

#define PKCS12_PBE_keyivgen(___ctx, ___pass, ___passlen, ___param, ___cipher, ___md_type, ___en_de) \
	LP7(0x1c26, int, PKCS12_PBE_keyivgen , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___cipher, a3, const EVP_MD *, ___md_type, d1, int, ___en_de, d2,\
	, AMISSL_BASE_NAME)

#define PKCS12_gen_mac(___p12, ___pass, ___passlen, ___mac, ___maclen) \
	LP5(0x1c2c, int, PKCS12_gen_mac , PKCS12 *, ___p12, a0, const char *, ___pass, a1, int, ___passlen, d0, unsigned char *, ___mac, a2, unsigned int *, ___maclen, a3,\
	, AMISSL_BASE_NAME)

#define PKCS12_verify_mac(___p12, ___pass, ___passlen) \
	LP3(0x1c32, int, PKCS12_verify_mac , PKCS12 *, ___p12, a0, const char *, ___pass, a1, int, ___passlen, d0,\
	, AMISSL_BASE_NAME)

#define PKCS12_set_mac(___p12, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___md_type) \
	LP7(0x1c38, int, PKCS12_set_mac , PKCS12 *, ___p12, a0, const char *, ___pass, a1, int, ___passlen, d0, unsigned char *, ___salt, a2, int, ___saltlen, d1, int, ___iter, d2, const EVP_MD *, ___md_type, a3,\
	, AMISSL_BASE_NAME)

#define PKCS12_setup_mac(___p12, ___iter, ___salt, ___saltlen, ___md_type) \
	LP5(0x1c3e, int, PKCS12_setup_mac , PKCS12 *, ___p12, a0, int, ___iter, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, const EVP_MD *, ___md_type, a2,\
	, AMISSL_BASE_NAME)

#define OPENSSL_asc2uni(___asc, ___asclen, ___uni, ___unilen) \
	LP4(0x1c44, unsigned char *, OPENSSL_asc2uni , const char *, ___asc, a0, int, ___asclen, d0, unsigned char **, ___uni, a1, int *, ___unilen, a2,\
	, AMISSL_BASE_NAME)

#define OPENSSL_uni2asc(___uni, ___unilen) \
	LP2(0x1c4a, char *, OPENSSL_uni2asc , unsigned char *, ___uni, a0, int, ___unilen, d0,\
	, AMISSL_BASE_NAME)

#define PKCS12_new() \
	LP0(0x1c50, PKCS12 *, PKCS12_new ,\
	, AMISSL_BASE_NAME)

#define PKCS12_free(___a) \
	LP1NR(0x1c56, PKCS12_free , PKCS12 *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS12(___a, ___in, ___len) \
	LP3(0x1c5c, PKCS12 *, d2i_PKCS12 , PKCS12 **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS12(___a, ___out) \
	LP2(0x1c62, int, i2d_PKCS12 , PKCS12 *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS12_it() \
	LP0(0x1c68, const ASN1_ITEM *, PKCS12_it ,\
	, AMISSL_BASE_NAME)

#define PKCS12_MAC_DATA_new() \
	LP0(0x1c6e, PKCS12_MAC_DATA *, PKCS12_MAC_DATA_new ,\
	, AMISSL_BASE_NAME)

#define PKCS12_MAC_DATA_free(___a) \
	LP1NR(0x1c74, PKCS12_MAC_DATA_free , PKCS12_MAC_DATA *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS12_MAC_DATA(___a, ___in, ___len) \
	LP3(0x1c7a, PKCS12_MAC_DATA *, d2i_PKCS12_MAC_DATA , PKCS12_MAC_DATA **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS12_MAC_DATA(___a, ___out) \
	LP2(0x1c80, int, i2d_PKCS12_MAC_DATA , PKCS12_MAC_DATA *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS12_MAC_DATA_it() \
	LP0(0x1c86, const ASN1_ITEM *, PKCS12_MAC_DATA_it ,\
	, AMISSL_BASE_NAME)

#define PKCS12_SAFEBAG_new() \
	LP0(0x1c8c, PKCS12_SAFEBAG *, PKCS12_SAFEBAG_new ,\
	, AMISSL_BASE_NAME)

#define PKCS12_SAFEBAG_free(___a) \
	LP1NR(0x1c92, PKCS12_SAFEBAG_free , PKCS12_SAFEBAG *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS12_SAFEBAG(___a, ___in, ___len) \
	LP3(0x1c98, PKCS12_SAFEBAG *, d2i_PKCS12_SAFEBAG , PKCS12_SAFEBAG **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS12_SAFEBAG(___a, ___out) \
	LP2(0x1c9e, int, i2d_PKCS12_SAFEBAG , PKCS12_SAFEBAG *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS12_SAFEBAG_it() \
	LP0(0x1ca4, const ASN1_ITEM *, PKCS12_SAFEBAG_it ,\
	, AMISSL_BASE_NAME)

#define PKCS12_BAGS_new() \
	LP0(0x1caa, PKCS12_BAGS *, PKCS12_BAGS_new ,\
	, AMISSL_BASE_NAME)

#define PKCS12_BAGS_free(___a) \
	LP1NR(0x1cb0, PKCS12_BAGS_free , PKCS12_BAGS *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS12_BAGS(___a, ___in, ___len) \
	LP3(0x1cb6, PKCS12_BAGS *, d2i_PKCS12_BAGS , PKCS12_BAGS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS12_BAGS(___a, ___out) \
	LP2(0x1cbc, int, i2d_PKCS12_BAGS , PKCS12_BAGS *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS12_BAGS_it() \
	LP0(0x1cc2, const ASN1_ITEM *, PKCS12_BAGS_it ,\
	, AMISSL_BASE_NAME)

#define PKCS12_SAFEBAGS_it() \
	LP0(0x1cc8, const ASN1_ITEM *, PKCS12_SAFEBAGS_it ,\
	, AMISSL_BASE_NAME)

#define PKCS12_AUTHSAFES_it() \
	LP0(0x1cce, const ASN1_ITEM *, PKCS12_AUTHSAFES_it ,\
	, AMISSL_BASE_NAME)

#define PKCS12_PBE_add() \
	LP0NR(0x1cd4, PKCS12_PBE_add ,\
	, AMISSL_BASE_NAME)

#define PKCS12_parse(___p12, ___pass, ___pkey, ___cert, ___ca) \
	LP5(0x1cda, int, PKCS12_parse , PKCS12 *, ___p12, a0, const char *, ___pass, a1, EVP_PKEY **, ___pkey, a2, X509 **, ___cert, a3, STACK_OF(X509) **, ___ca, d0,\
	, AMISSL_BASE_NAME)

#define PKCS12_create(___pass, ___name, ___pkey, ___cert, ___ca, ___nid_key, ___nid_cert, ___iter, ___mac_iter, ___keytype) \
	LP10(0x1ce0, PKCS12 *, PKCS12_create , char *, ___pass, a0, char *, ___name, a1, EVP_PKEY *, ___pkey, a2, X509 *, ___cert, a3, STACK_OF(X509) *, ___ca, d0, int, ___nid_key, d1, int, ___nid_cert, d2, int, ___iter, d3, int, ___mac_iter, d4, int, ___keytype, d5,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS12_bio(___bp, ___p12) \
	LP2(0x1ce6, int, i2d_PKCS12_bio , BIO *, ___bp, a0, PKCS12 *, ___p12, a1,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS12_bio(___bp, ___p12) \
	LP2(0x1cec, PKCS12 *, d2i_PKCS12_bio , BIO *, ___bp, a0, PKCS12 **, ___p12, a1,\
	, AMISSL_BASE_NAME)

#define PKCS12_newpass(___p12, ___oldpass, ___newpass) \
	LP3(0x1cf2, int, PKCS12_newpass , PKCS12 *, ___p12, a0, char *, ___oldpass, a1, char *, ___newpass, a2,\
	, AMISSL_BASE_NAME)

#define ERR_load_PKCS12_strings() \
	LP0NR(0x1cf8, ERR_load_PKCS12_strings ,\
	, AMISSL_BASE_NAME)

#define PKCS7_ISSUER_AND_SERIAL_digest(___data, ___type, ___md, ___len) \
	LP4(0x1cfe, int, PKCS7_ISSUER_AND_SERIAL_digest , PKCS7_ISSUER_AND_SERIAL *, ___data, a0, const EVP_MD *, ___type, a1, unsigned char *, ___md, a2, unsigned int *, ___len, a3,\
	, AMISSL_BASE_NAME)

#define PKCS7_dup(___p7) \
	LP1(0x1d04, PKCS7 *, PKCS7_dup , PKCS7 *, ___p7, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS7_bio(___bp, ___p7) \
	LP2(0x1d0a, PKCS7 *, d2i_PKCS7_bio , BIO *, ___bp, a0, PKCS7 **, ___p7, a1,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS7_bio(___bp, ___p7) \
	LP2(0x1d10, int, i2d_PKCS7_bio , BIO *, ___bp, a0, PKCS7 *, ___p7, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_ISSUER_AND_SERIAL_new() \
	LP0(0x1d16, PKCS7_ISSUER_AND_SERIAL *, PKCS7_ISSUER_AND_SERIAL_new ,\
	, AMISSL_BASE_NAME)

#define PKCS7_ISSUER_AND_SERIAL_free(___a) \
	LP1NR(0x1d1c, PKCS7_ISSUER_AND_SERIAL_free , PKCS7_ISSUER_AND_SERIAL *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS7_ISSUER_AND_SERIAL(___a, ___in, ___len) \
	LP3(0x1d22, PKCS7_ISSUER_AND_SERIAL *, d2i_PKCS7_ISSUER_AND_SERIAL , PKCS7_ISSUER_AND_SERIAL **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS7_ISSUER_AND_SERIAL(___a, ___out) \
	LP2(0x1d28, int, i2d_PKCS7_ISSUER_AND_SERIAL , PKCS7_ISSUER_AND_SERIAL *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_ISSUER_AND_SERIAL_it() \
	LP0(0x1d2e, const ASN1_ITEM *, PKCS7_ISSUER_AND_SERIAL_it ,\
	, AMISSL_BASE_NAME)

#define PKCS7_SIGNER_INFO_new() \
	LP0(0x1d34, PKCS7_SIGNER_INFO *, PKCS7_SIGNER_INFO_new ,\
	, AMISSL_BASE_NAME)

#define PKCS7_SIGNER_INFO_free(___a) \
	LP1NR(0x1d3a, PKCS7_SIGNER_INFO_free , PKCS7_SIGNER_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS7_SIGNER_INFO(___a, ___in, ___len) \
	LP3(0x1d40, PKCS7_SIGNER_INFO *, d2i_PKCS7_SIGNER_INFO , PKCS7_SIGNER_INFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS7_SIGNER_INFO(___a, ___out) \
	LP2(0x1d46, int, i2d_PKCS7_SIGNER_INFO , PKCS7_SIGNER_INFO *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_SIGNER_INFO_it() \
	LP0(0x1d4c, const ASN1_ITEM *, PKCS7_SIGNER_INFO_it ,\
	, AMISSL_BASE_NAME)

#define PKCS7_RECIP_INFO_new() \
	LP0(0x1d52, PKCS7_RECIP_INFO *, PKCS7_RECIP_INFO_new ,\
	, AMISSL_BASE_NAME)

#define PKCS7_RECIP_INFO_free(___a) \
	LP1NR(0x1d58, PKCS7_RECIP_INFO_free , PKCS7_RECIP_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS7_RECIP_INFO(___a, ___in, ___len) \
	LP3(0x1d5e, PKCS7_RECIP_INFO *, d2i_PKCS7_RECIP_INFO , PKCS7_RECIP_INFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS7_RECIP_INFO(___a, ___out) \
	LP2(0x1d64, int, i2d_PKCS7_RECIP_INFO , PKCS7_RECIP_INFO *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_RECIP_INFO_it() \
	LP0(0x1d6a, const ASN1_ITEM *, PKCS7_RECIP_INFO_it ,\
	, AMISSL_BASE_NAME)

#define PKCS7_SIGNED_new() \
	LP0(0x1d70, PKCS7_SIGNED *, PKCS7_SIGNED_new ,\
	, AMISSL_BASE_NAME)

#define PKCS7_SIGNED_free(___a) \
	LP1NR(0x1d76, PKCS7_SIGNED_free , PKCS7_SIGNED *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS7_SIGNED(___a, ___in, ___len) \
	LP3(0x1d7c, PKCS7_SIGNED *, d2i_PKCS7_SIGNED , PKCS7_SIGNED **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS7_SIGNED(___a, ___out) \
	LP2(0x1d82, int, i2d_PKCS7_SIGNED , PKCS7_SIGNED *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_SIGNED_it() \
	LP0(0x1d88, const ASN1_ITEM *, PKCS7_SIGNED_it ,\
	, AMISSL_BASE_NAME)

#define PKCS7_ENC_CONTENT_new() \
	LP0(0x1d8e, PKCS7_ENC_CONTENT *, PKCS7_ENC_CONTENT_new ,\
	, AMISSL_BASE_NAME)

#define PKCS7_ENC_CONTENT_free(___a) \
	LP1NR(0x1d94, PKCS7_ENC_CONTENT_free , PKCS7_ENC_CONTENT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS7_ENC_CONTENT(___a, ___in, ___len) \
	LP3(0x1d9a, PKCS7_ENC_CONTENT *, d2i_PKCS7_ENC_CONTENT , PKCS7_ENC_CONTENT **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS7_ENC_CONTENT(___a, ___out) \
	LP2(0x1da0, int, i2d_PKCS7_ENC_CONTENT , PKCS7_ENC_CONTENT *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_ENC_CONTENT_it() \
	LP0(0x1da6, const ASN1_ITEM *, PKCS7_ENC_CONTENT_it ,\
	, AMISSL_BASE_NAME)

#define PKCS7_ENVELOPE_new() \
	LP0(0x1dac, PKCS7_ENVELOPE *, PKCS7_ENVELOPE_new ,\
	, AMISSL_BASE_NAME)

#define PKCS7_ENVELOPE_free(___a) \
	LP1NR(0x1db2, PKCS7_ENVELOPE_free , PKCS7_ENVELOPE *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS7_ENVELOPE(___a, ___in, ___len) \
	LP3(0x1db8, PKCS7_ENVELOPE *, d2i_PKCS7_ENVELOPE , PKCS7_ENVELOPE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS7_ENVELOPE(___a, ___out) \
	LP2(0x1dbe, int, i2d_PKCS7_ENVELOPE , PKCS7_ENVELOPE *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_ENVELOPE_it() \
	LP0(0x1dc4, const ASN1_ITEM *, PKCS7_ENVELOPE_it ,\
	, AMISSL_BASE_NAME)

#define PKCS7_SIGN_ENVELOPE_new() \
	LP0(0x1dca, PKCS7_SIGN_ENVELOPE *, PKCS7_SIGN_ENVELOPE_new ,\
	, AMISSL_BASE_NAME)

#define PKCS7_SIGN_ENVELOPE_free(___a) \
	LP1NR(0x1dd0, PKCS7_SIGN_ENVELOPE_free , PKCS7_SIGN_ENVELOPE *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS7_SIGN_ENVELOPE(___a, ___in, ___len) \
	LP3(0x1dd6, PKCS7_SIGN_ENVELOPE *, d2i_PKCS7_SIGN_ENVELOPE , PKCS7_SIGN_ENVELOPE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS7_SIGN_ENVELOPE(___a, ___out) \
	LP2(0x1ddc, int, i2d_PKCS7_SIGN_ENVELOPE , PKCS7_SIGN_ENVELOPE *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_SIGN_ENVELOPE_it() \
	LP0(0x1de2, const ASN1_ITEM *, PKCS7_SIGN_ENVELOPE_it ,\
	, AMISSL_BASE_NAME)

#define PKCS7_DIGEST_new() \
	LP0(0x1de8, PKCS7_DIGEST *, PKCS7_DIGEST_new ,\
	, AMISSL_BASE_NAME)

#define PKCS7_DIGEST_free(___a) \
	LP1NR(0x1dee, PKCS7_DIGEST_free , PKCS7_DIGEST *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS7_DIGEST(___a, ___in, ___len) \
	LP3(0x1df4, PKCS7_DIGEST *, d2i_PKCS7_DIGEST , PKCS7_DIGEST **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS7_DIGEST(___a, ___out) \
	LP2(0x1dfa, int, i2d_PKCS7_DIGEST , PKCS7_DIGEST *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_DIGEST_it() \
	LP0(0x1e00, const ASN1_ITEM *, PKCS7_DIGEST_it ,\
	, AMISSL_BASE_NAME)

#define PKCS7_ENCRYPT_new() \
	LP0(0x1e06, PKCS7_ENCRYPT *, PKCS7_ENCRYPT_new ,\
	, AMISSL_BASE_NAME)

#define PKCS7_ENCRYPT_free(___a) \
	LP1NR(0x1e0c, PKCS7_ENCRYPT_free , PKCS7_ENCRYPT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS7_ENCRYPT(___a, ___in, ___len) \
	LP3(0x1e12, PKCS7_ENCRYPT *, d2i_PKCS7_ENCRYPT , PKCS7_ENCRYPT **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS7_ENCRYPT(___a, ___out) \
	LP2(0x1e18, int, i2d_PKCS7_ENCRYPT , PKCS7_ENCRYPT *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_ENCRYPT_it() \
	LP0(0x1e1e, const ASN1_ITEM *, PKCS7_ENCRYPT_it ,\
	, AMISSL_BASE_NAME)

#define PKCS7_new() \
	LP0(0x1e24, PKCS7 *, PKCS7_new ,\
	, AMISSL_BASE_NAME)

#define PKCS7_free(___a) \
	LP1NR(0x1e2a, PKCS7_free , PKCS7 *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS7(___a, ___in, ___len) \
	LP3(0x1e30, PKCS7 *, d2i_PKCS7 , PKCS7 **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS7(___a, ___out) \
	LP2(0x1e36, int, i2d_PKCS7 , PKCS7 *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_it() \
	LP0(0x1e3c, const ASN1_ITEM *, PKCS7_it ,\
	, AMISSL_BASE_NAME)

#define PKCS7_ATTR_SIGN_it() \
	LP0(0x1e42, const ASN1_ITEM *, PKCS7_ATTR_SIGN_it ,\
	, AMISSL_BASE_NAME)

#define PKCS7_ATTR_VERIFY_it() \
	LP0(0x1e48, const ASN1_ITEM *, PKCS7_ATTR_VERIFY_it ,\
	, AMISSL_BASE_NAME)

#define PKCS7_ctrl(___p7, ___cmd, ___larg, ___parg) \
	LP4(0x1e4e, long, PKCS7_ctrl , PKCS7 *, ___p7, a0, int, ___cmd, d0, long, ___larg, d1, char *, ___parg, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_set_type(___p7, ___type) \
	LP2(0x1e54, int, PKCS7_set_type , PKCS7 *, ___p7, a0, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define PKCS7_set_content(___p7, ___p7_data) \
	LP2(0x1e5a, int, PKCS7_set_content , PKCS7 *, ___p7, a0, PKCS7 *, ___p7_data, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_SIGNER_INFO_set(___p7i, ___x509, ___pkey, ___dgst) \
	LP4(0x1e60, int, PKCS7_SIGNER_INFO_set , PKCS7_SIGNER_INFO *, ___p7i, a0, X509 *, ___x509, a1, EVP_PKEY *, ___pkey, a2, const EVP_MD *, ___dgst, a3,\
	, AMISSL_BASE_NAME)

#define PKCS7_add_signer(___p7, ___p7i) \
	LP2(0x1e66, int, PKCS7_add_signer , PKCS7 *, ___p7, a0, PKCS7_SIGNER_INFO *, ___p7i, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_add_certificate(___p7, ___x509) \
	LP2(0x1e6c, int, PKCS7_add_certificate , PKCS7 *, ___p7, a0, X509 *, ___x509, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_add_crl(___p7, ___x509) \
	LP2(0x1e72, int, PKCS7_add_crl , PKCS7 *, ___p7, a0, X509_CRL *, ___x509, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_content_new(___p7, ___nid) \
	LP2(0x1e78, int, PKCS7_content_new , PKCS7 *, ___p7, a0, int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define PKCS7_dataVerify(___cert_store, ___ctx, ___bio, ___p7, ___si) \
	LP5(0x1e7e, int, PKCS7_dataVerify , X509_STORE *, ___cert_store, a0, X509_STORE_CTX *, ___ctx, a1, BIO *, ___bio, a2, PKCS7 *, ___p7, a3, PKCS7_SIGNER_INFO *, ___si, d0,\
	, AMISSL_BASE_NAME)

#define PKCS7_signatureVerify(___bio, ___p7, ___si, ___x509) \
	LP4(0x1e84, int, PKCS7_signatureVerify , BIO *, ___bio, a0, PKCS7 *, ___p7, a1, PKCS7_SIGNER_INFO *, ___si, a2, X509 *, ___x509, a3,\
	, AMISSL_BASE_NAME)

#define PKCS7_dataInit(___p7, ___bio) \
	LP2(0x1e8a, BIO *, PKCS7_dataInit , PKCS7 *, ___p7, a0, BIO *, ___bio, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_dataFinal(___p7, ___bio) \
	LP2(0x1e90, int, PKCS7_dataFinal , PKCS7 *, ___p7, a0, BIO *, ___bio, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_dataDecode(___p7, ___pkey, ___in_bio, ___pcert) \
	LP4(0x1e96, BIO *, PKCS7_dataDecode , PKCS7 *, ___p7, a0, EVP_PKEY *, ___pkey, a1, BIO *, ___in_bio, a2, X509 *, ___pcert, a3,\
	, AMISSL_BASE_NAME)

#define PKCS7_add_signature(___p7, ___x509, ___pkey, ___dgst) \
	LP4(0x1e9c, PKCS7_SIGNER_INFO *, PKCS7_add_signature , PKCS7 *, ___p7, a0, X509 *, ___x509, a1, EVP_PKEY *, ___pkey, a2, const EVP_MD *, ___dgst, a3,\
	, AMISSL_BASE_NAME)

#define PKCS7_cert_from_signer_info(___p7, ___si) \
	LP2(0x1ea2, X509 *, PKCS7_cert_from_signer_info , PKCS7 *, ___p7, a0, PKCS7_SIGNER_INFO *, ___si, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_get_signer_info(___p7) \
	LP1(0x1ea8, STACK_OF(PKCS7_SIGNER_INFO) *, PKCS7_get_signer_info , PKCS7 *, ___p7, a0,\
	, AMISSL_BASE_NAME)

#define PKCS7_add_recipient(___p7, ___x509) \
	LP2(0x1eae, PKCS7_RECIP_INFO *, PKCS7_add_recipient , PKCS7 *, ___p7, a0, X509 *, ___x509, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_add_recipient_info(___p7, ___ri) \
	LP2(0x1eb4, int, PKCS7_add_recipient_info , PKCS7 *, ___p7, a0, PKCS7_RECIP_INFO *, ___ri, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_RECIP_INFO_set(___p7i, ___x509) \
	LP2(0x1eba, int, PKCS7_RECIP_INFO_set , PKCS7_RECIP_INFO *, ___p7i, a0, X509 *, ___x509, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_set_cipher(___p7, ___cipher) \
	LP2(0x1ec0, int, PKCS7_set_cipher , PKCS7 *, ___p7, a0, const EVP_CIPHER *, ___cipher, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_get_issuer_and_serial(___p7, ___idx) \
	LP2(0x1ec6, PKCS7_ISSUER_AND_SERIAL *, PKCS7_get_issuer_and_serial , PKCS7 *, ___p7, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define PKCS7_digest_from_attributes(___sk) \
	LP1(0x1ecc, ASN1_OCTET_STRING *, PKCS7_digest_from_attributes , STACK_OF(X509_ATTRIBUTE) *, ___sk, a0,\
	, AMISSL_BASE_NAME)

#define PKCS7_add_signed_attribute(___p7si, ___nid, ___type, ___data) \
	LP4(0x1ed2, int, PKCS7_add_signed_attribute , PKCS7_SIGNER_INFO *, ___p7si, a0, int, ___nid, d0, int, ___type, d1, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_add_attribute(___p7si, ___nid, ___atrtype, ___value) \
	LP4(0x1ed8, int, PKCS7_add_attribute , PKCS7_SIGNER_INFO *, ___p7si, a0, int, ___nid, d0, int, ___atrtype, d1, void *, ___value, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_get_attribute(___si, ___nid) \
	LP2(0x1ede, ASN1_TYPE *, PKCS7_get_attribute , PKCS7_SIGNER_INFO *, ___si, a0, int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define PKCS7_get_signed_attribute(___si, ___nid) \
	LP2(0x1ee4, ASN1_TYPE *, PKCS7_get_signed_attribute , PKCS7_SIGNER_INFO *, ___si, a0, int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define PKCS7_set_signed_attributes(___p7si, ___sk) \
	LP2(0x1eea, int, PKCS7_set_signed_attributes , PKCS7_SIGNER_INFO *, ___p7si, a0, STACK_OF(X509_ATTRIBUTE) *, ___sk, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_set_attributes(___p7si, ___sk) \
	LP2(0x1ef0, int, PKCS7_set_attributes , PKCS7_SIGNER_INFO *, ___p7si, a0, STACK_OF(X509_ATTRIBUTE) *, ___sk, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_sign(___signcert, ___pkey, ___certs, ___data, ___flags) \
	LP5(0x1ef6, PKCS7 *, PKCS7_sign , X509 *, ___signcert, a0, EVP_PKEY *, ___pkey, a1, STACK_OF(X509) *, ___certs, a2, BIO *, ___data, a3, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define PKCS7_verify(___p7, ___certs, ___store, ___indata, ___out, ___flags) \
	LP6(0x1efc, int, PKCS7_verify , PKCS7 *, ___p7, a0, STACK_OF(X509) *, ___certs, a1, X509_STORE *, ___store, a2, BIO *, ___indata, a3, BIO *, ___out, d0, int, ___flags, d1,\
	, AMISSL_BASE_NAME)

#define PKCS7_get0_signers(___p7, ___certs, ___flags) \
	LP3(0x1f02, STACK_OF(X509) *, PKCS7_get0_signers , PKCS7 *, ___p7, a0, STACK_OF(X509) *, ___certs, a1, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define PKCS7_encrypt(___certs, ___in, ___cipher, ___flags) \
	LP4(0x1f08, PKCS7 *, PKCS7_encrypt , STACK_OF(X509) *, ___certs, a0, BIO *, ___in, a1, const EVP_CIPHER *, ___cipher, a2, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define PKCS7_decrypt(___p7, ___pkey, ___cert, ___data, ___flags) \
	LP5(0x1f0e, int, PKCS7_decrypt , PKCS7 *, ___p7, a0, EVP_PKEY *, ___pkey, a1, X509 *, ___cert, a2, BIO *, ___data, a3, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define PKCS7_add_attrib_smimecap(___si, ___cap) \
	LP2(0x1f14, int, PKCS7_add_attrib_smimecap , PKCS7_SIGNER_INFO *, ___si, a0, STACK_OF(X509_ALGOR) *, ___cap, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_get_smimecap(___si) \
	LP1(0x1f1a, STACK_OF(X509_ALGOR) *, PKCS7_get_smimecap , PKCS7_SIGNER_INFO *, ___si, a0,\
	, AMISSL_BASE_NAME)

#define PKCS7_simple_smimecap(___sk, ___nid, ___arg) \
	LP3(0x1f20, int, PKCS7_simple_smimecap , STACK_OF(X509_ALGOR) *, ___sk, a0, int, ___nid, d0, int, ___arg, d1,\
	, AMISSL_BASE_NAME)

#define SMIME_write_PKCS7(___bio, ___p7, ___data, ___flags) \
	LP4(0x1f26, int, SMIME_write_PKCS7 , BIO *, ___bio, a0, PKCS7 *, ___p7, a1, BIO *, ___data, a2, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define SMIME_read_PKCS7(___bio, ___bcont) \
	LP2(0x1f2c, PKCS7 *, SMIME_read_PKCS7 , BIO *, ___bio, a0, BIO **, ___bcont, a1,\
	, AMISSL_BASE_NAME)

#define SMIME_crlf_copy(___in, ___out, ___flags) \
	LP3(0x1f32, int, SMIME_crlf_copy , BIO *, ___in, a0, BIO *, ___out, a1, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define SMIME_text(___in, ___out) \
	LP2(0x1f38, int, SMIME_text , BIO *, ___in, a0, BIO *, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ERR_load_PKCS7_strings() \
	LP0NR(0x1f3e, ERR_load_PKCS7_strings ,\
	, AMISSL_BASE_NAME)

#define RAND_set_rand_method(___meth) \
	LP1(0x1f44, int, RAND_set_rand_method , const RAND_METHOD *, ___meth, a0,\
	, AMISSL_BASE_NAME)

#define RAND_get_rand_method() \
	LP0(0x1f4a, const RAND_METHOD *, RAND_get_rand_method ,\
	, AMISSL_BASE_NAME)

#define RAND_SSLeay() \
	LP0(0x1f50, RAND_METHOD *, RAND_SSLeay ,\
	, AMISSL_BASE_NAME)

#define RAND_cleanup() \
	LP0NR(0x1f56, RAND_cleanup ,\
	, AMISSL_BASE_NAME)

#define RAND_bytes(___buf, ___num) \
	LP2(0x1f5c, int, RAND_bytes , unsigned char *, ___buf, a0, int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define RAND_pseudo_bytes(___buf, ___num) \
	LP2(0x1f62, int, RAND_pseudo_bytes , unsigned char *, ___buf, a0, int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define RAND_seed(___buf, ___num) \
	LP2NR(0x1f68, RAND_seed , const void *, ___buf, a0, int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define RAND_add(___buf, ___num, ___entropy) \
	LP3NR(0x1f6e, RAND_add , const void *, ___buf, a0, int, ___num, d0, double, ___entropy, d1,\
	, AMISSL_BASE_NAME)

#define RAND_load_file(___file, ___max_bytes) \
	LP2(0x1f74, int, RAND_load_file , const char *, ___file, a0, long, ___max_bytes, d0,\
	, AMISSL_BASE_NAME)

#define RAND_write_file(___file) \
	LP1(0x1f7a, int, RAND_write_file , const char *, ___file, a0,\
	, AMISSL_BASE_NAME)

#define RAND_file_name(___file, ___num) \
	LP2(0x1f80, const char *, RAND_file_name , char *, ___file, a0, size_t, ___num, d0,\
	, AMISSL_BASE_NAME)

#define RAND_status() \
	LP0(0x1f86, int, RAND_status ,\
	, AMISSL_BASE_NAME)

#define RAND_query_egd_bytes(___path, ___buf, ___bytes) \
	LP3(0x1f8c, int, RAND_query_egd_bytes , const char *, ___path, a0, unsigned char *, ___buf, a1, int, ___bytes, d0,\
	, AMISSL_BASE_NAME)

#define RAND_egd(___path) \
	LP1(0x1f92, int, RAND_egd , const char *, ___path, a0,\
	, AMISSL_BASE_NAME)

#define RAND_egd_bytes(___path, ___bytes) \
	LP2(0x1f98, int, RAND_egd_bytes , const char *, ___path, a0, int, ___bytes, d0,\
	, AMISSL_BASE_NAME)

#define RAND_poll() \
	LP0(0x1f9e, int, RAND_poll ,\
	, AMISSL_BASE_NAME)

#define ERR_load_RAND_strings() \
	LP0NR(0x1fa4, ERR_load_RAND_strings ,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_msg_callback(___ctx, ___cb) \
	LP2NRFP(0x1faa, SSL_CTX_set_msg_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(int write_p,int version,int content_type,const void *buf,size_t len,SSL *ssl,void *arg))

#define SSL_set_msg_callback(___ssl, ___cb) \
	LP2NRFP(0x1fb0, SSL_set_msg_callback , SSL *, ___ssl, a0, __fpt, ___cb, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(int write_p,int version,int content_type,const void *buf,size_t len,SSL *ssl,void *arg))

#define SSL_CTX_sessions(___ctx) \
	LP1(0x1fb6, LHASH_OF(SSL_SESSION) *, SSL_CTX_sessions , SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_finished(___s, ___buf, ___count) \
	LP3(0x1fbc, size_t, SSL_get_finished , const SSL *, ___s, a0, void *, ___buf, a1, size_t, ___count, d0,\
	, AMISSL_BASE_NAME)

#define SSL_get_peer_finished(___s, ___buf, ___count) \
	LP3(0x1fc2, size_t, SSL_get_peer_finished , const SSL *, ___s, a0, void *, ___buf, a1, size_t, ___count, d0,\
	, AMISSL_BASE_NAME)

#define BIO_f_ssl() \
	LP0(0x1fc8, BIO_METHOD *, BIO_f_ssl ,\
	, AMISSL_BASE_NAME)

#define BIO_new_ssl(___ctx, ___client) \
	LP2(0x1fce, BIO *, BIO_new_ssl , SSL_CTX *, ___ctx, a0, int, ___client, d0,\
	, AMISSL_BASE_NAME)

#define BIO_new_ssl_connect(___ctx) \
	LP1(0x1fd4, BIO *, BIO_new_ssl_connect , SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define BIO_new_buffer_ssl_connect(___ctx) \
	LP1(0x1fda, BIO *, BIO_new_buffer_ssl_connect , SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define BIO_ssl_copy_session_id(___to, ___from) \
	LP2(0x1fe0, int, BIO_ssl_copy_session_id , BIO *, ___to, a0, BIO *, ___from, a1,\
	, AMISSL_BASE_NAME)

#define BIO_ssl_shutdown(___ssl_bio) \
	LP1NR(0x1fe6, BIO_ssl_shutdown , BIO *, ___ssl_bio, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_cipher_list(___a, ___str) \
	LP2(0x1fec, int, SSL_CTX_set_cipher_list , SSL_CTX *, ___a, a0, const char *, ___str, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_new(___meth) \
	LP1(0x1ff2, SSL_CTX *, SSL_CTX_new , const SSL_METHOD *, ___meth, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_free(___a) \
	LP1NR(0x1ff8, SSL_CTX_free , SSL_CTX *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_timeout(___ctx, ___t) \
	LP2(0x1ffe, long, SSL_CTX_set_timeout , SSL_CTX *, ___ctx, a0, long, ___t, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_get_timeout(___ctx) \
	LP1(0x2004, long, SSL_CTX_get_timeout , const SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_get_cert_store(___a) \
	LP1(0x200a, X509_STORE *, SSL_CTX_get_cert_store , const SSL_CTX *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_cert_store(___a, ___b) \
	LP2NR(0x2010, SSL_CTX_set_cert_store , SSL_CTX *, ___a, a0, X509_STORE *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define SSL_want(___s) \
	LP1(0x2016, int, SSL_want , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_clear(___s) \
	LP1(0x201c, int, SSL_clear , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_flush_sessions(___ctx, ___tm) \
	LP2NR(0x2022, SSL_CTX_flush_sessions , SSL_CTX *, ___ctx, a0, long, ___tm, d0,\
	, AMISSL_BASE_NAME)

#define SSL_get_current_cipher(___s) \
	LP1(0x2028, const SSL_CIPHER *, SSL_get_current_cipher , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CIPHER_get_bits(___c, ___alg_bits) \
	LP2(0x202e, int, SSL_CIPHER_get_bits , const SSL_CIPHER *, ___c, a0, int *, ___alg_bits, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CIPHER_get_version(___c) \
	LP1(0x2034, char *, SSL_CIPHER_get_version , const SSL_CIPHER *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CIPHER_get_name(___c) \
	LP1(0x203a, const char *, SSL_CIPHER_get_name , const SSL_CIPHER *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CIPHER_get_mac(___cipher) \
	LP1(0x2040, const char *, SSL_CIPHER_get_mac , const SSL_CIPHER *, ___cipher, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CIPHER_get_encryption(___cipher) \
	LP1(0x2046, const char *, SSL_CIPHER_get_encryption , const SSL_CIPHER *, ___cipher, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CIPHER_get_authentication(___cipher) \
	LP1(0x204c, const char *, SSL_CIPHER_get_authentication , const SSL_CIPHER *, ___cipher, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CIPHER_get_key_exchange(___cipher) \
	LP1(0x2052, const char *, SSL_CIPHER_get_key_exchange , const SSL_CIPHER *, ___cipher, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CIPHER_get_export(___cipher) \
	LP1(0x2058, const char *, SSL_CIPHER_get_export , const SSL_CIPHER *, ___cipher, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_fd(___s) \
	LP1(0x205e, int, SSL_get_fd , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_rfd(___s) \
	LP1(0x2064, int, SSL_get_rfd , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_wfd(___s) \
	LP1(0x206a, int, SSL_get_wfd , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_cipher_list(___s, ___n) \
	LP2(0x2070, const char *, SSL_get_cipher_list , const SSL *, ___s, a0, int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define SSL_get_shared_ciphers(___s, ___buf, ___len) \
	LP3(0x2076, char *, SSL_get_shared_ciphers , const SSL *, ___s, a0, char *, ___buf, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define SSL_get_read_ahead(___s) \
	LP1(0x207c, int, SSL_get_read_ahead , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_pending(___s) \
	LP1(0x2082, int, SSL_pending , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_fd(___s, ___fd) \
	LP2(0x2088, int, SSL_set_fd , SSL *, ___s, a0, int, ___fd, d0,\
	, AMISSL_BASE_NAME)

#define SSL_set_rfd(___s, ___fd) \
	LP2(0x208e, int, SSL_set_rfd , SSL *, ___s, a0, int, ___fd, d0,\
	, AMISSL_BASE_NAME)

#define SSL_set_wfd(___s, ___fd) \
	LP2(0x2094, int, SSL_set_wfd , SSL *, ___s, a0, int, ___fd, d0,\
	, AMISSL_BASE_NAME)

#define SSL_set_bio(___s, ___rbio, ___wbio) \
	LP3NR(0x209a, SSL_set_bio , SSL *, ___s, a0, BIO *, ___rbio, a1, BIO *, ___wbio, a2,\
	, AMISSL_BASE_NAME)

#define SSL_get_rbio(___s) \
	LP1(0x20a0, BIO *, SSL_get_rbio , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_wbio(___s) \
	LP1(0x20a6, BIO *, SSL_get_wbio , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_cipher_list(___s, ___str) \
	LP2(0x20ac, int, SSL_set_cipher_list , SSL *, ___s, a0, const char *, ___str, a1,\
	, AMISSL_BASE_NAME)

#define SSL_set_read_ahead(___s, ___yes) \
	LP2NR(0x20b2, SSL_set_read_ahead , SSL *, ___s, a0, int, ___yes, d0,\
	, AMISSL_BASE_NAME)

#define SSL_get_verify_mode(___s) \
	LP1(0x20b8, int, SSL_get_verify_mode , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_verify_depth(___s) \
	LP1(0x20be, int, SSL_get_verify_depth , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_verify_callback(___s) \
	LP1FR(0x20c4, __fpr, SSL_get_verify_callback , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME, int (*__fpr)(int, X509_STORE_CTX *))

#define SSL_set_verify(___s, ___mode, ___callback) \
	LP3NRFP(0x20ca, SSL_set_verify , SSL *, ___s, a0, int, ___mode, d0, __fpt, ___callback, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(int ok,X509_STORE_CTX *ctx))

#define SSL_set_verify_depth(___s, ___depth) \
	LP2NR(0x20d0, SSL_set_verify_depth , SSL *, ___s, a0, int, ___depth, d0,\
	, AMISSL_BASE_NAME)

#define SSL_use_RSAPrivateKey(___ssl, ___rsa) \
	LP2(0x20d6, int, SSL_use_RSAPrivateKey , SSL *, ___ssl, a0, RSA *, ___rsa, a1,\
	, AMISSL_BASE_NAME)

#define SSL_use_RSAPrivateKey_ASN1(___ssl, ___d, ___len) \
	LP3(0x20dc, int, SSL_use_RSAPrivateKey_ASN1 , SSL *, ___ssl, a0, unsigned char *, ___d, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define SSL_use_PrivateKey(___ssl, ___pkey) \
	LP2(0x20e2, int, SSL_use_PrivateKey , SSL *, ___ssl, a0, EVP_PKEY *, ___pkey, a1,\
	, AMISSL_BASE_NAME)

#define SSL_use_PrivateKey_ASN1(___pk, ___ssl, ___d, ___len) \
	LP4(0x20e8, int, SSL_use_PrivateKey_ASN1 , int, ___pk, d0, SSL *, ___ssl, a0, unsigned char *, ___d, a1, long, ___len, d1,\
	, AMISSL_BASE_NAME)

#define SSL_use_certificate(___ssl, ___x) \
	LP2(0x20ee, int, SSL_use_certificate , SSL *, ___ssl, a0, X509 *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define SSL_use_certificate_ASN1(___ssl, ___d, ___len) \
	LP3(0x20f4, int, SSL_use_certificate_ASN1 , SSL *, ___ssl, a0, unsigned char *, ___d, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define SSL_use_RSAPrivateKey_file(___ssl, ___file, ___type) \
	LP3(0x20fa, int, SSL_use_RSAPrivateKey_file , SSL *, ___ssl, a0, const char *, ___file, a1, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define SSL_use_PrivateKey_file(___ssl, ___file, ___type) \
	LP3(0x2100, int, SSL_use_PrivateKey_file , SSL *, ___ssl, a0, const char *, ___file, a1, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define SSL_use_certificate_file(___ssl, ___file, ___type) \
	LP3(0x2106, int, SSL_use_certificate_file , SSL *, ___ssl, a0, const char *, ___file, a1, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_use_RSAPrivateKey_file(___ctx, ___file, ___type) \
	LP3(0x210c, int, SSL_CTX_use_RSAPrivateKey_file , SSL_CTX *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_use_PrivateKey_file(___ctx, ___file, ___type) \
	LP3(0x2112, int, SSL_CTX_use_PrivateKey_file , SSL_CTX *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_use_certificate_file(___ctx, ___file, ___type) \
	LP3(0x2118, int, SSL_CTX_use_certificate_file , SSL_CTX *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_use_certificate_chain_file(___ctx, ___file) \
	LP2(0x211e, int, SSL_CTX_use_certificate_chain_file , SSL_CTX *, ___ctx, a0, const char *, ___file, a1,\
	, AMISSL_BASE_NAME)

#define SSL_load_client_CA_file(___file) \
	LP1(0x2124, STACK_OF(X509_NAME) *, SSL_load_client_CA_file , const char *, ___file, a0,\
	, AMISSL_BASE_NAME)

#define SSL_add_file_cert_subjects_to_stack(___stackCAs, ___file) \
	LP2(0x212a, int, SSL_add_file_cert_subjects_to_stack , STACK_OF(X509_NAME) *, ___stackCAs, a0, const char *, ___file, a1,\
	, AMISSL_BASE_NAME)

#define SSL_add_dir_cert_subjects_to_stack(___stackCAs, ___dir) \
	LP2(0x2130, int, SSL_add_dir_cert_subjects_to_stack , STACK_OF(X509_NAME) *, ___stackCAs, a0, const char *, ___dir, a1,\
	, AMISSL_BASE_NAME)

#define SSL_load_error_strings() \
	LP0NR(0x2136, SSL_load_error_strings ,\
	, AMISSL_BASE_NAME)

#define SSL_state_string(___s) \
	LP1(0x213c, const char *, SSL_state_string , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_rstate_string(___s) \
	LP1(0x2142, const char *, SSL_rstate_string , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_state_string_long(___s) \
	LP1(0x2148, const char *, SSL_state_string_long , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_rstate_string_long(___s) \
	LP1(0x214e, const char *, SSL_rstate_string_long , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_get_time(___s) \
	LP1(0x2154, long, SSL_SESSION_get_time , const SSL_SESSION *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_set_time(___s, ___t) \
	LP2(0x215a, long, SSL_SESSION_set_time , SSL_SESSION *, ___s, a0, long, ___t, d0,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_get_timeout(___s) \
	LP1(0x2160, long, SSL_SESSION_get_timeout , const SSL_SESSION *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_set_timeout(___s, ___t) \
	LP2(0x2166, long, SSL_SESSION_set_timeout , SSL_SESSION *, ___s, a0, long, ___t, d0,\
	, AMISSL_BASE_NAME)

#define SSL_copy_session_id(___to, ___from) \
	LP2NR(0x216c, SSL_copy_session_id , SSL *, ___to, a0, const SSL *, ___from, a1,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_new() \
	LP0(0x2172, SSL_SESSION *, SSL_SESSION_new ,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_print(___fp, ___ses) \
	LP2(0x2178, int, SSL_SESSION_print , BIO *, ___fp, a0, const SSL_SESSION *, ___ses, a1,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_free(___ses) \
	LP1NR(0x2184, SSL_SESSION_free , SSL_SESSION *, ___ses, a0,\
	, AMISSL_BASE_NAME)

#define i2d_SSL_SESSION(___in, ___pp) \
	LP2(0x218a, int, i2d_SSL_SESSION , SSL_SESSION *, ___in, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define SSL_set_session(___to, ___session) \
	LP2(0x2190, int, SSL_set_session , SSL *, ___to, a0, SSL_SESSION *, ___session, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_add_session(___s, ___c) \
	LP2(0x2196, int, SSL_CTX_add_session , SSL_CTX *, ___s, a0, SSL_SESSION *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_remove_session(___a1, ___c) \
	LP2(0x219c, int, SSL_CTX_remove_session , SSL_CTX *, ___a1, a0, SSL_SESSION *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_generate_session_id(___a, ___b) \
	LP2(0x21a2, int, SSL_CTX_set_generate_session_id , SSL_CTX *, ___a, a0, GEN_SESSION_CB, ___b, d0,\
	, AMISSL_BASE_NAME)

#define SSL_set_generate_session_id(___a, ___b) \
	LP2(0x21a8, int, SSL_set_generate_session_id , SSL *, ___a, a0, GEN_SESSION_CB, ___b, d0,\
	, AMISSL_BASE_NAME)

#define SSL_has_matching_session_id(___ssl, ___id, ___id_len) \
	LP3(0x21ae, int, SSL_has_matching_session_id , const SSL *, ___ssl, a0, const unsigned char *, ___id, a1, unsigned int, ___id_len, d0,\
	, AMISSL_BASE_NAME)

#define d2i_SSL_SESSION(___a, ___pp, ___length) \
	LP3(0x21b4, SSL_SESSION *, d2i_SSL_SESSION , SSL_SESSION **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define SSL_get_peer_certificate(___s) \
	LP1(0x21ba, X509 *, SSL_get_peer_certificate , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_peer_cert_chain(___s) \
	LP1(0x21c0, STACK_OF(X509) *, SSL_get_peer_cert_chain , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_get_verify_mode(___ctx) \
	LP1(0x21c6, int, SSL_CTX_get_verify_mode , const SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_get_verify_depth(___ctx) \
	LP1(0x21cc, int, SSL_CTX_get_verify_depth , const SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_get_verify_callback(___ctx) \
	LP1FR(0x21d2, __fpr, SSL_CTX_get_verify_callback , const SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME, int (*__fpr)(int, X509_STORE_CTX *))

#define SSL_CTX_set_verify(___ctx, ___mode, ___callback) \
	LP3NRFP(0x21d8, SSL_CTX_set_verify , SSL_CTX *, ___ctx, a0, int, ___mode, d0, __fpt, ___callback, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(int,X509_STORE_CTX *))

#define SSL_CTX_set_verify_depth(___ctx, ___depth) \
	LP2NR(0x21de, SSL_CTX_set_verify_depth , SSL_CTX *, ___ctx, a0, int, ___depth, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_cert_verify_callback(___ctx, ___cb, ___arg) \
	LP3NRFP(0x21e4, SSL_CTX_set_cert_verify_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1, void *, ___arg, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(X509_STORE_CTX *,void *))

#define SSL_CTX_use_RSAPrivateKey(___ctx, ___rsa) \
	LP2(0x21ea, int, SSL_CTX_use_RSAPrivateKey , SSL_CTX *, ___ctx, a0, RSA *, ___rsa, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_use_RSAPrivateKey_ASN1(___ctx, ___d, ___len) \
	LP3(0x21f0, int, SSL_CTX_use_RSAPrivateKey_ASN1 , SSL_CTX *, ___ctx, a0, unsigned char *, ___d, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_use_PrivateKey(___ctx, ___pkey) \
	LP2(0x21f6, int, SSL_CTX_use_PrivateKey , SSL_CTX *, ___ctx, a0, EVP_PKEY *, ___pkey, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_use_PrivateKey_ASN1(___pk, ___ctx, ___d, ___len) \
	LP4(0x21fc, int, SSL_CTX_use_PrivateKey_ASN1 , int, ___pk, d0, SSL_CTX *, ___ctx, a0, unsigned char *, ___d, a1, long, ___len, d1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_use_certificate(___ctx, ___x) \
	LP2(0x2202, int, SSL_CTX_use_certificate , SSL_CTX *, ___ctx, a0, X509 *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_use_certificate_ASN1(___ctx, ___len, ___d) \
	LP3(0x2208, int, SSL_CTX_use_certificate_ASN1 , SSL_CTX *, ___ctx, a0, int, ___len, d0, unsigned char *, ___d, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_default_passwd_cb(___ctx, ___cb) \
	LP2NR(0x220e, SSL_CTX_set_default_passwd_cb , SSL_CTX *, ___ctx, a0, pem_password_cb *, ___cb, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_default_passwd_cb_userdata(___ctx, ___u) \
	LP2NR(0x2214, SSL_CTX_set_default_passwd_cb_userdata , SSL_CTX *, ___ctx, a0, void *, ___u, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_check_private_key(___ctx) \
	LP1(0x221a, int, SSL_CTX_check_private_key , const SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define SSL_check_private_key(___ctx) \
	LP1(0x2220, int, SSL_check_private_key , const SSL *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_session_id_context(___ctx, ___sid_ctx, ___sid_ctx_len) \
	LP3(0x2226, int, SSL_CTX_set_session_id_context , SSL_CTX *, ___ctx, a0, const unsigned char *, ___sid_ctx, a1, unsigned int, ___sid_ctx_len, d0,\
	, AMISSL_BASE_NAME)

#define SSL_new(___ctx) \
	LP1(0x222c, SSL *, SSL_new , SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_session_id_context(___ssl, ___sid_ctx, ___sid_ctx_len) \
	LP3(0x2232, int, SSL_set_session_id_context , SSL *, ___ssl, a0, const unsigned char *, ___sid_ctx, a1, unsigned int, ___sid_ctx_len, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_purpose(___s, ___purpose) \
	LP2(0x2238, int, SSL_CTX_set_purpose , SSL_CTX *, ___s, a0, int, ___purpose, d0,\
	, AMISSL_BASE_NAME)

#define SSL_set_purpose(___s, ___purpose) \
	LP2(0x223e, int, SSL_set_purpose , SSL *, ___s, a0, int, ___purpose, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_trust(___s, ___trust) \
	LP2(0x2244, int, SSL_CTX_set_trust , SSL_CTX *, ___s, a0, int, ___trust, d0,\
	, AMISSL_BASE_NAME)

#define SSL_set_trust(___s, ___trust) \
	LP2(0x224a, int, SSL_set_trust , SSL *, ___s, a0, int, ___trust, d0,\
	, AMISSL_BASE_NAME)

#define SSL_free(___ssl) \
	LP1NR(0x2250, SSL_free , SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_accept(___ssl) \
	LP1(0x2256, int, SSL_accept , SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_connect(___ssl) \
	LP1(0x225c, int, SSL_connect , SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_read(___ssl, ___buf, ___num) \
	LP3(0x2262, int, SSL_read , SSL *, ___ssl, a0, void *, ___buf, a1, int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define SSL_peek(___ssl, ___buf, ___num) \
	LP3(0x2268, int, SSL_peek , SSL *, ___ssl, a0, void *, ___buf, a1, int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define SSL_write(___ssl, ___buf, ___num) \
	LP3(0x226e, int, SSL_write , SSL *, ___ssl, a0, const void *, ___buf, a1, int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define SSL_ctrl(___ssl, ___cmd, ___larg, ___parg) \
	LP4(0x2274, long, SSL_ctrl , SSL *, ___ssl, a0, int, ___cmd, d0, long, ___larg, d1, void *, ___parg, a1,\
	, AMISSL_BASE_NAME)

#define SSL_callback_ctrl(___a, ___a1, ___b) \
	LP3FP(0x227a, long, SSL_callback_ctrl , SSL *, ___a, a0, int, ___a1, d0, __fpt, ___b, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)())

#define SSL_CTX_ctrl(___ctx, ___cmd, ___larg, ___parg) \
	LP4(0x2280, long, SSL_CTX_ctrl , SSL_CTX *, ___ctx, a0, int, ___cmd, d0, long, ___larg, d1, void *, ___parg, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_callback_ctrl(___a1, ___a2, ___a3) \
	LP3FP(0x2286, long, SSL_CTX_callback_ctrl , SSL_CTX *, ___a1, a0, int, ___a2, d0, __fpt, ___a3, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(void))

#define SSL_get_error(___s, ___ret_code) \
	LP2(0x228c, int, SSL_get_error , const SSL *, ___s, a0, int, ___ret_code, d0,\
	, AMISSL_BASE_NAME)

#define SSL_get_version(___s) \
	LP1(0x2292, const char *, SSL_get_version , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_ssl_version(___ctx, ___meth) \
	LP2(0x2298, int, SSL_CTX_set_ssl_version , SSL_CTX *, ___ctx, a0, const SSL_METHOD *, ___meth, a1,\
	, AMISSL_BASE_NAME)

#define SSLv2_method() \
	LP0(0x229e, const SSL_METHOD *, SSLv2_method ,\
	, AMISSL_BASE_NAME)

#define SSLv2_server_method() \
	LP0(0x22a4, const SSL_METHOD *, SSLv2_server_method ,\
	, AMISSL_BASE_NAME)

#define SSLv2_client_method() \
	LP0(0x22aa, const SSL_METHOD *, SSLv2_client_method ,\
	, AMISSL_BASE_NAME)

#define SSLv3_method() \
	LP0(0x22b0, const SSL_METHOD *, SSLv3_method ,\
	, AMISSL_BASE_NAME)

#define SSLv3_server_method() \
	LP0(0x22b6, const SSL_METHOD *, SSLv3_server_method ,\
	, AMISSL_BASE_NAME)

#define SSLv3_client_method() \
	LP0(0x22bc, const SSL_METHOD *, SSLv3_client_method ,\
	, AMISSL_BASE_NAME)

#define SSLv23_method() \
	LP0(0x22c2, const SSL_METHOD *, SSLv23_method ,\
	, AMISSL_BASE_NAME)

#define SSLv23_server_method() \
	LP0(0x22c8, const SSL_METHOD *, SSLv23_server_method ,\
	, AMISSL_BASE_NAME)

#define SSLv23_client_method() \
	LP0(0x22ce, const SSL_METHOD *, SSLv23_client_method ,\
	, AMISSL_BASE_NAME)

#define TLSv1_method() \
	LP0(0x22d4, const SSL_METHOD *, TLSv1_method ,\
	, AMISSL_BASE_NAME)

#define TLSv1_server_method() \
	LP0(0x22da, const SSL_METHOD *, TLSv1_server_method ,\
	, AMISSL_BASE_NAME)

#define TLSv1_client_method() \
	LP0(0x22e0, const SSL_METHOD *, TLSv1_client_method ,\
	, AMISSL_BASE_NAME)

#define SSL_get_ciphers(___s) \
	LP1(0x22e6, STACK_OF(SSL_CIPHER) *, SSL_get_ciphers , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_do_handshake(___s) \
	LP1(0x22ec, int, SSL_do_handshake , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_renegotiate(___s) \
	LP1(0x22f2, int, SSL_renegotiate , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_renegotiate_pending(___s) \
	LP1(0x22f8, int, SSL_renegotiate_pending , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_shutdown(___s) \
	LP1(0x22fe, int, SSL_shutdown , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_ssl_method(___s) \
	LP1(0x2304, const SSL_METHOD *, SSL_get_ssl_method , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_ssl_method(___s, ___method) \
	LP2(0x230a, int, SSL_set_ssl_method , SSL *, ___s, a0, SSL_METHOD *, ___method, a1,\
	, AMISSL_BASE_NAME)

#define SSL_alert_type_string_long(___value) \
	LP1(0x2310, const char *, SSL_alert_type_string_long , int, ___value, d0,\
	, AMISSL_BASE_NAME)

#define SSL_alert_type_string(___value) \
	LP1(0x2316, const char *, SSL_alert_type_string , int, ___value, d0,\
	, AMISSL_BASE_NAME)

#define SSL_alert_desc_string_long(___value) \
	LP1(0x231c, const char *, SSL_alert_desc_string_long , int, ___value, d0,\
	, AMISSL_BASE_NAME)

#define SSL_alert_desc_string(___value) \
	LP1(0x2322, const char *, SSL_alert_desc_string , int, ___value, d0,\
	, AMISSL_BASE_NAME)

#define SSL_set_client_CA_list(___s, ___name_list) \
	LP2NR(0x2328, SSL_set_client_CA_list , SSL *, ___s, a0, STACK_OF(X509_NAME) *, ___name_list, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_client_CA_list(___ctx, ___name_list) \
	LP2NR(0x232e, SSL_CTX_set_client_CA_list , SSL_CTX *, ___ctx, a0, STACK_OF(X509_NAME) *, ___name_list, a1,\
	, AMISSL_BASE_NAME)

#define SSL_get_client_CA_list(___s) \
	LP1(0x2334, STACK_OF(X509_NAME) *, SSL_get_client_CA_list , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_get_client_CA_list(___s) \
	LP1(0x233a, STACK_OF(X509_NAME) *, SSL_CTX_get_client_CA_list , const SSL_CTX *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_add_client_CA(___ssl, ___x) \
	LP2(0x2340, int, SSL_add_client_CA , SSL *, ___ssl, a0, X509 *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_add_client_CA(___ctx, ___x) \
	LP2(0x2346, int, SSL_CTX_add_client_CA , SSL_CTX *, ___ctx, a0, X509 *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define SSL_set_connect_state(___s) \
	LP1NR(0x234c, SSL_set_connect_state , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_accept_state(___s) \
	LP1NR(0x2352, SSL_set_accept_state , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_default_timeout(___s) \
	LP1(0x2358, long, SSL_get_default_timeout , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_library_init() \
	LP0(0x235e, int, SSL_library_init ,\
	, AMISSL_BASE_NAME)

#define SSL_CIPHER_description(___a1, ___buf, ___size) \
	LP3(0x2364, char *, SSL_CIPHER_description , SSL_CIPHER *, ___a1, a0, char *, ___buf, a1, int, ___size, d0,\
	, AMISSL_BASE_NAME)

#define SSL_dup_CA_list(___sk) \
	LP1(0x236a, STACK_OF(X509_NAME) *, SSL_dup_CA_list , STACK_OF(X509_NAME) *, ___sk, a0,\
	, AMISSL_BASE_NAME)

#define SSL_dup(___ssl) \
	LP1(0x2370, SSL *, SSL_dup , SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_certificate(___ssl) \
	LP1(0x2376, X509 *, SSL_get_certificate , const SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_privatekey(___ssl) \
	LP1(0x237c, struct evp_pkey_st *, SSL_get_privatekey , SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_quiet_shutdown(___ctx, ___mode) \
	LP2NR(0x2382, SSL_CTX_set_quiet_shutdown , SSL_CTX *, ___ctx, a0, int, ___mode, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_get_quiet_shutdown(___ctx) \
	LP1(0x2388, int, SSL_CTX_get_quiet_shutdown , const SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_quiet_shutdown(___ssl, ___mode) \
	LP2NR(0x238e, SSL_set_quiet_shutdown , SSL *, ___ssl, a0, int, ___mode, d0,\
	, AMISSL_BASE_NAME)

#define SSL_get_quiet_shutdown(___ssl) \
	LP1(0x2394, int, SSL_get_quiet_shutdown , const SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_shutdown(___ssl, ___mode) \
	LP2NR(0x239a, SSL_set_shutdown , SSL *, ___ssl, a0, int, ___mode, d0,\
	, AMISSL_BASE_NAME)

#define SSL_get_shutdown(___ssl) \
	LP1(0x23a0, int, SSL_get_shutdown , const SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_version(___ssl) \
	LP1(0x23a6, int, SSL_version , const SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_default_verify_paths(___ctx) \
	LP1(0x23ac, int, SSL_CTX_set_default_verify_paths , SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_load_verify_locations(___ctx, ___CAfile, ___CApath) \
	LP3(0x23b2, int, SSL_CTX_load_verify_locations , SSL_CTX *, ___ctx, a0, const char *, ___CAfile, a1, const char *, ___CApath, a2,\
	, AMISSL_BASE_NAME)

#define SSL_get_session(___ssl) \
	LP1(0x23b8, SSL_SESSION *, SSL_get_session , const SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get1_session(___ssl) \
	LP1(0x23be, SSL_SESSION *, SSL_get1_session , SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_SSL_CTX(___ssl) \
	LP1(0x23c4, SSL_CTX *, SSL_get_SSL_CTX , const SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_info_callback(___ssl, ___cb) \
	LP2NRFP(0x23ca, SSL_set_info_callback , SSL *, ___ssl, a0, __fpt, ___cb, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(const SSL *ssl,int type,int val))

#define SSL_get_info_callback(___ssl) \
	LP1FR(0x23d0, __fpr, SSL_get_info_callback , const SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME, void (*__fpr)(const SSL *ssl, int type, int val))

#define SSL_state(___ssl) \
	LP1(0x23d6, int, SSL_state , const SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_verify_result(___ssl, ___v) \
	LP2NR(0x23dc, SSL_set_verify_result , SSL *, ___ssl, a0, long, ___v, d0,\
	, AMISSL_BASE_NAME)

#define SSL_get_verify_result(___ssl) \
	LP1(0x23e2, long, SSL_get_verify_result , const SSL *, ___ssl, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_ex_data(___ssl, ___idx, ___data) \
	LP3(0x23e8, int, SSL_set_ex_data , SSL *, ___ssl, a0, int, ___idx, d0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define SSL_get_ex_data(___ssl, ___idx) \
	LP2(0x23ee, void *, SSL_get_ex_data , const SSL *, ___ssl, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define SSL_get_ex_new_index(___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP5(0x23f4, int, SSL_get_ex_new_index , long, ___argl, d0, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_set_ex_data(___ss, ___idx, ___data) \
	LP3(0x23fa, int, SSL_SESSION_set_ex_data , SSL_SESSION *, ___ss, a0, int, ___idx, d0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_get_ex_data(___ss, ___idx) \
	LP2(0x2400, void *, SSL_SESSION_get_ex_data , const SSL_SESSION *, ___ss, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_get_ex_new_index(___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP5(0x2406, int, SSL_SESSION_get_ex_new_index , long, ___argl, d0, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_ex_data(___ssl, ___idx, ___data) \
	LP3(0x240c, int, SSL_CTX_set_ex_data , SSL_CTX *, ___ssl, a0, int, ___idx, d0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_get_ex_data(___ssl, ___idx) \
	LP2(0x2412, void *, SSL_CTX_get_ex_data , const SSL_CTX *, ___ssl, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_get_ex_new_index(___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP5(0x2418, int, SSL_CTX_get_ex_new_index , long, ___argl, d0, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define SSL_get_ex_data_X509_STORE_CTX_idx() \
	LP0(0x241e, int, SSL_get_ex_data_X509_STORE_CTX_idx ,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_tmp_rsa_callback(___ctx, ___cb) \
	LP2NRFP(0x2424, SSL_CTX_set_tmp_rsa_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
	, AMISSL_BASE_NAME, RSA * (*__fpt)(SSL *ssl,int is_export,int keylength))

#define SSL_set_tmp_rsa_callback(___ssl, ___cb) \
	LP2NRFP(0x242a, SSL_set_tmp_rsa_callback , SSL *, ___ssl, a0, __fpt, ___cb, a1,\
	, AMISSL_BASE_NAME, RSA * (*__fpt)(SSL *ssl,int is_export,int keylength))

#define SSL_CTX_set_tmp_dh_callback(___ctx, ___dh) \
	LP2NRFP(0x2430, SSL_CTX_set_tmp_dh_callback , SSL_CTX *, ___ctx, a0, __fpt, ___dh, a1,\
	, AMISSL_BASE_NAME, DH * (*__fpt)(SSL *ssl,int is_export,int keylength))

#define SSL_set_tmp_dh_callback(___ssl, ___dh) \
	LP2NRFP(0x2436, SSL_set_tmp_dh_callback , SSL *, ___ssl, a0, __fpt, ___dh, a1,\
	, AMISSL_BASE_NAME, DH * (*__fpt)(SSL *ssl,int is_export,int keylength))

#define SSL_COMP_add_compression_method(___id, ___cm) \
	LP2(0x243c, int, SSL_COMP_add_compression_method , int, ___id, d0, COMP_METHOD *, ___cm, a0,\
	, AMISSL_BASE_NAME)

#define ERR_load_SSL_strings() \
	LP0NR(0x2442, ERR_load_SSL_strings ,\
	, AMISSL_BASE_NAME)

#define sk_num(___a) \
	LP1(0x2448, int, sk_num , const _STACK *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define sk_value(___a, ___b) \
	LP2(0x244e, char *, sk_value , const _STACK *, ___a, a0, int, ___b, d0,\
	, AMISSL_BASE_NAME)

#define sk_set(___a, ___b, ___c) \
	LP3(0x2454, char *, sk_set , _STACK *, ___a, a0, int, ___b, d0, char *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define sk_new(___cmp) \
	LP1FP(0x245a, _STACK *, sk_new , __fpt, ___cmp, a0,\
	, AMISSL_BASE_NAME, int (*__fpt)(const void *,const void *))

#define sk_new_null() \
	LP0(0x2460, _STACK *, sk_new_null ,\
	, AMISSL_BASE_NAME)

#define sk_free(___a) \
	LP1NR(0x2466, sk_free , _STACK *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define sk_pop_free(___st, ___func) \
	LP2NRFP(0x246c, sk_pop_free , _STACK *, ___st, a0, __fpt, ___func, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(void *))

#define sk_insert(___sk, ___data, ___where) \
	LP3(0x2472, int, sk_insert , _STACK *, ___sk, a0, char *, ___data, a1, int, ___where, d0,\
	, AMISSL_BASE_NAME)

#define sk_delete(___st, ___loc) \
	LP2(0x2478, char *, sk_delete , _STACK *, ___st, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define sk_delete_ptr(___st, ___p) \
	LP2(0x247e, char *, sk_delete_ptr , _STACK *, ___st, a0, char *, ___p, a1,\
	, AMISSL_BASE_NAME)

#define sk_find(___st, ___data) \
	LP2(0x2484, int, sk_find , _STACK *, ___st, a0, char *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define sk_push(___st, ___data) \
	LP2(0x248a, int, sk_push , _STACK *, ___st, a0, char *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define sk_unshift(___st, ___data) \
	LP2(0x2490, int, sk_unshift , _STACK *, ___st, a0, char *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define sk_shift(___st) \
	LP1(0x2496, char *, sk_shift , _STACK *, ___st, a0,\
	, AMISSL_BASE_NAME)

#define sk_pop(___st) \
	LP1(0x249c, char *, sk_pop , _STACK *, ___st, a0,\
	, AMISSL_BASE_NAME)

#define sk_zero(___st) \
	LP1NR(0x24a2, sk_zero , _STACK *, ___st, a0,\
	, AMISSL_BASE_NAME)

#define sk_set_cmp_func(___sk, ___c) \
	LP2FPFR(0x24a8, __fpr, sk_set_cmp_func , _STACK *, ___sk, a0, __fpt, ___c, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(const void *,const void *), int (*__fpr)(const void *, const void *))

#define sk_dup(___st) \
	LP1(0x24ae, _STACK *, sk_dup , _STACK *, ___st, a0,\
	, AMISSL_BASE_NAME)

#define sk_sort(___st) \
	LP1NR(0x24b4, sk_sort , _STACK *, ___st, a0,\
	, AMISSL_BASE_NAME)

#define FIPS_mode() \
	LP0(0x24ba, int, FIPS_mode ,\
	, AMISSL_BASE_NAME)

#define sk_is_sorted(___st) \
	LP1(0x24c0, int, sk_is_sorted , const _STACK *, ___st, a0,\
	, AMISSL_BASE_NAME)

#define TXT_DB_read(___in, ___num) \
	LP2(0x24c6, TXT_DB *, TXT_DB_read , BIO *, ___in, a0, int, ___num, d0,\
	, AMISSL_BASE_NAME)

#define TXT_DB_write(___out, ___db) \
	LP2(0x24cc, long, TXT_DB_write , BIO *, ___out, a0, TXT_DB *, ___db, a1,\
	, AMISSL_BASE_NAME)

#define TXT_DB_create_index(___db, ___field, ___qual, ___hash, ___cmp) \
	LP5FP(0x24d2, int, TXT_DB_create_index , TXT_DB *, ___db, a0, int, ___field, d0, __fpt, ___qual, a1, LHASH_HASH_FN_TYPE, ___hash, d1, LHASH_COMP_FN_TYPE, ___cmp, d2,\
	, AMISSL_BASE_NAME, int (*__fpt)())

#define TXT_DB_free(___db) \
	LP1NR(0x24d8, TXT_DB_free , TXT_DB *, ___db, a0,\
	, AMISSL_BASE_NAME)

#define TXT_DB_get_by_index(___db, ___idx, ___value) \
	LP3(0x24de, char **, TXT_DB_get_by_index , TXT_DB *, ___db, a0, int, ___idx, d0, char **, ___value, a1,\
	, AMISSL_BASE_NAME)

#define TXT_DB_insert(___db, ___value) \
	LP2(0x24e4, int, TXT_DB_insert , TXT_DB *, ___db, a0, char **, ___value, a1,\
	, AMISSL_BASE_NAME)

#define UI_new() \
	LP0(0x24ea, UI *, UI_new ,\
	, AMISSL_BASE_NAME)

#define UI_new_method(___method) \
	LP1(0x24f0, UI *, UI_new_method , const UI_METHOD *, ___method, a0,\
	, AMISSL_BASE_NAME)

#define UI_free(___ui) \
	LP1NR(0x24f6, UI_free , UI *, ___ui, a0,\
	, AMISSL_BASE_NAME)

#define UI_add_input_string(___ui, ___prompt, ___flags, ___result_buf, ___minsize, ___maxsize) \
	LP6(0x24fc, int, UI_add_input_string , UI *, ___ui, a0, const char *, ___prompt, a1, int, ___flags, d0, char *, ___result_buf, a2, int, ___minsize, d1, int, ___maxsize, d2,\
	, AMISSL_BASE_NAME)

#define UI_dup_input_string(___ui, ___prompt, ___flags, ___result_buf, ___minsize, ___maxsize) \
	LP6(0x2502, int, UI_dup_input_string , UI *, ___ui, a0, const char *, ___prompt, a1, int, ___flags, d0, char *, ___result_buf, a2, int, ___minsize, d1, int, ___maxsize, d2,\
	, AMISSL_BASE_NAME)

#define UI_add_verify_string(___ui, ___prompt, ___flags, ___result_buf, ___minsize, ___maxsize, ___test_buf) \
	LP7(0x2508, int, UI_add_verify_string , UI *, ___ui, a0, const char *, ___prompt, a1, int, ___flags, d0, char *, ___result_buf, a2, int, ___minsize, d1, int, ___maxsize, d2, const char *, ___test_buf, a3,\
	, AMISSL_BASE_NAME)

#define UI_dup_verify_string(___ui, ___prompt, ___flags, ___result_buf, ___minsize, ___maxsize, ___test_buf) \
	LP7(0x250e, int, UI_dup_verify_string , UI *, ___ui, a0, const char *, ___prompt, a1, int, ___flags, d0, char *, ___result_buf, a2, int, ___minsize, d1, int, ___maxsize, d2, const char *, ___test_buf, a3,\
	, AMISSL_BASE_NAME)

#define UI_add_input_boolean(___ui, ___prompt, ___action_desc, ___ok_chars, ___cancel_chars, ___flags, ___result_buf) \
	LP7(0x2514, int, UI_add_input_boolean , UI *, ___ui, a0, const char *, ___prompt, a1, const char *, ___action_desc, a2, const char *, ___ok_chars, a3, const char *, ___cancel_chars, d0, int, ___flags, d1, char *, ___result_buf, d2,\
	, AMISSL_BASE_NAME)

#define UI_dup_input_boolean(___ui, ___prompt, ___action_desc, ___ok_chars, ___cancel_chars, ___flags, ___result_buf) \
	LP7(0x251a, int, UI_dup_input_boolean , UI *, ___ui, a0, const char *, ___prompt, a1, const char *, ___action_desc, a2, const char *, ___ok_chars, a3, const char *, ___cancel_chars, d0, int, ___flags, d1, char *, ___result_buf, d2,\
	, AMISSL_BASE_NAME)

#define UI_add_info_string(___ui, ___text) \
	LP2(0x2520, int, UI_add_info_string , UI *, ___ui, a0, const char *, ___text, a1,\
	, AMISSL_BASE_NAME)

#define UI_dup_info_string(___ui, ___text) \
	LP2(0x2526, int, UI_dup_info_string , UI *, ___ui, a0, const char *, ___text, a1,\
	, AMISSL_BASE_NAME)

#define UI_add_error_string(___ui, ___text) \
	LP2(0x252c, int, UI_add_error_string , UI *, ___ui, a0, const char *, ___text, a1,\
	, AMISSL_BASE_NAME)

#define UI_dup_error_string(___ui, ___text) \
	LP2(0x2532, int, UI_dup_error_string , UI *, ___ui, a0, const char *, ___text, a1,\
	, AMISSL_BASE_NAME)

#define UI_construct_prompt(___ui_method, ___object_desc, ___object_name) \
	LP3(0x2538, char *, UI_construct_prompt , UI *, ___ui_method, a0, const char *, ___object_desc, a1, const char *, ___object_name, a2,\
	, AMISSL_BASE_NAME)

#define UI_add_user_data(___ui, ___user_data) \
	LP2(0x253e, void *, UI_add_user_data , UI *, ___ui, a0, void *, ___user_data, a1,\
	, AMISSL_BASE_NAME)

#define UI_get0_user_data(___ui) \
	LP1(0x2544, void *, UI_get0_user_data , UI *, ___ui, a0,\
	, AMISSL_BASE_NAME)

#define UI_get0_result(___ui, ___i) \
	LP2(0x254a, const char *, UI_get0_result , UI *, ___ui, a0, int, ___i, d0,\
	, AMISSL_BASE_NAME)

#define UI_process(___ui) \
	LP1(0x2550, int, UI_process , UI *, ___ui, a0,\
	, AMISSL_BASE_NAME)

#define UI_ctrl(___ui, ___cmd, ___i, ___p, ___f) \
	LP5FP(0x2556, int, UI_ctrl , UI *, ___ui, a0, int, ___cmd, d0, long, ___i, d1, void *, ___p, a1, __fpt, ___f, a2,\
	, AMISSL_BASE_NAME, void (*__fpt)())

#define UI_get_ex_new_index(___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP5(0x255c, int, UI_get_ex_new_index , long, ___argl, d0, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define UI_set_ex_data(___r, ___idx, ___arg) \
	LP3(0x2562, int, UI_set_ex_data , UI *, ___r, a0, int, ___idx, d0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME)

#define UI_get_ex_data(___r, ___idx) \
	LP2(0x2568, void *, UI_get_ex_data , UI *, ___r, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define UI_set_default_method(___meth) \
	LP1NR(0x256e, UI_set_default_method , const UI_METHOD *, ___meth, a0,\
	, AMISSL_BASE_NAME)

#define UI_get_default_method() \
	LP0(0x2574, const UI_METHOD *, UI_get_default_method ,\
	, AMISSL_BASE_NAME)

#define UI_get_method(___ui) \
	LP1(0x257a, const UI_METHOD *, UI_get_method , UI *, ___ui, a0,\
	, AMISSL_BASE_NAME)

#define UI_set_method(___ui, ___meth) \
	LP2(0x2580, const UI_METHOD *, UI_set_method , UI *, ___ui, a0, const UI_METHOD *, ___meth, a1,\
	, AMISSL_BASE_NAME)

#define UI_OpenSSL() \
	LP0(0x2586, UI_METHOD *, UI_OpenSSL ,\
	, AMISSL_BASE_NAME)

#define UI_create_method(___name) \
	LP1(0x258c, UI_METHOD *, UI_create_method , char *, ___name, a0,\
	, AMISSL_BASE_NAME)

#define UI_destroy_method(___ui_method) \
	LP1NR(0x2592, UI_destroy_method , UI_METHOD *, ___ui_method, a0,\
	, AMISSL_BASE_NAME)

#define UI_method_set_opener(___method, ___opener) \
	LP2FP(0x2598, int, UI_method_set_opener , UI_METHOD *, ___method, a0, __fpt, ___opener, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(UI *ui))

#define UI_method_set_writer(___method, ___writer) \
	LP2FP(0x259e, int, UI_method_set_writer , UI_METHOD *, ___method, a0, __fpt, ___writer, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(UI *ui,UI_STRING *uis))

#define UI_method_set_flusher(___method, ___flusher) \
	LP2FP(0x25a4, int, UI_method_set_flusher , UI_METHOD *, ___method, a0, __fpt, ___flusher, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(UI *ui))

#define UI_method_set_reader(___method, ___reader) \
	LP2FP(0x25aa, int, UI_method_set_reader , UI_METHOD *, ___method, a0, __fpt, ___reader, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(UI *ui,UI_STRING *uis))

#define UI_method_set_closer(___method, ___closer) \
	LP2FP(0x25b0, int, UI_method_set_closer , UI_METHOD *, ___method, a0, __fpt, ___closer, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(UI *ui))

#define UI_method_get_opener(___method) \
	LP1FR(0x25b6, __fpr, UI_method_get_opener , UI_METHOD *, ___method, a0,\
	, AMISSL_BASE_NAME, int (*__fpr)(UI *))

#define UI_method_get_writer(___method) \
	LP1FR(0x25bc, __fpr, UI_method_get_writer , UI_METHOD *, ___method, a0,\
	, AMISSL_BASE_NAME, int (*__fpr)(UI *, UI_STRING *))

#define UI_method_get_flusher(___method) \
	LP1FR(0x25c2, __fpr, UI_method_get_flusher , UI_METHOD *, ___method, a0,\
	, AMISSL_BASE_NAME, int (*__fpr)(UI *))

#define UI_method_get_reader(___method) \
	LP1FR(0x25c8, __fpr, UI_method_get_reader , UI_METHOD *, ___method, a0,\
	, AMISSL_BASE_NAME, int (*__fpr)(UI *, UI_STRING *))

#define UI_method_get_closer(___method) \
	LP1FR(0x25ce, __fpr, UI_method_get_closer , UI_METHOD *, ___method, a0,\
	, AMISSL_BASE_NAME, int (*__fpr)(UI *))

#define UI_get_string_type(___uis) \
	LP1(0x25d4, enum UI_string_types, UI_get_string_type , UI_STRING *, ___uis, a0,\
	, AMISSL_BASE_NAME)

#define UI_get_input_flags(___uis) \
	LP1(0x25da, int, UI_get_input_flags , UI_STRING *, ___uis, a0,\
	, AMISSL_BASE_NAME)

#define UI_get0_output_string(___uis) \
	LP1(0x25e0, const char *, UI_get0_output_string , UI_STRING *, ___uis, a0,\
	, AMISSL_BASE_NAME)

#define UI_get0_action_string(___uis) \
	LP1(0x25e6, const char *, UI_get0_action_string , UI_STRING *, ___uis, a0,\
	, AMISSL_BASE_NAME)

#define UI_get0_result_string(___uis) \
	LP1(0x25ec, const char *, UI_get0_result_string , UI_STRING *, ___uis, a0,\
	, AMISSL_BASE_NAME)

#define UI_get0_test_string(___uis) \
	LP1(0x25f2, const char *, UI_get0_test_string , UI_STRING *, ___uis, a0,\
	, AMISSL_BASE_NAME)

#define UI_get_result_minsize(___uis) \
	LP1(0x25f8, int, UI_get_result_minsize , UI_STRING *, ___uis, a0,\
	, AMISSL_BASE_NAME)

#define UI_get_result_maxsize(___uis) \
	LP1(0x25fe, int, UI_get_result_maxsize , UI_STRING *, ___uis, a0,\
	, AMISSL_BASE_NAME)

#define UI_set_result(___ui, ___uis, ___result) \
	LP3(0x2604, int, UI_set_result , UI *, ___ui, a0, UI_STRING *, ___uis, a1, const char *, ___result, a2,\
	, AMISSL_BASE_NAME)

#define UI_UTIL_read_pw_string(___buf, ___length, ___prompt, ___verify) \
	LP4(0x260a, int, UI_UTIL_read_pw_string , char *, ___buf, a0, int, ___length, d0, const char *, ___prompt, a1, int, ___verify, d1,\
	, AMISSL_BASE_NAME)

#define UI_UTIL_read_pw(___buf, ___buff, ___size, ___prompt, ___verify) \
	LP5(0x2610, int, UI_UTIL_read_pw , char *, ___buf, a0, char *, ___buff, a1, int, ___size, d0, const char *, ___prompt, a2, int, ___verify, d1,\
	, AMISSL_BASE_NAME)

#define ERR_load_UI_strings() \
	LP0NR(0x2616, ERR_load_UI_strings ,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_read_pw_string(___buf, ___length, ___prompt, ___verify) \
	LP4(0x261c, int, _ossl_old_des_read_pw_string , char *, ___buf, a0, int, ___length, d0, const char *, ___prompt, a1, int, ___verify, d1,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_read_pw(___buf, ___buff, ___size, ___prompt, ___verify) \
	LP5(0x2622, int, _ossl_old_des_read_pw , char *, ___buf, a0, char *, ___buff, a1, int, ___size, d0, const char *, ___prompt, a2, int, ___verify, d1,\
	, AMISSL_BASE_NAME)

#define X509_verify_cert_error_string(___n) \
	LP1(0x2628, const char *, X509_verify_cert_error_string , long, ___n, d0,\
	, AMISSL_BASE_NAME)

#define X509_verify(___a, ___r) \
	LP2(0x262e, int, X509_verify , X509 *, ___a, a0, EVP_PKEY *, ___r, a1,\
	, AMISSL_BASE_NAME)

#define X509_REQ_verify(___a, ___r) \
	LP2(0x2634, int, X509_REQ_verify , X509_REQ *, ___a, a0, EVP_PKEY *, ___r, a1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_verify(___a, ___r) \
	LP2(0x263a, int, X509_CRL_verify , X509_CRL *, ___a, a0, EVP_PKEY *, ___r, a1,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_verify(___a, ___r) \
	LP2(0x2640, int, NETSCAPE_SPKI_verify , NETSCAPE_SPKI *, ___a, a0, EVP_PKEY *, ___r, a1,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_b64_decode(___str, ___len) \
	LP2(0x2646, NETSCAPE_SPKI *, NETSCAPE_SPKI_b64_decode , const char *, ___str, a0, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_b64_encode(___x) \
	LP1(0x264c, char *, NETSCAPE_SPKI_b64_encode , NETSCAPE_SPKI *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_get_pubkey(___x) \
	LP1(0x2652, EVP_PKEY *, NETSCAPE_SPKI_get_pubkey , NETSCAPE_SPKI *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_set_pubkey(___x, ___pkey) \
	LP2(0x2658, int, NETSCAPE_SPKI_set_pubkey , NETSCAPE_SPKI *, ___x, a0, EVP_PKEY *, ___pkey, a1,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_print(___out, ___spki) \
	LP2(0x265e, int, NETSCAPE_SPKI_print , BIO *, ___out, a0, NETSCAPE_SPKI *, ___spki, a1,\
	, AMISSL_BASE_NAME)

#define X509_signature_print(___bp, ___alg, ___sig) \
	LP3(0x2664, int, X509_signature_print , BIO *, ___bp, a0, X509_ALGOR *, ___alg, a1, ASN1_STRING *, ___sig, a2,\
	, AMISSL_BASE_NAME)

#define X509_sign(___x, ___pkey, ___md) \
	LP3(0x266a, int, X509_sign , X509 *, ___x, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___md, a2,\
	, AMISSL_BASE_NAME)

#define X509_REQ_sign(___x, ___pkey, ___md) \
	LP3(0x2670, int, X509_REQ_sign , X509_REQ *, ___x, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___md, a2,\
	, AMISSL_BASE_NAME)

#define X509_CRL_sign(___x, ___pkey, ___md) \
	LP3(0x2676, int, X509_CRL_sign , X509_CRL *, ___x, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___md, a2,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_sign(___x, ___pkey, ___md) \
	LP3(0x267c, int, NETSCAPE_SPKI_sign , NETSCAPE_SPKI *, ___x, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___md, a2,\
	, AMISSL_BASE_NAME)

#define X509_pubkey_digest(___data, ___type, ___md, ___len) \
	LP4(0x2682, int, X509_pubkey_digest , const X509 *, ___data, a0, const EVP_MD *, ___type, a1, unsigned char *, ___md, a2, unsigned int *, ___len, a3,\
	, AMISSL_BASE_NAME)

#define X509_digest(___data, ___type, ___md, ___len) \
	LP4(0x2688, int, X509_digest , const X509 *, ___data, a0, const EVP_MD *, ___type, a1, unsigned char *, ___md, a2, unsigned int *, ___len, a3,\
	, AMISSL_BASE_NAME)

#define X509_CRL_digest(___data, ___type, ___md, ___len) \
	LP4(0x268e, int, X509_CRL_digest , const X509_CRL *, ___data, a0, const EVP_MD *, ___type, a1, unsigned char *, ___md, a2, unsigned int *, ___len, a3,\
	, AMISSL_BASE_NAME)

#define X509_REQ_digest(___data, ___type, ___md, ___len) \
	LP4(0x2694, int, X509_REQ_digest , const X509_REQ *, ___data, a0, const EVP_MD *, ___type, a1, unsigned char *, ___md, a2, unsigned int *, ___len, a3,\
	, AMISSL_BASE_NAME)

#define X509_NAME_digest(___data, ___type, ___md, ___len) \
	LP4(0x269a, int, X509_NAME_digest , const X509_NAME *, ___data, a0, const EVP_MD *, ___type, a1, unsigned char *, ___md, a2, unsigned int *, ___len, a3,\
	, AMISSL_BASE_NAME)

#define d2i_X509_bio(___bp, ___x509) \
	LP2(0x26a0, X509 *, d2i_X509_bio , BIO *, ___bp, a0, X509 **, ___x509, a1,\
	, AMISSL_BASE_NAME)

#define i2d_X509_bio(___bp, ___x509) \
	LP2(0x26a6, int, i2d_X509_bio , BIO *, ___bp, a0, X509 *, ___x509, a1,\
	, AMISSL_BASE_NAME)

#define d2i_X509_CRL_bio(___bp, ___crl) \
	LP2(0x26ac, X509_CRL *, d2i_X509_CRL_bio , BIO *, ___bp, a0, X509_CRL **, ___crl, a1,\
	, AMISSL_BASE_NAME)

#define i2d_X509_CRL_bio(___bp, ___crl) \
	LP2(0x26b2, int, i2d_X509_CRL_bio , BIO *, ___bp, a0, X509_CRL *, ___crl, a1,\
	, AMISSL_BASE_NAME)

#define d2i_X509_REQ_bio(___bp, ___req) \
	LP2(0x26b8, X509_REQ *, d2i_X509_REQ_bio , BIO *, ___bp, a0, X509_REQ **, ___req, a1,\
	, AMISSL_BASE_NAME)

#define i2d_X509_REQ_bio(___bp, ___req) \
	LP2(0x26be, int, i2d_X509_REQ_bio , BIO *, ___bp, a0, X509_REQ *, ___req, a1,\
	, AMISSL_BASE_NAME)

#define d2i_RSAPrivateKey_bio(___bp, ___rsa) \
	LP2(0x26c4, RSA *, d2i_RSAPrivateKey_bio , BIO *, ___bp, a0, RSA **, ___rsa, a1,\
	, AMISSL_BASE_NAME)

#define i2d_RSAPrivateKey_bio(___bp, ___rsa) \
	LP2(0x26ca, int, i2d_RSAPrivateKey_bio , BIO *, ___bp, a0, RSA *, ___rsa, a1,\
	, AMISSL_BASE_NAME)

#define d2i_RSAPublicKey_bio(___bp, ___rsa) \
	LP2(0x26d0, RSA *, d2i_RSAPublicKey_bio , BIO *, ___bp, a0, RSA **, ___rsa, a1,\
	, AMISSL_BASE_NAME)

#define i2d_RSAPublicKey_bio(___bp, ___rsa) \
	LP2(0x26d6, int, i2d_RSAPublicKey_bio , BIO *, ___bp, a0, RSA *, ___rsa, a1,\
	, AMISSL_BASE_NAME)

#define d2i_RSA_PUBKEY_bio(___bp, ___rsa) \
	LP2(0x26dc, RSA *, d2i_RSA_PUBKEY_bio , BIO *, ___bp, a0, RSA **, ___rsa, a1,\
	, AMISSL_BASE_NAME)

#define i2d_RSA_PUBKEY_bio(___bp, ___rsa) \
	LP2(0x26e2, int, i2d_RSA_PUBKEY_bio , BIO *, ___bp, a0, RSA *, ___rsa, a1,\
	, AMISSL_BASE_NAME)

#define d2i_DSA_PUBKEY_bio(___bp, ___dsa) \
	LP2(0x26e8, DSA *, d2i_DSA_PUBKEY_bio , BIO *, ___bp, a0, DSA **, ___dsa, a1,\
	, AMISSL_BASE_NAME)

#define i2d_DSA_PUBKEY_bio(___bp, ___dsa) \
	LP2(0x26ee, int, i2d_DSA_PUBKEY_bio , BIO *, ___bp, a0, DSA *, ___dsa, a1,\
	, AMISSL_BASE_NAME)

#define d2i_DSAPrivateKey_bio(___bp, ___dsa) \
	LP2(0x26f4, DSA *, d2i_DSAPrivateKey_bio , BIO *, ___bp, a0, DSA **, ___dsa, a1,\
	, AMISSL_BASE_NAME)

#define i2d_DSAPrivateKey_bio(___bp, ___dsa) \
	LP2(0x26fa, int, i2d_DSAPrivateKey_bio , BIO *, ___bp, a0, DSA *, ___dsa, a1,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS8_bio(___bp, ___p8) \
	LP2(0x2700, X509_SIG *, d2i_PKCS8_bio , BIO *, ___bp, a0, X509_SIG **, ___p8, a1,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS8_bio(___bp, ___p8) \
	LP2(0x2706, int, i2d_PKCS8_bio , BIO *, ___bp, a0, X509_SIG *, ___p8, a1,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS8_PRIV_KEY_INFO_bio(___bp, ___p8inf) \
	LP2(0x270c, PKCS8_PRIV_KEY_INFO *, d2i_PKCS8_PRIV_KEY_INFO_bio , BIO *, ___bp, a0, PKCS8_PRIV_KEY_INFO **, ___p8inf, a1,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS8_PRIV_KEY_INFO_bio(___bp, ___p8inf) \
	LP2(0x2712, int, i2d_PKCS8_PRIV_KEY_INFO_bio , BIO *, ___bp, a0, PKCS8_PRIV_KEY_INFO *, ___p8inf, a1,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS8PrivateKeyInfo_bio(___bp, ___key) \
	LP2(0x2718, int, i2d_PKCS8PrivateKeyInfo_bio , BIO *, ___bp, a0, EVP_PKEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define i2d_PrivateKey_bio(___bp, ___pkey) \
	LP2(0x271e, int, i2d_PrivateKey_bio , BIO *, ___bp, a0, EVP_PKEY *, ___pkey, a1,\
	, AMISSL_BASE_NAME)

#define d2i_PrivateKey_bio(___bp, ___a) \
	LP2(0x2724, EVP_PKEY *, d2i_PrivateKey_bio , BIO *, ___bp, a0, EVP_PKEY **, ___a, a1,\
	, AMISSL_BASE_NAME)

#define i2d_PUBKEY_bio(___bp, ___pkey) \
	LP2(0x272a, int, i2d_PUBKEY_bio , BIO *, ___bp, a0, EVP_PKEY *, ___pkey, a1,\
	, AMISSL_BASE_NAME)

#define d2i_PUBKEY_bio(___bp, ___a) \
	LP2(0x2730, EVP_PKEY *, d2i_PUBKEY_bio , BIO *, ___bp, a0, EVP_PKEY **, ___a, a1,\
	, AMISSL_BASE_NAME)

#define X509_dup(___x509) \
	LP1(0x2736, X509 *, X509_dup , X509 *, ___x509, a0,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_dup(___xa) \
	LP1(0x273c, X509_ATTRIBUTE *, X509_ATTRIBUTE_dup , X509_ATTRIBUTE *, ___xa, a0,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSION_dup(___ex) \
	LP1(0x2742, X509_EXTENSION *, X509_EXTENSION_dup , X509_EXTENSION *, ___ex, a0,\
	, AMISSL_BASE_NAME)

#define X509_CRL_dup(___crl) \
	LP1(0x2748, X509_CRL *, X509_CRL_dup , X509_CRL *, ___crl, a0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_dup(___req) \
	LP1(0x274e, X509_REQ *, X509_REQ_dup , X509_REQ *, ___req, a0,\
	, AMISSL_BASE_NAME)

#define X509_ALGOR_dup(___xn) \
	LP1(0x2754, X509_ALGOR *, X509_ALGOR_dup , X509_ALGOR *, ___xn, a0,\
	, AMISSL_BASE_NAME)

#define X509_NAME_dup(___xn) \
	LP1(0x275a, X509_NAME *, X509_NAME_dup , X509_NAME *, ___xn, a0,\
	, AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_dup(___ne) \
	LP1(0x2760, X509_NAME_ENTRY *, X509_NAME_ENTRY_dup , X509_NAME_ENTRY *, ___ne, a0,\
	, AMISSL_BASE_NAME)

#define X509_cmp_time(___s, ___t) \
	LP2(0x2766, int, X509_cmp_time , ASN1_TIME *, ___s, a0, time_t *, ___t, a1,\
	, AMISSL_BASE_NAME)

#define X509_cmp_current_time(___s) \
	LP1(0x276c, int, X509_cmp_current_time , ASN1_TIME *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define X509_time_adj(___s, ___adj, ___t) \
	LP3(0x2772, ASN1_TIME *, X509_time_adj , ASN1_TIME *, ___s, a0, long, ___adj, d0, time_t *, ___t, a1,\
	, AMISSL_BASE_NAME)

#define X509_gmtime_adj(___s, ___adj) \
	LP2(0x2778, ASN1_TIME *, X509_gmtime_adj , ASN1_TIME *, ___s, a0, long, ___adj, d0,\
	, AMISSL_BASE_NAME)

#define X509_get_default_cert_area() \
	LP0(0x277e, const char *, X509_get_default_cert_area ,\
	, AMISSL_BASE_NAME)

#define X509_get_default_cert_dir() \
	LP0(0x2784, const char *, X509_get_default_cert_dir ,\
	, AMISSL_BASE_NAME)

#define X509_get_default_cert_file() \
	LP0(0x278a, const char *, X509_get_default_cert_file ,\
	, AMISSL_BASE_NAME)

#define X509_get_default_cert_dir_env() \
	LP0(0x2790, const char *, X509_get_default_cert_dir_env ,\
	, AMISSL_BASE_NAME)

#define X509_get_default_cert_file_env() \
	LP0(0x2796, const char *, X509_get_default_cert_file_env ,\
	, AMISSL_BASE_NAME)

#define X509_get_default_private_dir() \
	LP0(0x279c, const char *, X509_get_default_private_dir ,\
	, AMISSL_BASE_NAME)

#define X509_to_X509_REQ(___x, ___pkey, ___md) \
	LP3(0x27a2, X509_REQ *, X509_to_X509_REQ , X509 *, ___x, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___md, a2,\
	, AMISSL_BASE_NAME)

#define X509_REQ_to_X509(___r, ___days, ___pkey) \
	LP3(0x27a8, X509 *, X509_REQ_to_X509 , X509_REQ *, ___r, a0, int, ___days, d0, EVP_PKEY *, ___pkey, a1,\
	, AMISSL_BASE_NAME)

#define X509_ALGOR_new() \
	LP0(0x27ae, X509_ALGOR *, X509_ALGOR_new ,\
	, AMISSL_BASE_NAME)

#define X509_ALGOR_free(___a) \
	LP1NR(0x27b4, X509_ALGOR_free , X509_ALGOR *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_ALGOR(___a, ___in, ___len) \
	LP3(0x27ba, X509_ALGOR *, d2i_X509_ALGOR , X509_ALGOR **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_ALGOR(___a, ___out) \
	LP2(0x27c0, int, i2d_X509_ALGOR , X509_ALGOR *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_ALGOR_it() \
	LP0(0x27c6, const ASN1_ITEM *, X509_ALGOR_it ,\
	, AMISSL_BASE_NAME)

#define X509_VAL_new() \
	LP0(0x27cc, X509_VAL *, X509_VAL_new ,\
	, AMISSL_BASE_NAME)

#define X509_VAL_free(___a) \
	LP1NR(0x27d2, X509_VAL_free , X509_VAL *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_VAL(___a, ___in, ___len) \
	LP3(0x27d8, X509_VAL *, d2i_X509_VAL , X509_VAL **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_VAL(___a, ___out) \
	LP2(0x27de, int, i2d_X509_VAL , X509_VAL *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_VAL_it() \
	LP0(0x27e4, const ASN1_ITEM *, X509_VAL_it ,\
	, AMISSL_BASE_NAME)

#define X509_PUBKEY_new() \
	LP0(0x27ea, X509_PUBKEY *, X509_PUBKEY_new ,\
	, AMISSL_BASE_NAME)

#define X509_PUBKEY_free(___a) \
	LP1NR(0x27f0, X509_PUBKEY_free , X509_PUBKEY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_PUBKEY(___a, ___in, ___len) \
	LP3(0x27f6, X509_PUBKEY *, d2i_X509_PUBKEY , X509_PUBKEY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_PUBKEY(___a, ___out) \
	LP2(0x27fc, int, i2d_X509_PUBKEY , X509_PUBKEY *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_PUBKEY_it() \
	LP0(0x2802, const ASN1_ITEM *, X509_PUBKEY_it ,\
	, AMISSL_BASE_NAME)

#define X509_PUBKEY_set(___x, ___pkey) \
	LP2(0x2808, int, X509_PUBKEY_set , X509_PUBKEY **, ___x, a0, EVP_PKEY *, ___pkey, a1,\
	, AMISSL_BASE_NAME)

#define X509_PUBKEY_get(___key) \
	LP1(0x280e, EVP_PKEY *, X509_PUBKEY_get , X509_PUBKEY *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define X509_get_pubkey_parameters(___pkey, ___chain) \
	LP2(0x2814, int, X509_get_pubkey_parameters , EVP_PKEY *, ___pkey, a0, STACK_OF(X509) *, ___chain, a1,\
	, AMISSL_BASE_NAME)

#define i2d_PUBKEY(___a, ___pp) \
	LP2(0x281a, int, i2d_PUBKEY , EVP_PKEY *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define d2i_PUBKEY(___a, ___pp, ___length) \
	LP3(0x2820, EVP_PKEY *, d2i_PUBKEY , EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define i2d_RSA_PUBKEY(___a, ___pp) \
	LP2(0x2826, int, i2d_RSA_PUBKEY , RSA *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define d2i_RSA_PUBKEY(___a, ___pp, ___length) \
	LP3(0x282c, RSA *, d2i_RSA_PUBKEY , RSA **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define i2d_DSA_PUBKEY(___a, ___pp) \
	LP2(0x2832, int, i2d_DSA_PUBKEY , DSA *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define d2i_DSA_PUBKEY(___a, ___pp, ___length) \
	LP3(0x2838, DSA *, d2i_DSA_PUBKEY , DSA **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define X509_SIG_new() \
	LP0(0x283e, X509_SIG *, X509_SIG_new ,\
	, AMISSL_BASE_NAME)

#define X509_SIG_free(___a) \
	LP1NR(0x2844, X509_SIG_free , X509_SIG *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_SIG(___a, ___in, ___len) \
	LP3(0x284a, X509_SIG *, d2i_X509_SIG , X509_SIG **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_SIG(___a, ___out) \
	LP2(0x2850, int, i2d_X509_SIG , X509_SIG *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_SIG_it() \
	LP0(0x2856, const ASN1_ITEM *, X509_SIG_it ,\
	, AMISSL_BASE_NAME)

#define X509_REQ_INFO_new() \
	LP0(0x285c, X509_REQ_INFO *, X509_REQ_INFO_new ,\
	, AMISSL_BASE_NAME)

#define X509_REQ_INFO_free(___a) \
	LP1NR(0x2862, X509_REQ_INFO_free , X509_REQ_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_REQ_INFO(___a, ___in, ___len) \
	LP3(0x2868, X509_REQ_INFO *, d2i_X509_REQ_INFO , X509_REQ_INFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_REQ_INFO(___a, ___out) \
	LP2(0x286e, int, i2d_X509_REQ_INFO , X509_REQ_INFO *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_REQ_INFO_it() \
	LP0(0x2874, const ASN1_ITEM *, X509_REQ_INFO_it ,\
	, AMISSL_BASE_NAME)

#define X509_REQ_new() \
	LP0(0x287a, X509_REQ *, X509_REQ_new ,\
	, AMISSL_BASE_NAME)

#define X509_REQ_free(___a) \
	LP1NR(0x2880, X509_REQ_free , X509_REQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_REQ(___a, ___in, ___len) \
	LP3(0x2886, X509_REQ *, d2i_X509_REQ , X509_REQ **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_REQ(___a, ___out) \
	LP2(0x288c, int, i2d_X509_REQ , X509_REQ *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_REQ_it() \
	LP0(0x2892, const ASN1_ITEM *, X509_REQ_it ,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_new() \
	LP0(0x2898, X509_ATTRIBUTE *, X509_ATTRIBUTE_new ,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_free(___a) \
	LP1NR(0x289e, X509_ATTRIBUTE_free , X509_ATTRIBUTE *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_ATTRIBUTE(___a, ___in, ___len) \
	LP3(0x28a4, X509_ATTRIBUTE *, d2i_X509_ATTRIBUTE , X509_ATTRIBUTE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_ATTRIBUTE(___a, ___out) \
	LP2(0x28aa, int, i2d_X509_ATTRIBUTE , X509_ATTRIBUTE *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_it() \
	LP0(0x28b0, const ASN1_ITEM *, X509_ATTRIBUTE_it ,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_create(___nid, ___atrtype, ___value) \
	LP3(0x28b6, X509_ATTRIBUTE *, X509_ATTRIBUTE_create , int, ___nid, d0, int, ___atrtype, d1, void *, ___value, a0,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSION_new() \
	LP0(0x28bc, X509_EXTENSION *, X509_EXTENSION_new ,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSION_free(___a) \
	LP1NR(0x28c2, X509_EXTENSION_free , X509_EXTENSION *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_EXTENSION(___a, ___in, ___len) \
	LP3(0x28c8, X509_EXTENSION *, d2i_X509_EXTENSION , X509_EXTENSION **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_EXTENSION(___a, ___out) \
	LP2(0x28ce, int, i2d_X509_EXTENSION , X509_EXTENSION *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSION_it() \
	LP0(0x28d4, const ASN1_ITEM *, X509_EXTENSION_it ,\
	, AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_new() \
	LP0(0x28da, X509_NAME_ENTRY *, X509_NAME_ENTRY_new ,\
	, AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_free(___a) \
	LP1NR(0x28e0, X509_NAME_ENTRY_free , X509_NAME_ENTRY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_NAME_ENTRY(___a, ___in, ___len) \
	LP3(0x28e6, X509_NAME_ENTRY *, d2i_X509_NAME_ENTRY , X509_NAME_ENTRY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_NAME_ENTRY(___a, ___out) \
	LP2(0x28ec, int, i2d_X509_NAME_ENTRY , X509_NAME_ENTRY *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_it() \
	LP0(0x28f2, const ASN1_ITEM *, X509_NAME_ENTRY_it ,\
	, AMISSL_BASE_NAME)

#define X509_NAME_new() \
	LP0(0x28f8, X509_NAME *, X509_NAME_new ,\
	, AMISSL_BASE_NAME)

#define X509_NAME_free(___a) \
	LP1NR(0x28fe, X509_NAME_free , X509_NAME *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_NAME(___a, ___in, ___len) \
	LP3(0x2904, X509_NAME *, d2i_X509_NAME , X509_NAME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_NAME(___a, ___out) \
	LP2(0x290a, int, i2d_X509_NAME , X509_NAME *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_it() \
	LP0(0x2910, const ASN1_ITEM *, X509_NAME_it ,\
	, AMISSL_BASE_NAME)

#define X509_NAME_set(___xn, ___name) \
	LP2(0x2916, int, X509_NAME_set , X509_NAME **, ___xn, a0, X509_NAME *, ___name, a1,\
	, AMISSL_BASE_NAME)

#define X509_CINF_new() \
	LP0(0x291c, X509_CINF *, X509_CINF_new ,\
	, AMISSL_BASE_NAME)

#define X509_CINF_free(___a) \
	LP1NR(0x2922, X509_CINF_free , X509_CINF *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_CINF(___a, ___in, ___len) \
	LP3(0x2928, X509_CINF *, d2i_X509_CINF , X509_CINF **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_CINF(___a, ___out) \
	LP2(0x292e, int, i2d_X509_CINF , X509_CINF *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_CINF_it() \
	LP0(0x2934, const ASN1_ITEM *, X509_CINF_it ,\
	, AMISSL_BASE_NAME)

#define X509_new() \
	LP0(0x293a, X509 *, X509_new ,\
	, AMISSL_BASE_NAME)

#define X509_free(___a) \
	LP1NR(0x2940, X509_free , X509 *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509(___a, ___in, ___len) \
	LP3(0x2946, X509 *, d2i_X509 , X509 **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509(___a, ___out) \
	LP2(0x294c, int, i2d_X509 , X509 *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_it() \
	LP0(0x2952, const ASN1_ITEM *, X509_it ,\
	, AMISSL_BASE_NAME)

#define X509_CERT_AUX_new() \
	LP0(0x2958, X509_CERT_AUX *, X509_CERT_AUX_new ,\
	, AMISSL_BASE_NAME)

#define X509_CERT_AUX_free(___a) \
	LP1NR(0x295e, X509_CERT_AUX_free , X509_CERT_AUX *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_CERT_AUX(___a, ___in, ___len) \
	LP3(0x2964, X509_CERT_AUX *, d2i_X509_CERT_AUX , X509_CERT_AUX **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_CERT_AUX(___a, ___out) \
	LP2(0x296a, int, i2d_X509_CERT_AUX , X509_CERT_AUX *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_CERT_AUX_it() \
	LP0(0x2970, const ASN1_ITEM *, X509_CERT_AUX_it ,\
	, AMISSL_BASE_NAME)

#define X509_get_ex_new_index(___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP5(0x2976, int, X509_get_ex_new_index , long, ___argl, d0, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define X509_set_ex_data(___r, ___idx, ___arg) \
	LP3(0x297c, int, X509_set_ex_data , X509 *, ___r, a0, int, ___idx, d0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME)

#define X509_get_ex_data(___r, ___idx) \
	LP2(0x2982, void *, X509_get_ex_data , X509 *, ___r, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_AUX(___a, ___pp) \
	LP2(0x2988, int, i2d_X509_AUX , X509 *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define d2i_X509_AUX(___a, ___pp, ___length) \
	LP3(0x298e, X509 *, d2i_X509_AUX , X509 **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define X509_alias_set1(___x, ___name, ___len) \
	LP3(0x2994, int, X509_alias_set1 , X509 *, ___x, a0, unsigned char *, ___name, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define X509_keyid_set1(___x, ___id, ___len) \
	LP3(0x299a, int, X509_keyid_set1 , X509 *, ___x, a0, unsigned char *, ___id, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define X509_alias_get0(___x, ___len) \
	LP2(0x29a0, unsigned char *, X509_alias_get0 , X509 *, ___x, a0, int *, ___len, a1,\
	, AMISSL_BASE_NAME)

#define X509_TRUST_set_default(___trust) \
	LP1FPFR(0x29a6, __fpr, X509_TRUST_set_default , __fpt, ___trust, a0,\
	, AMISSL_BASE_NAME, int (*__fpt)(int,X509 *,int), int (*__fpr)(int, X509 *, int))

#define X509_TRUST_set(___t, ___trust) \
	LP2(0x29ac, int, X509_TRUST_set , int *, ___t, a0, int, ___trust, d0,\
	, AMISSL_BASE_NAME)

#define X509_add1_trust_object(___x, ___obj) \
	LP2(0x29b2, int, X509_add1_trust_object , X509 *, ___x, a0, ASN1_OBJECT *, ___obj, a1,\
	, AMISSL_BASE_NAME)

#define X509_add1_reject_object(___x, ___obj) \
	LP2(0x29b8, int, X509_add1_reject_object , X509 *, ___x, a0, ASN1_OBJECT *, ___obj, a1,\
	, AMISSL_BASE_NAME)

#define X509_trust_clear(___x) \
	LP1NR(0x29be, X509_trust_clear , X509 *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509_reject_clear(___x) \
	LP1NR(0x29c4, X509_reject_clear , X509 *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_new() \
	LP0(0x29ca, X509_REVOKED *, X509_REVOKED_new ,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_free(___a) \
	LP1NR(0x29d0, X509_REVOKED_free , X509_REVOKED *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_REVOKED(___a, ___in, ___len) \
	LP3(0x29d6, X509_REVOKED *, d2i_X509_REVOKED , X509_REVOKED **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_REVOKED(___a, ___out) \
	LP2(0x29dc, int, i2d_X509_REVOKED , X509_REVOKED *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_it() \
	LP0(0x29e2, const ASN1_ITEM *, X509_REVOKED_it ,\
	, AMISSL_BASE_NAME)

#define X509_CRL_INFO_new() \
	LP0(0x29e8, X509_CRL_INFO *, X509_CRL_INFO_new ,\
	, AMISSL_BASE_NAME)

#define X509_CRL_INFO_free(___a) \
	LP1NR(0x29ee, X509_CRL_INFO_free , X509_CRL_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_CRL_INFO(___a, ___in, ___len) \
	LP3(0x29f4, X509_CRL_INFO *, d2i_X509_CRL_INFO , X509_CRL_INFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_CRL_INFO(___a, ___out) \
	LP2(0x29fa, int, i2d_X509_CRL_INFO , X509_CRL_INFO *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_INFO_it() \
	LP0(0x2a00, const ASN1_ITEM *, X509_CRL_INFO_it ,\
	, AMISSL_BASE_NAME)

#define X509_CRL_new() \
	LP0(0x2a06, X509_CRL *, X509_CRL_new ,\
	, AMISSL_BASE_NAME)

#define X509_CRL_free(___a) \
	LP1NR(0x2a0c, X509_CRL_free , X509_CRL *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_X509_CRL(___a, ___in, ___len) \
	LP3(0x2a12, X509_CRL *, d2i_X509_CRL , X509_CRL **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_CRL(___a, ___out) \
	LP2(0x2a18, int, i2d_X509_CRL , X509_CRL *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_it() \
	LP0(0x2a1e, const ASN1_ITEM *, X509_CRL_it ,\
	, AMISSL_BASE_NAME)

#define X509_CRL_add0_revoked(___crl, ___rev) \
	LP2(0x2a24, int, X509_CRL_add0_revoked , X509_CRL *, ___crl, a0, X509_REVOKED *, ___rev, a1,\
	, AMISSL_BASE_NAME)

#define X509_PKEY_new() \
	LP0(0x2a2a, X509_PKEY *, X509_PKEY_new ,\
	, AMISSL_BASE_NAME)

#define X509_PKEY_free(___a) \
	LP1NR(0x2a30, X509_PKEY_free , X509_PKEY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_PKEY(___a, ___pp) \
	LP2(0x2a36, int, i2d_X509_PKEY , X509_PKEY *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define d2i_X509_PKEY(___a, ___pp, ___length) \
	LP3(0x2a3c, X509_PKEY *, d2i_X509_PKEY , X509_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_new() \
	LP0(0x2a42, NETSCAPE_SPKI *, NETSCAPE_SPKI_new ,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_free(___a) \
	LP1NR(0x2a48, NETSCAPE_SPKI_free , NETSCAPE_SPKI *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_NETSCAPE_SPKI(___a, ___in, ___len) \
	LP3(0x2a4e, NETSCAPE_SPKI *, d2i_NETSCAPE_SPKI , NETSCAPE_SPKI **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_NETSCAPE_SPKI(___a, ___out) \
	LP2(0x2a54, int, i2d_NETSCAPE_SPKI , NETSCAPE_SPKI *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKI_it() \
	LP0(0x2a5a, const ASN1_ITEM *, NETSCAPE_SPKI_it ,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKAC_new() \
	LP0(0x2a60, NETSCAPE_SPKAC *, NETSCAPE_SPKAC_new ,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKAC_free(___a) \
	LP1NR(0x2a66, NETSCAPE_SPKAC_free , NETSCAPE_SPKAC *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_NETSCAPE_SPKAC(___a, ___in, ___len) \
	LP3(0x2a6c, NETSCAPE_SPKAC *, d2i_NETSCAPE_SPKAC , NETSCAPE_SPKAC **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_NETSCAPE_SPKAC(___a, ___out) \
	LP2(0x2a72, int, i2d_NETSCAPE_SPKAC , NETSCAPE_SPKAC *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_SPKAC_it() \
	LP0(0x2a78, const ASN1_ITEM *, NETSCAPE_SPKAC_it ,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_CERT_SEQUENCE_new() \
	LP0(0x2a7e, NETSCAPE_CERT_SEQUENCE *, NETSCAPE_CERT_SEQUENCE_new ,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_CERT_SEQUENCE_free(___a) \
	LP1NR(0x2a84, NETSCAPE_CERT_SEQUENCE_free , NETSCAPE_CERT_SEQUENCE *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_NETSCAPE_CERT_SEQUENCE(___a, ___in, ___len) \
	LP3(0x2a8a, NETSCAPE_CERT_SEQUENCE *, d2i_NETSCAPE_CERT_SEQUENCE , NETSCAPE_CERT_SEQUENCE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_NETSCAPE_CERT_SEQUENCE(___a, ___out) \
	LP2(0x2a90, int, i2d_NETSCAPE_CERT_SEQUENCE , NETSCAPE_CERT_SEQUENCE *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_CERT_SEQUENCE_it() \
	LP0(0x2a96, const ASN1_ITEM *, NETSCAPE_CERT_SEQUENCE_it ,\
	, AMISSL_BASE_NAME)

#define X509_INFO_new() \
	LP0(0x2a9c, X509_INFO *, X509_INFO_new ,\
	, AMISSL_BASE_NAME)

#define X509_INFO_free(___a) \
	LP1NR(0x2aa2, X509_INFO_free , X509_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_NAME_oneline(___a, ___buf, ___size) \
	LP3(0x2aa8, char *, X509_NAME_oneline , X509_NAME *, ___a, a0, char *, ___buf, a1, int, ___size, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_verify(___i2d, ___algor1, ___signature, ___data, ___pkey) \
	LP5FP(0x2aae, int, ASN1_verify , __fpt, ___i2d, a0, X509_ALGOR *, ___algor1, a1, ASN1_BIT_STRING *, ___signature, a2, char *, ___data, a3, EVP_PKEY *, ___pkey, d0,\
	, AMISSL_BASE_NAME, int (*__fpt)())

#define ASN1_digest(___i2d, ___type, ___data, ___md, ___len) \
	LP5FP(0x2ab4, int, ASN1_digest , __fpt, ___i2d, a0, const EVP_MD *, ___type, a1, char *, ___data, a2, unsigned char *, ___md, a3, unsigned int *, ___len, d0,\
	, AMISSL_BASE_NAME, int (*__fpt)())

#define ASN1_sign(___i2d, ___algor1, ___algor2, ___signature, ___data, ___pkey, ___type) \
	LP7FP(0x2aba, int, ASN1_sign , __fpt, ___i2d, a0, X509_ALGOR *, ___algor1, a1, X509_ALGOR *, ___algor2, a2, ASN1_BIT_STRING *, ___signature, a3, char *, ___data, d0, EVP_PKEY *, ___pkey, d1, const EVP_MD *, ___type, d2,\
	, AMISSL_BASE_NAME, int (*__fpt)())

#define ASN1_item_digest(___it, ___type, ___data, ___md, ___len) \
	LP5(0x2ac0, int, ASN1_item_digest , const ASN1_ITEM *, ___it, a0, const EVP_MD *, ___type, a1, void *, ___data, a2, unsigned char *, ___md, a3, unsigned int *, ___len, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_item_verify(___it, ___algor1, ___signature, ___data, ___pkey) \
	LP5(0x2ac6, int, ASN1_item_verify , const ASN1_ITEM *, ___it, a0, X509_ALGOR *, ___algor1, a1, ASN1_BIT_STRING *, ___signature, a2, void *, ___data, a3, EVP_PKEY *, ___pkey, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_item_sign(___it, ___algor1, ___algor2, ___signature, ___data, ___pkey, ___type) \
	LP7(0x2acc, int, ASN1_item_sign , const ASN1_ITEM *, ___it, a0, X509_ALGOR *, ___algor1, a1, X509_ALGOR *, ___algor2, a2, ASN1_BIT_STRING *, ___signature, a3, void *, ___data, d0, EVP_PKEY *, ___pkey, d1, const EVP_MD *, ___type, d2,\
	, AMISSL_BASE_NAME)

#define X509_set_version(___x, ___version) \
	LP2(0x2ad2, int, X509_set_version , X509 *, ___x, a0, long, ___version, d0,\
	, AMISSL_BASE_NAME)

#define X509_set_serialNumber(___x, ___serial) \
	LP2(0x2ad8, int, X509_set_serialNumber , X509 *, ___x, a0, ASN1_INTEGER *, ___serial, a1,\
	, AMISSL_BASE_NAME)

#define X509_get_serialNumber(___x) \
	LP1(0x2ade, ASN1_INTEGER *, X509_get_serialNumber , X509 *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509_set_issuer_name(___x, ___name) \
	LP2(0x2ae4, int, X509_set_issuer_name , X509 *, ___x, a0, X509_NAME *, ___name, a1,\
	, AMISSL_BASE_NAME)

#define X509_get_issuer_name(___a) \
	LP1(0x2aea, X509_NAME *, X509_get_issuer_name , X509 *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_set_subject_name(___x, ___name) \
	LP2(0x2af0, int, X509_set_subject_name , X509 *, ___x, a0, X509_NAME *, ___name, a1,\
	, AMISSL_BASE_NAME)

#define X509_get_subject_name(___a) \
	LP1(0x2af6, X509_NAME *, X509_get_subject_name , X509 *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_set_notBefore(___x, ___tm) \
	LP2(0x2afc, int, X509_set_notBefore , X509 *, ___x, a0, ASN1_TIME *, ___tm, a1,\
	, AMISSL_BASE_NAME)

#define X509_set_notAfter(___x, ___tm) \
	LP2(0x2b02, int, X509_set_notAfter , X509 *, ___x, a0, ASN1_TIME *, ___tm, a1,\
	, AMISSL_BASE_NAME)

#define X509_set_pubkey(___x, ___pkey) \
	LP2(0x2b08, int, X509_set_pubkey , X509 *, ___x, a0, EVP_PKEY *, ___pkey, a1,\
	, AMISSL_BASE_NAME)

#define X509_get_pubkey(___x) \
	LP1(0x2b0e, EVP_PKEY *, X509_get_pubkey , X509 *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509_get0_pubkey_bitstr(___x) \
	LP1(0x2b14, ASN1_BIT_STRING *, X509_get0_pubkey_bitstr , const X509 *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509_certificate_type(___x, ___pubkey) \
	LP2(0x2b1a, int, X509_certificate_type , X509 *, ___x, a0, EVP_PKEY *, ___pubkey, a1,\
	, AMISSL_BASE_NAME)

#define X509_REQ_set_version(___x, ___version) \
	LP2(0x2b20, int, X509_REQ_set_version , X509_REQ *, ___x, a0, long, ___version, d0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_set_subject_name(___req, ___name) \
	LP2(0x2b26, int, X509_REQ_set_subject_name , X509_REQ *, ___req, a0, X509_NAME *, ___name, a1,\
	, AMISSL_BASE_NAME)

#define X509_REQ_set_pubkey(___x, ___pkey) \
	LP2(0x2b2c, int, X509_REQ_set_pubkey , X509_REQ *, ___x, a0, EVP_PKEY *, ___pkey, a1,\
	, AMISSL_BASE_NAME)

#define X509_REQ_get_pubkey(___req) \
	LP1(0x2b32, EVP_PKEY *, X509_REQ_get_pubkey , X509_REQ *, ___req, a0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_extension_nid(___nid) \
	LP1(0x2b38, int, X509_REQ_extension_nid , int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_get_extension_nids() \
	LP0(0x2b3e, int *, X509_REQ_get_extension_nids ,\
	, AMISSL_BASE_NAME)

#define X509_REQ_set_extension_nids(___nids) \
	LP1NR(0x2b44, X509_REQ_set_extension_nids , int *, ___nids, a0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_get_extensions(___req) \
	LP1(0x2b4a, STACK_OF(X509_EXTENSION) *, X509_REQ_get_extensions , X509_REQ *, ___req, a0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_add_extensions_nid(___req, ___exts, ___nid) \
	LP3(0x2b50, int, X509_REQ_add_extensions_nid , X509_REQ *, ___req, a0, STACK_OF(X509_EXTENSION) *, ___exts, a1, int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_add_extensions(___req, ___exts) \
	LP2(0x2b56, int, X509_REQ_add_extensions , X509_REQ *, ___req, a0, STACK_OF(X509_EXTENSION) *, ___exts, a1,\
	, AMISSL_BASE_NAME)

#define X509_REQ_get_attr_count(___req) \
	LP1(0x2b5c, int, X509_REQ_get_attr_count , const X509_REQ *, ___req, a0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_get_attr_by_NID(___req, ___nid, ___lastpos) \
	LP3(0x2b62, int, X509_REQ_get_attr_by_NID , const X509_REQ *, ___req, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define X509_REQ_get_attr_by_OBJ(___req, ___obj, ___lastpos) \
	LP3(0x2b68, int, X509_REQ_get_attr_by_OBJ , const X509_REQ *, ___req, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_get_attr(___req, ___loc) \
	LP2(0x2b6e, X509_ATTRIBUTE *, X509_REQ_get_attr , const X509_REQ *, ___req, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_delete_attr(___req, ___loc) \
	LP2(0x2b74, X509_ATTRIBUTE *, X509_REQ_delete_attr , X509_REQ *, ___req, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_add1_attr(___req, ___attr) \
	LP2(0x2b7a, int, X509_REQ_add1_attr , X509_REQ *, ___req, a0, X509_ATTRIBUTE *, ___attr, a1,\
	, AMISSL_BASE_NAME)

#define X509_REQ_add1_attr_by_OBJ(___req, ___obj, ___type, ___bytes, ___len) \
	LP5(0x2b80, int, X509_REQ_add1_attr_by_OBJ , X509_REQ *, ___req, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define X509_REQ_add1_attr_by_NID(___req, ___nid, ___type, ___bytes, ___len) \
	LP5(0x2b86, int, X509_REQ_add1_attr_by_NID , X509_REQ *, ___req, a0, int, ___nid, d0, int, ___type, d1, const unsigned char *, ___bytes, a1, int, ___len, d2,\
	, AMISSL_BASE_NAME)

#define X509_REQ_add1_attr_by_txt(___req, ___attrname, ___type, ___bytes, ___len) \
	LP5(0x2b8c, int, X509_REQ_add1_attr_by_txt , X509_REQ *, ___req, a0, const char *, ___attrname, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_set_version(___x, ___version) \
	LP2(0x2b92, int, X509_CRL_set_version , X509_CRL *, ___x, a0, long, ___version, d0,\
	, AMISSL_BASE_NAME)

#define X509_CRL_set_issuer_name(___x, ___name) \
	LP2(0x2b98, int, X509_CRL_set_issuer_name , X509_CRL *, ___x, a0, X509_NAME *, ___name, a1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_set_lastUpdate(___x, ___tm) \
	LP2(0x2b9e, int, X509_CRL_set_lastUpdate , X509_CRL *, ___x, a0, ASN1_TIME *, ___tm, a1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_set_nextUpdate(___x, ___tm) \
	LP2(0x2ba4, int, X509_CRL_set_nextUpdate , X509_CRL *, ___x, a0, ASN1_TIME *, ___tm, a1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_sort(___crl) \
	LP1(0x2baa, int, X509_CRL_sort , X509_CRL *, ___crl, a0,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_set_serialNumber(___x, ___serial) \
	LP2(0x2bb0, int, X509_REVOKED_set_serialNumber , X509_REVOKED *, ___x, a0, ASN1_INTEGER *, ___serial, a1,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_set_revocationDate(___r, ___tm) \
	LP2(0x2bb6, int, X509_REVOKED_set_revocationDate , X509_REVOKED *, ___r, a0, ASN1_TIME *, ___tm, a1,\
	, AMISSL_BASE_NAME)

#define X509_check_private_key(___x509, ___pkey) \
	LP2(0x2bbc, int, X509_check_private_key , X509 *, ___x509, a0, EVP_PKEY *, ___pkey, a1,\
	, AMISSL_BASE_NAME)

#define X509_issuer_and_serial_cmp(___a, ___b) \
	LP2(0x2bc2, int, X509_issuer_and_serial_cmp , const X509 *, ___a, a0, const X509 *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define X509_issuer_and_serial_hash(___a) \
	LP1(0x2bc8, unsigned long, X509_issuer_and_serial_hash , X509 *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_issuer_name_cmp(___a, ___b) \
	LP2(0x2bce, int, X509_issuer_name_cmp , const X509 *, ___a, a0, const X509 *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define X509_issuer_name_hash(___a) \
	LP1(0x2bd4, unsigned long, X509_issuer_name_hash , X509 *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_subject_name_cmp(___a, ___b) \
	LP2(0x2bda, int, X509_subject_name_cmp , const X509 *, ___a, a0, const X509 *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define X509_subject_name_hash(___x) \
	LP1(0x2be0, unsigned long, X509_subject_name_hash , X509 *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509_cmp(___a, ___b) \
	LP2(0x2be6, int, X509_cmp , const X509 *, ___a, a0, const X509 *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_cmp(___a, ___b) \
	LP2(0x2bec, int, X509_NAME_cmp , const X509_NAME *, ___a, a0, const X509_NAME *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_hash(___x) \
	LP1(0x2bf2, unsigned long, X509_NAME_hash , X509_NAME *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509_CRL_cmp(___a, ___b) \
	LP2(0x2bf8, int, X509_CRL_cmp , const X509_CRL *, ___a, a0, const X509_CRL *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_print(___bp, ___name, ___obase) \
	LP3(0x2bfe, int, X509_NAME_print , BIO *, ___bp, a0, X509_NAME *, ___name, a1, int, ___obase, d0,\
	, AMISSL_BASE_NAME)

#define X509_NAME_print_ex(___out, ___nm, ___indent, ___flags) \
	LP4(0x2c04, int, X509_NAME_print_ex , BIO *, ___out, a0, X509_NAME *, ___nm, a1, int, ___indent, d0, unsigned long, ___flags, d1,\
	, AMISSL_BASE_NAME)

#define X509_print_ex(___bp, ___x, ___nmflag, ___cflag) \
	LP4(0x2c0a, int, X509_print_ex , BIO *, ___bp, a0, X509 *, ___x, a1, unsigned long, ___nmflag, d0, unsigned long, ___cflag, d1,\
	, AMISSL_BASE_NAME)

#define X509_print(___bp, ___x) \
	LP2(0x2c10, int, X509_print , BIO *, ___bp, a0, X509 *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define X509_ocspid_print(___bp, ___x) \
	LP2(0x2c16, int, X509_ocspid_print , BIO *, ___bp, a0, X509 *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define X509_CERT_AUX_print(___bp, ___x, ___indent) \
	LP3(0x2c1c, int, X509_CERT_AUX_print , BIO *, ___bp, a0, X509_CERT_AUX *, ___x, a1, int, ___indent, d0,\
	, AMISSL_BASE_NAME)

#define X509_CRL_print(___bp, ___x) \
	LP2(0x2c22, int, X509_CRL_print , BIO *, ___bp, a0, X509_CRL *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define X509_REQ_print_ex(___bp, ___x, ___nmflag, ___cflag) \
	LP4(0x2c28, int, X509_REQ_print_ex , BIO *, ___bp, a0, X509_REQ *, ___x, a1, unsigned long, ___nmflag, d0, unsigned long, ___cflag, d1,\
	, AMISSL_BASE_NAME)

#define X509_REQ_print(___bp, ___req) \
	LP2(0x2c2e, int, X509_REQ_print , BIO *, ___bp, a0, X509_REQ *, ___req, a1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_entry_count(___name) \
	LP1(0x2c34, int, X509_NAME_entry_count , X509_NAME *, ___name, a0,\
	, AMISSL_BASE_NAME)

#define X509_NAME_get_text_by_NID(___name, ___nid, ___buf, ___len) \
	LP4(0x2c3a, int, X509_NAME_get_text_by_NID , X509_NAME *, ___name, a0, int, ___nid, d0, char *, ___buf, a1, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_get_text_by_OBJ(___name, ___obj, ___buf, ___len) \
	LP4(0x2c40, int, X509_NAME_get_text_by_OBJ , X509_NAME *, ___name, a0, ASN1_OBJECT *, ___obj, a1, char *, ___buf, a2, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define X509_NAME_get_index_by_NID(___name, ___nid, ___lastpos) \
	LP3(0x2c46, int, X509_NAME_get_index_by_NID , X509_NAME *, ___name, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_get_index_by_OBJ(___name, ___obj, ___lastpos) \
	LP3(0x2c4c, int, X509_NAME_get_index_by_OBJ , X509_NAME *, ___name, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define X509_NAME_get_entry(___name, ___loc) \
	LP2(0x2c52, X509_NAME_ENTRY *, X509_NAME_get_entry , X509_NAME *, ___name, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_NAME_delete_entry(___name, ___loc) \
	LP2(0x2c58, X509_NAME_ENTRY *, X509_NAME_delete_entry , X509_NAME *, ___name, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_NAME_add_entry(___name, ___ne, ___loc, ___set) \
	LP4(0x2c5e, int, X509_NAME_add_entry , X509_NAME *, ___name, a0, X509_NAME_ENTRY *, ___ne, a1, int, ___loc, d0, int, ___set, d1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_add_entry_by_OBJ(___name, ___obj, ___type, ___bytes, ___len, ___loc, ___set) \
	LP7(0x2c64, int, X509_NAME_add_entry_by_OBJ , X509_NAME *, ___name, a0, ASN1_OBJECT *, ___obj, a1, int, ___type, d0, unsigned char *, ___bytes, a2, int, ___len, d1, int, ___loc, d2, int, ___set, d3,\
	, AMISSL_BASE_NAME)

#define X509_NAME_add_entry_by_NID(___name, ___nid, ___type, ___bytes, ___len, ___loc, ___set) \
	LP7(0x2c6a, int, X509_NAME_add_entry_by_NID , X509_NAME *, ___name, a0, int, ___nid, d0, int, ___type, d1, unsigned char *, ___bytes, a1, int, ___len, d2, int, ___loc, d3, int, ___set, d4,\
	, AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_create_by_txt(___ne, ___field, ___type, ___bytes, ___len) \
	LP5(0x2c70, X509_NAME_ENTRY *, X509_NAME_ENTRY_create_by_txt , X509_NAME_ENTRY **, ___ne, a0, const char *, ___field, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_create_by_NID(___ne, ___nid, ___type, ___bytes, ___len) \
	LP5(0x2c76, X509_NAME_ENTRY *, X509_NAME_ENTRY_create_by_NID , X509_NAME_ENTRY **, ___ne, a0, int, ___nid, d0, int, ___type, d1, unsigned char *, ___bytes, a1, int, ___len, d2,\
	, AMISSL_BASE_NAME)

#define X509_NAME_add_entry_by_txt(___name, ___field, ___type, ___bytes, ___len, ___loc, ___set) \
	LP7(0x2c7c, int, X509_NAME_add_entry_by_txt , X509_NAME *, ___name, a0, const char *, ___field, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1, int, ___loc, d2, int, ___set, d3,\
	, AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_create_by_OBJ(___ne, ___obj, ___type, ___bytes, ___len) \
	LP5(0x2c82, X509_NAME_ENTRY *, X509_NAME_ENTRY_create_by_OBJ , X509_NAME_ENTRY **, ___ne, a0, ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_set_object(___ne, ___obj) \
	LP2(0x2c88, int, X509_NAME_ENTRY_set_object , X509_NAME_ENTRY *, ___ne, a0, ASN1_OBJECT *, ___obj, a1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_set_data(___ne, ___type, ___bytes, ___len) \
	LP4(0x2c8e, int, X509_NAME_ENTRY_set_data , X509_NAME_ENTRY *, ___ne, a0, int, ___type, d0, const unsigned char *, ___bytes, a1, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_get_object(___ne) \
	LP1(0x2c94, ASN1_OBJECT *, X509_NAME_ENTRY_get_object , X509_NAME_ENTRY *, ___ne, a0,\
	, AMISSL_BASE_NAME)

#define X509_NAME_ENTRY_get_data(___ne) \
	LP1(0x2c9a, ASN1_STRING *, X509_NAME_ENTRY_get_data , X509_NAME_ENTRY *, ___ne, a0,\
	, AMISSL_BASE_NAME)

#define X509v3_get_ext_count(___x) \
	LP1(0x2ca0, int, X509v3_get_ext_count , const STACK_OF(X509_EXTENSION) *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509v3_get_ext_by_NID(___x, ___nid, ___lastpos) \
	LP3(0x2ca6, int, X509v3_get_ext_by_NID , const STACK_OF(X509_EXTENSION) *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define X509v3_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
	LP3(0x2cac, int, X509v3_get_ext_by_OBJ , const STACK_OF(X509_EXTENSION) *, ___x, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define X509v3_get_ext_by_critical(___x, ___crit, ___lastpos) \
	LP3(0x2cb2, int, X509v3_get_ext_by_critical , const STACK_OF(X509_EXTENSION) *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define X509v3_get_ext(___x, ___loc) \
	LP2(0x2cb8, X509_EXTENSION *, X509v3_get_ext , const STACK_OF(X509_EXTENSION) *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509v3_delete_ext(___x, ___loc) \
	LP2(0x2cbe, X509_EXTENSION *, X509v3_delete_ext , STACK_OF(X509_EXTENSION) *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509v3_add_ext(___x, ___ex, ___loc) \
	LP3(0x2cc4, STACK_OF(X509_EXTENSION) *, X509v3_add_ext , STACK_OF(X509_EXTENSION) **, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_get_ext_count(___x) \
	LP1(0x2cca, int, X509_get_ext_count , X509 *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509_get_ext_by_NID(___x, ___nid, ___lastpos) \
	LP3(0x2cd0, int, X509_get_ext_by_NID , X509 *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define X509_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
	LP3(0x2cd6, int, X509_get_ext_by_OBJ , X509 *, ___x, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define X509_get_ext_by_critical(___x, ___crit, ___lastpos) \
	LP3(0x2cdc, int, X509_get_ext_by_critical , X509 *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define X509_get_ext(___x, ___loc) \
	LP2(0x2ce2, X509_EXTENSION *, X509_get_ext , X509 *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_delete_ext(___x, ___loc) \
	LP2(0x2ce8, X509_EXTENSION *, X509_delete_ext , X509 *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_add_ext(___x, ___ex, ___loc) \
	LP3(0x2cee, int, X509_add_ext , X509 *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_get_ext_d2i(___x, ___nid, ___crit, ___idx) \
	LP4(0x2cf4, void *, X509_get_ext_d2i , X509 *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
	, AMISSL_BASE_NAME)

#define X509_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
	LP5(0x2cfa, int, X509_add1_ext_i2d , X509 *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
	, AMISSL_BASE_NAME)

#define X509_CRL_get_ext_count(___x) \
	LP1(0x2d00, int, X509_CRL_get_ext_count , X509_CRL *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509_CRL_get_ext_by_NID(___x, ___nid, ___lastpos) \
	LP3(0x2d06, int, X509_CRL_get_ext_by_NID , X509_CRL *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
	LP3(0x2d0c, int, X509_CRL_get_ext_by_OBJ , X509_CRL *, ___x, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define X509_CRL_get_ext_by_critical(___x, ___crit, ___lastpos) \
	LP3(0x2d12, int, X509_CRL_get_ext_by_critical , X509_CRL *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_get_ext(___x, ___loc) \
	LP2(0x2d18, X509_EXTENSION *, X509_CRL_get_ext , X509_CRL *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_CRL_delete_ext(___x, ___loc) \
	LP2(0x2d1e, X509_EXTENSION *, X509_CRL_delete_ext , X509_CRL *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_CRL_add_ext(___x, ___ex, ___loc) \
	LP3(0x2d24, int, X509_CRL_add_ext , X509_CRL *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_CRL_get_ext_d2i(___x, ___nid, ___crit, ___idx) \
	LP4(0x2d2a, void *, X509_CRL_get_ext_d2i , X509_CRL *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
	, AMISSL_BASE_NAME)

#define X509_CRL_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
	LP5(0x2d30, int, X509_CRL_add1_ext_i2d , X509_CRL *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_get_ext_count(___x) \
	LP1(0x2d36, int, X509_REVOKED_get_ext_count , X509_REVOKED *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_get_ext_by_NID(___x, ___nid, ___lastpos) \
	LP3(0x2d3c, int, X509_REVOKED_get_ext_by_NID , X509_REVOKED *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
	LP3(0x2d42, int, X509_REVOKED_get_ext_by_OBJ , X509_REVOKED *, ___x, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_get_ext_by_critical(___x, ___crit, ___lastpos) \
	LP3(0x2d48, int, X509_REVOKED_get_ext_by_critical , X509_REVOKED *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_get_ext(___x, ___loc) \
	LP2(0x2d4e, X509_EXTENSION *, X509_REVOKED_get_ext , X509_REVOKED *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_delete_ext(___x, ___loc) \
	LP2(0x2d54, X509_EXTENSION *, X509_REVOKED_delete_ext , X509_REVOKED *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_add_ext(___x, ___ex, ___loc) \
	LP3(0x2d5a, int, X509_REVOKED_add_ext , X509_REVOKED *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_get_ext_d2i(___x, ___nid, ___crit, ___idx) \
	LP4(0x2d60, void *, X509_REVOKED_get_ext_d2i , X509_REVOKED *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
	, AMISSL_BASE_NAME)

#define X509_REVOKED_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
	LP5(0x2d66, int, X509_REVOKED_add1_ext_i2d , X509_REVOKED *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSION_create_by_NID(___ex, ___nid, ___crit, ___data) \
	LP4(0x2d6c, X509_EXTENSION *, X509_EXTENSION_create_by_NID , X509_EXTENSION **, ___ex, a0, int, ___nid, d0, int, ___crit, d1, ASN1_OCTET_STRING *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSION_create_by_OBJ(___ex, ___obj, ___crit, ___data) \
	LP4(0x2d72, X509_EXTENSION *, X509_EXTENSION_create_by_OBJ , X509_EXTENSION **, ___ex, a0, ASN1_OBJECT *, ___obj, a1, int, ___crit, d0, ASN1_OCTET_STRING *, ___data, a2,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSION_set_object(___ex, ___obj) \
	LP2(0x2d78, int, X509_EXTENSION_set_object , X509_EXTENSION *, ___ex, a0, ASN1_OBJECT *, ___obj, a1,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSION_set_critical(___ex, ___crit) \
	LP2(0x2d7e, int, X509_EXTENSION_set_critical , X509_EXTENSION *, ___ex, a0, int, ___crit, d0,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSION_set_data(___ex, ___data) \
	LP2(0x2d84, int, X509_EXTENSION_set_data , X509_EXTENSION *, ___ex, a0, ASN1_OCTET_STRING *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSION_get_object(___ex) \
	LP1(0x2d8a, ASN1_OBJECT *, X509_EXTENSION_get_object , X509_EXTENSION *, ___ex, a0,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSION_get_data(___ne) \
	LP1(0x2d90, ASN1_OCTET_STRING *, X509_EXTENSION_get_data , X509_EXTENSION *, ___ne, a0,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSION_get_critical(___ex) \
	LP1(0x2d96, int, X509_EXTENSION_get_critical , X509_EXTENSION *, ___ex, a0,\
	, AMISSL_BASE_NAME)

#define X509at_get_attr_count(___x) \
	LP1(0x2d9c, int, X509at_get_attr_count , const STACK_OF(X509_ATTRIBUTE) *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509at_get_attr_by_NID(___x, ___nid, ___lastpos) \
	LP3(0x2da2, int, X509at_get_attr_by_NID , const STACK_OF(X509_ATTRIBUTE) *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define X509at_get_attr_by_OBJ(___sk, ___obj, ___lastpos) \
	LP3(0x2da8, int, X509at_get_attr_by_OBJ , const STACK_OF(X509_ATTRIBUTE) *, ___sk, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define X509at_get_attr(___x, ___loc) \
	LP2(0x2dae, X509_ATTRIBUTE *, X509at_get_attr , const STACK_OF(X509_ATTRIBUTE) *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509at_delete_attr(___x, ___loc) \
	LP2(0x2db4, X509_ATTRIBUTE *, X509at_delete_attr , STACK_OF(X509_ATTRIBUTE) *, ___x, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define X509at_add1_attr(___x, ___attr) \
	LP2(0x2dba, STACK_OF(X509_ATTRIBUTE) *, X509at_add1_attr , STACK_OF(X509_ATTRIBUTE) **, ___x, a0, X509_ATTRIBUTE *, ___attr, a1,\
	, AMISSL_BASE_NAME)

#define X509at_add1_attr_by_OBJ(___x, ___obj, ___type, ___bytes, ___len) \
	LP5(0x2dc0, STACK_OF(X509_ATTRIBUTE) *, X509at_add1_attr_by_OBJ , STACK_OF(X509_ATTRIBUTE) **, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define X509at_add1_attr_by_NID(___x, ___nid, ___type, ___bytes, ___len) \
	LP5(0x2dc6, STACK_OF(X509_ATTRIBUTE) *, X509at_add1_attr_by_NID , STACK_OF(X509_ATTRIBUTE) **, ___x, a0, int, ___nid, d0, int, ___type, d1, const unsigned char *, ___bytes, a1, int, ___len, d2,\
	, AMISSL_BASE_NAME)

#define X509at_add1_attr_by_txt(___x, ___attrname, ___type, ___bytes, ___len) \
	LP5(0x2dcc, STACK_OF(X509_ATTRIBUTE) *, X509at_add1_attr_by_txt , STACK_OF(X509_ATTRIBUTE) **, ___x, a0, const char *, ___attrname, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_create_by_NID(___attr, ___nid, ___atrtype, ___data, ___len) \
	LP5(0x2dd2, X509_ATTRIBUTE *, X509_ATTRIBUTE_create_by_NID , X509_ATTRIBUTE **, ___attr, a0, int, ___nid, d0, int, ___atrtype, d1, const void *, ___data, a1, int, ___len, d2,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_create_by_OBJ(___attr, ___obj, ___atrtype, ___data, ___len) \
	LP5(0x2dd8, X509_ATTRIBUTE *, X509_ATTRIBUTE_create_by_OBJ , X509_ATTRIBUTE **, ___attr, a0, const ASN1_OBJECT *, ___obj, a1, int, ___atrtype, d0, const void *, ___data, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_create_by_txt(___attr, ___atrname, ___type, ___bytes, ___len) \
	LP5(0x2dde, X509_ATTRIBUTE *, X509_ATTRIBUTE_create_by_txt , X509_ATTRIBUTE **, ___attr, a0, const char *, ___atrname, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_set1_object(___attr, ___obj) \
	LP2(0x2de4, int, X509_ATTRIBUTE_set1_object , X509_ATTRIBUTE *, ___attr, a0, const ASN1_OBJECT *, ___obj, a1,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_set1_data(___attr, ___attrtype, ___data, ___len) \
	LP4(0x2dea, int, X509_ATTRIBUTE_set1_data , X509_ATTRIBUTE *, ___attr, a0, int, ___attrtype, d0, const void *, ___data, a1, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_get0_data(___attr, ___idx, ___atrtype, ___data) \
	LP4(0x2df0, void *, X509_ATTRIBUTE_get0_data , X509_ATTRIBUTE *, ___attr, a0, int, ___idx, d0, int, ___atrtype, d1, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_count(___attr) \
	LP1(0x2df6, int, X509_ATTRIBUTE_count , X509_ATTRIBUTE *, ___attr, a0,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_get0_object(___attr) \
	LP1(0x2dfc, ASN1_OBJECT *, X509_ATTRIBUTE_get0_object , X509_ATTRIBUTE *, ___attr, a0,\
	, AMISSL_BASE_NAME)

#define X509_ATTRIBUTE_get0_type(___attr, ___idx) \
	LP2(0x2e02, ASN1_TYPE *, X509_ATTRIBUTE_get0_type , X509_ATTRIBUTE *, ___attr, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define X509_verify_cert(___ctx) \
	LP1(0x2e08, int, X509_verify_cert , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_find_by_issuer_and_serial(___sk, ___name, ___serial) \
	LP3(0x2e0e, X509 *, X509_find_by_issuer_and_serial , STACK_OF(X509) *, ___sk, a0, X509_NAME *, ___name, a1, ASN1_INTEGER *, ___serial, a2,\
	, AMISSL_BASE_NAME)

#define X509_find_by_subject(___sk, ___name) \
	LP2(0x2e14, X509 *, X509_find_by_subject , STACK_OF(X509) *, ___sk, a0, X509_NAME *, ___name, a1,\
	, AMISSL_BASE_NAME)

#define PBEPARAM_new() \
	LP0(0x2e1a, PBEPARAM *, PBEPARAM_new ,\
	, AMISSL_BASE_NAME)

#define PBEPARAM_free(___a) \
	LP1NR(0x2e20, PBEPARAM_free , PBEPARAM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PBEPARAM(___a, ___in, ___len) \
	LP3(0x2e26, PBEPARAM *, d2i_PBEPARAM , PBEPARAM **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PBEPARAM(___a, ___out) \
	LP2(0x2e2c, int, i2d_PBEPARAM , PBEPARAM *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PBEPARAM_it() \
	LP0(0x2e32, const ASN1_ITEM *, PBEPARAM_it ,\
	, AMISSL_BASE_NAME)

#define PBE2PARAM_new() \
	LP0(0x2e38, PBE2PARAM *, PBE2PARAM_new ,\
	, AMISSL_BASE_NAME)

#define PBE2PARAM_free(___a) \
	LP1NR(0x2e3e, PBE2PARAM_free , PBE2PARAM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PBE2PARAM(___a, ___in, ___len) \
	LP3(0x2e44, PBE2PARAM *, d2i_PBE2PARAM , PBE2PARAM **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PBE2PARAM(___a, ___out) \
	LP2(0x2e4a, int, i2d_PBE2PARAM , PBE2PARAM *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PBE2PARAM_it() \
	LP0(0x2e50, const ASN1_ITEM *, PBE2PARAM_it ,\
	, AMISSL_BASE_NAME)

#define PBKDF2PARAM_new() \
	LP0(0x2e56, PBKDF2PARAM *, PBKDF2PARAM_new ,\
	, AMISSL_BASE_NAME)

#define PBKDF2PARAM_free(___a) \
	LP1NR(0x2e5c, PBKDF2PARAM_free , PBKDF2PARAM *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PBKDF2PARAM(___a, ___in, ___len) \
	LP3(0x2e62, PBKDF2PARAM *, d2i_PBKDF2PARAM , PBKDF2PARAM **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PBKDF2PARAM(___a, ___out) \
	LP2(0x2e68, int, i2d_PBKDF2PARAM , PBKDF2PARAM *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PBKDF2PARAM_it() \
	LP0(0x2e6e, const ASN1_ITEM *, PBKDF2PARAM_it ,\
	, AMISSL_BASE_NAME)

#define PKCS5_pbe_set(___alg, ___iter, ___salt, ___saltlen) \
	LP4(0x2e74, X509_ALGOR *, PKCS5_pbe_set , int, ___alg, d0, int, ___iter, d1, unsigned char *, ___salt, a0, int, ___saltlen, d2,\
	, AMISSL_BASE_NAME)

#define PKCS5_pbe2_set(___cipher, ___iter, ___salt, ___saltlen) \
	LP4(0x2e7a, X509_ALGOR *, PKCS5_pbe2_set , const EVP_CIPHER *, ___cipher, a0, int, ___iter, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1,\
	, AMISSL_BASE_NAME)

#define PKCS8_PRIV_KEY_INFO_new() \
	LP0(0x2e80, PKCS8_PRIV_KEY_INFO *, PKCS8_PRIV_KEY_INFO_new ,\
	, AMISSL_BASE_NAME)

#define PKCS8_PRIV_KEY_INFO_free(___a) \
	LP1NR(0x2e86, PKCS8_PRIV_KEY_INFO_free , PKCS8_PRIV_KEY_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKCS8_PRIV_KEY_INFO(___a, ___in, ___len) \
	LP3(0x2e8c, PKCS8_PRIV_KEY_INFO *, d2i_PKCS8_PRIV_KEY_INFO , PKCS8_PRIV_KEY_INFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS8_PRIV_KEY_INFO(___a, ___out) \
	LP2(0x2e92, int, i2d_PKCS8_PRIV_KEY_INFO , PKCS8_PRIV_KEY_INFO *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKCS8_PRIV_KEY_INFO_it() \
	LP0(0x2e98, const ASN1_ITEM *, PKCS8_PRIV_KEY_INFO_it ,\
	, AMISSL_BASE_NAME)

#define EVP_PKCS82PKEY(___p8) \
	LP1(0x2e9e, EVP_PKEY *, EVP_PKCS82PKEY , PKCS8_PRIV_KEY_INFO *, ___p8, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY2PKCS8(___pkey) \
	LP1(0x2ea4, PKCS8_PRIV_KEY_INFO *, EVP_PKEY2PKCS8 , EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY2PKCS8_broken(___pkey, ___broken) \
	LP2(0x2eaa, PKCS8_PRIV_KEY_INFO *, EVP_PKEY2PKCS8_broken , EVP_PKEY *, ___pkey, a0, int, ___broken, d0,\
	, AMISSL_BASE_NAME)

#define PKCS8_set_broken(___p8, ___broken) \
	LP2(0x2eb0, PKCS8_PRIV_KEY_INFO *, PKCS8_set_broken , PKCS8_PRIV_KEY_INFO *, ___p8, a0, int, ___broken, d0,\
	, AMISSL_BASE_NAME)

#define X509_check_trust(___x, ___id, ___flags) \
	LP3(0x2eb6, int, X509_check_trust , X509 *, ___x, a0, int, ___id, d0, int, ___flags, d1,\
	, AMISSL_BASE_NAME)

#define X509_TRUST_get_count() \
	LP0(0x2ebc, int, X509_TRUST_get_count ,\
	, AMISSL_BASE_NAME)

#define X509_TRUST_get0(___idx) \
	LP1(0x2ec2, X509_TRUST *, X509_TRUST_get0 , int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define X509_TRUST_get_by_id(___id) \
	LP1(0x2ec8, int, X509_TRUST_get_by_id , int, ___id, d0,\
	, AMISSL_BASE_NAME)

#define X509_TRUST_add(___id, ___flags, ___ck, ___name, ___arg1, ___arg2) \
	LP6FP(0x2ece, int, X509_TRUST_add , int, ___id, d0, int, ___flags, d1, __fpt, ___ck, a0, char *, ___name, a1, int, ___arg1, d2, void *, ___arg2, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(X509_TRUST *,X509 *,int))

#define X509_TRUST_cleanup() \
	LP0NR(0x2ed4, X509_TRUST_cleanup ,\
	, AMISSL_BASE_NAME)

#define X509_TRUST_get_flags(___xp) \
	LP1(0x2eda, int, X509_TRUST_get_flags , X509_TRUST *, ___xp, a0,\
	, AMISSL_BASE_NAME)

#define X509_TRUST_get0_name(___xp) \
	LP1(0x2ee0, char *, X509_TRUST_get0_name , X509_TRUST *, ___xp, a0,\
	, AMISSL_BASE_NAME)

#define X509_TRUST_get_trust(___xp) \
	LP1(0x2ee6, int, X509_TRUST_get_trust , X509_TRUST *, ___xp, a0,\
	, AMISSL_BASE_NAME)

#define ERR_load_X509_strings() \
	LP0NR(0x2eec, ERR_load_X509_strings ,\
	, AMISSL_BASE_NAME)

#define X509_OBJECT_idx_by_subject(___h, ___type, ___name) \
	LP3(0x2ef2, int, X509_OBJECT_idx_by_subject , STACK_OF(X509_OBJECT) *, ___h, a0, int, ___type, d0, X509_NAME *, ___name, a1,\
	, AMISSL_BASE_NAME)

#define X509_OBJECT_retrieve_by_subject(___h, ___type, ___name) \
	LP3(0x2ef8, X509_OBJECT *, X509_OBJECT_retrieve_by_subject , STACK_OF(X509_OBJECT) *, ___h, a0, int, ___type, d0, X509_NAME *, ___name, a1,\
	, AMISSL_BASE_NAME)

#define X509_OBJECT_retrieve_match(___h, ___x) \
	LP2(0x2efe, X509_OBJECT *, X509_OBJECT_retrieve_match , STACK_OF(X509_OBJECT) *, ___h, a0, X509_OBJECT *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define X509_OBJECT_up_ref_count(___a) \
	LP1NR(0x2f04, X509_OBJECT_up_ref_count , X509_OBJECT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_OBJECT_free_contents(___a) \
	LP1NR(0x2f0a, X509_OBJECT_free_contents , X509_OBJECT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_new() \
	LP0(0x2f10, X509_STORE *, X509_STORE_new ,\
	, AMISSL_BASE_NAME)

#define X509_STORE_free(___v) \
	LP1NR(0x2f16, X509_STORE_free , X509_STORE *, ___v, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_set_flags(___ctx, ___flags) \
	LP2NR(0x2f1c, X509_STORE_set_flags , X509_STORE *, ___ctx, a0, long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_set_purpose(___ctx, ___purpose) \
	LP2(0x2f22, int, X509_STORE_set_purpose , X509_STORE *, ___ctx, a0, int, ___purpose, d0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_set_trust(___ctx, ___trust) \
	LP2(0x2f28, int, X509_STORE_set_trust , X509_STORE *, ___ctx, a0, int, ___trust, d0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_new() \
	LP0(0x2f2e, X509_STORE_CTX *, X509_STORE_CTX_new ,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get1_issuer(___issuer, ___ctx, ___x) \
	LP3(0x2f34, int, X509_STORE_CTX_get1_issuer , X509 **, ___issuer, a0, X509_STORE_CTX *, ___ctx, a1, X509 *, ___x, a2,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_free(___ctx) \
	LP1NR(0x2f3a, X509_STORE_CTX_free , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_init(___ctx, ___store, ___x509, ___chain) \
	LP4(0x2f40, int, X509_STORE_CTX_init , X509_STORE_CTX *, ___ctx, a0, X509_STORE *, ___store, a1, X509 *, ___x509, a2, STACK_OF(X509) *, ___chain, a3,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_trusted_stack(___ctx, ___sk) \
	LP2NR(0x2f46, X509_STORE_CTX_trusted_stack , X509_STORE_CTX *, ___ctx, a0, STACK_OF(X509) *, ___sk, a1,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_cleanup(___ctx) \
	LP1NR(0x2f4c, X509_STORE_CTX_cleanup , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_add_lookup(___v, ___m) \
	LP2(0x2f52, X509_LOOKUP *, X509_STORE_add_lookup , X509_STORE *, ___v, a0, X509_LOOKUP_METHOD *, ___m, a1,\
	, AMISSL_BASE_NAME)

#define X509_LOOKUP_hash_dir() \
	LP0(0x2f58, X509_LOOKUP_METHOD *, X509_LOOKUP_hash_dir ,\
	, AMISSL_BASE_NAME)

#define X509_LOOKUP_file() \
	LP0(0x2f5e, X509_LOOKUP_METHOD *, X509_LOOKUP_file ,\
	, AMISSL_BASE_NAME)

#define X509_STORE_add_cert(___ctx, ___x) \
	LP2(0x2f64, int, X509_STORE_add_cert , X509_STORE *, ___ctx, a0, X509 *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define X509_STORE_add_crl(___ctx, ___x) \
	LP2(0x2f6a, int, X509_STORE_add_crl , X509_STORE *, ___ctx, a0, X509_CRL *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define X509_STORE_get_by_subject(___vs, ___type, ___name, ___ret) \
	LP4(0x2f70, int, X509_STORE_get_by_subject , X509_STORE_CTX *, ___vs, a0, int, ___type, d0, X509_NAME *, ___name, a1, X509_OBJECT *, ___ret, a2,\
	, AMISSL_BASE_NAME)

#define X509_LOOKUP_ctrl(___ctx, ___cmd, ___argc, ___argl, ___ret) \
	LP5(0x2f76, int, X509_LOOKUP_ctrl , X509_LOOKUP *, ___ctx, a0, int, ___cmd, d0, const char *, ___argc, a1, long, ___argl, d1, char **, ___ret, a2,\
	, AMISSL_BASE_NAME)

#define X509_load_cert_file(___ctx, ___file, ___type) \
	LP3(0x2f7c, int, X509_load_cert_file , X509_LOOKUP *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define X509_load_crl_file(___ctx, ___file, ___type) \
	LP3(0x2f82, int, X509_load_crl_file , X509_LOOKUP *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define X509_load_cert_crl_file(___ctx, ___file, ___type) \
	LP3(0x2f88, int, X509_load_cert_crl_file , X509_LOOKUP *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define X509_LOOKUP_new(___method) \
	LP1(0x2f8e, X509_LOOKUP *, X509_LOOKUP_new , X509_LOOKUP_METHOD *, ___method, a0,\
	, AMISSL_BASE_NAME)

#define X509_LOOKUP_free(___ctx) \
	LP1NR(0x2f94, X509_LOOKUP_free , X509_LOOKUP *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_LOOKUP_init(___ctx) \
	LP1(0x2f9a, int, X509_LOOKUP_init , X509_LOOKUP *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_LOOKUP_by_subject(___ctx, ___type, ___name, ___ret) \
	LP4(0x2fa0, int, X509_LOOKUP_by_subject , X509_LOOKUP *, ___ctx, a0, int, ___type, d0, X509_NAME *, ___name, a1, X509_OBJECT *, ___ret, a2,\
	, AMISSL_BASE_NAME)

#define X509_LOOKUP_by_issuer_serial(___ctx, ___type, ___name, ___serial, ___ret) \
	LP5(0x2fa6, int, X509_LOOKUP_by_issuer_serial , X509_LOOKUP *, ___ctx, a0, int, ___type, d0, X509_NAME *, ___name, a1, ASN1_INTEGER *, ___serial, a2, X509_OBJECT *, ___ret, a3,\
	, AMISSL_BASE_NAME)

#define X509_LOOKUP_by_fingerprint(___ctx, ___type, ___bytes, ___len, ___ret) \
	LP5(0x2fac, int, X509_LOOKUP_by_fingerprint , X509_LOOKUP *, ___ctx, a0, int, ___type, d0, unsigned char *, ___bytes, a1, int, ___len, d1, X509_OBJECT *, ___ret, a2,\
	, AMISSL_BASE_NAME)

#define X509_LOOKUP_by_alias(___ctx, ___type, ___str, ___len, ___ret) \
	LP5(0x2fb2, int, X509_LOOKUP_by_alias , X509_LOOKUP *, ___ctx, a0, int, ___type, d0, char *, ___str, a1, int, ___len, d1, X509_OBJECT *, ___ret, a2,\
	, AMISSL_BASE_NAME)

#define X509_LOOKUP_shutdown(___ctx) \
	LP1(0x2fb8, int, X509_LOOKUP_shutdown , X509_LOOKUP *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_load_locations(___ctx, ___file, ___dir) \
	LP3(0x2fbe, int, X509_STORE_load_locations , X509_STORE *, ___ctx, a0, const char *, ___file, a1, const char *, ___dir, a2,\
	, AMISSL_BASE_NAME)

#define X509_STORE_set_default_paths(___ctx) \
	LP1(0x2fc4, int, X509_STORE_set_default_paths , X509_STORE *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_ex_new_index(___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP5(0x2fca, int, X509_STORE_CTX_get_ex_new_index , long, ___argl, d0, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_ex_data(___ctx, ___idx, ___data) \
	LP3(0x2fd0, int, X509_STORE_CTX_set_ex_data , X509_STORE_CTX *, ___ctx, a0, int, ___idx, d0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_ex_data(___ctx, ___idx) \
	LP2(0x2fd6, void *, X509_STORE_CTX_get_ex_data , X509_STORE_CTX *, ___ctx, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_error(___ctx) \
	LP1(0x2fdc, int, X509_STORE_CTX_get_error , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_error(___ctx, ___s) \
	LP2NR(0x2fe2, X509_STORE_CTX_set_error , X509_STORE_CTX *, ___ctx, a0, int, ___s, d0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_error_depth(___ctx) \
	LP1(0x2fe8, int, X509_STORE_CTX_get_error_depth , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_current_cert(___ctx) \
	LP1(0x2fee, X509 *, X509_STORE_CTX_get_current_cert , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_chain(___ctx) \
	LP1(0x2ff4, STACK_OF(X509) *, X509_STORE_CTX_get_chain , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get1_chain(___ctx) \
	LP1(0x2ffa, STACK_OF(X509) *, X509_STORE_CTX_get1_chain , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_cert(___c, ___x) \
	LP2NR(0x3000, X509_STORE_CTX_set_cert , X509_STORE_CTX *, ___c, a0, X509 *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_chain(___c, ___sk) \
	LP2NR(0x3006, X509_STORE_CTX_set_chain , X509_STORE_CTX *, ___c, a0, STACK_OF(X509) *, ___sk, a1,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_purpose(___ctx, ___purpose) \
	LP2(0x300c, int, X509_STORE_CTX_set_purpose , X509_STORE_CTX *, ___ctx, a0, int, ___purpose, d0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_trust(___ctx, ___trust) \
	LP2(0x3012, int, X509_STORE_CTX_set_trust , X509_STORE_CTX *, ___ctx, a0, int, ___trust, d0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_purpose_inherit(___ctx, ___def_purpose, ___purpose, ___trust) \
	LP4(0x3018, int, X509_STORE_CTX_purpose_inherit , X509_STORE_CTX *, ___ctx, a0, int, ___def_purpose, d0, int, ___purpose, d1, int, ___trust, d2,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_flags(___ctx, ___flags) \
	LP2NR(0x301e, X509_STORE_CTX_set_flags , X509_STORE_CTX *, ___ctx, a0, long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_time(___ctx, ___flags, ___t) \
	LP3NR(0x3024, X509_STORE_CTX_set_time , X509_STORE_CTX *, ___ctx, a0, long, ___flags, d0, time_t, ___t, d1,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_verify_cb(___ctx, ___verify_cb) \
	LP2NRFP(0x302a, X509_STORE_CTX_set_verify_cb , X509_STORE_CTX *, ___ctx, a0, __fpt, ___verify_cb, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(int,X509_STORE_CTX *))

#define BASIC_CONSTRAINTS_new() \
	LP0(0x3030, BASIC_CONSTRAINTS *, BASIC_CONSTRAINTS_new ,\
	, AMISSL_BASE_NAME)

#define BASIC_CONSTRAINTS_free(___a) \
	LP1NR(0x3036, BASIC_CONSTRAINTS_free , BASIC_CONSTRAINTS *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_BASIC_CONSTRAINTS(___a, ___in, ___len) \
	LP3(0x303c, BASIC_CONSTRAINTS *, d2i_BASIC_CONSTRAINTS , BASIC_CONSTRAINTS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_BASIC_CONSTRAINTS(___a, ___out) \
	LP2(0x3042, int, i2d_BASIC_CONSTRAINTS , BASIC_CONSTRAINTS *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define BASIC_CONSTRAINTS_it() \
	LP0(0x3048, const ASN1_ITEM *, BASIC_CONSTRAINTS_it ,\
	, AMISSL_BASE_NAME)

#define SXNET_new() \
	LP0(0x304e, SXNET *, SXNET_new ,\
	, AMISSL_BASE_NAME)

#define SXNET_free(___a) \
	LP1NR(0x3054, SXNET_free , SXNET *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_SXNET(___a, ___in, ___len) \
	LP3(0x305a, SXNET *, d2i_SXNET , SXNET **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_SXNET(___a, ___out) \
	LP2(0x3060, int, i2d_SXNET , SXNET *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define SXNET_it() \
	LP0(0x3066, const ASN1_ITEM *, SXNET_it ,\
	, AMISSL_BASE_NAME)

#define SXNETID_new() \
	LP0(0x306c, SXNETID *, SXNETID_new ,\
	, AMISSL_BASE_NAME)

#define SXNETID_free(___a) \
	LP1NR(0x3072, SXNETID_free , SXNETID *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_SXNETID(___a, ___in, ___len) \
	LP3(0x3078, SXNETID *, d2i_SXNETID , SXNETID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_SXNETID(___a, ___out) \
	LP2(0x307e, int, i2d_SXNETID , SXNETID *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define SXNETID_it() \
	LP0(0x3084, const ASN1_ITEM *, SXNETID_it ,\
	, AMISSL_BASE_NAME)

#define SXNET_add_id_asc(___psx, ___zone, ___user, ___userlen) \
	LP4(0x308a, int, SXNET_add_id_asc , SXNET **, ___psx, a0, char *, ___zone, a1, char *, ___user, a2, int, ___userlen, d0,\
	, AMISSL_BASE_NAME)

#define SXNET_add_id_ulong(___psx, ___lzone, ___user, ___userlen) \
	LP4(0x3090, int, SXNET_add_id_ulong , SXNET **, ___psx, a0, unsigned long, ___lzone, d0, char *, ___user, a1, int, ___userlen, d1,\
	, AMISSL_BASE_NAME)

#define SXNET_add_id_INTEGER(___psx, ___izone, ___user, ___userlen) \
	LP4(0x3096, int, SXNET_add_id_INTEGER , SXNET **, ___psx, a0, ASN1_INTEGER *, ___izone, a1, char *, ___user, a2, int, ___userlen, d0,\
	, AMISSL_BASE_NAME)

#define SXNET_get_id_asc(___sx, ___zone) \
	LP2(0x309c, ASN1_OCTET_STRING *, SXNET_get_id_asc , SXNET *, ___sx, a0, char *, ___zone, a1,\
	, AMISSL_BASE_NAME)

#define SXNET_get_id_ulong(___sx, ___lzone) \
	LP2(0x30a2, ASN1_OCTET_STRING *, SXNET_get_id_ulong , SXNET *, ___sx, a0, unsigned long, ___lzone, d0,\
	, AMISSL_BASE_NAME)

#define SXNET_get_id_INTEGER(___sx, ___zone) \
	LP2(0x30a8, ASN1_OCTET_STRING *, SXNET_get_id_INTEGER , SXNET *, ___sx, a0, ASN1_INTEGER *, ___zone, a1,\
	, AMISSL_BASE_NAME)

#define AUTHORITY_KEYID_new() \
	LP0(0x30ae, AUTHORITY_KEYID *, AUTHORITY_KEYID_new ,\
	, AMISSL_BASE_NAME)

#define AUTHORITY_KEYID_free(___a) \
	LP1NR(0x30b4, AUTHORITY_KEYID_free , AUTHORITY_KEYID *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_AUTHORITY_KEYID(___a, ___in, ___len) \
	LP3(0x30ba, AUTHORITY_KEYID *, d2i_AUTHORITY_KEYID , AUTHORITY_KEYID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_AUTHORITY_KEYID(___a, ___out) \
	LP2(0x30c0, int, i2d_AUTHORITY_KEYID , AUTHORITY_KEYID *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define AUTHORITY_KEYID_it() \
	LP0(0x30c6, const ASN1_ITEM *, AUTHORITY_KEYID_it ,\
	, AMISSL_BASE_NAME)

#define PKEY_USAGE_PERIOD_new() \
	LP0(0x30cc, PKEY_USAGE_PERIOD *, PKEY_USAGE_PERIOD_new ,\
	, AMISSL_BASE_NAME)

#define PKEY_USAGE_PERIOD_free(___a) \
	LP1NR(0x30d2, PKEY_USAGE_PERIOD_free , PKEY_USAGE_PERIOD *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PKEY_USAGE_PERIOD(___a, ___in, ___len) \
	LP3(0x30d8, PKEY_USAGE_PERIOD *, d2i_PKEY_USAGE_PERIOD , PKEY_USAGE_PERIOD **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKEY_USAGE_PERIOD(___a, ___out) \
	LP2(0x30de, int, i2d_PKEY_USAGE_PERIOD , PKEY_USAGE_PERIOD *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PKEY_USAGE_PERIOD_it() \
	LP0(0x30e4, const ASN1_ITEM *, PKEY_USAGE_PERIOD_it ,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAME_new() \
	LP0(0x30ea, GENERAL_NAME *, GENERAL_NAME_new ,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAME_free(___a) \
	LP1NR(0x30f0, GENERAL_NAME_free , GENERAL_NAME *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_GENERAL_NAME(___a, ___in, ___len) \
	LP3(0x30f6, GENERAL_NAME *, d2i_GENERAL_NAME , GENERAL_NAME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_GENERAL_NAME(___a, ___out) \
	LP2(0x30fc, int, i2d_GENERAL_NAME , GENERAL_NAME *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAME_it() \
	LP0(0x3102, const ASN1_ITEM *, GENERAL_NAME_it ,\
	, AMISSL_BASE_NAME)

#define i2v_GENERAL_NAME(___method, ___gen, ___ret) \
	LP3(0x3108, STACK_OF(CONF_VALUE) *, i2v_GENERAL_NAME , X509V3_EXT_METHOD *, ___method, a0, GENERAL_NAME *, ___gen, a1, STACK_OF(CONF_VALUE) *, ___ret, a2,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAME_print(___out, ___gen) \
	LP2(0x310e, int, GENERAL_NAME_print , BIO *, ___out, a0, GENERAL_NAME *, ___gen, a1,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAMES_new() \
	LP0(0x3114, GENERAL_NAMES *, GENERAL_NAMES_new ,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAMES_free(___a) \
	LP1NR(0x311a, GENERAL_NAMES_free , GENERAL_NAMES *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_GENERAL_NAMES(___a, ___in, ___len) \
	LP3(0x3120, GENERAL_NAMES *, d2i_GENERAL_NAMES , GENERAL_NAMES **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_GENERAL_NAMES(___a, ___out) \
	LP2(0x3126, int, i2d_GENERAL_NAMES , GENERAL_NAMES *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAMES_it() \
	LP0(0x312c, const ASN1_ITEM *, GENERAL_NAMES_it ,\
	, AMISSL_BASE_NAME)

#define i2v_GENERAL_NAMES(___method, ___gen, ___extlist) \
	LP3(0x3132, STACK_OF(CONF_VALUE) *, i2v_GENERAL_NAMES , X509V3_EXT_METHOD *, ___method, a0, GENERAL_NAMES *, ___gen, a1, STACK_OF(CONF_VALUE) *, ___extlist, a2,\
	, AMISSL_BASE_NAME)

#define v2i_GENERAL_NAMES(___method, ___ctx, ___nval) \
	LP3(0x3138, GENERAL_NAMES *, v2i_GENERAL_NAMES , X509V3_EXT_METHOD *, ___method, a0, X509V3_CTX *, ___ctx, a1, STACK_OF(CONF_VALUE) *, ___nval, a2,\
	, AMISSL_BASE_NAME)

#define OTHERNAME_new() \
	LP0(0x313e, OTHERNAME *, OTHERNAME_new ,\
	, AMISSL_BASE_NAME)

#define OTHERNAME_free(___a) \
	LP1NR(0x3144, OTHERNAME_free , OTHERNAME *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_OTHERNAME(___a, ___in, ___len) \
	LP3(0x314a, OTHERNAME *, d2i_OTHERNAME , OTHERNAME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_OTHERNAME(___a, ___out) \
	LP2(0x3150, int, i2d_OTHERNAME , OTHERNAME *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OTHERNAME_it() \
	LP0(0x3156, const ASN1_ITEM *, OTHERNAME_it ,\
	, AMISSL_BASE_NAME)

#define EDIPARTYNAME_new() \
	LP0(0x315c, EDIPARTYNAME *, EDIPARTYNAME_new ,\
	, AMISSL_BASE_NAME)

#define EDIPARTYNAME_free(___a) \
	LP1NR(0x3162, EDIPARTYNAME_free , EDIPARTYNAME *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_EDIPARTYNAME(___a, ___in, ___len) \
	LP3(0x3168, EDIPARTYNAME *, d2i_EDIPARTYNAME , EDIPARTYNAME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_EDIPARTYNAME(___a, ___out) \
	LP2(0x316e, int, i2d_EDIPARTYNAME , EDIPARTYNAME *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define EDIPARTYNAME_it() \
	LP0(0x3174, const ASN1_ITEM *, EDIPARTYNAME_it ,\
	, AMISSL_BASE_NAME)

#define i2s_ASN1_OCTET_STRING(___method, ___ia5) \
	LP2(0x317a, char *, i2s_ASN1_OCTET_STRING , X509V3_EXT_METHOD *, ___method, a0, ASN1_OCTET_STRING *, ___ia5, a1,\
	, AMISSL_BASE_NAME)

#define s2i_ASN1_OCTET_STRING(___method, ___ctx, ___str) \
	LP3(0x3180, ASN1_OCTET_STRING *, s2i_ASN1_OCTET_STRING , X509V3_EXT_METHOD *, ___method, a0, X509V3_CTX *, ___ctx, a1, char *, ___str, a2,\
	, AMISSL_BASE_NAME)

#define EXTENDED_KEY_USAGE_new() \
	LP0(0x3186, EXTENDED_KEY_USAGE *, EXTENDED_KEY_USAGE_new ,\
	, AMISSL_BASE_NAME)

#define EXTENDED_KEY_USAGE_free(___a) \
	LP1NR(0x318c, EXTENDED_KEY_USAGE_free , EXTENDED_KEY_USAGE *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_EXTENDED_KEY_USAGE(___a, ___in, ___len) \
	LP3(0x3192, EXTENDED_KEY_USAGE *, d2i_EXTENDED_KEY_USAGE , EXTENDED_KEY_USAGE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_EXTENDED_KEY_USAGE(___a, ___out) \
	LP2(0x3198, int, i2d_EXTENDED_KEY_USAGE , EXTENDED_KEY_USAGE *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define EXTENDED_KEY_USAGE_it() \
	LP0(0x319e, const ASN1_ITEM *, EXTENDED_KEY_USAGE_it ,\
	, AMISSL_BASE_NAME)

#define i2a_ACCESS_DESCRIPTION(___bp, ___a) \
	LP2(0x31a4, int, i2a_ACCESS_DESCRIPTION , BIO *, ___bp, a0, ACCESS_DESCRIPTION *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define CERTIFICATEPOLICIES_new() \
	LP0(0x31aa, CERTIFICATEPOLICIES *, CERTIFICATEPOLICIES_new ,\
	, AMISSL_BASE_NAME)

#define CERTIFICATEPOLICIES_free(___a) \
	LP1NR(0x31b0, CERTIFICATEPOLICIES_free , CERTIFICATEPOLICIES *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_CERTIFICATEPOLICIES(___a, ___in, ___len) \
	LP3(0x31b6, CERTIFICATEPOLICIES *, d2i_CERTIFICATEPOLICIES , CERTIFICATEPOLICIES **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_CERTIFICATEPOLICIES(___a, ___out) \
	LP2(0x31bc, int, i2d_CERTIFICATEPOLICIES , CERTIFICATEPOLICIES *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define CERTIFICATEPOLICIES_it() \
	LP0(0x31c2, const ASN1_ITEM *, CERTIFICATEPOLICIES_it ,\
	, AMISSL_BASE_NAME)

#define POLICYINFO_new() \
	LP0(0x31c8, POLICYINFO *, POLICYINFO_new ,\
	, AMISSL_BASE_NAME)

#define POLICYINFO_free(___a) \
	LP1NR(0x31ce, POLICYINFO_free , POLICYINFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_POLICYINFO(___a, ___in, ___len) \
	LP3(0x31d4, POLICYINFO *, d2i_POLICYINFO , POLICYINFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_POLICYINFO(___a, ___out) \
	LP2(0x31da, int, i2d_POLICYINFO , POLICYINFO *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define POLICYINFO_it() \
	LP0(0x31e0, const ASN1_ITEM *, POLICYINFO_it ,\
	, AMISSL_BASE_NAME)

#define POLICYQUALINFO_new() \
	LP0(0x31e6, POLICYQUALINFO *, POLICYQUALINFO_new ,\
	, AMISSL_BASE_NAME)

#define POLICYQUALINFO_free(___a) \
	LP1NR(0x31ec, POLICYQUALINFO_free , POLICYQUALINFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_POLICYQUALINFO(___a, ___in, ___len) \
	LP3(0x31f2, POLICYQUALINFO *, d2i_POLICYQUALINFO , POLICYQUALINFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_POLICYQUALINFO(___a, ___out) \
	LP2(0x31f8, int, i2d_POLICYQUALINFO , POLICYQUALINFO *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define POLICYQUALINFO_it() \
	LP0(0x31fe, const ASN1_ITEM *, POLICYQUALINFO_it ,\
	, AMISSL_BASE_NAME)

#define USERNOTICE_new() \
	LP0(0x3204, USERNOTICE *, USERNOTICE_new ,\
	, AMISSL_BASE_NAME)

#define USERNOTICE_free(___a) \
	LP1NR(0x320a, USERNOTICE_free , USERNOTICE *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_USERNOTICE(___a, ___in, ___len) \
	LP3(0x3210, USERNOTICE *, d2i_USERNOTICE , USERNOTICE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_USERNOTICE(___a, ___out) \
	LP2(0x3216, int, i2d_USERNOTICE , USERNOTICE *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define USERNOTICE_it() \
	LP0(0x321c, const ASN1_ITEM *, USERNOTICE_it ,\
	, AMISSL_BASE_NAME)

#define NOTICEREF_new() \
	LP0(0x3222, NOTICEREF *, NOTICEREF_new ,\
	, AMISSL_BASE_NAME)

#define NOTICEREF_free(___a) \
	LP1NR(0x3228, NOTICEREF_free , NOTICEREF *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_NOTICEREF(___a, ___in, ___len) \
	LP3(0x322e, NOTICEREF *, d2i_NOTICEREF , NOTICEREF **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_NOTICEREF(___a, ___out) \
	LP2(0x3234, int, i2d_NOTICEREF , NOTICEREF *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define NOTICEREF_it() \
	LP0(0x323a, const ASN1_ITEM *, NOTICEREF_it ,\
	, AMISSL_BASE_NAME)

#define CRL_DIST_POINTS_new() \
	LP0(0x3240, CRL_DIST_POINTS *, CRL_DIST_POINTS_new ,\
	, AMISSL_BASE_NAME)

#define CRL_DIST_POINTS_free(___a) \
	LP1NR(0x3246, CRL_DIST_POINTS_free , CRL_DIST_POINTS *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_CRL_DIST_POINTS(___a, ___in, ___len) \
	LP3(0x324c, CRL_DIST_POINTS *, d2i_CRL_DIST_POINTS , CRL_DIST_POINTS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_CRL_DIST_POINTS(___a, ___out) \
	LP2(0x3252, int, i2d_CRL_DIST_POINTS , CRL_DIST_POINTS *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define CRL_DIST_POINTS_it() \
	LP0(0x3258, const ASN1_ITEM *, CRL_DIST_POINTS_it ,\
	, AMISSL_BASE_NAME)

#define DIST_POINT_new() \
	LP0(0x325e, DIST_POINT *, DIST_POINT_new ,\
	, AMISSL_BASE_NAME)

#define DIST_POINT_free(___a) \
	LP1NR(0x3264, DIST_POINT_free , DIST_POINT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_DIST_POINT(___a, ___in, ___len) \
	LP3(0x326a, DIST_POINT *, d2i_DIST_POINT , DIST_POINT **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_DIST_POINT(___a, ___out) \
	LP2(0x3270, int, i2d_DIST_POINT , DIST_POINT *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define DIST_POINT_it() \
	LP0(0x3276, const ASN1_ITEM *, DIST_POINT_it ,\
	, AMISSL_BASE_NAME)

#define DIST_POINT_NAME_new() \
	LP0(0x327c, DIST_POINT_NAME *, DIST_POINT_NAME_new ,\
	, AMISSL_BASE_NAME)

#define DIST_POINT_NAME_free(___a) \
	LP1NR(0x3282, DIST_POINT_NAME_free , DIST_POINT_NAME *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_DIST_POINT_NAME(___a, ___in, ___len) \
	LP3(0x3288, DIST_POINT_NAME *, d2i_DIST_POINT_NAME , DIST_POINT_NAME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_DIST_POINT_NAME(___a, ___out) \
	LP2(0x328e, int, i2d_DIST_POINT_NAME , DIST_POINT_NAME *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define DIST_POINT_NAME_it() \
	LP0(0x3294, const ASN1_ITEM *, DIST_POINT_NAME_it ,\
	, AMISSL_BASE_NAME)

#define ACCESS_DESCRIPTION_new() \
	LP0(0x329a, ACCESS_DESCRIPTION *, ACCESS_DESCRIPTION_new ,\
	, AMISSL_BASE_NAME)

#define ACCESS_DESCRIPTION_free(___a) \
	LP1NR(0x32a0, ACCESS_DESCRIPTION_free , ACCESS_DESCRIPTION *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ACCESS_DESCRIPTION(___a, ___in, ___len) \
	LP3(0x32a6, ACCESS_DESCRIPTION *, d2i_ACCESS_DESCRIPTION , ACCESS_DESCRIPTION **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ACCESS_DESCRIPTION(___a, ___out) \
	LP2(0x32ac, int, i2d_ACCESS_DESCRIPTION , ACCESS_DESCRIPTION *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ACCESS_DESCRIPTION_it() \
	LP0(0x32b2, const ASN1_ITEM *, ACCESS_DESCRIPTION_it ,\
	, AMISSL_BASE_NAME)

#define AUTHORITY_INFO_ACCESS_new() \
	LP0(0x32b8, AUTHORITY_INFO_ACCESS *, AUTHORITY_INFO_ACCESS_new ,\
	, AMISSL_BASE_NAME)

#define AUTHORITY_INFO_ACCESS_free(___a) \
	LP1NR(0x32be, AUTHORITY_INFO_ACCESS_free , AUTHORITY_INFO_ACCESS *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_AUTHORITY_INFO_ACCESS(___a, ___in, ___len) \
	LP3(0x32c4, AUTHORITY_INFO_ACCESS *, d2i_AUTHORITY_INFO_ACCESS , AUTHORITY_INFO_ACCESS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_AUTHORITY_INFO_ACCESS(___a, ___out) \
	LP2(0x32ca, int, i2d_AUTHORITY_INFO_ACCESS , AUTHORITY_INFO_ACCESS *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define AUTHORITY_INFO_ACCESS_it() \
	LP0(0x32d0, const ASN1_ITEM *, AUTHORITY_INFO_ACCESS_it ,\
	, AMISSL_BASE_NAME)

#define v2i_GENERAL_NAME(___method, ___ctx, ___cnf) \
	LP3(0x32d6, GENERAL_NAME *, v2i_GENERAL_NAME , X509V3_EXT_METHOD *, ___method, a0, X509V3_CTX *, ___ctx, a1, CONF_VALUE *, ___cnf, a2,\
	, AMISSL_BASE_NAME)

#define X509V3_conf_free(___val) \
	LP1NR(0x32dc, X509V3_conf_free , CONF_VALUE *, ___val, a0,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_nconf_nid(___conf, ___ctx, ___ext_nid, ___value) \
	LP4(0x32e2, X509_EXTENSION *, X509V3_EXT_nconf_nid , CONF *, ___conf, a0, X509V3_CTX *, ___ctx, a1, int, ___ext_nid, d0, char *, ___value, a2,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_nconf(___conf, ___ctx, ___name, ___value) \
	LP4(0x32e8, X509_EXTENSION *, X509V3_EXT_nconf , CONF *, ___conf, a0, X509V3_CTX *, ___ctx, a1, char *, ___name, a2, char *, ___value, a3,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_add_nconf_sk(___conf, ___ctx, ___section, ___sk) \
	LP4(0x32ee, int, X509V3_EXT_add_nconf_sk , CONF *, ___conf, a0, X509V3_CTX *, ___ctx, a1, char *, ___section, a2, STACK_OF(X509_EXTENSION) **, ___sk, a3,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_add_nconf(___conf, ___ctx, ___section, ___cert) \
	LP4(0x32f4, int, X509V3_EXT_add_nconf , CONF *, ___conf, a0, X509V3_CTX *, ___ctx, a1, char *, ___section, a2, X509 *, ___cert, a3,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_REQ_add_nconf(___conf, ___ctx, ___section, ___req) \
	LP4(0x32fa, int, X509V3_EXT_REQ_add_nconf , CONF *, ___conf, a0, X509V3_CTX *, ___ctx, a1, char *, ___section, a2, X509_REQ *, ___req, a3,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_CRL_add_nconf(___conf, ___ctx, ___section, ___crl) \
	LP4(0x3300, int, X509V3_EXT_CRL_add_nconf , CONF *, ___conf, a0, X509V3_CTX *, ___ctx, a1, char *, ___section, a2, X509_CRL *, ___crl, a3,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_conf_nid(___conf, ___ctx, ___ext_nid, ___value) \
	LP4(0x3306, X509_EXTENSION *, X509V3_EXT_conf_nid , LHASH_OF(CONF_VALUE) *, ___conf, a0, X509V3_CTX *, ___ctx, a1, int, ___ext_nid, d0, char *, ___value, a2,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_conf(___conf, ___ctx, ___name, ___value) \
	LP4(0x330c, X509_EXTENSION *, X509V3_EXT_conf , LHASH_OF(CONF_VALUE) *, ___conf, a0, X509V3_CTX *, ___ctx, a1, char *, ___name, a2, char *, ___value, a3,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_add_conf(___conf, ___ctx, ___section, ___cert) \
	LP4(0x3312, int, X509V3_EXT_add_conf , LHASH_OF(CONF_VALUE) *, ___conf, a0, X509V3_CTX *, ___ctx, a1, char *, ___section, a2, X509 *, ___cert, a3,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_REQ_add_conf(___conf, ___ctx, ___section, ___req) \
	LP4(0x3318, int, X509V3_EXT_REQ_add_conf , LHASH_OF(CONF_VALUE) *, ___conf, a0, X509V3_CTX *, ___ctx, a1, char *, ___section, a2, X509_REQ *, ___req, a3,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_CRL_add_conf(___conf, ___ctx, ___section, ___crl) \
	LP4(0x331e, int, X509V3_EXT_CRL_add_conf , LHASH_OF(CONF_VALUE) *, ___conf, a0, X509V3_CTX *, ___ctx, a1, char *, ___section, a2, X509_CRL *, ___crl, a3,\
	, AMISSL_BASE_NAME)

#define X509V3_add_value_bool_nf(___name, ___asn1_bool, ___extlist) \
	LP3(0x3324, int, X509V3_add_value_bool_nf , char *, ___name, a0, int, ___asn1_bool, d0, STACK_OF(CONF_VALUE) **, ___extlist, a1,\
	, AMISSL_BASE_NAME)

#define X509V3_get_value_bool(___value, ___asn1_bool) \
	LP2(0x332a, int, X509V3_get_value_bool , CONF_VALUE *, ___value, a0, int *, ___asn1_bool, a1,\
	, AMISSL_BASE_NAME)

#define X509V3_get_value_int(___value, ___aint) \
	LP2(0x3330, int, X509V3_get_value_int , CONF_VALUE *, ___value, a0, ASN1_INTEGER **, ___aint, a1,\
	, AMISSL_BASE_NAME)

#define X509V3_set_nconf(___ctx, ___conf) \
	LP2NR(0x3336, X509V3_set_nconf , X509V3_CTX *, ___ctx, a0, CONF *, ___conf, a1,\
	, AMISSL_BASE_NAME)

#define X509V3_set_conf_lhash(___ctx, ___lhash) \
	LP2NR(0x333c, X509V3_set_conf_lhash , X509V3_CTX *, ___ctx, a0, LHASH_OF(CONF_VALUE) *, ___lhash, a1,\
	, AMISSL_BASE_NAME)

#define X509V3_get_string(___ctx, ___name, ___section) \
	LP3(0x3342, char *, X509V3_get_string , X509V3_CTX *, ___ctx, a0, char *, ___name, a1, char *, ___section, a2,\
	, AMISSL_BASE_NAME)

#define X509V3_get_section(___ctx, ___section) \
	LP2(0x3348, STACK_OF(CONF_VALUE) *, X509V3_get_section , X509V3_CTX *, ___ctx, a0, char *, ___section, a1,\
	, AMISSL_BASE_NAME)

#define X509V3_string_free(___ctx, ___str) \
	LP2NR(0x334e, X509V3_string_free , X509V3_CTX *, ___ctx, a0, char *, ___str, a1,\
	, AMISSL_BASE_NAME)

#define X509V3_section_free(___ctx, ___section) \
	LP2NR(0x3354, X509V3_section_free , X509V3_CTX *, ___ctx, a0, STACK_OF(CONF_VALUE) *, ___section, a1,\
	, AMISSL_BASE_NAME)

#define X509V3_set_ctx(___ctx, ___issuer, ___subject, ___req, ___crl, ___flags) \
	LP6NR(0x335a, X509V3_set_ctx , X509V3_CTX *, ___ctx, a0, X509 *, ___issuer, a1, X509 *, ___subject, a2, X509_REQ *, ___req, a3, X509_CRL *, ___crl, d0, int, ___flags, d1,\
	, AMISSL_BASE_NAME)

#define X509V3_add_value(___name, ___value, ___extlist) \
	LP3(0x3360, int, X509V3_add_value , const char *, ___name, a0, const char *, ___value, a1, STACK_OF(CONF_VALUE) **, ___extlist, a2,\
	, AMISSL_BASE_NAME)

#define X509V3_add_value_uchar(___name, ___value, ___extlist) \
	LP3(0x3366, int, X509V3_add_value_uchar , const char *, ___name, a0, const unsigned char *, ___value, a1, STACK_OF(CONF_VALUE) **, ___extlist, a2,\
	, AMISSL_BASE_NAME)

#define X509V3_add_value_bool(___name, ___asn1_bool, ___extlist) \
	LP3(0x336c, int, X509V3_add_value_bool , const char *, ___name, a0, int, ___asn1_bool, d0, STACK_OF(CONF_VALUE) **, ___extlist, a1,\
	, AMISSL_BASE_NAME)

#define X509V3_add_value_int(___name, ___aint, ___extlist) \
	LP3(0x3372, int, X509V3_add_value_int , const char *, ___name, a0, ASN1_INTEGER *, ___aint, a1, STACK_OF(CONF_VALUE) **, ___extlist, a2,\
	, AMISSL_BASE_NAME)

#define i2s_ASN1_INTEGER(___meth, ___aint) \
	LP2(0x3378, char *, i2s_ASN1_INTEGER , X509V3_EXT_METHOD *, ___meth, a0, ASN1_INTEGER *, ___aint, a1,\
	, AMISSL_BASE_NAME)

#define s2i_ASN1_INTEGER(___meth, ___value) \
	LP2(0x337e, ASN1_INTEGER *, s2i_ASN1_INTEGER , X509V3_EXT_METHOD *, ___meth, a0, char *, ___value, a1,\
	, AMISSL_BASE_NAME)

#define i2s_ASN1_ENUMERATED(___meth, ___aint) \
	LP2(0x3384, char *, i2s_ASN1_ENUMERATED , X509V3_EXT_METHOD *, ___meth, a0, ASN1_ENUMERATED *, ___aint, a1,\
	, AMISSL_BASE_NAME)

#define i2s_ASN1_ENUMERATED_TABLE(___meth, ___aint) \
	LP2(0x338a, char *, i2s_ASN1_ENUMERATED_TABLE , X509V3_EXT_METHOD *, ___meth, a0, ASN1_ENUMERATED *, ___aint, a1,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_add(___ext) \
	LP1(0x3390, int, X509V3_EXT_add , X509V3_EXT_METHOD *, ___ext, a0,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_add_list(___extlist) \
	LP1(0x3396, int, X509V3_EXT_add_list , X509V3_EXT_METHOD *, ___extlist, a0,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_add_alias(___nid_to, ___nid_from) \
	LP2(0x339c, int, X509V3_EXT_add_alias , int, ___nid_to, d0, int, ___nid_from, d1,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_cleanup() \
	LP0NR(0x33a2, X509V3_EXT_cleanup ,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_get(___ext) \
	LP1(0x33a8, const X509V3_EXT_METHOD *, X509V3_EXT_get , X509_EXTENSION *, ___ext, a0,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_get_nid(___nid) \
	LP1(0x33ae, const X509V3_EXT_METHOD *, X509V3_EXT_get_nid , int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define X509V3_add_standard_extensions() \
	LP0(0x33b4, int, X509V3_add_standard_extensions ,\
	, AMISSL_BASE_NAME)

#define X509V3_parse_list(___line) \
	LP1(0x33ba, STACK_OF(CONF_VALUE) *, X509V3_parse_list , const char *, ___line, a0,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_d2i(___ext) \
	LP1(0x33c0, void *, X509V3_EXT_d2i , X509_EXTENSION *, ___ext, a0,\
	, AMISSL_BASE_NAME)

#define X509V3_get_d2i(___x, ___nid, ___crit, ___idx) \
	LP4(0x33c6, void *, X509V3_get_d2i , STACK_OF(X509_EXTENSION) *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_i2d(___ext_nid, ___crit, ___ext_struc) \
	LP3(0x33cc, X509_EXTENSION *, X509V3_EXT_i2d , int, ___ext_nid, d0, int, ___crit, d1, void *, ___ext_struc, a0,\
	, AMISSL_BASE_NAME)

#define X509V3_add1_i2d(___x, ___nid, ___value, ___crit, ___flags) \
	LP5(0x33d2, int, X509V3_add1_i2d , STACK_OF(X509_EXTENSION) **, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
	, AMISSL_BASE_NAME)

#define hex_to_string(___buffer, ___len) \
	LP2(0x33d8, char *, hex_to_string , unsigned char *, ___buffer, a0, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define string_to_hex(___str, ___len) \
	LP2(0x33de, unsigned char *, string_to_hex , char *, ___str, a0, long *, ___len, a1,\
	, AMISSL_BASE_NAME)

#define name_cmp(___name, ___cmp) \
	LP2(0x33e4, int, name_cmp , const char *, ___name, a0, const char *, ___cmp, a1,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_val_prn(___out, ___val, ___indent, ___ml) \
	LP4NR(0x33ea, X509V3_EXT_val_prn , BIO *, ___out, a0, STACK_OF(CONF_VALUE) *, ___val, a1, int, ___indent, d0, int, ___ml, d1,\
	, AMISSL_BASE_NAME)

#define X509V3_EXT_print(___out, ___ext, ___flag, ___indent) \
	LP4(0x33f0, int, X509V3_EXT_print , BIO *, ___out, a0, X509_EXTENSION *, ___ext, a1, unsigned long, ___flag, d0, int, ___indent, d1,\
	, AMISSL_BASE_NAME)

#define X509V3_extensions_print(___out, ___title, ___exts, ___flag, ___indent) \
	LP5(0x33f6, int, X509V3_extensions_print , BIO *, ___out, a0, char *, ___title, a1, STACK_OF(X509_EXTENSION) *, ___exts, a2, unsigned long, ___flag, d0, int, ___indent, d1,\
	, AMISSL_BASE_NAME)

#define X509_check_purpose(___x, ___id, ___ca) \
	LP3(0x33fc, int, X509_check_purpose , X509 *, ___x, a0, int, ___id, d0, int, ___ca, d1,\
	, AMISSL_BASE_NAME)

#define X509_supported_extension(___ex) \
	LP1(0x3402, int, X509_supported_extension , X509_EXTENSION *, ___ex, a0,\
	, AMISSL_BASE_NAME)

#define X509_PURPOSE_set(___p, ___purpose) \
	LP2(0x3408, int, X509_PURPOSE_set , int *, ___p, a0, int, ___purpose, d0,\
	, AMISSL_BASE_NAME)

#define X509_check_issued(___issuer, ___subject) \
	LP2(0x340e, int, X509_check_issued , X509 *, ___issuer, a0, X509 *, ___subject, a1,\
	, AMISSL_BASE_NAME)

#define X509_PURPOSE_get_count() \
	LP0(0x3414, int, X509_PURPOSE_get_count ,\
	, AMISSL_BASE_NAME)

#define X509_PURPOSE_get0(___idx) \
	LP1(0x341a, X509_PURPOSE *, X509_PURPOSE_get0 , int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define X509_PURPOSE_get_by_sname(___sname) \
	LP1(0x3420, int, X509_PURPOSE_get_by_sname , char *, ___sname, a0,\
	, AMISSL_BASE_NAME)

#define X509_PURPOSE_get_by_id(___id) \
	LP1(0x3426, int, X509_PURPOSE_get_by_id , int, ___id, d0,\
	, AMISSL_BASE_NAME)

#define X509_PURPOSE_add(___id, ___trust, ___flags, ___ck, ___name, ___sname, ___arg) \
	LP7FP(0x342c, int, X509_PURPOSE_add , int, ___id, d0, int, ___trust, d1, int, ___flags, d2, __fpt, ___ck, a0, char *, ___name, a1, char *, ___sname, a2, void *, ___arg, a3,\
	, AMISSL_BASE_NAME, int (*__fpt)(const X509_PURPOSE *,const X509 *,int))

#define X509_PURPOSE_get0_name(___xp) \
	LP1(0x3432, char *, X509_PURPOSE_get0_name , X509_PURPOSE *, ___xp, a0,\
	, AMISSL_BASE_NAME)

#define X509_PURPOSE_get0_sname(___xp) \
	LP1(0x3438, char *, X509_PURPOSE_get0_sname , X509_PURPOSE *, ___xp, a0,\
	, AMISSL_BASE_NAME)

#define X509_PURPOSE_get_trust(___xp) \
	LP1(0x343e, int, X509_PURPOSE_get_trust , X509_PURPOSE *, ___xp, a0,\
	, AMISSL_BASE_NAME)

#define X509_PURPOSE_cleanup() \
	LP0NR(0x3444, X509_PURPOSE_cleanup ,\
	, AMISSL_BASE_NAME)

#define X509_PURPOSE_get_id(___a) \
	LP1(0x344a, int, X509_PURPOSE_get_id , X509_PURPOSE *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_get1_email(___x) \
	LP1(0x3450, STACK_OF(OPENSSL_STRING) *, X509_get1_email , X509 *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_get1_email(___x) \
	LP1(0x3456, STACK_OF(OPENSSL_STRING) *, X509_REQ_get1_email , X509_REQ *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define X509_email_free(___sk) \
	LP1NR(0x345c, X509_email_free , STACK_OF(OPENSSL_STRING) *, ___sk, a0,\
	, AMISSL_BASE_NAME)

#define ERR_load_X509V3_strings() \
	LP0NR(0x3462, ERR_load_X509V3_strings ,\
	, AMISSL_BASE_NAME)

#define AES_options() \
	LP0(0x3468, const char *, AES_options ,\
	, AMISSL_BASE_NAME)

#define AES_set_encrypt_key(___userKey, ___bits, ___key) \
	LP3(0x346e, int, AES_set_encrypt_key , const unsigned char *, ___userKey, a0, const int, ___bits, d0, AES_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define AES_set_decrypt_key(___userKey, ___bits, ___key) \
	LP3(0x3474, int, AES_set_decrypt_key , const unsigned char *, ___userKey, a0, const int, ___bits, d0, AES_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define AES_encrypt(___in, ___out, ___key) \
	LP3NR(0x347a, AES_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const AES_KEY *, ___key, a2,\
	, AMISSL_BASE_NAME)

#define AES_decrypt(___in, ___out, ___key) \
	LP3NR(0x3480, AES_decrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const AES_KEY *, ___key, a2,\
	, AMISSL_BASE_NAME)

#define AES_ecb_encrypt(___in, ___out, ___key, ___enc) \
	LP4NR(0x3486, AES_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const AES_KEY *, ___key, a2, const int, ___enc, d0,\
	, AMISSL_BASE_NAME)

#define AES_cbc_encrypt(___in, ___out, ___length, ___key, ___ivec, ___enc) \
	LP6NR(0x348c, AES_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, a3, const int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define AES_cfb128_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc) \
	LP7NR(0x3492, AES_cfb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, const int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define AES_cfb1_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc) \
	LP7NR(0x3498, AES_cfb1_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, const int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define AES_cfb8_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc) \
	LP7NR(0x349e, AES_cfb8_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, const int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define AES_ofb128_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num) \
	LP6NR(0x34a4, AES_ofb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
	, AMISSL_BASE_NAME)

#define AES_ctr128_encrypt(___in, ___out, ___length, ___key, ___ivec, ___ecount_buf, ___num) \
	LP7NR(0x34aa, AES_ctr128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, d1, unsigned char *, ___ecount_buf, d2, unsigned int *, ___num, a3,\
	, AMISSL_BASE_NAME)

#define BF_set_key(___key, ___len, ___data) \
	LP3NR(0x34b0, BF_set_key , BF_KEY *, ___key, a0, int, ___len, d0, const unsigned char *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define BF_encrypt(___data, ___key) \
	LP2NR(0x34b6, BF_encrypt , BF_LONG *, ___data, a0, const BF_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define BF_decrypt(___data, ___key) \
	LP2NR(0x34bc, BF_decrypt , BF_LONG *, ___data, a0, const BF_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define BF_ecb_encrypt(___in, ___out, ___key, ___enc) \
	LP4NR(0x34c2, BF_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const BF_KEY *, ___key, a2, int, ___enc, d0,\
	, AMISSL_BASE_NAME)

#define BF_cbc_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___enc) \
	LP6NR(0x34c8, BF_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, const BF_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define BF_cfb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num, ___enc) \
	LP7NR(0x34ce, BF_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, const BF_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define BF_ofb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num) \
	LP6NR(0x34d4, BF_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, const BF_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
	, AMISSL_BASE_NAME)

#define BF_options() \
	LP0(0x34da, const char *, BF_options ,\
	, AMISSL_BASE_NAME)

#define CAST_set_key(___key, ___len, ___data) \
	LP3NR(0x34e0, CAST_set_key , CAST_KEY *, ___key, a0, int, ___len, d0, const unsigned char *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define CAST_ecb_encrypt(___in, ___out, ___key, ___enc) \
	LP4NR(0x34e6, CAST_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, CAST_KEY *, ___key, a2, int, ___enc, d0,\
	, AMISSL_BASE_NAME)

#define CAST_encrypt(___data, ___key) \
	LP2NR(0x34ec, CAST_encrypt , CAST_LONG *, ___data, a0, CAST_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define CAST_decrypt(___data, ___key) \
	LP2NR(0x34f2, CAST_decrypt , CAST_LONG *, ___data, a0, CAST_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define CAST_cbc_encrypt(___in, ___out, ___length, ___ks, ___iv, ___enc) \
	LP6NR(0x34f8, CAST_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, CAST_KEY *, ___ks, a2, unsigned char *, ___iv, a3, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define CAST_cfb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num, ___enc) \
	LP7NR(0x34fe, CAST_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, CAST_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define CAST_ofb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num) \
	LP6NR(0x3504, CAST_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, CAST_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
	, AMISSL_BASE_NAME)

#define DES_ecb3_encrypt(___input, ___output, ___ks1, ___ks2, ___ks3, ___enc) \
	LP6NR(0x350a, DES_ecb3_encrypt , const_DES_cblock *, ___input, a0, DES_cblock *, ___output, a1, DES_key_schedule *, ___ks1, a2, DES_key_schedule *, ___ks2, a3, DES_key_schedule *, ___ks3, d0, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define DES_cbc_cksum(___input, ___output, ___length, ___schedule, ___ivec) \
	LP5(0x3510, DES_LONG, DES_cbc_cksum , const unsigned char *, ___input, a0, DES_cblock *, ___output, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, const_DES_cblock *, ___ivec, a3,\
	, AMISSL_BASE_NAME)

#define DES_cbc_encrypt(___input, ___output, ___length, ___schedule, ___ivec, ___enc) \
	LP6NR(0x3516, DES_cbc_encrypt , const unsigned char *, ___input, a0, unsigned char *, ___output, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define DES_ncbc_encrypt(___input, ___output, ___length, ___schedule, ___ivec, ___enc) \
	LP6NR(0x351c, DES_ncbc_encrypt , const unsigned char *, ___input, a0, unsigned char *, ___output, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define DES_xcbc_encrypt(___input, ___output, ___length, ___schedule, ___ivec, ___inw, ___outw, ___enc) \
	LP8NR(0x3522, DES_xcbc_encrypt , const unsigned char *, ___input, a0, unsigned char *, ___output, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, const_DES_cblock *, ___inw, d1, const_DES_cblock *, ___outw, d2, int, ___enc, d3,\
	, AMISSL_BASE_NAME)

#define DES_cfb_encrypt(___in, ___out, ___numbits, ___length, ___schedule, ___ivec, ___enc) \
	LP7NR(0x3528, DES_cfb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, int, ___numbits, d0, long, ___length, d1, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define DES_ecb_encrypt(___input, ___output, ___ks, ___enc) \
	LP4NR(0x352e, DES_ecb_encrypt , const_DES_cblock *, ___input, a0, DES_cblock *, ___output, a1, DES_key_schedule *, ___ks, a2, int, ___enc, d0,\
	, AMISSL_BASE_NAME)

#define DES_encrypt1(___data, ___ks, ___enc) \
	LP3NR(0x3534, DES_encrypt1 , DES_LONG *, ___data, a0, DES_key_schedule *, ___ks, a1, int, ___enc, d0,\
	, AMISSL_BASE_NAME)

#define DES_encrypt2(___data, ___ks, ___enc) \
	LP3NR(0x353a, DES_encrypt2 , DES_LONG *, ___data, a0, DES_key_schedule *, ___ks, a1, int, ___enc, d0,\
	, AMISSL_BASE_NAME)

#define DES_encrypt3(___data, ___ks1, ___ks2, ___ks3) \
	LP4NR(0x3540, DES_encrypt3 , DES_LONG *, ___data, a0, DES_key_schedule *, ___ks1, a1, DES_key_schedule *, ___ks2, a2, DES_key_schedule *, ___ks3, a3,\
	, AMISSL_BASE_NAME)

#define DES_decrypt3(___data, ___ks1, ___ks2, ___ks3) \
	LP4NR(0x3546, DES_decrypt3 , DES_LONG *, ___data, a0, DES_key_schedule *, ___ks1, a1, DES_key_schedule *, ___ks2, a2, DES_key_schedule *, ___ks3, a3,\
	, AMISSL_BASE_NAME)

#define DES_ede3_cbc_encrypt(___input, ___output, ___length, ___ks1, ___ks2, ___ks3, ___ivec, ___enc) \
	LP8NR(0x354c, DES_ede3_cbc_encrypt , const unsigned char *, ___input, a0, unsigned char *, ___output, a1, long, ___length, d0, DES_key_schedule *, ___ks1, a2, DES_key_schedule *, ___ks2, a3, DES_key_schedule *, ___ks3, d1, DES_cblock *, ___ivec, d2, int, ___enc, d3,\
	, AMISSL_BASE_NAME)

#define DES_ede3_cbcm_encrypt(___in, ___out, ___length, ___ks1, ___ks2, ___ks3, ___ivec1, ___ivec2, ___enc) \
	LP9NR(0x3552, DES_ede3_cbcm_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, DES_key_schedule *, ___ks1, a2, DES_key_schedule *, ___ks2, a3, DES_key_schedule *, ___ks3, d1, DES_cblock *, ___ivec1, d2, DES_cblock *, ___ivec2, d3, int, ___enc, d4,\
	, AMISSL_BASE_NAME)

#define DES_ede3_cfb64_encrypt(___in, ___out, ___length, ___ks1, ___ks2, ___ks3, ___ivec, ___num, ___enc) \
	LP9NR(0x3558, DES_ede3_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, DES_key_schedule *, ___ks1, a2, DES_key_schedule *, ___ks2, a3, DES_key_schedule *, ___ks3, d1, DES_cblock *, ___ivec, d2, int *, ___num, d3, int, ___enc, d4,\
	, AMISSL_BASE_NAME)

#define DES_ede3_cfb_encrypt(___in, ___out, ___numbits, ___length, ___ks1, ___ks2, ___ks3, ___ivec, ___enc) \
	LP9NR(0x355e, DES_ede3_cfb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, int, ___numbits, d0, long, ___length, d1, DES_key_schedule *, ___ks1, a2, DES_key_schedule *, ___ks2, a3, DES_key_schedule *, ___ks3, d2, DES_cblock *, ___ivec, d3, int, ___enc, d4,\
	, AMISSL_BASE_NAME)

#define DES_ede3_ofb64_encrypt(___in, ___out, ___length, ___ks1, ___ks2, ___ks3, ___ivec, ___num) \
	LP8NR(0x3564, DES_ede3_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, DES_key_schedule *, ___ks1, a2, DES_key_schedule *, ___ks2, a3, DES_key_schedule *, ___ks3, d1, DES_cblock *, ___ivec, d2, int *, ___num, d3,\
	, AMISSL_BASE_NAME)

#define DES_enc_read(___fd, ___buf, ___len, ___sched, ___iv) \
	LP5(0x356a, int, DES_enc_read , int, ___fd, d0, void *, ___buf, a0, int, ___len, d1, DES_key_schedule *, ___sched, a1, DES_cblock *, ___iv, a2,\
	, AMISSL_BASE_NAME)

#define DES_enc_write(___fd, ___buf, ___len, ___sched, ___iv) \
	LP5(0x3570, int, DES_enc_write , int, ___fd, d0, const void *, ___buf, a0, int, ___len, d1, DES_key_schedule *, ___sched, a1, DES_cblock *, ___iv, a2,\
	, AMISSL_BASE_NAME)

#define DES_fcrypt(___buf, ___salt, ___ret) \
	LP3(0x3576, char *, DES_fcrypt , const char *, ___buf, a0, const char *, ___salt, a1, char *, ___ret, a2,\
	, AMISSL_BASE_NAME)

#define DES_crypt(___buf, ___salt) \
	LP2(0x357c, char *, DES_crypt , const char *, ___buf, a0, const char *, ___salt, a1,\
	, AMISSL_BASE_NAME)

#define DES_ofb_encrypt(___in, ___out, ___numbits, ___length, ___schedule, ___ivec) \
	LP6NR(0x3582, DES_ofb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, int, ___numbits, d0, long, ___length, d1, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3,\
	, AMISSL_BASE_NAME)

#define DES_pcbc_encrypt(___input, ___output, ___length, ___schedule, ___ivec, ___enc) \
	LP6NR(0x3588, DES_pcbc_encrypt , const unsigned char *, ___input, a0, unsigned char *, ___output, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define DES_quad_cksum(___input, ___output, ___length, ___out_count, ___seed) \
	LP5(0x358e, DES_LONG, DES_quad_cksum , const unsigned char *, ___input, a0, DES_cblock *, ___output, a1, long, ___length, d0, int, ___out_count, d1, DES_cblock *, ___seed, a2,\
	, AMISSL_BASE_NAME)

#define DES_random_key(___ret) \
	LP1(0x3594, int, DES_random_key , DES_cblock *, ___ret, a0,\
	, AMISSL_BASE_NAME)

#define DES_set_odd_parity(___key) \
	LP1NR(0x359a, DES_set_odd_parity , DES_cblock *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define DES_check_key_parity(___key) \
	LP1(0x35a0, int, DES_check_key_parity , const_DES_cblock *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define DES_is_weak_key(___key) \
	LP1(0x35a6, int, DES_is_weak_key , const_DES_cblock *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define DES_set_key(___key, ___schedule) \
	LP2(0x35ac, int, DES_set_key , const_DES_cblock *, ___key, a0, DES_key_schedule *, ___schedule, a1,\
	, AMISSL_BASE_NAME)

#define DES_key_sched(___key, ___schedule) \
	LP2(0x35b2, int, DES_key_sched , const_DES_cblock *, ___key, a0, DES_key_schedule *, ___schedule, a1,\
	, AMISSL_BASE_NAME)

#define DES_set_key_checked(___key, ___schedule) \
	LP2(0x35b8, int, DES_set_key_checked , const_DES_cblock *, ___key, a0, DES_key_schedule *, ___schedule, a1,\
	, AMISSL_BASE_NAME)

#define DES_set_key_unchecked(___key, ___schedule) \
	LP2NR(0x35be, DES_set_key_unchecked , const_DES_cblock *, ___key, a0, DES_key_schedule *, ___schedule, a1,\
	, AMISSL_BASE_NAME)

#define DES_string_to_key(___str, ___key) \
	LP2NR(0x35c4, DES_string_to_key , const char *, ___str, a0, DES_cblock *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define DES_string_to_2keys(___str, ___key1, ___key2) \
	LP3NR(0x35ca, DES_string_to_2keys , const char *, ___str, a0, DES_cblock *, ___key1, a1, DES_cblock *, ___key2, a2,\
	, AMISSL_BASE_NAME)

#define DES_cfb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num, ___enc) \
	LP7NR(0x35d0, DES_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define DES_ofb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num) \
	LP6NR(0x35d6, DES_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, int *, ___num, d1,\
	, AMISSL_BASE_NAME)

#define DES_read_password(___key, ___prompt, ___verify) \
	LP3(0x35dc, int, DES_read_password , DES_cblock *, ___key, a0, const char *, ___prompt, a1, int, ___verify, d0,\
	, AMISSL_BASE_NAME)

#define DES_read_2passwords(___key1, ___key2, ___prompt, ___verify) \
	LP4(0x35e2, int, DES_read_2passwords , DES_cblock *, ___key1, a0, DES_cblock *, ___key2, a1, const char *, ___prompt, a2, int, ___verify, d0,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_options() \
	LP0(0x35e8, const char *, _ossl_old_des_options ,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_ecb3_encrypt(___input, ___output, ___ks1, ___ks2, ___ks3, ___enc) \
	LP6NR(0x35ee, _ossl_old_des_ecb3_encrypt , _ossl_old_des_cblock *, ___input, a0, _ossl_old_des_cblock *, ___output, a1, _ossl_old_des_key_schedule, ___ks1, d0, _ossl_old_des_key_schedule, ___ks2, d1, _ossl_old_des_key_schedule, ___ks3, d2, int, ___enc, d3,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_cbc_cksum(___input, ___output, ___length, ___schedule, ___ivec) \
	LP5(0x35f4, DES_LONG, _ossl_old_des_cbc_cksum , _ossl_old_des_cblock *, ___input, a0, _ossl_old_des_cblock *, ___output, a1, long, ___length, d0, _ossl_old_des_key_schedule, ___schedule, d1, _ossl_old_des_cblock *, ___ivec, a2,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_cbc_encrypt(___input, ___output, ___length, ___schedule, ___ivec, ___enc) \
	LP6NR(0x35fa, _ossl_old_des_cbc_encrypt , _ossl_old_des_cblock *, ___input, a0, _ossl_old_des_cblock *, ___output, a1, long, ___length, d0, _ossl_old_des_key_schedule, ___schedule, d1, _ossl_old_des_cblock *, ___ivec, a2, int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_ncbc_encrypt(___input, ___output, ___length, ___schedule, ___ivec, ___enc) \
	LP6NR(0x3600, _ossl_old_des_ncbc_encrypt , _ossl_old_des_cblock *, ___input, a0, _ossl_old_des_cblock *, ___output, a1, long, ___length, d0, _ossl_old_des_key_schedule, ___schedule, d1, _ossl_old_des_cblock *, ___ivec, a2, int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_xcbc_encrypt(___input, ___output, ___length, ___schedule, ___ivec, ___inw, ___outw, ___enc) \
	LP8NR(0x3606, _ossl_old_des_xcbc_encrypt , _ossl_old_des_cblock *, ___input, a0, _ossl_old_des_cblock *, ___output, a1, long, ___length, d0, _ossl_old_des_key_schedule, ___schedule, d1, _ossl_old_des_cblock *, ___ivec, a2, _ossl_old_des_cblock *, ___inw, a3, _ossl_old_des_cblock *, ___outw, d2, int, ___enc, d3,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_cfb_encrypt(___in, ___out, ___numbits, ___length, ___schedule, ___ivec, ___enc) \
	LP7NR(0x360c, _ossl_old_des_cfb_encrypt , unsigned char *, ___in, a0, unsigned char *, ___out, a1, int, ___numbits, d0, long, ___length, d1, _ossl_old_des_key_schedule, ___schedule, d2, _ossl_old_des_cblock *, ___ivec, a2, int, ___enc, d3,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_ecb_encrypt(___input, ___output, ___ks, ___enc) \
	LP4NR(0x3612, _ossl_old_des_ecb_encrypt , _ossl_old_des_cblock *, ___input, a0, _ossl_old_des_cblock *, ___output, a1, _ossl_old_des_key_schedule, ___ks, d0, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_encrypt(___data, ___ks, ___enc) \
	LP3NR(0x3618, _ossl_old_des_encrypt , DES_LONG *, ___data, a0, _ossl_old_des_key_schedule, ___ks, d0, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_encrypt2(___data, ___ks, ___enc) \
	LP3NR(0x361e, _ossl_old_des_encrypt2 , DES_LONG *, ___data, a0, _ossl_old_des_key_schedule, ___ks, d0, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_encrypt3(___data, ___ks1, ___ks2, ___ks3) \
	LP4NR(0x3624, _ossl_old_des_encrypt3 , DES_LONG *, ___data, a0, _ossl_old_des_key_schedule, ___ks1, d0, _ossl_old_des_key_schedule, ___ks2, d1, _ossl_old_des_key_schedule, ___ks3, d2,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_decrypt3(___data, ___ks1, ___ks2, ___ks3) \
	LP4NR(0x362a, _ossl_old_des_decrypt3 , DES_LONG *, ___data, a0, _ossl_old_des_key_schedule, ___ks1, d0, _ossl_old_des_key_schedule, ___ks2, d1, _ossl_old_des_key_schedule, ___ks3, d2,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_ede3_cbc_encrypt(___input, ___output, ___length, ___ks1, ___ks2, ___ks3, ___ivec, ___enc) \
	LP8NR(0x3630, _ossl_old_des_ede3_cbc_encrypt , _ossl_old_des_cblock *, ___input, a0, _ossl_old_des_cblock *, ___output, a1, long, ___length, d0, _ossl_old_des_key_schedule, ___ks1, d1, _ossl_old_des_key_schedule, ___ks2, d2, _ossl_old_des_key_schedule, ___ks3, d3, _ossl_old_des_cblock *, ___ivec, a2, int, ___enc, d4,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_ede3_cfb64_encrypt(___in, ___out, ___length, ___ks1, ___ks2, ___ks3, ___ivec, ___num, ___enc) \
	LP9NR(0x3636, _ossl_old_des_ede3_cfb64_encrypt , unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, _ossl_old_des_key_schedule, ___ks1, d1, _ossl_old_des_key_schedule, ___ks2, d2, _ossl_old_des_key_schedule, ___ks3, d3, _ossl_old_des_cblock *, ___ivec, a2, int *, ___num, a3, int, ___enc, d4,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_ede3_ofb64_encrypt(___in, ___out, ___length, ___ks1, ___ks2, ___ks3, ___ivec, ___num) \
	LP8NR(0x363c, _ossl_old_des_ede3_ofb64_encrypt , unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, _ossl_old_des_key_schedule, ___ks1, d1, _ossl_old_des_key_schedule, ___ks2, d2, _ossl_old_des_key_schedule, ___ks3, d3, _ossl_old_des_cblock *, ___ivec, a2, int *, ___num, a3,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_enc_read(___fd, ___buf, ___len, ___sched, ___iv) \
	LP5(0x3642, int, _ossl_old_des_enc_read , int, ___fd, d0, char *, ___buf, a0, int, ___len, d1, _ossl_old_des_key_schedule, ___sched, d2, _ossl_old_des_cblock *, ___iv, a1,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_enc_write(___fd, ___buf, ___len, ___sched, ___iv) \
	LP5(0x3648, int, _ossl_old_des_enc_write , int, ___fd, d0, char *, ___buf, a0, int, ___len, d1, _ossl_old_des_key_schedule, ___sched, d2, _ossl_old_des_cblock *, ___iv, a1,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_fcrypt(___buf, ___salt, ___ret) \
	LP3(0x364e, char *, _ossl_old_des_fcrypt , const char *, ___buf, a0, const char *, ___salt, a1, char *, ___ret, a2,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_crypt(___buf, ___salt) \
	LP2(0x3654, char *, _ossl_old_des_crypt , const char *, ___buf, a0, const char *, ___salt, a1,\
	, AMISSL_BASE_NAME)

#define _ossl_old_crypt(___buf, ___salt) \
	LP2(0x365a, char *, _ossl_old_crypt , const char *, ___buf, a0, const char *, ___salt, a1,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_ofb_encrypt(___in, ___out, ___numbits, ___length, ___schedule, ___ivec) \
	LP6NR(0x3660, _ossl_old_des_ofb_encrypt , unsigned char *, ___in, a0, unsigned char *, ___out, a1, int, ___numbits, d0, long, ___length, d1, _ossl_old_des_key_schedule, ___schedule, d2, _ossl_old_des_cblock *, ___ivec, a2,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_pcbc_encrypt(___input, ___output, ___length, ___schedule, ___ivec, ___enc) \
	LP6NR(0x3666, _ossl_old_des_pcbc_encrypt , _ossl_old_des_cblock *, ___input, a0, _ossl_old_des_cblock *, ___output, a1, long, ___length, d0, _ossl_old_des_key_schedule, ___schedule, d1, _ossl_old_des_cblock *, ___ivec, a2, int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_quad_cksum(___input, ___output, ___length, ___out_count, ___seed) \
	LP5(0x366c, DES_LONG, _ossl_old_des_quad_cksum , _ossl_old_des_cblock *, ___input, a0, _ossl_old_des_cblock *, ___output, a1, long, ___length, d0, int, ___out_count, d1, _ossl_old_des_cblock *, ___seed, a2,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_random_seed(___key) \
	LP1NR(0x3672, _ossl_old_des_random_seed , _ossl_old_des_cblock, ___key, d0,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_random_key(___ret) \
	LP1NR(0x3678, _ossl_old_des_random_key , _ossl_old_des_cblock, ___ret, d0,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_read_password(___key, ___prompt, ___verify) \
	LP3(0x367e, int, _ossl_old_des_read_password , _ossl_old_des_cblock *, ___key, a0, const char *, ___prompt, a1, int, ___verify, d0,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_read_2passwords(___key1, ___key2, ___prompt, ___verify) \
	LP4(0x3684, int, _ossl_old_des_read_2passwords , _ossl_old_des_cblock *, ___key1, a0, _ossl_old_des_cblock *, ___key2, a1, const char *, ___prompt, a2, int, ___verify, d0,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_set_odd_parity(___key) \
	LP1NR(0x368a, _ossl_old_des_set_odd_parity , _ossl_old_des_cblock *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_is_weak_key(___key) \
	LP1(0x3690, int, _ossl_old_des_is_weak_key , _ossl_old_des_cblock *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_set_key(___key, ___schedule) \
	LP2(0x3696, int, _ossl_old_des_set_key , _ossl_old_des_cblock *, ___key, a0, _ossl_old_des_key_schedule, ___schedule, d0,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_key_sched(___key, ___schedule) \
	LP2(0x369c, int, _ossl_old_des_key_sched , _ossl_old_des_cblock *, ___key, a0, _ossl_old_des_key_schedule, ___schedule, d0,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_string_to_key(___str, ___key) \
	LP2NR(0x36a2, _ossl_old_des_string_to_key , char *, ___str, a0, _ossl_old_des_cblock *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_string_to_2keys(___str, ___key1, ___key2) \
	LP3NR(0x36a8, _ossl_old_des_string_to_2keys , char *, ___str, a0, _ossl_old_des_cblock *, ___key1, a1, _ossl_old_des_cblock *, ___key2, a2,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_cfb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num, ___enc) \
	LP7NR(0x36ae, _ossl_old_des_cfb64_encrypt , unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, _ossl_old_des_key_schedule, ___schedule, d1, _ossl_old_des_cblock *, ___ivec, a2, int *, ___num, a3, int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define _ossl_old_des_ofb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num) \
	LP6NR(0x36b4, _ossl_old_des_ofb64_encrypt , unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, _ossl_old_des_key_schedule, ___schedule, d1, _ossl_old_des_cblock *, ___ivec, a2, int *, ___num, a3,\
	, AMISSL_BASE_NAME)

#define _ossl_096_des_random_seed(___key) \
	LP1NR(0x36ba, _ossl_096_des_random_seed , des_cblock *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define DH_OpenSSL() \
	LP0(0x36c0, const DH_METHOD *, DH_OpenSSL ,\
	, AMISSL_BASE_NAME)

#define DH_set_default_method(___meth) \
	LP1NR(0x36c6, DH_set_default_method , const DH_METHOD *, ___meth, a0,\
	, AMISSL_BASE_NAME)

#define DH_get_default_method() \
	LP0(0x36cc, const DH_METHOD *, DH_get_default_method ,\
	, AMISSL_BASE_NAME)

#define DH_set_method(___dh, ___meth) \
	LP2(0x36d2, int, DH_set_method , DH *, ___dh, a0, const DH_METHOD *, ___meth, a1,\
	, AMISSL_BASE_NAME)

#define DH_new_method(___engine) \
	LP1(0x36d8, DH *, DH_new_method , ENGINE *, ___engine, a0,\
	, AMISSL_BASE_NAME)

#define DH_new() \
	LP0(0x36de, DH *, DH_new ,\
	, AMISSL_BASE_NAME)

#define DH_free(___dh) \
	LP1NR(0x36e4, DH_free , DH *, ___dh, a0,\
	, AMISSL_BASE_NAME)

#define DH_up_ref(___dh) \
	LP1(0x36ea, int, DH_up_ref , DH *, ___dh, a0,\
	, AMISSL_BASE_NAME)

#define DH_size(___dh) \
	LP1(0x36f0, int, DH_size , const DH *, ___dh, a0,\
	, AMISSL_BASE_NAME)

#define DH_get_ex_new_index(___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP5(0x36f6, int, DH_get_ex_new_index , long, ___argl, d0, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define DH_set_ex_data(___d, ___idx, ___arg) \
	LP3(0x36fc, int, DH_set_ex_data , DH *, ___d, a0, int, ___idx, d0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME)

#define DH_get_ex_data(___d, ___idx) \
	LP2(0x3702, void *, DH_get_ex_data , DH *, ___d, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define DH_generate_parameters(___prime_len, ___generator, ___callback, ___cb_arg) \
	LP4FP(0x3708, DH *, DH_generate_parameters , int, ___prime_len, d0, int, ___generator, d1, __fpt, ___callback, a0, void *, ___cb_arg, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(int,int,void *))

#define DH_check(___dh, ___codes) \
	LP2(0x370e, int, DH_check , const DH *, ___dh, a0, int *, ___codes, a1,\
	, AMISSL_BASE_NAME)

#define DH_generate_key(___dh) \
	LP1(0x3714, int, DH_generate_key , DH *, ___dh, a0,\
	, AMISSL_BASE_NAME)

#define DH_compute_key(___key, ___pub_key, ___dh) \
	LP3(0x371a, int, DH_compute_key , unsigned char *, ___key, a0, const BIGNUM *, ___pub_key, a1, DH *, ___dh, a2,\
	, AMISSL_BASE_NAME)

#define d2i_DHparams(___a, ___pp, ___length) \
	LP3(0x3720, DH *, d2i_DHparams , DH **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define i2d_DHparams(___a, ___pp) \
	LP2(0x3726, int, i2d_DHparams , const DH *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define DHparams_print(___bp, ___x) \
	LP2(0x372c, int, DHparams_print , BIO *, ___bp, a0, const DH *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define ERR_load_DH_strings() \
	LP0NR(0x3732, ERR_load_DH_strings ,\
	, AMISSL_BASE_NAME)

#define DSA_SIG_new() \
	LP0(0x3738, DSA_SIG *, DSA_SIG_new ,\
	, AMISSL_BASE_NAME)

#define DSA_SIG_free(___sig) \
	LP1NR(0x373e, DSA_SIG_free , DSA_SIG *, ___sig, a0,\
	, AMISSL_BASE_NAME)

#define i2d_DSA_SIG(___a, ___pp) \
	LP2(0x3744, int, i2d_DSA_SIG , const DSA_SIG *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define d2i_DSA_SIG(___v, ___pp, ___length) \
	LP3(0x374a, DSA_SIG *, d2i_DSA_SIG , DSA_SIG **, ___v, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define DSA_do_sign(___dgst, ___dlen, ___dsa) \
	LP3(0x3750, DSA_SIG *, DSA_do_sign , const unsigned char *, ___dgst, a0, int, ___dlen, d0, DSA *, ___dsa, a1,\
	, AMISSL_BASE_NAME)

#define DSA_do_verify(___dgst, ___dgst_len, ___sig, ___dsa) \
	LP4(0x3756, int, DSA_do_verify , const unsigned char *, ___dgst, a0, int, ___dgst_len, d0, DSA_SIG *, ___sig, a1, DSA *, ___dsa, a2,\
	, AMISSL_BASE_NAME)

#define DSA_OpenSSL() \
	LP0(0x375c, const DSA_METHOD *, DSA_OpenSSL ,\
	, AMISSL_BASE_NAME)

#define DSA_set_default_method(___a) \
	LP1NR(0x3762, DSA_set_default_method , const DSA_METHOD *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define DSA_get_default_method() \
	LP0(0x3768, const DSA_METHOD *, DSA_get_default_method ,\
	, AMISSL_BASE_NAME)

#define DSA_set_method(___dsa, ___a) \
	LP2(0x376e, int, DSA_set_method , DSA *, ___dsa, a0, const DSA_METHOD *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define DSA_new() \
	LP0(0x3774, DSA *, DSA_new ,\
	, AMISSL_BASE_NAME)

#define DSA_new_method(___engine) \
	LP1(0x377a, DSA *, DSA_new_method , ENGINE *, ___engine, a0,\
	, AMISSL_BASE_NAME)

#define DSA_free(___r) \
	LP1NR(0x3780, DSA_free , DSA *, ___r, a0,\
	, AMISSL_BASE_NAME)

#define DSA_up_ref(___r) \
	LP1(0x3786, int, DSA_up_ref , DSA *, ___r, a0,\
	, AMISSL_BASE_NAME)

#define DSA_size(___a) \
	LP1(0x378c, int, DSA_size , const DSA *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define DSA_sign_setup(___dsa, ___ctx_in, ___kinvp, ___rp) \
	LP4(0x3792, int, DSA_sign_setup , DSA *, ___dsa, a0, BN_CTX *, ___ctx_in, a1, BIGNUM **, ___kinvp, a2, BIGNUM **, ___rp, a3,\
	, AMISSL_BASE_NAME)

#define DSA_sign(___type, ___dgst, ___dlen, ___sig, ___siglen, ___dsa) \
	LP6(0x3798, int, DSA_sign , int, ___type, d0, const unsigned char *, ___dgst, a0, int, ___dlen, d1, unsigned char *, ___sig, a1, unsigned int *, ___siglen, a2, DSA *, ___dsa, a3,\
	, AMISSL_BASE_NAME)

#define DSA_verify(___type, ___dgst, ___dgst_len, ___sigbuf, ___siglen, ___dsa) \
	LP6(0x379e, int, DSA_verify , int, ___type, d0, const unsigned char *, ___dgst, a0, int, ___dgst_len, d1, const unsigned char *, ___sigbuf, a1, int, ___siglen, d2, DSA *, ___dsa, a2,\
	, AMISSL_BASE_NAME)

#define DSA_get_ex_new_index(___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP5(0x37a4, int, DSA_get_ex_new_index , long, ___argl, d0, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define DSA_set_ex_data(___d, ___idx, ___arg) \
	LP3(0x37aa, int, DSA_set_ex_data , DSA *, ___d, a0, int, ___idx, d0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME)

#define DSA_get_ex_data(___d, ___idx) \
	LP2(0x37b0, void *, DSA_get_ex_data , DSA *, ___d, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define d2i_DSAPublicKey(___a, ___pp, ___length) \
	LP3(0x37b6, DSA *, d2i_DSAPublicKey , DSA **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define d2i_DSAPrivateKey(___a, ___pp, ___length) \
	LP3(0x37bc, DSA *, d2i_DSAPrivateKey , DSA **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define d2i_DSAparams(___a, ___pp, ___length) \
	LP3(0x37c2, DSA *, d2i_DSAparams , DSA **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define DSA_generate_parameters(___bits, ___seed, ___seed_len, ___counter_ret, ___h_ret, ___callback, ___cb_arg) \
	LP7FP(0x37c8, DSA *, DSA_generate_parameters , int, ___bits, d0, unsigned char *, ___seed, a0, int, ___seed_len, d1, int *, ___counter_ret, a1, unsigned long *, ___h_ret, a2, __fpt, ___callback, a3, void *, ___cb_arg, d2,\
	, AMISSL_BASE_NAME, void (*__fpt)(int,int,void *))

#define DSA_generate_key(___a) \
	LP1(0x37ce, int, DSA_generate_key , DSA *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define i2d_DSAPublicKey(___a, ___pp) \
	LP2(0x37d4, int, i2d_DSAPublicKey , const DSA *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define i2d_DSAPrivateKey(___a, ___pp) \
	LP2(0x37da, int, i2d_DSAPrivateKey , const DSA *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define i2d_DSAparams(___a, ___pp) \
	LP2(0x37e0, int, i2d_DSAparams , const DSA *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define DSAparams_print(___bp, ___x) \
	LP2(0x37e6, int, DSAparams_print , BIO *, ___bp, a0, const DSA *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define DSA_print(___bp, ___x, ___off) \
	LP3(0x37ec, int, DSA_print , BIO *, ___bp, a0, const DSA *, ___x, a1, int, ___off, d0,\
	, AMISSL_BASE_NAME)

#define DSA_dup_DH(___r) \
	LP1(0x37f2, DH *, DSA_dup_DH , const DSA *, ___r, a0,\
	, AMISSL_BASE_NAME)

#define ERR_load_DSA_strings() \
	LP0NR(0x37f8, ERR_load_DSA_strings ,\
	, AMISSL_BASE_NAME)

#define idea_options() \
	LP0(0x37fe, const char *, idea_options ,\
	, AMISSL_BASE_NAME)

#define idea_ecb_encrypt(___in, ___out, ___ks) \
	LP3NR(0x3804, idea_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, IDEA_KEY_SCHEDULE *, ___ks, a2,\
	, AMISSL_BASE_NAME)

#define idea_set_encrypt_key(___key, ___ks) \
	LP2NR(0x380a, idea_set_encrypt_key , const unsigned char *, ___key, a0, IDEA_KEY_SCHEDULE *, ___ks, a1,\
	, AMISSL_BASE_NAME)

#define idea_set_decrypt_key(___ek, ___dk) \
	LP2NR(0x3810, idea_set_decrypt_key , IDEA_KEY_SCHEDULE *, ___ek, a0, IDEA_KEY_SCHEDULE *, ___dk, a1,\
	, AMISSL_BASE_NAME)

#define idea_cbc_encrypt(___in, ___out, ___length, ___ks, ___iv, ___enc) \
	LP6NR(0x3816, idea_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, IDEA_KEY_SCHEDULE *, ___ks, a2, unsigned char *, ___iv, a3, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define idea_cfb64_encrypt(___in, ___out, ___length, ___ks, ___iv, ___num, ___enc) \
	LP7NR(0x381c, idea_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, IDEA_KEY_SCHEDULE *, ___ks, a2, unsigned char *, ___iv, a3, int *, ___num, d1, int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define idea_ofb64_encrypt(___in, ___out, ___length, ___ks, ___iv, ___num) \
	LP6NR(0x3822, idea_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, IDEA_KEY_SCHEDULE *, ___ks, a2, unsigned char *, ___iv, a3, int *, ___num, d1,\
	, AMISSL_BASE_NAME)

#define idea_encrypt(___in, ___ks) \
	LP2NR(0x3828, idea_encrypt , unsigned long *, ___in, a0, IDEA_KEY_SCHEDULE *, ___ks, a1,\
	, AMISSL_BASE_NAME)

#define MD2_options() \
	LP0(0x382e, const char *, MD2_options ,\
	, AMISSL_BASE_NAME)

#define MD2_Init(___c) \
	LP1(0x3834, int, MD2_Init , MD2_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define MD2_Update(___c, ___data, ___len) \
	LP3(0x383a, int, MD2_Update , MD2_CTX *, ___c, a0, const unsigned char *, ___data, a1, unsigned long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define MD2_Final(___md, ___c) \
	LP2(0x3840, int, MD2_Final , unsigned char *, ___md, a0, MD2_CTX *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define MD2(___d, ___n, ___md) \
	LP3(0x3846, unsigned char *, MD2 , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define MD4_Init(___c) \
	LP1(0x384c, int, MD4_Init , MD4_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define MD4_Update(___c, ___data, ___len) \
	LP3(0x3852, int, MD4_Update , MD4_CTX *, ___c, a0, const void *, ___data, a1, unsigned long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define MD4_Final(___md, ___c) \
	LP2(0x3858, int, MD4_Final , unsigned char *, ___md, a0, MD4_CTX *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define MD4(___d, ___n, ___md) \
	LP3(0x385e, unsigned char *, MD4 , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define MD4_Transform(___c, ___b) \
	LP2NR(0x3864, MD4_Transform , MD4_CTX *, ___c, a0, const unsigned char *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define MD5_Init(___c) \
	LP1(0x386a, int, MD5_Init , MD5_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define MD5_Update(___c, ___data, ___len) \
	LP3(0x3870, int, MD5_Update , MD5_CTX *, ___c, a0, const void *, ___data, a1, unsigned long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define MD5_Final(___md, ___c) \
	LP2(0x3876, int, MD5_Final , unsigned char *, ___md, a0, MD5_CTX *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define MD5(___d, ___n, ___md) \
	LP3(0x387c, unsigned char *, MD5 , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define MD5_Transform(___c, ___b) \
	LP2NR(0x3882, MD5_Transform , MD5_CTX *, ___c, a0, const unsigned char *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define MDC2_Init(___c) \
	LP1(0x3888, int, MDC2_Init , MDC2_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define MDC2_Update(___c, ___data, ___len) \
	LP3(0x388e, int, MDC2_Update , MDC2_CTX *, ___c, a0, const unsigned char *, ___data, a1, unsigned long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define MDC2_Final(___md, ___c) \
	LP2(0x3894, int, MDC2_Final , unsigned char *, ___md, a0, MDC2_CTX *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define MDC2(___d, ___n, ___md) \
	LP3(0x389a, unsigned char *, MDC2 , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define RC2_set_key(___key, ___len, ___data, ___bits) \
	LP4NR(0x38a0, RC2_set_key , RC2_KEY *, ___key, a0, int, ___len, d0, const unsigned char *, ___data, a1, int, ___bits, d1,\
	, AMISSL_BASE_NAME)

#define RC2_ecb_encrypt(___in, ___out, ___key, ___enc) \
	LP4NR(0x38a6, RC2_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, RC2_KEY *, ___key, a2, int, ___enc, d0,\
	, AMISSL_BASE_NAME)

#define RC2_encrypt(___data, ___key) \
	LP2NR(0x38ac, RC2_encrypt , unsigned long *, ___data, a0, RC2_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define RC2_decrypt(___data, ___key) \
	LP2NR(0x38b2, RC2_decrypt , unsigned long *, ___data, a0, RC2_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define RC2_cbc_encrypt(___in, ___out, ___length, ___ks, ___iv, ___enc) \
	LP6NR(0x38b8, RC2_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, RC2_KEY *, ___ks, a2, unsigned char *, ___iv, a3, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define RC2_cfb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num, ___enc) \
	LP7NR(0x38be, RC2_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, RC2_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define RC2_ofb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num) \
	LP6NR(0x38c4, RC2_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, RC2_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
	, AMISSL_BASE_NAME)

#define RC4_options() \
	LP0(0x38ca, const char *, RC4_options ,\
	, AMISSL_BASE_NAME)

#define RC4_set_key(___key, ___len, ___data) \
	LP3NR(0x38d0, RC4_set_key , RC4_KEY *, ___key, a0, int, ___len, d0, const unsigned char *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define RC4(___key, ___len, ___indata, ___outdata) \
	LP4NR(0x38d6, RC4 , RC4_KEY *, ___key, a0, unsigned long, ___len, d0, const unsigned char *, ___indata, a1, unsigned char *, ___outdata, a2,\
	, AMISSL_BASE_NAME)

#define RC5_32_set_key(___key, ___len, ___data, ___rounds) \
	LP4NR(0x38dc, RC5_32_set_key , RC5_32_KEY *, ___key, a0, int, ___len, d0, const unsigned char *, ___data, a1, int, ___rounds, d1,\
	, AMISSL_BASE_NAME)

#define RC5_32_ecb_encrypt(___in, ___out, ___key, ___enc) \
	LP4NR(0x38e2, RC5_32_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, RC5_32_KEY *, ___key, a2, int, ___enc, d0,\
	, AMISSL_BASE_NAME)

#define RC5_32_encrypt(___data, ___key) \
	LP2NR(0x38e8, RC5_32_encrypt , unsigned long *, ___data, a0, RC5_32_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define RC5_32_decrypt(___data, ___key) \
	LP2NR(0x38ee, RC5_32_decrypt , unsigned long *, ___data, a0, RC5_32_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define RC5_32_cbc_encrypt(___in, ___out, ___length, ___ks, ___iv, ___enc) \
	LP6NR(0x38f4, RC5_32_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, RC5_32_KEY *, ___ks, a2, unsigned char *, ___iv, a3, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define RC5_32_cfb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num, ___enc) \
	LP7NR(0x38fa, RC5_32_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, RC5_32_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define RC5_32_ofb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num) \
	LP6NR(0x3900, RC5_32_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, RC5_32_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
	, AMISSL_BASE_NAME)

#define RIPEMD160_Init(___c) \
	LP1(0x3906, int, RIPEMD160_Init , RIPEMD160_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define RIPEMD160_Update(___c, ___data, ___len) \
	LP3(0x390c, int, RIPEMD160_Update , RIPEMD160_CTX *, ___c, a0, const void *, ___data, a1, unsigned long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define RIPEMD160_Final(___md, ___c) \
	LP2(0x3912, int, RIPEMD160_Final , unsigned char *, ___md, a0, RIPEMD160_CTX *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define RIPEMD160(___d, ___n, ___md) \
	LP3(0x3918, unsigned char *, RIPEMD160 , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define RIPEMD160_Transform(___c, ___b) \
	LP2NR(0x391e, RIPEMD160_Transform , RIPEMD160_CTX *, ___c, a0, const unsigned char *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define RSA_new() \
	LP0(0x3924, RSA *, RSA_new ,\
	, AMISSL_BASE_NAME)

#define RSA_new_method(___engine) \
	LP1(0x392a, RSA *, RSA_new_method , ENGINE *, ___engine, a0,\
	, AMISSL_BASE_NAME)

#define RSA_size(___a) \
	LP1(0x3930, int, RSA_size , const RSA *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define RSA_generate_key(___bits, ___e, ___callback, ___cb_arg) \
	LP4FP(0x3936, RSA *, RSA_generate_key , int, ___bits, d0, unsigned long, ___e, d1, __fpt, ___callback, a0, void *, ___cb_arg, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(int,int,void *))

#define RSA_check_key(___a) \
	LP1(0x393c, int, RSA_check_key , const RSA *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define RSA_public_encrypt(___flen, ___from, ___to, ___rsa, ___padding) \
	LP5(0x3942, int, RSA_public_encrypt , int, ___flen, d0, const unsigned char *, ___from, a0, unsigned char *, ___to, a1, RSA *, ___rsa, a2, int, ___padding, d1,\
	, AMISSL_BASE_NAME)

#define RSA_private_encrypt(___flen, ___from, ___to, ___rsa, ___padding) \
	LP5(0x3948, int, RSA_private_encrypt , int, ___flen, d0, const unsigned char *, ___from, a0, unsigned char *, ___to, a1, RSA *, ___rsa, a2, int, ___padding, d1,\
	, AMISSL_BASE_NAME)

#define RSA_public_decrypt(___flen, ___from, ___to, ___rsa, ___padding) \
	LP5(0x394e, int, RSA_public_decrypt , int, ___flen, d0, const unsigned char *, ___from, a0, unsigned char *, ___to, a1, RSA *, ___rsa, a2, int, ___padding, d1,\
	, AMISSL_BASE_NAME)

#define RSA_private_decrypt(___flen, ___from, ___to, ___rsa, ___padding) \
	LP5(0x3954, int, RSA_private_decrypt , int, ___flen, d0, const unsigned char *, ___from, a0, unsigned char *, ___to, a1, RSA *, ___rsa, a2, int, ___padding, d1,\
	, AMISSL_BASE_NAME)

#define RSA_free(___r) \
	LP1NR(0x395a, RSA_free , RSA *, ___r, a0,\
	, AMISSL_BASE_NAME)

#define RSA_up_ref(___r) \
	LP1(0x3960, int, RSA_up_ref , RSA *, ___r, a0,\
	, AMISSL_BASE_NAME)

#define RSA_flags(___r) \
	LP1(0x3966, int, RSA_flags , const RSA *, ___r, a0,\
	, AMISSL_BASE_NAME)

#define RSA_set_default_method(___meth) \
	LP1NR(0x396c, RSA_set_default_method , const RSA_METHOD *, ___meth, a0,\
	, AMISSL_BASE_NAME)

#define RSA_get_default_method() \
	LP0(0x3972, const RSA_METHOD *, RSA_get_default_method ,\
	, AMISSL_BASE_NAME)

#define RSA_get_method(___rsa) \
	LP1(0x3978, const RSA_METHOD *, RSA_get_method , const RSA *, ___rsa, a0,\
	, AMISSL_BASE_NAME)

#define RSA_set_method(___rsa, ___meth) \
	LP2(0x397e, int, RSA_set_method , RSA *, ___rsa, a0, const RSA_METHOD *, ___meth, a1,\
	, AMISSL_BASE_NAME)

#define RSA_memory_lock(___r) \
	LP1(0x3984, int, RSA_memory_lock , RSA *, ___r, a0,\
	, AMISSL_BASE_NAME)

#define RSA_PKCS1_SSLeay() \
	LP0(0x398a, const RSA_METHOD *, RSA_PKCS1_SSLeay ,\
	, AMISSL_BASE_NAME)

#define RSA_null_method() \
	LP0(0x3990, const RSA_METHOD *, RSA_null_method ,\
	, AMISSL_BASE_NAME)

#define d2i_RSAPublicKey(___a, ___in, ___len) \
	LP3(0x3996, RSA *, d2i_RSAPublicKey , RSA **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_RSAPublicKey(___a, ___out) \
	LP2(0x399c, int, i2d_RSAPublicKey , const RSA *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define RSAPublicKey_it() \
	LP0(0x39a2, const ASN1_ITEM *, RSAPublicKey_it ,\
	, AMISSL_BASE_NAME)

#define d2i_RSAPrivateKey(___a, ___in, ___len) \
	LP3(0x39a8, RSA *, d2i_RSAPrivateKey , RSA **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_RSAPrivateKey(___a, ___out) \
	LP2(0x39ae, int, i2d_RSAPrivateKey , const RSA *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define RSAPrivateKey_it() \
	LP0(0x39b4, const ASN1_ITEM *, RSAPrivateKey_it ,\
	, AMISSL_BASE_NAME)

#define RSA_print(___bp, ___r, ___offset) \
	LP3(0x39ba, int, RSA_print , BIO *, ___bp, a0, const RSA *, ___r, a1, int, ___offset, d0,\
	, AMISSL_BASE_NAME)

#define i2d_RSA_NET(___a, ___pp, ___cb, ___sgckey) \
	LP4FP(0x39c0, int, i2d_RSA_NET , const RSA *, ___a, a0, unsigned char **, ___pp, a1, __fpt, ___cb, a2, int, ___sgckey, d0,\
	, AMISSL_BASE_NAME, int (*__fpt)())

#define d2i_RSA_NET(___a, ___pp, ___length, ___cb, ___sgckey) \
	LP5FP(0x39c6, RSA *, d2i_RSA_NET , RSA **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0, __fpt, ___cb, a2, int, ___sgckey, d1,\
	, AMISSL_BASE_NAME, int (*__fpt)())

#define i2d_Netscape_RSA(___a, ___pp, ___cb) \
	LP3FP(0x39cc, int, i2d_Netscape_RSA , const RSA *, ___a, a0, unsigned char **, ___pp, a1, __fpt, ___cb, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)())

#define d2i_Netscape_RSA(___a, ___pp, ___length, ___cb) \
	LP4FP(0x39d2, RSA *, d2i_Netscape_RSA , RSA **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0, __fpt, ___cb, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)())

#define RSA_sign(___type, ___m, ___m_length, ___sigret, ___siglen, ___rsa) \
	LP6(0x39d8, int, RSA_sign , int, ___type, d0, const unsigned char *, ___m, a0, unsigned int, ___m_length, d1, unsigned char *, ___sigret, a1, unsigned int *, ___siglen, a2, RSA *, ___rsa, a3,\
	, AMISSL_BASE_NAME)

#define RSA_verify(___type, ___m, ___m_length, ___sigbuf, ___siglen, ___rsa) \
	LP6(0x39de, int, RSA_verify , int, ___type, d0, const unsigned char *, ___m, a0, unsigned int, ___m_length, d1, unsigned char *, ___sigbuf, a1, unsigned int, ___siglen, d2, RSA *, ___rsa, a2,\
	, AMISSL_BASE_NAME)

#define RSA_sign_ASN1_OCTET_STRING(___type, ___m, ___m_length, ___sigret, ___siglen, ___rsa) \
	LP6(0x39e4, int, RSA_sign_ASN1_OCTET_STRING , int, ___type, d0, const unsigned char *, ___m, a0, unsigned int, ___m_length, d1, unsigned char *, ___sigret, a1, unsigned int *, ___siglen, a2, RSA *, ___rsa, a3,\
	, AMISSL_BASE_NAME)

#define RSA_verify_ASN1_OCTET_STRING(___type, ___m, ___m_length, ___sigbuf, ___siglen, ___rsa) \
	LP6(0x39ea, int, RSA_verify_ASN1_OCTET_STRING , int, ___type, d0, const unsigned char *, ___m, a0, unsigned int, ___m_length, d1, unsigned char *, ___sigbuf, a1, unsigned int, ___siglen, d2, RSA *, ___rsa, a2,\
	, AMISSL_BASE_NAME)

#define RSA_blinding_on(___rsa, ___ctx) \
	LP2(0x39f0, int, RSA_blinding_on , RSA *, ___rsa, a0, BN_CTX *, ___ctx, a1,\
	, AMISSL_BASE_NAME)

#define RSA_blinding_off(___rsa) \
	LP1NR(0x39f6, RSA_blinding_off , RSA *, ___rsa, a0,\
	, AMISSL_BASE_NAME)

#define RSA_padding_add_PKCS1_type_1(___to, ___tlen, ___f, ___fl) \
	LP4(0x39fc, int, RSA_padding_add_PKCS1_type_1 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1,\
	, AMISSL_BASE_NAME)

#define RSA_padding_check_PKCS1_type_1(___to, ___tlen, ___f, ___fl, ___rsa_len) \
	LP5(0x3a02, int, RSA_padding_check_PKCS1_type_1 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1, int, ___rsa_len, d2,\
	, AMISSL_BASE_NAME)

#define RSA_padding_add_PKCS1_type_2(___to, ___tlen, ___f, ___fl) \
	LP4(0x3a08, int, RSA_padding_add_PKCS1_type_2 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1,\
	, AMISSL_BASE_NAME)

#define RSA_padding_check_PKCS1_type_2(___to, ___tlen, ___f, ___fl, ___rsa_len) \
	LP5(0x3a0e, int, RSA_padding_check_PKCS1_type_2 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1, int, ___rsa_len, d2,\
	, AMISSL_BASE_NAME)

#define RSA_padding_add_PKCS1_OAEP(___to, ___tlen, ___f, ___fl, ___p, ___pl) \
	LP6(0x3a14, int, RSA_padding_add_PKCS1_OAEP , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1, const unsigned char *, ___p, a2, int, ___pl, d2,\
	, AMISSL_BASE_NAME)

#define RSA_padding_check_PKCS1_OAEP(___to, ___tlen, ___f, ___fl, ___rsa_len, ___p, ___pl) \
	LP7(0x3a1a, int, RSA_padding_check_PKCS1_OAEP , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1, int, ___rsa_len, d2, const unsigned char *, ___p, a2, int, ___pl, d3,\
	, AMISSL_BASE_NAME)

#define RSA_padding_add_SSLv23(___to, ___tlen, ___f, ___fl) \
	LP4(0x3a20, int, RSA_padding_add_SSLv23 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1,\
	, AMISSL_BASE_NAME)

#define RSA_padding_check_SSLv23(___to, ___tlen, ___f, ___fl, ___rsa_len) \
	LP5(0x3a26, int, RSA_padding_check_SSLv23 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1, int, ___rsa_len, d2,\
	, AMISSL_BASE_NAME)

#define RSA_padding_add_none(___to, ___tlen, ___f, ___fl) \
	LP4(0x3a2c, int, RSA_padding_add_none , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1,\
	, AMISSL_BASE_NAME)

#define RSA_padding_check_none(___to, ___tlen, ___f, ___fl, ___rsa_len) \
	LP5(0x3a32, int, RSA_padding_check_none , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1, int, ___rsa_len, d2,\
	, AMISSL_BASE_NAME)

#define RSA_get_ex_new_index(___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP5(0x3a38, int, RSA_get_ex_new_index , long, ___argl, d0, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define RSA_set_ex_data(___r, ___idx, ___arg) \
	LP3(0x3a3e, int, RSA_set_ex_data , RSA *, ___r, a0, int, ___idx, d0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME)

#define RSA_get_ex_data(___r, ___idx) \
	LP2(0x3a44, void *, RSA_get_ex_data , const RSA *, ___r, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define RSAPublicKey_dup(___rsa) \
	LP1(0x3a4a, RSA *, RSAPublicKey_dup , RSA *, ___rsa, a0,\
	, AMISSL_BASE_NAME)

#define RSAPrivateKey_dup(___rsa) \
	LP1(0x3a50, RSA *, RSAPrivateKey_dup , RSA *, ___rsa, a0,\
	, AMISSL_BASE_NAME)

#define ERR_load_RSA_strings() \
	LP0NR(0x3a56, ERR_load_RSA_strings ,\
	, AMISSL_BASE_NAME)

#define SHA_Init(___c) \
	LP1(0x3a5c, int, SHA_Init , SHA_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define SHA_Update(___c, ___data, ___len) \
	LP3(0x3a62, int, SHA_Update , SHA_CTX *, ___c, a0, const void *, ___data, a1, unsigned long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define SHA_Final(___md, ___c) \
	LP2(0x3a68, int, SHA_Final , unsigned char *, ___md, a0, SHA_CTX *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define SHA(___d, ___n, ___md) \
	LP3(0x3a6e, unsigned char *, SHA , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define SHA_Transform(___c, ___data) \
	LP2NR(0x3a74, SHA_Transform , SHA_CTX *, ___c, a0, const unsigned char *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define SHA1_Init(___c) \
	LP1(0x3a7a, int, SHA1_Init , SHA_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define SHA1_Update(___c, ___data, ___len) \
	LP3(0x3a80, int, SHA1_Update , SHA_CTX *, ___c, a0, const void *, ___data, a1, unsigned long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define SHA1_Final(___md, ___c) \
	LP2(0x3a86, int, SHA1_Final , unsigned char *, ___md, a0, SHA_CTX *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define SHA1(___d, ___n, ___md) \
	LP3(0x3a8c, unsigned char *, SHA1 , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define SHA1_Transform(___c, ___data) \
	LP2NR(0x3a92, SHA1_Transform , SHA_CTX *, ___c, a0, const unsigned char *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define HMAC_CTX_set_flags(___ctx, ___flags) \
	LP2NR(0x3aa4, HMAC_CTX_set_flags , HMAC_CTX *, ___ctx, a0, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define private_RC4_set_key(___key, ___len, ___data) \
	LP3NR(0x3aaa, private_RC4_set_key , RC4_KEY *, ___key, a0, int, ___len, d0, const unsigned char *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define X509_check_ca(___x) \
	LP1(0x3ab0, int, X509_check_ca , X509 *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define PROXY_POLICY_new() \
	LP0(0x3ab6, PROXY_POLICY *, PROXY_POLICY_new ,\
	, AMISSL_BASE_NAME)

#define PROXY_POLICY_free(___a) \
	LP1NR(0x3abc, PROXY_POLICY_free , PROXY_POLICY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PROXY_POLICY(___a, ___in, ___len) \
	LP3(0x3ac2, PROXY_POLICY *, d2i_PROXY_POLICY , PROXY_POLICY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PROXY_POLICY(___a, ___out) \
	LP2(0x3ac8, int, i2d_PROXY_POLICY , PROXY_POLICY *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PROXY_POLICY_it() \
	LP0(0x3ace, const ASN1_ITEM *, PROXY_POLICY_it ,\
	, AMISSL_BASE_NAME)

#define PROXY_CERT_INFO_EXTENSION_new() \
	LP0(0x3ad4, PROXY_CERT_INFO_EXTENSION *, PROXY_CERT_INFO_EXTENSION_new ,\
	, AMISSL_BASE_NAME)

#define PROXY_CERT_INFO_EXTENSION_free(___a) \
	LP1NR(0x3ada, PROXY_CERT_INFO_EXTENSION_free , PROXY_CERT_INFO_EXTENSION *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_PROXY_CERT_INFO_EXTENSION(___a, ___in, ___len) \
	LP3(0x3ae0, PROXY_CERT_INFO_EXTENSION *, d2i_PROXY_CERT_INFO_EXTENSION , PROXY_CERT_INFO_EXTENSION **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PROXY_CERT_INFO_EXTENSION(___a, ___out) \
	LP2(0x3ae6, int, i2d_PROXY_CERT_INFO_EXTENSION , PROXY_CERT_INFO_EXTENSION *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define PROXY_CERT_INFO_EXTENSION_it() \
	LP0(0x3aec, const ASN1_ITEM *, PROXY_CERT_INFO_EXTENSION_it ,\
	, AMISSL_BASE_NAME)

#define BN_mod_exp_mont_consttime(___rr, ___a, ___p, ___m, ___ctx, ___in_mont) \
	LP6(0x3af2, int, BN_mod_exp_mont_consttime , BIGNUM *, ___rr, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0, BN_MONT_CTX *, ___in_mont, d1,\
	, AMISSL_BASE_NAME)

#define BN_MONT_CTX_set_locked(___pmont, ___lock, ___mod, ___ctx) \
	LP4(0x3af8, BN_MONT_CTX *, BN_MONT_CTX_set_locked , BN_MONT_CTX **, ___pmont, a0, int, ___lock, d0, const BIGNUM *, ___mod, a1, BN_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define PKCS1_MGF1(___mask, ___len, ___seed, ___seedlen, ___dgst) \
	LP5(0x3afe, int, PKCS1_MGF1 , unsigned char *, ___mask, a0, long, ___len, d0, const unsigned char *, ___seed, a1, long, ___seedlen, d1, const EVP_MD *, ___dgst, a2,\
	, AMISSL_BASE_NAME)

#define RSA_padding_add_X931(___to, ___tlen, ___from, ___flen) \
	LP4(0x3b04, int, RSA_padding_add_X931 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___from, a1, int, ___flen, d1,\
	, AMISSL_BASE_NAME)

#define RSA_padding_check_X931(___to, ___tlen, ___from, ___flen, ___num) \
	LP5(0x3b0a, int, RSA_padding_check_X931 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___from, a1, int, ___flen, d1, int, ___num, d2,\
	, AMISSL_BASE_NAME)

#define RSA_X931_hash_id(___nid) \
	LP1(0x3b10, int, RSA_X931_hash_id , int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define RSA_verify_PKCS1_PSS(___rsa, ___mHash, ___Hash, ___EM, ___sLen) \
	LP5(0x3b16, int, RSA_verify_PKCS1_PSS , RSA *, ___rsa, a0, const unsigned char *, ___mHash, a1, const EVP_MD *, ___Hash, a2, const unsigned char *, ___EM, a3, int, ___sLen, d0,\
	, AMISSL_BASE_NAME)

#define RSA_padding_add_PKCS1_PSS(___rsa, ___EM, ___mHash, ___Hash, ___sLen) \
	LP5(0x3b1c, int, RSA_padding_add_PKCS1_PSS , RSA *, ___rsa, a0, unsigned char *, ___EM, a1, const unsigned char *, ___mHash, a2, const EVP_MD *, ___Hash, a3, int, ___sLen, d0,\
	, AMISSL_BASE_NAME)

#define EVP_sha224() \
	LP0(0x3b22, const EVP_MD *, EVP_sha224 ,\
	, AMISSL_BASE_NAME)

#define EVP_sha256() \
	LP0(0x3b28, const EVP_MD *, EVP_sha256 ,\
	, AMISSL_BASE_NAME)

#define EVP_sha384() \
	LP0(0x3b2e, const EVP_MD *, EVP_sha384 ,\
	, AMISSL_BASE_NAME)

#define EVP_sha512() \
	LP0(0x3b34, const EVP_MD *, EVP_sha512 ,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_add(___r, ___a, ___b) \
	LP3(0x3b3a, int, BN_GF2m_add , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_arr2poly(___p, ___a) \
	LP2(0x3b40, int, BN_GF2m_arr2poly , const int *, ___p, a0, BIGNUM *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod(___r, ___a, ___p) \
	LP3(0x3b46, int, BN_GF2m_mod , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_mul(___r, ___a, ___b, ___p, ___ctx) \
	LP5(0x3b4c, int, BN_GF2m_mod_mul , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___p, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_sqr(___r, ___a, ___p, ___ctx) \
	LP4(0x3b52, int, BN_GF2m_mod_sqr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_inv(___r, ___b, ___p, ___ctx) \
	LP4(0x3b58, int, BN_GF2m_mod_inv , BIGNUM *, ___r, a0, const BIGNUM *, ___b, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_div(___r, ___a, ___b, ___p, ___ctx) \
	LP5(0x3b5e, int, BN_GF2m_mod_div , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___p, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_exp(___r, ___a, ___b, ___p, ___ctx) \
	LP5(0x3b64, int, BN_GF2m_mod_exp , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___p, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_sqrt(___r, ___a, ___p, ___ctx) \
	LP4(0x3b6a, int, BN_GF2m_mod_sqrt , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_solve_quad(___r, ___a, ___p, ___ctx) \
	LP4(0x3b70, int, BN_GF2m_mod_solve_quad , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BN_generate_prime_ex(___ret, ___bits, ___safe, ___add, ___rem, ___cb) \
	LP6(0x3b76, int, BN_generate_prime_ex , BIGNUM *, ___ret, a0, int, ___bits, d0, int, ___safe, d1, const BIGNUM *, ___add, a1, const BIGNUM *, ___rem, a2, BN_GENCB *, ___cb, a3,\
	, AMISSL_BASE_NAME)

#define BN_is_prime_ex(___p, ___nchecks, ___ctx, ___cb) \
	LP4(0x3b7c, int, BN_is_prime_ex , const BIGNUM *, ___p, a0, int, ___nchecks, d0, BN_CTX *, ___ctx, a1, BN_GENCB *, ___cb, a2,\
	, AMISSL_BASE_NAME)

#define BN_set_negative(___b, ___n) \
	LP2NR(0x3b82, BN_set_negative , BIGNUM *, ___b, a0, int, ___n, d0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get_degree(___group) \
	LP1(0x3b88, int, EC_GROUP_get_degree , const EC_GROUP *, ___group, a0,\
	, AMISSL_BASE_NAME)

#define EC_GF2m_simple_method() \
	LP0(0x3b8e, const EC_METHOD *, EC_GF2m_simple_method ,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_set_curve_GF2m(___group, ___p, ___a, ___b, ___ctx) \
	LP5(0x3b94, int, EC_GROUP_set_curve_GF2m , EC_GROUP *, ___group, a0, const BIGNUM *, ___p, a1, const BIGNUM *, ___a, a2, const BIGNUM *, ___b, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get_curve_GF2m(___group, ___p, ___a, ___b, ___ctx) \
	LP5(0x3b9a, int, EC_GROUP_get_curve_GF2m , const EC_GROUP *, ___group, a0, BIGNUM *, ___p, a1, BIGNUM *, ___a, a2, BIGNUM *, ___b, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_set_affine_coordinates_GF2m(___group, ___point, ___x, ___y, ___ctx) \
	LP5(0x3ba0, int, EC_POINT_set_affine_coordinates_GF2m , const EC_GROUP *, ___group, a0, EC_POINT *, ___point, a1, const BIGNUM *, ___x, a2, const BIGNUM *, ___y, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_get_affine_coordinates_GF2m(___group, ___point, ___x, ___y, ___ctx) \
	LP5(0x3ba6, int, EC_POINT_get_affine_coordinates_GF2m , const EC_GROUP *, ___group, a0, const EC_POINT *, ___point, a1, BIGNUM *, ___x, a2, BIGNUM *, ___y, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define EC_get_builtin_curves(___r, ___nitems) \
	LP2(0x3bac, size_t, EC_get_builtin_curves , EC_builtin_curve *, ___r, a0, size_t, ___nitems, d0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_new_by_curve_name(___nid) \
	LP1(0x3bb2, EC_GROUP *, EC_GROUP_new_by_curve_name , int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_check(___group, ___ctx) \
	LP2(0x3bb8, int, EC_GROUP_check , const EC_GROUP *, ___group, a0, BN_CTX *, ___ctx, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_cleanup() \
	LP0NR(0x3bbe, ENGINE_cleanup ,\
	, AMISSL_BASE_NAME)

#define DSA_generate_parameters_ex(___dsa, ___bits, ___seed, ___seed_len, ___counter_ret, ___h_ret, ___cb) \
	LP7(0x3bc4, int, DSA_generate_parameters_ex , DSA *, ___dsa, a0, int, ___bits, d0, unsigned char *, ___seed, a1, int, ___seed_len, d1, int *, ___counter_ret, a2, unsigned long *, ___h_ret, a3, BN_GENCB *, ___cb, d2,\
	, AMISSL_BASE_NAME)

#define EVP_ecdsa() \
	LP0(0x3bca, const EVP_MD *, EVP_ecdsa ,\
	, AMISSL_BASE_NAME)

#define EC_KEY_new_by_curve_name(___nid) \
	LP1(0x3bd0, EC_KEY *, EC_KEY_new_by_curve_name , int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define EC_KEY_generate_key(___key) \
	LP1(0x3bd6, int, EC_KEY_generate_key , EC_KEY *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define EC_KEY_free(___key) \
	LP1NR(0x3bdc, EC_KEY_free , EC_KEY *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define ECDSA_SIG_free(___a) \
	LP1NR(0x3be2, ECDSA_SIG_free , ECDSA_SIG *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define ECDSA_do_sign(___dgst, ___dlen, ___eckey) \
	LP3(0x3be8, ECDSA_SIG *, ECDSA_do_sign , const unsigned char *, ___dgst, a0, int, ___dlen, d0, EC_KEY *, ___eckey, a1,\
	, AMISSL_BASE_NAME)

#define ECDSA_do_verify(___dgst, ___dgst_len, ___sig, ___eckey) \
	LP4(0x3bee, int, ECDSA_do_verify , const unsigned char *, ___dgst, a0, int, ___dgst_len, d0, const ECDSA_SIG *, ___sig, a1, EC_KEY *, ___eckey, a2,\
	, AMISSL_BASE_NAME)

#define EC_KEY_new() \
	LP0(0x3bf4, EC_KEY *, EC_KEY_new ,\
	, AMISSL_BASE_NAME)

#define EC_KEY_set_group(___eckey, ___group) \
	LP2(0x3bfa, int, EC_KEY_set_group , EC_KEY *, ___eckey, a0, const EC_GROUP *, ___group, a1,\
	, AMISSL_BASE_NAME)

#define EC_KEY_get0_group(___key) \
	LP1(0x3c00, const EC_GROUP *, EC_KEY_get0_group , const EC_KEY *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define EC_KEY_check_key(___eckey) \
	LP1(0x3c06, int, EC_KEY_check_key , const EC_KEY *, ___eckey, a0,\
	, AMISSL_BASE_NAME)

#define ECDSA_size(___eckey) \
	LP1(0x3c0c, int, ECDSA_size , const EC_KEY *, ___eckey, a0,\
	, AMISSL_BASE_NAME)

#define ECDSA_sign(___type, ___dgst, ___dgstlen, ___sig, ___siglen, ___eckey) \
	LP6(0x3c12, int, ECDSA_sign , int, ___type, d0, const unsigned char *, ___dgst, a0, int, ___dgstlen, d1, unsigned char *, ___sig, a1, unsigned int *, ___siglen, a2, EC_KEY *, ___eckey, a3,\
	, AMISSL_BASE_NAME)

#define ECDSA_verify(___type, ___dgst, ___dgstlen, ___sig, ___siglen, ___eckey) \
	LP6(0x3c18, int, ECDSA_verify , int, ___type, d0, const unsigned char *, ___dgst, a0, int, ___dgstlen, d1, const unsigned char *, ___sig, a1, int, ___siglen, d2, EC_KEY *, ___eckey, a2,\
	, AMISSL_BASE_NAME)

#define d2i_ECDSA_SIG(___v, ___pp, ___len) \
	LP3(0x3c1e, ECDSA_SIG *, d2i_ECDSA_SIG , ECDSA_SIG **, ___v, a0, const unsigned char **, ___pp, a1, long, ___len, a2,\
	, AMISSL_BASE_NAME)

#define i2d_ECDSA_SIG(___a, ___pp) \
	LP2(0x3c24, int, i2d_ECDSA_SIG , const ECDSA_SIG *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define DH_generate_parameters_ex(___ret, ___prime_len, ___generator, ___cb) \
	LP4(0x3c2a, int, DH_generate_parameters_ex , DH *, ___ret, a0, int, ___prime_len, d0, int, ___generator, d1, BN_GENCB *, ___cb, a1,\
	, AMISSL_BASE_NAME)

#define EC_METHOD_get_field_type(___meth) \
	LP1(0x3c30, int, EC_METHOD_get_field_type , const EC_METHOD *, ___meth, a0,\
	, AMISSL_BASE_NAME)

#define EC_KEY_get0_public_key(___eckey) \
	LP1(0x3c36, const EC_POINT *, EC_KEY_get0_public_key , const EC_KEY *, ___eckey, a0,\
	, AMISSL_BASE_NAME)

#define ECDH_compute_key(___out, ___outlen, ___pub_key, ___ecdh, ___KDF) \
	LP5FP(0x3c3c, int, ECDH_compute_key , void *, ___out, a0, size_t, ___outlen, d0, const EC_POINT *, ___pub_key, a1, EC_KEY *, ___ecdh, a2, __fpt, ___KDF, a3,\
	, AMISSL_BASE_NAME, void *(*__fpt)(const void *,size_t,void *,size_t *))

#define EC_KEY_get0_private_key(___eckey) \
	LP1(0x3c42, const BIGNUM *, EC_KEY_get0_private_key , const EC_KEY *, ___eckey, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_first() \
	LP0(0x3c48, ENGINE *, ENGINE_get_first ,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_id(___e) \
	LP1(0x3c4e, const char *, ENGINE_get_id , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_name(___e) \
	LP1(0x3c54, const char *, ENGINE_get_name , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_next(___e) \
	LP1(0x3c5a, ENGINE *, ENGINE_get_next , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_free(___e) \
	LP1(0x3c60, int, ENGINE_free , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_new() \
	LP0(0x3c66, ENGINE *, ENGINE_new ,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_id(___e, ___id) \
	LP2(0x3c6c, int, ENGINE_set_id , ENGINE *, ___e, a0, const char *, ___id, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_name(___e, ___name) \
	LP2(0x3c72, int, ENGINE_set_name , ENGINE *, ___e, a0, const char *, ___name, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_add(___e) \
	LP1(0x3c78, int, ENGINE_add , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_remove(___e) \
	LP1(0x3c7e, int, ENGINE_remove , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_builtin_engines() \
	LP0NR(0x3c84, ENGINE_load_builtin_engines ,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_all_ciphers() \
	LP0NR(0x3c8a, ENGINE_register_all_ciphers ,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_nid(___cipher) \
	LP1(0x3c90, int, EVP_CIPHER_nid , const EVP_CIPHER *, ___cipher, a0,\
	, AMISSL_BASE_NAME)

#define EVP_MD_type(___md) \
	LP1(0x3c96, int, EVP_MD_type , const EVP_MD *, ___md, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_all_digests() \
	LP0NR(0x3c9c, ENGINE_register_all_digests ,\
	, AMISSL_BASE_NAME)

#define BIO_test_flags(___b, ___flags) \
	LP2(0x3ca2, int, BIO_test_flags , const BIO *, ___b, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define SSL_COMP_get_compression_methods() \
	LP0(0x3ca8, STACK_OF(SSL_COMP) *, SSL_COMP_get_compression_methods ,\
	, AMISSL_BASE_NAME)

#define RSA_generate_key_ex(___rsa, ___bits, ___e, ___cb) \
	LP4(0x3cae, int, RSA_generate_key_ex , RSA *, ___rsa, a0, int, ___bits, d0, BIGNUM *, ___e, a1, BN_GENCB *, ___cb, a2,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_free(___param) \
	LP1NR(0x3cb4, X509_VERIFY_PARAM_free , X509_VERIFY_PARAM *, ___param, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_set1_param(___ctx, ___pm) \
	LP2(0x3cba, int, X509_STORE_set1_param , X509_STORE *, ___ctx, a0, X509_VERIFY_PARAM *, ___pm, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_generate_nconf(___str, ___nconf) \
	LP2(0x3cc0, ASN1_TYPE *, ASN1_generate_nconf , char *, ___str, a0, CONF *, ___nconf, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_ECPKParameters(___bp, ___x, ___cb, ___u) \
	LP4(0x3cc6, EC_GROUP *, PEM_read_bio_ECPKParameters , BIO *, ___bp, a0, EC_GROUP **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define EC_KEY_dup(___ec_key) \
	LP1(0x3ccc, EC_KEY *, EC_KEY_dup , const EC_KEY *, ___ec_key, a0,\
	, AMISSL_BASE_NAME)

#define BIO_set_callback(___b, ___callback) \
	LP2NRFP(0x3cd2, BIO_set_callback , BIO *, ___b, a0, __fpt, ___callback, a1,\
	, AMISSL_BASE_NAME, long (*__fpt)(struct bio_st *,int,const char *,int,long,long))

#define BIO_set_callback_arg(___b, ___arg) \
	LP2NR(0x3cd8, BIO_set_callback_arg , BIO *, ___b, a0, char *, ___arg, a1,\
	, AMISSL_BASE_NAME)

#define EVP_MD_CTX_set_flags(___ctx, ___flags) \
	LP2NR(0x3cde, EVP_MD_CTX_set_flags , EVP_MD_CTX *, ___ctx, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define BIO_set_flags(___b, ___flags) \
	LP2NR(0x3ce4, BIO_set_flags , BIO *, ___b, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_set_flags(___ctx, ___flags) \
	LP2NR(0x3cea, EVP_CIPHER_CTX_set_flags , EVP_CIPHER_CTX *, ___ctx, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_iv_length(___cipher) \
	LP1(0x3cf0, int, EVP_CIPHER_iv_length , const EVP_CIPHER *, ___cipher, a0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_check_private_key(___x509, ___pkey) \
	LP2(0x3cf6, int, X509_REQ_check_private_key , X509_REQ *, ___x509, a0, EVP_PKEY *, ___pkey, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_EC_PUBKEY(___bp, ___x, ___cb, ___u) \
	LP4(0x3cfc, EC_KEY *, PEM_read_bio_EC_PUBKEY , BIO *, ___bp, a0, EC_KEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_ECPrivateKey(___bp, ___x, ___cb, ___u) \
	LP4(0x3d02, EC_KEY *, PEM_read_bio_ECPrivateKey , BIO *, ___bp, a0, EC_KEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_EC_PUBKEY(___bp, ___x) \
	LP2(0x3d08, int, PEM_write_bio_EC_PUBKEY , BIO *, ___bp, a0, EC_KEY *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define d2i_EC_PUBKEY_bio(___bp, ___eckey) \
	LP2(0x3d0e, EC_KEY *, d2i_EC_PUBKEY_bio , BIO *, ___bp, a0, EC_KEY **, ___eckey, a1,\
	, AMISSL_BASE_NAME)

#define EC_KEY_set_asn1_flag(___key, ___flag) \
	LP2NR(0x3d14, EC_KEY_set_asn1_flag , EC_KEY *, ___key, a0, int, ___flag, d0,\
	, AMISSL_BASE_NAME)

#define EC_KEY_set_conv_form(___key, ___cform) \
	LP2NR(0x3d1a, EC_KEY_set_conv_form , EC_KEY *, ___key, a0, point_conversion_form_t, ___cform, d0,\
	, AMISSL_BASE_NAME)

#define EC_KEY_print(___bp, ___x, ___off) \
	LP3(0x3d20, int, EC_KEY_print , BIO *, ___bp, a0, const EC_KEY *, ___x, a1, int, ___off, d0,\
	, AMISSL_BASE_NAME)

#define d2i_ECPrivateKey_bio(___bp, ___eckey) \
	LP2(0x3d26, EC_KEY *, d2i_ECPrivateKey_bio , BIO *, ___bp, a0, EC_KEY **, ___eckey, a1,\
	, AMISSL_BASE_NAME)

#define i2d_EC_PUBKEY_bio(___bp, ___eckey) \
	LP2(0x3d2c, int, i2d_EC_PUBKEY_bio , BIO *, ___bp, a0, EC_KEY *, ___eckey, a1,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_ECPrivateKey(___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
	LP7(0x3d32, int, PEM_write_bio_ECPrivateKey , BIO *, ___bp, a0, EC_KEY *, ___x, a1, const EVP_CIPHER *, ___enc, a2, unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_ECPKParameters(___bp, ___x) \
	LP2(0x3d38, int, PEM_write_bio_ECPKParameters , BIO *, ___bp, a0, const EC_GROUP *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define i2d_ECPrivateKey_bio(___bp, ___eckey) \
	LP2(0x3d3e, int, i2d_ECPrivateKey_bio , BIO *, ___bp, a0, EC_KEY *, ___eckey, a1,\
	, AMISSL_BASE_NAME)

#define i2d_ECPKParameters(___a, ___out) \
	LP2(0x3d44, int, i2d_ECPKParameters , const EC_GROUP *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_set_asn1_flag(___group, ___flag) \
	LP2NR(0x3d4a, EC_GROUP_set_asn1_flag , EC_GROUP *, ___group, a0, int, ___flag, d0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_set_point_conversion_form(___group, ___form) \
	LP2NR(0x3d50, EC_GROUP_set_point_conversion_form , EC_GROUP *, ___group, a0, point_conversion_form_t, ___form, d0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get_point_conversion_form(___group) \
	LP1(0x3d56, point_conversion_form_t, EC_GROUP_get_point_conversion_form , const EC_GROUP *, ___group, a0,\
	, AMISSL_BASE_NAME)

#define ECPKParameters_print(___bp, ___x, ___off) \
	LP3(0x3d5c, int, ECPKParameters_print , BIO *, ___bp, a0, const EC_GROUP *, ___x, a1, int, ___off, d0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_set_seed(___group, ___p, ___len) \
	LP3(0x3d62, size_t, EC_GROUP_set_seed , EC_GROUP *, ___group, a0, const unsigned char *, ___p, a1, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define d2i_ECPKParameters(___a, ___in, ___len) \
	LP3(0x3d68, EC_GROUP *, d2i_ECPKParameters , EC_GROUP **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_point2bn(___group, ___point, ___form, ___ret, ___ctx) \
	LP5(0x3d6e, BIGNUM *, EC_POINT_point2bn , const EC_GROUP *, ___group, a0, const EC_POINT *, ___point, a1, point_conversion_form_t, ___form, d0, BIGNUM *, ___ret, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define X509_get1_ocsp(___x) \
	LP1(0x3d74, STACK_OF(OPENSSL_STRING) *, X509_get1_ocsp , X509 *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_servername(___s, ___type) \
	LP2(0x3d7a, const char *, SSL_get_servername , const SSL *, ___s, a0, const int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define SSL_set_SSL_CTX(___ssl, ___ctx) \
	LP2(0x3d80, SSL_CTX *, SSL_set_SSL_CTX , SSL *, ___ssl, a0, SSL_CTX *, ___ctx, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_cookie_generate_cb(___ctx, ___app_gen_cookie_cb) \
	LP2NRFP(0x3d86, SSL_CTX_set_cookie_generate_cb , SSL_CTX *, ___ctx, a0, __fpt, ___app_gen_cookie_cb, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(SSL *ssl,unsigned char *cookie,unsigned int *cookie_len))

#define SSL_CTX_set_cookie_verify_cb(___ctx, ___app_verify_cookie_cb) \
	LP2NRFP(0x3d8c, SSL_CTX_set_cookie_verify_cb , SSL_CTX *, ___ctx, a0, __fpt, ___app_verify_cookie_cb, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(SSL *ssl,unsigned char *cookie,unsigned int cookie_len))

#define SSL_CTX_set_info_callback(___ctx, ___cb) \
	LP2NRFP(0x3d92, SSL_CTX_set_info_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(const SSL *ssl,int type,int val))

#define DTLSv1_server_method() \
	LP0(0x3d98, const SSL_METHOD *, DTLSv1_server_method ,\
	, AMISSL_BASE_NAME)

#define BIO_new_dgram(___fd, ___close_flag) \
	LP2(0x3d9e, BIO *, BIO_new_dgram , int, ___fd, d0, int, ___close_flag, d1,\
	, AMISSL_BASE_NAME)

#define SSL_get_servername_type(___s) \
	LP1(0x3da4, int, SSL_get_servername_type , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_current_compression(___s) \
	LP1(0x3daa, const COMP_METHOD *, SSL_get_current_compression , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_current_expansion(___s) \
	LP1(0x3db0, const COMP_METHOD *, SSL_get_current_expansion , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_COMP_get_name(___comp) \
	LP1(0x3db6, const char *, SSL_COMP_get_name , const COMP_METHOD *, ___comp, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_by_id(___id) \
	LP1(0x3dbc, ENGINE *, ENGINE_by_id , const char *, ___id, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_client_cert_engine(___ctx, ___e) \
	LP2(0x3dc2, int, SSL_CTX_set_client_cert_engine , SSL_CTX *, ___ctx, a0, ENGINE *, ___e, a1,\
	, AMISSL_BASE_NAME)

#define DTLSv1_client_method() \
	LP0(0x3dc8, const SSL_METHOD *, DTLSv1_client_method ,\
	, AMISSL_BASE_NAME)

#define DTLSv1_method() \
	LP0(0x3dce, const SSL_METHOD *, DTLSv1_method ,\
	, AMISSL_BASE_NAME)

#define SHA256(___d, ___n, ___md) \
	LP3(0x3dd4, unsigned char *, SHA256 , const unsigned char *, ___d, a0, size_t, ___n, d0, unsigned char *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define SHA512(___d, ___n, ___md) \
	LP3(0x3dda, unsigned char *, SHA512 , const unsigned char *, ___d, a0, size_t, ___n, d0, unsigned char *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define AES_ige_encrypt(___in, ___out, ___length, ___key, ___ivec, ___enc) \
	LP6NR(0x3de0, AES_ige_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, a3, const int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define EC_KEY_precompute_mult(___key, ___ctx) \
	LP2(0x3de6, int, EC_KEY_precompute_mult , EC_KEY *, ___key, a0, BN_CTX *, ___ctx, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_private_key(___e, ___key_id, ___ui_method, ___callback_data) \
	LP4(0x3dec, EVP_PKEY *, ENGINE_load_private_key , ENGINE *, ___e, a0, const char *, ___key_id, a1, UI_METHOD *, ___ui_method, a2, void *, ___callback_data, a3,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_public_key(___e, ___key_id, ___ui_method, ___callback_data) \
	LP4(0x3df2, EVP_PKEY *, ENGINE_load_public_key , ENGINE *, ___e, a0, const char *, ___key_id, a1, UI_METHOD *, ___ui_method, a2, void *, ___callback_data, a3,\
	, AMISSL_BASE_NAME)

#define ENGINE_ctrl_cmd(___e, ___cmd_name, ___i, ___p, ___f, ___cmd_optional) \
	LP6FP(0x3df8, int, ENGINE_ctrl_cmd , ENGINE *, ___e, a0, const char *, ___cmd_name, a1, long, ___i, a2, void *, ___p, a3, __fpt, ___f, d0, int, ___cmd_optional, d1,\
	, AMISSL_BASE_NAME, void (*__fpt)(void))

#define ENGINE_set_default(___e, ___flags) \
	LP2(0x3dfe, int, ENGINE_set_default , ENGINE *, ___e, a0, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_ctrl(___e, ___cmd, ___i, ___p, ___f) \
	LP5FP(0x3e04, int, ENGINE_ctrl , ENGINE *, ___e, a0, int, ___cmd, d0, long, ___i, d1, void *, ___p, a1, __fpt, ___f, a2,\
	, AMISSL_BASE_NAME, void (*__fpt)(void))

#define ENGINE_register_all_complete() \
	LP0(0x3e0a, int, ENGINE_register_all_complete ,\
	, AMISSL_BASE_NAME)

#define ENGINE_ctrl_cmd_string(___e, ___cmd_name, ___arg, ___cmd_optional) \
	LP4(0x3e10, int, ENGINE_ctrl_cmd_string , ENGINE *, ___e, a0, const char *, ___cmd_name, a1, const char *, ___arg, a2, int, ___cmd_optional, d0,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_add0_policy(___param, ___policy) \
	LP2(0x3e16, int, X509_VERIFY_PARAM_add0_policy , X509_VERIFY_PARAM *, ___param, a0, ASN1_OBJECT *, ___policy, a1,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_set_purpose(___param, ___purpose) \
	LP2(0x3e1c, int, X509_VERIFY_PARAM_set_purpose , X509_VERIFY_PARAM *, ___param, a0, int, ___purpose, d0,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_set_flags(___param, ___flags) \
	LP2(0x3e22, int, X509_VERIFY_PARAM_set_flags , X509_VERIFY_PARAM *, ___param, a0, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_new() \
	LP0(0x3e28, X509_VERIFY_PARAM *, X509_VERIFY_PARAM_new ,\
	, AMISSL_BASE_NAME)

#define X509_POLICY_NODE_print(___out, ___node, ___indent) \
	LP3NR(0x3e2e, X509_POLICY_NODE_print , BIO *, ___out, a0, X509_POLICY_NODE *, ___node, a1, int, ___indent, d0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get0_policy_tree(___ctx) \
	LP1(0x3e34, X509_POLICY_TREE *, X509_STORE_CTX_get0_policy_tree , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get_explicit_policy(___ctx) \
	LP1(0x3e3a, int, X509_STORE_CTX_get_explicit_policy , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_policy_tree_get0_policies(___tree) \
	LP1(0x3e40, STACK_OF(X509_POLICY_NODE) *, X509_policy_tree_get0_policies , const X509_POLICY_TREE *, ___tree, a0,\
	, AMISSL_BASE_NAME)

#define X509_policy_tree_get0_user_policies(___tree) \
	LP1(0x3e46, STACK_OF(X509_POLICY_NODE) *, X509_policy_tree_get0_user_policies , const X509_POLICY_TREE *, ___tree, a0,\
	, AMISSL_BASE_NAME)

#define BIO_get_callback_arg(___b) \
	LP1(0x3e4c, char *, BIO_get_callback_arg , const BIO *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_add1_attr_by_NID(___key, ___nid, ___type, ___bytes, ___len) \
	LP5(0x3e52, int, EVP_PKEY_add1_attr_by_NID , EVP_PKEY *, ___key, a0, int, ___nid, d0, int, ___type, d1, const unsigned char *, ___bytes, a1, int, ___len, d2,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_RSA(___e) \
	LP1(0x3e58, const RSA_METHOD *, ENGINE_get_RSA , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_DSA(___e) \
	LP1(0x3e5e, const DSA_METHOD *, ENGINE_get_DSA , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_DH(___e) \
	LP1(0x3e64, const DH_METHOD *, ENGINE_get_DH , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_RAND(___e) \
	LP1(0x3e6a, const RAND_METHOD *, ENGINE_get_RAND , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_ciphers(___e) \
	LP1(0x3e70, ENGINE_CIPHERS_PTR, ENGINE_get_ciphers , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_digests(___e) \
	LP1(0x3e76, ENGINE_DIGESTS_PTR, ENGINE_get_digests , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_init(___e) \
	LP1(0x3e7c, int, ENGINE_init , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_finish(___e) \
	LP1(0x3e82, int, ENGINE_finish , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_sendreq_new(___io, ___path, ___req, ___maxline) \
	LP4(0x3e88, OCSP_REQ_CTX *, OCSP_sendreq_new , BIO *, ___io, a0, char *, ___path, a1, OCSP_REQUEST *, ___req, a2, int, ___maxline, a3,\
	, AMISSL_BASE_NAME)

#define OCSP_sendreq_nbio(___presp, ___rctx) \
	LP2(0x3e8e, int, OCSP_sendreq_nbio , OCSP_RESPONSE **, ___presp, a0, OCSP_REQ_CTX *, ___rctx, a1,\
	, AMISSL_BASE_NAME)

#define OCSP_REQ_CTX_free(___rctx) \
	LP1NR(0x3e94, OCSP_REQ_CTX_free , OCSP_REQ_CTX *, ___rctx, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_use_psk_identity_hint(___ctx, ___identity_hint) \
	LP2(0x3e9a, int, SSL_CTX_use_psk_identity_hint , SSL_CTX *, ___ctx, a0, const char *, ___identity_hint, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_psk_client_callback(___ctx, ___psk_client_callback) \
	LP2NRFP(0x3ea0, SSL_CTX_set_psk_client_callback , SSL_CTX *, ___ctx, a0, __fpt, ___psk_client_callback, a1,\
	, AMISSL_BASE_NAME, unsigned int (*__fpt)(SSL *ssl,const char *hint,char *identity,unsigned int max_identity_len,unsigned char *psk,unsigned int max_psk_len))

#define SSL_get_psk_identity_hint(___s) \
	LP1(0x3ea6, const char *, SSL_get_psk_identity_hint , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_psk_server_callback(___ssl, ___psk_server_callback) \
	LP2NRFP(0x3eac, SSL_set_psk_server_callback , SSL *, ___ssl, a0, __fpt, ___psk_server_callback, a1,\
	, AMISSL_BASE_NAME, unsigned int (*__fpt)(SSL *ssl,const char *identity,unsigned char *psk,unsigned int max_psk_len))

#define SSL_use_psk_identity_hint(___s, ___identity_hint) \
	LP2(0x3eb2, int, SSL_use_psk_identity_hint , SSL *, ___s, a0, const char *, ___identity_hint, a1,\
	, AMISSL_BASE_NAME)

#define SSL_set_psk_client_callback(___ssl, ___psk_client_callback) \
	LP2NRFP(0x3eb8, SSL_set_psk_client_callback , SSL *, ___ssl, a0, __fpt, ___psk_client_callback, a1,\
	, AMISSL_BASE_NAME, unsigned int (*__fpt)(SSL *ssl,const char *hint,char *identity,unsigned int max_identity_len,unsigned char *psk,unsigned int max_psk_len))

#define SSL_CTX_set_psk_server_callback(___ctx, ___psk_server_callback) \
	LP2NRFP(0x3ebe, SSL_CTX_set_psk_server_callback , SSL_CTX *, ___ctx, a0, __fpt, ___psk_server_callback, a1,\
	, AMISSL_BASE_NAME, unsigned int (*__fpt)(SSL *ssl,const char *identity,unsigned char *psk,unsigned int max_psk_len))

#define SSL_get_psk_identity(___s) \
	LP1(0x3ec4, const char *, SSL_get_psk_identity , const SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_session_ticket_ext(___s, ___ext_data, ___ext_len) \
	LP3(0x3eca, int, SSL_set_session_ticket_ext , SSL *, ___s, a0, void *, ___ext_data, a1, int, ___ext_len, d0,\
	, AMISSL_BASE_NAME)

#define SSL_set_session_secret_cb(___s, ___tls_session_secret_cb, ___arg) \
	LP3(0x3ed0, int, SSL_set_session_secret_cb , SSL *, ___s, a0, tls_session_secret_cb_fn, ___tls_session_secret_cb, a1, void *, ___arg, a2,\
	, AMISSL_BASE_NAME)

#define SSL_set_session_ticket_ext_cb(___s, ___cb, ___arg) \
	LP3(0x3ed6, int, SSL_set_session_ticket_ext_cb , SSL *, ___s, a0, tls_session_ticket_ext_cb_fn, ___cb, a1, void *, ___arg, a2,\
	, AMISSL_BASE_NAME)

#define SSL_set1_param(___ssl, ___vpm) \
	LP2(0x3edc, int, SSL_set1_param , SSL *, ___ssl, a0, X509_VERIFY_PARAM *, ___vpm, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set1_param(___ctx, ___vpm) \
	LP2(0x3ee2, int, SSL_CTX_set1_param , SSL_CTX *, ___ctx, a0, X509_VERIFY_PARAM *, ___vpm, a1,\
	, AMISSL_BASE_NAME)

#define SSL_renegotiate_abbreviated(___s) \
	LP1(0x3ee8, int, SSL_renegotiate_abbreviated , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define TLSv1_1_method() \
	LP0(0x3eee, const SSL_METHOD *, TLSv1_1_method ,\
	, AMISSL_BASE_NAME)

#define TLSv1_1_client_method() \
	LP0(0x3ef4, const SSL_METHOD *, TLSv1_1_client_method ,\
	, AMISSL_BASE_NAME)

#define TLSv1_1_server_method() \
	LP0(0x3efa, const SSL_METHOD *, TLSv1_1_server_method ,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_srp_client_pwd_callback(___ctx, ___cb) \
	LP2FP(0x3f00, int, SSL_CTX_set_srp_client_pwd_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
	, AMISSL_BASE_NAME, char * (*__fpt)(SSL *,void *))

#define SSL_get_srp_g(___s) \
	LP1(0x3f06, BIGNUM *, SSL_get_srp_g , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_srp_username_callback(___ctx, ___cb) \
	LP2FP(0x3f0c, int, SSL_CTX_set_srp_username_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(SSL *,int *,void *))

#define SSL_get_srp_userinfo(___s) \
	LP1(0x3f12, char *, SSL_get_srp_userinfo , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_srp_server_param(___s, ___N, ___g, ___sa, ___v, ___info) \
	LP6(0x3f18, int, SSL_set_srp_server_param , SSL *, ___s, a0, const BIGNUM *, ___N, a1, const BIGNUM *, ___g, a2, BIGNUM *, ___sa, a3, BIGNUM *, ___v, d0, char *, ___info, d1,\
	, AMISSL_BASE_NAME)

#define SSL_set_srp_server_param_pw(___s, ___user, ___pass, ___grp) \
	LP4(0x3f1e, int, SSL_set_srp_server_param_pw , SSL *, ___s, a0, const char *, ___user, a1, const char *, ___pass, a2, const char *, ___grp, a3,\
	, AMISSL_BASE_NAME)

#define SSL_get_srp_N(___s) \
	LP1(0x3f24, BIGNUM *, SSL_get_srp_N , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_get_srp_username(___s) \
	LP1(0x3f2a, char *, SSL_get_srp_username , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_srp_password(___ctx, ___password) \
	LP2(0x3f30, int, SSL_CTX_set_srp_password , SSL_CTX *, ___ctx, a0, char *, ___password, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_srp_strength(___ctx, ___strength) \
	LP2(0x3f36, int, SSL_CTX_set_srp_strength , SSL_CTX *, ___ctx, a0, int, ___strength, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_srp_verify_param_callback(___ctx, ___cb) \
	LP2FP(0x3f3c, int, SSL_CTX_set_srp_verify_param_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(SSL *,void *))

#define SSL_CTX_set_srp_cb_arg(___ctx, ___arg) \
	LP2(0x3f42, int, SSL_CTX_set_srp_cb_arg , SSL_CTX *, ___ctx, a0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_srp_username(___ctx, ___name) \
	LP2(0x3f48, int, SSL_CTX_set_srp_username , SSL_CTX *, ___ctx, a0, char *, ___name, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_SRP_CTX_init(___ctx) \
	LP1(0x3f4e, int, SSL_CTX_SRP_CTX_init , SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define SRP_Calc_A_param(___s) \
	LP1(0x3f54, int, SRP_Calc_A_param , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SRP_generate_server_master_secret(___s, ___master_key) \
	LP2(0x3f5a, int, SRP_generate_server_master_secret , SSL *, ___s, a0, unsigned char *, ___master_key, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_SRP_CTX_free(___ctx) \
	LP1(0x3f60, int, SSL_CTX_SRP_CTX_free , SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define SRP_generate_client_master_secret(___s, ___master_key) \
	LP2(0x3f66, int, SRP_generate_client_master_secret , SSL *, ___s, a0, unsigned char *, ___master_key, a1,\
	, AMISSL_BASE_NAME)

#define SSL_srp_server_param_with_username(___s, ___ad) \
	LP2(0x3f6c, int, SSL_srp_server_param_with_username , SSL *, ___s, a0, int *, ___ad, a1,\
	, AMISSL_BASE_NAME)

#define SSL_SRP_CTX_free(___ctx) \
	LP1(0x3f72, int, SSL_SRP_CTX_free , SSL *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_debug(___s, ___debug) \
	LP2NR(0x3f78, SSL_set_debug , SSL *, ___s, a0, int, ___debug, d0,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_get0_peer(___s) \
	LP1(0x3f7e, X509 *, SSL_SESSION_get0_peer , SSL_SESSION *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define TLSv1_2_client_method() \
	LP0(0x3f84, const SSL_METHOD *, TLSv1_2_client_method ,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_set1_id_context(___s, ___sid_ctx, ___sid_ctx_len) \
	LP3(0x3f8a, int, SSL_SESSION_set1_id_context , SSL_SESSION *, ___s, a0, const unsigned char *, ___sid_ctx, a1, unsigned int, ___sid_ctx_len, d0,\
	, AMISSL_BASE_NAME)

#define TLSv1_2_server_method() \
	LP0(0x3f90, const SSL_METHOD *, TLSv1_2_server_method ,\
	, AMISSL_BASE_NAME)

#define SSL_cache_hit(___s) \
	LP1(0x3f96, int, SSL_cache_hit , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_set_state(___ssl, ___state) \
	LP2NR(0x3f9c, SSL_set_state , SSL *, ___ssl, a0, int, ___state, d0,\
	, AMISSL_BASE_NAME)

#define SSL_CIPHER_get_id(___c) \
	LP1(0x3fa2, unsigned long, SSL_CIPHER_get_id , const SSL_CIPHER *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define TLSv1_2_method() \
	LP0(0x3fa8, const SSL_METHOD *, TLSv1_2_method ,\
	, AMISSL_BASE_NAME)

#define SSL_export_keying_material(___s, ___out, ___olen, ___label, ___llen, ___p, ___plen, ___use_context) \
	LP8(0x3fae, int, SSL_export_keying_material , SSL *, ___s, a0, unsigned char *, ___out, a1, size_t, ___olen, d0, const char *, ___label, a2, size_t, ___llen, d1, const unsigned char *, ___p, a3, size_t, ___plen, d2, int, ___use_context, d3,\
	, AMISSL_BASE_NAME)

#define SSL_set_tlsext_use_srtp(___ctx, ___profiles) \
	LP2(0x3fb4, int, SSL_set_tlsext_use_srtp , SSL *, ___ctx, a0, const char *, ___profiles, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_next_protos_advertised_cb(___s, ___cb, ___arg) \
	LP3NRFP(0x3fba, SSL_CTX_set_next_protos_advertised_cb , SSL_CTX *, ___s, a0, __fpt, ___cb, a1, void *, ___arg, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(SSL *ssl,const unsigned char **out,unsigned int *outlen,void *arg))

#define SSL_get0_next_proto_negotiated(___s, ___data, ___len) \
	LP3NR(0x3fc0, SSL_get0_next_proto_negotiated , const SSL *, ___s, a0, const unsigned char **, ___data, a1, unsigned *, ___len, a2,\
	, AMISSL_BASE_NAME)

#define SSL_get_selected_srtp_profile(___s) \
	LP1(0x3fc6, SRTP_PROTECTION_PROFILE *, SSL_get_selected_srtp_profile , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_tlsext_use_srtp(___ctx, ___profiles) \
	LP2(0x3fcc, int, SSL_CTX_set_tlsext_use_srtp , SSL_CTX *, ___ctx, a0, const char *, ___profiles, a1,\
	, AMISSL_BASE_NAME)

#define SSL_select_next_proto(___out, ___outlen, ___in, ___inlen, ___client, ___client_len) \
	LP6(0x3fd2, int, SSL_select_next_proto , unsigned char **, ___out, a0, unsigned char *, ___outlen, a1, const unsigned char *, ___in, a2, unsigned int, ___inlen, d0, const unsigned char *, ___client, a3, unsigned int, ___client_len, d1,\
	, AMISSL_BASE_NAME)

#define SSL_get_srtp_profiles(___s) \
	LP1(0x3fd8, STACK_OF(SRTP_PROTECTION_PROFILE) *, SSL_get_srtp_profiles , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_next_proto_select_cb(___s, ___cb, ___arg) \
	LP3NRFP(0x3fde, SSL_CTX_set_next_proto_select_cb , SSL_CTX *, ___s, a0, __fpt, ___cb, a1, void *, ___arg, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(SSL *ssl,unsigned char **out,unsigned char *outlen,const unsigned char *in,unsigned int inlen,void *arg))

#define SSL_SESSION_get_compress_id(___s) \
	LP1(0x3fe4, unsigned int, SSL_SESSION_get_compress_id , const SSL_SESSION *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_set_tmp_ecdh_callback(___ctx, ___ecdh) \
	LP2NRFP(0x3fea, SSL_CTX_set_tmp_ecdh_callback , SSL_CTX *, ___ctx, a0, __fpt, ___ecdh, a1,\
	, AMISSL_BASE_NAME, EC_KEY *(*__fpt)(SSL *ssl,int is_export,int keylength))

#define SSL_set_tmp_ecdh_callback(___ssl, ___ecdh) \
	LP2NRFP(0x3ff0, SSL_set_tmp_ecdh_callback , SSL *, ___ssl, a0, __fpt, ___ecdh, a1,\
	, AMISSL_BASE_NAME, EC_KEY *(*__fpt)(SSL *ssl,int is_export,int keylength))

#define SSL_SRP_CTX_init(___s) \
	LP1(0x3ff6, int, SSL_SRP_CTX_init , SSL *, ___s, a0,\
	, AMISSL_BASE_NAME)

#define DES_options() \
	LP0(0x408c, const char *, DES_options ,\
	, AMISSL_BASE_NAME)

#define ERR_load_ENGINE_strings() \
	LP0NR(0x414c, ERR_load_ENGINE_strings ,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_DSA(___e, ___dsa_meth) \
	LP2(0x4152, int, ENGINE_set_DSA , ENGINE *, ___e, a0, const DSA_METHOD *, ___dsa_meth, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_finish_function(___e) \
	LP1(0x4158, ENGINE_GEN_INT_FUNC_PTR, ENGINE_get_finish_function , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_default_RSA() \
	LP0(0x415e, ENGINE *, ENGINE_get_default_RSA ,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_DH(___e, ___dh_meth) \
	LP2(0x4164, int, ENGINE_set_DH , ENGINE *, ___e, a0, const DH_METHOD *, ___dh_meth, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_init_function(___e) \
	LP1(0x416a, ENGINE_GEN_INT_FUNC_PTR, ENGINE_get_init_function , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_init_function(___e, ___init_f) \
	LP2(0x4170, int, ENGINE_set_init_function , ENGINE *, ___e, a0, ENGINE_GEN_INT_FUNC_PTR, ___init_f, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_default_DSA(___e) \
	LP1(0x4176, int, ENGINE_set_default_DSA , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_last() \
	LP0(0x417c, ENGINE *, ENGINE_get_last ,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_prev(___e) \
	LP1(0x4182, ENGINE *, ENGINE_get_prev , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_default_DH() \
	LP0(0x4188, ENGINE *, ENGINE_get_default_DH ,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_finish_function(___e, ___finish_f) \
	LP2(0x418e, int, ENGINE_set_finish_function , ENGINE *, ___e, a0, ENGINE_GEN_INT_FUNC_PTR, ___finish_f, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_RSA(___e, ___rsa_meth) \
	LP2(0x4194, int, ENGINE_set_RSA , ENGINE *, ___e, a0, const RSA_METHOD *, ___rsa_meth, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_default_RAND(___e) \
	LP1(0x419a, int, ENGINE_set_default_RAND , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_default_DSA() \
	LP0(0x41a0, ENGINE *, ENGINE_get_default_DSA ,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_default_RSA(___e) \
	LP1(0x41a6, int, ENGINE_set_default_RSA , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_default_RAND() \
	LP0(0x41ac, ENGINE *, ENGINE_get_default_RAND ,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_RAND(___e, ___rand_meth) \
	LP2(0x41b2, int, ENGINE_set_RAND , ENGINE *, ___e, a0, const RAND_METHOD *, ___rand_meth, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_default_DH(___e) \
	LP1(0x41b8, int, ENGINE_set_default_DH , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_ctrl_function(___e) \
	LP1(0x41be, ENGINE_CTRL_FUNC_PTR, ENGINE_get_ctrl_function , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_ctrl_function(___e, ___ctrl_f) \
	LP2(0x41c4, int, ENGINE_set_ctrl_function , ENGINE *, ___e, a0, ENGINE_CTRL_FUNC_PTR, ___ctrl_f, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_unregister_ciphers(___e) \
	LP1NR(0x41ca, ENGINE_unregister_ciphers , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_unregister_RSA(___e) \
	LP1NR(0x41d0, ENGINE_unregister_RSA , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_all_RAND() \
	LP0NR(0x41d6, ENGINE_register_all_RAND ,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_dynamic() \
	LP0NR(0x41dc, ENGINE_load_dynamic ,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_digest_engine(___nid) \
	LP1(0x41e2, ENGINE *, ENGINE_get_digest_engine , int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_DH(___e) \
	LP1(0x41e8, int, ENGINE_register_DH , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_RAND(___e) \
	LP1(0x41ee, int, ENGINE_register_RAND , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_cryptodev() \
	LP0NR(0x41f4, ENGINE_load_cryptodev ,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_ciphers(___e) \
	LP1(0x41fa, int, ENGINE_register_ciphers , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_ubsec() \
	LP0NR(0x4200, ENGINE_load_ubsec ,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_openssl() \
	LP0NR(0x4206, ENGINE_load_openssl ,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_cmd_defns(___e) \
	LP1(0x420c, const ENGINE_CMD_DEFN *, ENGINE_get_cmd_defns , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_load_privkey_function(___e, ___loadpriv_f) \
	LP2(0x4212, int, ENGINE_set_load_privkey_function , ENGINE *, ___e, a0, ENGINE_LOAD_KEY_PTR, ___loadpriv_f, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_default_digests(___e) \
	LP1(0x4218, int, ENGINE_set_default_digests , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_RSA(___e) \
	LP1(0x421e, int, ENGINE_register_RSA , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_unregister_DSA(___e) \
	LP1NR(0x4224, ENGINE_unregister_DSA , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_ciphers(___e, ___f) \
	LP2(0x422a, int, ENGINE_set_ciphers , ENGINE *, ___e, a0, ENGINE_CIPHERS_PTR, ___f, a1,\
	, AMISSL_BASE_NAME)

#define RAND_set_rand_engine(___engine) \
	LP1(0x4230, int, RAND_set_rand_engine , ENGINE *, ___engine, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_digest(___e, ___nid) \
	LP2(0x4236, const EVP_MD *, ENGINE_get_digest , ENGINE *, ___e, a0, int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_cipher(___e, ___nid) \
	LP2(0x423c, const EVP_CIPHER *, ENGINE_get_cipher , ENGINE *, ___e, a0, int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_cmd_is_executable(___e, ___cmd) \
	LP2(0x4242, int, ENGINE_cmd_is_executable , ENGINE *, ___e, a0, int, ___cmd, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_DSA(___e) \
	LP1(0x4248, int, ENGINE_register_DSA , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_load_pubkey_function(___e, ___loadpub_f) \
	LP2(0x424e, int, ENGINE_set_load_pubkey_function , ENGINE *, ___e, a0, ENGINE_LOAD_KEY_PTR, ___loadpub_f, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_load_pubkey_function(___e) \
	LP1(0x4254, ENGINE_LOAD_KEY_PTR, ENGINE_get_load_pubkey_function , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_all_RSA() \
	LP0NR(0x425a, ENGINE_register_all_RSA ,\
	, AMISSL_BASE_NAME)

#define ENGINE_unregister_digests(___e) \
	LP1NR(0x4260, ENGINE_unregister_digests , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_ex_new_index(___argl, ___argp, ___new_func, ___dep_func, ___free_func) \
	LP5(0x4266, int, ENGINE_get_ex_new_index , long, ___argl, d0, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dep_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_ex_data(___e, ___idx) \
	LP2(0x426c, void *, ENGINE_get_ex_data , const ENGINE *, ___e, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_cmd_defns(___e, ___defns) \
	LP2(0x4278, int, ENGINE_set_cmd_defns , ENGINE *, ___e, a0, const ENGINE_CMD_DEFN *, ___defns, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_digests(___e) \
	LP1(0x427e, int, ENGINE_register_digests , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_all_DH() \
	LP0NR(0x4284, ENGINE_register_all_DH ,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_flags(___e) \
	LP1(0x428a, int, ENGINE_get_flags , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_unregister_DH(___e) \
	LP1NR(0x4290, ENGINE_unregister_DH , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_all_DSA() \
	LP0NR(0x4296, ENGINE_register_all_DSA ,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_digests(___e, ___f) \
	LP2(0x429c, int, ENGINE_set_digests , ENGINE *, ___e, a0, ENGINE_DIGESTS_PTR, ___f, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_complete(___e) \
	LP1(0x42a2, int, ENGINE_register_complete , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_ex_data(___e, ___idx, ___arg) \
	LP3(0x42a8, int, ENGINE_set_ex_data , ENGINE *, ___e, a0, int, ___idx, d0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_destroy_function(___e, ___destroy_f) \
	LP2(0x42ae, int, ENGINE_set_destroy_function , ENGINE *, ___e, a0, ENGINE_GEN_INT_FUNC_PTR, ___destroy_f, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_cipher_engine(___nid) \
	LP1(0x42b4, ENGINE *, ENGINE_get_cipher_engine , int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_cswift() \
	LP0NR(0x42c0, ENGINE_load_cswift ,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_default_ciphers(___e) \
	LP1(0x42c6, int, ENGINE_set_default_ciphers , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_unregister_RAND(___e) \
	LP1NR(0x42cc, ENGINE_unregister_RAND , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_nuron() \
	LP0NR(0x42d2, ENGINE_load_nuron ,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_table_flags(___flags) \
	LP1NR(0x42d8, ENGINE_set_table_flags , unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_chil() \
	LP0NR(0x42de, ENGINE_load_chil ,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_destroy_function(___e) \
	LP1(0x42e4, ENGINE_GEN_INT_FUNC_PTR, ENGINE_get_destroy_function , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_atalla() \
	LP0NR(0x42f0, ENGINE_load_atalla ,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_table_flags() \
	LP0(0x42f6, unsigned int, ENGINE_get_table_flags ,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_flags(___e, ___flags) \
	LP2(0x42fc, int, ENGINE_set_flags , ENGINE *, ___e, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_load_privkey_function(___e) \
	LP1(0x4302, ENGINE_LOAD_KEY_PTR, ENGINE_get_load_privkey_function , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_default_string(___e, ___def_list) \
	LP2(0x4308, int, ENGINE_set_default_string , ENGINE *, ___e, a0, const char *, ___def_list, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_add_conf_module() \
	LP0NR(0x430e, ENGINE_add_conf_module ,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_aep() \
	LP0NR(0x4314, ENGINE_load_aep ,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_sureware() \
	LP0NR(0x431a, ENGINE_load_sureware ,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_4758cca() \
	LP0NR(0x4320, ENGINE_load_4758cca ,\
	, AMISSL_BASE_NAME)

#define ENGINE_up_ref(___e) \
	LP1(0x4326, int, ENGINE_up_ref , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_STORE(___e, ___store_meth) \
	LP2(0x432c, int, ENGINE_set_STORE , ENGINE *, ___e, a0, const STORE_METHOD *, ___store_meth, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_ECDSA(___e) \
	LP1(0x4332, int, ENGINE_register_ECDSA , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_get_thread_id(___b) \
	LP1(0x4338, unsigned long, BN_BLINDING_get_thread_id , const BN_BLINDING *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get_trinomial_basis(___eg, ___k) \
	LP2(0x433e, int, EC_GROUP_get_trinomial_basis , const EC_GROUP *, ___eg, a0, unsigned int *, ___k, a1,\
	, AMISSL_BASE_NAME)

#define ECDH_get_default_method() \
	LP0(0x4344, const ECDH_METHOD *, ECDH_get_default_method ,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_ECDH(___e) \
	LP1(0x434a, int, ENGINE_register_ECDH , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define SHA512_Update(___c, ___data, ___len) \
	LP3(0x4350, int, SHA512_Update , SHA512_CTX *, ___c, a0, const void *, ___data, a1, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ECPrivateKey(___key, ___out) \
	LP2(0x4356, int, i2d_ECPrivateKey , EC_KEY *, ___key, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_exp_arr(___r, ___a, ___b, ___p, ___ctx) \
	LP5(0x435c, int, BN_GF2m_mod_exp_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const int *, ___p, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_mul_arr(___r, ___a, ___b, ___p, ___ctx) \
	LP5(0x4362, int, BN_GF2m_mod_mul_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const int *, ___p, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define o2i_ECPublicKey(___key, ___in, ___len) \
	LP3(0x4368, EC_KEY *, o2i_ECPublicKey , EC_KEY **, ___key, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define EC_KEY_copy(___dst, ___src) \
	LP2(0x436e, EC_KEY *, EC_KEY_copy , EC_KEY *, ___dst, a0, const EC_KEY *, ___src, a1,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_check_discriminant(___group, ___ctx) \
	LP2(0x437a, int, EC_GROUP_check_discriminant , const EC_GROUP *, ___group, a0, BN_CTX *, ___ctx, a1,\
	, AMISSL_BASE_NAME)

#define i2o_ECPublicKey(___key, ___out) \
	LP2(0x4380, int, i2o_ECPublicKey , EC_KEY *, ___key, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_new_curve_GF2m(___p, ___a, ___b, ___ctx) \
	LP4(0x4386, EC_GROUP *, EC_GROUP_new_curve_GF2m , const BIGNUM *, ___p, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define ENGINE_unregister_STORE(___e) \
	LP1NR(0x438c, ENGINE_unregister_STORE , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_get1_EC_KEY(___pkey) \
	LP1(0x4392, struct ec_key_st *, EVP_PKEY_get1_EC_KEY , EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_default_ECDH() \
	LP0(0x4398, ENGINE *, ENGINE_get_default_ECDH ,\
	, AMISSL_BASE_NAME)

#define EC_KEY_get_conv_form(___key) \
	LP1(0x439e, point_conversion_form_t, EC_KEY_get_conv_form , const EC_KEY *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_static_state() \
	LP0(0x43a4, void *, ENGINE_get_static_state ,\
	, AMISSL_BASE_NAME)

#define ECDSA_SIG_new() \
	LP0(0x43aa, ECDSA_SIG *, ECDSA_SIG_new ,\
	, AMISSL_BASE_NAME)

#define EC_POINT_bn2point(___g, ___b, ___p, ___ctx) \
	LP4(0x43b0, EC_POINT *, EC_POINT_bn2point , const EC_GROUP *, ___g, a0, const BIGNUM *, ___b, a1, EC_POINT *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define EC_KEY_get_key_method_data(___key, ___dup_func, ___free_func, ___clear_free_func) \
	LP4FP(0x43b6, void *, EC_KEY_get_key_method_data , EC_KEY *, ___key, a0, __fpt, ___dup_func, a1, __fpt, ___free_func, a2, __fpt, ___clear_free_func, a3,\
	, AMISSL_BASE_NAME, void *(*__fpt)(void *))

#define ECDSA_sign_ex(___type, ___dgst, ___dgstlen, ___sig, ___siglen, ___kinv, ___rp, ___eckey) \
	LP8(0x43bc, int, ECDSA_sign_ex , int, ___type, d0, const unsigned char *, ___dgst, a0, int, ___dgstlen, d1, unsigned char *, ___sig, a1, unsigned int *, ___siglen, a2, const BIGNUM *, ___kinv, a3, const BIGNUM *, ___rp, d2, EC_KEY *, ___eckey, d3,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get_pentanomial_basis(___ecgroup, ___k1, ___k2, ___k3) \
	LP4(0x43c2, int, EC_GROUP_get_pentanomial_basis , const EC_GROUP *, ___ecgroup, a0, unsigned int *, ___k1, a1, unsigned int *, ___k2, a2, unsigned int *, ___k3, a3,\
	, AMISSL_BASE_NAME)

#define ECDSA_sign_setup(___eckey, ___ctx, ___kinv, ___rp) \
	LP4(0x43c8, int, ECDSA_sign_setup , EC_KEY *, ___eckey, a0, BN_CTX *, ___ctx, a1, BIGNUM **, ___kinv, a2, BIGNUM **, ___rp, a3,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_solve_quad_arr(___r, ___a, ___p, ___ctx) \
	LP4(0x43ce, int, BN_GF2m_mod_solve_quad_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const int *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define EC_KEY_up_ref(___key) \
	LP1(0x43d4, int, EC_KEY_up_ref , EC_KEY *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define d2i_EC_PUBKEY(___a, ___pp, ___length) \
	LP3(0x43da, EC_KEY *, d2i_EC_PUBKEY , EC_KEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, a2,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_have_precompute_mult(___group) \
	LP1(0x43e0, int, EC_GROUP_have_precompute_mult , const EC_GROUP *, ___group, a0,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_arr(___r, ___a, ___p) \
	LP3(0x43ec, int, BN_GF2m_mod_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const int *, ___p, a2,\
	, AMISSL_BASE_NAME)

#define ECDH_get_ex_data(___d, ___idx) \
	LP2(0x43f2, void *, ECDH_get_ex_data , EC_KEY *, ___d, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_unregister_ECDH(___e) \
	LP1NR(0x43f8, ENGINE_unregister_ECDH , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ECDH_OpenSSL() \
	LP0(0x43fe, const ECDH_METHOD *, ECDH_OpenSSL ,\
	, AMISSL_BASE_NAME)

#define EC_POINT_dup(___src, ___group) \
	LP2(0x4404, EC_POINT *, EC_POINT_dup , const EC_POINT *, ___src, a0, const EC_GROUP *, ___group, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_set1_EC_KEY(___pkey, ___key) \
	LP2(0x440a, int, EVP_PKEY_set1_EC_KEY , EVP_PKEY *, ___pkey, a0, struct ec_key_st *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_sqrt_arr(___r, ___a, ___p, ___ctx) \
	LP4(0x4410, int, BN_GF2m_mod_sqrt_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const int *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define EC_KEY_set_private_key(___key, ___prv) \
	LP2(0x441c, int, EC_KEY_set_private_key , EC_KEY *, ___key, a0, const BIGNUM *, ___prv, a1,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_poly2arr(___a, ___p, ___max) \
	LP3(0x4422, int, BN_GF2m_poly2arr , const BIGNUM *, ___a, a0, int *, ___p, a1, int, ___max, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ECParameters(___key, ___out) \
	LP2(0x4428, int, i2d_ECParameters , EC_KEY *, ___key, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_ECDH(___e, ___ecdh_meth) \
	LP2(0x442e, int, ENGINE_set_ECDH , ENGINE *, ___e, a0, const ECDH_METHOD *, ___ecdh_meth, a1,\
	, AMISSL_BASE_NAME)

#define SHA256_Init(___c) \
	LP1(0x4434, int, SHA256_Init , SHA256_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define ECDSA_get_ex_data(___d, ___idx) \
	LP2(0x443a, void *, ECDSA_get_ex_data , EC_KEY *, ___d, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define SHA224(___d, ___n, ___md) \
	LP3(0x4440, unsigned char *, SHA224 , const unsigned char *, ___d, a0, size_t, ___n, d0, unsigned char *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get_seed_len(___ecgroup) \
	LP1(0x444c, size_t, EC_GROUP_get_seed_len , const EC_GROUP *, ___ecgroup, a0,\
	, AMISSL_BASE_NAME)

#define i2d_EC_PUBKEY(___a, ___pp) \
	LP2(0x4452, int, i2d_EC_PUBKEY , EC_KEY *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define ECDSA_get_default_method() \
	LP0(0x4458, const ECDSA_METHOD *, ECDSA_get_default_method ,\
	, AMISSL_BASE_NAME)

#define EC_GFp_nist_method() \
	LP0(0x445e, const EC_METHOD *, EC_GFp_nist_method ,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_padlock() \
	LP0NR(0x4464, ENGINE_load_padlock ,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_set_curve_name(___group, ___nid) \
	LP2NR(0x446a, EC_GROUP_set_curve_name , EC_GROUP *, ___group, a0, int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_sqr_arr(___r, ___a, ___p, ___ctx) \
	LP4(0x4470, int, BN_GF2m_mod_sqr_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const int *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BIO_s_datagram() \
	LP0(0x4476, BIO_METHOD *, BIO_s_datagram ,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_default_ECDSA(___e) \
	LP1(0x447c, int, ENGINE_set_default_ECDSA , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ECDH_set_default_method(___method) \
	LP1NR(0x4482, ECDH_set_default_method , const ECDH_METHOD *, ___method, a0,\
	, AMISSL_BASE_NAME)

#define SHA384_Update(___c, ___data, ___len) \
	LP3(0x4488, int, SHA384_Update , SHA512_CTX *, ___c, a0, const void *, ___data, a1, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define EC_KEY_insert_key_method_data(___key, ___data, ___dup_func, ___free_func, ___clear_free_func) \
	LP5FP(0x448e, void *, EC_KEY_insert_key_method_data , EC_KEY *, ___key, a0, void *, ___data, a1, __fpt, ___dup_func, a2, __fpt, ___free_func, a3, __fpt, ___clear_free_func, d0,\
	, AMISSL_BASE_NAME, void *(*__fpt)(void *))

#define SHA224_Final(___md, ___c) \
	LP2(0x4494, int, SHA224_Final , unsigned char *, ___md, a0, SHA256_CTX *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define SHA224_Update(___c, ___data, ___len) \
	LP3(0x449a, int, SHA224_Update , SHA256_CTX *, ___c, a0, const void *, ___data, a1, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define d2i_ECPrivateKey(___key, ___in, ___len) \
	LP3(0x44a0, EC_KEY *, d2i_ECPrivateKey , EC_KEY **, ___key, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_all_STORE() \
	LP0NR(0x44a6, ENGINE_register_all_STORE ,\
	, AMISSL_BASE_NAME)

#define SHA512_Final(___md, ___c) \
	LP2(0x44ac, int, SHA512_Final , unsigned char *, ___md, a0, SHA512_CTX *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get_asn1_flag(___group) \
	LP1(0x44b2, int, EC_GROUP_get_asn1_flag , const EC_GROUP *, ___group, a0,\
	, AMISSL_BASE_NAME)

#define ECDH_get_ex_new_index(___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP5(0x44b8, int, ECDH_get_ex_new_index , long, ___argl, d0, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get0_seed(___x) \
	LP1(0x44be, unsigned char *, EC_GROUP_get0_seed , const EC_GROUP *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_div_arr(___r, ___a, ___b, ___p, ___ctx) \
	LP5(0x44c4, int, BN_GF2m_mod_div_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const int *, ___p, a3, BN_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_ECDSA(___e, ___ecdsa_meth) \
	LP2(0x44ca, int, ENGINE_set_ECDSA , ENGINE *, ___e, a0, const ECDSA_METHOD *, ___ecdsa_meth, a1,\
	, AMISSL_BASE_NAME)

#define ECDH_set_method(___key, ___meth) \
	LP2(0x44d6, int, ECDH_set_method , EC_KEY *, ___key, a0, const ECDH_METHOD *, ___meth, a1,\
	, AMISSL_BASE_NAME)

#define ECDH_set_ex_data(___d, ___idx, ___arg) \
	LP3(0x44dc, int, ECDH_set_ex_data , EC_KEY *, ___d, a0, int, ___idx, d0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME)

#define ECDSA_OpenSSL() \
	LP0(0x44e8, const ECDSA_METHOD *, ECDSA_OpenSSL ,\
	, AMISSL_BASE_NAME)

#define EC_KEY_get_enc_flags(___key) \
	LP1(0x44ee, unsigned, EC_KEY_get_enc_flags , const EC_KEY *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define ECDSA_set_default_method(___meth) \
	LP1NR(0x44f4, ECDSA_set_default_method , const ECDSA_METHOD *, ___meth, a0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_set_compressed_coordinates_GF2m(___group, ___p, ___x, ___y_bit, ___ctx) \
	LP5(0x44fa, int, EC_POINT_set_compressed_coordinates_GF2m , const EC_GROUP *, ___group, a0, EC_POINT *, ___p, a1, const BIGNUM *, ___x, a2, int, ___y_bit, d0, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_cmp(___a, ___b, ___ctx) \
	LP3(0x4500, int, EC_GROUP_cmp , const EC_GROUP *, ___a, a0, const EC_GROUP *, ___b, a1, BN_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define SHA224_Init(___c) \
	LP1(0x4506, int, SHA224_Init , SHA256_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define SHA512_Init(___c) \
	LP1(0x4512, int, SHA512_Init , SHA512_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define ERR_load_ECDSA_strings() \
	LP0NR(0x4518, ERR_load_ECDSA_strings ,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get_basis_type(___group) \
	LP1(0x451e, int, EC_GROUP_get_basis_type , const EC_GROUP *, ___group, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_all_ECDH() \
	LP0NR(0x452a, ENGINE_register_all_ECDH ,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_all_ECDSA() \
	LP0NR(0x4536, ENGINE_register_all_ECDSA ,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_dup(___src) \
	LP1(0x453c, EC_GROUP *, EC_GROUP_dup , const EC_GROUP *, ___src, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_default_ECDSA() \
	LP0(0x4542, ENGINE *, ENGINE_get_default_ECDSA ,\
	, AMISSL_BASE_NAME)

#define SHA256_Transform(___c, ___data) \
	LP2NR(0x4548, SHA256_Transform , SHA256_CTX *, ___c, a0, const unsigned char *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define EC_KEY_set_enc_flags(___eckey, ___flags) \
	LP2NR(0x454e, EC_KEY_set_enc_flags , EC_KEY *, ___eckey, a0, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_point2hex(___group, ___point, ___form, ___ctx) \
	LP4(0x4554, char *, EC_POINT_point2hex , const EC_GROUP *, ___group, a0, const EC_POINT *, ___point, a1, point_conversion_form_t, ___form, d0, BN_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_STORE(___e) \
	LP1(0x455a, const STORE_METHOD *, ENGINE_get_STORE , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ECDSA_do_sign_ex(___dgst, ___dgstlen, ___kinv, ___rp, ___eckey) \
	LP5(0x4560, ECDSA_SIG *, ECDSA_do_sign_ex , const unsigned char *, ___dgst, a0, int, ___dgstlen, d0, const BIGNUM *, ___kinv, a1, const BIGNUM *, ___rp, a2, EC_KEY *, ___eckey, a3,\
	, AMISSL_BASE_NAME)

#define SHA512_Transform(___c, ___data) \
	LP2NR(0x456c, SHA512_Transform , SHA512_CTX *, ___c, a0, const unsigned char *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define EC_KEY_set_public_key(___key, ___pub) \
	LP2(0x4578, int, EC_KEY_set_public_key , EC_KEY *, ___key, a0, const EC_POINT *, ___pub, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_STORE(___e) \
	LP1(0x4584, int, ENGINE_register_STORE , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define EC_GROUP_get_curve_name(___group) \
	LP1(0x4590, int, EC_GROUP_get_curve_name , const EC_GROUP *, ___group, a0,\
	, AMISSL_BASE_NAME)

#define SHA256_Final(___md, ___c) \
	LP2(0x459c, int, SHA256_Final , unsigned char *, ___md, a0, SHA256_CTX *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_ECDH(___e) \
	LP1(0x45a2, const ECDH_METHOD *, ENGINE_get_ECDH , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_ECDSA(___e) \
	LP1(0x45a8, const ECDSA_METHOD *, ENGINE_get_ECDSA , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ERR_load_ECDH_strings() \
	LP0NR(0x45ae, ERR_load_ECDH_strings ,\
	, AMISSL_BASE_NAME)

#define ECDSA_set_method(___eckey, ___meth) \
	LP2(0x45b4, int, ECDSA_set_method , EC_KEY *, ___eckey, a0, const ECDSA_METHOD *, ___meth, a1,\
	, AMISSL_BASE_NAME)

#define d2i_ECParameters(___key, ___in, ___len) \
	LP3(0x45ba, EC_KEY *, d2i_ECParameters , EC_KEY **, ___key, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define SHA384_Init(___c) \
	LP1(0x45c0, int, SHA384_Init , SHA512_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define ECDSA_set_ex_data(___d, ___idx, ___arg) \
	LP3(0x45c6, int, ECDSA_set_ex_data , EC_KEY *, ___d, a0, int, ___idx, d0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME)

#define SHA384_Final(___md, ___c) \
	LP2(0x45cc, int, SHA384_Final , unsigned char *, ___md, a0, SHA512_CTX *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define ECDSA_get_ex_new_index(___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
	LP5(0x45d2, int, ECDSA_get_ex_new_index , long, ___argl, a0, void *, ___argp, a1, CRYPTO_EX_new *, ___new_func, a2, CRYPTO_EX_dup *, ___dup_func, a3, CRYPTO_EX_free *, ___free_func, d0,\
	, AMISSL_BASE_NAME)

#define SHA384(___d, ___n, ___md) \
	LP3(0x45d8, unsigned char *, SHA384 , const unsigned char *, ___d, a0, size_t, ___n, d0, unsigned char *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_default_ECDH(___e) \
	LP1(0x45e4, int, ENGINE_set_default_ECDH , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define EC_POINT_hex2point(___group, ___c, ___p, ___ctx) \
	LP4(0x45ea, EC_POINT *, EC_POINT_hex2point , const EC_GROUP *, ___group, a0, const char *, ___c, a1, EC_POINT *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define SHA256_Update(___c, ___data, ___len) \
	LP3(0x45f0, int, SHA256_Update , SHA256_CTX *, ___c, a0, const void *, ___data, a1, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define BN_GF2m_mod_inv_arr(___r, ___b, ___p, ___ctx) \
	LP4(0x45f6, int, BN_GF2m_mod_inv_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___b, a1, const int *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define ENGINE_unregister_ECDSA(___e) \
	LP1NR(0x45fc, ENGINE_unregister_ECDSA , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_set_thread_id(___b, ___l) \
	LP2NR(0x4602, BN_BLINDING_set_thread_id , BN_BLINDING *, ___b, a0, unsigned long, ___l, d0,\
	, AMISSL_BASE_NAME)

#define DH_check_pub_key(___dh, ___pub_key, ___codes) \
	LP3(0x4608, int, DH_check_pub_key , const DH *, ___dh, a0, const BIGNUM *, ___pub_key, a1, int *, ___codes, a2,\
	, AMISSL_BASE_NAME)

#define Camellia_cbc_encrypt(___in, ___out, ___length, ___key, ___ivec, ___enc) \
	LP6NR(0x460e, Camellia_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const CAMELLIA_KEY *, ___key, a2, unsigned char *, ___ivec, a3, const int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define Camellia_cfb128_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc) \
	LP7NR(0x4614, Camellia_cfb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const CAMELLIA_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, const int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define Camellia_cfb1_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc) \
	LP7NR(0x461a, Camellia_cfb1_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const CAMELLIA_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, const int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define Camellia_cfb8_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc) \
	LP7NR(0x4620, Camellia_cfb8_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const CAMELLIA_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, const int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define Camellia_ctr128_encrypt(___in, ___out, ___length, ___key, ___ivec, ___ecount_buf, ___num) \
	LP7NR(0x4626, Camellia_ctr128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const CAMELLIA_KEY *, ___key, a2, unsigned char *, ___ivec, a3, unsigned char *, ___ecount_buf, d1, unsigned int *, ___num, d2,\
	, AMISSL_BASE_NAME)

#define Camellia_decrypt(___in, ___out, ___key) \
	LP3NR(0x462c, Camellia_decrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const CAMELLIA_KEY *, ___key, a2,\
	, AMISSL_BASE_NAME)

#define Camellia_ecb_encrypt(___in, ___out, ___key, ___enc) \
	LP4NR(0x4632, Camellia_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const CAMELLIA_KEY *, ___key, a2, const int, ___enc, d0,\
	, AMISSL_BASE_NAME)

#define Camellia_encrypt(___in, ___out, ___key) \
	LP3NR(0x4638, Camellia_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const CAMELLIA_KEY *, ___key, a2,\
	, AMISSL_BASE_NAME)

#define Camellia_ofb128_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num) \
	LP6NR(0x463e, Camellia_ofb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const CAMELLIA_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
	, AMISSL_BASE_NAME)

#define Camellia_set_key(___userKey, ___bits, ___key) \
	LP3(0x4644, int, Camellia_set_key , const unsigned char *, ___userKey, a0, const int, ___bits, d0, CAMELLIA_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_128_cbc() \
	LP0(0x464a, const EVP_CIPHER *, EVP_camellia_128_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_128_cfb128() \
	LP0(0x4650, const EVP_CIPHER *, EVP_camellia_128_cfb128 ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_128_cfb1() \
	LP0(0x4656, const EVP_CIPHER *, EVP_camellia_128_cfb1 ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_128_cfb8() \
	LP0(0x465c, const EVP_CIPHER *, EVP_camellia_128_cfb8 ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_128_ecb() \
	LP0(0x4662, const EVP_CIPHER *, EVP_camellia_128_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_128_ofb() \
	LP0(0x4668, const EVP_CIPHER *, EVP_camellia_128_ofb ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_192_cbc() \
	LP0(0x466e, const EVP_CIPHER *, EVP_camellia_192_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_192_cfb128() \
	LP0(0x4674, const EVP_CIPHER *, EVP_camellia_192_cfb128 ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_192_cfb1() \
	LP0(0x467a, const EVP_CIPHER *, EVP_camellia_192_cfb1 ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_192_cfb8() \
	LP0(0x4680, const EVP_CIPHER *, EVP_camellia_192_cfb8 ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_192_ecb() \
	LP0(0x4686, const EVP_CIPHER *, EVP_camellia_192_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_192_ofb() \
	LP0(0x468c, const EVP_CIPHER *, EVP_camellia_192_ofb ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_256_cbc() \
	LP0(0x4692, const EVP_CIPHER *, EVP_camellia_256_cbc ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_256_cfb128() \
	LP0(0x4698, const EVP_CIPHER *, EVP_camellia_256_cfb128 ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_256_cfb1() \
	LP0(0x469e, const EVP_CIPHER *, EVP_camellia_256_cfb1 ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_256_cfb8() \
	LP0(0x46a4, const EVP_CIPHER *, EVP_camellia_256_cfb8 ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_256_ecb() \
	LP0(0x46aa, const EVP_CIPHER *, EVP_camellia_256_ecb ,\
	, AMISSL_BASE_NAME)

#define EVP_camellia_256_ofb() \
	LP0(0x46b0, const EVP_CIPHER *, EVP_camellia_256_ofb ,\
	, AMISSL_BASE_NAME)

#define AES_bi_ige_encrypt(___in, ___out, ___length, ___key, ___key2, ___ivec, ___enc) \
	LP7NR(0x46b6, AES_bi_ige_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const AES_KEY *, ___key, a2, const AES_KEY *, ___key2, a3, const unsigned char *, ___ivec, d1, const int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define SEED_decrypt(___s, ___d, ___ks) \
	LP3NR(0x46bc, SEED_decrypt , const unsigned char *, ___s, a0, unsigned char *, ___d, a1, const SEED_KEY_SCHEDULE *, ___ks, a2,\
	, AMISSL_BASE_NAME)

#define SEED_encrypt(___s, ___d, ___ks) \
	LP3NR(0x46c2, SEED_encrypt , const unsigned char *, ___s, a0, unsigned char *, ___d, a1, const SEED_KEY_SCHEDULE *, ___ks, a2,\
	, AMISSL_BASE_NAME)

#define SEED_cbc_encrypt(___in, ___out, ___len, ___ks, ___ivec, ___enc) \
	LP6NR(0x46c8, SEED_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const SEED_KEY_SCHEDULE *, ___ks, a2, unsigned char *, ___ivec, a3, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define EVP_seed_ofb() \
	LP0(0x46ce, const EVP_CIPHER *, EVP_seed_ofb ,\
	, AMISSL_BASE_NAME)

#define SEED_cfb128_encrypt(___in, ___out, ___len, ___ks, ___ivec, ___num, ___enc) \
	LP7NR(0x46d4, SEED_cfb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const SEED_KEY_SCHEDULE *, ___ks, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2,\
	, AMISSL_BASE_NAME)

#define SEED_ofb128_encrypt(___in, ___out, ___len, ___ks, ___ivec, ___num) \
	LP6NR(0x46da, SEED_ofb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const SEED_KEY_SCHEDULE *, ___ks, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
	, AMISSL_BASE_NAME)

#define EVP_seed_cbc() \
	LP0(0x46e0, const EVP_CIPHER *, EVP_seed_cbc ,\
	, AMISSL_BASE_NAME)

#define SEED_ecb_encrypt(___in, ___out, ___ks, ___enc) \
	LP4NR(0x46e6, SEED_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const SEED_KEY_SCHEDULE *, ___ks, a2, int, ___enc, d0,\
	, AMISSL_BASE_NAME)

#define EVP_seed_ecb() \
	LP0(0x46ec, const EVP_CIPHER *, EVP_seed_ecb ,\
	, AMISSL_BASE_NAME)

#define SEED_set_key(___rawkey, ___ks) \
	LP2NR(0x46f2, SEED_set_key , const unsigned char *, ___rawkey, a0, SEED_KEY_SCHEDULE *, ___ks, a1,\
	, AMISSL_BASE_NAME)

#define EVP_seed_cfb128() \
	LP0(0x46f8, const EVP_CIPHER *, EVP_seed_cfb128 ,\
	, AMISSL_BASE_NAME)

#define AES_unwrap_key(___key, ___iv, ___out, ___in, ___inlen) \
	LP5(0x46fe, int, AES_unwrap_key , AES_KEY *, ___key, a0, const unsigned char *, ___iv, a1, unsigned char *, ___out, a2, const unsigned char *, ___in, a3, unsigned int, ___inlen, d0,\
	, AMISSL_BASE_NAME)

#define AES_wrap_key(___key, ___iv, ___out, ___in, ___inlen) \
	LP5(0x4704, int, AES_wrap_key , AES_KEY *, ___key, a0, const unsigned char *, ___iv, a1, unsigned char *, ___out, a2, const unsigned char *, ___in, a3, unsigned int, ___inlen, d0,\
	, AMISSL_BASE_NAME)

#define CMS_ReceiptRequest_free(___rr) \
	LP1NR(0x470a, CMS_ReceiptRequest_free , CMS_ReceiptRequest *, ___rr, a0,\
	, AMISSL_BASE_NAME)

#define CMS_add0_CertificateChoices(___cms) \
	LP1(0x4716, CMS_CertificateChoices *, CMS_add0_CertificateChoices , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_unsigned_add1_attr_by_OBJ(___si, ___obj, ___type, ___bytes, ___len) \
	LP5(0x471c, int, CMS_unsigned_add1_attr_by_OBJ , CMS_SignerInfo *, ___si, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const void *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define ERR_load_CMS_strings() \
	LP0NR(0x4722, ERR_load_CMS_strings ,\
	, AMISSL_BASE_NAME)

#define CMS_sign_receipt(___si, ___signcert, ___pkey, ___certs, ___flags) \
	LP5(0x4728, CMS_ContentInfo *, CMS_sign_receipt , CMS_SignerInfo *, ___si, a0, X509 *, ___signcert, a1, EVP_PKEY *, ___pkey, a2, STACK_OF(X509) *, ___certs, a3, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define i2d_CMS_ContentInfo(___a, ___out) \
	LP2(0x472e, int, i2d_CMS_ContentInfo , CMS_ContentInfo *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define CMS_signed_delete_attr(___si, ___loc) \
	LP2(0x4734, X509_ATTRIBUTE *, CMS_signed_delete_attr , CMS_SignerInfo *, ___si, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define d2i_CMS_bio(___bp, ___cms) \
	LP2(0x473a, CMS_ContentInfo *, d2i_CMS_bio , BIO *, ___bp, a0, CMS_ContentInfo **, ___cms, a1,\
	, AMISSL_BASE_NAME)

#define CMS_unsigned_get_attr_by_NID(___si, ___nid, ___lastpos) \
	LP3(0x4740, int, CMS_unsigned_get_attr_by_NID , const CMS_SignerInfo *, ___si, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define CMS_verify(___cms, ___certs, ___store, ___dcont, ___out, ___flags) \
	LP6(0x4746, int, CMS_verify , CMS_ContentInfo *, ___cms, a0, STACK_OF(X509) *, ___certs, a1, X509_STORE *, ___store, a2, BIO *, ___dcont, a3, BIO *, ___out, d0, unsigned int, ___flags, d1,\
	, AMISSL_BASE_NAME)

#define SMIME_read_CMS(___bio, ___biocont) \
	LP2(0x474c, CMS_ContentInfo *, SMIME_read_CMS , BIO *, ___bio, a0, BIO **, ___biocont, a1,\
	, AMISSL_BASE_NAME)

#define CMS_decrypt_set1_key(___cms, ___key, ___keylen, ___id, ___idlen) \
	LP5(0x4752, int, CMS_decrypt_set1_key , CMS_ContentInfo *, ___cms, a0, unsigned char *, ___key, a1, size_t, ___keylen, d0, unsigned char *, ___id, a2, size_t, ___idlen, d1,\
	, AMISSL_BASE_NAME)

#define CMS_SignerInfo_get0_algs(___si, ___pk, ___signer, ___pdig, ___psig) \
	LP5NR(0x4758, CMS_SignerInfo_get0_algs , CMS_SignerInfo *, ___si, a0, EVP_PKEY **, ___pk, a1, X509 **, ___signer, a2, X509_ALGOR **, ___pdig, a3, X509_ALGOR **, ___psig, d0,\
	, AMISSL_BASE_NAME)

#define CMS_add1_cert(___cms, ___cert) \
	LP2(0x475e, int, CMS_add1_cert , CMS_ContentInfo *, ___cms, a0, X509 *, ___cert, a1,\
	, AMISSL_BASE_NAME)

#define CMS_set_detached(___cms, ___detached) \
	LP2(0x4764, int, CMS_set_detached , CMS_ContentInfo *, ___cms, a0, int, ___detached, d0,\
	, AMISSL_BASE_NAME)

#define CMS_encrypt(___certs, ___in, ___cipher, ___flags) \
	LP4(0x476a, CMS_ContentInfo *, CMS_encrypt , STACK_OF(X509) *, ___certs, a0, BIO *, ___in, a1, const EVP_CIPHER *, ___cipher, a2, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CMS_EnvelopedData_create(___cipher) \
	LP1(0x4770, CMS_ContentInfo *, CMS_EnvelopedData_create , const EVP_CIPHER *, ___cipher, a0,\
	, AMISSL_BASE_NAME)

#define CMS_uncompress(___cms, ___dcont, ___out, ___flags) \
	LP4(0x4776, int, CMS_uncompress , CMS_ContentInfo *, ___cms, a0, BIO *, ___dcont, a1, BIO *, ___out, a2, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CMS_add0_crl(___cms, ___crl) \
	LP2(0x477c, int, CMS_add0_crl , CMS_ContentInfo *, ___cms, a0, X509_CRL *, ___crl, a1,\
	, AMISSL_BASE_NAME)

#define CMS_SignerInfo_verify_content(___si, ___chain) \
	LP2(0x4782, int, CMS_SignerInfo_verify_content , CMS_SignerInfo *, ___si, a0, BIO *, ___chain, a1,\
	, AMISSL_BASE_NAME)

#define CMS_unsigned_get0_data_by_OBJ(___si, ___oid, ___lastpos, ___type) \
	LP4(0x4788, void *, CMS_unsigned_get0_data_by_OBJ , CMS_SignerInfo *, ___si, a0, ASN1_OBJECT *, ___oid, a1, int, ___lastpos, d0, int, ___type, d1,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_CMS(___out, ___cms) \
	LP2(0x478e, int, PEM_write_bio_CMS , BIO *, ___out, a0, CMS_ContentInfo *, ___cms, a1,\
	, AMISSL_BASE_NAME)

#define CMS_unsigned_get_attr(___si, ___loc) \
	LP2(0x4794, X509_ATTRIBUTE *, CMS_unsigned_get_attr , const CMS_SignerInfo *, ___si, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define CMS_RecipientInfo_ktri_cert_cmp(___ri, ___cert) \
	LP2(0x479a, int, CMS_RecipientInfo_ktri_cert_cmp , CMS_RecipientInfo *, ___ri, a0, X509 *, ___cert, a1,\
	, AMISSL_BASE_NAME)

#define CMS_RecipientInfo_ktri_get0_algs(___ri, ___pk, ___recip, ___palg) \
	LP4(0x47a0, int, CMS_RecipientInfo_ktri_get0_algs , CMS_RecipientInfo *, ___ri, a0, EVP_PKEY **, ___pk, a1, X509 **, ___recip, a2, X509_ALGOR **, ___palg, a3,\
	, AMISSL_BASE_NAME)

#define CMS_ContentInfo_free(___cms) \
	LP1NR(0x47a6, CMS_ContentInfo_free , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_final(___cms, ___data, ___dcont, ___flags) \
	LP4(0x47ac, int, CMS_final , CMS_ContentInfo *, ___cms, a0, BIO *, ___data, a1, BIO *, ___dcont, a2, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CMS_add_simple_smimecap(___algs, ___algnid, ___keysize) \
	LP3(0x47b2, int, CMS_add_simple_smimecap , STACK_OF(X509_ALGOR) **, ___algs, a0, int, ___algnid, d0, int, ___keysize, d1,\
	, AMISSL_BASE_NAME)

#define CMS_SignerInfo_verify(___si) \
	LP1(0x47b8, int, CMS_SignerInfo_verify , CMS_SignerInfo *, ___si, a0,\
	, AMISSL_BASE_NAME)

#define CMS_data(___cms, ___out, ___flags) \
	LP3(0x47be, int, CMS_data , CMS_ContentInfo *, ___cms, a0, BIO *, ___out, a1, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define d2i_CMS_ReceiptRequest(___a, ___in, ___len) \
	LP3(0x47c4, CMS_ReceiptRequest *, d2i_CMS_ReceiptRequest , CMS_ReceiptRequest **, ___a, a0, unsigned char const **, ___in, a1, long, ___len, a2,\
	, AMISSL_BASE_NAME)

#define CMS_compress(___in, ___comp_nid, ___flags) \
	LP3(0x47ca, CMS_ContentInfo *, CMS_compress , BIO *, ___in, a0, int, ___comp_nid, d0, unsigned int, ___flags, d1,\
	, AMISSL_BASE_NAME)

#define CMS_digest_create(___in, ___md, ___flags) \
	LP3(0x47d0, CMS_ContentInfo *, CMS_digest_create , BIO *, ___in, a0, const EVP_MD *, ___md, a1, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CMS_SignerInfo_cert_cmp(___si, ___cert) \
	LP2(0x47d6, int, CMS_SignerInfo_cert_cmp , CMS_SignerInfo *, ___si, a0, X509 *, ___cert, a1,\
	, AMISSL_BASE_NAME)

#define CMS_SignerInfo_sign(___si) \
	LP1(0x47dc, int, CMS_SignerInfo_sign , CMS_SignerInfo *, ___si, a0,\
	, AMISSL_BASE_NAME)

#define CMS_data_create(___in, ___flags) \
	LP2(0x47e2, CMS_ContentInfo *, CMS_data_create , BIO *, ___in, a0, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define i2d_CMS_bio(___bp, ___cms) \
	LP2(0x47e8, int, i2d_CMS_bio , BIO *, ___bp, a0, CMS_ContentInfo *, ___cms, a1,\
	, AMISSL_BASE_NAME)

#define CMS_EncryptedData_set1_key(___cms, ___ciph, ___key, ___keylen) \
	LP4(0x47ee, int, CMS_EncryptedData_set1_key , CMS_ContentInfo *, ___cms, a0, const EVP_CIPHER *, ___ciph, a1, const unsigned char *, ___key, a2, size_t, ___keylen, d0,\
	, AMISSL_BASE_NAME)

#define CMS_decrypt(___cms, ___pkey, ___cert, ___dcont, ___out, ___flags) \
	LP6(0x47f4, int, CMS_decrypt , CMS_ContentInfo *, ___cms, a0, EVP_PKEY *, ___pkey, a1, X509 *, ___cert, a2, BIO *, ___dcont, a3, BIO *, ___out, d0, unsigned int, ___flags, d1,\
	, AMISSL_BASE_NAME)

#define CMS_unsigned_delete_attr(___si, ___loc) \
	LP2(0x47fa, X509_ATTRIBUTE *, CMS_unsigned_delete_attr , CMS_SignerInfo *, ___si, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define CMS_unsigned_get_attr_count(___si) \
	LP1(0x4800, int, CMS_unsigned_get_attr_count , const CMS_SignerInfo *, ___si, a0,\
	, AMISSL_BASE_NAME)

#define CMS_add_smimecap(___si, ___algs) \
	LP2(0x4806, int, CMS_add_smimecap , CMS_SignerInfo *, ___si, a0, STACK_OF(X509_ALGOR) *, ___algs, a1,\
	, AMISSL_BASE_NAME)

#define CMS_signed_get_attr_by_OBJ(___si, ___obj, ___lastpos) \
	LP3(0x4812, int, CMS_signed_get_attr_by_OBJ , const CMS_SignerInfo *, ___si, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define d2i_CMS_ContentInfo(___a, ___in, ___len) \
	LP3(0x4818, CMS_ContentInfo *, d2i_CMS_ContentInfo , CMS_ContentInfo **, ___a, a0, unsigned char const **, ___in, a1, long, ___len, a2,\
	, AMISSL_BASE_NAME)

#define CMS_add_standard_smimecap(___smcap) \
	LP1(0x481e, int, CMS_add_standard_smimecap , STACK_OF(X509_ALGOR) **, ___smcap, a0,\
	, AMISSL_BASE_NAME)

#define CMS_ContentInfo_new() \
	LP0(0x4824, CMS_ContentInfo *, CMS_ContentInfo_new ,\
	, AMISSL_BASE_NAME)

#define CMS_RecipientInfo_type(___ri) \
	LP1(0x482a, int, CMS_RecipientInfo_type , CMS_RecipientInfo *, ___ri, a0,\
	, AMISSL_BASE_NAME)

#define CMS_get0_type(___cms) \
	LP1(0x4830, const ASN1_OBJECT *, CMS_get0_type , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_is_detached(___cms) \
	LP1(0x4836, int, CMS_is_detached , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_sign(___signcert, ___pkey, ___certs, ___data, ___flags) \
	LP5(0x483c, CMS_ContentInfo *, CMS_sign , X509 *, ___signcert, a0, EVP_PKEY *, ___pkey, a1, STACK_OF(X509) *, ___certs, a2, BIO *, ___data, a3, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CMS_signed_add1_attr(___si, ___attr) \
	LP2(0x4842, int, CMS_signed_add1_attr , CMS_SignerInfo *, ___si, a0, X509_ATTRIBUTE *, ___attr, a1,\
	, AMISSL_BASE_NAME)

#define CMS_unsigned_get_attr_by_OBJ(___si, ___obj, ___lastpos) \
	LP3(0x4848, int, CMS_unsigned_get_attr_by_OBJ , const CMS_SignerInfo *, ___si, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define SMIME_write_CMS(___bio, ___cms, ___data, ___flags) \
	LP4(0x484e, int, SMIME_write_CMS , BIO *, ___bio, a0, CMS_ContentInfo *, ___cms, a1, BIO *, ___data, a2, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CMS_EncryptedData_decrypt(___cms, ___key, ___keylen, ___dcont, ___out, ___flags) \
	LP6(0x4854, int, CMS_EncryptedData_decrypt , CMS_ContentInfo *, ___cms, a0, const unsigned char *, ___key, a1, size_t, ___keylen, d0, BIO *, ___dcont, a2, BIO *, ___out, a3, unsigned int, ___flags, d1,\
	, AMISSL_BASE_NAME)

#define CMS_get0_RecipientInfos(___cms) \
	LP1(0x485a, STACK_OF(CMS_RecipientInfo) *, CMS_get0_RecipientInfos , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_add0_RevocationInfoChoice(___cms) \
	LP1(0x4860, CMS_RevocationInfoChoice *, CMS_add0_RevocationInfoChoice , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_decrypt_set1_pkey(___cms, ___pk, ___cert) \
	LP3(0x4866, int, CMS_decrypt_set1_pkey , CMS_ContentInfo *, ___cms, a0, EVP_PKEY *, ___pk, a1, X509 *, ___cert, a2,\
	, AMISSL_BASE_NAME)

#define CMS_SignerInfo_set1_signer_cert(___si, ___signer) \
	LP2NR(0x486c, CMS_SignerInfo_set1_signer_cert , CMS_SignerInfo *, ___si, a0, X509 *, ___signer, a1,\
	, AMISSL_BASE_NAME)

#define CMS_get0_signers(___cms) \
	LP1(0x4872, STACK_OF(X509) *, CMS_get0_signers , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_ReceiptRequest_get0_values(___rr, ___pcid, ___pallorfirst, ___plist, ___prto) \
	LP5NR(0x4878, CMS_ReceiptRequest_get0_values , CMS_ReceiptRequest *, ___rr, a0, ASN1_STRING **, ___pcid, a1, int *, ___pallorfirst, a2, STACK_OF(GENERAL_NAMES) **, ___plist, a3, STACK_OF(GENERAL_NAMES) **, ___prto, d0,\
	, AMISSL_BASE_NAME)

#define CMS_signed_get0_data_by_OBJ(___si, ___oid, ___lastpos, ___type) \
	LP4(0x487e, void *, CMS_signed_get0_data_by_OBJ , CMS_SignerInfo *, ___si, a0, ASN1_OBJECT *, ___oid, a1, int, ___lastpos, d0, int, ___type, d1,\
	, AMISSL_BASE_NAME)

#define CMS_get0_SignerInfos(___cms) \
	LP1(0x4884, STACK_OF(CMS_SignerInfo) *, CMS_get0_SignerInfos , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_add0_cert(___cms, ___cert) \
	LP2(0x488a, int, CMS_add0_cert , CMS_ContentInfo *, ___cms, a0, X509 *, ___cert, a1,\
	, AMISSL_BASE_NAME)

#define CMS_EncryptedData_encrypt(___in, ___cipher, ___key, ___keylen, ___flags) \
	LP5(0x4890, CMS_ContentInfo *, CMS_EncryptedData_encrypt , BIO *, ___in, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, size_t, ___keylen, d0, unsigned int, ___flags, d1,\
	, AMISSL_BASE_NAME)

#define CMS_digest_verify(___cms, ___dcont, ___out, ___flags) \
	LP4(0x4896, int, CMS_digest_verify , CMS_ContentInfo *, ___cms, a0, BIO *, ___dcont, a1, BIO *, ___out, a2, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CMS_set1_signers_certs(___cms, ___certs, ___flags) \
	LP3(0x489c, int, CMS_set1_signers_certs , CMS_ContentInfo *, ___cms, a0, STACK_OF(X509) *, ___certs, a1, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CMS_signed_get_attr(___si, ___loc) \
	LP2(0x48a2, X509_ATTRIBUTE *, CMS_signed_get_attr , const CMS_SignerInfo *, ___si, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define CMS_RecipientInfo_set0_key(___ri, ___key, ___keylen) \
	LP3(0x48a8, int, CMS_RecipientInfo_set0_key , CMS_RecipientInfo *, ___ri, a0, unsigned char *, ___key, a1, size_t, ___keylen, d0,\
	, AMISSL_BASE_NAME)

#define CMS_SignedData_init(___cms) \
	LP1(0x48ae, int, CMS_SignedData_init , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_RecipientInfo_kekri_get0_id(___ri, ___palg, ___pid, ___pdate, ___potherid, ___pothertype) \
	LP6(0x48b4, int, CMS_RecipientInfo_kekri_get0_id , CMS_RecipientInfo *, ___ri, a0, X509_ALGOR **, ___palg, a1, ASN1_OCTET_STRING **, ___pid, a2, ASN1_GENERALIZEDTIME **, ___pdate, a3, ASN1_OBJECT **, ___potherid, d0, ASN1_TYPE **, ___pothertype, d1,\
	, AMISSL_BASE_NAME)

#define CMS_verify_receipt(___rcms, ___ocms, ___certs, ___store, ___flags) \
	LP5(0x48ba, int, CMS_verify_receipt , CMS_ContentInfo *, ___rcms, a0, CMS_ContentInfo *, ___ocms, a1, STACK_OF(X509) *, ___certs, a2, X509_STORE *, ___store, a3, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_CMS(___bp, ___x, ___cb, ___u) \
	LP4(0x48c0, CMS_ContentInfo *, PEM_read_bio_CMS , BIO *, ___bp, a0, CMS_ContentInfo **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define CMS_get1_crls(___cms) \
	LP1(0x48c6, STACK_OF(X509_CRL) *, CMS_get1_crls , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_add0_recipient_key(___cms, ___nid, ___key, ___keylen, ___id, ___idlen, ___date, ___otherTypeId, ___otherType) \
	LP9(0x48cc, CMS_RecipientInfo *, CMS_add0_recipient_key , CMS_ContentInfo *, ___cms, a0, int, ___nid, d0, unsigned char *, ___key, a1, size_t, ___keylen, d1, unsigned char *, ___id, a2, size_t, ___idlen, d2, ASN1_GENERALIZEDTIME *, ___date, a3, ASN1_OBJECT *, ___otherTypeId, d3, ASN1_TYPE *, ___otherType, d4,\
	, AMISSL_BASE_NAME)

#define CMS_ReceiptRequest_new() \
	LP0(0x48d2, CMS_ReceiptRequest *, CMS_ReceiptRequest_new ,\
	, AMISSL_BASE_NAME)

#define CMS_get0_content(___cms) \
	LP1(0x48d8, ASN1_OCTET_STRING **, CMS_get0_content , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_get1_ReceiptRequest(___si, ___prr) \
	LP2(0x48de, int, CMS_get1_ReceiptRequest , CMS_SignerInfo *, ___si, a0, CMS_ReceiptRequest **, ___prr, a1,\
	, AMISSL_BASE_NAME)

#define CMS_signed_add1_attr_by_OBJ(___si, ___obj, ___type, ___bytes, ___len) \
	LP5(0x48e4, int, CMS_signed_add1_attr_by_OBJ , CMS_SignerInfo *, ___si, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const void *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define CMS_RecipientInfo_kekri_id_cmp(___ri, ___id, ___idlen) \
	LP3(0x48ea, int, CMS_RecipientInfo_kekri_id_cmp , CMS_RecipientInfo *, ___ri, a0, const unsigned char *, ___id, a1, size_t, ___idlen, d0,\
	, AMISSL_BASE_NAME)

#define CMS_add1_ReceiptRequest(___si, ___rr) \
	LP2(0x48f0, int, CMS_add1_ReceiptRequest , CMS_SignerInfo *, ___si, a0, CMS_ReceiptRequest *, ___rr, a1,\
	, AMISSL_BASE_NAME)

#define CMS_SignerInfo_get0_signer_id(___si, ___keyid, ___issuer, ___sno) \
	LP4(0x48f6, int, CMS_SignerInfo_get0_signer_id , CMS_SignerInfo *, ___si, a0, ASN1_OCTET_STRING **, ___keyid, a1, X509_NAME **, ___issuer, a2, ASN1_INTEGER **, ___sno, a3,\
	, AMISSL_BASE_NAME)

#define CMS_unsigned_add1_attr_by_NID(___si, ___nid, ___type, ___bytes, ___len) \
	LP5(0x48fc, int, CMS_unsigned_add1_attr_by_NID , CMS_SignerInfo *, ___si, a0, int, ___nid, d0, int, ___type, d1, const void *, ___bytes, a1, int, ___len, d2,\
	, AMISSL_BASE_NAME)

#define CMS_unsigned_add1_attr(___si, ___attr) \
	LP2(0x4902, int, CMS_unsigned_add1_attr , CMS_SignerInfo *, ___si, a0, X509_ATTRIBUTE *, ___attr, a1,\
	, AMISSL_BASE_NAME)

#define CMS_signed_get_attr_by_NID(___si, ___nid, ___lastpos) \
	LP3(0x4908, int, CMS_signed_get_attr_by_NID , const CMS_SignerInfo *, ___si, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define CMS_get1_certs(___cms) \
	LP1(0x490e, STACK_OF(X509) *, CMS_get1_certs , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_signed_add1_attr_by_NID(___si, ___nid, ___type, ___bytes, ___len) \
	LP5(0x4914, int, CMS_signed_add1_attr_by_NID , CMS_SignerInfo *, ___si, a0, int, ___nid, d0, int, ___type, d1, const void *, ___bytes, a1, int, ___len, d2,\
	, AMISSL_BASE_NAME)

#define CMS_unsigned_add1_attr_by_txt(___si, ___attrname, ___type, ___bytes, ___len) \
	LP5(0x491a, int, CMS_unsigned_add1_attr_by_txt , CMS_SignerInfo *, ___si, a0, const char *, ___attrname, a1, int, ___type, d0, const void *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define CMS_dataFinal(___cms, ___bio) \
	LP2(0x4920, int, CMS_dataFinal , CMS_ContentInfo *, ___cms, a0, BIO *, ___bio, a1,\
	, AMISSL_BASE_NAME)

#define CMS_RecipientInfo_ktri_get0_signer_id(___ri, ___keyid, ___issuer, ___sno) \
	LP4(0x4926, int, CMS_RecipientInfo_ktri_get0_signer_id , CMS_RecipientInfo *, ___ri, a0, ASN1_OCTET_STRING **, ___keyid, a1, X509_NAME **, ___issuer, a2, ASN1_INTEGER **, ___sno, a3,\
	, AMISSL_BASE_NAME)

#define i2d_CMS_ReceiptRequest(___a, ___out) \
	LP2(0x492c, int, i2d_CMS_ReceiptRequest , CMS_ReceiptRequest *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define CMS_add1_recipient_cert(___cms, ___recip, ___flags) \
	LP3(0x4932, CMS_RecipientInfo *, CMS_add1_recipient_cert , CMS_ContentInfo *, ___cms, a0, X509 *, ___recip, a1, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CMS_dataInit(___cms, ___icont) \
	LP2(0x4938, BIO *, CMS_dataInit , CMS_ContentInfo *, ___cms, a0, BIO *, ___icont, a1,\
	, AMISSL_BASE_NAME)

#define CMS_signed_add1_attr_by_txt(___si, ___attrname, ___type, ___bytes, ___len) \
	LP5(0x493e, int, CMS_signed_add1_attr_by_txt , CMS_SignerInfo *, ___si, a0, const char *, ___attrname, a1, int, ___type, d0, const void *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define CMS_RecipientInfo_decrypt(___cms, ___ri) \
	LP2(0x4944, int, CMS_RecipientInfo_decrypt , CMS_ContentInfo *, ___cms, a0, CMS_RecipientInfo *, ___ri, a1,\
	, AMISSL_BASE_NAME)

#define CMS_signed_get_attr_count(___si) \
	LP1(0x494a, int, CMS_signed_get_attr_count , const CMS_SignerInfo *, ___si, a0,\
	, AMISSL_BASE_NAME)

#define CMS_get0_eContentType(___cms) \
	LP1(0x4950, const ASN1_OBJECT *, CMS_get0_eContentType , CMS_ContentInfo *, ___cms, a0,\
	, AMISSL_BASE_NAME)

#define CMS_set1_eContentType(___cms, ___oid) \
	LP2(0x4956, int, CMS_set1_eContentType , CMS_ContentInfo *, ___cms, a0, const ASN1_OBJECT *, ___oid, a1,\
	, AMISSL_BASE_NAME)

#define CMS_ReceiptRequest_create0(___id, ___idlen, ___allorfirst, ___receiptList, ___receiptsTo) \
	LP5(0x495c, CMS_ReceiptRequest *, CMS_ReceiptRequest_create0 , unsigned char *, ___id, a0, int, ___idlen, d0, int, ___allorfirst, d1, STACK_OF(GENERAL_NAMES) *, ___receiptList, a1, STACK_OF(GENERAL_NAMES) *, ___receiptsTo, a2,\
	, AMISSL_BASE_NAME)

#define CMS_add1_signer(___cms, ___signer, ___pk, ___md, ___flags) \
	LP5(0x4962, CMS_SignerInfo *, CMS_add1_signer , CMS_ContentInfo *, ___cms, a0, X509 *, ___signer, a1, EVP_PKEY *, ___pk, a2, const EVP_MD *, ___md, a3, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CMS_RecipientInfo_set0_pkey(___ri, ___pkey) \
	LP2(0x4968, int, CMS_RecipientInfo_set0_pkey , CMS_RecipientInfo *, ___ri, a0, EVP_PKEY *, ___pkey, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_load_ssl_client_cert_function(___e, ___loadssl_f) \
	LP2(0x496e, int, ENGINE_set_load_ssl_client_cert_function , ENGINE *, ___e, a0, ENGINE_SSL_CLIENT_CERT_PTR, ___loadssl_f, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_ssl_client_cert_function(___e) \
	LP1(0x4974, ENGINE_SSL_CLIENT_CERT_PTR, ENGINE_get_ssl_client_cert_function , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_ssl_client_cert(___e, ___s, ___ca_dn, ___pcert, ___ppkey, ___pother, ___ui_method, ___callback_data) \
	LP8(0x497a, int, ENGINE_load_ssl_client_cert , ENGINE *, ___e, a0, SSL *, ___s, a1, STACK_OF(X509_NAME) *, ___ca_dn, a2, X509 **, ___pcert, a3, EVP_PKEY **, ___ppkey, d0, STACK_OF(X509) **, ___pother, d1, UI_METHOD *, ___ui_method, d2, void *, ___callback_data, d3,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_capi() \
	LP0NR(0x4980, ENGINE_load_capi ,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_pkey_meths(___e) \
	LP1(0x4986, int, ENGINE_register_pkey_meths , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_pkey_asn1_meth_engine(___nid) \
	LP1(0x498c, ENGINE *, ENGINE_get_pkey_asn1_meth_engine , int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define WHIRLPOOL_Init(___c) \
	LP1(0x4992, int, WHIRLPOOL_Init , WHIRLPOOL_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define WHIRLPOOL(___inp, ___bytes, ___md) \
	LP3(0x4998, unsigned char *, WHIRLPOOL , const void *, ___inp, a0, size_t, ___bytes, d0, unsigned char *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_pkey_asn1_meth(___e, ___nid) \
	LP2(0x499e, const EVP_PKEY_ASN1_METHOD *, ENGINE_get_pkey_asn1_meth , ENGINE *, ___e, a0, int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_pkey_meth(___e, ___nid) \
	LP2(0x49a4, const EVP_PKEY_METHOD *, ENGINE_get_pkey_meth , ENGINE *, ___e, a0, int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define BIO_new_CMS(___out, ___cms) \
	LP2(0x49aa, BIO *, BIO_new_CMS , BIO *, ___out, a0, CMS_ContentInfo *, ___cms, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_default_pkey_asn1_meths(___e) \
	LP1(0x49b0, int, ENGINE_set_default_pkey_asn1_meths , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define WHIRLPOOL_BitUpdate(___ctx, ___inp, ___bits) \
	LP3NR(0x49b6, WHIRLPOOL_BitUpdate , WHIRLPOOL_CTX *, ___ctx, a0, const void *, ___inp, a1, size_t, ___bits, d0,\
	, AMISSL_BASE_NAME)

#define i2d_CMS_bio_stream(___out, ___cms, ___in, ___flags) \
	LP4(0x49bc, int, i2d_CMS_bio_stream , BIO *, ___out, a0, CMS_ContentInfo *, ___cms, a1, BIO *, ___in, a2, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CMS_stream(___boundary, ___cms) \
	LP2(0x49c2, int, CMS_stream , unsigned char ***, ___boundary, a0, CMS_ContentInfo *, ___cms, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_pkey_asn1_find_str(___pe, ___str, ___len) \
	LP3(0x49c8, const EVP_PKEY_ASN1_METHOD *, ENGINE_pkey_asn1_find_str , ENGINE **, ___pe, a0, const char *, ___str, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_pkey_meths(___e) \
	LP1(0x49ce, ENGINE_PKEY_METHS_PTR, ENGINE_get_pkey_meths , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_pkey_asn1_meths(___e) \
	LP1(0x49d4, int, ENGINE_register_pkey_asn1_meths , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_default_pkey_meths(___e) \
	LP1(0x49da, int, ENGINE_set_default_pkey_meths , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define HMAC_CTX_copy(___dctx, ___sctx) \
	LP2(0x49e0, int, HMAC_CTX_copy , HMAC_CTX *, ___dctx, a0, HMAC_CTX *, ___sctx, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_pkey_asn1_meths(___e) \
	LP1(0x49e6, ENGINE_PKEY_ASN1_METHS_PTR, ENGINE_get_pkey_asn1_meths , const ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define EVP_whirlpool() \
	LP0(0x49ec, const EVP_MD *, EVP_whirlpool ,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_all_pkey_meths() \
	LP0NR(0x49f2, ENGINE_register_all_pkey_meths ,\
	, AMISSL_BASE_NAME)

#define WHIRLPOOL_Final(___md, ___c) \
	LP2(0x49f8, int, WHIRLPOOL_Final , unsigned char *, ___md, a0, WHIRLPOOL_CTX *, ___c, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_pkey_asn1_meth_str(___e, ___str, ___len) \
	LP3(0x49fe, const EVP_PKEY_ASN1_METHOD *, ENGINE_get_pkey_asn1_meth_str , ENGINE *, ___e, a0, const char *, ___str, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_register_all_pkey_asn1_meths() \
	LP0NR(0x4a04, ENGINE_register_all_pkey_asn1_meths ,\
	, AMISSL_BASE_NAME)

#define CMS_ContentInfo_print_ctx(___out, ___cms, ___a, ___p) \
	LP4NR(0x4a0a, CMS_ContentInfo_print_ctx , BIO *, ___out, a0, CMS_ContentInfo *, ___cms, a1, int, ___a, d0, void *, ___p, a2,\
	, AMISSL_BASE_NAME)

#define CMS_add1_crl(___cms, ___crl) \
	LP2(0x4a10, int, CMS_add1_crl , CMS_ContentInfo *, ___cms, a0, X509_CRL *, ___crl, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_pkey_asn1_meths(___e, ___f) \
	LP2(0x4a16, int, ENGINE_set_pkey_asn1_meths , ENGINE *, ___e, a0, ENGINE_PKEY_ASN1_METHS_PTR, ___f, a1,\
	, AMISSL_BASE_NAME)

#define ENGINE_get_pkey_meth_engine(___nid) \
	LP1(0x4a1c, ENGINE *, ENGINE_get_pkey_meth_engine , int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define WHIRLPOOL_Update(___c, ___inp, ___bytes) \
	LP3(0x4a22, int, WHIRLPOOL_Update , WHIRLPOOL_CTX *, ___c, a0, const void *, ___inp, a1, size_t, ___bytes, d0,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_CMS_stream(___out, ___cms, ___in, ___flags) \
	LP4(0x4a28, int, PEM_write_bio_CMS_stream , BIO *, ___out, a0, CMS_ContentInfo *, ___cms, a1, BIO *, ___in, a2, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define ENGINE_unregister_pkey_meths(___e) \
	LP1NR(0x4a2e, ENGINE_unregister_pkey_meths , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_unregister_pkey_asn1_meths(___e) \
	LP1NR(0x4a34, ENGINE_unregister_pkey_asn1_meths , ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define ENGINE_set_pkey_meths(___e, ___f) \
	LP2(0x4a3a, int, ENGINE_set_pkey_meths , ENGINE *, ___e, a0, ENGINE_PKEY_METHS_PTR, ___f, a1,\
	, AMISSL_BASE_NAME)

#define DSAparams_dup(___x) \
	LP1(0x4a40, DSA *, DSAparams_dup , DSA *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define DHparams_dup(___d) \
	LP1(0x4a46, DH *, DHparams_dup , DH *, ___d, a0,\
	, AMISSL_BASE_NAME)

#define X509_issuer_name_hash_old(___a) \
	LP1(0x4a4c, unsigned long, X509_issuer_name_hash_old , X509 *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_subject_name_hash_old(___x) \
	LP1(0x4a52, unsigned long, X509_subject_name_hash_old , X509 *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define SRP_VBASE_get_by_user(___vb, ___username) \
	LP2(0x4a58, SRP_user_pwd *, SRP_VBASE_get_by_user , SRP_VBASE *, ___vb, a0, char *, ___username, a1,\
	, AMISSL_BASE_NAME)

#define SRP_Calc_server_key(___A, ___v, ___u, ___b, ___N) \
	LP5(0x4a5e, BIGNUM *, SRP_Calc_server_key , BIGNUM *, ___A, a0, BIGNUM *, ___v, a1, BIGNUM *, ___u, a2, BIGNUM *, ___b, a3, BIGNUM *, ___N, d0,\
	, AMISSL_BASE_NAME)

#define SRP_create_verifier(___user, ___pass, ___salt, ___verifier, ___N, ___g) \
	LP6(0x4a64, char *, SRP_create_verifier , const char *, ___user, a0, const char *, ___pass, a1, char **, ___salt, a2, char **, ___verifier, a3, const char *, ___N, d0, const char *, ___g, d1,\
	, AMISSL_BASE_NAME)

#define SRP_create_verifier_BN(___user, ___pass, ___salt, ___verifier, ___N, ___g) \
	LP6(0x4a6a, int, SRP_create_verifier_BN , const char *, ___user, a0, const char *, ___pass, a1, BIGNUM **, ___salt, a2, BIGNUM **, ___verifier, a3, BIGNUM *, ___N, d0, BIGNUM *, ___g, d1,\
	, AMISSL_BASE_NAME)

#define SRP_Calc_u(___A, ___B, ___N) \
	LP3(0x4a70, BIGNUM *, SRP_Calc_u , BIGNUM *, ___A, a0, BIGNUM *, ___B, a1, BIGNUM *, ___N, a2,\
	, AMISSL_BASE_NAME)

#define SRP_VBASE_free(___vb) \
	LP1(0x4a76, int, SRP_VBASE_free , SRP_VBASE *, ___vb, a0,\
	, AMISSL_BASE_NAME)

#define SRP_Calc_client_key(___N, ___B, ___g, ___x, ___a, ___u) \
	LP6(0x4a7c, BIGNUM *, SRP_Calc_client_key , BIGNUM *, ___N, a0, BIGNUM *, ___B, a1, BIGNUM *, ___g, a2, BIGNUM *, ___x, a3, BIGNUM *, ___a, d0, BIGNUM *, ___u, d1,\
	, AMISSL_BASE_NAME)

#define SRP_get_default_gN(___id) \
	LP1(0x4a82, SRP_gN *, SRP_get_default_gN , const char *, ___id, a0,\
	, AMISSL_BASE_NAME)

#define SRP_Calc_x(___s, ___user, ___pass) \
	LP3(0x4a88, BIGNUM *, SRP_Calc_x , BIGNUM *, ___s, a0, const char *, ___user, a1, const char *, ___pass, a2,\
	, AMISSL_BASE_NAME)

#define SRP_Calc_B(___b, ___N, ___g, ___v) \
	LP4(0x4a8e, BIGNUM *, SRP_Calc_B , BIGNUM *, ___b, a0, BIGNUM *, ___N, a1, BIGNUM *, ___g, a2, BIGNUM *, ___v, a3,\
	, AMISSL_BASE_NAME)

#define SRP_VBASE_new(___seed_key) \
	LP1(0x4a94, SRP_VBASE *, SRP_VBASE_new , char *, ___seed_key, a0,\
	, AMISSL_BASE_NAME)

#define SRP_check_known_gN_param(___g, ___N) \
	LP2(0x4a9a, char *, SRP_check_known_gN_param , BIGNUM *, ___g, a0, BIGNUM *, ___N, a1,\
	, AMISSL_BASE_NAME)

#define SRP_Calc_A(___a, ___N, ___g) \
	LP3(0x4aa0, BIGNUM *, SRP_Calc_A , BIGNUM *, ___a, a0, BIGNUM *, ___N, a1, BIGNUM *, ___g, a2,\
	, AMISSL_BASE_NAME)

#define SRP_Verify_A_mod_N(___A, ___N) \
	LP2(0x4aa6, int, SRP_Verify_A_mod_N , BIGNUM *, ___A, a0, BIGNUM *, ___N, a1,\
	, AMISSL_BASE_NAME)

#define SRP_VBASE_init(___vb, ___verifier_file) \
	LP2(0x4aac, int, SRP_VBASE_init , SRP_VBASE *, ___vb, a0, char *, ___verifier_file, a1,\
	, AMISSL_BASE_NAME)

#define SRP_Verify_B_mod_N(___B, ___N) \
	LP2(0x4ab2, int, SRP_Verify_B_mod_N , BIGNUM *, ___B, a0, BIGNUM *, ___N, a1,\
	, AMISSL_BASE_NAME)

#define EC_KEY_set_public_key_affine_coordinates(___key, ___x, ___y) \
	LP3(0x4ab8, int, EC_KEY_set_public_key_affine_coordinates , EC_KEY *, ___key, a0, BIGNUM *, ___x, a1, BIGNUM *, ___y, a2,\
	, AMISSL_BASE_NAME)

#define EVP_aes_192_ctr() \
	LP0(0x4abe, const EVP_CIPHER *, EVP_aes_192_ctr ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_128_ctr() \
	LP0(0x4ac4, const EVP_CIPHER *, EVP_aes_128_ctr ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_256_ctr() \
	LP0(0x4aca, const EVP_CIPHER *, EVP_aes_256_ctr ,\
	, AMISSL_BASE_NAME)

#define EC_KEY_get_flags(___key) \
	LP1(0x4ad0, int, EC_KEY_get_flags , const EC_KEY *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define EVP_aes_128_xts() \
	LP0(0x4ad6, const EVP_CIPHER *, EVP_aes_128_xts ,\
	, AMISSL_BASE_NAME)

#define private_AES_set_decrypt_key(___userKey, ___bits, ___key) \
	LP3(0x4adc, int, private_AES_set_decrypt_key , const unsigned char *, ___userKey, a0, const int, ___bits, d0, AES_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define EVP_aes_256_xts() \
	LP0(0x4ae2, const EVP_CIPHER *, EVP_aes_256_xts ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_128_gcm() \
	LP0(0x4ae8, const EVP_CIPHER *, EVP_aes_128_gcm ,\
	, AMISSL_BASE_NAME)

#define EC_KEY_clear_flags(___key, ___flags) \
	LP2NR(0x4aee, EC_KEY_clear_flags , EC_KEY *, ___key, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define EC_KEY_set_flags(___key, ___flags) \
	LP2NR(0x4af4, EC_KEY_set_flags , EC_KEY *, ___key, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define EVP_aes_256_ccm() \
	LP0(0x4afa, const EVP_CIPHER *, EVP_aes_256_ccm ,\
	, AMISSL_BASE_NAME)

#define private_AES_set_encrypt_key(___userKey, ___bits, ___key) \
	LP3(0x4b00, int, private_AES_set_encrypt_key , const unsigned char *, ___userKey, a0, const int, ___bits, d0, AES_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define EVP_aes_128_ccm() \
	LP0(0x4b06, const EVP_CIPHER *, EVP_aes_128_ccm ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_192_gcm() \
	LP0(0x4b0c, const EVP_CIPHER *, EVP_aes_192_gcm ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_256_gcm() \
	LP0(0x4b12, const EVP_CIPHER *, EVP_aes_256_gcm ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_192_ccm() \
	LP0(0x4b18, const EVP_CIPHER *, EVP_aes_192_ccm ,\
	, AMISSL_BASE_NAME)

#define EVP_rc4_hmac_md5() \
	LP0(0x4b1e, const EVP_CIPHER *, EVP_rc4_hmac_md5 ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_128_cbc_hmac_sha1() \
	LP0(0x4b24, const EVP_CIPHER *, EVP_aes_128_cbc_hmac_sha1 ,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_rdrand() \
	LP0NR(0x4b2a, ENGINE_load_rdrand ,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_rsax() \
	LP0NR(0x4b30, ENGINE_load_rsax ,\
	, AMISSL_BASE_NAME)

#define EVP_aes_256_cbc_hmac_sha1() \
	LP0(0x4b36, const EVP_CIPHER *, EVP_aes_256_cbc_hmac_sha1 ,\
	, AMISSL_BASE_NAME)

#define CMS_add0_recipient_password(___cms, ___iter, ___wrap_nid, ___pbe_nid, ___pass, ___passlen, ___kekciph) \
	LP7(0x4b3c, CMS_RecipientInfo *, CMS_add0_recipient_password , CMS_ContentInfo *, ___cms, a0, int, ___iter, d0, int, ___wrap_nid, d1, int, ___pbe_nid, d2, unsigned char *, ___pass, a1, ossl_ssize_t, ___passlen, d3, const EVP_CIPHER *, ___kekciph, a2,\
	, AMISSL_BASE_NAME)

#define CMS_decrypt_set1_password(___cms, ___pass, ___passlen) \
	LP3(0x4b42, int, CMS_decrypt_set1_password , CMS_ContentInfo *, ___cms, a0, unsigned char *, ___pass, a1, ossl_ssize_t, ___passlen, d0,\
	, AMISSL_BASE_NAME)

#define CMS_RecipientInfo_set0_password(___ri, ___pass, ___passlen) \
	LP3(0x4b48, int, CMS_RecipientInfo_set0_password , CMS_RecipientInfo *, ___ri, a0, unsigned char *, ___pass, a1, ossl_ssize_t, ___passlen, d0,\
	, AMISSL_BASE_NAME)

#define X509_REQ_sign_ctx(___x, ___ctx) \
	LP2(0x4b4e, int, X509_REQ_sign_ctx , X509_REQ *, ___x, a0, EVP_MD_CTX *, ___ctx, a1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_sign_ctx(___x, ___ctx) \
	LP2(0x4b54, int, X509_CRL_sign_ctx , X509_CRL *, ___x, a0, EVP_MD_CTX *, ___ctx, a1,\
	, AMISSL_BASE_NAME)

#define X509_signature_dump(___bp, ___sig, ___indent) \
	LP3(0x4b5a, int, X509_signature_dump , BIO *, ___bp, a0, const ASN1_STRING *, ___sig, a1, int, ___indent, d0,\
	, AMISSL_BASE_NAME)

#define X509_sign_ctx(___x, ___ctx) \
	LP2(0x4b60, int, X509_sign_ctx , X509 *, ___x, a0, EVP_MD_CTX *, ___ctx, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_item_sign_ctx(___it, ___algor1, ___algor2, ___signature, ___asn, ___ctx) \
	LP6(0x4b66, int, ASN1_item_sign_ctx , const ASN1_ITEM *, ___it, a0, X509_ALGOR *, ___algor1, a1, X509_ALGOR *, ___algor2, a2, ASN1_BIT_STRING *, ___signature, a3, void *, ___asn, d0, EVP_MD_CTX *, ___ctx, d1,\
	, AMISSL_BASE_NAME)

#define OPENSSL_cpuid_setup() \
	LP0NR(0x4b6c, OPENSSL_cpuid_setup ,\
	, AMISSL_BASE_NAME)

#define ERR_remove_thread_state(___id) \
	LP1NR(0x4b72, ERR_remove_thread_state , const CRYPTO_THREADID *, ___id, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set0_crls(___ctx, ___sk) \
	LP2NR(0x4b78, X509_STORE_CTX_set0_crls , X509_STORE_CTX *, ___ctx, a0, STACK_OF(X509_CRL) *, ___sk, a1,\
	, AMISSL_BASE_NAME)

#define SSL_SESSION_get_id(___s, ___len) \
	LP2(0x4b7e, const unsigned char *, SSL_SESSION_get_id , const SSL_SESSION *, ___s, a0, unsigned int *, ___len, a1,\
	, AMISSL_BASE_NAME)

#define SSL_CTX_sess_set_new_cb(___ctx, ___new_session_cb) \
	LP2NRFP(0x4b84, SSL_CTX_sess_set_new_cb , SSL_CTX *, ___ctx, a0, __fpt, ___new_session_cb, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(struct ssl_st *ssl,SSL_SESSION *sess))

#define SSL_CTX_sess_get_get_cb(___ctx) \
	LP1FR(0x4b8a, __fpr, SSL_CTX_sess_get_get_cb , SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME, SSL_SESSION *(*__fpr)(struct ssl_st *ssl, unsigned char *Data, int len, int *copy))

#define SSL_CTX_sess_set_get_cb(___ctx, ___get_session_cb) \
	LP2NRFP(0x4b90, SSL_CTX_sess_set_get_cb , SSL_CTX *, ___ctx, a0, __fpt, ___get_session_cb, a1,\
	, AMISSL_BASE_NAME, SSL_SESSION *(*__fpt)(struct ssl_st *ssl,unsigned char *data,int len,int *copy))

#define SSL_CTX_get_info_callback(___ctx) \
	LP1FR(0x4b96, __fpr, SSL_CTX_get_info_callback , SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME, void (*__fpr)(const SSL *ssl,int type,int val))

#define SSL_CTX_set_client_cert_cb(___ctx, ___client_cert_cb) \
	LP2NRFP(0x4b9c, SSL_CTX_set_client_cert_cb , SSL_CTX *, ___ctx, a0, __fpt, ___client_cert_cb, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(SSL *ssl,X509 **x509,EVP_PKEY **pkey))

#define SSL_CTX_sess_set_remove_cb(___ctx, ___remove_session_cb) \
	LP2NRFP(0x4ba2, SSL_CTX_sess_set_remove_cb , SSL_CTX *, ___ctx, a0, __fpt, ___remove_session_cb, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(struct ssl_ctx_st *ctx,SSL_SESSION *sess))

#define SSL_CTX_sess_get_new_cb(___ctx) \
	LP1FR(0x4ba8, __fpr, SSL_CTX_sess_get_new_cb , SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME, int (*__fpr)(struct ssl_st *ssl, SSL_SESSION *sess))

#define SSL_CTX_get_client_cert_cb(___ctx) \
	LP1FR(0x4bae, __fpr, SSL_CTX_get_client_cert_cb , SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME, int (*__fpr)(SSL *ssl, X509 **x509, EVP_PKEY **pkey))

#define SSL_CTX_sess_get_remove_cb(___ctx) \
	LP1FR(0x4bb4, __fpr, SSL_CTX_sess_get_remove_cb , SSL_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME, void (*__fpr)(struct ssl_ctx_st *ctx, SSL_SESSION *sess))

#define PEM_write_bio_SSL_SESSION(___bp, ___x) \
	LP2(0x4bba, int, PEM_write_bio_SSL_SESSION , BIO *, ___bp, a0, SSL_SESSION *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_SSL_SESSION(___bp, ___x, ___cb, ___u) \
	LP4(0x4bc6, SSL_SESSION *, PEM_read_bio_SSL_SESSION , BIO *, ___bp, a0, SSL_SESSION **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define FIPS_mode_set(___r) \
	LP1(0x4cb0, int, FIPS_mode_set , int, ___r, d0,\
	, AMISSL_BASE_NAME)

#define BN_X931_generate_Xpq(___Xp, ___Xq, ___nbits, ___ctx) \
	LP4(0x4cb6, int, BN_X931_generate_Xpq , BIGNUM *, ___Xp, a0, BIGNUM *, ___Xq, a1, int, ___nbits, d0, BN_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define BN_get0_nist_prime_384() \
	LP0(0x4cbc, const BIGNUM *, BN_get0_nist_prime_384 ,\
	, AMISSL_BASE_NAME)

#define ERR_set_mark() \
	LP0(0x4cc2, int, ERR_set_mark ,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_invert_ex(___n, ___r, ___b, ___ctx) \
	LP4(0x4cc8, int, BN_BLINDING_invert_ex , BIGNUM *, ___n, a0, const BIGNUM *, ___r, a1, BN_BLINDING *, ___b, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define NAME_CONSTRAINTS_free(___ncons) \
	LP1NR(0x4cce, NAME_CONSTRAINTS_free , NAME_CONSTRAINTS *, ___ncons, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set0_param(___ctx, ___param) \
	LP2NR(0x4cd4, X509_STORE_CTX_set0_param , X509_STORE_CTX *, ___ctx, a0, X509_VERIFY_PARAM *, ___param, a1,\
	, AMISSL_BASE_NAME)

#define POLICY_CONSTRAINTS_free(___pcons) \
	LP1NR(0x4cda, POLICY_CONSTRAINTS_free , POLICY_CONSTRAINTS *, ___pcons, a0,\
	, AMISSL_BASE_NAME)

#define BN_nist_mod_192(___r, ___a, ___p, ___ctx) \
	LP4(0x4ce0, int, BN_nist_mod_192 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define GENERAL_SUBTREE_free(___sub) \
	LP1NR(0x4ce6, GENERAL_SUBTREE_free , GENERAL_SUBTREE *, ___sub, a0,\
	, AMISSL_BASE_NAME)

#define PKCS12_add_safe(___psafes, ___bags, ___safe_nid, ___iter, ___pass) \
	LP5(0x4cec, int, PKCS12_add_safe , STACK_OF(PKCS7) **, ___psafes, a0, STACK_OF(PKCS12_SAFEBAG) *, ___bags, a1, int, ___safe_nid, d0, int, ___iter, d1, char *, ___pass, a2,\
	, AMISSL_BASE_NAME)

#define BN_get0_nist_prime_192() \
	LP0(0x4cf2, const BIGNUM *, BN_get0_nist_prime_192 ,\
	, AMISSL_BASE_NAME)

#define X509_keyid_get0(___x, ___len) \
	LP2(0x4cf8, unsigned char *, X509_keyid_get0 , X509 *, ___x, a0, int *, ___len, a1,\
	, AMISSL_BASE_NAME)

#define pitem_new(___prio64be, ___data) \
	LP2(0x4cfe, pitem *, pitem_new , unsigned char *, ___prio64be, a0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define X509_policy_node_get0_parent(___node) \
	LP1(0x4d04, const X509_POLICY_NODE *, X509_policy_node_get0_parent , const X509_POLICY_NODE *, ___node, a0,\
	, AMISSL_BASE_NAME)

#define a2i_IPADDRESS(___ipasc) \
	LP1(0x4d0a, ASN1_OCTET_STRING *, a2i_IPADDRESS , const char *, ___ipasc, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_depth(___ctx, ___depth) \
	LP2NR(0x4d10, X509_STORE_CTX_set_depth , X509_STORE_CTX *, ___ctx, a0, int, ___depth, d0,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_inherit(___to, ___from) \
	LP2(0x4d16, int, X509_VERIFY_PARAM_inherit , X509_VERIFY_PARAM *, ___to, a0, const X509_VERIFY_PARAM *, ___from, a1,\
	, AMISSL_BASE_NAME)

#define pqueue_iterator(___pq) \
	LP1(0x4d1c, pitem *, pqueue_iterator , pqueue, ___pq, a0,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_set_depth(___param, ___depth) \
	LP2NR(0x4d22, X509_VERIFY_PARAM_set_depth , X509_VERIFY_PARAM *, ___param, a0, int, ___depth, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_add1_attr_by_txt(___key, ___attrname, ___type, ___bytes, ___len) \
	LP5(0x4d28, int, EVP_PKEY_add1_attr_by_txt , EVP_PKEY *, ___key, a0, const char *, ___attrname, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_set_flags(___b, ___l) \
	LP2NR(0x4d2e, BN_BLINDING_set_flags , BN_BLINDING *, ___b, a0, unsigned long, ___l, d0,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_set1_policies(___param, ___policies) \
	LP2(0x4d34, int, X509_VERIFY_PARAM_set1_policies , X509_VERIFY_PARAM *, ___param, a0, STACK_OF(ASN1_OBJECT) *, ___policies, a1,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_set1_name(___param, ___name) \
	LP2(0x4d3a, int, X509_VERIFY_PARAM_set1_name , X509_VERIFY_PARAM *, ___param, a0, const char *, ___name, a1,\
	, AMISSL_BASE_NAME)

#define POLICY_MAPPING_free(___pmap) \
	LP1NR(0x4d40, POLICY_MAPPING_free , POLICY_MAPPING *, ___pmap, a0,\
	, AMISSL_BASE_NAME)

#define pqueue_print(___pq) \
	LP1NR(0x4d46, pqueue_print , pqueue, ___pq, a0,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_X509_CERT_PAIR(___bp, ___x) \
	LP2(0x4d4c, int, PEM_write_bio_X509_CERT_PAIR , BIO *, ___bp, a0, X509_CERT_PAIR *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_cmp(___a, ___b) \
	LP2(0x4d52, int, EVP_PKEY_cmp , const EVP_PKEY *, ___a, a0, const EVP_PKEY *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define X509_policy_level_node_count(___level) \
	LP1(0x4d58, int, X509_policy_level_node_count , X509_POLICY_LEVEL *, ___level, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_get_attr(___key, ___loc) \
	LP2(0x4d5e, X509_ATTRIBUTE *, EVP_PKEY_get_attr , const EVP_PKEY *, ___key, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define GENERAL_SUBTREE_new() \
	LP0(0x4d64, GENERAL_SUBTREE *, GENERAL_SUBTREE_new ,\
	, AMISSL_BASE_NAME)

#define X509_policy_node_get0_qualifiers(___node) \
	LP1(0x4d6a, STACK_OF(POLICYQUALINFO) *, X509_policy_node_get0_qualifiers , const X509_POLICY_NODE *, ___node, a0,\
	, AMISSL_BASE_NAME)

#define pqueue_find(___pq, ___prio64be) \
	LP2(0x4d70, pitem *, pqueue_find , pqueue, ___pq, a0, unsigned char *, ___prio64be, a1,\
	, AMISSL_BASE_NAME)

#define pqueue_peek(___pq) \
	LP1(0x4d76, pitem *, pqueue_peek , pqueue, ___pq, a0,\
	, AMISSL_BASE_NAME)

#define X509_policy_node_get0_policy(___node) \
	LP1(0x4d7c, const ASN1_OBJECT *, X509_policy_node_get0_policy , const X509_POLICY_NODE *, ___node, a0,\
	, AMISSL_BASE_NAME)

#define PKCS12_add_safes(___safes, ___p7_nid) \
	LP2(0x4d82, PKCS12 *, PKCS12_add_safes , STACK_OF(PKCS7) *, ___safes, a0, int, ___p7_nid, d0,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_convert_ex(___n, ___r, ___b, ___ctx) \
	LP4(0x4d88, int, BN_BLINDING_convert_ex , BIGNUM *, ___n, a0, BIGNUM *, ___r, a1, BN_BLINDING *, ___b, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define X509_policy_tree_free(___tree) \
	LP1NR(0x4d8e, X509_policy_tree_free , X509_POLICY_TREE *, ___tree, a0,\
	, AMISSL_BASE_NAME)

#define OPENSSL_ia32cap_loc() \
	LP0(0x4d94, unsigned long *, OPENSSL_ia32cap_loc ,\
	, AMISSL_BASE_NAME)

#define BN_get0_nist_prime_224() \
	LP0(0x4d9a, const BIGNUM *, BN_get0_nist_prime_224 ,\
	, AMISSL_BASE_NAME)

#define BN_GENCB_call(___cb, ___a, ___b) \
	LP3(0x4da0, int, BN_GENCB_call , BN_GENCB *, ___cb, a0, int, ___a, d0, int, ___b, d1,\
	, AMISSL_BASE_NAME)

#define NAME_CONSTRAINTS_new() \
	LP0(0x4da6, NAME_CONSTRAINTS *, NAME_CONSTRAINTS_new ,\
	, AMISSL_BASE_NAME)

#define ECParameters_print(___bp, ___key) \
	LP2(0x4dac, int, ECParameters_print , BIO *, ___bp, a0, const EC_KEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define BUF_memdup(___data, ___siz) \
	LP2(0x4db2, void *, BUF_memdup , const void *, ___data, a0, size_t, ___siz, d0,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_set_trust(___param, ___trust) \
	LP2(0x4db8, int, X509_VERIFY_PARAM_set_trust , X509_VERIFY_PARAM *, ___param, a0, int, ___trust, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_get_attr_count(___key) \
	LP1(0x4dbe, int, EVP_PKEY_get_attr_count , const EVP_PKEY *, ___key, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get0_param(___ctx) \
	LP1(0x4dc4, X509_VERIFY_PARAM *, X509_STORE_CTX_get0_param , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_set_depth(___store, ___depth) \
	LP2(0x4dd0, int, X509_STORE_set_depth , X509_STORE *, ___store, a0, int, ___depth, d0,\
	, AMISSL_BASE_NAME)

#define BUF_strndup(___str, ___siz) \
	LP2(0x4dd6, char *, BUF_strndup , const char *, ___str, a0, size_t, ___siz, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_put_eoc(___pp) \
	LP1(0x4ddc, int, ASN1_put_eoc , unsigned char **, ___pp, a0,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_table_cleanup() \
	LP0NR(0x4de2, X509_VERIFY_PARAM_table_cleanup ,\
	, AMISSL_BASE_NAME)

#define RSA_setup_blinding(___rsa, ___ctx) \
	LP2(0x4de8, BN_BLINDING *, RSA_setup_blinding , RSA *, ___rsa, a0, BN_CTX *, ___ctx, a1,\
	, AMISSL_BASE_NAME)

#define sk_find_ex(___st, ___data) \
	LP2(0x4dee, int, sk_find_ex , _STACK *, ___st, a0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define POLICY_CONSTRAINTS_new() \
	LP0(0x4df4, POLICY_CONSTRAINTS *, POLICY_CONSTRAINTS_new ,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_get_depth(___param) \
	LP1(0x4dfa, int, X509_VERIFY_PARAM_get_depth , const X509_VERIFY_PARAM *, ___param, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_item_ndef_i2d(___val, ___out, ___it) \
	LP3(0x4e00, int, ASN1_item_ndef_i2d , ASN1_VALUE *, ___val, a0, unsigned char **, ___out, a1, const ASN1_ITEM *, ___it, a2,\
	, AMISSL_BASE_NAME)

#define ERR_pop_to_mark() \
	LP0(0x4e06, int, ERR_pop_to_mark ,\
	, AMISSL_BASE_NAME)

#define X509_policy_level_get0_node(___level, ___i) \
	LP2(0x4e0c, X509_POLICY_NODE *, X509_policy_level_get0_node , X509_POLICY_LEVEL *, ___level, a0, int, ___i, d0,\
	, AMISSL_BASE_NAME)

#define i2d_PKCS7_NDEF(___a, ___out) \
	LP2(0x4e12, int, i2d_PKCS7_NDEF , PKCS7 *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_generate_v3(___str, ___cnf) \
	LP2(0x4e18, ASN1_TYPE *, ASN1_generate_v3 , char *, ___str, a0, X509V3_CTX *, ___cnf, a1,\
	, AMISSL_BASE_NAME)

#define X509_policy_tree_level_count(___tree) \
	LP1(0x4e1e, int, X509_policy_tree_level_count , const X509_POLICY_TREE *, ___tree, a0,\
	, AMISSL_BASE_NAME)

#define X509_CERT_PAIR_free(___pair) \
	LP1NR(0x4e24, X509_CERT_PAIR_free , X509_CERT_PAIR *, ___pair, a0,\
	, AMISSL_BASE_NAME)

#define BN_nist_mod_224(___r, ___a, ___p, ___ctx) \
	LP4(0x4e2a, int, BN_nist_mod_224 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define BIO_dgram_non_fatal_error(___error) \
	LP1(0x4e30, int, BIO_dgram_non_fatal_error , int, ___error, d0,\
	, AMISSL_BASE_NAME)

#define v2i_ASN1_BIT_STRING(___method, ___ctx, ___nval) \
	LP3(0x4e36, ASN1_BIT_STRING *, v2i_ASN1_BIT_STRING , X509V3_EXT_METHOD *, ___method, a0, X509V3_CTX *, ___ctx, a1, STACK_OF(CONF_VALUE) *, ___nval, a2,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_set_default(___ctx, ___name) \
	LP2(0x4e3c, int, X509_STORE_CTX_set_default , X509_STORE_CTX *, ___ctx, a0, const char *, ___name, a1,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_set1(___to, ___from) \
	LP2(0x4e42, int, X509_VERIFY_PARAM_set1 , X509_VERIFY_PARAM *, ___to, a0, const X509_VERIFY_PARAM *, ___from, a1,\
	, AMISSL_BASE_NAME)

#define v2i_GENERAL_NAME_ex(___out, ___method, ___ctx, ___cnf, ___is_nc) \
	LP5(0x4e48, GENERAL_NAME *, v2i_GENERAL_NAME_ex , GENERAL_NAME *, ___out, a0, const X509V3_EXT_METHOD *, ___method, a1, X509V3_CTX *, ___ctx, a2, CONF_VALUE *, ___cnf, a3, int, ___is_nc, d0,\
	, AMISSL_BASE_NAME)

#define BN_nist_mod_521(___r, ___a, ___p, ___ctx) \
	LP4(0x4e4e, int, BN_nist_mod_521 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define X509_policy_tree_get0_level(___tree, ___i) \
	LP2(0x4e54, X509_POLICY_LEVEL *, X509_policy_tree_get0_level , const X509_POLICY_TREE *, ___tree, a0, int, ___i, d0,\
	, AMISSL_BASE_NAME)

#define ASN1_const_check_infinite_end(___p, ___len) \
	LP2(0x4e5a, int, ASN1_const_check_infinite_end , const unsigned char **, ___p, a0, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_delete_attr(___key, ___loc) \
	LP2(0x4e60, X509_ATTRIBUTE *, EVP_PKEY_delete_attr , EVP_PKEY *, ___key, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define BN_get0_nist_prime_256() \
	LP0(0x4e66, const BIGNUM *, BN_get0_nist_prime_256 ,\
	, AMISSL_BASE_NAME)

#define i2v_ASN1_BIT_STRING(___method, ___bits, ___extlist) \
	LP3(0x4e6c, STACK_OF(CONF_VALUE) *, i2v_ASN1_BIT_STRING , X509V3_EXT_METHOD *, ___method, a0, ASN1_BIT_STRING *, ___bits, a1, STACK_OF(CONF_VALUE) *, ___extlist, a2,\
	, AMISSL_BASE_NAME)

#define BN_nist_mod_384(___r, ___a, ___p, ___ctx) \
	LP4(0x4e72, int, BN_nist_mod_384 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define i2d_X509_CERT_PAIR(___a, ___out) \
	LP2(0x4e78, int, i2d_X509_CERT_PAIR , X509_CERT_PAIR *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define pqueue_pop(___pq) \
	LP1(0x4e7e, pitem *, pqueue_pop , pqueue, ___pq, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_get_attr_by_OBJ(___key, ___obj, ___lastpos) \
	LP3(0x4e84, int, EVP_PKEY_get_attr_by_OBJ , const EVP_PKEY *, ___key, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_lookup(___name) \
	LP1(0x4e8a, const X509_VERIFY_PARAM *, X509_VERIFY_PARAM_lookup , const char *, ___name, a0,\
	, AMISSL_BASE_NAME)

#define X509_CERT_PAIR_new() \
	LP0(0x4e90, X509_CERT_PAIR *, X509_CERT_PAIR_new ,\
	, AMISSL_BASE_NAME)

#define X509V3_NAME_from_section(___nm, ___dn_sk, ___chtype) \
	LP3(0x4e96, int, X509V3_NAME_from_section , X509_NAME *, ___nm, a0, STACK_OF(CONF_VALUE) *, ___dn_sk, a1, unsigned long, ___chtype, a2,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_add1_attr(___key, ___attr) \
	LP2(0x4e9c, int, EVP_PKEY_add1_attr , EVP_PKEY *, ___key, a0, X509_ATTRIBUTE *, ___attr, a1,\
	, AMISSL_BASE_NAME)

#define BIO_dump_indent_cb(___cb, ___u, ___s, ___len, ___indent) \
	LP5FP(0x4ea8, int, BIO_dump_indent_cb , __fpt, ___cb, a0, void *, ___u, a1, const char *, ___s, a2, int, ___len, d0, int, ___indent, d1,\
	, AMISSL_BASE_NAME, int (*__fpt)(const void *data,size_t len,void *u))

#define d2i_X509_CERT_PAIR(___a, ___in, ___len) \
	LP3(0x4eae, X509_CERT_PAIR *, d2i_X509_CERT_PAIR , X509_CERT_PAIR **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define asn1_const_Finish(___c) \
	LP1(0x4eb4, int, asn1_const_Finish , ASN1_const_CTX *, ___c, a0,\
	, AMISSL_BASE_NAME)

#define BN_nist_mod_256(___r, ___a, ___p, ___ctx) \
	LP4(0x4eba, int, BN_nist_mod_256 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_add0_table(___param) \
	LP1(0x4ec0, int, X509_VERIFY_PARAM_add0_table , X509_VERIFY_PARAM *, ___param, a0,\
	, AMISSL_BASE_NAME)

#define pqueue_free(___pq) \
	LP1NR(0x4ec6, pqueue_free , pqueue, ___pq, a0,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_create_param(___b, ___e, ___m, ___ctx, ___bn_mod_exp, ___m_ctx) \
	LP6FP(0x4ecc, BN_BLINDING *, BN_BLINDING_create_param , BN_BLINDING *, ___b, a0, const BIGNUM *, ___e, a1, BIGNUM *, ___m, a2, BN_CTX *, ___ctx, a3, __fpt, ___bn_mod_exp, d0, BN_MONT_CTX *, ___m_ctx, d1,\
	, AMISSL_BASE_NAME, int (*__fpt)(BIGNUM *r,const BIGNUM *a,const BIGNUM *p,const BIGNUM *m,BN_CTX *ctx,BN_MONT_CTX *m_ctx))

#define BN_get0_nist_prime_521() \
	LP0(0x4ed2, const BIGNUM *, BN_get0_nist_prime_521 ,\
	, AMISSL_BASE_NAME)

#define BN_is_prime_fasttest_ex(___p, ___nchecks, ___ctx, ___do_trial_devision, ___cb) \
	LP5(0x4ed8, int, BN_is_prime_fasttest_ex , const BIGNUM *, ___p, a0, int, ___nchecks, d0, BN_CTX *, ___ctx, a1, int, ___do_trial_devision, d1, BN_GENCB *, ___cb, a2,\
	, AMISSL_BASE_NAME)

#define X509_policy_check(___ptree, ___pexplicit_policy, ___certs, ___policy_oids, ___flags) \
	LP5(0x4ede, int, X509_policy_check , X509_POLICY_TREE **, ___ptree, a0, int *, ___pexplicit_policy, a1, STACK_OF(X509) *, ___certs, a2, STACK_OF(ASN1_OBJECT) *, ___policy_oids, a3, unsigned int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_get_attr_by_NID(___key, ___nid, ___lastpos) \
	LP3(0x4ee4, int, EVP_PKEY_get_attr_by_NID , const EVP_PKEY *, ___key, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_get_flags(___b) \
	LP1(0x4eea, unsigned long, BN_BLINDING_get_flags , const BN_BLINDING *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define PKCS12_add_cert(___pbags, ___cert) \
	LP2(0x4ef0, PKCS12_SAFEBAG *, PKCS12_add_cert , STACK_OF(PKCS12_SAFEBAG) **, ___pbags, a0, X509 *, ___cert, a1,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_rand_key(___ctx, ___key) \
	LP2(0x4ef6, int, EVP_CIPHER_CTX_rand_key , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define a2i_IPADDRESS_NC(___ipasc) \
	LP1(0x4efc, ASN1_OCTET_STRING *, a2i_IPADDRESS_NC , const char *, ___ipasc, a0,\
	, AMISSL_BASE_NAME)

#define PKCS7_set_digest(___p7, ___md) \
	LP2(0x4f02, int, PKCS7_set_digest , PKCS7 *, ___p7, a0, const EVP_MD *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define POLICY_MAPPING_new() \
	LP0(0x4f08, POLICY_MAPPING *, POLICY_MAPPING_new ,\
	, AMISSL_BASE_NAME)

#define PKCS7_set0_type_other(___p7, ___type, ___other) \
	LP3(0x4f0e, int, PKCS7_set0_type_other , PKCS7 *, ___p7, a0, int, ___type, d0, ASN1_TYPE *, ___other, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_X509_CERT_PAIR(___bp, ___x, ___cb, ___u) \
	LP4(0x4f14, X509_CERT_PAIR *, PEM_read_bio_X509_CERT_PAIR , BIO *, ___bp, a0, X509_CERT_PAIR **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define pqueue_next(___iter) \
	LP1(0x4f1a, pitem *, pqueue_next , piterator *, ___iter, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_add1_attr_by_OBJ(___key, ___obj, ___type, ___bytes, ___len) \
	LP5(0x4f20, int, EVP_PKEY_add1_attr_by_OBJ , EVP_PKEY *, ___key, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_set_time(___param, ___t) \
	LP2NR(0x4f26, X509_VERIFY_PARAM_set_time , X509_VERIFY_PARAM *, ___param, a0, time_t, ___t, d0,\
	, AMISSL_BASE_NAME)

#define pqueue_new() \
	LP0(0x4f2c, pqueue, pqueue_new ,\
	, AMISSL_BASE_NAME)

#define PKCS12_add_key(___pbags, ___key, ___key_usage, ___iter, ___key_nid, ___pass) \
	LP6(0x4f32, PKCS12_SAFEBAG *, PKCS12_add_key , STACK_OF(PKCS12_SAFEBAG) **, ___pbags, a0, EVP_PKEY *, ___key, a1, int, ___key_usage, d0, int, ___iter, d1, int, ___key_nid, d2, char *, ___pass, a2,\
	, AMISSL_BASE_NAME)

#define DSO_merge(___dso, ___filespec1, ___filespec2) \
	LP3(0x4f38, char *, DSO_merge , DSO *, ___dso, a0, const char *, ___filespec1, a1, const char *, ___filespec2, a2,\
	, AMISSL_BASE_NAME)

#define BIO_dump_cb(___cb, ___u, ___s, ___len) \
	LP4FP(0x4f3e, int, BIO_dump_cb , __fpt, ___cb, a0, void *, ___u, a1, const char *, ___s, a2, int, ___len, a3,\
	, AMISSL_BASE_NAME, int (*__fpt)(const void *data,size_t len,void *u))

#define pqueue_insert(___pq, ___item) \
	LP2(0x4f44, pitem *, pqueue_insert , pqueue, ___pq, a0, pitem *, ___item, a1,\
	, AMISSL_BASE_NAME)

#define pitem_free(___item) \
	LP1NR(0x4f4a, pitem_free , pitem *, ___item, a0,\
	, AMISSL_BASE_NAME)

#define get_rfc3526_prime_8192(___bn) \
	LP1(0x4f50, BIGNUM *, get_rfc3526_prime_8192 , BIGNUM *, ___bn, a0,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_clear_flags(___param, ___flags) \
	LP2(0x4f56, int, X509_VERIFY_PARAM_clear_flags , X509_VERIFY_PARAM *, ___param, a0, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define get_rfc2409_prime_1024(___bn) \
	LP1(0x4f5c, BIGNUM *, get_rfc2409_prime_1024 , BIGNUM *, ___bn, a0,\
	, AMISSL_BASE_NAME)

#define get_rfc3526_prime_2048(___bn) \
	LP1(0x4f62, BIGNUM *, get_rfc3526_prime_2048 , BIGNUM *, ___bn, a0,\
	, AMISSL_BASE_NAME)

#define get_rfc3526_prime_6144(___bn) \
	LP1(0x4f68, BIGNUM *, get_rfc3526_prime_6144 , BIGNUM *, ___bn, a0,\
	, AMISSL_BASE_NAME)

#define get_rfc3526_prime_1536(___bn) \
	LP1(0x4f6e, BIGNUM *, get_rfc3526_prime_1536 , BIGNUM *, ___bn, a0,\
	, AMISSL_BASE_NAME)

#define get_rfc3526_prime_3072(___bn) \
	LP1(0x4f74, BIGNUM *, get_rfc3526_prime_3072 , BIGNUM *, ___bn, a0,\
	, AMISSL_BASE_NAME)

#define get_rfc3526_prime_4096(___bn) \
	LP1(0x4f7a, BIGNUM *, get_rfc3526_prime_4096 , BIGNUM *, ___bn, a0,\
	, AMISSL_BASE_NAME)

#define get_rfc2409_prime_768(___bn) \
	LP1(0x4f80, BIGNUM *, get_rfc2409_prime_768 , BIGNUM *, ___bn, a0,\
	, AMISSL_BASE_NAME)

#define X509_VERIFY_PARAM_get_flags(___param) \
	LP1(0x4f86, unsigned long, X509_VERIFY_PARAM_get_flags , X509_VERIFY_PARAM *, ___param, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_new() \
	LP0(0x4f8c, EVP_CIPHER_CTX *, EVP_CIPHER_CTX_new ,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_free(___a) \
	LP1NR(0x4f92, EVP_CIPHER_CTX_free , EVP_CIPHER_CTX *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define a2i_ipadd(___ipout, ___ipasc) \
	LP2(0x4f98, int, a2i_ipadd , unsigned char *, ___ipout, a0, const char *, ___ipasc, a1,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_block_size(___cipher) \
	LP1(0x4f9e, int, EVP_CIPHER_block_size , const EVP_CIPHER *, ___cipher, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_set_app_data(___ctx, ___data) \
	LP2NR(0x4fa4, EVP_CIPHER_CTX_set_app_data , EVP_CIPHER_CTX *, ___ctx, a0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define BIO_method_type(___b) \
	LP1(0x4faa, int, BIO_method_type , const BIO *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_nid(___ctx) \
	LP1(0x4fb0, int, EVP_CIPHER_CTX_nid , const EVP_CIPHER_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_key_length(___ctx) \
	LP1(0x4fb6, int, EVP_CIPHER_CTX_key_length , const EVP_CIPHER_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_MD_size(___md) \
	LP1(0x4fbc, int, EVP_MD_size , const EVP_MD *, ___md, a0,\
	, AMISSL_BASE_NAME)

#define EVP_MD_CTX_test_flags(___ctx, ___flags) \
	LP2(0x4fc2, int, EVP_MD_CTX_test_flags , const EVP_MD_CTX *, ___ctx, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define BIO_clear_flags(___b, ___flags) \
	LP2NR(0x4fc8, BIO_clear_flags , BIO *, ___b, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define EVP_MD_pkey_type(___md) \
	LP1(0x4fce, int, EVP_MD_pkey_type , const EVP_MD *, ___md, a0,\
	, AMISSL_BASE_NAME)

#define EVP_MD_CTX_clear_flags(___ctx, ___flags) \
	LP2NR(0x4fd4, EVP_MD_CTX_clear_flags , EVP_MD_CTX *, ___ctx, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_flags(___cipher) \
	LP1(0x4fda, unsigned long, EVP_CIPHER_flags , const EVP_CIPHER *, ___cipher, a0,\
	, AMISSL_BASE_NAME)

#define BIO_get_callback(___b) \
	LP1FR(0x4fe0, __fpr, BIO_get_callback , const BIO *, ___b, a0,\
	, AMISSL_BASE_NAME, long (*__fpr)(struct bio_st *,int,const char *,int, long,long))

#define EVP_CIPHER_key_length(___cipher) \
	LP1(0x4fe6, int, EVP_CIPHER_key_length , const EVP_CIPHER *, ___cipher, a0,\
	, AMISSL_BASE_NAME)

#define EVP_Cipher(___c, ___out, ___in, ___inl) \
	LP4(0x4fec, int, EVP_Cipher , EVP_CIPHER_CTX *, ___c, a0, unsigned char *, ___out, a1, const unsigned char *, ___in, a2, unsigned int, ___inl, d0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_block_size(___ctx) \
	LP1(0x4ff2, int, EVP_CIPHER_CTX_block_size , const EVP_CIPHER_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_cipher(___ctx) \
	LP1(0x4ff8, const EVP_CIPHER *, EVP_CIPHER_CTX_cipher , const EVP_CIPHER_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_get_app_data(___ctx) \
	LP1(0x4ffe, void *, EVP_CIPHER_CTX_get_app_data , const EVP_CIPHER_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_MD_block_size(___md) \
	LP1(0x5004, int, EVP_MD_block_size , const EVP_MD *, ___md, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_flags(___ctx) \
	LP1(0x500a, unsigned long, EVP_CIPHER_CTX_flags , const EVP_CIPHER_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_MD_CTX_md(___ctx) \
	LP1(0x5010, const EVP_MD *, EVP_MD_CTX_md , const EVP_MD_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define BIO_method_name(___b) \
	LP1(0x5016, const char *, BIO_method_name , const BIO *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_iv_length(___ctx) \
	LP1(0x501c, int, EVP_CIPHER_CTX_iv_length , const EVP_CIPHER_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_memcmp(___a, ___b, ___len) \
	LP3(0x5022, int, CRYPTO_memcmp , const void *, ___a, a0, const void *, ___b, a1, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define BN_consttime_swap(___swap, ___a, ___b, ___nwords) \
	LP4NR(0x5028, BN_consttime_swap , BN_ULONG, ___swap, d0, BIGNUM *, ___a, a0, BIGNUM *, ___b, a1, int, ___nwords, d1,\
	, AMISSL_BASE_NAME)

#define i2d_X509_EXTENSIONS(___a, ___out) \
	LP2(0x502e, int, i2d_X509_EXTENSIONS , X509_EXTENSIONS *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define d2i_X509_EXTENSIONS(___a, ___in, ___len) \
	LP3(0x5034, X509_EXTENSIONS *, d2i_X509_EXTENSIONS , X509_EXTENSIONS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define X509_ALGOR_get0(___pobj, ___pptype, ___ppval, ___algor) \
	LP4NR(0x503a, X509_ALGOR_get0 , ASN1_OBJECT **, ___pobj, a0, int *, ___pptype, a1, void **, ___ppval, a2, X509_ALGOR *, ___algor, a3,\
	, AMISSL_BASE_NAME)

#define X509_ALGOR_set0(___alg, ___aobj, ___ptype, ___pval) \
	LP4(0x5040, int, X509_ALGOR_set0 , X509_ALGOR *, ___alg, a0, ASN1_OBJECT *, ___aobj, a1, int, ___ptype, d0, void *, ___pval, a2,\
	, AMISSL_BASE_NAME)

#define X509at_get0_data_by_OBJ(___x, ___obj, ___lastpos, ___type) \
	LP4(0x5046, void *, X509at_get0_data_by_OBJ , STACK_OF(X509_ATTRIBUTE) *, ___x, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0, int, ___type, d1,\
	, AMISSL_BASE_NAME)

#define ASN1_TYPE_set1(___a, ___type, ___value) \
	LP3(0x504c, int, ASN1_TYPE_set1 , ASN1_TYPE *, ___a, a0, int, ___type, d0, const void *, ___value, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_set0(___str, ___data, ___len) \
	LP3NR(0x5052, ASN1_STRING_set0 , ASN1_STRING *, ___str, a0, void *, ___data, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define i2d_X509_ALGORS(___a, ___out) \
	LP2(0x5058, int, i2d_X509_ALGORS , X509_ALGORS *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define COMP_zlib_cleanup() \
	LP0NR(0x505e, COMP_zlib_cleanup ,\
	, AMISSL_BASE_NAME)

#define d2i_X509_ALGORS(___a, ___in, ___len) \
	LP3(0x5064, X509_ALGORS *, d2i_X509_ALGORS , X509_ALGORS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define SMIME_read_ASN1(___bio, ___bcont, ___it) \
	LP3(0x506a, ASN1_VALUE *, SMIME_read_ASN1 , BIO *, ___bio, a0, BIO **, ___bcont, a1, const ASN1_ITEM *, ___it, a2,\
	, AMISSL_BASE_NAME)

#define OPENSSL_isservice() \
	LP0(0x5070, int, OPENSSL_isservice ,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_clear_flags(___ctx, ___flags) \
	LP2NR(0x5076, EVP_CIPHER_CTX_clear_flags , EVP_CIPHER_CTX *, ___ctx, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define BN_X931_generate_prime_ex(___p, ___p1, ___p2, ___Xp1, ___Xp2, ___Xp, ___e, ___ctx, ___cb) \
	LP9(0x507c, int, BN_X931_generate_prime_ex , BIGNUM *, ___p, a0, BIGNUM *, ___p1, a1, BIGNUM *, ___p2, a2, BIGNUM *, ___Xp1, a3, BIGNUM *, ___Xp2, d0, const BIGNUM *, ___Xp, d1, const BIGNUM *, ___e, d2, BN_CTX *, ___ctx, d3, BN_GENCB *, ___cb, d4,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_test_flags(___ctx, ___flags) \
	LP2(0x5082, int, EVP_CIPHER_CTX_test_flags , const EVP_CIPHER_CTX *, ___ctx, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define EVP_add_alg_module() \
	LP0NR(0x5088, EVP_add_alg_module ,\
	, AMISSL_BASE_NAME)

#define BN_X931_derive_prime_ex(___p, ___p1, ___p2, ___Xp, ___Xp1, ___Xp2, ___e, ___ctx, ___cb) \
	LP9(0x508e, int, BN_X931_derive_prime_ex , BIGNUM *, ___p, a0, BIGNUM *, ___p1, a1, BIGNUM *, ___p2, a2, const BIGNUM *, ___Xp, d0, const BIGNUM *, ___Xp1, a3, const BIGNUM *, ___Xp2, d1, const BIGNUM *, ___e, d2, BN_CTX *, ___ctx, d3, BN_GENCB *, ___cb, d4,\
	, AMISSL_BASE_NAME)

#define OPENSSL_init() \
	LP0NR(0x5094, OPENSSL_init ,\
	, AMISSL_BASE_NAME)

#define CRYPTO_strdup(___str, ___file, ___line) \
	LP3(0x509a, char *, CRYPTO_strdup , const char *, ___str, a0, const char *, ___file, a1, int, ___line, d0,\
	, AMISSL_BASE_NAME)

#define pqueue_size(___pq) \
	LP1(0x50a0, int, pqueue_size , pqueue, ___pq, a0,\
	, AMISSL_BASE_NAME)

#define i2d_TS_ACCURACY(___a, ___pp) \
	LP2(0x50a6, int, i2d_TS_ACCURACY , const TS_ACCURACY *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define i2d_TS_MSG_IMPRINT(___a, ___pp) \
	LP2(0x50b2, int, i2d_TS_MSG_IMPRINT , const TS_MSG_IMPRINT *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_print_public(___out, ___pkey, ___indent, ___pctx) \
	LP4(0x50b8, int, EVP_PKEY_print_public , BIO *, ___out, a0, const EVP_PKEY *, ___pkey, a1, int, ___indent, d0, ASN1_PCTX *, ___pctx, a2,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_new(___pkey, ___e) \
	LP2(0x50be, EVP_PKEY_CTX *, EVP_PKEY_CTX_new , EVP_PKEY *, ___pkey, a0, ENGINE *, ___e, a1,\
	, AMISSL_BASE_NAME)

#define i2d_TS_TST_INFO(___a, ___pp) \
	LP2(0x50c4, int, i2d_TS_TST_INFO , const TS_TST_INFO *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_find(___pe, ___type) \
	LP2(0x50ca, const EVP_PKEY_ASN1_METHOD *, EVP_PKEY_asn1_find , ENGINE **, ___pe, a0, int, ___type, a1,\
	, AMISSL_BASE_NAME)

#define DSO_METHOD_beos() \
	LP0(0x50d0, DSO_METHOD *, DSO_METHOD_beos ,\
	, AMISSL_BASE_NAME)

#define TS_CONF_load_cert(___file) \
	LP1(0x50d6, X509 *, TS_CONF_load_cert , const char *, ___file, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_get_ext(___a, ___loc) \
	LP2(0x50dc, X509_EXTENSION *, TS_REQ_get_ext , TS_REQ *, ___a, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_sign_init(___ctx) \
	LP1(0x50e2, int, EVP_PKEY_sign_init , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_item_print(___out, ___ifld, ___indent, ___it, ___ctx) \
	LP5(0x50e8, int, ASN1_item_print , BIO *, ___out, a0, ASN1_VALUE *, ___ifld, a1, int, ___indent, d0, const ASN1_ITEM *, ___it, a2, const ASN1_PCTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_set_nonce(___a, ___nonce) \
	LP2(0x50ee, int, TS_TST_INFO_set_nonce , TS_TST_INFO *, ___a, a0, const ASN1_INTEGER *, ___nonce, a1,\
	, AMISSL_BASE_NAME)

#define TS_RESP_dup(___a) \
	LP1(0x50f4, TS_RESP *, TS_RESP_dup , TS_RESP *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_add0(___ameth) \
	LP1(0x50fa, int, EVP_PKEY_asn1_add0 , const EVP_PKEY_ASN1_METHOD *, ___ameth, a0,\
	, AMISSL_BASE_NAME)

#define PKCS7_add0_attrib_signing_time(___si, ___t) \
	LP2(0x5100, int, PKCS7_add0_attrib_signing_time , PKCS7_SIGNER_INFO *, ___si, a0, ASN1_TIME *, ___t, a1,\
	, AMISSL_BASE_NAME)

#define BIO_asn1_get_prefix(___b, ___pprefix, ___pprefix_free) \
	LP3(0x510c, int, BIO_asn1_get_prefix , BIO *, ___b, a0, asn1_ps_func **, ___pprefix, a1, asn1_ps_func **, ___pprefix_free, a2,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_set_time(___a, ___gtime) \
	LP2(0x5112, int, TS_TST_INFO_set_time , TS_TST_INFO *, ___a, a0, const ASN1_GENERALIZEDTIME *, ___gtime, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_set_decrypt(___pmeth, ___decrypt_init, ___decrypt) \
	LP3NRFP(0x5118, EVP_PKEY_meth_set_decrypt , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___decrypt_init, a1, __fpt, ___decrypt, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx))

#define EVP_PKEY_set_type_str(___pkey, ___str, ___len) \
	LP3(0x511e, int, EVP_PKEY_set_type_str , EVP_PKEY *, ___pkey, a0, const char *, ___str, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_get_keygen_info(___ctx, ___idx) \
	LP2(0x5124, int, EVP_PKEY_CTX_get_keygen_info , EVP_PKEY_CTX *, ___ctx, a0, int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_set_policy_id(___a, ___policy) \
	LP2(0x512a, int, TS_REQ_set_policy_id , TS_REQ *, ___a, a0, ASN1_OBJECT *, ___policy, a1,\
	, AMISSL_BASE_NAME)

#define TS_RESP_set_status_info(___a, ___info) \
	LP2(0x5136, int, TS_RESP_set_status_info , TS_RESP *, ___a, a0, TS_STATUS_INFO *, ___info, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_keygen(___ctx, ___ppkey) \
	LP2(0x513c, int, EVP_PKEY_keygen , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY **, ___ppkey, a1,\
	, AMISSL_BASE_NAME)

#define EVP_DigestSignInit(___ctx, ___pctx, ___type, ___e, ___pkey) \
	LP5(0x5142, int, EVP_DigestSignInit , EVP_MD_CTX *, ___ctx, a0, EVP_PKEY_CTX **, ___pctx, a1, const EVP_MD *, ___type, a2, ENGINE *, ___e, a3, EVP_PKEY *, ___pkey, d0,\
	, AMISSL_BASE_NAME)

#define TS_ACCURACY_set_millis(___a, ___millis) \
	LP2(0x5148, int, TS_ACCURACY_set_millis , TS_ACCURACY *, ___a, a0, const ASN1_INTEGER *, ___millis, a1,\
	, AMISSL_BASE_NAME)

#define TS_REQ_dup(___a) \
	LP1(0x514e, TS_REQ *, TS_REQ_dup , TS_REQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAME_dup(___a) \
	LP1(0x5154, GENERAL_NAME *, GENERAL_NAME_dup , GENERAL_NAME *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_get1_crls(___st, ___nm) \
	LP2(0x515a, STACK_OF(X509_CRL) *, X509_STORE_get1_crls , X509_STORE_CTX *, ___st, a0, X509_NAME *, ___nm, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_new(___id, ___flags, ___pem_str, ___info) \
	LP4(0x5160, EVP_PKEY_ASN1_METHOD *, EVP_PKEY_asn1_new , int, ___id, d0, int, ___flags, d1, const char *, ___pem_str, a0, const char *, ___info, a1,\
	, AMISSL_BASE_NAME)

#define BIO_new_NDEF(___out, ___val, ___it) \
	LP3(0x5166, BIO *, BIO_new_NDEF , BIO *, ___out, a0, ASN1_VALUE *, ___val, a1, const ASN1_ITEM *, ___it, a2,\
	, AMISSL_BASE_NAME)

#define TS_MSG_IMPRINT_set_algo(___a, ___alg) \
	LP2(0x516c, int, TS_MSG_IMPRINT_set_algo , TS_MSG_IMPRINT *, ___a, a0, X509_ALGOR *, ___alg, a1,\
	, AMISSL_BASE_NAME)

#define i2d_TS_TST_INFO_bio(___fp, ___a) \
	LP2(0x5172, int, i2d_TS_TST_INFO_bio , BIO *, ___fp, a0, TS_TST_INFO *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_set_ordering(___a, ___ordering) \
	LP2(0x5178, int, TS_TST_INFO_set_ordering , TS_TST_INFO *, ___a, a0, int, ___ordering, d0,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_ext_by_OBJ(___a, ___obj, ___lastpos) \
	LP3(0x517e, int, TS_TST_INFO_get_ext_by_OBJ , TS_TST_INFO *, ___a, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_THREADID_set_pointer(___id, ___ptr) \
	LP2NR(0x5184, CRYPTO_THREADID_set_pointer , CRYPTO_THREADID *, ___id, a0, void *, ___ptr, a1,\
	, AMISSL_BASE_NAME)

#define TS_CONF_get_tsa_section(___conf, ___section) \
	LP2(0x518a, const char *, TS_CONF_get_tsa_section , CONF *, ___conf, a0, const char *, ___section, a1,\
	, AMISSL_BASE_NAME)

#define SMIME_write_ASN1(___bio, ___val, ___data, ___flags, ___ctype_nid, ___econt_nid, ___mdalgs, ___it) \
	LP8(0x5190, int, SMIME_write_ASN1 , BIO *, ___bio, a0, ASN1_VALUE *, ___val, a1, BIO *, ___data, a2, int, ___flags, a3, int, ___ctype_nid, d0, int, ___econt_nid, d1, STACK_OF(X509_ALGOR) *, ___mdalgs, d2, const ASN1_ITEM *, ___it, d3,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_set_signer_key(___ctx, ___key) \
	LP2(0x5196, int, TS_RESP_CTX_set_signer_key , TS_RESP_CTX *, ___ctx, a0, EVP_PKEY *, ___key, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_encrypt_old(___enc_key, ___key, ___key_len, ___pub_key) \
	LP4(0x519c, int, EVP_PKEY_encrypt_old , unsigned char *, ___enc_key, a0, const unsigned char *, ___key, a1, int, ___key_len, d0, EVP_PKEY *, ___pub_key, a2,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_encrypt_init(___ctx) \
	LP1(0x51a2, int, EVP_PKEY_encrypt_init , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_THREADID_cpy(___dest, ___src) \
	LP2NR(0x51a8, CRYPTO_THREADID_cpy , CRYPTO_THREADID *, ___dest, a0, const CRYPTO_THREADID *, ___src, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_PCTX_get_cert_flags(___p) \
	LP1(0x51ae, unsigned long, ASN1_PCTX_get_cert_flags , ASN1_PCTX *, ___p, a0,\
	, AMISSL_BASE_NAME)

#define i2d_ESS_SIGNING_CERT(___a, ___pp) \
	LP2(0x51b4, int, i2d_ESS_SIGNING_CERT , const ESS_SIGNING_CERT *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define TS_CONF_load_key(___file, ___pass) \
	LP2(0x51ba, EVP_PKEY *, TS_CONF_load_key , const char *, ___file, a0, const char *, ___pass, a1,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_SEQUENCE_ANY(___a, ___pp) \
	LP2(0x51c0, int, i2d_ASN1_SEQUENCE_ANY , const ASN1_SEQUENCE_ANY *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define d2i_TS_MSG_IMPRINT_bio(___fp, ___a) \
	LP2(0x51c6, TS_MSG_IMPRINT *, d2i_TS_MSG_IMPRINT_bio , BIO *, ___fp, a0, TS_MSG_IMPRINT **, ___a, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_set_public(___ameth, ___pub_decode, ___pub_encode, ___pub_cmp, ___pub_print, ___pkey_size, ___pkey_bits) \
	LP7NRFP(0x51cc, EVP_PKEY_asn1_set_public , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___pub_decode, a1, __fpt, ___pub_encode, a2, __fpt, ___pub_cmp, a3, __fpt, ___pub_print, d0, __fpt, ___pkey_size, d1, __fpt, ___pkey_bits, d2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pk,X509_PUBKEY *pub))

#define b2i_PublicKey_bio(___in) \
	LP1(0x51d2, EVP_PKEY *, b2i_PublicKey_bio , BIO *, ___in, a0,\
	, AMISSL_BASE_NAME)

#define BIO_asn1_set_prefix(___b, ___prefix, ___prefix_free) \
	LP3(0x51d8, int, BIO_asn1_set_prefix , BIO *, ___b, a0, asn1_ps_func *, ___prefix, a1, asn1_ps_func *, ___prefix_free, a2,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_new_mac_key(___type, ___e, ___key, ___keylen) \
	LP4(0x51de, EVP_PKEY *, EVP_PKEY_new_mac_key , int, ___type, a0, ENGINE *, ___e, a1, const unsigned char *, ___key, a2, int, ___keylen, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_THREADID_cmp(___a, ___b) \
	LP2(0x51e4, int, CRYPTO_THREADID_cmp , const CRYPTO_THREADID *, ___a, a0, const CRYPTO_THREADID *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define TS_REQ_ext_free(___a) \
	LP1NR(0x51ea, TS_REQ_ext_free , TS_REQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_set_free(___ameth, ___pkey_free) \
	LP2NRFP(0x51f0, EVP_PKEY_asn1_set_free , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___pkey_free, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(EVP_PKEY *pkey))

#define EVP_PKEY_get0_asn1(___pkey) \
	LP1(0x51f6, const EVP_PKEY_ASN1_METHOD *, EVP_PKEY_get0_asn1 , EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define d2i_NETSCAPE_X509(___a, ___in, ___len) \
	LP3(0x51fc, NETSCAPE_X509 *, d2i_NETSCAPE_X509 , NETSCAPE_X509 **, ___a, a0, unsigned char const **, ___in, a1, long, ___len, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_verify_recover_init(___ctx) \
	LP1(0x5202, int, EVP_PKEY_verify_recover_init , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_set_data(___ctx, ___data) \
	LP2NR(0x5208, EVP_PKEY_CTX_set_data , EVP_PKEY_CTX *, ___ctx, a0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_keygen_init(___ctx) \
	LP1(0x520e, int, EVP_PKEY_keygen_init , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_set_status_info(___ctx, ___status, ___text) \
	LP3(0x5214, int, TS_RESP_CTX_set_status_info , TS_RESP_CTX *, ___ctx, a0, int, ___status, d0, const char *, ___text, a1,\
	, AMISSL_BASE_NAME)

#define TS_MSG_IMPRINT_get_algo(___a) \
	LP1(0x521a, X509_ALGOR *, TS_MSG_IMPRINT_get_algo , TS_MSG_IMPRINT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_print_bio(___bio, ___a) \
	LP2(0x5220, int, TS_REQ_print_bio , BIO *, ___bio, a0, TS_REQ *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_ctrl_str(___ctx, ___type, ___value) \
	LP3(0x5226, int, EVP_PKEY_CTX_ctrl_str , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___type, a1, const char *, ___value, a2,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_get_default_digest_nid(___pkey, ___pnid) \
	LP2(0x522c, int, EVP_PKEY_get_default_digest_nid , EVP_PKEY *, ___pkey, a0, int *, ___pnid, a1,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_PKCS7_stream(___out, ___p7, ___in, ___flags) \
	LP4(0x5232, int, PEM_write_bio_PKCS7_stream , BIO *, ___out, a0, PKCS7 *, ___p7, a1, BIO *, ___in, a2, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define TS_MSG_IMPRINT_print_bio(___bio, ___msg) \
	LP2(0x5238, int, TS_MSG_IMPRINT_print_bio , BIO *, ___bio, a0, TS_MSG_IMPRINT *, ___msg, a1,\
	, AMISSL_BASE_NAME)

#define BN_asc2bn(___a, ___str) \
	LP2(0x523e, int, BN_asc2bn , BIGNUM **, ___a, a0, const char *, ___str, a1,\
	, AMISSL_BASE_NAME)

#define TS_REQ_get_policy_id(___a) \
	LP1(0x5244, ASN1_OBJECT *, TS_REQ_get_policy_id , TS_REQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_TS_ACCURACY(___a, ___pp, ___length) \
	LP3(0x524a, TS_ACCURACY *, d2i_TS_ACCURACY , TS_ACCURACY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define DSO_global_lookup(___name) \
	LP1(0x5250, void *, DSO_global_lookup , const char *, ___name, a0,\
	, AMISSL_BASE_NAME)

#define TS_CONF_set_tsa_name(___conf, ___section, ___ctx) \
	LP3(0x5256, int, TS_CONF_set_tsa_name , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_SET_ANY(___a, ___pp) \
	LP2(0x525c, int, i2d_ASN1_SET_ANY , const ASN1_SEQUENCE_ANY *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_PCTX_get_flags(___p) \
	LP1(0x5262, unsigned long, ASN1_PCTX_get_flags , ASN1_PCTX *, ___p, a0,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_ext_by_NID(___a, ___nid, ___lastpos) \
	LP3(0x5268, int, TS_TST_INFO_get_ext_by_NID , TS_TST_INFO *, ___a, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define TS_RESP_new() \
	LP0(0x526e, TS_RESP *, TS_RESP_new ,\
	, AMISSL_BASE_NAME)

#define ESS_CERT_ID_dup(___a) \
	LP1(0x5274, ESS_CERT_ID *, ESS_CERT_ID_dup , ESS_CERT_ID *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_STATUS_INFO_dup(___a) \
	LP1(0x527a, TS_STATUS_INFO *, TS_STATUS_INFO_dup , TS_STATUS_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_delete_ext(___a, ___loc) \
	LP2(0x5280, X509_EXTENSION *, TS_REQ_delete_ext , TS_REQ *, ___a, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define EVP_DigestVerifyFinal(___ctx, ___sig, ___siglen) \
	LP3(0x5286, int, EVP_DigestVerifyFinal , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___sig, a1, size_t, ___siglen, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_print_params(___out, ___pkey, ___inden, ___pctx) \
	LP4(0x528c, int, EVP_PKEY_print_params , BIO *, ___out, a0, const EVP_PKEY *, ___pkey, a1, int, ___inden, d0, ASN1_PCTX *, ___pctx, a2,\
	, AMISSL_BASE_NAME)

#define TS_REQ_get_msg_imprint(___a) \
	LP1(0x5292, TS_MSG_IMPRINT *, TS_REQ_get_msg_imprint , TS_REQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define OBJ_find_sigid_by_algs(___psignid, ___dig_nid, ___pkey_nid) \
	LP3(0x5298, int, OBJ_find_sigid_by_algs , int *, ___psignid, a0, int, ___dig_nid, d0, int, ___pkey_nid, d1,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_serial(___a) \
	LP1(0x529e, const ASN1_INTEGER *, TS_TST_INFO_get_serial , const TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_get_nonce(___a) \
	LP1(0x52a4, const ASN1_INTEGER *, TS_REQ_get_nonce , const TS_REQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_PUBKEY_set0_param(___pub, ___aobj, ___ptype, ___pval, ___penc, ___penclen) \
	LP6(0x52aa, int, X509_PUBKEY_set0_param , X509_PUBKEY *, ___pub, a0, ASN1_OBJECT *, ___aobj, a1, int, ___ptype, d0, void *, ___pval, a2, unsigned char *, ___penc, a3, int, ___penclen, d1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_set0_keygen_info(___ctx, ___dat, ___datlen) \
	LP3NR(0x52b0, EVP_PKEY_CTX_set0_keygen_info , EVP_PKEY_CTX *, ___ctx, a0, int *, ___dat, a1, int, ___datlen, d0,\
	, AMISSL_BASE_NAME)

#define DIST_POINT_set_dpname(___dpn, ___iname) \
	LP2(0x52b6, int, DIST_POINT_set_dpname , DIST_POINT_NAME *, ___dpn, a0, X509_NAME *, ___iname, a1,\
	, AMISSL_BASE_NAME)

#define i2d_ISSUING_DIST_POINT(___a, ___pp) \
	LP2(0x52bc, int, i2d_ISSUING_DIST_POINT , ISSUING_DIST_POINT *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_get_data(___ctx) \
	LP1(0x52c2, void *, EVP_PKEY_CTX_get_data , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define TS_STATUS_INFO_print_bio(___bio, ___a) \
	LP2(0x52c8, int, TS_STATUS_INFO_print_bio , BIO *, ___bio, a0, TS_STATUS_INFO *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_derive_init(___ctx) \
	LP1(0x52ce, int, EVP_PKEY_derive_init , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define d2i_TS_TST_INFO(___a, ___pp, ___length) \
	LP3(0x52d4, TS_TST_INFO *, d2i_TS_TST_INFO , TS_TST_INFO **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_add_alias(___to, ___from) \
	LP2(0x52da, int, EVP_PKEY_asn1_add_alias , int, ___to, d0, int, ___from, d1,\
	, AMISSL_BASE_NAME)

#define d2i_TS_RESP_bio(___fp, ___a) \
	LP2(0x52e0, TS_RESP *, d2i_TS_RESP_bio , BIO *, ___fp, a0, TS_RESP **, ___a, a1,\
	, AMISSL_BASE_NAME)

#define OTHERNAME_cmp(___a, ___b) \
	LP2(0x52e6, int, OTHERNAME_cmp , OTHERNAME *, ___a, a0, OTHERNAME *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAME_set0_value(___a, ___type, ___value) \
	LP3NR(0x52ec, GENERAL_NAME_set0_value , GENERAL_NAME *, ___a, a0, int, ___type, d0, void *, ___value, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_RECIP_INFO_get0_alg(___ri, ___penc) \
	LP2NR(0x52f2, PKCS7_RECIP_INFO_get0_alg , PKCS7_RECIP_INFO *, ___ri, a0, X509_ALGOR **, ___penc, a1,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_new() \
	LP0(0x52f8, TS_RESP_CTX *, TS_RESP_CTX_new ,\
	, AMISSL_BASE_NAME)

#define TS_RESP_set_tst_info(___a, ___p7, ___tst_info) \
	LP3NR(0x52fe, TS_RESP_set_tst_info , TS_RESP *, ___a, a0, PKCS7 *, ___p7, a1, TS_TST_INFO *, ___tst_info, a2,\
	, AMISSL_BASE_NAME)

#define PKCS7_final(___p7, ___data, ___flags) \
	LP3(0x5304, int, PKCS7_final , PKCS7 *, ___p7, a0, BIO *, ___data, a1, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_base_id(___pkey) \
	LP1(0x530a, int, EVP_PKEY_base_id , const EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_set_signer_cert(___ctx, ___signer) \
	LP2(0x5310, int, TS_RESP_CTX_set_signer_cert , TS_RESP_CTX *, ___ctx, a0, X509 *, ___signer, a1,\
	, AMISSL_BASE_NAME)

#define TS_REQ_set_msg_imprint(___a, ___msg_imprint) \
	LP2(0x5316, int, TS_REQ_set_msg_imprint , TS_REQ *, ___a, a0, TS_MSG_IMPRINT *, ___msg_imprint, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_ctrl(___ctx, ___keytype, ___optype, ___cmd, ___p1, ___p2) \
	LP6(0x531c, int, EVP_PKEY_CTX_ctrl , EVP_PKEY_CTX *, ___ctx, a0, int, ___keytype, d0, int, ___optype, d1, int, ___cmd, d2, int, ___p1, d3, void *, ___p2, a1,\
	, AMISSL_BASE_NAME)

#define TS_CONF_set_digests(___conf, ___section, ___ctx) \
	LP3(0x5322, int, TS_CONF_set_digests , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define d2i_TS_MSG_IMPRINT(___a, ___pp, ___length) \
	LP3(0x5328, TS_MSG_IMPRINT *, d2i_TS_MSG_IMPRINT , TS_MSG_IMPRINT **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_set_ctrl(___pmeth, ___ctrl, ___ctrl_str) \
	LP3NRFP(0x532e, EVP_PKEY_meth_set_ctrl , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___ctrl, a1, __fpt, ___ctrl_str, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx,int type,int p1,void *p2))

#define TS_REQ_get_ext_by_NID(___a, ___nid, ___lastpos) \
	LP3(0x5334, int, TS_REQ_get_ext_by_NID , TS_REQ *, ___a, a0, int, ___nid, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define PKCS5_pbe_set0_algor(___algor, ___alg, ___iter, ___salt, ___saltlen) \
	LP5(0x533a, int, PKCS5_pbe_set0_algor , X509_ALGOR *, ___algor, a0, int, ___alg, d0, int, ___iter, d1, const unsigned char *, ___salt, a1, int, ___saltlen, d2,\
	, AMISSL_BASE_NAME)

#define BN_BLINDING_thread_id(___b) \
	LP1(0x5340, CRYPTO_THREADID *, BN_BLINDING_thread_id , BN_BLINDING *, ___b, a0,\
	, AMISSL_BASE_NAME)

#define TS_ACCURACY_new() \
	LP0(0x5346, TS_ACCURACY *, TS_ACCURACY_new ,\
	, AMISSL_BASE_NAME)

#define X509_CRL_METHOD_free(___m) \
	LP1NR(0x534c, X509_CRL_METHOD_free , X509_CRL_METHOD *, ___m, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_PCTX_get_nm_flags(___p) \
	LP1(0x5352, unsigned long, ASN1_PCTX_get_nm_flags , ASN1_PCTX *, ___p, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_set_sign(___pmeth, ___sign_init, ___sign) \
	LP3NRFP(0x5358, EVP_PKEY_meth_set_sign , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___sign_init, a1, __fpt, ___sign, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx))

#define CRYPTO_THREADID_current(___id) \
	LP1NR(0x535e, CRYPTO_THREADID_current , CRYPTO_THREADID *, ___id, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_decrypt_init(___ctx) \
	LP1(0x5364, int, EVP_PKEY_decrypt_init , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_X509_free(___a) \
	LP1NR(0x536a, NETSCAPE_X509_free , NETSCAPE_X509 *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define i2b_PVK_bio(___out, ___pk, ___enclevel, ___cb, ___u) \
	LP5(0x5370, int, i2b_PVK_bio , BIO *, ___out, a0, EVP_PKEY *, ___pk, a1, int, ___enclevel, d0, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_print_private(___out, ___pkey, ___indent, ___pctx) \
	LP4(0x5376, int, EVP_PKEY_print_private , BIO *, ___out, a0, const EVP_PKEY *, ___pkey, a1, int, ___indent, d0, ASN1_PCTX *, ___pctx, a2,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAME_get0_value(___a, ___ptype) \
	LP2(0x537c, void *, GENERAL_NAME_get0_value , GENERAL_NAME *, ___a, a0, int *, ___ptype, a1,\
	, AMISSL_BASE_NAME)

#define b2i_PVK_bio(___in, ___cb, ___u) \
	LP3(0x5382, EVP_PKEY *, b2i_PVK_bio , BIO *, ___in, a0, pem_password_cb *, ___cb, a1, void *, ___u, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_UTCTIME_adj(___s, ___t, ___offset_day, ___offset_sec) \
	LP4(0x5388, ASN1_UTCTIME *, ASN1_UTCTIME_adj , ASN1_UTCTIME *, ___s, a0, time_t, ___t, d0, int, ___offset_day, d1, int, ___offset_sec, d2,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_new() \
	LP0(0x538e, TS_TST_INFO *, TS_TST_INFO_new ,\
	, AMISSL_BASE_NAME)

#define EVP_MD_do_all_sorted(___fn, ___arg) \
	LP2NRFP(0x5394, EVP_MD_do_all_sorted , __fpt, ___fn, a0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(const EVP_MD *ciph,const char *from,const char *to,void *x))

#define TS_CONF_set_default_engine(___name) \
	LP1(0x539a, int, TS_CONF_set_default_engine , const char *, ___name, a0,\
	, AMISSL_BASE_NAME)

#define TS_ACCURACY_set_seconds(___a, ___seconds) \
	LP2(0x53a0, int, TS_ACCURACY_set_seconds , TS_ACCURACY *, ___a, a0, const ASN1_INTEGER *, ___seconds, a1,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_time(___a) \
	LP1(0x53a6, const ASN1_GENERALIZEDTIME *, TS_TST_INFO_get_time , const TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define PKCS8_pkey_get0(___ppkalg, ___pk, ___ppklen, ___pa, ___p8) \
	LP5(0x53ac, int, PKCS8_pkey_get0 , ASN1_OBJECT **, ___ppkalg, a0, const unsigned char **, ___pk, a1, int *, ___ppklen, a2, X509_ALGOR **, ___pa, a3, PKCS8_PRIV_KEY_INFO *, ___p8, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_get0(___idx) \
	LP1(0x53b2, const EVP_PKEY_ASN1_METHOD *, EVP_PKEY_asn1_get0 , int, ___idx, d0,\
	, AMISSL_BASE_NAME)

#define OBJ_add_sigid(___signid, ___dig_id, ___pkey_id) \
	LP3(0x53b8, int, OBJ_add_sigid , int, ___signid, d0, int, ___dig_id, d1, int, ___pkey_id, d2,\
	, AMISSL_BASE_NAME)

#define PKCS7_SIGNER_INFO_sign(___si) \
	LP1(0x53be, int, PKCS7_SIGNER_INFO_sign , PKCS7_SIGNER_INFO *, ___si, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_paramgen_init(___ctx) \
	LP1(0x53c4, int, EVP_PKEY_paramgen_init , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_sign(___ctx, ___sig, ___siglen, ___tbs, ___tbslen) \
	LP5(0x53ca, int, EVP_PKEY_sign , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___sig, a1, size_t *, ___siglen, d0, const unsigned char *, ___tbs, a2, size_t, ___tbslen, d1,\
	, AMISSL_BASE_NAME)

#define OBJ_sigid_free() \
	LP0NR(0x53d0, OBJ_sigid_free ,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_set_init(___pmeth, ___init) \
	LP2NRFP(0x53d6, EVP_PKEY_meth_set_init , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___init, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx))

#define d2i_ESS_ISSUER_SERIAL(___a, ___pp, ___length) \
	LP3(0x53dc, ESS_ISSUER_SERIAL *, d2i_ESS_ISSUER_SERIAL , ESS_ISSUER_SERIAL **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define ISSUING_DIST_POINT_new() \
	LP0(0x53e2, ISSUING_DIST_POINT *, ISSUING_DIST_POINT_new ,\
	, AMISSL_BASE_NAME)

#define ASN1_TIME_adj(___s, ___t, ___offset_day, ___offset_sec) \
	LP4(0x53e8, ASN1_TIME *, ASN1_TIME_adj , ASN1_TIME *, ___s, a0, time_t, ___t, d0, int, ___offset_day, d1, int, ___offset_sec, d2,\
	, AMISSL_BASE_NAME)

#define TS_OBJ_print_bio(___bio, ___obj) \
	LP2(0x53ee, int, TS_OBJ_print_bio , BIO *, ___bio, a0, const ASN1_OBJECT *, ___obj, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_set_verify_recover(___pmeth, ___verify_recover_init, ___verify_recover) \
	LP3NRFP(0x53f4, EVP_PKEY_meth_set_verify_recover , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___verify_recover_init, a1, __fpt, ___verify_recover, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx))

#define TS_RESP_get_status_info(___g) \
	LP1(0x53fa, TS_STATUS_INFO *, TS_RESP_get_status_info , TS_RESP *, ___g, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_set_cb(___ctx, ___cb) \
	LP2NR(0x5400, EVP_PKEY_CTX_set_cb , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY_gen_cb *, ___cb, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_to_TS_TST_INFO(___token) \
	LP1(0x5406, TS_TST_INFO *, PKCS7_to_TS_TST_INFO , PKCS7 *, ___token, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_PCTX_get_oid_flags(___p) \
	LP1(0x540c, unsigned long, ASN1_PCTX_get_oid_flags , ASN1_PCTX *, ___p, a0,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_add_ext(___a, ___ex, ___loc) \
	LP3(0x5412, int, TS_TST_INFO_add_ext , TS_TST_INFO *, ___a, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_set_derive(___pmeth, ___derive_init, ___derive) \
	LP3NRFP(0x5418, EVP_PKEY_meth_set_derive , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___derive_init, a1, __fpt, ___derive, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx))

#define i2d_TS_MSG_IMPRINT_bio(___fp, ___a) \
	LP2(0x5424, int, i2d_TS_MSG_IMPRINT_bio , BIO *, ___fp, a0, TS_MSG_IMPRINT *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_set_accuracy(___ctx, ___secs, ___millis, ___micros) \
	LP4(0x542a, int, TS_RESP_CTX_set_accuracy , TS_RESP_CTX *, ___ctx, a0, int, ___secs, d0, int, ___millis, d1, int, ___micros, d2,\
	, AMISSL_BASE_NAME)

#define TS_REQ_set_nonce(___a, ___nonce) \
	LP2(0x5430, int, TS_REQ_set_nonce , TS_REQ *, ___a, a0, const ASN1_INTEGER *, ___nonce, a1,\
	, AMISSL_BASE_NAME)

#define ESS_CERT_ID_new() \
	LP0(0x5436, ESS_CERT_ID *, ESS_CERT_ID_new ,\
	, AMISSL_BASE_NAME)

#define TS_REQ_get_ext_count(___a) \
	LP1(0x543c, int, TS_REQ_get_ext_count , TS_REQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define BUF_reverse(___out, ___in, ___siz) \
	LP3NR(0x5442, BUF_reverse , unsigned char *, ___out, a0, const unsigned char *, ___in, a1, size_t, ___siz, d0,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_print_bio(___bio, ___a) \
	LP2(0x5448, int, TS_TST_INFO_print_bio , BIO *, ___bio, a0, TS_TST_INFO *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define d2i_ISSUING_DIST_POINT(___a, ___pp, ___length) \
	LP3(0x544e, ISSUING_DIST_POINT *, d2i_ISSUING_DIST_POINT , ISSUING_DIST_POINT **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define i2b_PrivateKey_bio(___out, ___pk) \
	LP2(0x5454, int, i2b_PrivateKey_bio , BIO *, ___out, a0, EVP_PKEY *, ___pk, a1,\
	, AMISSL_BASE_NAME)

#define i2d_TS_RESP(___a, ___pp) \
	LP2(0x545a, int, i2d_TS_RESP , const TS_RESP *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define b2i_PublicKey(___in, ___length) \
	LP2(0x5460, EVP_PKEY *, b2i_PublicKey , const unsigned char **, ___in, a0, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define TS_VERIFY_CTX_cleanup(___ctx) \
	LP1NR(0x5466, TS_VERIFY_CTX_cleanup , TS_VERIFY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define TS_STATUS_INFO_free(___a) \
	LP1NR(0x546c, TS_STATUS_INFO_free , TS_STATUS_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_verify_token(___ctx, ___token) \
	LP2(0x5472, int, TS_RESP_verify_token , TS_VERIFY_CTX *, ___ctx, a0, PKCS7 *, ___token, a1,\
	, AMISSL_BASE_NAME)

#define OBJ_bsearch_ex_(___key, ___base, ___num, ___size, ___cmp, ___flags) \
	LP6FP(0x5478, const void *, OBJ_bsearch_ex_ , const void *, ___key, a0, const void *, ___base, a1, int, ___num, d0, int, ___size, d1, __fpt, ___cmp, a2, int, ___flags, d2,\
	, AMISSL_BASE_NAME, int (*__fpt)(const void *,const void *))

#define ASN1_bn_print(___bp, ___number, ___num, ___buf, ___off) \
	LP5(0x547e, int, ASN1_bn_print , BIO *, ___bp, a0, const char *, ___number, a1, const BIGNUM *, ___num, a2, unsigned char *, ___buf, a3, int, ___off, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_get_count() \
	LP0(0x5484, int, EVP_PKEY_asn1_get_count ,\
	, AMISSL_BASE_NAME)

#define ASN1_PCTX_set_nm_flags(___p, ___flags) \
	LP2NR(0x548a, ASN1_PCTX_set_nm_flags , ASN1_PCTX *, ___p, a0, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define EVP_DigestVerifyInit(___ctx, ___pctx, ___type, ___e, ___pkey) \
	LP5(0x5490, int, EVP_DigestVerifyInit , EVP_MD_CTX *, ___ctx, a0, EVP_PKEY_CTX **, ___pctx, a1, const EVP_MD *, ___type, a2, ENGINE *, ___e, a3, EVP_PKEY *, ___pkey, d0,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_policy_id(___a) \
	LP1(0x5496, ASN1_OBJECT *, TS_TST_INFO_get_policy_id , TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_get_cert_req(___a) \
	LP1(0x549c, int, TS_REQ_get_cert_req , const TS_REQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_CRL_set_meth_data(___crl, ___dat) \
	LP2NR(0x54a2, X509_CRL_set_meth_data , X509_CRL *, ___crl, a0, void *, ___dat, a1,\
	, AMISSL_BASE_NAME)

#define PKCS8_pkey_set0(___priv, ___aobj, ___version, ___ptype, ___pval, ___penc, ___penclen) \
	LP7(0x54a8, int, PKCS8_pkey_set0 , PKCS8_PRIV_KEY_INFO *, ___priv, a0, ASN1_OBJECT *, ___aobj, a1, int, ___version, d0, int, ___ptype, d1, void *, ___pval, a2, unsigned char *, ___penc, a3, int, ___penclen, d2,\
	, AMISSL_BASE_NAME)

#define ASN1_STRING_copy(___dst, ___str) \
	LP2(0x54ae, int, ASN1_STRING_copy , ASN1_STRING *, ___dst, a0, const ASN1_STRING *, ___str, a1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_match(___a, ___b) \
	LP2(0x54ba, int, X509_CRL_match , const X509_CRL *, ___a, a0, const X509_CRL *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_set_private(___ameth, ___priv_decode, ___priv_encode, ___priv_print) \
	LP4NRFP(0x54c0, EVP_PKEY_asn1_set_private , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___priv_decode, a1, __fpt, ___priv_encode, a2, __fpt, ___priv_print, a3,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pk,PKCS8_PRIV_KEY_INFO *p8inf))

#define TS_TST_INFO_get_ext_d2i(___a, ___nid, ___crit, ___idx) \
	LP4(0x54c6, void *, TS_TST_INFO_get_ext_d2i , TS_TST_INFO *, ___a, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_add_policy(___ctx, ___policy) \
	LP2(0x54cc, int, TS_RESP_CTX_add_policy , TS_RESP_CTX *, ___ctx, a0, ASN1_OBJECT *, ___policy, a1,\
	, AMISSL_BASE_NAME)

#define d2i_TS_RESP(___a, ___pp, ___length) \
	LP3(0x54d2, TS_RESP *, d2i_TS_RESP , TS_RESP **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define TS_CONF_load_certs(___file) \
	LP1(0x54d8, STACK_OF(X509) *, TS_CONF_load_certs , const char *, ___file, a0,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_msg_imprint(___a) \
	LP1(0x54de, TS_MSG_IMPRINT *, TS_TST_INFO_get_msg_imprint , TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define ERR_load_TS_strings() \
	LP0NR(0x54e4, ERR_load_TS_strings ,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_version(___a) \
	LP1(0x54ea, long, TS_TST_INFO_get_version , const TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_dup(___ctx) \
	LP1(0x54f0, EVP_PKEY_CTX *, EVP_PKEY_CTX_dup , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_set_verify(___pmeth, ___verify_init, ___verify) \
	LP3NRFP(0x54f6, EVP_PKEY_meth_set_verify , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___verify_init, a1, __fpt, ___verify, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx))

#define i2b_PublicKey_bio(___out, ___pk) \
	LP2(0x54fc, int, i2b_PublicKey_bio , BIO *, ___out, a0, EVP_PKEY *, ___pk, a1,\
	, AMISSL_BASE_NAME)

#define TS_CONF_set_certs(___conf, ___section, ___certs, ___ctx) \
	LP4(0x5502, int, TS_CONF_set_certs , CONF *, ___conf, a0, const char *, ___section, a1, const char *, ___certs, a2, TS_RESP_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_get0_info(___ppkey_id, ___ppkey_base_id, ___ppkey_flags, ___pinfo, ___ppem_str, ___ameth) \
	LP6(0x5508, int, EVP_PKEY_asn1_get0_info , int *, ___ppkey_id, a0, int *, ___ppkey_base_id, a1, int *, ___ppkey_flags, a2, const char **, ___pinfo, a3, const char **, ___ppem_str, d0, const EVP_PKEY_ASN1_METHOD *, ___ameth, d1,\
	, AMISSL_BASE_NAME)

#define TS_VERIFY_CTX_free(___ctx) \
	LP1NR(0x550e, TS_VERIFY_CTX_free , TS_VERIFY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_get_ext_by_critical(___a, ___crit, ___lastpos) \
	LP3(0x5514, int, TS_REQ_get_ext_by_critical , TS_REQ *, ___a, a0, int, ___crit, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_set_serial_cb(___ctx, ___cb, ___data) \
	LP3NR(0x551a, TS_RESP_CTX_set_serial_cb , TS_RESP_CTX *, ___ctx, a0, TS_serial_cb, ___cb, d0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_get_meth_data(___crl) \
	LP1(0x5520, void *, X509_CRL_get_meth_data , X509_CRL *, ___crl, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_set_time_cb(___ctx, ___cb, ___data) \
	LP3NR(0x5526, TS_RESP_CTX_set_time_cb , TS_RESP_CTX *, ___ctx, a0, TS_time_cb, ___cb, d0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define TS_MSG_IMPRINT_get_msg(___a) \
	LP1(0x552c, ASN1_OCTET_STRING *, TS_MSG_IMPRINT_get_msg , TS_MSG_IMPRINT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_ext_free(___a) \
	LP1NR(0x5532, TS_TST_INFO_ext_free , TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_get_version(___a) \
	LP1(0x5538, long, TS_REQ_get_version , const TS_REQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_add_ext(___a, ___ex, ___loc) \
	LP3(0x553e, int, TS_REQ_add_ext , TS_REQ *, ___a, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_set_app_data(___ctx, ___data) \
	LP2NR(0x5544, EVP_PKEY_CTX_set_app_data , EVP_PKEY_CTX *, ___ctx, a0, void *, ___data, a1,\
	, AMISSL_BASE_NAME)

#define OBJ_bsearch_(___key, ___base, ___num, ___size, ___cmp) \
	LP5FP(0x554a, const void *, OBJ_bsearch_ , const void *, ___key, a0, const void *, ___base, a1, int, ___num, d0, int, ___size, d1, __fpt, ___cmp, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(const void *,const void *))

#define EVP_PKEY_meth_set_verifyctx(___pmeth, ___verifyctx_init, ___verifyctx) \
	LP3NRFP(0x5550, EVP_PKEY_meth_set_verifyctx , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___verifyctx_init, a1, __fpt, ___verifyctx, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx,EVP_MD_CTX *mctx))

#define i2d_PKCS7_bio_stream(___out, ___p7, ___in, ___flags) \
	LP4(0x5556, int, i2d_PKCS7_bio_stream , BIO *, ___out, a0, PKCS7 *, ___p7, a1, BIO *, ___in, a2, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_THREADID_set_numeric(___id, ___val) \
	LP2NR(0x555c, CRYPTO_THREADID_set_numeric , CRYPTO_THREADID *, ___id, a0, unsigned long, ___val, d0,\
	, AMISSL_BASE_NAME)

#define PKCS7_sign_add_signer(___p7, ___signcert, ___pkey, ___md, ___flags) \
	LP5(0x5562, PKCS7_SIGNER_INFO *, PKCS7_sign_add_signer , PKCS7 *, ___p7, a0, X509 *, ___signcert, a1, EVP_PKEY *, ___pkey, a2, const EVP_MD *, ___md, a3, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define d2i_TS_TST_INFO_bio(___bp, ___a) \
	LP2(0x5568, TS_TST_INFO *, d2i_TS_TST_INFO_bio , BIO *, ___bp, a0, TS_TST_INFO **, ___a, a1,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_ordering(___a) \
	LP1(0x556e, int, TS_TST_INFO_get_ordering , const TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_print_bio(___bio, ___a) \
	LP2(0x5574, int, TS_RESP_print_bio , BIO *, ___bio, a0, TS_RESP *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_exts(___a) \
	LP1(0x557a, STACK_OF(X509_EXTENSION) *, TS_TST_INFO_get_exts , TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define PKCS5_pbe2_set_iv(___cipher, ___iter, ___salt, ___saltlen, ___aiv, ___prf_nid) \
	LP6(0x5580, X509_ALGOR *, PKCS5_pbe2_set_iv , const EVP_CIPHER *, ___cipher, a0, int, ___iter, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, unsigned char *, ___aiv, a2, int, ___prf_nid, d2,\
	, AMISSL_BASE_NAME)

#define b2i_PrivateKey(___in, ___length) \
	LP2(0x5586, EVP_PKEY *, b2i_PrivateKey , const unsigned char **, ___in, a0, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_get_app_data(___ctx) \
	LP1(0x558c, void *, EVP_PKEY_CTX_get_app_data , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_set_cert_req(___a, ___cert_req) \
	LP2(0x5592, int, TS_REQ_set_cert_req , TS_REQ *, ___a, a0, int, ___cert_req, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_THREADID_set_callback(___threadid_func) \
	LP1FP(0x5598, int, CRYPTO_THREADID_set_callback , __fpt, ___threadid_func, a0,\
	, AMISSL_BASE_NAME, void (*__fpt)(CRYPTO_THREADID *))

#define TS_CONF_set_serial(___conf, ___section, ___cb, ___ctx) \
	LP4(0x559e, int, TS_CONF_set_serial , CONF *, ___conf, a0, const char *, ___section, a1, TS_serial_cb, ___cb, a2, TS_RESP_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_free(___a) \
	LP1NR(0x55a4, TS_TST_INFO_free , TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_verify_response(___ctx, ___response) \
	LP2(0x55b0, int, TS_RESP_verify_response , TS_VERIFY_CTX *, ___ctx, a0, TS_RESP *, ___response, a1,\
	, AMISSL_BASE_NAME)

#define i2d_ESS_ISSUER_SERIAL(___a, ___pp) \
	LP2(0x55b6, int, i2d_ESS_ISSUER_SERIAL , const ESS_ISSUER_SERIAL *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define TS_ACCURACY_get_seconds(___a) \
	LP1(0x55bc, const ASN1_INTEGER *, TS_ACCURACY_get_seconds , const TS_ACCURACY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_do_all(___fn, ___arg) \
	LP2NRFP(0x55c2, EVP_CIPHER_do_all , __fpt, ___fn, a0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(const EVP_CIPHER *ciph,const char *from,const char *to,void *x))

#define b2i_PrivateKey_bio(___in) \
	LP1(0x55c8, EVP_PKEY *, b2i_PrivateKey_bio , BIO *, ___in, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_CERTID_dup(___a) \
	LP1(0x55ce, OCSP_CERTID *, OCSP_CERTID_dup , OCSP_CERTID *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_PUBKEY_get0_param(___ppkalg, ___pk, ___ppklen, ___pa, ___pub) \
	LP5(0x55d4, int, X509_PUBKEY_get0_param , ASN1_OBJECT **, ___ppkalg, a0, const unsigned char **, ___pk, a1, int *, ___ppklen, a2, X509_ALGOR **, ___pa, a3, X509_PUBKEY *, ___pub, d0,\
	, AMISSL_BASE_NAME)

#define TS_MSG_IMPRINT_dup(___a) \
	LP1(0x55da, TS_MSG_IMPRINT *, TS_MSG_IMPRINT_dup , TS_MSG_IMPRINT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define PKCS7_print_ctx(___out, ___x, ___indent, ___pctx) \
	LP4NR(0x55e0, PKCS7_print_ctx , BIO *, ___out, a0, PKCS7 *, ___x, a1, int, ___indent, d0, const ASN1_PCTX *, ___pctx, a2,\
	, AMISSL_BASE_NAME)

#define i2d_TS_REQ_bio(___fp, ___a) \
	LP2(0x55e6, int, i2d_TS_REQ_bio , BIO *, ___fp, a0, TS_REQ *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_set_param(___ameth, ___param_decode, ___param_encode, ___param_missing, ___param_copy, ___param_cmp, ___param_print) \
	LP7NRFP(0x55ec, EVP_PKEY_asn1_set_param , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___param_decode, a1, __fpt, ___param_encode, a2, __fpt, ___param_missing, a3, __fpt, ___param_copy, d0, __fpt, ___param_cmp, d1, __fpt, ___param_print, d2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pkey,const unsigned char **pder,int derlen))

#define EVP_PKEY_meth_set_encrypt(___pmeth, ___encrypt_init, ___encryptfn) \
	LP3NRFP(0x55f2, EVP_PKEY_meth_set_encrypt , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___encrypt_init, a1, __fpt, ___encryptfn, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx))

#define ASN1_PCTX_set_flags(___p, ___flags) \
	LP2NR(0x55f8, ASN1_PCTX_set_flags , ASN1_PCTX *, ___p, a0, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define i2d_ESS_CERT_ID(___a, ___pp) \
	LP2(0x55fe, int, i2d_ESS_CERT_ID , const ESS_CERT_ID *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define TS_VERIFY_CTX_new() \
	LP0(0x5604, TS_VERIFY_CTX *, TS_VERIFY_CTX_new ,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_set_extension_cb(___ctx, ___cb, ___data) \
	LP3NR(0x560a, TS_RESP_CTX_set_extension_cb , TS_RESP_CTX *, ___ctx, a0, TS_extension_cb, ___cb, a1, void *, ___data, a2,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_set_status_info_cond(___ctx, ___status, ___text) \
	LP3(0x5610, int, TS_RESP_CTX_set_status_info_cond , TS_RESP_CTX *, ___ctx, a0, int, ___status, d0, const char *, ___text, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_verify(___ctx, ___sig, ___siglen, ___tbs, ___tbslen) \
	LP5(0x5616, int, EVP_PKEY_verify , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___sig, a1, size_t, ___siglen, d0, const unsigned char *, ___tbs, a2, size_t, ___tbslen, d1,\
	, AMISSL_BASE_NAME)

#define X509_CRL_METHOD_new(___crl_init, ___crl_free, ___crl_lookup, ___crl_verify) \
	LP4FP(0x561c, X509_CRL_METHOD *, X509_CRL_METHOD_new , __fpt, ___crl_init, a0, __fpt, ___crl_free, a1, __fpt, ___crl_lookup, a2, __fpt, ___crl_verify, a3,\
	, AMISSL_BASE_NAME, int (*__fpt)(X509_CRL *crl))

#define EVP_DigestSignFinal(___ctx, ___sigret, ___siglen) \
	LP3(0x5622, int, EVP_DigestSignFinal , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___sigret, a1, size_t *, ___siglen, a2,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_set_def_policy(___ctx, ___def_policy) \
	LP2(0x5628, int, TS_RESP_CTX_set_def_policy , TS_RESP_CTX *, ___ctx, a0, ASN1_OBJECT *, ___def_policy, a1,\
	, AMISSL_BASE_NAME)

#define TS_RESP_create_response(___ctx, ___req_bio) \
	LP2(0x562e, TS_RESP *, TS_RESP_create_response , TS_RESP_CTX *, ___ctx, a0, BIO *, ___req_bio, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_SIGNER_INFO_get0_algs(___si, ___pk, ___pdig, ___psig) \
	LP4NR(0x5634, PKCS7_SIGNER_INFO_get0_algs , PKCS7_SIGNER_INFO *, ___si, a0, EVP_PKEY **, ___pk, a1, X509_ALGOR **, ___pdig, a2, X509_ALGOR **, ___psig, a3,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_nonce(___a) \
	LP1(0x563a, const ASN1_INTEGER *, TS_TST_INFO_get_nonce , const TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_decrypt_old(___dec_key, ___enc_key, ___enc_key_len, ___private_key) \
	LP4(0x5640, int, EVP_PKEY_decrypt_old , unsigned char *, ___dec_key, a0, const unsigned char *, ___enc_key, a1, int, ___enc_key_len, d0, EVP_PKEY *, ___private_key, a2,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_set_policy_id(___a, ___policy_id) \
	LP2(0x5646, int, TS_TST_INFO_set_policy_id , TS_TST_INFO *, ___a, a0, ASN1_OBJECT *, ___policy_id, a1,\
	, AMISSL_BASE_NAME)

#define TS_CONF_set_ess_cert_id_chain(___conf, ___section, ___ctx) \
	LP3(0x564c, int, TS_CONF_set_ess_cert_id_chain , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_get0_pkey(___ctx) \
	LP1(0x5652, EVP_PKEY *, EVP_PKEY_CTX_get0_pkey , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define d2i_TS_REQ(___a, ___pp, ___length) \
	LP3(0x5658, TS_REQ *, d2i_TS_REQ , TS_REQ **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_find_str(___pe, ___str, ___len) \
	LP3(0x565e, const EVP_PKEY_ASN1_METHOD *, EVP_PKEY_asn1_find_str , ENGINE **, ___pe, a0, const char *, ___str, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define BIO_f_asn1() \
	LP0(0x5664, BIO_METHOD *, BIO_f_asn1 ,\
	, AMISSL_BASE_NAME)

#define ESS_SIGNING_CERT_new() \
	LP0(0x566a, ESS_SIGNING_CERT *, ESS_SIGNING_CERT_new ,\
	, AMISSL_BASE_NAME)

#define EVP_PBE_find(___type, ___pbe_nid, ___pcnid, ___pmnid, ___pkeygen) \
	LP5(0x5670, int, EVP_PBE_find , int, ___type, d0, int, ___pbe_nid, d1, int *, ___pcnid, a0, int *, ___pmnid, a1, EVP_PBE_KEYGEN **, ___pkeygen, a2,\
	, AMISSL_BASE_NAME)

#define X509_CRL_get0_by_cert(___crl, ___ret, ___x) \
	LP3(0x5676, int, X509_CRL_get0_by_cert , X509_CRL *, ___crl, a0, X509_REVOKED **, ___ret, a1, X509 *, ___x, a2,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_derive(___ctx, ___key, ___keylen) \
	LP3(0x567c, int, EVP_PKEY_derive , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___key, a1, size_t *, ___keylen, a2,\
	, AMISSL_BASE_NAME)

#define i2d_TS_REQ(___a, ___pp) \
	LP2(0x5682, int, i2d_TS_REQ , const TS_REQ *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_delete_ext(___a, ___loc) \
	LP2(0x5688, X509_EXTENSION *, TS_TST_INFO_delete_ext , TS_TST_INFO *, ___a, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define ESS_ISSUER_SERIAL_free(___a) \
	LP1NR(0x568e, ESS_ISSUER_SERIAL_free , ESS_ISSUER_SERIAL *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_PCTX_set_str_flags(___p, ___flags) \
	LP2NR(0x5694, ASN1_PCTX_set_str_flags , ASN1_PCTX *, ___p, a0, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define TS_CONF_set_signer_key(___conf, ___section, ___key, ___pass, ___ctx) \
	LP5(0x569a, int, TS_CONF_set_signer_key , CONF *, ___conf, a0, const char *, ___section, a1, const char *, ___key, a2, const char *, ___pass, a3, TS_RESP_CTX *, ___ctx, d0,\
	, AMISSL_BASE_NAME)

#define TS_ACCURACY_get_millis(___a) \
	LP1(0x56a0, const ASN1_INTEGER *, TS_ACCURACY_get_millis , const TS_ACCURACY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_get_token(___a) \
	LP1(0x56a6, PKCS7 *, TS_RESP_get_token , TS_RESP *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_ACCURACY_dup(___a) \
	LP1(0x56ac, TS_ACCURACY *, TS_ACCURACY_dup , TS_ACCURACY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_CRL_set_default_method(___meth) \
	LP1NR(0x56b2, X509_CRL_set_default_method , const X509_CRL_METHOD *, ___meth, a0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_THREADID_hash(___id) \
	LP1(0x56b8, unsigned long, CRYPTO_THREADID_hash , const CRYPTO_THREADID *, ___id, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_free(___a) \
	LP1NR(0x56be, TS_RESP_free , TS_RESP *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define ISSUING_DIST_POINT_free(___a) \
	LP1NR(0x56c4, ISSUING_DIST_POINT_free , ISSUING_DIST_POINT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define ESS_ISSUER_SERIAL_new() \
	LP0(0x56ca, ESS_ISSUER_SERIAL *, ESS_ISSUER_SERIAL_new ,\
	, AMISSL_BASE_NAME)

#define PKCS7_add1_attrib_digest(___si, ___md, ___mdlen) \
	LP3(0x56d0, int, PKCS7_add1_attrib_digest , PKCS7_SIGNER_INFO *, ___si, a0, const unsigned char *, ___md, a1, int, ___mdlen, d0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_add_md(___ctx, ___md) \
	LP2(0x56d6, int, TS_RESP_CTX_add_md , TS_RESP_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_dup(___a) \
	LP1(0x56dc, TS_TST_INFO *, TS_TST_INFO_dup , TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_Parameters(___bp, ___x) \
	LP2(0x56e2, int, PEM_write_bio_Parameters , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_accuracy(___a) \
	LP1(0x56e8, TS_ACCURACY *, TS_TST_INFO_get_accuracy , TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define X509_CRL_get0_by_serial(___crl, ___ret, ___serial) \
	LP3(0x56ee, int, X509_CRL_get0_by_serial , X509_CRL *, ___crl, a0, X509_REVOKED **, ___ret, a1, ASN1_INTEGER *, ___serial, a2,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_set_version(___a, ___version) \
	LP2(0x56f4, int, TS_TST_INFO_set_version , TS_TST_INFO *, ___a, a0, long, ___version, d0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_get_tst_info(___ctx) \
	LP1(0x56fa, TS_TST_INFO *, TS_RESP_CTX_get_tst_info , TS_RESP_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_verify_signature(___token, ___certs, ___store, ___signer_out) \
	LP4(0x5700, int, TS_RESP_verify_signature , PKCS7 *, ___token, a0, STACK_OF(X509) *, ___certs, a1, X509_STORE *, ___store, a2, X509 **, ___signer_out, a3,\
	, AMISSL_BASE_NAME)

#define CRYPTO_THREADID_get_callback() \
	LP0FR(0x5706, __fpr, CRYPTO_THREADID_get_callback ,\
	, AMISSL_BASE_NAME, void (*__fpr)(CRYPTO_THREADID *))

#define TS_TST_INFO_get_tsa(___a) \
	LP1(0x570c, GENERAL_NAME *, TS_TST_INFO_get_tsa , TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_STATUS_INFO_new() \
	LP0(0x5712, TS_STATUS_INFO *, TS_STATUS_INFO_new ,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_get_cb(___ctx) \
	LP1FR(0x5718, __fpr, EVP_PKEY_CTX_get_cb , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME, int (*__fpr)(EVP_PKEY_CTX *ctx))

#define TS_REQ_get_ext_d2i(___a, ___nid, ___crit, ___idx) \
	LP4(0x571e, void *, TS_REQ_get_ext_d2i , TS_REQ *, ___a, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, d1,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAME_set0_othername(___gen, ___oid, ___value) \
	LP3(0x5724, int, GENERAL_NAME_set0_othername , GENERAL_NAME *, ___gen, a0, ASN1_OBJECT *, ___oid, a1, ASN1_TYPE *, ___value, a2,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_ext_count(___a) \
	LP1(0x572a, int, TS_TST_INFO_get_ext_count , TS_TST_INFO *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_get_request(___ctx) \
	LP1(0x5730, TS_REQ *, TS_RESP_CTX_get_request , TS_RESP_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define i2d_NETSCAPE_X509(___a, ___out) \
	LP2(0x5736, int, i2d_NETSCAPE_X509 , NETSCAPE_X509 *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_set_signctx(___pmeth, ___signctx_init, ___signctx) \
	LP3NRFP(0x573c, EVP_PKEY_meth_set_signctx , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___signctx_init, a1, __fpt, ___signctx, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx,EVP_MD_CTX *mctx))

#define EVP_PKEY_asn1_copy(___dst, ___src) \
	LP2NR(0x5742, EVP_PKEY_asn1_copy , EVP_PKEY_ASN1_METHOD *, ___dst, a0, const EVP_PKEY_ASN1_METHOD *, ___src, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_TYPE_cmp(___a, ___b) \
	LP2(0x5748, int, ASN1_TYPE_cmp , ASN1_TYPE *, ___a, a0, ASN1_TYPE *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_do_all_sorted(___fn, ___arg) \
	LP2NRFP(0x574e, EVP_CIPHER_do_all_sorted , __fpt, ___fn, a0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(const EVP_CIPHER *ciph,const char *from,const char *to,void *x))

#define EVP_PKEY_CTX_free(___ctx) \
	LP1NR(0x5754, EVP_PKEY_CTX_free , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_get1_certs(___st, ___nm) \
	LP2(0x5760, STACK_OF(X509) *, X509_STORE_get1_certs , X509_STORE_CTX *, ___st, a0, X509_NAME *, ___nm, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_get_operation(___ctx) \
	LP1(0x5766, int, EVP_PKEY_CTX_get_operation , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define d2i_ESS_SIGNING_CERT(___a, ___pp, ___length) \
	LP3(0x576c, ESS_SIGNING_CERT *, d2i_ESS_SIGNING_CERT , ESS_SIGNING_CERT **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define TS_CONF_set_ordering(___conf, ___section, ___ctx) \
	LP3(0x5772, int, TS_CONF_set_ordering , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define EVP_PBE_alg_add_type(___pbe_type, ___pbe_nid, ___cipher_nid, ___md_nid, ___keygen) \
	LP5(0x5778, int, EVP_PBE_alg_add_type , int, ___pbe_type, d0, int, ___pbe_nid, d1, int, ___cipher_nid, d2, int, ___md_nid, d3, EVP_PBE_KEYGEN *, ___keygen, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_set_version(___a, ___version) \
	LP2(0x577e, int, TS_REQ_set_version , TS_REQ *, ___a, a0, long, ___version, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_get0(___pkey) \
	LP1(0x5784, void *, EVP_PKEY_get0 , EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define BIO_asn1_set_suffix(___b, ___suffix, ___suffix_free) \
	LP3(0x578a, int, BIO_asn1_set_suffix , BIO *, ___b, a0, asn1_ps_func *, ___suffix, a1, asn1_ps_func *, ___suffix_free, a2,\
	, AMISSL_BASE_NAME)

#define i2d_TS_STATUS_INFO(___a, ___pp) \
	LP2(0x5790, int, i2d_TS_STATUS_INFO , const TS_STATUS_INFO *, ___a, a0, unsigned char **, ___pp, a1,\
	, AMISSL_BASE_NAME)

#define EVP_MD_do_all(___fn, ___arg) \
	LP2NRFP(0x5796, EVP_MD_do_all , __fpt, ___fn, a0, void *, ___arg, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(const EVP_MD *ciph,const char *from,const char *to,void *x))

#define TS_TST_INFO_set_accuracy(___a, ___accuracy) \
	LP2(0x579c, int, TS_TST_INFO_set_accuracy , TS_TST_INFO *, ___a, a0, TS_ACCURACY *, ___accuracy, a1,\
	, AMISSL_BASE_NAME)

#define PKCS7_add_attrib_content_type(___si, ___coid) \
	LP2(0x57a2, int, PKCS7_add_attrib_content_type , PKCS7_SIGNER_INFO *, ___si, a0, ASN1_OBJECT *, ___coid, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_add0(___pmeth) \
	LP1(0x57a8, int, EVP_PKEY_meth_add0 , const EVP_PKEY_METHOD *, ___pmeth, a0,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_set_tsa(___a, ___tsa) \
	LP2(0x57ae, int, TS_TST_INFO_set_tsa , TS_TST_INFO *, ___a, a0, GENERAL_NAME *, ___tsa, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_new(___id, ___flags) \
	LP2(0x57b4, EVP_PKEY_METHOD *, EVP_PKEY_meth_new , int, ___id, d0, int, ___flags, d1,\
	, AMISSL_BASE_NAME)

#define TS_CONF_set_accuracy(___conf, ___section, ___ctx) \
	LP3(0x57ba, int, TS_CONF_set_accuracy , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_PCTX_set_oid_flags(___p, ___flags) \
	LP2NR(0x57c0, ASN1_PCTX_set_oid_flags , ASN1_PCTX *, ___p, a0, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define ESS_SIGNING_CERT_dup(___a) \
	LP1(0x57c6, ESS_SIGNING_CERT *, ESS_SIGNING_CERT_dup , ESS_SIGNING_CERT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define d2i_TS_REQ_bio(___fp, ___a) \
	LP2(0x57cc, TS_REQ *, d2i_TS_REQ_bio , BIO *, ___fp, a0, TS_REQ **, ___a, a1,\
	, AMISSL_BASE_NAME)

#define X509_time_adj_ex(___s, ___offset_day, ___offset_sec, ___t) \
	LP4(0x57d2, ASN1_TIME *, X509_time_adj_ex , ASN1_TIME *, ___s, a0, int, ___offset_day, d0, long, ___offset_sec, d1, time_t *, ___t, a1,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_add_flags(___ctx, ___flags) \
	LP2NR(0x57d8, TS_RESP_CTX_add_flags , TS_RESP_CTX *, ___ctx, a0, int, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define d2i_TS_STATUS_INFO(___a, ___pp, ___length) \
	LP3(0x57de, TS_STATUS_INFO *, d2i_TS_STATUS_INFO , TS_STATUS_INFO **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define TS_MSG_IMPRINT_set_msg(___a, ___d, ___len) \
	LP3(0x57e4, int, TS_MSG_IMPRINT_set_msg , TS_MSG_IMPRINT *, ___a, a0, unsigned char *, ___d, a1, int, ___len, d0,\
	, AMISSL_BASE_NAME)

#define BIO_asn1_get_suffix(___b, ___psuffix, ___psuffix_free) \
	LP3(0x57ea, int, BIO_asn1_get_suffix , BIO *, ___b, a0, asn1_ps_func **, ___psuffix, a1, asn1_ps_func **, ___psuffix_free, a2,\
	, AMISSL_BASE_NAME)

#define TS_REQ_free(___a) \
	LP1NR(0x57f0, TS_REQ_free , TS_REQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_free(___pmeth) \
	LP1NR(0x57f6, EVP_PKEY_meth_free , EVP_PKEY_METHOD *, ___pmeth, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_get_exts(___a) \
	LP1(0x57fc, STACK_OF(X509_EXTENSION) *, TS_REQ_get_exts , TS_REQ *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_set_clock_precision_digits(___ctx, ___clock_precision_digits) \
	LP2(0x5802, int, TS_RESP_CTX_set_clock_precision_digits , TS_RESP_CTX *, ___ctx, a0, unsigned, ___clock_precision_digits, d0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_add_failure_info(___ctx, ___failure) \
	LP2(0x5808, int, TS_RESP_CTX_add_failure_info , TS_RESP_CTX *, ___ctx, a0, int, ___failure, d0,\
	, AMISSL_BASE_NAME)

#define i2d_TS_RESP_bio(___fp, ___a) \
	LP2(0x580e, int, i2d_TS_RESP_bio , BIO *, ___fp, a0, TS_RESP *, ___a, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_get0_peerkey(___ctx) \
	LP1(0x5814, EVP_PKEY *, EVP_PKEY_CTX_get0_peerkey , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_new() \
	LP0(0x581a, TS_REQ *, TS_REQ_new ,\
	, AMISSL_BASE_NAME)

#define TS_MSG_IMPRINT_new() \
	LP0(0x5820, TS_MSG_IMPRINT *, TS_MSG_IMPRINT_new ,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_find(___type) \
	LP1(0x5826, const EVP_PKEY_METHOD *, EVP_PKEY_meth_find , int, ___type, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_id(___pkey) \
	LP1(0x582c, int, EVP_PKEY_id , const EVP_PKEY *, ___pkey, a0,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_set_serial(___a, ___serial) \
	LP2(0x5832, int, TS_TST_INFO_set_serial , TS_TST_INFO *, ___a, a0, const ASN1_INTEGER *, ___serial, a1,\
	, AMISSL_BASE_NAME)

#define a2i_GENERAL_NAME(___out, ___method, ___ctx, ___gen_type, ___value, ___is_nc) \
	LP6(0x5838, GENERAL_NAME *, a2i_GENERAL_NAME , GENERAL_NAME *, ___out, a0, const X509V3_EXT_METHOD *, ___method, a1, X509V3_CTX *, ___ctx, a2, int, ___gen_type, d0, char *, ___value, a3, int, ___is_nc, d1,\
	, AMISSL_BASE_NAME)

#define TS_CONF_set_crypto_device(___conf, ___section, ___device) \
	LP3(0x583e, int, TS_CONF_set_crypto_device , CONF *, ___conf, a0, const char *, ___section, a1, const char *, ___device, a2,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_verify_init(___ctx) \
	LP1(0x5844, int, EVP_PKEY_verify_init , EVP_PKEY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define TS_CONF_set_policies(___conf, ___section, ___ctx) \
	LP3(0x584a, int, TS_CONF_set_policies , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define ASN1_PCTX_new() \
	LP0(0x5850, ASN1_PCTX *, ASN1_PCTX_new ,\
	, AMISSL_BASE_NAME)

#define ESS_CERT_ID_free(___a) \
	LP1NR(0x5856, ESS_CERT_ID_free , ESS_CERT_ID *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_MSG_IMPRINT_free(___a) \
	LP1NR(0x585c, TS_MSG_IMPRINT_free , TS_MSG_IMPRINT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_VERIFY_CTX_init(___ctx) \
	LP1NR(0x5862, TS_VERIFY_CTX_init , TS_VERIFY_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define PKCS7_stream(___boundary, ___p7) \
	LP2(0x5868, int, PKCS7_stream , unsigned char ***, ___boundary, a0, PKCS7 *, ___p7, a1,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_set_certs(___ctx, ___certs) \
	LP2(0x586e, int, TS_RESP_CTX_set_certs , TS_RESP_CTX *, ___ctx, a0, STACK_OF(X509) *, ___certs, a1,\
	, AMISSL_BASE_NAME)

#define TS_CONF_set_def_policy(___conf, ___section, ___policy, ___ctx) \
	LP4(0x5874, int, TS_CONF_set_def_policy , CONF *, ___conf, a0, const char *, ___section, a1, const char *, ___policy, a2, TS_RESP_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define ASN1_GENERALIZEDTIME_adj(___s, ___t, ___offset_day, ___offset_sec) \
	LP4(0x587a, ASN1_GENERALIZEDTIME *, ASN1_GENERALIZEDTIME_adj , ASN1_GENERALIZEDTIME *, ___s, a0, time_t, ___t, d0, int, ___offset_day, d1, long, ___offset_sec, d2,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_X509_new() \
	LP0(0x5880, NETSCAPE_X509 *, NETSCAPE_X509_new ,\
	, AMISSL_BASE_NAME)

#define TS_ACCURACY_free(___a) \
	LP1NR(0x5886, TS_ACCURACY_free , TS_ACCURACY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_get_tst_info(___a) \
	LP1(0x588c, TS_TST_INFO *, TS_RESP_get_tst_info , TS_RESP *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_derive_set_peer(___ctx, ___peer) \
	LP2(0x5892, int, EVP_PKEY_derive_set_peer , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY *, ___peer, a1,\
	, AMISSL_BASE_NAME)

#define PEM_read_bio_Parameters(___bp, ___x) \
	LP2(0x5898, EVP_PKEY *, PEM_read_bio_Parameters , BIO *, ___bp, a0, EVP_PKEY **, ___x, a1,\
	, AMISSL_BASE_NAME)

#define TS_CONF_set_clock_precision_digits(___conf, ___section, ___ctx) \
	LP3(0x589e, int, TS_CONF_set_clock_precision_digits , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
	, AMISSL_BASE_NAME)

#define ESS_ISSUER_SERIAL_dup(___a) \
	LP1(0x58a4, ESS_ISSUER_SERIAL *, ESS_ISSUER_SERIAL_dup , ESS_ISSUER_SERIAL *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_ACCURACY_get_micros(___a) \
	LP1(0x58aa, const ASN1_INTEGER *, TS_ACCURACY_get_micros , const TS_ACCURACY *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_PCTX_get_str_flags(___p) \
	LP1(0x58b0, unsigned long, ASN1_PCTX_get_str_flags , ASN1_PCTX *, ___p, a0,\
	, AMISSL_BASE_NAME)

#define NAME_CONSTRAINTS_check(___x, ___nc) \
	LP2(0x58b6, int, NAME_CONSTRAINTS_check , X509 *, ___x, a0, NAME_CONSTRAINTS *, ___nc, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_BIT_STRING_check(___a, ___flags, ___flags_len) \
	LP3(0x58bc, int, ASN1_BIT_STRING_check , ASN1_BIT_STRING *, ___a, a0, unsigned char *, ___flags, a1, int, ___flags_len, d0,\
	, AMISSL_BASE_NAME)

#define X509_check_akid(___issuer, ___akid) \
	LP2(0x58c2, int, X509_check_akid , X509 *, ___issuer, a0, AUTHORITY_KEYID *, ___akid, a1,\
	, AMISSL_BASE_NAME)

#define ASN1_PCTX_free(___p) \
	LP1NR(0x58c8, ASN1_PCTX_free , ASN1_PCTX *, ___p, a0,\
	, AMISSL_BASE_NAME)

#define PEM_write_bio_ASN1_stream(___out, ___val, ___in, ___flags, ___hdr, ___it) \
	LP6(0x58ce, int, PEM_write_bio_ASN1_stream , BIO *, ___out, a0, ASN1_VALUE *, ___val, a1, BIO *, ___in, a2, int, ___flags, d0, const char *, ___hdr, a3, const ASN1_ITEM *, ___it, d1,\
	, AMISSL_BASE_NAME)

#define i2d_ASN1_bio_stream(___out, ___val, ___in, ___flags, ___it) \
	LP5(0x58d4, int, i2d_ASN1_bio_stream , BIO *, ___out, a0, ASN1_VALUE *, ___val, a1, BIO *, ___in, a2, int, ___flags, d0, const ASN1_ITEM *, ___it, a3,\
	, AMISSL_BASE_NAME)

#define TS_X509_ALGOR_print_bio(___bio, ___alg) \
	LP2(0x58da, int, TS_X509_ALGOR_print_bio , BIO *, ___bio, a0, const X509_ALGOR *, ___alg, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_set_cleanup(___pmeth, ___cleanup) \
	LP2NRFP(0x58e0, EVP_PKEY_meth_set_cleanup , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___cleanup, a1,\
	, AMISSL_BASE_NAME, void (*__fpt)(EVP_PKEY_CTX *ctx))

#define EVP_PKEY_asn1_free(___ameth) \
	LP1NR(0x58e6, EVP_PKEY_asn1_free , EVP_PKEY_ASN1_METHOD *, ___ameth, a0,\
	, AMISSL_BASE_NAME)

#define ESS_SIGNING_CERT_free(___a) \
	LP1NR(0x58ec, ESS_SIGNING_CERT_free , ESS_SIGNING_CERT *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_set_msg_imprint(___a, ___msg_imprint) \
	LP2(0x58f2, int, TS_TST_INFO_set_msg_imprint , TS_TST_INFO *, ___a, a0, TS_MSG_IMPRINT *, ___msg_imprint, a1,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAME_cmp(___a, ___b) \
	LP2(0x58f8, int, GENERAL_NAME_cmp , GENERAL_NAME *, ___a, a0, GENERAL_NAME *, ___b, a1,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_SET_ANY(___a, ___pp, ___length) \
	LP3(0x58fe, ASN1_SEQUENCE_ANY *, d2i_ASN1_SET_ANY , ASN1_SEQUENCE_ANY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define d2i_ASN1_SEQUENCE_ANY(___a, ___pp, ___length) \
	LP3(0x590a, ASN1_SEQUENCE_ANY *, d2i_ASN1_SEQUENCE_ANY , ASN1_SEQUENCE_ANY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define GENERAL_NAME_get0_otherName(___gen, ___poid, ___pvalue) \
	LP3(0x5910, int, GENERAL_NAME_get0_otherName , GENERAL_NAME *, ___gen, a0, ASN1_OBJECT **, ___poid, a1, ASN1_TYPE **, ___pvalue, a2,\
	, AMISSL_BASE_NAME)

#define d2i_ESS_CERT_ID(___a, ___pp, ___length) \
	LP3(0x5916, ESS_CERT_ID *, d2i_ESS_CERT_ID , ESS_CERT_ID **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define OBJ_find_sigid_algs(___signid, ___pdig_nid, ___ppkey_nid) \
	LP3(0x591c, int, OBJ_find_sigid_algs , int, ___signid, d0, int *, ___pdig_nid, a0, int *, ___ppkey_nid, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_set_keygen(___pmeth, ___keygen_init, ___keygen) \
	LP3NRFP(0x5922, EVP_PKEY_meth_set_keygen , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___keygen_init, a1, __fpt, ___keygen, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx))

#define PKCS5_PBKDF2_HMAC(___pass, ___passlen, ___salt, ___saltlen, ___iter, ___digest, ___keylen, ___out) \
	LP8(0x5928, int, PKCS5_PBKDF2_HMAC , const char *, ___pass, a0, int, ___passlen, d0, const unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___iter, d2, const EVP_MD *, ___digest, a2, int, ___keylen, d3, unsigned char *, ___out, a3,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_paramgen(___ctx, ___ppkey) \
	LP2(0x592e, int, EVP_PKEY_paramgen , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY **, ___ppkey, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_set_paramgen(___pmeth, ___paramgen_init, ___paramgen) \
	LP3NRFP(0x5934, EVP_PKEY_meth_set_paramgen , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___paramgen_init, a1, __fpt, ___paramgen, a2,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx))

#define BIO_new_PKCS7(___out, ___p7) \
	LP2(0x593a, BIO *, BIO_new_PKCS7 , BIO *, ___out, a0, PKCS7 *, ___p7, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_verify_recover(___ctx, ___rout, ___routlen, ___sig, ___siglen) \
	LP5(0x5940, int, EVP_PKEY_verify_recover , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___rout, a1, size_t *, ___routlen, a2, const unsigned char *, ___sig, a3, size_t, ___siglen, d0,\
	, AMISSL_BASE_NAME)

#define TS_ext_print_bio(___bio, ___extensions) \
	LP2(0x5946, int, TS_ext_print_bio , BIO *, ___bio, a0, STACK_OF(X509_EXTENSION) *, ___extensions, a1,\
	, AMISSL_BASE_NAME)

#define TS_ASN1_INTEGER_print_bio(___bio, ___num) \
	LP2(0x594c, int, TS_ASN1_INTEGER_print_bio , BIO *, ___bio, a0, const ASN1_INTEGER *, ___num, a1,\
	, AMISSL_BASE_NAME)

#define check_defer(___nid) \
	LP1NR(0x5952, check_defer , int, ___nid, d0,\
	, AMISSL_BASE_NAME)

#define DSO_pathbyaddr(___addr, ___path, ___sz) \
	LP3(0x5958, int, DSO_pathbyaddr , void *, ___addr, a0, char *, ___path, a1, int, ___sz, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_set_type(___pkey, ___type) \
	LP2(0x595e, int, EVP_PKEY_set_type , EVP_PKEY *, ___pkey, a0, int, ___type, d0,\
	, AMISSL_BASE_NAME)

#define TS_ACCURACY_set_micros(___a, ___micros) \
	LP2(0x5964, int, TS_ACCURACY_set_micros , TS_ACCURACY *, ___a, a0, const ASN1_INTEGER *, ___micros, a1,\
	, AMISSL_BASE_NAME)

#define TS_REQ_to_TS_VERIFY_CTX(___req, ___ctx) \
	LP2(0x596a, TS_VERIFY_CTX *, TS_REQ_to_TS_VERIFY_CTX , TS_REQ *, ___req, a0, TS_VERIFY_CTX *, ___ctx, a1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_set_copy(___pmeth, ___copy) \
	LP2NRFP(0x5970, EVP_PKEY_meth_set_copy , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___copy, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *dst,EVP_PKEY_CTX *src))

#define ASN1_PCTX_set_cert_flags(___p, ___flags) \
	LP2NR(0x5976, ASN1_PCTX_set_cert_flags , ASN1_PCTX *, ___p, a0, unsigned long, ___flags, d0,\
	, AMISSL_BASE_NAME)

#define TS_TST_INFO_get_ext(___a, ___loc) \
	LP2(0x597c, X509_EXTENSION *, TS_TST_INFO_get_ext , TS_TST_INFO *, ___a, a0, int, ___loc, d0,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_asn1_set_ctrl(___ameth, ___pkey_ctrl) \
	LP2NRFP(0x5982, EVP_PKEY_asn1_set_ctrl , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___pkey_ctrl, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pkey,int op,long arg1,void *arg2))

#define TS_TST_INFO_get_ext_by_critical(___a, ___crit, ___lastpos) \
	LP3(0x5988, int, TS_TST_INFO_get_ext_by_critical , TS_TST_INFO *, ___a, a0, int, ___crit, d0, int, ___lastpos, d1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_CTX_new_id(___id, ___e) \
	LP2(0x598e, EVP_PKEY_CTX *, EVP_PKEY_CTX_new_id , int, ___id, d0, ENGINE *, ___e, a0,\
	, AMISSL_BASE_NAME)

#define TS_REQ_get_ext_by_OBJ(___a, ___obj, ___lastpos) \
	LP3(0x5994, int, TS_REQ_get_ext_by_OBJ , TS_REQ *, ___a, a0, ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
	, AMISSL_BASE_NAME)

#define TS_CONF_set_signer_cert(___conf, ___section, ___cert, ___ctx) \
	LP4(0x599a, int, TS_CONF_set_signer_cert , CONF *, ___conf, a0, const char *, ___section, a1, const char *, ___cert, a2, TS_RESP_CTX *, ___ctx, a3,\
	, AMISSL_BASE_NAME)

#define X509_NAME_hash_old(___x) \
	LP1(0x59a0, unsigned long, X509_NAME_hash_old , X509_NAME *, ___x, a0,\
	, AMISSL_BASE_NAME)

#define ASN1_TIME_set_string(___s, ___str) \
	LP2(0x59a6, int, ASN1_TIME_set_string , ASN1_TIME *, ___s, a0, const char *, ___str, a1,\
	, AMISSL_BASE_NAME)

#define EVP_MD_flags(___md) \
	LP1(0x59ac, unsigned long, EVP_MD_flags , const EVP_MD *, ___md, a0,\
	, AMISSL_BASE_NAME)

#define TS_RESP_CTX_free(___ctx) \
	LP1NR(0x59b2, TS_RESP_CTX_free , TS_RESP_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define OCSP_REQ_CTX_add1_header(___rctx, ___name, ___value) \
	LP3(0x59b8, int, OCSP_REQ_CTX_add1_header , OCSP_REQ_CTX *, ___rctx, a0, const char *, ___name, a1, const char *, ___value, a2,\
	, AMISSL_BASE_NAME)

#define OCSP_REQ_CTX_set1_req(___rctx, ___req) \
	LP2(0x59be, int, OCSP_REQ_CTX_set1_req , OCSP_REQ_CTX *, ___rctx, a0, OCSP_REQUEST *, ___req, a1,\
	, AMISSL_BASE_NAME)

#define X509_STORE_set_verify_cb(___ctx, ___verify_cb) \
	LP2NRFP(0x59c4, X509_STORE_set_verify_cb , X509_STORE *, ___ctx, a0, __fpt, ___verify_cb, a1,\
	, AMISSL_BASE_NAME, int (*__fpt)(int,X509_STORE_CTX *))

#define X509_STORE_CTX_get0_current_crl(___ctx) \
	LP1(0x59ca, X509_CRL *, X509_STORE_CTX_get0_current_crl , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get0_parent_ctx(___ctx) \
	LP1(0x59d0, X509_STORE_CTX *, X509_STORE_CTX_get0_parent_ctx , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define X509_STORE_CTX_get0_current_issuer(___ctx) \
	LP1(0x59d6, X509 *, X509_STORE_CTX_get0_current_issuer , X509_STORE_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define EVP_CIPHER_CTX_copy(___out, ___in) \
	LP2(0x59dc, int, EVP_CIPHER_CTX_copy , EVP_CIPHER_CTX *, ___out, a0, const EVP_CIPHER_CTX *, ___in, a1,\
	, AMISSL_BASE_NAME)

#define UI_method_get_prompt_constructor(___method) \
	LP1FR(0x59e2, __fpr, UI_method_get_prompt_constructor , UI_METHOD *, ___method, a0,\
	, AMISSL_BASE_NAME, char *(*__fpr)(UI*, const char*, const char*))

#define UI_method_set_prompt_constructor(___method, ___prompt_constructor) \
	LP2FP(0x59e8, int, UI_method_set_prompt_constructor , UI_METHOD *, ___method, a0, __fpt, ___prompt_constructor, a1,\
	, AMISSL_BASE_NAME, char *(*__fpt)(UI* ui,const char* object_desc,const char* object_name))

#define EVP_read_pw_string_min(___buf, ___minlen, ___maxlen, ___prompt, ___verify) \
	LP5(0x59ee, int, EVP_read_pw_string_min , char *, ___buf, a0, int, ___minlen, d0, int, ___maxlen, d1, const char *, ___prompt, a1, int, ___verify, d2,\
	, AMISSL_BASE_NAME)

#define CRYPTO_cts128_encrypt(___in, ___out, ___len, ___key, ___ivec, ___cbc) \
	LP6(0x59f4, size_t, CRYPTO_cts128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, cbc128_f, ___cbc, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_cts128_decrypt_block(___in, ___out, ___len, ___key, ___ivec, ___block) \
	LP6(0x59fa, size_t, CRYPTO_cts128_decrypt_block , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, block128_f, ___block, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_cfb128_1_encrypt(___in, ___out, ___bits, ___key, ___ivec, ___num, ___enc, ___block) \
	LP8NR(0x5a00, CRYPTO_cfb128_1_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___bits, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2, block128_f, ___block, d3,\
	, AMISSL_BASE_NAME)

#define CRYPTO_cbc128_encrypt(___in, ___out, ___len, ___key, ___ivec, ___block) \
	LP6NR(0x5a06, CRYPTO_cbc128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, block128_f, ___block, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_ctr128_encrypt(___in, ___out, ___len, ___key, ___ivec, ___ecount_buf, ___num, ___block) \
	LP8NR(0x5a0c, CRYPTO_ctr128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, unsigned char *, ___ecount_buf, d1, unsigned int *, ___num, d2, block128_f, ___block, d3,\
	, AMISSL_BASE_NAME)

#define CRYPTO_ofb128_encrypt(___in, ___out, ___len, ___key, ___ivec, ___num, ___block) \
	LP7NR(0x5a12, CRYPTO_ofb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, block128_f, ___block, d2,\
	, AMISSL_BASE_NAME)

#define CRYPTO_cts128_decrypt(___in, ___out, ___len, ___key, ___ivec, ___cbc) \
	LP6(0x5a18, size_t, CRYPTO_cts128_decrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, cbc128_f, ___cbc, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_cts128_encrypt_block(___in, ___out, ___len, ___key, ___ivec, ___block) \
	LP6(0x5a1e, size_t, CRYPTO_cts128_encrypt_block , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, block128_f, ___block, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_cbc128_decrypt(___in, ___out, ___len, ___key, ___ivec, ___block) \
	LP6NR(0x5a24, CRYPTO_cbc128_decrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, block128_f, ___block, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_cfb128_encrypt(___in, ___out, ___len, ___key, ___ivec, ___num, ___enc, ___block) \
	LP8NR(0x5a2a, CRYPTO_cfb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2, block128_f, ___block, d3,\
	, AMISSL_BASE_NAME)

#define CRYPTO_cfb128_8_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc, ___block) \
	LP8NR(0x5a30, CRYPTO_cfb128_8_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2, block128_f, ___block, d3,\
	, AMISSL_BASE_NAME)

#define OPENSSL_strcasecmp(___str1, ___str2) \
	LP2(0x5a36, int, OPENSSL_strcasecmp , const char *, ___str1, a0, const char *, ___str2, a1,\
	, AMISSL_BASE_NAME)

#define OPENSSL_memcmp(___p1, ___p2, ___n) \
	LP3(0x5a3c, int, OPENSSL_memcmp , const void *, ___p1, a0, const void *, ___p2, a1, size_t, ___n, d0,\
	, AMISSL_BASE_NAME)

#define OPENSSL_strncasecmp(___str1, ___str2, ___n) \
	LP3(0x5a42, int, OPENSSL_strncasecmp , const char *, ___str1, a0, const char *, ___str2, a1, size_t, ___n, d0,\
	, AMISSL_BASE_NAME)

#define OPENSSL_gmtime(___timer, ___result) \
	LP2(0x5a48, struct tm *, OPENSSL_gmtime , const time_t *, ___timer, a0, struct tm *, ___result, a1,\
	, AMISSL_BASE_NAME)

#define OPENSSL_gmtime_adj(___tm, ___offset_day, ___offset_sec) \
	LP3(0x5a4e, int, OPENSSL_gmtime_adj , struct tm *, ___tm, a0, int, ___offset_day, d0, long, ___offset_sec, d1,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_get0_info(___ppkey_id, ___pflags, ___meth) \
	LP3NR(0x5a54, EVP_PKEY_meth_get0_info , int *, ___ppkey_id, a0, int *, ___pflags, a1, const EVP_PKEY_METHOD *, ___meth, a2,\
	, AMISSL_BASE_NAME)

#define EVP_PKEY_meth_copy(___dst, ___src) \
	LP2NR(0x5a5a, EVP_PKEY_meth_copy , EVP_PKEY_METHOD *, ___dst, a0, const EVP_PKEY_METHOD *, ___src, a1,\
	, AMISSL_BASE_NAME)

#define RSA_padding_add_PKCS1_PSS_mgf1(___rsa, ___EM, ___mHash, ___Hash, ___mgf1Hash, ___sLen) \
	LP6(0x5a60, int, RSA_padding_add_PKCS1_PSS_mgf1 , RSA *, ___rsa, a0, unsigned char *, ___EM, a1, const unsigned char *, ___mHash, a2, const EVP_MD *, ___Hash, a3, const EVP_MD *, ___mgf1Hash, d0, int, ___sLen, d1,\
	, AMISSL_BASE_NAME)

#define RSA_verify_PKCS1_PSS_mgf1(___rsa, ___mHash, ___Hash, ___mgf1Hash, ___EM, ___sLen) \
	LP6(0x5a66, int, RSA_verify_PKCS1_PSS_mgf1 , RSA *, ___rsa, a0, const unsigned char *, ___mHash, a1, const EVP_MD *, ___Hash, a2, const EVP_MD *, ___mgf1Hash, a3, const unsigned char *, ___EM, d0, int, ___sLen, d1,\
	, AMISSL_BASE_NAME)

#define X509_ALGOR_set_md(___alg, ___md) \
	LP2NR(0x5a6c, X509_ALGOR_set_md , X509_ALGOR *, ___alg, a0, const EVP_MD *, ___md, a1,\
	, AMISSL_BASE_NAME)

#define CMAC_CTX_copy(___out, ___in) \
	LP2(0x5a72, int, CMAC_CTX_copy , CMAC_CTX *, ___out, a0, const CMAC_CTX *, ___in, a1,\
	, AMISSL_BASE_NAME)

#define CMAC_CTX_free(___ctx) \
	LP1NR(0x5a78, CMAC_CTX_free , CMAC_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define CMAC_CTX_get0_cipher_ctx(___ctx) \
	LP1(0x5a7e, EVP_CIPHER_CTX *, CMAC_CTX_get0_cipher_ctx , CMAC_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define CMAC_CTX_cleanup(___ctx) \
	LP1NR(0x5a84, CMAC_CTX_cleanup , CMAC_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define CMAC_Init(___ctx, ___key, ___keylen, ___cipher, ___impl) \
	LP5(0x5a8a, int, CMAC_Init , CMAC_CTX *, ___ctx, a0, const void *, ___key, a1, size_t, ___keylen, d0, const EVP_CIPHER *, ___cipher, a2, ENGINE *, ___impl, a3,\
	, AMISSL_BASE_NAME)

#define CMAC_Update(___ctx, ___data, ___dlen) \
	LP3(0x5a90, int, CMAC_Update , CMAC_CTX *, ___ctx, a0, const void *, ___data, a1, size_t, ___dlen, d0,\
	, AMISSL_BASE_NAME)

#define CMAC_resume(___ctx) \
	LP1(0x5a96, int, CMAC_resume , CMAC_CTX *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define CMAC_CTX_new() \
	LP0(0x5a9c, CMAC_CTX *, CMAC_CTX_new ,\
	, AMISSL_BASE_NAME)

#define CMAC_Final(___ctx, ___out, ___poutlen) \
	LP3(0x5aa2, int, CMAC_Final , CMAC_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t *, ___poutlen, a2,\
	, AMISSL_BASE_NAME)

#define CRYPTO_ctr128_encrypt_ctr32(___in, ___out, ___len, ___key, ___ivec, ___ecount_buf, ___num, ___ctr) \
	LP8NR(0x5aa8, CRYPTO_ctr128_encrypt_ctr32 , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, unsigned char *, ___ecount_buf, d1, unsigned int *, ___num, d2, ctr128_f, ___ctr, d3,\
	, AMISSL_BASE_NAME)

#define CRYPTO_gcm128_release(___ctx) \
	LP1NR(0x5aae, CRYPTO_gcm128_release , GCM128_CONTEXT *, ___ctx, a0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_ccm128_decrypt_ccm64(___ctx, ___inp, ___out, ___len, ___stream) \
	LP5(0x5ab4, int, CRYPTO_ccm128_decrypt_ccm64 , CCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___inp, a1, unsigned char *, ___out, a2, size_t, ___len, d0, ccm128_f, ___stream, a3,\
	, AMISSL_BASE_NAME)

#define CRYPTO_ccm128_encrypt(___ctx, ___inp, ___out, ___len) \
	LP4(0x5aba, int, CRYPTO_ccm128_encrypt , CCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___inp, a1, unsigned char *, ___out, a2, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_gcm128_encrypt(___ctx, ___in, ___out, ___len) \
	LP4(0x5ac0, int, CRYPTO_gcm128_encrypt , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___in, a1, unsigned char *, ___out, a2, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_xts128_encrypt(___ctx, ___iv, ___inp, ___out, ___len, ___enc) \
	LP6(0x5ac6, int, CRYPTO_xts128_encrypt , XTS128_CONTEXT *, ___ctx, a0, const unsigned char *, ___iv, a1, const unsigned char *, ___inp, a2, unsigned char *, ___out, a3, size_t, ___len, d0, int, ___enc, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_nistcts128_decrypt_block(___in, ___out, ___len, ___key, ___ivec, ___block) \
	LP6(0x5acc, size_t, CRYPTO_nistcts128_decrypt_block , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, d1, block128_f, ___block, a3,\
	, AMISSL_BASE_NAME)

#define CRYPTO_gcm128_setiv(___ctx, ___iv, ___len) \
	LP3NR(0x5ad2, CRYPTO_gcm128_setiv , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___iv, a1, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_nistcts128_encrypt(___in, ___out, ___len, ___key, ___ivec, ___cbc) \
	LP6(0x5ad8, size_t, CRYPTO_nistcts128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, cbc128_f, ___cbc, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_gcm128_tag(___ctx, ___tag, ___len) \
	LP3NR(0x5ade, CRYPTO_gcm128_tag , GCM128_CONTEXT *, ___ctx, a0, unsigned char *, ___tag, a1, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_ccm128_encrypt_ccm64(___ctx, ___inp, ___out, ___len, ___stream) \
	LP5(0x5ae4, int, CRYPTO_ccm128_encrypt_ccm64 , CCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___inp, a1, unsigned char *, ___out, a2, size_t, ___len, d0, ccm128_f, ___stream, a3,\
	, AMISSL_BASE_NAME)

#define CRYPTO_ccm128_setiv(___ctx, ___nonce, ___nlen, ___mlen) \
	LP4(0x5aea, int, CRYPTO_ccm128_setiv , CCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___nonce, a1, size_t, ___nlen, d0, size_t, ___mlen, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_nistcts128_encrypt_block(___in, ___out, ___len, ___key, ___ivec, ___block) \
	LP6(0x5af0, size_t, CRYPTO_nistcts128_encrypt_block , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, block128_f, ___block, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_gcm128_aad(___ctx, ___aad, ___len) \
	LP3(0x5af6, int, CRYPTO_gcm128_aad , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___aad, a1, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_ccm128_init(___ctx, ___M, ___L, ___key, ___block) \
	LP5NR(0x5afc, CRYPTO_ccm128_init , CCM128_CONTEXT *, ___ctx, a0, unsigned int, ___M, d0, unsigned int, ___L, d1, void *, ___key, a1, block128_f, ___block, a2,\
	, AMISSL_BASE_NAME)

#define CRYPTO_nistcts128_decrypt(___in, ___out, ___len, ___key, ___ivec, ___cbc) \
	LP6(0x5b02, size_t, CRYPTO_nistcts128_decrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, cbc128_f, ___cbc, d1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_gcm128_new(___key, ___block) \
	LP2(0x5b08, GCM128_CONTEXT *, CRYPTO_gcm128_new , void *, ___key, a0, block128_f, ___block, a1,\
	, AMISSL_BASE_NAME)

#define CRYPTO_ccm128_tag(___ctx, ___tag, ___len) \
	LP3(0x5b0e, size_t, CRYPTO_ccm128_tag , CCM128_CONTEXT *, ___ctx, a0, unsigned char *, ___tag, a1, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_ccm128_decrypt(___ctx, ___inp, ___out, ___len) \
	LP4(0x5b14, int, CRYPTO_ccm128_decrypt , CCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___inp, a1, unsigned char *, ___out, a2, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_ccm128_aad(___ctx, ___aad, ___alen) \
	LP3NR(0x5b1a, CRYPTO_ccm128_aad , CCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___aad, a1, size_t, ___alen, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_gcm128_init(___ctx, ___key, ___block) \
	LP3NR(0x5b20, CRYPTO_gcm128_init , GCM128_CONTEXT *, ___ctx, a0, void *, ___key, a1, block128_f, ___block, a2,\
	, AMISSL_BASE_NAME)

#define CRYPTO_gcm128_decrypt(___ctx, ___in, ___out, ___len) \
	LP4(0x5b26, int, CRYPTO_gcm128_decrypt , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___in, a1, unsigned char *, ___out, a2, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define CRYPTO_gcm128_decrypt_ctr32(___ctx, ___in, ___out, ___len, ___stream) \
	LP5(0x5b2c, int, CRYPTO_gcm128_decrypt_ctr32 , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___in, a1, unsigned char *, ___out, a2, size_t, ___len, d0, ctr128_f, ___stream, a3,\
	, AMISSL_BASE_NAME)

#define CRYPTO_gcm128_encrypt_ctr32(___ctx, ___in, ___out, ___len, ___stream) \
	LP5(0x5b32, int, CRYPTO_gcm128_encrypt_ctr32 , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___in, a1, unsigned char *, ___out, a2, size_t, ___len, d0, ctr128_f, ___stream, a3,\
	, AMISSL_BASE_NAME)

#define CRYPTO_gcm128_finish(___ctx, ___tag, ___len) \
	LP3(0x5b38, int, CRYPTO_gcm128_finish , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___tag, a1, size_t, ___len, d0,\
	, AMISSL_BASE_NAME)

#define PKCS5_pbkdf2_set(___iter, ___salt, ___saltlen, ___prf_nid, ___keylen) \
	LP5(0x5b3e, X509_ALGOR *, PKCS5_pbkdf2_set , int, ___iter, d0, unsigned char *, ___salt, a0, int, ___saltlen, d1, int, ___prf_nid, d2, int, ___keylen, d3,\
	, AMISSL_BASE_NAME)

#define RSA_PSS_PARAMS_new() \
	LP0(0x5b44, RSA_PSS_PARAMS *, RSA_PSS_PARAMS_new ,\
	, AMISSL_BASE_NAME)

#define d2i_RSA_PSS_PARAMS(___a, ___pp, ___length) \
	LP3(0x5b4a, RSA_PSS_PARAMS *, d2i_RSA_PSS_PARAMS , RSA_PSS_PARAMS **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
	, AMISSL_BASE_NAME)

#define RSA_PSS_PARAMS_free(___a) \
	LP1NR(0x5b50, RSA_PSS_PARAMS_free , RSA_PSS_PARAMS *, ___a, a0,\
	, AMISSL_BASE_NAME)

#define i2d_RSA_PSS_PARAMS(___a, ___out) \
	LP2(0x5b56, int, i2d_RSA_PSS_PARAMS , RSA_PSS_PARAMS *, ___a, a0, unsigned char **, ___out, a1,\
	, AMISSL_BASE_NAME)

#define OPENSSL_stderr() \
	LP0(0x5b5c, void *, OPENSSL_stderr ,\
	, AMISSL_BASE_NAME)

#ifndef NO_INLINE_VARARGS
#define OPENSSL_showfatal(___fmta, ___dummy, ...) \
	({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; OPENSSL_stderr((___fmta), (...) _message); })
#endif /* !NO_INLINE_VARARGS */

#define POLICY_MAPPING_it() \
	LP0(0x5b62, const ASN1_ITEM *, POLICY_MAPPING_it ,\
	, AMISSL_BASE_NAME)

#define NAME_CONSTRAINTS_it() \
	LP0(0x5b68, const ASN1_ITEM *, NAME_CONSTRAINTS_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_OCTET_STRING_NDEF_it() \
	LP0(0x5b6e, const ASN1_ITEM *, ASN1_OCTET_STRING_NDEF_it ,\
	, AMISSL_BASE_NAME)

#define X509_CERT_PAIR_it() \
	LP0(0x5b74, const ASN1_ITEM *, X509_CERT_PAIR_it ,\
	, AMISSL_BASE_NAME)

#define POLICY_CONSTRAINTS_it() \
	LP0(0x5b7a, const ASN1_ITEM *, POLICY_CONSTRAINTS_it ,\
	, AMISSL_BASE_NAME)

#define POLICY_MAPPINGS_it() \
	LP0(0x5b80, const ASN1_ITEM *, POLICY_MAPPINGS_it ,\
	, AMISSL_BASE_NAME)

#define GENERAL_SUBTREE_it() \
	LP0(0x5b86, const ASN1_ITEM *, GENERAL_SUBTREE_it ,\
	, AMISSL_BASE_NAME)

#define X509_EXTENSIONS_it() \
	LP0(0x5b8c, const ASN1_ITEM *, X509_EXTENSIONS_it ,\
	, AMISSL_BASE_NAME)

#define X509_ALGORS_it() \
	LP0(0x5b92, const ASN1_ITEM *, X509_ALGORS_it ,\
	, AMISSL_BASE_NAME)

#define CMS_ContentInfo_it() \
	LP0(0x5b98, const ASN1_ITEM *, CMS_ContentInfo_it ,\
	, AMISSL_BASE_NAME)

#define CMS_ReceiptRequest_it() \
	LP0(0x5b9e, const ASN1_ITEM *, CMS_ReceiptRequest_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_SEQUENCE_ANY_it() \
	LP0(0x5ba4, const ASN1_ITEM *, ASN1_SEQUENCE_ANY_it ,\
	, AMISSL_BASE_NAME)

#define ASN1_SET_ANY_it() \
	LP0(0x5baa, const ASN1_ITEM *, ASN1_SET_ANY_it ,\
	, AMISSL_BASE_NAME)

#define NETSCAPE_X509_it() \
	LP0(0x5bb0, const ASN1_ITEM *, NETSCAPE_X509_it ,\
	, AMISSL_BASE_NAME)

#define ISSUING_DIST_POINT_it() \
	LP0(0x5bb6, const ASN1_ITEM *, ISSUING_DIST_POINT_it ,\
	, AMISSL_BASE_NAME)

#define RSA_PSS_PARAMS_it() \
	LP0(0x5bbc, const ASN1_ITEM *, RSA_PSS_PARAMS_it ,\
	, AMISSL_BASE_NAME)

#define _shadow_DES_rw_mode() \
	LP0(0x5bc2, int *, _shadow_DES_rw_mode ,\
	, AMISSL_BASE_NAME)

#define _shadow_DES_check_key() \
	LP0(0x5bc8, int *, _shadow_DES_check_key ,\
	, AMISSL_BASE_NAME)

#define ENGINE_load_gost() \
	LP0NR(0x5bce, ENGINE_load_gost ,\
	, AMISSL_BASE_NAME)

#endif /* !_INLINE_AMISSL_H */
