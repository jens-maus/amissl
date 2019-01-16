/* Automatically generated header (sfdc 1.10)! Do not edit! */

#ifndef _PPCINLINE_AMISSL_H
#define _PPCINLINE_AMISSL_H

#ifndef _SFDC_VARARG_DEFINED
#define _SFDC_VARARG_DEFINED
#ifdef __HAVE_IPTR_ATTR__
typedef APTR _sfdc_vararg __attribute__((iptr));
#else
typedef ULONG _sfdc_vararg;
#endif /* __HAVE_IPTR_ATTR__ */
#endif /* _SFDC_VARARG_DEFINED */

#ifndef __PPCINLINE_MACROS_H
#include <ppcinline/macros.h>
#endif /* !__PPCINLINE_MACROS_H */

#ifndef AMISSL_BASE_NAME
#define AMISSL_BASE_NAME AmiSSLBase
#endif /* !AMISSL_BASE_NAME */

#define InitAmiSSLA(___tagList) \
      LP1(0x24, long, InitAmiSSLA , struct TagItem *, ___tagList, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#ifndef NO_INLINE_STDARG
#define InitAmiSSL(___tag, ...) \
    ({_sfdc_vararg _tags[] = { ___tag, __VA_ARGS__ }; InitAmiSSLA((struct TagItem *) _tags); })
#endif /* !NO_INLINE_STDARG */

#define CleanupAmiSSLA(___tagList) \
      LP1(0x2a, long, CleanupAmiSSLA , struct TagItem *, ___tagList, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#ifndef NO_INLINE_STDARG
#define CleanupAmiSSL(___tag, ...) \
    ({_sfdc_vararg _tags[] = { ___tag, __VA_ARGS__ }; CleanupAmiSSLA((struct TagItem *) _tags); })
#endif /* !NO_INLINE_STDARG */

#define ASN1_TYPE_new() \
      LP0(0x66, ASN1_TYPE *, ASN1_TYPE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TYPE_free(___a) \
      LP1NR(0x6c, ASN1_TYPE_free , ASN1_TYPE *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_TYPE(___a, ___in, ___len) \
      LP3(0x72, ASN1_TYPE *, d2i_ASN1_TYPE , ASN1_TYPE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_TYPE(___a, ___out) \
      LP2(0x78, int, i2d_ASN1_TYPE , ASN1_TYPE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_ANY_it() \
      LP0(0x7e, const ASN1_ITEM *, ASN1_ANY_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TYPE_get(___a) \
      LP1(0x84, int, ASN1_TYPE_get , const ASN1_TYPE *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TYPE_set(___a, ___type, ___value) \
      LP3NR(0x8a, ASN1_TYPE_set , ASN1_TYPE *, ___a, a0, int, ___type, d0, void *, ___value, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_OBJECT_new() \
      LP0(0x90, ASN1_OBJECT *, ASN1_OBJECT_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_OBJECT_free(___a) \
      LP1NR(0x96, ASN1_OBJECT_free , ASN1_OBJECT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_OBJECT(___a, ___pp) \
      LP2(0x9c, int, i2d_ASN1_OBJECT , const ASN1_OBJECT *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_OBJECT(___a, ___pp, ___length) \
      LP3(0xa8, ASN1_OBJECT *, d2i_ASN1_OBJECT , ASN1_OBJECT **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_OBJECT_it() \
      LP0(0xae, const ASN1_ITEM *, ASN1_OBJECT_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_new() \
      LP0(0xb4, ASN1_STRING *, ASN1_STRING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_free(___a) \
      LP1NR(0xba, ASN1_STRING_free , ASN1_STRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_dup(___a) \
      LP1(0xc0, ASN1_STRING *, ASN1_STRING_dup , ASN1_STRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_type_new(___type) \
      LP1(0xc6, ASN1_STRING *, ASN1_STRING_type_new , int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_cmp(___a, ___b) \
      LP2(0xcc, int, ASN1_STRING_cmp , ASN1_STRING *, ___a, a0, ASN1_STRING *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_set(___str, ___data, ___len) \
      LP3(0xd2, int, ASN1_STRING_set , ASN1_STRING *, ___str, a0, const void *, ___data, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_length(___x) \
      LP1(0xd8, int, ASN1_STRING_length , const ASN1_STRING *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_length_set(___x, ___n) \
      LP2NR(0xde, ASN1_STRING_length_set , ASN1_STRING *, ___x, a0, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_type(___x) \
      LP1(0xe4, int, ASN1_STRING_type , const ASN1_STRING *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_data(___x) \
      LP1(0xea, unsigned char *, ASN1_STRING_data , ASN1_STRING *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BIT_STRING_new() \
      LP0(0xf0, ASN1_BIT_STRING *, ASN1_BIT_STRING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BIT_STRING_free(___x) \
      LP1NR(0xf6, ASN1_BIT_STRING_free , ASN1_BIT_STRING *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_BIT_STRING(___a, ___in, ___len) \
      LP3(0xfc, ASN1_BIT_STRING *, d2i_ASN1_BIT_STRING , ASN1_BIT_STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_BIT_STRING(___a, ___out) \
      LP2(0x102, int, i2d_ASN1_BIT_STRING , ASN1_BIT_STRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BIT_STRING_it() \
      LP0(0x108, const ASN1_ITEM *, ASN1_BIT_STRING_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BIT_STRING_set(___a, ___d, ___length) \
      LP3(0x11a, int, ASN1_BIT_STRING_set , ASN1_BIT_STRING *, ___a, a0, unsigned char *, ___d, a1, int, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BIT_STRING_set_bit(___a, ___n, ___value) \
      LP3(0x120, int, ASN1_BIT_STRING_set_bit , ASN1_BIT_STRING *, ___a, a0, int, ___n, d0, int, ___value, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BIT_STRING_get_bit(___a, ___n) \
      LP2(0x126, int, ASN1_BIT_STRING_get_bit , const ASN1_BIT_STRING *, ___a, a0, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BIT_STRING_name_print(___out, ___bs, ___tbl, ___indent) \
      LP4(0x12c, int, ASN1_BIT_STRING_name_print , BIO *, ___out, a0, ASN1_BIT_STRING *, ___bs, a1, BIT_STRING_BITNAME *, ___tbl, a2, int, ___indent, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BIT_STRING_num_asc(___name, ___tbl) \
      LP2(0x132, int, ASN1_BIT_STRING_num_asc , const char *, ___name, a0, BIT_STRING_BITNAME *, ___tbl, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BIT_STRING_set_asc(___bs, ___name, ___value, ___tbl) \
      LP4(0x138, int, ASN1_BIT_STRING_set_asc , ASN1_BIT_STRING *, ___bs, a0, const char *, ___name, a1, int, ___value, d0, BIT_STRING_BITNAME *, ___tbl, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_INTEGER_new() \
      LP0(0x14a, ASN1_INTEGER *, ASN1_INTEGER_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_INTEGER_free(___x) \
      LP1NR(0x150, ASN1_INTEGER_free , ASN1_INTEGER *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_INTEGER(___a, ___in, ___len) \
      LP3(0x156, ASN1_INTEGER *, d2i_ASN1_INTEGER , ASN1_INTEGER **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_INTEGER(___a, ___out) \
      LP2(0x15c, int, i2d_ASN1_INTEGER , ASN1_INTEGER *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_INTEGER_it() \
      LP0(0x162, const ASN1_ITEM *, ASN1_INTEGER_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_UINTEGER(___a, ___pp, ___length) \
      LP3(0x174, ASN1_INTEGER *, d2i_ASN1_UINTEGER , ASN1_INTEGER **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_INTEGER_dup(___x) \
      LP1(0x17a, ASN1_INTEGER *, ASN1_INTEGER_dup , ASN1_INTEGER *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_INTEGER_cmp(___x, ___y) \
      LP2(0x180, int, ASN1_INTEGER_cmp , ASN1_INTEGER *, ___x, a0, ASN1_INTEGER *, ___y, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_ENUMERATED_new() \
      LP0(0x186, ASN1_ENUMERATED *, ASN1_ENUMERATED_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_ENUMERATED_free(___x) \
      LP1NR(0x18c, ASN1_ENUMERATED_free , ASN1_ENUMERATED *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_ENUMERATED(___a, ___in, ___len) \
      LP3(0x192, ASN1_ENUMERATED *, d2i_ASN1_ENUMERATED , ASN1_ENUMERATED **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_ENUMERATED(___a, ___out) \
      LP2(0x198, int, i2d_ASN1_ENUMERATED , ASN1_ENUMERATED *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_ENUMERATED_it() \
      LP0(0x19e, const ASN1_ITEM *, ASN1_ENUMERATED_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTCTIME_check(___a) \
      LP1(0x1a4, int, ASN1_UTCTIME_check , const ASN1_UTCTIME *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTCTIME_set(___s, ___t) \
      LP2(0x1aa, ASN1_UTCTIME *, ASN1_UTCTIME_set , ASN1_UTCTIME *, ___s, a0, time_t, ___t, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTCTIME_set_string(___s, ___str) \
      LP2(0x1b0, int, ASN1_UTCTIME_set_string , ASN1_UTCTIME *, ___s, a0, char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTCTIME_cmp_time_t(___s, ___t) \
      LP2(0x1b6, int, ASN1_UTCTIME_cmp_time_t , const ASN1_UTCTIME *, ___s, a0, time_t, ___t, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_GENERALIZEDTIME_check(___a) \
      LP1(0x1bc, int, ASN1_GENERALIZEDTIME_check , const ASN1_GENERALIZEDTIME *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_GENERALIZEDTIME_set(___s, ___t) \
      LP2(0x1c2, ASN1_GENERALIZEDTIME *, ASN1_GENERALIZEDTIME_set , ASN1_GENERALIZEDTIME *, ___s, a0, time_t, ___t, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_GENERALIZEDTIME_set_string(___s, ___str) \
      LP2(0x1c8, int, ASN1_GENERALIZEDTIME_set_string , ASN1_GENERALIZEDTIME *, ___s, a0, const char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_OCTET_STRING_new() \
      LP0(0x1ce, ASN1_OCTET_STRING *, ASN1_OCTET_STRING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_OCTET_STRING_free(___x) \
      LP1NR(0x1d4, ASN1_OCTET_STRING_free , ASN1_OCTET_STRING *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_OCTET_STRING(___a, ___in, ___len) \
      LP3(0x1da, ASN1_OCTET_STRING *, d2i_ASN1_OCTET_STRING , ASN1_OCTET_STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_OCTET_STRING(___a, ___out) \
      LP2(0x1e0, int, i2d_ASN1_OCTET_STRING , ASN1_OCTET_STRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_OCTET_STRING_it() \
      LP0(0x1e6, const ASN1_ITEM *, ASN1_OCTET_STRING_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_OCTET_STRING_dup(___a) \
      LP1(0x1ec, ASN1_OCTET_STRING *, ASN1_OCTET_STRING_dup , ASN1_OCTET_STRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_OCTET_STRING_cmp(___a, ___b) \
      LP2(0x1f2, int, ASN1_OCTET_STRING_cmp , ASN1_OCTET_STRING *, ___a, a0, ASN1_OCTET_STRING *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_OCTET_STRING_set(___str, ___data, ___len) \
      LP3(0x1f8, int, ASN1_OCTET_STRING_set , ASN1_OCTET_STRING *, ___str, a0, unsigned char *, ___data, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_VISIBLESTRING_new() \
      LP0(0x1fe, ASN1_VISIBLESTRING *, ASN1_VISIBLESTRING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_VISIBLESTRING_free(___a) \
      LP1NR(0x204, ASN1_VISIBLESTRING_free , ASN1_VISIBLESTRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_VISIBLESTRING(___a, ___in, ___len) \
      LP3(0x20a, ASN1_VISIBLESTRING *, d2i_ASN1_VISIBLESTRING , ASN1_VISIBLESTRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_VISIBLESTRING(___a, ___out) \
      LP2(0x210, int, i2d_ASN1_VISIBLESTRING , ASN1_VISIBLESTRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_VISIBLESTRING_it() \
      LP0(0x216, const ASN1_ITEM *, ASN1_VISIBLESTRING_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UNIVERSALSTRING_new() \
      LP0(0x21c, ASN1_UNIVERSALSTRING *, ASN1_UNIVERSALSTRING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UNIVERSALSTRING_free(___a) \
      LP1NR(0x222, ASN1_UNIVERSALSTRING_free , ASN1_UNIVERSALSTRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_UNIVERSALSTRING(___a, ___in, ___len) \
      LP3(0x228, ASN1_UNIVERSALSTRING *, d2i_ASN1_UNIVERSALSTRING , ASN1_UNIVERSALSTRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_UNIVERSALSTRING(___a, ___out) \
      LP2(0x22e, int, i2d_ASN1_UNIVERSALSTRING , ASN1_UNIVERSALSTRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UNIVERSALSTRING_it() \
      LP0(0x234, const ASN1_ITEM *, ASN1_UNIVERSALSTRING_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTF8STRING_new() \
      LP0(0x23a, ASN1_UTF8STRING *, ASN1_UTF8STRING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTF8STRING_free(___x) \
      LP1NR(0x240, ASN1_UTF8STRING_free , ASN1_UTF8STRING *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_UTF8STRING(___a, ___in, ___len) \
      LP3(0x246, ASN1_UTF8STRING *, d2i_ASN1_UTF8STRING , ASN1_UTF8STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_UTF8STRING(___a, ___out) \
      LP2(0x24c, int, i2d_ASN1_UTF8STRING , ASN1_UTF8STRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTF8STRING_it() \
      LP0(0x252, const ASN1_ITEM *, ASN1_UTF8STRING_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_NULL_new() \
      LP0(0x258, ASN1_NULL *, ASN1_NULL_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_NULL_free(___a) \
      LP1NR(0x25e, ASN1_NULL_free , ASN1_NULL *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_NULL(___a, ___in, ___len) \
      LP3(0x264, ASN1_NULL *, d2i_ASN1_NULL , ASN1_NULL **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_NULL(___a, ___out) \
      LP2(0x26a, int, i2d_ASN1_NULL , ASN1_NULL *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_NULL_it() \
      LP0(0x270, const ASN1_ITEM *, ASN1_NULL_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BMPSTRING_new() \
      LP0(0x276, ASN1_BMPSTRING *, ASN1_BMPSTRING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BMPSTRING_free(___a) \
      LP1NR(0x27c, ASN1_BMPSTRING_free , ASN1_BMPSTRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_BMPSTRING(___a, ___in, ___len) \
      LP3(0x282, ASN1_BMPSTRING *, d2i_ASN1_BMPSTRING , ASN1_BMPSTRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_BMPSTRING(___a, ___out) \
      LP2(0x288, int, i2d_ASN1_BMPSTRING , ASN1_BMPSTRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BMPSTRING_it() \
      LP0(0x28e, const ASN1_ITEM *, ASN1_BMPSTRING_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UTF8_getc(___str, ___len, ___val) \
      LP3(0x294, int, UTF8_getc , const unsigned char *, ___str, a0, int, ___len, d0, unsigned long *, ___val, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UTF8_putc(___str, ___len, ___value) \
      LP3(0x29a, int, UTF8_putc , unsigned char *, ___str, a0, int, ___len, d0, unsigned long, ___value, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PRINTABLE_new() \
      LP0(0x2a0, ASN1_STRING *, ASN1_PRINTABLE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PRINTABLE_free(___a) \
      LP1NR(0x2a6, ASN1_PRINTABLE_free , ASN1_STRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_PRINTABLE(___a, ___in, ___len) \
      LP3(0x2ac, ASN1_STRING *, d2i_ASN1_PRINTABLE , ASN1_STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_PRINTABLE(___a, ___out) \
      LP2(0x2b2, int, i2d_ASN1_PRINTABLE , ASN1_STRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PRINTABLE_it() \
      LP0(0x2b8, const ASN1_ITEM *, ASN1_PRINTABLE_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DIRECTORYSTRING_new() \
      LP0(0x2be, ASN1_STRING *, DIRECTORYSTRING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DIRECTORYSTRING_free(___a) \
      LP1NR(0x2c4, DIRECTORYSTRING_free , ASN1_STRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DIRECTORYSTRING(___a, ___in, ___len) \
      LP3(0x2ca, ASN1_STRING *, d2i_DIRECTORYSTRING , ASN1_STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DIRECTORYSTRING(___a, ___out) \
      LP2(0x2d0, int, i2d_DIRECTORYSTRING , ASN1_STRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DIRECTORYSTRING_it() \
      LP0(0x2d6, const ASN1_ITEM *, DIRECTORYSTRING_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DISPLAYTEXT_new() \
      LP0(0x2dc, ASN1_STRING *, DISPLAYTEXT_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DISPLAYTEXT_free(___a) \
      LP1NR(0x2e2, DISPLAYTEXT_free , ASN1_STRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DISPLAYTEXT(___a, ___in, ___len) \
      LP3(0x2e8, ASN1_STRING *, d2i_DISPLAYTEXT , ASN1_STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DISPLAYTEXT(___a, ___out) \
      LP2(0x2ee, int, i2d_DISPLAYTEXT , ASN1_STRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DISPLAYTEXT_it() \
      LP0(0x2f4, const ASN1_ITEM *, DISPLAYTEXT_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PRINTABLESTRING_new() \
      LP0(0x2fa, ASN1_PRINTABLESTRING *, ASN1_PRINTABLESTRING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PRINTABLESTRING_free(___a) \
      LP1NR(0x300, ASN1_PRINTABLESTRING_free , ASN1_PRINTABLESTRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_PRINTABLESTRING(___a, ___in, ___len) \
      LP3(0x306, ASN1_PRINTABLESTRING *, d2i_ASN1_PRINTABLESTRING , ASN1_PRINTABLESTRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_PRINTABLESTRING(___a, ___out) \
      LP2(0x30c, int, i2d_ASN1_PRINTABLESTRING , ASN1_PRINTABLESTRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PRINTABLESTRING_it() \
      LP0(0x312, const ASN1_ITEM *, ASN1_PRINTABLESTRING_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_T61STRING_new() \
      LP0(0x318, ASN1_T61STRING *, ASN1_T61STRING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_T61STRING_free(___a) \
      LP1NR(0x31e, ASN1_T61STRING_free , ASN1_T61STRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_T61STRING(___a, ___in, ___len) \
      LP3(0x324, ASN1_T61STRING *, d2i_ASN1_T61STRING , ASN1_T61STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_T61STRING(___a, ___out) \
      LP2(0x32a, int, i2d_ASN1_T61STRING , ASN1_T61STRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_T61STRING_it() \
      LP0(0x330, const ASN1_ITEM *, ASN1_T61STRING_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_IA5STRING_new() \
      LP0(0x336, ASN1_IA5STRING *, ASN1_IA5STRING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_IA5STRING_free(___a) \
      LP1NR(0x33c, ASN1_IA5STRING_free , ASN1_IA5STRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_IA5STRING(___a, ___in, ___len) \
      LP3(0x342, ASN1_IA5STRING *, d2i_ASN1_IA5STRING , ASN1_IA5STRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_IA5STRING(___a, ___out) \
      LP2(0x348, int, i2d_ASN1_IA5STRING , ASN1_IA5STRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_IA5STRING_it() \
      LP0(0x34e, const ASN1_ITEM *, ASN1_IA5STRING_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_GENERALSTRING_new() \
      LP0(0x354, ASN1_GENERALSTRING *, ASN1_GENERALSTRING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_GENERALSTRING_free(___a) \
      LP1NR(0x35a, ASN1_GENERALSTRING_free , ASN1_GENERALSTRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_GENERALSTRING(___a, ___in, ___len) \
      LP3(0x360, ASN1_GENERALSTRING *, d2i_ASN1_GENERALSTRING , ASN1_GENERALSTRING **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_GENERALSTRING(___a, ___out) \
      LP2(0x366, int, i2d_ASN1_GENERALSTRING , ASN1_GENERALSTRING *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_GENERALSTRING_it() \
      LP0(0x36c, const ASN1_ITEM *, ASN1_GENERALSTRING_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTCTIME_new() \
      LP0(0x372, ASN1_UTCTIME *, ASN1_UTCTIME_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTCTIME_free(___a) \
      LP1NR(0x378, ASN1_UTCTIME_free , ASN1_UTCTIME *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_UTCTIME(___a, ___in, ___len) \
      LP3(0x37e, ASN1_UTCTIME *, d2i_ASN1_UTCTIME , ASN1_UTCTIME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_UTCTIME(___a, ___out) \
      LP2(0x384, int, i2d_ASN1_UTCTIME , ASN1_UTCTIME *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTCTIME_it() \
      LP0(0x38a, const ASN1_ITEM *, ASN1_UTCTIME_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_GENERALIZEDTIME_new() \
      LP0(0x390, ASN1_GENERALIZEDTIME *, ASN1_GENERALIZEDTIME_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_GENERALIZEDTIME_free(___x) \
      LP1NR(0x396, ASN1_GENERALIZEDTIME_free , ASN1_GENERALIZEDTIME *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_GENERALIZEDTIME(___a, ___in, ___len) \
      LP3(0x39c, ASN1_GENERALIZEDTIME *, d2i_ASN1_GENERALIZEDTIME , ASN1_GENERALIZEDTIME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_GENERALIZEDTIME(___a, ___out) \
      LP2(0x3a2, int, i2d_ASN1_GENERALIZEDTIME , ASN1_GENERALIZEDTIME *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_GENERALIZEDTIME_it() \
      LP0(0x3a8, const ASN1_ITEM *, ASN1_GENERALIZEDTIME_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_new() \
      LP0(0x3ae, ASN1_TIME *, ASN1_TIME_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_free(___a) \
      LP1NR(0x3b4, ASN1_TIME_free , ASN1_TIME *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_TIME(___a, ___in, ___len) \
      LP3(0x3ba, ASN1_TIME *, d2i_ASN1_TIME , ASN1_TIME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_TIME(___a, ___out) \
      LP2(0x3c0, int, i2d_ASN1_TIME , ASN1_TIME *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_it() \
      LP0(0x3c6, const ASN1_ITEM *, ASN1_TIME_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_set(___s, ___t) \
      LP2(0x3cc, ASN1_TIME *, ASN1_TIME_set , ASN1_TIME *, ___s, a0, time_t, ___t, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_check(___t) \
      LP1(0x3d2, int, ASN1_TIME_check , const ASN1_TIME *, ___t, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_to_generalizedtime(___t, ___out) \
      LP2(0x3d8, ASN1_GENERALIZEDTIME *, ASN1_TIME_to_generalizedtime , const ASN1_TIME *, ___t, a0, ASN1_GENERALIZEDTIME **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2a_ASN1_INTEGER(___bp, ___a) \
      LP2(0x3ea, int, i2a_ASN1_INTEGER , BIO *, ___bp, a0, const ASN1_INTEGER *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define a2i_ASN1_INTEGER(___bp, ___bs, ___buf, ___size) \
      LP4(0x3f0, int, a2i_ASN1_INTEGER , BIO *, ___bp, a0, ASN1_INTEGER *, ___bs, a1, char *, ___buf, a2, int, ___size, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2a_ASN1_ENUMERATED(___bp, ___a) \
      LP2(0x3f6, int, i2a_ASN1_ENUMERATED , BIO *, ___bp, a0, const ASN1_ENUMERATED *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define a2i_ASN1_ENUMERATED(___bp, ___bs, ___buf, ___size) \
      LP4(0x3fc, int, a2i_ASN1_ENUMERATED , BIO *, ___bp, a0, ASN1_ENUMERATED *, ___bs, a1, char *, ___buf, a2, int, ___size, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2a_ASN1_OBJECT(___bp, ___a) \
      LP2(0x402, int, i2a_ASN1_OBJECT , BIO *, ___bp, a0, const ASN1_OBJECT *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define a2i_ASN1_STRING(___bp, ___bs, ___buf, ___size) \
      LP4(0x408, int, a2i_ASN1_STRING , BIO *, ___bp, a0, ASN1_STRING *, ___bs, a1, char *, ___buf, a2, int, ___size, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2a_ASN1_STRING(___bp, ___a, ___type) \
      LP3(0x40e, int, i2a_ASN1_STRING , BIO *, ___bp, a0, const ASN1_STRING *, ___a, a1, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2t_ASN1_OBJECT(___buf, ___buf_len, ___a) \
      LP3(0x414, int, i2t_ASN1_OBJECT , char *, ___buf, a0, int, ___buf_len, d0, const ASN1_OBJECT *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define a2d_ASN1_OBJECT(___out, ___olen, ___buf, ___num) \
      LP4(0x41a, int, a2d_ASN1_OBJECT , unsigned char *, ___out, a0, int, ___olen, d0, const char *, ___buf, a1, int, ___num, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_OBJECT_create(___nid, ___data, ___len, ___sn, ___ln) \
      LP5(0x420, ASN1_OBJECT *, ASN1_OBJECT_create , int, ___nid, d0, unsigned char *, ___data, a0, int, ___len, d1, const char *, ___sn, a1, const char *, ___ln, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_INTEGER_set(___a, ___v) \
      LP2(0x426, int, ASN1_INTEGER_set , ASN1_INTEGER *, ___a, a0, long, ___v, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_INTEGER_get(___a) \
      LP1(0x42c, long, ASN1_INTEGER_get , const ASN1_INTEGER *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_to_ASN1_INTEGER(___bn, ___ai) \
      LP2(0x432, ASN1_INTEGER *, BN_to_ASN1_INTEGER , const BIGNUM *, ___bn, a0, ASN1_INTEGER *, ___ai, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_INTEGER_to_BN(___ai, ___bn) \
      LP2(0x438, BIGNUM *, ASN1_INTEGER_to_BN , ASN1_INTEGER *, ___ai, a0, BIGNUM *, ___bn, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_ENUMERATED_set(___a, ___v) \
      LP2(0x43e, int, ASN1_ENUMERATED_set , ASN1_ENUMERATED *, ___a, a0, long, ___v, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_ENUMERATED_get(___a) \
      LP1(0x444, long, ASN1_ENUMERATED_get , const ASN1_ENUMERATED *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_to_ASN1_ENUMERATED(___bn, ___ai) \
      LP2(0x44a, ASN1_ENUMERATED *, BN_to_ASN1_ENUMERATED , const BIGNUM *, ___bn, a0, ASN1_ENUMERATED *, ___ai, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_ENUMERATED_to_BN(___ai, ___bn) \
      LP2(0x450, BIGNUM *, ASN1_ENUMERATED_to_BN , const ASN1_ENUMERATED *, ___ai, a0, BIGNUM *, ___bn, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PRINTABLE_type(___s, ___max) \
      LP2(0x456, int, ASN1_PRINTABLE_type , const unsigned char *, ___s, a0, int, ___max, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_tag2bit(___tag) \
      LP1(0x468, unsigned long, ASN1_tag2bit , int, ___tag, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_get_object(___pp, ___plength, ___ptag, ___pclass, ___omax) \
      LP5(0x47a, int, ASN1_get_object , const unsigned char **, ___pp, a0, long *, ___plength, a1, int *, ___ptag, a2, int *, ___pclass, a3, long, ___omax, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_check_infinite_end(___p, ___len) \
      LP2(0x480, int, ASN1_check_infinite_end , unsigned char **, ___p, a0, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_put_object(___pp, ___constructed, ___length, ___tag, ___xclass) \
      LP5NR(0x486, ASN1_put_object , unsigned char **, ___pp, a0, int, ___constructed, d0, int, ___length, d1, int, ___tag, d2, int, ___xclass, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_object_size(___constructed, ___length, ___tag) \
      LP3(0x48c, int, ASN1_object_size , int, ___constructed, d0, int, ___length, d1, int, ___tag, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_dup(___i2d, ___d2i, ___x) \
      LP3(0x492, void *, ASN1_dup , i2d_of_void *, ___i2d, a0, d2i_of_void *, ___d2i, a1, char *, ___x, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_dup(___it, ___x) \
      LP2(0x498, void *, ASN1_item_dup , const ASN1_ITEM *, ___it, a0, void *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_to_UTF8(___out, ___in) \
      LP2(0x49e, int, ASN1_STRING_to_UTF8 , unsigned char **, ___out, a0, const ASN1_STRING *, ___in, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_d2i_bio(___xnew, ___d2i, ___in, ___x) \
      LP4FP(0x4a4, void *, ASN1_d2i_bio , __fpt, ___xnew, a0, d2i_of_void *, ___d2i, a1, BIO *, ___in, a2, void **, ___x, a3,\
      , AMISSL_BASE_NAME, void * (*__fpt)(void), 0, 0, 0, 0, 0, 0)

#define ASN1_item_d2i_bio(___it, ___in, ___x) \
      LP3(0x4aa, void *, ASN1_item_d2i_bio , const ASN1_ITEM *, ___it, a0, BIO *, ___in, a1, void *, ___x, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_i2d_bio(___i2d, ___out, ___x) \
      LP3(0x4b0, int, ASN1_i2d_bio , i2d_of_void *, ___i2d, a0, BIO *, ___out, a1, unsigned char *, ___x, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_i2d_bio(___it, ___out, ___x) \
      LP3(0x4b6, int, ASN1_item_i2d_bio , const ASN1_ITEM *, ___it, a0, BIO *, ___out, a1, void *, ___x, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTCTIME_print(___fp, ___a) \
      LP2(0x4bc, int, ASN1_UTCTIME_print , BIO *, ___fp, a0, ASN1_UTCTIME *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_GENERALIZEDTIME_print(___fp, ___a) \
      LP2(0x4c2, int, ASN1_GENERALIZEDTIME_print , BIO *, ___fp, a0, ASN1_GENERALIZEDTIME *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_print(___fp, ___a) \
      LP2(0x4c8, int, ASN1_TIME_print , BIO *, ___fp, a0, const ASN1_TIME *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_print(___bp, ___v) \
      LP2(0x4ce, int, ASN1_STRING_print , BIO *, ___bp, a0, ASN1_STRING *, ___v, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_print_ex(___out, ___str, ___flags) \
      LP3(0x4d4, int, ASN1_STRING_print_ex , BIO *, ___out, a0, const ASN1_STRING *, ___str, a1, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_parse(___bp, ___pp, ___len, ___indent) \
      LP4(0x4da, int, ASN1_parse , BIO *, ___bp, a0, unsigned char *, ___pp, a1, long, ___len, d0, int, ___indent, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_parse_dump(___bp, ___pp, ___len, ___indent, ___dump) \
      LP5(0x4e0, int, ASN1_parse_dump , BIO *, ___bp, a0, const unsigned char *, ___pp, a1, long, ___len, d0, int, ___indent, d1, int, ___dump, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_tag2str(___tag) \
      LP1(0x4e6, const char *, ASN1_tag2str , int, ___tag, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UNIVERSALSTRING_to_string(___s) \
      LP1(0x504, int, ASN1_UNIVERSALSTRING_to_string , ASN1_UNIVERSALSTRING *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TYPE_set_octetstring(___a, ___data, ___len) \
      LP3(0x522, int, ASN1_TYPE_set_octetstring , ASN1_TYPE *, ___a, a0, unsigned char *, ___data, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TYPE_get_octetstring(___a, ___data, ___max_len) \
      LP3(0x528, int, ASN1_TYPE_get_octetstring , const ASN1_TYPE *, ___a, a0, unsigned char *, ___data, a1, int, ___max_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TYPE_set_int_octetstring(___a, ___num, ___data, ___len) \
      LP4(0x52e, int, ASN1_TYPE_set_int_octetstring , ASN1_TYPE *, ___a, a0, long, ___num, d0, unsigned char *, ___data, a1, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TYPE_get_int_octetstring(___a, ___num, ___data, ___max_len) \
      LP4(0x534, int, ASN1_TYPE_get_int_octetstring , const ASN1_TYPE *, ___a, a0, long *, ___num, a1, unsigned char *, ___data, a2, int, ___max_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_unpack(___oct, ___it) \
      LP2(0x54c, void *, ASN1_item_unpack , const ASN1_STRING *, ___oct, a0, const ASN1_ITEM *, ___it, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_pack(___obj, ___it, ___oct) \
      LP3(0x558, ASN1_STRING *, ASN1_item_pack , void *, ___obj, a0, const ASN1_ITEM *, ___it, a1, ASN1_OCTET_STRING **, ___oct, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_set_default_mask(___mask) \
      LP1NR(0x55e, ASN1_STRING_set_default_mask , unsigned long, ___mask, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_set_default_mask_asc(___p) \
      LP1(0x564, int, ASN1_STRING_set_default_mask_asc , char *, ___p, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_get_default_mask() \
      LP0(0x56a, unsigned long, ASN1_STRING_get_default_mask ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_mbstring_copy(___out, ___in, ___len, ___inform, ___mask) \
      LP5(0x570, int, ASN1_mbstring_copy , ASN1_STRING **, ___out, a0, const unsigned char *, ___in, a1, int, ___len, d0, int, ___inform, d1, unsigned long, ___mask, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_mbstring_ncopy(___out, ___in, ___len, ___inform, ___mask, ___minsize, ___maxsize) \
      LP7(0x576, int, ASN1_mbstring_ncopy , ASN1_STRING **, ___out, a0, const unsigned char *, ___in, a1, int, ___len, d0, int, ___inform, d1, unsigned long, ___mask, d2, long, ___minsize, d3, long, ___maxsize, d4,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_set_by_NID(___out, ___in, ___inlen, ___inform, ___nid) \
      LP5(0x57c, ASN1_STRING *, ASN1_STRING_set_by_NID , ASN1_STRING **, ___out, a0, const unsigned char *, ___in, a1, int, ___inlen, d0, int, ___inform, d1, int, ___nid, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_TABLE_get(___nid) \
      LP1(0x582, ASN1_STRING_TABLE *, ASN1_STRING_TABLE_get , int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_TABLE_add(___a, ___b, ___c, ___d, ___e) \
      LP5(0x588, int, ASN1_STRING_TABLE_add , int, ___a, d0, long, ___b, d1, long, ___c, d2, unsigned long, ___d, d3, unsigned long, ___e, d4,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_TABLE_cleanup() \
      LP0NR(0x58e, ASN1_STRING_TABLE_cleanup ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_new(___it) \
      LP1(0x594, ASN1_VALUE *, ASN1_item_new , const ASN1_ITEM *, ___it, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_free(___val, ___it) \
      LP2NR(0x59a, ASN1_item_free , ASN1_VALUE *, ___val, a0, const ASN1_ITEM *, ___it, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_d2i(___val, ___in, ___len, ___it) \
      LP4(0x5a0, ASN1_VALUE *, ASN1_item_d2i , ASN1_VALUE **, ___val, a0, const unsigned char **, ___in, a1, long, ___len, d0, const ASN1_ITEM *, ___it, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_i2d(___val, ___out, ___it) \
      LP3(0x5a6, int, ASN1_item_i2d , ASN1_VALUE *, ___val, a0, unsigned char **, ___out, a1, const ASN1_ITEM *, ___it, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_add_oid_module() \
      LP0NR(0x5ac, ASN1_add_oid_module ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_ASN1_strings() \
      LP0(0x5b2, int, ERR_load_ASN1_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BOOLEAN_it() \
      LP0(0x5c4, const ASN1_ITEM *, ASN1_BOOLEAN_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TBOOLEAN_it() \
      LP0(0x5ca, const ASN1_ITEM *, ASN1_TBOOLEAN_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_FBOOLEAN_it() \
      LP0(0x5d0, const ASN1_ITEM *, ASN1_FBOOLEAN_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_SEQUENCE_it() \
      LP0(0x5d6, const ASN1_ITEM *, ASN1_SEQUENCE_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CBIGNUM_it() \
      LP0(0x5dc, const ASN1_ITEM *, CBIGNUM_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIGNUM_it() \
      LP0(0x5e2, const ASN1_ITEM *, BIGNUM_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define LONG_it() \
      LP0(0x5e8, const ASN1_ITEM *, LONG_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ZLONG_it() \
      LP0(0x5ee, const ASN1_ITEM *, ZLONG_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_ex_new(___pval, ___it) \
      LP2(0x5f4, int, ASN1_item_ex_new , ASN1_VALUE **, ___pval, a0, const ASN1_ITEM *, ___it, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_ex_free(___pval, ___it) \
      LP2NR(0x5fa, ASN1_item_ex_free , ASN1_VALUE **, ___pval, a0, const ASN1_ITEM *, ___it, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_ex_d2i(___pval, ___in, ___len, ___it, ___tag, ___aclass, ___opt, ___ctx) \
      LP8(0x618, int, ASN1_item_ex_d2i , ASN1_VALUE **, ___pval, a0, const unsigned char **, ___in, a1, long, ___len, d0, const ASN1_ITEM *, ___it, a2, int, ___tag, d1, int, ___aclass, d2, char, ___opt, d3, ASN1_TLC *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_ex_i2d(___pval, ___out, ___it, ___tag, ___aclass) \
      LP5(0x61e, int, ASN1_item_ex_i2d , ASN1_VALUE **, ___pval, a0, unsigned char **, ___out, a1, const ASN1_ITEM *, ___it, a2, int, ___tag, d0, int, ___aclass, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ctrl_pending(___b) \
      LP1(0x672, size_t, BIO_ctrl_pending , BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ctrl_wpending(___b) \
      LP1(0x678, size_t, BIO_ctrl_wpending , BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ctrl_get_write_guarantee(___b) \
      LP1(0x67e, size_t, BIO_ctrl_get_write_guarantee , BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ctrl_get_read_request(___b) \
      LP1(0x684, size_t, BIO_ctrl_get_read_request , BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ctrl_reset_read_request(___b) \
      LP1(0x68a, int, BIO_ctrl_reset_read_request , BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_set_ex_data(___bio, ___idx, ___data) \
      LP3(0x690, int, BIO_set_ex_data , BIO *, ___bio, a0, int, ___idx, d0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_get_ex_data(___bio, ___idx) \
      LP2(0x696, void *, BIO_get_ex_data , BIO *, ___bio, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_number_read(___bio) \
      LP1(0x6a2, uint64_t, BIO_number_read , BIO *, ___bio, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_number_written(___bio) \
      LP1(0x6a8, uint64_t, BIO_number_written , BIO *, ___bio, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_s_file() \
      LP0(0x6ae, const BIO_METHOD *, BIO_s_file ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_file(___filename, ___mode) \
      LP2(0x6b4, BIO *, BIO_new_file , const char *, ___filename, a0, const char *, ___mode, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_fp_amiga(___stream, ___close_flag) \
      LP2(0x6ba, BIO *, BIO_new_fp_amiga , BPTR, ___stream, a0, int, ___close_flag, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new(___type) \
      LP1(0x6c0, BIO *, BIO_new , const BIO_METHOD *, ___type, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_free(___a) \
      LP1(0x6cc, int, BIO_free , BIO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_vfree(___a) \
      LP1NR(0x6d2, BIO_vfree , BIO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_read(___b, ___data, ___dlen) \
      LP3(0x6d8, int, BIO_read , BIO *, ___b, a0, void *, ___data, a1, int, ___dlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_gets(___bp, ___buf, ___size) \
      LP3(0x6de, int, BIO_gets , BIO *, ___bp, a0, char *, ___buf, a1, int, ___size, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_write(___b, ___data, ___dlen) \
      LP3(0x6e4, int, BIO_write , BIO *, ___b, a0, const void *, ___data, a1, int, ___dlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_puts(___bp, ___buf) \
      LP2(0x6ea, int, BIO_puts , BIO *, ___bp, a0, const char *, ___buf, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_indent(___b, ___indent, ___max) \
      LP3(0x6f0, int, BIO_indent , BIO *, ___b, a0, int, ___indent, d0, int, ___max, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ctrl(___bp, ___cmd, ___larg, ___parg) \
      LP4(0x6f6, long, BIO_ctrl , BIO *, ___bp, a0, int, ___cmd, d0, long, ___larg, d1, void *, ___parg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_callback_ctrl(___b, ___cmd, ___fp) \
      LP3(0x6fc, long, BIO_callback_ctrl , BIO *, ___b, a0, int, ___cmd, d0, BIO_info_cb *, ___fp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ptr_ctrl(___bp, ___cmd, ___larg) \
      LP3(0x702, void *, BIO_ptr_ctrl , BIO *, ___bp, a0, int, ___cmd, d0, long, ___larg, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_int_ctrl(___bp, ___cmd, ___larg, ___iarg) \
      LP4(0x708, long, BIO_int_ctrl , BIO *, ___bp, a0, int, ___cmd, d0, long, ___larg, d1, int, ___iarg, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_push(___b, ___append) \
      LP2(0x70e, BIO *, BIO_push , BIO *, ___b, a0, BIO *, ___append, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_pop(___b) \
      LP1(0x714, BIO *, BIO_pop , BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_free_all(___a) \
      LP1NR(0x71a, BIO_free_all , BIO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_find_type(___b, ___bio_type) \
      LP2(0x720, BIO *, BIO_find_type , BIO *, ___b, a0, int, ___bio_type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_next(___b) \
      LP1(0x726, BIO *, BIO_next , BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_get_retry_BIO(___bio, ___reason) \
      LP2(0x72c, BIO *, BIO_get_retry_BIO , BIO *, ___bio, a0, int *, ___reason, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_get_retry_reason(___bio) \
      LP1(0x732, int, BIO_get_retry_reason , BIO *, ___bio, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_dup_chain(___in) \
      LP1(0x738, BIO *, BIO_dup_chain , BIO *, ___in, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_nread0(___bio, ___buf) \
      LP2(0x73e, int, BIO_nread0 , BIO *, ___bio, a0, char **, ___buf, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_nread(___bio, ___buf, ___num) \
      LP3(0x744, int, BIO_nread , BIO *, ___bio, a0, char **, ___buf, a1, int, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_nwrite0(___bio, ___buf) \
      LP2(0x74a, int, BIO_nwrite0 , BIO *, ___bio, a0, char **, ___buf, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_nwrite(___bio, ___buf, ___num) \
      LP3(0x750, int, BIO_nwrite , BIO *, ___bio, a0, char **, ___buf, a1, int, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_debug_callback(___bio, ___cmd, ___argp, ___argi, ___argl, ___ret) \
      LP6(0x756, long, BIO_debug_callback , BIO *, ___bio, a0, int, ___cmd, d0, const char *, ___argp, a1, int, ___argi, d1, long, ___argl, d2, long, ___ret, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_s_mem() \
      LP0(0x75c, const BIO_METHOD *, BIO_s_mem ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_mem_buf(___buf, ___len) \
      LP2(0x762, BIO *, BIO_new_mem_buf , const void *, ___buf, a0, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_s_socket() \
      LP0(0x768, const BIO_METHOD *, BIO_s_socket ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_s_connect() \
      LP0(0x76e, const BIO_METHOD *, BIO_s_connect ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_s_accept() \
      LP0(0x774, const BIO_METHOD *, BIO_s_accept ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_s_fd() \
      LP0(0x77a, const BIO_METHOD *, BIO_s_fd ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_s_log() \
      LP0(0x780, const BIO_METHOD *, BIO_s_log ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_s_bio() \
      LP0(0x786, const BIO_METHOD *, BIO_s_bio ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_s_null() \
      LP0(0x78c, const BIO_METHOD *, BIO_s_null ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_f_null() \
      LP0(0x792, const BIO_METHOD *, BIO_f_null ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_f_buffer() \
      LP0(0x798, const BIO_METHOD *, BIO_f_buffer ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_f_nbio_test() \
      LP0(0x79e, const BIO_METHOD *, BIO_f_nbio_test ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_sock_should_retry(___i) \
      LP1(0x7a4, int, BIO_sock_should_retry , int, ___i, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_sock_non_fatal_error(___error) \
      LP1(0x7aa, int, BIO_sock_non_fatal_error , int, ___error, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_fd_should_retry(___i) \
      LP1(0x7b0, int, BIO_fd_should_retry , int, ___i, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_fd_non_fatal_error(___error) \
      LP1(0x7b6, int, BIO_fd_non_fatal_error , int, ___error, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_dump(___b, ___bytes, ___len) \
      LP3(0x7bc, int, BIO_dump , BIO *, ___b, a0, const char *, ___bytes, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_dump_indent(___b, ___bytes, ___len, ___indent) \
      LP4(0x7c2, int, BIO_dump_indent , BIO *, ___b, a0, const char *, ___bytes, a1, int, ___len, d0, int, ___indent, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_gethostbyname(___name) \
      LP1(0x7c8, struct hostent *, BIO_gethostbyname , const char *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_sock_error(___sock) \
      LP1(0x7ce, int, BIO_sock_error , int, ___sock, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_socket_ioctl(___fd, ___type, ___arg) \
      LP3(0x7d4, int, BIO_socket_ioctl , int, ___fd, d0, long, ___type, d1, void *, ___arg, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_socket_nbio(___fd, ___mode) \
      LP2(0x7da, int, BIO_socket_nbio , int, ___fd, d0, int, ___mode, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_get_port(___str, ___port_ptr) \
      LP2(0x7e0, int, BIO_get_port , const char *, ___str, a0, unsigned short *, ___port_ptr, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_get_host_ip(___str, ___ip) \
      LP2(0x7e6, int, BIO_get_host_ip , const char *, ___str, a0, unsigned char *, ___ip, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_get_accept_socket(___host_port, ___mode) \
      LP2(0x7ec, int, BIO_get_accept_socket , char *, ___host_port, a0, int, ___mode, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_accept(___sock, ___ip_port) \
      LP2(0x7f2, int, BIO_accept , int, ___sock, d0, char **, ___ip_port, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_sock_init() \
      LP0(0x7f8, int, BIO_sock_init ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_set_tcp_ndelay(___sock, ___turn_on) \
      LP2(0x804, int, BIO_set_tcp_ndelay , int, ___sock, d0, int, ___turn_on, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_socket(___sock, ___close_flag) \
      LP2(0x80a, BIO *, BIO_new_socket , int, ___sock, d0, int, ___close_flag, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_fd(___fd, ___close_flag) \
      LP2(0x810, BIO *, BIO_new_fd , int, ___fd, d0, int, ___close_flag, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_connect(___host_port) \
      LP1(0x816, BIO *, BIO_new_connect , const char *, ___host_port, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_accept(___host_port) \
      LP1(0x81c, BIO *, BIO_new_accept , const char *, ___host_port, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_bio_pair(___bio1, ___writebuf1, ___bio2, ___writebuf2) \
      LP4(0x822, int, BIO_new_bio_pair , BIO **, ___bio1, a0, size_t, ___writebuf1, d0, BIO **, ___bio2, a1, size_t, ___writebuf2, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_copy_next_retry(___b) \
      LP1NR(0x828, BIO_copy_next_retry , BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_vprintf(___bio, ___format, ___args) \
      LP3(0x82e, int, BIO_vprintf , BIO *, ___bio, a0, const char *, ___format, a1, long *, ___args, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#ifndef NO_INLINE_VARARGS
#define BIO_printf(___bio, ___format, ___dummy, ...) \
    ({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; BIO_vprintf((___bio), (___format), (long *) _message); })
#endif /* !NO_INLINE_VARARGS */

#define BIO_vsnprintf(___buf, ___n, ___format, ___args) \
      LP4(0x834, int, BIO_vsnprintf , char *, ___buf, a0, size_t, ___n, d0, const char *, ___format, a1, long *, ___args, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#ifndef NO_INLINE_VARARGS
#define BIO_snprintf(___buf, ___n, ___format, ___dummy, ...) \
    ({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; BIO_vsnprintf((___buf), (___n), (___format), (long *) _message); })
#endif /* !NO_INLINE_VARARGS */

#define ERR_load_BIO_strings() \
      LP0(0x83a, int, ERR_load_BIO_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_value_one() \
      LP0(0x840, const BIGNUM *, BN_value_one ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_options() \
      LP0(0x846, char *, BN_options ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_CTX_new() \
      LP0(0x84c, BN_CTX *, BN_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_CTX_free(___c) \
      LP1NR(0x858, BN_CTX_free , BN_CTX *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_CTX_start(___ctx) \
      LP1NR(0x85e, BN_CTX_start , BN_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_CTX_get(___ctx) \
      LP1(0x864, BIGNUM *, BN_CTX_get , BN_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_CTX_end(___ctx) \
      LP1NR(0x86a, BN_CTX_end , BN_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_rand(___rnd, ___bits, ___top, ___bottom) \
      LP4(0x870, int, BN_rand , BIGNUM *, ___rnd, a0, int, ___bits, d0, int, ___top, d1, int, ___bottom, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_pseudo_rand(___rnd, ___bits, ___top, ___bottom) \
      LP4(0x876, int, BN_pseudo_rand , BIGNUM *, ___rnd, a0, int, ___bits, d0, int, ___top, d1, int, ___bottom, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_rand_range(___rnd, ___range) \
      LP2(0x87c, int, BN_rand_range , BIGNUM *, ___rnd, a0, BIGNUM *, ___range, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_pseudo_rand_range(___rnd, ___range) \
      LP2(0x882, int, BN_pseudo_rand_range , BIGNUM *, ___rnd, a0, BIGNUM *, ___range, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_num_bits(___a) \
      LP1(0x888, int, BN_num_bits , const BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_num_bits_word(___a) \
      LP1(0x88e, int, BN_num_bits_word , BN_ULONG, ___a, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_new() \
      LP0(0x894, BIGNUM *, BN_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_clear_free(___a) \
      LP1NR(0x8a0, BN_clear_free , BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_copy(___a, ___b) \
      LP2(0x8a6, BIGNUM *, BN_copy , BIGNUM *, ___a, a0, const BIGNUM *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_swap(___a, ___b) \
      LP2NR(0x8ac, BN_swap , BIGNUM *, ___a, a0, BIGNUM *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_bin2bn(___s, ___len, ___ret) \
      LP3(0x8b2, BIGNUM *, BN_bin2bn , const unsigned char *, ___s, a0, int, ___len, d0, BIGNUM *, ___ret, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_bn2bin(___a, ___to) \
      LP2(0x8b8, int, BN_bn2bin , const BIGNUM *, ___a, a0, unsigned char *, ___to, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mpi2bn(___s, ___len, ___ret) \
      LP3(0x8be, BIGNUM *, BN_mpi2bn , const unsigned char *, ___s, a0, int, ___len, d0, BIGNUM *, ___ret, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_bn2mpi(___a, ___to) \
      LP2(0x8c4, int, BN_bn2mpi , const BIGNUM *, ___a, a0, unsigned char *, ___to, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_sub(___r, ___a, ___b) \
      LP3(0x8ca, int, BN_sub , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_usub(___r, ___a, ___b) \
      LP3(0x8d0, int, BN_usub , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_uadd(___r, ___a, ___b) \
      LP3(0x8d6, int, BN_uadd , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_add(___r, ___a, ___b) \
      LP3(0x8dc, int, BN_add , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mul(___r, ___a, ___b, ___ctx) \
      LP4(0x8e2, int, BN_mul , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_sqr(___r, ___a, ___ctx) \
      LP3(0x8e8, int, BN_sqr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, BN_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_div(___dv, ___rem, ___m, ___d, ___ctx) \
      LP5(0x8ee, int, BN_div , BIGNUM *, ___dv, a0, BIGNUM *, ___rem, a1, const BIGNUM *, ___m, a2, const BIGNUM *, ___d, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_nnmod(___r, ___m, ___d, ___ctx) \
      LP4(0x8f4, int, BN_nnmod , BIGNUM *, ___r, a0, const BIGNUM *, ___m, a1, const BIGNUM *, ___d, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_add(___r, ___a, ___b, ___m, ___ctx) \
      LP5(0x8fa, int, BN_mod_add , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_add_quick(___r, ___a, ___b, ___m) \
      LP4(0x900, int, BN_mod_add_quick , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___m, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_sub(___r, ___a, ___b, ___m, ___ctx) \
      LP5(0x906, int, BN_mod_sub , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_sub_quick(___r, ___a, ___b, ___m) \
      LP4(0x90c, int, BN_mod_sub_quick , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___m, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_mul(___r, ___a, ___b, ___m, ___ctx) \
      LP5(0x912, int, BN_mod_mul , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_sqr(___r, ___a, ___m, ___ctx) \
      LP4(0x918, int, BN_mod_sqr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___m, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_lshift1(___r, ___a, ___m, ___ctx) \
      LP4(0x91e, int, BN_mod_lshift1 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___m, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_lshift1_quick(___r, ___a, ___m) \
      LP3(0x924, int, BN_mod_lshift1_quick , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___m, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_lshift(___r, ___a, ___n, ___m, ___ctx) \
      LP5(0x92a, int, BN_mod_lshift , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, int, ___n, d0, const BIGNUM *, ___m, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_lshift_quick(___r, ___a, ___n, ___m) \
      LP4(0x930, int, BN_mod_lshift_quick , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, int, ___n, d0, const BIGNUM *, ___m, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_word(___a, ___w) \
      LP2(0x936, BN_ULONG, BN_mod_word , const BIGNUM *, ___a, a0, BN_ULONG, ___w, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_div_word(___a, ___w) \
      LP2(0x93c, BN_ULONG, BN_div_word , BIGNUM *, ___a, a0, BN_ULONG, ___w, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mul_word(___a, ___w) \
      LP2(0x942, int, BN_mul_word , BIGNUM *, ___a, a0, BN_ULONG, ___w, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_add_word(___a, ___w) \
      LP2(0x948, int, BN_add_word , BIGNUM *, ___a, a0, BN_ULONG, ___w, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_sub_word(___a, ___w) \
      LP2(0x94e, int, BN_sub_word , BIGNUM *, ___a, a0, BN_ULONG, ___w, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_set_word(___a, ___w) \
      LP2(0x954, int, BN_set_word , BIGNUM *, ___a, a0, BN_ULONG, ___w, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get_word(___a) \
      LP1(0x95a, BN_ULONG, BN_get_word , const BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_cmp(___a, ___b) \
      LP2(0x960, int, BN_cmp , const BIGNUM *, ___a, a0, const BIGNUM *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_free(___a) \
      LP1NR(0x966, BN_free , BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_is_bit_set(___a, ___n) \
      LP2(0x96c, int, BN_is_bit_set , const BIGNUM *, ___a, a0, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_lshift(___r, ___a, ___n) \
      LP3(0x972, int, BN_lshift , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_lshift1(___r, ___a) \
      LP2(0x978, int, BN_lshift1 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_exp(___r, ___a, ___p, ___ctx) \
      LP4(0x97e, int, BN_exp , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_exp(___r, ___a, ___p, ___m, ___ctx) \
      LP5(0x984, int, BN_mod_exp , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_exp_mont(___r, ___a, ___p, ___m, ___ctx, ___m_ctx) \
      LP6(0x98a, int, BN_mod_exp_mont , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0, BN_MONT_CTX *, ___m_ctx, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_exp_mont_word(___r, ___a, ___p, ___m, ___ctx, ___m_ctx) \
      LP6(0x990, int, BN_mod_exp_mont_word , BIGNUM *, ___r, a0, BN_ULONG, ___a, d0, const BIGNUM *, ___p, a1, const BIGNUM *, ___m, a2, BN_CTX *, ___ctx, a3, BN_MONT_CTX *, ___m_ctx, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_exp2_mont(___r, ___a1, ___p1, ___a2, ___p2, ___m, ___ctx, ___m_ctx) \
      LP8(0x996, int, BN_mod_exp2_mont , BIGNUM *, ___r, a0, const BIGNUM *, ___a1, a1, const BIGNUM *, ___p1, a2, const BIGNUM *, ___a2, a3, const BIGNUM *, ___p2, d0, const BIGNUM *, ___m, d1, BN_CTX *, ___ctx, d2, BN_MONT_CTX *, ___m_ctx, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_exp_simple(___r, ___a, ___p, ___m, ___ctx) \
      LP5(0x99c, int, BN_mod_exp_simple , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mask_bits(___a, ___n) \
      LP2(0x9a2, int, BN_mask_bits , BIGNUM *, ___a, a0, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_print(___fp, ___a) \
      LP2(0x9a8, int, BN_print , BIO *, ___fp, a0, const BIGNUM *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_reciprocal(___r, ___m, ___len, ___ctx) \
      LP4(0x9ae, int, BN_reciprocal , BIGNUM *, ___r, a0, const BIGNUM *, ___m, a1, int, ___len, d0, BN_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_rshift(___r, ___a, ___n) \
      LP3(0x9b4, int, BN_rshift , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_rshift1(___r, ___a) \
      LP2(0x9ba, int, BN_rshift1 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_clear(___a) \
      LP1NR(0x9c0, BN_clear , BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_dup(___a) \
      LP1(0x9c6, BIGNUM *, BN_dup , const BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_ucmp(___a, ___b) \
      LP2(0x9cc, int, BN_ucmp , const BIGNUM *, ___a, a0, const BIGNUM *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_set_bit(___a, ___n) \
      LP2(0x9d2, int, BN_set_bit , BIGNUM *, ___a, a0, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_clear_bit(___a, ___n) \
      LP2(0x9d8, int, BN_clear_bit , BIGNUM *, ___a, a0, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_bn2hex(___a) \
      LP1(0x9de, char *, BN_bn2hex , const BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_bn2dec(___a) \
      LP1(0x9e4, char *, BN_bn2dec , const BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_hex2bn(___a, ___str) \
      LP2(0x9ea, int, BN_hex2bn , BIGNUM **, ___a, a0, const char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_dec2bn(___a, ___str) \
      LP2(0x9f0, int, BN_dec2bn , BIGNUM **, ___a, a0, const char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_gcd(___r, ___a, ___b, ___ctx) \
      LP4(0x9f6, int, BN_gcd , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_kronecker(___a, ___b, ___ctx) \
      LP3(0x9fc, int, BN_kronecker , const BIGNUM *, ___a, a0, const BIGNUM *, ___b, a1, BN_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_inverse(___ret, ___a, ___n, ___ctx) \
      LP4(0xa02, BIGNUM *, BN_mod_inverse , BIGNUM *, ___ret, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___n, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_sqrt(___ret, ___a, ___n, ___ctx) \
      LP4(0xa08, BIGNUM *, BN_mod_sqrt , BIGNUM *, ___ret, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___n, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_generate_prime(___ret, ___bits, ___safe, ___add, ___rem, ___callback, ___cb_arg) \
      LP7FP(0xa0e, BIGNUM *, BN_generate_prime , BIGNUM *, ___ret, a0, int, ___bits, d0, int, ___safe, d1, const BIGNUM *, ___add, a1, const BIGNUM *, ___rem, a2, __fpt, ___callback, a3, void *, ___cb_arg, d2,\
      , AMISSL_BASE_NAME, void (*__fpt)(int,int,void *), 0, 0, 0, 0, 0, 0)

#define BN_is_prime(___p, ___nchecks, ___callback, ___ctx, ___cb_arg) \
      LP5FP(0xa14, int, BN_is_prime , const BIGNUM *, ___p, a0, int, ___nchecks, d0, __fpt, ___callback, a1, BN_CTX *, ___ctx, a2, void *, ___cb_arg, a3,\
      , AMISSL_BASE_NAME, void (*__fpt)(int,int,void *), 0, 0, 0, 0, 0, 0)

#define BN_is_prime_fasttest(___p, ___nchecks, ___callback, ___ctx, ___cb_arg, ___do_trial_division) \
      LP6FP(0xa1a, int, BN_is_prime_fasttest , const BIGNUM *, ___p, a0, int, ___nchecks, d0, __fpt, ___callback, a1, BN_CTX *, ___ctx, a2, void *, ___cb_arg, a3, int, ___do_trial_division, d1,\
      , AMISSL_BASE_NAME, void (*__fpt)(int,int,void *), 0, 0, 0, 0, 0, 0)

#define BN_MONT_CTX_new() \
      LP0(0xa20, BN_MONT_CTX *, BN_MONT_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_mul_montgomery(___r, ___a, ___b, ___mont, ___ctx) \
      LP5(0xa2c, int, BN_mod_mul_montgomery , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, BN_MONT_CTX *, ___mont, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_from_montgomery(___r, ___a, ___mont, ___ctx) \
      LP4(0xa32, int, BN_from_montgomery , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, BN_MONT_CTX *, ___mont, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_MONT_CTX_free(___mont) \
      LP1NR(0xa38, BN_MONT_CTX_free , BN_MONT_CTX *, ___mont, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_MONT_CTX_set(___mont, ___mod, ___ctx) \
      LP3(0xa3e, int, BN_MONT_CTX_set , BN_MONT_CTX *, ___mont, a0, const BIGNUM *, ___mod, a1, BN_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_MONT_CTX_copy(___to, ___from) \
      LP2(0xa44, BN_MONT_CTX *, BN_MONT_CTX_copy , BN_MONT_CTX *, ___to, a0, BN_MONT_CTX *, ___from, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_new(___A, ___Ai, ___mod) \
      LP3(0xa4a, BN_BLINDING *, BN_BLINDING_new , BIGNUM *, ___A, a0, BIGNUM *, ___Ai, a1, BIGNUM *, ___mod, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_free(___b) \
      LP1NR(0xa50, BN_BLINDING_free , BN_BLINDING *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_update(___b, ___ctx) \
      LP2(0xa56, int, BN_BLINDING_update , BN_BLINDING *, ___b, a0, BN_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_convert(___n, ___r, ___ctx) \
      LP3(0xa5c, int, BN_BLINDING_convert , BIGNUM *, ___n, a0, BN_BLINDING *, ___r, a1, BN_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_invert(___n, ___b, ___ctx) \
      LP3(0xa62, int, BN_BLINDING_invert , BIGNUM *, ___n, a0, BN_BLINDING *, ___b, a1, BN_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_set_params(___mul, ___high, ___low, ___mont) \
      LP4NR(0xa68, BN_set_params , int, ___mul, d0, int, ___high, d1, int, ___low, d2, int, ___mont, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get_params(___which) \
      LP1(0xa6e, int, BN_get_params , int, ___which, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_RECP_CTX_new() \
      LP0(0xa7a, BN_RECP_CTX *, BN_RECP_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_RECP_CTX_free(___recp) \
      LP1NR(0xa80, BN_RECP_CTX_free , BN_RECP_CTX *, ___recp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_RECP_CTX_set(___recp, ___rdiv, ___ctx) \
      LP3(0xa86, int, BN_RECP_CTX_set , BN_RECP_CTX *, ___recp, a0, const BIGNUM *, ___rdiv, a1, BN_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_mul_reciprocal(___r, ___x, ___y, ___recp, ___ctx) \
      LP5(0xa8c, int, BN_mod_mul_reciprocal , BIGNUM *, ___r, a0, const BIGNUM *, ___x, a1, const BIGNUM *, ___y, a2, BN_RECP_CTX *, ___recp, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_exp_recp(___r, ___a, ___p, ___m, ___ctx) \
      LP5(0xa92, int, BN_mod_exp_recp , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_div_recp(___dv, ___rem, ___m, ___recp, ___ctx) \
      LP5(0xa98, int, BN_div_recp , BIGNUM *, ___dv, a0, BIGNUM *, ___rem, a1, const BIGNUM *, ___m, a2, BN_RECP_CTX *, ___recp, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_bntest_rand(___rnd, ___bits, ___top, ___bottom) \
      LP4(0xace, int, BN_bntest_rand , BIGNUM *, ___rnd, a0, int, ___bits, d0, int, ___top, d1, int, ___bottom, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_BN_strings() \
      LP0(0xad4, int, ERR_load_BN_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BUF_MEM_new() \
      LP0(0xada, BUF_MEM *, BUF_MEM_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BUF_MEM_free(___a) \
      LP1NR(0xae0, BUF_MEM_free , BUF_MEM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BUF_MEM_grow(___str, ___len) \
      LP2(0xae6, size_t, BUF_MEM_grow , BUF_MEM *, ___str, a0, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BUF_MEM_grow_clean(___str, ___len) \
      LP2(0xaec, size_t, BUF_MEM_grow_clean , BUF_MEM *, ___str, a0, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_BUF_strings() \
      LP0(0xb04, int, ERR_load_BUF_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define COMP_CTX_new(___meth) \
      LP1(0xb0a, COMP_CTX *, COMP_CTX_new , COMP_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define COMP_CTX_free(___ctx) \
      LP1NR(0xb10, COMP_CTX_free , COMP_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define COMP_compress_block(___ctx, ___out, ___olen, ___in, ___ilen) \
      LP5(0xb16, int, COMP_compress_block , COMP_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int, ___olen, d0, unsigned char *, ___in, a2, int, ___ilen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define COMP_expand_block(___ctx, ___out, ___olen, ___in, ___ilen) \
      LP5(0xb1c, int, COMP_expand_block , COMP_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int, ___olen, d0, unsigned char *, ___in, a2, int, ___ilen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define COMP_zlib() \
      LP0(0xb28, COMP_METHOD *, COMP_zlib ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_COMP_strings() \
      LP0(0xb2e, int, ERR_load_COMP_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_set_default_method(___meth) \
      LP1(0xb34, int, CONF_set_default_method , CONF_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_set_nconf(___conf, ___hash) \
      LP2NR(0xb3a, CONF_set_nconf , CONF *, ___conf, a0, LHASH_OF(CONF_VALUE) *, ___hash, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_load(___conf, ___file, ___eline) \
      LP3(0xb40, LHASH_OF(CONF_VALUE) *, CONF_load , LHASH_OF(CONF_VALUE) *, ___conf, a0, const char *, ___file, a1, long *, ___eline, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_load_bio(___conf, ___bp, ___eline) \
      LP3(0xb46, LHASH_OF(CONF_VALUE) *, CONF_load_bio , LHASH_OF(CONF_VALUE) *, ___conf, a0, BIO *, ___bp, a1, long *, ___eline, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_get_section(___conf, ___section) \
      LP2(0xb4c, STACK_OF(CONF_VALUE) *, CONF_get_section , LHASH_OF(CONF_VALUE) *, ___conf, a0, const char *, ___section, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_get_string(___conf, ___group, ___name) \
      LP3(0xb52, char *, CONF_get_string , LHASH_OF(CONF_VALUE) *, ___conf, a0, const char *, ___group, a1, const char *, ___name, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_get_number(___conf, ___group, ___name) \
      LP3(0xb58, long, CONF_get_number , LHASH_OF(CONF_VALUE) *, ___conf, a0, const char *, ___group, a1, const char *, ___name, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_free(___conf) \
      LP1NR(0xb5e, CONF_free , LHASH_OF(CONF_VALUE) *, ___conf, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_dump_bio(___conf, ___out) \
      LP2(0xb64, int, CONF_dump_bio , LHASH_OF(CONF_VALUE) *, ___conf, a0, BIO *, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_config(___config_name) \
      LP1NR(0xb6a, OPENSSL_config , const char *, ___config_name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_new(___meth) \
      LP1(0xb76, CONF *, NCONF_new , CONF_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_default() \
      LP0(0xb7c, CONF_METHOD *, NCONF_default ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_WIN32() \
      LP0(0xb82, CONF_METHOD *, NCONF_WIN32 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_free(___conf) \
      LP1NR(0xb88, NCONF_free , CONF *, ___conf, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_free_data(___conf) \
      LP1NR(0xb8e, NCONF_free_data , CONF *, ___conf, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_load(___conf, ___file, ___eline) \
      LP3(0xb94, int, NCONF_load , CONF *, ___conf, a0, const char *, ___file, a1, long *, ___eline, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_load_bio(___conf, ___bp, ___eline) \
      LP3(0xb9a, int, NCONF_load_bio , CONF *, ___conf, a0, BIO *, ___bp, a1, long *, ___eline, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_get_section(___conf, ___section) \
      LP2(0xba0, STACK_OF(CONF_VALUE) *, NCONF_get_section , const CONF *, ___conf, a0, const char *, ___section, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_get_string(___conf, ___group, ___name) \
      LP3(0xba6, char *, NCONF_get_string , const CONF *, ___conf, a0, const char *, ___group, a1, const char *, ___name, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_get_number_e(___conf, ___group, ___name, ___result) \
      LP4(0xbac, int, NCONF_get_number_e , const CONF *, ___conf, a0, const char *, ___group, a1, const char *, ___name, a2, long *, ___result, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_dump_bio(___conf, ___out) \
      LP2(0xbb2, int, NCONF_dump_bio , const CONF *, ___conf, a0, BIO *, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_modules_load(___cnf, ___appname, ___flags) \
      LP3(0xbb8, int, CONF_modules_load , const CONF *, ___cnf, a0, const char *, ___appname, a1, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_modules_load_file(___filename, ___appname, ___flags) \
      LP3(0xbbe, int, CONF_modules_load_file , const char *, ___filename, a0, const char *, ___appname, a1, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_modules_unload(___all) \
      LP1NR(0xbc4, CONF_modules_unload , int, ___all, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_modules_finish() \
      LP0NR(0xbca, CONF_modules_finish ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_module_add(___name, ___ifunc, ___ffunc) \
      LP3(0xbd6, int, CONF_module_add , const char *, ___name, a0, conf_init_func *, ___ifunc, a1, conf_finish_func *, ___ffunc, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_imodule_get_name(___md) \
      LP1(0xbdc, const char *, CONF_imodule_get_name , const CONF_IMODULE *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_imodule_get_value(___md) \
      LP1(0xbe2, const char *, CONF_imodule_get_value , const CONF_IMODULE *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_imodule_get_usr_data(___md) \
      LP1(0xbe8, void *, CONF_imodule_get_usr_data , const CONF_IMODULE *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_imodule_set_usr_data(___md, ___usr_data) \
      LP2NR(0xbee, CONF_imodule_set_usr_data , CONF_IMODULE *, ___md, a0, void *, ___usr_data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_imodule_get_module(___md) \
      LP1(0xbf4, CONF_MODULE *, CONF_imodule_get_module , const CONF_IMODULE *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_imodule_get_flags(___md) \
      LP1(0xbfa, unsigned long, CONF_imodule_get_flags , const CONF_IMODULE *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_imodule_set_flags(___md, ___flags) \
      LP2NR(0xc00, CONF_imodule_set_flags , CONF_IMODULE *, ___md, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_module_get_usr_data(___pmod) \
      LP1(0xc06, void *, CONF_module_get_usr_data , CONF_MODULE *, ___pmod, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_module_set_usr_data(___pmod, ___usr_data) \
      LP2NR(0xc0c, CONF_module_set_usr_data , CONF_MODULE *, ___pmod, a0, void *, ___usr_data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_get1_default_config_file() \
      LP0(0xc12, char *, CONF_get1_default_config_file ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_parse_list(___list, ___sep, ___nospc, ___list_cb, ___arg) \
      LP5FP(0xc18, int, CONF_parse_list , const char *, ___list, a0, int, ___sep, d0, int, ___nospc, d1, __fpt, ___list_cb, a1, void *, ___arg, a2,\
      , AMISSL_BASE_NAME, int (*__fpt)(const char *elem,int len,void *usr), 0, 0, 0, 0, 0, 0)

#define OPENSSL_load_builtin_modules() \
      LP0NR(0xc1e, OPENSSL_load_builtin_modules ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_CONF_strings() \
      LP0(0xc24, int, ERR_load_CONF_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_mem_ctrl(___mode) \
      LP1(0xc54, int, CRYPTO_mem_ctrl , int, ___mode, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_issetugid() \
      LP0(0xc6c, int, OPENSSL_issetugid ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_get_ex_new_index(___class_index, ___argl, ___argp, ___new_func, ___dup_func, ___free_func) \
      LP6(0xc84, int, CRYPTO_get_ex_new_index , int, ___class_index, d0, long, ___argl, d1, void *, ___argp, a0, CRYPTO_EX_new *, ___new_func, a1, CRYPTO_EX_dup *, ___dup_func, a2, CRYPTO_EX_free *, ___free_func, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_new_ex_data(___class_index, ___obj, ___ad) \
      LP3(0xc8a, int, CRYPTO_new_ex_data , int, ___class_index, d0, void *, ___obj, a0, CRYPTO_EX_DATA *, ___ad, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_dup_ex_data(___class_index, ___to, ___from) \
      LP3(0xc90, int, CRYPTO_dup_ex_data , int, ___class_index, d0, CRYPTO_EX_DATA *, ___to, a0, const CRYPTO_EX_DATA *, ___from, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_free_ex_data(___class_index, ___obj, ___ad) \
      LP3NR(0xc96, CRYPTO_free_ex_data , int, ___class_index, d0, void *, ___obj, a0, CRYPTO_EX_DATA *, ___ad, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_set_ex_data(___ad, ___idx, ___val) \
      LP3(0xc9c, int, CRYPTO_set_ex_data , CRYPTO_EX_DATA *, ___ad, a0, int, ___idx, d0, void *, ___val, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_get_ex_data(___ad, ___idx) \
      LP2(0xca2, void *, CRYPTO_get_ex_data , const CRYPTO_EX_DATA *, ___ad, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_set_mem_functions(___m, ___r, ___f) \
      LP3FP3(0xd2c, int, CRYPTO_set_mem_functions , __fpt1, ___m, a0, __fpt2, ___r, a1, __fpt3, ___f, a2,\
      , AMISSL_BASE_NAME, void * (*__fpt1)(size_t,const char *,int), void * (*__fpt2)(void *,size_t,const char *,int), void (*__fpt3)(void *,const char *,int), 0, 0, 0, 0, 0, 0)

#define CRYPTO_get_mem_functions(___m, ___r, ___f) \
      LP3NRFP3(0xd4a, CRYPTO_get_mem_functions , __fpt1, ___m, a0, __fpt2, ___r, a1, __fpt3, ___f, a2,\
      , AMISSL_BASE_NAME, void * (*__fpt1)(size_t,const char *,int), void * (*__fpt2)(void *,size_t,const char *,int), void (*__fpt3)(void *,const char *,int), 0, 0, 0, 0, 0, 0)

#define CRYPTO_malloc(___num, ___file, ___line) \
      LP3(0xd74, void *, CRYPTO_malloc , size_t, ___num, d0, const char *, ___file, a0, int, ___line, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_free(___str, ___file, ___line) \
      LP3NR(0xd7a, CRYPTO_free , void *, ___str, a0, const char *, ___file, a1, int, ___line, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_realloc(___addr, ___num, ___file, ___line) \
      LP4(0xd80, void *, CRYPTO_realloc , void *, ___addr, a0, size_t, ___num, d0, const char *, ___file, a1, int, ___line, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_cleanse(___ptr, ___len) \
      LP2NR(0xd92, OPENSSL_cleanse , void *, ___ptr, a0, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_CRYPTO_strings() \
      LP0(0xde6, int, ERR_load_CRYPTO_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_DSO_strings() \
      LP0NR(0xe7c, ERR_load_DSO_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GFp_simple_method() \
      LP0(0xe82, const EC_METHOD *, EC_GFp_simple_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GFp_mont_method() \
      LP0(0xe88, const EC_METHOD *, EC_GFp_mont_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_new(___a) \
      LP1(0xe8e, EC_GROUP *, EC_GROUP_new , const EC_METHOD *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_free(___a) \
      LP1NR(0xe94, EC_GROUP_free , EC_GROUP *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_clear_free(___a) \
      LP1NR(0xe9a, EC_GROUP_clear_free , EC_GROUP *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_copy(___a, ___b) \
      LP2(0xea0, int, EC_GROUP_copy , EC_GROUP *, ___a, a0, const EC_GROUP *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_method_of(___a) \
      LP1(0xea6, const EC_METHOD *, EC_GROUP_method_of , const EC_GROUP *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_set_curve_GFp(___a1, ___p, ___a, ___b, ___a2) \
      LP5(0xeac, int, EC_GROUP_set_curve_GFp , EC_GROUP *, ___a1, a0, const BIGNUM *, ___p, a1, const BIGNUM *, ___a, a2, const BIGNUM *, ___b, a3, BN_CTX *, ___a2, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_curve_GFp(___a1, ___p, ___a, ___b, ___a2) \
      LP5(0xeb2, int, EC_GROUP_get_curve_GFp , const EC_GROUP *, ___a1, a0, BIGNUM *, ___p, a1, BIGNUM *, ___a, a2, BIGNUM *, ___b, a3, BN_CTX *, ___a2, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_new_curve_GFp(___p, ___a, ___b, ___a1) \
      LP4(0xeb8, EC_GROUP *, EC_GROUP_new_curve_GFp , const BIGNUM *, ___p, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, BN_CTX *, ___a1, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_set_generator(___a1, ___generator, ___order, ___cofactor) \
      LP4(0xebe, int, EC_GROUP_set_generator , EC_GROUP *, ___a1, a0, const EC_POINT *, ___generator, a1, const BIGNUM *, ___order, a2, const BIGNUM *, ___cofactor, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get0_generator(___a1) \
      LP1(0xec4, const EC_POINT *, EC_GROUP_get0_generator , const EC_GROUP *, ___a1, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_order(___a1, ___order, ___a2) \
      LP3(0xeca, int, EC_GROUP_get_order , const EC_GROUP *, ___a1, a0, BIGNUM *, ___order, a1, BN_CTX *, ___a2, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_cofactor(___a1, ___cofactor, ___a2) \
      LP3(0xed0, int, EC_GROUP_get_cofactor , const EC_GROUP *, ___a1, a0, BIGNUM *, ___cofactor, a1, BN_CTX *, ___a2, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_new(___a) \
      LP1(0xed6, EC_POINT *, EC_POINT_new , const EC_GROUP *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_free(___a) \
      LP1NR(0xedc, EC_POINT_free , EC_POINT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_clear_free(___a) \
      LP1NR(0xee2, EC_POINT_clear_free , EC_POINT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_copy(___a, ___b) \
      LP2(0xee8, int, EC_POINT_copy , EC_POINT *, ___a, a0, const EC_POINT *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_method_of(___a) \
      LP1(0xeee, const EC_METHOD *, EC_POINT_method_of , const EC_POINT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_set_to_infinity(___a, ___b) \
      LP2(0xef4, int, EC_POINT_set_to_infinity , const EC_GROUP *, ___a, a0, EC_POINT *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_set_Jprojective_coordinates_GFp(___a1, ___a2, ___x, ___y, ___z, ___a3) \
      LP6(0xefa, int, EC_POINT_set_Jprojective_coordinates_GFp , const EC_GROUP *, ___a1, a0, EC_POINT *, ___a2, a1, const BIGNUM *, ___x, a2, const BIGNUM *, ___y, a3, const BIGNUM *, ___z, d0, BN_CTX *, ___a3, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_get_Jprojective_coordinates_GFp(___a1, ___a2, ___x, ___y, ___z, ___a3) \
      LP6(0xf00, int, EC_POINT_get_Jprojective_coordinates_GFp , const EC_GROUP *, ___a1, a0, const EC_POINT *, ___a2, a1, BIGNUM *, ___x, a2, BIGNUM *, ___y, a3, BIGNUM *, ___z, d0, BN_CTX *, ___a3, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_set_affine_coordinates_GFp(___a1, ___a2, ___x, ___y, ___a3) \
      LP5(0xf06, int, EC_POINT_set_affine_coordinates_GFp , const EC_GROUP *, ___a1, a0, EC_POINT *, ___a2, a1, const BIGNUM *, ___x, a2, const BIGNUM *, ___y, a3, BN_CTX *, ___a3, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_get_affine_coordinates_GFp(___a1, ___a2, ___x, ___y, ___a3) \
      LP5(0xf0c, int, EC_POINT_get_affine_coordinates_GFp , const EC_GROUP *, ___a1, a0, const EC_POINT *, ___a2, a1, BIGNUM *, ___x, a2, BIGNUM *, ___y, a3, BN_CTX *, ___a3, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_set_compressed_coordinates_GFp(___a1, ___a2, ___x, ___y_bit, ___a3) \
      LP5(0xf12, int, EC_POINT_set_compressed_coordinates_GFp , const EC_GROUP *, ___a1, a0, EC_POINT *, ___a2, a1, const BIGNUM *, ___x, a2, int, ___y_bit, d0, BN_CTX *, ___a3, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_point2oct(___a1, ___a2, ___form, ___buf, ___len, ___a3) \
      LP6(0xf18, size_t, EC_POINT_point2oct , const EC_GROUP *, ___a1, a0, const EC_POINT *, ___a2, a1, point_conversion_form_t, ___form, d0, unsigned char *, ___buf, a2, size_t, ___len, d1, BN_CTX *, ___a3, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_oct2point(___a1, ___a2, ___buf, ___len, ___a3) \
      LP5(0xf1e, int, EC_POINT_oct2point , const EC_GROUP *, ___a1, a0, EC_POINT *, ___a2, a1, const unsigned char *, ___buf, a2, size_t, ___len, d0, BN_CTX *, ___a3, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_add(___a1, ___r, ___a, ___b, ___a2) \
      LP5(0xf24, int, EC_POINT_add , const EC_GROUP *, ___a1, a0, EC_POINT *, ___r, a1, const EC_POINT *, ___a, a2, const EC_POINT *, ___b, a3, BN_CTX *, ___a2, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_dbl(___a1, ___r, ___a, ___a2) \
      LP4(0xf2a, int, EC_POINT_dbl , const EC_GROUP *, ___a1, a0, EC_POINT *, ___r, a1, const EC_POINT *, ___a, a2, BN_CTX *, ___a2, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_invert(___a1, ___a2, ___a3) \
      LP3(0xf30, int, EC_POINT_invert , const EC_GROUP *, ___a1, a0, EC_POINT *, ___a2, a1, BN_CTX *, ___a3, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_is_at_infinity(___a, ___b) \
      LP2(0xf36, int, EC_POINT_is_at_infinity , const EC_GROUP *, ___a, a0, const EC_POINT *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_is_on_curve(___a, ___b, ___c) \
      LP3(0xf3c, int, EC_POINT_is_on_curve , const EC_GROUP *, ___a, a0, const EC_POINT *, ___b, a1, BN_CTX *, ___c, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_cmp(___a1, ___a, ___b, ___a2) \
      LP4(0xf42, int, EC_POINT_cmp , const EC_GROUP *, ___a1, a0, const EC_POINT *, ___a, a1, const EC_POINT *, ___b, a2, BN_CTX *, ___a2, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_make_affine(___a, ___b, ___c) \
      LP3(0xf48, int, EC_POINT_make_affine , const EC_GROUP *, ___a, a0, EC_POINT *, ___b, a1, BN_CTX *, ___c, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINTs_make_affine(___a1, ___num, ___a2, ___a3) \
      LP4(0xf4e, int, EC_POINTs_make_affine , const EC_GROUP *, ___a1, a0, size_t, ___num, d0, EC_POINT **, ___a2, a1, BN_CTX *, ___a3, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINTs_mul(___a1, ___r, ___a2, ___num, ___a3, ___a4, ___a5) \
      LP7(0xf54, int, EC_POINTs_mul , const EC_GROUP *, ___a1, a0, EC_POINT *, ___r, a1, const BIGNUM *, ___a2, a2, size_t, ___num, d0, const EC_POINT **, ___a3, a3, const BIGNUM **, ___a4, d1, BN_CTX *, ___a5, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_mul(___a1, ___r, ___a2, ___a3, ___a4, ___a5) \
      LP6(0xf5a, int, EC_POINT_mul , const EC_GROUP *, ___a1, a0, EC_POINT *, ___r, a1, const BIGNUM *, ___a2, a2, const EC_POINT *, ___a3, a3, const BIGNUM *, ___a4, d0, BN_CTX *, ___a5, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_precompute_mult(___a, ___b) \
      LP2(0xf60, int, EC_GROUP_precompute_mult , EC_GROUP *, ___a, a0, BN_CTX *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_EC_strings() \
      LP0(0xf66, int, ERR_load_EC_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_put_error(___lib, ___func, ___reason, ___file, ___line) \
      LP5NR(0xf6c, ERR_put_error , int, ___lib, d0, int, ___func, d1, int, ___reason, d2, const char *, ___file, a0, int, ___line, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_set_error_data(___data, ___flags) \
      LP2NR(0xf72, ERR_set_error_data , char *, ___data, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_get_error() \
      LP0(0xf78, unsigned long, ERR_get_error ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_get_error_line(___file, ___line) \
      LP2(0xf7e, unsigned long, ERR_get_error_line , const char **, ___file, a0, int *, ___line, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_get_error_line_data(___file, ___line, ___data, ___flags) \
      LP4(0xf84, unsigned long, ERR_get_error_line_data , const char **, ___file, a0, int *, ___line, a1, const char **, ___data, a2, int *, ___flags, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_peek_error() \
      LP0(0xf8a, unsigned long, ERR_peek_error ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_peek_error_line(___file, ___line) \
      LP2(0xf90, unsigned long, ERR_peek_error_line , const char **, ___file, a0, int *, ___line, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_peek_error_line_data(___file, ___line, ___data, ___flags) \
      LP4(0xf96, unsigned long, ERR_peek_error_line_data , const char **, ___file, a0, int *, ___line, a1, const char **, ___data, a2, int *, ___flags, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_peek_last_error() \
      LP0(0xf9c, unsigned long, ERR_peek_last_error ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_peek_last_error_line(___file, ___line) \
      LP2(0xfa2, unsigned long, ERR_peek_last_error_line , const char **, ___file, a0, int *, ___line, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_peek_last_error_line_data(___file, ___line, ___data, ___flags) \
      LP4(0xfa8, unsigned long, ERR_peek_last_error_line_data , const char **, ___file, a0, int *, ___line, a1, const char **, ___data, a2, int *, ___flags, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_clear_error() \
      LP0NR(0xfae, ERR_clear_error ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_error_string(___e, ___buf) \
      LP2(0xfb4, char *, ERR_error_string , unsigned long, ___e, d0, char *, ___buf, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_error_string_n(___e, ___buf, ___len) \
      LP3NR(0xfba, ERR_error_string_n , unsigned long, ___e, d0, char *, ___buf, a0, size_t, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_lib_error_string(___e) \
      LP1(0xfc0, const char *, ERR_lib_error_string , unsigned long, ___e, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_func_error_string(___e) \
      LP1(0xfc6, const char *, ERR_func_error_string , unsigned long, ___e, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_reason_error_string(___e) \
      LP1(0xfcc, const char *, ERR_reason_error_string , unsigned long, ___e, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_print_errors_cb(___cb, ___u) \
      LP2NRFP(0xfd2, ERR_print_errors_cb , __fpt, ___cb, a0, void *, ___u, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const char *str,size_t len,void *u), 0, 0, 0, 0, 0, 0)

#define ERR_print_errors(___bp) \
      LP1NR(0xfd8, ERR_print_errors , BIO *, ___bp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_add_error_vdata(___num, ___args) \
      LP2NR(0xfde, ERR_add_error_vdata , int, ___num, d0, long *, ___args, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#ifndef NO_INLINE_VARARGS
#define ERR_add_error_data(___num, ___dummy, ...) \
    ({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; ERR_add_error_vdata((___num), (long *) _message); })
#endif /* !NO_INLINE_VARARGS */

#define ERR_load_strings(___lib, ___str) \
      LP2(0xfe4, int, ERR_load_strings , int, ___lib, d0, ERR_STRING_DATA *, ___str, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_unload_strings(___lib, ___str) \
      LP2(0xfea, int, ERR_unload_strings , int, ___lib, d0, ERR_STRING_DATA *, ___str, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_ERR_strings() \
      LP0(0xff0, int, ERR_load_ERR_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_get_state() \
      LP0(0x1008, ERR_STATE *, ERR_get_state ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_get_next_error_library() \
      LP0(0x1020, int, ERR_get_next_error_library ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_copy_ex(___out, ___in) \
      LP2(0x104a, int, EVP_MD_CTX_copy_ex , EVP_MD_CTX *, ___out, a0, const EVP_MD_CTX *, ___in, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestInit_ex(___ctx, ___type, ___impl) \
      LP3(0x1050, int, EVP_DigestInit_ex , EVP_MD_CTX *, ___ctx, a0, const EVP_MD *, ___type, a1, ENGINE *, ___impl, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestUpdate(___ctx, ___d, ___cnt) \
      LP3(0x1056, int, EVP_DigestUpdate , EVP_MD_CTX *, ___ctx, a0, const void *, ___d, a1, unsigned int, ___cnt, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestFinal_ex(___ctx, ___md, ___s) \
      LP3(0x105c, int, EVP_DigestFinal_ex , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___md, a1, unsigned int *, ___s, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_Digest(___data, ___count, ___md, ___size, ___type, ___impl) \
      LP6(0x1062, int, EVP_Digest , void *, ___data, a0, unsigned int, ___count, d0, unsigned char *, ___md, a1, unsigned int *, ___size, a2, const EVP_MD *, ___type, a3, ENGINE *, ___impl, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_copy(___out, ___in) \
      LP2(0x1068, int, EVP_MD_CTX_copy , EVP_MD_CTX *, ___out, a0, const EVP_MD_CTX *, ___in, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestInit(___ctx, ___type) \
      LP2(0x106e, int, EVP_DigestInit , EVP_MD_CTX *, ___ctx, a0, const EVP_MD *, ___type, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestFinal(___ctx, ___md, ___s) \
      LP3(0x1074, int, EVP_DigestFinal , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___md, a1, unsigned int *, ___s, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_read_pw_string(___buf, ___length, ___prompt, ___verify) \
      LP4(0x107a, int, EVP_read_pw_string , char *, ___buf, a0, int, ___length, d0, const char *, ___prompt, a1, int, ___verify, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_set_pw_prompt(___prompt) \
      LP1NR(0x1080, EVP_set_pw_prompt , char *, ___prompt, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_get_pw_prompt() \
      LP0(0x1086, char *, EVP_get_pw_prompt ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_BytesToKey(___type, ___md, ___salt, ___data, ___datal, ___count, ___key, ___iv) \
      LP8(0x108c, int, EVP_BytesToKey , const EVP_CIPHER *, ___type, a0, const EVP_MD *, ___md, a1, const unsigned char *, ___salt, a2, const unsigned char *, ___data, a3, int, ___datal, d0, int, ___count, d1, unsigned char *, ___key, d2, unsigned char *, ___iv, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_EncryptInit(___ctx, ___cipher, ___key, ___iv) \
      LP4(0x1092, int, EVP_EncryptInit , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, const unsigned char *, ___iv, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_EncryptInit_ex(___ctx, ___cipher, ___impl, ___key, ___iv) \
      LP5(0x1098, int, EVP_EncryptInit_ex , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, ENGINE *, ___impl, a2, const unsigned char *, ___key, a3, const unsigned char *, ___iv, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_EncryptUpdate(___ctx, ___out, ___outl, ___in, ___inl) \
      LP5(0x109e, int, EVP_EncryptUpdate , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2, const unsigned char *, ___in, a3, int, ___inl, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_EncryptFinal_ex(___ctx, ___out, ___outl) \
      LP3(0x10a4, int, EVP_EncryptFinal_ex , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_EncryptFinal(___ctx, ___out, ___outl) \
      LP3(0x10aa, int, EVP_EncryptFinal , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DecryptInit(___ctx, ___cipher, ___key, ___iv) \
      LP4(0x10b0, int, EVP_DecryptInit , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, const unsigned char *, ___iv, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DecryptInit_ex(___ctx, ___cipher, ___impl, ___key, ___iv) \
      LP5(0x10b6, int, EVP_DecryptInit_ex , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, ENGINE *, ___impl, a2, const unsigned char *, ___key, a3, const unsigned char *, ___iv, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DecryptUpdate(___ctx, ___out, ___outl, ___in, ___inl) \
      LP5(0x10bc, int, EVP_DecryptUpdate , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2, const unsigned char *, ___in, a3, int, ___inl, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DecryptFinal(___ctx, ___outm, ___outl) \
      LP3(0x10c2, int, EVP_DecryptFinal , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___outm, a1, int *, ___outl, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DecryptFinal_ex(___ctx, ___outm, ___outl) \
      LP3(0x10c8, int, EVP_DecryptFinal_ex , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___outm, a1, int *, ___outl, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CipherInit(___ctx, ___cipher, ___key, ___iv, ___enc) \
      LP5(0x10ce, int, EVP_CipherInit , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, const unsigned char *, ___iv, a3, int, ___enc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CipherInit_ex(___ctx, ___cipher, ___impl, ___key, ___iv, ___enc) \
      LP6(0x10d4, int, EVP_CipherInit_ex , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, ENGINE *, ___impl, a2, const unsigned char *, ___key, a3, const unsigned char *, ___iv, d0, int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CipherUpdate(___ctx, ___out, ___outl, ___in, ___inl) \
      LP5(0x10da, int, EVP_CipherUpdate , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2, const unsigned char *, ___in, a3, int, ___inl, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CipherFinal(___ctx, ___outm, ___outl) \
      LP3(0x10e0, int, EVP_CipherFinal , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___outm, a1, int *, ___outl, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CipherFinal_ex(___ctx, ___outm, ___outl) \
      LP3(0x10e6, int, EVP_CipherFinal_ex , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___outm, a1, int *, ___outl, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SignFinal(___ctx, ___md, ___s, ___pkey) \
      LP4(0x10ec, int, EVP_SignFinal , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___md, a1, unsigned int *, ___s, a2, EVP_PKEY *, ___pkey, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_VerifyFinal(___ctx, ___sigbuf, ___siglen, ___pkey) \
      LP4(0x10f2, int, EVP_VerifyFinal , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___sigbuf, a1, unsigned int, ___siglen, d0, EVP_PKEY *, ___pkey, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_OpenInit(___ctx, ___type, ___ek, ___ekl, ___iv, ___priv) \
      LP6(0x10f8, int, EVP_OpenInit , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___type, a1, unsigned char *, ___ek, a2, int, ___ekl, d0, unsigned char *, ___iv, a3, EVP_PKEY *, ___priv, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_OpenFinal(___ctx, ___out, ___outl) \
      LP3(0x10fe, int, EVP_OpenFinal , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SealInit(___ctx, ___type, ___ek, ___ekl, ___iv, ___pubk, ___npubk) \
      LP7(0x1104, int, EVP_SealInit , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___type, a1, unsigned char **, ___ek, a2, int *, ___ekl, a3, unsigned char *, ___iv, d0, EVP_PKEY **, ___pubk, d1, int, ___npubk, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SealFinal(___ctx, ___out, ___outl) \
      LP3(0x110a, int, EVP_SealFinal , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_EncodeInit(___ctx) \
      LP1NR(0x1110, EVP_EncodeInit , EVP_ENCODE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_EncodeUpdate(___ctx, ___out, ___outl, ___in, ___inl) \
      LP5(0x1116, int, EVP_EncodeUpdate , EVP_ENCODE_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2, const unsigned char *, ___in, a3, int, ___inl, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_EncodeFinal(___ctx, ___out, ___outl) \
      LP3NR(0x111c, EVP_EncodeFinal , EVP_ENCODE_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_EncodeBlock(___t, ___f, ___n) \
      LP3(0x1122, int, EVP_EncodeBlock , unsigned char *, ___t, a0, const unsigned char *, ___f, a1, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DecodeInit(___ctx) \
      LP1NR(0x1128, EVP_DecodeInit , EVP_ENCODE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DecodeUpdate(___ctx, ___out, ___outl, ___in, ___inl) \
      LP5(0x112e, int, EVP_DecodeUpdate , EVP_ENCODE_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2, unsigned char *, ___in, a3, int, ___inl, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DecodeFinal(___ctx, ___out, ___outl) \
      LP3(0x1134, int, EVP_DecodeFinal , EVP_ENCODE_CTX *, ___ctx, a0, unsigned char *, ___out, a1, int *, ___outl, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DecodeBlock(___t, ___f, ___n) \
      LP3(0x113a, int, EVP_DecodeBlock , unsigned char *, ___t, a0, const unsigned char *, ___f, a1, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_set_key_length(___x, ___keylen) \
      LP2(0x114c, int, EVP_CIPHER_CTX_set_key_length , EVP_CIPHER_CTX *, ___x, a0, int, ___keylen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_set_padding(___c, ___pad) \
      LP2(0x1152, int, EVP_CIPHER_CTX_set_padding , EVP_CIPHER_CTX *, ___c, a0, int, ___pad, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_ctrl(___ctx, ___type, ___arg, ___ptr) \
      LP4(0x1158, int, EVP_CIPHER_CTX_ctrl , EVP_CIPHER_CTX *, ___ctx, a0, int, ___type, d0, int, ___arg, d1, void *, ___ptr, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_f_md() \
      LP0(0x115e, const BIO_METHOD *, BIO_f_md ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_f_base64() \
      LP0(0x1164, const BIO_METHOD *, BIO_f_base64 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_f_cipher() \
      LP0(0x116a, const BIO_METHOD *, BIO_f_cipher ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_f_reliable() \
      LP0(0x1170, const BIO_METHOD *, BIO_f_reliable ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_set_cipher(___b, ___c, ___k, ___i, ___enc) \
      LP5(0x1176, int, BIO_set_cipher , BIO *, ___b, a0, const EVP_CIPHER *, ___c, a1, const unsigned char *, ___k, a2, const unsigned char *, ___i, a3, int, ___enc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_md_null() \
      LP0(0x117c, const EVP_MD *, EVP_md_null ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_md2() \
      LP0(0x1182, const EVP_MD *, EVP_md2 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_md4() \
      LP0(0x1188, const EVP_MD *, EVP_md4 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_md5() \
      LP0(0x118e, const EVP_MD *, EVP_md5 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sha1() \
      LP0(0x119a, const EVP_MD *, EVP_sha1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_mdc2() \
      LP0(0x11ac, const EVP_MD *, EVP_mdc2 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ripemd160() \
      LP0(0x11b2, const EVP_MD *, EVP_ripemd160 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_enc_null() \
      LP0(0x11b8, const EVP_CIPHER *, EVP_enc_null ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ecb() \
      LP0(0x11be, const EVP_CIPHER *, EVP_des_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede() \
      LP0(0x11c4, const EVP_CIPHER *, EVP_des_ede ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede3() \
      LP0(0x11ca, const EVP_CIPHER *, EVP_des_ede3 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede_ecb() \
      LP0(0x11d0, const EVP_CIPHER *, EVP_des_ede_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede3_ecb() \
      LP0(0x11d6, const EVP_CIPHER *, EVP_des_ede3_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_cfb64() \
      LP0(0x11dc, const EVP_CIPHER *, EVP_des_cfb64 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_cfb1() \
      LP0(0x11e2, const EVP_CIPHER *, EVP_des_cfb1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_cfb8() \
      LP0(0x11e8, const EVP_CIPHER *, EVP_des_cfb8 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede_cfb64() \
      LP0(0x11ee, const EVP_CIPHER *, EVP_des_ede_cfb64 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede3_cfb64() \
      LP0(0x11f4, const EVP_CIPHER *, EVP_des_ede3_cfb64 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede3_cfb1() \
      LP0(0x11fa, const EVP_CIPHER *, EVP_des_ede3_cfb1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede3_cfb8() \
      LP0(0x1200, const EVP_CIPHER *, EVP_des_ede3_cfb8 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ofb() \
      LP0(0x1206, const EVP_CIPHER *, EVP_des_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede_ofb() \
      LP0(0x120c, const EVP_CIPHER *, EVP_des_ede_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede3_ofb() \
      LP0(0x1212, const EVP_CIPHER *, EVP_des_ede3_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_cbc() \
      LP0(0x1218, const EVP_CIPHER *, EVP_des_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede_cbc() \
      LP0(0x121e, const EVP_CIPHER *, EVP_des_ede_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede3_cbc() \
      LP0(0x1224, const EVP_CIPHER *, EVP_des_ede3_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_desx_cbc() \
      LP0(0x122a, const EVP_CIPHER *, EVP_desx_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc4() \
      LP0(0x1230, const EVP_CIPHER *, EVP_rc4 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc4_40() \
      LP0(0x1236, const EVP_CIPHER *, EVP_rc4_40 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_idea_ecb() \
      LP0(0x123c, const EVP_CIPHER *, EVP_idea_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_idea_cfb64() \
      LP0(0x1242, const EVP_CIPHER *, EVP_idea_cfb64 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_idea_ofb() \
      LP0(0x1248, const EVP_CIPHER *, EVP_idea_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_idea_cbc() \
      LP0(0x124e, const EVP_CIPHER *, EVP_idea_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc2_ecb() \
      LP0(0x1254, const EVP_CIPHER *, EVP_rc2_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc2_cbc() \
      LP0(0x125a, const EVP_CIPHER *, EVP_rc2_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc2_40_cbc() \
      LP0(0x1260, const EVP_CIPHER *, EVP_rc2_40_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc2_64_cbc() \
      LP0(0x1266, const EVP_CIPHER *, EVP_rc2_64_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc2_cfb64() \
      LP0(0x126c, const EVP_CIPHER *, EVP_rc2_cfb64 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc2_ofb() \
      LP0(0x1272, const EVP_CIPHER *, EVP_rc2_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_bf_ecb() \
      LP0(0x1278, const EVP_CIPHER *, EVP_bf_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_bf_cbc() \
      LP0(0x127e, const EVP_CIPHER *, EVP_bf_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_bf_cfb64() \
      LP0(0x1284, const EVP_CIPHER *, EVP_bf_cfb64 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_bf_ofb() \
      LP0(0x128a, const EVP_CIPHER *, EVP_bf_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_cast5_ecb() \
      LP0(0x1290, const EVP_CIPHER *, EVP_cast5_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_cast5_cbc() \
      LP0(0x1296, const EVP_CIPHER *, EVP_cast5_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_cast5_cfb64() \
      LP0(0x129c, const EVP_CIPHER *, EVP_cast5_cfb64 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_cast5_ofb() \
      LP0(0x12a2, const EVP_CIPHER *, EVP_cast5_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc5_32_12_16_cbc() \
      LP0(0x12a8, const EVP_CIPHER *, EVP_rc5_32_12_16_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc5_32_12_16_ecb() \
      LP0(0x12ae, const EVP_CIPHER *, EVP_rc5_32_12_16_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc5_32_12_16_cfb64() \
      LP0(0x12b4, const EVP_CIPHER *, EVP_rc5_32_12_16_cfb64 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc5_32_12_16_ofb() \
      LP0(0x12ba, const EVP_CIPHER *, EVP_rc5_32_12_16_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_ecb() \
      LP0(0x12c0, const EVP_CIPHER *, EVP_aes_128_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_cbc() \
      LP0(0x12c6, const EVP_CIPHER *, EVP_aes_128_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_cfb1() \
      LP0(0x12cc, const EVP_CIPHER *, EVP_aes_128_cfb1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_cfb8() \
      LP0(0x12d2, const EVP_CIPHER *, EVP_aes_128_cfb8 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_cfb128() \
      LP0(0x12d8, const EVP_CIPHER *, EVP_aes_128_cfb128 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_ofb() \
      LP0(0x12de, const EVP_CIPHER *, EVP_aes_128_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_192_ecb() \
      LP0(0x12e4, const EVP_CIPHER *, EVP_aes_192_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_192_cbc() \
      LP0(0x12ea, const EVP_CIPHER *, EVP_aes_192_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_192_cfb1() \
      LP0(0x12f0, const EVP_CIPHER *, EVP_aes_192_cfb1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_192_cfb8() \
      LP0(0x12f6, const EVP_CIPHER *, EVP_aes_192_cfb8 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_192_cfb128() \
      LP0(0x12fc, const EVP_CIPHER *, EVP_aes_192_cfb128 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_192_ofb() \
      LP0(0x1302, const EVP_CIPHER *, EVP_aes_192_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_ecb() \
      LP0(0x1308, const EVP_CIPHER *, EVP_aes_256_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_cbc() \
      LP0(0x130e, const EVP_CIPHER *, EVP_aes_256_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_cfb1() \
      LP0(0x1314, const EVP_CIPHER *, EVP_aes_256_cfb1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_cfb8() \
      LP0(0x131a, const EVP_CIPHER *, EVP_aes_256_cfb8 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_cfb128() \
      LP0(0x1320, const EVP_CIPHER *, EVP_aes_256_cfb128 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_ofb() \
      LP0(0x1326, const EVP_CIPHER *, EVP_aes_256_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_add_cipher(___cipher) \
      LP1(0x1344, int, EVP_add_cipher , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_add_digest(___digest) \
      LP1(0x134a, int, EVP_add_digest , const EVP_MD *, ___digest, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_get_cipherbyname(___name) \
      LP1(0x1350, const EVP_CIPHER *, EVP_get_cipherbyname , const char *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_get_digestbyname(___name) \
      LP1(0x1356, const EVP_MD *, EVP_get_digestbyname , const char *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_decrypt(___ctx, ___out, ___outlen, ___in, ___inlen) \
      LP5(0x1362, int, EVP_PKEY_decrypt , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t *, ___outlen, a2, const unsigned char *, ___in, a3, size_t, ___inlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_encrypt(___ctx, ___out, ___outlen, ___in, ___inlen) \
      LP5(0x1368, int, EVP_PKEY_encrypt , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t *, ___outlen, a2, const unsigned char *, ___in, a3, size_t, ___inlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_type(___type) \
      LP1(0x136e, int, EVP_PKEY_type , int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_bits(___pkey) \
      LP1(0x1374, int, EVP_PKEY_bits , const EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_size(___pkey) \
      LP1(0x137a, int, EVP_PKEY_size , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_assign(___pkey, ___type, ___key) \
      LP3(0x1380, int, EVP_PKEY_assign , EVP_PKEY *, ___pkey, a0, int, ___type, d0, char *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set1_RSA(___pkey, ___key) \
      LP2(0x1386, int, EVP_PKEY_set1_RSA , EVP_PKEY *, ___pkey, a0, struct rsa_st *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get1_RSA(___pkey) \
      LP1(0x138c, struct rsa_st *, EVP_PKEY_get1_RSA , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set1_DSA(___pkey, ___key) \
      LP2(0x1392, int, EVP_PKEY_set1_DSA , EVP_PKEY *, ___pkey, a0, struct dsa_st *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get1_DSA(___pkey) \
      LP1(0x1398, struct dsa_st *, EVP_PKEY_get1_DSA , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set1_DH(___pkey, ___key) \
      LP2(0x139e, int, EVP_PKEY_set1_DH , EVP_PKEY *, ___pkey, a0, struct dh_st *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get1_DH(___pkey) \
      LP1(0x13a4, struct dh_st *, EVP_PKEY_get1_DH , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_new() \
      LP0(0x13aa, EVP_PKEY *, EVP_PKEY_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_free(___pkey) \
      LP1NR(0x13b0, EVP_PKEY_free , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PublicKey(___type, ___a, ___pp, ___length) \
      LP4(0x13b6, EVP_PKEY *, d2i_PublicKey , int, ___type, d0, EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PublicKey(___a, ___pp) \
      LP2(0x13bc, int, i2d_PublicKey , EVP_PKEY *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PrivateKey(___type, ___a, ___pp, ___length) \
      LP4(0x13c2, EVP_PKEY *, d2i_PrivateKey , int, ___type, d0, EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_AutoPrivateKey(___a, ___pp, ___length) \
      LP3(0x13c8, EVP_PKEY *, d2i_AutoPrivateKey , EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PrivateKey(___a, ___pp) \
      LP2(0x13ce, int, i2d_PrivateKey , EVP_PKEY *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_copy_parameters(___to, ___from) \
      LP2(0x13d4, int, EVP_PKEY_copy_parameters , EVP_PKEY *, ___to, a0, EVP_PKEY *, ___from, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_missing_parameters(___pkey) \
      LP1(0x13da, int, EVP_PKEY_missing_parameters , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_save_parameters(___pkey, ___mode) \
      LP2(0x13e0, int, EVP_PKEY_save_parameters , EVP_PKEY *, ___pkey, a0, int, ___mode, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_cmp_parameters(___a, ___b) \
      LP2(0x13e6, int, EVP_PKEY_cmp_parameters , EVP_PKEY *, ___a, a0, EVP_PKEY *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_type(___ctx) \
      LP1(0x13ec, int, EVP_CIPHER_type , const EVP_CIPHER *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_param_to_asn1(___c, ___type) \
      LP2(0x13f2, int, EVP_CIPHER_param_to_asn1 , EVP_CIPHER_CTX *, ___c, a0, ASN1_TYPE *, ___type, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_asn1_to_param(___c, ___type) \
      LP2(0x13f8, int, EVP_CIPHER_asn1_to_param , EVP_CIPHER_CTX *, ___c, a0, ASN1_TYPE *, ___type, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_set_asn1_iv(___c, ___type) \
      LP2(0x13fe, int, EVP_CIPHER_set_asn1_iv , EVP_CIPHER_CTX *, ___c, a0, ASN1_TYPE *, ___type, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_get_asn1_iv(___c, ___type) \
      LP2(0x1404, int, EVP_CIPHER_get_asn1_iv , EVP_CIPHER_CTX *, ___c, a0, ASN1_TYPE *, ___type, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_PBE_keyivgen(___ctx, ___pass, ___passlen, ___param, ___cipher, ___md, ___en_de) \
      LP7(0x140a, int, PKCS5_PBE_keyivgen , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___cipher, a3, const EVP_MD *, ___md, d1, int, ___en_de, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_PBKDF2_HMAC_SHA1(___pass, ___passlen, ___salt, ___saltlen, ___iter, ___keylen, ___out) \
      LP7(0x1410, int, PKCS5_PBKDF2_HMAC_SHA1 , const char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___iter, d2, int, ___keylen, d3, unsigned char *, ___out, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_v2_PBE_keyivgen(___ctx, ___pass, ___passlen, ___param, ___cipher, ___md, ___en_de) \
      LP7(0x1416, int, PKCS5_v2_PBE_keyivgen , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___cipher, a3, const EVP_MD *, ___md, d1, int, ___en_de, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_PBE_add() \
      LP0NR(0x141c, PKCS5_PBE_add ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PBE_CipherInit(___pbe_obj, ___pass, ___passlen, ___param, ___ctx, ___en_de) \
      LP6(0x1422, int, EVP_PBE_CipherInit , ASN1_OBJECT *, ___pbe_obj, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, EVP_CIPHER_CTX *, ___ctx, a3, int, ___en_de, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PBE_alg_add(___nid, ___cipher, ___md, ___keygen) \
      LP4(0x1428, int, EVP_PBE_alg_add , int, ___nid, d0, const EVP_CIPHER *, ___cipher, a0, const EVP_MD *, ___md, a1, EVP_PBE_KEYGEN *, ___keygen, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PBE_cleanup() \
      LP0NR(0x142e, EVP_PBE_cleanup ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_EVP_strings() \
      LP0(0x1434, int, ERR_load_EVP_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define HMAC_Init(___ctx, ___key, ___len, ___md) \
      LP4(0x1446, int, HMAC_Init , HMAC_CTX *, ___ctx, a0, const void *, ___key, a1, int, ___len, d0, const EVP_MD *, ___md, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define HMAC_Init_ex(___ctx, ___key, ___len, ___md, ___impl) \
      LP5(0x144c, int, HMAC_Init_ex , HMAC_CTX *, ___ctx, a0, const void *, ___key, a1, int, ___len, d0, const EVP_MD *, ___md, a2, ENGINE *, ___impl, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define HMAC_Update(___ctx, ___data, ___len) \
      LP3(0x1452, int, HMAC_Update , HMAC_CTX *, ___ctx, a0, const unsigned char *, ___data, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define HMAC_Final(___ctx, ___md, ___len) \
      LP3(0x1458, int, HMAC_Final , HMAC_CTX *, ___ctx, a0, unsigned char *, ___md, a1, unsigned int *, ___len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define HMAC(___evp_md, ___key, ___key_len, ___d, ___n, ___md, ___md_len) \
      LP7(0x145e, unsigned char *, HMAC , const EVP_MD *, ___evp_md, a0, const void *, ___key, a1, int, ___key_len, d0, const unsigned char *, ___d, a2, int, ___n, d1, unsigned char *, ___md, a3, unsigned int *, ___md_len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_new(___h, ___c) \
      LP2(0x15ae, OPENSSL_LHASH *, OPENSSL_LH_new , OPENSSL_LH_HASHFUNC, ___h, a0, OPENSSL_LH_COMPFUNC, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_free(___lh) \
      LP1NR(0x15b4, OPENSSL_LH_free , OPENSSL_LHASH *, ___lh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_insert(___lh, ___data) \
      LP2(0x15ba, void *, OPENSSL_LH_insert , OPENSSL_LHASH *, ___lh, a0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_delete(___lh, ___data) \
      LP2(0x15c0, void *, OPENSSL_LH_delete , OPENSSL_LHASH *, ___lh, a0, const void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_retrieve(___lh, ___data) \
      LP2(0x15c6, void *, OPENSSL_LH_retrieve , OPENSSL_LHASH *, ___lh, a0, const void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_doall(___lh, ___func) \
      LP2NR(0x15cc, OPENSSL_LH_doall , OPENSSL_LHASH *, ___lh, a0, OPENSSL_LH_DOALL_FUNC, ___func, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_doall_arg(___lh, ___func, ___arg) \
      LP3NR(0x15d2, OPENSSL_LH_doall_arg , OPENSSL_LHASH *, ___lh, a0, OPENSSL_LH_DOALL_FUNCARG, ___func, a1, void *, ___arg, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_strhash(___c) \
      LP1(0x15d8, unsigned long, OPENSSL_LH_strhash , const char *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_num_items(___lh) \
      LP1(0x15de, unsigned long, OPENSSL_LH_num_items , const OPENSSL_LHASH *, ___lh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_stats_bio(___lh, ___out) \
      LP2NR(0x15e4, OPENSSL_LH_stats_bio , const OPENSSL_LHASH *, ___lh, a0, BIO *, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_node_stats_bio(___lh, ___out) \
      LP2NR(0x15ea, OPENSSL_LH_node_stats_bio , const OPENSSL_LHASH *, ___lh, a0, BIO *, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_node_usage_stats_bio(___lh, ___out) \
      LP2NR(0x15f0, OPENSSL_LH_node_usage_stats_bio , const OPENSSL_LHASH *, ___lh, a0, BIO *, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_NAME_init() \
      LP0(0x15f6, int, OBJ_NAME_init ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_NAME_new_index(___hash_func, ___cmp_func, ___free_func) \
      LP3FP3(0x15fc, int, OBJ_NAME_new_index , __fpt1, ___hash_func, a0, __fpt2, ___cmp_func, a1, __fpt3, ___free_func, a2,\
      , AMISSL_BASE_NAME, unsigned long (*__fpt1)(const char *), int (*__fpt2)(const char *,const char *), void (*__fpt3)(const char *,int,const char *), 0, 0, 0, 0, 0, 0)

#define OBJ_NAME_get(___name, ___type) \
      LP2(0x1602, const char *, OBJ_NAME_get , const char *, ___name, a0, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_NAME_add(___name, ___type, ___data) \
      LP3(0x1608, int, OBJ_NAME_add , const char *, ___name, a0, int, ___type, d0, const char *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_NAME_remove(___name, ___type) \
      LP2(0x160e, int, OBJ_NAME_remove , const char *, ___name, a0, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_NAME_cleanup(___type) \
      LP1NR(0x1614, OBJ_NAME_cleanup , int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_NAME_do_all(___type, ___fn, ___arg) \
      LP3NRFP(0x161a, OBJ_NAME_do_all , int, ___type, d0, __fpt, ___fn, a0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(const OBJ_NAME *,void *arg), 0, 0, 0, 0, 0, 0)

#define OBJ_NAME_do_all_sorted(___type, ___fn, ___arg) \
      LP3NRFP(0x1620, OBJ_NAME_do_all_sorted , int, ___type, d0, __fpt, ___fn, a0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(const OBJ_NAME *,void *arg), 0, 0, 0, 0, 0, 0)

#define OBJ_dup(___o) \
      LP1(0x1626, ASN1_OBJECT *, OBJ_dup , const ASN1_OBJECT *, ___o, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_nid2obj(___n) \
      LP1(0x162c, ASN1_OBJECT *, OBJ_nid2obj , int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_nid2ln(___n) \
      LP1(0x1632, const char *, OBJ_nid2ln , int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_nid2sn(___n) \
      LP1(0x1638, const char *, OBJ_nid2sn , int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_obj2nid(___o) \
      LP1(0x163e, int, OBJ_obj2nid , const ASN1_OBJECT *, ___o, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_txt2obj(___s, ___no_name) \
      LP2(0x1644, ASN1_OBJECT *, OBJ_txt2obj , const char *, ___s, a0, int, ___no_name, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_obj2txt(___buf, ___buf_len, ___a, ___no_name) \
      LP4(0x164a, int, OBJ_obj2txt , char *, ___buf, a0, int, ___buf_len, d0, const ASN1_OBJECT *, ___a, a1, int, ___no_name, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_txt2nid(___s) \
      LP1(0x1650, int, OBJ_txt2nid , const char *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_ln2nid(___s) \
      LP1(0x1656, int, OBJ_ln2nid , const char *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_sn2nid(___s) \
      LP1(0x165c, int, OBJ_sn2nid , const char *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_cmp(___a, ___b) \
      LP2(0x1662, int, OBJ_cmp , const ASN1_OBJECT *, ___a, a0, const ASN1_OBJECT *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_new_nid(___num) \
      LP1(0x166e, int, OBJ_new_nid , int, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_add_object(___obj) \
      LP1(0x1674, int, OBJ_add_object , const ASN1_OBJECT *, ___obj, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_create(___oid, ___sn, ___ln) \
      LP3(0x167a, int, OBJ_create , const char *, ___oid, a0, const char *, ___sn, a1, const char *, ___ln, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_create_objects(___in) \
      LP1(0x1686, int, OBJ_create_objects , BIO *, ___in, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_OBJ_strings() \
      LP0(0x168c, int, ERR_load_OBJ_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_sendreq_bio(___b, ___path, ___req) \
      LP3(0x1692, OCSP_RESPONSE *, OCSP_sendreq_bio , BIO *, ___b, a0, const char *, ___path, a1, OCSP_REQUEST *, ___req, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_cert_to_id(___dgst, ___subject, ___issuer) \
      LP3(0x1698, OCSP_CERTID *, OCSP_cert_to_id , const EVP_MD *, ___dgst, a0, const X509 *, ___subject, a1, const X509 *, ___issuer, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_cert_id_new(___dgst, ___issuerName, ___issuerKey, ___serialNumber) \
      LP4(0x169e, OCSP_CERTID *, OCSP_cert_id_new , const EVP_MD *, ___dgst, a0, const X509_NAME *, ___issuerName, a1, const ASN1_BIT_STRING *, ___issuerKey, a2, const ASN1_INTEGER *, ___serialNumber, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_request_add0_id(___req, ___cid) \
      LP2(0x16a4, OCSP_ONEREQ *, OCSP_request_add0_id , OCSP_REQUEST *, ___req, a0, OCSP_CERTID *, ___cid, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_request_add1_nonce(___req, ___val, ___len) \
      LP3(0x16aa, int, OCSP_request_add1_nonce , OCSP_REQUEST *, ___req, a0, unsigned char *, ___val, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_basic_add1_nonce(___resp, ___val, ___len) \
      LP3(0x16b0, int, OCSP_basic_add1_nonce , OCSP_BASICRESP *, ___resp, a0, unsigned char *, ___val, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_check_nonce(___req, ___bs) \
      LP2(0x16b6, int, OCSP_check_nonce , OCSP_REQUEST *, ___req, a0, OCSP_BASICRESP *, ___bs, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_copy_nonce(___resp, ___req) \
      LP2(0x16bc, int, OCSP_copy_nonce , OCSP_BASICRESP *, ___resp, a0, OCSP_REQUEST *, ___req, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_request_set1_name(___req, ___nm) \
      LP2(0x16c2, int, OCSP_request_set1_name , OCSP_REQUEST *, ___req, a0, X509_NAME *, ___nm, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_request_add1_cert(___req, ___cert) \
      LP2(0x16c8, int, OCSP_request_add1_cert , OCSP_REQUEST *, ___req, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_request_sign(___req, ___signer, ___key, ___dgst, ___certs, ___flags) \
      LP6(0x16ce, int, OCSP_request_sign , OCSP_REQUEST *, ___req, a0, X509 *, ___signer, a1, EVP_PKEY *, ___key, a2, const EVP_MD *, ___dgst, a3, STACK_OF(X509) *, ___certs, d0, unsigned long, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_response_status(___resp) \
      LP1(0x16d4, int, OCSP_response_status , OCSP_RESPONSE *, ___resp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_response_get1_basic(___resp) \
      LP1(0x16da, OCSP_BASICRESP *, OCSP_response_get1_basic , OCSP_RESPONSE *, ___resp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_resp_count(___bs) \
      LP1(0x16e0, int, OCSP_resp_count , OCSP_BASICRESP *, ___bs, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_resp_get0(___bs, ___idx) \
      LP2(0x16e6, OCSP_SINGLERESP *, OCSP_resp_get0 , OCSP_BASICRESP *, ___bs, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_resp_find(___bs, ___id, ___last) \
      LP3(0x16ec, int, OCSP_resp_find , OCSP_BASICRESP *, ___bs, a0, OCSP_CERTID *, ___id, a1, int, ___last, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_single_get0_status(___single, ___reason, ___revtime, ___thisupd, ___nextupd) \
      LP5(0x16f2, int, OCSP_single_get0_status , OCSP_SINGLERESP *, ___single, a0, int *, ___reason, a1, ASN1_GENERALIZEDTIME **, ___revtime, a2, ASN1_GENERALIZEDTIME **, ___thisupd, a3, ASN1_GENERALIZEDTIME **, ___nextupd, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_resp_find_status(___bs, ___id, ___status, ___reason, ___revtime, ___thisupd, ___nextupd) \
      LP7(0x16f8, int, OCSP_resp_find_status , OCSP_BASICRESP *, ___bs, a0, OCSP_CERTID *, ___id, a1, int *, ___status, a2, int *, ___reason, a3, ASN1_GENERALIZEDTIME **, ___revtime, d0, ASN1_GENERALIZEDTIME **, ___thisupd, d1, ASN1_GENERALIZEDTIME **, ___nextupd, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_check_validity(___thisupd, ___nextupd, ___sec, ___maxsec) \
      LP4(0x16fe, int, OCSP_check_validity , ASN1_GENERALIZEDTIME *, ___thisupd, a0, ASN1_GENERALIZEDTIME *, ___nextupd, a1, long, ___sec, d0, long, ___maxsec, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_request_verify(___req, ___certs, ___store, ___flags) \
      LP4(0x1704, int, OCSP_request_verify , OCSP_REQUEST *, ___req, a0, STACK_OF(X509) *, ___certs, a1, X509_STORE *, ___store, a2, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_parse_url(___url, ___phost, ___pport, ___ppath, ___pssl) \
      LP5(0x170a, int, OCSP_parse_url , const char *, ___url, a0, char **, ___phost, a1, char **, ___pport, a2, char **, ___ppath, a3, int *, ___pssl, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_id_issuer_cmp(___a, ___b) \
      LP2(0x1710, int, OCSP_id_issuer_cmp , OCSP_CERTID *, ___a, a0, OCSP_CERTID *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_id_cmp(___a, ___b) \
      LP2(0x1716, int, OCSP_id_cmp , OCSP_CERTID *, ___a, a0, OCSP_CERTID *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_request_onereq_count(___req) \
      LP1(0x171c, int, OCSP_request_onereq_count , OCSP_REQUEST *, ___req, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_request_onereq_get0(___req, ___i) \
      LP2(0x1722, OCSP_ONEREQ *, OCSP_request_onereq_get0 , OCSP_REQUEST *, ___req, a0, int, ___i, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_onereq_get0_id(___one) \
      LP1(0x1728, OCSP_CERTID *, OCSP_onereq_get0_id , OCSP_ONEREQ *, ___one, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_id_get0_info(___piNameHash, ___pmd, ___pikeyHash, ___pserial, ___cid) \
      LP5(0x172e, int, OCSP_id_get0_info , ASN1_OCTET_STRING **, ___piNameHash, a0, ASN1_OBJECT **, ___pmd, a1, ASN1_OCTET_STRING **, ___pikeyHash, a2, ASN1_INTEGER **, ___pserial, a3, OCSP_CERTID *, ___cid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_request_is_signed(___req) \
      LP1(0x1734, int, OCSP_request_is_signed , OCSP_REQUEST *, ___req, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_response_create(___status, ___bs) \
      LP2(0x173a, OCSP_RESPONSE *, OCSP_response_create , int, ___status, d0, OCSP_BASICRESP *, ___bs, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_basic_add1_status(___rsp, ___cid, ___status, ___reason, ___revtime, ___thisupd, ___nextupd) \
      LP7(0x1740, OCSP_SINGLERESP *, OCSP_basic_add1_status , OCSP_BASICRESP *, ___rsp, a0, OCSP_CERTID *, ___cid, a1, int, ___status, d0, int, ___reason, d1, ASN1_TIME *, ___revtime, a2, ASN1_TIME *, ___thisupd, a3, ASN1_TIME *, ___nextupd, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_basic_add1_cert(___resp, ___cert) \
      LP2(0x1746, int, OCSP_basic_add1_cert , OCSP_BASICRESP *, ___resp, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_basic_sign(___brsp, ___signer, ___key, ___dgst, ___certs, ___flags) \
      LP6(0x174c, int, OCSP_basic_sign , OCSP_BASICRESP *, ___brsp, a0, X509 *, ___signer, a1, EVP_PKEY *, ___key, a2, const EVP_MD *, ___dgst, a3, STACK_OF(X509) *, ___certs, d0, unsigned long, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_crlID_new(___url, ___n, ___tim) \
      LP3(0x1758, X509_EXTENSION *, OCSP_crlID_new , const char *, ___url, a0, long *, ___n, a1, char *, ___tim, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_accept_responses_new(___oids) \
      LP1(0x175e, X509_EXTENSION *, OCSP_accept_responses_new , char **, ___oids, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_archive_cutoff_new(___tim) \
      LP1(0x1764, X509_EXTENSION *, OCSP_archive_cutoff_new , char *, ___tim, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_url_svcloc_new(___issuer, ___urls) \
      LP2(0x176a, X509_EXTENSION *, OCSP_url_svcloc_new , X509_NAME *, ___issuer, a0, const char **, ___urls, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_get_ext_count(___x) \
      LP1(0x1770, int, OCSP_REQUEST_get_ext_count , OCSP_REQUEST *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_get_ext_by_NID(___x, ___nid, ___lastpos) \
      LP3(0x1776, int, OCSP_REQUEST_get_ext_by_NID , OCSP_REQUEST *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
      LP3(0x177c, int, OCSP_REQUEST_get_ext_by_OBJ , OCSP_REQUEST *, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_get_ext_by_critical(___x, ___crit, ___lastpos) \
      LP3(0x1782, int, OCSP_REQUEST_get_ext_by_critical , OCSP_REQUEST *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_get_ext(___x, ___loc) \
      LP2(0x1788, X509_EXTENSION *, OCSP_REQUEST_get_ext , OCSP_REQUEST *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_delete_ext(___x, ___loc) \
      LP2(0x178e, X509_EXTENSION *, OCSP_REQUEST_delete_ext , OCSP_REQUEST *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_get1_ext_d2i(___x, ___nid, ___crit, ___idx) \
      LP4(0x1794, void *, OCSP_REQUEST_get1_ext_d2i , OCSP_REQUEST *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
      LP5(0x179a, int, OCSP_REQUEST_add1_ext_i2d , OCSP_REQUEST *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_add_ext(___x, ___ex, ___loc) \
      LP3(0x17a0, int, OCSP_REQUEST_add_ext , OCSP_REQUEST *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_ONEREQ_get_ext_count(___x) \
      LP1(0x17a6, int, OCSP_ONEREQ_get_ext_count , OCSP_ONEREQ *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_ONEREQ_get_ext_by_NID(___x, ___nid, ___lastpos) \
      LP3(0x17ac, int, OCSP_ONEREQ_get_ext_by_NID , OCSP_ONEREQ *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_ONEREQ_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
      LP3(0x17b2, int, OCSP_ONEREQ_get_ext_by_OBJ , OCSP_ONEREQ *, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_ONEREQ_get_ext_by_critical(___x, ___crit, ___lastpos) \
      LP3(0x17b8, int, OCSP_ONEREQ_get_ext_by_critical , OCSP_ONEREQ *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_ONEREQ_get_ext(___x, ___loc) \
      LP2(0x17be, X509_EXTENSION *, OCSP_ONEREQ_get_ext , OCSP_ONEREQ *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_ONEREQ_delete_ext(___x, ___loc) \
      LP2(0x17c4, X509_EXTENSION *, OCSP_ONEREQ_delete_ext , OCSP_ONEREQ *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_ONEREQ_get1_ext_d2i(___x, ___nid, ___crit, ___idx) \
      LP4(0x17ca, void *, OCSP_ONEREQ_get1_ext_d2i , OCSP_ONEREQ *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_ONEREQ_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
      LP5(0x17d0, int, OCSP_ONEREQ_add1_ext_i2d , OCSP_ONEREQ *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_ONEREQ_add_ext(___x, ___ex, ___loc) \
      LP3(0x17d6, int, OCSP_ONEREQ_add_ext , OCSP_ONEREQ *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_BASICRESP_get_ext_count(___x) \
      LP1(0x17dc, int, OCSP_BASICRESP_get_ext_count , OCSP_BASICRESP *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_BASICRESP_get_ext_by_NID(___x, ___nid, ___lastpos) \
      LP3(0x17e2, int, OCSP_BASICRESP_get_ext_by_NID , OCSP_BASICRESP *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_BASICRESP_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
      LP3(0x17e8, int, OCSP_BASICRESP_get_ext_by_OBJ , OCSP_BASICRESP *, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_BASICRESP_get_ext_by_critical(___x, ___crit, ___lastpos) \
      LP3(0x17ee, int, OCSP_BASICRESP_get_ext_by_critical , OCSP_BASICRESP *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_BASICRESP_get_ext(___x, ___loc) \
      LP2(0x17f4, X509_EXTENSION *, OCSP_BASICRESP_get_ext , OCSP_BASICRESP *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_BASICRESP_delete_ext(___x, ___loc) \
      LP2(0x17fa, X509_EXTENSION *, OCSP_BASICRESP_delete_ext , OCSP_BASICRESP *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_BASICRESP_get1_ext_d2i(___x, ___nid, ___crit, ___idx) \
      LP4(0x1800, void *, OCSP_BASICRESP_get1_ext_d2i , OCSP_BASICRESP *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_BASICRESP_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
      LP5(0x1806, int, OCSP_BASICRESP_add1_ext_i2d , OCSP_BASICRESP *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_BASICRESP_add_ext(___x, ___ex, ___loc) \
      LP3(0x180c, int, OCSP_BASICRESP_add_ext , OCSP_BASICRESP *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_get_ext_count(___x) \
      LP1(0x1812, int, OCSP_SINGLERESP_get_ext_count , OCSP_SINGLERESP *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_get_ext_by_NID(___x, ___nid, ___lastpos) \
      LP3(0x1818, int, OCSP_SINGLERESP_get_ext_by_NID , OCSP_SINGLERESP *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
      LP3(0x181e, int, OCSP_SINGLERESP_get_ext_by_OBJ , OCSP_SINGLERESP *, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_get_ext_by_critical(___x, ___crit, ___lastpos) \
      LP3(0x1824, int, OCSP_SINGLERESP_get_ext_by_critical , OCSP_SINGLERESP *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_get_ext(___x, ___loc) \
      LP2(0x182a, X509_EXTENSION *, OCSP_SINGLERESP_get_ext , OCSP_SINGLERESP *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_delete_ext(___x, ___loc) \
      LP2(0x1830, X509_EXTENSION *, OCSP_SINGLERESP_delete_ext , OCSP_SINGLERESP *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_get1_ext_d2i(___x, ___nid, ___crit, ___idx) \
      LP4(0x1836, void *, OCSP_SINGLERESP_get1_ext_d2i , OCSP_SINGLERESP *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
      LP5(0x183c, int, OCSP_SINGLERESP_add1_ext_i2d , OCSP_SINGLERESP *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_add_ext(___x, ___ex, ___loc) \
      LP3(0x1842, int, OCSP_SINGLERESP_add_ext , OCSP_SINGLERESP *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_new() \
      LP0(0x1848, OCSP_SINGLERESP *, OCSP_SINGLERESP_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_free(___a) \
      LP1NR(0x184e, OCSP_SINGLERESP_free , OCSP_SINGLERESP *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_SINGLERESP(___a, ___in, ___len) \
      LP3(0x1854, OCSP_SINGLERESP *, d2i_OCSP_SINGLERESP , OCSP_SINGLERESP **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_SINGLERESP(___a, ___out) \
      LP2(0x185a, int, i2d_OCSP_SINGLERESP , OCSP_SINGLERESP *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_it() \
      LP0(0x1860, const ASN1_ITEM *, OCSP_SINGLERESP_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_CERTSTATUS_new() \
      LP0(0x1866, OCSP_CERTSTATUS *, OCSP_CERTSTATUS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_CERTSTATUS_free(___a) \
      LP1NR(0x186c, OCSP_CERTSTATUS_free , OCSP_CERTSTATUS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_CERTSTATUS(___a, ___in, ___len) \
      LP3(0x1872, OCSP_CERTSTATUS *, d2i_OCSP_CERTSTATUS , OCSP_CERTSTATUS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_CERTSTATUS(___a, ___out) \
      LP2(0x1878, int, i2d_OCSP_CERTSTATUS , OCSP_CERTSTATUS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_CERTSTATUS_it() \
      LP0(0x187e, const ASN1_ITEM *, OCSP_CERTSTATUS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REVOKEDINFO_new() \
      LP0(0x1884, OCSP_REVOKEDINFO *, OCSP_REVOKEDINFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REVOKEDINFO_free(___a) \
      LP1NR(0x188a, OCSP_REVOKEDINFO_free , OCSP_REVOKEDINFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_REVOKEDINFO(___a, ___in, ___len) \
      LP3(0x1890, OCSP_REVOKEDINFO *, d2i_OCSP_REVOKEDINFO , OCSP_REVOKEDINFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_REVOKEDINFO(___a, ___out) \
      LP2(0x1896, int, i2d_OCSP_REVOKEDINFO , OCSP_REVOKEDINFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REVOKEDINFO_it() \
      LP0(0x189c, const ASN1_ITEM *, OCSP_REVOKEDINFO_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_BASICRESP_new() \
      LP0(0x18a2, OCSP_BASICRESP *, OCSP_BASICRESP_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_BASICRESP_free(___a) \
      LP1NR(0x18a8, OCSP_BASICRESP_free , OCSP_BASICRESP *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_BASICRESP(___a, ___in, ___len) \
      LP3(0x18ae, OCSP_BASICRESP *, d2i_OCSP_BASICRESP , OCSP_BASICRESP **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_BASICRESP(___a, ___out) \
      LP2(0x18b4, int, i2d_OCSP_BASICRESP , OCSP_BASICRESP *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_BASICRESP_it() \
      LP0(0x18ba, const ASN1_ITEM *, OCSP_BASICRESP_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPDATA_new() \
      LP0(0x18c0, OCSP_RESPDATA *, OCSP_RESPDATA_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPDATA_free(___a) \
      LP1NR(0x18c6, OCSP_RESPDATA_free , OCSP_RESPDATA *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_RESPDATA(___a, ___in, ___len) \
      LP3(0x18cc, OCSP_RESPDATA *, d2i_OCSP_RESPDATA , OCSP_RESPDATA **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_RESPDATA(___a, ___out) \
      LP2(0x18d2, int, i2d_OCSP_RESPDATA , OCSP_RESPDATA *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPDATA_it() \
      LP0(0x18d8, const ASN1_ITEM *, OCSP_RESPDATA_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPID_new() \
      LP0(0x18de, OCSP_RESPID *, OCSP_RESPID_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPID_free(___a) \
      LP1NR(0x18e4, OCSP_RESPID_free , OCSP_RESPID *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_RESPID(___a, ___in, ___len) \
      LP3(0x18ea, OCSP_RESPID *, d2i_OCSP_RESPID , OCSP_RESPID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_RESPID(___a, ___out) \
      LP2(0x18f0, int, i2d_OCSP_RESPID , OCSP_RESPID *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPID_it() \
      LP0(0x18f6, const ASN1_ITEM *, OCSP_RESPID_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPONSE_new() \
      LP0(0x18fc, OCSP_RESPONSE *, OCSP_RESPONSE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPONSE_free(___a) \
      LP1NR(0x1902, OCSP_RESPONSE_free , OCSP_RESPONSE *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_RESPONSE(___a, ___in, ___len) \
      LP3(0x1908, OCSP_RESPONSE *, d2i_OCSP_RESPONSE , OCSP_RESPONSE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_RESPONSE(___a, ___out) \
      LP2(0x190e, int, i2d_OCSP_RESPONSE , OCSP_RESPONSE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPONSE_it() \
      LP0(0x1914, const ASN1_ITEM *, OCSP_RESPONSE_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPBYTES_new() \
      LP0(0x191a, OCSP_RESPBYTES *, OCSP_RESPBYTES_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPBYTES_free(___a) \
      LP1NR(0x1920, OCSP_RESPBYTES_free , OCSP_RESPBYTES *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_RESPBYTES(___a, ___in, ___len) \
      LP3(0x1926, OCSP_RESPBYTES *, d2i_OCSP_RESPBYTES , OCSP_RESPBYTES **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_RESPBYTES(___a, ___out) \
      LP2(0x192c, int, i2d_OCSP_RESPBYTES , OCSP_RESPBYTES *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPBYTES_it() \
      LP0(0x1932, const ASN1_ITEM *, OCSP_RESPBYTES_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_ONEREQ_new() \
      LP0(0x1938, OCSP_ONEREQ *, OCSP_ONEREQ_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_ONEREQ_free(___a) \
      LP1NR(0x193e, OCSP_ONEREQ_free , OCSP_ONEREQ *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_ONEREQ(___a, ___in, ___len) \
      LP3(0x1944, OCSP_ONEREQ *, d2i_OCSP_ONEREQ , OCSP_ONEREQ **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_ONEREQ(___a, ___out) \
      LP2(0x194a, int, i2d_OCSP_ONEREQ , OCSP_ONEREQ *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_ONEREQ_it() \
      LP0(0x1950, const ASN1_ITEM *, OCSP_ONEREQ_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_CERTID_new() \
      LP0(0x1956, OCSP_CERTID *, OCSP_CERTID_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_CERTID_free(___a) \
      LP1NR(0x195c, OCSP_CERTID_free , OCSP_CERTID *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_CERTID(___a, ___in, ___len) \
      LP3(0x1962, OCSP_CERTID *, d2i_OCSP_CERTID , OCSP_CERTID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_CERTID(___a, ___out) \
      LP2(0x1968, int, i2d_OCSP_CERTID , OCSP_CERTID *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_CERTID_it() \
      LP0(0x196e, const ASN1_ITEM *, OCSP_CERTID_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_new() \
      LP0(0x1974, OCSP_REQUEST *, OCSP_REQUEST_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_free(___a) \
      LP1NR(0x197a, OCSP_REQUEST_free , OCSP_REQUEST *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_REQUEST(___a, ___in, ___len) \
      LP3(0x1980, OCSP_REQUEST *, d2i_OCSP_REQUEST , OCSP_REQUEST **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_REQUEST(___a, ___out) \
      LP2(0x1986, int, i2d_OCSP_REQUEST , OCSP_REQUEST *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_it() \
      LP0(0x198c, const ASN1_ITEM *, OCSP_REQUEST_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SIGNATURE_new() \
      LP0(0x1992, OCSP_SIGNATURE *, OCSP_SIGNATURE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SIGNATURE_free(___a) \
      LP1NR(0x1998, OCSP_SIGNATURE_free , OCSP_SIGNATURE *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_SIGNATURE(___a, ___in, ___len) \
      LP3(0x199e, OCSP_SIGNATURE *, d2i_OCSP_SIGNATURE , OCSP_SIGNATURE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_SIGNATURE(___a, ___out) \
      LP2(0x19a4, int, i2d_OCSP_SIGNATURE , OCSP_SIGNATURE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SIGNATURE_it() \
      LP0(0x19aa, const ASN1_ITEM *, OCSP_SIGNATURE_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQINFO_new() \
      LP0(0x19b0, OCSP_REQINFO *, OCSP_REQINFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQINFO_free(___a) \
      LP1NR(0x19b6, OCSP_REQINFO_free , OCSP_REQINFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_REQINFO(___a, ___in, ___len) \
      LP3(0x19bc, OCSP_REQINFO *, d2i_OCSP_REQINFO , OCSP_REQINFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_REQINFO(___a, ___out) \
      LP2(0x19c2, int, i2d_OCSP_REQINFO , OCSP_REQINFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQINFO_it() \
      LP0(0x19c8, const ASN1_ITEM *, OCSP_REQINFO_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_CRLID_new() \
      LP0(0x19ce, OCSP_CRLID *, OCSP_CRLID_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_CRLID_free(___a) \
      LP1NR(0x19d4, OCSP_CRLID_free , OCSP_CRLID *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_CRLID(___a, ___in, ___len) \
      LP3(0x19da, OCSP_CRLID *, d2i_OCSP_CRLID , OCSP_CRLID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_CRLID(___a, ___out) \
      LP2(0x19e0, int, i2d_OCSP_CRLID , OCSP_CRLID *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_CRLID_it() \
      LP0(0x19e6, const ASN1_ITEM *, OCSP_CRLID_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SERVICELOC_new() \
      LP0(0x19ec, OCSP_SERVICELOC *, OCSP_SERVICELOC_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SERVICELOC_free(___a) \
      LP1NR(0x19f2, OCSP_SERVICELOC_free , OCSP_SERVICELOC *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OCSP_SERVICELOC(___a, ___in, ___len) \
      LP3(0x19f8, OCSP_SERVICELOC *, d2i_OCSP_SERVICELOC , OCSP_SERVICELOC **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OCSP_SERVICELOC(___a, ___out) \
      LP2(0x19fe, int, i2d_OCSP_SERVICELOC , OCSP_SERVICELOC *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SERVICELOC_it() \
      LP0(0x1a04, const ASN1_ITEM *, OCSP_SERVICELOC_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_response_status_str(___s) \
      LP1(0x1a0a, const char *, OCSP_response_status_str , long, ___s, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_cert_status_str(___s) \
      LP1(0x1a10, const char *, OCSP_cert_status_str , long, ___s, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_crl_reason_str(___s) \
      LP1(0x1a16, const char *, OCSP_crl_reason_str , long, ___s, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQUEST_print(___bp, ___a, ___flags) \
      LP3(0x1a1c, int, OCSP_REQUEST_print , BIO *, ___bp, a0, OCSP_REQUEST *, ___a, a1, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPONSE_print(___bp, ___o, ___flags) \
      LP3(0x1a22, int, OCSP_RESPONSE_print , BIO *, ___bp, a0, OCSP_RESPONSE *, ___o, a1, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_basic_verify(___bs, ___certs, ___st, ___flags) \
      LP4(0x1a28, int, OCSP_basic_verify , OCSP_BASICRESP *, ___bs, a0, STACK_OF(X509) *, ___certs, a1, X509_STORE *, ___st, a2, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_OCSP_strings() \
      LP0(0x1a2e, int, ERR_load_OCSP_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_get_EVP_CIPHER_INFO(___header, ___cipher) \
      LP2(0x1a34, int, PEM_get_EVP_CIPHER_INFO , char *, ___header, a0, EVP_CIPHER_INFO *, ___cipher, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_do_header(___cipher, ___data, ___len, ___callback, ___u) \
      LP5(0x1a3a, int, PEM_do_header , EVP_CIPHER_INFO *, ___cipher, a0, unsigned char *, ___data, a1, long *, ___len, a2, pem_password_cb *, ___callback, a3, void *, ___u, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio(___bp, ___name, ___header, ___data, ___len) \
      LP5(0x1a40, int, PEM_read_bio , BIO *, ___bp, a0, char **, ___name, a1, char **, ___header, a2, unsigned char **, ___data, a3, long *, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio(___bp, ___name, ___hdr, ___data, ___len) \
      LP5(0x1a46, int, PEM_write_bio , BIO *, ___bp, a0, const char *, ___name, a1, const char *, ___hdr, a2, const unsigned char *, ___data, a3, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_bytes_read_bio(___pdata, ___plen, ___pnm, ___name, ___bp, ___cb, ___u) \
      LP7(0x1a4c, int, PEM_bytes_read_bio , unsigned char **, ___pdata, a0, long *, ___plen, a1, char **, ___pnm, a2, const char *, ___name, a3, BIO *, ___bp, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_ASN1_read_bio(___d2i, ___name, ___bp, ___x, ___cb, ___u) \
      LP6(0x1a52, void *, PEM_ASN1_read_bio , d2i_of_void *, ___d2i, a0, const char *, ___name, a1, BIO *, ___bp, a2, void **, ___x, a3, pem_password_cb *, ___cb, d0, void *, ___u, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_ASN1_write_bio(___i2d, ___name, ___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
      LP9(0x1a58, int, PEM_ASN1_write_bio , i2d_of_void *, ___i2d, a0, const char *, ___name, a1, BIO *, ___bp, a2, char *, ___x, a3, const EVP_CIPHER *, ___enc, d0, unsigned char *, ___kstr, d1, int, ___klen, d2, pem_password_cb *, ___cb, d3, void *, ___u, d4,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_X509_INFO_read_bio(___bp, ___sk, ___cb, ___u) \
      LP4(0x1a5e, STACK_OF(X509_INFO) *, PEM_X509_INFO_read_bio , BIO *, ___bp, a0, STACK_OF(X509_INFO) *, ___sk, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_X509_INFO_write_bio(___bp, ___xi, ___enc, ___kstr, ___klen, ___cd, ___u) \
      LP7(0x1a64, int, PEM_X509_INFO_write_bio , BIO *, ___bp, a0, X509_INFO *, ___xi, a1, EVP_CIPHER *, ___enc, a2, unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cd, d1, void *, ___u, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_SignInit(___ctx, ___type) \
      LP2(0x1a7c, int, PEM_SignInit , EVP_MD_CTX *, ___ctx, a0, EVP_MD *, ___type, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_SignUpdate(___ctx, ___d, ___cnt) \
      LP3(0x1a82, int, PEM_SignUpdate , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___d, a1, unsigned int, ___cnt, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_SignFinal(___ctx, ___sigret, ___siglen, ___pkey) \
      LP4(0x1a88, int, PEM_SignFinal , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___sigret, a1, unsigned int *, ___siglen, a2, EVP_PKEY *, ___pkey, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_def_callback(___buf, ___num, ___w, ___key) \
      LP4(0x1a8e, int, PEM_def_callback , char *, ___buf, a0, int, ___num, d0, int, ___w, d1, void *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_proc_type(___buf, ___type) \
      LP2NR(0x1a94, PEM_proc_type , char *, ___buf, a0, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_dek_info(___buf, ___type, ___len, ___str) \
      LP4NR(0x1a9a, PEM_dek_info , char *, ___buf, a0, const char *, ___type, a1, int, ___len, d0, char *, ___str, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_X509(___bp, ___x, ___cb, ___u) \
      LP4(0x1aa0, X509 *, PEM_read_bio_X509 , BIO *, ___bp, a0, X509 **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_X509(___bp, ___x) \
      LP2(0x1aa6, int, PEM_write_bio_X509 , BIO *, ___bp, a0, X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_X509_AUX(___bp, ___x, ___cb, ___u) \
      LP4(0x1aac, X509 *, PEM_read_bio_X509_AUX , BIO *, ___bp, a0, X509 **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_X509_AUX(___bp, ___x) \
      LP2(0x1ab2, int, PEM_write_bio_X509_AUX , BIO *, ___bp, a0, X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_X509_REQ(___bp, ___x, ___cb, ___u) \
      LP4(0x1ab8, X509_REQ *, PEM_read_bio_X509_REQ , BIO *, ___bp, a0, X509_REQ **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_X509_REQ(___bp, ___x) \
      LP2(0x1abe, int, PEM_write_bio_X509_REQ , BIO *, ___bp, a0, X509_REQ *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_X509_REQ_NEW(___bp, ___x) \
      LP2(0x1ac4, int, PEM_write_bio_X509_REQ_NEW , BIO *, ___bp, a0, X509_REQ *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_X509_CRL(___bp, ___x, ___cb, ___u) \
      LP4(0x1aca, X509_CRL *, PEM_read_bio_X509_CRL , BIO *, ___bp, a0, X509_CRL **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_X509_CRL(___bp, ___x) \
      LP2(0x1ad0, int, PEM_write_bio_X509_CRL , BIO *, ___bp, a0, X509_CRL *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_PKCS7(___bp, ___x, ___cb, ___u) \
      LP4(0x1ad6, PKCS7 *, PEM_read_bio_PKCS7 , BIO *, ___bp, a0, PKCS7 **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_PKCS7(___bp, ___x) \
      LP2(0x1adc, int, PEM_write_bio_PKCS7 , BIO *, ___bp, a0, PKCS7 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_NETSCAPE_CERT_SEQUENCE(___bp, ___x, ___cb, ___u) \
      LP4(0x1ae2, NETSCAPE_CERT_SEQUENCE *, PEM_read_bio_NETSCAPE_CERT_SEQUENCE , BIO *, ___bp, a0, NETSCAPE_CERT_SEQUENCE **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_NETSCAPE_CERT_SEQUENCE(___bp, ___x) \
      LP2(0x1ae8, int, PEM_write_bio_NETSCAPE_CERT_SEQUENCE , BIO *, ___bp, a0, NETSCAPE_CERT_SEQUENCE *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_PKCS8(___bp, ___x, ___cb, ___u) \
      LP4(0x1aee, X509_SIG *, PEM_read_bio_PKCS8 , BIO *, ___bp, a0, X509_SIG **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_PKCS8(___bp, ___x) \
      LP2(0x1af4, int, PEM_write_bio_PKCS8 , BIO *, ___bp, a0, X509_SIG *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_PKCS8_PRIV_KEY_INFO(___bp, ___x, ___cb, ___u) \
      LP4(0x1afa, PKCS8_PRIV_KEY_INFO *, PEM_read_bio_PKCS8_PRIV_KEY_INFO , BIO *, ___bp, a0, PKCS8_PRIV_KEY_INFO **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_PKCS8_PRIV_KEY_INFO(___bp, ___x) \
      LP2(0x1b00, int, PEM_write_bio_PKCS8_PRIV_KEY_INFO , BIO *, ___bp, a0, PKCS8_PRIV_KEY_INFO *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_RSAPrivateKey(___bp, ___x, ___cb, ___u) \
      LP4(0x1b06, RSA *, PEM_read_bio_RSAPrivateKey , BIO *, ___bp, a0, RSA **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_RSAPrivateKey(___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
      LP7(0x1b0c, int, PEM_write_bio_RSAPrivateKey , BIO *, ___bp, a0, RSA *, ___x, a1, const EVP_CIPHER *, ___enc, a2, unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_RSAPublicKey(___bp, ___x, ___cb, ___u) \
      LP4(0x1b12, RSA *, PEM_read_bio_RSAPublicKey , BIO *, ___bp, a0, RSA **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_RSAPublicKey(___bp, ___x) \
      LP2(0x1b18, int, PEM_write_bio_RSAPublicKey , BIO *, ___bp, a0, RSA *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_RSA_PUBKEY(___bp, ___x, ___cb, ___u) \
      LP4(0x1b1e, RSA *, PEM_read_bio_RSA_PUBKEY , BIO *, ___bp, a0, RSA **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_RSA_PUBKEY(___bp, ___x) \
      LP2(0x1b24, int, PEM_write_bio_RSA_PUBKEY , BIO *, ___bp, a0, RSA *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_DSAPrivateKey(___bp, ___x, ___cb, ___u) \
      LP4(0x1b2a, DSA *, PEM_read_bio_DSAPrivateKey , BIO *, ___bp, a0, DSA **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_DSAPrivateKey(___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
      LP7(0x1b30, int, PEM_write_bio_DSAPrivateKey , BIO *, ___bp, a0, DSA *, ___x, a1, const EVP_CIPHER *, ___enc, a2, unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_DSA_PUBKEY(___bp, ___x, ___cb, ___u) \
      LP4(0x1b36, DSA *, PEM_read_bio_DSA_PUBKEY , BIO *, ___bp, a0, DSA **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_DSA_PUBKEY(___bp, ___x) \
      LP2(0x1b3c, int, PEM_write_bio_DSA_PUBKEY , BIO *, ___bp, a0, DSA *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_DSAparams(___bp, ___x, ___cb, ___u) \
      LP4(0x1b42, DSA *, PEM_read_bio_DSAparams , BIO *, ___bp, a0, DSA **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_DSAparams(___bp, ___x) \
      LP2(0x1b48, int, PEM_write_bio_DSAparams , BIO *, ___bp, a0, DSA *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_DHparams(___bp, ___x, ___cb, ___u) \
      LP4(0x1b4e, DH *, PEM_read_bio_DHparams , BIO *, ___bp, a0, DH **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_DHparams(___bp, ___x) \
      LP2(0x1b54, int, PEM_write_bio_DHparams , BIO *, ___bp, a0, DH *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_PrivateKey(___bp, ___x, ___cb, ___u) \
      LP4(0x1b5a, EVP_PKEY *, PEM_read_bio_PrivateKey , BIO *, ___bp, a0, EVP_PKEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_PrivateKey(___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
      LP7(0x1b60, int, PEM_write_bio_PrivateKey , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1, const EVP_CIPHER *, ___enc, a2, unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_PUBKEY(___bp, ___x, ___cb, ___u) \
      LP4(0x1b66, EVP_PKEY *, PEM_read_bio_PUBKEY , BIO *, ___bp, a0, EVP_PKEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_PUBKEY(___bp, ___x) \
      LP2(0x1b6c, int, PEM_write_bio_PUBKEY , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_PKCS8PrivateKey_nid(___bp, ___x, ___nid, ___kstr, ___klen, ___cb, ___u) \
      LP7(0x1b72, int, PEM_write_bio_PKCS8PrivateKey_nid , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1, int, ___nid, d0, char *, ___kstr, a2, int, ___klen, d1, pem_password_cb *, ___cb, a3, void *, ___u, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_PKCS8PrivateKey(___a, ___b, ___c, ___d, ___a1, ___e, ___f) \
      LP7(0x1b78, int, PEM_write_bio_PKCS8PrivateKey , BIO *, ___a, a0, EVP_PKEY *, ___b, a1, const EVP_CIPHER *, ___c, a2, char *, ___d, a3, int, ___a1, d0, pem_password_cb *, ___e, d1, void *, ___f, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS8PrivateKey_bio(___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
      LP7(0x1b7e, int, i2d_PKCS8PrivateKey_bio , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1, const EVP_CIPHER *, ___enc, a2, char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS8PrivateKey_nid_bio(___bp, ___x, ___nid, ___kstr, ___klen, ___cb, ___u) \
      LP7(0x1b84, int, i2d_PKCS8PrivateKey_nid_bio , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1, int, ___nid, d0, char *, ___kstr, a2, int, ___klen, d1, pem_password_cb *, ___cb, a3, void *, ___u, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS8PrivateKey_bio(___bp, ___x, ___cb, ___u) \
      LP4(0x1b8a, EVP_PKEY *, d2i_PKCS8PrivateKey_bio , BIO *, ___bp, a0, EVP_PKEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_PEM_strings() \
      LP0(0x1b90, int, ERR_load_PEM_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_item_pack_safebag(___obj, ___it, ___nid1, ___nid2) \
      LP4(0x1bae, PKCS12_SAFEBAG *, PKCS12_item_pack_safebag , void *, ___obj, a0, const ASN1_ITEM *, ___it, a1, int, ___nid1, d0, int, ___nid2, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_decrypt(___p8, ___pass, ___passlen) \
      LP3(0x1bba, PKCS8_PRIV_KEY_INFO *, PKCS8_decrypt , const X509_SIG *, ___p8, a0, const char *, ___pass, a1, int, ___passlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_decrypt_skey(___bag, ___pass, ___passlen) \
      LP3(0x1bc0, PKCS8_PRIV_KEY_INFO *, PKCS12_decrypt_skey , const PKCS12_SAFEBAG *, ___bag, a0, const char *, ___pass, a1, int, ___passlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_encrypt(___pbe_nid, ___cipher, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8) \
      LP8(0x1bc6, X509_SIG *, PKCS8_encrypt , int, ___pbe_nid, d0, const EVP_CIPHER *, ___cipher, a0, const char *, ___pass, a1, int, ___passlen, d1, unsigned char *, ___salt, a2, int, ___saltlen, d2, int, ___iter, d3, PKCS8_PRIV_KEY_INFO *, ___p8, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_pack_p7data(___sk) \
      LP1(0x1bd2, PKCS7 *, PKCS12_pack_p7data , STACK_OF(PKCS12_SAFEBAG) *, ___sk, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_unpack_p7data(___p7) \
      LP1(0x1bd8, STACK_OF(PKCS12_SAFEBAG) *, PKCS12_unpack_p7data , PKCS7 *, ___p7, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_pack_p7encdata(___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___bags) \
      LP7(0x1bde, PKCS7 *, PKCS12_pack_p7encdata , int, ___pbe_nid, d0, const char *, ___pass, a0, int, ___passlen, d1, unsigned char *, ___salt, a1, int, ___saltlen, d2, int, ___iter, d3, STACK_OF(PKCS12_SAFEBAG) *, ___bags, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_unpack_p7encdata(___p7, ___pass, ___passlen) \
      LP3(0x1be4, STACK_OF(PKCS12_SAFEBAG) *, PKCS12_unpack_p7encdata , PKCS7 *, ___p7, a0, const char *, ___pass, a1, int, ___passlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_pack_authsafes(___p12, ___safes) \
      LP2(0x1bea, int, PKCS12_pack_authsafes , PKCS12 *, ___p12, a0, STACK_OF(PKCS7) *, ___safes, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_unpack_authsafes(___p12) \
      LP1(0x1bf0, STACK_OF(PKCS7) *, PKCS12_unpack_authsafes , const PKCS12 *, ___p12, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_localkeyid(___bag, ___name, ___namelen) \
      LP3(0x1bf6, int, PKCS12_add_localkeyid , PKCS12_SAFEBAG *, ___bag, a0, unsigned char *, ___name, a1, int, ___namelen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_friendlyname_asc(___bag, ___name, ___namelen) \
      LP3(0x1bfc, int, PKCS12_add_friendlyname_asc , PKCS12_SAFEBAG *, ___bag, a0, const char *, ___name, a1, int, ___namelen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_CSPName_asc(___bag, ___name, ___namelen) \
      LP3(0x1c02, int, PKCS12_add_CSPName_asc , PKCS12_SAFEBAG *, ___bag, a0, const char *, ___name, a1, int, ___namelen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_friendlyname_uni(___bag, ___name, ___namelen) \
      LP3(0x1c08, int, PKCS12_add_friendlyname_uni , PKCS12_SAFEBAG *, ___bag, a0, const unsigned char *, ___name, a1, int, ___namelen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_add_keyusage(___p8, ___usage) \
      LP2(0x1c0e, int, PKCS8_add_keyusage , PKCS8_PRIV_KEY_INFO *, ___p8, a0, int, ___usage, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_get_attr_gen(___attrs, ___attr_nid) \
      LP2(0x1c14, ASN1_TYPE *, PKCS12_get_attr_gen , const STACK_OF(X509_ATTRIBUTE) *, ___attrs, a0, int, ___attr_nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_get_friendlyname(___bag) \
      LP1(0x1c1a, char *, PKCS12_get_friendlyname , PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_pbe_crypt(___algor, ___pass, ___passlen, ___in, ___inlen, ___data, ___datalen, ___en_de) \
      LP8(0x1c20, unsigned char *, PKCS12_pbe_crypt , const X509_ALGOR *, ___algor, a0, const char *, ___pass, a1, int, ___passlen, d0, const unsigned char *, ___in, a2, int, ___inlen, d1, unsigned char **, ___data, a3, int *, ___datalen, d2, int, ___en_de, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_item_decrypt_d2i(___algor, ___it, ___pass, ___passlen, ___oct, ___zbuf) \
      LP6(0x1c26, void *, PKCS12_item_decrypt_d2i , const X509_ALGOR *, ___algor, a0, const ASN1_ITEM *, ___it, a1, const char *, ___pass, a2, int, ___passlen, d0, const ASN1_OCTET_STRING *, ___oct, a3, int, ___zbuf, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_item_i2d_encrypt(___algor, ___it, ___pass, ___passlen, ___obj, ___zbuf) \
      LP6(0x1c2c, ASN1_OCTET_STRING *, PKCS12_item_i2d_encrypt , X509_ALGOR *, ___algor, a0, const ASN1_ITEM *, ___it, a1, const char *, ___pass, a2, int, ___passlen, d0, void *, ___obj, a3, int, ___zbuf, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_init(___mode) \
      LP1(0x1c32, PKCS12 *, PKCS12_init , int, ___mode, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_key_gen_asc(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type) \
      LP9(0x1c38, int, PKCS12_key_gen_asc , const char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___id, d2, int, ___iter, d3, int, ___n, d4, unsigned char *, ___out, a2, const EVP_MD *, ___md_type, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_key_gen_uni(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type) \
      LP9(0x1c3e, int, PKCS12_key_gen_uni , unsigned char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___id, d2, int, ___iter, d3, int, ___n, d4, unsigned char *, ___out, a2, const EVP_MD *, ___md_type, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_PBE_keyivgen(___ctx, ___pass, ___passlen, ___param, ___cipher, ___md_type, ___en_de) \
      LP7(0x1c44, int, PKCS12_PBE_keyivgen , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___cipher, a3, const EVP_MD *, ___md_type, d1, int, ___en_de, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_gen_mac(___p12, ___pass, ___passlen, ___mac, ___maclen) \
      LP5(0x1c4a, int, PKCS12_gen_mac , PKCS12 *, ___p12, a0, const char *, ___pass, a1, int, ___passlen, d0, unsigned char *, ___mac, a2, unsigned int *, ___maclen, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_verify_mac(___p12, ___pass, ___passlen) \
      LP3(0x1c50, int, PKCS12_verify_mac , PKCS12 *, ___p12, a0, const char *, ___pass, a1, int, ___passlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_set_mac(___p12, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___md_type) \
      LP7(0x1c56, int, PKCS12_set_mac , PKCS12 *, ___p12, a0, const char *, ___pass, a1, int, ___passlen, d0, unsigned char *, ___salt, a2, int, ___saltlen, d1, int, ___iter, d2, const EVP_MD *, ___md_type, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_setup_mac(___p12, ___iter, ___salt, ___saltlen, ___md_type) \
      LP5(0x1c5c, int, PKCS12_setup_mac , PKCS12 *, ___p12, a0, int, ___iter, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, const EVP_MD *, ___md_type, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_asc2uni(___asc, ___asclen, ___uni, ___unilen) \
      LP4(0x1c62, unsigned char *, OPENSSL_asc2uni , const char *, ___asc, a0, int, ___asclen, d0, unsigned char **, ___uni, a1, int *, ___unilen, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_uni2asc(___uni, ___unilen) \
      LP2(0x1c68, char *, OPENSSL_uni2asc , const unsigned char *, ___uni, a0, int, ___unilen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_new() \
      LP0(0x1c6e, PKCS12 *, PKCS12_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_free(___a) \
      LP1NR(0x1c74, PKCS12_free , PKCS12 *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS12(___a, ___in, ___len) \
      LP3(0x1c7a, PKCS12 *, d2i_PKCS12 , PKCS12 **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS12(___a, ___out) \
      LP2(0x1c80, int, i2d_PKCS12 , PKCS12 *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_it() \
      LP0(0x1c86, const ASN1_ITEM *, PKCS12_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_MAC_DATA_new() \
      LP0(0x1c8c, PKCS12_MAC_DATA *, PKCS12_MAC_DATA_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_MAC_DATA_free(___a) \
      LP1NR(0x1c92, PKCS12_MAC_DATA_free , PKCS12_MAC_DATA *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS12_MAC_DATA(___a, ___in, ___len) \
      LP3(0x1c98, PKCS12_MAC_DATA *, d2i_PKCS12_MAC_DATA , PKCS12_MAC_DATA **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS12_MAC_DATA(___a, ___out) \
      LP2(0x1c9e, int, i2d_PKCS12_MAC_DATA , PKCS12_MAC_DATA *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_MAC_DATA_it() \
      LP0(0x1ca4, const ASN1_ITEM *, PKCS12_MAC_DATA_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_new() \
      LP0(0x1caa, PKCS12_SAFEBAG *, PKCS12_SAFEBAG_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_free(___a) \
      LP1NR(0x1cb0, PKCS12_SAFEBAG_free , PKCS12_SAFEBAG *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS12_SAFEBAG(___a, ___in, ___len) \
      LP3(0x1cb6, PKCS12_SAFEBAG *, d2i_PKCS12_SAFEBAG , PKCS12_SAFEBAG **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS12_SAFEBAG(___a, ___out) \
      LP2(0x1cbc, int, i2d_PKCS12_SAFEBAG , PKCS12_SAFEBAG *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_it() \
      LP0(0x1cc2, const ASN1_ITEM *, PKCS12_SAFEBAG_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_BAGS_new() \
      LP0(0x1cc8, PKCS12_BAGS *, PKCS12_BAGS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_BAGS_free(___a) \
      LP1NR(0x1cce, PKCS12_BAGS_free , PKCS12_BAGS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS12_BAGS(___a, ___in, ___len) \
      LP3(0x1cd4, PKCS12_BAGS *, d2i_PKCS12_BAGS , PKCS12_BAGS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS12_BAGS(___a, ___out) \
      LP2(0x1cda, int, i2d_PKCS12_BAGS , PKCS12_BAGS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_BAGS_it() \
      LP0(0x1ce0, const ASN1_ITEM *, PKCS12_BAGS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAGS_it() \
      LP0(0x1ce6, const ASN1_ITEM *, PKCS12_SAFEBAGS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_AUTHSAFES_it() \
      LP0(0x1cec, const ASN1_ITEM *, PKCS12_AUTHSAFES_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_PBE_add() \
      LP0NR(0x1cf2, PKCS12_PBE_add ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_parse(___p12, ___pass, ___pkey, ___cert, ___ca) \
      LP5(0x1cf8, int, PKCS12_parse , PKCS12 *, ___p12, a0, const char *, ___pass, a1, EVP_PKEY **, ___pkey, a2, X509 **, ___cert, a3, STACK_OF(X509) **, ___ca, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_create(___pass, ___name, ___pkey, ___cert, ___ca, ___nid_key, ___nid_cert, ___iter, ___mac_iter, ___keytype) \
      LP10(0x1cfe, PKCS12 *, PKCS12_create , const char *, ___pass, a0, const char *, ___name, a1, EVP_PKEY *, ___pkey, a2, X509 *, ___cert, a3, STACK_OF(X509) *, ___ca, d0, int, ___nid_key, d1, int, ___nid_cert, d2, int, ___iter, d3, int, ___mac_iter, d4, int, ___keytype, d5,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS12_bio(___bp, ___p12) \
      LP2(0x1d04, int, i2d_PKCS12_bio , BIO *, ___bp, a0, PKCS12 *, ___p12, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS12_bio(___bp, ___p12) \
      LP2(0x1d0a, PKCS12 *, d2i_PKCS12_bio , BIO *, ___bp, a0, PKCS12 **, ___p12, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_newpass(___p12, ___oldpass, ___newpass) \
      LP3(0x1d10, int, PKCS12_newpass , PKCS12 *, ___p12, a0, const char *, ___oldpass, a1, const char *, ___newpass, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_PKCS12_strings() \
      LP0(0x1d16, int, ERR_load_PKCS12_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ISSUER_AND_SERIAL_digest(___data, ___type, ___md, ___len) \
      LP4(0x1d1c, int, PKCS7_ISSUER_AND_SERIAL_digest , PKCS7_ISSUER_AND_SERIAL *, ___data, a0, const EVP_MD *, ___type, a1, unsigned char *, ___md, a2, unsigned int *, ___len, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_dup(___p7) \
      LP1(0x1d22, PKCS7 *, PKCS7_dup , PKCS7 *, ___p7, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS7_bio(___bp, ___p7) \
      LP2(0x1d28, PKCS7 *, d2i_PKCS7_bio , BIO *, ___bp, a0, PKCS7 **, ___p7, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7_bio(___bp, ___p7) \
      LP2(0x1d2e, int, i2d_PKCS7_bio , BIO *, ___bp, a0, PKCS7 *, ___p7, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ISSUER_AND_SERIAL_new() \
      LP0(0x1d34, PKCS7_ISSUER_AND_SERIAL *, PKCS7_ISSUER_AND_SERIAL_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ISSUER_AND_SERIAL_free(___a) \
      LP1NR(0x1d3a, PKCS7_ISSUER_AND_SERIAL_free , PKCS7_ISSUER_AND_SERIAL *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS7_ISSUER_AND_SERIAL(___a, ___in, ___len) \
      LP3(0x1d40, PKCS7_ISSUER_AND_SERIAL *, d2i_PKCS7_ISSUER_AND_SERIAL , PKCS7_ISSUER_AND_SERIAL **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7_ISSUER_AND_SERIAL(___a, ___out) \
      LP2(0x1d46, int, i2d_PKCS7_ISSUER_AND_SERIAL , PKCS7_ISSUER_AND_SERIAL *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ISSUER_AND_SERIAL_it() \
      LP0(0x1d4c, const ASN1_ITEM *, PKCS7_ISSUER_AND_SERIAL_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_SIGNER_INFO_new() \
      LP0(0x1d52, PKCS7_SIGNER_INFO *, PKCS7_SIGNER_INFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_SIGNER_INFO_free(___a) \
      LP1NR(0x1d58, PKCS7_SIGNER_INFO_free , PKCS7_SIGNER_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS7_SIGNER_INFO(___a, ___in, ___len) \
      LP3(0x1d5e, PKCS7_SIGNER_INFO *, d2i_PKCS7_SIGNER_INFO , PKCS7_SIGNER_INFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7_SIGNER_INFO(___a, ___out) \
      LP2(0x1d64, int, i2d_PKCS7_SIGNER_INFO , PKCS7_SIGNER_INFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_SIGNER_INFO_it() \
      LP0(0x1d6a, const ASN1_ITEM *, PKCS7_SIGNER_INFO_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_RECIP_INFO_new() \
      LP0(0x1d70, PKCS7_RECIP_INFO *, PKCS7_RECIP_INFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_RECIP_INFO_free(___a) \
      LP1NR(0x1d76, PKCS7_RECIP_INFO_free , PKCS7_RECIP_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS7_RECIP_INFO(___a, ___in, ___len) \
      LP3(0x1d7c, PKCS7_RECIP_INFO *, d2i_PKCS7_RECIP_INFO , PKCS7_RECIP_INFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7_RECIP_INFO(___a, ___out) \
      LP2(0x1d82, int, i2d_PKCS7_RECIP_INFO , PKCS7_RECIP_INFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_RECIP_INFO_it() \
      LP0(0x1d88, const ASN1_ITEM *, PKCS7_RECIP_INFO_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_SIGNED_new() \
      LP0(0x1d8e, PKCS7_SIGNED *, PKCS7_SIGNED_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_SIGNED_free(___a) \
      LP1NR(0x1d94, PKCS7_SIGNED_free , PKCS7_SIGNED *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS7_SIGNED(___a, ___in, ___len) \
      LP3(0x1d9a, PKCS7_SIGNED *, d2i_PKCS7_SIGNED , PKCS7_SIGNED **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7_SIGNED(___a, ___out) \
      LP2(0x1da0, int, i2d_PKCS7_SIGNED , PKCS7_SIGNED *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_SIGNED_it() \
      LP0(0x1da6, const ASN1_ITEM *, PKCS7_SIGNED_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ENC_CONTENT_new() \
      LP0(0x1dac, PKCS7_ENC_CONTENT *, PKCS7_ENC_CONTENT_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ENC_CONTENT_free(___a) \
      LP1NR(0x1db2, PKCS7_ENC_CONTENT_free , PKCS7_ENC_CONTENT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS7_ENC_CONTENT(___a, ___in, ___len) \
      LP3(0x1db8, PKCS7_ENC_CONTENT *, d2i_PKCS7_ENC_CONTENT , PKCS7_ENC_CONTENT **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7_ENC_CONTENT(___a, ___out) \
      LP2(0x1dbe, int, i2d_PKCS7_ENC_CONTENT , PKCS7_ENC_CONTENT *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ENC_CONTENT_it() \
      LP0(0x1dc4, const ASN1_ITEM *, PKCS7_ENC_CONTENT_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ENVELOPE_new() \
      LP0(0x1dca, PKCS7_ENVELOPE *, PKCS7_ENVELOPE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ENVELOPE_free(___a) \
      LP1NR(0x1dd0, PKCS7_ENVELOPE_free , PKCS7_ENVELOPE *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS7_ENVELOPE(___a, ___in, ___len) \
      LP3(0x1dd6, PKCS7_ENVELOPE *, d2i_PKCS7_ENVELOPE , PKCS7_ENVELOPE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7_ENVELOPE(___a, ___out) \
      LP2(0x1ddc, int, i2d_PKCS7_ENVELOPE , PKCS7_ENVELOPE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ENVELOPE_it() \
      LP0(0x1de2, const ASN1_ITEM *, PKCS7_ENVELOPE_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_SIGN_ENVELOPE_new() \
      LP0(0x1de8, PKCS7_SIGN_ENVELOPE *, PKCS7_SIGN_ENVELOPE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_SIGN_ENVELOPE_free(___a) \
      LP1NR(0x1dee, PKCS7_SIGN_ENVELOPE_free , PKCS7_SIGN_ENVELOPE *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS7_SIGN_ENVELOPE(___a, ___in, ___len) \
      LP3(0x1df4, PKCS7_SIGN_ENVELOPE *, d2i_PKCS7_SIGN_ENVELOPE , PKCS7_SIGN_ENVELOPE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7_SIGN_ENVELOPE(___a, ___out) \
      LP2(0x1dfa, int, i2d_PKCS7_SIGN_ENVELOPE , PKCS7_SIGN_ENVELOPE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_SIGN_ENVELOPE_it() \
      LP0(0x1e00, const ASN1_ITEM *, PKCS7_SIGN_ENVELOPE_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_DIGEST_new() \
      LP0(0x1e06, PKCS7_DIGEST *, PKCS7_DIGEST_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_DIGEST_free(___a) \
      LP1NR(0x1e0c, PKCS7_DIGEST_free , PKCS7_DIGEST *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS7_DIGEST(___a, ___in, ___len) \
      LP3(0x1e12, PKCS7_DIGEST *, d2i_PKCS7_DIGEST , PKCS7_DIGEST **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7_DIGEST(___a, ___out) \
      LP2(0x1e18, int, i2d_PKCS7_DIGEST , PKCS7_DIGEST *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_DIGEST_it() \
      LP0(0x1e1e, const ASN1_ITEM *, PKCS7_DIGEST_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ENCRYPT_new() \
      LP0(0x1e24, PKCS7_ENCRYPT *, PKCS7_ENCRYPT_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ENCRYPT_free(___a) \
      LP1NR(0x1e2a, PKCS7_ENCRYPT_free , PKCS7_ENCRYPT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS7_ENCRYPT(___a, ___in, ___len) \
      LP3(0x1e30, PKCS7_ENCRYPT *, d2i_PKCS7_ENCRYPT , PKCS7_ENCRYPT **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7_ENCRYPT(___a, ___out) \
      LP2(0x1e36, int, i2d_PKCS7_ENCRYPT , PKCS7_ENCRYPT *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ENCRYPT_it() \
      LP0(0x1e3c, const ASN1_ITEM *, PKCS7_ENCRYPT_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_new() \
      LP0(0x1e42, PKCS7 *, PKCS7_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_free(___a) \
      LP1NR(0x1e48, PKCS7_free , PKCS7 *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS7(___a, ___in, ___len) \
      LP3(0x1e4e, PKCS7 *, d2i_PKCS7 , PKCS7 **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7(___a, ___out) \
      LP2(0x1e54, int, i2d_PKCS7 , PKCS7 *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_it() \
      LP0(0x1e5a, const ASN1_ITEM *, PKCS7_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ATTR_SIGN_it() \
      LP0(0x1e60, const ASN1_ITEM *, PKCS7_ATTR_SIGN_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ATTR_VERIFY_it() \
      LP0(0x1e66, const ASN1_ITEM *, PKCS7_ATTR_VERIFY_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_ctrl(___p7, ___cmd, ___larg, ___parg) \
      LP4(0x1e6c, long, PKCS7_ctrl , PKCS7 *, ___p7, a0, int, ___cmd, d0, long, ___larg, d1, char *, ___parg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_set_type(___p7, ___type) \
      LP2(0x1e72, int, PKCS7_set_type , PKCS7 *, ___p7, a0, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_set_content(___p7, ___p7_data) \
      LP2(0x1e78, int, PKCS7_set_content , PKCS7 *, ___p7, a0, PKCS7 *, ___p7_data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_SIGNER_INFO_set(___p7i, ___x509, ___pkey, ___dgst) \
      LP4(0x1e7e, int, PKCS7_SIGNER_INFO_set , PKCS7_SIGNER_INFO *, ___p7i, a0, X509 *, ___x509, a1, EVP_PKEY *, ___pkey, a2, const EVP_MD *, ___dgst, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_add_signer(___p7, ___p7i) \
      LP2(0x1e84, int, PKCS7_add_signer , PKCS7 *, ___p7, a0, PKCS7_SIGNER_INFO *, ___p7i, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_add_certificate(___p7, ___x509) \
      LP2(0x1e8a, int, PKCS7_add_certificate , PKCS7 *, ___p7, a0, X509 *, ___x509, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_add_crl(___p7, ___x509) \
      LP2(0x1e90, int, PKCS7_add_crl , PKCS7 *, ___p7, a0, X509_CRL *, ___x509, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_content_new(___p7, ___nid) \
      LP2(0x1e96, int, PKCS7_content_new , PKCS7 *, ___p7, a0, int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_dataVerify(___cert_store, ___ctx, ___bio, ___p7, ___si) \
      LP5(0x1e9c, int, PKCS7_dataVerify , X509_STORE *, ___cert_store, a0, X509_STORE_CTX *, ___ctx, a1, BIO *, ___bio, a2, PKCS7 *, ___p7, a3, PKCS7_SIGNER_INFO *, ___si, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_signatureVerify(___bio, ___p7, ___si, ___x509) \
      LP4(0x1ea2, int, PKCS7_signatureVerify , BIO *, ___bio, a0, PKCS7 *, ___p7, a1, PKCS7_SIGNER_INFO *, ___si, a2, X509 *, ___x509, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_dataInit(___p7, ___bio) \
      LP2(0x1ea8, BIO *, PKCS7_dataInit , PKCS7 *, ___p7, a0, BIO *, ___bio, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_dataFinal(___p7, ___bio) \
      LP2(0x1eae, int, PKCS7_dataFinal , PKCS7 *, ___p7, a0, BIO *, ___bio, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_dataDecode(___p7, ___pkey, ___in_bio, ___pcert) \
      LP4(0x1eb4, BIO *, PKCS7_dataDecode , PKCS7 *, ___p7, a0, EVP_PKEY *, ___pkey, a1, BIO *, ___in_bio, a2, X509 *, ___pcert, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_add_signature(___p7, ___x509, ___pkey, ___dgst) \
      LP4(0x1eba, PKCS7_SIGNER_INFO *, PKCS7_add_signature , PKCS7 *, ___p7, a0, X509 *, ___x509, a1, EVP_PKEY *, ___pkey, a2, const EVP_MD *, ___dgst, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_cert_from_signer_info(___p7, ___si) \
      LP2(0x1ec0, X509 *, PKCS7_cert_from_signer_info , PKCS7 *, ___p7, a0, PKCS7_SIGNER_INFO *, ___si, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_get_signer_info(___p7) \
      LP1(0x1ec6, STACK_OF(PKCS7_SIGNER_INFO) *, PKCS7_get_signer_info , PKCS7 *, ___p7, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_add_recipient(___p7, ___x509) \
      LP2(0x1ecc, PKCS7_RECIP_INFO *, PKCS7_add_recipient , PKCS7 *, ___p7, a0, X509 *, ___x509, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_add_recipient_info(___p7, ___ri) \
      LP2(0x1ed2, int, PKCS7_add_recipient_info , PKCS7 *, ___p7, a0, PKCS7_RECIP_INFO *, ___ri, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_RECIP_INFO_set(___p7i, ___x509) \
      LP2(0x1ed8, int, PKCS7_RECIP_INFO_set , PKCS7_RECIP_INFO *, ___p7i, a0, X509 *, ___x509, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_set_cipher(___p7, ___cipher) \
      LP2(0x1ede, int, PKCS7_set_cipher , PKCS7 *, ___p7, a0, const EVP_CIPHER *, ___cipher, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_get_issuer_and_serial(___p7, ___idx) \
      LP2(0x1ee4, PKCS7_ISSUER_AND_SERIAL *, PKCS7_get_issuer_and_serial , PKCS7 *, ___p7, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_digest_from_attributes(___sk) \
      LP1(0x1eea, ASN1_OCTET_STRING *, PKCS7_digest_from_attributes , STACK_OF(X509_ATTRIBUTE) *, ___sk, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_add_signed_attribute(___p7si, ___nid, ___type, ___data) \
      LP4(0x1ef0, int, PKCS7_add_signed_attribute , PKCS7_SIGNER_INFO *, ___p7si, a0, int, ___nid, d0, int, ___type, d1, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_add_attribute(___p7si, ___nid, ___atrtype, ___value) \
      LP4(0x1ef6, int, PKCS7_add_attribute , PKCS7_SIGNER_INFO *, ___p7si, a0, int, ___nid, d0, int, ___atrtype, d1, void *, ___value, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_get_attribute(___si, ___nid) \
      LP2(0x1efc, ASN1_TYPE *, PKCS7_get_attribute , PKCS7_SIGNER_INFO *, ___si, a0, int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_get_signed_attribute(___si, ___nid) \
      LP2(0x1f02, ASN1_TYPE *, PKCS7_get_signed_attribute , PKCS7_SIGNER_INFO *, ___si, a0, int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_set_signed_attributes(___p7si, ___sk) \
      LP2(0x1f08, int, PKCS7_set_signed_attributes , PKCS7_SIGNER_INFO *, ___p7si, a0, STACK_OF(X509_ATTRIBUTE) *, ___sk, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_set_attributes(___p7si, ___sk) \
      LP2(0x1f0e, int, PKCS7_set_attributes , PKCS7_SIGNER_INFO *, ___p7si, a0, STACK_OF(X509_ATTRIBUTE) *, ___sk, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_sign(___signcert, ___pkey, ___certs, ___data, ___flags) \
      LP5(0x1f14, PKCS7 *, PKCS7_sign , X509 *, ___signcert, a0, EVP_PKEY *, ___pkey, a1, STACK_OF(X509) *, ___certs, a2, BIO *, ___data, a3, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_verify(___p7, ___certs, ___store, ___indata, ___out, ___flags) \
      LP6(0x1f1a, int, PKCS7_verify , PKCS7 *, ___p7, a0, STACK_OF(X509) *, ___certs, a1, X509_STORE *, ___store, a2, BIO *, ___indata, a3, BIO *, ___out, d0, int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_get0_signers(___p7, ___certs, ___flags) \
      LP3(0x1f20, STACK_OF(X509) *, PKCS7_get0_signers , PKCS7 *, ___p7, a0, STACK_OF(X509) *, ___certs, a1, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_encrypt(___certs, ___in, ___cipher, ___flags) \
      LP4(0x1f26, PKCS7 *, PKCS7_encrypt , STACK_OF(X509) *, ___certs, a0, BIO *, ___in, a1, const EVP_CIPHER *, ___cipher, a2, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_decrypt(___p7, ___pkey, ___cert, ___data, ___flags) \
      LP5(0x1f2c, int, PKCS7_decrypt , PKCS7 *, ___p7, a0, EVP_PKEY *, ___pkey, a1, X509 *, ___cert, a2, BIO *, ___data, a3, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_add_attrib_smimecap(___si, ___cap) \
      LP2(0x1f32, int, PKCS7_add_attrib_smimecap , PKCS7_SIGNER_INFO *, ___si, a0, STACK_OF(X509_ALGOR) *, ___cap, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_get_smimecap(___si) \
      LP1(0x1f38, STACK_OF(X509_ALGOR) *, PKCS7_get_smimecap , PKCS7_SIGNER_INFO *, ___si, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_simple_smimecap(___sk, ___nid, ___arg) \
      LP3(0x1f3e, int, PKCS7_simple_smimecap , STACK_OF(X509_ALGOR) *, ___sk, a0, int, ___nid, d0, int, ___arg, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SMIME_write_PKCS7(___bio, ___p7, ___data, ___flags) \
      LP4(0x1f44, int, SMIME_write_PKCS7 , BIO *, ___bio, a0, PKCS7 *, ___p7, a1, BIO *, ___data, a2, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SMIME_read_PKCS7(___bio, ___bcont) \
      LP2(0x1f4a, PKCS7 *, SMIME_read_PKCS7 , BIO *, ___bio, a0, BIO **, ___bcont, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SMIME_crlf_copy(___in, ___out, ___flags) \
      LP3(0x1f50, int, SMIME_crlf_copy , BIO *, ___in, a0, BIO *, ___out, a1, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SMIME_text(___in, ___out) \
      LP2(0x1f56, int, SMIME_text , BIO *, ___in, a0, BIO *, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_PKCS7_strings() \
      LP0(0x1f5c, int, ERR_load_PKCS7_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_set_rand_method(___meth) \
      LP1(0x1f62, int, RAND_set_rand_method , const RAND_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_get_rand_method() \
      LP0(0x1f68, const RAND_METHOD *, RAND_get_rand_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_bytes(___buf, ___num) \
      LP2(0x1f7a, int, RAND_bytes , unsigned char *, ___buf, a0, int, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_pseudo_bytes(___buf, ___num) \
      LP2(0x1f80, int, RAND_pseudo_bytes , unsigned char *, ___buf, a0, int, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_seed(___buf, ___num) \
      LP2NR(0x1f86, RAND_seed , const void *, ___buf, a0, int, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_add(___buf, ___num, ___randomness) \
      LP3NR(0x1f8c, RAND_add , const void *, ___buf, a0, int, ___num, d0, double, ___randomness, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_load_file(___file, ___max_bytes) \
      LP2(0x1f92, int, RAND_load_file , const char *, ___file, a0, long, ___max_bytes, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_write_file(___file) \
      LP1(0x1f98, int, RAND_write_file , const char *, ___file, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_file_name(___file, ___num) \
      LP2(0x1f9e, const char *, RAND_file_name , char *, ___file, a0, size_t, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_status() \
      LP0(0x1fa4, int, RAND_status ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_poll() \
      LP0(0x1fbc, int, RAND_poll ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_RAND_strings() \
      LP0(0x1fc2, int, ERR_load_RAND_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_msg_callback(___ctx, ___cb) \
      LP2NRFP(0x1fc8, SSL_CTX_set_msg_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(int write_p,int version,int content_type,const void *buf,size_t len,SSL *ssl,void *arg), 0, 0, 0, 0, 0, 0)

#define SSL_set_msg_callback(___ssl, ___cb) \
      LP2NRFP(0x1fce, SSL_set_msg_callback , SSL *, ___ssl, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(int write_p,int version,int content_type,const void *buf,size_t len,SSL *ssl,void *arg), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_sessions(___ctx) \
      LP1(0x1fd4, LHASH_OF(SSL_SESSION) *, SSL_CTX_sessions , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_finished(___s, ___buf, ___count) \
      LP3(0x1fda, size_t, SSL_get_finished , const SSL *, ___s, a0, void *, ___buf, a1, size_t, ___count, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_peer_finished(___s, ___buf, ___count) \
      LP3(0x1fe0, size_t, SSL_get_peer_finished , const SSL *, ___s, a0, void *, ___buf, a1, size_t, ___count, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_f_ssl() \
      LP0(0x1fe6, const BIO_METHOD *, BIO_f_ssl ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_ssl(___ctx, ___client) \
      LP2(0x1fec, BIO *, BIO_new_ssl , SSL_CTX *, ___ctx, a0, int, ___client, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_ssl_connect(___ctx) \
      LP1(0x1ff2, BIO *, BIO_new_ssl_connect , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_buffer_ssl_connect(___ctx) \
      LP1(0x1ff8, BIO *, BIO_new_buffer_ssl_connect , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ssl_copy_session_id(___to, ___from) \
      LP2(0x1ffe, int, BIO_ssl_copy_session_id , BIO *, ___to, a0, BIO *, ___from, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ssl_shutdown(___ssl_bio) \
      LP1NR(0x2004, BIO_ssl_shutdown , BIO *, ___ssl_bio, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_cipher_list(___a, ___str) \
      LP2(0x200a, int, SSL_CTX_set_cipher_list , SSL_CTX *, ___a, a0, const char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_new(___meth) \
      LP1(0x2010, SSL_CTX *, SSL_CTX_new , const SSL_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_free(___a) \
      LP1NR(0x2016, SSL_CTX_free , SSL_CTX *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_timeout(___ctx, ___t) \
      LP2(0x201c, long, SSL_CTX_set_timeout , SSL_CTX *, ___ctx, a0, long, ___t, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_timeout(___ctx) \
      LP1(0x2022, long, SSL_CTX_get_timeout , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_cert_store(___a) \
      LP1(0x2028, X509_STORE *, SSL_CTX_get_cert_store , const SSL_CTX *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_cert_store(___a, ___b) \
      LP2NR(0x202e, SSL_CTX_set_cert_store , SSL_CTX *, ___a, a0, X509_STORE *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_want(___s) \
      LP1(0x2034, int, SSL_want , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_clear(___s) \
      LP1(0x203a, int, SSL_clear , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_flush_sessions(___ctx, ___tm) \
      LP2NR(0x2040, SSL_CTX_flush_sessions , SSL_CTX *, ___ctx, a0, long, ___tm, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_current_cipher(___s) \
      LP1(0x2046, const SSL_CIPHER *, SSL_get_current_cipher , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_bits(___c, ___alg_bits) \
      LP2(0x204c, int, SSL_CIPHER_get_bits , const SSL_CIPHER *, ___c, a0, int *, ___alg_bits, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_version(___c) \
      LP1(0x2052, const char *, SSL_CIPHER_get_version , const SSL_CIPHER *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_name(___c) \
      LP1(0x2058, const char *, SSL_CIPHER_get_name , const SSL_CIPHER *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_mac(___cipher) \
      LP1(0x205e, const char *, SSL_CIPHER_get_mac , const SSL_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_encryption(___cipher) \
      LP1(0x2064, const char *, SSL_CIPHER_get_encryption , const SSL_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_authentication(___cipher) \
      LP1(0x206a, const char *, SSL_CIPHER_get_authentication , const SSL_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_key_exchange(___cipher) \
      LP1(0x2070, const char *, SSL_CIPHER_get_key_exchange , const SSL_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_fd(___s) \
      LP1(0x207c, int, SSL_get_fd , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_rfd(___s) \
      LP1(0x2082, int, SSL_get_rfd , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_wfd(___s) \
      LP1(0x2088, int, SSL_get_wfd , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_cipher_list(___s, ___n) \
      LP2(0x208e, const char *, SSL_get_cipher_list , const SSL *, ___s, a0, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_shared_ciphers(___s, ___buf, ___size) \
      LP3(0x2094, char *, SSL_get_shared_ciphers , const SSL *, ___s, a0, char *, ___buf, a1, int, ___size, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_read_ahead(___s) \
      LP1(0x209a, int, SSL_get_read_ahead , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_pending(___s) \
      LP1(0x20a0, int, SSL_pending , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_fd(___s, ___fd) \
      LP2(0x20a6, int, SSL_set_fd , SSL *, ___s, a0, int, ___fd, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_rfd(___s, ___fd) \
      LP2(0x20ac, int, SSL_set_rfd , SSL *, ___s, a0, int, ___fd, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_wfd(___s, ___fd) \
      LP2(0x20b2, int, SSL_set_wfd , SSL *, ___s, a0, int, ___fd, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_bio(___s, ___rbio, ___wbio) \
      LP3NR(0x20b8, SSL_set_bio , SSL *, ___s, a0, BIO *, ___rbio, a1, BIO *, ___wbio, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_rbio(___s) \
      LP1(0x20be, BIO *, SSL_get_rbio , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_wbio(___s) \
      LP1(0x20c4, BIO *, SSL_get_wbio , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_cipher_list(___s, ___str) \
      LP2(0x20ca, int, SSL_set_cipher_list , SSL *, ___s, a0, const char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_read_ahead(___s, ___yes) \
      LP2NR(0x20d0, SSL_set_read_ahead , SSL *, ___s, a0, int, ___yes, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_verify_mode(___s) \
      LP1(0x20d6, int, SSL_get_verify_mode , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_verify_depth(___s) \
      LP1(0x20dc, int, SSL_get_verify_depth , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_verify_callback(___s) \
      LP1FR(0x20e2, __fpr, SSL_get_verify_callback , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(int, X509_STORE_CTX *), 0, 0, 0, 0, 0, 0)

#define SSL_set_verify(___s, ___mode, ___callback) \
      LP3NRFP(0x20e8, SSL_set_verify , SSL *, ___s, a0, int, ___mode, d0, __fpt, ___callback, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(int,X509_STORE_CTX *), 0, 0, 0, 0, 0, 0)

#define SSL_set_verify_depth(___s, ___depth) \
      LP2NR(0x20ee, SSL_set_verify_depth , SSL *, ___s, a0, int, ___depth, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_use_RSAPrivateKey(___ssl, ___rsa) \
      LP2(0x20f4, int, SSL_use_RSAPrivateKey , SSL *, ___ssl, a0, RSA *, ___rsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_use_RSAPrivateKey_ASN1(___ssl, ___d, ___len) \
      LP3(0x20fa, int, SSL_use_RSAPrivateKey_ASN1 , SSL *, ___ssl, a0, const unsigned char *, ___d, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_use_PrivateKey(___ssl, ___pkey) \
      LP2(0x2100, int, SSL_use_PrivateKey , SSL *, ___ssl, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_use_PrivateKey_ASN1(___pk, ___ssl, ___d, ___len) \
      LP4(0x2106, int, SSL_use_PrivateKey_ASN1 , int, ___pk, d0, SSL *, ___ssl, a0, unsigned char *, ___d, a1, long, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_use_certificate(___ssl, ___x) \
      LP2(0x210c, int, SSL_use_certificate , SSL *, ___ssl, a0, X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_use_certificate_ASN1(___ssl, ___d, ___len) \
      LP3(0x2112, int, SSL_use_certificate_ASN1 , SSL *, ___ssl, a0, unsigned char *, ___d, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_use_RSAPrivateKey_file(___ssl, ___file, ___type) \
      LP3(0x2118, int, SSL_use_RSAPrivateKey_file , SSL *, ___ssl, a0, const char *, ___file, a1, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_use_PrivateKey_file(___ssl, ___file, ___type) \
      LP3(0x211e, int, SSL_use_PrivateKey_file , SSL *, ___ssl, a0, const char *, ___file, a1, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_use_certificate_file(___ssl, ___file, ___type) \
      LP3(0x2124, int, SSL_use_certificate_file , SSL *, ___ssl, a0, const char *, ___file, a1, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_RSAPrivateKey_file(___ctx, ___file, ___type) \
      LP3(0x212a, int, SSL_CTX_use_RSAPrivateKey_file , SSL_CTX *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_PrivateKey_file(___ctx, ___file, ___type) \
      LP3(0x2130, int, SSL_CTX_use_PrivateKey_file , SSL_CTX *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_certificate_file(___ctx, ___file, ___type) \
      LP3(0x2136, int, SSL_CTX_use_certificate_file , SSL_CTX *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_certificate_chain_file(___ctx, ___file) \
      LP2(0x213c, int, SSL_CTX_use_certificate_chain_file , SSL_CTX *, ___ctx, a0, const char *, ___file, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_load_client_CA_file(___file) \
      LP1(0x2142, STACK_OF(X509_NAME) *, SSL_load_client_CA_file , const char *, ___file, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_add_file_cert_subjects_to_stack(___stackCAs, ___file) \
      LP2(0x2148, int, SSL_add_file_cert_subjects_to_stack , STACK_OF(X509_NAME) *, ___stackCAs, a0, const char *, ___file, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_add_dir_cert_subjects_to_stack(___stackCAs, ___dir) \
      LP2(0x214e, int, SSL_add_dir_cert_subjects_to_stack , STACK_OF(X509_NAME) *, ___stackCAs, a0, const char *, ___dir, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_state_string(___s) \
      LP1(0x215a, const char *, SSL_state_string , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_rstate_string(___s) \
      LP1(0x2160, const char *, SSL_rstate_string , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_state_string_long(___s) \
      LP1(0x2166, const char *, SSL_state_string_long , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_rstate_string_long(___s) \
      LP1(0x216c, const char *, SSL_rstate_string_long , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get_time(___s) \
      LP1(0x2172, long, SSL_SESSION_get_time , const SSL_SESSION *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_set_time(___s, ___t) \
      LP2(0x2178, long, SSL_SESSION_set_time , SSL_SESSION *, ___s, a0, long, ___t, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get_timeout(___s) \
      LP1(0x217e, long, SSL_SESSION_get_timeout , const SSL_SESSION *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_set_timeout(___s, ___t) \
      LP2(0x2184, long, SSL_SESSION_set_timeout , SSL_SESSION *, ___s, a0, long, ___t, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_copy_session_id(___to, ___from) \
      LP2(0x218a, int, SSL_copy_session_id , SSL *, ___to, a0, const SSL *, ___from, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_new() \
      LP0(0x2190, SSL_SESSION *, SSL_SESSION_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_print(___fp, ___ses) \
      LP2(0x21a2, int, SSL_SESSION_print , BIO *, ___fp, a0, const SSL_SESSION *, ___ses, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_free(___ses) \
      LP1NR(0x21a8, SSL_SESSION_free , SSL_SESSION *, ___ses, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_SSL_SESSION(___in, ___pp) \
      LP2(0x21ae, int, i2d_SSL_SESSION , SSL_SESSION *, ___in, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_session(___to, ___session) \
      LP2(0x21b4, int, SSL_set_session , SSL *, ___to, a0, SSL_SESSION *, ___session, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_add_session(___ctx, ___session) \
      LP2(0x21ba, int, SSL_CTX_add_session , SSL_CTX *, ___ctx, a0, SSL_SESSION *, ___session, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_remove_session(___ctx, ___session) \
      LP2(0x21c0, int, SSL_CTX_remove_session , SSL_CTX *, ___ctx, a0, SSL_SESSION *, ___session, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_generate_session_id(___ctx, ___cb) \
      LP2(0x21c6, int, SSL_CTX_set_generate_session_id , SSL_CTX *, ___ctx, a0, GEN_SESSION_CB, ___cb, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_generate_session_id(___s, ___cb) \
      LP2(0x21cc, int, SSL_set_generate_session_id , SSL *, ___s, a0, GEN_SESSION_CB, ___cb, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_has_matching_session_id(___s, ___id, ___id_len) \
      LP3(0x21d2, int, SSL_has_matching_session_id , const SSL *, ___s, a0, const unsigned char *, ___id, a1, unsigned int, ___id_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_SSL_SESSION(___a, ___pp, ___length) \
      LP3(0x21d8, SSL_SESSION *, d2i_SSL_SESSION , SSL_SESSION **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_peer_certificate(___s) \
      LP1(0x21de, X509 *, SSL_get_peer_certificate , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_peer_cert_chain(___s) \
      LP1(0x21e4, STACK_OF(X509) *, SSL_get_peer_cert_chain , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_verify_mode(___ctx) \
      LP1(0x21ea, int, SSL_CTX_get_verify_mode , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_verify_depth(___ctx) \
      LP1(0x21f0, int, SSL_CTX_get_verify_depth , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_verify_callback(___ctx) \
      LP1FR(0x21f6, __fpr, SSL_CTX_get_verify_callback , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(int, X509_STORE_CTX *), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_verify(___ctx, ___mode, ___callback) \
      LP3NRFP(0x21fc, SSL_CTX_set_verify , SSL_CTX *, ___ctx, a0, int, ___mode, d0, __fpt, ___callback, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(int,X509_STORE_CTX *), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_verify_depth(___ctx, ___depth) \
      LP2NR(0x2202, SSL_CTX_set_verify_depth , SSL_CTX *, ___ctx, a0, int, ___depth, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_cert_verify_callback(___ctx, ___cb, ___arg) \
      LP3NRFP(0x2208, SSL_CTX_set_cert_verify_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1, void *, ___arg, a2,\
      , AMISSL_BASE_NAME, int (*__fpt)(X509_STORE_CTX *,void *), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_RSAPrivateKey(___ctx, ___rsa) \
      LP2(0x220e, int, SSL_CTX_use_RSAPrivateKey , SSL_CTX *, ___ctx, a0, RSA *, ___rsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_RSAPrivateKey_ASN1(___ctx, ___d, ___len) \
      LP3(0x2214, int, SSL_CTX_use_RSAPrivateKey_ASN1 , SSL_CTX *, ___ctx, a0, unsigned char *, ___d, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_PrivateKey(___ctx, ___pkey) \
      LP2(0x221a, int, SSL_CTX_use_PrivateKey , SSL_CTX *, ___ctx, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_PrivateKey_ASN1(___pk, ___ctx, ___d, ___len) \
      LP4(0x2220, int, SSL_CTX_use_PrivateKey_ASN1 , int, ___pk, d0, SSL_CTX *, ___ctx, a0, unsigned char *, ___d, a1, long, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_certificate(___ctx, ___x) \
      LP2(0x2226, int, SSL_CTX_use_certificate , SSL_CTX *, ___ctx, a0, X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_certificate_ASN1(___ctx, ___len, ___d) \
      LP3(0x222c, int, SSL_CTX_use_certificate_ASN1 , SSL_CTX *, ___ctx, a0, int, ___len, d0, unsigned char *, ___d, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_default_passwd_cb(___ctx, ___cb) \
      LP2NR(0x2232, SSL_CTX_set_default_passwd_cb , SSL_CTX *, ___ctx, a0, pem_password_cb *, ___cb, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_default_passwd_cb_userdata(___ctx, ___u) \
      LP2NR(0x2238, SSL_CTX_set_default_passwd_cb_userdata , SSL_CTX *, ___ctx, a0, void *, ___u, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_check_private_key(___ctx) \
      LP1(0x223e, int, SSL_CTX_check_private_key , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_check_private_key(___ctx) \
      LP1(0x2244, int, SSL_check_private_key , const SSL *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_session_id_context(___ctx, ___sid_ctx, ___sid_ctx_len) \
      LP3(0x224a, int, SSL_CTX_set_session_id_context , SSL_CTX *, ___ctx, a0, const unsigned char *, ___sid_ctx, a1, unsigned int, ___sid_ctx_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_new(___ctx) \
      LP1(0x2250, SSL *, SSL_new , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_session_id_context(___ssl, ___sid_ctx, ___sid_ctx_len) \
      LP3(0x2256, int, SSL_set_session_id_context , SSL *, ___ssl, a0, const unsigned char *, ___sid_ctx, a1, unsigned int, ___sid_ctx_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_purpose(___ctx, ___purpose) \
      LP2(0x225c, int, SSL_CTX_set_purpose , SSL_CTX *, ___ctx, a0, int, ___purpose, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_purpose(___ssl, ___purpose) \
      LP2(0x2262, int, SSL_set_purpose , SSL *, ___ssl, a0, int, ___purpose, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_trust(___ctx, ___trust) \
      LP2(0x2268, int, SSL_CTX_set_trust , SSL_CTX *, ___ctx, a0, int, ___trust, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_trust(___ssl, ___trust) \
      LP2(0x226e, int, SSL_set_trust , SSL *, ___ssl, a0, int, ___trust, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_free(___ssl) \
      LP1NR(0x2274, SSL_free , SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_accept(___ssl) \
      LP1(0x227a, int, SSL_accept , SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_connect(___ssl) \
      LP1(0x2280, int, SSL_connect , SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_read(___ssl, ___buf, ___num) \
      LP3(0x2286, int, SSL_read , SSL *, ___ssl, a0, void *, ___buf, a1, int, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_peek(___ssl, ___buf, ___num) \
      LP3(0x228c, int, SSL_peek , SSL *, ___ssl, a0, void *, ___buf, a1, int, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_write(___ssl, ___buf, ___num) \
      LP3(0x2292, int, SSL_write , SSL *, ___ssl, a0, const void *, ___buf, a1, int, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_ctrl(___ssl, ___cmd, ___larg, ___parg) \
      LP4(0x2298, long, SSL_ctrl , SSL *, ___ssl, a0, int, ___cmd, d0, long, ___larg, d1, void *, ___parg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_callback_ctrl(___a, ___a1, ___b) \
      LP3FP(0x229e, long, SSL_callback_ctrl , SSL *, ___a, a0, int, ___a1, d0, __fpt, ___b, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_ctrl(___ctx, ___cmd, ___larg, ___parg) \
      LP4(0x22a4, long, SSL_CTX_ctrl , SSL_CTX *, ___ctx, a0, int, ___cmd, d0, long, ___larg, d1, void *, ___parg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_callback_ctrl(___a1, ___a2, ___a3) \
      LP3FP(0x22aa, long, SSL_CTX_callback_ctrl , SSL_CTX *, ___a1, a0, int, ___a2, d0, __fpt, ___a3, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(void), 0, 0, 0, 0, 0, 0)

#define SSL_get_error(___s, ___ret_code) \
      LP2(0x22b0, int, SSL_get_error , const SSL *, ___s, a0, int, ___ret_code, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_version(___s) \
      LP1(0x22b6, const char *, SSL_get_version , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_ssl_version(___ctx, ___meth) \
      LP2(0x22bc, int, SSL_CTX_set_ssl_version , SSL_CTX *, ___ctx, a0, const SSL_METHOD *, ___meth, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TLSv1_method() \
      LP0(0x22f8, const SSL_METHOD *, TLSv1_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TLSv1_server_method() \
      LP0(0x22fe, const SSL_METHOD *, TLSv1_server_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TLSv1_client_method() \
      LP0(0x2304, const SSL_METHOD *, TLSv1_client_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_ciphers(___s) \
      LP1(0x230a, STACK_OF(SSL_CIPHER) *, SSL_get_ciphers , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_do_handshake(___s) \
      LP1(0x2310, int, SSL_do_handshake , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_renegotiate(___s) \
      LP1(0x2316, int, SSL_renegotiate , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_renegotiate_pending(___s) \
      LP1(0x231c, int, SSL_renegotiate_pending , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_shutdown(___s) \
      LP1(0x2322, int, SSL_shutdown , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_ssl_method(___s) \
      LP1(0x2328, const SSL_METHOD *, SSL_get_ssl_method , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_ssl_method(___s, ___method) \
      LP2(0x232e, int, SSL_set_ssl_method , SSL *, ___s, a0, SSL_METHOD *, ___method, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_alert_type_string_long(___value) \
      LP1(0x2334, const char *, SSL_alert_type_string_long , int, ___value, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_alert_type_string(___value) \
      LP1(0x233a, const char *, SSL_alert_type_string , int, ___value, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_alert_desc_string_long(___value) \
      LP1(0x2340, const char *, SSL_alert_desc_string_long , int, ___value, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_alert_desc_string(___value) \
      LP1(0x2346, const char *, SSL_alert_desc_string , int, ___value, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_client_CA_list(___s, ___name_list) \
      LP2NR(0x234c, SSL_set_client_CA_list , SSL *, ___s, a0, STACK_OF(X509_NAME) *, ___name_list, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_client_CA_list(___ctx, ___name_list) \
      LP2NR(0x2352, SSL_CTX_set_client_CA_list , SSL_CTX *, ___ctx, a0, STACK_OF(X509_NAME) *, ___name_list, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_client_CA_list(___s) \
      LP1(0x2358, STACK_OF(X509_NAME) *, SSL_get_client_CA_list , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_client_CA_list(___s) \
      LP1(0x235e, STACK_OF(X509_NAME) *, SSL_CTX_get_client_CA_list , const SSL_CTX *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_add_client_CA(___ssl, ___x) \
      LP2(0x2364, int, SSL_add_client_CA , SSL *, ___ssl, a0, X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_add_client_CA(___ctx, ___x) \
      LP2(0x236a, int, SSL_CTX_add_client_CA , SSL_CTX *, ___ctx, a0, X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_connect_state(___s) \
      LP1NR(0x2370, SSL_set_connect_state , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_accept_state(___s) \
      LP1NR(0x2376, SSL_set_accept_state , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_default_timeout(___s) \
      LP1(0x237c, long, SSL_get_default_timeout , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_description(___a1, ___buf, ___size) \
      LP3(0x2388, char *, SSL_CIPHER_description , const SSL_CIPHER *, ___a1, a0, char *, ___buf, a1, int, ___size, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_dup_CA_list(___sk) \
      LP1(0x238e, STACK_OF(X509_NAME) *, SSL_dup_CA_list , const STACK_OF(X509_NAME) *, ___sk, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_dup(___ssl) \
      LP1(0x2394, SSL *, SSL_dup , SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_certificate(___ssl) \
      LP1(0x239a, X509 *, SSL_get_certificate , const SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_privatekey(___ssl) \
      LP1(0x23a0, struct evp_pkey_st *, SSL_get_privatekey , const SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_quiet_shutdown(___ctx, ___mode) \
      LP2NR(0x23a6, SSL_CTX_set_quiet_shutdown , SSL_CTX *, ___ctx, a0, int, ___mode, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_quiet_shutdown(___ctx) \
      LP1(0x23ac, int, SSL_CTX_get_quiet_shutdown , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_quiet_shutdown(___ssl, ___mode) \
      LP2NR(0x23b2, SSL_set_quiet_shutdown , SSL *, ___ssl, a0, int, ___mode, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_quiet_shutdown(___ssl) \
      LP1(0x23b8, int, SSL_get_quiet_shutdown , const SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_shutdown(___ssl, ___mode) \
      LP2NR(0x23be, SSL_set_shutdown , SSL *, ___ssl, a0, int, ___mode, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_shutdown(___ssl) \
      LP1(0x23c4, int, SSL_get_shutdown , const SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_version(___ssl) \
      LP1(0x23ca, int, SSL_version , const SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_default_verify_paths(___ctx) \
      LP1(0x23d0, int, SSL_CTX_set_default_verify_paths , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_load_verify_locations(___ctx, ___CAfile, ___CApath) \
      LP3(0x23d6, int, SSL_CTX_load_verify_locations , SSL_CTX *, ___ctx, a0, const char *, ___CAfile, a1, const char *, ___CApath, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_session(___ssl) \
      LP1(0x23dc, SSL_SESSION *, SSL_get_session , const SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get1_session(___ssl) \
      LP1(0x23e2, SSL_SESSION *, SSL_get1_session , SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_SSL_CTX(___ssl) \
      LP1(0x23e8, SSL_CTX *, SSL_get_SSL_CTX , const SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_info_callback(___ssl, ___cb) \
      LP2NRFP(0x23ee, SSL_set_info_callback , SSL *, ___ssl, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(const SSL *ssl,int type,int val), 0, 0, 0, 0, 0, 0)

#define SSL_get_info_callback(___ssl) \
      LP1FR(0x23f4, __fpr, SSL_get_info_callback , const SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, void (*__fpr)(const SSL *ssl, int type, int val), 0, 0, 0, 0, 0, 0)

#define SSL_set_verify_result(___ssl, ___v) \
      LP2NR(0x2400, SSL_set_verify_result , SSL *, ___ssl, a0, long, ___v, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_verify_result(___ssl) \
      LP1(0x2406, long, SSL_get_verify_result , const SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_ex_data(___ssl, ___idx, ___data) \
      LP3(0x240c, int, SSL_set_ex_data , SSL *, ___ssl, a0, int, ___idx, d0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_ex_data(___ssl, ___idx) \
      LP2(0x2412, void *, SSL_get_ex_data , const SSL *, ___ssl, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_set_ex_data(___ss, ___idx, ___data) \
      LP3(0x241e, int, SSL_SESSION_set_ex_data , SSL_SESSION *, ___ss, a0, int, ___idx, d0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get_ex_data(___ss, ___idx) \
      LP2(0x2424, void *, SSL_SESSION_get_ex_data , const SSL_SESSION *, ___ss, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_ex_data(___ssl, ___idx, ___data) \
      LP3(0x2430, int, SSL_CTX_set_ex_data , SSL_CTX *, ___ssl, a0, int, ___idx, d0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_ex_data(___ssl, ___idx) \
      LP2(0x2436, void *, SSL_CTX_get_ex_data , const SSL_CTX *, ___ssl, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_ex_data_X509_STORE_CTX_idx() \
      LP0(0x2442, int, SSL_get_ex_data_X509_STORE_CTX_idx ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_tmp_dh_callback(___ctx, ___dh) \
      LP2NRFP(0x2454, SSL_CTX_set_tmp_dh_callback , SSL_CTX *, ___ctx, a0, __fpt, ___dh, a1,\
      , AMISSL_BASE_NAME, DH * (*__fpt)(SSL *ssl,int is_export,int keylength), 0, 0, 0, 0, 0, 0)

#define SSL_set_tmp_dh_callback(___ssl, ___dh) \
      LP2NRFP(0x245a, SSL_set_tmp_dh_callback , SSL *, ___ssl, a0, __fpt, ___dh, a1,\
      , AMISSL_BASE_NAME, DH * (*__fpt)(SSL *ssl,int is_export,int keylength), 0, 0, 0, 0, 0, 0)

#define SSL_COMP_add_compression_method(___id, ___cm) \
      LP2(0x2460, int, SSL_COMP_add_compression_method , int, ___id, d0, COMP_METHOD *, ___cm, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_SSL_strings() \
      LP0(0x2466, int, ERR_load_SSL_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_num(___a) \
      LP1(0x246c, int, OPENSSL_sk_num , const OPENSSL_STACK *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_value(___a, ___b) \
      LP2(0x2472, void *, OPENSSL_sk_value , const OPENSSL_STACK *, ___a, a0, int, ___b, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_set(___a, ___b, ___c) \
      LP3(0x2478, void *, OPENSSL_sk_set , OPENSSL_STACK *, ___a, a0, int, ___b, d0, const void *, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_new(___cmp) \
      LP1FP(0x247e, OPENSSL_STACK *, OPENSSL_sk_new , __fpt, ___cmp, a0,\
      , AMISSL_BASE_NAME, int (*__fpt)(const void *,const void *), 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_new_null() \
      LP0(0x2484, OPENSSL_STACK *, OPENSSL_sk_new_null ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_free(___a) \
      LP1NR(0x248a, OPENSSL_sk_free , OPENSSL_STACK *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_pop_free(___st, ___func) \
      LP2NRFP(0x2490, OPENSSL_sk_pop_free , OPENSSL_STACK *, ___st, a0, __fpt, ___func, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(void *), 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_insert(___sk, ___data, ___where) \
      LP3(0x2496, int, OPENSSL_sk_insert , OPENSSL_STACK *, ___sk, a0, const void *, ___data, a1, int, ___where, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_delete(___st, ___loc) \
      LP2(0x249c, void *, OPENSSL_sk_delete , OPENSSL_STACK *, ___st, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_delete_ptr(___st, ___p) \
      LP2(0x24a2, void *, OPENSSL_sk_delete_ptr , OPENSSL_STACK *, ___st, a0, const void *, ___p, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_find(___st, ___data) \
      LP2(0x24a8, int, OPENSSL_sk_find , OPENSSL_STACK *, ___st, a0, const void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_push(___st, ___data) \
      LP2(0x24ae, int, OPENSSL_sk_push , OPENSSL_STACK *, ___st, a0, const void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_unshift(___st, ___data) \
      LP2(0x24b4, int, OPENSSL_sk_unshift , OPENSSL_STACK *, ___st, a0, const void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_shift(___st) \
      LP1(0x24ba, void *, OPENSSL_sk_shift , OPENSSL_STACK *, ___st, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_pop(___st) \
      LP1(0x24c0, void *, OPENSSL_sk_pop , OPENSSL_STACK *, ___st, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_zero(___st) \
      LP1NR(0x24c6, OPENSSL_sk_zero , OPENSSL_STACK *, ___st, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_set_cmp_func(___sk, ___c) \
      LP2FPFR(0x24cc, __fpr, OPENSSL_sk_set_cmp_func , OPENSSL_STACK *, ___sk, a0, __fpt, ___c, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const void *,const void *), int (*__fpr)(const void *, const void *), 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_dup(___st) \
      LP1(0x24d2, OPENSSL_STACK *, OPENSSL_sk_dup , const OPENSSL_STACK *, ___st, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_sort(___st) \
      LP1NR(0x24d8, OPENSSL_sk_sort , OPENSSL_STACK *, ___st, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_is_sorted(___st) \
      LP1(0x24de, int, OPENSSL_sk_is_sorted , const OPENSSL_STACK *, ___st, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TXT_DB_read(___in, ___num) \
      LP2(0x2502, TXT_DB *, TXT_DB_read , BIO *, ___in, a0, int, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TXT_DB_write(___out, ___db) \
      LP2(0x2508, long, TXT_DB_write , BIO *, ___out, a0, TXT_DB *, ___db, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TXT_DB_create_index(___db, ___field, ___qual, ___hash, ___cmp) \
      LP5FP(0x250e, int, TXT_DB_create_index , TXT_DB *, ___db, a0, int, ___field, d0, __fpt, ___qual, a1, OPENSSL_LH_HASHFUNC, ___hash, d1, OPENSSL_LH_COMPFUNC, ___cmp, d2,\
      , AMISSL_BASE_NAME, int (*__fpt)(OPENSSL_STRING *), 0, 0, 0, 0, 0, 0)

#define TXT_DB_free(___db) \
      LP1NR(0x2514, TXT_DB_free , TXT_DB *, ___db, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TXT_DB_get_by_index(___db, ___idx, ___value) \
      LP3(0x251a, char **, TXT_DB_get_by_index , TXT_DB *, ___db, a0, int, ___idx, d0, char **, ___value, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TXT_DB_insert(___db, ___value) \
      LP2(0x2520, int, TXT_DB_insert , TXT_DB *, ___db, a0, char **, ___value, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_new() \
      LP0(0x2526, UI *, UI_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_new_method(___method) \
      LP1(0x252c, UI *, UI_new_method , const UI_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_free(___ui) \
      LP1NR(0x2532, UI_free , UI *, ___ui, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_add_input_string(___ui, ___prompt, ___flags, ___result_buf, ___minsize, ___maxsize) \
      LP6(0x2538, int, UI_add_input_string , UI *, ___ui, a0, const char *, ___prompt, a1, int, ___flags, d0, char *, ___result_buf, a2, int, ___minsize, d1, int, ___maxsize, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_dup_input_string(___ui, ___prompt, ___flags, ___result_buf, ___minsize, ___maxsize) \
      LP6(0x253e, int, UI_dup_input_string , UI *, ___ui, a0, const char *, ___prompt, a1, int, ___flags, d0, char *, ___result_buf, a2, int, ___minsize, d1, int, ___maxsize, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_add_verify_string(___ui, ___prompt, ___flags, ___result_buf, ___minsize, ___maxsize, ___test_buf) \
      LP7(0x2544, int, UI_add_verify_string , UI *, ___ui, a0, const char *, ___prompt, a1, int, ___flags, d0, char *, ___result_buf, a2, int, ___minsize, d1, int, ___maxsize, d2, const char *, ___test_buf, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_dup_verify_string(___ui, ___prompt, ___flags, ___result_buf, ___minsize, ___maxsize, ___test_buf) \
      LP7(0x254a, int, UI_dup_verify_string , UI *, ___ui, a0, const char *, ___prompt, a1, int, ___flags, d0, char *, ___result_buf, a2, int, ___minsize, d1, int, ___maxsize, d2, const char *, ___test_buf, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_add_input_boolean(___ui, ___prompt, ___action_desc, ___ok_chars, ___cancel_chars, ___flags, ___result_buf) \
      LP7(0x2550, int, UI_add_input_boolean , UI *, ___ui, a0, const char *, ___prompt, a1, const char *, ___action_desc, a2, const char *, ___ok_chars, a3, const char *, ___cancel_chars, d0, int, ___flags, d1, char *, ___result_buf, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_dup_input_boolean(___ui, ___prompt, ___action_desc, ___ok_chars, ___cancel_chars, ___flags, ___result_buf) \
      LP7(0x2556, int, UI_dup_input_boolean , UI *, ___ui, a0, const char *, ___prompt, a1, const char *, ___action_desc, a2, const char *, ___ok_chars, a3, const char *, ___cancel_chars, d0, int, ___flags, d1, char *, ___result_buf, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_add_info_string(___ui, ___text) \
      LP2(0x255c, int, UI_add_info_string , UI *, ___ui, a0, const char *, ___text, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_dup_info_string(___ui, ___text) \
      LP2(0x2562, int, UI_dup_info_string , UI *, ___ui, a0, const char *, ___text, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_add_error_string(___ui, ___text) \
      LP2(0x2568, int, UI_add_error_string , UI *, ___ui, a0, const char *, ___text, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_dup_error_string(___ui, ___text) \
      LP2(0x256e, int, UI_dup_error_string , UI *, ___ui, a0, const char *, ___text, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_construct_prompt(___ui_method, ___object_desc, ___object_name) \
      LP3(0x2574, char *, UI_construct_prompt , UI *, ___ui_method, a0, const char *, ___object_desc, a1, const char *, ___object_name, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_add_user_data(___ui, ___user_data) \
      LP2(0x257a, void *, UI_add_user_data , UI *, ___ui, a0, void *, ___user_data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get0_user_data(___ui) \
      LP1(0x2580, void *, UI_get0_user_data , UI *, ___ui, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get0_result(___ui, ___i) \
      LP2(0x2586, const char *, UI_get0_result , UI *, ___ui, a0, int, ___i, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_process(___ui) \
      LP1(0x258c, int, UI_process , UI *, ___ui, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_ctrl(___ui, ___cmd, ___i, ___p, ___f) \
      LP5FP(0x2592, int, UI_ctrl , UI *, ___ui, a0, int, ___cmd, d0, long, ___i, d1, void *, ___p, a1, __fpt, ___f, a2,\
      , AMISSL_BASE_NAME, void (*__fpt)(), 0, 0, 0, 0, 0, 0)

#define UI_set_ex_data(___r, ___idx, ___arg) \
      LP3(0x259e, int, UI_set_ex_data , UI *, ___r, a0, int, ___idx, d0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get_ex_data(___r, ___idx) \
      LP2(0x25a4, void *, UI_get_ex_data , UI *, ___r, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_set_default_method(___meth) \
      LP1NR(0x25aa, UI_set_default_method , const UI_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get_default_method() \
      LP0(0x25b0, const UI_METHOD *, UI_get_default_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get_method(___ui) \
      LP1(0x25b6, const UI_METHOD *, UI_get_method , UI *, ___ui, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_set_method(___ui, ___meth) \
      LP2(0x25bc, const UI_METHOD *, UI_set_method , UI *, ___ui, a0, const UI_METHOD *, ___meth, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_OpenSSL() \
      LP0(0x25c2, UI_METHOD *, UI_OpenSSL ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_create_method(___name) \
      LP1(0x25c8, UI_METHOD *, UI_create_method , const char *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_destroy_method(___ui_method) \
      LP1NR(0x25ce, UI_destroy_method , UI_METHOD *, ___ui_method, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_method_set_opener(___method, ___opener) \
      LP2FP(0x25d4, int, UI_method_set_opener , UI_METHOD *, ___method, a0, __fpt, ___opener, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(UI *ui), 0, 0, 0, 0, 0, 0)

#define UI_method_set_writer(___method, ___writer) \
      LP2FP(0x25da, int, UI_method_set_writer , UI_METHOD *, ___method, a0, __fpt, ___writer, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(UI *ui,UI_STRING *uis), 0, 0, 0, 0, 0, 0)

#define UI_method_set_flusher(___method, ___flusher) \
      LP2FP(0x25e0, int, UI_method_set_flusher , UI_METHOD *, ___method, a0, __fpt, ___flusher, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(UI *ui), 0, 0, 0, 0, 0, 0)

#define UI_method_set_reader(___method, ___reader) \
      LP2FP(0x25e6, int, UI_method_set_reader , UI_METHOD *, ___method, a0, __fpt, ___reader, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(UI *ui,UI_STRING *uis), 0, 0, 0, 0, 0, 0)

#define UI_method_set_closer(___method, ___closer) \
      LP2FP(0x25ec, int, UI_method_set_closer , UI_METHOD *, ___method, a0, __fpt, ___closer, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(UI *ui), 0, 0, 0, 0, 0, 0)

#define UI_method_get_opener(___method) \
      LP1FR(0x25f2, __fpr, UI_method_get_opener , const UI_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(UI *), 0, 0, 0, 0, 0, 0)

#define UI_method_get_writer(___method) \
      LP1FR(0x25f8, __fpr, UI_method_get_writer , const UI_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(UI *, UI_STRING *), 0, 0, 0, 0, 0, 0)

#define UI_method_get_flusher(___method) \
      LP1FR(0x25fe, __fpr, UI_method_get_flusher , const UI_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(UI *), 0, 0, 0, 0, 0, 0)

#define UI_method_get_reader(___method) \
      LP1FR(0x2604, __fpr, UI_method_get_reader , const UI_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(UI *, UI_STRING *), 0, 0, 0, 0, 0, 0)

#define UI_method_get_closer(___method) \
      LP1FR(0x260a, __fpr, UI_method_get_closer , const UI_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(UI *), 0, 0, 0, 0, 0, 0)

#define UI_get_string_type(___uis) \
      LP1(0x2610, enum UI_string_types, UI_get_string_type , UI_STRING *, ___uis, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get_input_flags(___uis) \
      LP1(0x2616, int, UI_get_input_flags , UI_STRING *, ___uis, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get0_output_string(___uis) \
      LP1(0x261c, const char *, UI_get0_output_string , UI_STRING *, ___uis, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get0_action_string(___uis) \
      LP1(0x2622, const char *, UI_get0_action_string , UI_STRING *, ___uis, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get0_result_string(___uis) \
      LP1(0x2628, const char *, UI_get0_result_string , UI_STRING *, ___uis, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get0_test_string(___uis) \
      LP1(0x262e, const char *, UI_get0_test_string , UI_STRING *, ___uis, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get_result_minsize(___uis) \
      LP1(0x2634, int, UI_get_result_minsize , UI_STRING *, ___uis, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get_result_maxsize(___uis) \
      LP1(0x263a, int, UI_get_result_maxsize , UI_STRING *, ___uis, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_set_result(___ui, ___uis, ___result) \
      LP3(0x2640, int, UI_set_result , UI *, ___ui, a0, UI_STRING *, ___uis, a1, const char *, ___result, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_UTIL_read_pw_string(___buf, ___length, ___prompt, ___verify) \
      LP4(0x2646, int, UI_UTIL_read_pw_string , char *, ___buf, a0, int, ___length, d0, const char *, ___prompt, a1, int, ___verify, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_UTIL_read_pw(___buf, ___buff, ___size, ___prompt, ___verify) \
      LP5(0x264c, int, UI_UTIL_read_pw , char *, ___buf, a0, char *, ___buff, a1, int, ___size, d0, const char *, ___prompt, a2, int, ___verify, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_UI_strings() \
      LP0(0x2652, int, ERR_load_UI_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_verify_cert_error_string(___n) \
      LP1(0x2664, const char *, X509_verify_cert_error_string , long, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_verify(___a, ___r) \
      LP2(0x266a, int, X509_verify , X509 *, ___a, a0, EVP_PKEY *, ___r, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_verify(___a, ___r) \
      LP2(0x2670, int, X509_REQ_verify , X509_REQ *, ___a, a0, EVP_PKEY *, ___r, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_verify(___a, ___r) \
      LP2(0x2676, int, X509_CRL_verify , X509_CRL *, ___a, a0, EVP_PKEY *, ___r, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKI_verify(___a, ___r) \
      LP2(0x267c, int, NETSCAPE_SPKI_verify , NETSCAPE_SPKI *, ___a, a0, EVP_PKEY *, ___r, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKI_b64_decode(___str, ___len) \
      LP2(0x2682, NETSCAPE_SPKI *, NETSCAPE_SPKI_b64_decode , const char *, ___str, a0, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKI_b64_encode(___x) \
      LP1(0x2688, char *, NETSCAPE_SPKI_b64_encode , NETSCAPE_SPKI *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKI_get_pubkey(___x) \
      LP1(0x268e, EVP_PKEY *, NETSCAPE_SPKI_get_pubkey , NETSCAPE_SPKI *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKI_set_pubkey(___x, ___pkey) \
      LP2(0x2694, int, NETSCAPE_SPKI_set_pubkey , NETSCAPE_SPKI *, ___x, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKI_print(___out, ___spki) \
      LP2(0x269a, int, NETSCAPE_SPKI_print , BIO *, ___out, a0, NETSCAPE_SPKI *, ___spki, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_signature_print(___bp, ___alg, ___sig) \
      LP3(0x26a0, int, X509_signature_print , BIO *, ___bp, a0, const X509_ALGOR *, ___alg, a1, const ASN1_STRING *, ___sig, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_sign(___x, ___pkey, ___md) \
      LP3(0x26a6, int, X509_sign , X509 *, ___x, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___md, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_sign(___x, ___pkey, ___md) \
      LP3(0x26ac, int, X509_REQ_sign , X509_REQ *, ___x, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___md, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_sign(___x, ___pkey, ___md) \
      LP3(0x26b2, int, X509_CRL_sign , X509_CRL *, ___x, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___md, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKI_sign(___x, ___pkey, ___md) \
      LP3(0x26b8, int, NETSCAPE_SPKI_sign , NETSCAPE_SPKI *, ___x, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___md, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_pubkey_digest(___data, ___type, ___md, ___len) \
      LP4(0x26be, int, X509_pubkey_digest , const X509 *, ___data, a0, const EVP_MD *, ___type, a1, unsigned char *, ___md, a2, unsigned int *, ___len, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_digest(___data, ___type, ___md, ___len) \
      LP4(0x26c4, int, X509_digest , const X509 *, ___data, a0, const EVP_MD *, ___type, a1, unsigned char *, ___md, a2, unsigned int *, ___len, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_digest(___data, ___type, ___md, ___len) \
      LP4(0x26ca, int, X509_CRL_digest , const X509_CRL *, ___data, a0, const EVP_MD *, ___type, a1, unsigned char *, ___md, a2, unsigned int *, ___len, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_digest(___data, ___type, ___md, ___len) \
      LP4(0x26d0, int, X509_REQ_digest , const X509_REQ *, ___data, a0, const EVP_MD *, ___type, a1, unsigned char *, ___md, a2, unsigned int *, ___len, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_digest(___data, ___type, ___md, ___len) \
      LP4(0x26d6, int, X509_NAME_digest , const X509_NAME *, ___data, a0, const EVP_MD *, ___type, a1, unsigned char *, ___md, a2, unsigned int *, ___len, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_bio(___bp, ___x509) \
      LP2(0x26dc, X509 *, d2i_X509_bio , BIO *, ___bp, a0, X509 **, ___x509, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_bio(___bp, ___x509) \
      LP2(0x26e2, int, i2d_X509_bio , BIO *, ___bp, a0, X509 *, ___x509, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_CRL_bio(___bp, ___crl) \
      LP2(0x26e8, X509_CRL *, d2i_X509_CRL_bio , BIO *, ___bp, a0, X509_CRL **, ___crl, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_CRL_bio(___bp, ___crl) \
      LP2(0x26ee, int, i2d_X509_CRL_bio , BIO *, ___bp, a0, X509_CRL *, ___crl, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_REQ_bio(___bp, ___req) \
      LP2(0x26f4, X509_REQ *, d2i_X509_REQ_bio , BIO *, ___bp, a0, X509_REQ **, ___req, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_REQ_bio(___bp, ___req) \
      LP2(0x26fa, int, i2d_X509_REQ_bio , BIO *, ___bp, a0, X509_REQ *, ___req, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_RSAPrivateKey_bio(___bp, ___rsa) \
      LP2(0x2700, RSA *, d2i_RSAPrivateKey_bio , BIO *, ___bp, a0, RSA **, ___rsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_RSAPrivateKey_bio(___bp, ___rsa) \
      LP2(0x2706, int, i2d_RSAPrivateKey_bio , BIO *, ___bp, a0, RSA *, ___rsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_RSAPublicKey_bio(___bp, ___rsa) \
      LP2(0x270c, RSA *, d2i_RSAPublicKey_bio , BIO *, ___bp, a0, RSA **, ___rsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_RSAPublicKey_bio(___bp, ___rsa) \
      LP2(0x2712, int, i2d_RSAPublicKey_bio , BIO *, ___bp, a0, RSA *, ___rsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_RSA_PUBKEY_bio(___bp, ___rsa) \
      LP2(0x2718, RSA *, d2i_RSA_PUBKEY_bio , BIO *, ___bp, a0, RSA **, ___rsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_RSA_PUBKEY_bio(___bp, ___rsa) \
      LP2(0x271e, int, i2d_RSA_PUBKEY_bio , BIO *, ___bp, a0, RSA *, ___rsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DSA_PUBKEY_bio(___bp, ___dsa) \
      LP2(0x2724, DSA *, d2i_DSA_PUBKEY_bio , BIO *, ___bp, a0, DSA **, ___dsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DSA_PUBKEY_bio(___bp, ___dsa) \
      LP2(0x272a, int, i2d_DSA_PUBKEY_bio , BIO *, ___bp, a0, DSA *, ___dsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DSAPrivateKey_bio(___bp, ___dsa) \
      LP2(0x2730, DSA *, d2i_DSAPrivateKey_bio , BIO *, ___bp, a0, DSA **, ___dsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DSAPrivateKey_bio(___bp, ___dsa) \
      LP2(0x2736, int, i2d_DSAPrivateKey_bio , BIO *, ___bp, a0, DSA *, ___dsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS8_bio(___bp, ___p8) \
      LP2(0x273c, X509_SIG *, d2i_PKCS8_bio , BIO *, ___bp, a0, X509_SIG **, ___p8, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS8_bio(___bp, ___p8) \
      LP2(0x2742, int, i2d_PKCS8_bio , BIO *, ___bp, a0, X509_SIG *, ___p8, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS8_PRIV_KEY_INFO_bio(___bp, ___p8inf) \
      LP2(0x2748, PKCS8_PRIV_KEY_INFO *, d2i_PKCS8_PRIV_KEY_INFO_bio , BIO *, ___bp, a0, PKCS8_PRIV_KEY_INFO **, ___p8inf, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS8_PRIV_KEY_INFO_bio(___bp, ___p8inf) \
      LP2(0x274e, int, i2d_PKCS8_PRIV_KEY_INFO_bio , BIO *, ___bp, a0, PKCS8_PRIV_KEY_INFO *, ___p8inf, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS8PrivateKeyInfo_bio(___bp, ___key) \
      LP2(0x2754, int, i2d_PKCS8PrivateKeyInfo_bio , BIO *, ___bp, a0, EVP_PKEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PrivateKey_bio(___bp, ___pkey) \
      LP2(0x275a, int, i2d_PrivateKey_bio , BIO *, ___bp, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PrivateKey_bio(___bp, ___a) \
      LP2(0x2760, EVP_PKEY *, d2i_PrivateKey_bio , BIO *, ___bp, a0, EVP_PKEY **, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PUBKEY_bio(___bp, ___pkey) \
      LP2(0x2766, int, i2d_PUBKEY_bio , BIO *, ___bp, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PUBKEY_bio(___bp, ___a) \
      LP2(0x276c, EVP_PKEY *, d2i_PUBKEY_bio , BIO *, ___bp, a0, EVP_PKEY **, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_dup(___x509) \
      LP1(0x2772, X509 *, X509_dup , X509 *, ___x509, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_dup(___xa) \
      LP1(0x2778, X509_ATTRIBUTE *, X509_ATTRIBUTE_dup , X509_ATTRIBUTE *, ___xa, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSION_dup(___ex) \
      LP1(0x277e, X509_EXTENSION *, X509_EXTENSION_dup , X509_EXTENSION *, ___ex, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_dup(___crl) \
      LP1(0x2784, X509_CRL *, X509_CRL_dup , X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_dup(___req) \
      LP1(0x278a, X509_REQ *, X509_REQ_dup , X509_REQ *, ___req, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ALGOR_dup(___xn) \
      LP1(0x2790, X509_ALGOR *, X509_ALGOR_dup , X509_ALGOR *, ___xn, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_dup(___xn) \
      LP1(0x2796, X509_NAME *, X509_NAME_dup , X509_NAME *, ___xn, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_ENTRY_dup(___ne) \
      LP1(0x279c, X509_NAME_ENTRY *, X509_NAME_ENTRY_dup , X509_NAME_ENTRY *, ___ne, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_cmp_time(___s, ___t) \
      LP2(0x27a2, int, X509_cmp_time , const ASN1_TIME *, ___s, a0, time_t *, ___t, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_cmp_current_time(___s) \
      LP1(0x27a8, int, X509_cmp_current_time , ASN1_TIME *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_time_adj(___s, ___adj, ___t) \
      LP3(0x27ae, ASN1_TIME *, X509_time_adj , ASN1_TIME *, ___s, a0, long, ___adj, d0, time_t *, ___t, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_gmtime_adj(___s, ___adj) \
      LP2(0x27b4, ASN1_TIME *, X509_gmtime_adj , ASN1_TIME *, ___s, a0, long, ___adj, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_default_cert_area() \
      LP0(0x27ba, const char *, X509_get_default_cert_area ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_default_cert_dir() \
      LP0(0x27c0, const char *, X509_get_default_cert_dir ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_default_cert_file() \
      LP0(0x27c6, const char *, X509_get_default_cert_file ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_default_cert_dir_env() \
      LP0(0x27cc, const char *, X509_get_default_cert_dir_env ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_default_cert_file_env() \
      LP0(0x27d2, const char *, X509_get_default_cert_file_env ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_default_private_dir() \
      LP0(0x27d8, const char *, X509_get_default_private_dir ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_to_X509_REQ(___x, ___pkey, ___md) \
      LP3(0x27de, X509_REQ *, X509_to_X509_REQ , X509 *, ___x, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___md, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_to_X509(___r, ___days, ___pkey) \
      LP3(0x27e4, X509 *, X509_REQ_to_X509 , X509_REQ *, ___r, a0, int, ___days, d0, EVP_PKEY *, ___pkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ALGOR_new() \
      LP0(0x27ea, X509_ALGOR *, X509_ALGOR_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ALGOR_free(___a) \
      LP1NR(0x27f0, X509_ALGOR_free , X509_ALGOR *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_ALGOR(___a, ___in, ___len) \
      LP3(0x27f6, X509_ALGOR *, d2i_X509_ALGOR , X509_ALGOR **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_ALGOR(___a, ___out) \
      LP2(0x27fc, int, i2d_X509_ALGOR , X509_ALGOR *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ALGOR_it() \
      LP0(0x2802, const ASN1_ITEM *, X509_ALGOR_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VAL_new() \
      LP0(0x2808, X509_VAL *, X509_VAL_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VAL_free(___a) \
      LP1NR(0x280e, X509_VAL_free , X509_VAL *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_VAL(___a, ___in, ___len) \
      LP3(0x2814, X509_VAL *, d2i_X509_VAL , X509_VAL **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_VAL(___a, ___out) \
      LP2(0x281a, int, i2d_X509_VAL , X509_VAL *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VAL_it() \
      LP0(0x2820, const ASN1_ITEM *, X509_VAL_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PUBKEY_new() \
      LP0(0x2826, X509_PUBKEY *, X509_PUBKEY_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PUBKEY_free(___a) \
      LP1NR(0x282c, X509_PUBKEY_free , X509_PUBKEY *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_PUBKEY(___a, ___in, ___len) \
      LP3(0x2832, X509_PUBKEY *, d2i_X509_PUBKEY , X509_PUBKEY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_PUBKEY(___a, ___out) \
      LP2(0x2838, int, i2d_X509_PUBKEY , X509_PUBKEY *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PUBKEY_it() \
      LP0(0x283e, const ASN1_ITEM *, X509_PUBKEY_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PUBKEY_set(___x, ___pkey) \
      LP2(0x2844, int, X509_PUBKEY_set , X509_PUBKEY **, ___x, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PUBKEY_get(___key) \
      LP1(0x284a, EVP_PKEY *, X509_PUBKEY_get , X509_PUBKEY *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_pubkey_parameters(___pkey, ___chain) \
      LP2(0x2850, int, X509_get_pubkey_parameters , EVP_PKEY *, ___pkey, a0, STACK_OF(X509) *, ___chain, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PUBKEY(___a, ___pp) \
      LP2(0x2856, int, i2d_PUBKEY , EVP_PKEY *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PUBKEY(___a, ___pp, ___length) \
      LP3(0x285c, EVP_PKEY *, d2i_PUBKEY , EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_RSA_PUBKEY(___a, ___pp) \
      LP2(0x2862, int, i2d_RSA_PUBKEY , RSA *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_RSA_PUBKEY(___a, ___pp, ___length) \
      LP3(0x2868, RSA *, d2i_RSA_PUBKEY , RSA **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DSA_PUBKEY(___a, ___pp) \
      LP2(0x286e, int, i2d_DSA_PUBKEY , DSA *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DSA_PUBKEY(___a, ___pp, ___length) \
      LP3(0x2874, DSA *, d2i_DSA_PUBKEY , DSA **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_SIG_new() \
      LP0(0x287a, X509_SIG *, X509_SIG_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_SIG_free(___a) \
      LP1NR(0x2880, X509_SIG_free , X509_SIG *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_SIG(___a, ___in, ___len) \
      LP3(0x2886, X509_SIG *, d2i_X509_SIG , X509_SIG **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_SIG(___a, ___out) \
      LP2(0x288c, int, i2d_X509_SIG , X509_SIG *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_SIG_it() \
      LP0(0x2892, const ASN1_ITEM *, X509_SIG_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_INFO_new() \
      LP0(0x2898, X509_REQ_INFO *, X509_REQ_INFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_INFO_free(___a) \
      LP1NR(0x289e, X509_REQ_INFO_free , X509_REQ_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_REQ_INFO(___a, ___in, ___len) \
      LP3(0x28a4, X509_REQ_INFO *, d2i_X509_REQ_INFO , X509_REQ_INFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_REQ_INFO(___a, ___out) \
      LP2(0x28aa, int, i2d_X509_REQ_INFO , X509_REQ_INFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_INFO_it() \
      LP0(0x28b0, const ASN1_ITEM *, X509_REQ_INFO_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_new() \
      LP0(0x28b6, X509_REQ *, X509_REQ_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_free(___a) \
      LP1NR(0x28bc, X509_REQ_free , X509_REQ *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_REQ(___a, ___in, ___len) \
      LP3(0x28c2, X509_REQ *, d2i_X509_REQ , X509_REQ **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_REQ(___a, ___out) \
      LP2(0x28c8, int, i2d_X509_REQ , X509_REQ *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_it() \
      LP0(0x28ce, const ASN1_ITEM *, X509_REQ_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_new() \
      LP0(0x28d4, X509_ATTRIBUTE *, X509_ATTRIBUTE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_free(___a) \
      LP1NR(0x28da, X509_ATTRIBUTE_free , X509_ATTRIBUTE *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_ATTRIBUTE(___a, ___in, ___len) \
      LP3(0x28e0, X509_ATTRIBUTE *, d2i_X509_ATTRIBUTE , X509_ATTRIBUTE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_ATTRIBUTE(___a, ___out) \
      LP2(0x28e6, int, i2d_X509_ATTRIBUTE , X509_ATTRIBUTE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_it() \
      LP0(0x28ec, const ASN1_ITEM *, X509_ATTRIBUTE_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_create(___nid, ___atrtype, ___value) \
      LP3(0x28f2, X509_ATTRIBUTE *, X509_ATTRIBUTE_create , int, ___nid, d0, int, ___atrtype, d1, void *, ___value, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSION_new() \
      LP0(0x28f8, X509_EXTENSION *, X509_EXTENSION_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSION_free(___a) \
      LP1NR(0x28fe, X509_EXTENSION_free , X509_EXTENSION *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_EXTENSION(___a, ___in, ___len) \
      LP3(0x2904, X509_EXTENSION *, d2i_X509_EXTENSION , X509_EXTENSION **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_EXTENSION(___a, ___out) \
      LP2(0x290a, int, i2d_X509_EXTENSION , X509_EXTENSION *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSION_it() \
      LP0(0x2910, const ASN1_ITEM *, X509_EXTENSION_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_ENTRY_new() \
      LP0(0x2916, X509_NAME_ENTRY *, X509_NAME_ENTRY_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_ENTRY_free(___a) \
      LP1NR(0x291c, X509_NAME_ENTRY_free , X509_NAME_ENTRY *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_NAME_ENTRY(___a, ___in, ___len) \
      LP3(0x2922, X509_NAME_ENTRY *, d2i_X509_NAME_ENTRY , X509_NAME_ENTRY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_NAME_ENTRY(___a, ___out) \
      LP2(0x2928, int, i2d_X509_NAME_ENTRY , X509_NAME_ENTRY *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_ENTRY_it() \
      LP0(0x292e, const ASN1_ITEM *, X509_NAME_ENTRY_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_new() \
      LP0(0x2934, X509_NAME *, X509_NAME_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_free(___a) \
      LP1NR(0x293a, X509_NAME_free , X509_NAME *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_NAME(___a, ___in, ___len) \
      LP3(0x2940, X509_NAME *, d2i_X509_NAME , X509_NAME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_NAME(___a, ___out) \
      LP2(0x2946, int, i2d_X509_NAME , X509_NAME *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_it() \
      LP0(0x294c, const ASN1_ITEM *, X509_NAME_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_set(___xn, ___name) \
      LP2(0x2952, int, X509_NAME_set , X509_NAME **, ___xn, a0, X509_NAME *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CINF_new() \
      LP0(0x2958, X509_CINF *, X509_CINF_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CINF_free(___a) \
      LP1NR(0x295e, X509_CINF_free , X509_CINF *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_CINF(___a, ___in, ___len) \
      LP3(0x2964, X509_CINF *, d2i_X509_CINF , X509_CINF **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_CINF(___a, ___out) \
      LP2(0x296a, int, i2d_X509_CINF , X509_CINF *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CINF_it() \
      LP0(0x2970, const ASN1_ITEM *, X509_CINF_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_new() \
      LP0(0x2976, X509 *, X509_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_free(___a) \
      LP1NR(0x297c, X509_free , X509 *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509(___a, ___in, ___len) \
      LP3(0x2982, X509 *, d2i_X509 , X509 **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509(___a, ___out) \
      LP2(0x2988, int, i2d_X509 , X509 *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_it() \
      LP0(0x298e, const ASN1_ITEM *, X509_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CERT_AUX_new() \
      LP0(0x2994, X509_CERT_AUX *, X509_CERT_AUX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CERT_AUX_free(___a) \
      LP1NR(0x299a, X509_CERT_AUX_free , X509_CERT_AUX *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_CERT_AUX(___a, ___in, ___len) \
      LP3(0x29a0, X509_CERT_AUX *, d2i_X509_CERT_AUX , X509_CERT_AUX **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_CERT_AUX(___a, ___out) \
      LP2(0x29a6, int, i2d_X509_CERT_AUX , X509_CERT_AUX *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CERT_AUX_it() \
      LP0(0x29ac, const ASN1_ITEM *, X509_CERT_AUX_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_set_ex_data(___r, ___idx, ___arg) \
      LP3(0x29b8, int, X509_set_ex_data , X509 *, ___r, a0, int, ___idx, d0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_ex_data(___r, ___idx) \
      LP2(0x29be, void *, X509_get_ex_data , X509 *, ___r, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_AUX(___a, ___pp) \
      LP2(0x29c4, int, i2d_X509_AUX , X509 *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_AUX(___a, ___pp, ___length) \
      LP3(0x29ca, X509 *, d2i_X509_AUX , X509 **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_alias_set1(___x, ___name, ___len) \
      LP3(0x29d0, int, X509_alias_set1 , X509 *, ___x, a0, const unsigned char *, ___name, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_keyid_set1(___x, ___id, ___len) \
      LP3(0x29d6, int, X509_keyid_set1 , X509 *, ___x, a0, const unsigned char *, ___id, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_alias_get0(___x, ___len) \
      LP2(0x29dc, unsigned char *, X509_alias_get0 , X509 *, ___x, a0, int *, ___len, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_TRUST_set_default(___trust) \
      LP1FPFR(0x29e2, __fpr, X509_TRUST_set_default , __fpt, ___trust, a0,\
      , AMISSL_BASE_NAME, int (*__fpt)(int,X509 *,int), int (*__fpr)(int, X509 *, int), 0, 0, 0, 0, 0, 0)

#define X509_TRUST_set(___t, ___trust) \
      LP2(0x29e8, int, X509_TRUST_set , int *, ___t, a0, int, ___trust, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_add1_trust_object(___x, ___obj) \
      LP2(0x29ee, int, X509_add1_trust_object , X509 *, ___x, a0, const ASN1_OBJECT *, ___obj, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_add1_reject_object(___x, ___obj) \
      LP2(0x29f4, int, X509_add1_reject_object , X509 *, ___x, a0, const ASN1_OBJECT *, ___obj, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_trust_clear(___x) \
      LP1NR(0x29fa, X509_trust_clear , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_reject_clear(___x) \
      LP1NR(0x2a00, X509_reject_clear , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_new() \
      LP0(0x2a06, X509_REVOKED *, X509_REVOKED_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_free(___a) \
      LP1NR(0x2a0c, X509_REVOKED_free , X509_REVOKED *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_REVOKED(___a, ___in, ___len) \
      LP3(0x2a12, X509_REVOKED *, d2i_X509_REVOKED , X509_REVOKED **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_REVOKED(___a, ___out) \
      LP2(0x2a18, int, i2d_X509_REVOKED , X509_REVOKED *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_it() \
      LP0(0x2a1e, const ASN1_ITEM *, X509_REVOKED_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_INFO_new() \
      LP0(0x2a24, X509_CRL_INFO *, X509_CRL_INFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_INFO_free(___a) \
      LP1NR(0x2a2a, X509_CRL_INFO_free , X509_CRL_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_CRL_INFO(___a, ___in, ___len) \
      LP3(0x2a30, X509_CRL_INFO *, d2i_X509_CRL_INFO , X509_CRL_INFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_CRL_INFO(___a, ___out) \
      LP2(0x2a36, int, i2d_X509_CRL_INFO , X509_CRL_INFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_INFO_it() \
      LP0(0x2a3c, const ASN1_ITEM *, X509_CRL_INFO_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_new() \
      LP0(0x2a42, X509_CRL *, X509_CRL_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_free(___a) \
      LP1NR(0x2a48, X509_CRL_free , X509_CRL *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_CRL(___a, ___in, ___len) \
      LP3(0x2a4e, X509_CRL *, d2i_X509_CRL , X509_CRL **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_CRL(___a, ___out) \
      LP2(0x2a54, int, i2d_X509_CRL , X509_CRL *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_it() \
      LP0(0x2a5a, const ASN1_ITEM *, X509_CRL_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_add0_revoked(___crl, ___rev) \
      LP2(0x2a60, int, X509_CRL_add0_revoked , X509_CRL *, ___crl, a0, X509_REVOKED *, ___rev, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PKEY_new() \
      LP0(0x2a66, X509_PKEY *, X509_PKEY_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PKEY_free(___a) \
      LP1NR(0x2a6c, X509_PKEY_free , X509_PKEY *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKI_new() \
      LP0(0x2a7e, NETSCAPE_SPKI *, NETSCAPE_SPKI_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKI_free(___a) \
      LP1NR(0x2a84, NETSCAPE_SPKI_free , NETSCAPE_SPKI *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_NETSCAPE_SPKI(___a, ___in, ___len) \
      LP3(0x2a8a, NETSCAPE_SPKI *, d2i_NETSCAPE_SPKI , NETSCAPE_SPKI **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_NETSCAPE_SPKI(___a, ___out) \
      LP2(0x2a90, int, i2d_NETSCAPE_SPKI , NETSCAPE_SPKI *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKI_it() \
      LP0(0x2a96, const ASN1_ITEM *, NETSCAPE_SPKI_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKAC_new() \
      LP0(0x2a9c, NETSCAPE_SPKAC *, NETSCAPE_SPKAC_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKAC_free(___a) \
      LP1NR(0x2aa2, NETSCAPE_SPKAC_free , NETSCAPE_SPKAC *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_NETSCAPE_SPKAC(___a, ___in, ___len) \
      LP3(0x2aa8, NETSCAPE_SPKAC *, d2i_NETSCAPE_SPKAC , NETSCAPE_SPKAC **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_NETSCAPE_SPKAC(___a, ___out) \
      LP2(0x2aae, int, i2d_NETSCAPE_SPKAC , NETSCAPE_SPKAC *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_SPKAC_it() \
      LP0(0x2ab4, const ASN1_ITEM *, NETSCAPE_SPKAC_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_CERT_SEQUENCE_new() \
      LP0(0x2aba, NETSCAPE_CERT_SEQUENCE *, NETSCAPE_CERT_SEQUENCE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_CERT_SEQUENCE_free(___a) \
      LP1NR(0x2ac0, NETSCAPE_CERT_SEQUENCE_free , NETSCAPE_CERT_SEQUENCE *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_NETSCAPE_CERT_SEQUENCE(___a, ___in, ___len) \
      LP3(0x2ac6, NETSCAPE_CERT_SEQUENCE *, d2i_NETSCAPE_CERT_SEQUENCE , NETSCAPE_CERT_SEQUENCE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_NETSCAPE_CERT_SEQUENCE(___a, ___out) \
      LP2(0x2acc, int, i2d_NETSCAPE_CERT_SEQUENCE , NETSCAPE_CERT_SEQUENCE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NETSCAPE_CERT_SEQUENCE_it() \
      LP0(0x2ad2, const ASN1_ITEM *, NETSCAPE_CERT_SEQUENCE_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_INFO_new() \
      LP0(0x2ad8, X509_INFO *, X509_INFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_INFO_free(___a) \
      LP1NR(0x2ade, X509_INFO_free , X509_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_oneline(___a, ___buf, ___size) \
      LP3(0x2ae4, char *, X509_NAME_oneline , const X509_NAME *, ___a, a0, char *, ___buf, a1, int, ___size, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_verify(___i2d, ___algor1, ___signature, ___data, ___pkey) \
      LP5FP(0x2aea, int, ASN1_verify , __fpt, ___i2d, a0, X509_ALGOR *, ___algor1, a1, ASN1_BIT_STRING *, ___signature, a2, char *, ___data, a3, EVP_PKEY *, ___pkey, d0,\
      , AMISSL_BASE_NAME, int (*__fpt)(), 0, 0, 0, 0, 0, 0)

#define ASN1_digest(___i2d, ___type, ___data, ___md, ___len) \
      LP5FP(0x2af0, int, ASN1_digest , __fpt, ___i2d, a0, const EVP_MD *, ___type, a1, char *, ___data, a2, unsigned char *, ___md, a3, unsigned int *, ___len, d0,\
      , AMISSL_BASE_NAME, int (*__fpt)(), 0, 0, 0, 0, 0, 0)

#define ASN1_sign(___i2d, ___algor1, ___algor2, ___signature, ___data, ___pkey, ___type) \
      LP7FP(0x2af6, int, ASN1_sign , __fpt, ___i2d, a0, X509_ALGOR *, ___algor1, a1, X509_ALGOR *, ___algor2, a2, ASN1_BIT_STRING *, ___signature, a3, char *, ___data, d0, EVP_PKEY *, ___pkey, d1, const EVP_MD *, ___type, d2,\
      , AMISSL_BASE_NAME, int (*__fpt)(), 0, 0, 0, 0, 0, 0)

#define ASN1_item_digest(___it, ___type, ___data, ___md, ___len) \
      LP5(0x2afc, int, ASN1_item_digest , const ASN1_ITEM *, ___it, a0, const EVP_MD *, ___type, a1, void *, ___data, a2, unsigned char *, ___md, a3, unsigned int *, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_verify(___it, ___algor1, ___signature, ___data, ___pkey) \
      LP5(0x2b02, int, ASN1_item_verify , const ASN1_ITEM *, ___it, a0, X509_ALGOR *, ___algor1, a1, ASN1_BIT_STRING *, ___signature, a2, void *, ___data, a3, EVP_PKEY *, ___pkey, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_sign(___it, ___algor1, ___algor2, ___signature, ___data, ___pkey, ___type) \
      LP7(0x2b08, int, ASN1_item_sign , const ASN1_ITEM *, ___it, a0, X509_ALGOR *, ___algor1, a1, X509_ALGOR *, ___algor2, a2, ASN1_BIT_STRING *, ___signature, a3, void *, ___data, d0, EVP_PKEY *, ___pkey, d1, const EVP_MD *, ___type, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_set_version(___x, ___version) \
      LP2(0x2b0e, int, X509_set_version , X509 *, ___x, a0, long, ___version, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_set_serialNumber(___x, ___serial) \
      LP2(0x2b14, int, X509_set_serialNumber , X509 *, ___x, a0, ASN1_INTEGER *, ___serial, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_serialNumber(___x) \
      LP1(0x2b1a, ASN1_INTEGER *, X509_get_serialNumber , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_set_issuer_name(___x, ___name) \
      LP2(0x2b20, int, X509_set_issuer_name , X509 *, ___x, a0, X509_NAME *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_issuer_name(___a) \
      LP1(0x2b26, X509_NAME *, X509_get_issuer_name , const X509 *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_set_subject_name(___x, ___name) \
      LP2(0x2b2c, int, X509_set_subject_name , X509 *, ___x, a0, X509_NAME *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_subject_name(___a) \
      LP1(0x2b32, X509_NAME *, X509_get_subject_name , const X509 *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_set1_notBefore(___x, ___tm) \
      LP2(0x2b38, int, X509_set1_notBefore , X509 *, ___x, a0, const ASN1_TIME *, ___tm, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_set1_notAfter(___x, ___tm) \
      LP2(0x2b3e, int, X509_set1_notAfter , X509 *, ___x, a0, const ASN1_TIME *, ___tm, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_set_pubkey(___x, ___pkey) \
      LP2(0x2b44, int, X509_set_pubkey , X509 *, ___x, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_pubkey(___x) \
      LP1(0x2b4a, EVP_PKEY *, X509_get_pubkey , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_pubkey_bitstr(___x) \
      LP1(0x2b50, ASN1_BIT_STRING *, X509_get0_pubkey_bitstr , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_certificate_type(___x, ___pubkey) \
      LP2(0x2b56, int, X509_certificate_type , const X509 *, ___x, a0, const EVP_PKEY *, ___pubkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_set_version(___x, ___version) \
      LP2(0x2b5c, int, X509_REQ_set_version , X509_REQ *, ___x, a0, long, ___version, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_set_subject_name(___req, ___name) \
      LP2(0x2b62, int, X509_REQ_set_subject_name , X509_REQ *, ___req, a0, X509_NAME *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_set_pubkey(___x, ___pkey) \
      LP2(0x2b68, int, X509_REQ_set_pubkey , X509_REQ *, ___x, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get_pubkey(___req) \
      LP1(0x2b6e, EVP_PKEY *, X509_REQ_get_pubkey , X509_REQ *, ___req, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_extension_nid(___nid) \
      LP1(0x2b74, int, X509_REQ_extension_nid , int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get_extension_nids() \
      LP0(0x2b7a, int *, X509_REQ_get_extension_nids ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_set_extension_nids(___nids) \
      LP1NR(0x2b80, X509_REQ_set_extension_nids , int *, ___nids, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get_extensions(___req) \
      LP1(0x2b86, STACK_OF(X509_EXTENSION) *, X509_REQ_get_extensions , X509_REQ *, ___req, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_add_extensions_nid(___req, ___exts, ___nid) \
      LP3(0x2b8c, int, X509_REQ_add_extensions_nid , X509_REQ *, ___req, a0, STACK_OF(X509_EXTENSION) *, ___exts, a1, int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_add_extensions(___req, ___exts) \
      LP2(0x2b92, int, X509_REQ_add_extensions , X509_REQ *, ___req, a0, STACK_OF(X509_EXTENSION) *, ___exts, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get_attr_count(___req) \
      LP1(0x2b98, int, X509_REQ_get_attr_count , const X509_REQ *, ___req, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get_attr_by_NID(___req, ___nid, ___lastpos) \
      LP3(0x2b9e, int, X509_REQ_get_attr_by_NID , const X509_REQ *, ___req, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get_attr_by_OBJ(___req, ___obj, ___lastpos) \
      LP3(0x2ba4, int, X509_REQ_get_attr_by_OBJ , const X509_REQ *, ___req, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get_attr(___req, ___loc) \
      LP2(0x2baa, X509_ATTRIBUTE *, X509_REQ_get_attr , const X509_REQ *, ___req, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_delete_attr(___req, ___loc) \
      LP2(0x2bb0, X509_ATTRIBUTE *, X509_REQ_delete_attr , X509_REQ *, ___req, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_add1_attr(___req, ___attr) \
      LP2(0x2bb6, int, X509_REQ_add1_attr , X509_REQ *, ___req, a0, X509_ATTRIBUTE *, ___attr, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_add1_attr_by_OBJ(___req, ___obj, ___type, ___bytes, ___len) \
      LP5(0x2bbc, int, X509_REQ_add1_attr_by_OBJ , X509_REQ *, ___req, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_add1_attr_by_NID(___req, ___nid, ___type, ___bytes, ___len) \
      LP5(0x2bc2, int, X509_REQ_add1_attr_by_NID , X509_REQ *, ___req, a0, int, ___nid, d0, int, ___type, d1, const unsigned char *, ___bytes, a1, int, ___len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_add1_attr_by_txt(___req, ___attrname, ___type, ___bytes, ___len) \
      LP5(0x2bc8, int, X509_REQ_add1_attr_by_txt , X509_REQ *, ___req, a0, const char *, ___attrname, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_set_version(___x, ___version) \
      LP2(0x2bce, int, X509_CRL_set_version , X509_CRL *, ___x, a0, long, ___version, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_set_issuer_name(___x, ___name) \
      LP2(0x2bd4, int, X509_CRL_set_issuer_name , X509_CRL *, ___x, a0, X509_NAME *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_set1_lastUpdate(___x, ___tm) \
      LP2(0x2bda, int, X509_CRL_set1_lastUpdate , X509_CRL *, ___x, a0, const ASN1_TIME *, ___tm, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_set1_nextUpdate(___x, ___tm) \
      LP2(0x2be0, int, X509_CRL_set1_nextUpdate , X509_CRL *, ___x, a0, const ASN1_TIME *, ___tm, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_sort(___crl) \
      LP1(0x2be6, int, X509_CRL_sort , X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_set_serialNumber(___x, ___serial) \
      LP2(0x2bec, int, X509_REVOKED_set_serialNumber , X509_REVOKED *, ___x, a0, ASN1_INTEGER *, ___serial, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_set_revocationDate(___r, ___tm) \
      LP2(0x2bf2, int, X509_REVOKED_set_revocationDate , X509_REVOKED *, ___r, a0, ASN1_TIME *, ___tm, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_check_private_key(___x509, ___pkey) \
      LP2(0x2bf8, int, X509_check_private_key , const X509 *, ___x509, a0, const EVP_PKEY *, ___pkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_issuer_and_serial_cmp(___a, ___b) \
      LP2(0x2bfe, int, X509_issuer_and_serial_cmp , const X509 *, ___a, a0, const X509 *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_issuer_and_serial_hash(___a) \
      LP1(0x2c04, unsigned long, X509_issuer_and_serial_hash , X509 *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_issuer_name_cmp(___a, ___b) \
      LP2(0x2c0a, int, X509_issuer_name_cmp , const X509 *, ___a, a0, const X509 *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_issuer_name_hash(___a) \
      LP1(0x2c10, unsigned long, X509_issuer_name_hash , X509 *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_subject_name_cmp(___a, ___b) \
      LP2(0x2c16, int, X509_subject_name_cmp , const X509 *, ___a, a0, const X509 *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_subject_name_hash(___x) \
      LP1(0x2c1c, unsigned long, X509_subject_name_hash , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_cmp(___a, ___b) \
      LP2(0x2c22, int, X509_cmp , const X509 *, ___a, a0, const X509 *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_cmp(___a, ___b) \
      LP2(0x2c28, int, X509_NAME_cmp , const X509_NAME *, ___a, a0, const X509_NAME *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_hash(___x) \
      LP1(0x2c2e, unsigned long, X509_NAME_hash , X509_NAME *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_cmp(___a, ___b) \
      LP2(0x2c34, int, X509_CRL_cmp , const X509_CRL *, ___a, a0, const X509_CRL *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_print(___bp, ___name, ___obase) \
      LP3(0x2c3a, int, X509_NAME_print , BIO *, ___bp, a0, const X509_NAME *, ___name, a1, int, ___obase, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_print_ex(___out, ___nm, ___indent, ___flags) \
      LP4(0x2c40, int, X509_NAME_print_ex , BIO *, ___out, a0, const X509_NAME *, ___nm, a1, int, ___indent, d0, unsigned long, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_print_ex(___bp, ___x, ___nmflag, ___cflag) \
      LP4(0x2c46, int, X509_print_ex , BIO *, ___bp, a0, X509 *, ___x, a1, unsigned long, ___nmflag, d0, unsigned long, ___cflag, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_print(___bp, ___x) \
      LP2(0x2c4c, int, X509_print , BIO *, ___bp, a0, X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ocspid_print(___bp, ___x) \
      LP2(0x2c52, int, X509_ocspid_print , BIO *, ___bp, a0, X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_print(___bp, ___x) \
      LP2(0x2c5e, int, X509_CRL_print , BIO *, ___bp, a0, X509_CRL *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_print_ex(___bp, ___x, ___nmflag, ___cflag) \
      LP4(0x2c64, int, X509_REQ_print_ex , BIO *, ___bp, a0, X509_REQ *, ___x, a1, unsigned long, ___nmflag, d0, unsigned long, ___cflag, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_print(___bp, ___req) \
      LP2(0x2c6a, int, X509_REQ_print , BIO *, ___bp, a0, X509_REQ *, ___req, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_entry_count(___name) \
      LP1(0x2c70, int, X509_NAME_entry_count , const X509_NAME *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_get_text_by_NID(___name, ___nid, ___buf, ___len) \
      LP4(0x2c76, int, X509_NAME_get_text_by_NID , X509_NAME *, ___name, a0, int, ___nid, d0, char *, ___buf, a1, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_get_text_by_OBJ(___name, ___obj, ___buf, ___len) \
      LP4(0x2c7c, int, X509_NAME_get_text_by_OBJ , X509_NAME *, ___name, a0, const ASN1_OBJECT *, ___obj, a1, char *, ___buf, a2, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_get_index_by_NID(___name, ___nid, ___lastpos) \
      LP3(0x2c82, int, X509_NAME_get_index_by_NID , X509_NAME *, ___name, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_get_index_by_OBJ(___name, ___obj, ___lastpos) \
      LP3(0x2c88, int, X509_NAME_get_index_by_OBJ , X509_NAME *, ___name, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_get_entry(___name, ___loc) \
      LP2(0x2c8e, X509_NAME_ENTRY *, X509_NAME_get_entry , const X509_NAME *, ___name, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_delete_entry(___name, ___loc) \
      LP2(0x2c94, X509_NAME_ENTRY *, X509_NAME_delete_entry , X509_NAME *, ___name, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_add_entry(___name, ___ne, ___loc, ___set) \
      LP4(0x2c9a, int, X509_NAME_add_entry , X509_NAME *, ___name, a0, const X509_NAME_ENTRY *, ___ne, a1, int, ___loc, d0, int, ___set, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_add_entry_by_OBJ(___name, ___obj, ___type, ___bytes, ___len, ___loc, ___set) \
      LP7(0x2ca0, int, X509_NAME_add_entry_by_OBJ , X509_NAME *, ___name, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1, int, ___loc, d2, int, ___set, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_add_entry_by_NID(___name, ___nid, ___type, ___bytes, ___len, ___loc, ___set) \
      LP7(0x2ca6, int, X509_NAME_add_entry_by_NID , X509_NAME *, ___name, a0, int, ___nid, d0, int, ___type, d1, const unsigned char *, ___bytes, a1, int, ___len, d2, int, ___loc, d3, int, ___set, d4,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_ENTRY_create_by_txt(___ne, ___field, ___type, ___bytes, ___len) \
      LP5(0x2cac, X509_NAME_ENTRY *, X509_NAME_ENTRY_create_by_txt , X509_NAME_ENTRY **, ___ne, a0, const char *, ___field, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_ENTRY_create_by_NID(___ne, ___nid, ___type, ___bytes, ___len) \
      LP5(0x2cb2, X509_NAME_ENTRY *, X509_NAME_ENTRY_create_by_NID , X509_NAME_ENTRY **, ___ne, a0, int, ___nid, d0, int, ___type, d1, const unsigned char *, ___bytes, a1, int, ___len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_add_entry_by_txt(___name, ___field, ___type, ___bytes, ___len, ___loc, ___set) \
      LP7(0x2cb8, int, X509_NAME_add_entry_by_txt , X509_NAME *, ___name, a0, const char *, ___field, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1, int, ___loc, d2, int, ___set, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_ENTRY_create_by_OBJ(___ne, ___obj, ___type, ___bytes, ___len) \
      LP5(0x2cbe, X509_NAME_ENTRY *, X509_NAME_ENTRY_create_by_OBJ , X509_NAME_ENTRY **, ___ne, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_ENTRY_set_object(___ne, ___obj) \
      LP2(0x2cc4, int, X509_NAME_ENTRY_set_object , X509_NAME_ENTRY *, ___ne, a0, const ASN1_OBJECT *, ___obj, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_ENTRY_set_data(___ne, ___type, ___bytes, ___len) \
      LP4(0x2cca, int, X509_NAME_ENTRY_set_data , X509_NAME_ENTRY *, ___ne, a0, int, ___type, d0, const unsigned char *, ___bytes, a1, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_ENTRY_get_object(___ne) \
      LP1(0x2cd0, ASN1_OBJECT *, X509_NAME_ENTRY_get_object , const X509_NAME_ENTRY *, ___ne, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_ENTRY_get_data(___ne) \
      LP1(0x2cd6, ASN1_STRING *, X509_NAME_ENTRY_get_data , const X509_NAME_ENTRY *, ___ne, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_get_ext_count(___x) \
      LP1(0x2cdc, int, X509v3_get_ext_count , const STACK_OF(X509_EXTENSION) *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_get_ext_by_NID(___x, ___nid, ___lastpos) \
      LP3(0x2ce2, int, X509v3_get_ext_by_NID , const STACK_OF(X509_EXTENSION) *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
      LP3(0x2ce8, int, X509v3_get_ext_by_OBJ , const STACK_OF(X509_EXTENSION) *, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_get_ext_by_critical(___x, ___crit, ___lastpos) \
      LP3(0x2cee, int, X509v3_get_ext_by_critical , const STACK_OF(X509_EXTENSION) *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_get_ext(___x, ___loc) \
      LP2(0x2cf4, X509_EXTENSION *, X509v3_get_ext , const STACK_OF(X509_EXTENSION) *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_delete_ext(___x, ___loc) \
      LP2(0x2cfa, X509_EXTENSION *, X509v3_delete_ext , STACK_OF(X509_EXTENSION) *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_add_ext(___x, ___ex, ___loc) \
      LP3(0x2d00, STACK_OF(X509_EXTENSION) *, X509v3_add_ext , STACK_OF(X509_EXTENSION) **, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_ext_count(___x) \
      LP1(0x2d06, int, X509_get_ext_count , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_ext_by_NID(___x, ___nid, ___lastpos) \
      LP3(0x2d0c, int, X509_get_ext_by_NID , const X509 *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
      LP3(0x2d12, int, X509_get_ext_by_OBJ , const X509 *, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_ext_by_critical(___x, ___crit, ___lastpos) \
      LP3(0x2d18, int, X509_get_ext_by_critical , const X509 *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_ext(___x, ___loc) \
      LP2(0x2d1e, X509_EXTENSION *, X509_get_ext , const X509 *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_delete_ext(___x, ___loc) \
      LP2(0x2d24, X509_EXTENSION *, X509_delete_ext , X509 *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_add_ext(___x, ___ex, ___loc) \
      LP3(0x2d2a, int, X509_add_ext , X509 *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_ext_d2i(___x, ___nid, ___crit, ___idx) \
      LP4(0x2d30, void *, X509_get_ext_d2i , const X509 *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
      LP5(0x2d36, int, X509_add1_ext_i2d , X509 *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_ext_count(___x) \
      LP1(0x2d3c, int, X509_CRL_get_ext_count , const X509_CRL *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_ext_by_NID(___x, ___nid, ___lastpos) \
      LP3(0x2d42, int, X509_CRL_get_ext_by_NID , const X509_CRL *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
      LP3(0x2d48, int, X509_CRL_get_ext_by_OBJ , const X509_CRL *, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_ext_by_critical(___x, ___crit, ___lastpos) \
      LP3(0x2d4e, int, X509_CRL_get_ext_by_critical , const X509_CRL *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_ext(___x, ___loc) \
      LP2(0x2d54, X509_EXTENSION *, X509_CRL_get_ext , const X509_CRL *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_delete_ext(___x, ___loc) \
      LP2(0x2d5a, X509_EXTENSION *, X509_CRL_delete_ext , X509_CRL *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_add_ext(___x, ___ex, ___loc) \
      LP3(0x2d60, int, X509_CRL_add_ext , X509_CRL *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_ext_d2i(___x, ___nid, ___crit, ___idx) \
      LP4(0x2d66, void *, X509_CRL_get_ext_d2i , const X509_CRL *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
      LP5(0x2d6c, int, X509_CRL_add1_ext_i2d , X509_CRL *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_get_ext_count(___x) \
      LP1(0x2d72, int, X509_REVOKED_get_ext_count , const X509_REVOKED *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_get_ext_by_NID(___x, ___nid, ___lastpos) \
      LP3(0x2d78, int, X509_REVOKED_get_ext_by_NID , const X509_REVOKED *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_get_ext_by_OBJ(___x, ___obj, ___lastpos) \
      LP3(0x2d7e, int, X509_REVOKED_get_ext_by_OBJ , const X509_REVOKED *, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_get_ext_by_critical(___x, ___crit, ___lastpos) \
      LP3(0x2d84, int, X509_REVOKED_get_ext_by_critical , const X509_REVOKED *, ___x, a0, int, ___crit, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_get_ext(___x, ___loc) \
      LP2(0x2d8a, X509_EXTENSION *, X509_REVOKED_get_ext , const X509_REVOKED *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_delete_ext(___x, ___loc) \
      LP2(0x2d90, X509_EXTENSION *, X509_REVOKED_delete_ext , X509_REVOKED *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_add_ext(___x, ___ex, ___loc) \
      LP3(0x2d96, int, X509_REVOKED_add_ext , X509_REVOKED *, ___x, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_get_ext_d2i(___x, ___nid, ___crit, ___idx) \
      LP4(0x2d9c, void *, X509_REVOKED_get_ext_d2i , const X509_REVOKED *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_add1_ext_i2d(___x, ___nid, ___value, ___crit, ___flags) \
      LP5(0x2da2, int, X509_REVOKED_add1_ext_i2d , X509_REVOKED *, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSION_create_by_NID(___ex, ___nid, ___crit, ___data) \
      LP4(0x2da8, X509_EXTENSION *, X509_EXTENSION_create_by_NID , X509_EXTENSION **, ___ex, a0, int, ___nid, d0, int, ___crit, d1, ASN1_OCTET_STRING *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSION_create_by_OBJ(___ex, ___obj, ___crit, ___data) \
      LP4(0x2dae, X509_EXTENSION *, X509_EXTENSION_create_by_OBJ , X509_EXTENSION **, ___ex, a0, const ASN1_OBJECT *, ___obj, a1, int, ___crit, d0, ASN1_OCTET_STRING *, ___data, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSION_set_object(___ex, ___obj) \
      LP2(0x2db4, int, X509_EXTENSION_set_object , X509_EXTENSION *, ___ex, a0, const ASN1_OBJECT *, ___obj, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSION_set_critical(___ex, ___crit) \
      LP2(0x2dba, int, X509_EXTENSION_set_critical , X509_EXTENSION *, ___ex, a0, int, ___crit, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSION_set_data(___ex, ___data) \
      LP2(0x2dc0, int, X509_EXTENSION_set_data , X509_EXTENSION *, ___ex, a0, ASN1_OCTET_STRING *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSION_get_object(___ex) \
      LP1(0x2dc6, ASN1_OBJECT *, X509_EXTENSION_get_object , X509_EXTENSION *, ___ex, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSION_get_data(___ne) \
      LP1(0x2dcc, ASN1_OCTET_STRING *, X509_EXTENSION_get_data , X509_EXTENSION *, ___ne, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSION_get_critical(___ex) \
      LP1(0x2dd2, int, X509_EXTENSION_get_critical , const X509_EXTENSION *, ___ex, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509at_get_attr_count(___x) \
      LP1(0x2dd8, int, X509at_get_attr_count , const STACK_OF(X509_ATTRIBUTE) *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509at_get_attr_by_NID(___x, ___nid, ___lastpos) \
      LP3(0x2dde, int, X509at_get_attr_by_NID , const STACK_OF(X509_ATTRIBUTE) *, ___x, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509at_get_attr_by_OBJ(___sk, ___obj, ___lastpos) \
      LP3(0x2de4, int, X509at_get_attr_by_OBJ , const STACK_OF(X509_ATTRIBUTE) *, ___sk, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509at_get_attr(___x, ___loc) \
      LP2(0x2dea, X509_ATTRIBUTE *, X509at_get_attr , const STACK_OF(X509_ATTRIBUTE) *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509at_delete_attr(___x, ___loc) \
      LP2(0x2df0, X509_ATTRIBUTE *, X509at_delete_attr , STACK_OF(X509_ATTRIBUTE) *, ___x, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509at_add1_attr(___x, ___attr) \
      LP2(0x2df6, STACK_OF(X509_ATTRIBUTE) *, X509at_add1_attr , STACK_OF(X509_ATTRIBUTE) **, ___x, a0, X509_ATTRIBUTE *, ___attr, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509at_add1_attr_by_OBJ(___x, ___obj, ___type, ___bytes, ___len) \
      LP5(0x2dfc, STACK_OF(X509_ATTRIBUTE) *, X509at_add1_attr_by_OBJ , STACK_OF(X509_ATTRIBUTE) **, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509at_add1_attr_by_NID(___x, ___nid, ___type, ___bytes, ___len) \
      LP5(0x2e02, STACK_OF(X509_ATTRIBUTE) *, X509at_add1_attr_by_NID , STACK_OF(X509_ATTRIBUTE) **, ___x, a0, int, ___nid, d0, int, ___type, d1, const unsigned char *, ___bytes, a1, int, ___len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509at_add1_attr_by_txt(___x, ___attrname, ___type, ___bytes, ___len) \
      LP5(0x2e08, STACK_OF(X509_ATTRIBUTE) *, X509at_add1_attr_by_txt , STACK_OF(X509_ATTRIBUTE) **, ___x, a0, const char *, ___attrname, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_create_by_NID(___attr, ___nid, ___atrtype, ___data, ___len) \
      LP5(0x2e0e, X509_ATTRIBUTE *, X509_ATTRIBUTE_create_by_NID , X509_ATTRIBUTE **, ___attr, a0, int, ___nid, d0, int, ___atrtype, d1, const void *, ___data, a1, int, ___len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_create_by_OBJ(___attr, ___obj, ___atrtype, ___data, ___len) \
      LP5(0x2e14, X509_ATTRIBUTE *, X509_ATTRIBUTE_create_by_OBJ , X509_ATTRIBUTE **, ___attr, a0, const ASN1_OBJECT *, ___obj, a1, int, ___atrtype, d0, const void *, ___data, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_create_by_txt(___attr, ___atrname, ___type, ___bytes, ___len) \
      LP5(0x2e1a, X509_ATTRIBUTE *, X509_ATTRIBUTE_create_by_txt , X509_ATTRIBUTE **, ___attr, a0, const char *, ___atrname, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_set1_object(___attr, ___obj) \
      LP2(0x2e20, int, X509_ATTRIBUTE_set1_object , X509_ATTRIBUTE *, ___attr, a0, const ASN1_OBJECT *, ___obj, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_set1_data(___attr, ___attrtype, ___data, ___len) \
      LP4(0x2e26, int, X509_ATTRIBUTE_set1_data , X509_ATTRIBUTE *, ___attr, a0, int, ___attrtype, d0, const void *, ___data, a1, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_get0_data(___attr, ___idx, ___atrtype, ___data) \
      LP4(0x2e2c, void *, X509_ATTRIBUTE_get0_data , X509_ATTRIBUTE *, ___attr, a0, int, ___idx, d0, int, ___atrtype, d1, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_count(___attr) \
      LP1(0x2e32, int, X509_ATTRIBUTE_count , const X509_ATTRIBUTE *, ___attr, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_get0_object(___attr) \
      LP1(0x2e38, ASN1_OBJECT *, X509_ATTRIBUTE_get0_object , X509_ATTRIBUTE *, ___attr, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ATTRIBUTE_get0_type(___attr, ___idx) \
      LP2(0x2e3e, ASN1_TYPE *, X509_ATTRIBUTE_get0_type , X509_ATTRIBUTE *, ___attr, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_verify_cert(___ctx) \
      LP1(0x2e44, int, X509_verify_cert , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_find_by_issuer_and_serial(___sk, ___name, ___serial) \
      LP3(0x2e4a, X509 *, X509_find_by_issuer_and_serial , STACK_OF(X509) *, ___sk, a0, X509_NAME *, ___name, a1, ASN1_INTEGER *, ___serial, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_find_by_subject(___sk, ___name) \
      LP2(0x2e50, X509 *, X509_find_by_subject , STACK_OF(X509) *, ___sk, a0, X509_NAME *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PBEPARAM_new() \
      LP0(0x2e56, PBEPARAM *, PBEPARAM_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PBEPARAM_free(___a) \
      LP1NR(0x2e5c, PBEPARAM_free , PBEPARAM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PBEPARAM(___a, ___in, ___len) \
      LP3(0x2e62, PBEPARAM *, d2i_PBEPARAM , PBEPARAM **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PBEPARAM(___a, ___out) \
      LP2(0x2e68, int, i2d_PBEPARAM , PBEPARAM *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PBEPARAM_it() \
      LP0(0x2e6e, const ASN1_ITEM *, PBEPARAM_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PBE2PARAM_new() \
      LP0(0x2e74, PBE2PARAM *, PBE2PARAM_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PBE2PARAM_free(___a) \
      LP1NR(0x2e7a, PBE2PARAM_free , PBE2PARAM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PBE2PARAM(___a, ___in, ___len) \
      LP3(0x2e80, PBE2PARAM *, d2i_PBE2PARAM , PBE2PARAM **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PBE2PARAM(___a, ___out) \
      LP2(0x2e86, int, i2d_PBE2PARAM , PBE2PARAM *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PBE2PARAM_it() \
      LP0(0x2e8c, const ASN1_ITEM *, PBE2PARAM_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PBKDF2PARAM_new() \
      LP0(0x2e92, PBKDF2PARAM *, PBKDF2PARAM_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PBKDF2PARAM_free(___a) \
      LP1NR(0x2e98, PBKDF2PARAM_free , PBKDF2PARAM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PBKDF2PARAM(___a, ___in, ___len) \
      LP3(0x2e9e, PBKDF2PARAM *, d2i_PBKDF2PARAM , PBKDF2PARAM **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PBKDF2PARAM(___a, ___out) \
      LP2(0x2ea4, int, i2d_PBKDF2PARAM , PBKDF2PARAM *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PBKDF2PARAM_it() \
      LP0(0x2eaa, const ASN1_ITEM *, PBKDF2PARAM_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_pbe_set(___alg, ___iter, ___salt, ___saltlen) \
      LP4(0x2eb0, X509_ALGOR *, PKCS5_pbe_set , int, ___alg, d0, int, ___iter, d1, unsigned char *, ___salt, a0, int, ___saltlen, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_pbe2_set(___cipher, ___iter, ___salt, ___saltlen) \
      LP4(0x2eb6, X509_ALGOR *, PKCS5_pbe2_set , const EVP_CIPHER *, ___cipher, a0, int, ___iter, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_PRIV_KEY_INFO_new() \
      LP0(0x2ebc, PKCS8_PRIV_KEY_INFO *, PKCS8_PRIV_KEY_INFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_PRIV_KEY_INFO_free(___a) \
      LP1NR(0x2ec2, PKCS8_PRIV_KEY_INFO_free , PKCS8_PRIV_KEY_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKCS8_PRIV_KEY_INFO(___a, ___in, ___len) \
      LP3(0x2ec8, PKCS8_PRIV_KEY_INFO *, d2i_PKCS8_PRIV_KEY_INFO , PKCS8_PRIV_KEY_INFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS8_PRIV_KEY_INFO(___a, ___out) \
      LP2(0x2ece, int, i2d_PKCS8_PRIV_KEY_INFO , PKCS8_PRIV_KEY_INFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_PRIV_KEY_INFO_it() \
      LP0(0x2ed4, const ASN1_ITEM *, PKCS8_PRIV_KEY_INFO_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKCS82PKEY(___p8) \
      LP1(0x2eda, EVP_PKEY *, EVP_PKCS82PKEY , const PKCS8_PRIV_KEY_INFO *, ___p8, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY2PKCS8(___pkey) \
      LP1(0x2ee0, PKCS8_PRIV_KEY_INFO *, EVP_PKEY2PKCS8 , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_check_trust(___x, ___id, ___flags) \
      LP3(0x2ef2, int, X509_check_trust , X509 *, ___x, a0, int, ___id, d0, int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_TRUST_get_count() \
      LP0(0x2ef8, int, X509_TRUST_get_count ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_TRUST_get0(___idx) \
      LP1(0x2efe, X509_TRUST *, X509_TRUST_get0 , int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_TRUST_get_by_id(___id) \
      LP1(0x2f04, int, X509_TRUST_get_by_id , int, ___id, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_TRUST_add(___id, ___flags, ___ck, ___name, ___arg1, ___arg2) \
      LP6FP(0x2f0a, int, X509_TRUST_add , int, ___id, d0, int, ___flags, d1, __fpt, ___ck, a0, const char *, ___name, a1, int, ___arg1, d2, void *, ___arg2, a2,\
      , AMISSL_BASE_NAME, int (*__fpt)(X509_TRUST *,X509 *,int), 0, 0, 0, 0, 0, 0)

#define X509_TRUST_cleanup() \
      LP0NR(0x2f10, X509_TRUST_cleanup ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_TRUST_get_flags(___xp) \
      LP1(0x2f16, int, X509_TRUST_get_flags , const X509_TRUST *, ___xp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_TRUST_get0_name(___xp) \
      LP1(0x2f1c, char *, X509_TRUST_get0_name , const X509_TRUST *, ___xp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_TRUST_get_trust(___xp) \
      LP1(0x2f22, int, X509_TRUST_get_trust , const X509_TRUST *, ___xp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_X509_strings() \
      LP0(0x2f28, int, ERR_load_X509_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_OBJECT_idx_by_subject(___h, ___type, ___name) \
      LP3(0x2f2e, int, X509_OBJECT_idx_by_subject , STACK_OF(X509_OBJECT) *, ___h, a0, X509_LOOKUP_TYPE, ___type, d0, X509_NAME *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_OBJECT_retrieve_by_subject(___h, ___type, ___name) \
      LP3(0x2f34, X509_OBJECT *, X509_OBJECT_retrieve_by_subject , STACK_OF(X509_OBJECT) *, ___h, a0, X509_LOOKUP_TYPE, ___type, d0, X509_NAME *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_OBJECT_retrieve_match(___h, ___x) \
      LP2(0x2f3a, X509_OBJECT *, X509_OBJECT_retrieve_match , STACK_OF(X509_OBJECT) *, ___h, a0, X509_OBJECT *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_OBJECT_up_ref_count(___a) \
      LP1(0x2f40, int, X509_OBJECT_up_ref_count , X509_OBJECT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_new() \
      LP0(0x2f46, X509_STORE *, X509_STORE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_free(___v) \
      LP1NR(0x2f4c, X509_STORE_free , X509_STORE *, ___v, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_flags(___ctx, ___flags) \
      LP2(0x2f52, int, X509_STORE_set_flags , X509_STORE *, ___ctx, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_purpose(___ctx, ___purpose) \
      LP2(0x2f58, int, X509_STORE_set_purpose , X509_STORE *, ___ctx, a0, int, ___purpose, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_trust(___ctx, ___trust) \
      LP2(0x2f5e, int, X509_STORE_set_trust , X509_STORE *, ___ctx, a0, int, ___trust, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_new() \
      LP0(0x2f64, X509_STORE_CTX *, X509_STORE_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get1_issuer(___issuer, ___ctx, ___x) \
      LP3(0x2f6a, int, X509_STORE_CTX_get1_issuer , X509 **, ___issuer, a0, X509_STORE_CTX *, ___ctx, a1, X509 *, ___x, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_free(___ctx) \
      LP1NR(0x2f70, X509_STORE_CTX_free , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_init(___ctx, ___store, ___x509, ___chain) \
      LP4(0x2f76, int, X509_STORE_CTX_init , X509_STORE_CTX *, ___ctx, a0, X509_STORE *, ___store, a1, X509 *, ___x509, a2, STACK_OF(X509) *, ___chain, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set0_trusted_stack(___ctx, ___sk) \
      LP2NR(0x2f7c, X509_STORE_CTX_set0_trusted_stack , X509_STORE_CTX *, ___ctx, a0, STACK_OF(X509) *, ___sk, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_cleanup(___ctx) \
      LP1NR(0x2f82, X509_STORE_CTX_cleanup , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_add_lookup(___v, ___m) \
      LP2(0x2f88, X509_LOOKUP *, X509_STORE_add_lookup , X509_STORE *, ___v, a0, X509_LOOKUP_METHOD *, ___m, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_hash_dir() \
      LP0(0x2f8e, X509_LOOKUP_METHOD *, X509_LOOKUP_hash_dir ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_file() \
      LP0(0x2f94, X509_LOOKUP_METHOD *, X509_LOOKUP_file ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_add_cert(___ctx, ___x) \
      LP2(0x2f9a, int, X509_STORE_add_cert , X509_STORE *, ___ctx, a0, X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_add_crl(___ctx, ___x) \
      LP2(0x2fa0, int, X509_STORE_add_crl , X509_STORE *, ___ctx, a0, X509_CRL *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_by_subject(___vs, ___type, ___name, ___ret) \
      LP4(0x2fa6, int, X509_STORE_CTX_get_by_subject , X509_STORE_CTX *, ___vs, a0, X509_LOOKUP_TYPE, ___type, d0, X509_NAME *, ___name, a1, X509_OBJECT *, ___ret, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_ctrl(___ctx, ___cmd, ___argc, ___argl, ___ret) \
      LP5(0x2fac, int, X509_LOOKUP_ctrl , X509_LOOKUP *, ___ctx, a0, int, ___cmd, d0, const char *, ___argc, a1, long, ___argl, d1, char **, ___ret, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_load_cert_file(___ctx, ___file, ___type) \
      LP3(0x2fb2, int, X509_load_cert_file , X509_LOOKUP *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_load_crl_file(___ctx, ___file, ___type) \
      LP3(0x2fb8, int, X509_load_crl_file , X509_LOOKUP *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_load_cert_crl_file(___ctx, ___file, ___type) \
      LP3(0x2fbe, int, X509_load_cert_crl_file , X509_LOOKUP *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_new(___method) \
      LP1(0x2fc4, X509_LOOKUP *, X509_LOOKUP_new , X509_LOOKUP_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_free(___ctx) \
      LP1NR(0x2fca, X509_LOOKUP_free , X509_LOOKUP *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_init(___ctx) \
      LP1(0x2fd0, int, X509_LOOKUP_init , X509_LOOKUP *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_by_subject(___ctx, ___type, ___name, ___ret) \
      LP4(0x2fd6, int, X509_LOOKUP_by_subject , X509_LOOKUP *, ___ctx, a0, X509_LOOKUP_TYPE, ___type, d0, X509_NAME *, ___name, a1, X509_OBJECT *, ___ret, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_by_issuer_serial(___ctx, ___type, ___name, ___serial, ___ret) \
      LP5(0x2fdc, int, X509_LOOKUP_by_issuer_serial , X509_LOOKUP *, ___ctx, a0, X509_LOOKUP_TYPE, ___type, d0, X509_NAME *, ___name, a1, ASN1_INTEGER *, ___serial, a2, X509_OBJECT *, ___ret, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_by_fingerprint(___ctx, ___type, ___bytes, ___len, ___ret) \
      LP5(0x2fe2, int, X509_LOOKUP_by_fingerprint , X509_LOOKUP *, ___ctx, a0, X509_LOOKUP_TYPE, ___type, d0, const unsigned char *, ___bytes, a1, int, ___len, d1, X509_OBJECT *, ___ret, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_by_alias(___ctx, ___type, ___str, ___len, ___ret) \
      LP5(0x2fe8, int, X509_LOOKUP_by_alias , X509_LOOKUP *, ___ctx, a0, X509_LOOKUP_TYPE, ___type, d0, const char *, ___str, a1, int, ___len, d1, X509_OBJECT *, ___ret, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_shutdown(___ctx) \
      LP1(0x2fee, int, X509_LOOKUP_shutdown , X509_LOOKUP *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_load_locations(___ctx, ___file, ___dir) \
      LP3(0x2ff4, int, X509_STORE_load_locations , X509_STORE *, ___ctx, a0, const char *, ___file, a1, const char *, ___dir, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_default_paths(___ctx) \
      LP1(0x2ffa, int, X509_STORE_set_default_paths , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_ex_data(___ctx, ___idx, ___data) \
      LP3(0x3006, int, X509_STORE_CTX_set_ex_data , X509_STORE_CTX *, ___ctx, a0, int, ___idx, d0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_ex_data(___ctx, ___idx) \
      LP2(0x300c, void *, X509_STORE_CTX_get_ex_data , X509_STORE_CTX *, ___ctx, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_error(___ctx) \
      LP1(0x3012, int, X509_STORE_CTX_get_error , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_error(___ctx, ___s) \
      LP2NR(0x3018, X509_STORE_CTX_set_error , X509_STORE_CTX *, ___ctx, a0, int, ___s, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_error_depth(___ctx) \
      LP1(0x301e, int, X509_STORE_CTX_get_error_depth , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_current_cert(___ctx) \
      LP1(0x3024, X509 *, X509_STORE_CTX_get_current_cert , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get0_chain(___ctx) \
      LP1(0x302a, STACK_OF(X509) *, X509_STORE_CTX_get0_chain , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get1_chain(___ctx) \
      LP1(0x3030, STACK_OF(X509) *, X509_STORE_CTX_get1_chain , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_cert(___c, ___x) \
      LP2NR(0x3036, X509_STORE_CTX_set_cert , X509_STORE_CTX *, ___c, a0, X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_purpose(___ctx, ___purpose) \
      LP2(0x303c, int, X509_STORE_CTX_set_purpose , X509_STORE_CTX *, ___ctx, a0, int, ___purpose, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_trust(___ctx, ___trust) \
      LP2(0x3042, int, X509_STORE_CTX_set_trust , X509_STORE_CTX *, ___ctx, a0, int, ___trust, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_purpose_inherit(___ctx, ___def_purpose, ___purpose, ___trust) \
      LP4(0x3048, int, X509_STORE_CTX_purpose_inherit , X509_STORE_CTX *, ___ctx, a0, int, ___def_purpose, d0, int, ___purpose, d1, int, ___trust, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_flags(___ctx, ___flags) \
      LP2NR(0x304e, X509_STORE_CTX_set_flags , X509_STORE_CTX *, ___ctx, a0, long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_time(___ctx, ___flags, ___t) \
      LP3NR(0x3054, X509_STORE_CTX_set_time , X509_STORE_CTX *, ___ctx, a0, long, ___flags, d0, time_t, ___t, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_verify_cb(___ctx, ___verify_cb) \
      LP2NRFP(0x305a, X509_STORE_CTX_set_verify_cb , X509_STORE_CTX *, ___ctx, a0, __fpt, ___verify_cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(int,X509_STORE_CTX *), 0, 0, 0, 0, 0, 0)

#define BASIC_CONSTRAINTS_new() \
      LP0(0x3060, BASIC_CONSTRAINTS *, BASIC_CONSTRAINTS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BASIC_CONSTRAINTS_free(___a) \
      LP1NR(0x3066, BASIC_CONSTRAINTS_free , BASIC_CONSTRAINTS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_BASIC_CONSTRAINTS(___a, ___in, ___len) \
      LP3(0x306c, BASIC_CONSTRAINTS *, d2i_BASIC_CONSTRAINTS , BASIC_CONSTRAINTS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_BASIC_CONSTRAINTS(___a, ___out) \
      LP2(0x3072, int, i2d_BASIC_CONSTRAINTS , BASIC_CONSTRAINTS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BASIC_CONSTRAINTS_it() \
      LP0(0x3078, const ASN1_ITEM *, BASIC_CONSTRAINTS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SXNET_new() \
      LP0(0x307e, SXNET *, SXNET_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SXNET_free(___a) \
      LP1NR(0x3084, SXNET_free , SXNET *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_SXNET(___a, ___in, ___len) \
      LP3(0x308a, SXNET *, d2i_SXNET , SXNET **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_SXNET(___a, ___out) \
      LP2(0x3090, int, i2d_SXNET , SXNET *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SXNET_it() \
      LP0(0x3096, const ASN1_ITEM *, SXNET_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SXNETID_new() \
      LP0(0x309c, SXNETID *, SXNETID_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SXNETID_free(___a) \
      LP1NR(0x30a2, SXNETID_free , SXNETID *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_SXNETID(___a, ___in, ___len) \
      LP3(0x30a8, SXNETID *, d2i_SXNETID , SXNETID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_SXNETID(___a, ___out) \
      LP2(0x30ae, int, i2d_SXNETID , SXNETID *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SXNETID_it() \
      LP0(0x30b4, const ASN1_ITEM *, SXNETID_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SXNET_add_id_asc(___psx, ___zone, ___user, ___userlen) \
      LP4(0x30ba, int, SXNET_add_id_asc , SXNET **, ___psx, a0, const char *, ___zone, a1, const char *, ___user, a2, int, ___userlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SXNET_add_id_ulong(___psx, ___lzone, ___user, ___userlen) \
      LP4(0x30c0, int, SXNET_add_id_ulong , SXNET **, ___psx, a0, unsigned long, ___lzone, d0, const char *, ___user, a1, int, ___userlen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SXNET_add_id_INTEGER(___psx, ___izone, ___user, ___userlen) \
      LP4(0x30c6, int, SXNET_add_id_INTEGER , SXNET **, ___psx, a0, ASN1_INTEGER *, ___izone, a1, const char *, ___user, a2, int, ___userlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SXNET_get_id_asc(___sx, ___zone) \
      LP2(0x30cc, ASN1_OCTET_STRING *, SXNET_get_id_asc , SXNET *, ___sx, a0, const char *, ___zone, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SXNET_get_id_ulong(___sx, ___lzone) \
      LP2(0x30d2, ASN1_OCTET_STRING *, SXNET_get_id_ulong , SXNET *, ___sx, a0, unsigned long, ___lzone, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SXNET_get_id_INTEGER(___sx, ___zone) \
      LP2(0x30d8, ASN1_OCTET_STRING *, SXNET_get_id_INTEGER , SXNET *, ___sx, a0, ASN1_INTEGER *, ___zone, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AUTHORITY_KEYID_new() \
      LP0(0x30de, AUTHORITY_KEYID *, AUTHORITY_KEYID_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AUTHORITY_KEYID_free(___a) \
      LP1NR(0x30e4, AUTHORITY_KEYID_free , AUTHORITY_KEYID *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_AUTHORITY_KEYID(___a, ___in, ___len) \
      LP3(0x30ea, AUTHORITY_KEYID *, d2i_AUTHORITY_KEYID , AUTHORITY_KEYID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_AUTHORITY_KEYID(___a, ___out) \
      LP2(0x30f0, int, i2d_AUTHORITY_KEYID , AUTHORITY_KEYID *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AUTHORITY_KEYID_it() \
      LP0(0x30f6, const ASN1_ITEM *, AUTHORITY_KEYID_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKEY_USAGE_PERIOD_new() \
      LP0(0x30fc, PKEY_USAGE_PERIOD *, PKEY_USAGE_PERIOD_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKEY_USAGE_PERIOD_free(___a) \
      LP1NR(0x3102, PKEY_USAGE_PERIOD_free , PKEY_USAGE_PERIOD *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PKEY_USAGE_PERIOD(___a, ___in, ___len) \
      LP3(0x3108, PKEY_USAGE_PERIOD *, d2i_PKEY_USAGE_PERIOD , PKEY_USAGE_PERIOD **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKEY_USAGE_PERIOD(___a, ___out) \
      LP2(0x310e, int, i2d_PKEY_USAGE_PERIOD , PKEY_USAGE_PERIOD *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKEY_USAGE_PERIOD_it() \
      LP0(0x3114, const ASN1_ITEM *, PKEY_USAGE_PERIOD_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAME_new() \
      LP0(0x311a, GENERAL_NAME *, GENERAL_NAME_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAME_free(___a) \
      LP1NR(0x3120, GENERAL_NAME_free , GENERAL_NAME *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_GENERAL_NAME(___a, ___in, ___len) \
      LP3(0x3126, GENERAL_NAME *, d2i_GENERAL_NAME , GENERAL_NAME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_GENERAL_NAME(___a, ___out) \
      LP2(0x312c, int, i2d_GENERAL_NAME , GENERAL_NAME *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAME_it() \
      LP0(0x3132, const ASN1_ITEM *, GENERAL_NAME_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2v_GENERAL_NAME(___method, ___gen, ___ret) \
      LP3(0x3138, STACK_OF(CONF_VALUE) *, i2v_GENERAL_NAME , X509V3_EXT_METHOD *, ___method, a0, GENERAL_NAME *, ___gen, a1, STACK_OF(CONF_VALUE) *, ___ret, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAME_print(___out, ___gen) \
      LP2(0x313e, int, GENERAL_NAME_print , BIO *, ___out, a0, GENERAL_NAME *, ___gen, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAMES_new() \
      LP0(0x3144, GENERAL_NAMES *, GENERAL_NAMES_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAMES_free(___a) \
      LP1NR(0x314a, GENERAL_NAMES_free , GENERAL_NAMES *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_GENERAL_NAMES(___a, ___in, ___len) \
      LP3(0x3150, GENERAL_NAMES *, d2i_GENERAL_NAMES , GENERAL_NAMES **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_GENERAL_NAMES(___a, ___out) \
      LP2(0x3156, int, i2d_GENERAL_NAMES , GENERAL_NAMES *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAMES_it() \
      LP0(0x315c, const ASN1_ITEM *, GENERAL_NAMES_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2v_GENERAL_NAMES(___method, ___gen, ___extlist) \
      LP3(0x3162, STACK_OF(CONF_VALUE) *, i2v_GENERAL_NAMES , X509V3_EXT_METHOD *, ___method, a0, GENERAL_NAMES *, ___gen, a1, STACK_OF(CONF_VALUE) *, ___extlist, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define v2i_GENERAL_NAMES(___method, ___ctx, ___nval) \
      LP3(0x3168, GENERAL_NAMES *, v2i_GENERAL_NAMES , X509V3_EXT_METHOD *, ___method, a0, X509V3_CTX *, ___ctx, a1, STACK_OF(CONF_VALUE) *, ___nval, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OTHERNAME_new() \
      LP0(0x316e, OTHERNAME *, OTHERNAME_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OTHERNAME_free(___a) \
      LP1NR(0x3174, OTHERNAME_free , OTHERNAME *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OTHERNAME(___a, ___in, ___len) \
      LP3(0x317a, OTHERNAME *, d2i_OTHERNAME , OTHERNAME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OTHERNAME(___a, ___out) \
      LP2(0x3180, int, i2d_OTHERNAME , OTHERNAME *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OTHERNAME_it() \
      LP0(0x3186, const ASN1_ITEM *, OTHERNAME_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EDIPARTYNAME_new() \
      LP0(0x318c, EDIPARTYNAME *, EDIPARTYNAME_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EDIPARTYNAME_free(___a) \
      LP1NR(0x3192, EDIPARTYNAME_free , EDIPARTYNAME *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_EDIPARTYNAME(___a, ___in, ___len) \
      LP3(0x3198, EDIPARTYNAME *, d2i_EDIPARTYNAME , EDIPARTYNAME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_EDIPARTYNAME(___a, ___out) \
      LP2(0x319e, int, i2d_EDIPARTYNAME , EDIPARTYNAME *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EDIPARTYNAME_it() \
      LP0(0x31a4, const ASN1_ITEM *, EDIPARTYNAME_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2s_ASN1_OCTET_STRING(___method, ___ia5) \
      LP2(0x31aa, char *, i2s_ASN1_OCTET_STRING , X509V3_EXT_METHOD *, ___method, a0, const ASN1_OCTET_STRING *, ___ia5, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define s2i_ASN1_OCTET_STRING(___method, ___ctx, ___str) \
      LP3(0x31b0, ASN1_OCTET_STRING *, s2i_ASN1_OCTET_STRING , X509V3_EXT_METHOD *, ___method, a0, X509V3_CTX *, ___ctx, a1, const char *, ___str, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EXTENDED_KEY_USAGE_new() \
      LP0(0x31b6, EXTENDED_KEY_USAGE *, EXTENDED_KEY_USAGE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EXTENDED_KEY_USAGE_free(___a) \
      LP1NR(0x31bc, EXTENDED_KEY_USAGE_free , EXTENDED_KEY_USAGE *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_EXTENDED_KEY_USAGE(___a, ___in, ___len) \
      LP3(0x31c2, EXTENDED_KEY_USAGE *, d2i_EXTENDED_KEY_USAGE , EXTENDED_KEY_USAGE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_EXTENDED_KEY_USAGE(___a, ___out) \
      LP2(0x31c8, int, i2d_EXTENDED_KEY_USAGE , EXTENDED_KEY_USAGE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EXTENDED_KEY_USAGE_it() \
      LP0(0x31ce, const ASN1_ITEM *, EXTENDED_KEY_USAGE_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2a_ACCESS_DESCRIPTION(___bp, ___a) \
      LP2(0x31d4, int, i2a_ACCESS_DESCRIPTION , BIO *, ___bp, a0, const ACCESS_DESCRIPTION *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CERTIFICATEPOLICIES_new() \
      LP0(0x31da, CERTIFICATEPOLICIES *, CERTIFICATEPOLICIES_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CERTIFICATEPOLICIES_free(___a) \
      LP1NR(0x31e0, CERTIFICATEPOLICIES_free , CERTIFICATEPOLICIES *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_CERTIFICATEPOLICIES(___a, ___in, ___len) \
      LP3(0x31e6, CERTIFICATEPOLICIES *, d2i_CERTIFICATEPOLICIES , CERTIFICATEPOLICIES **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_CERTIFICATEPOLICIES(___a, ___out) \
      LP2(0x31ec, int, i2d_CERTIFICATEPOLICIES , CERTIFICATEPOLICIES *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CERTIFICATEPOLICIES_it() \
      LP0(0x31f2, const ASN1_ITEM *, CERTIFICATEPOLICIES_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define POLICYINFO_new() \
      LP0(0x31f8, POLICYINFO *, POLICYINFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define POLICYINFO_free(___a) \
      LP1NR(0x31fe, POLICYINFO_free , POLICYINFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_POLICYINFO(___a, ___in, ___len) \
      LP3(0x3204, POLICYINFO *, d2i_POLICYINFO , POLICYINFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_POLICYINFO(___a, ___out) \
      LP2(0x320a, int, i2d_POLICYINFO , POLICYINFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define POLICYINFO_it() \
      LP0(0x3210, const ASN1_ITEM *, POLICYINFO_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define POLICYQUALINFO_new() \
      LP0(0x3216, POLICYQUALINFO *, POLICYQUALINFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define POLICYQUALINFO_free(___a) \
      LP1NR(0x321c, POLICYQUALINFO_free , POLICYQUALINFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_POLICYQUALINFO(___a, ___in, ___len) \
      LP3(0x3222, POLICYQUALINFO *, d2i_POLICYQUALINFO , POLICYQUALINFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_POLICYQUALINFO(___a, ___out) \
      LP2(0x3228, int, i2d_POLICYQUALINFO , POLICYQUALINFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define POLICYQUALINFO_it() \
      LP0(0x322e, const ASN1_ITEM *, POLICYQUALINFO_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define USERNOTICE_new() \
      LP0(0x3234, USERNOTICE *, USERNOTICE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define USERNOTICE_free(___a) \
      LP1NR(0x323a, USERNOTICE_free , USERNOTICE *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_USERNOTICE(___a, ___in, ___len) \
      LP3(0x3240, USERNOTICE *, d2i_USERNOTICE , USERNOTICE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_USERNOTICE(___a, ___out) \
      LP2(0x3246, int, i2d_USERNOTICE , USERNOTICE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define USERNOTICE_it() \
      LP0(0x324c, const ASN1_ITEM *, USERNOTICE_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NOTICEREF_new() \
      LP0(0x3252, NOTICEREF *, NOTICEREF_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NOTICEREF_free(___a) \
      LP1NR(0x3258, NOTICEREF_free , NOTICEREF *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_NOTICEREF(___a, ___in, ___len) \
      LP3(0x325e, NOTICEREF *, d2i_NOTICEREF , NOTICEREF **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_NOTICEREF(___a, ___out) \
      LP2(0x3264, int, i2d_NOTICEREF , NOTICEREF *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NOTICEREF_it() \
      LP0(0x326a, const ASN1_ITEM *, NOTICEREF_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRL_DIST_POINTS_new() \
      LP0(0x3270, CRL_DIST_POINTS *, CRL_DIST_POINTS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRL_DIST_POINTS_free(___a) \
      LP1NR(0x3276, CRL_DIST_POINTS_free , CRL_DIST_POINTS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_CRL_DIST_POINTS(___a, ___in, ___len) \
      LP3(0x327c, CRL_DIST_POINTS *, d2i_CRL_DIST_POINTS , CRL_DIST_POINTS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_CRL_DIST_POINTS(___a, ___out) \
      LP2(0x3282, int, i2d_CRL_DIST_POINTS , CRL_DIST_POINTS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRL_DIST_POINTS_it() \
      LP0(0x3288, const ASN1_ITEM *, CRL_DIST_POINTS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DIST_POINT_new() \
      LP0(0x328e, DIST_POINT *, DIST_POINT_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DIST_POINT_free(___a) \
      LP1NR(0x3294, DIST_POINT_free , DIST_POINT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DIST_POINT(___a, ___in, ___len) \
      LP3(0x329a, DIST_POINT *, d2i_DIST_POINT , DIST_POINT **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DIST_POINT(___a, ___out) \
      LP2(0x32a0, int, i2d_DIST_POINT , DIST_POINT *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DIST_POINT_it() \
      LP0(0x32a6, const ASN1_ITEM *, DIST_POINT_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DIST_POINT_NAME_new() \
      LP0(0x32ac, DIST_POINT_NAME *, DIST_POINT_NAME_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DIST_POINT_NAME_free(___a) \
      LP1NR(0x32b2, DIST_POINT_NAME_free , DIST_POINT_NAME *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DIST_POINT_NAME(___a, ___in, ___len) \
      LP3(0x32b8, DIST_POINT_NAME *, d2i_DIST_POINT_NAME , DIST_POINT_NAME **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DIST_POINT_NAME(___a, ___out) \
      LP2(0x32be, int, i2d_DIST_POINT_NAME , DIST_POINT_NAME *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DIST_POINT_NAME_it() \
      LP0(0x32c4, const ASN1_ITEM *, DIST_POINT_NAME_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ACCESS_DESCRIPTION_new() \
      LP0(0x32ca, ACCESS_DESCRIPTION *, ACCESS_DESCRIPTION_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ACCESS_DESCRIPTION_free(___a) \
      LP1NR(0x32d0, ACCESS_DESCRIPTION_free , ACCESS_DESCRIPTION *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ACCESS_DESCRIPTION(___a, ___in, ___len) \
      LP3(0x32d6, ACCESS_DESCRIPTION *, d2i_ACCESS_DESCRIPTION , ACCESS_DESCRIPTION **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ACCESS_DESCRIPTION(___a, ___out) \
      LP2(0x32dc, int, i2d_ACCESS_DESCRIPTION , ACCESS_DESCRIPTION *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ACCESS_DESCRIPTION_it() \
      LP0(0x32e2, const ASN1_ITEM *, ACCESS_DESCRIPTION_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AUTHORITY_INFO_ACCESS_new() \
      LP0(0x32e8, AUTHORITY_INFO_ACCESS *, AUTHORITY_INFO_ACCESS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AUTHORITY_INFO_ACCESS_free(___a) \
      LP1NR(0x32ee, AUTHORITY_INFO_ACCESS_free , AUTHORITY_INFO_ACCESS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_AUTHORITY_INFO_ACCESS(___a, ___in, ___len) \
      LP3(0x32f4, AUTHORITY_INFO_ACCESS *, d2i_AUTHORITY_INFO_ACCESS , AUTHORITY_INFO_ACCESS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_AUTHORITY_INFO_ACCESS(___a, ___out) \
      LP2(0x32fa, int, i2d_AUTHORITY_INFO_ACCESS , AUTHORITY_INFO_ACCESS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AUTHORITY_INFO_ACCESS_it() \
      LP0(0x3300, const ASN1_ITEM *, AUTHORITY_INFO_ACCESS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define v2i_GENERAL_NAME(___method, ___ctx, ___cnf) \
      LP3(0x3306, GENERAL_NAME *, v2i_GENERAL_NAME , X509V3_EXT_METHOD *, ___method, a0, X509V3_CTX *, ___ctx, a1, CONF_VALUE *, ___cnf, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_conf_free(___val) \
      LP1NR(0x330c, X509V3_conf_free , CONF_VALUE *, ___val, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_nconf_nid(___conf, ___ctx, ___ext_nid, ___value) \
      LP4(0x3312, X509_EXTENSION *, X509V3_EXT_nconf_nid , CONF *, ___conf, a0, X509V3_CTX *, ___ctx, a1, int, ___ext_nid, d0, char *, ___value, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_nconf(___conf, ___ctx, ___name, ___value) \
      LP4(0x3318, X509_EXTENSION *, X509V3_EXT_nconf , CONF *, ___conf, a0, X509V3_CTX *, ___ctx, a1, const char *, ___name, a2, const char *, ___value, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_add_nconf_sk(___conf, ___ctx, ___section, ___sk) \
      LP4(0x331e, int, X509V3_EXT_add_nconf_sk , CONF *, ___conf, a0, X509V3_CTX *, ___ctx, a1, const char *, ___section, a2, STACK_OF(X509_EXTENSION) **, ___sk, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_add_nconf(___conf, ___ctx, ___section, ___cert) \
      LP4(0x3324, int, X509V3_EXT_add_nconf , CONF *, ___conf, a0, X509V3_CTX *, ___ctx, a1, const char *, ___section, a2, X509 *, ___cert, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_REQ_add_nconf(___conf, ___ctx, ___section, ___req) \
      LP4(0x332a, int, X509V3_EXT_REQ_add_nconf , CONF *, ___conf, a0, X509V3_CTX *, ___ctx, a1, const char *, ___section, a2, X509_REQ *, ___req, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_CRL_add_nconf(___conf, ___ctx, ___section, ___crl) \
      LP4(0x3330, int, X509V3_EXT_CRL_add_nconf , CONF *, ___conf, a0, X509V3_CTX *, ___ctx, a1, const char *, ___section, a2, X509_CRL *, ___crl, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_conf_nid(___conf, ___ctx, ___ext_nid, ___value) \
      LP4(0x3336, X509_EXTENSION *, X509V3_EXT_conf_nid , LHASH_OF(CONF_VALUE) *, ___conf, a0, X509V3_CTX *, ___ctx, a1, int, ___ext_nid, d0, const char *, ___value, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_conf(___conf, ___ctx, ___name, ___value) \
      LP4(0x333c, X509_EXTENSION *, X509V3_EXT_conf , LHASH_OF(CONF_VALUE) *, ___conf, a0, X509V3_CTX *, ___ctx, a1, const char *, ___name, a2, const char *, ___value, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_add_conf(___conf, ___ctx, ___section, ___cert) \
      LP4(0x3342, int, X509V3_EXT_add_conf , LHASH_OF(CONF_VALUE) *, ___conf, a0, X509V3_CTX *, ___ctx, a1, const char *, ___section, a2, X509 *, ___cert, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_REQ_add_conf(___conf, ___ctx, ___section, ___req) \
      LP4(0x3348, int, X509V3_EXT_REQ_add_conf , LHASH_OF(CONF_VALUE) *, ___conf, a0, X509V3_CTX *, ___ctx, a1, const char *, ___section, a2, X509_REQ *, ___req, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_CRL_add_conf(___conf, ___ctx, ___section, ___crl) \
      LP4(0x334e, int, X509V3_EXT_CRL_add_conf , LHASH_OF(CONF_VALUE) *, ___conf, a0, X509V3_CTX *, ___ctx, a1, const char *, ___section, a2, X509_CRL *, ___crl, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_add_value_bool_nf(___name, ___asn1_bool, ___extlist) \
      LP3(0x3354, int, X509V3_add_value_bool_nf , const char *, ___name, a0, int, ___asn1_bool, d0, STACK_OF(CONF_VALUE) **, ___extlist, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_get_value_bool(___value, ___asn1_bool) \
      LP2(0x335a, int, X509V3_get_value_bool , const CONF_VALUE *, ___value, a0, int *, ___asn1_bool, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_get_value_int(___value, ___aint) \
      LP2(0x3360, int, X509V3_get_value_int , const CONF_VALUE *, ___value, a0, ASN1_INTEGER **, ___aint, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_set_nconf(___ctx, ___conf) \
      LP2NR(0x3366, X509V3_set_nconf , X509V3_CTX *, ___ctx, a0, CONF *, ___conf, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_set_conf_lhash(___ctx, ___lhash) \
      LP2NR(0x336c, X509V3_set_conf_lhash , X509V3_CTX *, ___ctx, a0, LHASH_OF(CONF_VALUE) *, ___lhash, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_get_string(___ctx, ___name, ___section) \
      LP3(0x3372, char *, X509V3_get_string , X509V3_CTX *, ___ctx, a0, const char *, ___name, a1, const char *, ___section, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_get_section(___ctx, ___section) \
      LP2(0x3378, STACK_OF(CONF_VALUE) *, X509V3_get_section , X509V3_CTX *, ___ctx, a0, const char *, ___section, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_string_free(___ctx, ___str) \
      LP2NR(0x337e, X509V3_string_free , X509V3_CTX *, ___ctx, a0, char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_section_free(___ctx, ___section) \
      LP2NR(0x3384, X509V3_section_free , X509V3_CTX *, ___ctx, a0, STACK_OF(CONF_VALUE) *, ___section, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_set_ctx(___ctx, ___issuer, ___subject, ___req, ___crl, ___flags) \
      LP6NR(0x338a, X509V3_set_ctx , X509V3_CTX *, ___ctx, a0, X509 *, ___issuer, a1, X509 *, ___subject, a2, X509_REQ *, ___req, a3, X509_CRL *, ___crl, d0, int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_add_value(___name, ___value, ___extlist) \
      LP3(0x3390, int, X509V3_add_value , const char *, ___name, a0, const char *, ___value, a1, STACK_OF(CONF_VALUE) **, ___extlist, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_add_value_uchar(___name, ___value, ___extlist) \
      LP3(0x3396, int, X509V3_add_value_uchar , const char *, ___name, a0, const unsigned char *, ___value, a1, STACK_OF(CONF_VALUE) **, ___extlist, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_add_value_bool(___name, ___asn1_bool, ___extlist) \
      LP3(0x339c, int, X509V3_add_value_bool , const char *, ___name, a0, int, ___asn1_bool, d0, STACK_OF(CONF_VALUE) **, ___extlist, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_add_value_int(___name, ___aint, ___extlist) \
      LP3(0x33a2, int, X509V3_add_value_int , const char *, ___name, a0, const ASN1_INTEGER *, ___aint, a1, STACK_OF(CONF_VALUE) **, ___extlist, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2s_ASN1_INTEGER(___meth, ___aint) \
      LP2(0x33a8, char *, i2s_ASN1_INTEGER , X509V3_EXT_METHOD *, ___meth, a0, const ASN1_INTEGER *, ___aint, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define s2i_ASN1_INTEGER(___meth, ___value) \
      LP2(0x33ae, ASN1_INTEGER *, s2i_ASN1_INTEGER , X509V3_EXT_METHOD *, ___meth, a0, const char *, ___value, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2s_ASN1_ENUMERATED(___meth, ___aint) \
      LP2(0x33b4, char *, i2s_ASN1_ENUMERATED , X509V3_EXT_METHOD *, ___meth, a0, const ASN1_ENUMERATED *, ___aint, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2s_ASN1_ENUMERATED_TABLE(___meth, ___aint) \
      LP2(0x33ba, char *, i2s_ASN1_ENUMERATED_TABLE , X509V3_EXT_METHOD *, ___meth, a0, const ASN1_ENUMERATED *, ___aint, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_add(___ext) \
      LP1(0x33c0, int, X509V3_EXT_add , X509V3_EXT_METHOD *, ___ext, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_add_list(___extlist) \
      LP1(0x33c6, int, X509V3_EXT_add_list , X509V3_EXT_METHOD *, ___extlist, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_add_alias(___nid_to, ___nid_from) \
      LP2(0x33cc, int, X509V3_EXT_add_alias , int, ___nid_to, d0, int, ___nid_from, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_cleanup() \
      LP0NR(0x33d2, X509V3_EXT_cleanup ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_get(___ext) \
      LP1(0x33d8, const X509V3_EXT_METHOD *, X509V3_EXT_get , X509_EXTENSION *, ___ext, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_get_nid(___nid) \
      LP1(0x33de, const X509V3_EXT_METHOD *, X509V3_EXT_get_nid , int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_add_standard_extensions() \
      LP0(0x33e4, int, X509V3_add_standard_extensions ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_parse_list(___line) \
      LP1(0x33ea, STACK_OF(CONF_VALUE) *, X509V3_parse_list , const char *, ___line, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_d2i(___ext) \
      LP1(0x33f0, void *, X509V3_EXT_d2i , X509_EXTENSION *, ___ext, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_get_d2i(___x, ___nid, ___crit, ___idx) \
      LP4(0x33f6, void *, X509V3_get_d2i , const STACK_OF(X509_EXTENSION) *, ___x, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_i2d(___ext_nid, ___crit, ___ext_struc) \
      LP3(0x33fc, X509_EXTENSION *, X509V3_EXT_i2d , int, ___ext_nid, d0, int, ___crit, d1, void *, ___ext_struc, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_add1_i2d(___x, ___nid, ___value, ___crit, ___flags) \
      LP5(0x3402, int, X509V3_add1_i2d , STACK_OF(X509_EXTENSION) **, ___x, a0, int, ___nid, d0, void *, ___value, a1, int, ___crit, d1, unsigned long, ___flags, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_buf2hexstr(___buffer, ___len) \
      LP2(0x3408, char *, OPENSSL_buf2hexstr , const unsigned char *, ___buffer, a0, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_hexstr2buf(___str, ___len) \
      LP2(0x340e, unsigned char *, OPENSSL_hexstr2buf , const char *, ___str, a0, long *, ___len, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_val_prn(___out, ___val, ___indent, ___ml) \
      LP4NR(0x3414, X509V3_EXT_val_prn , BIO *, ___out, a0, STACK_OF(CONF_VALUE) *, ___val, a1, int, ___indent, d0, int, ___ml, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_EXT_print(___out, ___ext, ___flag, ___indent) \
      LP4(0x341a, int, X509V3_EXT_print , BIO *, ___out, a0, X509_EXTENSION *, ___ext, a1, unsigned long, ___flag, d0, int, ___indent, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_extensions_print(___out, ___title, ___exts, ___flag, ___indent) \
      LP5(0x3420, int, X509V3_extensions_print , BIO *, ___out, a0, const char *, ___title, a1, const STACK_OF(X509_EXTENSION) *, ___exts, a2, unsigned long, ___flag, d0, int, ___indent, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_check_purpose(___x, ___id, ___ca) \
      LP3(0x3426, int, X509_check_purpose , X509 *, ___x, a0, int, ___id, d0, int, ___ca, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_supported_extension(___ex) \
      LP1(0x342c, int, X509_supported_extension , X509_EXTENSION *, ___ex, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PURPOSE_set(___p, ___purpose) \
      LP2(0x3432, int, X509_PURPOSE_set , int *, ___p, a0, int, ___purpose, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_check_issued(___issuer, ___subject) \
      LP2(0x3438, int, X509_check_issued , X509 *, ___issuer, a0, X509 *, ___subject, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PURPOSE_get_count() \
      LP0(0x343e, int, X509_PURPOSE_get_count ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PURPOSE_get0(___idx) \
      LP1(0x3444, X509_PURPOSE *, X509_PURPOSE_get0 , int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PURPOSE_get_by_sname(___sname) \
      LP1(0x344a, int, X509_PURPOSE_get_by_sname , const char *, ___sname, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PURPOSE_get_by_id(___id) \
      LP1(0x3450, int, X509_PURPOSE_get_by_id , int, ___id, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PURPOSE_add(___id, ___trust, ___flags, ___ck, ___name, ___sname, ___arg) \
      LP7FP(0x3456, int, X509_PURPOSE_add , int, ___id, d0, int, ___trust, d1, int, ___flags, d2, __fpt, ___ck, a0, const char *, ___name, a1, const char *, ___sname, a2, void *, ___arg, a3,\
      , AMISSL_BASE_NAME, int (*__fpt)(const X509_PURPOSE *,const X509 *,int), 0, 0, 0, 0, 0, 0)

#define X509_PURPOSE_get0_name(___xp) \
      LP1(0x345c, char *, X509_PURPOSE_get0_name , const X509_PURPOSE *, ___xp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PURPOSE_get0_sname(___xp) \
      LP1(0x3462, char *, X509_PURPOSE_get0_sname , const X509_PURPOSE *, ___xp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PURPOSE_get_trust(___xp) \
      LP1(0x3468, int, X509_PURPOSE_get_trust , const X509_PURPOSE *, ___xp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PURPOSE_cleanup() \
      LP0NR(0x346e, X509_PURPOSE_cleanup ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PURPOSE_get_id(___a) \
      LP1(0x3474, int, X509_PURPOSE_get_id , const X509_PURPOSE *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get1_email(___x) \
      LP1(0x347a, STACK_OF(OPENSSL_STRING) *, X509_get1_email , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get1_email(___x) \
      LP1(0x3480, STACK_OF(OPENSSL_STRING) *, X509_REQ_get1_email , X509_REQ *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_email_free(___sk) \
      LP1NR(0x3486, X509_email_free , STACK_OF(OPENSSL_STRING) *, ___sk, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_X509V3_strings() \
      LP0(0x348c, int, ERR_load_X509V3_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_options() \
      LP0(0x3492, const char *, AES_options ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_set_encrypt_key(___userKey, ___bits, ___key) \
      LP3(0x3498, int, AES_set_encrypt_key , const unsigned char *, ___userKey, a0, const int, ___bits, d0, AES_KEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_set_decrypt_key(___userKey, ___bits, ___key) \
      LP3(0x349e, int, AES_set_decrypt_key , const unsigned char *, ___userKey, a0, const int, ___bits, d0, AES_KEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_encrypt(___in, ___out, ___key) \
      LP3NR(0x34a4, AES_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const AES_KEY *, ___key, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_decrypt(___in, ___out, ___key) \
      LP3NR(0x34aa, AES_decrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const AES_KEY *, ___key, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_ecb_encrypt(___in, ___out, ___key, ___enc) \
      LP4NR(0x34b0, AES_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const AES_KEY *, ___key, a2, const int, ___enc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_cbc_encrypt(___in, ___out, ___length, ___key, ___ivec, ___enc) \
      LP6NR(0x34b6, AES_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, a3, const int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_cfb128_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc) \
      LP7NR(0x34bc, AES_cfb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, const int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_cfb1_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc) \
      LP7NR(0x34c2, AES_cfb1_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, const int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_cfb8_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc) \
      LP7NR(0x34c8, AES_cfb8_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, const int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_ofb128_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num) \
      LP6NR(0x34d4, AES_ofb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BF_set_key(___key, ___len, ___data) \
      LP3NR(0x34e0, BF_set_key , BF_KEY *, ___key, a0, int, ___len, d0, const unsigned char *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BF_encrypt(___data, ___key) \
      LP2NR(0x34e6, BF_encrypt , BF_LONG *, ___data, a0, const BF_KEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BF_decrypt(___data, ___key) \
      LP2NR(0x34ec, BF_decrypt , BF_LONG *, ___data, a0, const BF_KEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BF_ecb_encrypt(___in, ___out, ___key, ___enc) \
      LP4NR(0x34f2, BF_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const BF_KEY *, ___key, a2, int, ___enc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BF_cbc_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___enc) \
      LP6NR(0x34f8, BF_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, const BF_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BF_cfb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num, ___enc) \
      LP7NR(0x34fe, BF_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, const BF_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BF_ofb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num) \
      LP6NR(0x3504, BF_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, const BF_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BF_options() \
      LP0(0x350a, const char *, BF_options ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CAST_set_key(___key, ___len, ___data) \
      LP3NR(0x3510, CAST_set_key , CAST_KEY *, ___key, a0, int, ___len, d0, const unsigned char *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CAST_ecb_encrypt(___in, ___out, ___key, ___enc) \
      LP4NR(0x3516, CAST_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, CAST_KEY *, ___key, a2, int, ___enc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CAST_encrypt(___data, ___key) \
      LP2NR(0x351c, CAST_encrypt , CAST_LONG *, ___data, a0, CAST_KEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CAST_decrypt(___data, ___key) \
      LP2NR(0x3522, CAST_decrypt , CAST_LONG *, ___data, a0, CAST_KEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CAST_cbc_encrypt(___in, ___out, ___length, ___ks, ___iv, ___enc) \
      LP6NR(0x3528, CAST_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, CAST_KEY *, ___ks, a2, unsigned char *, ___iv, a3, int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CAST_cfb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num, ___enc) \
      LP7NR(0x352e, CAST_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, CAST_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CAST_ofb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num) \
      LP6NR(0x3534, CAST_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, CAST_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define _shadow_DES_check_key() \
      LP0(0x353a, int *, _shadow_DES_check_key ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_options() \
      LP0(0x3540, const char *, DES_options ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_ecb3_encrypt(___input, ___output, ___ks1, ___ks2, ___ks3, ___enc) \
      LP6NR(0x3546, DES_ecb3_encrypt , const_DES_cblock *, ___input, a0, DES_cblock *, ___output, a1, DES_key_schedule *, ___ks1, a2, DES_key_schedule *, ___ks2, a3, DES_key_schedule *, ___ks3, d0, int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_cbc_cksum(___input, ___output, ___length, ___schedule, ___ivec) \
      LP5(0x354c, DES_LONG, DES_cbc_cksum , const unsigned char *, ___input, a0, DES_cblock *, ___output, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, const_DES_cblock *, ___ivec, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_cbc_encrypt(___input, ___output, ___length, ___schedule, ___ivec, ___enc) \
      LP6NR(0x3552, DES_cbc_encrypt , const unsigned char *, ___input, a0, unsigned char *, ___output, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_ncbc_encrypt(___input, ___output, ___length, ___schedule, ___ivec, ___enc) \
      LP6NR(0x3558, DES_ncbc_encrypt , const unsigned char *, ___input, a0, unsigned char *, ___output, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_xcbc_encrypt(___input, ___output, ___length, ___schedule, ___ivec, ___inw, ___outw, ___enc) \
      LP8NR(0x355e, DES_xcbc_encrypt , const unsigned char *, ___input, a0, unsigned char *, ___output, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, const_DES_cblock *, ___inw, d1, const_DES_cblock *, ___outw, d2, int, ___enc, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_cfb_encrypt(___in, ___out, ___numbits, ___length, ___schedule, ___ivec, ___enc) \
      LP7NR(0x3564, DES_cfb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, int, ___numbits, d0, long, ___length, d1, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_ecb_encrypt(___input, ___output, ___ks, ___enc) \
      LP4NR(0x356a, DES_ecb_encrypt , const_DES_cblock *, ___input, a0, DES_cblock *, ___output, a1, DES_key_schedule *, ___ks, a2, int, ___enc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_encrypt1(___data, ___ks, ___enc) \
      LP3NR(0x3570, DES_encrypt1 , DES_LONG *, ___data, a0, DES_key_schedule *, ___ks, a1, int, ___enc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_encrypt2(___data, ___ks, ___enc) \
      LP3NR(0x3576, DES_encrypt2 , DES_LONG *, ___data, a0, DES_key_schedule *, ___ks, a1, int, ___enc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_encrypt3(___data, ___ks1, ___ks2, ___ks3) \
      LP4NR(0x357c, DES_encrypt3 , DES_LONG *, ___data, a0, DES_key_schedule *, ___ks1, a1, DES_key_schedule *, ___ks2, a2, DES_key_schedule *, ___ks3, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_decrypt3(___data, ___ks1, ___ks2, ___ks3) \
      LP4NR(0x3582, DES_decrypt3 , DES_LONG *, ___data, a0, DES_key_schedule *, ___ks1, a1, DES_key_schedule *, ___ks2, a2, DES_key_schedule *, ___ks3, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_ede3_cbc_encrypt(___input, ___output, ___length, ___ks1, ___ks2, ___ks3, ___ivec, ___enc) \
      LP8NR(0x3588, DES_ede3_cbc_encrypt , const unsigned char *, ___input, a0, unsigned char *, ___output, a1, long, ___length, d0, DES_key_schedule *, ___ks1, a2, DES_key_schedule *, ___ks2, a3, DES_key_schedule *, ___ks3, d1, DES_cblock *, ___ivec, d2, int, ___enc, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_ede3_cfb64_encrypt(___in, ___out, ___length, ___ks1, ___ks2, ___ks3, ___ivec, ___num, ___enc) \
      LP9NR(0x3594, DES_ede3_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, DES_key_schedule *, ___ks1, a2, DES_key_schedule *, ___ks2, a3, DES_key_schedule *, ___ks3, d1, DES_cblock *, ___ivec, d2, int *, ___num, d3, int, ___enc, d4,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_ede3_cfb_encrypt(___in, ___out, ___numbits, ___length, ___ks1, ___ks2, ___ks3, ___ivec, ___enc) \
      LP9NR(0x359a, DES_ede3_cfb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, int, ___numbits, d0, long, ___length, d1, DES_key_schedule *, ___ks1, a2, DES_key_schedule *, ___ks2, a3, DES_key_schedule *, ___ks3, d2, DES_cblock *, ___ivec, d3, int, ___enc, d4,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_ede3_ofb64_encrypt(___in, ___out, ___length, ___ks1, ___ks2, ___ks3, ___ivec, ___num) \
      LP8NR(0x35a0, DES_ede3_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, DES_key_schedule *, ___ks1, a2, DES_key_schedule *, ___ks2, a3, DES_key_schedule *, ___ks3, d1, DES_cblock *, ___ivec, d2, int *, ___num, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_fcrypt(___buf, ___salt, ___ret) \
      LP3(0x35ac, char *, DES_fcrypt , const char *, ___buf, a0, const char *, ___salt, a1, char *, ___ret, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_crypt(___buf, ___salt) \
      LP2(0x35b2, char *, DES_crypt , const char *, ___buf, a0, const char *, ___salt, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_ofb_encrypt(___in, ___out, ___numbits, ___length, ___schedule, ___ivec) \
      LP6NR(0x35b8, DES_ofb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, int, ___numbits, d0, long, ___length, d1, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_pcbc_encrypt(___input, ___output, ___length, ___schedule, ___ivec, ___enc) \
      LP6NR(0x35be, DES_pcbc_encrypt , const unsigned char *, ___input, a0, unsigned char *, ___output, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_quad_cksum(___input, ___output, ___length, ___out_count, ___seed) \
      LP5(0x35c4, DES_LONG, DES_quad_cksum , const unsigned char *, ___input, a0, DES_cblock *, ___output, a1, long, ___length, d0, int, ___out_count, d1, DES_cblock *, ___seed, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_random_key(___ret) \
      LP1(0x35ca, int, DES_random_key , DES_cblock *, ___ret, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_set_odd_parity(___key) \
      LP1NR(0x35d0, DES_set_odd_parity , DES_cblock *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_check_key_parity(___key) \
      LP1(0x35d6, int, DES_check_key_parity , const_DES_cblock *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_is_weak_key(___key) \
      LP1(0x35dc, int, DES_is_weak_key , const_DES_cblock *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_set_key(___key, ___schedule) \
      LP2(0x35e2, int, DES_set_key , const_DES_cblock *, ___key, a0, DES_key_schedule *, ___schedule, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_key_sched(___key, ___schedule) \
      LP2(0x35e8, int, DES_key_sched , const_DES_cblock *, ___key, a0, DES_key_schedule *, ___schedule, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_set_key_checked(___key, ___schedule) \
      LP2(0x35ee, int, DES_set_key_checked , const_DES_cblock *, ___key, a0, DES_key_schedule *, ___schedule, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_set_key_unchecked(___key, ___schedule) \
      LP2NR(0x35f4, DES_set_key_unchecked , const_DES_cblock *, ___key, a0, DES_key_schedule *, ___schedule, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_string_to_key(___str, ___key) \
      LP2NR(0x35fa, DES_string_to_key , const char *, ___str, a0, DES_cblock *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_string_to_2keys(___str, ___key1, ___key2) \
      LP3NR(0x3600, DES_string_to_2keys , const char *, ___str, a0, DES_cblock *, ___key1, a1, DES_cblock *, ___key2, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_cfb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num, ___enc) \
      LP7NR(0x3606, DES_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DES_ofb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num) \
      LP6NR(0x360c, DES_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, DES_key_schedule *, ___schedule, a2, DES_cblock *, ___ivec, a3, int *, ___num, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_OpenSSL() \
      LP0(0x36f0, const DH_METHOD *, DH_OpenSSL ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_set_default_method(___meth) \
      LP1NR(0x36f6, DH_set_default_method , const DH_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get_default_method() \
      LP0(0x36fc, const DH_METHOD *, DH_get_default_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_set_method(___dh, ___meth) \
      LP2(0x3702, int, DH_set_method , DH *, ___dh, a0, const DH_METHOD *, ___meth, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_new_method(___engine) \
      LP1(0x3708, DH *, DH_new_method , ENGINE *, ___engine, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_new() \
      LP0(0x370e, DH *, DH_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_free(___dh) \
      LP1NR(0x3714, DH_free , DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_up_ref(___dh) \
      LP1(0x371a, int, DH_up_ref , DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_size(___dh) \
      LP1(0x3720, int, DH_size , const DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_set_ex_data(___d, ___idx, ___arg) \
      LP3(0x372c, int, DH_set_ex_data , DH *, ___d, a0, int, ___idx, d0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get_ex_data(___d, ___idx) \
      LP2(0x3732, void *, DH_get_ex_data , DH *, ___d, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_generate_parameters(___prime_len, ___generator, ___callback, ___cb_arg) \
      LP4FP(0x3738, DH *, DH_generate_parameters , int, ___prime_len, d0, int, ___generator, d1, __fpt, ___callback, a0, void *, ___cb_arg, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(int,int,void *), 0, 0, 0, 0, 0, 0)

#define DH_check(___dh, ___codes) \
      LP2(0x373e, int, DH_check , const DH *, ___dh, a0, int *, ___codes, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_generate_key(___dh) \
      LP1(0x3744, int, DH_generate_key , DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_compute_key(___key, ___pub_key, ___dh) \
      LP3(0x374a, int, DH_compute_key , unsigned char *, ___key, a0, const BIGNUM *, ___pub_key, a1, DH *, ___dh, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DHparams(___a, ___pp, ___length) \
      LP3(0x3750, DH *, d2i_DHparams , DH **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DHparams(___a, ___pp) \
      LP2(0x3756, int, i2d_DHparams , const DH *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DHparams_print(___bp, ___x) \
      LP2(0x375c, int, DHparams_print , BIO *, ___bp, a0, const DH *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_DH_strings() \
      LP0(0x3762, int, ERR_load_DH_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_SIG_new() \
      LP0(0x3768, DSA_SIG *, DSA_SIG_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_SIG_free(___a) \
      LP1NR(0x376e, DSA_SIG_free , DSA_SIG *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DSA_SIG(___a, ___pp) \
      LP2(0x3774, int, i2d_DSA_SIG , const DSA_SIG *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DSA_SIG(___v, ___pp, ___length) \
      LP3(0x377a, DSA_SIG *, d2i_DSA_SIG , DSA_SIG **, ___v, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_do_sign(___dgst, ___dlen, ___dsa) \
      LP3(0x3780, DSA_SIG *, DSA_do_sign , const unsigned char *, ___dgst, a0, int, ___dlen, d0, DSA *, ___dsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_do_verify(___dgst, ___dgst_len, ___sig, ___dsa) \
      LP4(0x3786, int, DSA_do_verify , const unsigned char *, ___dgst, a0, int, ___dgst_len, d0, DSA_SIG *, ___sig, a1, DSA *, ___dsa, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_OpenSSL() \
      LP0(0x378c, const DSA_METHOD *, DSA_OpenSSL ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_set_default_method(___a) \
      LP1NR(0x3792, DSA_set_default_method , const DSA_METHOD *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_get_default_method() \
      LP0(0x3798, const DSA_METHOD *, DSA_get_default_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_set_method(___dsa, ___a) \
      LP2(0x379e, int, DSA_set_method , DSA *, ___dsa, a0, const DSA_METHOD *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_new() \
      LP0(0x37a4, DSA *, DSA_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_new_method(___engine) \
      LP1(0x37aa, DSA *, DSA_new_method , ENGINE *, ___engine, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_free(___r) \
      LP1NR(0x37b0, DSA_free , DSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_up_ref(___r) \
      LP1(0x37b6, int, DSA_up_ref , DSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_size(___a) \
      LP1(0x37bc, int, DSA_size , const DSA *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_sign_setup(___dsa, ___ctx_in, ___kinvp, ___rp) \
      LP4(0x37c2, int, DSA_sign_setup , DSA *, ___dsa, a0, BN_CTX *, ___ctx_in, a1, BIGNUM **, ___kinvp, a2, BIGNUM **, ___rp, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_sign(___type, ___dgst, ___dlen, ___sig, ___siglen, ___dsa) \
      LP6(0x37c8, int, DSA_sign , int, ___type, d0, const unsigned char *, ___dgst, a0, int, ___dlen, d1, unsigned char *, ___sig, a1, unsigned int *, ___siglen, a2, DSA *, ___dsa, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_verify(___type, ___dgst, ___dgst_len, ___sigbuf, ___siglen, ___dsa) \
      LP6(0x37ce, int, DSA_verify , int, ___type, d0, const unsigned char *, ___dgst, a0, int, ___dgst_len, d1, const unsigned char *, ___sigbuf, a1, int, ___siglen, d2, DSA *, ___dsa, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_set_ex_data(___d, ___idx, ___arg) \
      LP3(0x37da, int, DSA_set_ex_data , DSA *, ___d, a0, int, ___idx, d0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_get_ex_data(___d, ___idx) \
      LP2(0x37e0, void *, DSA_get_ex_data , DSA *, ___d, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DSAPublicKey(___a, ___pp, ___length) \
      LP3(0x37e6, DSA *, d2i_DSAPublicKey , DSA **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DSAPrivateKey(___a, ___pp, ___length) \
      LP3(0x37ec, DSA *, d2i_DSAPrivateKey , DSA **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DSAparams(___a, ___pp, ___length) \
      LP3(0x37f2, DSA *, d2i_DSAparams , DSA **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_generate_parameters(___bits, ___seed, ___seed_len, ___counter_ret, ___h_ret, ___callback, ___cb_arg) \
      LP7FP(0x37f8, DSA *, DSA_generate_parameters , int, ___bits, d0, unsigned char *, ___seed, a0, int, ___seed_len, d1, int *, ___counter_ret, a1, unsigned long *, ___h_ret, a2, __fpt, ___callback, a3, void *, ___cb_arg, d2,\
      , AMISSL_BASE_NAME, void (*__fpt)(int,int,void *), 0, 0, 0, 0, 0, 0)

#define DSA_generate_key(___a) \
      LP1(0x37fe, int, DSA_generate_key , DSA *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DSAPublicKey(___a, ___pp) \
      LP2(0x3804, int, i2d_DSAPublicKey , const DSA *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DSAPrivateKey(___a, ___pp) \
      LP2(0x380a, int, i2d_DSAPrivateKey , const DSA *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DSAparams(___a, ___pp) \
      LP2(0x3810, int, i2d_DSAparams , const DSA *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSAparams_print(___bp, ___x) \
      LP2(0x3816, int, DSAparams_print , BIO *, ___bp, a0, const DSA *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_print(___bp, ___x, ___off) \
      LP3(0x381c, int, DSA_print , BIO *, ___bp, a0, const DSA *, ___x, a1, int, ___off, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_dup_DH(___r) \
      LP1(0x3822, DH *, DSA_dup_DH , const DSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_DSA_strings() \
      LP0(0x3828, int, ERR_load_DSA_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IDEA_options() \
      LP0(0x382e, const char *, IDEA_options ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IDEA_ecb_encrypt(___in, ___out, ___ks) \
      LP3NR(0x3834, IDEA_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, IDEA_KEY_SCHEDULE *, ___ks, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IDEA_set_encrypt_key(___key, ___ks) \
      LP2NR(0x383a, IDEA_set_encrypt_key , const unsigned char *, ___key, a0, IDEA_KEY_SCHEDULE *, ___ks, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IDEA_set_decrypt_key(___ek, ___dk) \
      LP2NR(0x3840, IDEA_set_decrypt_key , IDEA_KEY_SCHEDULE *, ___ek, a0, IDEA_KEY_SCHEDULE *, ___dk, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IDEA_cbc_encrypt(___in, ___out, ___length, ___ks, ___iv, ___enc) \
      LP6NR(0x3846, IDEA_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, IDEA_KEY_SCHEDULE *, ___ks, a2, unsigned char *, ___iv, a3, int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IDEA_cfb64_encrypt(___in, ___out, ___length, ___ks, ___iv, ___num, ___enc) \
      LP7NR(0x384c, IDEA_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, IDEA_KEY_SCHEDULE *, ___ks, a2, unsigned char *, ___iv, a3, int *, ___num, d1, int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IDEA_ofb64_encrypt(___in, ___out, ___length, ___ks, ___iv, ___num) \
      LP6NR(0x3852, IDEA_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, IDEA_KEY_SCHEDULE *, ___ks, a2, unsigned char *, ___iv, a3, int *, ___num, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IDEA_encrypt(___in, ___ks) \
      LP2NR(0x3858, IDEA_encrypt , unsigned long *, ___in, a0, IDEA_KEY_SCHEDULE *, ___ks, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD2_options() \
      LP0(0x385e, const char *, MD2_options ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD2_Init(___c) \
      LP1(0x3864, int, MD2_Init , MD2_CTX *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD2_Update(___c, ___data, ___len) \
      LP3(0x386a, int, MD2_Update , MD2_CTX *, ___c, a0, const unsigned char *, ___data, a1, unsigned long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD2_Final(___md, ___c) \
      LP2(0x3870, int, MD2_Final , unsigned char *, ___md, a0, MD2_CTX *, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD2(___d, ___n, ___md) \
      LP3(0x3876, unsigned char *, MD2 , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD4_Init(___c) \
      LP1(0x387c, int, MD4_Init , MD4_CTX *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD4_Update(___c, ___data, ___len) \
      LP3(0x3882, int, MD4_Update , MD4_CTX *, ___c, a0, const void *, ___data, a1, unsigned long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD4_Final(___md, ___c) \
      LP2(0x3888, int, MD4_Final , unsigned char *, ___md, a0, MD4_CTX *, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD4(___d, ___n, ___md) \
      LP3(0x388e, unsigned char *, MD4 , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD4_Transform(___c, ___b) \
      LP2NR(0x3894, MD4_Transform , MD4_CTX *, ___c, a0, const unsigned char *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD5_Init(___c) \
      LP1(0x389a, int, MD5_Init , MD5_CTX *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD5_Update(___c, ___data, ___len) \
      LP3(0x38a0, int, MD5_Update , MD5_CTX *, ___c, a0, const void *, ___data, a1, unsigned long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD5_Final(___md, ___c) \
      LP2(0x38a6, int, MD5_Final , unsigned char *, ___md, a0, MD5_CTX *, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD5(___d, ___n, ___md) \
      LP3(0x38ac, unsigned char *, MD5 , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MD5_Transform(___c, ___b) \
      LP2NR(0x38b2, MD5_Transform , MD5_CTX *, ___c, a0, const unsigned char *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MDC2_Init(___c) \
      LP1(0x38b8, int, MDC2_Init , MDC2_CTX *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MDC2_Update(___c, ___data, ___len) \
      LP3(0x38be, int, MDC2_Update , MDC2_CTX *, ___c, a0, const unsigned char *, ___data, a1, unsigned long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MDC2_Final(___md, ___c) \
      LP2(0x38c4, int, MDC2_Final , unsigned char *, ___md, a0, MDC2_CTX *, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define MDC2(___d, ___n, ___md) \
      LP3(0x38ca, unsigned char *, MDC2 , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC2_set_key(___key, ___len, ___data, ___bits) \
      LP4NR(0x38d0, RC2_set_key , RC2_KEY *, ___key, a0, int, ___len, d0, const unsigned char *, ___data, a1, int, ___bits, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC2_ecb_encrypt(___in, ___out, ___key, ___enc) \
      LP4NR(0x38d6, RC2_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, RC2_KEY *, ___key, a2, int, ___enc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC2_encrypt(___data, ___key) \
      LP2NR(0x38dc, RC2_encrypt , unsigned long *, ___data, a0, RC2_KEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC2_decrypt(___data, ___key) \
      LP2NR(0x38e2, RC2_decrypt , unsigned long *, ___data, a0, RC2_KEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC2_cbc_encrypt(___in, ___out, ___length, ___ks, ___iv, ___enc) \
      LP6NR(0x38e8, RC2_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, RC2_KEY *, ___ks, a2, unsigned char *, ___iv, a3, int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC2_cfb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num, ___enc) \
      LP7NR(0x38ee, RC2_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, RC2_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC2_ofb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num) \
      LP6NR(0x38f4, RC2_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, RC2_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC4_options() \
      LP0(0x38fa, const char *, RC4_options ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC4_set_key(___key, ___len, ___data) \
      LP3NR(0x3900, RC4_set_key , RC4_KEY *, ___key, a0, int, ___len, d0, const unsigned char *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC4(___key, ___len, ___indata, ___outdata) \
      LP4NR(0x3906, RC4 , RC4_KEY *, ___key, a0, unsigned long, ___len, d0, const unsigned char *, ___indata, a1, unsigned char *, ___outdata, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC5_32_set_key(___key, ___len, ___data, ___rounds) \
      LP4NR(0x390c, RC5_32_set_key , RC5_32_KEY *, ___key, a0, int, ___len, d0, const unsigned char *, ___data, a1, int, ___rounds, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC5_32_ecb_encrypt(___in, ___out, ___key, ___enc) \
      LP4NR(0x3912, RC5_32_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, RC5_32_KEY *, ___key, a2, int, ___enc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC5_32_encrypt(___data, ___key) \
      LP2NR(0x3918, RC5_32_encrypt , unsigned long *, ___data, a0, RC5_32_KEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC5_32_decrypt(___data, ___key) \
      LP2NR(0x391e, RC5_32_decrypt , unsigned long *, ___data, a0, RC5_32_KEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC5_32_cbc_encrypt(___in, ___out, ___length, ___ks, ___iv, ___enc) \
      LP6NR(0x3924, RC5_32_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, RC5_32_KEY *, ___ks, a2, unsigned char *, ___iv, a3, int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC5_32_cfb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num, ___enc) \
      LP7NR(0x392a, RC5_32_cfb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, RC5_32_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RC5_32_ofb64_encrypt(___in, ___out, ___length, ___schedule, ___ivec, ___num) \
      LP6NR(0x3930, RC5_32_ofb64_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, long, ___length, d0, RC5_32_KEY *, ___schedule, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RIPEMD160_Init(___c) \
      LP1(0x3936, int, RIPEMD160_Init , RIPEMD160_CTX *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RIPEMD160_Update(___c, ___data, ___len) \
      LP3(0x393c, int, RIPEMD160_Update , RIPEMD160_CTX *, ___c, a0, const void *, ___data, a1, unsigned long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RIPEMD160_Final(___md, ___c) \
      LP2(0x3942, int, RIPEMD160_Final , unsigned char *, ___md, a0, RIPEMD160_CTX *, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RIPEMD160(___d, ___n, ___md) \
      LP3(0x3948, unsigned char *, RIPEMD160 , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RIPEMD160_Transform(___c, ___b) \
      LP2NR(0x394e, RIPEMD160_Transform , RIPEMD160_CTX *, ___c, a0, const unsigned char *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_new() \
      LP0(0x3954, RSA *, RSA_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_new_method(___engine) \
      LP1(0x395a, RSA *, RSA_new_method , ENGINE *, ___engine, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_size(___a) \
      LP1(0x3960, int, RSA_size , const RSA *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_generate_key(___bits, ___e, ___callback, ___cb_arg) \
      LP4FP(0x3966, RSA *, RSA_generate_key , int, ___bits, d0, unsigned long, ___e, d1, __fpt, ___callback, a0, void *, ___cb_arg, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(int,int,void *), 0, 0, 0, 0, 0, 0)

#define RSA_check_key(___a) \
      LP1(0x396c, int, RSA_check_key , const RSA *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_public_encrypt(___flen, ___from, ___to, ___rsa, ___padding) \
      LP5(0x3972, int, RSA_public_encrypt , int, ___flen, d0, const unsigned char *, ___from, a0, unsigned char *, ___to, a1, RSA *, ___rsa, a2, int, ___padding, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_private_encrypt(___flen, ___from, ___to, ___rsa, ___padding) \
      LP5(0x3978, int, RSA_private_encrypt , int, ___flen, d0, const unsigned char *, ___from, a0, unsigned char *, ___to, a1, RSA *, ___rsa, a2, int, ___padding, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_public_decrypt(___flen, ___from, ___to, ___rsa, ___padding) \
      LP5(0x397e, int, RSA_public_decrypt , int, ___flen, d0, const unsigned char *, ___from, a0, unsigned char *, ___to, a1, RSA *, ___rsa, a2, int, ___padding, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_private_decrypt(___flen, ___from, ___to, ___rsa, ___padding) \
      LP5(0x3984, int, RSA_private_decrypt , int, ___flen, d0, const unsigned char *, ___from, a0, unsigned char *, ___to, a1, RSA *, ___rsa, a2, int, ___padding, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_free(___r) \
      LP1NR(0x398a, RSA_free , RSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_up_ref(___r) \
      LP1(0x3990, int, RSA_up_ref , RSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_flags(___r) \
      LP1(0x3996, int, RSA_flags , const RSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_set_default_method(___meth) \
      LP1NR(0x399c, RSA_set_default_method , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get_default_method() \
      LP0(0x39a2, const RSA_METHOD *, RSA_get_default_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get_method(___rsa) \
      LP1(0x39a8, const RSA_METHOD *, RSA_get_method , const RSA *, ___rsa, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_set_method(___rsa, ___meth) \
      LP2(0x39ae, int, RSA_set_method , RSA *, ___rsa, a0, const RSA_METHOD *, ___meth, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_null_method() \
      LP0(0x39ba, const RSA_METHOD *, RSA_null_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_RSAPublicKey(___a, ___in, ___len) \
      LP3(0x39c0, RSA *, d2i_RSAPublicKey , RSA **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_RSAPublicKey(___a, ___out) \
      LP2(0x39c6, int, i2d_RSAPublicKey , const RSA *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSAPublicKey_it() \
      LP0(0x39cc, const ASN1_ITEM *, RSAPublicKey_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_RSAPrivateKey(___a, ___in, ___len) \
      LP3(0x39d2, RSA *, d2i_RSAPrivateKey , RSA **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_RSAPrivateKey(___a, ___out) \
      LP2(0x39d8, int, i2d_RSAPrivateKey , const RSA *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSAPrivateKey_it() \
      LP0(0x39de, const ASN1_ITEM *, RSAPrivateKey_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_print(___bp, ___r, ___offset) \
      LP3(0x39e4, int, RSA_print , BIO *, ___bp, a0, const RSA *, ___r, a1, int, ___offset, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_sign(___type, ___m, ___m_length, ___sigret, ___siglen, ___rsa) \
      LP6(0x3a02, int, RSA_sign , int, ___type, d0, const unsigned char *, ___m, a0, unsigned int, ___m_length, d1, unsigned char *, ___sigret, a1, unsigned int *, ___siglen, a2, RSA *, ___rsa, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_verify(___type, ___m, ___m_length, ___sigbuf, ___siglen, ___rsa) \
      LP6(0x3a08, int, RSA_verify , int, ___type, d0, const unsigned char *, ___m, a0, unsigned int, ___m_length, d1, unsigned char *, ___sigbuf, a1, unsigned int, ___siglen, d2, RSA *, ___rsa, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_sign_ASN1_OCTET_STRING(___type, ___m, ___m_length, ___sigret, ___siglen, ___rsa) \
      LP6(0x3a0e, int, RSA_sign_ASN1_OCTET_STRING , int, ___type, d0, const unsigned char *, ___m, a0, unsigned int, ___m_length, d1, unsigned char *, ___sigret, a1, unsigned int *, ___siglen, a2, RSA *, ___rsa, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_verify_ASN1_OCTET_STRING(___type, ___m, ___m_length, ___sigbuf, ___siglen, ___rsa) \
      LP6(0x3a14, int, RSA_verify_ASN1_OCTET_STRING , int, ___type, d0, const unsigned char *, ___m, a0, unsigned int, ___m_length, d1, unsigned char *, ___sigbuf, a1, unsigned int, ___siglen, d2, RSA *, ___rsa, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_blinding_on(___rsa, ___ctx) \
      LP2(0x3a1a, int, RSA_blinding_on , RSA *, ___rsa, a0, BN_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_blinding_off(___rsa) \
      LP1NR(0x3a20, RSA_blinding_off , RSA *, ___rsa, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_add_PKCS1_type_1(___to, ___tlen, ___f, ___fl) \
      LP4(0x3a26, int, RSA_padding_add_PKCS1_type_1 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_check_PKCS1_type_1(___to, ___tlen, ___f, ___fl, ___rsa_len) \
      LP5(0x3a2c, int, RSA_padding_check_PKCS1_type_1 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1, int, ___rsa_len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_add_PKCS1_type_2(___to, ___tlen, ___f, ___fl) \
      LP4(0x3a32, int, RSA_padding_add_PKCS1_type_2 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_check_PKCS1_type_2(___to, ___tlen, ___f, ___fl, ___rsa_len) \
      LP5(0x3a38, int, RSA_padding_check_PKCS1_type_2 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1, int, ___rsa_len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_add_PKCS1_OAEP(___to, ___tlen, ___f, ___fl, ___p, ___pl) \
      LP6(0x3a3e, int, RSA_padding_add_PKCS1_OAEP , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1, const unsigned char *, ___p, a2, int, ___pl, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_check_PKCS1_OAEP(___to, ___tlen, ___f, ___fl, ___rsa_len, ___p, ___pl) \
      LP7(0x3a44, int, RSA_padding_check_PKCS1_OAEP , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1, int, ___rsa_len, d2, const unsigned char *, ___p, a2, int, ___pl, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_add_SSLv23(___to, ___tlen, ___f, ___fl) \
      LP4(0x3a4a, int, RSA_padding_add_SSLv23 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_check_SSLv23(___to, ___tlen, ___f, ___fl, ___rsa_len) \
      LP5(0x3a50, int, RSA_padding_check_SSLv23 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1, int, ___rsa_len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_add_none(___to, ___tlen, ___f, ___fl) \
      LP4(0x3a56, int, RSA_padding_add_none , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_check_none(___to, ___tlen, ___f, ___fl, ___rsa_len) \
      LP5(0x3a5c, int, RSA_padding_check_none , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___f, a1, int, ___fl, d1, int, ___rsa_len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_set_ex_data(___r, ___idx, ___arg) \
      LP3(0x3a68, int, RSA_set_ex_data , RSA *, ___r, a0, int, ___idx, d0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get_ex_data(___r, ___idx) \
      LP2(0x3a6e, void *, RSA_get_ex_data , const RSA *, ___r, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSAPublicKey_dup(___rsa) \
      LP1(0x3a74, RSA *, RSAPublicKey_dup , RSA *, ___rsa, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSAPrivateKey_dup(___rsa) \
      LP1(0x3a7a, RSA *, RSAPrivateKey_dup , RSA *, ___rsa, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_RSA_strings() \
      LP0(0x3a80, int, ERR_load_RSA_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA1_Init(___c) \
      LP1(0x3aa4, int, SHA1_Init , SHA_CTX *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA1_Update(___c, ___data, ___len) \
      LP3(0x3aaa, int, SHA1_Update , SHA_CTX *, ___c, a0, const void *, ___data, a1, unsigned long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA1_Final(___md, ___c) \
      LP2(0x3ab0, int, SHA1_Final , unsigned char *, ___md, a0, SHA_CTX *, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA1(___d, ___n, ___md) \
      LP3(0x3ab6, unsigned char *, SHA1 , const unsigned char *, ___d, a0, unsigned long, ___n, d0, unsigned char *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA1_Transform(___c, ___data) \
      LP2NR(0x3abc, SHA1_Transform , SHA_CTX *, ___c, a0, const unsigned char *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define HMAC_CTX_set_flags(___ctx, ___flags) \
      LP2NR(0x3ace, HMAC_CTX_set_flags , HMAC_CTX *, ___ctx, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_check_ca(___x) \
      LP1(0x3ad4, int, X509_check_ca , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROXY_POLICY_new() \
      LP0(0x3ada, PROXY_POLICY *, PROXY_POLICY_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROXY_POLICY_free(___a) \
      LP1NR(0x3ae0, PROXY_POLICY_free , PROXY_POLICY *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PROXY_POLICY(___a, ___in, ___len) \
      LP3(0x3ae6, PROXY_POLICY *, d2i_PROXY_POLICY , PROXY_POLICY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PROXY_POLICY(___a, ___out) \
      LP2(0x3aec, int, i2d_PROXY_POLICY , PROXY_POLICY *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROXY_POLICY_it() \
      LP0(0x3af2, const ASN1_ITEM *, PROXY_POLICY_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROXY_CERT_INFO_EXTENSION_new() \
      LP0(0x3af8, PROXY_CERT_INFO_EXTENSION *, PROXY_CERT_INFO_EXTENSION_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROXY_CERT_INFO_EXTENSION_free(___a) \
      LP1NR(0x3afe, PROXY_CERT_INFO_EXTENSION_free , PROXY_CERT_INFO_EXTENSION *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PROXY_CERT_INFO_EXTENSION(___a, ___in, ___len) \
      LP3(0x3b04, PROXY_CERT_INFO_EXTENSION *, d2i_PROXY_CERT_INFO_EXTENSION , PROXY_CERT_INFO_EXTENSION **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PROXY_CERT_INFO_EXTENSION(___a, ___out) \
      LP2(0x3b0a, int, i2d_PROXY_CERT_INFO_EXTENSION , PROXY_CERT_INFO_EXTENSION *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROXY_CERT_INFO_EXTENSION_it() \
      LP0(0x3b10, const ASN1_ITEM *, PROXY_CERT_INFO_EXTENSION_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define FIPS_mode() \
      LP0(0x3b16, int, FIPS_mode ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_exp_mont_consttime(___rr, ___a, ___p, ___m, ___ctx, ___in_mont) \
      LP6(0x3b22, int, BN_mod_exp_mont_consttime , BIGNUM *, ___rr, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, const BIGNUM *, ___m, a3, BN_CTX *, ___ctx, d0, BN_MONT_CTX *, ___in_mont, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_MONT_CTX_set_locked(___pmont, ___lock, ___mod, ___ctx) \
      LP4(0x3b28, BN_MONT_CTX *, BN_MONT_CTX_set_locked , BN_MONT_CTX **, ___pmont, a0, CRYPTO_RWLOCK *, ___lock, a1, const BIGNUM *, ___mod, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS1_MGF1(___mask, ___len, ___seed, ___seedlen, ___dgst) \
      LP5(0x3b2e, int, PKCS1_MGF1 , unsigned char *, ___mask, a0, long, ___len, d0, const unsigned char *, ___seed, a1, long, ___seedlen, d1, const EVP_MD *, ___dgst, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_add_X931(___to, ___tlen, ___from, ___flen) \
      LP4(0x3b34, int, RSA_padding_add_X931 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___from, a1, int, ___flen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_check_X931(___to, ___tlen, ___from, ___flen, ___num) \
      LP5(0x3b3a, int, RSA_padding_check_X931 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___from, a1, int, ___flen, d1, int, ___num, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_X931_hash_id(___nid) \
      LP1(0x3b40, int, RSA_X931_hash_id , int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_verify_PKCS1_PSS(___rsa, ___mHash, ___Hash, ___EM, ___sLen) \
      LP5(0x3b46, int, RSA_verify_PKCS1_PSS , RSA *, ___rsa, a0, const unsigned char *, ___mHash, a1, const EVP_MD *, ___Hash, a2, const unsigned char *, ___EM, a3, int, ___sLen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_add_PKCS1_PSS(___rsa, ___EM, ___mHash, ___Hash, ___sLen) \
      LP5(0x3b4c, int, RSA_padding_add_PKCS1_PSS , RSA *, ___rsa, a0, unsigned char *, ___EM, a1, const unsigned char *, ___mHash, a2, const EVP_MD *, ___Hash, a3, int, ___sLen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sha224() \
      LP0(0x3b52, const EVP_MD *, EVP_sha224 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sha256() \
      LP0(0x3b58, const EVP_MD *, EVP_sha256 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sha384() \
      LP0(0x3b5e, const EVP_MD *, EVP_sha384 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sha512() \
      LP0(0x3b64, const EVP_MD *, EVP_sha512 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_add(___r, ___a, ___b) \
      LP3(0x3b6a, int, BN_GF2m_add , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_arr2poly(___p, ___a) \
      LP2(0x3b70, int, BN_GF2m_arr2poly , const int *, ___p, a0, BIGNUM *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod(___r, ___a, ___p) \
      LP3(0x3b76, int, BN_GF2m_mod , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_mul(___r, ___a, ___b, ___p, ___ctx) \
      LP5(0x3b7c, int, BN_GF2m_mod_mul , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___p, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_sqr(___r, ___a, ___p, ___ctx) \
      LP4(0x3b82, int, BN_GF2m_mod_sqr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_inv(___r, ___b, ___p, ___ctx) \
      LP4(0x3b88, int, BN_GF2m_mod_inv , BIGNUM *, ___r, a0, const BIGNUM *, ___b, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_div(___r, ___a, ___b, ___p, ___ctx) \
      LP5(0x3b8e, int, BN_GF2m_mod_div , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___p, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_exp(___r, ___a, ___b, ___p, ___ctx) \
      LP5(0x3b94, int, BN_GF2m_mod_exp , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const BIGNUM *, ___p, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_sqrt(___r, ___a, ___p, ___ctx) \
      LP4(0x3b9a, int, BN_GF2m_mod_sqrt , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_solve_quad(___r, ___a, ___p, ___ctx) \
      LP4(0x3ba0, int, BN_GF2m_mod_solve_quad , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_generate_prime_ex(___ret, ___bits, ___safe, ___add, ___rem, ___cb) \
      LP6(0x3ba6, int, BN_generate_prime_ex , BIGNUM *, ___ret, a0, int, ___bits, d0, int, ___safe, d1, const BIGNUM *, ___add, a1, const BIGNUM *, ___rem, a2, BN_GENCB *, ___cb, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_is_prime_ex(___p, ___nchecks, ___ctx, ___cb) \
      LP4(0x3bac, int, BN_is_prime_ex , const BIGNUM *, ___p, a0, int, ___nchecks, d0, BN_CTX *, ___ctx, a1, BN_GENCB *, ___cb, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_set_negative(___b, ___n) \
      LP2NR(0x3bb2, BN_set_negative , BIGNUM *, ___b, a0, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_degree(___group) \
      LP1(0x3bb8, int, EC_GROUP_get_degree , const EC_GROUP *, ___group, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GF2m_simple_method() \
      LP0(0x3bbe, const EC_METHOD *, EC_GF2m_simple_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_set_curve_GF2m(___group, ___p, ___a, ___b, ___ctx) \
      LP5(0x3bc4, int, EC_GROUP_set_curve_GF2m , EC_GROUP *, ___group, a0, const BIGNUM *, ___p, a1, const BIGNUM *, ___a, a2, const BIGNUM *, ___b, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_curve_GF2m(___group, ___p, ___a, ___b, ___ctx) \
      LP5(0x3bca, int, EC_GROUP_get_curve_GF2m , const EC_GROUP *, ___group, a0, BIGNUM *, ___p, a1, BIGNUM *, ___a, a2, BIGNUM *, ___b, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_set_affine_coordinates_GF2m(___group, ___point, ___x, ___y, ___ctx) \
      LP5(0x3bd0, int, EC_POINT_set_affine_coordinates_GF2m , const EC_GROUP *, ___group, a0, EC_POINT *, ___point, a1, const BIGNUM *, ___x, a2, const BIGNUM *, ___y, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_get_affine_coordinates_GF2m(___group, ___point, ___x, ___y, ___ctx) \
      LP5(0x3bd6, int, EC_POINT_get_affine_coordinates_GF2m , const EC_GROUP *, ___group, a0, const EC_POINT *, ___point, a1, BIGNUM *, ___x, a2, BIGNUM *, ___y, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_get_builtin_curves(___r, ___nitems) \
      LP2(0x3bdc, size_t, EC_get_builtin_curves , EC_builtin_curve *, ___r, a0, size_t, ___nitems, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_new_by_curve_name(___nid) \
      LP1(0x3be2, EC_GROUP *, EC_GROUP_new_by_curve_name , int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_check(___group, ___ctx) \
      LP2(0x3be8, int, EC_GROUP_check , const EC_GROUP *, ___group, a0, BN_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_generate_parameters_ex(___dsa, ___bits, ___seed, ___seed_len, ___counter_ret, ___h_ret, ___cb) \
      LP7(0x3bf4, int, DSA_generate_parameters_ex , DSA *, ___dsa, a0, int, ___bits, d0, unsigned char *, ___seed, a1, int, ___seed_len, d1, int *, ___counter_ret, a2, unsigned long *, ___h_ret, a3, BN_GENCB *, ___cb, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_new_by_curve_name(___nid) \
      LP1(0x3c00, EC_KEY *, EC_KEY_new_by_curve_name , int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_generate_key(___key) \
      LP1(0x3c06, int, EC_KEY_generate_key , EC_KEY *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_free(___key) \
      LP1NR(0x3c0c, EC_KEY_free , EC_KEY *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_SIG_free(___a) \
      LP1NR(0x3c12, ECDSA_SIG_free , ECDSA_SIG *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_do_sign(___dgst, ___dlen, ___eckey) \
      LP3(0x3c18, ECDSA_SIG *, ECDSA_do_sign , const unsigned char *, ___dgst, a0, int, ___dlen, d0, EC_KEY *, ___eckey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_do_verify(___dgst, ___dgst_len, ___sig, ___eckey) \
      LP4(0x3c1e, int, ECDSA_do_verify , const unsigned char *, ___dgst, a0, int, ___dgst_len, d0, const ECDSA_SIG *, ___sig, a1, EC_KEY *, ___eckey, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_new() \
      LP0(0x3c24, EC_KEY *, EC_KEY_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_set_group(___eckey, ___group) \
      LP2(0x3c2a, int, EC_KEY_set_group , EC_KEY *, ___eckey, a0, const EC_GROUP *, ___group, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_get0_group(___key) \
      LP1(0x3c30, const EC_GROUP *, EC_KEY_get0_group , const EC_KEY *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_check_key(___eckey) \
      LP1(0x3c36, int, EC_KEY_check_key , const EC_KEY *, ___eckey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_size(___eckey) \
      LP1(0x3c3c, int, ECDSA_size , const EC_KEY *, ___eckey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_sign(___type, ___dgst, ___dgstlen, ___sig, ___siglen, ___eckey) \
      LP6(0x3c42, int, ECDSA_sign , int, ___type, d0, const unsigned char *, ___dgst, a0, int, ___dgstlen, d1, unsigned char *, ___sig, a1, unsigned int *, ___siglen, a2, EC_KEY *, ___eckey, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_verify(___type, ___dgst, ___dgstlen, ___sig, ___siglen, ___eckey) \
      LP6(0x3c48, int, ECDSA_verify , int, ___type, d0, const unsigned char *, ___dgst, a0, int, ___dgstlen, d1, const unsigned char *, ___sig, a1, int, ___siglen, d2, EC_KEY *, ___eckey, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ECDSA_SIG(___v, ___pp, ___len) \
      LP3(0x3c4e, ECDSA_SIG *, d2i_ECDSA_SIG , ECDSA_SIG **, ___v, a0, const unsigned char **, ___pp, a1, long, ___len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ECDSA_SIG(___a, ___pp) \
      LP2(0x3c54, int, i2d_ECDSA_SIG , const ECDSA_SIG *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_generate_parameters_ex(___ret, ___prime_len, ___generator, ___cb) \
      LP4(0x3c5a, int, DH_generate_parameters_ex , DH *, ___ret, a0, int, ___prime_len, d0, int, ___generator, d1, BN_GENCB *, ___cb, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_METHOD_get_field_type(___meth) \
      LP1(0x3c60, int, EC_METHOD_get_field_type , const EC_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_get0_public_key(___eckey) \
      LP1(0x3c66, const EC_POINT *, EC_KEY_get0_public_key , const EC_KEY *, ___eckey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDH_compute_key(___out, ___outlen, ___pub_key, ___eckey, ___KDF) \
      LP5FP(0x3c6c, int, ECDH_compute_key , void *, ___out, a0, size_t, ___outlen, d0, const EC_POINT *, ___pub_key, a1, const EC_KEY *, ___eckey, a2, __fpt, ___KDF, a3,\
      , AMISSL_BASE_NAME, void *(*__fpt)(const void *,size_t,void *,size_t *), 0, 0, 0, 0, 0, 0)

#define EC_KEY_get0_private_key(___eckey) \
      LP1(0x3c72, const BIGNUM *, EC_KEY_get0_private_key , const EC_KEY *, ___eckey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_first() \
      LP0(0x3c78, ENGINE *, ENGINE_get_first ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_id(___e) \
      LP1(0x3c7e, const char *, ENGINE_get_id , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_name(___e) \
      LP1(0x3c84, const char *, ENGINE_get_name , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_next(___e) \
      LP1(0x3c8a, ENGINE *, ENGINE_get_next , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_free(___e) \
      LP1(0x3c90, int, ENGINE_free , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_new() \
      LP0(0x3c96, ENGINE *, ENGINE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_id(___e, ___id) \
      LP2(0x3c9c, int, ENGINE_set_id , ENGINE *, ___e, a0, const char *, ___id, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_name(___e, ___name) \
      LP2(0x3ca2, int, ENGINE_set_name , ENGINE *, ___e, a0, const char *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_add(___e) \
      LP1(0x3ca8, int, ENGINE_add , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_remove(___e) \
      LP1(0x3cae, int, ENGINE_remove , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_load_builtin_engines() \
      LP0NR(0x3cb4, ENGINE_load_builtin_engines ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_all_ciphers() \
      LP0NR(0x3cba, ENGINE_register_all_ciphers ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_nid(___cipher) \
      LP1(0x3cc0, int, EVP_CIPHER_nid , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_type(___md) \
      LP1(0x3cc6, int, EVP_MD_type , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_all_digests() \
      LP0NR(0x3ccc, ENGINE_register_all_digests ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_test_flags(___b, ___flags) \
      LP2(0x3cd2, int, BIO_test_flags , const BIO *, ___b, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_COMP_get_compression_methods() \
      LP0(0x3cd8, STACK_OF(SSL_COMP) *, SSL_COMP_get_compression_methods ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_generate_key_ex(___rsa, ___bits, ___e, ___cb) \
      LP4(0x3cde, int, RSA_generate_key_ex , RSA *, ___rsa, a0, int, ___bits, d0, BIGNUM *, ___e, a1, BN_GENCB *, ___cb, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_free(___param) \
      LP1NR(0x3ce4, X509_VERIFY_PARAM_free , X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set1_param(___ctx, ___pm) \
      LP2(0x3cea, int, X509_STORE_set1_param , X509_STORE *, ___ctx, a0, X509_VERIFY_PARAM *, ___pm, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_generate_nconf(___str, ___nconf) \
      LP2(0x3cf0, ASN1_TYPE *, ASN1_generate_nconf , const char *, ___str, a0, CONF *, ___nconf, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_ECPKParameters(___bp, ___x, ___cb, ___u) \
      LP4(0x3cf6, EC_GROUP *, PEM_read_bio_ECPKParameters , BIO *, ___bp, a0, EC_GROUP **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_dup(___ec_key) \
      LP1(0x3cfc, EC_KEY *, EC_KEY_dup , const EC_KEY *, ___ec_key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_set_callback(___b, ___callback) \
      LP2NR(0x3d02, BIO_set_callback , BIO *, ___b, a0, BIO_callback_fn, ___callback, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_set_callback_arg(___b, ___arg) \
      LP2NR(0x3d08, BIO_set_callback_arg , BIO *, ___b, a0, char *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_set_flags(___ctx, ___flags) \
      LP2NR(0x3d0e, EVP_MD_CTX_set_flags , EVP_MD_CTX *, ___ctx, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_set_flags(___b, ___flags) \
      LP2NR(0x3d14, BIO_set_flags , BIO *, ___b, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_set_flags(___ctx, ___flags) \
      LP2NR(0x3d1a, EVP_CIPHER_CTX_set_flags , EVP_CIPHER_CTX *, ___ctx, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_iv_length(___cipher) \
      LP1(0x3d20, int, EVP_CIPHER_iv_length , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_check_private_key(___x509, ___pkey) \
      LP2(0x3d26, int, X509_REQ_check_private_key , X509_REQ *, ___x509, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_EC_PUBKEY(___bp, ___x, ___cb, ___u) \
      LP4(0x3d2c, EC_KEY *, PEM_read_bio_EC_PUBKEY , BIO *, ___bp, a0, EC_KEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_ECPrivateKey(___bp, ___x, ___cb, ___u) \
      LP4(0x3d32, EC_KEY *, PEM_read_bio_ECPrivateKey , BIO *, ___bp, a0, EC_KEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_EC_PUBKEY(___bp, ___x) \
      LP2(0x3d38, int, PEM_write_bio_EC_PUBKEY , BIO *, ___bp, a0, EC_KEY *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_EC_PUBKEY_bio(___bp, ___eckey) \
      LP2(0x3d3e, EC_KEY *, d2i_EC_PUBKEY_bio , BIO *, ___bp, a0, EC_KEY **, ___eckey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_set_asn1_flag(___key, ___flag) \
      LP2NR(0x3d44, EC_KEY_set_asn1_flag , EC_KEY *, ___key, a0, int, ___flag, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_set_conv_form(___key, ___cform) \
      LP2NR(0x3d4a, EC_KEY_set_conv_form , EC_KEY *, ___key, a0, point_conversion_form_t, ___cform, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_print(___bp, ___x, ___off) \
      LP3(0x3d50, int, EC_KEY_print , BIO *, ___bp, a0, const EC_KEY *, ___x, a1, int, ___off, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ECPrivateKey_bio(___bp, ___eckey) \
      LP2(0x3d56, EC_KEY *, d2i_ECPrivateKey_bio , BIO *, ___bp, a0, EC_KEY **, ___eckey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_EC_PUBKEY_bio(___bp, ___eckey) \
      LP2(0x3d5c, int, i2d_EC_PUBKEY_bio , BIO *, ___bp, a0, EC_KEY *, ___eckey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_ECPrivateKey(___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
      LP7(0x3d62, int, PEM_write_bio_ECPrivateKey , BIO *, ___bp, a0, EC_KEY *, ___x, a1, const EVP_CIPHER *, ___enc, a2, unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_ECPKParameters(___bp, ___x) \
      LP2(0x3d68, int, PEM_write_bio_ECPKParameters , BIO *, ___bp, a0, const EC_GROUP *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ECPrivateKey_bio(___bp, ___eckey) \
      LP2(0x3d6e, int, i2d_ECPrivateKey_bio , BIO *, ___bp, a0, EC_KEY *, ___eckey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ECPKParameters(___a, ___out) \
      LP2(0x3d74, int, i2d_ECPKParameters , const EC_GROUP *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_set_asn1_flag(___group, ___flag) \
      LP2NR(0x3d7a, EC_GROUP_set_asn1_flag , EC_GROUP *, ___group, a0, int, ___flag, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_set_point_conversion_form(___group, ___form) \
      LP2NR(0x3d80, EC_GROUP_set_point_conversion_form , EC_GROUP *, ___group, a0, point_conversion_form_t, ___form, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_point_conversion_form(___group) \
      LP1(0x3d86, point_conversion_form_t, EC_GROUP_get_point_conversion_form , const EC_GROUP *, ___group, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECPKParameters_print(___bp, ___x, ___off) \
      LP3(0x3d8c, int, ECPKParameters_print , BIO *, ___bp, a0, const EC_GROUP *, ___x, a1, int, ___off, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_set_seed(___group, ___p, ___len) \
      LP3(0x3d92, size_t, EC_GROUP_set_seed , EC_GROUP *, ___group, a0, const unsigned char *, ___p, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ECPKParameters(___a, ___in, ___len) \
      LP3(0x3d98, EC_GROUP *, d2i_ECPKParameters , EC_GROUP **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_point2bn(___group, ___point, ___form, ___ret, ___ctx) \
      LP5(0x3d9e, BIGNUM *, EC_POINT_point2bn , const EC_GROUP *, ___group, a0, const EC_POINT *, ___point, a1, point_conversion_form_t, ___form, d0, BIGNUM *, ___ret, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get1_ocsp(___x) \
      LP1(0x3da4, STACK_OF(OPENSSL_STRING) *, X509_get1_ocsp , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_servername(___s, ___type) \
      LP2(0x3daa, const char *, SSL_get_servername , const SSL *, ___s, a0, const int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_SSL_CTX(___ssl, ___ctx) \
      LP2(0x3db0, SSL_CTX *, SSL_set_SSL_CTX , SSL *, ___ssl, a0, SSL_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_cookie_generate_cb(___ctx, ___app_gen_cookie_cb) \
      LP2NRFP(0x3db6, SSL_CTX_set_cookie_generate_cb , SSL_CTX *, ___ctx, a0, __fpt, ___app_gen_cookie_cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(SSL *ssl,unsigned char *cookie,unsigned int *cookie_len), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_cookie_verify_cb(___ctx, ___app_verify_cookie_cb) \
      LP2NRFP(0x3dbc, SSL_CTX_set_cookie_verify_cb , SSL_CTX *, ___ctx, a0, __fpt, ___app_verify_cookie_cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(SSL *,const unsigned char *,unsigned int), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_info_callback(___ctx, ___cb) \
      LP2NRFP(0x3dc2, SSL_CTX_set_info_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(const SSL *ssl,int type,int val), 0, 0, 0, 0, 0, 0)

#define BIO_new_dgram(___fd, ___close_flag) \
      LP2(0x3dce, BIO *, BIO_new_dgram , int, ___fd, d0, int, ___close_flag, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_servername_type(___s) \
      LP1(0x3dd4, int, SSL_get_servername_type , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_current_compression(___s) \
      LP1(0x3dda, const COMP_METHOD *, SSL_get_current_compression , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_current_expansion(___s) \
      LP1(0x3de0, const COMP_METHOD *, SSL_get_current_expansion , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_COMP_get_name(___comp) \
      LP1(0x3de6, const char *, SSL_COMP_get_name , const COMP_METHOD *, ___comp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_by_id(___id) \
      LP1(0x3dec, ENGINE *, ENGINE_by_id , const char *, ___id, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_client_cert_engine(___ctx, ___e) \
      LP2(0x3df2, int, SSL_CTX_set_client_cert_engine , SSL_CTX *, ___ctx, a0, ENGINE *, ___e, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA256(___d, ___n, ___md) \
      LP3(0x3e04, unsigned char *, SHA256 , const unsigned char *, ___d, a0, size_t, ___n, d0, unsigned char *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA512(___d, ___n, ___md) \
      LP3(0x3e0a, unsigned char *, SHA512 , const unsigned char *, ___d, a0, size_t, ___n, d0, unsigned char *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_ige_encrypt(___in, ___out, ___length, ___key, ___ivec, ___enc) \
      LP6NR(0x3e10, AES_ige_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const unsigned long, ___length, d0, const AES_KEY *, ___key, a2, unsigned char *, ___ivec, a3, const int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_precompute_mult(___key, ___ctx) \
      LP2(0x3e16, int, EC_KEY_precompute_mult , EC_KEY *, ___key, a0, BN_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_load_private_key(___e, ___key_id, ___ui_method, ___callback_data) \
      LP4(0x3e1c, EVP_PKEY *, ENGINE_load_private_key , ENGINE *, ___e, a0, const char *, ___key_id, a1, UI_METHOD *, ___ui_method, a2, void *, ___callback_data, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_load_public_key(___e, ___key_id, ___ui_method, ___callback_data) \
      LP4(0x3e22, EVP_PKEY *, ENGINE_load_public_key , ENGINE *, ___e, a0, const char *, ___key_id, a1, UI_METHOD *, ___ui_method, a2, void *, ___callback_data, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_ctrl_cmd(___e, ___cmd_name, ___i, ___p, ___f, ___cmd_optional) \
      LP6FP(0x3e28, int, ENGINE_ctrl_cmd , ENGINE *, ___e, a0, const char *, ___cmd_name, a1, long, ___i, a2, void *, ___p, a3, __fpt, ___f, d0, int, ___cmd_optional, d1,\
      , AMISSL_BASE_NAME, void (*__fpt)(void), 0, 0, 0, 0, 0, 0)

#define ENGINE_set_default(___e, ___flags) \
      LP2(0x3e2e, int, ENGINE_set_default , ENGINE *, ___e, a0, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_ctrl(___e, ___cmd, ___i, ___p, ___f) \
      LP5FP(0x3e34, int, ENGINE_ctrl , ENGINE *, ___e, a0, int, ___cmd, d0, long, ___i, d1, void *, ___p, a1, __fpt, ___f, a2,\
      , AMISSL_BASE_NAME, void (*__fpt)(void), 0, 0, 0, 0, 0, 0)

#define ENGINE_register_all_complete() \
      LP0(0x3e3a, int, ENGINE_register_all_complete ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_ctrl_cmd_string(___e, ___cmd_name, ___arg, ___cmd_optional) \
      LP4(0x3e40, int, ENGINE_ctrl_cmd_string , ENGINE *, ___e, a0, const char *, ___cmd_name, a1, const char *, ___arg, a2, int, ___cmd_optional, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_add0_policy(___param, ___policy) \
      LP2(0x3e46, int, X509_VERIFY_PARAM_add0_policy , X509_VERIFY_PARAM *, ___param, a0, ASN1_OBJECT *, ___policy, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set_purpose(___param, ___purpose) \
      LP2(0x3e4c, int, X509_VERIFY_PARAM_set_purpose , X509_VERIFY_PARAM *, ___param, a0, int, ___purpose, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set_flags(___param, ___flags) \
      LP2(0x3e52, int, X509_VERIFY_PARAM_set_flags , X509_VERIFY_PARAM *, ___param, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_new() \
      LP0(0x3e58, X509_VERIFY_PARAM *, X509_VERIFY_PARAM_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_POLICY_NODE_print(___out, ___node, ___indent) \
      LP3NR(0x3e5e, X509_POLICY_NODE_print , BIO *, ___out, a0, X509_POLICY_NODE *, ___node, a1, int, ___indent, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get0_policy_tree(___ctx) \
      LP1(0x3e64, X509_POLICY_TREE *, X509_STORE_CTX_get0_policy_tree , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_explicit_policy(___ctx) \
      LP1(0x3e6a, int, X509_STORE_CTX_get_explicit_policy , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_policy_tree_get0_policies(___tree) \
      LP1(0x3e70, STACK_OF(X509_POLICY_NODE) *, X509_policy_tree_get0_policies , const X509_POLICY_TREE *, ___tree, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_policy_tree_get0_user_policies(___tree) \
      LP1(0x3e76, STACK_OF(X509_POLICY_NODE) *, X509_policy_tree_get0_user_policies , const X509_POLICY_TREE *, ___tree, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_get_callback_arg(___b) \
      LP1(0x3e7c, char *, BIO_get_callback_arg , const BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_add1_attr_by_NID(___key, ___nid, ___type, ___bytes, ___len) \
      LP5(0x3e82, int, EVP_PKEY_add1_attr_by_NID , EVP_PKEY *, ___key, a0, int, ___nid, d0, int, ___type, d1, const unsigned char *, ___bytes, a1, int, ___len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_RSA(___e) \
      LP1(0x3e88, const RSA_METHOD *, ENGINE_get_RSA , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_DSA(___e) \
      LP1(0x3e8e, const DSA_METHOD *, ENGINE_get_DSA , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_DH(___e) \
      LP1(0x3e94, const DH_METHOD *, ENGINE_get_DH , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_RAND(___e) \
      LP1(0x3e9a, const RAND_METHOD *, ENGINE_get_RAND , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_ciphers(___e) \
      LP1(0x3ea0, ENGINE_CIPHERS_PTR, ENGINE_get_ciphers , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_digests(___e) \
      LP1(0x3ea6, ENGINE_DIGESTS_PTR, ENGINE_get_digests , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_init(___e) \
      LP1(0x3eac, int, ENGINE_init , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_finish(___e) \
      LP1(0x3eb2, int, ENGINE_finish , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_sendreq_new(___io, ___path, ___req, ___maxline) \
      LP4(0x3eb8, OCSP_REQ_CTX *, OCSP_sendreq_new , BIO *, ___io, a0, const char *, ___path, a1, OCSP_REQUEST *, ___req, a2, int, ___maxline, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_sendreq_nbio(___presp, ___rctx) \
      LP2(0x3ebe, int, OCSP_sendreq_nbio , OCSP_RESPONSE **, ___presp, a0, OCSP_REQ_CTX *, ___rctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQ_CTX_free(___rctx) \
      LP1NR(0x3ec4, OCSP_REQ_CTX_free , OCSP_REQ_CTX *, ___rctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_psk_identity_hint(___ctx, ___identity_hint) \
      LP2(0x3eca, int, SSL_CTX_use_psk_identity_hint , SSL_CTX *, ___ctx, a0, const char *, ___identity_hint, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_psk_client_callback(___ctx, ___cb) \
      LP2NR(0x3ed0, SSL_CTX_set_psk_client_callback , SSL_CTX *, ___ctx, a0, SSL_psk_client_cb_func, ___cb, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_psk_identity_hint(___s) \
      LP1(0x3ed6, const char *, SSL_get_psk_identity_hint , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_psk_server_callback(___ssl, ___cb) \
      LP2NR(0x3edc, SSL_set_psk_server_callback , SSL *, ___ssl, a0, SSL_psk_server_cb_func, ___cb, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_use_psk_identity_hint(___s, ___identity_hint) \
      LP2(0x3ee2, int, SSL_use_psk_identity_hint , SSL *, ___s, a0, const char *, ___identity_hint, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_psk_client_callback(___ssl, ___cb) \
      LP2NR(0x3ee8, SSL_set_psk_client_callback , SSL *, ___ssl, a0, SSL_psk_client_cb_func, ___cb, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_psk_server_callback(___ctx, ___cb) \
      LP2NR(0x3eee, SSL_CTX_set_psk_server_callback , SSL_CTX *, ___ctx, a0, SSL_psk_server_cb_func, ___cb, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_psk_identity(___s) \
      LP1(0x3ef4, const char *, SSL_get_psk_identity , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_session_ticket_ext(___s, ___ext_data, ___ext_len) \
      LP3(0x3efa, int, SSL_set_session_ticket_ext , SSL *, ___s, a0, void *, ___ext_data, a1, int, ___ext_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_session_secret_cb(___s, ___tls_session_secret_cb, ___arg) \
      LP3FP(0x3f00, int, SSL_set_session_secret_cb , SSL *, ___s, a0, __fpt, ___tls_session_secret_cb, a1, void *, ___arg, a2,\
      , AMISSL_BASE_NAME, int (*__fpt)(SSL *,void *,int *,STACK_OF(SSL_CIPHER) *,const SSL_CIPHER **,void *), 0, 0, 0, 0, 0, 0)

#define SSL_set_session_ticket_ext_cb(___s, ___cb, ___arg) \
      LP3(0x3f06, int, SSL_set_session_ticket_ext_cb , SSL *, ___s, a0, tls_session_ticket_ext_cb_fn, ___cb, a1, void *, ___arg, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set1_param(___ssl, ___vpm) \
      LP2(0x3f0c, int, SSL_set1_param , SSL *, ___ssl, a0, X509_VERIFY_PARAM *, ___vpm, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set1_param(___ctx, ___vpm) \
      LP2(0x3f12, int, SSL_CTX_set1_param , SSL_CTX *, ___ctx, a0, X509_VERIFY_PARAM *, ___vpm, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_renegotiate_abbreviated(___s) \
      LP1(0x3f18, int, SSL_renegotiate_abbreviated , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_srp_client_pwd_callback(___ctx, ___cb) \
      LP2FP(0x3f30, int, SSL_CTX_set_srp_client_pwd_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, char * (*__fpt)(SSL *,void *), 0, 0, 0, 0, 0, 0)

#define SSL_get_srp_g(___s) \
      LP1(0x3f36, BIGNUM *, SSL_get_srp_g , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_srp_username_callback(___ctx, ___cb) \
      LP2FP(0x3f3c, int, SSL_CTX_set_srp_username_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(SSL *,int *,void *), 0, 0, 0, 0, 0, 0)

#define SSL_get_srp_userinfo(___s) \
      LP1(0x3f42, char *, SSL_get_srp_userinfo , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_srp_server_param(___s, ___N, ___g, ___sa, ___v, ___info) \
      LP6(0x3f48, int, SSL_set_srp_server_param , SSL *, ___s, a0, const BIGNUM *, ___N, a1, const BIGNUM *, ___g, a2, BIGNUM *, ___sa, a3, BIGNUM *, ___v, d0, char *, ___info, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_srp_server_param_pw(___s, ___user, ___pass, ___grp) \
      LP4(0x3f4e, int, SSL_set_srp_server_param_pw , SSL *, ___s, a0, const char *, ___user, a1, const char *, ___pass, a2, const char *, ___grp, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_srp_N(___s) \
      LP1(0x3f54, BIGNUM *, SSL_get_srp_N , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_srp_username(___s) \
      LP1(0x3f5a, char *, SSL_get_srp_username , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_srp_password(___ctx, ___password) \
      LP2(0x3f60, int, SSL_CTX_set_srp_password , SSL_CTX *, ___ctx, a0, char *, ___password, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_srp_strength(___ctx, ___strength) \
      LP2(0x3f66, int, SSL_CTX_set_srp_strength , SSL_CTX *, ___ctx, a0, int, ___strength, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_srp_verify_param_callback(___ctx, ___cb) \
      LP2FP(0x3f6c, int, SSL_CTX_set_srp_verify_param_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(SSL *,void *), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_srp_cb_arg(___ctx, ___arg) \
      LP2(0x3f72, int, SSL_CTX_set_srp_cb_arg , SSL_CTX *, ___ctx, a0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_srp_username(___ctx, ___name) \
      LP2(0x3f78, int, SSL_CTX_set_srp_username , SSL_CTX *, ___ctx, a0, char *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_SRP_CTX_init(___ctx) \
      LP1(0x3f7e, int, SSL_CTX_SRP_CTX_init , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Calc_A_param(___s) \
      LP1(0x3f84, int, SRP_Calc_A_param , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_SRP_CTX_free(___ctx) \
      LP1(0x3f90, int, SSL_CTX_SRP_CTX_free , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_srp_server_param_with_username(___s, ___ad) \
      LP2(0x3f9c, int, SSL_srp_server_param_with_username , SSL *, ___s, a0, int *, ___ad, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SRP_CTX_free(___ctx) \
      LP1(0x3fa2, int, SSL_SRP_CTX_free , SSL *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_debug(___s, ___debug) \
      LP2NR(0x3fa8, SSL_set_debug , SSL *, ___s, a0, int, ___debug, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get0_peer(___s) \
      LP1(0x3fae, X509 *, SSL_SESSION_get0_peer , SSL_SESSION *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_set1_id_context(___s, ___sid_ctx, ___sid_ctx_len) \
      LP3(0x3fba, int, SSL_SESSION_set1_id_context , SSL_SESSION *, ___s, a0, const unsigned char *, ___sid_ctx, a1, unsigned int, ___sid_ctx_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_id(___c) \
      LP1(0x3fd2, uint32_t, SSL_CIPHER_get_id , const SSL_CIPHER *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_export_keying_material(___s, ___out, ___olen, ___label, ___llen, ___context, ___contextlen, ___use_context) \
      LP8(0x3fde, int, SSL_export_keying_material , SSL *, ___s, a0, unsigned char *, ___out, a1, size_t, ___olen, d0, const char *, ___label, a2, size_t, ___llen, d1, const unsigned char *, ___context, a3, size_t, ___contextlen, d2, int, ___use_context, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_tlsext_use_srtp(___ssl, ___profiles) \
      LP2(0x3fe4, int, SSL_set_tlsext_use_srtp , SSL *, ___ssl, a0, const char *, ___profiles, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_next_protos_advertised_cb(___s, ___cb, ___arg) \
      LP3NR(0x3fea, SSL_CTX_set_next_protos_advertised_cb , SSL_CTX *, ___s, a0, SSL_CTX_npn_advertised_cb_func, ___cb, a1, void *, ___arg, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_next_proto_negotiated(___s, ___data, ___len) \
      LP3NR(0x3ff0, SSL_get0_next_proto_negotiated , const SSL *, ___s, a0, const unsigned char **, ___data, a1, unsigned *, ___len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_selected_srtp_profile(___s) \
      LP1(0x3ff6, SRTP_PROTECTION_PROFILE *, SSL_get_selected_srtp_profile , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_tlsext_use_srtp(___ctx, ___profiles) \
      LP2(0x3ffc, int, SSL_CTX_set_tlsext_use_srtp , SSL_CTX *, ___ctx, a0, const char *, ___profiles, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_select_next_proto(___out, ___outlen, ___in, ___inlen, ___client, ___client_len) \
      LP6(0x4002, int, SSL_select_next_proto , unsigned char **, ___out, a0, unsigned char *, ___outlen, a1, const unsigned char *, ___in, a2, unsigned int, ___inlen, d0, const unsigned char *, ___client, a3, unsigned int, ___client_len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_srtp_profiles(___s) \
      LP1(0x4008, STACK_OF(SRTP_PROTECTION_PROFILE) *, SSL_get_srtp_profiles , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_next_proto_select_cb(___s, ___cb, ___arg) \
      LP3NR(0x400e, SSL_CTX_set_next_proto_select_cb , SSL_CTX *, ___s, a0, SSL_CTX_npn_select_cb_func, ___cb, a1, void *, ___arg, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get_compress_id(___s) \
      LP1(0x4014, unsigned int, SSL_SESSION_get_compress_id , const SSL_SESSION *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SRP_CTX_init(___s) \
      LP1(0x4026, int, SSL_SRP_CTX_init , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_ENGINE_strings() \
      LP0(0x4176, int, ERR_load_ENGINE_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_DSA(___e, ___dsa_meth) \
      LP2(0x417c, int, ENGINE_set_DSA , ENGINE *, ___e, a0, const DSA_METHOD *, ___dsa_meth, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_finish_function(___e) \
      LP1(0x4182, ENGINE_GEN_INT_FUNC_PTR, ENGINE_get_finish_function , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_default_RSA() \
      LP0(0x4188, ENGINE *, ENGINE_get_default_RSA ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_DH(___e, ___dh_meth) \
      LP2(0x418e, int, ENGINE_set_DH , ENGINE *, ___e, a0, const DH_METHOD *, ___dh_meth, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_init_function(___e) \
      LP1(0x4194, ENGINE_GEN_INT_FUNC_PTR, ENGINE_get_init_function , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_init_function(___e, ___init_f) \
      LP2(0x419a, int, ENGINE_set_init_function , ENGINE *, ___e, a0, ENGINE_GEN_INT_FUNC_PTR, ___init_f, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_default_DSA(___e) \
      LP1(0x41a0, int, ENGINE_set_default_DSA , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_last() \
      LP0(0x41a6, ENGINE *, ENGINE_get_last ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_prev(___e) \
      LP1(0x41ac, ENGINE *, ENGINE_get_prev , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_default_DH() \
      LP0(0x41b2, ENGINE *, ENGINE_get_default_DH ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_finish_function(___e, ___finish_f) \
      LP2(0x41b8, int, ENGINE_set_finish_function , ENGINE *, ___e, a0, ENGINE_GEN_INT_FUNC_PTR, ___finish_f, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_RSA(___e, ___rsa_meth) \
      LP2(0x41be, int, ENGINE_set_RSA , ENGINE *, ___e, a0, const RSA_METHOD *, ___rsa_meth, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_default_RAND(___e) \
      LP1(0x41c4, int, ENGINE_set_default_RAND , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_default_DSA() \
      LP0(0x41ca, ENGINE *, ENGINE_get_default_DSA ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_default_RSA(___e) \
      LP1(0x41d0, int, ENGINE_set_default_RSA , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_default_RAND() \
      LP0(0x41d6, ENGINE *, ENGINE_get_default_RAND ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_RAND(___e, ___rand_meth) \
      LP2(0x41dc, int, ENGINE_set_RAND , ENGINE *, ___e, a0, const RAND_METHOD *, ___rand_meth, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_default_DH(___e) \
      LP1(0x41e2, int, ENGINE_set_default_DH , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_ctrl_function(___e) \
      LP1(0x41e8, ENGINE_CTRL_FUNC_PTR, ENGINE_get_ctrl_function , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_ctrl_function(___e, ___ctrl_f) \
      LP2(0x41ee, int, ENGINE_set_ctrl_function , ENGINE *, ___e, a0, ENGINE_CTRL_FUNC_PTR, ___ctrl_f, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_unregister_ciphers(___e) \
      LP1NR(0x41f4, ENGINE_unregister_ciphers , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_unregister_RSA(___e) \
      LP1NR(0x41fa, ENGINE_unregister_RSA , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_all_RAND() \
      LP0NR(0x4200, ENGINE_register_all_RAND ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_digest_engine(___nid) \
      LP1(0x420c, ENGINE *, ENGINE_get_digest_engine , int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_DH(___e) \
      LP1(0x4212, int, ENGINE_register_DH , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_RAND(___e) \
      LP1(0x4218, int, ENGINE_register_RAND , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_ciphers(___e) \
      LP1(0x4224, int, ENGINE_register_ciphers , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_cmd_defns(___e) \
      LP1(0x4236, const ENGINE_CMD_DEFN *, ENGINE_get_cmd_defns , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_load_privkey_function(___e, ___loadpriv_f) \
      LP2(0x423c, int, ENGINE_set_load_privkey_function , ENGINE *, ___e, a0, ENGINE_LOAD_KEY_PTR, ___loadpriv_f, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_default_digests(___e) \
      LP1(0x4242, int, ENGINE_set_default_digests , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_RSA(___e) \
      LP1(0x4248, int, ENGINE_register_RSA , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_unregister_DSA(___e) \
      LP1NR(0x424e, ENGINE_unregister_DSA , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_ciphers(___e, ___f) \
      LP2(0x4254, int, ENGINE_set_ciphers , ENGINE *, ___e, a0, ENGINE_CIPHERS_PTR, ___f, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_set_rand_engine(___engine) \
      LP1(0x425a, int, RAND_set_rand_engine , ENGINE *, ___engine, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_digest(___e, ___nid) \
      LP2(0x4260, const EVP_MD *, ENGINE_get_digest , ENGINE *, ___e, a0, int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_cipher(___e, ___nid) \
      LP2(0x4266, const EVP_CIPHER *, ENGINE_get_cipher , ENGINE *, ___e, a0, int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_cmd_is_executable(___e, ___cmd) \
      LP2(0x426c, int, ENGINE_cmd_is_executable , ENGINE *, ___e, a0, int, ___cmd, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_DSA(___e) \
      LP1(0x4272, int, ENGINE_register_DSA , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_load_pubkey_function(___e, ___loadpub_f) \
      LP2(0x4278, int, ENGINE_set_load_pubkey_function , ENGINE *, ___e, a0, ENGINE_LOAD_KEY_PTR, ___loadpub_f, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_load_pubkey_function(___e) \
      LP1(0x427e, ENGINE_LOAD_KEY_PTR, ENGINE_get_load_pubkey_function , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_all_RSA() \
      LP0NR(0x4284, ENGINE_register_all_RSA ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_unregister_digests(___e) \
      LP1NR(0x428a, ENGINE_unregister_digests , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_ex_data(___e, ___idx) \
      LP2(0x4296, void *, ENGINE_get_ex_data , const ENGINE *, ___e, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_cmd_defns(___e, ___defns) \
      LP2(0x42a2, int, ENGINE_set_cmd_defns , ENGINE *, ___e, a0, const ENGINE_CMD_DEFN *, ___defns, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_digests(___e) \
      LP1(0x42a8, int, ENGINE_register_digests , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_all_DH() \
      LP0NR(0x42ae, ENGINE_register_all_DH ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_flags(___e) \
      LP1(0x42b4, int, ENGINE_get_flags , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_unregister_DH(___e) \
      LP1NR(0x42ba, ENGINE_unregister_DH , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_all_DSA() \
      LP0NR(0x42c0, ENGINE_register_all_DSA ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_digests(___e, ___f) \
      LP2(0x42c6, int, ENGINE_set_digests , ENGINE *, ___e, a0, ENGINE_DIGESTS_PTR, ___f, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_complete(___e) \
      LP1(0x42cc, int, ENGINE_register_complete , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_ex_data(___e, ___idx, ___arg) \
      LP3(0x42d2, int, ENGINE_set_ex_data , ENGINE *, ___e, a0, int, ___idx, d0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_destroy_function(___e, ___destroy_f) \
      LP2(0x42d8, int, ENGINE_set_destroy_function , ENGINE *, ___e, a0, ENGINE_GEN_INT_FUNC_PTR, ___destroy_f, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_cipher_engine(___nid) \
      LP1(0x42de, ENGINE *, ENGINE_get_cipher_engine , int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_default_ciphers(___e) \
      LP1(0x42f0, int, ENGINE_set_default_ciphers , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_unregister_RAND(___e) \
      LP1NR(0x42f6, ENGINE_unregister_RAND , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_table_flags(___flags) \
      LP1NR(0x4302, ENGINE_set_table_flags , unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_destroy_function(___e) \
      LP1(0x430e, ENGINE_GEN_INT_FUNC_PTR, ENGINE_get_destroy_function , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_table_flags() \
      LP0(0x4320, unsigned int, ENGINE_get_table_flags ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_flags(___e, ___flags) \
      LP2(0x4326, int, ENGINE_set_flags , ENGINE *, ___e, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_load_privkey_function(___e) \
      LP1(0x432c, ENGINE_LOAD_KEY_PTR, ENGINE_get_load_privkey_function , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_default_string(___e, ___def_list) \
      LP2(0x4332, int, ENGINE_set_default_string , ENGINE *, ___e, a0, const char *, ___def_list, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_add_conf_module() \
      LP0NR(0x4338, ENGINE_add_conf_module ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_up_ref(___e) \
      LP1(0x4350, int, ENGINE_up_ref , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_trinomial_basis(___eg, ___k) \
      LP2(0x4368, int, EC_GROUP_get_trinomial_basis , const EC_GROUP *, ___eg, a0, unsigned int *, ___k, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA512_Update(___c, ___data, ___len) \
      LP3(0x437a, int, SHA512_Update , SHA512_CTX *, ___c, a0, const void *, ___data, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ECPrivateKey(___key, ___out) \
      LP2(0x4380, int, i2d_ECPrivateKey , EC_KEY *, ___key, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_exp_arr(___r, ___a, ___b, ___p, ___ctx) \
      LP5(0x4386, int, BN_GF2m_mod_exp_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const int *, ___p, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_mul_arr(___r, ___a, ___b, ___p, ___ctx) \
      LP5(0x438c, int, BN_GF2m_mod_mul_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const int *, ___p, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define o2i_ECPublicKey(___key, ___in, ___len) \
      LP3(0x4392, EC_KEY *, o2i_ECPublicKey , EC_KEY **, ___key, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_copy(___dst, ___src) \
      LP2(0x4398, EC_KEY *, EC_KEY_copy , EC_KEY *, ___dst, a0, const EC_KEY *, ___src, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_check_discriminant(___group, ___ctx) \
      LP2(0x43a4, int, EC_GROUP_check_discriminant , const EC_GROUP *, ___group, a0, BN_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2o_ECPublicKey(___key, ___out) \
      LP2(0x43aa, int, i2o_ECPublicKey , const EC_KEY *, ___key, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_new_curve_GF2m(___p, ___a, ___b, ___ctx) \
      LP4(0x43b0, EC_GROUP *, EC_GROUP_new_curve_GF2m , const BIGNUM *, ___p, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get1_EC_KEY(___pkey) \
      LP1(0x43bc, struct ec_key_st *, EVP_PKEY_get1_EC_KEY , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_get_conv_form(___key) \
      LP1(0x43c8, point_conversion_form_t, EC_KEY_get_conv_form , const EC_KEY *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_static_state() \
      LP0(0x43ce, void *, ENGINE_get_static_state ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_SIG_new() \
      LP0(0x43d4, ECDSA_SIG *, ECDSA_SIG_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_bn2point(___g, ___b, ___p, ___ctx) \
      LP4(0x43da, EC_POINT *, EC_POINT_bn2point , const EC_GROUP *, ___g, a0, const BIGNUM *, ___b, a1, EC_POINT *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_sign_ex(___type, ___dgst, ___dgstlen, ___sig, ___siglen, ___kinv, ___rp, ___eckey) \
      LP8(0x43e6, int, ECDSA_sign_ex , int, ___type, d0, const unsigned char *, ___dgst, a0, int, ___dgstlen, d1, unsigned char *, ___sig, a1, unsigned int *, ___siglen, a2, const BIGNUM *, ___kinv, a3, const BIGNUM *, ___rp, d2, EC_KEY *, ___eckey, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_pentanomial_basis(___ecgroup, ___k1, ___k2, ___k3) \
      LP4(0x43ec, int, EC_GROUP_get_pentanomial_basis , const EC_GROUP *, ___ecgroup, a0, unsigned int *, ___k1, a1, unsigned int *, ___k2, a2, unsigned int *, ___k3, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_sign_setup(___eckey, ___ctx, ___kinv, ___rp) \
      LP4(0x43f2, int, ECDSA_sign_setup , EC_KEY *, ___eckey, a0, BN_CTX *, ___ctx, a1, BIGNUM **, ___kinv, a2, BIGNUM **, ___rp, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_solve_quad_arr(___r, ___a, ___p, ___ctx) \
      LP4(0x43f8, int, BN_GF2m_mod_solve_quad_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const int *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_up_ref(___key) \
      LP1(0x43fe, int, EC_KEY_up_ref , EC_KEY *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_EC_PUBKEY(___a, ___pp, ___length) \
      LP3(0x4404, EC_KEY *, d2i_EC_PUBKEY , EC_KEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_have_precompute_mult(___group) \
      LP1(0x440a, int, EC_GROUP_have_precompute_mult , const EC_GROUP *, ___group, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_arr(___r, ___a, ___p) \
      LP3(0x4416, int, BN_GF2m_mod_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const int *, ___p, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_dup(___src, ___group) \
      LP2(0x442e, EC_POINT *, EC_POINT_dup , const EC_POINT *, ___src, a0, const EC_GROUP *, ___group, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set1_EC_KEY(___pkey, ___key) \
      LP2(0x4434, int, EVP_PKEY_set1_EC_KEY , EVP_PKEY *, ___pkey, a0, struct ec_key_st *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_sqrt_arr(___r, ___a, ___p, ___ctx) \
      LP4(0x443a, int, BN_GF2m_mod_sqrt_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const int *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_set_private_key(___key, ___prv) \
      LP2(0x4446, int, EC_KEY_set_private_key , EC_KEY *, ___key, a0, const BIGNUM *, ___prv, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_poly2arr(___a, ___p, ___max) \
      LP3(0x444c, int, BN_GF2m_poly2arr , const BIGNUM *, ___a, a0, int *, ___p, a1, int, ___max, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ECParameters(___key, ___out) \
      LP2(0x4452, int, i2d_ECParameters , EC_KEY *, ___key, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA256_Init(___c) \
      LP1(0x445e, int, SHA256_Init , SHA256_CTX *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA224(___d, ___n, ___md) \
      LP3(0x446a, unsigned char *, SHA224 , const unsigned char *, ___d, a0, size_t, ___n, d0, unsigned char *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_seed_len(___ecgroup) \
      LP1(0x4476, size_t, EC_GROUP_get_seed_len , const EC_GROUP *, ___ecgroup, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_EC_PUBKEY(___a, ___pp) \
      LP2(0x447c, int, i2d_EC_PUBKEY , EC_KEY *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GFp_nist_method() \
      LP0(0x4488, const EC_METHOD *, EC_GFp_nist_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_set_curve_name(___group, ___nid) \
      LP2NR(0x4494, EC_GROUP_set_curve_name , EC_GROUP *, ___group, a0, int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_sqr_arr(___r, ___a, ___p, ___ctx) \
      LP4(0x449a, int, BN_GF2m_mod_sqr_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const int *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_s_datagram() \
      LP0(0x44a0, const BIO_METHOD *, BIO_s_datagram ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA384_Update(___c, ___data, ___len) \
      LP3(0x44b2, int, SHA384_Update , SHA512_CTX *, ___c, a0, const void *, ___data, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA224_Final(___md, ___c) \
      LP2(0x44be, int, SHA224_Final , unsigned char *, ___md, a0, SHA256_CTX *, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA224_Update(___c, ___data, ___len) \
      LP3(0x44c4, int, SHA224_Update , SHA256_CTX *, ___c, a0, const void *, ___data, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ECPrivateKey(___key, ___in, ___len) \
      LP3(0x44ca, EC_KEY *, d2i_ECPrivateKey , EC_KEY **, ___key, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA512_Final(___md, ___c) \
      LP2(0x44d6, int, SHA512_Final , unsigned char *, ___md, a0, SHA512_CTX *, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_asn1_flag(___group) \
      LP1(0x44dc, int, EC_GROUP_get_asn1_flag , const EC_GROUP *, ___group, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get0_seed(___x) \
      LP1(0x44e8, unsigned char *, EC_GROUP_get0_seed , const EC_GROUP *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_div_arr(___r, ___a, ___b, ___p, ___ctx) \
      LP5(0x44ee, int, BN_GF2m_mod_div_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___b, a2, const int *, ___p, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_get_enc_flags(___key) \
      LP1(0x4518, unsigned, EC_KEY_get_enc_flags , const EC_KEY *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_set_compressed_coordinates_GF2m(___group, ___p, ___x, ___y_bit, ___ctx) \
      LP5(0x4524, int, EC_POINT_set_compressed_coordinates_GF2m , const EC_GROUP *, ___group, a0, EC_POINT *, ___p, a1, const BIGNUM *, ___x, a2, int, ___y_bit, d0, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_cmp(___a, ___b, ___ctx) \
      LP3(0x452a, int, EC_GROUP_cmp , const EC_GROUP *, ___a, a0, const EC_GROUP *, ___b, a1, BN_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA224_Init(___c) \
      LP1(0x4530, int, SHA224_Init , SHA256_CTX *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA512_Init(___c) \
      LP1(0x453c, int, SHA512_Init , SHA512_CTX *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_basis_type(___group) \
      LP1(0x4548, int, EC_GROUP_get_basis_type , const EC_GROUP *, ___group, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_dup(___src) \
      LP1(0x4566, EC_GROUP *, EC_GROUP_dup , const EC_GROUP *, ___src, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA256_Transform(___c, ___data) \
      LP2NR(0x4572, SHA256_Transform , SHA256_CTX *, ___c, a0, const unsigned char *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_set_enc_flags(___eckey, ___flags) \
      LP2NR(0x4578, EC_KEY_set_enc_flags , EC_KEY *, ___eckey, a0, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_point2hex(___group, ___point, ___form, ___ctx) \
      LP4(0x457e, char *, EC_POINT_point2hex , const EC_GROUP *, ___group, a0, const EC_POINT *, ___point, a1, point_conversion_form_t, ___form, d0, BN_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_do_sign_ex(___dgst, ___dgstlen, ___kinv, ___rp, ___eckey) \
      LP5(0x458a, ECDSA_SIG *, ECDSA_do_sign_ex , const unsigned char *, ___dgst, a0, int, ___dgstlen, d0, const BIGNUM *, ___kinv, a1, const BIGNUM *, ___rp, a2, EC_KEY *, ___eckey, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA512_Transform(___c, ___data) \
      LP2NR(0x4596, SHA512_Transform , SHA512_CTX *, ___c, a0, const unsigned char *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_set_public_key(___key, ___pub) \
      LP2(0x45a2, int, EC_KEY_set_public_key , EC_KEY *, ___key, a0, const EC_POINT *, ___pub, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_curve_name(___group) \
      LP1(0x45ba, int, EC_GROUP_get_curve_name , const EC_GROUP *, ___group, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA256_Final(___md, ___c) \
      LP2(0x45c6, int, SHA256_Final , unsigned char *, ___md, a0, SHA256_CTX *, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ECParameters(___key, ___in, ___len) \
      LP3(0x45e4, EC_KEY *, d2i_ECParameters , EC_KEY **, ___key, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA384_Init(___c) \
      LP1(0x45ea, int, SHA384_Init , SHA512_CTX *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA384_Final(___md, ___c) \
      LP2(0x45f6, int, SHA384_Final , unsigned char *, ___md, a0, SHA512_CTX *, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA384(___d, ___n, ___md) \
      LP3(0x4602, unsigned char *, SHA384 , const unsigned char *, ___d, a0, size_t, ___n, d0, unsigned char *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_hex2point(___group, ___c, ___p, ___ctx) \
      LP4(0x4614, EC_POINT *, EC_POINT_hex2point , const EC_GROUP *, ___group, a0, const char *, ___c, a1, EC_POINT *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SHA256_Update(___c, ___data, ___len) \
      LP3(0x461a, int, SHA256_Update , SHA256_CTX *, ___c, a0, const void *, ___data, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GF2m_mod_inv_arr(___r, ___b, ___p, ___ctx) \
      LP4(0x4620, int, BN_GF2m_mod_inv_arr , BIGNUM *, ___r, a0, const BIGNUM *, ___b, a1, const int *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_check_pub_key(___dh, ___pub_key, ___codes) \
      LP3(0x4632, int, DH_check_pub_key , const DH *, ___dh, a0, const BIGNUM *, ___pub_key, a1, int *, ___codes, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define Camellia_cbc_encrypt(___in, ___out, ___length, ___key, ___ivec, ___enc) \
      LP6NR(0x4638, Camellia_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const CAMELLIA_KEY *, ___key, a2, unsigned char *, ___ivec, a3, const int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define Camellia_cfb128_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc) \
      LP7NR(0x463e, Camellia_cfb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const CAMELLIA_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, const int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define Camellia_cfb1_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc) \
      LP7NR(0x4644, Camellia_cfb1_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const CAMELLIA_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, const int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define Camellia_cfb8_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc) \
      LP7NR(0x464a, Camellia_cfb8_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const CAMELLIA_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, const int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define Camellia_ctr128_encrypt(___in, ___out, ___length, ___key, ___ivec, ___ecount_buf, ___num) \
      LP7NR(0x4650, Camellia_ctr128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const CAMELLIA_KEY *, ___key, a2, unsigned char *, ___ivec, a3, unsigned char *, ___ecount_buf, d1, unsigned int *, ___num, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define Camellia_decrypt(___in, ___out, ___key) \
      LP3NR(0x4656, Camellia_decrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const CAMELLIA_KEY *, ___key, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define Camellia_ecb_encrypt(___in, ___out, ___key, ___enc) \
      LP4NR(0x465c, Camellia_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const CAMELLIA_KEY *, ___key, a2, const int, ___enc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define Camellia_encrypt(___in, ___out, ___key) \
      LP3NR(0x4662, Camellia_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const CAMELLIA_KEY *, ___key, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define Camellia_ofb128_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num) \
      LP6NR(0x4668, Camellia_ofb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const CAMELLIA_KEY *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define Camellia_set_key(___userKey, ___bits, ___key) \
      LP3(0x466e, int, Camellia_set_key , const unsigned char *, ___userKey, a0, const int, ___bits, d0, CAMELLIA_KEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_128_cbc() \
      LP0(0x4674, const EVP_CIPHER *, EVP_camellia_128_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_128_cfb128() \
      LP0(0x467a, const EVP_CIPHER *, EVP_camellia_128_cfb128 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_128_cfb1() \
      LP0(0x4680, const EVP_CIPHER *, EVP_camellia_128_cfb1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_128_cfb8() \
      LP0(0x4686, const EVP_CIPHER *, EVP_camellia_128_cfb8 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_128_ecb() \
      LP0(0x468c, const EVP_CIPHER *, EVP_camellia_128_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_128_ofb() \
      LP0(0x4692, const EVP_CIPHER *, EVP_camellia_128_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_192_cbc() \
      LP0(0x4698, const EVP_CIPHER *, EVP_camellia_192_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_192_cfb128() \
      LP0(0x469e, const EVP_CIPHER *, EVP_camellia_192_cfb128 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_192_cfb1() \
      LP0(0x46a4, const EVP_CIPHER *, EVP_camellia_192_cfb1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_192_cfb8() \
      LP0(0x46aa, const EVP_CIPHER *, EVP_camellia_192_cfb8 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_192_ecb() \
      LP0(0x46b0, const EVP_CIPHER *, EVP_camellia_192_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_192_ofb() \
      LP0(0x46b6, const EVP_CIPHER *, EVP_camellia_192_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_256_cbc() \
      LP0(0x46bc, const EVP_CIPHER *, EVP_camellia_256_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_256_cfb128() \
      LP0(0x46c2, const EVP_CIPHER *, EVP_camellia_256_cfb128 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_256_cfb1() \
      LP0(0x46c8, const EVP_CIPHER *, EVP_camellia_256_cfb1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_256_cfb8() \
      LP0(0x46ce, const EVP_CIPHER *, EVP_camellia_256_cfb8 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_256_ecb() \
      LP0(0x46d4, const EVP_CIPHER *, EVP_camellia_256_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_256_ofb() \
      LP0(0x46da, const EVP_CIPHER *, EVP_camellia_256_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_bi_ige_encrypt(___in, ___out, ___length, ___key, ___key2, ___ivec, ___enc) \
      LP7NR(0x46e0, AES_bi_ige_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const AES_KEY *, ___key, a2, const AES_KEY *, ___key2, a3, const unsigned char *, ___ivec, d1, const int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SEED_decrypt(___s, ___d, ___ks) \
      LP3NR(0x46e6, SEED_decrypt , const unsigned char *, ___s, a0, unsigned char *, ___d, a1, const SEED_KEY_SCHEDULE *, ___ks, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SEED_encrypt(___s, ___d, ___ks) \
      LP3NR(0x46ec, SEED_encrypt , const unsigned char *, ___s, a0, unsigned char *, ___d, a1, const SEED_KEY_SCHEDULE *, ___ks, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SEED_cbc_encrypt(___in, ___out, ___len, ___ks, ___ivec, ___enc) \
      LP6NR(0x46f2, SEED_cbc_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const SEED_KEY_SCHEDULE *, ___ks, a2, unsigned char *, ___ivec, a3, int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_seed_ofb() \
      LP0(0x46f8, const EVP_CIPHER *, EVP_seed_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SEED_cfb128_encrypt(___in, ___out, ___len, ___ks, ___ivec, ___num, ___enc) \
      LP7NR(0x46fe, SEED_cfb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const SEED_KEY_SCHEDULE *, ___ks, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SEED_ofb128_encrypt(___in, ___out, ___len, ___ks, ___ivec, ___num) \
      LP6NR(0x4704, SEED_ofb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const SEED_KEY_SCHEDULE *, ___ks, a2, unsigned char *, ___ivec, a3, int *, ___num, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_seed_cbc() \
      LP0(0x470a, const EVP_CIPHER *, EVP_seed_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SEED_ecb_encrypt(___in, ___out, ___ks, ___enc) \
      LP4NR(0x4710, SEED_ecb_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, const SEED_KEY_SCHEDULE *, ___ks, a2, int, ___enc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_seed_ecb() \
      LP0(0x4716, const EVP_CIPHER *, EVP_seed_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SEED_set_key(___rawkey, ___ks) \
      LP2NR(0x471c, SEED_set_key , const unsigned char *, ___rawkey, a0, SEED_KEY_SCHEDULE *, ___ks, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_seed_cfb128() \
      LP0(0x4722, const EVP_CIPHER *, EVP_seed_cfb128 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_unwrap_key(___key, ___iv, ___out, ___in, ___inlen) \
      LP5(0x4728, int, AES_unwrap_key , AES_KEY *, ___key, a0, const unsigned char *, ___iv, a1, unsigned char *, ___out, a2, const unsigned char *, ___in, a3, unsigned int, ___inlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define AES_wrap_key(___key, ___iv, ___out, ___in, ___inlen) \
      LP5(0x472e, int, AES_wrap_key , AES_KEY *, ___key, a0, const unsigned char *, ___iv, a1, unsigned char *, ___out, a2, const unsigned char *, ___in, a3, unsigned int, ___inlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_ReceiptRequest_free(___rr) \
      LP1NR(0x4734, CMS_ReceiptRequest_free , CMS_ReceiptRequest *, ___rr, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add0_CertificateChoices(___cms) \
      LP1(0x4740, CMS_CertificateChoices *, CMS_add0_CertificateChoices , CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_unsigned_add1_attr_by_OBJ(___si, ___obj, ___type, ___bytes, ___len) \
      LP5(0x4746, int, CMS_unsigned_add1_attr_by_OBJ , CMS_SignerInfo *, ___si, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const void *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_CMS_strings() \
      LP0(0x474c, int, ERR_load_CMS_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_sign_receipt(___si, ___signcert, ___pkey, ___certs, ___flags) \
      LP5(0x4752, CMS_ContentInfo *, CMS_sign_receipt , CMS_SignerInfo *, ___si, a0, X509 *, ___signcert, a1, EVP_PKEY *, ___pkey, a2, STACK_OF(X509) *, ___certs, a3, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_CMS_ContentInfo(___a, ___out) \
      LP2(0x4758, int, i2d_CMS_ContentInfo , CMS_ContentInfo *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_signed_delete_attr(___si, ___loc) \
      LP2(0x475e, X509_ATTRIBUTE *, CMS_signed_delete_attr , CMS_SignerInfo *, ___si, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_CMS_bio(___bp, ___cms) \
      LP2(0x4764, CMS_ContentInfo *, d2i_CMS_bio , BIO *, ___bp, a0, CMS_ContentInfo **, ___cms, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_unsigned_get_attr_by_NID(___si, ___nid, ___lastpos) \
      LP3(0x476a, int, CMS_unsigned_get_attr_by_NID , const CMS_SignerInfo *, ___si, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_verify(___cms, ___certs, ___store, ___dcont, ___out, ___flags) \
      LP6(0x4770, int, CMS_verify , CMS_ContentInfo *, ___cms, a0, STACK_OF(X509) *, ___certs, a1, X509_STORE *, ___store, a2, BIO *, ___dcont, a3, BIO *, ___out, d0, unsigned int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SMIME_read_CMS(___bio, ___biocont) \
      LP2(0x4776, CMS_ContentInfo *, SMIME_read_CMS , BIO *, ___bio, a0, BIO **, ___biocont, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_decrypt_set1_key(___cms, ___key, ___keylen, ___id, ___idlen) \
      LP5(0x477c, int, CMS_decrypt_set1_key , CMS_ContentInfo *, ___cms, a0, unsigned char *, ___key, a1, size_t, ___keylen, d0, const unsigned char *, ___id, a2, size_t, ___idlen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_SignerInfo_get0_algs(___si, ___pk, ___signer, ___pdig, ___psig) \
      LP5NR(0x4782, CMS_SignerInfo_get0_algs , CMS_SignerInfo *, ___si, a0, EVP_PKEY **, ___pk, a1, X509 **, ___signer, a2, X509_ALGOR **, ___pdig, a3, X509_ALGOR **, ___psig, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add1_cert(___cms, ___cert) \
      LP2(0x4788, int, CMS_add1_cert , CMS_ContentInfo *, ___cms, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_set_detached(___cms, ___detached) \
      LP2(0x478e, int, CMS_set_detached , CMS_ContentInfo *, ___cms, a0, int, ___detached, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_encrypt(___certs, ___in, ___cipher, ___flags) \
      LP4(0x4794, CMS_ContentInfo *, CMS_encrypt , STACK_OF(X509) *, ___certs, a0, BIO *, ___in, a1, const EVP_CIPHER *, ___cipher, a2, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_EnvelopedData_create(___cipher) \
      LP1(0x479a, CMS_ContentInfo *, CMS_EnvelopedData_create , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_uncompress(___cms, ___dcont, ___out, ___flags) \
      LP4(0x47a0, int, CMS_uncompress , CMS_ContentInfo *, ___cms, a0, BIO *, ___dcont, a1, BIO *, ___out, a2, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add0_crl(___cms, ___crl) \
      LP2(0x47a6, int, CMS_add0_crl , CMS_ContentInfo *, ___cms, a0, X509_CRL *, ___crl, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_SignerInfo_verify_content(___si, ___chain) \
      LP2(0x47ac, int, CMS_SignerInfo_verify_content , CMS_SignerInfo *, ___si, a0, BIO *, ___chain, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_unsigned_get0_data_by_OBJ(___si, ___oid, ___lastpos, ___type) \
      LP4(0x47b2, void *, CMS_unsigned_get0_data_by_OBJ , CMS_SignerInfo *, ___si, a0, ASN1_OBJECT *, ___oid, a1, int, ___lastpos, d0, int, ___type, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_CMS(___out, ___cms) \
      LP2(0x47b8, int, PEM_write_bio_CMS , BIO *, ___out, a0, CMS_ContentInfo *, ___cms, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_unsigned_get_attr(___si, ___loc) \
      LP2(0x47be, X509_ATTRIBUTE *, CMS_unsigned_get_attr , const CMS_SignerInfo *, ___si, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_ktri_cert_cmp(___ri, ___cert) \
      LP2(0x47c4, int, CMS_RecipientInfo_ktri_cert_cmp , CMS_RecipientInfo *, ___ri, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_ktri_get0_algs(___ri, ___pk, ___recip, ___palg) \
      LP4(0x47ca, int, CMS_RecipientInfo_ktri_get0_algs , CMS_RecipientInfo *, ___ri, a0, EVP_PKEY **, ___pk, a1, X509 **, ___recip, a2, X509_ALGOR **, ___palg, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_ContentInfo_free(___cms) \
      LP1NR(0x47d0, CMS_ContentInfo_free , CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_final(___cms, ___data, ___dcont, ___flags) \
      LP4(0x47d6, int, CMS_final , CMS_ContentInfo *, ___cms, a0, BIO *, ___data, a1, BIO *, ___dcont, a2, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add_simple_smimecap(___algs, ___algnid, ___keysize) \
      LP3(0x47dc, int, CMS_add_simple_smimecap , STACK_OF(X509_ALGOR) **, ___algs, a0, int, ___algnid, d0, int, ___keysize, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_SignerInfo_verify(___si) \
      LP1(0x47e2, int, CMS_SignerInfo_verify , CMS_SignerInfo *, ___si, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_data(___cms, ___out, ___flags) \
      LP3(0x47e8, int, CMS_data , CMS_ContentInfo *, ___cms, a0, BIO *, ___out, a1, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_CMS_ReceiptRequest(___a, ___in, ___len) \
      LP3(0x47ee, CMS_ReceiptRequest *, d2i_CMS_ReceiptRequest , CMS_ReceiptRequest **, ___a, a0, unsigned char const **, ___in, a1, long, ___len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_compress(___in, ___comp_nid, ___flags) \
      LP3(0x47f4, CMS_ContentInfo *, CMS_compress , BIO *, ___in, a0, int, ___comp_nid, d0, unsigned int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_digest_create(___in, ___md, ___flags) \
      LP3(0x47fa, CMS_ContentInfo *, CMS_digest_create , BIO *, ___in, a0, const EVP_MD *, ___md, a1, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_SignerInfo_cert_cmp(___si, ___cert) \
      LP2(0x4800, int, CMS_SignerInfo_cert_cmp , CMS_SignerInfo *, ___si, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_SignerInfo_sign(___si) \
      LP1(0x4806, int, CMS_SignerInfo_sign , CMS_SignerInfo *, ___si, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_data_create(___in, ___flags) \
      LP2(0x480c, CMS_ContentInfo *, CMS_data_create , BIO *, ___in, a0, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_CMS_bio(___bp, ___cms) \
      LP2(0x4812, int, i2d_CMS_bio , BIO *, ___bp, a0, CMS_ContentInfo *, ___cms, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_EncryptedData_set1_key(___cms, ___ciph, ___key, ___keylen) \
      LP4(0x4818, int, CMS_EncryptedData_set1_key , CMS_ContentInfo *, ___cms, a0, const EVP_CIPHER *, ___ciph, a1, const unsigned char *, ___key, a2, size_t, ___keylen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_decrypt(___cms, ___pkey, ___cert, ___dcont, ___out, ___flags) \
      LP6(0x481e, int, CMS_decrypt , CMS_ContentInfo *, ___cms, a0, EVP_PKEY *, ___pkey, a1, X509 *, ___cert, a2, BIO *, ___dcont, a3, BIO *, ___out, d0, unsigned int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_unsigned_delete_attr(___si, ___loc) \
      LP2(0x4824, X509_ATTRIBUTE *, CMS_unsigned_delete_attr , CMS_SignerInfo *, ___si, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_unsigned_get_attr_count(___si) \
      LP1(0x482a, int, CMS_unsigned_get_attr_count , const CMS_SignerInfo *, ___si, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add_smimecap(___si, ___algs) \
      LP2(0x4830, int, CMS_add_smimecap , CMS_SignerInfo *, ___si, a0, STACK_OF(X509_ALGOR) *, ___algs, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_signed_get_attr_by_OBJ(___si, ___obj, ___lastpos) \
      LP3(0x483c, int, CMS_signed_get_attr_by_OBJ , const CMS_SignerInfo *, ___si, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_CMS_ContentInfo(___a, ___in, ___len) \
      LP3(0x4842, CMS_ContentInfo *, d2i_CMS_ContentInfo , CMS_ContentInfo **, ___a, a0, unsigned char const **, ___in, a1, long, ___len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add_standard_smimecap(___smcap) \
      LP1(0x4848, int, CMS_add_standard_smimecap , STACK_OF(X509_ALGOR) **, ___smcap, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_ContentInfo_new() \
      LP0(0x484e, CMS_ContentInfo *, CMS_ContentInfo_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_type(___ri) \
      LP1(0x4854, int, CMS_RecipientInfo_type , CMS_RecipientInfo *, ___ri, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_get0_type(___cms) \
      LP1(0x485a, const ASN1_OBJECT *, CMS_get0_type , const CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_is_detached(___cms) \
      LP1(0x4860, int, CMS_is_detached , CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_sign(___signcert, ___pkey, ___certs, ___data, ___flags) \
      LP5(0x4866, CMS_ContentInfo *, CMS_sign , X509 *, ___signcert, a0, EVP_PKEY *, ___pkey, a1, STACK_OF(X509) *, ___certs, a2, BIO *, ___data, a3, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_signed_add1_attr(___si, ___attr) \
      LP2(0x486c, int, CMS_signed_add1_attr , CMS_SignerInfo *, ___si, a0, X509_ATTRIBUTE *, ___attr, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_unsigned_get_attr_by_OBJ(___si, ___obj, ___lastpos) \
      LP3(0x4872, int, CMS_unsigned_get_attr_by_OBJ , const CMS_SignerInfo *, ___si, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SMIME_write_CMS(___bio, ___cms, ___data, ___flags) \
      LP4(0x4878, int, SMIME_write_CMS , BIO *, ___bio, a0, CMS_ContentInfo *, ___cms, a1, BIO *, ___data, a2, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_EncryptedData_decrypt(___cms, ___key, ___keylen, ___dcont, ___out, ___flags) \
      LP6(0x487e, int, CMS_EncryptedData_decrypt , CMS_ContentInfo *, ___cms, a0, const unsigned char *, ___key, a1, size_t, ___keylen, d0, BIO *, ___dcont, a2, BIO *, ___out, a3, unsigned int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_get0_RecipientInfos(___cms) \
      LP1(0x4884, STACK_OF(CMS_RecipientInfo) *, CMS_get0_RecipientInfos , CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add0_RevocationInfoChoice(___cms) \
      LP1(0x488a, CMS_RevocationInfoChoice *, CMS_add0_RevocationInfoChoice , CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_decrypt_set1_pkey(___cms, ___pk, ___cert) \
      LP3(0x4890, int, CMS_decrypt_set1_pkey , CMS_ContentInfo *, ___cms, a0, EVP_PKEY *, ___pk, a1, X509 *, ___cert, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_SignerInfo_set1_signer_cert(___si, ___signer) \
      LP2NR(0x4896, CMS_SignerInfo_set1_signer_cert , CMS_SignerInfo *, ___si, a0, X509 *, ___signer, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_get0_signers(___cms) \
      LP1(0x489c, STACK_OF(X509) *, CMS_get0_signers , CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_ReceiptRequest_get0_values(___rr, ___pcid, ___pallorfirst, ___plist, ___prto) \
      LP5NR(0x48a2, CMS_ReceiptRequest_get0_values , CMS_ReceiptRequest *, ___rr, a0, ASN1_STRING **, ___pcid, a1, int *, ___pallorfirst, a2, STACK_OF(GENERAL_NAMES) **, ___plist, a3, STACK_OF(GENERAL_NAMES) **, ___prto, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_signed_get0_data_by_OBJ(___si, ___oid, ___lastpos, ___type) \
      LP4(0x48a8, void *, CMS_signed_get0_data_by_OBJ , CMS_SignerInfo *, ___si, a0, const ASN1_OBJECT *, ___oid, a1, int, ___lastpos, d0, int, ___type, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_get0_SignerInfos(___cms) \
      LP1(0x48ae, STACK_OF(CMS_SignerInfo) *, CMS_get0_SignerInfos , CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add0_cert(___cms, ___cert) \
      LP2(0x48b4, int, CMS_add0_cert , CMS_ContentInfo *, ___cms, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_EncryptedData_encrypt(___in, ___cipher, ___key, ___keylen, ___flags) \
      LP5(0x48ba, CMS_ContentInfo *, CMS_EncryptedData_encrypt , BIO *, ___in, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, size_t, ___keylen, d0, unsigned int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_digest_verify(___cms, ___dcont, ___out, ___flags) \
      LP4(0x48c0, int, CMS_digest_verify , CMS_ContentInfo *, ___cms, a0, BIO *, ___dcont, a1, BIO *, ___out, a2, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_set1_signers_certs(___cms, ___certs, ___flags) \
      LP3(0x48c6, int, CMS_set1_signers_certs , CMS_ContentInfo *, ___cms, a0, STACK_OF(X509) *, ___certs, a1, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_signed_get_attr(___si, ___loc) \
      LP2(0x48cc, X509_ATTRIBUTE *, CMS_signed_get_attr , const CMS_SignerInfo *, ___si, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_set0_key(___ri, ___key, ___keylen) \
      LP3(0x48d2, int, CMS_RecipientInfo_set0_key , CMS_RecipientInfo *, ___ri, a0, unsigned char *, ___key, a1, size_t, ___keylen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_SignedData_init(___cms) \
      LP1(0x48d8, int, CMS_SignedData_init , CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_kekri_get0_id(___ri, ___palg, ___pid, ___pdate, ___potherid, ___pothertype) \
      LP6(0x48de, int, CMS_RecipientInfo_kekri_get0_id , CMS_RecipientInfo *, ___ri, a0, X509_ALGOR **, ___palg, a1, ASN1_OCTET_STRING **, ___pid, a2, ASN1_GENERALIZEDTIME **, ___pdate, a3, ASN1_OBJECT **, ___potherid, d0, ASN1_TYPE **, ___pothertype, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_verify_receipt(___rcms, ___ocms, ___certs, ___store, ___flags) \
      LP5(0x48e4, int, CMS_verify_receipt , CMS_ContentInfo *, ___rcms, a0, CMS_ContentInfo *, ___ocms, a1, STACK_OF(X509) *, ___certs, a2, X509_STORE *, ___store, a3, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_CMS(___bp, ___x, ___cb, ___u) \
      LP4(0x48ea, CMS_ContentInfo *, PEM_read_bio_CMS , BIO *, ___bp, a0, CMS_ContentInfo **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_get1_crls(___cms) \
      LP1(0x48f0, STACK_OF(X509_CRL) *, CMS_get1_crls , CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add0_recipient_key(___cms, ___nid, ___key, ___keylen, ___id, ___idlen, ___date, ___otherTypeId, ___otherType) \
      LP9(0x48f6, CMS_RecipientInfo *, CMS_add0_recipient_key , CMS_ContentInfo *, ___cms, a0, int, ___nid, d0, unsigned char *, ___key, a1, size_t, ___keylen, d1, unsigned char *, ___id, a2, size_t, ___idlen, d2, ASN1_GENERALIZEDTIME *, ___date, a3, ASN1_OBJECT *, ___otherTypeId, d3, ASN1_TYPE *, ___otherType, d4,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_ReceiptRequest_new() \
      LP0(0x48fc, CMS_ReceiptRequest *, CMS_ReceiptRequest_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_get0_content(___cms) \
      LP1(0x4902, ASN1_OCTET_STRING **, CMS_get0_content , CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_get1_ReceiptRequest(___si, ___prr) \
      LP2(0x4908, int, CMS_get1_ReceiptRequest , CMS_SignerInfo *, ___si, a0, CMS_ReceiptRequest **, ___prr, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_signed_add1_attr_by_OBJ(___si, ___obj, ___type, ___bytes, ___len) \
      LP5(0x490e, int, CMS_signed_add1_attr_by_OBJ , CMS_SignerInfo *, ___si, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const void *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_kekri_id_cmp(___ri, ___id, ___idlen) \
      LP3(0x4914, int, CMS_RecipientInfo_kekri_id_cmp , CMS_RecipientInfo *, ___ri, a0, const unsigned char *, ___id, a1, size_t, ___idlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add1_ReceiptRequest(___si, ___rr) \
      LP2(0x491a, int, CMS_add1_ReceiptRequest , CMS_SignerInfo *, ___si, a0, CMS_ReceiptRequest *, ___rr, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_SignerInfo_get0_signer_id(___si, ___keyid, ___issuer, ___sno) \
      LP4(0x4920, int, CMS_SignerInfo_get0_signer_id , CMS_SignerInfo *, ___si, a0, ASN1_OCTET_STRING **, ___keyid, a1, X509_NAME **, ___issuer, a2, ASN1_INTEGER **, ___sno, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_unsigned_add1_attr_by_NID(___si, ___nid, ___type, ___bytes, ___len) \
      LP5(0x4926, int, CMS_unsigned_add1_attr_by_NID , CMS_SignerInfo *, ___si, a0, int, ___nid, d0, int, ___type, d1, const void *, ___bytes, a1, int, ___len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_unsigned_add1_attr(___si, ___attr) \
      LP2(0x492c, int, CMS_unsigned_add1_attr , CMS_SignerInfo *, ___si, a0, X509_ATTRIBUTE *, ___attr, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_signed_get_attr_by_NID(___si, ___nid, ___lastpos) \
      LP3(0x4932, int, CMS_signed_get_attr_by_NID , const CMS_SignerInfo *, ___si, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_get1_certs(___cms) \
      LP1(0x4938, STACK_OF(X509) *, CMS_get1_certs , CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_signed_add1_attr_by_NID(___si, ___nid, ___type, ___bytes, ___len) \
      LP5(0x493e, int, CMS_signed_add1_attr_by_NID , CMS_SignerInfo *, ___si, a0, int, ___nid, d0, int, ___type, d1, const void *, ___bytes, a1, int, ___len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_unsigned_add1_attr_by_txt(___si, ___attrname, ___type, ___bytes, ___len) \
      LP5(0x4944, int, CMS_unsigned_add1_attr_by_txt , CMS_SignerInfo *, ___si, a0, const char *, ___attrname, a1, int, ___type, d0, const void *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_dataFinal(___cms, ___bio) \
      LP2(0x494a, int, CMS_dataFinal , CMS_ContentInfo *, ___cms, a0, BIO *, ___bio, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_ktri_get0_signer_id(___ri, ___keyid, ___issuer, ___sno) \
      LP4(0x4950, int, CMS_RecipientInfo_ktri_get0_signer_id , CMS_RecipientInfo *, ___ri, a0, ASN1_OCTET_STRING **, ___keyid, a1, X509_NAME **, ___issuer, a2, ASN1_INTEGER **, ___sno, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_CMS_ReceiptRequest(___a, ___out) \
      LP2(0x4956, int, i2d_CMS_ReceiptRequest , CMS_ReceiptRequest *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add1_recipient_cert(___cms, ___recip, ___flags) \
      LP3(0x495c, CMS_RecipientInfo *, CMS_add1_recipient_cert , CMS_ContentInfo *, ___cms, a0, X509 *, ___recip, a1, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_dataInit(___cms, ___icont) \
      LP2(0x4962, BIO *, CMS_dataInit , CMS_ContentInfo *, ___cms, a0, BIO *, ___icont, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_signed_add1_attr_by_txt(___si, ___attrname, ___type, ___bytes, ___len) \
      LP5(0x4968, int, CMS_signed_add1_attr_by_txt , CMS_SignerInfo *, ___si, a0, const char *, ___attrname, a1, int, ___type, d0, const void *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_decrypt(___cms, ___ri) \
      LP2(0x496e, int, CMS_RecipientInfo_decrypt , CMS_ContentInfo *, ___cms, a0, CMS_RecipientInfo *, ___ri, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_signed_get_attr_count(___si) \
      LP1(0x4974, int, CMS_signed_get_attr_count , const CMS_SignerInfo *, ___si, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_get0_eContentType(___cms) \
      LP1(0x497a, const ASN1_OBJECT *, CMS_get0_eContentType , CMS_ContentInfo *, ___cms, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_set1_eContentType(___cms, ___oid) \
      LP2(0x4980, int, CMS_set1_eContentType , CMS_ContentInfo *, ___cms, a0, const ASN1_OBJECT *, ___oid, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_ReceiptRequest_create0(___id, ___idlen, ___allorfirst, ___receiptList, ___receiptsTo) \
      LP5(0x4986, CMS_ReceiptRequest *, CMS_ReceiptRequest_create0 , unsigned char *, ___id, a0, int, ___idlen, d0, int, ___allorfirst, d1, STACK_OF(GENERAL_NAMES) *, ___receiptList, a1, STACK_OF(GENERAL_NAMES) *, ___receiptsTo, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add1_signer(___cms, ___signer, ___pk, ___md, ___flags) \
      LP5(0x498c, CMS_SignerInfo *, CMS_add1_signer , CMS_ContentInfo *, ___cms, a0, X509 *, ___signer, a1, EVP_PKEY *, ___pk, a2, const EVP_MD *, ___md, a3, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_set0_pkey(___ri, ___pkey) \
      LP2(0x4992, int, CMS_RecipientInfo_set0_pkey , CMS_RecipientInfo *, ___ri, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_load_ssl_client_cert_function(___e, ___loadssl_f) \
      LP2(0x4998, int, ENGINE_set_load_ssl_client_cert_function , ENGINE *, ___e, a0, ENGINE_SSL_CLIENT_CERT_PTR, ___loadssl_f, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_ssl_client_cert_function(___e) \
      LP1(0x499e, ENGINE_SSL_CLIENT_CERT_PTR, ENGINE_get_ssl_client_cert_function , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_load_ssl_client_cert(___e, ___s, ___ca_dn, ___pcert, ___ppkey, ___pother, ___ui_method, ___callback_data) \
      LP8(0x49a4, int, ENGINE_load_ssl_client_cert , ENGINE *, ___e, a0, SSL *, ___s, a1, STACK_OF(X509_NAME) *, ___ca_dn, a2, X509 **, ___pcert, a3, EVP_PKEY **, ___ppkey, d0, STACK_OF(X509) **, ___pother, d1, UI_METHOD *, ___ui_method, d2, void *, ___callback_data, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_pkey_meths(___e) \
      LP1(0x49b0, int, ENGINE_register_pkey_meths , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_pkey_asn1_meth_engine(___nid) \
      LP1(0x49b6, ENGINE *, ENGINE_get_pkey_asn1_meth_engine , int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define WHIRLPOOL_Init(___c) \
      LP1(0x49bc, int, WHIRLPOOL_Init , WHIRLPOOL_CTX *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define WHIRLPOOL(___inp, ___bytes, ___md) \
      LP3(0x49c2, unsigned char *, WHIRLPOOL , const void *, ___inp, a0, size_t, ___bytes, d0, unsigned char *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_pkey_asn1_meth(___e, ___nid) \
      LP2(0x49c8, const EVP_PKEY_ASN1_METHOD *, ENGINE_get_pkey_asn1_meth , ENGINE *, ___e, a0, int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_pkey_meth(___e, ___nid) \
      LP2(0x49ce, const EVP_PKEY_METHOD *, ENGINE_get_pkey_meth , ENGINE *, ___e, a0, int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_CMS(___out, ___cms) \
      LP2(0x49d4, BIO *, BIO_new_CMS , BIO *, ___out, a0, CMS_ContentInfo *, ___cms, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_default_pkey_asn1_meths(___e) \
      LP1(0x49da, int, ENGINE_set_default_pkey_asn1_meths , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define WHIRLPOOL_BitUpdate(___ctx, ___inp, ___bits) \
      LP3NR(0x49e0, WHIRLPOOL_BitUpdate , WHIRLPOOL_CTX *, ___ctx, a0, const void *, ___inp, a1, size_t, ___bits, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_CMS_bio_stream(___out, ___cms, ___in, ___flags) \
      LP4(0x49e6, int, i2d_CMS_bio_stream , BIO *, ___out, a0, CMS_ContentInfo *, ___cms, a1, BIO *, ___in, a2, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_stream(___boundary, ___cms) \
      LP2(0x49ec, int, CMS_stream , unsigned char ***, ___boundary, a0, CMS_ContentInfo *, ___cms, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_pkey_asn1_find_str(___pe, ___str, ___len) \
      LP3(0x49f2, const EVP_PKEY_ASN1_METHOD *, ENGINE_pkey_asn1_find_str , ENGINE **, ___pe, a0, const char *, ___str, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_pkey_meths(___e) \
      LP1(0x49f8, ENGINE_PKEY_METHS_PTR, ENGINE_get_pkey_meths , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_pkey_asn1_meths(___e) \
      LP1(0x49fe, int, ENGINE_register_pkey_asn1_meths , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_default_pkey_meths(___e) \
      LP1(0x4a04, int, ENGINE_set_default_pkey_meths , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define HMAC_CTX_copy(___dctx, ___sctx) \
      LP2(0x4a0a, int, HMAC_CTX_copy , HMAC_CTX *, ___dctx, a0, HMAC_CTX *, ___sctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_pkey_asn1_meths(___e) \
      LP1(0x4a10, ENGINE_PKEY_ASN1_METHS_PTR, ENGINE_get_pkey_asn1_meths , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_whirlpool() \
      LP0(0x4a16, const EVP_MD *, EVP_whirlpool ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_all_pkey_meths() \
      LP0NR(0x4a1c, ENGINE_register_all_pkey_meths ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define WHIRLPOOL_Final(___md, ___c) \
      LP2(0x4a22, int, WHIRLPOOL_Final , unsigned char *, ___md, a0, WHIRLPOOL_CTX *, ___c, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_pkey_asn1_meth_str(___e, ___str, ___len) \
      LP3(0x4a28, const EVP_PKEY_ASN1_METHOD *, ENGINE_get_pkey_asn1_meth_str , ENGINE *, ___e, a0, const char *, ___str, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_all_pkey_asn1_meths() \
      LP0NR(0x4a2e, ENGINE_register_all_pkey_asn1_meths ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_ContentInfo_print_ctx(___out, ___cms, ___a, ___p) \
      LP4NR(0x4a34, CMS_ContentInfo_print_ctx , BIO *, ___out, a0, CMS_ContentInfo *, ___cms, a1, int, ___a, d0, void *, ___p, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add1_crl(___cms, ___crl) \
      LP2(0x4a3a, int, CMS_add1_crl , CMS_ContentInfo *, ___cms, a0, X509_CRL *, ___crl, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_pkey_asn1_meths(___e, ___f) \
      LP2(0x4a40, int, ENGINE_set_pkey_asn1_meths , ENGINE *, ___e, a0, ENGINE_PKEY_ASN1_METHS_PTR, ___f, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_pkey_meth_engine(___nid) \
      LP1(0x4a46, ENGINE *, ENGINE_get_pkey_meth_engine , int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define WHIRLPOOL_Update(___c, ___inp, ___bytes) \
      LP3(0x4a4c, int, WHIRLPOOL_Update , WHIRLPOOL_CTX *, ___c, a0, const void *, ___inp, a1, size_t, ___bytes, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_CMS_stream(___out, ___cms, ___in, ___flags) \
      LP4(0x4a52, int, PEM_write_bio_CMS_stream , BIO *, ___out, a0, CMS_ContentInfo *, ___cms, a1, BIO *, ___in, a2, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_unregister_pkey_meths(___e) \
      LP1NR(0x4a58, ENGINE_unregister_pkey_meths , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_unregister_pkey_asn1_meths(___e) \
      LP1NR(0x4a5e, ENGINE_unregister_pkey_asn1_meths , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_pkey_meths(___e, ___f) \
      LP2(0x4a64, int, ENGINE_set_pkey_meths , ENGINE *, ___e, a0, ENGINE_PKEY_METHS_PTR, ___f, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSAparams_dup(___x) \
      LP1(0x4a6a, DSA *, DSAparams_dup , DSA *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DHparams_dup(___d) \
      LP1(0x4a70, DH *, DHparams_dup , DH *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_issuer_name_hash_old(___a) \
      LP1(0x4a76, unsigned long, X509_issuer_name_hash_old , X509 *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_subject_name_hash_old(___x) \
      LP1(0x4a7c, unsigned long, X509_subject_name_hash_old , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_VBASE_get_by_user(___vb, ___username) \
      LP2(0x4a82, SRP_user_pwd *, SRP_VBASE_get_by_user , SRP_VBASE *, ___vb, a0, char *, ___username, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Calc_server_key(___A, ___v, ___u, ___b, ___N) \
      LP5(0x4a88, BIGNUM *, SRP_Calc_server_key , const BIGNUM *, ___A, a0, const BIGNUM *, ___v, a1, const BIGNUM *, ___u, a2, const BIGNUM *, ___b, a3, const BIGNUM *, ___N, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_create_verifier(___user, ___pass, ___salt, ___verifier, ___N, ___g) \
      LP6(0x4a8e, char *, SRP_create_verifier , const char *, ___user, a0, const char *, ___pass, a1, char **, ___salt, a2, char **, ___verifier, a3, const char *, ___N, d0, const char *, ___g, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_create_verifier_BN(___user, ___pass, ___salt, ___verifier, ___N, ___g) \
      LP6(0x4a94, int, SRP_create_verifier_BN , const char *, ___user, a0, const char *, ___pass, a1, BIGNUM **, ___salt, a2, BIGNUM **, ___verifier, a3, const BIGNUM *, ___N, d0, const BIGNUM *, ___g, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Calc_u(___A, ___B, ___N) \
      LP3(0x4a9a, BIGNUM *, SRP_Calc_u , const BIGNUM *, ___A, a0, const BIGNUM *, ___B, a1, const BIGNUM *, ___N, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_VBASE_free(___vb) \
      LP1NR(0x4aa0, SRP_VBASE_free , SRP_VBASE *, ___vb, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Calc_client_key(___N, ___B, ___g, ___x, ___a, ___u) \
      LP6(0x4aa6, BIGNUM *, SRP_Calc_client_key , const BIGNUM *, ___N, a0, const BIGNUM *, ___B, a1, const BIGNUM *, ___g, a2, const BIGNUM *, ___x, a3, const BIGNUM *, ___a, d0, const BIGNUM *, ___u, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_get_default_gN(___id) \
      LP1(0x4aac, SRP_gN *, SRP_get_default_gN , const char *, ___id, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Calc_x(___s, ___user, ___pass) \
      LP3(0x4ab2, BIGNUM *, SRP_Calc_x , const BIGNUM *, ___s, a0, const char *, ___user, a1, const char *, ___pass, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Calc_B(___b, ___N, ___g, ___v) \
      LP4(0x4ab8, BIGNUM *, SRP_Calc_B , const BIGNUM *, ___b, a0, const BIGNUM *, ___N, a1, const BIGNUM *, ___g, a2, const BIGNUM *, ___v, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_VBASE_new(___seed_key) \
      LP1(0x4abe, SRP_VBASE *, SRP_VBASE_new , char *, ___seed_key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_check_known_gN_param(___g, ___N) \
      LP2(0x4ac4, char *, SRP_check_known_gN_param , const BIGNUM *, ___g, a0, const BIGNUM *, ___N, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Calc_A(___a, ___N, ___g) \
      LP3(0x4aca, BIGNUM *, SRP_Calc_A , const BIGNUM *, ___a, a0, const BIGNUM *, ___N, a1, const BIGNUM *, ___g, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Verify_A_mod_N(___A, ___N) \
      LP2(0x4ad0, int, SRP_Verify_A_mod_N , const BIGNUM *, ___A, a0, const BIGNUM *, ___N, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_VBASE_init(___vb, ___verifier_file) \
      LP2(0x4ad6, int, SRP_VBASE_init , SRP_VBASE *, ___vb, a0, char *, ___verifier_file, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Verify_B_mod_N(___B, ___N) \
      LP2(0x4adc, int, SRP_Verify_B_mod_N , const BIGNUM *, ___B, a0, const BIGNUM *, ___N, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_set_public_key_affine_coordinates(___key, ___x, ___y) \
      LP3(0x4ae2, int, EC_KEY_set_public_key_affine_coordinates , EC_KEY *, ___key, a0, BIGNUM *, ___x, a1, BIGNUM *, ___y, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_192_ctr() \
      LP0(0x4ae8, const EVP_CIPHER *, EVP_aes_192_ctr ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_ctr() \
      LP0(0x4aee, const EVP_CIPHER *, EVP_aes_128_ctr ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_ctr() \
      LP0(0x4af4, const EVP_CIPHER *, EVP_aes_256_ctr ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_get_flags(___key) \
      LP1(0x4afa, int, EC_KEY_get_flags , const EC_KEY *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_xts() \
      LP0(0x4b00, const EVP_CIPHER *, EVP_aes_128_xts ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_xts() \
      LP0(0x4b0c, const EVP_CIPHER *, EVP_aes_256_xts ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_gcm() \
      LP0(0x4b12, const EVP_CIPHER *, EVP_aes_128_gcm ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_clear_flags(___key, ___flags) \
      LP2NR(0x4b18, EC_KEY_clear_flags , EC_KEY *, ___key, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_set_flags(___key, ___flags) \
      LP2NR(0x4b1e, EC_KEY_set_flags , EC_KEY *, ___key, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_ccm() \
      LP0(0x4b24, const EVP_CIPHER *, EVP_aes_256_ccm ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_ccm() \
      LP0(0x4b30, const EVP_CIPHER *, EVP_aes_128_ccm ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_192_gcm() \
      LP0(0x4b36, const EVP_CIPHER *, EVP_aes_192_gcm ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_gcm() \
      LP0(0x4b3c, const EVP_CIPHER *, EVP_aes_256_gcm ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_192_ccm() \
      LP0(0x4b42, const EVP_CIPHER *, EVP_aes_192_ccm ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_rc4_hmac_md5() \
      LP0(0x4b48, const EVP_CIPHER *, EVP_rc4_hmac_md5 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_cbc_hmac_sha1() \
      LP0(0x4b4e, const EVP_CIPHER *, EVP_aes_128_cbc_hmac_sha1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_cbc_hmac_sha1() \
      LP0(0x4b60, const EVP_CIPHER *, EVP_aes_256_cbc_hmac_sha1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add0_recipient_password(___cms, ___iter, ___wrap_nid, ___pbe_nid, ___pass, ___passlen, ___kekciph) \
      LP7(0x4b66, CMS_RecipientInfo *, CMS_add0_recipient_password , CMS_ContentInfo *, ___cms, a0, int, ___iter, d0, int, ___wrap_nid, d1, int, ___pbe_nid, d2, unsigned char *, ___pass, a1, ossl_ssize_t, ___passlen, d3, const EVP_CIPHER *, ___kekciph, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_decrypt_set1_password(___cms, ___pass, ___passlen) \
      LP3(0x4b6c, int, CMS_decrypt_set1_password , CMS_ContentInfo *, ___cms, a0, unsigned char *, ___pass, a1, ossl_ssize_t, ___passlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_set0_password(___ri, ___pass, ___passlen) \
      LP3(0x4b72, int, CMS_RecipientInfo_set0_password , CMS_RecipientInfo *, ___ri, a0, unsigned char *, ___pass, a1, ossl_ssize_t, ___passlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_sign_ctx(___x, ___ctx) \
      LP2(0x4b78, int, X509_REQ_sign_ctx , X509_REQ *, ___x, a0, EVP_MD_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_sign_ctx(___x, ___ctx) \
      LP2(0x4b7e, int, X509_CRL_sign_ctx , X509_CRL *, ___x, a0, EVP_MD_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_signature_dump(___bp, ___sig, ___indent) \
      LP3(0x4b84, int, X509_signature_dump , BIO *, ___bp, a0, const ASN1_STRING *, ___sig, a1, int, ___indent, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_sign_ctx(___x, ___ctx) \
      LP2(0x4b8a, int, X509_sign_ctx , X509 *, ___x, a0, EVP_MD_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_sign_ctx(___it, ___algor1, ___algor2, ___signature, ___asn, ___ctx) \
      LP6(0x4b90, int, ASN1_item_sign_ctx , const ASN1_ITEM *, ___it, a0, X509_ALGOR *, ___algor1, a1, X509_ALGOR *, ___algor2, a2, ASN1_BIT_STRING *, ___signature, a3, void *, ___asn, d0, EVP_MD_CTX *, ___ctx, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set0_crls(___ctx, ___sk) \
      LP2NR(0x4ba2, X509_STORE_CTX_set0_crls , X509_STORE_CTX *, ___ctx, a0, STACK_OF(X509_CRL) *, ___sk, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get_id(___s, ___len) \
      LP2(0x4ba8, const unsigned char *, SSL_SESSION_get_id , const SSL_SESSION *, ___s, a0, unsigned int *, ___len, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_sess_set_new_cb(___ctx, ___new_session_cb) \
      LP2NRFP(0x4bae, SSL_CTX_sess_set_new_cb , SSL_CTX *, ___ctx, a0, __fpt, ___new_session_cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(struct ssl_st *ssl,SSL_SESSION *sess), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_sess_get_get_cb(___ctx) \
      LP1FR(0x4bb4, __fpr, SSL_CTX_sess_get_get_cb , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, SSL_SESSION *(*__fpr)(SSL *, const unsigned char *, int, int *), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_sess_set_get_cb(___ctx, ___get_session_cb) \
      LP2NRFP(0x4bba, SSL_CTX_sess_set_get_cb , SSL_CTX *, ___ctx, a0, __fpt, ___get_session_cb, a1,\
      , AMISSL_BASE_NAME, SSL_SESSION *(*__fpt)(SSL *,const unsigned char *,int,int *), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_info_callback(___ctx) \
      LP1FR(0x4bc0, __fpr, SSL_CTX_get_info_callback , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, void (*__fpr)(const SSL *ssl,int type,int val), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_client_cert_cb(___ctx, ___client_cert_cb) \
      LP2NRFP(0x4bc6, SSL_CTX_set_client_cert_cb , SSL_CTX *, ___ctx, a0, __fpt, ___client_cert_cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(SSL *ssl,X509 **x509,EVP_PKEY **pkey), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_sess_set_remove_cb(___ctx, ___remove_session_cb) \
      LP2NRFP(0x4bcc, SSL_CTX_sess_set_remove_cb , SSL_CTX *, ___ctx, a0, __fpt, ___remove_session_cb, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(struct ssl_ctx_st *ctx,SSL_SESSION *sess), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_sess_get_new_cb(___ctx) \
      LP1FR(0x4bd2, __fpr, SSL_CTX_sess_get_new_cb , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(struct ssl_st *ssl, SSL_SESSION *sess), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_client_cert_cb(___ctx) \
      LP1FR(0x4bd8, __fpr, SSL_CTX_get_client_cert_cb , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(SSL *ssl, X509 **x509, EVP_PKEY **pkey), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_sess_get_remove_cb(___ctx) \
      LP1FR(0x4bde, __fpr, SSL_CTX_sess_get_remove_cb , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, void (*__fpr)(struct ssl_ctx_st *ctx, SSL_SESSION *sess), 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_SSL_SESSION(___bp, ___x) \
      LP2(0x4be4, int, PEM_write_bio_SSL_SESSION , BIO *, ___bp, a0, SSL_SESSION *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_SSL_SESSION(___bp, ___x, ___cb, ___u) \
      LP4(0x4bf0, SSL_SESSION *, PEM_read_bio_SSL_SESSION , BIO *, ___bp, a0, SSL_SESSION **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define FIPS_mode_set(___r) \
      LP1(0x4cda, int, FIPS_mode_set , int, ___r, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_X931_generate_Xpq(___Xp, ___Xq, ___nbits, ___ctx) \
      LP4(0x4ce0, int, BN_X931_generate_Xpq , BIGNUM *, ___Xp, a0, BIGNUM *, ___Xq, a1, int, ___nbits, d0, BN_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get0_nist_prime_384() \
      LP0(0x4ce6, const BIGNUM *, BN_get0_nist_prime_384 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_set_mark() \
      LP0(0x4cec, int, ERR_set_mark ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_invert_ex(___n, ___r, ___b, ___ctx) \
      LP4(0x4cf2, int, BN_BLINDING_invert_ex , BIGNUM *, ___n, a0, const BIGNUM *, ___r, a1, BN_BLINDING *, ___b, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAME_CONSTRAINTS_free(___ncons) \
      LP1NR(0x4cf8, NAME_CONSTRAINTS_free , NAME_CONSTRAINTS *, ___ncons, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set0_param(___ctx, ___param) \
      LP2NR(0x4cfe, X509_STORE_CTX_set0_param , X509_STORE_CTX *, ___ctx, a0, X509_VERIFY_PARAM *, ___param, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define POLICY_CONSTRAINTS_free(___pcons) \
      LP1NR(0x4d04, POLICY_CONSTRAINTS_free , POLICY_CONSTRAINTS *, ___pcons, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_nist_mod_192(___r, ___a, ___p, ___ctx) \
      LP4(0x4d0a, int, BN_nist_mod_192 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_SUBTREE_free(___sub) \
      LP1NR(0x4d10, GENERAL_SUBTREE_free , GENERAL_SUBTREE *, ___sub, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_safe(___psafes, ___bags, ___safe_nid, ___iter, ___pass) \
      LP5(0x4d16, int, PKCS12_add_safe , STACK_OF(PKCS7) **, ___psafes, a0, STACK_OF(PKCS12_SAFEBAG) *, ___bags, a1, int, ___safe_nid, d0, int, ___iter, d1, const char *, ___pass, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get0_nist_prime_192() \
      LP0(0x4d1c, const BIGNUM *, BN_get0_nist_prime_192 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_keyid_get0(___x, ___len) \
      LP2(0x4d22, unsigned char *, X509_keyid_get0 , X509 *, ___x, a0, int *, ___len, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_policy_node_get0_parent(___node) \
      LP1(0x4d2e, const X509_POLICY_NODE *, X509_policy_node_get0_parent , const X509_POLICY_NODE *, ___node, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define a2i_IPADDRESS(___ipasc) \
      LP1(0x4d34, ASN1_OCTET_STRING *, a2i_IPADDRESS , const char *, ___ipasc, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_depth(___ctx, ___depth) \
      LP2NR(0x4d3a, X509_STORE_CTX_set_depth , X509_STORE_CTX *, ___ctx, a0, int, ___depth, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_inherit(___to, ___from) \
      LP2(0x4d40, int, X509_VERIFY_PARAM_inherit , X509_VERIFY_PARAM *, ___to, a0, const X509_VERIFY_PARAM *, ___from, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set_depth(___param, ___depth) \
      LP2NR(0x4d4c, X509_VERIFY_PARAM_set_depth , X509_VERIFY_PARAM *, ___param, a0, int, ___depth, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_add1_attr_by_txt(___key, ___attrname, ___type, ___bytes, ___len) \
      LP5(0x4d52, int, EVP_PKEY_add1_attr_by_txt , EVP_PKEY *, ___key, a0, const char *, ___attrname, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_set_flags(___b, ___l) \
      LP2NR(0x4d58, BN_BLINDING_set_flags , BN_BLINDING *, ___b, a0, unsigned long, ___l, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set1_policies(___param, ___policies) \
      LP2(0x4d5e, int, X509_VERIFY_PARAM_set1_policies , X509_VERIFY_PARAM *, ___param, a0, STACK_OF(ASN1_OBJECT) *, ___policies, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set1_name(___param, ___name) \
      LP2(0x4d64, int, X509_VERIFY_PARAM_set1_name , X509_VERIFY_PARAM *, ___param, a0, const char *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define POLICY_MAPPING_free(___pmap) \
      LP1NR(0x4d6a, POLICY_MAPPING_free , POLICY_MAPPING *, ___pmap, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_cmp(___a, ___b) \
      LP2(0x4d7c, int, EVP_PKEY_cmp , const EVP_PKEY *, ___a, a0, const EVP_PKEY *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_policy_level_node_count(___level) \
      LP1(0x4d82, int, X509_policy_level_node_count , X509_POLICY_LEVEL *, ___level, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_attr(___key, ___loc) \
      LP2(0x4d88, X509_ATTRIBUTE *, EVP_PKEY_get_attr , const EVP_PKEY *, ___key, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_SUBTREE_new() \
      LP0(0x4d8e, GENERAL_SUBTREE *, GENERAL_SUBTREE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_policy_node_get0_qualifiers(___node) \
      LP1(0x4d94, STACK_OF(POLICYQUALINFO) *, X509_policy_node_get0_qualifiers , const X509_POLICY_NODE *, ___node, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_policy_node_get0_policy(___node) \
      LP1(0x4da6, const ASN1_OBJECT *, X509_policy_node_get0_policy , const X509_POLICY_NODE *, ___node, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_safes(___safes, ___p7_nid) \
      LP2(0x4dac, PKCS12 *, PKCS12_add_safes , STACK_OF(PKCS7) *, ___safes, a0, int, ___p7_nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_convert_ex(___n, ___r, ___b, ___ctx) \
      LP4(0x4db2, int, BN_BLINDING_convert_ex , BIGNUM *, ___n, a0, BIGNUM *, ___r, a1, BN_BLINDING *, ___b, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_policy_tree_free(___tree) \
      LP1NR(0x4db8, X509_policy_tree_free , X509_POLICY_TREE *, ___tree, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get0_nist_prime_224() \
      LP0(0x4dc4, const BIGNUM *, BN_get0_nist_prime_224 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GENCB_call(___cb, ___a, ___b) \
      LP3(0x4dca, int, BN_GENCB_call , BN_GENCB *, ___cb, a0, int, ___a, d0, int, ___b, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAME_CONSTRAINTS_new() \
      LP0(0x4dd0, NAME_CONSTRAINTS *, NAME_CONSTRAINTS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECParameters_print(___bp, ___key) \
      LP2(0x4dd6, int, ECParameters_print , BIO *, ___bp, a0, const EC_KEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set_trust(___param, ___trust) \
      LP2(0x4de2, int, X509_VERIFY_PARAM_set_trust , X509_VERIFY_PARAM *, ___param, a0, int, ___trust, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_attr_count(___key) \
      LP1(0x4de8, int, EVP_PKEY_get_attr_count , const EVP_PKEY *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get0_param(___ctx) \
      LP1(0x4dee, X509_VERIFY_PARAM *, X509_STORE_CTX_get0_param , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_depth(___store, ___depth) \
      LP2(0x4dfa, int, X509_STORE_set_depth , X509_STORE *, ___store, a0, int, ___depth, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_put_eoc(___pp) \
      LP1(0x4e06, int, ASN1_put_eoc , unsigned char **, ___pp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_table_cleanup() \
      LP0NR(0x4e0c, X509_VERIFY_PARAM_table_cleanup ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_setup_blinding(___rsa, ___ctx) \
      LP2(0x4e12, BN_BLINDING *, RSA_setup_blinding , RSA *, ___rsa, a0, BN_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_find_ex(___st, ___data) \
      LP2(0x4e18, int, OPENSSL_sk_find_ex , OPENSSL_STACK *, ___st, a0, const void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define POLICY_CONSTRAINTS_new() \
      LP0(0x4e1e, POLICY_CONSTRAINTS *, POLICY_CONSTRAINTS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get_depth(___param) \
      LP1(0x4e24, int, X509_VERIFY_PARAM_get_depth , const X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_ndef_i2d(___val, ___out, ___it) \
      LP3(0x4e2a, int, ASN1_item_ndef_i2d , ASN1_VALUE *, ___val, a0, unsigned char **, ___out, a1, const ASN1_ITEM *, ___it, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_pop_to_mark() \
      LP0(0x4e30, int, ERR_pop_to_mark ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_policy_level_get0_node(___level, ___i) \
      LP2(0x4e36, X509_POLICY_NODE *, X509_policy_level_get0_node , X509_POLICY_LEVEL *, ___level, a0, int, ___i, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7_NDEF(___a, ___out) \
      LP2(0x4e3c, int, i2d_PKCS7_NDEF , PKCS7 *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_generate_v3(___str, ___cnf) \
      LP2(0x4e42, ASN1_TYPE *, ASN1_generate_v3 , const char *, ___str, a0, X509V3_CTX *, ___cnf, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_policy_tree_level_count(___tree) \
      LP1(0x4e48, int, X509_policy_tree_level_count , const X509_POLICY_TREE *, ___tree, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_nist_mod_224(___r, ___a, ___p, ___ctx) \
      LP4(0x4e54, int, BN_nist_mod_224 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_dgram_non_fatal_error(___error) \
      LP1(0x4e5a, int, BIO_dgram_non_fatal_error , int, ___error, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define v2i_ASN1_BIT_STRING(___method, ___ctx, ___nval) \
      LP3(0x4e60, ASN1_BIT_STRING *, v2i_ASN1_BIT_STRING , X509V3_EXT_METHOD *, ___method, a0, X509V3_CTX *, ___ctx, a1, STACK_OF(CONF_VALUE) *, ___nval, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_default(___ctx, ___name) \
      LP2(0x4e66, int, X509_STORE_CTX_set_default , X509_STORE_CTX *, ___ctx, a0, const char *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set1(___to, ___from) \
      LP2(0x4e6c, int, X509_VERIFY_PARAM_set1 , X509_VERIFY_PARAM *, ___to, a0, const X509_VERIFY_PARAM *, ___from, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define v2i_GENERAL_NAME_ex(___out, ___method, ___ctx, ___cnf, ___is_nc) \
      LP5(0x4e72, GENERAL_NAME *, v2i_GENERAL_NAME_ex , GENERAL_NAME *, ___out, a0, const X509V3_EXT_METHOD *, ___method, a1, X509V3_CTX *, ___ctx, a2, CONF_VALUE *, ___cnf, a3, int, ___is_nc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_nist_mod_521(___r, ___a, ___p, ___ctx) \
      LP4(0x4e78, int, BN_nist_mod_521 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_policy_tree_get0_level(___tree, ___i) \
      LP2(0x4e7e, X509_POLICY_LEVEL *, X509_policy_tree_get0_level , const X509_POLICY_TREE *, ___tree, a0, int, ___i, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_const_check_infinite_end(___p, ___len) \
      LP2(0x4e84, int, ASN1_const_check_infinite_end , const unsigned char **, ___p, a0, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_delete_attr(___key, ___loc) \
      LP2(0x4e8a, X509_ATTRIBUTE *, EVP_PKEY_delete_attr , EVP_PKEY *, ___key, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get0_nist_prime_256() \
      LP0(0x4e90, const BIGNUM *, BN_get0_nist_prime_256 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2v_ASN1_BIT_STRING(___method, ___bits, ___extlist) \
      LP3(0x4e96, STACK_OF(CONF_VALUE) *, i2v_ASN1_BIT_STRING , X509V3_EXT_METHOD *, ___method, a0, ASN1_BIT_STRING *, ___bits, a1, STACK_OF(CONF_VALUE) *, ___extlist, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_nist_mod_384(___r, ___a, ___p, ___ctx) \
      LP4(0x4e9c, int, BN_nist_mod_384 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_attr_by_OBJ(___key, ___obj, ___lastpos) \
      LP3(0x4eae, int, EVP_PKEY_get_attr_by_OBJ , const EVP_PKEY *, ___key, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_lookup(___name) \
      LP1(0x4eb4, const X509_VERIFY_PARAM *, X509_VERIFY_PARAM_lookup , const char *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_NAME_from_section(___nm, ___dn_sk, ___chtype) \
      LP3(0x4ec0, int, X509V3_NAME_from_section , X509_NAME *, ___nm, a0, STACK_OF(CONF_VALUE) *, ___dn_sk, a1, unsigned long, ___chtype, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_add1_attr(___key, ___attr) \
      LP2(0x4ec6, int, EVP_PKEY_add1_attr , EVP_PKEY *, ___key, a0, X509_ATTRIBUTE *, ___attr, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_dump_indent_cb(___cb, ___u, ___s, ___len, ___indent) \
      LP5FP(0x4ed2, int, BIO_dump_indent_cb , __fpt, ___cb, a0, void *, ___u, a1, const char *, ___s, a2, int, ___len, d0, int, ___indent, d1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const void *data,size_t len,void *u), 0, 0, 0, 0, 0, 0)

#define BN_nist_mod_256(___r, ___a, ___p, ___ctx) \
      LP4(0x4ee4, int, BN_nist_mod_256 , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, const BIGNUM *, ___p, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_add0_table(___param) \
      LP1(0x4eea, int, X509_VERIFY_PARAM_add0_table , X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_create_param(___b, ___e, ___m, ___ctx, ___bn_mod_exp, ___m_ctx) \
      LP6FP(0x4ef6, BN_BLINDING *, BN_BLINDING_create_param , BN_BLINDING *, ___b, a0, const BIGNUM *, ___e, a1, BIGNUM *, ___m, a2, BN_CTX *, ___ctx, a3, __fpt, ___bn_mod_exp, d0, BN_MONT_CTX *, ___m_ctx, d1,\
      , AMISSL_BASE_NAME, int (*__fpt)(BIGNUM *r,const BIGNUM *a,const BIGNUM *p,const BIGNUM *m,BN_CTX *ctx,BN_MONT_CTX *m_ctx), 0, 0, 0, 0, 0, 0)

#define BN_get0_nist_prime_521() \
      LP0(0x4efc, const BIGNUM *, BN_get0_nist_prime_521 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_is_prime_fasttest_ex(___p, ___nchecks, ___ctx, ___do_trial_devision, ___cb) \
      LP5(0x4f02, int, BN_is_prime_fasttest_ex , const BIGNUM *, ___p, a0, int, ___nchecks, d0, BN_CTX *, ___ctx, a1, int, ___do_trial_devision, d1, BN_GENCB *, ___cb, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_policy_check(___ptree, ___pexplicit_policy, ___certs, ___policy_oids, ___flags) \
      LP5(0x4f08, int, X509_policy_check , X509_POLICY_TREE **, ___ptree, a0, int *, ___pexplicit_policy, a1, STACK_OF(X509) *, ___certs, a2, STACK_OF(ASN1_OBJECT) *, ___policy_oids, a3, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_attr_by_NID(___key, ___nid, ___lastpos) \
      LP3(0x4f0e, int, EVP_PKEY_get_attr_by_NID , const EVP_PKEY *, ___key, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_get_flags(___b) \
      LP1(0x4f14, unsigned long, BN_BLINDING_get_flags , const BN_BLINDING *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_cert(___pbags, ___cert) \
      LP2(0x4f1a, PKCS12_SAFEBAG *, PKCS12_add_cert , STACK_OF(PKCS12_SAFEBAG) **, ___pbags, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_rand_key(___ctx, ___key) \
      LP2(0x4f20, int, EVP_CIPHER_CTX_rand_key , EVP_CIPHER_CTX *, ___ctx, a0, unsigned char *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define a2i_IPADDRESS_NC(___ipasc) \
      LP1(0x4f26, ASN1_OCTET_STRING *, a2i_IPADDRESS_NC , const char *, ___ipasc, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_set_digest(___p7, ___md) \
      LP2(0x4f2c, int, PKCS7_set_digest , PKCS7 *, ___p7, a0, const EVP_MD *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define POLICY_MAPPING_new() \
      LP0(0x4f32, POLICY_MAPPING *, POLICY_MAPPING_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_set0_type_other(___p7, ___type, ___other) \
      LP3(0x4f38, int, PKCS7_set0_type_other , PKCS7 *, ___p7, a0, int, ___type, d0, ASN1_TYPE *, ___other, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_add1_attr_by_OBJ(___key, ___obj, ___type, ___bytes, ___len) \
      LP5(0x4f4a, int, EVP_PKEY_add1_attr_by_OBJ , EVP_PKEY *, ___key, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set_time(___param, ___t) \
      LP2NR(0x4f50, X509_VERIFY_PARAM_set_time , X509_VERIFY_PARAM *, ___param, a0, time_t, ___t, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_key(___pbags, ___key, ___key_usage, ___iter, ___key_nid, ___pass) \
      LP6(0x4f5c, PKCS12_SAFEBAG *, PKCS12_add_key , STACK_OF(PKCS12_SAFEBAG) **, ___pbags, a0, EVP_PKEY *, ___key, a1, int, ___key_usage, d0, int, ___iter, d1, int, ___key_nid, d2, const char *, ___pass, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_dump_cb(___cb, ___u, ___s, ___len) \
      LP4FP(0x4f68, int, BIO_dump_cb , __fpt, ___cb, a0, void *, ___u, a1, const char *, ___s, a2, int, ___len, a3,\
      , AMISSL_BASE_NAME, int (*__fpt)(const void *data,size_t len,void *u), 0, 0, 0, 0, 0, 0)

#define BN_get_rfc3526_prime_8192(___bn) \
      LP1(0x4f7a, BIGNUM *, BN_get_rfc3526_prime_8192 , BIGNUM *, ___bn, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_clear_flags(___param, ___flags) \
      LP2(0x4f80, int, X509_VERIFY_PARAM_clear_flags , X509_VERIFY_PARAM *, ___param, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get_rfc2409_prime_1024(___bn) \
      LP1(0x4f86, BIGNUM *, BN_get_rfc2409_prime_1024 , BIGNUM *, ___bn, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get_rfc3526_prime_2048(___bn) \
      LP1(0x4f8c, BIGNUM *, BN_get_rfc3526_prime_2048 , BIGNUM *, ___bn, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get_rfc3526_prime_6144(___bn) \
      LP1(0x4f92, BIGNUM *, BN_get_rfc3526_prime_6144 , BIGNUM *, ___bn, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get_rfc3526_prime_1536(___bn) \
      LP1(0x4f98, BIGNUM *, BN_get_rfc3526_prime_1536 , BIGNUM *, ___bn, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get_rfc3526_prime_3072(___bn) \
      LP1(0x4f9e, BIGNUM *, BN_get_rfc3526_prime_3072 , BIGNUM *, ___bn, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get_rfc3526_prime_4096(___bn) \
      LP1(0x4fa4, BIGNUM *, BN_get_rfc3526_prime_4096 , BIGNUM *, ___bn, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get_rfc2409_prime_768(___bn) \
      LP1(0x4faa, BIGNUM *, BN_get_rfc2409_prime_768 , BIGNUM *, ___bn, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get_flags(___param) \
      LP1(0x4fb0, unsigned long, X509_VERIFY_PARAM_get_flags , X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_new() \
      LP0(0x4fb6, EVP_CIPHER_CTX *, EVP_CIPHER_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_free(___a) \
      LP1NR(0x4fbc, EVP_CIPHER_CTX_free , EVP_CIPHER_CTX *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_block_size(___cipher) \
      LP1(0x4fc2, int, EVP_CIPHER_block_size , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_set_app_data(___ctx, ___data) \
      LP2NR(0x4fc8, EVP_CIPHER_CTX_set_app_data , EVP_CIPHER_CTX *, ___ctx, a0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_method_type(___b) \
      LP1(0x4fce, int, BIO_method_type , const BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_nid(___ctx) \
      LP1(0x4fd4, int, EVP_CIPHER_CTX_nid , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_key_length(___ctx) \
      LP1(0x4fda, int, EVP_CIPHER_CTX_key_length , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_size(___md) \
      LP1(0x4fe0, int, EVP_MD_size , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_test_flags(___ctx, ___flags) \
      LP2(0x4fe6, int, EVP_MD_CTX_test_flags , const EVP_MD_CTX *, ___ctx, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_clear_flags(___b, ___flags) \
      LP2NR(0x4fec, BIO_clear_flags , BIO *, ___b, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_pkey_type(___md) \
      LP1(0x4ff2, int, EVP_MD_pkey_type , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_clear_flags(___ctx, ___flags) \
      LP2NR(0x4ff8, EVP_MD_CTX_clear_flags , EVP_MD_CTX *, ___ctx, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_flags(___cipher) \
      LP1(0x4ffe, unsigned long, EVP_CIPHER_flags , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_get_callback(___b) \
      LP1(0x5004, BIO_callback_fn, BIO_get_callback , const BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_key_length(___cipher) \
      LP1(0x500a, int, EVP_CIPHER_key_length , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_Cipher(___c, ___out, ___in, ___inl) \
      LP4(0x5010, int, EVP_Cipher , EVP_CIPHER_CTX *, ___c, a0, unsigned char *, ___out, a1, const unsigned char *, ___in, a2, unsigned int, ___inl, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_block_size(___ctx) \
      LP1(0x5016, int, EVP_CIPHER_CTX_block_size , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_cipher(___ctx) \
      LP1(0x501c, const EVP_CIPHER *, EVP_CIPHER_CTX_cipher , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get_app_data(___ctx) \
      LP1(0x5022, void *, EVP_CIPHER_CTX_get_app_data , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_block_size(___md) \
      LP1(0x5028, int, EVP_MD_block_size , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_md(___ctx) \
      LP1(0x5034, const EVP_MD *, EVP_MD_CTX_md , const EVP_MD_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_method_name(___b) \
      LP1(0x503a, const char *, BIO_method_name , const BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_iv_length(___ctx) \
      LP1(0x5040, int, EVP_CIPHER_CTX_iv_length , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_memcmp(___in_a, ___in_b, ___len) \
      LP3(0x5046, int, CRYPTO_memcmp , const void *, ___in_a, a0, const void *, ___in_b, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_consttime_swap(___swap, ___a, ___b, ___nwords) \
      LP4NR(0x504c, BN_consttime_swap , BN_ULONG, ___swap, d0, BIGNUM *, ___a, a0, BIGNUM *, ___b, a1, int, ___nwords, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_EXTENSIONS(___a, ___out) \
      LP2(0x5052, int, i2d_X509_EXTENSIONS , X509_EXTENSIONS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_EXTENSIONS(___a, ___in, ___len) \
      LP3(0x5058, X509_EXTENSIONS *, d2i_X509_EXTENSIONS , X509_EXTENSIONS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ALGOR_get0(___pobj, ___pptype, ___ppval, ___algor) \
      LP4NR(0x505e, X509_ALGOR_get0 , const ASN1_OBJECT **, ___pobj, a0, int *, ___pptype, a1, const void **, ___ppval, a2, const X509_ALGOR *, ___algor, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ALGOR_set0(___alg, ___aobj, ___ptype, ___pval) \
      LP4(0x5064, int, X509_ALGOR_set0 , X509_ALGOR *, ___alg, a0, ASN1_OBJECT *, ___aobj, a1, int, ___ptype, d0, void *, ___pval, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509at_get0_data_by_OBJ(___x, ___obj, ___lastpos, ___type) \
      LP4(0x506a, void *, X509at_get0_data_by_OBJ , STACK_OF(X509_ATTRIBUTE) *, ___x, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0, int, ___type, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TYPE_set1(___a, ___type, ___value) \
      LP3(0x5070, int, ASN1_TYPE_set1 , ASN1_TYPE *, ___a, a0, int, ___type, d0, const void *, ___value, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_set0(___str, ___data, ___len) \
      LP3NR(0x5076, ASN1_STRING_set0 , ASN1_STRING *, ___str, a0, void *, ___data, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_ALGORS(___a, ___out) \
      LP2(0x507c, int, i2d_X509_ALGORS , X509_ALGORS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_ALGORS(___a, ___in, ___len) \
      LP3(0x5088, X509_ALGORS *, d2i_X509_ALGORS , X509_ALGORS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SMIME_read_ASN1(___bio, ___bcont, ___it) \
      LP3(0x508e, ASN1_VALUE *, SMIME_read_ASN1 , BIO *, ___bio, a0, BIO **, ___bcont, a1, const ASN1_ITEM *, ___it, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_isservice() \
      LP0(0x5094, int, OPENSSL_isservice ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_clear_flags(___ctx, ___flags) \
      LP2NR(0x509a, EVP_CIPHER_CTX_clear_flags , EVP_CIPHER_CTX *, ___ctx, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_X931_generate_prime_ex(___p, ___p1, ___p2, ___Xp1, ___Xp2, ___Xp, ___e, ___ctx, ___cb) \
      LP9(0x50a0, int, BN_X931_generate_prime_ex , BIGNUM *, ___p, a0, BIGNUM *, ___p1, a1, BIGNUM *, ___p2, a2, BIGNUM *, ___Xp1, a3, BIGNUM *, ___Xp2, d0, const BIGNUM *, ___Xp, d1, const BIGNUM *, ___e, d2, BN_CTX *, ___ctx, d3, BN_GENCB *, ___cb, d4,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_test_flags(___ctx, ___flags) \
      LP2(0x50a6, int, EVP_CIPHER_CTX_test_flags , const EVP_CIPHER_CTX *, ___ctx, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_add_alg_module() \
      LP0NR(0x50ac, EVP_add_alg_module ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_X931_derive_prime_ex(___p, ___p1, ___p2, ___Xp, ___Xp1, ___Xp2, ___e, ___ctx, ___cb) \
      LP9(0x50b2, int, BN_X931_derive_prime_ex , BIGNUM *, ___p, a0, BIGNUM *, ___p1, a1, BIGNUM *, ___p2, a2, const BIGNUM *, ___Xp, d0, const BIGNUM *, ___Xp1, a3, const BIGNUM *, ___Xp2, d1, const BIGNUM *, ___e, d2, BN_CTX *, ___ctx, d3, BN_GENCB *, ___cb, d4,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_init() \
      LP0NR(0x50b8, OPENSSL_init ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_strdup(___str, ___file, ___line) \
      LP3(0x50be, char *, CRYPTO_strdup , const char *, ___str, a0, const char *, ___file, a1, int, ___line, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_TS_ACCURACY(___a, ___pp) \
      LP2(0x50ca, int, i2d_TS_ACCURACY , const TS_ACCURACY *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_TS_MSG_IMPRINT(___a, ___pp) \
      LP2(0x50d6, int, i2d_TS_MSG_IMPRINT , const TS_MSG_IMPRINT *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_print_public(___out, ___pkey, ___indent, ___pctx) \
      LP4(0x50dc, int, EVP_PKEY_print_public , BIO *, ___out, a0, const EVP_PKEY *, ___pkey, a1, int, ___indent, d0, ASN1_PCTX *, ___pctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_new(___pkey, ___e) \
      LP2(0x50e2, EVP_PKEY_CTX *, EVP_PKEY_CTX_new , EVP_PKEY *, ___pkey, a0, ENGINE *, ___e, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_TS_TST_INFO(___a, ___pp) \
      LP2(0x50e8, int, i2d_TS_TST_INFO , const TS_TST_INFO *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_find(___pe, ___type) \
      LP2(0x50ee, const EVP_PKEY_ASN1_METHOD *, EVP_PKEY_asn1_find , ENGINE **, ___pe, a0, int, ___type, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_load_cert(___file) \
      LP1(0x50fa, X509 *, TS_CONF_load_cert , const char *, ___file, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_get_ext(___a, ___loc) \
      LP2(0x5100, X509_EXTENSION *, TS_REQ_get_ext , TS_REQ *, ___a, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_sign_init(___ctx) \
      LP1(0x5106, int, EVP_PKEY_sign_init , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_print(___out, ___ifld, ___indent, ___it, ___ctx) \
      LP5(0x510c, int, ASN1_item_print , BIO *, ___out, a0, ASN1_VALUE *, ___ifld, a1, int, ___indent, d0, const ASN1_ITEM *, ___it, a2, const ASN1_PCTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_set_nonce(___a, ___nonce) \
      LP2(0x5112, int, TS_TST_INFO_set_nonce , TS_TST_INFO *, ___a, a0, const ASN1_INTEGER *, ___nonce, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_dup(___a) \
      LP1(0x5118, TS_RESP *, TS_RESP_dup , TS_RESP *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_add0(___ameth) \
      LP1(0x511e, int, EVP_PKEY_asn1_add0 , const EVP_PKEY_ASN1_METHOD *, ___ameth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_add0_attrib_signing_time(___si, ___t) \
      LP2(0x5124, int, PKCS7_add0_attrib_signing_time , PKCS7_SIGNER_INFO *, ___si, a0, ASN1_TIME *, ___t, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_asn1_get_prefix(___b, ___pprefix, ___pprefix_free) \
      LP3(0x5130, int, BIO_asn1_get_prefix , BIO *, ___b, a0, asn1_ps_func **, ___pprefix, a1, asn1_ps_func **, ___pprefix_free, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_set_time(___a, ___gtime) \
      LP2(0x5136, int, TS_TST_INFO_set_time , TS_TST_INFO *, ___a, a0, const ASN1_GENERALIZEDTIME *, ___gtime, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_decrypt(___pmeth, ___decrypt_init, ___decrypt) \
      LP3NRFP2(0x513c, EVP_PKEY_meth_set_decrypt , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___decrypt_init, a1, __fpt2, ___decrypt, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *ctx), int (*__fpt2)(EVP_PKEY_CTX *ctx,unsigned char *out,size_t *outlen,const unsigned char *in,size_t inlen), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set_type_str(___pkey, ___str, ___len) \
      LP3(0x5142, int, EVP_PKEY_set_type_str , EVP_PKEY *, ___pkey, a0, const char *, ___str, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_keygen_info(___ctx, ___idx) \
      LP2(0x5148, int, EVP_PKEY_CTX_get_keygen_info , EVP_PKEY_CTX *, ___ctx, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_set_policy_id(___a, ___policy) \
      LP2(0x514e, int, TS_REQ_set_policy_id , TS_REQ *, ___a, a0, const ASN1_OBJECT *, ___policy, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_set_status_info(___a, ___info) \
      LP2(0x515a, int, TS_RESP_set_status_info , TS_RESP *, ___a, a0, TS_STATUS_INFO *, ___info, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_keygen(___ctx, ___ppkey) \
      LP2(0x5160, int, EVP_PKEY_keygen , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY **, ___ppkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestSignInit(___ctx, ___pctx, ___type, ___e, ___pkey) \
      LP5(0x5166, int, EVP_DigestSignInit , EVP_MD_CTX *, ___ctx, a0, EVP_PKEY_CTX **, ___pctx, a1, const EVP_MD *, ___type, a2, ENGINE *, ___e, a3, EVP_PKEY *, ___pkey, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_ACCURACY_set_millis(___a, ___millis) \
      LP2(0x516c, int, TS_ACCURACY_set_millis , TS_ACCURACY *, ___a, a0, const ASN1_INTEGER *, ___millis, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_dup(___a) \
      LP1(0x5172, TS_REQ *, TS_REQ_dup , TS_REQ *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAME_dup(___a) \
      LP1(0x5178, GENERAL_NAME *, GENERAL_NAME_dup , GENERAL_NAME *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get1_crls(___st, ___nm) \
      LP2(0x517e, STACK_OF(X509_CRL) *, X509_STORE_CTX_get1_crls , X509_STORE_CTX *, ___st, a0, X509_NAME *, ___nm, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_new(___id, ___flags, ___pem_str, ___info) \
      LP4(0x5184, EVP_PKEY_ASN1_METHOD *, EVP_PKEY_asn1_new , int, ___id, d0, int, ___flags, d1, const char *, ___pem_str, a0, const char *, ___info, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_NDEF(___out, ___val, ___it) \
      LP3(0x518a, BIO *, BIO_new_NDEF , BIO *, ___out, a0, ASN1_VALUE *, ___val, a1, const ASN1_ITEM *, ___it, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_MSG_IMPRINT_set_algo(___a, ___alg) \
      LP2(0x5190, int, TS_MSG_IMPRINT_set_algo , TS_MSG_IMPRINT *, ___a, a0, X509_ALGOR *, ___alg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_TS_TST_INFO_bio(___fp, ___a) \
      LP2(0x5196, int, i2d_TS_TST_INFO_bio , BIO *, ___fp, a0, TS_TST_INFO *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_set_ordering(___a, ___ordering) \
      LP2(0x519c, int, TS_TST_INFO_set_ordering , TS_TST_INFO *, ___a, a0, int, ___ordering, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_ext_by_OBJ(___a, ___obj, ___lastpos) \
      LP3(0x51a2, int, TS_TST_INFO_get_ext_by_OBJ , TS_TST_INFO *, ___a, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_get_tsa_section(___conf, ___section) \
      LP2(0x51ae, const char *, TS_CONF_get_tsa_section , CONF *, ___conf, a0, const char *, ___section, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SMIME_write_ASN1(___bio, ___val, ___data, ___flags, ___ctype_nid, ___econt_nid, ___mdalgs, ___it) \
      LP8(0x51b4, int, SMIME_write_ASN1 , BIO *, ___bio, a0, ASN1_VALUE *, ___val, a1, BIO *, ___data, a2, int, ___flags, a3, int, ___ctype_nid, d0, int, ___econt_nid, d1, STACK_OF(X509_ALGOR) *, ___mdalgs, d2, const ASN1_ITEM *, ___it, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_signer_key(___ctx, ___key) \
      LP2(0x51ba, int, TS_RESP_CTX_set_signer_key , TS_RESP_CTX *, ___ctx, a0, EVP_PKEY *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_encrypt_old(___enc_key, ___key, ___key_len, ___pub_key) \
      LP4(0x51c0, int, EVP_PKEY_encrypt_old , unsigned char *, ___enc_key, a0, const unsigned char *, ___key, a1, int, ___key_len, d0, EVP_PKEY *, ___pub_key, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_encrypt_init(___ctx) \
      LP1(0x51c6, int, EVP_PKEY_encrypt_init , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PCTX_get_cert_flags(___p) \
      LP1(0x51d2, unsigned long, ASN1_PCTX_get_cert_flags , const ASN1_PCTX *, ___p, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ESS_SIGNING_CERT(___a, ___pp) \
      LP2(0x51d8, int, i2d_ESS_SIGNING_CERT , const ESS_SIGNING_CERT *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_load_key(___file, ___pass) \
      LP2(0x51de, EVP_PKEY *, TS_CONF_load_key , const char *, ___file, a0, const char *, ___pass, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_SEQUENCE_ANY(___a, ___pp) \
      LP2(0x51e4, int, i2d_ASN1_SEQUENCE_ANY , const ASN1_SEQUENCE_ANY *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_TS_MSG_IMPRINT_bio(___fp, ___a) \
      LP2(0x51ea, TS_MSG_IMPRINT *, d2i_TS_MSG_IMPRINT_bio , BIO *, ___fp, a0, TS_MSG_IMPRINT **, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_public(___ameth, ___pub_decode, ___pub_encode, ___pub_cmp, ___pub_print, ___pkey_size, ___pkey_bits) \
      LP7NRFP6(0x51f0, EVP_PKEY_asn1_set_public , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt1, ___pub_decode, a1, __fpt2, ___pub_encode, a2, __fpt3, ___pub_cmp, a3, __fpt4, ___pub_print, d0, __fpt5, ___pkey_size, d1, __fpt5, ___pkey_bits, d2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY *pk,X509_PUBKEY *pub), int (*__fpt2)(X509_PUBKEY *pub,const EVP_PKEY *pk), int (*__fpt3)(const EVP_PKEY *a,const EVP_PKEY *b), int (*__fpt4)(BIO *out,const EVP_PKEY *pkey,int indent,ASN1_PCTX *pctx), int (*__fpt5)(const EVP_PKEY *pk), int (*__fpt6)(const EVP_PKEY *pk), 0, 0, 0, 0, 0, 0)

#define b2i_PublicKey_bio(___in) \
      LP1(0x51f6, EVP_PKEY *, b2i_PublicKey_bio , BIO *, ___in, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_asn1_set_prefix(___b, ___prefix, ___prefix_free) \
      LP3(0x51fc, int, BIO_asn1_set_prefix , BIO *, ___b, a0, asn1_ps_func *, ___prefix, a1, asn1_ps_func *, ___prefix_free, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_new_mac_key(___type, ___e, ___key, ___keylen) \
      LP4(0x5202, EVP_PKEY *, EVP_PKEY_new_mac_key , int, ___type, a0, ENGINE *, ___e, a1, const unsigned char *, ___key, a2, int, ___keylen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_ext_free(___a) \
      LP1NR(0x520e, TS_REQ_ext_free , TS_REQ *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_free(___ameth, ___pkey_free) \
      LP2NRFP(0x5214, EVP_PKEY_asn1_set_free , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___pkey_free, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(EVP_PKEY *pkey), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get0_asn1(___pkey) \
      LP1(0x521a, const EVP_PKEY_ASN1_METHOD *, EVP_PKEY_get0_asn1 , const EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_verify_recover_init(___ctx) \
      LP1(0x5226, int, EVP_PKEY_verify_recover_init , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_data(___ctx, ___data) \
      LP2NR(0x522c, EVP_PKEY_CTX_set_data , EVP_PKEY_CTX *, ___ctx, a0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_keygen_init(___ctx) \
      LP1(0x5232, int, EVP_PKEY_keygen_init , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_status_info(___ctx, ___status, ___text) \
      LP3(0x5238, int, TS_RESP_CTX_set_status_info , TS_RESP_CTX *, ___ctx, a0, int, ___status, d0, const char *, ___text, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_MSG_IMPRINT_get_algo(___a) \
      LP1(0x523e, X509_ALGOR *, TS_MSG_IMPRINT_get_algo , TS_MSG_IMPRINT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_print_bio(___bio, ___a) \
      LP2(0x5244, int, TS_REQ_print_bio , BIO *, ___bio, a0, TS_REQ *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_ctrl_str(___ctx, ___type, ___value) \
      LP3(0x524a, int, EVP_PKEY_CTX_ctrl_str , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___type, a1, const char *, ___value, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_default_digest_nid(___pkey, ___pnid) \
      LP2(0x5250, int, EVP_PKEY_get_default_digest_nid , EVP_PKEY *, ___pkey, a0, int *, ___pnid, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_PKCS7_stream(___out, ___p7, ___in, ___flags) \
      LP4(0x5256, int, PEM_write_bio_PKCS7_stream , BIO *, ___out, a0, PKCS7 *, ___p7, a1, BIO *, ___in, a2, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_MSG_IMPRINT_print_bio(___bio, ___msg) \
      LP2(0x525c, int, TS_MSG_IMPRINT_print_bio , BIO *, ___bio, a0, TS_MSG_IMPRINT *, ___msg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_asc2bn(___a, ___str) \
      LP2(0x5262, int, BN_asc2bn , BIGNUM **, ___a, a0, const char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_get_policy_id(___a) \
      LP1(0x5268, ASN1_OBJECT *, TS_REQ_get_policy_id , TS_REQ *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_TS_ACCURACY(___a, ___pp, ___length) \
      LP3(0x526e, TS_ACCURACY *, d2i_TS_ACCURACY , TS_ACCURACY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSO_global_lookup(___name) \
      LP1(0x5274, void *, DSO_global_lookup , const char *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_tsa_name(___conf, ___section, ___ctx) \
      LP3(0x527a, int, TS_CONF_set_tsa_name , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_SET_ANY(___a, ___pp) \
      LP2(0x5280, int, i2d_ASN1_SET_ANY , const ASN1_SEQUENCE_ANY *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PCTX_get_flags(___p) \
      LP1(0x5286, unsigned long, ASN1_PCTX_get_flags , const ASN1_PCTX *, ___p, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_ext_by_NID(___a, ___nid, ___lastpos) \
      LP3(0x528c, int, TS_TST_INFO_get_ext_by_NID , TS_TST_INFO *, ___a, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_new() \
      LP0(0x5292, TS_RESP *, TS_RESP_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_CERT_ID_dup(___a) \
      LP1(0x5298, ESS_CERT_ID *, ESS_CERT_ID_dup , ESS_CERT_ID *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_STATUS_INFO_dup(___a) \
      LP1(0x529e, TS_STATUS_INFO *, TS_STATUS_INFO_dup , TS_STATUS_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_delete_ext(___a, ___loc) \
      LP2(0x52a4, X509_EXTENSION *, TS_REQ_delete_ext , TS_REQ *, ___a, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestVerifyFinal(___ctx, ___sig, ___siglen) \
      LP3(0x52aa, int, EVP_DigestVerifyFinal , EVP_MD_CTX *, ___ctx, a0, const unsigned char *, ___sig, a1, size_t, ___siglen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_print_params(___out, ___pkey, ___inden, ___pctx) \
      LP4(0x52b0, int, EVP_PKEY_print_params , BIO *, ___out, a0, const EVP_PKEY *, ___pkey, a1, int, ___inden, d0, ASN1_PCTX *, ___pctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_get_msg_imprint(___a) \
      LP1(0x52b6, TS_MSG_IMPRINT *, TS_REQ_get_msg_imprint , TS_REQ *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_find_sigid_by_algs(___psignid, ___dig_nid, ___pkey_nid) \
      LP3(0x52bc, int, OBJ_find_sigid_by_algs , int *, ___psignid, a0, int, ___dig_nid, d0, int, ___pkey_nid, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_serial(___a) \
      LP1(0x52c2, const ASN1_INTEGER *, TS_TST_INFO_get_serial , const TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_get_nonce(___a) \
      LP1(0x52c8, const ASN1_INTEGER *, TS_REQ_get_nonce , const TS_REQ *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PUBKEY_set0_param(___pub, ___aobj, ___ptype, ___pval, ___penc, ___penclen) \
      LP6(0x52ce, int, X509_PUBKEY_set0_param , X509_PUBKEY *, ___pub, a0, ASN1_OBJECT *, ___aobj, a1, int, ___ptype, d0, void *, ___pval, a2, unsigned char *, ___penc, a3, int, ___penclen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set0_keygen_info(___ctx, ___dat, ___datlen) \
      LP3NR(0x52d4, EVP_PKEY_CTX_set0_keygen_info , EVP_PKEY_CTX *, ___ctx, a0, int *, ___dat, a1, int, ___datlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DIST_POINT_set_dpname(___dpn, ___iname) \
      LP2(0x52da, int, DIST_POINT_set_dpname , DIST_POINT_NAME *, ___dpn, a0, X509_NAME *, ___iname, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ISSUING_DIST_POINT(___a, ___pp) \
      LP2(0x52e0, int, i2d_ISSUING_DIST_POINT , ISSUING_DIST_POINT *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_data(___ctx) \
      LP1(0x52e6, void *, EVP_PKEY_CTX_get_data , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_STATUS_INFO_print_bio(___bio, ___a) \
      LP2(0x52ec, int, TS_STATUS_INFO_print_bio , BIO *, ___bio, a0, TS_STATUS_INFO *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_derive_init(___ctx) \
      LP1(0x52f2, int, EVP_PKEY_derive_init , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_TS_TST_INFO(___a, ___pp, ___length) \
      LP3(0x52f8, TS_TST_INFO *, d2i_TS_TST_INFO , TS_TST_INFO **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_add_alias(___to, ___from) \
      LP2(0x52fe, int, EVP_PKEY_asn1_add_alias , int, ___to, d0, int, ___from, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_TS_RESP_bio(___fp, ___a) \
      LP2(0x5304, TS_RESP *, d2i_TS_RESP_bio , BIO *, ___fp, a0, TS_RESP **, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OTHERNAME_cmp(___a, ___b) \
      LP2(0x530a, int, OTHERNAME_cmp , OTHERNAME *, ___a, a0, OTHERNAME *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAME_set0_value(___a, ___type, ___value) \
      LP3NR(0x5310, GENERAL_NAME_set0_value , GENERAL_NAME *, ___a, a0, int, ___type, d0, void *, ___value, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_RECIP_INFO_get0_alg(___ri, ___penc) \
      LP2NR(0x5316, PKCS7_RECIP_INFO_get0_alg , PKCS7_RECIP_INFO *, ___ri, a0, X509_ALGOR **, ___penc, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_new() \
      LP0(0x531c, TS_RESP_CTX *, TS_RESP_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_set_tst_info(___a, ___p7, ___tst_info) \
      LP3NR(0x5322, TS_RESP_set_tst_info , TS_RESP *, ___a, a0, PKCS7 *, ___p7, a1, TS_TST_INFO *, ___tst_info, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_final(___p7, ___data, ___flags) \
      LP3(0x5328, int, PKCS7_final , PKCS7 *, ___p7, a0, BIO *, ___data, a1, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_base_id(___pkey) \
      LP1(0x532e, int, EVP_PKEY_base_id , const EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_signer_cert(___ctx, ___signer) \
      LP2(0x5334, int, TS_RESP_CTX_set_signer_cert , TS_RESP_CTX *, ___ctx, a0, X509 *, ___signer, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_set_msg_imprint(___a, ___msg_imprint) \
      LP2(0x533a, int, TS_REQ_set_msg_imprint , TS_REQ *, ___a, a0, TS_MSG_IMPRINT *, ___msg_imprint, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_ctrl(___ctx, ___keytype, ___optype, ___cmd, ___p1, ___p2) \
      LP6(0x5340, int, EVP_PKEY_CTX_ctrl , EVP_PKEY_CTX *, ___ctx, a0, int, ___keytype, d0, int, ___optype, d1, int, ___cmd, d2, int, ___p1, d3, void *, ___p2, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_digests(___conf, ___section, ___ctx) \
      LP3(0x5346, int, TS_CONF_set_digests , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_TS_MSG_IMPRINT(___a, ___pp, ___length) \
      LP3(0x534c, TS_MSG_IMPRINT *, d2i_TS_MSG_IMPRINT , TS_MSG_IMPRINT **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_ctrl(___pmeth, ___ctrl, ___ctrl_str) \
      LP3NRFP2(0x5352, EVP_PKEY_meth_set_ctrl , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___ctrl, a1, __fpt2, ___ctrl_str, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *ctx,int type,int p1,void *p2), int (*__fpt2)(EVP_PKEY_CTX *ctx,const char *type,const char *value), 0, 0, 0, 0, 0, 0)

#define TS_REQ_get_ext_by_NID(___a, ___nid, ___lastpos) \
      LP3(0x5358, int, TS_REQ_get_ext_by_NID , TS_REQ *, ___a, a0, int, ___nid, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_pbe_set0_algor(___algor, ___alg, ___iter, ___salt, ___saltlen) \
      LP5(0x535e, int, PKCS5_pbe_set0_algor , X509_ALGOR *, ___algor, a0, int, ___alg, d0, int, ___iter, d1, const unsigned char *, ___salt, a1, int, ___saltlen, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_ACCURACY_new() \
      LP0(0x536a, TS_ACCURACY *, TS_ACCURACY_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_METHOD_free(___m) \
      LP1NR(0x5370, X509_CRL_METHOD_free , X509_CRL_METHOD *, ___m, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PCTX_get_nm_flags(___p) \
      LP1(0x5376, unsigned long, ASN1_PCTX_get_nm_flags , const ASN1_PCTX *, ___p, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_sign(___pmeth, ___sign_init, ___sign) \
      LP3NRFP2(0x537c, EVP_PKEY_meth_set_sign , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___sign_init, a1, __fpt2, ___sign, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *ctx), int (*__fpt2)(EVP_PKEY_CTX *ctx,unsigned char *sig,size_t *siglen,const unsigned char *tbs,size_t tbslen), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_decrypt_init(___ctx) \
      LP1(0x5388, int, EVP_PKEY_decrypt_init , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2b_PVK_bio(___out, ___pk, ___enclevel, ___cb, ___u) \
      LP5(0x5394, int, i2b_PVK_bio , BIO *, ___out, a0, EVP_PKEY *, ___pk, a1, int, ___enclevel, d0, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_print_private(___out, ___pkey, ___indent, ___pctx) \
      LP4(0x539a, int, EVP_PKEY_print_private , BIO *, ___out, a0, const EVP_PKEY *, ___pkey, a1, int, ___indent, d0, ASN1_PCTX *, ___pctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAME_get0_value(___a, ___ptype) \
      LP2(0x53a0, void *, GENERAL_NAME_get0_value , GENERAL_NAME *, ___a, a0, int *, ___ptype, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define b2i_PVK_bio(___in, ___cb, ___u) \
      LP3(0x53a6, EVP_PKEY *, b2i_PVK_bio , BIO *, ___in, a0, pem_password_cb *, ___cb, a1, void *, ___u, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTCTIME_adj(___s, ___t, ___offset_day, ___offset_sec) \
      LP4(0x53ac, ASN1_UTCTIME *, ASN1_UTCTIME_adj , ASN1_UTCTIME *, ___s, a0, time_t, ___t, d0, int, ___offset_day, d1, int, ___offset_sec, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_new() \
      LP0(0x53b2, TS_TST_INFO *, TS_TST_INFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_do_all_sorted(___fn, ___arg) \
      LP2NRFP(0x53b8, EVP_MD_do_all_sorted , __fpt, ___fn, a0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(const EVP_MD *ciph,const char *from,const char *to,void *x), 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_default_engine(___name) \
      LP1(0x53be, int, TS_CONF_set_default_engine , const char *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_ACCURACY_set_seconds(___a, ___seconds) \
      LP2(0x53c4, int, TS_ACCURACY_set_seconds , TS_ACCURACY *, ___a, a0, const ASN1_INTEGER *, ___seconds, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_time(___a) \
      LP1(0x53ca, const ASN1_GENERALIZEDTIME *, TS_TST_INFO_get_time , const TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_pkey_get0(___ppkalg, ___pk, ___ppklen, ___pa, ___p8) \
      LP5(0x53d0, int, PKCS8_pkey_get0 , const ASN1_OBJECT **, ___ppkalg, a0, const unsigned char **, ___pk, a1, int *, ___ppklen, a2, const X509_ALGOR **, ___pa, a3, const PKCS8_PRIV_KEY_INFO *, ___p8, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_get0(___idx) \
      LP1(0x53d6, const EVP_PKEY_ASN1_METHOD *, EVP_PKEY_asn1_get0 , int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_add_sigid(___signid, ___dig_id, ___pkey_id) \
      LP3(0x53dc, int, OBJ_add_sigid , int, ___signid, d0, int, ___dig_id, d1, int, ___pkey_id, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_SIGNER_INFO_sign(___si) \
      LP1(0x53e2, int, PKCS7_SIGNER_INFO_sign , PKCS7_SIGNER_INFO *, ___si, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_paramgen_init(___ctx) \
      LP1(0x53e8, int, EVP_PKEY_paramgen_init , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_sign(___ctx, ___sig, ___siglen, ___tbs, ___tbslen) \
      LP5(0x53ee, int, EVP_PKEY_sign , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___sig, a1, size_t *, ___siglen, d0, const unsigned char *, ___tbs, a2, size_t, ___tbslen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_sigid_free() \
      LP0NR(0x53f4, OBJ_sigid_free ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_init(___pmeth, ___init) \
      LP2NRFP(0x53fa, EVP_PKEY_meth_set_init , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___init, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx), 0, 0, 0, 0, 0, 0)

#define d2i_ESS_ISSUER_SERIAL(___a, ___pp, ___length) \
      LP3(0x5400, ESS_ISSUER_SERIAL *, d2i_ESS_ISSUER_SERIAL , ESS_ISSUER_SERIAL **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ISSUING_DIST_POINT_new() \
      LP0(0x5406, ISSUING_DIST_POINT *, ISSUING_DIST_POINT_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_adj(___s, ___t, ___offset_day, ___offset_sec) \
      LP4(0x540c, ASN1_TIME *, ASN1_TIME_adj , ASN1_TIME *, ___s, a0, time_t, ___t, d0, int, ___offset_day, d1, int, ___offset_sec, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_OBJ_print_bio(___bio, ___obj) \
      LP2(0x5412, int, TS_OBJ_print_bio , BIO *, ___bio, a0, const ASN1_OBJECT *, ___obj, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_verify_recover(___pmeth, ___verify_recover_init, ___verify_recover) \
      LP3NRFP2(0x5418, EVP_PKEY_meth_set_verify_recover , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___verify_recover_init, a1, __fpt2, ___verify_recover, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *ctx), int (*__fpt2)(EVP_PKEY_CTX *ctx,unsigned char *sig,size_t *siglen,const unsigned char *tbs,size_t tbslen), 0, 0, 0, 0, 0, 0)

#define TS_RESP_get_status_info(___g) \
      LP1(0x541e, TS_STATUS_INFO *, TS_RESP_get_status_info , TS_RESP *, ___g, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_cb(___ctx, ___cb) \
      LP2NR(0x5424, EVP_PKEY_CTX_set_cb , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY_gen_cb *, ___cb, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_to_TS_TST_INFO(___token) \
      LP1(0x542a, TS_TST_INFO *, PKCS7_to_TS_TST_INFO , PKCS7 *, ___token, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PCTX_get_oid_flags(___p) \
      LP1(0x5430, unsigned long, ASN1_PCTX_get_oid_flags , const ASN1_PCTX *, ___p, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_add_ext(___a, ___ex, ___loc) \
      LP3(0x5436, int, TS_TST_INFO_add_ext , TS_TST_INFO *, ___a, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_derive(___pmeth, ___derive_init, ___derive) \
      LP3NRFP2(0x543c, EVP_PKEY_meth_set_derive , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___derive_init, a1, __fpt2, ___derive, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *ctx), int (*__fpt2)(EVP_PKEY_CTX *ctx,unsigned char *key,size_t *keylen), 0, 0, 0, 0, 0, 0)

#define i2d_TS_MSG_IMPRINT_bio(___fp, ___a) \
      LP2(0x5448, int, i2d_TS_MSG_IMPRINT_bio , BIO *, ___fp, a0, TS_MSG_IMPRINT *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_accuracy(___ctx, ___secs, ___millis, ___micros) \
      LP4(0x544e, int, TS_RESP_CTX_set_accuracy , TS_RESP_CTX *, ___ctx, a0, int, ___secs, d0, int, ___millis, d1, int, ___micros, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_set_nonce(___a, ___nonce) \
      LP2(0x5454, int, TS_REQ_set_nonce , TS_REQ *, ___a, a0, const ASN1_INTEGER *, ___nonce, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_CERT_ID_new() \
      LP0(0x545a, ESS_CERT_ID *, ESS_CERT_ID_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_get_ext_count(___a) \
      LP1(0x5460, int, TS_REQ_get_ext_count , TS_REQ *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BUF_reverse(___out, ___in, ___siz) \
      LP3NR(0x5466, BUF_reverse , unsigned char *, ___out, a0, const unsigned char *, ___in, a1, size_t, ___siz, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_print_bio(___bio, ___a) \
      LP2(0x546c, int, TS_TST_INFO_print_bio , BIO *, ___bio, a0, TS_TST_INFO *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ISSUING_DIST_POINT(___a, ___pp, ___length) \
      LP3(0x5472, ISSUING_DIST_POINT *, d2i_ISSUING_DIST_POINT , ISSUING_DIST_POINT **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2b_PrivateKey_bio(___out, ___pk) \
      LP2(0x5478, int, i2b_PrivateKey_bio , BIO *, ___out, a0, EVP_PKEY *, ___pk, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_TS_RESP(___a, ___pp) \
      LP2(0x547e, int, i2d_TS_RESP , const TS_RESP *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define b2i_PublicKey(___in, ___length) \
      LP2(0x5484, EVP_PKEY *, b2i_PublicKey , const unsigned char **, ___in, a0, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_VERIFY_CTX_cleanup(___ctx) \
      LP1NR(0x548a, TS_VERIFY_CTX_cleanup , TS_VERIFY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_STATUS_INFO_free(___a) \
      LP1NR(0x5490, TS_STATUS_INFO_free , TS_STATUS_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_verify_token(___ctx, ___token) \
      LP2(0x5496, int, TS_RESP_verify_token , TS_VERIFY_CTX *, ___ctx, a0, PKCS7 *, ___token, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_bsearch_ex_(___key, ___base, ___num, ___size, ___cmp, ___flags) \
      LP6FP(0x549c, const void *, OBJ_bsearch_ex_ , const void *, ___key, a0, const void *, ___base, a1, int, ___num, d0, int, ___size, d1, __fpt, ___cmp, a2, int, ___flags, d2,\
      , AMISSL_BASE_NAME, int (*__fpt)(const void *,const void *), 0, 0, 0, 0, 0, 0)

#define ASN1_bn_print(___bp, ___number, ___num, ___ign, ___indent) \
      LP5(0x54a2, int, ASN1_bn_print , BIO *, ___bp, a0, const char *, ___number, a1, const BIGNUM *, ___num, a2, unsigned char *, ___ign, a3, int, ___indent, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_get_count() \
      LP0(0x54a8, int, EVP_PKEY_asn1_get_count ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PCTX_set_nm_flags(___p, ___flags) \
      LP2NR(0x54ae, ASN1_PCTX_set_nm_flags , ASN1_PCTX *, ___p, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestVerifyInit(___ctx, ___pctx, ___type, ___e, ___pkey) \
      LP5(0x54b4, int, EVP_DigestVerifyInit , EVP_MD_CTX *, ___ctx, a0, EVP_PKEY_CTX **, ___pctx, a1, const EVP_MD *, ___type, a2, ENGINE *, ___e, a3, EVP_PKEY *, ___pkey, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_policy_id(___a) \
      LP1(0x54ba, ASN1_OBJECT *, TS_TST_INFO_get_policy_id , TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_get_cert_req(___a) \
      LP1(0x54c0, int, TS_REQ_get_cert_req , const TS_REQ *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_set_meth_data(___crl, ___dat) \
      LP2NR(0x54c6, X509_CRL_set_meth_data , X509_CRL *, ___crl, a0, void *, ___dat, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_pkey_set0(___priv, ___aobj, ___version, ___ptype, ___pval, ___penc, ___penclen) \
      LP7(0x54cc, int, PKCS8_pkey_set0 , PKCS8_PRIV_KEY_INFO *, ___priv, a0, ASN1_OBJECT *, ___aobj, a1, int, ___version, d0, int, ___ptype, d1, void *, ___pval, a2, unsigned char *, ___penc, a3, int, ___penclen, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_copy(___dst, ___str) \
      LP2(0x54d2, int, ASN1_STRING_copy , ASN1_STRING *, ___dst, a0, const ASN1_STRING *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_match(___a, ___b) \
      LP2(0x54de, int, X509_CRL_match , const X509_CRL *, ___a, a0, const X509_CRL *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_private(___ameth, ___priv_decode, ___priv_encode, ___priv_print) \
      LP4NRFP3(0x54e4, EVP_PKEY_asn1_set_private , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt1, ___priv_decode, a1, __fpt2, ___priv_encode, a2, __fpt3, ___priv_print, a3,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY *pk,const PKCS8_PRIV_KEY_INFO *p8inf), int (*__fpt2)(PKCS8_PRIV_KEY_INFO *p8,const EVP_PKEY *pk), int (*__fpt3)(BIO *out,const EVP_PKEY *pkey,int indent,ASN1_PCTX *pctx), 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_ext_d2i(___a, ___nid, ___crit, ___idx) \
      LP4(0x54ea, void *, TS_TST_INFO_get_ext_d2i , TS_TST_INFO *, ___a, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_add_policy(___ctx, ___policy) \
      LP2(0x54f0, int, TS_RESP_CTX_add_policy , TS_RESP_CTX *, ___ctx, a0, const ASN1_OBJECT *, ___policy, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_TS_RESP(___a, ___pp, ___length) \
      LP3(0x54f6, TS_RESP *, d2i_TS_RESP , TS_RESP **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_load_certs(___file) \
      LP1(0x54fc, STACK_OF(X509) *, TS_CONF_load_certs , const char *, ___file, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_msg_imprint(___a) \
      LP1(0x5502, TS_MSG_IMPRINT *, TS_TST_INFO_get_msg_imprint , TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_TS_strings() \
      LP0(0x5508, int, ERR_load_TS_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_version(___a) \
      LP1(0x550e, long, TS_TST_INFO_get_version , const TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_dup(___ctx) \
      LP1(0x5514, EVP_PKEY_CTX *, EVP_PKEY_CTX_dup , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_verify(___pmeth, ___verify_init, ___verify) \
      LP3NRFP2(0x551a, EVP_PKEY_meth_set_verify , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___verify_init, a1, __fpt2, ___verify, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *ctx), int (*__fpt2)(EVP_PKEY_CTX *ctx,const unsigned char *sig,size_t siglen,const unsigned char *tbs,size_t tbslen), 0, 0, 0, 0, 0, 0)

#define i2b_PublicKey_bio(___out, ___pk) \
      LP2(0x5520, int, i2b_PublicKey_bio , BIO *, ___out, a0, EVP_PKEY *, ___pk, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_certs(___conf, ___section, ___certs, ___ctx) \
      LP4(0x5526, int, TS_CONF_set_certs , CONF *, ___conf, a0, const char *, ___section, a1, const char *, ___certs, a2, TS_RESP_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_get0_info(___ppkey_id, ___ppkey_base_id, ___ppkey_flags, ___pinfo, ___ppem_str, ___ameth) \
      LP6(0x552c, int, EVP_PKEY_asn1_get0_info , int *, ___ppkey_id, a0, int *, ___ppkey_base_id, a1, int *, ___ppkey_flags, a2, const char **, ___pinfo, a3, const char **, ___ppem_str, d0, const EVP_PKEY_ASN1_METHOD *, ___ameth, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_VERIFY_CTX_free(___ctx) \
      LP1NR(0x5532, TS_VERIFY_CTX_free , TS_VERIFY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_get_ext_by_critical(___a, ___crit, ___lastpos) \
      LP3(0x5538, int, TS_REQ_get_ext_by_critical , TS_REQ *, ___a, a0, int, ___crit, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_serial_cb(___ctx, ___cb, ___data) \
      LP3NR(0x553e, TS_RESP_CTX_set_serial_cb , TS_RESP_CTX *, ___ctx, a0, TS_serial_cb, ___cb, d0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_meth_data(___crl) \
      LP1(0x5544, void *, X509_CRL_get_meth_data , X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_time_cb(___ctx, ___cb, ___data) \
      LP3NR(0x554a, TS_RESP_CTX_set_time_cb , TS_RESP_CTX *, ___ctx, a0, TS_time_cb, ___cb, d0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_MSG_IMPRINT_get_msg(___a) \
      LP1(0x5550, ASN1_OCTET_STRING *, TS_MSG_IMPRINT_get_msg , TS_MSG_IMPRINT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_ext_free(___a) \
      LP1NR(0x5556, TS_TST_INFO_ext_free , TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_get_version(___a) \
      LP1(0x555c, long, TS_REQ_get_version , const TS_REQ *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_add_ext(___a, ___ex, ___loc) \
      LP3(0x5562, int, TS_REQ_add_ext , TS_REQ *, ___a, a0, X509_EXTENSION *, ___ex, a1, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_app_data(___ctx, ___data) \
      LP2NR(0x5568, EVP_PKEY_CTX_set_app_data , EVP_PKEY_CTX *, ___ctx, a0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_bsearch_(___key, ___base, ___num, ___size, ___cmp) \
      LP5FP(0x556e, const void *, OBJ_bsearch_ , const void *, ___key, a0, const void *, ___base, a1, int, ___num, d0, int, ___size, d1, __fpt, ___cmp, a2,\
      , AMISSL_BASE_NAME, int (*__fpt)(const void *,const void *), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_verifyctx(___pmeth, ___verifyctx_init, ___verifyctx) \
      LP3NRFP2(0x5574, EVP_PKEY_meth_set_verifyctx , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___verifyctx_init, a1, __fpt2, ___verifyctx, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *ctx,EVP_MD_CTX *mctx), int (*__fpt2)(EVP_PKEY_CTX *ctx,const unsigned char *sig,int siglen,EVP_MD_CTX *mctx), 0, 0, 0, 0, 0, 0)

#define i2d_PKCS7_bio_stream(___out, ___p7, ___in, ___flags) \
      LP4(0x557a, int, i2d_PKCS7_bio_stream , BIO *, ___out, a0, PKCS7 *, ___p7, a1, BIO *, ___in, a2, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_sign_add_signer(___p7, ___signcert, ___pkey, ___md, ___flags) \
      LP5(0x5586, PKCS7_SIGNER_INFO *, PKCS7_sign_add_signer , PKCS7 *, ___p7, a0, X509 *, ___signcert, a1, EVP_PKEY *, ___pkey, a2, const EVP_MD *, ___md, a3, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_TS_TST_INFO_bio(___bp, ___a) \
      LP2(0x558c, TS_TST_INFO *, d2i_TS_TST_INFO_bio , BIO *, ___bp, a0, TS_TST_INFO **, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_ordering(___a) \
      LP1(0x5592, int, TS_TST_INFO_get_ordering , const TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_print_bio(___bio, ___a) \
      LP2(0x5598, int, TS_RESP_print_bio , BIO *, ___bio, a0, TS_RESP *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_exts(___a) \
      LP1(0x559e, STACK_OF(X509_EXTENSION) *, TS_TST_INFO_get_exts , TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_pbe2_set_iv(___cipher, ___iter, ___salt, ___saltlen, ___aiv, ___prf_nid) \
      LP6(0x55a4, X509_ALGOR *, PKCS5_pbe2_set_iv , const EVP_CIPHER *, ___cipher, a0, int, ___iter, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, unsigned char *, ___aiv, a2, int, ___prf_nid, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define b2i_PrivateKey(___in, ___length) \
      LP2(0x55aa, EVP_PKEY *, b2i_PrivateKey , const unsigned char **, ___in, a0, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_app_data(___ctx) \
      LP1(0x55b0, void *, EVP_PKEY_CTX_get_app_data , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_set_cert_req(___a, ___cert_req) \
      LP2(0x55b6, int, TS_REQ_set_cert_req , TS_REQ *, ___a, a0, int, ___cert_req, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_serial(___conf, ___section, ___cb, ___ctx) \
      LP4(0x55c2, int, TS_CONF_set_serial , CONF *, ___conf, a0, const char *, ___section, a1, TS_serial_cb, ___cb, a2, TS_RESP_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_free(___a) \
      LP1NR(0x55c8, TS_TST_INFO_free , TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_verify_response(___ctx, ___response) \
      LP2(0x55d4, int, TS_RESP_verify_response , TS_VERIFY_CTX *, ___ctx, a0, TS_RESP *, ___response, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ESS_ISSUER_SERIAL(___a, ___pp) \
      LP2(0x55da, int, i2d_ESS_ISSUER_SERIAL , const ESS_ISSUER_SERIAL *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_ACCURACY_get_seconds(___a) \
      LP1(0x55e0, const ASN1_INTEGER *, TS_ACCURACY_get_seconds , const TS_ACCURACY *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_do_all(___fn, ___arg) \
      LP2NRFP(0x55e6, EVP_CIPHER_do_all , __fpt, ___fn, a0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(const EVP_CIPHER *ciph,const char *from,const char *to,void *x), 0, 0, 0, 0, 0, 0)

#define b2i_PrivateKey_bio(___in) \
      LP1(0x55ec, EVP_PKEY *, b2i_PrivateKey_bio , BIO *, ___in, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_CERTID_dup(___a) \
      LP1(0x55f2, OCSP_CERTID *, OCSP_CERTID_dup , OCSP_CERTID *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PUBKEY_get0_param(___ppkalg, ___pk, ___ppklen, ___pa, ___pub) \
      LP5(0x55f8, int, X509_PUBKEY_get0_param , ASN1_OBJECT **, ___ppkalg, a0, const unsigned char **, ___pk, a1, int *, ___ppklen, a2, X509_ALGOR **, ___pa, a3, X509_PUBKEY *, ___pub, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_MSG_IMPRINT_dup(___a) \
      LP1(0x55fe, TS_MSG_IMPRINT *, TS_MSG_IMPRINT_dup , TS_MSG_IMPRINT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_print_ctx(___out, ___x, ___indent, ___pctx) \
      LP4NR(0x5604, PKCS7_print_ctx , BIO *, ___out, a0, PKCS7 *, ___x, a1, int, ___indent, d0, const ASN1_PCTX *, ___pctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_TS_REQ_bio(___fp, ___a) \
      LP2(0x560a, int, i2d_TS_REQ_bio , BIO *, ___fp, a0, TS_REQ *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_param(___ameth, ___param_decode, ___param_encode, ___param_missing, ___param_copy, ___param_cmp, ___param_print) \
      LP7NRFP6(0x5610, EVP_PKEY_asn1_set_param , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt1, ___param_decode, a1, __fpt2, ___param_encode, a2, __fpt3, ___param_missing, a3, __fpt4, ___param_copy, d0, __fpt5, ___param_cmp, d1, __fpt6, ___param_print, d2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY *pkey,const unsigned char **pder,int derlen), int (*__fpt2)(const EVP_PKEY *pkey,unsigned char **pder), int (*__fpt3)(const EVP_PKEY *pk), int (*__fpt4)(EVP_PKEY *to,const EVP_PKEY *from), int (*__fpt5)(const EVP_PKEY *a,const EVP_PKEY *b), int (*__fpt6)(BIO *out,const EVP_PKEY *pkey,int indent,ASN1_PCTX *pctx), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_encrypt(___pmeth, ___encrypt_init, ___encryptfn) \
      LP3NRFP2(0x5616, EVP_PKEY_meth_set_encrypt , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___encrypt_init, a1, __fpt2, ___encryptfn, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *ctx), int (*__fpt2)(EVP_PKEY_CTX *ctx,unsigned char *out,size_t *outlen,const unsigned char *in,size_t inlen), 0, 0, 0, 0, 0, 0)

#define ASN1_PCTX_set_flags(___p, ___flags) \
      LP2NR(0x561c, ASN1_PCTX_set_flags , ASN1_PCTX *, ___p, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ESS_CERT_ID(___a, ___pp) \
      LP2(0x5622, int, i2d_ESS_CERT_ID , const ESS_CERT_ID *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_VERIFY_CTX_new() \
      LP0(0x5628, TS_VERIFY_CTX *, TS_VERIFY_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_extension_cb(___ctx, ___cb, ___data) \
      LP3NR(0x562e, TS_RESP_CTX_set_extension_cb , TS_RESP_CTX *, ___ctx, a0, TS_extension_cb, ___cb, a1, void *, ___data, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_status_info_cond(___ctx, ___status, ___text) \
      LP3(0x5634, int, TS_RESP_CTX_set_status_info_cond , TS_RESP_CTX *, ___ctx, a0, int, ___status, d0, const char *, ___text, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_verify(___ctx, ___sig, ___siglen, ___tbs, ___tbslen) \
      LP5(0x563a, int, EVP_PKEY_verify , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___sig, a1, size_t, ___siglen, d0, const unsigned char *, ___tbs, a2, size_t, ___tbslen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_METHOD_new(___crl_init, ___crl_free, ___crl_lookup, ___crl_verify) \
      LP4FP4(0x5640, X509_CRL_METHOD *, X509_CRL_METHOD_new , __fpt1, ___crl_init, a0, __fpt1, ___crl_free, a1, __fpt3, ___crl_lookup, a2, __fpt4, ___crl_verify, a3,\
      , AMISSL_BASE_NAME, int (*__fpt1)(X509_CRL *crl), int (*__fpt2)(X509_CRL *crl), int (*__fpt3)(X509_CRL *crl,X509_REVOKED **ret,ASN1_INTEGER *ser,X509_NAME *issuer), int (*__fpt4)(X509_CRL *crl,EVP_PKEY *pk), 0, 0, 0, 0, 0, 0)

#define EVP_DigestSignFinal(___ctx, ___sigret, ___siglen) \
      LP3(0x5646, int, EVP_DigestSignFinal , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___sigret, a1, size_t *, ___siglen, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_def_policy(___ctx, ___def_policy) \
      LP2(0x564c, int, TS_RESP_CTX_set_def_policy , TS_RESP_CTX *, ___ctx, a0, const ASN1_OBJECT *, ___def_policy, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_create_response(___ctx, ___req_bio) \
      LP2(0x5652, TS_RESP *, TS_RESP_create_response , TS_RESP_CTX *, ___ctx, a0, BIO *, ___req_bio, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_SIGNER_INFO_get0_algs(___si, ___pk, ___pdig, ___psig) \
      LP4NR(0x5658, PKCS7_SIGNER_INFO_get0_algs , PKCS7_SIGNER_INFO *, ___si, a0, EVP_PKEY **, ___pk, a1, X509_ALGOR **, ___pdig, a2, X509_ALGOR **, ___psig, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_nonce(___a) \
      LP1(0x565e, const ASN1_INTEGER *, TS_TST_INFO_get_nonce , const TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_decrypt_old(___dec_key, ___enc_key, ___enc_key_len, ___private_key) \
      LP4(0x5664, int, EVP_PKEY_decrypt_old , unsigned char *, ___dec_key, a0, const unsigned char *, ___enc_key, a1, int, ___enc_key_len, d0, EVP_PKEY *, ___private_key, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_set_policy_id(___a, ___policy_id) \
      LP2(0x566a, int, TS_TST_INFO_set_policy_id , TS_TST_INFO *, ___a, a0, ASN1_OBJECT *, ___policy_id, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_ess_cert_id_chain(___conf, ___section, ___ctx) \
      LP3(0x5670, int, TS_CONF_set_ess_cert_id_chain , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get0_pkey(___ctx) \
      LP1(0x5676, EVP_PKEY *, EVP_PKEY_CTX_get0_pkey , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_TS_REQ(___a, ___pp, ___length) \
      LP3(0x567c, TS_REQ *, d2i_TS_REQ , TS_REQ **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_find_str(___pe, ___str, ___len) \
      LP3(0x5682, const EVP_PKEY_ASN1_METHOD *, EVP_PKEY_asn1_find_str , ENGINE **, ___pe, a0, const char *, ___str, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_f_asn1() \
      LP0(0x5688, const BIO_METHOD *, BIO_f_asn1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_SIGNING_CERT_new() \
      LP0(0x568e, ESS_SIGNING_CERT *, ESS_SIGNING_CERT_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PBE_find(___type, ___pbe_nid, ___pcnid, ___pmnid, ___pkeygen) \
      LP5(0x5694, int, EVP_PBE_find , int, ___type, d0, int, ___pbe_nid, d1, int *, ___pcnid, a0, int *, ___pmnid, a1, EVP_PBE_KEYGEN **, ___pkeygen, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get0_by_cert(___crl, ___ret, ___x) \
      LP3(0x569a, int, X509_CRL_get0_by_cert , X509_CRL *, ___crl, a0, X509_REVOKED **, ___ret, a1, X509 *, ___x, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_derive(___ctx, ___key, ___keylen) \
      LP3(0x56a0, int, EVP_PKEY_derive , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___key, a1, size_t *, ___keylen, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_TS_REQ(___a, ___pp) \
      LP2(0x56a6, int, i2d_TS_REQ , const TS_REQ *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_delete_ext(___a, ___loc) \
      LP2(0x56ac, X509_EXTENSION *, TS_TST_INFO_delete_ext , TS_TST_INFO *, ___a, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_ISSUER_SERIAL_free(___a) \
      LP1NR(0x56b2, ESS_ISSUER_SERIAL_free , ESS_ISSUER_SERIAL *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PCTX_set_str_flags(___p, ___flags) \
      LP2NR(0x56b8, ASN1_PCTX_set_str_flags , ASN1_PCTX *, ___p, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_signer_key(___conf, ___section, ___key, ___pass, ___ctx) \
      LP5(0x56be, int, TS_CONF_set_signer_key , CONF *, ___conf, a0, const char *, ___section, a1, const char *, ___key, a2, const char *, ___pass, a3, TS_RESP_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_ACCURACY_get_millis(___a) \
      LP1(0x56c4, const ASN1_INTEGER *, TS_ACCURACY_get_millis , const TS_ACCURACY *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_get_token(___a) \
      LP1(0x56ca, PKCS7 *, TS_RESP_get_token , TS_RESP *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_ACCURACY_dup(___a) \
      LP1(0x56d0, TS_ACCURACY *, TS_ACCURACY_dup , TS_ACCURACY *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_set_default_method(___meth) \
      LP1NR(0x56d6, X509_CRL_set_default_method , const X509_CRL_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_free(___a) \
      LP1NR(0x56e2, TS_RESP_free , TS_RESP *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ISSUING_DIST_POINT_free(___a) \
      LP1NR(0x56e8, ISSUING_DIST_POINT_free , ISSUING_DIST_POINT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_ISSUER_SERIAL_new() \
      LP0(0x56ee, ESS_ISSUER_SERIAL *, ESS_ISSUER_SERIAL_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_add1_attrib_digest(___si, ___md, ___mdlen) \
      LP3(0x56f4, int, PKCS7_add1_attrib_digest , PKCS7_SIGNER_INFO *, ___si, a0, const unsigned char *, ___md, a1, int, ___mdlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_add_md(___ctx, ___md) \
      LP2(0x56fa, int, TS_RESP_CTX_add_md , TS_RESP_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_dup(___a) \
      LP1(0x5700, TS_TST_INFO *, TS_TST_INFO_dup , TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_Parameters(___bp, ___x) \
      LP2(0x5706, int, PEM_write_bio_Parameters , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_accuracy(___a) \
      LP1(0x570c, TS_ACCURACY *, TS_TST_INFO_get_accuracy , TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get0_by_serial(___crl, ___ret, ___serial) \
      LP3(0x5712, int, X509_CRL_get0_by_serial , X509_CRL *, ___crl, a0, X509_REVOKED **, ___ret, a1, ASN1_INTEGER *, ___serial, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_set_version(___a, ___version) \
      LP2(0x5718, int, TS_TST_INFO_set_version , TS_TST_INFO *, ___a, a0, long, ___version, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_get_tst_info(___ctx) \
      LP1(0x571e, TS_TST_INFO *, TS_RESP_CTX_get_tst_info , TS_RESP_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_verify_signature(___token, ___certs, ___store, ___signer_out) \
      LP4(0x5724, int, TS_RESP_verify_signature , PKCS7 *, ___token, a0, STACK_OF(X509) *, ___certs, a1, X509_STORE *, ___store, a2, X509 **, ___signer_out, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_tsa(___a) \
      LP1(0x5730, GENERAL_NAME *, TS_TST_INFO_get_tsa , TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_STATUS_INFO_new() \
      LP0(0x5736, TS_STATUS_INFO *, TS_STATUS_INFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_cb(___ctx) \
      LP1FR(0x573c, __fpr, EVP_PKEY_CTX_get_cb , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_PKEY_CTX *ctx), 0, 0, 0, 0, 0, 0)

#define TS_REQ_get_ext_d2i(___a, ___nid, ___crit, ___idx) \
      LP4(0x5742, void *, TS_REQ_get_ext_d2i , TS_REQ *, ___a, a0, int, ___nid, d0, int *, ___crit, a1, int *, ___idx, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAME_set0_othername(___gen, ___oid, ___value) \
      LP3(0x5748, int, GENERAL_NAME_set0_othername , GENERAL_NAME *, ___gen, a0, ASN1_OBJECT *, ___oid, a1, ASN1_TYPE *, ___value, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_ext_count(___a) \
      LP1(0x574e, int, TS_TST_INFO_get_ext_count , TS_TST_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_get_request(___ctx) \
      LP1(0x5754, TS_REQ *, TS_RESP_CTX_get_request , TS_RESP_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_signctx(___pmeth, ___signctx_init, ___signctx) \
      LP3NRFP2(0x5760, EVP_PKEY_meth_set_signctx , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___signctx_init, a1, __fpt2, ___signctx, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *ctx,EVP_MD_CTX *mctx), int (*__fpt2)(EVP_PKEY_CTX *ctx,unsigned char *sig,size_t *siglen,EVP_MD_CTX *mctx), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_copy(___dst, ___src) \
      LP2NR(0x5766, EVP_PKEY_asn1_copy , EVP_PKEY_ASN1_METHOD *, ___dst, a0, const EVP_PKEY_ASN1_METHOD *, ___src, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TYPE_cmp(___a, ___b) \
      LP2(0x576c, int, ASN1_TYPE_cmp , const ASN1_TYPE *, ___a, a0, const ASN1_TYPE *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_do_all_sorted(___fn, ___arg) \
      LP2NRFP(0x5772, EVP_CIPHER_do_all_sorted , __fpt, ___fn, a0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(const EVP_CIPHER *ciph,const char *from,const char *to,void *x), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_free(___ctx) \
      LP1NR(0x5778, EVP_PKEY_CTX_free , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get1_certs(___st, ___nm) \
      LP2(0x5784, STACK_OF(X509) *, X509_STORE_CTX_get1_certs , X509_STORE_CTX *, ___st, a0, X509_NAME *, ___nm, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_operation(___ctx) \
      LP1(0x578a, int, EVP_PKEY_CTX_get_operation , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ESS_SIGNING_CERT(___a, ___pp, ___length) \
      LP3(0x5790, ESS_SIGNING_CERT *, d2i_ESS_SIGNING_CERT , ESS_SIGNING_CERT **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_ordering(___conf, ___section, ___ctx) \
      LP3(0x5796, int, TS_CONF_set_ordering , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PBE_alg_add_type(___pbe_type, ___pbe_nid, ___cipher_nid, ___md_nid, ___keygen) \
      LP5(0x579c, int, EVP_PBE_alg_add_type , int, ___pbe_type, d0, int, ___pbe_nid, d1, int, ___cipher_nid, d2, int, ___md_nid, d3, EVP_PBE_KEYGEN *, ___keygen, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_set_version(___a, ___version) \
      LP2(0x57a2, int, TS_REQ_set_version , TS_REQ *, ___a, a0, long, ___version, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get0(___pkey) \
      LP1(0x57a8, void *, EVP_PKEY_get0 , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_asn1_set_suffix(___b, ___suffix, ___suffix_free) \
      LP3(0x57ae, int, BIO_asn1_set_suffix , BIO *, ___b, a0, asn1_ps_func *, ___suffix, a1, asn1_ps_func *, ___suffix_free, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_TS_STATUS_INFO(___a, ___pp) \
      LP2(0x57b4, int, i2d_TS_STATUS_INFO , const TS_STATUS_INFO *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_do_all(___fn, ___arg) \
      LP2NRFP(0x57ba, EVP_MD_do_all , __fpt, ___fn, a0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(const EVP_MD *ciph,const char *from,const char *to,void *x), 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_set_accuracy(___a, ___accuracy) \
      LP2(0x57c0, int, TS_TST_INFO_set_accuracy , TS_TST_INFO *, ___a, a0, TS_ACCURACY *, ___accuracy, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_add_attrib_content_type(___si, ___coid) \
      LP2(0x57c6, int, PKCS7_add_attrib_content_type , PKCS7_SIGNER_INFO *, ___si, a0, ASN1_OBJECT *, ___coid, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_add0(___pmeth) \
      LP1(0x57cc, int, EVP_PKEY_meth_add0 , const EVP_PKEY_METHOD *, ___pmeth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_set_tsa(___a, ___tsa) \
      LP2(0x57d2, int, TS_TST_INFO_set_tsa , TS_TST_INFO *, ___a, a0, GENERAL_NAME *, ___tsa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_new(___id, ___flags) \
      LP2(0x57d8, EVP_PKEY_METHOD *, EVP_PKEY_meth_new , int, ___id, d0, int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_accuracy(___conf, ___section, ___ctx) \
      LP3(0x57de, int, TS_CONF_set_accuracy , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PCTX_set_oid_flags(___p, ___flags) \
      LP2NR(0x57e4, ASN1_PCTX_set_oid_flags , ASN1_PCTX *, ___p, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_SIGNING_CERT_dup(___a) \
      LP1(0x57ea, ESS_SIGNING_CERT *, ESS_SIGNING_CERT_dup , ESS_SIGNING_CERT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_TS_REQ_bio(___fp, ___a) \
      LP2(0x57f0, TS_REQ *, d2i_TS_REQ_bio , BIO *, ___fp, a0, TS_REQ **, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_time_adj_ex(___s, ___offset_day, ___offset_sec, ___t) \
      LP4(0x57f6, ASN1_TIME *, X509_time_adj_ex , ASN1_TIME *, ___s, a0, int, ___offset_day, d0, long, ___offset_sec, d1, time_t *, ___t, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_add_flags(___ctx, ___flags) \
      LP2NR(0x57fc, TS_RESP_CTX_add_flags , TS_RESP_CTX *, ___ctx, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_TS_STATUS_INFO(___a, ___pp, ___length) \
      LP3(0x5802, TS_STATUS_INFO *, d2i_TS_STATUS_INFO , TS_STATUS_INFO **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_MSG_IMPRINT_set_msg(___a, ___d, ___len) \
      LP3(0x5808, int, TS_MSG_IMPRINT_set_msg , TS_MSG_IMPRINT *, ___a, a0, unsigned char *, ___d, a1, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_asn1_get_suffix(___b, ___psuffix, ___psuffix_free) \
      LP3(0x580e, int, BIO_asn1_get_suffix , BIO *, ___b, a0, asn1_ps_func **, ___psuffix, a1, asn1_ps_func **, ___psuffix_free, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_free(___a) \
      LP1NR(0x5814, TS_REQ_free , TS_REQ *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_free(___pmeth) \
      LP1NR(0x581a, EVP_PKEY_meth_free , EVP_PKEY_METHOD *, ___pmeth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_get_exts(___a) \
      LP1(0x5820, STACK_OF(X509_EXTENSION) *, TS_REQ_get_exts , TS_REQ *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_clock_precision_digits(___ctx, ___clock_precision_digits) \
      LP2(0x5826, int, TS_RESP_CTX_set_clock_precision_digits , TS_RESP_CTX *, ___ctx, a0, unsigned, ___clock_precision_digits, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_add_failure_info(___ctx, ___failure) \
      LP2(0x582c, int, TS_RESP_CTX_add_failure_info , TS_RESP_CTX *, ___ctx, a0, int, ___failure, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_TS_RESP_bio(___fp, ___a) \
      LP2(0x5832, int, i2d_TS_RESP_bio , BIO *, ___fp, a0, TS_RESP *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get0_peerkey(___ctx) \
      LP1(0x5838, EVP_PKEY *, EVP_PKEY_CTX_get0_peerkey , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_new() \
      LP0(0x583e, TS_REQ *, TS_REQ_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_MSG_IMPRINT_new() \
      LP0(0x5844, TS_MSG_IMPRINT *, TS_MSG_IMPRINT_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_find(___type) \
      LP1(0x584a, const EVP_PKEY_METHOD *, EVP_PKEY_meth_find , int, ___type, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_id(___pkey) \
      LP1(0x5850, int, EVP_PKEY_id , const EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_set_serial(___a, ___serial) \
      LP2(0x5856, int, TS_TST_INFO_set_serial , TS_TST_INFO *, ___a, a0, const ASN1_INTEGER *, ___serial, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define a2i_GENERAL_NAME(___out, ___method, ___ctx, ___gen_type, ___value, ___is_nc) \
      LP6(0x585c, GENERAL_NAME *, a2i_GENERAL_NAME , GENERAL_NAME *, ___out, a0, const X509V3_EXT_METHOD *, ___method, a1, X509V3_CTX *, ___ctx, a2, int, ___gen_type, d0, const char *, ___value, a3, int, ___is_nc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_crypto_device(___conf, ___section, ___device) \
      LP3(0x5862, int, TS_CONF_set_crypto_device , CONF *, ___conf, a0, const char *, ___section, a1, const char *, ___device, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_verify_init(___ctx) \
      LP1(0x5868, int, EVP_PKEY_verify_init , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_policies(___conf, ___section, ___ctx) \
      LP3(0x586e, int, TS_CONF_set_policies , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PCTX_new() \
      LP0(0x5874, ASN1_PCTX *, ASN1_PCTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_CERT_ID_free(___a) \
      LP1NR(0x587a, ESS_CERT_ID_free , ESS_CERT_ID *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_MSG_IMPRINT_free(___a) \
      LP1NR(0x5880, TS_MSG_IMPRINT_free , TS_MSG_IMPRINT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_VERIFY_CTX_init(___ctx) \
      LP1NR(0x5886, TS_VERIFY_CTX_init , TS_VERIFY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_stream(___boundary, ___p7) \
      LP2(0x588c, int, PKCS7_stream , unsigned char ***, ___boundary, a0, PKCS7 *, ___p7, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_certs(___ctx, ___certs) \
      LP2(0x5892, int, TS_RESP_CTX_set_certs , TS_RESP_CTX *, ___ctx, a0, STACK_OF(X509) *, ___certs, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_def_policy(___conf, ___section, ___policy, ___ctx) \
      LP4(0x5898, int, TS_CONF_set_def_policy , CONF *, ___conf, a0, const char *, ___section, a1, const char *, ___policy, a2, TS_RESP_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_GENERALIZEDTIME_adj(___s, ___t, ___offset_day, ___offset_sec) \
      LP4(0x589e, ASN1_GENERALIZEDTIME *, ASN1_GENERALIZEDTIME_adj , ASN1_GENERALIZEDTIME *, ___s, a0, time_t, ___t, d0, int, ___offset_day, d1, long, ___offset_sec, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_ACCURACY_free(___a) \
      LP1NR(0x58aa, TS_ACCURACY_free , TS_ACCURACY *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_get_tst_info(___a) \
      LP1(0x58b0, TS_TST_INFO *, TS_RESP_get_tst_info , TS_RESP *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_derive_set_peer(___ctx, ___peer) \
      LP2(0x58b6, int, EVP_PKEY_derive_set_peer , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY *, ___peer, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_Parameters(___bp, ___x) \
      LP2(0x58bc, EVP_PKEY *, PEM_read_bio_Parameters , BIO *, ___bp, a0, EVP_PKEY **, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_clock_precision_digits(___conf, ___section, ___ctx) \
      LP3(0x58c2, int, TS_CONF_set_clock_precision_digits , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_ISSUER_SERIAL_dup(___a) \
      LP1(0x58c8, ESS_ISSUER_SERIAL *, ESS_ISSUER_SERIAL_dup , ESS_ISSUER_SERIAL *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_ACCURACY_get_micros(___a) \
      LP1(0x58ce, const ASN1_INTEGER *, TS_ACCURACY_get_micros , const TS_ACCURACY *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PCTX_get_str_flags(___p) \
      LP1(0x58d4, unsigned long, ASN1_PCTX_get_str_flags , const ASN1_PCTX *, ___p, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAME_CONSTRAINTS_check(___x, ___nc) \
      LP2(0x58da, int, NAME_CONSTRAINTS_check , X509 *, ___x, a0, NAME_CONSTRAINTS *, ___nc, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_BIT_STRING_check(___a, ___flags, ___flags_len) \
      LP3(0x58e0, int, ASN1_BIT_STRING_check , const ASN1_BIT_STRING *, ___a, a0, const unsigned char *, ___flags, a1, int, ___flags_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_check_akid(___issuer, ___akid) \
      LP2(0x58e6, int, X509_check_akid , X509 *, ___issuer, a0, AUTHORITY_KEYID *, ___akid, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_PCTX_free(___p) \
      LP1NR(0x58ec, ASN1_PCTX_free , ASN1_PCTX *, ___p, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_ASN1_stream(___out, ___val, ___in, ___flags, ___hdr, ___it) \
      LP6(0x58f2, int, PEM_write_bio_ASN1_stream , BIO *, ___out, a0, ASN1_VALUE *, ___val, a1, BIO *, ___in, a2, int, ___flags, d0, const char *, ___hdr, a3, const ASN1_ITEM *, ___it, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASN1_bio_stream(___out, ___val, ___in, ___flags, ___it) \
      LP5(0x58f8, int, i2d_ASN1_bio_stream , BIO *, ___out, a0, ASN1_VALUE *, ___val, a1, BIO *, ___in, a2, int, ___flags, d0, const ASN1_ITEM *, ___it, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_X509_ALGOR_print_bio(___bio, ___alg) \
      LP2(0x58fe, int, TS_X509_ALGOR_print_bio , BIO *, ___bio, a0, const X509_ALGOR *, ___alg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_cleanup(___pmeth, ___cleanup) \
      LP2NRFP(0x5904, EVP_PKEY_meth_set_cleanup , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___cleanup, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(EVP_PKEY_CTX *ctx), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_free(___ameth) \
      LP1NR(0x590a, EVP_PKEY_asn1_free , EVP_PKEY_ASN1_METHOD *, ___ameth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_SIGNING_CERT_free(___a) \
      LP1NR(0x5910, ESS_SIGNING_CERT_free , ESS_SIGNING_CERT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_set_msg_imprint(___a, ___msg_imprint) \
      LP2(0x5916, int, TS_TST_INFO_set_msg_imprint , TS_TST_INFO *, ___a, a0, TS_MSG_IMPRINT *, ___msg_imprint, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAME_cmp(___a, ___b) \
      LP2(0x591c, int, GENERAL_NAME_cmp , GENERAL_NAME *, ___a, a0, GENERAL_NAME *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_SET_ANY(___a, ___pp, ___length) \
      LP3(0x5922, ASN1_SEQUENCE_ANY *, d2i_ASN1_SET_ANY , ASN1_SEQUENCE_ANY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASN1_SEQUENCE_ANY(___a, ___pp, ___length) \
      LP3(0x592e, ASN1_SEQUENCE_ANY *, d2i_ASN1_SEQUENCE_ANY , ASN1_SEQUENCE_ANY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_NAME_get0_otherName(___gen, ___poid, ___pvalue) \
      LP3(0x5934, int, GENERAL_NAME_get0_otherName , GENERAL_NAME *, ___gen, a0, ASN1_OBJECT **, ___poid, a1, ASN1_TYPE **, ___pvalue, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ESS_CERT_ID(___a, ___pp, ___length) \
      LP3(0x593a, ESS_CERT_ID *, d2i_ESS_CERT_ID , ESS_CERT_ID **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_find_sigid_algs(___signid, ___pdig_nid, ___ppkey_nid) \
      LP3(0x5940, int, OBJ_find_sigid_algs , int, ___signid, d0, int *, ___pdig_nid, a0, int *, ___ppkey_nid, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_keygen(___pmeth, ___keygen_init, ___keygen) \
      LP3NRFP2(0x5946, EVP_PKEY_meth_set_keygen , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___keygen_init, a1, __fpt2, ___keygen, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *ctx), int (*__fpt2)(EVP_PKEY_CTX *ctx,EVP_PKEY *pkey), 0, 0, 0, 0, 0, 0)

#define PKCS5_PBKDF2_HMAC(___pass, ___passlen, ___salt, ___saltlen, ___iter, ___digest, ___keylen, ___out) \
      LP8(0x594c, int, PKCS5_PBKDF2_HMAC , const char *, ___pass, a0, int, ___passlen, d0, const unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___iter, d2, const EVP_MD *, ___digest, a2, int, ___keylen, d3, unsigned char *, ___out, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_paramgen(___ctx, ___ppkey) \
      LP2(0x5952, int, EVP_PKEY_paramgen , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY **, ___ppkey, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_paramgen(___pmeth, ___paramgen_init, ___paramgen) \
      LP3NRFP2(0x5958, EVP_PKEY_meth_set_paramgen , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___paramgen_init, a1, __fpt2, ___paramgen, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *ctx), int (*__fpt2)(EVP_PKEY_CTX *ctx,EVP_PKEY *pkey), 0, 0, 0, 0, 0, 0)

#define BIO_new_PKCS7(___out, ___p7) \
      LP2(0x595e, BIO *, BIO_new_PKCS7 , BIO *, ___out, a0, PKCS7 *, ___p7, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_verify_recover(___ctx, ___rout, ___routlen, ___sig, ___siglen) \
      LP5(0x5964, int, EVP_PKEY_verify_recover , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___rout, a1, size_t *, ___routlen, a2, const unsigned char *, ___sig, a3, size_t, ___siglen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_ext_print_bio(___bio, ___extensions) \
      LP2(0x596a, int, TS_ext_print_bio , BIO *, ___bio, a0, STACK_OF(X509_EXTENSION) *, ___extensions, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_ASN1_INTEGER_print_bio(___bio, ___num) \
      LP2(0x5970, int, TS_ASN1_INTEGER_print_bio , BIO *, ___bio, a0, const ASN1_INTEGER *, ___num, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set_type(___pkey, ___type) \
      LP2(0x5982, int, EVP_PKEY_set_type , EVP_PKEY *, ___pkey, a0, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_ACCURACY_set_micros(___a, ___micros) \
      LP2(0x5988, int, TS_ACCURACY_set_micros , TS_ACCURACY *, ___a, a0, const ASN1_INTEGER *, ___micros, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_to_TS_VERIFY_CTX(___req, ___ctx) \
      LP2(0x598e, TS_VERIFY_CTX *, TS_REQ_to_TS_VERIFY_CTX , TS_REQ *, ___req, a0, TS_VERIFY_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_copy(___pmeth, ___copy) \
      LP2NRFP(0x5994, EVP_PKEY_meth_set_copy , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___copy, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *dst,EVP_PKEY_CTX *src), 0, 0, 0, 0, 0, 0)

#define ASN1_PCTX_set_cert_flags(___p, ___flags) \
      LP2NR(0x599a, ASN1_PCTX_set_cert_flags , ASN1_PCTX *, ___p, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_ext(___a, ___loc) \
      LP2(0x59a0, X509_EXTENSION *, TS_TST_INFO_get_ext , TS_TST_INFO *, ___a, a0, int, ___loc, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_ctrl(___ameth, ___pkey_ctrl) \
      LP2NRFP(0x59a6, EVP_PKEY_asn1_set_ctrl , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___pkey_ctrl, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pkey,int op,long arg1,void *arg2), 0, 0, 0, 0, 0, 0)

#define TS_TST_INFO_get_ext_by_critical(___a, ___crit, ___lastpos) \
      LP3(0x59ac, int, TS_TST_INFO_get_ext_by_critical , TS_TST_INFO *, ___a, a0, int, ___crit, d0, int, ___lastpos, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_new_id(___id, ___e) \
      LP2(0x59b2, EVP_PKEY_CTX *, EVP_PKEY_CTX_new_id , int, ___id, d0, ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_REQ_get_ext_by_OBJ(___a, ___obj, ___lastpos) \
      LP3(0x59b8, int, TS_REQ_get_ext_by_OBJ , TS_REQ *, ___a, a0, const ASN1_OBJECT *, ___obj, a1, int, ___lastpos, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_signer_cert(___conf, ___section, ___cert, ___ctx) \
      LP4(0x59be, int, TS_CONF_set_signer_cert , CONF *, ___conf, a0, const char *, ___section, a1, const char *, ___cert, a2, TS_RESP_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_hash_old(___x) \
      LP1(0x59c4, unsigned long, X509_NAME_hash_old , X509_NAME *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_set_string(___s, ___str) \
      LP2(0x59ca, int, ASN1_TIME_set_string , ASN1_TIME *, ___s, a0, const char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_flags(___md) \
      LP1(0x59d0, unsigned long, EVP_MD_flags , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_free(___ctx) \
      LP1NR(0x59d6, TS_RESP_CTX_free , TS_RESP_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQ_CTX_add1_header(___rctx, ___name, ___value) \
      LP3(0x59dc, int, OCSP_REQ_CTX_add1_header , OCSP_REQ_CTX *, ___rctx, a0, const char *, ___name, a1, const char *, ___value, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQ_CTX_set1_req(___rctx, ___req) \
      LP2(0x59e2, int, OCSP_REQ_CTX_set1_req , OCSP_REQ_CTX *, ___rctx, a0, OCSP_REQUEST *, ___req, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_verify_cb(___ctx, ___verify_cb) \
      LP2NR(0x59e8, X509_STORE_set_verify_cb , X509_STORE *, ___ctx, a0, X509_STORE_CTX_verify_cb, ___verify_cb, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get0_current_crl(___ctx) \
      LP1(0x59ee, X509_CRL *, X509_STORE_CTX_get0_current_crl , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get0_parent_ctx(___ctx) \
      LP1(0x59f4, X509_STORE_CTX *, X509_STORE_CTX_get0_parent_ctx , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get0_current_issuer(___ctx) \
      LP1(0x59fa, X509 *, X509_STORE_CTX_get0_current_issuer , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_copy(___out, ___in) \
      LP2(0x5a00, int, EVP_CIPHER_CTX_copy , EVP_CIPHER_CTX *, ___out, a0, const EVP_CIPHER_CTX *, ___in, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_method_get_prompt_constructor(___method) \
      LP1FR(0x5a06, __fpr, UI_method_get_prompt_constructor , const UI_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, char *(*__fpr)(UI*, const char*, const char*), 0, 0, 0, 0, 0, 0)

#define UI_method_set_prompt_constructor(___method, ___prompt_constructor) \
      LP2FP(0x5a0c, int, UI_method_set_prompt_constructor , UI_METHOD *, ___method, a0, __fpt, ___prompt_constructor, a1,\
      , AMISSL_BASE_NAME, char *(*__fpt)(UI* ui,const char* object_desc,const char* object_name), 0, 0, 0, 0, 0, 0)

#define EVP_read_pw_string_min(___buf, ___minlen, ___maxlen, ___prompt, ___verify) \
      LP5(0x5a12, int, EVP_read_pw_string_min , char *, ___buf, a0, int, ___minlen, d0, int, ___maxlen, d1, const char *, ___prompt, a1, int, ___verify, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_cts128_encrypt(___in, ___out, ___len, ___key, ___ivec, ___cbc) \
      LP6(0x5a18, size_t, CRYPTO_cts128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, cbc128_f, ___cbc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_cts128_decrypt_block(___in, ___out, ___len, ___key, ___ivec, ___block) \
      LP6(0x5a1e, size_t, CRYPTO_cts128_decrypt_block , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, block128_f, ___block, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_cfb128_1_encrypt(___in, ___out, ___bits, ___key, ___ivec, ___num, ___enc, ___block) \
      LP8NR(0x5a24, CRYPTO_cfb128_1_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___bits, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2, block128_f, ___block, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_cbc128_encrypt(___in, ___out, ___len, ___key, ___ivec, ___block) \
      LP6NR(0x5a2a, CRYPTO_cbc128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, block128_f, ___block, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ctr128_encrypt(___in, ___out, ___len, ___key, ___ivec, ___ecount_buf, ___num, ___block) \
      LP8NR(0x5a30, CRYPTO_ctr128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, unsigned char *, ___ecount_buf, d1, unsigned int *, ___num, d2, block128_f, ___block, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ofb128_encrypt(___in, ___out, ___len, ___key, ___ivec, ___num, ___block) \
      LP7NR(0x5a36, CRYPTO_ofb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, block128_f, ___block, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_cts128_decrypt(___in, ___out, ___len, ___key, ___ivec, ___cbc) \
      LP6(0x5a3c, size_t, CRYPTO_cts128_decrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, cbc128_f, ___cbc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_cts128_encrypt_block(___in, ___out, ___len, ___key, ___ivec, ___block) \
      LP6(0x5a42, size_t, CRYPTO_cts128_encrypt_block , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, block128_f, ___block, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_cbc128_decrypt(___in, ___out, ___len, ___key, ___ivec, ___block) \
      LP6NR(0x5a48, CRYPTO_cbc128_decrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, block128_f, ___block, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_cfb128_encrypt(___in, ___out, ___len, ___key, ___ivec, ___num, ___enc, ___block) \
      LP8NR(0x5a4e, CRYPTO_cfb128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2, block128_f, ___block, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_cfb128_8_encrypt(___in, ___out, ___length, ___key, ___ivec, ___num, ___enc, ___block) \
      LP8NR(0x5a54, CRYPTO_cfb128_8_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___length, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, int *, ___num, d1, int, ___enc, d2, block128_f, ___block, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_memcmp(___p1, ___p2, ___n) \
      LP3(0x5a5a, int, OPENSSL_memcmp , const void *, ___p1, a0, const void *, ___p2, a1, size_t, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_gmtime(___timer, ___result) \
      LP2(0x5a60, struct tm *, OPENSSL_gmtime , const time_t *, ___timer, a0, struct tm *, ___result, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_gmtime_adj(___tm, ___offset_day, ___offset_sec) \
      LP3(0x5a66, int, OPENSSL_gmtime_adj , struct tm *, ___tm, a0, int, ___offset_day, d0, long, ___offset_sec, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_gmtime_diff(___pday, ___psec, ___from, ___to) \
      LP4(0x5a6c, int, OPENSSL_gmtime_diff , int *, ___pday, a0, int *, ___psec, a1, const struct tm *, ___from, a2, const struct tm *, ___to, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get0_info(___ppkey_id, ___pflags, ___meth) \
      LP3NR(0x5a72, EVP_PKEY_meth_get0_info , int *, ___ppkey_id, a0, int *, ___pflags, a1, const EVP_PKEY_METHOD *, ___meth, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_copy(___dst, ___src) \
      LP2NR(0x5a78, EVP_PKEY_meth_copy , EVP_PKEY_METHOD *, ___dst, a0, const EVP_PKEY_METHOD *, ___src, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_add_PKCS1_PSS_mgf1(___rsa, ___EM, ___mHash, ___Hash, ___mgf1Hash, ___sLen) \
      LP6(0x5a7e, int, RSA_padding_add_PKCS1_PSS_mgf1 , RSA *, ___rsa, a0, unsigned char *, ___EM, a1, const unsigned char *, ___mHash, a2, const EVP_MD *, ___Hash, a3, const EVP_MD *, ___mgf1Hash, d0, int, ___sLen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_verify_PKCS1_PSS_mgf1(___rsa, ___mHash, ___Hash, ___mgf1Hash, ___EM, ___sLen) \
      LP6(0x5a84, int, RSA_verify_PKCS1_PSS_mgf1 , RSA *, ___rsa, a0, const unsigned char *, ___mHash, a1, const EVP_MD *, ___Hash, a2, const EVP_MD *, ___mgf1Hash, a3, const unsigned char *, ___EM, d0, int, ___sLen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ALGOR_set_md(___alg, ___md) \
      LP2NR(0x5a8a, X509_ALGOR_set_md , X509_ALGOR *, ___alg, a0, const EVP_MD *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMAC_CTX_copy(___out, ___in) \
      LP2(0x5a90, int, CMAC_CTX_copy , CMAC_CTX *, ___out, a0, const CMAC_CTX *, ___in, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMAC_CTX_free(___ctx) \
      LP1NR(0x5a96, CMAC_CTX_free , CMAC_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMAC_CTX_get0_cipher_ctx(___ctx) \
      LP1(0x5a9c, EVP_CIPHER_CTX *, CMAC_CTX_get0_cipher_ctx , CMAC_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMAC_CTX_cleanup(___ctx) \
      LP1NR(0x5aa2, CMAC_CTX_cleanup , CMAC_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMAC_Init(___ctx, ___key, ___keylen, ___cipher, ___impl) \
      LP5(0x5aa8, int, CMAC_Init , CMAC_CTX *, ___ctx, a0, const void *, ___key, a1, size_t, ___keylen, d0, const EVP_CIPHER *, ___cipher, a2, ENGINE *, ___impl, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMAC_Update(___ctx, ___data, ___dlen) \
      LP3(0x5aae, int, CMAC_Update , CMAC_CTX *, ___ctx, a0, const void *, ___data, a1, size_t, ___dlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMAC_resume(___ctx) \
      LP1(0x5ab4, int, CMAC_resume , CMAC_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMAC_CTX_new() \
      LP0(0x5aba, CMAC_CTX *, CMAC_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMAC_Final(___ctx, ___out, ___poutlen) \
      LP3(0x5ac0, int, CMAC_Final , CMAC_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t *, ___poutlen, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ctr128_encrypt_ctr32(___in, ___out, ___len, ___key, ___ivec, ___ecount_buf, ___num, ___ctr) \
      LP8NR(0x5ac6, CRYPTO_ctr128_encrypt_ctr32 , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, unsigned char *, ___ecount_buf, d1, unsigned int *, ___num, d2, ctr128_f, ___ctr, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_gcm128_release(___ctx) \
      LP1NR(0x5acc, CRYPTO_gcm128_release , GCM128_CONTEXT *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ccm128_decrypt_ccm64(___ctx, ___inp, ___out, ___len, ___stream) \
      LP5(0x5ad2, int, CRYPTO_ccm128_decrypt_ccm64 , CCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___inp, a1, unsigned char *, ___out, a2, size_t, ___len, d0, ccm128_f, ___stream, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ccm128_encrypt(___ctx, ___inp, ___out, ___len) \
      LP4(0x5ad8, int, CRYPTO_ccm128_encrypt , CCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___inp, a1, unsigned char *, ___out, a2, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_gcm128_encrypt(___ctx, ___in, ___out, ___len) \
      LP4(0x5ade, int, CRYPTO_gcm128_encrypt , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___in, a1, unsigned char *, ___out, a2, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_xts128_encrypt(___ctx, ___iv, ___inp, ___out, ___len, ___enc) \
      LP6(0x5ae4, int, CRYPTO_xts128_encrypt , XTS128_CONTEXT *, ___ctx, a0, const unsigned char *, ___iv, a1, const unsigned char *, ___inp, a2, unsigned char *, ___out, a3, size_t, ___len, d0, int, ___enc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_nistcts128_decrypt_block(___in, ___out, ___len, ___key, ___ivec, ___block) \
      LP6(0x5aea, size_t, CRYPTO_nistcts128_decrypt_block , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, d1, block128_f, ___block, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_gcm128_setiv(___ctx, ___iv, ___len) \
      LP3NR(0x5af0, CRYPTO_gcm128_setiv , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___iv, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_nistcts128_encrypt(___in, ___out, ___len, ___key, ___ivec, ___cbc) \
      LP6(0x5af6, size_t, CRYPTO_nistcts128_encrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, cbc128_f, ___cbc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_gcm128_tag(___ctx, ___tag, ___len) \
      LP3NR(0x5afc, CRYPTO_gcm128_tag , GCM128_CONTEXT *, ___ctx, a0, unsigned char *, ___tag, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ccm128_encrypt_ccm64(___ctx, ___inp, ___out, ___len, ___stream) \
      LP5(0x5b02, int, CRYPTO_ccm128_encrypt_ccm64 , CCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___inp, a1, unsigned char *, ___out, a2, size_t, ___len, d0, ccm128_f, ___stream, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ccm128_setiv(___ctx, ___nonce, ___nlen, ___mlen) \
      LP4(0x5b08, int, CRYPTO_ccm128_setiv , CCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___nonce, a1, size_t, ___nlen, d0, size_t, ___mlen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_nistcts128_encrypt_block(___in, ___out, ___len, ___key, ___ivec, ___block) \
      LP6(0x5b0e, size_t, CRYPTO_nistcts128_encrypt_block , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, block128_f, ___block, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_gcm128_aad(___ctx, ___aad, ___len) \
      LP3(0x5b14, int, CRYPTO_gcm128_aad , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___aad, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ccm128_init(___ctx, ___M, ___L, ___key, ___block) \
      LP5NR(0x5b1a, CRYPTO_ccm128_init , CCM128_CONTEXT *, ___ctx, a0, unsigned int, ___M, d0, unsigned int, ___L, d1, void *, ___key, a1, block128_f, ___block, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_nistcts128_decrypt(___in, ___out, ___len, ___key, ___ivec, ___cbc) \
      LP6(0x5b20, size_t, CRYPTO_nistcts128_decrypt , const unsigned char *, ___in, a0, unsigned char *, ___out, a1, size_t, ___len, d0, const void *, ___key, a2, unsigned char *, ___ivec, a3, cbc128_f, ___cbc, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_gcm128_new(___key, ___block) \
      LP2(0x5b26, GCM128_CONTEXT *, CRYPTO_gcm128_new , void *, ___key, a0, block128_f, ___block, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ccm128_tag(___ctx, ___tag, ___len) \
      LP3(0x5b2c, size_t, CRYPTO_ccm128_tag , CCM128_CONTEXT *, ___ctx, a0, unsigned char *, ___tag, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ccm128_decrypt(___ctx, ___inp, ___out, ___len) \
      LP4(0x5b32, int, CRYPTO_ccm128_decrypt , CCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___inp, a1, unsigned char *, ___out, a2, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ccm128_aad(___ctx, ___aad, ___alen) \
      LP3NR(0x5b38, CRYPTO_ccm128_aad , CCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___aad, a1, size_t, ___alen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_gcm128_init(___ctx, ___key, ___block) \
      LP3NR(0x5b3e, CRYPTO_gcm128_init , GCM128_CONTEXT *, ___ctx, a0, void *, ___key, a1, block128_f, ___block, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_gcm128_decrypt(___ctx, ___in, ___out, ___len) \
      LP4(0x5b44, int, CRYPTO_gcm128_decrypt , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___in, a1, unsigned char *, ___out, a2, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_gcm128_decrypt_ctr32(___ctx, ___in, ___out, ___len, ___stream) \
      LP5(0x5b4a, int, CRYPTO_gcm128_decrypt_ctr32 , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___in, a1, unsigned char *, ___out, a2, size_t, ___len, d0, ctr128_f, ___stream, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_gcm128_encrypt_ctr32(___ctx, ___in, ___out, ___len, ___stream) \
      LP5(0x5b50, int, CRYPTO_gcm128_encrypt_ctr32 , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___in, a1, unsigned char *, ___out, a2, size_t, ___len, d0, ctr128_f, ___stream, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_gcm128_finish(___ctx, ___tag, ___len) \
      LP3(0x5b56, int, CRYPTO_gcm128_finish , GCM128_CONTEXT *, ___ctx, a0, const unsigned char *, ___tag, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_pbkdf2_set(___iter, ___salt, ___saltlen, ___prf_nid, ___keylen) \
      LP5(0x5b5c, X509_ALGOR *, PKCS5_pbkdf2_set , int, ___iter, d0, unsigned char *, ___salt, a0, int, ___saltlen, d1, int, ___prf_nid, d2, int, ___keylen, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_PSS_PARAMS_new() \
      LP0(0x5b62, RSA_PSS_PARAMS *, RSA_PSS_PARAMS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_RSA_PSS_PARAMS(___a, ___pp, ___length) \
      LP3(0x5b68, RSA_PSS_PARAMS *, d2i_RSA_PSS_PARAMS , RSA_PSS_PARAMS **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_PSS_PARAMS_free(___a) \
      LP1NR(0x5b6e, RSA_PSS_PARAMS_free , RSA_PSS_PARAMS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_RSA_PSS_PARAMS(___a, ___out) \
      LP2(0x5b74, int, i2d_RSA_PSS_PARAMS , RSA_PSS_PARAMS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#ifndef NO_INLINE_VARARGS
#define OPENSSL_showfatal(___fmta, ___dummy, ...) \
    ({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; i2d_RSA_PSS_PARAMS((___fmta), (unsigned char **) _message); })
#endif /* !NO_INLINE_VARARGS */

#define POLICY_MAPPING_it() \
      LP0(0x5b80, const ASN1_ITEM *, POLICY_MAPPING_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAME_CONSTRAINTS_it() \
      LP0(0x5b86, const ASN1_ITEM *, NAME_CONSTRAINTS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_OCTET_STRING_NDEF_it() \
      LP0(0x5b8c, const ASN1_ITEM *, ASN1_OCTET_STRING_NDEF_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define POLICY_CONSTRAINTS_it() \
      LP0(0x5b98, const ASN1_ITEM *, POLICY_CONSTRAINTS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define POLICY_MAPPINGS_it() \
      LP0(0x5b9e, const ASN1_ITEM *, POLICY_MAPPINGS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define GENERAL_SUBTREE_it() \
      LP0(0x5ba4, const ASN1_ITEM *, GENERAL_SUBTREE_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_EXTENSIONS_it() \
      LP0(0x5baa, const ASN1_ITEM *, X509_EXTENSIONS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ALGORS_it() \
      LP0(0x5bb0, const ASN1_ITEM *, X509_ALGORS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_ContentInfo_it() \
      LP0(0x5bb6, const ASN1_ITEM *, CMS_ContentInfo_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_ReceiptRequest_it() \
      LP0(0x5bbc, const ASN1_ITEM *, CMS_ReceiptRequest_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_SEQUENCE_ANY_it() \
      LP0(0x5bc2, const ASN1_ITEM *, ASN1_SEQUENCE_ANY_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_SET_ANY_it() \
      LP0(0x5bc8, const ASN1_ITEM *, ASN1_SET_ANY_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ISSUING_DIST_POINT_it() \
      LP0(0x5bd4, const ASN1_ITEM *, ISSUING_DIST_POINT_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_PSS_PARAMS_it() \
      LP0(0x5bda, const ASN1_ITEM *, RSA_PSS_PARAMS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_DHxparams(___bp, ___x) \
      LP2(0x5be6, int, PEM_write_bio_DHxparams , BIO *, ___bp, a0, DH *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_ALGOR_cmp(___a, ___b) \
      LP2(0x5bec, int, X509_ALGOR_cmp , const X509_ALGOR *, ___a, a0, const X509_ALGOR *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_clear_free(___a) \
      LP1NR(0x5bf2, ASN1_STRING_clear_free , ASN1_STRING *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_diff(___pday, ___psec, ___from, ___to) \
      LP4(0x5bf8, int, ASN1_TIME_diff , int *, ___pday, a0, int *, ___psec, a1, const ASN1_TIME *, ___from, a2, const ASN1_TIME *, ___to, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_hex_string(___out, ___indent, ___width, ___data, ___datalen) \
      LP5(0x5bfe, int, BIO_hex_string , BIO *, ___out, a0, int, ___indent, d0, int, ___width, d1, unsigned char *, ___data, a1, int, ___datalen, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientEncryptedKey_cert_cmp(___rek, ___cert) \
      LP2(0x5c0a, int, CMS_RecipientEncryptedKey_cert_cmp , CMS_RecipientEncryptedKey *, ___rek, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientEncryptedKey_get0_id(___rek, ___keyid, ___tm, ___other, ___issuer, ___sno) \
      LP6(0x5c10, int, CMS_RecipientEncryptedKey_get0_id , CMS_RecipientEncryptedKey *, ___rek, a0, ASN1_OCTET_STRING **, ___keyid, a1, ASN1_GENERALIZEDTIME **, ___tm, a2, CMS_OtherKeyAttribute **, ___other, a3, X509_NAME **, ___issuer, d0, ASN1_INTEGER **, ___sno, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_encrypt(___cms, ___ri) \
      LP2(0x5c16, int, CMS_RecipientInfo_encrypt , CMS_ContentInfo *, ___cms, a0, CMS_RecipientInfo *, ___ri, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_get0_pkey_ctx(___ri) \
      LP1(0x5c1c, EVP_PKEY_CTX *, CMS_RecipientInfo_get0_pkey_ctx , CMS_RecipientInfo *, ___ri, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_kari_decrypt(___cms, ___ri, ___rek) \
      LP3(0x5c22, int, CMS_RecipientInfo_kari_decrypt , CMS_ContentInfo *, ___cms, a0, CMS_RecipientInfo *, ___ri, a1, CMS_RecipientEncryptedKey *, ___rek, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_kari_get0_alg(___ri, ___palg, ___pukm) \
      LP3(0x5c28, int, CMS_RecipientInfo_kari_get0_alg , CMS_RecipientInfo *, ___ri, a0, X509_ALGOR **, ___palg, a1, ASN1_OCTET_STRING **, ___pukm, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_kari_get0_ctx(___ri) \
      LP1(0x5c2e, EVP_CIPHER_CTX *, CMS_RecipientInfo_kari_get0_ctx , CMS_RecipientInfo *, ___ri, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_kari_get0_orig_id(___ri, ___pubalg, ___pubkey, ___keyid, ___issuer, ___sno) \
      LP6(0x5c34, int, CMS_RecipientInfo_kari_get0_orig_id , CMS_RecipientInfo *, ___ri, a0, X509_ALGOR **, ___pubalg, a1, ASN1_BIT_STRING **, ___pubkey, a2, ASN1_OCTET_STRING **, ___keyid, a3, X509_NAME **, ___issuer, d0, ASN1_INTEGER **, ___sno, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_kari_get0_reks(___ri) \
      LP1(0x5c3a, STACK_OF(CMS_RecipientEncryptedKey) *, CMS_RecipientInfo_kari_get0_reks , CMS_RecipientInfo *, ___ri, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_kari_orig_id_cmp(___ri, ___cert) \
      LP2(0x5c40, int, CMS_RecipientInfo_kari_orig_id_cmp , CMS_RecipientInfo *, ___ri, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_kari_set0_pkey(___ri, ___pk) \
      LP2(0x5c46, int, CMS_RecipientInfo_kari_set0_pkey , CMS_RecipientInfo *, ___ri, a0, EVP_PKEY *, ___pk, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_SharedInfo_encode(___pder, ___kekalg, ___ukm, ___keylen) \
      LP4(0x5c4c, int, CMS_SharedInfo_encode , unsigned char **, ___pder, a0, X509_ALGOR *, ___kekalg, a1, ASN1_OCTET_STRING *, ___ukm, a2, int, ___keylen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_SignerInfo_get0_md_ctx(___si) \
      LP1(0x5c52, EVP_MD_CTX *, CMS_SignerInfo_get0_md_ctx , CMS_SignerInfo *, ___si, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_SignerInfo_get0_pkey_ctx(___si) \
      LP1(0x5c58, EVP_PKEY_CTX *, CMS_SignerInfo_get0_pkey_ctx , CMS_SignerInfo *, ___si, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_SignerInfo_get0_signature(___si) \
      LP1(0x5c5e, ASN1_OCTET_STRING *, CMS_SignerInfo_get0_signature , CMS_SignerInfo *, ___si, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_DHxparams(___a, ___pp, ___length) \
      LP3(0x5c64, DH *, d2i_DHxparams , DH **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_DHxparams(___dh, ___pp) \
      LP2(0x5c6a, int, i2d_DHxparams , const DH *, ___dh, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_compute_key_padded(___key, ___pub_key, ___dh) \
      LP3(0x5c70, int, DH_compute_key_padded , unsigned char *, ___key, a0, const BIGNUM *, ___pub_key, a1, DH *, ___dh, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get_1024_160() \
      LP0(0x5c76, DH *, DH_get_1024_160 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get_2048_224() \
      LP0(0x5c7c, DH *, DH_get_2048_224 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get_2048_256() \
      LP0(0x5c82, DH *, DH_get_2048_256 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_KDF_X9_42(___out, ___outlen, ___Z, ___Zlen, ___key_oid, ___ukm, ___ukmlen, ___md) \
      LP8(0x5c88, int, DH_KDF_X9_42 , unsigned char *, ___out, a0, size_t, ___outlen, d0, const unsigned char *, ___Z, a1, size_t, ___Zlen, d1, ASN1_OBJECT *, ___key_oid, a2, const unsigned char *, ___ukm, a3, size_t, ___ukmlen, d2, const EVP_MD *, ___md, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_curve_nid2nist(___nid) \
      LP1(0x5c8e, const char *, EC_curve_nid2nist , int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_curve_nist2nid(___name) \
      LP1(0x5c94, int, EC_curve_nist2nid , const char *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_mont_data(___group) \
      LP1(0x5c9a, BN_MONT_CTX *, EC_GROUP_get_mont_data , const EC_GROUP *, ___group, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDH_KDF_X9_62(___out, ___outlen, ___Z, ___Zlen, ___sinfo, ___sinfolen, ___md) \
      LP7(0x5ca0, int, ECDH_KDF_X9_62 , unsigned char *, ___out, a0, size_t, ___outlen, d0, const unsigned char *, ___Z, a1, size_t, ___Zlen, d1, const unsigned char *, ___sinfo, a2, size_t, ___sinfolen, d2, const EVP_MD *, ___md, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_cbc_hmac_sha256() \
      LP0(0x5cdc, const EVP_CIPHER *, EVP_aes_128_cbc_hmac_sha256 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_wrap() \
      LP0(0x5ce2, const EVP_CIPHER *, EVP_aes_128_wrap ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_192_wrap() \
      LP0(0x5ce8, const EVP_CIPHER *, EVP_aes_192_wrap ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_cbc_hmac_sha256() \
      LP0(0x5cee, const EVP_CIPHER *, EVP_aes_256_cbc_hmac_sha256 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_wrap() \
      LP0(0x5cf4, const EVP_CIPHER *, EVP_aes_256_wrap ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_des_ede3_wrap() \
      LP0(0x5cfa, const EVP_CIPHER *, EVP_des_ede3_wrap ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_128_unwrap(___key, ___iv, ___out, ___in, ___inlen, ___block) \
      LP6(0x5d00, size_t, CRYPTO_128_unwrap , void *, ___key, a0, const unsigned char *, ___iv, a1, unsigned char *, ___out, a2, const unsigned char *, ___in, a3, size_t, ___inlen, d0, block128_f, ___block, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_128_wrap(___key, ___iv, ___out, ___in, ___inlen, ___block) \
      LP6(0x5d06, size_t, CRYPTO_128_wrap , void *, ___key, a0, const unsigned char *, ___iv, a1, unsigned char *, ___out, a2, const unsigned char *, ___in, a3, size_t, ___inlen, d0, block128_f, ___block, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQ_CTX_get0_mem_bio(___rctx) \
      LP1(0x5d0c, BIO *, OCSP_REQ_CTX_get0_mem_bio , OCSP_REQ_CTX *, ___rctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQ_CTX_http(___rctx, ___op, ___path) \
      LP3(0x5d12, int, OCSP_REQ_CTX_http , OCSP_REQ_CTX *, ___rctx, a0, const char *, ___op, a1, const char *, ___path, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQ_CTX_i2d(___rctx, ___it, ___val) \
      LP3(0x5d18, int, OCSP_REQ_CTX_i2d , OCSP_REQ_CTX *, ___rctx, a0, const ASN1_ITEM *, ___it, a1, ASN1_VALUE *, ___val, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQ_CTX_nbio(___rctx) \
      LP1(0x5d1e, int, OCSP_REQ_CTX_nbio , OCSP_REQ_CTX *, ___rctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQ_CTX_nbio_d2i(___rctx, ___pval, ___it) \
      LP3(0x5d24, int, OCSP_REQ_CTX_nbio_d2i , OCSP_REQ_CTX *, ___rctx, a0, ASN1_VALUE **, ___pval, a1, const ASN1_ITEM *, ___it, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_REQ_CTX_new(___io, ___maxline) \
      LP2(0x5d2a, OCSP_REQ_CTX *, OCSP_REQ_CTX_new , BIO *, ___io, a0, int, ___maxline, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_set_max_response_length(___rctx, ___len) \
      LP2NR(0x5d30, OCSP_set_max_response_length , OCSP_REQ_CTX *, ___rctx, a0, unsigned long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_RSA_OAEP_PARAMS(___a, ___in, ___len) \
      LP3(0x5d36, RSA_OAEP_PARAMS *, d2i_RSA_OAEP_PARAMS , RSA_OAEP_PARAMS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_OAEP_PARAMS_free(___a) \
      LP1NR(0x5d3c, RSA_OAEP_PARAMS_free , RSA_OAEP_PARAMS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_OAEP_PARAMS_it() \
      LP0(0x5d42, const ASN1_ITEM *, RSA_OAEP_PARAMS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_OAEP_PARAMS_new() \
      LP0(0x5d48, RSA_OAEP_PARAMS *, RSA_OAEP_PARAMS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_add_PKCS1_OAEP_mgf1(___to, ___tlen, ___from, ___flen, ___param, ___plen, ___md, ___mgf1md) \
      LP8(0x5d4e, int, RSA_padding_add_PKCS1_OAEP_mgf1 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___from, a1, int, ___flen, d1, const unsigned char *, ___param, a2, int, ___plen, d2, const EVP_MD *, ___md, a3, const EVP_MD *, ___mgf1md, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_padding_check_PKCS1_OAEP_mgf1(___to, ___tlen, ___from, ___flen, ___num, ___param, ___plen, ___md, ___mgf1md) \
      LP9(0x5d54, int, RSA_padding_check_PKCS1_OAEP_mgf1 , unsigned char *, ___to, a0, int, ___tlen, d0, const unsigned char *, ___from, a1, int, ___flen, d1, int, ___num, d2, const unsigned char *, ___param, a2, int, ___plen, d3, const EVP_MD *, ___md, a3, const EVP_MD *, ___mgf1md, d4,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_deep_copy(___sk, ___c, ___f) \
      LP3(0x5d5a, OPENSSL_STACK *, OPENSSL_sk_deep_copy , const OPENSSL_STACK *, ___sk, a0, OPENSSL_sk_copyfunc, ___c, a1, OPENSSL_sk_freefunc, ___f, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_re_X509_tbs(___x, ___pp) \
      LP2(0x5d60, int, i2d_re_X509_tbs , X509 *, ___x, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_chain_check_suiteb(___perror_depth, ___x, ___chain, ___flags) \
      LP4(0x5d66, int, X509_chain_check_suiteb , int *, ___perror_depth, a0, X509 *, ___x, a1, STACK_OF(X509) *, ___chain, a2, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_chain_up_ref(___chain) \
      LP1(0x5d6c, STACK_OF(X509) *, X509_chain_up_ref , STACK_OF(X509) *, ___chain, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_check_suiteb(___crl, ___pk, ___flags) \
      LP3(0x5d72, int, X509_CRL_check_suiteb , X509_CRL *, ___crl, a0, EVP_PKEY *, ___pk, a1, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_diff(___base, ___newer, ___skey, ___md, ___flags) \
      LP5(0x5d78, X509_CRL *, X509_CRL_diff , X509_CRL *, ___base, a0, X509_CRL *, ___newer, a1, EVP_PKEY *, ___skey, a2, const EVP_MD *, ___md, a3, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_http_nbio(___rctx, ___pcrl) \
      LP2(0x5d7e, int, X509_CRL_http_nbio , OCSP_REQ_CTX *, ___rctx, a0, X509_CRL **, ___pcrl, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_signature(___psig, ___palg, ___x) \
      LP3NR(0x5d84, X509_get0_signature , const ASN1_BIT_STRING **, ___psig, a0, const X509_ALGOR **, ___palg, a1, const X509 *, ___x, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_signature_nid(___x) \
      LP1(0x5d8a, int, X509_get_signature_nid , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_http_nbio(___rctx, ___pcert) \
      LP2(0x5d90, int, X509_http_nbio , OCSP_REQ_CTX *, ___rctx, a0, X509 **, ___pcert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_dup(___rev) \
      LP1(0x5d96, X509_REVOKED *, X509_REVOKED_dup , X509_REVOKED *, ___rev, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get0_store(___ctx) \
      LP1(0x5d9c, X509_STORE *, X509_STORE_CTX_get0_store , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_add1_host(___param, ___name, ___namelen) \
      LP3(0x5da2, int, X509_VERIFY_PARAM_add1_host , X509_VERIFY_PARAM *, ___param, a0, const char *, ___name, a1, size_t, ___namelen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get0(___id) \
      LP1(0x5da8, const X509_VERIFY_PARAM *, X509_VERIFY_PARAM_get0 , int, ___id, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get0_name(___param) \
      LP1(0x5dae, const char *, X509_VERIFY_PARAM_get0_name , const X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get0_peername(___param) \
      LP1(0x5db4, char *, X509_VERIFY_PARAM_get0_peername , X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get_count() \
      LP0(0x5dba, int, X509_VERIFY_PARAM_get_count ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set1_email(___param, ___email, ___emaillen) \
      LP3(0x5dc0, int, X509_VERIFY_PARAM_set1_email , X509_VERIFY_PARAM *, ___param, a0, const char *, ___email, a1, size_t, ___emaillen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set1_host(___param, ___name, ___namelen) \
      LP3(0x5dc6, int, X509_VERIFY_PARAM_set1_host , X509_VERIFY_PARAM *, ___param, a0, const char *, ___name, a1, size_t, ___namelen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set1_ip(___param, ___ip, ___iplen) \
      LP3(0x5dcc, int, X509_VERIFY_PARAM_set1_ip , X509_VERIFY_PARAM *, ___param, a0, const unsigned char *, ___ip, a1, size_t, ___iplen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set1_ip_asc(___param, ___ipasc) \
      LP2(0x5dd2, int, X509_VERIFY_PARAM_set1_ip_asc , X509_VERIFY_PARAM *, ___param, a0, const char *, ___ipasc, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set_hostflags(___param, ___flags) \
      LP2NR(0x5dd8, X509_VERIFY_PARAM_set_hostflags , X509_VERIFY_PARAM *, ___param, a0, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_check_email(___x, ___chk, ___chklen, ___flags) \
      LP4(0x5dde, int, X509_check_email , X509 *, ___x, a0, const char *, ___chk, a1, size_t, ___chklen, d0, unsigned int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_check_host(___x, ___chk, ___chklen, ___flags, ___peername) \
      LP5(0x5de4, int, X509_check_host , X509 *, ___x, a0, const char *, ___chk, a1, size_t, ___chklen, d0, unsigned int, ___flags, d1, char **, ___peername, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_check_ip(___x, ___chk, ___chklen, ___flags) \
      LP4(0x5dea, int, X509_check_ip , X509 *, ___x, a0, const unsigned char *, ___chk, a1, size_t, ___chklen, d0, unsigned int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_check_ip_asc(___x, ___ipasc, ___flags) \
      LP3(0x5df0, int, X509_check_ip_asc , X509 *, ___x, a0, const char *, ___ipasc, a1, unsigned int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_item(___ameth, ___item_verify, ___item_sign) \
      LP3NRFP2(0x5dfc, EVP_PKEY_asn1_set_item , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt1, ___item_verify, a1, __fpt2, ___item_sign, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_MD_CTX *,const ASN1_ITEM *,void *,X509_ALGOR *,ASN1_BIT_STRING *,EVP_PKEY *), int (*__fpt2)(EVP_MD_CTX *,const ASN1_ITEM *,void *,X509_ALGOR *,X509_ALGOR *,ASN1_BIT_STRING *), 0, 0, 0, 0, 0, 0)

#define DTLS_client_method() \
      LP0(0x5e02, const SSL_METHOD *, DTLS_client_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DTLS_method() \
      LP0(0x5e08, const SSL_METHOD *, DTLS_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DTLS_server_method() \
      LP0(0x5e0e, const SSL_METHOD *, DTLS_server_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_certs_clear(___s) \
      LP1NR(0x5e26, SSL_certs_clear , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_find(___ssl, ___ptr) \
      LP2(0x5e2c, const SSL_CIPHER *, SSL_CIPHER_find , SSL *, ___ssl, a0, const unsigned char *, ___ptr, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CONF_cmd(___ctx, ___cmd, ___value) \
      LP3(0x5e38, int, SSL_CONF_cmd , SSL_CONF_CTX *, ___ctx, a0, const char *, ___cmd, a1, const char *, ___value, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CONF_cmd_argv(___cctx, ___pargc, ___pargv) \
      LP3(0x5e3e, int, SSL_CONF_cmd_argv , SSL_CONF_CTX *, ___cctx, a0, int *, ___pargc, a1, char ***, ___pargv, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CONF_cmd_value_type(___cctx, ___cmd) \
      LP2(0x5e44, int, SSL_CONF_cmd_value_type , SSL_CONF_CTX *, ___cctx, a0, const char *, ___cmd, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CONF_CTX_clear_flags(___cctx, ___flags) \
      LP2(0x5e4a, unsigned int, SSL_CONF_CTX_clear_flags , SSL_CONF_CTX *, ___cctx, a0, unsigned int, ___flags, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CONF_CTX_finish(___cctx) \
      LP1(0x5e50, int, SSL_CONF_CTX_finish , SSL_CONF_CTX *, ___cctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CONF_CTX_free(___cctx) \
      LP1NR(0x5e56, SSL_CONF_CTX_free , SSL_CONF_CTX *, ___cctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CONF_CTX_new() \
      LP0(0x5e5c, SSL_CONF_CTX *, SSL_CONF_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CONF_CTX_set1_prefix(___cctx, ___pre) \
      LP2(0x5e62, int, SSL_CONF_CTX_set1_prefix , SSL_CONF_CTX *, ___cctx, a0, const char *, ___pre, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CONF_CTX_set_flags(___cctx, ___flags) \
      LP2(0x5e68, unsigned int, SSL_CONF_CTX_set_flags , SSL_CONF_CTX *, ___cctx, a0, unsigned int, ___flags, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CONF_CTX_set_ssl(___cctx, ___ssl) \
      LP2NR(0x5e6e, SSL_CONF_CTX_set_ssl , SSL_CONF_CTX *, ___cctx, a0, SSL *, ___ssl, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CONF_CTX_set_ssl_ctx(___cctx, ___ctx) \
      LP2NR(0x5e74, SSL_CONF_CTX_set_ssl_ctx , SSL_CONF_CTX *, ___cctx, a0, SSL_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_add_client_custom_ext(___ctx, ___ext_type, ___add_cb, ___free_cb, ___add_arg, ___parse_cb, ___parse_arg) \
      LP7(0x5e7a, int, SSL_CTX_add_client_custom_ext , SSL_CTX *, ___ctx, a0, unsigned int, ___ext_type, d0, custom_ext_add_cb, ___add_cb, d1, custom_ext_free_cb, ___free_cb, d2, void *, ___add_arg, a1, custom_ext_parse_cb, ___parse_cb, d3, void *, ___parse_arg, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_add_server_custom_ext(___ctx, ___ext_type, ___add_cb, ___free_cb, ___add_arg, ___parse_cb, ___parse_arg) \
      LP7(0x5e80, int, SSL_CTX_add_server_custom_ext , SSL_CTX *, ___ctx, a0, unsigned int, ___ext_type, d0, custom_ext_add_cb, ___add_cb, d1, custom_ext_free_cb, ___free_cb, d2, void *, ___add_arg, a1, custom_ext_parse_cb, ___parse_cb, d3, void *, ___parse_arg, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get0_certificate(___ctx) \
      LP1(0x5e86, X509 *, SSL_CTX_get0_certificate , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get0_param(___ctx) \
      LP1(0x5e8c, X509_VERIFY_PARAM *, SSL_CTX_get0_param , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get0_privatekey(___ctx) \
      LP1(0x5e92, EVP_PKEY *, SSL_CTX_get0_privatekey , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_ssl_method(___ctx) \
      LP1(0x5e98, const SSL_METHOD *, SSL_CTX_get_ssl_method , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_alpn_protos(___ctx, ___protos, ___protos_len) \
      LP3(0x5e9e, int, SSL_CTX_set_alpn_protos , SSL_CTX *, ___ctx, a0, const unsigned char *, ___protos, a1, unsigned int, ___protos_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_alpn_select_cb(___ctx, ___cb, ___arg) \
      LP3NR(0x5ea4, SSL_CTX_set_alpn_select_cb , SSL_CTX *, ___ctx, a0, SSL_CTX_alpn_select_cb_func, ___cb, a1, void *, ___arg, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_cert_cb(___c, ___cb, ___arg) \
      LP3NRFP(0x5eaa, SSL_CTX_set_cert_cb , SSL_CTX *, ___c, a0, __fpt, ___cb, a1, void *, ___arg, a2,\
      , AMISSL_BASE_NAME, int (*__fpt)(SSL *ssl,void *arg), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_serverinfo(___ctx, ___serverinfo, ___serverinfo_length) \
      LP3(0x5eb0, int, SSL_CTX_use_serverinfo , SSL_CTX *, ___ctx, a0, const unsigned char *, ___serverinfo, a1, size_t, ___serverinfo_length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_serverinfo_file(___ctx, ___file) \
      LP2(0x5eb6, int, SSL_CTX_use_serverinfo_file , SSL_CTX *, ___ctx, a0, const char *, ___file, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_extension_supported(___ext_type) \
      LP1(0x5ebc, int, SSL_extension_supported , unsigned int, ___ext_type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_alpn_selected(___ssl, ___data, ___len) \
      LP3NR(0x5ec2, SSL_get0_alpn_selected , const SSL *, ___ssl, a0, const unsigned char **, ___data, a1, unsigned int *, ___len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_param(___ssl) \
      LP1(0x5ec8, X509_VERIFY_PARAM *, SSL_get0_param , SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_is_server(___s) \
      LP1(0x5ece, int, SSL_is_server , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_alpn_protos(___ssl, ___protos, ___protos_len) \
      LP3(0x5ed4, int, SSL_set_alpn_protos , SSL *, ___ssl, a0, const unsigned char *, ___protos, a1, unsigned int, ___protos_len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_cert_cb(___s, ___cb, ___arg) \
      LP3NRFP(0x5eda, SSL_set_cert_cb , SSL *, ___s, a0, __fpt, ___cb, a1, void *, ___arg, a2,\
      , AMISSL_BASE_NAME, int (*__fpt)(SSL *ssl,void *arg), 0, 0, 0, 0, 0, 0)

#define SSL_check_chain(___s, ___x, ___pk, ___chain) \
      LP4(0x5ee0, int, SSL_check_chain , SSL *, ___s, a0, X509 *, ___x, a1, EVP_PKEY *, ___pk, a2, STACK_OF(X509) *, ___chain, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_shared_sigalgs(___s, ___idx, ___psign, ___phash, ___psignandhash, ___rsig, ___rhash) \
      LP7(0x5ee6, int, SSL_get_shared_sigalgs , SSL *, ___s, a0, int, ___idx, d0, int *, ___psign, a1, int *, ___phash, a2, int *, ___psignandhash, a3, unsigned char *, ___rsig, d1, unsigned char *, ___rhash, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_sigalgs(___s, ___idx, ___psign, ___phash, ___psignandhash, ___rsig, ___rhash) \
      LP7(0x5eec, int, SSL_get_sigalgs , SSL *, ___s, a0, int, ___idx, d0, int *, ___psign, a1, int *, ___phash, a2, int *, ___psignandhash, a3, unsigned char *, ___rsig, d1, unsigned char *, ___rhash, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_add_stable_module() \
      LP0NR(0x5ef2, ASN1_add_stable_module ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_buf_print(___bp, ___buf, ___buflen, ___off) \
      LP4(0x5ef8, int, ASN1_buf_print , BIO *, ___bp, a0, const unsigned char *, ___buf, a1, size_t, ___buflen, a2, int, ___off, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_ENUMERATED_get_int64(___pr, ___a) \
      LP2(0x5efe, int, ASN1_ENUMERATED_get_int64 , int64_t *, ___pr, a0, const ASN1_ENUMERATED *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_ENUMERATED_set_int64(___a, ___r) \
      LP2(0x5f04, int, ASN1_ENUMERATED_set_int64 , ASN1_ENUMERATED *, ___a, a0, int64_t, ___r, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_INTEGER_get_int64(___pr, ___a) \
      LP2(0x5f0a, int, ASN1_INTEGER_get_int64 , int64_t *, ___pr, a0, const ASN1_INTEGER *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_INTEGER_get_uint64(___pr, ___a) \
      LP2(0x5f10, int, ASN1_INTEGER_get_uint64 , uint64_t *, ___pr, a0, const ASN1_INTEGER *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_INTEGER_set_int64(___a, ___r) \
      LP2(0x5f16, int, ASN1_INTEGER_set_int64 , ASN1_INTEGER *, ___a, a0, int64_t, ___r, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_INTEGER_set_uint64(___a, ___r) \
      LP2(0x5f1c, int, ASN1_INTEGER_set_uint64 , ASN1_INTEGER *, ___a, a0, uint64_t, ___r, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_SCTX_free(___p) \
      LP1NR(0x5f22, ASN1_SCTX_free , ASN1_SCTX *, ___p, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_SCTX_get_app_data(___p) \
      LP1(0x5f28, void *, ASN1_SCTX_get_app_data , ASN1_SCTX *, ___p, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_SCTX_get_flags(___p) \
      LP1(0x5f2e, unsigned long, ASN1_SCTX_get_flags , ASN1_SCTX *, ___p, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_SCTX_get_item(___p) \
      LP1(0x5f34, const ASN1_ITEM *, ASN1_SCTX_get_item , ASN1_SCTX *, ___p, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_SCTX_get_template(___p) \
      LP1(0x5f3a, const ASN1_TEMPLATE *, ASN1_SCTX_get_template , ASN1_SCTX *, ___p, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_SCTX_new(___scan_cb) \
      LP1FP(0x5f40, ASN1_SCTX *, ASN1_SCTX_new , __fpt, ___scan_cb, a0,\
      , AMISSL_BASE_NAME, int (*__fpt)(ASN1_SCTX *), 0, 0, 0, 0, 0, 0)

#define ASN1_SCTX_set_app_data(___p, ___data) \
      LP2NR(0x5f46, ASN1_SCTX_set_app_data , ASN1_SCTX *, ___p, a0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_str2mask(___str, ___pmask) \
      LP2(0x5f4c, int, ASN1_str2mask , const char *, ___str, a0, unsigned long *, ___pmask, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TYPE_pack_sequence(___it, ___s, ___t) \
      LP3(0x5f52, ASN1_TYPE *, ASN1_TYPE_pack_sequence , const ASN1_ITEM *, ___it, a0, void *, ___s, a1, ASN1_TYPE **, ___t, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TYPE_unpack_sequence(___it, ___t) \
      LP2(0x5f58, void *, ASN1_TYPE_unpack_sequence , const ASN1_ITEM *, ___it, a0, const ASN1_TYPE *, ___t, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_block_pause() \
      LP0NR(0x5f5e, ASYNC_block_pause ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_cleanup_thread() \
      LP0NR(0x5f64, ASYNC_cleanup_thread ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_get_current_job() \
      LP0(0x5f70, ASYNC_JOB *, ASYNC_get_current_job ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_init_thread(___max_size, ___init_size) \
      LP2(0x5f7c, int, ASYNC_init_thread , size_t, ___max_size, d0, size_t, ___init_size, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_pause_job() \
      LP0(0x5f82, int, ASYNC_pause_job ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_start_job(___job, ___ctx, ___ret, ___func, ___args, ___size) \
      LP6FP(0x5f88, int, ASYNC_start_job , ASYNC_JOB **, ___job, a0, ASYNC_WAIT_CTX *, ___ctx, a1, int *, ___ret, a2, __fpt, ___func, a3, void *, ___args, d0, size_t, ___size, d1,\
      , AMISSL_BASE_NAME, int (*__fpt)(void *), 0, 0, 0, 0, 0, 0)

#define ASYNC_unblock_pause() \
      LP0NR(0x5f8e, ASYNC_unblock_pause ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_ASYNC_strings() \
      LP0(0x5f9a, int, ERR_load_ASYNC_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_accept_ex(___accept_sock, ___addr, ___options) \
      LP3(0x5fa0, int, BIO_accept_ex , int, ___accept_sock, d0, BIO_ADDR *, ___addr, a0, int, ___options, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDR_clear(___ap) \
      LP1NR(0x5fa6, BIO_ADDR_clear , BIO_ADDR *, ___ap, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDR_family(___ap) \
      LP1(0x5fac, int, BIO_ADDR_family , const BIO_ADDR *, ___ap, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDR_free(___ap) \
      LP1NR(0x5fb2, BIO_ADDR_free , BIO_ADDR *, ___ap, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDR_hostname_string(___ap, ___numeric) \
      LP2(0x5fb8, char *, BIO_ADDR_hostname_string , const BIO_ADDR *, ___ap, a0, int, ___numeric, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDR_new() \
      LP0(0x5fbe, BIO_ADDR *, BIO_ADDR_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDR_path_string(___ap) \
      LP1(0x5fc4, char *, BIO_ADDR_path_string , const BIO_ADDR *, ___ap, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDR_rawaddress(___ap, ___p, ___l) \
      LP3(0x5fca, int, BIO_ADDR_rawaddress , const BIO_ADDR *, ___ap, a0, void *, ___p, a1, size_t *, ___l, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDR_rawmake(___ap, ___family, ___where, ___wherelen, ___port) \
      LP5(0x5fd0, int, BIO_ADDR_rawmake , BIO_ADDR *, ___ap, a0, int, ___family, d0, const void *, ___where, a1, size_t, ___wherelen, d1, unsigned short, ___port, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDR_rawport(___ap) \
      LP1(0x5fd6, unsigned short, BIO_ADDR_rawport , const BIO_ADDR *, ___ap, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDR_service_string(___ap, ___numeric) \
      LP2(0x5fdc, char *, BIO_ADDR_service_string , const BIO_ADDR *, ___ap, a0, int, ___numeric, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDRINFO_address(___bai) \
      LP1(0x5fe2, const BIO_ADDR *, BIO_ADDRINFO_address , const BIO_ADDRINFO *, ___bai, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDRINFO_family(___bai) \
      LP1(0x5fe8, int, BIO_ADDRINFO_family , const BIO_ADDRINFO *, ___bai, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDRINFO_free(___bai) \
      LP1NR(0x5fee, BIO_ADDRINFO_free , BIO_ADDRINFO *, ___bai, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDRINFO_next(___bai) \
      LP1(0x5ff4, const BIO_ADDRINFO *, BIO_ADDRINFO_next , const BIO_ADDRINFO *, ___bai, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDRINFO_protocol(___bai) \
      LP1(0x5ffa, int, BIO_ADDRINFO_protocol , const BIO_ADDRINFO *, ___bai, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_ADDRINFO_socktype(___bai) \
      LP1(0x6000, int, BIO_ADDRINFO_socktype , const BIO_ADDRINFO *, ___bai, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_closesocket(___sock) \
      LP1(0x6006, int, BIO_closesocket , int, ___sock, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_connect(___sock, ___addr, ___options) \
      LP3(0x600c, int, BIO_connect , int, ___sock, d0, const BIO_ADDR *, ___addr, a0, int, ___options, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_listen(___sock, ___addr, ___options) \
      LP3(0x6012, int, BIO_listen , int, ___sock, d0, const BIO_ADDR *, ___addr, a0, int, ___options, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_lookup(___host, ___service, ___lookup_type, ___family, ___socktype, ___res) \
      LP6(0x6018, int, BIO_lookup , const char *, ___host, a0, const char *, ___service, a1, enum BIO_lookup_type, ___lookup_type, d0, int, ___family, d1, int, ___socktype, d2, BIO_ADDRINFO **, ___res, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_parse_hostserv(___hostserv, ___host, ___service, ___hostserv_prio) \
      LP4(0x601e, int, BIO_parse_hostserv , const char *, ___hostserv, a0, char **, ___host, a1, char **, ___service, a2, enum BIO_hostserv_priorities, ___hostserv_prio, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_s_secmem() \
      LP0(0x6024, const BIO_METHOD *, BIO_s_secmem ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_sock_info(___sock, ___type, ___info) \
      LP3(0x602a, int, BIO_sock_info , int, ___sock, d0, enum BIO_sock_info_type, ___type, d1, union BIO_sock_info_u *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_socket(___domain, ___socktype, ___protocol, ___options) \
      LP4(0x6030, int, BIO_socket , int, ___domain, d0, int, ___socktype, d1, int, ___protocol, d2, int, ___options, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_abs_is_word(___a, ___w) \
      LP2(0x6036, int, BN_abs_is_word , const BIGNUM *, ___a, a0, const BN_ULONG, ___w, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_bn2binpad(___a, ___to, ___tolen) \
      LP3(0x603c, int, BN_bn2binpad , const BIGNUM *, ___a, a0, unsigned char *, ___to, a1, int, ___tolen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_bn2lebinpad(___a, ___to, ___tolen) \
      LP3(0x6042, int, BN_bn2lebinpad , const BIGNUM *, ___a, a0, unsigned char *, ___to, a1, int, ___tolen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_CTX_secure_new() \
      LP0(0x6048, BN_CTX *, BN_CTX_secure_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GENCB_free(___cb) \
      LP1NR(0x604e, BN_GENCB_free , BN_GENCB *, ___cb, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GENCB_get_arg(___cb) \
      LP1(0x6054, void *, BN_GENCB_get_arg , BN_GENCB *, ___cb, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GENCB_new() \
      LP0(0x605a, BN_GENCB *, BN_GENCB_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_GENCB_set(___gencb, ___callback, ___cb_arg) \
      LP3NRFP(0x6060, BN_GENCB_set , BN_GENCB *, ___gencb, a0, __fpt, ___callback, a1, void *, ___cb_arg, a2,\
      , AMISSL_BASE_NAME, int (*__fpt)(int,int,BN_GENCB *), 0, 0, 0, 0, 0, 0)

#define BN_GENCB_set_old(___gencb, ___callback, ___cb_arg) \
      LP3NRFP(0x6066, BN_GENCB_set_old , BN_GENCB *, ___gencb, a0, __fpt, ___callback, a1, void *, ___cb_arg, a2,\
      , AMISSL_BASE_NAME, void (*__fpt)(int,int,void *), 0, 0, 0, 0, 0, 0)

#define BN_generate_dsa_nonce(___out, ___range, ___priv, ___message, ___message_len, ___ctx) \
      LP6(0x606c, int, BN_generate_dsa_nonce , BIGNUM *, ___out, a0, const BIGNUM *, ___range, a1, const BIGNUM *, ___priv, a2, const unsigned char *, ___message, a3, size_t, ___message_len, d0, BN_CTX *, ___ctx, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_get_flags(___b, ___n) \
      LP2(0x6072, int, BN_get_flags , const BIGNUM *, ___b, a0, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_is_negative(___a) \
      LP1(0x6078, int, BN_is_negative , const BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_is_odd(___a) \
      LP1(0x607e, int, BN_is_odd , const BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_is_one(___a) \
      LP1(0x6084, int, BN_is_one , const BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_is_word(___a, ___w) \
      LP2(0x608a, int, BN_is_word , const BIGNUM *, ___a, a0, const BN_ULONG, ___w, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_is_zero(___a) \
      LP1(0x6090, int, BN_is_zero , const BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_lebin2bn(___s, ___len, ___ret) \
      LP3(0x6096, BIGNUM *, BN_lebin2bn , const unsigned char *, ___s, a0, int, ___len, d0, BIGNUM *, ___ret, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_nist_mod_func(___p) \
      LP1FR(0x609c, __fpr, BN_nist_mod_func , const BIGNUM *, ___p, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(BIGNUM *, const BIGNUM *, const BIGNUM *, BN_CTX *), 0, 0, 0, 0, 0, 0)

#define BN_secure_new() \
      LP0(0x60a2, BIGNUM *, BN_secure_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_security_bits(___L, ___N) \
      LP2(0x60a8, int, BN_security_bits , int, ___L, d0, int, ___N, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_set_flags(___b, ___n) \
      LP2NR(0x60ae, BN_set_flags , BIGNUM *, ___b, a0, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_to_montgomery(___r, ___a, ___mont, ___ctx) \
      LP4(0x60b4, int, BN_to_montgomery , BIGNUM *, ___r, a0, const BIGNUM *, ___a, a1, BN_MONT_CTX *, ___mont, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_with_flags(___dest, ___b, ___flags) \
      LP3NR(0x60ba, BN_with_flags , BIGNUM *, ___dest, a0, const BIGNUM *, ___b, a1, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_zero_ex(___a) \
      LP1NR(0x60c0, BN_zero_ex , BIGNUM *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BUF_MEM_new_ex(___flags) \
      LP1(0x60c6, BUF_MEM *, BUF_MEM_new_ex , unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define COMP_CTX_get_method(___ctx) \
      LP1(0x60cc, const COMP_METHOD *, COMP_CTX_get_method , const COMP_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define COMP_CTX_get_type(___ctx) \
      LP1(0x60d2, int, COMP_CTX_get_type , const COMP_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define COMP_get_name(___meth) \
      LP1(0x60d8, const char *, COMP_get_name , const COMP_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define COMP_get_type(___meth) \
      LP1(0x60de, int, COMP_get_type , const COMP_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_clear_free(___str, ___num, ___file, ___line) \
      LP4NR(0x60e4, CRYPTO_clear_free , void *, ___str, a0, size_t, ___num, d0, const char *, ___file, a1, int, ___line, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_clear_realloc(___str, ___old_len, ___num, ___file, ___line) \
      LP5(0x60ea, void *, CRYPTO_clear_realloc , void *, ___str, a0, size_t, ___old_len, d0, size_t, ___num, d1, const char *, ___file, a1, int, ___line, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_free_ex_index(___class_index, ___idx) \
      LP2(0x60f0, int, CRYPTO_free_ex_index , int, ___class_index, d0, int, ___idx, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_memdup(___data, ___siz, ___file, ___line) \
      LP4(0x60f6, void *, CRYPTO_memdup , const void *, ___data, a0, size_t, ___siz, d0, const char *, ___file, a1, int, ___line, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_secure_actual_size(___ptr) \
      LP1(0x60fc, size_t, CRYPTO_secure_actual_size , void *, ___ptr, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_secure_allocated(___ptr) \
      LP1(0x6102, int, CRYPTO_secure_allocated , void *, ___ptr, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_secure_free(___ptr, ___file, ___line) \
      LP3NR(0x6108, CRYPTO_secure_free , void *, ___ptr, a0, const char *, ___file, a1, int, ___line, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_secure_malloc(___num, ___file, ___line) \
      LP3(0x610e, void *, CRYPTO_secure_malloc , size_t, ___num, d0, const char *, ___file, a0, int, ___line, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_secure_malloc_done() \
      LP0(0x6114, int, CRYPTO_secure_malloc_done ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_secure_malloc_init(___sz, ___minsize) \
      LP2(0x611a, int, CRYPTO_secure_malloc_init , size_t, ___sz, d0, int, ___minsize, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_secure_malloc_initialized() \
      LP0(0x6120, int, CRYPTO_secure_malloc_initialized ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_secure_used() \
      LP0(0x6126, size_t, CRYPTO_secure_used ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_secure_zalloc(___num, ___file, ___line) \
      LP3(0x612c, void *, CRYPTO_secure_zalloc , size_t, ___num, d0, const char *, ___file, a0, int, ___line, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_set_mem_debug(___flag) \
      LP1(0x6132, int, CRYPTO_set_mem_debug , int, ___flag, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_strndup(___str, ___s, ___file, ___line) \
      LP4(0x6138, char *, CRYPTO_strndup , const char *, ___str, a0, size_t, ___s, d0, const char *, ___file, a1, int, ___line, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_zalloc(___num, ___file, ___line) \
      LP3(0x613e, void *, CRYPTO_zalloc , size_t, ___num, d0, const char *, ___file, a0, int, ___line, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_atexit(___handler) \
      LP1FP(0x6144, int, OPENSSL_atexit , __fpt, ___handler, a0,\
      , AMISSL_BASE_NAME, void (*__fpt)(void), 0, 0, 0, 0, 0, 0)

#define OPENSSL_cleanup() \
      LP0NR(0x614a, OPENSSL_cleanup ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_init_crypto(___opts, ___settings) \
      LP2(0x6150, int, OPENSSL_init_crypto , uint64_t, ___opts, d0, const OPENSSL_INIT_SETTINGS *, ___settings, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_INIT_free(___settings) \
      LP1NR(0x6156, OPENSSL_INIT_free , OPENSSL_INIT_SETTINGS *, ___settings, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_INIT_new() \
      LP0(0x615c, OPENSSL_INIT_SETTINGS *, OPENSSL_INIT_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_strlcat(___dst, ___src, ___size) \
      LP3(0x6168, size_t, OPENSSL_strlcat , char *, ___dst, a0, const char *, ___src, a1, size_t, ___size, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_strlcpy(___dst, ___src, ___size) \
      LP3(0x616e, size_t, OPENSSL_strlcpy , char *, ___dst, a0, const char *, ___src, a1, size_t, ___size, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_strnlen(___str, ___maxlen) \
      LP2(0x6174, size_t, OPENSSL_strnlen , const char *, ___str, a0, size_t, ___maxlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_thread_stop() \
      LP0NR(0x617a, OPENSSL_thread_stop ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OpenSSL_version(___type) \
      LP1(0x6180, const char *, OpenSSL_version , int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OpenSSL_version_num() \
      LP0(0x6186, unsigned long, OpenSSL_version_num ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_bits(___dh) \
      LP1(0x618c, int, DH_bits , const DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_security_bits(___dh) \
      LP1(0x6192, int, DH_security_bits , const DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_security_bits(___d) \
      LP1(0x6198, int, DSA_security_bits , const DSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get0_cofactor(___group) \
      LP1(0x619e, const BIGNUM *, EC_GROUP_get0_cofactor , const EC_GROUP *, ___group, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get0_order(___group) \
      LP1(0x61a4, const BIGNUM *, EC_GROUP_get0_order , const EC_GROUP *, ___group, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_order_bits(___group) \
      LP1(0x61aa, int, EC_GROUP_order_bits , const EC_GROUP *, ___group, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_get_default_method() \
      LP0(0x61b0, const EC_KEY_METHOD *, EC_KEY_get_default_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_get_ex_data(___key, ___idx) \
      LP2(0x61b6, void *, EC_KEY_get_ex_data , const EC_KEY *, ___key, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_get_method(___key) \
      LP1(0x61bc, const EC_KEY_METHOD *, EC_KEY_get_method , const EC_KEY *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_key2buf(___key, ___form, ___pbuf, ___ctx) \
      LP4(0x61c2, size_t, EC_KEY_key2buf , const EC_KEY *, ___key, a0, point_conversion_form_t, ___form, d0, unsigned char **, ___pbuf, a1, BN_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_METHOD_free(___meth) \
      LP1NR(0x61c8, EC_KEY_METHOD_free , EC_KEY_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_METHOD_get_compute_key(___meth, ___pck) \
      LP2NRFP(0x61ce, EC_KEY_METHOD_get_compute_key , const EC_KEY_METHOD *, ___meth, a0, __fpt, ___pck, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(unsigned char **,size_t *,const EC_POINT *,const EC_KEY *), 0, 0, 0, 0, 0, 0)

#define EC_KEY_METHOD_get_init(___meth, ___pinit, ___pfinish, ___pcopy, ___pset_group, ___pset_private, ___pset_public) \
      LP7NRFP6(0x61d4, EC_KEY_METHOD_get_init , const EC_KEY_METHOD *, ___meth, a0, __fpt1, ___pinit, a1, __fpt2, ___pfinish, a2, __fpt3, ___pcopy, a3, __fpt4, ___pset_group, d0, __fpt5, ___pset_private, d1, __fpt6, ___pset_public, d2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EC_KEY *), void (*__fpt2)(EC_KEY *), int (*__fpt3)(EC_KEY *,const EC_KEY *), int (*__fpt4)(EC_KEY *,const EC_GROUP *), int (*__fpt5)(EC_KEY *,const BIGNUM *), int (*__fpt6)(EC_KEY *,const EC_POINT *), 0, 0, 0, 0, 0, 0)

#define EC_KEY_METHOD_get_keygen(___meth, ___pkeygen) \
      LP2NRFP(0x61da, EC_KEY_METHOD_get_keygen , const EC_KEY_METHOD *, ___meth, a0, __fpt, ___pkeygen, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EC_KEY *), 0, 0, 0, 0, 0, 0)

#define EC_KEY_METHOD_get_sign(___meth, ___psign, ___psign_setup, ___psign_sig) \
      LP4NRFP3(0x61e0, EC_KEY_METHOD_get_sign , const EC_KEY_METHOD *, ___meth, a0, __fpt1, ___psign, a1, __fpt2, ___psign_setup, a2, __fpt3, ___psign_sig, a3,\
      , AMISSL_BASE_NAME, int (*__fpt1)(int,const unsigned char *,int,unsigned char *,unsigned int *,const BIGNUM *,const BIGNUM *,EC_KEY *), int (*__fpt2)(EC_KEY *,BN_CTX *,BIGNUM **,BIGNUM **), ECDSA_SIG * (*__fpt3)(const unsigned char *,int,const BIGNUM *,const BIGNUM *,EC_KEY *), 0, 0, 0, 0, 0, 0)

#define EC_KEY_METHOD_get_verify(___meth, ___pverify, ___pverify_sig) \
      LP3NRFP2(0x61e6, EC_KEY_METHOD_get_verify , const EC_KEY_METHOD *, ___meth, a0, __fpt1, ___pverify, a1, __fpt2, ___pverify_sig, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(int,const unsigned char *,int,const unsigned char *,int,EC_KEY *), int (*__fpt2)(const unsigned char *,int,const ECDSA_SIG *,EC_KEY *), 0, 0, 0, 0, 0, 0)

#define EC_KEY_METHOD_new(___meth) \
      LP1(0x61ec, EC_KEY_METHOD *, EC_KEY_METHOD_new , const EC_KEY_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_METHOD_set_compute_key(___meth, ___ckey) \
      LP2NRFP(0x61f2, EC_KEY_METHOD_set_compute_key , EC_KEY_METHOD *, ___meth, a0, __fpt, ___ckey, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(unsigned char **,size_t *,const EC_POINT *,const EC_KEY *), 0, 0, 0, 0, 0, 0)

#define EC_KEY_METHOD_set_init(___meth, ___init, ___finish, ___copy, ___set_group, ___set_private, ___set_public) \
      LP7NRFP6(0x61f8, EC_KEY_METHOD_set_init , EC_KEY_METHOD *, ___meth, a0, __fpt1, ___init, a1, __fpt2, ___finish, a2, __fpt3, ___copy, a3, __fpt4, ___set_group, d0, __fpt5, ___set_private, d1, __fpt6, ___set_public, d2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EC_KEY *), void (*__fpt2)(EC_KEY *), int (*__fpt3)(EC_KEY *,const EC_KEY *), int (*__fpt4)(EC_KEY *,const EC_GROUP *), int (*__fpt5)(EC_KEY *,const BIGNUM *), int (*__fpt6)(EC_KEY *,const EC_POINT *), 0, 0, 0, 0, 0, 0)

#define EC_KEY_METHOD_set_keygen(___meth, ___keygen) \
      LP2NRFP(0x61fe, EC_KEY_METHOD_set_keygen , EC_KEY_METHOD *, ___meth, a0, __fpt, ___keygen, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EC_KEY *), 0, 0, 0, 0, 0, 0)

#define EC_KEY_METHOD_set_sign(___meth, ___sign, ___sign_setup, ___sign_sig) \
      LP4NRFP3(0x6204, EC_KEY_METHOD_set_sign , EC_KEY_METHOD *, ___meth, a0, __fpt1, ___sign, a1, __fpt2, ___sign_setup, a2, __fpt3, ___sign_sig, a3,\
      , AMISSL_BASE_NAME, int (*__fpt1)(int,const unsigned char *,int,unsigned char *,unsigned int *,const BIGNUM *,const BIGNUM *,EC_KEY *), int (*__fpt2)(EC_KEY *,BN_CTX *,BIGNUM **,BIGNUM **), ECDSA_SIG * (*__fpt3)(const unsigned char *,int,const BIGNUM *,const BIGNUM *,EC_KEY *), 0, 0, 0, 0, 0, 0)

#define EC_KEY_METHOD_set_verify(___meth, ___verify, ___verify_sig) \
      LP3NRFP2(0x620a, EC_KEY_METHOD_set_verify , EC_KEY_METHOD *, ___meth, a0, __fpt1, ___verify, a1, __fpt2, ___verify_sig, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(int,const unsigned char *,int,const unsigned char *,int,EC_KEY *), int (*__fpt2)(const unsigned char *,int,const ECDSA_SIG *,EC_KEY *), 0, 0, 0, 0, 0, 0)

#define EC_KEY_new_method(___engine) \
      LP1(0x6210, EC_KEY *, EC_KEY_new_method , ENGINE *, ___engine, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_oct2key(___key, ___buf, ___len, ___ctx) \
      LP4(0x6216, int, EC_KEY_oct2key , EC_KEY *, ___key, a0, const unsigned char *, ___buf, a1, size_t, ___len, d0, BN_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_oct2priv(___key, ___buf, ___len) \
      LP3(0x621c, int, EC_KEY_oct2priv , EC_KEY *, ___key, a0, const unsigned char *, ___buf, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_OpenSSL() \
      LP0(0x6222, const EC_KEY_METHOD *, EC_KEY_OpenSSL ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_priv2buf(___eckey, ___pbuf) \
      LP2(0x6228, size_t, EC_KEY_priv2buf , const EC_KEY *, ___eckey, a0, unsigned char **, ___pbuf, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_priv2oct(___eckey, ___buf, ___len) \
      LP3(0x622e, size_t, EC_KEY_priv2oct , const EC_KEY *, ___eckey, a0, unsigned char *, ___buf, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_set_default_method(___meth) \
      LP1NR(0x6234, EC_KEY_set_default_method , const EC_KEY_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_set_ex_data(___key, ___idx, ___arg) \
      LP3(0x623a, int, EC_KEY_set_ex_data , EC_KEY *, ___key, a0, int, ___idx, d0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_set_method(___key, ___meth) \
      LP2(0x6240, int, EC_KEY_set_method , EC_KEY *, ___key, a0, const EC_KEY_METHOD *, ___meth, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_point2buf(___group, ___point, ___form, ___pbuf, ___ctx) \
      LP5(0x6246, size_t, EC_POINT_point2buf , const EC_GROUP *, ___group, a0, const EC_POINT *, ___point, a1, point_conversion_form_t, ___form, d0, unsigned char **, ___pbuf, a2, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_SIG_get0(___sig, ___pr, ___ps) \
      LP3NR(0x624c, ECDSA_SIG_get0 , const ECDSA_SIG *, ___sig, a0, const BIGNUM **, ___pr, a1, const BIGNUM **, ___ps, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_default_EC() \
      LP0(0x6252, ENGINE *, ENGINE_get_default_EC ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_get_EC(___e) \
      LP1(0x6258, const EC_KEY_METHOD *, ENGINE_get_EC , const ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_all_EC() \
      LP0NR(0x625e, ENGINE_register_all_EC ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_register_EC(___e) \
      LP1(0x6264, int, ENGINE_register_EC , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_default_EC(___e) \
      LP1(0x626a, int, ENGINE_set_default_EC , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_set_EC(___e, ___ecdsa_meth) \
      LP2(0x6270, int, ENGINE_set_EC , ENGINE *, ___e, a0, const EC_KEY_METHOD *, ___ecdsa_meth, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ENGINE_unregister_EC(___e) \
      LP1NR(0x6276, ENGINE_unregister_EC , ENGINE *, ___e, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_ocb() \
      LP0(0x627c, const EVP_CIPHER *, EVP_aes_128_ocb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_128_wrap_pad() \
      LP0(0x6282, const EVP_CIPHER *, EVP_aes_128_wrap_pad ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_192_ocb() \
      LP0(0x6288, const EVP_CIPHER *, EVP_aes_192_ocb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_192_wrap_pad() \
      LP0(0x628e, const EVP_CIPHER *, EVP_aes_192_wrap_pad ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_ocb() \
      LP0(0x6294, const EVP_CIPHER *, EVP_aes_256_ocb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aes_256_wrap_pad() \
      LP0(0x629a, const EVP_CIPHER *, EVP_aes_256_wrap_pad ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_128_ctr() \
      LP0(0x62a0, const EVP_CIPHER *, EVP_camellia_128_ctr ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_192_ctr() \
      LP0(0x62a6, const EVP_CIPHER *, EVP_camellia_192_ctr ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_camellia_256_ctr() \
      LP0(0x62ac, const EVP_CIPHER *, EVP_camellia_256_ctr ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_chacha20() \
      LP0(0x62b2, const EVP_CIPHER *, EVP_chacha20 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_chacha20_poly1305() \
      LP0(0x62b8, const EVP_CIPHER *, EVP_chacha20_poly1305 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_buf_noconst(___ctx) \
      LP1(0x62be, unsigned char *, EVP_CIPHER_CTX_buf_noconst , EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get_cipher_data(___ctx) \
      LP1(0x62c4, void *, EVP_CIPHER_CTX_get_cipher_data , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_set_cipher_data(___ctx, ___cipher_data) \
      LP2(0x62ca, void *, EVP_CIPHER_CTX_set_cipher_data , EVP_CIPHER_CTX *, ___ctx, a0, void *, ___cipher_data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_encrypting(___ctx) \
      LP1(0x62d0, int, EVP_CIPHER_CTX_encrypting , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_iv(___ctx) \
      LP1(0x62d6, const unsigned char *, EVP_CIPHER_CTX_iv , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_iv_noconst(___ctx) \
      LP1(0x62dc, unsigned char *, EVP_CIPHER_CTX_iv_noconst , EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_num(___ctx) \
      LP1(0x62e2, int, EVP_CIPHER_CTX_num , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_original_iv(___ctx) \
      LP1(0x62e8, const unsigned char *, EVP_CIPHER_CTX_original_iv , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_reset(___ctx) \
      LP1(0x62ee, int, EVP_CIPHER_CTX_reset , EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_set_num(___ctx, ___num) \
      LP2NR(0x62f4, EVP_CIPHER_CTX_set_num , EVP_CIPHER_CTX *, ___ctx, a0, int, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_impl_ctx_size(___cipher) \
      LP1(0x62fa, int, EVP_CIPHER_impl_ctx_size , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_dup(___cipher) \
      LP1(0x6300, EVP_CIPHER *, EVP_CIPHER_meth_dup , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_free(___cipher) \
      LP1NR(0x6306, EVP_CIPHER_meth_free , EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_get_cleanup(___cipher) \
      LP1FR(0x630c, __fpr, EVP_CIPHER_meth_get_cleanup , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_CIPHER_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_get_ctrl(___cipher) \
      LP1FR(0x6312, __fpr, EVP_CIPHER_meth_get_ctrl , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_CIPHER_CTX *, int, int, void *), 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_get_do_cipher(___cipher) \
      LP1FR(0x6318, __fpr, EVP_CIPHER_meth_get_do_cipher , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_CIPHER_CTX *, unsigned char *, const unsigned char *, size_t), 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_get_get_asn1_params(___cipher) \
      LP1FR(0x631e, __fpr, EVP_CIPHER_meth_get_get_asn1_params , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_CIPHER_CTX *, ASN1_TYPE *), 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_get_init(___cipher) \
      LP1FR(0x6324, __fpr, EVP_CIPHER_meth_get_init , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_CIPHER_CTX *, const unsigned char *, const unsigned char *, int), 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_get_set_asn1_params(___cipher) \
      LP1FR(0x632a, __fpr, EVP_CIPHER_meth_get_set_asn1_params , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_CIPHER_CTX *, ASN1_TYPE *), 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_new(___cipher_type, ___block_size, ___key_len) \
      LP3(0x6330, EVP_CIPHER *, EVP_CIPHER_meth_new , int, ___cipher_type, d0, int, ___block_size, d1, int, ___key_len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_set_cleanup(___cipher, ___cleanup) \
      LP2FP(0x6336, int, EVP_CIPHER_meth_set_cleanup , EVP_CIPHER *, ___cipher, a0, __fpt, ___cleanup, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_CIPHER_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_set_ctrl(___cipher, ___ctrl) \
      LP2FP(0x633c, int, EVP_CIPHER_meth_set_ctrl , EVP_CIPHER *, ___cipher, a0, __fpt, ___ctrl, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_CIPHER_CTX *,int,int,void *), 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_set_do_cipher(___cipher, ___do_cipher) \
      LP2FP(0x6342, int, EVP_CIPHER_meth_set_do_cipher , EVP_CIPHER *, ___cipher, a0, __fpt, ___do_cipher, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_CIPHER_CTX *,unsigned char *,const unsigned char *,size_t), 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_set_flags(___cipher, ___flags) \
      LP2(0x6348, int, EVP_CIPHER_meth_set_flags , EVP_CIPHER *, ___cipher, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_set_get_asn1_params(___cipher, ___get_asn1_parameters) \
      LP2FP(0x634e, int, EVP_CIPHER_meth_set_get_asn1_params , EVP_CIPHER *, ___cipher, a0, __fpt, ___get_asn1_parameters, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_CIPHER_CTX *,ASN1_TYPE *), 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_set_impl_ctx_size(___cipher, ___ctx_size) \
      LP2(0x6354, int, EVP_CIPHER_meth_set_impl_ctx_size , EVP_CIPHER *, ___cipher, a0, int, ___ctx_size, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_set_init(___cipher, ___init) \
      LP2FP(0x635a, int, EVP_CIPHER_meth_set_init , EVP_CIPHER *, ___cipher, a0, __fpt, ___init, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_CIPHER_CTX *,const unsigned char *,const unsigned char *,int), 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_set_iv_length(___cipher, ___iv_len) \
      LP2(0x6360, int, EVP_CIPHER_meth_set_iv_length , EVP_CIPHER *, ___cipher, a0, int, ___iv_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_meth_set_set_asn1_params(___cipher, ___set_asn1_parameters) \
      LP2FP(0x6366, int, EVP_CIPHER_meth_set_set_asn1_params , EVP_CIPHER *, ___cipher, a0, __fpt, ___set_asn1_parameters, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_CIPHER_CTX *,ASN1_TYPE *), 0, 0, 0, 0, 0, 0)

#define EVP_ENCODE_CTX_free(___ctx) \
      LP1NR(0x636c, EVP_ENCODE_CTX_free , EVP_ENCODE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ENCODE_CTX_new() \
      LP0(0x6372, EVP_ENCODE_CTX *, EVP_ENCODE_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ENCODE_CTX_num(___ctx) \
      LP1(0x6378, int, EVP_ENCODE_CTX_num , EVP_ENCODE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_md5_sha1() \
      LP0(0x637e, const EVP_MD *, EVP_md5_sha1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_ctrl(___ctx, ___cmd, ___p1, ___p2) \
      LP4(0x6384, int, EVP_MD_CTX_ctrl , EVP_MD_CTX *, ___ctx, a0, int, ___cmd, d0, int, ___p1, d1, void *, ___p2, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_free(___ctx) \
      LP1NR(0x638a, EVP_MD_CTX_free , EVP_MD_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_md_data(___ctx) \
      LP1(0x6390, void *, EVP_MD_CTX_md_data , const EVP_MD_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_new() \
      LP0(0x6396, EVP_MD_CTX *, EVP_MD_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_pkey_ctx(___ctx) \
      LP1(0x639c, EVP_PKEY_CTX *, EVP_MD_CTX_pkey_ctx , const EVP_MD_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_reset(___ctx) \
      LP1(0x63a2, int, EVP_MD_CTX_reset , EVP_MD_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_set_update_fn(___ctx, ___update) \
      LP2NRFP(0x63a8, EVP_MD_CTX_set_update_fn , EVP_MD_CTX *, ___ctx, a0, __fpt, ___update, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_MD_CTX *,const void *,size_t), 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_update_fn(___ctx) \
      LP1FR(0x63ae, __fpr, EVP_MD_CTX_update_fn , EVP_MD_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_MD_CTX *, const void *, size_t), 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_dup(___md) \
      LP1(0x63b4, EVP_MD *, EVP_MD_meth_dup , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_free(___md) \
      LP1NR(0x63ba, EVP_MD_meth_free , EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_get_app_datasize(___md) \
      LP1(0x63c0, int, EVP_MD_meth_get_app_datasize , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_get_cleanup(___md) \
      LP1FR(0x63c6, __fpr, EVP_MD_meth_get_cleanup , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_MD_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_get_copy(___md) \
      LP1FR(0x63cc, __fpr, EVP_MD_meth_get_copy , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_MD_CTX *, const EVP_MD_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_get_ctrl(___md) \
      LP1FR(0x63d2, __fpr, EVP_MD_meth_get_ctrl , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_MD_CTX *, int, int, void *), 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_get_final(___md) \
      LP1FR(0x63d8, __fpr, EVP_MD_meth_get_final , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_MD_CTX *, unsigned char *), 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_get_flags(___md) \
      LP1(0x63de, unsigned long, EVP_MD_meth_get_flags , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_get_init(___md) \
      LP1FR(0x63e4, __fpr, EVP_MD_meth_get_init , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_MD_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_get_input_blocksize(___md) \
      LP1(0x63ea, int, EVP_MD_meth_get_input_blocksize , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_get_result_size(___md) \
      LP1(0x63f0, int, EVP_MD_meth_get_result_size , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_get_update(___md) \
      LP1FR(0x63f6, __fpr, EVP_MD_meth_get_update , const EVP_MD *, ___md, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(EVP_MD_CTX *, const void *, size_t), 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_new(___md_type, ___pkey_type) \
      LP2(0x63fc, EVP_MD *, EVP_MD_meth_new , int, ___md_type, d0, int, ___pkey_type, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_set_app_datasize(___md, ___datasize) \
      LP2(0x6402, int, EVP_MD_meth_set_app_datasize , EVP_MD *, ___md, a0, int, ___datasize, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_set_cleanup(___md, ___cleanup) \
      LP2FP(0x6408, int, EVP_MD_meth_set_cleanup , EVP_MD *, ___md, a0, __fpt, ___cleanup, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_MD_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_set_copy(___md, ___copy) \
      LP2FP(0x640e, int, EVP_MD_meth_set_copy , EVP_MD *, ___md, a0, __fpt, ___copy, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_MD_CTX *,const EVP_MD_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_set_ctrl(___md, ___ctrl) \
      LP2FP(0x6414, int, EVP_MD_meth_set_ctrl , EVP_MD *, ___md, a0, __fpt, ___ctrl, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_MD_CTX *,int,int,void *), 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_set_final(___md, ___final) \
      LP2FP(0x641a, int, EVP_MD_meth_set_final , EVP_MD *, ___md, a0, __fpt, ___final, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_MD_CTX *,unsigned char *), 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_set_flags(___md, ___flags) \
      LP2(0x6420, int, EVP_MD_meth_set_flags , EVP_MD *, ___md, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_set_init(___md, ___init) \
      LP2FP(0x6426, int, EVP_MD_meth_set_init , EVP_MD *, ___md, a0, __fpt, ___init, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_MD_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_set_input_blocksize(___md, ___blocksize) \
      LP2(0x642c, int, EVP_MD_meth_set_input_blocksize , EVP_MD *, ___md, a0, int, ___blocksize, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_set_result_size(___md, ___resultsize) \
      LP2(0x6432, int, EVP_MD_meth_set_result_size , EVP_MD *, ___md, a0, int, ___resultsize, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_meth_set_update(___md, ___update) \
      LP2FP(0x6438, int, EVP_MD_meth_set_update , EVP_MD *, ___md, a0, __fpt, ___update, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_MD_CTX *,const void *,size_t), 0, 0, 0, 0, 0, 0)

#define EVP_PBE_get(___ptype, ___ppbe_nid, ___num) \
      LP3(0x643e, int, EVP_PBE_get , int *, ___ptype, a0, int *, ___ppbe_nid, a1, size_t, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PBE_scrypt(___pass, ___passlen, ___salt, ___saltlen, ___N, ___r, ___p, ___maxmem, ___key, ___keylen) \
      LP10(0x6444, int, EVP_PBE_scrypt , const char *, ___pass, a0, size_t, ___passlen, d0, const unsigned char *, ___salt, a1, size_t, ___saltlen, d1, unsigned long, ___N, d2, unsigned long, ___r, d3, unsigned long, ___p, d4, uint64_t, ___maxmem, d5, unsigned char *, ___key, a2, size_t, ___keylen, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_security_bits(___ameth, ___pkey_security_bits) \
      LP2NRFP(0x644a, EVP_PKEY_asn1_set_security_bits , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___pkey_security_bits, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const EVP_PKEY *), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get0_DH(___pkey) \
      LP1(0x6450, DH *, EVP_PKEY_get0_DH , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get0_DSA(___pkey) \
      LP1(0x6456, DSA *, EVP_PKEY_get0_DSA , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get0_EC_KEY(___pkey) \
      LP1(0x645c, EC_KEY *, EVP_PKEY_get0_EC_KEY , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get0_RSA(___pkey) \
      LP1(0x6462, RSA *, EVP_PKEY_get0_RSA , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_cleanup(___pmeth, ___pcleanup) \
      LP2NRFP(0x6468, EVP_PKEY_meth_get_cleanup , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___pcleanup, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(EVP_PKEY_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_copy(___pmeth, ___pcopy) \
      LP2NRFP(0x646e, EVP_PKEY_meth_get_copy , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___pcopy, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *,EVP_PKEY_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_ctrl(___pmeth, ___pctrl, ___pctrl_str) \
      LP3NRFP2(0x6474, EVP_PKEY_meth_get_ctrl , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___pctrl, a1, __fpt2, ___pctrl_str, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *,int,int,void *), int (*__fpt2)(EVP_PKEY_CTX *,const char *,const char *), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_decrypt(___pmeth, ___pdecrypt_init, ___pdecrypt) \
      LP3NRFP2(0x647a, EVP_PKEY_meth_get_decrypt , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___pdecrypt_init, a1, __fpt2, ___pdecrypt, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *), int (*__fpt2)(EVP_PKEY_CTX *,unsigned char *,size_t *,const unsigned char *,size_t), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_derive(___pmeth, ___pderive_init, ___pderive) \
      LP3NRFP2(0x6480, EVP_PKEY_meth_get_derive , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___pderive_init, a1, __fpt2, ___pderive, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *), int (*__fpt2)(EVP_PKEY_CTX *,unsigned char *,size_t *), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_encrypt(___pmeth, ___pencrypt_init, ___pencryptfn) \
      LP3NRFP2(0x6486, EVP_PKEY_meth_get_encrypt , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___pencrypt_init, a1, __fpt2, ___pencryptfn, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *), int (*__fpt2)(EVP_PKEY_CTX *,unsigned char *,size_t *,const unsigned char *,size_t), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_init(___pmeth, ___pinit) \
      LP2NRFP(0x648c, EVP_PKEY_meth_get_init , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___pinit, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_keygen(___pmeth, ___pkeygen_init, ___pkeygen) \
      LP3NRFP2(0x6492, EVP_PKEY_meth_get_keygen , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___pkeygen_init, a1, __fpt2, ___pkeygen, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *), int (*__fpt2)(EVP_PKEY_CTX *,EVP_PKEY *), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_paramgen(___pmeth, ___pparamgen_init, ___pparamgen) \
      LP3NRFP2(0x6498, EVP_PKEY_meth_get_paramgen , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___pparamgen_init, a1, __fpt2, ___pparamgen, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *), int (*__fpt2)(EVP_PKEY_CTX *,EVP_PKEY *), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_sign(___pmeth, ___psign_init, ___psign) \
      LP3NRFP2(0x649e, EVP_PKEY_meth_get_sign , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___psign_init, a1, __fpt2, ___psign, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *), int (*__fpt2)(EVP_PKEY_CTX *,unsigned char *,size_t *,const unsigned char *,size_t), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_signctx(___pmeth, ___psignctx_init, ___psignctx) \
      LP3NRFP2(0x64a4, EVP_PKEY_meth_get_signctx , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___psignctx_init, a1, __fpt2, ___psignctx, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *,EVP_MD_CTX *), int (*__fpt2)(EVP_PKEY_CTX *,unsigned char *,size_t *,EVP_MD_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_verify(___pmeth, ___pverify_init, ___pverify) \
      LP3NRFP2(0x64aa, EVP_PKEY_meth_get_verify , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___pverify_init, a1, __fpt2, ___pverify, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *), int (*__fpt2)(EVP_PKEY_CTX *,const unsigned char *,size_t,const unsigned char *,size_t), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_verify_recover(___pmeth, ___pverify_recover_init, ___pverify_recover) \
      LP3NRFP2(0x64b0, EVP_PKEY_meth_get_verify_recover , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___pverify_recover_init, a1, __fpt2, ___pverify_recover, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *), int (*__fpt2)(EVP_PKEY_CTX *,unsigned char *,size_t *,const unsigned char *,size_t), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_verifyctx(___pmeth, ___pverifyctx_init, ___pverifyctx) \
      LP3NRFP2(0x64b6, EVP_PKEY_meth_get_verifyctx , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt1, ___pverifyctx_init, a1, __fpt2, ___pverifyctx, a2,\
      , AMISSL_BASE_NAME, int (*__fpt1)(EVP_PKEY_CTX *,EVP_MD_CTX *), int (*__fpt2)(EVP_PKEY_CTX *,const unsigned char *,int,EVP_MD_CTX *), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_security_bits(___pkey) \
      LP1(0x64bc, int, EVP_PKEY_security_bits , const EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_up_ref(___pkey) \
      LP1(0x64c2, int, EVP_PKEY_up_ref , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_v2_scrypt_keyivgen(___ctx, ___pass, ___passlen, ___param, ___c, ___md, ___en_de) \
      LP7(0x64c8, int, PKCS5_v2_scrypt_keyivgen , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___c, a3, const EVP_MD *, ___md, d1, int, ___en_de, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define HMAC_CTX_free(___ctx) \
      LP1NR(0x64ce, HMAC_CTX_free , HMAC_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define HMAC_CTX_new() \
      LP0(0x64d4, HMAC_CTX *, HMAC_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define HMAC_CTX_reset(___ctx) \
      LP1(0x64da, int, HMAC_CTX_reset , HMAC_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define HMAC_size(___ctx) \
      LP1(0x64e0, size_t, HMAC_size , const HMAC_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_error(___lh) \
      LP1(0x64e6, int, OPENSSL_LH_error , OPENSSL_LHASH *, ___lh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_get_down_load(___lh) \
      LP1(0x64ec, unsigned long, OPENSSL_LH_get_down_load , const OPENSSL_LHASH *, ___lh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_set_down_load(___lh, ___down_load) \
      LP2NR(0x64f2, OPENSSL_LH_set_down_load , OPENSSL_LHASH *, ___lh, a0, unsigned long, ___down_load, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_128_unwrap_pad(___key, ___icv, ___out, ___in, ___inlen, ___block) \
      LP6(0x64f8, size_t, CRYPTO_128_unwrap_pad , void *, ___key, a0, const unsigned char *, ___icv, a1, unsigned char *, ___out, a2, const unsigned char *, ___in, a3, size_t, ___inlen, d0, block128_f, ___block, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_128_wrap_pad(___key, ___icv, ___out, ___in, ___inlen, ___block) \
      LP6(0x64fe, size_t, CRYPTO_128_wrap_pad , void *, ___key, a0, const unsigned char *, ___icv, a1, unsigned char *, ___out, a2, const unsigned char *, ___in, a3, size_t, ___inlen, d0, block128_f, ___block, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ocb128_aad(___ctx, ___aad, ___len) \
      LP3(0x6504, int, CRYPTO_ocb128_aad , OCB128_CONTEXT *, ___ctx, a0, const unsigned char *, ___aad, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ocb128_cleanup(___ctx) \
      LP1NR(0x650a, CRYPTO_ocb128_cleanup , OCB128_CONTEXT *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ocb128_copy_ctx(___dest, ___src, ___keyenc, ___keydec) \
      LP4(0x6510, int, CRYPTO_ocb128_copy_ctx , OCB128_CONTEXT *, ___dest, a0, OCB128_CONTEXT *, ___src, a1, void *, ___keyenc, a2, void *, ___keydec, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ocb128_decrypt(___ctx, ___in, ___out, ___len) \
      LP4(0x6516, int, CRYPTO_ocb128_decrypt , OCB128_CONTEXT *, ___ctx, a0, const unsigned char *, ___in, a1, unsigned char *, ___out, a2, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ocb128_encrypt(___ctx, ___in, ___out, ___len) \
      LP4(0x651c, int, CRYPTO_ocb128_encrypt , OCB128_CONTEXT *, ___ctx, a0, const unsigned char *, ___in, a1, unsigned char *, ___out, a2, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ocb128_finish(___ctx, ___tag, ___len) \
      LP3(0x6522, int, CRYPTO_ocb128_finish , OCB128_CONTEXT *, ___ctx, a0, const unsigned char *, ___tag, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ocb128_init(___ctx, ___keyenc, ___keydec, ___encrypt, ___decrypt, ___stream) \
      LP6(0x6528, int, CRYPTO_ocb128_init , OCB128_CONTEXT *, ___ctx, a0, void *, ___keyenc, a1, void *, ___keydec, a2, block128_f, ___encrypt, d0, block128_f, ___decrypt, d1, ocb128_f, ___stream, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ocb128_new(___keyenc, ___keydec, ___encrypt, ___decrypt, ___stream) \
      LP5(0x652e, OCB128_CONTEXT *, CRYPTO_ocb128_new , void *, ___keyenc, a0, void *, ___keydec, a1, block128_f, ___encrypt, d0, block128_f, ___decrypt, d1, ocb128_f, ___stream, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ocb128_setiv(___ctx, ___iv, ___len, ___taglen) \
      LP4(0x6534, int, CRYPTO_ocb128_setiv , OCB128_CONTEXT *, ___ctx, a0, const unsigned char *, ___iv, a1, size_t, ___len, d0, size_t, ___taglen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_ocb128_tag(___ctx, ___tag, ___len) \
      LP3(0x653a, int, CRYPTO_ocb128_tag , OCB128_CONTEXT *, ___ctx, a0, unsigned char *, ___tag, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_get0_data(___obj) \
      LP1(0x6540, const unsigned char *, OBJ_get0_data , const ASN1_OBJECT *, ___obj, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OBJ_length(___obj) \
      LP1(0x6546, size_t, OBJ_length , const ASN1_OBJECT *, ___obj, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_resp_get0_produced_at(___bs) \
      LP1(0x654c, const ASN1_GENERALIZEDTIME *, OCSP_resp_get0_produced_at , const OCSP_BASICRESP *, ___bs, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_resp_get0_signature(___bs) \
      LP1(0x6552, const ASN1_OCTET_STRING *, OCSP_resp_get0_signature , const OCSP_BASICRESP *, ___bs, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_SINGLERESP_get0_id(___bs) \
      LP1(0x6558, const OCSP_CERTID *, OCSP_SINGLERESP_get0_id , const OCSP_SINGLERESP *, ___bs, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_get0_mac(___pmac, ___pmacalg, ___psalt, ___piter, ___p12) \
      LP5NR(0x655e, PKCS12_get0_mac , const ASN1_OCTET_STRING **, ___pmac, a0, const X509_ALGOR **, ___pmacalg, a1, const ASN1_OCTET_STRING **, ___psalt, a2, const ASN1_INTEGER **, ___piter, a3, const PKCS12 *, ___p12, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_mac_present(___p12) \
      LP1(0x6564, int, PKCS12_mac_present , const PKCS12 *, ___p12, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_create0_p8inf(___p8) \
      LP1(0x656a, PKCS12_SAFEBAG *, PKCS12_SAFEBAG_create0_p8inf , PKCS8_PRIV_KEY_INFO *, ___p8, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_create0_pkcs8(___p8) \
      LP1(0x6570, PKCS12_SAFEBAG *, PKCS12_SAFEBAG_create0_pkcs8 , X509_SIG *, ___p8, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_create_cert(___x509) \
      LP1(0x6576, PKCS12_SAFEBAG *, PKCS12_SAFEBAG_create_cert , X509 *, ___x509, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_create_crl(___crl) \
      LP1(0x657c, PKCS12_SAFEBAG *, PKCS12_SAFEBAG_create_crl , X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_create_pkcs8_encrypt(___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8inf) \
      LP7(0x6582, PKCS12_SAFEBAG *, PKCS12_SAFEBAG_create_pkcs8_encrypt , int, ___pbe_nid, d0, const char *, ___pass, a0, int, ___passlen, d1, unsigned char *, ___salt, a1, int, ___saltlen, d2, int, ___iter, d3, PKCS8_PRIV_KEY_INFO *, ___p8inf, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_get0_attr(___bag, ___attr_nid) \
      LP2(0x6588, const ASN1_TYPE *, PKCS12_SAFEBAG_get0_attr , const PKCS12_SAFEBAG *, ___bag, a0, int, ___attr_nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_get0_attrs(___bag) \
      LP1(0x658e, const STACK_OF(X509_ATTRIBUTE) *, PKCS12_SAFEBAG_get0_attrs , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_get0_p8inf(___bag) \
      LP1(0x6594, const PKCS8_PRIV_KEY_INFO *, PKCS12_SAFEBAG_get0_p8inf , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_get0_pkcs8(___bag) \
      LP1(0x659a, const X509_SIG *, PKCS12_SAFEBAG_get0_pkcs8 , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_get0_safes(___bag) \
      LP1(0x65a0, const STACK_OF(PKCS12_SAFEBAG) *, PKCS12_SAFEBAG_get0_safes , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_get0_type(___bag) \
      LP1(0x65a6, const ASN1_OBJECT *, PKCS12_SAFEBAG_get0_type , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_get1_cert(___bag) \
      LP1(0x65ac, X509 *, PKCS12_SAFEBAG_get1_cert , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_get1_crl(___bag) \
      LP1(0x65b2, X509_CRL *, PKCS12_SAFEBAG_get1_crl , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_get_bag_nid(___bag) \
      LP1(0x65b8, int, PKCS12_SAFEBAG_get_bag_nid , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_get_nid(___bag) \
      LP1(0x65be, int, PKCS12_SAFEBAG_get_nid , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_get_attr(___p8, ___attr_nid) \
      LP2(0x65c4, ASN1_TYPE *, PKCS8_get_attr , PKCS8_PRIV_KEY_INFO *, ___p8, a0, int, ___attr_nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_set0_pbe(___pass, ___passlen, ___p8inf, ___pbe) \
      LP4(0x65ca, X509_SIG *, PKCS8_set0_pbe , const char *, ___pass, a0, int, ___passlen, d0, PKCS8_PRIV_KEY_INFO *, ___p8inf, a1, X509_ALGOR *, ___pbe, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_OpenSSL() \
      LP0(0x65d0, RAND_METHOD *, RAND_OpenSSL ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_bits(___r) \
      LP1(0x65d6, int, RSA_bits , const RSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_check_key_ex(___key, ___cb) \
      LP2(0x65dc, int, RSA_check_key_ex , const RSA *, ___key, a0, BN_GENCB *, ___cb, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_PKCS1_OpenSSL() \
      LP0(0x65e2, const RSA_METHOD *, RSA_PKCS1_OpenSSL ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_security_bits(___rsa) \
      LP1(0x65e8, int, RSA_security_bits , const RSA *, ___rsa, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_X931_derive_ex(___rsa, ___p1, ___p2, ___q1, ___q2, ___Xp1, ___Xp2, ___Xp, ___Xq1, ___Xq2, ___Xq, ___e, ___cb) \
      LP13(0x65ee, int, RSA_X931_derive_ex , RSA *, ___rsa, a0, BIGNUM *, ___p1, a1, BIGNUM *, ___p2, a2, BIGNUM *, ___q1, a3, BIGNUM *, ___q2, d0, const BIGNUM *, ___Xp1, d1, const BIGNUM *, ___Xp2, d2, const BIGNUM *, ___Xp, d3, const BIGNUM *, ___Xq1, d4, const BIGNUM *, ___Xq2, d5, const BIGNUM *, ___Xq, d6, const BIGNUM *, ___e, d7, BN_GENCB *, ___cb, d7,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_X931_generate_key_ex(___rsa, ___bits, ___e, ___cb) \
      LP4(0x65f4, int, RSA_X931_generate_key_ex , RSA *, ___rsa, a0, int, ___bits, d0, const BIGNUM *, ___e, a1, BN_GENCB *, ___cb, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_signer_digest(___conf, ___section, ___md, ___ctx) \
      LP4(0x65fa, int, TS_CONF_set_signer_digest , CONF *, ___conf, a0, const char *, ___section, a1, const char *, ___md, a2, TS_RESP_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_signer_digest(___ctx, ___md) \
      LP2(0x6600, int, TS_RESP_CTX_set_signer_digest , TS_RESP_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_STATUS_INFO_get0_failure_info(___a) \
      LP1(0x6606, const ASN1_BIT_STRING *, TS_STATUS_INFO_get0_failure_info , const TS_STATUS_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_STATUS_INFO_get0_status(___a) \
      LP1(0x660c, const ASN1_INTEGER *, TS_STATUS_INFO_get0_status , const TS_STATUS_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_STATUS_INFO_set_status(___a, ___i) \
      LP2(0x6612, int, TS_STATUS_INFO_set_status , TS_STATUS_INFO *, ___a, a0, int, ___i, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_VERIFY_CTX_add_flags(___ctx, ___f) \
      LP2(0x6618, int, TS_VERIFY_CTX_add_flags , TS_VERIFY_CTX *, ___ctx, a0, int, ___f, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_VERIFY_CTX_set_data(___ctx, ___b) \
      LP2(0x661e, BIO *, TS_VERIFY_CTX_set_data , TS_VERIFY_CTX *, ___ctx, a0, BIO *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_VERIFY_CTX_set_flags(___ctx, ___f) \
      LP2(0x6624, int, TS_VERIFY_CTX_set_flags , TS_VERIFY_CTX *, ___ctx, a0, int, ___f, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_VERIFY_CTX_set_imprint(___ctx, ___hexstr, ___len) \
      LP3(0x662a, unsigned char *, TS_VERIFY_CTX_set_imprint , TS_VERIFY_CTX *, ___ctx, a0, unsigned char *, ___hexstr, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_VERIFY_CTX_set_store(___ctx, ___s) \
      LP2(0x6630, X509_STORE *, TS_VERIFY_CTX_set_store , TS_VERIFY_CTX *, ___ctx, a0, X509_STORE *, ___s, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_VERIFY_CTS_set_certs(___ctx, ___certs) \
      LP2(0x6636, STACK_OF(X509) *, TS_VERIFY_CTS_set_certs , TS_VERIFY_CTX *, ___ctx, a0, STACK_OF(X509) *, ___certs, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_re_X509_CRL_tbs(___req, ___pp) \
      LP2(0x663c, int, i2d_re_X509_CRL_tbs , X509_CRL *, ___req, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_re_X509_REQ_tbs(___req, ___pp) \
      LP2(0x6642, int, i2d_re_X509_REQ_tbs , X509_REQ *, ___req, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_pbe2_set_scrypt(___cipher, ___salt, ___saltlen, ___aiv, ___N, ___r, ___p) \
      LP7(0x6648, X509_ALGOR *, PKCS5_pbe2_set_scrypt , const EVP_CIPHER *, ___cipher, a0, const unsigned char *, ___salt, a1, int, ___saltlen, d0, unsigned char *, ___aiv, a2, unsigned long, ___N, d1, unsigned long, ___r, d2, uint64_t, ___p, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get0_extensions(___crl) \
      LP1(0x6654, const STACK_OF(X509_EXTENSION) *, X509_CRL_get0_extensions , const X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get0_signature(___crl, ___psig, ___palg) \
      LP3NR(0x665a, X509_CRL_get0_signature , const X509_CRL *, ___crl, a0, const ASN1_BIT_STRING **, ___psig, a1, const X509_ALGOR **, ___palg, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_issuer(___crl) \
      LP1(0x6660, X509_NAME *, X509_CRL_get_issuer , const X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_lastUpdate(___crl) \
      LP1(0x6666, ASN1_TIME *, X509_CRL_get_lastUpdate , X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_nextUpdate(___crl) \
      LP1(0x666c, ASN1_TIME *, X509_CRL_get_nextUpdate , X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_REVOKED(___crl) \
      LP1(0x6672, STACK_OF(X509_REVOKED) *, X509_CRL_get_REVOKED , X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_signature_nid(___crl) \
      LP1(0x6678, int, X509_CRL_get_signature_nid , const X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get_version(___crl) \
      LP1(0x667e, long, X509_CRL_get_version , const X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_up_ref(___crl) \
      LP1(0x6684, int, X509_CRL_up_ref , X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_extensions(___x) \
      LP1(0x668a, const STACK_OF(X509_EXTENSION) *, X509_get0_extensions , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_pubkey(___x) \
      LP1(0x6690, EVP_PKEY *, X509_get0_pubkey , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_reject_objects(___x) \
      LP1(0x6696, STACK_OF(ASN1_OBJECT) *, X509_get0_reject_objects , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_tbs_sigalg(___x) \
      LP1(0x669c, const X509_ALGOR *, X509_get0_tbs_sigalg , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_trust_objects(___x) \
      LP1(0x66a2, STACK_OF(ASN1_OBJECT) *, X509_get0_trust_objects , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_uids(___x, ___piuid, ___psuid) \
      LP3NR(0x66a8, X509_get0_uids , const X509 *, ___x, a0, const ASN1_BIT_STRING **, ___piuid, a1, const ASN1_BIT_STRING **, ___psuid, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_getm_notAfter(___x) \
      LP1(0x66ae, ASN1_TIME *, X509_getm_notAfter , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_getm_notBefore(___x) \
      LP1(0x66b4, ASN1_TIME *, X509_getm_notBefore , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_signature_type(___x) \
      LP1(0x66ba, int, X509_get_signature_type , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_version(___x) \
      LP1(0x66c0, long, X509_get_version , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_X509_PUBKEY(___x) \
      LP1(0x66c6, X509_PUBKEY *, X509_get_X509_PUBKEY , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_ENTRY_set(___ne) \
      LP1(0x66cc, int, X509_NAME_ENTRY_set , const X509_NAME_ENTRY *, ___ne, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_get0_der(___nm, ___pder, ___pderlen) \
      LP3(0x66d2, int, X509_NAME_get0_der , X509_NAME *, ___nm, a0, const unsigned char **, ___pder, a1, size_t *, ___pderlen, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PUBKEY_get0(___key) \
      LP1(0x66d8, EVP_PKEY *, X509_PUBKEY_get0 , X509_PUBKEY *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get0_signature(___req, ___psig, ___palg) \
      LP3NR(0x66de, X509_REQ_get0_signature , const X509_REQ *, ___req, a0, const ASN1_BIT_STRING **, ___psig, a1, const X509_ALGOR **, ___palg, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get_signature_nid(___req) \
      LP1(0x66e4, int, X509_REQ_get_signature_nid , const X509_REQ *, ___req, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get_subject_name(___req) \
      LP1(0x66ea, X509_NAME *, X509_REQ_get_subject_name , const X509_REQ *, ___req, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get_version(___req) \
      LP1(0x66f0, long, X509_REQ_get_version , const X509_REQ *, ___req, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get_X509_PUBKEY(___req) \
      LP1(0x66f6, X509_PUBKEY *, X509_REQ_get_X509_PUBKEY , X509_REQ *, ___req, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_get0_extensions(___r) \
      LP1(0x66fc, const STACK_OF(X509_EXTENSION) *, X509_REVOKED_get0_extensions , const X509_REVOKED *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_get0_revocationDate(___x) \
      LP1(0x6702, const ASN1_TIME *, X509_REVOKED_get0_revocationDate , const X509_REVOKED *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REVOKED_get0_serialNumber(___x) \
      LP1(0x6708, const ASN1_INTEGER *, X509_REVOKED_get0_serialNumber , const X509_REVOKED *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_trusted(___x) \
      LP1(0x670e, int, X509_trusted , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_up_ref(___x) \
      LP1(0x6714, int, X509_up_ref , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_num_untrusted(___ctx) \
      LP1(0x671a, int, X509_STORE_CTX_get_num_untrusted , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set0_dane(___ctx, ___dane) \
      LP2NR(0x6720, X509_STORE_CTX_set0_dane , X509_STORE_CTX *, ___ctx, a0, SSL_DANE *, ___dane, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_move_peername(___to, ___from) \
      LP2NR(0x6726, X509_VERIFY_PARAM_move_peername , X509_VERIFY_PARAM *, ___to, a0, X509_VERIFY_PARAM *, ___from, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2s_ASN1_IA5STRING(___method, ___ia5) \
      LP2(0x672c, char *, i2s_ASN1_IA5STRING , X509V3_EXT_METHOD *, ___method, a0, ASN1_IA5STRING *, ___ia5, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define s2i_ASN1_IA5STRING(___method, ___ctx, ___str) \
      LP3(0x6732, ASN1_IA5STRING *, s2i_ASN1_IA5STRING , X509V3_EXT_METHOD *, ___method, a0, X509V3_CTX *, ___ctx, a1, const char *, ___str, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_addr_add_inherit(___addr, ___afi, ___safi) \
      LP3(0x6738, int, X509v3_addr_add_inherit , IPAddrBlocks *, ___addr, a0, const unsigned, ___afi, d0, const unsigned *, ___safi, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_addr_add_prefix(___addr, ___afi, ___safi, ___a, ___prefixlen) \
      LP5(0x673e, int, X509v3_addr_add_prefix , IPAddrBlocks *, ___addr, a0, const unsigned, ___afi, d0, const unsigned *, ___safi, a1, unsigned char *, ___a, a2, const int, ___prefixlen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_addr_add_range(___addr, ___afi, ___safi, ___min, ___max) \
      LP5(0x6744, int, X509v3_addr_add_range , IPAddrBlocks *, ___addr, a0, const unsigned, ___afi, d0, const unsigned *, ___safi, a1, unsigned char *, ___min, a2, unsigned char *, ___max, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_addr_canonize(___addr) \
      LP1(0x674a, int, X509v3_addr_canonize , IPAddrBlocks *, ___addr, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_addr_get_afi(___f) \
      LP1(0x6750, unsigned, X509v3_addr_get_afi , const IPAddressFamily *, ___f, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_addr_get_range(___aor, ___afi, ___min, ___max, ___length) \
      LP5(0x6756, int, X509v3_addr_get_range , IPAddressOrRange *, ___aor, a0, const unsigned, ___afi, d0, unsigned char *, ___min, a1, unsigned char *, ___max, a2, const int, ___length, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_addr_inherits(___addr) \
      LP1(0x675c, int, X509v3_addr_inherits , IPAddrBlocks *, ___addr, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_addr_is_canonical(___addr) \
      LP1(0x6762, int, X509v3_addr_is_canonical , IPAddrBlocks *, ___addr, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_addr_subset(___a, ___b) \
      LP2(0x6768, int, X509v3_addr_subset , IPAddrBlocks *, ___a, a0, IPAddrBlocks *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_addr_validate_path(___ctx) \
      LP1(0x676e, int, X509v3_addr_validate_path , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_addr_validate_resource_set(___chain, ___ext, ___allow_inheritance) \
      LP3(0x6774, int, X509v3_addr_validate_resource_set , STACK_OF(X509) *, ___chain, a0, IPAddrBlocks *, ___ext, a1, int, ___allow_inheritance, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_asid_add_inherit(___asid, ___which) \
      LP2(0x677a, int, X509v3_asid_add_inherit , ASIdentifiers *, ___asid, a0, int, ___which, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_asid_add_id_or_range(___asid, ___which, ___min, ___max) \
      LP4(0x6780, int, X509v3_asid_add_id_or_range , ASIdentifiers *, ___asid, a0, int, ___which, d0, ASN1_INTEGER *, ___min, a1, ASN1_INTEGER *, ___max, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_asid_canonize(___asid) \
      LP1(0x6786, int, X509v3_asid_canonize , ASIdentifiers *, ___asid, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_asid_inherits(___asid) \
      LP1(0x678c, int, X509v3_asid_inherits , ASIdentifiers *, ___asid, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_asid_is_canonical(___asid) \
      LP1(0x6792, int, X509v3_asid_is_canonical , ASIdentifiers *, ___asid, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_asid_subset(___a, ___b) \
      LP2(0x6798, int, X509v3_asid_subset , ASIdentifiers *, ___a, a0, ASIdentifiers *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_asid_validate_path(___ctx) \
      LP1(0x679e, int, X509v3_asid_validate_path , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509v3_asid_validate_resource_set(___chain, ___ext, ___allow_inheritance) \
      LP3(0x67a4, int, X509v3_asid_validate_resource_set , STACK_OF(X509) *, ___chain, a0, ASIdentifiers *, ___ext, a1, int, ___allow_inheritance, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_subject_key_id(___x) \
      LP1(0x67aa, const ASN1_OCTET_STRING *, X509_get0_subject_key_id , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_extended_key_usage(___x) \
      LP1(0x67b0, uint32_t, X509_get_extended_key_usage , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_extension_flags(___x) \
      LP1(0x67b6, uint32_t, X509_get_extension_flags , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_key_usage(___x) \
      LP1(0x67bc, uint32_t, X509_get_key_usage , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DTLSv1_listen(___s, ___client) \
      LP2(0x67c2, int, DTLSv1_listen , SSL *, ___s, a0, BIO_ADDR *, ___client, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_init_ssl(___opts, ___settings) \
      LP2(0x67c8, int, OPENSSL_init_ssl , uint64_t, ___opts, d0, const OPENSSL_INIT_SETTINGS *, ___settings, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_add1_host(___s, ___hostname) \
      LP2(0x67ce, int, SSL_add1_host , SSL *, ___s, a0, const char *, ___hostname, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_add_ssl_module() \
      LP0NR(0x67d4, SSL_add_ssl_module ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_cipher_nid(___c) \
      LP1(0x67da, int, SSL_CIPHER_get_cipher_nid , const SSL_CIPHER *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_digest_nid(___c) \
      LP1(0x67e0, int, SSL_CIPHER_get_digest_nid , const SSL_CIPHER *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_clear_options(___s, ___op) \
      LP2(0x67e6, unsigned long, SSL_clear_options , SSL *, ___s, a0, unsigned long, ___op, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_config(___s, ___name) \
      LP2(0x67ec, int, SSL_config , SSL *, ___s, a0, const char *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_clear_options(___ctx, ___op) \
      LP2(0x67f2, unsigned long, SSL_CTX_clear_options , SSL_CTX *, ___ctx, a0, unsigned long, ___op, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_config(___ctx, ___name) \
      LP2(0x67f8, int, SSL_CTX_config , SSL_CTX *, ___ctx, a0, const char *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_dane_enable(___ctx) \
      LP1(0x67fe, int, SSL_CTX_dane_enable , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_dane_mtype_set(___ctx, ___md, ___mtype, ___ord) \
      LP4(0x6804, int, SSL_CTX_dane_mtype_set , SSL_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1, uint8_t, ___mtype, d0, uint8_t, ___ord, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get0_security_ex_data(___ctx) \
      LP1(0x680a, void *, SSL_CTX_get0_security_ex_data , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_options(___ctx) \
      LP1(0x6810, unsigned long, SSL_CTX_get_options , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_security_callback(___ctx) \
      LP1FR(0x6816, __fpr, SSL_CTX_get_security_callback , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(const SSL *, const SSL_CTX *, int, int, int, void *, void *), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_security_level(___ctx) \
      LP1(0x681c, int, SSL_CTX_get_security_level , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set0_security_ex_data(___ctx, ___ex) \
      LP2NR(0x6822, SSL_CTX_set0_security_ex_data , SSL_CTX *, ___ctx, a0, void *, ___ex, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_default_verify_dir(___ctx) \
      LP1(0x6828, int, SSL_CTX_set_default_verify_dir , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_default_verify_file(___ctx) \
      LP1(0x682e, int, SSL_CTX_set_default_verify_file , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_not_resumable_session_callback(___ctx, ___cb) \
      LP2NRFP(0x6834, SSL_CTX_set_not_resumable_session_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(SSL *,int), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_options(___ctx, ___op) \
      LP2(0x683a, unsigned long, SSL_CTX_set_options , SSL_CTX *, ___ctx, a0, unsigned long, ___op, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_security_callback(___ctx, ___cb) \
      LP2NRFP(0x6840, SSL_CTX_set_security_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const SSL *,const SSL_CTX *,int,int,int,void *,void *), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_security_level(___ctx, ___level) \
      LP2NR(0x6846, SSL_CTX_set_security_level , SSL_CTX *, ___ctx, a0, int, ___level, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_up_ref(___ctx) \
      LP1(0x684c, int, SSL_CTX_up_ref , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_dane_enable(___s, ___basedomain) \
      LP2(0x6852, int, SSL_dane_enable , SSL *, ___s, a0, const char *, ___basedomain, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_dane_tlsa_add(___s, ___usage, ___selector, ___mtype, ___data, ___dlen) \
      LP6(0x6858, int, SSL_dane_tlsa_add , SSL *, ___s, a0, uint8_t, ___usage, d0, uint8_t, ___selector, d1, uint8_t, ___mtype, d2, unsigned const char *, ___data, a1, size_t, ___dlen, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_dane(___ssl) \
      LP1(0x685e, SSL_DANE *, SSL_get0_dane , SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_dane_authority(___s, ___mcert, ___mspki) \
      LP3(0x6864, int, SSL_get0_dane_authority , SSL *, ___s, a0, X509 **, ___mcert, a1, EVP_PKEY **, ___mspki, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_dane_tlsa(___s, ___usage, ___selector, ___mtype, ___data, ___dlen) \
      LP6(0x686a, int, SSL_get0_dane_tlsa , SSL *, ___s, a0, uint8_t *, ___usage, a1, uint8_t *, ___selector, a2, uint8_t *, ___mtype, a3, unsigned const char **, ___data, d0, size_t *, ___dlen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_peername(___s) \
      LP1(0x6870, const char *, SSL_get0_peername , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_security_ex_data(___s) \
      LP1(0x6876, void *, SSL_get0_security_ex_data , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get1_supported_ciphers(___s) \
      LP1(0x687c, STACK_OF(SSL_CIPHER) *, SSL_get1_supported_ciphers , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_client_random(___s, ___out, ___outlen) \
      LP3(0x6888, size_t, SSL_get_client_random , const SSL *, ___s, a0, unsigned char *, ___out, a1, size_t, ___outlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_options(___s) \
      LP1(0x688e, unsigned long, SSL_get_options , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_security_callback(___s) \
      LP1FR(0x6894, __fpr, SSL_get_security_callback , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(const SSL *, const SSL_CTX *, int, int, int, void *, void *), 0, 0, 0, 0, 0, 0)

#define SSL_get_security_level(___s) \
      LP1(0x689a, int, SSL_get_security_level , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_server_random(___s, ___out, ___outlen) \
      LP3(0x68a0, size_t, SSL_get_server_random , const SSL *, ___s, a0, unsigned char *, ___out, a1, size_t, ___outlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_state(___ssl) \
      LP1(0x68a6, OSSL_HANDSHAKE_STATE, SSL_get_state , const SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_in_before(___s) \
      LP1(0x68ac, int, SSL_in_before , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_in_init(___s) \
      LP1(0x68b2, int, SSL_in_init , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_is_init_finished(___s) \
      LP1(0x68b8, int, SSL_is_init_finished , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get0_ticket(___s, ___tick, ___len) \
      LP3NR(0x68be, SSL_SESSION_get0_ticket , const SSL_SESSION *, ___s, a0, const unsigned char **, ___tick, a1, size_t *, ___len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get_master_key(___sess, ___out, ___outlen) \
      LP3(0x68c4, size_t, SSL_SESSION_get_master_key , const SSL_SESSION *, ___sess, a0, unsigned char *, ___out, a1, size_t, ___outlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get_ticket_lifetime_hint(___s) \
      LP1(0x68ca, unsigned long, SSL_SESSION_get_ticket_lifetime_hint , const SSL_SESSION *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_has_ticket(___s) \
      LP1(0x68d0, int, SSL_SESSION_has_ticket , const SSL_SESSION *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_print_keylog(___bp, ___x) \
      LP2(0x68d6, int, SSL_SESSION_print_keylog , BIO *, ___bp, a0, const SSL_SESSION *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_session_reused(___s) \
      LP1(0x68dc, int, SSL_session_reused , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set0_security_ex_data(___s, ___ex) \
      LP2NR(0x68e2, SSL_set0_security_ex_data , SSL *, ___s, a0, void *, ___ex, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set1_host(___s, ___hostname) \
      LP2(0x68e8, int, SSL_set1_host , SSL *, ___s, a0, const char *, ___hostname, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_default_passwd_cb(___s, ___cb) \
      LP2NR(0x68ee, SSL_set_default_passwd_cb , SSL *, ___s, a0, pem_password_cb *, ___cb, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_default_passwd_cb_userdata(___s, ___u) \
      LP2NR(0x68f4, SSL_set_default_passwd_cb_userdata , SSL *, ___s, a0, void *, ___u, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_hostflags(___s, ___flags) \
      LP2NR(0x68fa, SSL_set_hostflags , SSL *, ___s, a0, unsigned int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_not_resumable_session_callback(___ssl, ___cb) \
      LP2NRFP(0x6900, SSL_set_not_resumable_session_callback , SSL *, ___ssl, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(SSL *,int), 0, 0, 0, 0, 0, 0)

#define SSL_set_options(___s, ___op) \
      LP2(0x6906, unsigned long, SSL_set_options , SSL *, ___s, a0, unsigned long, ___op, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set0_rbio(___s, ___rbio) \
      LP2NR(0x690c, SSL_set0_rbio , SSL *, ___s, a0, BIO *, ___rbio, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_security_callback(___s, ___cb) \
      LP2NRFP(0x6912, SSL_set_security_callback , SSL *, ___s, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const SSL *,const SSL_CTX *,int,int,int,void *,void *), 0, 0, 0, 0, 0, 0)

#define SSL_set_security_level(___s, ___level) \
      LP2NR(0x6918, SSL_set_security_level , SSL *, ___s, a0, int, ___level, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set0_wbio(___s, ___wbio) \
      LP2NR(0x691e, SSL_set0_wbio , SSL *, ___s, a0, BIO *, ___wbio, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_up_ref(___s) \
      LP1(0x6924, int, SSL_up_ref , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_use_certificate_chain_file(___ssl, ___file) \
      LP2(0x692a, int, SSL_use_certificate_chain_file , SSL *, ___ssl, a0, const char *, ___file, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_waiting_for_async(___s) \
      LP1(0x6930, int, SSL_waiting_for_async , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TLS_client_method() \
      LP0(0x6936, const SSL_METHOD *, TLS_client_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TLS_method() \
      LP0(0x693c, const SSL_METHOD *, TLS_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TLS_server_method() \
      LP0(0x6942, const SSL_METHOD *, TLS_server_method ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_WAIT_CTX_new() \
      LP0(0x6948, ASYNC_WAIT_CTX *, ASYNC_WAIT_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_WAIT_CTX_free(___ctx) \
      LP1NR(0x694e, ASYNC_WAIT_CTX_free , ASYNC_WAIT_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_WAIT_CTX_set_wait_fd(___ctx, ___key, ___fd, ___custom_data, ___cleanup) \
      LP5FP(0x6954, int, ASYNC_WAIT_CTX_set_wait_fd , ASYNC_WAIT_CTX *, ___ctx, a0, const void *, ___key, a1, OSSL_ASYNC_FD, ___fd, d0, void *, ___custom_data, a2, __fpt, ___cleanup, a3,\
      , AMISSL_BASE_NAME, void (*__fpt)(ASYNC_WAIT_CTX *,const void *,OSSL_ASYNC_FD,void *), 0, 0, 0, 0, 0, 0)

#define ASYNC_WAIT_CTX_get_fd(___ctx, ___key, ___fd, ___custom_data) \
      LP4(0x695a, int, ASYNC_WAIT_CTX_get_fd , ASYNC_WAIT_CTX *, ___ctx, a0, const void *, ___key, a1, OSSL_ASYNC_FD *, ___fd, a2, void **, ___custom_data, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_WAIT_CTX_get_all_fds(___ctx, ___fd, ___numfds) \
      LP3(0x6960, int, ASYNC_WAIT_CTX_get_all_fds , ASYNC_WAIT_CTX *, ___ctx, a0, OSSL_ASYNC_FD *, ___fd, a1, size_t *, ___numfds, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_WAIT_CTX_get_changed_fds(___ctx, ___addfd, ___numaddfds, ___delfd, ___numdelfds) \
      LP5(0x6966, int, ASYNC_WAIT_CTX_get_changed_fds , ASYNC_WAIT_CTX *, ___ctx, a0, OSSL_ASYNC_FD *, ___addfd, a1, size_t *, ___numaddfds, a2, OSSL_ASYNC_FD *, ___delfd, a3, size_t *, ___numdelfds, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_WAIT_CTX_clear_fd(___ctx, ___key) \
      LP2(0x696c, int, ASYNC_WAIT_CTX_clear_fd , ASYNC_WAIT_CTX *, ___ctx, a0, const void *, ___key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_is_capable() \
      LP0(0x6972, int, ASYNC_is_capable ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_get_wait_ctx(___job) \
      LP1(0x6978, ASYNC_WAIT_CTX *, ASYNC_get_wait_ctx , ASYNC_JOB *, ___job, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_up_ref(___a) \
      LP1(0x697e, int, BIO_up_ref , BIO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_is_current_thread(___b) \
      LP1(0x6984, int, BN_BLINDING_is_current_thread , BN_BLINDING *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_set_current_thread(___b) \
      LP1NR(0x698a, BN_BLINDING_set_current_thread , BN_BLINDING *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_lock(___b) \
      LP1(0x6990, int, BN_BLINDING_lock , BN_BLINDING *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_BLINDING_unlock(___b) \
      LP1(0x6996, int, BN_BLINDING_unlock , BN_BLINDING *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_THREAD_run_once(___once, ___init) \
      LP2FP(0x699c, int, CRYPTO_THREAD_run_once , CRYPTO_ONCE *, ___once, a0, __fpt, ___init, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(void), 0, 0, 0, 0, 0, 0)

#define CRYPTO_THREAD_init_local(___key, ___cleanup) \
      LP2FP(0x69a2, int, CRYPTO_THREAD_init_local , CRYPTO_THREAD_LOCAL *, ___key, a0, __fpt, ___cleanup, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(void *), 0, 0, 0, 0, 0, 0)

#define CRYPTO_THREAD_get_local(___key) \
      LP1(0x69a8, void *, CRYPTO_THREAD_get_local , CRYPTO_THREAD_LOCAL *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_THREAD_set_local(___key, ___val) \
      LP2(0x69ae, int, CRYPTO_THREAD_set_local , CRYPTO_THREAD_LOCAL *, ___key, a0, void *, ___val, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_THREAD_cleanup_local(___key) \
      LP1(0x69b4, int, CRYPTO_THREAD_cleanup_local , CRYPTO_THREAD_LOCAL *, ___key, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_THREAD_get_current_id() \
      LP0(0x69ba, CRYPTO_THREAD_ID, CRYPTO_THREAD_get_current_id ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_THREAD_compare_id(___a, ___b) \
      LP2(0x69c0, int, CRYPTO_THREAD_compare_id , CRYPTO_THREAD_ID, ___a, d0, CRYPTO_THREAD_ID, ___b, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_THREAD_lock_new() \
      LP0(0x69c6, CRYPTO_RWLOCK *, CRYPTO_THREAD_lock_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_THREAD_read_lock(___lock) \
      LP1(0x69cc, int, CRYPTO_THREAD_read_lock , CRYPTO_RWLOCK *, ___lock, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_THREAD_write_lock(___lock) \
      LP1(0x69d2, int, CRYPTO_THREAD_write_lock , CRYPTO_RWLOCK *, ___lock, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_THREAD_unlock(___lock) \
      LP1(0x69d8, int, CRYPTO_THREAD_unlock , CRYPTO_RWLOCK *, ___lock, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_THREAD_lock_free(___lock) \
      LP1NR(0x69de, CRYPTO_THREAD_lock_free , CRYPTO_RWLOCK *, ___lock, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_atomic_add(___val, ___amount, ___ret, ___lock) \
      LP4(0x69e4, int, CRYPTO_atomic_add , int *, ___val, a0, int, ___amount, d0, int *, ___ret, a1, CRYPTO_RWLOCK *, ___lock, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_die(___assertion, ___file, ___line) \
      LP3NR(0x69ea, OPENSSL_die , const char *, ___assertion, a0, const char *, ___file, a1, int, ___line, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CT_POLICY_EVAL_CTX_new() \
      LP0(0x69f0, CT_POLICY_EVAL_CTX *, CT_POLICY_EVAL_CTX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CT_POLICY_EVAL_CTX_free(___ctx) \
      LP1NR(0x69f6, CT_POLICY_EVAL_CTX_free , CT_POLICY_EVAL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CT_POLICY_EVAL_CTX_get0_cert(___ctx) \
      LP1(0x69fc, X509 *, CT_POLICY_EVAL_CTX_get0_cert , const CT_POLICY_EVAL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CT_POLICY_EVAL_CTX_get0_issuer(___ctx) \
      LP1(0x6a02, X509 *, CT_POLICY_EVAL_CTX_get0_issuer , const CT_POLICY_EVAL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CT_POLICY_EVAL_CTX_get0_log_store(___ctx) \
      LP1(0x6a08, const CTLOG_STORE *, CT_POLICY_EVAL_CTX_get0_log_store , const CT_POLICY_EVAL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_new() \
      LP0(0x6a0e, SCT *, SCT_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_new_from_base64(___version, ___logid_base64, ___entry_type, ___timestamp, ___extensions_base64, ___signature_base64) \
      LP6(0x6a14, SCT *, SCT_new_from_base64 , unsigned char, ___version, d0, const char *, ___logid_base64, a0, ct_log_entry_type_t, ___entry_type, d1, uint64_t, ___timestamp, d2, const char *, ___extensions_base64, a1, const char *, ___signature_base64, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_free(___sct) \
      LP1NR(0x6a1a, SCT_free , SCT *, ___sct, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_LIST_free(___a) \
      LP1NR(0x6a20, SCT_LIST_free , STACK_OF(SCT) *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_get_version(___sct) \
      LP1(0x6a26, sct_version_t, SCT_get_version , const SCT *, ___sct, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_set_version(___sct, ___version) \
      LP2(0x6a2c, int, SCT_set_version , SCT *, ___sct, a0, sct_version_t, ___version, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_get_log_entry_type(___sct) \
      LP1(0x6a32, ct_log_entry_type_t, SCT_get_log_entry_type , const SCT *, ___sct, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_set_log_entry_type(___sct, ___entry_type) \
      LP2(0x6a38, int, SCT_set_log_entry_type , SCT *, ___sct, a0, ct_log_entry_type_t, ___entry_type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_get0_log_id(___sct, ___log_id) \
      LP2(0x6a3e, size_t, SCT_get0_log_id , const SCT *, ___sct, a0, unsigned char **, ___log_id, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_set0_log_id(___sct, ___log_id, ___log_id_len) \
      LP3(0x6a44, int, SCT_set0_log_id , SCT *, ___sct, a0, unsigned char *, ___log_id, a1, size_t, ___log_id_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_set1_log_id(___sct, ___log_id, ___log_id_len) \
      LP3(0x6a4a, int, SCT_set1_log_id , SCT *, ___sct, a0, const unsigned char *, ___log_id, a1, size_t, ___log_id_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_get_timestamp(___sct) \
      LP1(0x6a50, uint64_t, SCT_get_timestamp , const SCT *, ___sct, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_set_timestamp(___sct, ___timestamp) \
      LP2NR(0x6a56, SCT_set_timestamp , SCT *, ___sct, a0, uint64_t, ___timestamp, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_get_signature_nid(___sct) \
      LP1(0x6a5c, int, SCT_get_signature_nid , const SCT *, ___sct, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_set_signature_nid(___sct, ___nid) \
      LP2(0x6a62, int, SCT_set_signature_nid , SCT *, ___sct, a0, int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_get0_extensions(___sct, ___ext) \
      LP2(0x6a68, size_t, SCT_get0_extensions , const SCT *, ___sct, a0, unsigned char **, ___ext, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_set0_extensions(___sct, ___ext, ___ext_len) \
      LP3NR(0x6a6e, SCT_set0_extensions , SCT *, ___sct, a0, unsigned char *, ___ext, a1, size_t, ___ext_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_set1_extensions(___sct, ___ext, ___ext_len) \
      LP3(0x6a74, int, SCT_set1_extensions , SCT *, ___sct, a0, const unsigned char *, ___ext, a1, size_t, ___ext_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_get0_signature(___sct, ___sig) \
      LP2(0x6a7a, size_t, SCT_get0_signature , const SCT *, ___sct, a0, unsigned char **, ___sig, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_set0_signature(___sct, ___sig, ___sig_len) \
      LP3NR(0x6a80, SCT_set0_signature , SCT *, ___sct, a0, unsigned char *, ___sig, a1, size_t, ___sig_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_set1_signature(___sct, ___sig, ___sig_len) \
      LP3(0x6a86, int, SCT_set1_signature , SCT *, ___sct, a0, const unsigned char *, ___sig, a1, size_t, ___sig_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_get_source(___sct) \
      LP1(0x6a8c, sct_source_t, SCT_get_source , const SCT *, ___sct, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_set_source(___sct, ___source) \
      LP2(0x6a92, int, SCT_set_source , SCT *, ___sct, a0, sct_source_t, ___source, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_print(___sct, ___out, ___indent, ___logs) \
      LP4NR(0x6a98, SCT_print , const SCT *, ___sct, a0, BIO *, ___out, a1, int, ___indent, d0, const CTLOG_STORE *, ___logs, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_LIST_print(___sct_list, ___out, ___indent, ___separator, ___logs) \
      LP5NR(0x6a9e, SCT_LIST_print , const STACK_OF(SCT) *, ___sct_list, a0, BIO *, ___out, a1, int, ___indent, d0, const char *, ___separator, a2, const CTLOG_STORE *, ___logs, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_get_validation_status(___sct) \
      LP1(0x6aa4, sct_validation_status_t, SCT_get_validation_status , const SCT *, ___sct, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_validate(___sct, ___ctx) \
      LP2(0x6aaa, int, SCT_validate , SCT *, ___sct, a0, const CT_POLICY_EVAL_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_LIST_validate(___scts, ___ctx) \
      LP2(0x6ab0, int, SCT_LIST_validate , const STACK_OF(SCT) *, ___scts, a0, CT_POLICY_EVAL_CTX *, ___ctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2o_SCT_LIST(___a, ___pp) \
      LP2(0x6ab6, int, i2o_SCT_LIST , const STACK_OF(SCT) *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define o2i_SCT_LIST(___a, ___pp, ___len) \
      LP3(0x6abc, STACK_OF(SCT) *, o2i_SCT_LIST , STACK_OF(SCT) **, ___a, a0, const unsigned char **, ___pp, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_SCT_LIST(___a, ___pp) \
      LP2(0x6ac2, int, i2d_SCT_LIST , const STACK_OF(SCT) *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_SCT_LIST(___a, ___pp, ___len) \
      LP3(0x6ac8, STACK_OF(SCT) *, d2i_SCT_LIST , STACK_OF(SCT) **, ___a, a0, const unsigned char **, ___pp, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2o_SCT(___sct, ___out) \
      LP2(0x6ace, int, i2o_SCT , const SCT *, ___sct, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define o2i_SCT(___psct, ___in, ___len) \
      LP3(0x6ad4, SCT *, o2i_SCT , SCT **, ___psct, a0, const unsigned char **, ___in, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_new(___public_key, ___name) \
      LP2(0x6ada, CTLOG *, CTLOG_new , EVP_PKEY *, ___public_key, a0, const char *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_new_from_base64(___ct_log, ___pkey_base64, ___name) \
      LP3(0x6ae0, int, CTLOG_new_from_base64 , CTLOG **, ___ct_log, a0, const char *, ___pkey_base64, a1, const char *, ___name, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_free(___log) \
      LP1NR(0x6ae6, CTLOG_free , CTLOG *, ___log, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_get0_name(___log) \
      LP1(0x6aec, const char *, CTLOG_get0_name , const CTLOG *, ___log, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_get0_log_id(___log, ___log_id, ___log_id_len) \
      LP3NR(0x6af2, CTLOG_get0_log_id , const CTLOG *, ___log, a0, const uint8_t **, ___log_id, a1, size_t *, ___log_id_len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_get0_public_key(___log) \
      LP1(0x6af8, EVP_PKEY *, CTLOG_get0_public_key , const CTLOG *, ___log, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_STORE_new() \
      LP0(0x6afe, CTLOG_STORE *, CTLOG_STORE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_STORE_free(___store) \
      LP1NR(0x6b04, CTLOG_STORE_free , CTLOG_STORE *, ___store, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_STORE_get0_log_by_id(___store, ___log_id, ___log_id_len) \
      LP3(0x6b0a, const CTLOG *, CTLOG_STORE_get0_log_by_id , const CTLOG_STORE *, ___store, a0, const uint8_t *, ___log_id, a1, size_t, ___log_id_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_STORE_load_file(___store, ___file) \
      LP2(0x6b10, int, CTLOG_STORE_load_file , CTLOG_STORE *, ___store, a0, const char *, ___file, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_STORE_load_default_file(___store) \
      LP1(0x6b16, int, CTLOG_STORE_load_default_file , CTLOG_STORE *, ___store, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_CT_strings() \
      LP0(0x6b1c, int, ERR_load_CT_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DHparams_it() \
      LP0(0x6b22, const ASN1_ITEM *, DHparams_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_SIG_get0(___sig, ___pr, ___ps) \
      LP3NR(0x6b28, DSA_SIG_get0 , const DSA_SIG *, ___sig, a0, const BIGNUM **, ___pr, a1, const BIGNUM **, ___ps, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_new_from_ecparameters(___params) \
      LP1(0x6b2e, EC_GROUP *, EC_GROUP_new_from_ecparameters , const ECPARAMETERS *, ___params, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_ecparameters(___group, ___params) \
      LP2(0x6b34, ECPARAMETERS *, EC_GROUP_get_ecparameters , const EC_GROUP *, ___group, a0, ECPARAMETERS *, ___params, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_new_from_ecpkparameters(___params) \
      LP1(0x6b3a, EC_GROUP *, EC_GROUP_new_from_ecpkparameters , const ECPKPARAMETERS *, ___params, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_ecpkparameters(___group, ___params) \
      LP2(0x6b40, ECPKPARAMETERS *, EC_GROUP_get_ecpkparameters , const EC_GROUP *, ___group, a0, ECPKPARAMETERS *, ___params, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECPKPARAMETERS_it() \
      LP0(0x6b46, const ASN1_ITEM *, ECPKPARAMETERS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECPARAMETERS_it() \
      LP0(0x6b4c, const ASN1_ITEM *, ECPARAMETERS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_can_sign(___eckey) \
      LP1(0x6b52, int, EC_KEY_can_sign , const EC_KEY *, ___eckey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_blake2b512() \
      LP0(0x6b58, const EVP_MD *, EVP_blake2b512 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_blake2s256() \
      LP0(0x6b5e, const EVP_MD *, EVP_blake2s256 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_str2ctrl(___ctx, ___cmd, ___str) \
      LP3(0x6b64, int, EVP_PKEY_CTX_str2ctrl , EVP_PKEY_CTX *, ___ctx, a0, int, ___cmd, d0, const char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_hex2ctrl(___ctx, ___cmd, ___hex) \
      LP3(0x6b6a, int, EVP_PKEY_CTX_hex2ctrl , EVP_PKEY_CTX *, ___ctx, a0, int, ___cmd, d0, const char *, ___hex, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_KDF_strings() \
      LP0(0x6b70, int, ERR_load_KDF_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_user_pwd_free(___user_pwd) \
      LP1NR(0x6b76, SRP_user_pwd_free , SRP_user_pwd *, ___user_pwd, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_VBASE_get1_by_user(___vb, ___username) \
      LP2(0x6b7c, SRP_user_pwd *, SRP_VBASE_get1_by_user , SRP_VBASE *, ___vb, a0, char *, ___username, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_has_client_custom_ext(___ctx, ___ext_type) \
      LP2(0x6b82, int, SSL_CTX_has_client_custom_ext , const SSL_CTX *, ___ctx, a0, unsigned int, ___ext_type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_kx_nid(___c) \
      LP1(0x6b88, int, SSL_CIPHER_get_kx_nid , const SSL_CIPHER *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_auth_nid(___c) \
      LP1(0x6b8e, int, SSL_CIPHER_get_auth_nid , const SSL_CIPHER *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_is_aead(___c) \
      LP1(0x6b94, int, SSL_CIPHER_is_aead , const SSL_CIPHER *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_has_pending(___s) \
      LP1(0x6b9a, int, SSL_has_pending , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_up_ref(___ses) \
      LP1(0x6ba0, int, SSL_SESSION_up_ref , SSL_SESSION *, ___ses, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_default_passwd_cb(___ctx) \
      LP1FR(0x6ba6, __fpr, SSL_CTX_get_default_passwd_cb , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(char *, int, int, void *), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_default_passwd_cb_userdata(___ctx) \
      LP1(0x6bac, void *, SSL_CTX_get_default_passwd_cb_userdata , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_default_passwd_cb(___ctx) \
      LP1FR(0x6bb2, __fpr, SSL_get_default_passwd_cb , SSL *, ___ctx, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(char *, int, int, void *), 0, 0, 0, 0, 0, 0)

#define SSL_get_default_passwd_cb_userdata(___ctx) \
      LP1(0x6bb8, void *, SSL_get_default_passwd_cb_userdata , SSL *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_all_async_fds(___s, ___fds, ___numfds) \
      LP3(0x6bbe, int, SSL_get_all_async_fds , SSL *, ___s, a0, OSSL_ASYNC_FD *, ___fds, a1, size_t *, ___numfds, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_changed_async_fds(___s, ___addfd, ___numaddfds, ___delfd, ___numdelfds) \
      LP5(0x6bc4, int, SSL_get_changed_async_fds , SSL *, ___s, a0, OSSL_ASYNC_FD *, ___addfd, a1, size_t *, ___numaddfds, a2, OSSL_ASYNC_FD *, ___delfd, a3, size_t *, ___numdelfds, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_default_read_buffer_len(___ctx, ___len) \
      LP2NR(0x6bca, SSL_CTX_set_default_read_buffer_len , SSL_CTX *, ___ctx, a0, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_default_read_buffer_len(___s, ___len) \
      LP2NR(0x6bd0, SSL_set_default_read_buffer_len , SSL *, ___s, a0, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_ct_validation_callback(___s, ___callback, ___arg) \
      LP3(0x6bd6, int, SSL_set_ct_validation_callback , SSL *, ___s, a0, ssl_ct_validation_cb, ___callback, a1, void *, ___arg, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_ct_validation_callback(___ctx, ___callback, ___arg) \
      LP3(0x6bdc, int, SSL_CTX_set_ct_validation_callback , SSL_CTX *, ___ctx, a0, ssl_ct_validation_cb, ___callback, a1, void *, ___arg, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_ct_is_enabled(___s) \
      LP1(0x6be2, int, SSL_ct_is_enabled , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_ct_is_enabled(___ctx) \
      LP1(0x6be8, int, SSL_CTX_ct_is_enabled , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_peer_scts(___s) \
      LP1(0x6bee, const STACK_OF(SCT) *, SSL_get0_peer_scts , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_default_ctlog_list_file(___ctx) \
      LP1(0x6bf4, int, SSL_CTX_set_default_ctlog_list_file , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_ctlog_list_file(___ctx, ___path) \
      LP2(0x6bfa, int, SSL_CTX_set_ctlog_list_file , SSL_CTX *, ___ctx, a0, const char *, ___path, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set0_ctlog_store(___ctx, ___logs) \
      LP2NR(0x6c00, SSL_CTX_set0_ctlog_store , SSL_CTX *, ___ctx, a0, CTLOG_STORE *, ___logs, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get0_ctlog_store(___ctx) \
      LP1(0x6c06, const CTLOG_STORE *, SSL_CTX_get0_ctlog_store , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_SIG_get0(___sig, ___palg, ___pdigest) \
      LP3NR(0x6c0c, X509_SIG_get0 , const X509_SIG *, ___sig, a0, const X509_ALGOR **, ___palg, a1, const ASN1_OCTET_STRING **, ___pdigest, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_pkey_get0_attrs(___p8) \
      LP1(0x6c12, const STACK_OF(X509_ATTRIBUTE) *, PKCS8_pkey_get0_attrs , const PKCS8_PRIV_KEY_INFO *, ___p8, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_pkey_add1_attr_by_NID(___p8, ___nid, ___type, ___bytes, ___len) \
      LP5(0x6c18, int, PKCS8_pkey_add1_attr_by_NID , PKCS8_PRIV_KEY_INFO *, ___p8, a0, int, ___nid, d0, int, ___type, d1, const unsigned char *, ___bytes, a1, int, ___len, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_up_ref(___v) \
      LP1(0x6c1e, int, X509_STORE_up_ref , X509_STORE *, ___v, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_enable_ct(___s, ___validation_mode) \
      LP2(0x6c24, int, SSL_enable_ct , SSL *, ___s, a0, int, ___validation_mode, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_enable_ct(___ctx, ___validation_mode) \
      LP2(0x6c2a, int, SSL_CTX_enable_ct , SSL_CTX *, ___ctx, a0, int, ___validation_mode, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_ciphers(___ctx) \
      LP1(0x6c30, STACK_OF(SSL_CIPHER) *, SSL_CTX_get_ciphers , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get0_hostname(___s) \
      LP1(0x6c36, const char *, SSL_SESSION_get0_hostname , const SSL_SESSION *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCT_validation_status_string(___sct) \
      LP1(0x6c3c, const char *, SCT_validation_status_string , const SCT *, ___sct, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_meth_new(___type, ___name) \
      LP2(0x6c42, BIO_METHOD *, BIO_meth_new , int, ___type, d0, const char *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_meth_get_puts(___biom) \
      LP1FR(0x6c48, __fpr, BIO_meth_get_puts , const BIO_METHOD *, ___biom, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(BIO *, const char *), 0, 0, 0, 0, 0, 0)

#define BIO_meth_get_ctrl(___biom) \
      LP1FR(0x6c4e, __fpr, BIO_meth_get_ctrl , const BIO_METHOD *, ___biom, a0,\
      , AMISSL_BASE_NAME, long (*__fpr)(BIO *, int, long, void *), 0, 0, 0, 0, 0, 0)

#define BIO_meth_get_gets(___biom) \
      LP1FR(0x6c54, __fpr, BIO_meth_get_gets , const BIO_METHOD *, ___biom, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(BIO *, char *, int), 0, 0, 0, 0, 0, 0)

#define BIO_get_data(___a) \
      LP1(0x6c5a, void *, BIO_get_data , BIO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_set_init(___a, ___init) \
      LP2NR(0x6c60, BIO_set_init , BIO *, ___a, a0, int, ___init, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_meth_set_puts(___biom, ___func) \
      LP2FP(0x6c66, int, BIO_meth_set_puts , BIO_METHOD *, ___biom, a0, __fpt, ___func, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(BIO *,const char *), 0, 0, 0, 0, 0, 0)

#define BIO_get_shutdown(___a) \
      LP1(0x6c6c, int, BIO_get_shutdown , BIO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_get_init(___a) \
      LP1(0x6c72, int, BIO_get_init , BIO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_meth_set_ctrl(___biom, ___ctrl) \
      LP2FP(0x6c78, int, BIO_meth_set_ctrl , BIO_METHOD *, ___biom, a0, __fpt, ___ctrl, a1,\
      , AMISSL_BASE_NAME, long (*__fpt)(BIO *,int,long,void *), 0, 0, 0, 0, 0, 0)

#define BIO_meth_set_read(___biom, ___read) \
      LP2FP(0x6c7e, int, BIO_meth_set_read , BIO_METHOD *, ___biom, a0, __fpt, ___read, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(BIO *,char *,int), 0, 0, 0, 0, 0, 0)

#define BIO_set_shutdown(___a, ___shut) \
      LP2NR(0x6c84, BIO_set_shutdown , BIO *, ___a, a0, int, ___shut, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_meth_set_create(___biom, ___create) \
      LP2FP(0x6c8a, int, BIO_meth_set_create , BIO_METHOD *, ___biom, a0, __fpt, ___create, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(BIO *), 0, 0, 0, 0, 0, 0)

#define BIO_meth_get_write(___biom) \
      LP1FR(0x6c90, __fpr, BIO_meth_get_write , const BIO_METHOD *, ___biom, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(BIO *, const char *, int), 0, 0, 0, 0, 0, 0)

#define BIO_meth_set_callback_ctrl(___biom, ___callback_ctrl) \
      LP2FP(0x6c96, int, BIO_meth_set_callback_ctrl , BIO_METHOD *, ___biom, a0, __fpt, ___callback_ctrl, a1,\
      , AMISSL_BASE_NAME, long (*__fpt)(BIO *,int,BIO_info_cb *), 0, 0, 0, 0, 0, 0)

#define BIO_meth_get_create(___biom) \
      LP1FR(0x6c9c, __fpr, BIO_meth_get_create , const BIO_METHOD *, ___biom, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(BIO *), 0, 0, 0, 0, 0, 0)

#define BIO_set_next(___b, ___next) \
      LP2NR(0x6ca2, BIO_set_next , BIO *, ___b, a0, BIO *, ___next, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_set_data(___a, ___ptr) \
      LP2NR(0x6ca8, BIO_set_data , BIO *, ___a, a0, void *, ___ptr, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_meth_set_write(___biom, ___write) \
      LP2FP(0x6cae, int, BIO_meth_set_write , BIO_METHOD *, ___biom, a0, __fpt, ___write, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(BIO *,const char *,int), 0, 0, 0, 0, 0, 0)

#define BIO_meth_set_destroy(___biom, ___destroy) \
      LP2FP(0x6cb4, int, BIO_meth_set_destroy , BIO_METHOD *, ___biom, a0, __fpt, ___destroy, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(BIO *), 0, 0, 0, 0, 0, 0)

#define BIO_meth_set_gets(___biom, ___func) \
      LP2FP(0x6cba, int, BIO_meth_set_gets , BIO_METHOD *, ___biom, a0, __fpt, ___func, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(BIO *,char *,int), 0, 0, 0, 0, 0, 0)

#define BIO_meth_get_callback_ctrl(___biom) \
      LP1FR(0x6cc0, __fpr, BIO_meth_get_callback_ctrl , const BIO_METHOD *, ___biom, a0,\
      , AMISSL_BASE_NAME, long (*__fpr)(BIO *, int, BIO_info_cb *), 0, 0, 0, 0, 0, 0)

#define BIO_meth_get_destroy(___biom) \
      LP1FR(0x6cc6, __fpr, BIO_meth_get_destroy , const BIO_METHOD *, ___biom, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(BIO *), 0, 0, 0, 0, 0, 0)

#define BIO_meth_get_read(___biom) \
      LP1FR(0x6ccc, __fpr, BIO_meth_get_read , const BIO_METHOD *, ___biom, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(BIO *, char *, int), 0, 0, 0, 0, 0, 0)

#define BIO_set_retry_reason(___bio, ___reason) \
      LP2NR(0x6cd2, BIO_set_retry_reason , BIO *, ___bio, a0, int, ___reason, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_meth_free(___biom) \
      LP1NR(0x6cd8, BIO_meth_free , BIO_METHOD *, ___biom, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_set_bn_mod_exp(___dsam, ___bn_mod_exp) \
      LP2FP(0x6cde, int, DSA_meth_set_bn_mod_exp , DSA_METHOD *, ___dsam, a0, __fpt, ___bn_mod_exp, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(DSA *,BIGNUM *,const BIGNUM *,const BIGNUM *,const BIGNUM *,BN_CTX *,BN_MONT_CTX *), 0, 0, 0, 0, 0, 0)

#define DSA_meth_set_init(___dsam, ___init) \
      LP2FP(0x6ce4, int, DSA_meth_set_init , DSA_METHOD *, ___dsam, a0, __fpt, ___init, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(DSA *), 0, 0, 0, 0, 0, 0)

#define DSA_meth_free(___dsam) \
      LP1NR(0x6cea, DSA_meth_free , DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_set_mod_exp(___dsam, ___mod_exp) \
      LP2FP(0x6cf0, int, DSA_meth_set_mod_exp , DSA_METHOD *, ___dsam, a0, __fpt, ___mod_exp, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(DSA *,BIGNUM *,const BIGNUM *,const BIGNUM *,const BIGNUM *,const BIGNUM *,const BIGNUM *,BN_CTX *,BN_MONT_CTX *), 0, 0, 0, 0, 0, 0)

#define DSA_meth_set_sign(___dsam, ___sign) \
      LP2FP(0x6cf6, int, DSA_meth_set_sign , DSA_METHOD *, ___dsam, a0, __fpt, ___sign, a1,\
      , AMISSL_BASE_NAME, DSA_SIG * (*__fpt)(const unsigned char *,int,DSA *), 0, 0, 0, 0, 0, 0)

#define DSA_meth_get_finish(___dsam) \
      LP1FR(0x6cfc, __fpr, DSA_meth_get_finish , const DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(DSA *), 0, 0, 0, 0, 0, 0)

#define DSA_set_flags(___d, ___flags) \
      LP2NR(0x6d02, DSA_set_flags , DSA *, ___d, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_get0_pqg(___d, ___p, ___q, ___g) \
      LP4NR(0x6d08, DSA_get0_pqg , const DSA *, ___d, a0, const BIGNUM **, ___p, a1, const BIGNUM **, ___q, a2, const BIGNUM **, ___g, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_get0_app_data(___dsam) \
      LP1(0x6d0e, void *, DSA_meth_get0_app_data , const DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_get_keygen(___dsam) \
      LP1FR(0x6d14, __fpr, DSA_meth_get_keygen , const DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(DSA *), 0, 0, 0, 0, 0, 0)

#define DSA_clear_flags(___d, ___flags) \
      LP2NR(0x6d1a, DSA_clear_flags , DSA *, ___d, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_get0_name(___dsam) \
      LP1(0x6d20, const char *, DSA_meth_get0_name , const DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_get_paramgen(___dsam) \
      LP1FR(0x6d26, __fpr, DSA_meth_get_paramgen , DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(DSA *, int, const unsigned char *, int, int *, unsigned long *, BN_GENCB *), 0, 0, 0, 0, 0, 0)

#define DSA_meth_get_sign(___dsam) \
      LP1FR(0x6d2c, __fpr, DSA_meth_get_sign , DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, DSA_SIG * (*__fpr)(const unsigned char *, int, DSA *), 0, 0, 0, 0, 0, 0)

#define DSA_meth_set_paramgen(___dsam, ___paramgen) \
      LP2FP(0x6d32, int, DSA_meth_set_paramgen , DSA_METHOD *, ___dsam, a0, __fpt, ___paramgen, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(DSA *,int,const unsigned char *,int,int *,unsigned long *,BN_GENCB *), 0, 0, 0, 0, 0, 0)

#define DSA_test_flags(___d, ___flags) \
      LP2(0x6d38, int, DSA_test_flags , const DSA *, ___d, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_set0_app_data(___dsam, ___app_data) \
      LP2(0x6d3e, int, DSA_meth_set0_app_data , DSA_METHOD *, ___dsam, a0, void *, ___app_data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_set1_name(___dsam, ___name) \
      LP2(0x6d44, int, DSA_meth_set1_name , DSA_METHOD *, ___dsam, a0, const char *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_get0_key(___d, ___pub_key, ___priv_key) \
      LP3NR(0x6d4a, DSA_get0_key , const DSA *, ___d, a0, const BIGNUM **, ___pub_key, a1, const BIGNUM **, ___priv_key, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_get_mod_exp(___dsam) \
      LP1FR(0x6d50, __fpr, DSA_meth_get_mod_exp , const DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(DSA *, BIGNUM *, const BIGNUM *, const BIGNUM *, const BIGNUM *, const BIGNUM *, const BIGNUM *, BN_CTX *, BN_MONT_CTX *), 0, 0, 0, 0, 0, 0)

#define DSA_set0_pqg(___d, ___p, ___q, ___g) \
      LP4(0x6d56, int, DSA_set0_pqg , DSA *, ___d, a0, BIGNUM *, ___p, a1, BIGNUM *, ___q, a2, BIGNUM *, ___g, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_get_flags(___dsam) \
      LP1(0x6d5c, int, DSA_meth_get_flags , const DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_get_verify(___dsam) \
      LP1FR(0x6d62, __fpr, DSA_meth_get_verify , const DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(const unsigned char *, int, DSA_SIG *, DSA *), 0, 0, 0, 0, 0, 0)

#define DSA_meth_set_verify(___dsam, ___verify) \
      LP2FP(0x6d68, int, DSA_meth_set_verify , DSA_METHOD *, ___dsam, a0, __fpt, ___verify, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const unsigned char *,int,DSA_SIG *,DSA *), 0, 0, 0, 0, 0, 0)

#define DSA_meth_set_finish(___dsam, ___finish) \
      LP2FP(0x6d6e, int, DSA_meth_set_finish , DSA_METHOD *, ___dsam, a0, __fpt, ___finish, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(DSA *), 0, 0, 0, 0, 0, 0)

#define DSA_meth_set_keygen(___dsam, ___keygen) \
      LP2FP(0x6d74, int, DSA_meth_set_keygen , DSA_METHOD *, ___dsam, a0, __fpt, ___keygen, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(DSA *), 0, 0, 0, 0, 0, 0)

#define DSA_meth_dup(___dsam) \
      LP1(0x6d7a, DSA_METHOD *, DSA_meth_dup , const DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_set0_key(___d, ___pub_key, ___priv_key) \
      LP3(0x6d80, int, DSA_set0_key , DSA *, ___d, a0, BIGNUM *, ___pub_key, a1, BIGNUM *, ___priv_key, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_get_init(___dsam) \
      LP1FR(0x6d86, __fpr, DSA_meth_get_init , const DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(DSA *), 0, 0, 0, 0, 0, 0)

#define DSA_meth_set_sign_setup(___dsam, ___sign_setup) \
      LP2FP(0x6d8c, int, DSA_meth_set_sign_setup , DSA_METHOD *, ___dsam, a0, __fpt, ___sign_setup, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(DSA *,BN_CTX *,BIGNUM **,BIGNUM **), 0, 0, 0, 0, 0, 0)

#define DSA_meth_get_bn_mod_exp(___dsam) \
      LP1FR(0x6d92, __fpr, DSA_meth_get_bn_mod_exp , const DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(DSA *, BIGNUM *, const BIGNUM *, const BIGNUM *, const BIGNUM *, BN_CTX *, BN_MONT_CTX *), 0, 0, 0, 0, 0, 0)

#define DSA_get_method(___d) \
      LP1(0x6d98, const DSA_METHOD *, DSA_get_method , DSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_new(___name, ___flags) \
      LP2(0x6d9e, DSA_METHOD *, DSA_meth_new , const char *, ___name, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_set_flags(___dsam, ___flags) \
      LP2(0x6da4, int, DSA_meth_set_flags , DSA_METHOD *, ___dsam, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_meth_get_sign_setup(___dsam) \
      LP1FR(0x6daa, __fpr, DSA_meth_get_sign_setup , const DSA_METHOD *, ___dsam, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(DSA *, BN_CTX *, BIGNUM **, BIGNUM **), 0, 0, 0, 0, 0, 0)

#define DSA_get0_engine(___d) \
      LP1(0x6db0, ENGINE *, DSA_get0_engine , DSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set_auth_level(___param, ___auth_level) \
      LP2NR(0x6db6, X509_VERIFY_PARAM_set_auth_level , X509_VERIFY_PARAM *, ___param, a0, int, ___auth_level, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get_auth_level(___param) \
      LP1(0x6dbc, int, X509_VERIFY_PARAM_get_auth_level , const X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get0_pubkey(___req) \
      LP1(0x6dc2, EVP_PKEY *, X509_REQ_get0_pubkey , X509_REQ *, ___req, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_set0_key(___r, ___n, ___e, ___d) \
      LP4(0x6dc8, int, RSA_set0_key , RSA *, ___r, a0, BIGNUM *, ___n, a1, BIGNUM *, ___e, a2, BIGNUM *, ___d, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_flags(___meth) \
      LP1(0x6dce, int, RSA_meth_get_flags , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_finish(___rsa, ___finish) \
      LP2FP(0x6dd4, int, RSA_meth_set_finish , RSA_METHOD *, ___rsa, a0, __fpt, ___finish, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(RSA *), 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_priv_dec(___meth) \
      LP1FR(0x6dda, __fpr, RSA_meth_get_priv_dec , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(int, const unsigned char *, unsigned char *, RSA *, int), 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_sign(___meth) \
      LP1FR(0x6de0, __fpr, RSA_meth_get_sign , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(int, const unsigned char *, unsigned int, unsigned char *, unsigned int *, const RSA *), 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_bn_mod_exp(___meth) \
      LP1FR(0x6de6, __fpr, RSA_meth_get_bn_mod_exp , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(BIGNUM *, const BIGNUM *, const BIGNUM *, const BIGNUM *, BN_CTX *, BN_MONT_CTX *), 0, 0, 0, 0, 0, 0)

#define RSA_test_flags(___r, ___flags) \
      LP2(0x6dec, int, RSA_test_flags , const RSA *, ___r, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_new(___name, ___flags) \
      LP2(0x6df2, RSA_METHOD *, RSA_meth_new , const char *, ___name, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_get0_app_data(___meth) \
      LP1(0x6df8, void *, RSA_meth_get0_app_data , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_dup(___meth) \
      LP1(0x6dfe, RSA_METHOD *, RSA_meth_dup , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_set1_name(___meth, ___name) \
      LP2(0x6e04, int, RSA_meth_set1_name , RSA_METHOD *, ___meth, a0, const char *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_set0_app_data(___meth, ___app_data) \
      LP2(0x6e0a, int, RSA_meth_set0_app_data , RSA_METHOD *, ___meth, a0, void *, ___app_data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_set_flags(___r, ___flags) \
      LP2NR(0x6e10, RSA_set_flags , RSA *, ___r, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_sign(___rsa, ___sign) \
      LP2FP(0x6e16, int, RSA_meth_set_sign , RSA_METHOD *, ___rsa, a0, __fpt, ___sign, d0,\
      , AMISSL_BASE_NAME, int (*__fpt)(int,const unsigned char *,unsigned int,unsigned char *,unsigned int *,const RSA *), 0, 0, 0, 0, 0, 0)

#define RSA_clear_flags(___r, ___flags) \
      LP2NR(0x6e1c, RSA_clear_flags , RSA *, ___r, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_keygen(___meth) \
      LP1FR(0x6e22, __fpr, RSA_meth_get_keygen , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(RSA *, int, BIGNUM *, BN_GENCB *), 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_keygen(___rsa, ___keygen) \
      LP2FP(0x6e28, int, RSA_meth_set_keygen , RSA_METHOD *, ___rsa, a0, __fpt, ___keygen, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(RSA *,int,BIGNUM *,BN_GENCB *), 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_pub_dec(___rsa, ___pub_dec) \
      LP2FP(0x6e2e, int, RSA_meth_set_pub_dec , RSA_METHOD *, ___rsa, a0, __fpt, ___pub_dec, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(int,const unsigned char *,unsigned char *,RSA *,int), 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_finish(___meth) \
      LP1FR(0x6e34, __fpr, RSA_meth_get_finish , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(RSA *rsa), 0, 0, 0, 0, 0, 0)

#define RSA_get0_key(___r, ___n, ___e, ___d) \
      LP4NR(0x6e3a, RSA_get0_key , const RSA *, ___r, a0, const BIGNUM **, ___n, a1, const BIGNUM **, ___e, a2, const BIGNUM **, ___d, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get0_engine(___r) \
      LP1(0x6e40, ENGINE *, RSA_get0_engine , const RSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_priv_enc(___rsa, ___priv_enc) \
      LP2FP(0x6e46, int, RSA_meth_set_priv_enc , RSA_METHOD *, ___rsa, a0, __fpt, ___priv_enc, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(int,const unsigned char *,unsigned char *,RSA *,int), 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_verify(___rsa, ___verify) \
      LP2FP(0x6e4c, int, RSA_meth_set_verify , RSA_METHOD *, ___rsa, a0, __fpt, ___verify, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(int,const unsigned char *,unsigned int,const unsigned char *,unsigned int,const RSA *), 0, 0, 0, 0, 0, 0)

#define RSA_get0_factors(___r, ___p, ___q) \
      LP3NR(0x6e52, RSA_get0_factors , const RSA *, ___r, a0, const BIGNUM **, ___p, a1, const BIGNUM **, ___q, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_get0_name(___meth) \
      LP1(0x6e58, const char *, RSA_meth_get0_name , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_mod_exp(___meth) \
      LP1FR(0x6e5e, __fpr, RSA_meth_get_mod_exp , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(BIGNUM *, const BIGNUM *, RSA *, BN_CTX *), 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_flags(___meth, ___flags) \
      LP2(0x6e64, int, RSA_meth_set_flags , RSA_METHOD *, ___meth, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_pub_dec(___meth) \
      LP1FR(0x6e6a, __fpr, RSA_meth_get_pub_dec , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(int, const unsigned char *, unsigned char *, RSA *, int), 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_bn_mod_exp(___rsa, ___bn_mod_exp) \
      LP2FP(0x6e70, int, RSA_meth_set_bn_mod_exp , RSA_METHOD *, ___rsa, a0, __fpt, ___bn_mod_exp, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(BIGNUM *,const BIGNUM *,const BIGNUM *,const BIGNUM *,BN_CTX *,BN_MONT_CTX *), 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_init(___meth) \
      LP1FR(0x6e76, __fpr, RSA_meth_get_init , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(RSA *), 0, 0, 0, 0, 0, 0)

#define RSA_meth_free(___meth) \
      LP1NR(0x6e7c, RSA_meth_free , RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_pub_enc(___meth) \
      LP1FR(0x6e82, __fpr, RSA_meth_get_pub_enc , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(int, const unsigned char *, unsigned char *, RSA *, int), 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_mod_exp(___rsa, ___mod_exp) \
      LP2FP(0x6e88, int, RSA_meth_set_mod_exp , RSA_METHOD *, ___rsa, a0, __fpt, ___mod_exp, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(BIGNUM *,const BIGNUM *,RSA *,BN_CTX *), 0, 0, 0, 0, 0, 0)

#define RSA_set0_factors(___r, ___p, ___q) \
      LP3(0x6e8e, int, RSA_set0_factors , RSA *, ___r, a0, BIGNUM *, ___p, a1, BIGNUM *, ___q, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_pub_enc(___rsa, ___pub_enc) \
      LP2FP(0x6e94, int, RSA_meth_set_pub_enc , RSA_METHOD *, ___rsa, a0, __fpt, ___pub_enc, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(int,const unsigned char *,unsigned char *,RSA *,int), 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_priv_dec(___rsa, ___priv_dec) \
      LP2FP(0x6e9a, int, RSA_meth_set_priv_dec , RSA_METHOD *, ___rsa, a0, __fpt, ___priv_dec, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(int,const unsigned char *,unsigned char *,RSA *,int), 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_verify(___meth) \
      LP1FR(0x6ea0, __fpr, RSA_meth_get_verify , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(int, const unsigned char *, unsigned int, const unsigned char *, unsigned int, const RSA *), 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_init(___rsa, ___init) \
      LP2FP(0x6ea6, int, RSA_meth_set_init , RSA_METHOD *, ___rsa, a0, __fpt, ___init, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(RSA *), 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_priv_enc(___meth) \
      LP1FR(0x6eac, __fpr, RSA_meth_get_priv_enc , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(int, const unsigned char *, unsigned char *, RSA *, int), 0, 0, 0, 0, 0, 0)

#define RSA_set0_crt_params(___r, ___dmp1, ___dmq1, ___iqmp) \
      LP4(0x6eb2, int, RSA_set0_crt_params , RSA *, ___r, a0, BIGNUM *, ___dmp1, a1, BIGNUM *, ___dmq1, a2, BIGNUM *, ___iqmp, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get0_crt_params(___r, ___dmp1, ___dmq1, ___iqmp) \
      LP4NR(0x6eb8, RSA_get0_crt_params , const RSA *, ___r, a0, const BIGNUM **, ___dmp1, a1, const BIGNUM **, ___dmq1, a2, const BIGNUM **, ___iqmp, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_set0_pqg(___dh, ___p, ___q, ___g) \
      LP4(0x6ebe, int, DH_set0_pqg , DH *, ___dh, a0, BIGNUM *, ___p, a1, BIGNUM *, ___q, a2, BIGNUM *, ___g, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_clear_flags(___dh, ___flags) \
      LP2NR(0x6ec4, DH_clear_flags , DH *, ___dh, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get0_key(___dh, ___pub_key, ___priv_key) \
      LP3NR(0x6eca, DH_get0_key , const DH *, ___dh, a0, const BIGNUM **, ___pub_key, a1, const BIGNUM **, ___priv_key, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get0_engine(___d) \
      LP1(0x6ed0, ENGINE *, DH_get0_engine , DH *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_set0_key(___dh, ___pub_key, ___priv_key) \
      LP3(0x6ed6, int, DH_set0_key , DH *, ___dh, a0, BIGNUM *, ___pub_key, a1, BIGNUM *, ___priv_key, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_set_length(___dh, ___length) \
      LP2(0x6edc, int, DH_set_length , DH *, ___dh, a0, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_test_flags(___dh, ___flags) \
      LP2(0x6ee2, int, DH_test_flags , const DH *, ___dh, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get_length(___dh) \
      LP1(0x6ee8, long, DH_get_length , const DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get0_pqg(___dh, ___p, ___q, ___g) \
      LP4NR(0x6eee, DH_get0_pqg , const DH *, ___dh, a0, const BIGNUM **, ___p, a1, const BIGNUM **, ___q, a2, const BIGNUM **, ___g, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_meth_get_compute_key(___dhm) \
      LP1FR(0x6ef4, __fpr, DH_meth_get_compute_key , const DH_METHOD *, ___dhm, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(unsigned char *, const BIGNUM *, DH *), 0, 0, 0, 0, 0, 0)

#define DH_meth_set1_name(___dhm, ___name) \
      LP2(0x6efa, int, DH_meth_set1_name , DH_METHOD *, ___dhm, a0, const char *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_meth_set_init(___dhm, ___init) \
      LP2FP(0x6f00, int, DH_meth_set_init , DH_METHOD *, ___dhm, a0, __fpt, ___init, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(DH *), 0, 0, 0, 0, 0, 0)

#define DH_meth_get_finish(___dhm) \
      LP1FR(0x6f06, __fpr, DH_meth_get_finish , const DH_METHOD *, ___dhm, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(DH *), 0, 0, 0, 0, 0, 0)

#define DH_meth_get0_name(___dhm) \
      LP1(0x6f0c, const char *, DH_meth_get0_name , const DH_METHOD *, ___dhm, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_meth_set_generate_params(___dhm, ___generate_params) \
      LP2FP(0x6f12, int, DH_meth_set_generate_params , DH_METHOD *, ___dhm, a0, __fpt, ___generate_params, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(DH *,int,int,BN_GENCB *), 0, 0, 0, 0, 0, 0)

#define DH_meth_set_compute_key(___dhm, ___compute_key) \
      LP2FP(0x6f18, int, DH_meth_set_compute_key , DH_METHOD *, ___dhm, a0, __fpt, ___compute_key, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(unsigned char *,const BIGNUM *,DH *), 0, 0, 0, 0, 0, 0)

#define DH_meth_set_flags(___dhm, ___flags) \
      LP2(0x6f1e, int, DH_meth_set_flags , DH_METHOD *, ___dhm, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_meth_get_generate_params(___dhm) \
      LP1FR(0x6f24, __fpr, DH_meth_get_generate_params , const DH_METHOD *, ___dhm, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(DH *, int, int, BN_GENCB *), 0, 0, 0, 0, 0, 0)

#define DH_meth_get_flags(___dhm) \
      LP1(0x6f2a, int, DH_meth_get_flags , const DH_METHOD *, ___dhm, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_meth_set_finish(___dhm, ___finish) \
      LP2FP(0x6f30, int, DH_meth_set_finish , DH_METHOD *, ___dhm, a0, __fpt, ___finish, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(DH *), 0, 0, 0, 0, 0, 0)

#define DH_meth_get0_app_data(___dhm) \
      LP1(0x6f36, void *, DH_meth_get0_app_data , const DH_METHOD *, ___dhm, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_meth_set0_app_data(___dhm, ___app_data) \
      LP2(0x6f3c, int, DH_meth_set0_app_data , DH_METHOD *, ___dhm, a0, void *, ___app_data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_meth_get_init(___dhm) \
      LP1FR(0x6f42, __fpr, DH_meth_get_init , const DH_METHOD *, ___dhm, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(DH *), 0, 0, 0, 0, 0, 0)

#define DH_meth_get_bn_mod_exp(___dhm) \
      LP1FR(0x6f48, __fpr, DH_meth_get_bn_mod_exp , const DH_METHOD *, ___dhm, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(const DH *, BIGNUM *, const BIGNUM *, const BIGNUM *, const BIGNUM *, BN_CTX *, BN_MONT_CTX *), 0, 0, 0, 0, 0, 0)

#define DH_meth_new(___name, ___flags) \
      LP2(0x6f4e, DH_METHOD *, DH_meth_new , const char *, ___name, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_meth_dup(___dhm) \
      LP1(0x6f54, DH_METHOD *, DH_meth_dup , const DH_METHOD *, ___dhm, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_meth_set_bn_mod_exp(___dhm, ___bn_mod_exp) \
      LP2FP(0x6f5a, int, DH_meth_set_bn_mod_exp , DH_METHOD *, ___dhm, a0, __fpt, ___bn_mod_exp, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const DH *,BIGNUM *,const BIGNUM *,const BIGNUM *,const BIGNUM *,BN_CTX *,BN_MONT_CTX *), 0, 0, 0, 0, 0, 0)

#define DH_meth_set_generate_key(___dhm, ___generate_key) \
      LP2FP(0x6f60, int, DH_meth_set_generate_key , DH_METHOD *, ___dhm, a0, __fpt, ___generate_key, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(DH *), 0, 0, 0, 0, 0, 0)

#define DH_meth_free(___dhm) \
      LP1NR(0x6f66, DH_meth_free , DH_METHOD *, ___dhm, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_meth_get_generate_key(___dhm) \
      LP1FR(0x6f6c, __fpr, DH_meth_get_generate_key , const DH_METHOD *, ___dhm, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(DH *), 0, 0, 0, 0, 0, 0)

#define DH_set_flags(___dh, ___flags) \
      LP2NR(0x6f72, DH_set_flags , DH *, ___dh, a0, int, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_obj_by_subject(___vs, ___type, ___name) \
      LP3(0x6f78, X509_OBJECT *, X509_STORE_CTX_get_obj_by_subject , X509_STORE_CTX *, ___vs, a0, X509_LOOKUP_TYPE, ___type, d0, X509_NAME *, ___name, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_OBJECT_free(___a) \
      LP1NR(0x6f7e, X509_OBJECT_free , X509_OBJECT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_OBJECT_get0_X509(___a) \
      LP1(0x6f84, X509 *, X509_OBJECT_get0_X509 , const X509_OBJECT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get0_untrusted(___ctx) \
      LP1(0x6f8a, STACK_OF(X509) *, X509_STORE_CTX_get0_untrusted , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get0_cert(___ctx) \
      LP1(0x6f90, X509 *, X509_STORE_CTX_get0_cert , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_verify(___ctx, ___verify) \
      LP2NR(0x6f96, X509_STORE_CTX_set_verify , X509_STORE_CTX *, ___ctx, a0, X509_STORE_CTX_verify_fn, ___verify, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_verify(___ctx) \
      LP1(0x6f9c, X509_STORE_CTX_verify_fn, X509_STORE_CTX_get_verify , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_verify_cb(___ctx) \
      LP1(0x6fa2, X509_STORE_CTX_verify_cb, X509_STORE_CTX_get_verify_cb , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set0_verified_chain(___ctx, ___sk) \
      LP2NR(0x6fa8, X509_STORE_CTX_set0_verified_chain , X509_STORE_CTX *, ___ctx, a0, STACK_OF(X509) *, ___sk, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set0_untrusted(___ctx, ___sk) \
      LP2NR(0x6fae, X509_STORE_CTX_set0_untrusted , X509_STORE_CTX *, ___ctx, a0, STACK_OF(X509) *, ___sk, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_hexchar2int(___c) \
      LP1(0x6fb4, int, OPENSSL_hexchar2int , unsigned char, ___c, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_SIG_set0(___sig, ___r, ___s) \
      LP3(0x6fd8, int, DSA_SIG_set0 , DSA_SIG *, ___sig, a0, BIGNUM *, ___r, a1, BIGNUM *, ___s, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_bits(___d) \
      LP1(0x6fde, int, DSA_bits , const DSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_SIG_set0(___sig, ___r, ___s) \
      LP3(0x6fe4, int, ECDSA_SIG_set0 , ECDSA_SIG *, ___sig, a0, BIGNUM *, ___r, a1, BIGNUM *, ___s, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ENCODE_CTX_copy(___dctx, ___sctx) \
      LP2(0x6fea, int, EVP_ENCODE_CTX_copy , EVP_ENCODE_CTX *, ___dctx, a0, EVP_ENCODE_CTX *, ___sctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get0_hmac(___pkey, ___len) \
      LP2(0x6ff0, const unsigned char *, EVP_PKEY_get0_hmac , const EVP_PKEY *, ___pkey, a0, size_t *, ___len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define HMAC_CTX_get_md(___ctx) \
      LP1(0x6ff6, const EVP_MD *, HMAC_CTX_get_md , const HMAC_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_resp_get0_certs(___bs) \
      LP1(0x6ffc, const STACK_OF(X509) *, OCSP_resp_get0_certs , const OCSP_BASICRESP *, ___bs, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_resp_get0_id(___bs, ___pid, ___pname) \
      LP3(0x7002, int, OCSP_resp_get0_id , const OCSP_BASICRESP *, ___bs, a0, const ASN1_OCTET_STRING **, ___pid, a1, const X509_NAME **, ___pname, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_PrivateKey_traditional(___bp, ___x, ___enc, ___kstr, ___klen, ___cb, ___u) \
      LP7(0x7008, int, PEM_write_bio_PrivateKey_traditional , BIO *, ___bp, a0, EVP_PKEY *, ___x, a1, const EVP_CIPHER *, ___enc, a2, unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get_protocol_version(___s) \
      LP1(0x700e, int, SSL_SESSION_get_protocol_version , const SSL_SESSION *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_is_dtls(___s) \
      LP1(0x7014, int, SSL_is_dtls , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_dane_set_flags(___ctx, ___flags) \
      LP2(0x701a, unsigned long, SSL_CTX_dane_set_flags , SSL_CTX *, ___ctx, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_dane_clear_flags(___ctx, ___flags) \
      LP2(0x7020, unsigned long, SSL_CTX_dane_clear_flags , SSL_CTX *, ___ctx, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_dane_set_flags(___ssl, ___flags) \
      LP2(0x7026, unsigned long, SSL_dane_set_flags , SSL *, ___ssl, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_dane_clear_flags(___ssl, ___flags) \
      LP2(0x702c, unsigned long, SSL_dane_clear_flags , SSL *, ___ssl, a0, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_client_version(___s) \
      LP1(0x7032, int, SSL_client_version , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_pathlen(___x) \
      LP1(0x7038, long, X509_get_pathlen , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_OBJECT_get_type(___a) \
      LP1(0x703e, X509_LOOKUP_TYPE, X509_OBJECT_get_type , const X509_OBJECT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_OBJECT_get0_X509_CRL(___a) \
      LP1(0x7044, X509_CRL *, X509_OBJECT_get0_X509_CRL , X509_OBJECT *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_lock(___ctx) \
      LP1(0x704a, int, X509_STORE_lock , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_unlock(___ctx) \
      LP1(0x7050, int, X509_STORE_unlock , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get0_objects(___v) \
      LP1(0x7056, STACK_OF(X509_OBJECT) *, X509_STORE_get0_objects , X509_STORE *, ___v, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get0_param(___ctx) \
      LP1(0x705c, X509_VERIFY_PARAM *, X509_STORE_get0_param , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_verify(___ctx, ___verify) \
      LP2NR(0x7062, X509_STORE_set_verify , X509_STORE *, ___ctx, a0, X509_STORE_CTX_verify_fn, ___verify, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_verify(___ctx) \
      LP1(0x7068, X509_STORE_CTX_verify_fn, X509_STORE_get_verify , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_verify_cb(___ctx) \
      LP1(0x706e, X509_STORE_CTX_verify_cb, X509_STORE_get_verify_cb , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_get_issuer(___ctx, ___get_issuer) \
      LP2NR(0x7074, X509_STORE_set_get_issuer , X509_STORE *, ___ctx, a0, X509_STORE_CTX_get_issuer_fn, ___get_issuer, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_get_issuer(___ctx) \
      LP1(0x707a, X509_STORE_CTX_get_issuer_fn, X509_STORE_get_get_issuer , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_check_issued(___ctx, ___check_issued) \
      LP2NR(0x7080, X509_STORE_set_check_issued , X509_STORE *, ___ctx, a0, X509_STORE_CTX_check_issued_fn, ___check_issued, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_check_issued(___ctx) \
      LP1(0x7086, X509_STORE_CTX_check_issued_fn, X509_STORE_get_check_issued , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_check_revocation(___ctx, ___check_revocation) \
      LP2NR(0x708c, X509_STORE_set_check_revocation , X509_STORE *, ___ctx, a0, X509_STORE_CTX_check_revocation_fn, ___check_revocation, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_check_revocation(___ctx) \
      LP1(0x7092, X509_STORE_CTX_check_revocation_fn, X509_STORE_get_check_revocation , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_get_crl(___ctx, ___get_crl) \
      LP2NR(0x7098, X509_STORE_set_get_crl , X509_STORE *, ___ctx, a0, X509_STORE_CTX_get_crl_fn, ___get_crl, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_get_crl(___ctx) \
      LP1(0x709e, X509_STORE_CTX_get_crl_fn, X509_STORE_get_get_crl , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_check_crl(___ctx, ___check_crl) \
      LP2NR(0x70a4, X509_STORE_set_check_crl , X509_STORE *, ___ctx, a0, X509_STORE_CTX_check_crl_fn, ___check_crl, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_check_crl(___ctx) \
      LP1(0x70aa, X509_STORE_CTX_check_crl_fn, X509_STORE_get_check_crl , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_cert_crl(___ctx, ___cert_crl) \
      LP2NR(0x70b0, X509_STORE_set_cert_crl , X509_STORE *, ___ctx, a0, X509_STORE_CTX_cert_crl_fn, ___cert_crl, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_cert_crl(___ctx) \
      LP1(0x70b6, X509_STORE_CTX_cert_crl_fn, X509_STORE_get_cert_crl , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_check_policy(___ctx, ___check_policy) \
      LP2NR(0x70bc, X509_STORE_set_check_policy , X509_STORE *, ___ctx, a0, X509_STORE_CTX_check_policy_fn, ___check_policy, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_check_policy(___ctx) \
      LP1(0x70c2, X509_STORE_CTX_check_policy_fn, X509_STORE_get_check_policy , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_lookup_certs(___ctx, ___lookup_certs) \
      LP2NR(0x70c8, X509_STORE_set_lookup_certs , X509_STORE *, ___ctx, a0, X509_STORE_CTX_lookup_certs_fn, ___lookup_certs, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_lookup_certs(___ctx) \
      LP1(0x70ce, X509_STORE_CTX_lookup_certs_fn, X509_STORE_get_lookup_certs , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_lookup_crls(___ctx, ___lookup_crls) \
      LP2NR(0x70d4, X509_STORE_set_lookup_crls , X509_STORE *, ___ctx, a0, X509_STORE_CTX_lookup_crls_fn, ___lookup_crls, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_lookup_crls(___ctx) \
      LP1(0x70da, X509_STORE_CTX_lookup_crls_fn, X509_STORE_get_lookup_crls , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_cleanup(___ctx, ___cleanup) \
      LP2NR(0x70e0, X509_STORE_set_cleanup , X509_STORE *, ___ctx, a0, X509_STORE_CTX_cleanup_fn, ___cleanup, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_cleanup(___ctx) \
      LP1(0x70e6, X509_STORE_CTX_cleanup_fn, X509_STORE_get_cleanup , X509_STORE *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_ex_data(___ctx, ___idx, ___data) \
      LP3(0x70ec, int, X509_STORE_set_ex_data , X509_STORE *, ___ctx, a0, int, ___idx, d0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get_ex_data(___ctx, ___idx) \
      LP2(0x70f2, void *, X509_STORE_get_ex_data , X509_STORE *, ___ctx, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_get_issuer(___ctx) \
      LP1(0x70f8, X509_STORE_CTX_get_issuer_fn, X509_STORE_CTX_get_get_issuer , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_check_issued(___ctx) \
      LP1(0x70fe, X509_STORE_CTX_check_issued_fn, X509_STORE_CTX_get_check_issued , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_check_revocation(___ctx) \
      LP1(0x7104, X509_STORE_CTX_check_revocation_fn, X509_STORE_CTX_get_check_revocation , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_get_crl(___ctx) \
      LP1(0x710a, X509_STORE_CTX_get_crl_fn, X509_STORE_CTX_get_get_crl , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_check_crl(___ctx) \
      LP1(0x7110, X509_STORE_CTX_check_crl_fn, X509_STORE_CTX_get_check_crl , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_cert_crl(___ctx) \
      LP1(0x7116, X509_STORE_CTX_cert_crl_fn, X509_STORE_CTX_get_cert_crl , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_check_policy(___ctx) \
      LP1(0x711c, X509_STORE_CTX_check_policy_fn, X509_STORE_CTX_get_check_policy , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_lookup_certs(___ctx) \
      LP1(0x7122, X509_STORE_CTX_lookup_certs_fn, X509_STORE_CTX_get_lookup_certs , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_lookup_crls(___ctx) \
      LP1(0x7128, X509_STORE_CTX_lookup_crls_fn, X509_STORE_CTX_get_lookup_crls , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_get_cleanup(___ctx) \
      LP1(0x712e, X509_STORE_CTX_cleanup_fn, X509_STORE_CTX_get_cleanup , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_error_depth(___ctx, ___depth) \
      LP2NR(0x7134, X509_STORE_CTX_set_error_depth , X509_STORE_CTX *, ___ctx, a0, int, ___depth, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_set_current_cert(___ctx, ___x) \
      LP2NR(0x713a, X509_STORE_CTX_set_current_cert , X509_STORE_CTX *, ___ctx, a0, X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAME_CONSTRAINTS_check_CN(___x, ___nc) \
      LP2(0x7140, int, NAME_CONSTRAINTS_check_CN , X509 *, ___x, a0, NAME_CONSTRAINTS *, ___nc, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_set_proxy_flag(___x) \
      LP1NR(0x7146, X509_set_proxy_flag , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_set_proxy_pathlen(___x, ___l) \
      LP2NR(0x714c, X509_set_proxy_pathlen , X509 *, ___x, a0, long, ___l, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_proxy_pathlen(___x) \
      LP1(0x7152, long, X509_get_proxy_pathlen , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASIdentifierChoice_new() \
      LP0(0x7158, ASIdentifierChoice *, ASIdentifierChoice_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASIdentifierChoice_free(___a) \
      LP1NR(0x715e, ASIdentifierChoice_free , ASIdentifierChoice *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASIdentifierChoice(___a, ___in, ___len) \
      LP3(0x7164, ASIdentifierChoice *, d2i_ASIdentifierChoice , ASIdentifierChoice **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASIdentifierChoice(___a, ___out) \
      LP2(0x716a, int, i2d_ASIdentifierChoice , ASIdentifierChoice *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASIdentifierChoice_it() \
      LP0(0x7170, const ASN1_ITEM *, ASIdentifierChoice_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASIdentifiers_new() \
      LP0(0x7176, ASIdentifiers *, ASIdentifiers_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASIdentifiers_free(___a) \
      LP1NR(0x717c, ASIdentifiers_free , ASIdentifiers *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASIdentifiers(___a, ___in, ___len) \
      LP3(0x7182, ASIdentifiers *, d2i_ASIdentifiers , ASIdentifiers **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASIdentifiers(___a, ___out) \
      LP2(0x7188, int, i2d_ASIdentifiers , ASIdentifiers *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASIdentifiers_it() \
      LP0(0x718e, const ASN1_ITEM *, ASIdentifiers_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASIdOrRange_new() \
      LP0(0x7194, ASIdOrRange *, ASIdOrRange_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASIdOrRange_free(___a) \
      LP1NR(0x719a, ASIdOrRange_free , ASIdOrRange *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASIdOrRange(___a, ___in, ___len) \
      LP3(0x71a0, ASIdOrRange *, d2i_ASIdOrRange , ASIdOrRange **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASIdOrRange(___a, ___out) \
      LP2(0x71a6, int, i2d_ASIdOrRange , ASIdOrRange *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASIdOrRange_it() \
      LP0(0x71ac, const ASN1_ITEM *, ASIdOrRange_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASRange_new() \
      LP0(0x71b2, ASRange *, ASRange_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASRange_free(___a) \
      LP1NR(0x71b8, ASRange_free , ASRange *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ASRange(___a, ___in, ___len) \
      LP3(0x71be, ASRange *, d2i_ASRange , ASRange **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ASRange(___a, ___out) \
      LP2(0x71c4, int, i2d_ASRange , ASRange *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASRange_it() \
      LP0(0x71ca, const ASN1_ITEM *, ASRange_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IPAddressChoice_new() \
      LP0(0x71d0, IPAddressChoice *, IPAddressChoice_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IPAddressChoice_free(___a) \
      LP1NR(0x71d6, IPAddressChoice_free , IPAddressChoice *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_IPAddressChoice(___a, ___in, ___len) \
      LP3(0x71dc, IPAddressChoice *, d2i_IPAddressChoice , IPAddressChoice **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_IPAddressChoice(___a, ___out) \
      LP2(0x71e2, int, i2d_IPAddressChoice , IPAddressChoice *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IPAddressChoice_it() \
      LP0(0x71e8, const ASN1_ITEM *, IPAddressChoice_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IPAddressFamily_new() \
      LP0(0x71ee, IPAddressFamily *, IPAddressFamily_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IPAddressFamily_free(___a) \
      LP1NR(0x71f4, IPAddressFamily_free , IPAddressFamily *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_IPAddressFamily(___a, ___in, ___len) \
      LP3(0x71fa, IPAddressFamily *, d2i_IPAddressFamily , IPAddressFamily **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_IPAddressFamily(___a, ___out) \
      LP2(0x7200, int, i2d_IPAddressFamily , IPAddressFamily *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IPAddressFamily_it() \
      LP0(0x7206, const ASN1_ITEM *, IPAddressFamily_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IPAddressOrRange_new() \
      LP0(0x720c, IPAddressOrRange *, IPAddressOrRange_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IPAddressOrRange_free(___a) \
      LP1NR(0x7212, IPAddressOrRange_free , IPAddressOrRange *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_IPAddressOrRange(___a, ___in, ___len) \
      LP3(0x7218, IPAddressOrRange *, d2i_IPAddressOrRange , IPAddressOrRange **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_IPAddressOrRange(___a, ___out) \
      LP2(0x721e, int, i2d_IPAddressOrRange , IPAddressOrRange *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IPAddressOrRange_it() \
      LP0(0x7224, const ASN1_ITEM *, IPAddressOrRange_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_STRING_get0_data(___x) \
      LP1(0x722a, const unsigned char *, ASN1_STRING_get0_data , const ASN1_STRING *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_notBefore(___x) \
      LP1(0x7230, const ASN1_TIME *, X509_get0_notBefore , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_notAfter(___x) \
      LP1(0x7236, const ASN1_TIME *, X509_get0_notAfter , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get0_lastUpdate(___crl) \
      LP1(0x723c, const ASN1_TIME *, X509_CRL_get0_lastUpdate , const X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_get0_nextUpdate(___crl) \
      LP1(0x7242, const ASN1_TIME *, X509_CRL_get0_nextUpdate , const X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_uni2utf8(___uni, ___unilen) \
      LP2(0x7248, char *, OPENSSL_uni2utf8 , const unsigned char *, ___uni, a0, int, ___unilen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE(___ctx, ___log_store) \
      LP2NR(0x724e, CT_POLICY_EVAL_CTX_set_shared_CTLOG_STORE , CT_POLICY_EVAL_CTX *, ___ctx, a0, CTLOG_STORE *, ___log_store, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CT_POLICY_EVAL_CTX_set1_cert(___ctx, ___cert) \
      LP2(0x7254, int, CT_POLICY_EVAL_CTX_set1_cert , CT_POLICY_EVAL_CTX *, ___ctx, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CT_POLICY_EVAL_CTX_set1_issuer(___ctx, ___issuer) \
      LP2(0x725a, int, CT_POLICY_EVAL_CTX_set1_issuer , CT_POLICY_EVAL_CTX *, ___ctx, a0, X509 *, ___issuer, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECPARAMETERS_new() \
      LP0(0x7260, ECPARAMETERS *, ECPARAMETERS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECPARAMETERS_free(___a) \
      LP1NR(0x7266, ECPARAMETERS_free , ECPARAMETERS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_get_new_index() \
      LP0(0x726c, int, BIO_get_new_index ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set1_tls_encodedpoint(___pkey, ___pt, ___ptlen) \
      LP3(0x7272, int, EVP_PKEY_set1_tls_encodedpoint , EVP_PKEY *, ___pkey, a0, const unsigned char *, ___pt, a1, size_t, ___ptlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get1_tls_encodedpoint(___pkey, ___ppt) \
      LP2(0x7278, size_t, EVP_PKEY_get1_tls_encodedpoint , EVP_PKEY *, ___pkey, a0, unsigned char **, ___ppt, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPID_set_by_name(___respid, ___cert) \
      LP2(0x727e, int, OCSP_RESPID_set_by_name , OCSP_RESPID *, ___respid, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPID_set_by_key(___respid, ___cert) \
      LP2(0x7284, int, OCSP_RESPID_set_by_key , OCSP_RESPID *, ___respid, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPID_match(___respid, ___cert) \
      LP2(0x728a, int, OCSP_RESPID_match , OCSP_RESPID *, ___respid, a0, X509 *, ___cert, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_friendlyname_utf8(___bag, ___name, ___namelen) \
      LP3(0x7290, int, PKCS12_add_friendlyname_utf8 , PKCS12_SAFEBAG *, ___bag, a0, const char *, ___name, a1, int, ___namelen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_key_gen_utf8(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type) \
      LP9(0x7296, int, PKCS12_key_gen_utf8 , const char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___id, d2, int, ___iter, d3, int, ___n, d4, unsigned char *, ___out, a2, const EVP_MD *, ___md_type, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_utf82uni(___asc, ___asclen, ___uni, ___unilen) \
      LP4(0x729c, unsigned char *, OPENSSL_utf82uni , const char *, ___asc, a0, int, ___asclen, d0, unsigned char **, ___uni, a1, int *, ___unilen, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get0_cipher(___s) \
      LP1(0x72a2, const SSL_CIPHER *, SSL_SESSION_get0_cipher , const SSL_SESSION *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_set1_id(___s, ___sid, ___sid_len) \
      LP3(0x72a8, int, SSL_SESSION_set1_id , SSL_SESSION *, ___s, a0, const unsigned char *, ___sid, a1, unsigned int, ___sid_len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get0_id_context(___s, ___len) \
      LP2(0x72ae, const unsigned char *, SSL_SESSION_get0_id_context , const SSL_SESSION *, ___s, a0, unsigned int *, ___len, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_STATUS_INFO_get0_text(___a) \
      LP1(0x72b4, const STACK_OF(ASN1_UTF8STRING) *, TS_STATUS_INFO_get0_text , const TS_STATUS_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_SIG_getm(___sig, ___palg, ___pdigest) \
      LP3NR(0x72ba, X509_SIG_getm , X509_SIG *, ___sig, a0, X509_ALGOR **, ___palg, a1, ASN1_OCTET_STRING **, ___pdigest, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_serialNumber(___x) \
      LP1(0x72c0, const ASN1_INTEGER *, X509_get0_serialNumber , const X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CT_POLICY_EVAL_CTX_get_time(___ctx) \
      LP1(0x72c6, uint64_t, CT_POLICY_EVAL_CTX_get_time , const CT_POLICY_EVAL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CT_POLICY_EVAL_CTX_set_time(___ctx, ___time_in_ms) \
      LP2NR(0x72cc, CT_POLICY_EVAL_CTX_set_time , CT_POLICY_EVAL_CTX *, ___ctx, a0, uint64_t, ___time_in_ms, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_check_params(___dh, ___ret) \
      LP2(0x72d2, int, DH_check_params , const DH *, ___dh, a0, int *, ___ret, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_COMP_get0_name(___comp) \
      LP1(0x72d8, const char *, SSL_COMP_get0_name , const SSL_COMP *, ___comp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_COMP_get_id(___comp) \
      LP1(0x72de, int, SSL_COMP_get_id , const SSL_COMP *, ___comp, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get_time(___param) \
      LP1(0x72e4, time_t, X509_VERIFY_PARAM_get_time , const X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_set_inh_flags(___param, ___flags) \
      LP2(0x72ea, int, X509_VERIFY_PARAM_set_inh_flags , X509_VERIFY_PARAM *, ___param, a0, uint32_t, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get_inh_flags(___param) \
      LP1(0x72f0, uint32_t, X509_VERIFY_PARAM_get_inh_flags , const X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_secure_clear_free(___ptr, ___num, ___file, ___line) \
      LP4NR(0x72f6, CRYPTO_secure_clear_free , void *, ___ptr, a0, size_t, ___num, d0, const char *, ___file, a1, int, ___line, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set1_engine(___pkey, ___e) \
      LP2(0x72fc, int, EVP_PKEY_set1_engine , EVP_PKEY *, ___pkey, a0, ENGINE *, ___e, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_client_ciphers(___s) \
      LP1(0x7302, STACK_OF(SSL_CIPHER) *, SSL_get_client_ciphers , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_standard_name(___c) \
      LP1(0x7308, const char *, SSL_CIPHER_standard_name , const SSL_CIPHER *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_verified_chain(___s) \
      LP1(0x730e, STACK_OF(X509) *, SSL_get0_verified_chain , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_COMP_set0_compression_methods(___meths) \
      LP1(0x7314, STACK_OF(SSL_COMP) *, SSL_COMP_set0_compression_methods , STACK_OF(SSL_COMP) *, ___meths, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set1_cert_store(___a, ___b) \
      LP2NR(0x7320, SSL_CTX_set1_cert_store , SSL_CTX *, ___a, a0, X509_STORE *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DTLS_get_data_mtu(___s) \
      LP1(0x7326, size_t, DTLS_get_data_mtu , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_read_ex(___ssl, ___buf, ___num, ___readbytes) \
      LP4(0x732c, int, SSL_read_ex , SSL *, ___ssl, a0, void *, ___buf, a1, size_t, ___num, d0, size_t *, ___readbytes, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_peek_ex(___ssl, ___buf, ___num, ___readbytes) \
      LP4(0x7332, int, SSL_peek_ex , SSL *, ___ssl, a0, void *, ___buf, a1, size_t, ___num, d0, size_t *, ___readbytes, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_write_ex(___s, ___buf, ___num, ___written) \
      LP4(0x7338, int, SSL_write_ex , SSL *, ___s, a0, const void *, ___buf, a1, size_t, ___num, d0, size_t *, ___written, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_keylog_callback(___ctx, ___cb) \
      LP2NR(0x733e, SSL_CTX_set_keylog_callback , SSL_CTX *, ___ctx, a0, SSL_CTX_keylog_cb_func, ___cb, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_keylog_callback(___ctx) \
      LP1(0x7344, SSL_CTX_keylog_cb_func, SSL_CTX_get_keylog_callback , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_peer_signature_type_nid(___s, ___pnid) \
      LP2(0x734a, int, SSL_get_peer_signature_type_nid , const SSL *, ___s, a0, int *, ___pnid, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_key_update(___s, ___updatetype) \
      LP2(0x7350, int, SSL_key_update , SSL *, ___s, a0, int, ___updatetype, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_key_update_type(___s) \
      LP1(0x7356, int, SSL_get_key_update_type , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_bytes_to_cipher_list(___s, ___bytes, ___len, ___isv2format, ___sk, ___scsvs) \
      LP6(0x735c, int, SSL_bytes_to_cipher_list , SSL *, ___s, a0, const unsigned char *, ___bytes, a1, size_t, ___len, d0, int, ___isv2format, d1, STACK_OF(SSL_CIPHER) **, ___sk, a2, STACK_OF(SSL_CIPHER) **, ___scsvs, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_client_hello_get0_compression_methods(___s, ___out) \
      LP2(0x7362, size_t, SSL_client_hello_get0_compression_methods , SSL *, ___s, a0, const unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_client_hello_get0_ciphers(___s, ___out) \
      LP2(0x7368, size_t, SSL_client_hello_get0_ciphers , SSL *, ___s, a0, const unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_client_hello_get0_ext(___s, ___type, ___out, ___outlen) \
      LP4(0x736e, int, SSL_client_hello_get0_ext , SSL *, ___s, a0, unsigned int, ___type, d0, const unsigned char **, ___out, a1, size_t *, ___outlen, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_client_hello_get0_session_id(___s, ___out) \
      LP2(0x7374, size_t, SSL_client_hello_get0_session_id , SSL *, ___s, a0, const unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_client_hello_get0_random(___s, ___out) \
      LP2(0x737a, size_t, SSL_client_hello_get0_random , SSL *, ___s, a0, const unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_client_hello_cb(___c, ___cb, ___arg) \
      LP3NR(0x7380, SSL_CTX_set_client_hello_cb , SSL_CTX *, ___c, a0, SSL_client_hello_cb_fn, ___cb, d0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_client_hello_get0_legacy_version(___s) \
      LP1(0x7386, unsigned int, SSL_client_hello_get0_legacy_version , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_client_hello_isv2(___s) \
      LP1(0x738c, int, SSL_client_hello_isv2 , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_max_early_data(___s, ___max_early_data) \
      LP2(0x7392, int, SSL_set_max_early_data , SSL *, ___s, a0, uint32_t, ___max_early_data, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_max_early_data(___ctx, ___max_early_data) \
      LP2(0x7398, int, SSL_CTX_set_max_early_data , SSL_CTX *, ___ctx, a0, uint32_t, ___max_early_data, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_max_early_data(___s) \
      LP1(0x739e, uint32_t, SSL_get_max_early_data , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_max_early_data(___ctx) \
      LP1(0x73a4, uint32_t, SSL_CTX_get_max_early_data , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_write_early_data(___s, ___buf, ___num, ___written) \
      LP4(0x73aa, int, SSL_write_early_data , SSL *, ___s, a0, const void *, ___buf, a1, size_t, ___num, d0, size_t *, ___written, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_read_early_data(___s, ___buf, ___num, ___readbytes) \
      LP4(0x73b0, int, SSL_read_early_data , SSL *, ___s, a0, void *, ___buf, a1, size_t, ___num, d0, size_t *, ___readbytes, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_early_data_status(___s) \
      LP1(0x73b6, int, SSL_get_early_data_status , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get_max_early_data(___s) \
      LP1(0x73bc, uint32_t, SSL_SESSION_get_max_early_data , const SSL_SESSION *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_add1_to_CA_list(___ssl, ___x) \
      LP2(0x73c2, int, SSL_add1_to_CA_list , SSL *, ___ssl, a0, const X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set0_CA_list(___s, ___name_list) \
      LP2NR(0x73c8, SSL_set0_CA_list , SSL *, ___s, a0, STACK_OF(X509_NAME) *, ___name_list, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set0_CA_list(___ctx, ___name_list) \
      LP2NR(0x73ce, SSL_CTX_set0_CA_list , SSL_CTX *, ___ctx, a0, STACK_OF(X509_NAME) *, ___name_list, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_CA_list(___s) \
      LP1(0x73d4, const STACK_OF(X509_NAME) *, SSL_get0_CA_list , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_peer_CA_list(___s) \
      LP1(0x73da, const STACK_OF(X509_NAME) *, SSL_get0_peer_CA_list , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_add1_to_CA_list(___ctx, ___x) \
      LP2(0x73e0, int, SSL_CTX_add1_to_CA_list , SSL_CTX *, ___ctx, a0, const X509 *, ___x, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get0_CA_list(___ctx) \
      LP1(0x73e6, const STACK_OF(X509_NAME) *, SSL_CTX_get0_CA_list , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_add_custom_ext(___ctx, ___ext_type, ___context, ___add_cb, ___free_cb, ___add_arg, ___parse_cb, ___parse_arg) \
      LP8(0x73ec, int, SSL_CTX_add_custom_ext , SSL_CTX *, ___ctx, a0, unsigned int, ___ext_type, d0, unsigned int, ___context, d1, SSL_custom_ext_add_cb_ex, ___add_cb, d2, SSL_custom_ext_free_cb_ex, ___free_cb, d3, void *, ___add_arg, a1, SSL_custom_ext_parse_cb_ex, ___parse_cb, d4, void *, ___parse_arg, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_is_resumable(___s) \
      LP1(0x73f2, int, SSL_SESSION_is_resumable , const SSL_SESSION *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_record_padding_callback(___ctx, ___cb) \
      LP2NRFP(0x73f8, SSL_CTX_set_record_padding_callback , SSL_CTX *, ___ctx, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, size_t (*__fpt)(SSL *ssl,int type,size_t len,void *arg), 0, 0, 0, 0, 0, 0)

#define SSL_set_record_padding_callback(___ssl, ___cb) \
      LP2NRFP(0x73fe, SSL_set_record_padding_callback , SSL *, ___ssl, a0, __fpt, ___cb, a1,\
      , AMISSL_BASE_NAME, size_t (*__fpt)(SSL *ssl,int type,size_t len,void *arg), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_block_padding(___ctx, ___block_size) \
      LP2(0x7404, int, SSL_CTX_set_block_padding , SSL_CTX *, ___ctx, a0, size_t, ___block_size, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_record_padding_callback_arg(___ctx) \
      LP1(0x740a, void *, SSL_CTX_get_record_padding_callback_arg , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_record_padding_callback_arg(___ssl) \
      LP1(0x7410, void *, SSL_get_record_padding_callback_arg , SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_block_padding(___ssl, ___block_size) \
      LP2(0x7416, int, SSL_set_block_padding , SSL *, ___ssl, a0, size_t, ___block_size, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_record_padding_callback_arg(___ssl, ___arg) \
      LP2NR(0x741c, SSL_set_record_padding_callback_arg , SSL *, ___ssl, a0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_record_padding_callback_arg(___ctx, ___arg) \
      LP2NR(0x7422, SSL_CTX_set_record_padding_callback_arg , SSL_CTX *, ___ctx, a0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_serverinfo_ex(___ctx, ___version, ___serverinfo, ___serverinfo_length) \
      LP4(0x7428, int, SSL_CTX_use_serverinfo_ex , SSL_CTX *, ___ctx, a0, unsigned int, ___version, d0, const unsigned char *, ___serverinfo, a1, size_t, ___serverinfo_length, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_client_hello_get1_extensions_present(___s, ___out, ___outlen) \
      LP3(0x742e, int, SSL_client_hello_get1_extensions_present , SSL *, ___s, a0, int **, ___out, a1, size_t *, ___outlen, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_psk_find_session_callback(___s, ___cb) \
      LP2NR(0x7434, SSL_set_psk_find_session_callback , SSL *, ___s, a0, SSL_psk_find_session_cb_func, ___cb, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_psk_use_session_callback(___s, ___cb) \
      LP2NR(0x743a, SSL_set_psk_use_session_callback , SSL *, ___s, a0, SSL_psk_use_session_cb_func, ___cb, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_psk_use_session_callback(___ctx, ___cb) \
      LP2NR(0x7440, SSL_CTX_set_psk_use_session_callback , SSL_CTX *, ___ctx, a0, SSL_psk_use_session_cb_func, ___cb, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_psk_find_session_callback(___ctx, ___cb) \
      LP2NR(0x7446, SSL_CTX_set_psk_find_session_callback , SSL_CTX *, ___ctx, a0, SSL_psk_find_session_cb_func, ___cb, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_handshake_digest(___c) \
      LP1(0x744c, const EVP_MD *, SSL_CIPHER_get_handshake_digest , const SSL_CIPHER *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_set1_master_key(___sess, ___in, ___len) \
      LP3(0x7452, int, SSL_SESSION_set1_master_key , SSL_SESSION *, ___sess, a0, const unsigned char *, ___in, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_set_cipher(___s, ___cipher) \
      LP2(0x7458, int, SSL_SESSION_set_cipher , SSL_SESSION *, ___s, a0, const SSL_CIPHER *, ___cipher, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_set_protocol_version(___s, ___version) \
      LP2(0x745e, int, SSL_SESSION_set_protocol_version , SSL_SESSION *, ___s, a0, int, ___version, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_cipher_name(___rfc_name) \
      LP1(0x7464, const char *, OPENSSL_cipher_name , const char *, ___rfc_name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_alloc_buffers(___ssl) \
      LP1(0x746a, int, SSL_alloc_buffers , SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_free_buffers(___ssl) \
      LP1(0x7470, int, SSL_free_buffers , SSL *, ___ssl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_dup(___src) \
      LP1(0x7476, SSL_SESSION *, SSL_SESSION_dup , SSL_SESSION *, ___src, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_pending_cipher(___s) \
      LP1(0x747c, const SSL_CIPHER *, SSL_get_pending_cipher , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CIPHER_get_protocol_id(___c) \
      LP1(0x7482, uint16_t, SSL_CIPHER_get_protocol_id , const SSL_CIPHER *, ___c, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_set_max_early_data(___s, ___max_early_data) \
      LP2(0x7488, int, SSL_SESSION_set_max_early_data , SSL_SESSION *, ___s, a0, uint32_t, ___max_early_data, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_set1_alpn_selected(___s, ___alpn, ___len) \
      LP3(0x748e, int, SSL_SESSION_set1_alpn_selected , SSL_SESSION *, ___s, a0, const unsigned char *, ___alpn, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_set1_hostname(___s, ___hostname) \
      LP2(0x7494, int, SSL_SESSION_set1_hostname , SSL_SESSION *, ___s, a0, const char *, ___hostname, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get0_alpn_selected(___s, ___alpn, ___len) \
      LP3NR(0x749a, SSL_SESSION_get0_alpn_selected , const SSL_SESSION *, ___s, a0, const unsigned char **, ___alpn, a1, size_t *, ___len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DTLS_set_timer_cb(___s, ___cb) \
      LP2NR(0x74a0, DTLS_set_timer_cb , SSL *, ___s, a0, DTLS_timer_cb, ___cb, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_tlsext_max_fragment_length(___ctx, ___mode) \
      LP2(0x74a6, int, SSL_CTX_set_tlsext_max_fragment_length , SSL_CTX *, ___ctx, a0, uint8_t, ___mode, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_tlsext_max_fragment_length(___ssl, ___mode) \
      LP2(0x74ac, int, SSL_set_tlsext_max_fragment_length , SSL *, ___ssl, a0, uint8_t, ___mode, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get_max_fragment_length(___sess) \
      LP1(0x74b2, uint8_t, SSL_SESSION_get_max_fragment_length , const SSL_SESSION *, ___sess, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_stateless(___s) \
      LP1(0x74b8, int, SSL_stateless , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_verify_client_post_handshake(___s) \
      LP1(0x74be, int, SSL_verify_client_post_handshake , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_post_handshake_auth(___s, ___val) \
      LP2NR(0x74c4, SSL_set_post_handshake_auth , SSL *, ___s, a0, int, ___val, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_export_keying_material_early(___s, ___out, ___olen, ___label, ___llen, ___context, ___contextlen) \
      LP7(0x74ca, int, SSL_export_keying_material_early , SSL *, ___s, a0, unsigned char *, ___out, a1, size_t, ___olen, d0, const char *, ___label, a2, size_t, ___llen, d1, const unsigned char *, ___context, a3, size_t, ___contextlen, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_use_cert_and_key(___ctx, ___x509, ___privatekey, ___chain, ___override) \
      LP5(0x74d0, int, SSL_CTX_use_cert_and_key , SSL_CTX *, ___ctx, a0, X509 *, ___x509, a1, EVP_PKEY *, ___privatekey, a2, STACK_OF(X509) *, ___chain, a3, int, ___override, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_use_cert_and_key(___ssl, ___x509, ___privatekey, ___chain, ___override) \
      LP5(0x74d6, int, SSL_use_cert_and_key , SSL *, ___ssl, a0, X509 *, ___x509, a1, EVP_PKEY *, ___privatekey, a2, STACK_OF(X509) *, ___chain, a3, int, ___override, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_get0_ticket_appdata(___ss, ___data, ___len) \
      LP3(0x74dc, int, SSL_SESSION_get0_ticket_appdata , SSL_SESSION *, ___ss, a0, void **, ___data, a1, size_t *, ___len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_SESSION_set1_ticket_appdata(___ss, ___data, ___len) \
      LP3(0x74e2, int, SSL_SESSION_set1_ticket_appdata , SSL_SESSION *, ___ss, a0, const void *, ___data, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_session_ticket_cb(___ctx, ___gen_cb, ___dec_cb, ___arg) \
      LP4(0x74e8, int, SSL_CTX_set_session_ticket_cb , SSL_CTX *, ___ctx, a0, SSL_CTX_generate_session_ticket_fn, ___gen_cb, d0, SSL_CTX_decrypt_session_ticket_fn, ___dec_cb, d1, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_stateless_cookie_generate_cb(___ctx, ___gen_stateless_cookie_cb) \
      LP2NRFP(0x74ee, SSL_CTX_set_stateless_cookie_generate_cb , SSL_CTX *, ___ctx, a0, __fpt, ___gen_stateless_cookie_cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(SSL *ssl,unsigned char *cookie,size_t *cookie_len), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_stateless_cookie_verify_cb(___ctx, ___verify_stateless_cookie_cb) \
      LP2NRFP(0x74f4, SSL_CTX_set_stateless_cookie_verify_cb , SSL_CTX *, ___ctx, a0, __fpt, ___verify_stateless_cookie_cb, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(SSL *ssl,const unsigned char *cookie,size_t cookie_len), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_ciphersuites(___ctx, ___str) \
      LP2(0x74fa, int, SSL_CTX_set_ciphersuites , SSL_CTX *, ___ctx, a0, const char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_ciphersuites(___s, ___str) \
      LP2(0x7500, int, SSL_set_ciphersuites , SSL *, ___s, a0, const char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_num_tickets(___s, ___num_tickets) \
      LP2(0x7506, int, SSL_set_num_tickets , SSL *, ___s, a0, size_t, ___num_tickets, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_num_tickets(___ctx) \
      LP1(0x750c, size_t, SSL_CTX_get_num_tickets , SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_num_tickets(___s) \
      LP1(0x7512, size_t, SSL_get_num_tickets , SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_num_tickets(___ctx, ___num_tickets) \
      LP2(0x7518, int, SSL_CTX_set_num_tickets , SSL_CTX *, ___ctx, a0, size_t, ___num_tickets, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_allow_early_data_cb(___ctx, ___cb, ___arg) \
      LP3NR(0x751e, SSL_CTX_set_allow_early_data_cb , SSL_CTX *, ___ctx, a0, SSL_allow_early_data_cb_fn, ___cb, d0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_allow_early_data_cb(___s, ___cb, ___arg) \
      LP3NR(0x7524, SSL_set_allow_early_data_cb , SSL *, ___s, a0, SSL_allow_early_data_cb_fn, ___cb, d0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_recv_max_early_data(___s, ___recv_max_early_data) \
      LP2(0x752a, int, SSL_set_recv_max_early_data , SSL *, ___s, a0, uint32_t, ___recv_max_early_data, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_recv_max_early_data(___s) \
      LP1(0x7530, uint32_t, SSL_get_recv_max_early_data , const SSL *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_get_recv_max_early_data(___ctx) \
      LP1(0x7536, uint32_t, SSL_CTX_get_recv_max_early_data , const SSL_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_recv_max_early_data(___ctx, ___recv_max_early_data) \
      LP2(0x753c, int, SSL_CTX_set_recv_max_early_data , SSL_CTX *, ___ctx, a0, uint32_t, ___recv_max_early_data, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_post_handshake_auth(___ctx, ___val) \
      LP2NR(0x7542, SSL_CTX_set_post_handshake_auth , SSL_CTX *, ___ctx, a0, int, ___val, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_signature_type_nid(___s, ___pnid) \
      LP2(0x7548, int, SSL_get_signature_type_nid , const SSL *, ___s, a0, int *, ___pnid, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IPAddressRange_free(___a) \
      LP1NR(0x754e, IPAddressRange_free , IPAddressRange *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TLS_FEATURE_new() \
      LP0(0x7554, TLS_FEATURE *, TLS_FEATURE_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_f_linebuffer() \
      LP0(0x7560, const BIO_METHOD *, BIO_f_linebuffer ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IPAddressRange_new() \
      LP0(0x756c, IPAddressRange *, IPAddressRange_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define IPAddressRange_it() \
      LP0(0x7572, const ASN1_ITEM *, IPAddressRange_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_IPAddressRange(___a, ___in, ___len) \
      LP3(0x757e, IPAddressRange *, d2i_IPAddressRange , IPAddressRange **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TLS_FEATURE_free(___a) \
      LP1NR(0x7590, TLS_FEATURE_free , TLS_FEATURE *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_RSA_OAEP_PARAMS(___a, ___out) \
      LP2(0x7596, int, i2d_RSA_OAEP_PARAMS , RSA_OAEP_PARAMS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_IPAddressRange(___a, ___out) \
      LP2(0x75a2, int, i2d_IPAddressRange , IPAddressRange *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_OBJECT_new() \
      LP0(0x75a8, X509_OBJECT *, X509_OBJECT_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_get_attr(___bag, ___attr_nid) \
      LP2(0x75ae, ASN1_TYPE *, PKCS12_get_attr , const PKCS12_SAFEBAG *, ___bag, a0, int, ___attr_nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECPKPARAMETERS_free(___a) \
      LP1NR(0x75b4, ECPKPARAMETERS_free , ECPKPARAMETERS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECPKPARAMETERS_new() \
      LP0(0x75ba, ECPKPARAMETERS *, ECPKPARAMETERS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_ITEM_lookup(___name) \
      LP1(0x75c0, const ASN1_ITEM *, ASN1_ITEM_lookup , const char *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_ITEM_get(___i) \
      LP1(0x75c6, const ASN1_ITEM *, ASN1_ITEM_get , size_t, ___i, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_read_ex(___b, ___data, ___dlen, ___readbytes) \
      LP4(0x75cc, int, BIO_read_ex , BIO *, ___b, a0, void *, ___data, a1, size_t, ___dlen, d0, size_t *, ___readbytes, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_set_callback_ex(___b, ___callback) \
      LP2NR(0x75d2, BIO_set_callback_ex , BIO *, ___b, a0, BIO_callback_fn_ex, ___callback, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_get_callback_ex(___b) \
      LP1(0x75d8, BIO_callback_fn_ex, BIO_get_callback_ex , const BIO *, ___b, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_meth_set_read_ex(___biom, ___bread) \
      LP2FP(0x75de, int, BIO_meth_set_read_ex , BIO_METHOD *, ___biom, a0, __fpt, ___bread, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(BIO *,char *,size_t,size_t *), 0, 0, 0, 0, 0, 0)

#define BIO_meth_get_read_ex(___biom) \
      LP1FR(0x75e4, __fpr, BIO_meth_get_read_ex , const BIO_METHOD *, ___biom, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(BIO *, char *, size_t, size_t *), 0, 0, 0, 0, 0, 0)

#define BIO_write_ex(___b, ___data, ___dlen, ___written) \
      LP4(0x75ea, int, BIO_write_ex , BIO *, ___b, a0, const void *, ___data, a1, size_t, ___dlen, d0, size_t *, ___written, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_meth_get_write_ex(___biom) \
      LP1FR(0x75f0, __fpr, BIO_meth_get_write_ex , const BIO_METHOD *, ___biom, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(BIO *, const char *, size_t, size_t *), 0, 0, 0, 0, 0, 0)

#define BIO_meth_set_write_ex(___biom, ___bwrite) \
      LP2FP(0x75f6, int, BIO_meth_set_write_ex , BIO_METHOD *, ___biom, a0, __fpt, ___bwrite, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(BIO *,const char *,size_t,size_t *), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_md(___ctx, ___optype, ___cmd, ___md) \
      LP4(0x75fc, int, EVP_PKEY_CTX_md , EVP_PKEY_CTX *, ___ctx, a0, int, ___optype, d0, int, ___cmd, d1, const char *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_pkey_ctx_ctrl(___ctx, ___optype, ___cmd, ___p1, ___p2) \
      LP5(0x7602, int, RSA_pkey_ctx_ctrl , EVP_PKEY_CTX *, ___ctx, a0, int, ___optype, d0, int, ___cmd, d1, int, ___p1, d2, void *, ___p2, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_method_set_ex_data(___method, ___idx, ___data) \
      LP3(0x7608, int, UI_method_set_ex_data , UI_METHOD *, ___method, a0, int, ___idx, d0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_method_get_ex_data(___method, ___idx) \
      LP2(0x760e, const void *, UI_method_get_ex_data , const UI_METHOD *, ___method, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_UTIL_wrap_read_pem_callback(___cb, ___rwflag) \
      LP2(0x7614, UI_METHOD *, UI_UTIL_wrap_read_pem_callback , pem_password_cb *, ___cb, a0, int, ___rwflag, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get0_poly1305(___pkey, ___len) \
      LP2(0x761a, const unsigned char *, EVP_PKEY_get0_poly1305 , const EVP_PKEY *, ___pkey, a0, size_t *, ___len, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get0_siphash(___pkey, ___len) \
      LP2(0x7620, const unsigned char *, EVP_PKEY_get0_siphash , const EVP_PKEY *, ___pkey, a0, size_t *, ___len, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_256_ofb() \
      LP0(0x7626, const EVP_CIPHER *, EVP_aria_256_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_256_cfb128() \
      LP0(0x762c, const EVP_CIPHER *, EVP_aria_256_cfb128 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_128_cfb1() \
      LP0(0x7632, const EVP_CIPHER *, EVP_aria_128_cfb1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_128_ecb() \
      LP0(0x7638, const EVP_CIPHER *, EVP_aria_128_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_128_cfb128() \
      LP0(0x763e, const EVP_CIPHER *, EVP_aria_128_cfb128 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_192_ecb() \
      LP0(0x7644, const EVP_CIPHER *, EVP_aria_192_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_128_cbc() \
      LP0(0x764a, const EVP_CIPHER *, EVP_aria_128_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_192_ofb() \
      LP0(0x7650, const EVP_CIPHER *, EVP_aria_192_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_192_cbc() \
      LP0(0x7656, const EVP_CIPHER *, EVP_aria_192_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_192_cfb1() \
      LP0(0x765c, const EVP_CIPHER *, EVP_aria_192_cfb1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_128_cfb8() \
      LP0(0x7662, const EVP_CIPHER *, EVP_aria_128_cfb8 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_256_cfb1() \
      LP0(0x7668, const EVP_CIPHER *, EVP_aria_256_cfb1 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_192_cfb8() \
      LP0(0x766e, const EVP_CIPHER *, EVP_aria_192_cfb8 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_256_cfb8() \
      LP0(0x7674, const EVP_CIPHER *, EVP_aria_256_cfb8 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_256_cbc() \
      LP0(0x767a, const EVP_CIPHER *, EVP_aria_256_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_128_ofb() \
      LP0(0x7680, const EVP_CIPHER *, EVP_aria_128_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_192_cfb128() \
      LP0(0x7686, const EVP_CIPHER *, EVP_aria_192_cfb128 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_256_ecb() \
      LP0(0x768c, const EVP_CIPHER *, EVP_aria_256_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_256_ctr() \
      LP0(0x7692, const EVP_CIPHER *, EVP_aria_256_ctr ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_128_ctr() \
      LP0(0x7698, const EVP_CIPHER *, EVP_aria_128_ctr ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_192_ctr() \
      LP0(0x769e, const EVP_CIPHER *, EVP_aria_192_ctr ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_null() \
      LP0(0x76a4, const UI_METHOD *, UI_null ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_KEY_get0_engine(___eckey) \
      LP1(0x76aa, ENGINE *, EC_KEY_get0_engine , const EC_KEY *, ___eckey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define INT32_it() \
      LP0(0x76b0, const ASN1_ITEM *, INT32_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UINT64_it() \
      LP0(0x76b6, const ASN1_ITEM *, UINT64_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ZINT32_it() \
      LP0(0x76bc, const ASN1_ITEM *, ZINT32_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ZUINT64_it() \
      LP0(0x76c2, const ASN1_ITEM *, ZUINT64_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define INT64_it() \
      LP0(0x76c8, const ASN1_ITEM *, INT64_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ZUINT32_it() \
      LP0(0x76ce, const ASN1_ITEM *, ZUINT32_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UINT32_it() \
      LP0(0x76d4, const ASN1_ITEM *, UINT32_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ZINT64_it() \
      LP0(0x76da, const ASN1_ITEM *, ZINT64_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_lookup_ex(___host, ___service, ___lookup_type, ___family, ___socktype, ___protocol, ___res) \
      LP7(0x76e0, int, BIO_lookup_ex , const char *, ___host, a0, const char *, ___service, a1, int, ___lookup_type, d0, int, ___family, d1, int, ___socktype, d2, int, ___protocol, d3, BIO_ADDRINFO **, ___res, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_print_ex(___out, ___x, ___nmflag) \
      LP3(0x76e6, int, X509_CRL_print_ex , BIO *, ___out, a0, X509_CRL *, ___x, a1, unsigned long, ___nmflag, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_SIG_INFO_get(___siginf, ___mdnid, ___pknid, ___secbits, ___flags) \
      LP5(0x76ec, int, X509_SIG_INFO_get , const X509_SIG_INFO *, ___siginf, a0, int *, ___mdnid, a1, int *, ___pknid, a2, int *, ___secbits, a3, uint32_t *, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get_signature_info(___x, ___mdnid, ___pknid, ___secbits, ___flags) \
      LP5(0x76f2, int, X509_get_signature_info , X509 *, ___x, a0, int *, ___mdnid, a1, int *, ___pknid, a2, int *, ___secbits, a3, uint32_t *, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_SIG_INFO_set(___siginf, ___mdnid, ___pknid, ___secbits, ___flags) \
      LP5NR(0x76f8, X509_SIG_INFO_set , X509_SIG_INFO *, ___siginf, a0, int, ___mdnid, d0, int, ___pknid, d1, int, ___secbits, d2, uint32_t, ___flags, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_CERT_ID_V2_free(___a) \
      LP1NR(0x76fe, ESS_CERT_ID_V2_free , ESS_CERT_ID_V2 *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_SIGNING_CERT_V2_new() \
      LP0(0x7704, ESS_SIGNING_CERT_V2 *, ESS_SIGNING_CERT_V2_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ESS_SIGNING_CERT_V2(___a, ___pp, ___length) \
      LP3(0x770a, ESS_SIGNING_CERT_V2 *, d2i_ESS_SIGNING_CERT_V2 , ESS_SIGNING_CERT_V2 **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ESS_CERT_ID_V2(___a, ___pp) \
      LP2(0x7710, int, i2d_ESS_CERT_ID_V2 , const ESS_CERT_ID_V2 *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_CERT_ID_V2_dup(___a) \
      LP1(0x7716, ESS_CERT_ID_V2 *, ESS_CERT_ID_V2_dup , ESS_CERT_ID_V2 *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_set_ess_cert_id_digest(___ctx, ___md) \
      LP2(0x771c, int, TS_RESP_CTX_set_ess_cert_id_digest , TS_RESP_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ESS_CERT_ID_V2(___a, ___pp, ___length) \
      LP3(0x7722, ESS_CERT_ID_V2 *, d2i_ESS_CERT_ID_V2 , ESS_CERT_ID_V2 **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ESS_SIGNING_CERT_V2(___a, ___pp) \
      LP2(0x7728, int, i2d_ESS_SIGNING_CERT_V2 , const ESS_SIGNING_CERT_V2 *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_CONF_set_ess_cert_id_digest(___conf, ___section, ___ctx) \
      LP3(0x772e, int, TS_CONF_set_ess_cert_id_digest , CONF *, ___conf, a0, const char *, ___section, a1, TS_RESP_CTX *, ___ctx, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_SIGNING_CERT_V2_free(___a) \
      LP1NR(0x7734, ESS_SIGNING_CERT_V2_free , ESS_SIGNING_CERT_V2 *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_SIGNING_CERT_V2_dup(___a) \
      LP1(0x773a, ESS_SIGNING_CERT_V2 *, ESS_SIGNING_CERT_V2_dup , ESS_SIGNING_CERT_V2 *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_CERT_ID_V2_new() \
      LP0(0x7740, ESS_CERT_ID_V2 *, ESS_CERT_ID_V2_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_ex(___bp, ___name, ___header, ___data, ___len, ___flags) \
      LP6(0x7746, int, PEM_read_bio_ex , BIO *, ___bp, a0, char **, ___name, a1, char **, ___header, a2, unsigned char **, ___data, a3, long *, ___len, d0, unsigned int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_bytes_read_bio_secmem(___pdata, ___plen, ___pnm, ___name, ___bp, ___cb, ___u) \
      LP7(0x774c, int, PEM_bytes_read_bio_secmem , unsigned char **, ___pdata, a0, long *, ___plen, a1, char **, ___pnm, a2, const char *, ___name, a3, BIO *, ___bp, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestSign(___ctx, ___sigret, ___siglen, ___tbs, ___tbslen) \
      LP5(0x7752, int, EVP_DigestSign , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___sigret, a1, size_t *, ___siglen, a2, const unsigned char *, ___tbs, a3, size_t, ___tbslen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestVerify(___ctx, ___sigret, ___siglen, ___tbs, ___tbslen) \
      LP5(0x7758, int, EVP_DigestVerify , EVP_MD_CTX *, ___ctx, a0, const unsigned char *, ___sigret, a1, size_t, ___siglen, d0, const unsigned char *, ___tbs, a2, size_t, ___tbslen, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_method_get_data_duplicator(___method) \
      LP1FR(0x775e, __fpr, UI_method_get_data_duplicator , const UI_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, void *(*__fpr)(UI *, void *), 0, 0, 0, 0, 0, 0)

#define UI_method_set_data_duplicator(___method, ___duplicator, ___destructor) \
      LP3FP2(0x7764, int, UI_method_set_data_duplicator , UI_METHOD *, ___method, a0, __fpt1, ___duplicator, a1, __fpt2, ___destructor, a2,\
      , AMISSL_BASE_NAME, void *(*__fpt1)(UI *ui,void *ui_data), void (*__fpt2)(UI *ui,void *ui_data), 0, 0, 0, 0, 0, 0)

#define UI_dup_user_data(___ui, ___user_data) \
      LP2(0x776a, int, UI_dup_user_data , UI *, ___ui, a0, void *, ___user_data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_method_get_data_destructor(___method) \
      LP1FR(0x7770, __fpr, UI_method_get_data_destructor , const UI_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, void (*__fpr)(UI *, void *), 0, 0, 0, 0, 0, 0)

#define ERR_load_strings_const(___str) \
      LP1(0x7776, int, ERR_load_strings_const , const ERR_STRING_DATA *, ___str, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_to_tm(___s, ___tm) \
      LP2(0x777c, int, ASN1_TIME_to_tm , const ASN1_TIME *, ___s, a0, struct tm *, ___tm, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_set_string_X509(___s, ___str) \
      LP2(0x7782, int, ASN1_TIME_set_string_X509 , ASN1_TIME *, ___s, a0, const char *, ___str, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_resp_get1_id(___bs, ___pid, ___pname) \
      LP3(0x7788, int, OCSP_resp_get1_id , const OCSP_BASICRESP *, ___bs, a0, ASN1_OCTET_STRING **, ___pid, a1, X509_NAME **, ___pname, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_register_loader(___loader) \
      LP1(0x778e, int, OSSL_STORE_register_loader , OSSL_STORE_LOADER *, ___loader, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_set_error(___loader, ___error_function) \
      LP2(0x7794, int, OSSL_STORE_LOADER_set_error , OSSL_STORE_LOADER *, ___loader, a0, OSSL_STORE_error_fn, ___error_function, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get0_PKEY(___info) \
      LP1(0x779a, EVP_PKEY *, OSSL_STORE_INFO_get0_PKEY , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get_type(___info) \
      LP1(0x77a0, int, OSSL_STORE_INFO_get_type , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_load_OSSL_STORE_strings() \
      LP0(0x77a6, int, ERR_load_OSSL_STORE_strings ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_free(___loader) \
      LP1NR(0x77ac, OSSL_STORE_LOADER_free , OSSL_STORE_LOADER *, ___loader, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get1_PKEY(___info) \
      LP1(0x77b2, EVP_PKEY *, OSSL_STORE_INFO_get1_PKEY , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_free(___info) \
      LP1NR(0x77b8, OSSL_STORE_INFO_free , OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_set_eof(___loader, ___eof_function) \
      LP2(0x77be, int, OSSL_STORE_LOADER_set_eof , OSSL_STORE_LOADER *, ___loader, a0, OSSL_STORE_eof_fn, ___eof_function, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_new(___e, ___scheme) \
      LP2(0x77c4, OSSL_STORE_LOADER *, OSSL_STORE_LOADER_new , ENGINE *, ___e, a0, const char *, ___scheme, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get0_CERT(___info) \
      LP1(0x77ca, X509 *, OSSL_STORE_INFO_get0_CERT , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_set_close(___loader, ___close_function) \
      LP2(0x77d0, int, OSSL_STORE_LOADER_set_close , OSSL_STORE_LOADER *, ___loader, a0, OSSL_STORE_close_fn, ___close_function, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_new_PARAMS(___params) \
      LP1(0x77d6, OSSL_STORE_INFO *, OSSL_STORE_INFO_new_PARAMS , EVP_PKEY *, ___params, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_new_PKEY(___pkey) \
      LP1(0x77dc, OSSL_STORE_INFO *, OSSL_STORE_INFO_new_PKEY , EVP_PKEY *, ___pkey, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get1_PARAMS(___info) \
      LP1(0x77e2, EVP_PKEY *, OSSL_STORE_INFO_get1_PARAMS , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get1_CRL(___info) \
      LP1(0x77e8, X509_CRL *, OSSL_STORE_INFO_get1_CRL , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_error(___ctx) \
      LP1(0x77ee, int, OSSL_STORE_error , OSSL_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get1_CERT(___info) \
      LP1(0x77f4, X509 *, OSSL_STORE_INFO_get1_CERT , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get0_PARAMS(___info) \
      LP1(0x77fa, EVP_PKEY *, OSSL_STORE_INFO_get0_PARAMS , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_type_string(___type) \
      LP1(0x7800, const char *, OSSL_STORE_INFO_type_string , int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get1_NAME(___info) \
      LP1(0x7806, char *, OSSL_STORE_INFO_get1_NAME , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_set_load(___loader, ___load_function) \
      LP2(0x780c, int, OSSL_STORE_LOADER_set_load , OSSL_STORE_LOADER *, ___loader, a0, OSSL_STORE_load_fn, ___load_function, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_get0_scheme(___loader) \
      LP1(0x7812, const char *, OSSL_STORE_LOADER_get0_scheme , const OSSL_STORE_LOADER *, ___loader, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_open(___uri, ___ui_method, ___ui_data, ___post_process, ___post_process_data) \
      LP5(0x7818, OSSL_STORE_CTX *, OSSL_STORE_open , const char *, ___uri, a0, const UI_METHOD *, ___ui_method, a1, void *, ___ui_data, a2, OSSL_STORE_post_process_info_fn, ___post_process, d0, void *, ___post_process_data, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_close(___ctx) \
      LP1(0x781e, int, OSSL_STORE_close , OSSL_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_new_CERT(___x509) \
      LP1(0x7824, OSSL_STORE_INFO *, OSSL_STORE_INFO_new_CERT , X509 *, ___x509, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get0_CRL(___info) \
      LP1(0x782a, X509_CRL *, OSSL_STORE_INFO_get0_CRL , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_load(___ctx) \
      LP1(0x7830, OSSL_STORE_INFO *, OSSL_STORE_load , OSSL_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get0_NAME(___info) \
      LP1(0x7836, const char *, OSSL_STORE_INFO_get0_NAME , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_unregister_loader(___scheme) \
      LP1(0x783c, OSSL_STORE_LOADER *, OSSL_STORE_unregister_loader , const char *, ___scheme, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_new_CRL(___crl) \
      LP1(0x7842, OSSL_STORE_INFO *, OSSL_STORE_INFO_new_CRL , X509_CRL *, ___crl, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_new_NAME(___name) \
      LP1(0x7848, OSSL_STORE_INFO *, OSSL_STORE_INFO_new_NAME , char *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_eof(___ctx) \
      LP1(0x784e, int, OSSL_STORE_eof , OSSL_STORE_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_set_open(___loader, ___open_function) \
      LP2(0x7854, int, OSSL_STORE_LOADER_set_open , OSSL_STORE_LOADER *, ___loader, a0, OSSL_STORE_open_fn, ___open_function, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_set_ctrl(___loader, ___ctrl_function) \
      LP2(0x785a, int, OSSL_STORE_LOADER_set_ctrl , OSSL_STORE_LOADER *, ___loader, a0, OSSL_STORE_ctrl_fn, ___ctrl_function, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#ifndef NO_INLINE_VARARGS
#define OSSL_STORE_ctrl(___ctx, ___cmd, ___dummy, ...) \
    ({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; OSSL_STORE_LOADER_set_ctrl((___ctx), (___cmd), (OSSL_STORE_ctrl_fn) _message); })
#endif /* !NO_INLINE_VARARGS */

#define OSSL_STORE_INFO_get0_NAME_description(___info) \
      LP1(0x7860, const char *, OSSL_STORE_INFO_get0_NAME_description , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_set0_NAME_description(___info, ___desc) \
      LP2(0x7866, int, OSSL_STORE_INFO_set0_NAME_description , OSSL_STORE_INFO *, ___info, a0, char *, ___desc, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get1_NAME_description(___info) \
      LP1(0x786c, char *, OSSL_STORE_INFO_get1_NAME_description , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_do_all_loaders(___do_function, ___do_arg) \
      LP2FP(0x7872, int, OSSL_STORE_do_all_loaders , __fpt, ___do_function, a0, void *, ___do_arg, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(const OSSL_STORE_LOADER *loader,void *do_arg), 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_get0_engine(___loader) \
      LP1(0x7878, const ENGINE *, OSSL_STORE_LOADER_get0_engine , const OSSL_STORE_LOADER *, ___loader, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_instantiate(___drbg, ___pers, ___perslen) \
      LP3(0x787e, int, RAND_DRBG_instantiate , RAND_DRBG *, ___drbg, a0, const unsigned char *, ___pers, a1, size_t, ___perslen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_uninstantiate(___drbg) \
      LP1(0x7884, int, RAND_DRBG_uninstantiate , RAND_DRBG *, ___drbg, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_set(___drbg, ___type, ___flags) \
      LP3(0x788a, int, RAND_DRBG_set , RAND_DRBG *, ___drbg, a0, int, ___type, d0, unsigned int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_set_callbacks(___drbg, ___get_entropy, ___cleanup_entropy, ___get_nonce, ___cleanup_nonce) \
      LP5(0x7890, int, RAND_DRBG_set_callbacks , RAND_DRBG *, ___drbg, a0, RAND_DRBG_get_entropy_fn, ___get_entropy, d0, RAND_DRBG_cleanup_entropy_fn, ___cleanup_entropy, d1, RAND_DRBG_get_nonce_fn, ___get_nonce, d2, RAND_DRBG_cleanup_nonce_fn, ___cleanup_nonce, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_new(___type, ___flags, ___parent) \
      LP3(0x7896, RAND_DRBG *, RAND_DRBG_new , int, ___type, d0, unsigned int, ___flags, d1, RAND_DRBG *, ___parent, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_set_reseed_interval(___drbg, ___interval) \
      LP2(0x789c, int, RAND_DRBG_set_reseed_interval , RAND_DRBG *, ___drbg, a0, unsigned int, ___interval, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_free(___drbg) \
      LP1NR(0x78a2, RAND_DRBG_free , RAND_DRBG *, ___drbg, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_generate(___drbg, ___out, ___outlen, ___prediction_resistance, ___adin, ___adinlen) \
      LP6(0x78a8, int, RAND_DRBG_generate , RAND_DRBG *, ___drbg, a0, unsigned char *, ___out, a1, size_t, ___outlen, d0, int, ___prediction_resistance, d1, const unsigned char *, ___adin, a2, size_t, ___adinlen, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_reseed(___drbg, ___adin, ___adinlen, ___prediction_resistance) \
      LP4(0x78ae, int, RAND_DRBG_reseed , RAND_DRBG *, ___drbg, a0, const unsigned char *, ___adin, a1, size_t, ___adinlen, d0, int, ___prediction_resistance, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_set_ex_data(___drbg, ___idx, ___arg) \
      LP3(0x78b4, int, RAND_DRBG_set_ex_data , RAND_DRBG *, ___drbg, a0, int, ___idx, d0, void *, ___arg, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_get_ex_data(___drbg, ___idx) \
      LP2(0x78ba, void *, RAND_DRBG_get_ex_data , const RAND_DRBG *, ___drbg, a0, int, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sha3_224() \
      LP0(0x78c0, const EVP_MD *, EVP_sha3_224 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sha3_256() \
      LP0(0x78c6, const EVP_MD *, EVP_sha3_256 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sha3_384() \
      LP0(0x78cc, const EVP_MD *, EVP_sha3_384 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sha3_512() \
      LP0(0x78d2, const EVP_MD *, EVP_sha3_512 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_shake128() \
      LP0(0x78d8, const EVP_MD *, EVP_shake128 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_shake256() \
      LP0(0x78de, const EVP_MD *, EVP_shake256 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCRYPT_PARAMS_new() \
      LP0(0x78e4, SCRYPT_PARAMS *, SCRYPT_PARAMS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCRYPT_PARAMS_free(___a) \
      LP1NR(0x78ea, SCRYPT_PARAMS_free , SCRYPT_PARAMS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_SCRYPT_PARAMS(___a, ___out) \
      LP2(0x78f0, int, i2d_SCRYPT_PARAMS , SCRYPT_PARAMS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_SCRYPT_PARAMS(___a, ___in, ___len) \
      LP3(0x78f6, SCRYPT_PARAMS *, d2i_SCRYPT_PARAMS , SCRYPT_PARAMS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SCRYPT_PARAMS_it() \
      LP0(0x78fc, const ASN1_ITEM *, SCRYPT_PARAMS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get0(___idx) \
      LP1(0x7902, const EVP_PKEY_METHOD *, EVP_PKEY_meth_get0 , size_t, ___idx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_count() \
      LP0(0x7908, size_t, EVP_PKEY_meth_get_count ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_get0_public() \
      LP0(0x790e, RAND_DRBG *, RAND_DRBG_get0_public ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_priv_bytes(___buf, ___num) \
      LP2(0x7914, int, RAND_priv_bytes , unsigned char *, ___buf, a0, int, ___num, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_priv_rand(___rnd, ___bits, ___top, ___bottom) \
      LP4(0x791a, int, BN_priv_rand , BIGNUM *, ___rnd, a0, int, ___bits, d0, int, ___top, d1, int, ___bottom, d2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_priv_rand_range(___rnd, ___range) \
      LP2(0x7920, int, BN_priv_rand_range , BIGNUM *, ___rnd, a0, const BIGNUM *, ___range, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_normalize(___s) \
      LP1(0x7926, int, ASN1_TIME_normalize , ASN1_TIME *, ___s, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_cmp_time_t(___s, ___t) \
      LP2(0x792c, int, ASN1_TIME_cmp_time_t , const ASN1_TIME *, ___s, a0, time_t, ___t, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_compare(___a, ___b) \
      LP2(0x7932, int, ASN1_TIME_compare , const ASN1_TIME *, ___a, a0, const ASN1_TIME *, ___b, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_ctrl_uint64(___ctx, ___keytype, ___optype, ___cmd, ___value) \
      LP5(0x7938, int, EVP_PKEY_CTX_ctrl_uint64 , EVP_PKEY_CTX *, ___ctx, a0, int, ___keytype, d0, int, ___optype, d1, int, ___cmd, d2, uint64_t, ___value, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestFinalXOF(___ctx, ___md, ___len) \
      LP3(0x793e, int, EVP_DigestFinalXOF , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___md, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_clear_last_mark() \
      LP0(0x7944, int, ERR_clear_last_mark ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_get0_private() \
      LP0(0x794a, RAND_DRBG *, RAND_DRBG_get0_private ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_192_ccm() \
      LP0(0x7950, const EVP_CIPHER *, EVP_aria_192_ccm ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_256_gcm() \
      LP0(0x7956, const EVP_CIPHER *, EVP_aria_256_gcm ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_256_ccm() \
      LP0(0x795c, const EVP_CIPHER *, EVP_aria_256_ccm ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_128_gcm() \
      LP0(0x7962, const EVP_CIPHER *, EVP_aria_128_gcm ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_128_ccm() \
      LP0(0x7968, const EVP_CIPHER *, EVP_aria_128_ccm ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_aria_192_gcm() \
      LP0(0x796e, const EVP_CIPHER *, EVP_aria_192_gcm ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get_result_length(___ui, ___i) \
      LP2(0x7974, int, UI_get_result_length , UI *, ___ui, a0, int, ___i, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_set_result_ex(___ui, ___uis, ___result, ___len) \
      LP4(0x797a, int, UI_set_result_ex , UI *, ___ui, a0, UI_STRING *, ___uis, a1, const char *, ___result, a2, int, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define UI_get_result_string_length(___uis) \
      LP1(0x7980, int, UI_get_result_string_length , UI_STRING *, ___uis, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_check(___ctx) \
      LP1(0x7986, int, EVP_PKEY_check , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_check(___pmeth, ___check) \
      LP2NRFP(0x798c, EVP_PKEY_meth_set_check , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___check, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pkey), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_check(___pmeth, ___pcheck) \
      LP2NRFP(0x7992, EVP_PKEY_meth_get_check , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___pcheck, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pkey), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_remove(___pmeth) \
      LP1(0x7998, int, EVP_PKEY_meth_remove , const EVP_PKEY_METHOD *, ___pmeth, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_reserve(___st, ___n) \
      LP2(0x799e, int, OPENSSL_sk_reserve , OPENSSL_STACK *, ___st, a0, int, ___n, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_new_by_nid(___nid) \
      LP1(0x79a4, DH *, DH_new_by_nid , int, ___nid, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get_nid(___dh) \
      LP1(0x79aa, int, DH_get_nid , const DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_new_reserve(___c, ___n) \
      LP2(0x79b0, OPENSSL_STACK *, OPENSSL_sk_new_reserve , OPENSSL_sk_compfunc, ___c, d0, int, ___n, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_check(___ameth, ___pkey_check) \
      LP2NRFP(0x79b6, EVP_PKEY_asn1_set_check , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___pkey_check, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const EVP_PKEY *pk), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_siginf(___ameth, ___siginf_set) \
      LP2NRFP(0x79bc, EVP_PKEY_asn1_set_siginf , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___siginf_set, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(X509_SIG_INFO *siginf,const X509_ALGOR *alg,const ASN1_STRING *sig), 0, 0, 0, 0, 0, 0)

#define EVP_sm4_ctr() \
      LP0(0x79c2, const EVP_CIPHER *, EVP_sm4_ctr ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sm4_cbc() \
      LP0(0x79c8, const EVP_CIPHER *, EVP_sm4_cbc ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sm4_ofb() \
      LP0(0x79ce, const EVP_CIPHER *, EVP_sm4_ofb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sm4_ecb() \
      LP0(0x79d4, const EVP_CIPHER *, EVP_sm4_ecb ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sm4_cfb128() \
      LP0(0x79da, const EVP_CIPHER *, EVP_sm4_cfb128 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sm3() \
      LP0(0x79e0, const EVP_MD *, EVP_sm3 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get0_multi_prime_factors(___r, ___primes) \
      LP2(0x79e6, int, RSA_get0_multi_prime_factors , const RSA *, ___r, a0, const BIGNUM **, ___primes, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_public_check(___ctx) \
      LP1(0x79ec, int, EVP_PKEY_public_check , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_param_check(___ctx) \
      LP1(0x79f2, int, EVP_PKEY_param_check , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_public_check(___pmeth, ___check) \
      LP2NRFP(0x79f8, EVP_PKEY_meth_set_public_check , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___check, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pkey), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_param_check(___pmeth, ___check) \
      LP2NRFP(0x79fe, EVP_PKEY_meth_set_param_check , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___check, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pkey), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_public_check(___pmeth, ___pcheck) \
      LP2NRFP(0x7a04, EVP_PKEY_meth_get_public_check , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___pcheck, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pkey), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_param_check(___pmeth, ___pcheck) \
      LP2NRFP(0x7a0a, EVP_PKEY_meth_get_param_check , const EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___pcheck, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pkey), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_public_check(___ameth, ___pkey_pub_check) \
      LP2NRFP(0x7a10, EVP_PKEY_asn1_set_public_check , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___pkey_pub_check, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const EVP_PKEY *pk), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_param_check(___ameth, ___pkey_param_check) \
      LP2NRFP(0x7a16, EVP_PKEY_asn1_set_param_check , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___pkey_param_check, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const EVP_PKEY *pk), 0, 0, 0, 0, 0, 0)

#define DH_check_ex(___dh) \
      LP1(0x7a1c, int, DH_check_ex , const DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_check_pub_key_ex(___dh, ___pub_key) \
      LP2(0x7a22, int, DH_check_pub_key_ex , const DH *, ___dh, a0, const BIGNUM *, ___pub_key, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_check_params_ex(___dh) \
      LP1(0x7a28, int, DH_check_params_ex , const DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_generate_multi_prime_key(___rsa, ___bits, ___primes, ___e, ___cb) \
      LP5(0x7a2e, int, RSA_generate_multi_prime_key , RSA *, ___rsa, a0, int, ___bits, d0, int, ___primes, d1, BIGNUM *, ___e, a1, BN_GENCB *, ___cb, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get_multi_prime_extra_count(___r) \
      LP1(0x7a34, int, RSA_get_multi_prime_extra_count , const RSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_resp_get0_signer(___bs, ___signer, ___extra_certs) \
      LP3(0x7a3a, int, OCSP_resp_get0_signer , OCSP_BASICRESP *, ___bs, a0, X509 **, ___signer, a1, STACK_OF(X509) *, ___extra_certs, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get0_multi_prime_crt_params(___r, ___exps, ___coeffs) \
      LP3(0x7a40, int, RSA_get0_multi_prime_crt_params , const RSA *, ___r, a0, const BIGNUM **, ___exps, a1, const BIGNUM **, ___coeffs, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_set0_multi_prime_params(___r, ___primes, ___exps, ___coeffs, ___pnum) \
      LP5(0x7a46, int, RSA_set0_multi_prime_params , RSA *, ___r, a0, BIGNUM **, ___primes, a1, BIGNUM **, ___exps, a2, BIGNUM **, ___coeffs, a3, int, ___pnum, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get_version(___r) \
      LP1(0x7a4c, int, RSA_get_version , RSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_meth_get_multi_prime_keygen(___meth) \
      LP1FR(0x7a52, __fpr, RSA_meth_get_multi_prime_keygen , const RSA_METHOD *, ___meth, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(RSA *rsa, int bits, int primes, BIGNUM *e, BN_GENCB *cb), 0, 0, 0, 0, 0, 0)

#define RSA_meth_set_multi_prime_keygen(___meth, ___keygen) \
      LP2FP(0x7a58, int, RSA_meth_set_multi_prime_keygen , RSA_METHOD *, ___meth, a0, __fpt, ___keygen, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(RSA *rsa,int bits,int primes,BIGNUM *e,BN_GENCB *cb), 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_get0_master() \
      LP0(0x7a5e, RAND_DRBG *, RAND_DRBG_get0_master ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_set_reseed_time_interval(___drbg, ___interval) \
      LP2(0x7a64, int, RAND_DRBG_set_reseed_time_interval , RAND_DRBG *, ___drbg, a0, time_t, ___interval, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_get0_addProfessionInfo(___pi) \
      LP1(0x7a6a, const ASN1_OCTET_STRING *, PROFESSION_INFO_get0_addProfessionInfo , const PROFESSION_INFO *, ___pi, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSION_SYNTAX_free(___a) \
      LP1NR(0x7a70, ADMISSION_SYNTAX_free , ADMISSION_SYNTAX *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ADMISSION_SYNTAX(___a, ___in, ___len) \
      LP3(0x7a76, ADMISSION_SYNTAX *, d2i_ADMISSION_SYNTAX , ADMISSION_SYNTAX **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAMING_AUTHORITY_set0_authorityId(___n, ___namingAuthorityId) \
      LP2NR(0x7a7c, NAMING_AUTHORITY_set0_authorityId , NAMING_AUTHORITY *, ___n, a0, ASN1_OBJECT*, ___namingAuthorityId, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAMING_AUTHORITY_set0_authorityURL(___n, ___namingAuthorityUrl) \
      LP2NR(0x7a82, NAMING_AUTHORITY_set0_authorityURL , NAMING_AUTHORITY *, ___n, a0, ASN1_IA5STRING*, ___namingAuthorityUrl, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PROFESSION_INFO(___a, ___in, ___len) \
      LP3(0x7a88, PROFESSION_INFO *, d2i_PROFESSION_INFO , PROFESSION_INFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAMING_AUTHORITY_it() \
      LP0(0x7a8e, const ASN1_ITEM *, NAMING_AUTHORITY_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSION_SYNTAX_get0_contentsOfAdmissions(___as) \
      LP1(0x7a94, const STACK_OF(ADMISSIONS) *, ADMISSION_SYNTAX_get0_contentsOfAdmissions , const ADMISSION_SYNTAX *, ___as, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_set0_professionItems(___pi, ___as) \
      LP2NR(0x7a9a, PROFESSION_INFO_set0_professionItems , PROFESSION_INFO *, ___pi, a0, STACK_OF(ASN1_STRING) *, ___as, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAMING_AUTHORITY_new() \
      LP0(0x7aa0, NAMING_AUTHORITY *, NAMING_AUTHORITY_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAMING_AUTHORITY_get0_authorityURL(___n) \
      LP1(0x7aa6, const ASN1_IA5STRING *, NAMING_AUTHORITY_get0_authorityURL , const NAMING_AUTHORITY *, ___n, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSION_SYNTAX_get0_admissionAuthority(___as) \
      LP1(0x7aac, const GENERAL_NAME *, ADMISSION_SYNTAX_get0_admissionAuthority , const ADMISSION_SYNTAX *, ___as, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_new() \
      LP0(0x7ab2, PROFESSION_INFO *, PROFESSION_INFO_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSIONS_new() \
      LP0(0x7ab8, ADMISSIONS *, ADMISSIONS_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSION_SYNTAX_set0_admissionAuthority(___as, ___aa) \
      LP2NR(0x7abe, ADMISSION_SYNTAX_set0_admissionAuthority , ADMISSION_SYNTAX *, ___as, a0, GENERAL_NAME *, ___aa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_get0_professionOIDs(___pi) \
      LP1(0x7ac4, const STACK_OF(ASN1_OBJECT) *, PROFESSION_INFO_get0_professionOIDs , const PROFESSION_INFO *, ___pi, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_it() \
      LP0(0x7aca, const ASN1_ITEM *, PROFESSION_INFO_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_PROFESSION_INFO(___a, ___out) \
      LP2(0x7ad0, int, i2d_PROFESSION_INFO , PROFESSION_INFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSIONS_set0_professionInfos(___a, ___pi) \
      LP2NR(0x7ad6, ADMISSIONS_set0_professionInfos , ADMISSIONS *, ___a, a0, PROFESSION_INFOS *, ___pi, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_get0_namingAuthority(___pi) \
      LP1(0x7adc, const NAMING_AUTHORITY *, PROFESSION_INFO_get0_namingAuthority , const PROFESSION_INFO *, ___pi, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_free(___a) \
      LP1NR(0x7ae2, PROFESSION_INFO_free , PROFESSION_INFO *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_set0_addProfessionInfo(___pi, ___aos) \
      LP2NR(0x7ae8, PROFESSION_INFO_set0_addProfessionInfo , PROFESSION_INFO *, ___pi, a0, ASN1_OCTET_STRING *, ___aos, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_set0_registrationNumber(___pi, ___rn) \
      LP2NR(0x7aee, PROFESSION_INFO_set0_registrationNumber , PROFESSION_INFO *, ___pi, a0, ASN1_PRINTABLESTRING *, ___rn, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSION_SYNTAX_set0_contentsOfAdmissions(___as, ___a) \
      LP2NR(0x7af4, ADMISSION_SYNTAX_set0_contentsOfAdmissions , ADMISSION_SYNTAX *, ___as, a0, STACK_OF(ADMISSIONS) *, ___a, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAMING_AUTHORITY_get0_authorityId(___n) \
      LP1(0x7afa, const ASN1_OBJECT *, NAMING_AUTHORITY_get0_authorityId , const NAMING_AUTHORITY *, ___n, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSION_SYNTAX_it() \
      LP0(0x7b00, const ASN1_ITEM *, ADMISSION_SYNTAX_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ADMISSION_SYNTAX(___a, ___out) \
      LP2(0x7b06, int, i2d_ADMISSION_SYNTAX , ADMISSION_SYNTAX *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAMING_AUTHORITY_get0_authorityText(___n) \
      LP1(0x7b0c, const ASN1_STRING *, NAMING_AUTHORITY_get0_authorityText , const NAMING_AUTHORITY *, ___n, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_set0_namingAuthority(___pi, ___na) \
      LP2NR(0x7b12, PROFESSION_INFO_set0_namingAuthority , PROFESSION_INFO *, ___pi, a0, NAMING_AUTHORITY *, ___na, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_NAMING_AUTHORITY(___a, ___out) \
      LP2(0x7b18, int, i2d_NAMING_AUTHORITY , NAMING_AUTHORITY *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAMING_AUTHORITY_free(___a) \
      LP1NR(0x7b1e, NAMING_AUTHORITY_free , NAMING_AUTHORITY *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSIONS_set0_admissionAuthority(___a, ___aa) \
      LP2NR(0x7b24, ADMISSIONS_set0_admissionAuthority , ADMISSIONS *, ___a, a0, GENERAL_NAME *, ___aa, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSIONS_free(___a) \
      LP1NR(0x7b2a, ADMISSIONS_free , ADMISSIONS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_get0_registrationNumber(___pi) \
      LP1(0x7b30, const ASN1_PRINTABLESTRING *, PROFESSION_INFO_get0_registrationNumber , const PROFESSION_INFO *, ___pi, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ADMISSIONS(___a, ___in, ___len) \
      LP3(0x7b36, ADMISSIONS *, d2i_ADMISSIONS , ADMISSIONS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ADMISSIONS(___a, ___out) \
      LP2(0x7b3c, int, i2d_ADMISSIONS , ADMISSIONS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_get0_professionItems(___pi) \
      LP1(0x7b42, const STACK_OF(ASN1_STRING) *, PROFESSION_INFO_get0_professionItems , const PROFESSION_INFO *, ___pi, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSIONS_get0_admissionAuthority(___a) \
      LP1(0x7b48, const GENERAL_NAME *, ADMISSIONS_get0_admissionAuthority , const ADMISSIONS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PROFESSION_INFO_set0_professionOIDs(___pi, ___po) \
      LP2NR(0x7b4e, PROFESSION_INFO_set0_professionOIDs , PROFESSION_INFO *, ___pi, a0, STACK_OF(ASN1_OBJECT) *, ___po, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_NAMING_AUTHORITY(___a, ___in, ___len) \
      LP3(0x7b54, NAMING_AUTHORITY *, d2i_NAMING_AUTHORITY , NAMING_AUTHORITY **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSIONS_it() \
      LP0(0x7b5a, const ASN1_ITEM *, ADMISSIONS_it ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSIONS_get0_namingAuthority(___a) \
      LP1(0x7b60, const NAMING_AUTHORITY *, ADMISSIONS_get0_namingAuthority , const ADMISSIONS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NAMING_AUTHORITY_set0_authorityText(___n, ___namingAuthorityText) \
      LP2NR(0x7b66, NAMING_AUTHORITY_set0_authorityText , NAMING_AUTHORITY *, ___n, a0, ASN1_STRING*, ___namingAuthorityText, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSIONS_set0_namingAuthority(___a, ___na) \
      LP2NR(0x7b6c, ADMISSIONS_set0_namingAuthority , ADMISSIONS *, ___a, a0, NAMING_AUTHORITY *, ___na, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSIONS_get0_professionInfos(___a) \
      LP1(0x7b72, const PROFESSION_INFOS *, ADMISSIONS_get0_professionInfos , const ADMISSIONS *, ___a, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ADMISSION_SYNTAX_new() \
      LP0(0x7b78, ADMISSION_SYNTAX *, ADMISSION_SYNTAX_new ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sha512_256() \
      LP0(0x7b7e, const EVP_MD *, EVP_sha512_256 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_sha512_224() \
      LP0(0x7b84, const EVP_MD *, EVP_sha512_224 ,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_basic_sign_ctx(___brsp, ___signer, ___ctx, ___certs, ___flags) \
      LP5(0x7b8a, int, OCSP_basic_sign_ctx , OCSP_BASICRESP *, ___brsp, a0, X509 *, ___signer, a1, EVP_MD_CTX *, ___ctx, a2, STACK_OF(X509) *, ___certs, a3, unsigned long, ___flags, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_bytes(___drbg, ___out, ___outlen) \
      LP3(0x7b90, int, RAND_DRBG_bytes , RAND_DRBG *, ___drbg, a0, unsigned char *, ___out, a1, size_t, ___outlen, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_secure_new(___type, ___flags, ___parent) \
      LP3(0x7b96, RAND_DRBG *, RAND_DRBG_secure_new , int, ___type, d0, unsigned int, ___flags, d1, RAND_DRBG *, ___parent, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_vctrl(___ctx, ___cmd, ___args) \
      LP3(0x7b9c, int, OSSL_STORE_vctrl , OSSL_STORE_CTX *, ___ctx, a0, int, ___cmd, d0, long *, ___args, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_SEARCH_by_alias(___alias) \
      LP1(0x7ba2, OSSL_STORE_SEARCH *, OSSL_STORE_SEARCH_by_alias , const char *, ___alias, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_bind(___sock, ___addr, ___options) \
      LP3(0x7ba8, int, BIO_bind , int, ___sock, d0, const BIO_ADDR *, ___addr, a0, int, ___options, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_set_expect(___loader, ___expect_function) \
      LP2(0x7bae, int, OSSL_STORE_LOADER_set_expect , OSSL_STORE_LOADER *, ___loader, a0, OSSL_STORE_expect_fn, ___expect_function, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_expect(___ctx, ___expected_type) \
      LP2(0x7bb4, int, OSSL_STORE_expect , OSSL_STORE_CTX *, ___ctx, a0, int, ___expected_type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_SEARCH_by_key_fingerprint(___digest, ___bytes, ___len) \
      LP3(0x7bba, OSSL_STORE_SEARCH *, OSSL_STORE_SEARCH_by_key_fingerprint , const EVP_MD *, ___digest, a0, const unsigned char *, ___bytes, a1, size_t, ___len, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_SEARCH_get0_serial(___criterion) \
      LP1(0x7bc0, const ASN1_INTEGER *, OSSL_STORE_SEARCH_get0_serial , const OSSL_STORE_SEARCH *, ___criterion, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_SEARCH_by_name(___name) \
      LP1(0x7bc6, OSSL_STORE_SEARCH *, OSSL_STORE_SEARCH_by_name , X509_NAME *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_supports_search(___ctx, ___search_type) \
      LP2(0x7bcc, int, OSSL_STORE_supports_search , OSSL_STORE_CTX *, ___ctx, a0, int, ___search_type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_find(___ctx, ___search) \
      LP2(0x7bd2, int, OSSL_STORE_find , OSSL_STORE_CTX *, ___ctx, a0, OSSL_STORE_SEARCH *, ___search, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_SEARCH_get_type(___criterion) \
      LP1(0x7bd8, int, OSSL_STORE_SEARCH_get_type , const OSSL_STORE_SEARCH *, ___criterion, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_SEARCH_get0_bytes(___criterion, ___length) \
      LP2(0x7bde, const unsigned char *, OSSL_STORE_SEARCH_get0_bytes , const OSSL_STORE_SEARCH *, ___criterion, a0, size_t *, ___length, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_SEARCH_get0_string(___criterion) \
      LP1(0x7be4, const char *, OSSL_STORE_SEARCH_get0_string , const OSSL_STORE_SEARCH *, ___criterion, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_SEARCH_by_issuer_serial(___name, ___serial) \
      LP2(0x7bea, OSSL_STORE_SEARCH *, OSSL_STORE_SEARCH_by_issuer_serial , X509_NAME *, ___name, a0, const ASN1_INTEGER *, ___serial, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_SEARCH_get0_name(___criterion) \
      LP1(0x7bf0, X509_NAME *, OSSL_STORE_SEARCH_get0_name , OSSL_STORE_SEARCH *, ___criterion, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_authority_key_id(___x) \
      LP1(0x7bf6, const ASN1_OCTET_STRING *, X509_get0_authority_key_id , X509 *, ___x, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_set_find(___loader, ___find_function) \
      LP2(0x7bfc, int, OSSL_STORE_LOADER_set_find , OSSL_STORE_LOADER *, ___loader, a0, OSSL_STORE_find_fn, ___find_function, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_SEARCH_free(___search) \
      LP1NR(0x7c02, OSSL_STORE_SEARCH_free , OSSL_STORE_SEARCH *, ___search, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_SEARCH_get0_digest(___criterion) \
      LP1(0x7c08, const EVP_MD *, OSSL_STORE_SEARCH_get0_digest , const OSSL_STORE_SEARCH *, ___criterion, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_set_reseed_defaults(___master_reseed_interval, ___slave_reseed_interval, ___master_reseed_time_interval, ___slave_reseed_time_interval) \
      LP4(0x7c0e, int, RAND_DRBG_set_reseed_defaults , unsigned int, ___master_reseed_interval, d0, unsigned int, ___slave_reseed_interval, d1, time_t, ___master_reseed_time_interval, d2, time_t, ___slave_reseed_time_interval, d3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_new_raw_private_key(___type, ___e, ___priv, ___len) \
      LP4(0x7c14, EVP_PKEY *, EVP_PKEY_new_raw_private_key , int, ___type, d0, ENGINE *, ___e, a0, const unsigned char *, ___priv, a1, size_t, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_new_raw_public_key(___type, ___e, ___pub, ___len) \
      LP4(0x7c1a, EVP_PKEY *, EVP_PKEY_new_raw_public_key , int, ___type, d0, ENGINE *, ___e, a0, const unsigned char *, ___pub, a1, size_t, ___len, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_new_CMAC_key(___e, ___priv, ___len, ___cipher) \
      LP4(0x7c20, EVP_PKEY *, EVP_PKEY_new_CMAC_key , ENGINE *, ___e, a0, const unsigned char *, ___priv, a1, size_t, ___len, d0, const EVP_CIPHER *, ___cipher, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_set_priv_key(___ameth, ___set_priv_key) \
      LP2NRFP(0x7c26, EVP_PKEY_asn1_set_set_priv_key , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___set_priv_key, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pk,const unsigned char *priv,size_t len), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_set_pub_key(___ameth, ___set_pub_key) \
      LP2NRFP(0x7c2c, EVP_PKEY_asn1_set_set_pub_key , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___set_pub_key, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY *pk,const unsigned char *pub,size_t len), 0, 0, 0, 0, 0, 0)

#define RAND_DRBG_set_defaults(___type, ___flags) \
      LP2(0x7c32, int, RAND_DRBG_set_defaults , int, ___type, d0, unsigned int, ___flags, d1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get_hostflags(___param) \
      LP1(0x7c38, unsigned int, X509_VERIFY_PARAM_get_hostflags , const X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get0_p(___dh) \
      LP1(0x7c3e, const BIGNUM *, DH_get0_p , const DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get0_q(___dh) \
      LP1(0x7c44, const BIGNUM *, DH_get0_q , const DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get0_g(___dh) \
      LP1(0x7c4a, const BIGNUM *, DH_get0_g , const DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get0_priv_key(___dh) \
      LP1(0x7c50, const BIGNUM *, DH_get0_priv_key , const DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DH_get0_pub_key(___dh) \
      LP1(0x7c56, const BIGNUM *, DH_get0_pub_key , const DH *, ___dh, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_get0_priv_key(___d) \
      LP1(0x7c5c, const BIGNUM *, DSA_get0_priv_key , const DSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_get0_pub_key(___d) \
      LP1(0x7c62, const BIGNUM *, DSA_get0_pub_key , const DSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_get0_q(___d) \
      LP1(0x7c68, const BIGNUM *, DSA_get0_q , const DSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_get0_p(___d) \
      LP1(0x7c6e, const BIGNUM *, DSA_get0_p , const DSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define DSA_get0_g(___d) \
      LP1(0x7c74, const BIGNUM *, DSA_get0_g , const DSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get0_dmp1(___r) \
      LP1(0x7c7a, const BIGNUM *, RSA_get0_dmp1 , const RSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get0_d(___d) \
      LP1(0x7c80, const BIGNUM *, RSA_get0_d , const RSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get0_n(___d) \
      LP1(0x7c86, const BIGNUM *, RSA_get0_n , const RSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get0_dmq1(___r) \
      LP1(0x7c8c, const BIGNUM *, RSA_get0_dmq1 , const RSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get0_e(___d) \
      LP1(0x7c92, const BIGNUM *, RSA_get0_e , const RSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get0_q(___d) \
      LP1(0x7c98, const BIGNUM *, RSA_get0_q , const RSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get0_p(___d) \
      LP1(0x7c9e, const BIGNUM *, RSA_get0_p , const RSA *, ___d, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_get0_iqmp(___r) \
      LP1(0x7ca4, const BIGNUM *, RSA_get0_iqmp , const RSA *, ___r, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_SIG_get0_r(___sig) \
      LP1(0x7caa, const BIGNUM *, ECDSA_SIG_get0_r , const ECDSA_SIG *, ___sig, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ECDSA_SIG_get0_s(___sig) \
      LP1(0x7cb0, const BIGNUM *, ECDSA_SIG_get0_s , const ECDSA_SIG *, ___sig, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_get_get_by_fingerprint(___method) \
      LP1(0x7cb6, X509_LOOKUP_get_by_fingerprint_fn, X509_LOOKUP_meth_get_get_by_fingerprint , const X509_LOOKUP_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_new(___name) \
      LP1(0x7cbc, X509_LOOKUP_METHOD *, X509_LOOKUP_meth_new , const char *, ___name, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_get_init(___method) \
      LP1FR(0x7cc2, __fpr, X509_LOOKUP_meth_get_init , const X509_LOOKUP_METHOD*, ___method, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(X509_LOOKUP *ctx), 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_get_get_by_alias(___method) \
      LP1(0x7cc8, X509_LOOKUP_get_by_alias_fn, X509_LOOKUP_meth_get_get_by_alias , const X509_LOOKUP_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_set_new_item(___method, ___new_item) \
      LP2FP(0x7cce, int, X509_LOOKUP_meth_set_new_item , X509_LOOKUP_METHOD *, ___method, a0, __fpt, ___new_item, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(X509_LOOKUP *ctx), 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_set_shutdown(___method, _____shutdown) \
      LP2FP(0x7cd4, int, X509_LOOKUP_meth_set_shutdown , X509_LOOKUP_METHOD *, ___method, a0, __fpt, _____shutdown, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(X509_LOOKUP *ctx), 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_get_new_item(___method) \
      LP1FR(0x7cda, __fpr, X509_LOOKUP_meth_get_new_item , const X509_LOOKUP_METHOD*, ___method, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(X509_LOOKUP *ctx), 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_set_ctrl(___method, ___ctrl_fn) \
      LP2(0x7ce0, int, X509_LOOKUP_meth_set_ctrl , X509_LOOKUP_METHOD *, ___method, a0, X509_LOOKUP_ctrl_fn, ___ctrl_fn, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_set_get_by_issuer_serial(___method, ___fn) \
      LP2(0x7ce6, int, X509_LOOKUP_meth_set_get_by_issuer_serial , X509_LOOKUP_METHOD *, ___method, a0, X509_LOOKUP_get_by_issuer_serial_fn, ___fn, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_get_store(___ctx) \
      LP1(0x7cec, X509_STORE *, X509_LOOKUP_get_store , const X509_LOOKUP *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_get_ctrl(___method) \
      LP1(0x7cf2, X509_LOOKUP_ctrl_fn, X509_LOOKUP_meth_get_ctrl , const X509_LOOKUP_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_set_get_by_alias(___method, ___fn) \
      LP2(0x7cf8, int, X509_LOOKUP_meth_set_get_by_alias , X509_LOOKUP_METHOD *, ___method, a0, X509_LOOKUP_get_by_alias_fn, ___fn, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_get_get_by_subject(___method) \
      LP1(0x7cfe, X509_LOOKUP_get_by_subject_fn, X509_LOOKUP_meth_get_get_by_subject , const X509_LOOKUP_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_get_free(___method) \
      LP1FR(0x7d04, __fpr, X509_LOOKUP_meth_get_free , const X509_LOOKUP_METHOD*, ___method, a0,\
      , AMISSL_BASE_NAME, void (*__fpr)(X509_LOOKUP *ctx), 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_set_get_by_subject(___method, ___fn) \
      LP2(0x7d0a, int, X509_LOOKUP_meth_set_get_by_subject , X509_LOOKUP_METHOD *, ___method, a0, X509_LOOKUP_get_by_subject_fn, ___fn, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_set_free(___method, ___free_fn) \
      LP2FP(0x7d10, int, X509_LOOKUP_meth_set_free , X509_LOOKUP_METHOD *, ___method, a0, __fpt, ___free_fn, a1,\
      , AMISSL_BASE_NAME, void (*__fpt)(X509_LOOKUP *ctx), 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_get_shutdown(___method) \
      LP1FR(0x7d16, __fpr, X509_LOOKUP_meth_get_shutdown , const X509_LOOKUP_METHOD*, ___method, a0,\
      , AMISSL_BASE_NAME, int (*__fpr)(X509_LOOKUP *ctx), 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_set_method_data(___ctx, ___data) \
      LP2(0x7d1c, int, X509_LOOKUP_set_method_data , X509_LOOKUP *, ___ctx, a0, void *, ___data, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_get_method_data(___ctx) \
      LP1(0x7d22, void *, X509_LOOKUP_get_method_data , const X509_LOOKUP *, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_set_get_by_fingerprint(___method, ___fn) \
      LP2(0x7d28, int, X509_LOOKUP_meth_set_get_by_fingerprint , X509_LOOKUP_METHOD *, ___method, a0, X509_LOOKUP_get_by_fingerprint_fn, ___fn, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_free(___method) \
      LP1NR(0x7d2e, X509_LOOKUP_meth_free , X509_LOOKUP_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_OBJECT_set1_X509(___a, ___obj) \
      LP2(0x7d34, int, X509_OBJECT_set1_X509 , X509_OBJECT *, ___a, a0, X509 *, ___obj, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_get_get_by_issuer_serial(___method) \
      LP1(0x7d3a, X509_LOOKUP_get_by_issuer_serial_fn, X509_LOOKUP_meth_get_get_by_issuer_serial , const X509_LOOKUP_METHOD *, ___method, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_meth_set_init(___method, ___init) \
      LP2FP(0x7d40, int, X509_LOOKUP_meth_set_init , X509_LOOKUP_METHOD *, ___method, a0, __fpt, ___init, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(X509_LOOKUP *ctx), 0, 0, 0, 0, 0, 0)

#define X509_OBJECT_set1_X509_CRL(___a, ___obj) \
      LP2(0x7d46, int, X509_OBJECT_set1_X509_CRL , X509_OBJECT *, ___a, a0, X509_CRL *, ___obj, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_raw_public_key(___pkey, ___pub, ___len) \
      LP3(0x7d4c, int, EVP_PKEY_get_raw_public_key , const EVP_PKEY *, ___pkey, a0, unsigned char *, ___pub, a1, size_t *, ___len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_raw_private_key(___pkey, ___priv, ___len) \
      LP3(0x7d52, int, EVP_PKEY_get_raw_private_key , const EVP_PKEY *, ___pkey, a0, unsigned char *, ___priv, a1, size_t *, ___len, a2,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_get_priv_key(___ameth, ___get_priv_key) \
      LP2NRFP(0x7d58, EVP_PKEY_asn1_set_get_priv_key , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___get_priv_key, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const EVP_PKEY *pk,unsigned char *priv,size_t *len), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_asn1_set_get_pub_key(___ameth, ___get_pub_key) \
      LP2NRFP(0x7d5e, EVP_PKEY_asn1_set_get_pub_key , EVP_PKEY_ASN1_METHOD *, ___ameth, a0, __fpt, ___get_pub_key, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(const EVP_PKEY *pk,unsigned char *pub,size_t *len), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set_alias_type(___pkey, ___type) \
      LP2(0x7d64, int, EVP_PKEY_set_alias_type , EVP_PKEY *, ___pkey, a0, int, ___type, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_keep_random_devices_open(___keep) \
      LP1NR(0x7d6a, RAND_keep_random_devices_open , int, ___keep, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_set_compressed_coordinates(___group, ___p, ___x, ___y_bit, ___ctx) \
      LP5(0x7d70, int, EC_POINT_set_compressed_coordinates , const EC_GROUP *, ___group, a0, EC_POINT *, ___p, a1, const BIGNUM *, ___x, a2, int, ___y_bit, d0, BN_CTX *, ___ctx, a3,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_set_affine_coordinates(___group, ___p, ___x, ___y, ___ctx) \
      LP5(0x7d76, int, EC_POINT_set_affine_coordinates , const EC_GROUP *, ___group, a0, EC_POINT *, ___p, a1, const BIGNUM *, ___x, a2, const BIGNUM *, ___y, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_POINT_get_affine_coordinates(___group, ___p, ___x, ___y, ___ctx) \
      LP5(0x7d7c, int, EC_POINT_get_affine_coordinates , const EC_GROUP *, ___group, a0, const EC_POINT *, ___p, a1, BIGNUM *, ___x, a2, BIGNUM *, ___y, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_set_curve(___group, ___p, ___a, ___b, ___ctx) \
      LP5(0x7d82, int, EC_GROUP_set_curve , EC_GROUP *, ___group, a0, const BIGNUM *, ___p, a1, const BIGNUM *, ___a, a2, const BIGNUM *, ___b, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_curve(___group, ___p, ___a, ___b, ___ctx) \
      LP5(0x7d88, int, EC_GROUP_get_curve , const EC_GROUP *, ___group, a0, BIGNUM *, ___p, a1, BIGNUM *, ___a, a2, BIGNUM *, ___b, a3, BN_CTX *, ___ctx, d0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_resp_get0_tbs_sigalg(___bs) \
      LP1(0x7d8e, const X509_ALGOR *, OCSP_resp_get0_tbs_sigalg , const OCSP_BASICRESP *, ___bs, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_resp_get0_respdata(___bs) \
      LP1(0x7d94, const OCSP_RESPDATA *, OCSP_resp_get0_respdata , const OCSP_BASICRESP *, ___bs, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_set_pkey_ctx(___ctx, ___pctx) \
      LP2NR(0x7d9a, EVP_MD_CTX_set_pkey_ctx , EVP_MD_CTX *, ___ctx, a0, EVP_PKEY_CTX *, ___pctx, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_set_digest_custom(___pmeth, ___digest_custom) \
      LP2NRFP(0x7da0, EVP_PKEY_meth_set_digest_custom , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___digest_custom, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx,EVP_MD_CTX *mctx), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_meth_get_digest_custom(___pmeth, ___pdigest_custom) \
      LP2NRFP(0x7da6, EVP_PKEY_meth_get_digest_custom , EVP_PKEY_METHOD *, ___pmeth, a0, __fpt, ___pdigest_custom, a1,\
      , AMISSL_BASE_NAME, int (*__fpt)(EVP_PKEY_CTX *ctx,EVP_MD_CTX *mctx), 0, 0, 0, 0, 0, 0)

#define OPENSSL_DIR_read(___ctx, ___directory) \
      LP2(0x7dac, const char *, OPENSSL_DIR_read , OPENSSL_DIR_CTX **, ___ctx, a0, const char *, ___directory, a1,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_DIR_end(___ctx) \
      LP1(0x7db2, int, OPENSSL_DIR_end , OPENSSL_DIR_CTX **, ___ctx, a0,\
      , AMISSL_BASE_NAME, 0, 0, 0, 0, 0, 0)

#endif /* !_PPCINLINE_AMISSL_H */
