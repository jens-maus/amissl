/* Automatically generated header (sfdc 1.5)! Do not edit! */
#ifndef PRAGMAS_AMISSL_PRAGMAS_H
#define PRAGMAS_AMISSL_PRAGMAS_H

/*
**	$VER: amissl_pragmas.h $Id$ $Id$
**
**	Direct ROM interface (pragma) definitions.
**
**	Copyright © 2001 Amiga, Inc.
**	    All Rights Reserved
*/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)
#ifndef __CLIB_PRAGMA_LIBCALL
#define __CLIB_PRAGMA_LIBCALL
#endif /* __CLIB_PRAGMA_LIBCALL */
#else /* __MAXON__, __STORM__ or AZTEC_C */
#ifndef __CLIB_PRAGMA_AMICALL
#define __CLIB_PRAGMA_AMICALL
#endif /* __CLIB_PRAGMA_AMICALL */
#endif /* */

#if defined(__SASC_60) || defined(__STORM__)
#ifndef __CLIB_PRAGMA_TAGCALL
#define __CLIB_PRAGMA_TAGCALL
#endif /* __CLIB_PRAGMA_TAGCALL */
#endif /* __MAXON__, __STORM__ or AZTEC_C */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase InitAmiSSLA 24 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24, InitAmiSSLA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLBase InitAmiSSL 24 801
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLBase, 0x24, InitAmiSSL(a0))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CleanupAmiSSLA 2a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a, CleanupAmiSSLA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLBase CleanupAmiSSL 2a 801
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLBase, 0x2a, CleanupAmiSSL(a0))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_new 66 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66, ASN1_TYPE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_free 6c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6c, ASN1_TYPE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_TYPE 72 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x72, d2i_ASN1_TYPE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_TYPE 78 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x78, i2d_ASN1_TYPE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ANY_it 7e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7e, ASN1_ANY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_get 84 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x84, ASN1_TYPE_get(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_set 8a 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8a, ASN1_TYPE_set(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OBJECT_new 90 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x90, ASN1_OBJECT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OBJECT_free 96 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x96, ASN1_OBJECT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_OBJECT 9c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9c, i2d_ASN1_OBJECT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase c2i_ASN1_OBJECT a2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa2, c2i_ASN1_OBJECT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_OBJECT a8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa8, d2i_ASN1_OBJECT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OBJECT_it ae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xae, ASN1_OBJECT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_new b4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb4, ASN1_STRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_free ba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xba, ASN1_STRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_dup c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc0, ASN1_STRING_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_type_new c6 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc6, ASN1_STRING_type_new(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_cmp cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcc, ASN1_STRING_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_set d2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd2, ASN1_STRING_set(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_length d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd8, ASN1_STRING_length(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_length_set de 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xde, ASN1_STRING_length_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_type e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe4, ASN1_STRING_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_data ea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xea, ASN1_STRING_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_new f0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf0, ASN1_BIT_STRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_free f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf6, ASN1_BIT_STRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_BIT_STRING fc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfc, d2i_ASN1_BIT_STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_BIT_STRING 102 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x102, i2d_ASN1_BIT_STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_it 108 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x108, ASN1_BIT_STRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2c_ASN1_BIT_STRING 10e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10e, i2c_ASN1_BIT_STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase c2i_ASN1_BIT_STRING 114 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x114, c2i_ASN1_BIT_STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_set 11a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11a, ASN1_BIT_STRING_set(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_set_bit 120 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x120, ASN1_BIT_STRING_set_bit(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_get_bit 126 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x126, ASN1_BIT_STRING_get_bit(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_name_print 12c 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12c, ASN1_BIT_STRING_name_print(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_num_asc 132 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x132, ASN1_BIT_STRING_num_asc(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_set_asc 138 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x138, ASN1_BIT_STRING_set_asc(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_BOOLEAN 13e 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13e, i2d_ASN1_BOOLEAN(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_BOOLEAN 144 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x144, d2i_ASN1_BOOLEAN(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_new 14a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14a, ASN1_INTEGER_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_free 150 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x150, ASN1_INTEGER_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_INTEGER 156 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x156, d2i_ASN1_INTEGER(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_INTEGER 15c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15c, i2d_ASN1_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_it 162 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x162, ASN1_INTEGER_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2c_ASN1_INTEGER 168 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x168, i2c_ASN1_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase c2i_ASN1_INTEGER 16e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16e, c2i_ASN1_INTEGER(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_UINTEGER 174 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x174, d2i_ASN1_UINTEGER(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_dup 17a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17a, ASN1_INTEGER_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_cmp 180 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x180, ASN1_INTEGER_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_new 186 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x186, ASN1_ENUMERATED_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_free 18c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18c, ASN1_ENUMERATED_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_ENUMERATED 192 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x192, d2i_ASN1_ENUMERATED(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_ENUMERATED 198 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x198, i2d_ASN1_ENUMERATED(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_it 19e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19e, ASN1_ENUMERATED_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_check 1a4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a4, ASN1_UTCTIME_check(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_set 1aa 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1aa, ASN1_UTCTIME_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_set_string 1b0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b0, ASN1_UTCTIME_set_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_cmp_time_t 1b6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b6, ASN1_UTCTIME_cmp_time_t(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_check 1bc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bc, ASN1_GENERALIZEDTIME_check(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_set 1c2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c2, ASN1_GENERALIZEDTIME_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_set_string 1c8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c8, ASN1_GENERALIZEDTIME_set_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_new 1ce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ce, ASN1_OCTET_STRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_free 1d4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d4, ASN1_OCTET_STRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_OCTET_STRING 1da 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1da, d2i_ASN1_OCTET_STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_OCTET_STRING 1e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e0, i2d_ASN1_OCTET_STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_it 1e6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e6, ASN1_OCTET_STRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_dup 1ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ec, ASN1_OCTET_STRING_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_cmp 1f2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f2, ASN1_OCTET_STRING_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_set 1f8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f8, ASN1_OCTET_STRING_set(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_VISIBLESTRING_new 1fe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fe, ASN1_VISIBLESTRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_VISIBLESTRING_free 204 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x204, ASN1_VISIBLESTRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_VISIBLESTRING 20a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20a, d2i_ASN1_VISIBLESTRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_VISIBLESTRING 210 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x210, i2d_ASN1_VISIBLESTRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_VISIBLESTRING_it 216 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x216, ASN1_VISIBLESTRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UNIVERSALSTRING_new 21c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21c, ASN1_UNIVERSALSTRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UNIVERSALSTRING_free 222 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x222, ASN1_UNIVERSALSTRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_UNIVERSALSTRING 228 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x228, d2i_ASN1_UNIVERSALSTRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_UNIVERSALSTRING 22e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22e, i2d_ASN1_UNIVERSALSTRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UNIVERSALSTRING_it 234 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x234, ASN1_UNIVERSALSTRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTF8STRING_new 23a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23a, ASN1_UTF8STRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTF8STRING_free 240 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x240, ASN1_UTF8STRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_UTF8STRING 246 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x246, d2i_ASN1_UTF8STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_UTF8STRING 24c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24c, i2d_ASN1_UTF8STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTF8STRING_it 252 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x252, ASN1_UTF8STRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_NULL_new 258 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x258, ASN1_NULL_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_NULL_free 25e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25e, ASN1_NULL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_NULL 264 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x264, d2i_ASN1_NULL(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_NULL 26a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26a, i2d_ASN1_NULL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_NULL_it 270 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x270, ASN1_NULL_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BMPSTRING_new 276 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x276, ASN1_BMPSTRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BMPSTRING_free 27c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27c, ASN1_BMPSTRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_BMPSTRING 282 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x282, d2i_ASN1_BMPSTRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_BMPSTRING 288 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x288, i2d_ASN1_BMPSTRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BMPSTRING_it 28e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28e, ASN1_BMPSTRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UTF8_getc 294 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x294, UTF8_getc(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UTF8_putc 29a 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29a, UTF8_putc(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLE_new 2a0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a0, ASN1_PRINTABLE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLE_free 2a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a6, ASN1_PRINTABLE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_PRINTABLE 2ac 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ac, d2i_ASN1_PRINTABLE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_PRINTABLE 2b2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b2, i2d_ASN1_PRINTABLE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLE_it 2b8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b8, ASN1_PRINTABLE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIRECTORYSTRING_new 2be 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2be, DIRECTORYSTRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIRECTORYSTRING_free 2c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c4, DIRECTORYSTRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DIRECTORYSTRING 2ca 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ca, d2i_DIRECTORYSTRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DIRECTORYSTRING 2d0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d0, i2d_DIRECTORYSTRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIRECTORYSTRING_it 2d6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d6, DIRECTORYSTRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DISPLAYTEXT_new 2dc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dc, DISPLAYTEXT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DISPLAYTEXT_free 2e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e2, DISPLAYTEXT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DISPLAYTEXT 2e8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e8, d2i_DISPLAYTEXT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DISPLAYTEXT 2ee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ee, i2d_DISPLAYTEXT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DISPLAYTEXT_it 2f4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f4, DISPLAYTEXT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLESTRING_new 2fa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fa, ASN1_PRINTABLESTRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLESTRING_free 300 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x300, ASN1_PRINTABLESTRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_PRINTABLESTRING 306 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x306, d2i_ASN1_PRINTABLESTRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_PRINTABLESTRING 30c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30c, i2d_ASN1_PRINTABLESTRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLESTRING_it 312 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x312, ASN1_PRINTABLESTRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_T61STRING_new 318 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x318, ASN1_T61STRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_T61STRING_free 31e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31e, ASN1_T61STRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_T61STRING 324 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x324, d2i_ASN1_T61STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_T61STRING 32a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32a, i2d_ASN1_T61STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_T61STRING_it 330 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x330, ASN1_T61STRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_IA5STRING_new 336 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x336, ASN1_IA5STRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_IA5STRING_free 33c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33c, ASN1_IA5STRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_IA5STRING 342 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x342, d2i_ASN1_IA5STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_IA5STRING 348 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x348, i2d_ASN1_IA5STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_IA5STRING_it 34e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34e, ASN1_IA5STRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALSTRING_new 354 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x354, ASN1_GENERALSTRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALSTRING_free 35a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35a, ASN1_GENERALSTRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_GENERALSTRING 360 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x360, d2i_ASN1_GENERALSTRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_GENERALSTRING 366 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x366, i2d_ASN1_GENERALSTRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALSTRING_it 36c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36c, ASN1_GENERALSTRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_new 372 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x372, ASN1_UTCTIME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_free 378 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x378, ASN1_UTCTIME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_UTCTIME 37e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37e, d2i_ASN1_UTCTIME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_UTCTIME 384 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x384, i2d_ASN1_UTCTIME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_it 38a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38a, ASN1_UTCTIME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_new 390 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x390, ASN1_GENERALIZEDTIME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_free 396 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x396, ASN1_GENERALIZEDTIME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_GENERALIZEDTIME 39c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39c, d2i_ASN1_GENERALIZEDTIME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_GENERALIZEDTIME 3a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a2, i2d_ASN1_GENERALIZEDTIME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_it 3a8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a8, ASN1_GENERALIZEDTIME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_new 3ae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ae, ASN1_TIME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_free 3b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b4, ASN1_TIME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_TIME 3ba 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ba, d2i_ASN1_TIME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_TIME 3c0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c0, i2d_ASN1_TIME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_it 3c6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c6, ASN1_TIME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_set 3cc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cc, ASN1_TIME_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_check 3d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d2, ASN1_TIME_check(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_to_generalizedtime 3d8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d8, ASN1_TIME_to_generalizedtime(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_SET 3de 210a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3de, i2d_ASN1_SET(a0,a1,a2,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_SET 3e4 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e4, d2i_ASN1_SET(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2a_ASN1_INTEGER 3ea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ea, i2a_ASN1_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_ASN1_INTEGER 3f0 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f0, a2i_ASN1_INTEGER(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2a_ASN1_ENUMERATED 3f6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f6, i2a_ASN1_ENUMERATED(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_ASN1_ENUMERATED 3fc 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fc, a2i_ASN1_ENUMERATED(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2a_ASN1_OBJECT 402 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x402, i2a_ASN1_OBJECT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_ASN1_STRING 408 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x408, a2i_ASN1_STRING(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2a_ASN1_STRING 40e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x40e, i2a_ASN1_STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2t_ASN1_OBJECT 414 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x414, i2t_ASN1_OBJECT(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2d_ASN1_OBJECT 41a 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41a, a2d_ASN1_OBJECT(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OBJECT_create 420 a918005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x420, ASN1_OBJECT_create(d0,a0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_set 426 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x426, ASN1_INTEGER_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_get 42c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42c, ASN1_INTEGER_get(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_to_ASN1_INTEGER 432 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x432, BN_to_ASN1_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_to_BN 438 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x438, ASN1_INTEGER_to_BN(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_set 43e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43e, ASN1_ENUMERATED_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_get 444 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x444, ASN1_ENUMERATED_get(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_to_ASN1_ENUMERATED 44a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44a, BN_to_ASN1_ENUMERATED(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_to_BN 450 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x450, ASN1_ENUMERATED_to_BN(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLE_type 456 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x456, ASN1_PRINTABLE_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_bytes 45c 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45c, i2d_ASN1_bytes(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_bytes 462 2109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x462, d2i_ASN1_bytes(a0,a1,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_tag2bit 468 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x468, ASN1_tag2bit(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_type_bytes 46e 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46e, d2i_ASN1_type_bytes(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_Finish 474 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x474, asn1_Finish(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_get_object 47a 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47a, ASN1_get_object(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_check_infinite_end 480 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x480, ASN1_check_infinite_end(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_put_object 486 3210805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x486, ASN1_put_object(a0,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_object_size 48c 21003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48c, ASN1_object_size(d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_dup 492 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x492, ASN1_dup(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_dup 498 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x498, ASN1_item_dup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_to_UTF8 49e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49e, ASN1_STRING_to_UTF8(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_d2i_bio 4a4 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a4, ASN1_d2i_bio(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_d2i_bio 4aa a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4aa, ASN1_item_d2i_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_i2d_bio 4b0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b0, ASN1_i2d_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_i2d_bio 4b6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b6, ASN1_item_i2d_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_print 4bc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bc, ASN1_UTCTIME_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_print 4c2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4c2, ASN1_GENERALIZEDTIME_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_print 4c8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4c8, ASN1_TIME_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_print 4ce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ce, ASN1_STRING_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_print_ex 4d4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d4, ASN1_STRING_print_ex(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_parse 4da 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4da, ASN1_parse(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_parse_dump 4e0 2109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e0, ASN1_parse_dump(a0,a1,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_tag2str 4e6 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e6, ASN1_tag2str(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UNIVERSALSTRING_to_string 4ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ec, ASN1_UNIVERSALSTRING_to_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_set_octetstring 4f2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f2, ASN1_TYPE_set_octetstring(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_get_octetstring 4f8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f8, ASN1_TYPE_get_octetstring(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_set_int_octetstring 4fe 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fe, ASN1_TYPE_set_int_octetstring(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_get_int_octetstring 504 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x504, ASN1_TYPE_get_int_octetstring(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_seq_unpack 50a a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50a, ASN1_seq_unpack(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_seq_pack 510 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x510, ASN1_seq_pack(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_unpack_string 516 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x516, ASN1_unpack_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_unpack 51c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51c, ASN1_item_unpack(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_pack_string 522 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x522, ASN1_pack_string(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_pack 528 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x528, ASN1_item_pack(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_set_default_mask 52e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52e, ASN1_STRING_set_default_mask(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_set_default_mask_asc 534 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x534, ASN1_STRING_set_default_mask_asc(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_get_default_mask 53a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53a, ASN1_STRING_get_default_mask())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_mbstring_copy 540 2109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x540, ASN1_mbstring_copy(a0,a1,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_mbstring_ncopy 546 432109807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x546, ASN1_mbstring_ncopy(a0,a1,d0,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_set_by_NID 54c 2109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54c, ASN1_STRING_set_by_NID(a0,a1,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_TABLE_get 552 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x552, ASN1_STRING_TABLE_get(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_TABLE_add 558 4321005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x558, ASN1_STRING_TABLE_add(d0,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_TABLE_cleanup 55e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55e, ASN1_STRING_TABLE_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_new 564 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x564, ASN1_item_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_free 56a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56a, ASN1_item_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_d2i 570 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x570, ASN1_item_d2i(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_i2d 576 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x576, ASN1_item_i2d(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_add_oid_module 57c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57c, ASN1_add_oid_module())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_ASN1_strings 582 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x582, ERR_load_ASN1_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_GetSequence 588 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x588, asn1_GetSequence(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_add_error 58e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58e, asn1_add_error(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BOOLEAN_it 594 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x594, ASN1_BOOLEAN_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TBOOLEAN_it 59a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59a, ASN1_TBOOLEAN_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_FBOOLEAN_it 5a0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a0, ASN1_FBOOLEAN_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SEQUENCE_it 5a6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a6, ASN1_SEQUENCE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CBIGNUM_it 5ac 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ac, CBIGNUM_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIGNUM_it 5b2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b2, BIGNUM_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase LONG_it 5b8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b8, LONG_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ZLONG_it 5be 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5be, ZLONG_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_ex_new 5c4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c4, ASN1_item_ex_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_ex_free 5ca 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ca, ASN1_item_ex_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_template_new 5d0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d0, ASN1_template_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_primitive_new 5d6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d6, ASN1_primitive_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_template_free 5dc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dc, ASN1_template_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_template_d2i 5e2 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e2, ASN1_template_d2i(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_ex_d2i 5e8 b321a09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e8, ASN1_item_ex_d2i(a0,a1,d0,a2,d1,d2,d3,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_ex_i2d 5ee 10a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ee, ASN1_item_ex_i2d(a0,a1,a2,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_template_i2d 5f4 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f4, ASN1_template_i2d(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_primitive_free 5fa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fa, ASN1_primitive_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_ex_i2c 600 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x600, asn1_ex_i2c(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_ex_c2i 606 ba109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x606, asn1_ex_c2i(a0,a1,d0,d1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_get_choice_selector 60c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60c, asn1_get_choice_selector(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_set_choice_selector 612 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x612, asn1_set_choice_selector(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_get_field_ptr 618 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x618, asn1_get_field_ptr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_do_adb 61e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61e, asn1_do_adb(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_do_lock 624 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x624, asn1_do_lock(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_enc_init 62a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62a, asn1_enc_init(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_enc_free 630 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x630, asn1_enc_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_enc_restore 636 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x636, asn1_enc_restore(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_enc_save 63c a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63c, asn1_enc_save(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ctrl_pending 642 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x642, BIO_ctrl_pending(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ctrl_wpending 648 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x648, BIO_ctrl_wpending(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ctrl_get_write_guarantee 64e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64e, BIO_ctrl_get_write_guarantee(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ctrl_get_read_request 654 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x654, BIO_ctrl_get_read_request(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ctrl_reset_read_request 65a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65a, BIO_ctrl_reset_read_request(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set_ex_data 660 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x660, BIO_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_ex_data 666 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x666, BIO_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_ex_new_index 66c ba98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66c, BIO_get_ex_new_index(d0,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_number_read 672 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x672, BIO_number_read(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_number_written 678 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x678, BIO_number_written(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_file 67e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67e, BIO_s_file())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_file 684 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x684, BIO_new_file(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_fp_amiga 68a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68a, BIO_new_fp_amiga(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new 690 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x690, BIO_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set 696 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x696, BIO_set(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_free 69c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x69c, BIO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_vfree 6a2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6a2, BIO_vfree(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_read 6a8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6a8, BIO_read(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_gets 6ae 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6ae, BIO_gets(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_write 6b4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6b4, BIO_write(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_puts 6ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6ba, BIO_puts(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_indent 6c0 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6c0, BIO_indent(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ctrl 6c6 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6c6, BIO_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_callback_ctrl 6cc 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6cc, BIO_callback_ctrl(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ptr_ctrl 6d2 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6d2, BIO_ptr_ctrl(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_int_ctrl 6d8 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6d8, BIO_int_ctrl(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_push 6de 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6de, BIO_push(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_pop 6e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6e4, BIO_pop(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_free_all 6ea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6ea, BIO_free_all(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_find_type 6f0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6f0, BIO_find_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_next 6f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6f6, BIO_next(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_retry_BIO 6fc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6fc, BIO_get_retry_BIO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_retry_reason 702 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x702, BIO_get_retry_reason(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_dup_chain 708 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x708, BIO_dup_chain(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_nread0 70e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x70e, BIO_nread0(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_nread 714 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x714, BIO_nread(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_nwrite0 71a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x71a, BIO_nwrite0(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_nwrite 720 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x720, BIO_nwrite(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_debug_callback 726 32190806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x726, BIO_debug_callback(a0,d0,a1,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_mem 72c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x72c, BIO_s_mem())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_mem_buf 732 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x732, BIO_new_mem_buf(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_socket 738 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x738, BIO_s_socket())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_connect 73e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x73e, BIO_s_connect())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_accept 744 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x744, BIO_s_accept())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_fd 74a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x74a, BIO_s_fd())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_log 750 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x750, BIO_s_log())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_bio 756 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x756, BIO_s_bio())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_null 75c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x75c, BIO_s_null())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_null 762 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x762, BIO_f_null())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_buffer 768 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x768, BIO_f_buffer())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_nbio_test 76e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x76e, BIO_f_nbio_test())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_sock_should_retry 774 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x774, BIO_sock_should_retry(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_sock_non_fatal_error 77a 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x77a, BIO_sock_non_fatal_error(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_fd_should_retry 780 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x780, BIO_fd_should_retry(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_fd_non_fatal_error 786 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x786, BIO_fd_non_fatal_error(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_dump 78c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x78c, BIO_dump(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_dump_indent 792 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x792, BIO_dump_indent(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_gethostbyname 798 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x798, BIO_gethostbyname(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_sock_error 79e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x79e, BIO_sock_error(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_socket_ioctl 7a4 81003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7a4, BIO_socket_ioctl(d0,d1,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_socket_nbio 7aa 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7aa, BIO_socket_nbio(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_port 7b0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7b0, BIO_get_port(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_host_ip 7b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7b6, BIO_get_host_ip(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_accept_socket 7bc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7bc, BIO_get_accept_socket(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_accept 7c2 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7c2, BIO_accept(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_sock_init 7c8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7c8, BIO_sock_init())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_sock_cleanup 7ce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7ce, BIO_sock_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set_tcp_ndelay 7d4 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7d4, BIO_set_tcp_ndelay(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_socket 7da 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7da, BIO_new_socket(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_fd 7e0 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7e0, BIO_new_fd(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_connect 7e6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7e6, BIO_new_connect(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_accept 7ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7ec, BIO_new_accept(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_bio_pair 7f2 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7f2, BIO_new_bio_pair(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_copy_next_retry 7f8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7f8, BIO_copy_next_retry(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_vprintf 7fe a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7fe, BIO_vprintf(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLBase BIO_printf 7fe a9803
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLBase, 0x7fe, BIO_printf(a0,a1,a2))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_vsnprintf 804 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x804, BIO_vsnprintf(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLBase BIO_snprintf 804 a90804
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLBase, 0x804, BIO_snprintf(a0,d0,a1,a2))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_BIO_strings 80a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x80a, ERR_load_BIO_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_value_one 810 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x810, BN_value_one())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_options 816 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x816, BN_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_CTX_new 81c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x81c, BN_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_CTX_init 822 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x822, BN_CTX_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_CTX_free 828 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x828, BN_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_CTX_start 82e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x82e, BN_CTX_start(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_CTX_get 834 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x834, BN_CTX_get(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_CTX_end 83a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x83a, BN_CTX_end(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_rand 840 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x840, BN_rand(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_pseudo_rand 846 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x846, BN_pseudo_rand(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_rand_range 84c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x84c, BN_rand_range(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_pseudo_rand_range 852 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x852, BN_pseudo_rand_range(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_num_bits 858 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x858, BN_num_bits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_num_bits_word 85e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x85e, BN_num_bits_word(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_new 864 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x864, BN_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_init 86a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x86a, BN_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_clear_free 870 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x870, BN_clear_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_copy 876 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x876, BN_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_swap 87c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x87c, BN_swap(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bin2bn 882 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x882, BN_bin2bn(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bn2bin 888 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x888, BN_bn2bin(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mpi2bn 88e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x88e, BN_mpi2bn(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bn2mpi 894 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x894, BN_bn2mpi(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_sub 89a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x89a, BN_sub(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_usub 8a0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8a0, BN_usub(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_uadd 8a6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8a6, BN_uadd(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_add 8ac a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8ac, BN_add(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mul 8b2 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8b2, BN_mul(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_sqr 8b8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8b8, BN_sqr(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_div 8be 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8be, BN_div(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nnmod 8c4 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8c4, BN_nnmod(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_add 8ca 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8ca, BN_mod_add(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_add_quick 8d0 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8d0, BN_mod_add_quick(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_sub 8d6 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8d6, BN_mod_sub(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_sub_quick 8dc ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8dc, BN_mod_sub_quick(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_mul 8e2 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8e2, BN_mod_mul(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_sqr 8e8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8e8, BN_mod_sqr(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_lshift1 8ee ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8ee, BN_mod_lshift1(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_lshift1_quick 8f4 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8f4, BN_mod_lshift1_quick(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_lshift 8fa ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8fa, BN_mod_lshift(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_lshift_quick 900 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x900, BN_mod_lshift_quick(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_word 906 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x906, BN_mod_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_div_word 90c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x90c, BN_div_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mul_word 912 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x912, BN_mul_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_add_word 918 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x918, BN_add_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_sub_word 91e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x91e, BN_sub_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_set_word 924 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x924, BN_set_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get_word 92a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x92a, BN_get_word(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_cmp 930 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x930, BN_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_free 936 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x936, BN_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_bit_set 93c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x93c, BN_is_bit_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_lshift 942 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x942, BN_lshift(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_lshift1 948 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x948, BN_lshift1(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_exp 94e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x94e, BN_exp(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp 954 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x954, BN_mod_exp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp_mont 95a 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x95a, BN_mod_exp_mont(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp_mont_word 960 1ba90806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x960, BN_mod_exp_mont_word(a0,d0,a1,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp2_mont 966 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x966, BN_mod_exp2_mont(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp_simple 96c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x96c, BN_mod_exp_simple(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mask_bits 972 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x972, BN_mask_bits(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_print 978 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x978, BN_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_reciprocal 97e a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x97e, BN_reciprocal(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_rshift 984 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x984, BN_rshift(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_rshift1 98a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x98a, BN_rshift1(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_clear 990 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x990, BN_clear(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_dup 996 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x996, BN_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_ucmp 99c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x99c, BN_ucmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_set_bit 9a2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9a2, BN_set_bit(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_clear_bit 9a8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9a8, BN_clear_bit(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bn2hex 9ae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9ae, BN_bn2hex(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bn2dec 9b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9b4, BN_bn2dec(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_hex2bn 9ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9ba, BN_hex2bn(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_dec2bn 9c0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9c0, BN_dec2bn(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_gcd 9c6 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9c6, BN_gcd(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_kronecker 9cc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9cc, BN_kronecker(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_inverse 9d2 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9d2, BN_mod_inverse(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_sqrt 9d8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9d8, BN_mod_sqrt(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_generate_prime 9de 2ba910807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9de, BN_generate_prime(a0,d0,d1,a1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_prime 9e4 ba90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9e4, BN_is_prime(a0,d0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_prime_fasttest 9ea 1ba90806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9ea, BN_is_prime_fasttest(a0,d0,a1,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_MONT_CTX_new 9f0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9f0, BN_MONT_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_MONT_CTX_init 9f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9f6, BN_MONT_CTX_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_mul_montgomery 9fc 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9fc, BN_mod_mul_montgomery(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_from_montgomery a02 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa02, BN_from_montgomery(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_MONT_CTX_free a08 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa08, BN_MONT_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_MONT_CTX_set a0e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa0e, BN_MONT_CTX_set(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_MONT_CTX_copy a14 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa14, BN_MONT_CTX_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_new a1a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa1a, BN_BLINDING_new(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_free a20 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa20, BN_BLINDING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_update a26 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa26, BN_BLINDING_update(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_convert a2c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa2c, BN_BLINDING_convert(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_invert a32 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa32, BN_BLINDING_invert(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_set_params a38 321004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa38, BN_set_params(d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get_params a3e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa3e, BN_get_params(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_RECP_CTX_init a44 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa44, BN_RECP_CTX_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_RECP_CTX_new a4a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa4a, BN_RECP_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_RECP_CTX_free a50 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa50, BN_RECP_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_RECP_CTX_set a56 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa56, BN_RECP_CTX_set(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_mul_reciprocal a5c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa5c, BN_mod_mul_reciprocal(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp_recp a62 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa62, BN_mod_exp_recp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_div_recp a68 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa68, BN_div_recp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase bn_expand2 a6e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa6e, bn_expand2(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase bn_dup_expand a74 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa74, bn_dup_expand(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase bn_mul_add_words a7a 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa7a, bn_mul_add_words(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase bn_mul_words a80 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa80, bn_mul_words(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase bn_sqr_words a86 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa86, bn_sqr_words(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase bn_div_words a8c 21003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa8c, bn_div_words(d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase bn_add_words a92 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa92, bn_add_words(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase bn_sub_words a98 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa98, bn_sub_words(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bntest_rand a9e 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa9e, BN_bntest_rand(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_BN_strings aa4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xaa4, ERR_load_BN_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_MEM_new aaa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xaaa, BUF_MEM_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_MEM_free ab0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xab0, BUF_MEM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_MEM_grow ab6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xab6, BUF_MEM_grow(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_MEM_grow_clean abc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xabc, BUF_MEM_grow_clean(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_strdup ac2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xac2, BUF_strdup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_strlcpy ac8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xac8, BUF_strlcpy(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_strlcat ace 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xace, BUF_strlcat(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_BUF_strings ad4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xad4, ERR_load_BUF_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_CTX_new ada 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xada, COMP_CTX_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_CTX_free ae0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xae0, COMP_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_compress_block ae6 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xae6, COMP_compress_block(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_expand_block aec 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xaec, COMP_expand_block(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_rle af2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xaf2, COMP_rle())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_zlib af8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xaf8, COMP_zlib())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_COMP_strings afe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xafe, ERR_load_COMP_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_set_default_method b04 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb04, CONF_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_set_nconf b0a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb0a, CONF_set_nconf(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_load b10 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb10, CONF_load(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_load_bio b16 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb16, CONF_load_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_get_section b1c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb1c, CONF_get_section(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_get_string b22 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb22, CONF_get_string(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_get_number b28 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb28, CONF_get_number(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_free b2e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb2e, CONF_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_dump_bio b34 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb34, CONF_dump_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_config b3a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb3a, OPENSSL_config(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_no_config b40 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb40, OPENSSL_no_config())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_new b46 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb46, NCONF_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_default b4c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb4c, NCONF_default())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_WIN32 b52 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb52, NCONF_WIN32())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_free b58 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb58, NCONF_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_free_data b5e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb5e, NCONF_free_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_load b64 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb64, NCONF_load(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_load_bio b6a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb6a, NCONF_load_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_get_section b70 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb70, NCONF_get_section(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_get_string b76 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb76, NCONF_get_string(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_get_number_e b7c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb7c, NCONF_get_number_e(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_dump_bio b82 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb82, NCONF_dump_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_modules_load b88 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb88, CONF_modules_load(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_modules_load_file b8e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb8e, CONF_modules_load_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_modules_unload b94 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb94, CONF_modules_unload(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_modules_finish b9a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb9a, CONF_modules_finish())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_modules_free ba0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xba0, CONF_modules_free())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_module_add ba6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xba6, CONF_module_add(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_get_name bac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbac, CONF_imodule_get_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_get_value bb2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbb2, CONF_imodule_get_value(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_get_usr_data bb8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbb8, CONF_imodule_get_usr_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_set_usr_data bbe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbbe, CONF_imodule_set_usr_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_get_module bc4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbc4, CONF_imodule_get_module(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_get_flags bca 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbca, CONF_imodule_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_set_flags bd0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbd0, CONF_imodule_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_module_get_usr_data bd6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbd6, CONF_module_get_usr_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_module_set_usr_data bdc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbdc, CONF_module_set_usr_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_get1_default_config_file be2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbe2, CONF_get1_default_config_file())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_parse_list be8 a910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbe8, CONF_parse_list(a0,d0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_load_builtin_modules bee 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbee, OPENSSL_load_builtin_modules())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_CONF_strings bf4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbf4, ERR_load_CONF_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _CONF_new_section bfa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbfa, _CONF_new_section(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _CONF_get_section c00 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc00, _CONF_get_section(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _CONF_get_section_values c06 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc06, _CONF_get_section_values(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _CONF_add_string c0c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc0c, _CONF_add_string(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _CONF_get_string c12 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc12, _CONF_get_string(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _CONF_new_data c18 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc18, _CONF_new_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _CONF_free_data c1e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc1e, _CONF_free_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_mem_ctrl c24 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc24, CRYPTO_mem_ctrl(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_is_mem_check_on c2a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc2a, CRYPTO_is_mem_check_on())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLeay_version c30 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc30, SSLeay_version(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLeay c36 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc36, SSLeay())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_issetugid c3c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc3c, OPENSSL_issetugid())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_ex_data_implementation c42 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc42, CRYPTO_get_ex_data_implementation())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_ex_data_implementation c48 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc48, CRYPTO_set_ex_data_implementation(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ex_data_new_class c4e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc4e, CRYPTO_ex_data_new_class())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_ex_new_index c54 ba981006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc54, CRYPTO_get_ex_new_index(d0,d1,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_new_ex_data c5a 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc5a, CRYPTO_new_ex_data(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_dup_ex_data c60 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc60, CRYPTO_dup_ex_data(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_free_ex_data c66 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc66, CRYPTO_free_ex_data(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_ex_data c6c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc6c, CRYPTO_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_ex_data c72 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc72, CRYPTO_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cleanup_all_ex_data c78 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc78, CRYPTO_cleanup_all_ex_data())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_new_lockid c7e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc7e, CRYPTO_get_new_lockid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_num_locks c84 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc84, CRYPTO_num_locks())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_lock c8a 281004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc8a, CRYPTO_lock(d0,d1,a0,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_locking_callback c90 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc90, CRYPTO_set_locking_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_locking_callback c96 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc96, CRYPTO_get_locking_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_add_lock_callback c9c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc9c, CRYPTO_set_add_lock_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_add_lock_callback ca2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xca2, CRYPTO_get_add_lock_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_id_callback ca8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xca8, CRYPTO_set_id_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_id_callback cae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcae, CRYPTO_get_id_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_thread_id cb4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcb4, CRYPTO_thread_id())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_lock_name cba 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcba, CRYPTO_get_lock_name(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_add_lock cc0 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcc0, CRYPTO_add_lock(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_new_dynlockid cc6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcc6, CRYPTO_get_new_dynlockid())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_destroy_dynlockid ccc 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xccc, CRYPTO_destroy_dynlockid(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_dynlock_value cd2 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcd2, CRYPTO_get_dynlock_value(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_dynlock_create_callback cd8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcd8, CRYPTO_set_dynlock_create_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_dynlock_lock_callback cde 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcde, CRYPTO_set_dynlock_lock_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_dynlock_destroy_callback ce4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xce4, CRYPTO_set_dynlock_destroy_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_dynlock_create_callback cea 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcea, CRYPTO_get_dynlock_create_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_dynlock_lock_callback cf0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcf0, CRYPTO_get_dynlock_lock_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_dynlock_destroy_callback cf6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcf6, CRYPTO_get_dynlock_destroy_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_mem_functions cfc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcfc, CRYPTO_set_mem_functions(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_locked_mem_functions d02 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd02, CRYPTO_set_locked_mem_functions(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_mem_ex_functions d08 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd08, CRYPTO_set_mem_ex_functions(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_locked_mem_ex_functions d0e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd0e, CRYPTO_set_locked_mem_ex_functions(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_mem_debug_functions d14 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd14, CRYPTO_set_mem_debug_functions(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_mem_functions d1a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd1a, CRYPTO_get_mem_functions(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_locked_mem_functions d20 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd20, CRYPTO_get_locked_mem_functions(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_mem_ex_functions d26 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd26, CRYPTO_get_mem_ex_functions(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_locked_mem_ex_functions d2c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd2c, CRYPTO_get_locked_mem_ex_functions(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_mem_debug_functions d32 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd32, CRYPTO_get_mem_debug_functions(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_malloc_locked d38 18003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd38, CRYPTO_malloc_locked(d0,a0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_free_locked d3e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd3e, CRYPTO_free_locked(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_malloc d44 18003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd44, CRYPTO_malloc(d0,a0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_free d4a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd4a, CRYPTO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_realloc d50 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd50, CRYPTO_realloc(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_realloc_clean d56 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd56, CRYPTO_realloc_clean(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_remalloc d5c 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd5c, CRYPTO_remalloc(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_cleanse d62 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd62, OPENSSL_cleanse(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_mem_debug_options d68 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd68, CRYPTO_set_mem_debug_options(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_mem_debug_options d6e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd6e, CRYPTO_get_mem_debug_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_push_info_ d74 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd74, CRYPTO_push_info_(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_pop_info d7a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd7a, CRYPTO_pop_info())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_remove_all_info d80 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd80, CRYPTO_remove_all_info())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_dbg_malloc d86 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd86, CRYPTO_dbg_malloc(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_dbg_realloc d8c 21a09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd8c, CRYPTO_dbg_realloc(a0,a1,d0,a2,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_dbg_free d92 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd92, CRYPTO_dbg_free(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_dbg_set_options d98 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd98, CRYPTO_dbg_set_options(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_dbg_get_options d9e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd9e, CRYPTO_dbg_get_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_mem_leaks da4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xda4, CRYPTO_mem_leaks(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_mem_leaks_cb daa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdaa, CRYPTO_mem_leaks_cb(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OpenSSLDie db0 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdb0, OpenSSLDie(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_CRYPTO_strings db6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdb6, ERR_load_CRYPTO_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_new dbc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdbc, DSO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_new_method dc2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdc2, DSO_new_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_free dc8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdc8, DSO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_flags dce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdce, DSO_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_up_ref dd4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdd4, DSO_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_ctrl dda 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdda, DSO_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_set_name_converter de0 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xde0, DSO_set_name_converter(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_get_filename de6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xde6, DSO_get_filename(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_set_filename dec 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdec, DSO_set_filename(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_convert_filename df2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdf2, DSO_convert_filename(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_get_loaded_filename df8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdf8, DSO_get_loaded_filename(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_set_default_method dfe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdfe, DSO_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_get_default_method e04 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe04, DSO_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_get_method e0a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe0a, DSO_get_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_set_method e10 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe10, DSO_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_load e16 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe16, DSO_load(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_bind_var e1c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe1c, DSO_bind_var(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_bind_func e22 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe22, DSO_bind_func(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_openssl e28 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe28, DSO_METHOD_openssl())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_null e2e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe2e, DSO_METHOD_null())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_dlfcn e34 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe34, DSO_METHOD_dlfcn())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_dl e3a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe3a, DSO_METHOD_dl())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_win32 e40 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe40, DSO_METHOD_win32())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_vms e46 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe46, DSO_METHOD_vms())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_DSO_strings e4c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe4c, ERR_load_DSO_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GFp_simple_method e52 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe52, EC_GFp_simple_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GFp_mont_method e58 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe58, EC_GFp_mont_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_new e5e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe5e, EC_GROUP_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_free e64 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe64, EC_GROUP_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_clear_free e6a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe6a, EC_GROUP_clear_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_copy e70 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe70, EC_GROUP_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_method_of e76 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe76, EC_GROUP_method_of(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_curve_GFp e7c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe7c, EC_GROUP_set_curve_GFp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_curve_GFp e82 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe82, EC_GROUP_get_curve_GFp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_new_curve_GFp e88 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe88, EC_GROUP_new_curve_GFp(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_generator e8e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe8e, EC_GROUP_set_generator(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get0_generator e94 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe94, EC_GROUP_get0_generator(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_order e9a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe9a, EC_GROUP_get_order(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_cofactor ea0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xea0, EC_GROUP_get_cofactor(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_new ea6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xea6, EC_POINT_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_free eac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xeac, EC_POINT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_clear_free eb2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xeb2, EC_POINT_clear_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_copy eb8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xeb8, EC_POINT_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_method_of ebe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xebe, EC_POINT_method_of(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_set_to_infinity ec4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xec4, EC_POINT_set_to_infinity(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_set_Jprojective_coordinates_GFp eca 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xeca, EC_POINT_set_Jprojective_coordinates_GFp(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_get_Jprojective_coordinates_GFp ed0 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xed0, EC_POINT_get_Jprojective_coordinates_GFp(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_set_affine_coordinates_GFp ed6 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xed6, EC_POINT_set_affine_coordinates_GFp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_get_affine_coordinates_GFp edc 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xedc, EC_POINT_get_affine_coordinates_GFp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_set_compressed_coordinates_GFp ee2 b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xee2, EC_POINT_set_compressed_coordinates_GFp(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_point2oct ee8 b1a09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xee8, EC_POINT_point2oct(a0,a1,d0,a2,d1,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_oct2point eee b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xeee, EC_POINT_oct2point(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_add ef4 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xef4, EC_POINT_add(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_dbl efa ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xefa, EC_POINT_dbl(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_invert f00 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf00, EC_POINT_invert(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_is_at_infinity f06 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf06, EC_POINT_is_at_infinity(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_is_on_curve f0c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf0c, EC_POINT_is_on_curve(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_cmp f12 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf12, EC_POINT_cmp(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_make_affine f18 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf18, EC_POINT_make_affine(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINTs_make_affine f1e a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf1e, EC_POINTs_make_affine(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINTs_mul f24 21b0a9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf24, EC_POINTs_mul(a0,a1,a2,d0,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_mul f2a 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf2a, EC_POINT_mul(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_precompute_mult f30 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf30, EC_GROUP_precompute_mult(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_EC_strings f36 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf36, ERR_load_EC_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_put_error f3c 3821005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf3c, ERR_put_error(d0,d1,d2,a0,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_set_error_data f42 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf42, ERR_set_error_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_error f48 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf48, ERR_get_error())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_error_line f4e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf4e, ERR_get_error_line(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_error_line_data f54 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf54, ERR_get_error_line_data(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_peek_error f5a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf5a, ERR_peek_error())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_peek_error_line f60 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf60, ERR_peek_error_line(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_peek_error_line_data f66 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf66, ERR_peek_error_line_data(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_peek_last_error f6c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf6c, ERR_peek_last_error())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_peek_last_error_line f72 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf72, ERR_peek_last_error_line(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_peek_last_error_line_data f78 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf78, ERR_peek_last_error_line_data(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_clear_error f7e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf7e, ERR_clear_error())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_error_string f84 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf84, ERR_error_string(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_error_string_n f8a 18003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf8a, ERR_error_string_n(d0,a0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_lib_error_string f90 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf90, ERR_lib_error_string(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_func_error_string f96 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf96, ERR_func_error_string(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_reason_error_string f9c 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf9c, ERR_reason_error_string(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_print_errors_cb fa2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfa2, ERR_print_errors_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_print_errors fa8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfa8, ERR_print_errors(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_add_error_vdata fae 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfae, ERR_add_error_vdata(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLBase ERR_add_error_data fae 8002
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLBase, 0xfae, ERR_add_error_data(d0,a0))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_strings fb4 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfb4, ERR_load_strings(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_unload_strings fba 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfba, ERR_unload_strings(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_ERR_strings fc0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfc0, ERR_load_ERR_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_crypto_strings fc6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfc6, ERR_load_crypto_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_free_strings fcc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfcc, ERR_free_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_remove_state fd2 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfd2, ERR_remove_state(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_state fd8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfd8, ERR_get_state())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_string_table fde 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfde, ERR_get_string_table())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_err_state_table fe4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfe4, ERR_get_err_state_table())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_release_err_state_table fea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfea, ERR_release_err_state_table(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_next_error_library ff0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xff0, ERR_get_next_error_library())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_implementation ff6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xff6, ERR_get_implementation())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_set_implementation ffc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xffc, ERR_set_implementation(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_init 1002 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1002, EVP_MD_CTX_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_cleanup 1008 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1008, EVP_MD_CTX_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_create 100e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x100e, EVP_MD_CTX_create())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_destroy 1014 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1014, EVP_MD_CTX_destroy(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_copy_ex 101a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x101a, EVP_MD_CTX_copy_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestInit_ex 1020 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1020, EVP_DigestInit_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestUpdate 1026 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1026, EVP_DigestUpdate(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestFinal_ex 102c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x102c, EVP_DigestFinal_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_Digest 1032 1ba90806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1032, EVP_Digest(a0,d0,a1,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_copy 1038 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1038, EVP_MD_CTX_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestInit 103e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x103e, EVP_DigestInit(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestFinal 1044 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1044, EVP_DigestFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_read_pw_string 104a 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x104a, EVP_read_pw_string(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_set_pw_prompt 1050 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1050, EVP_set_pw_prompt(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_get_pw_prompt 1056 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1056, EVP_get_pw_prompt())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_BytesToKey 105c 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x105c, EVP_BytesToKey(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncryptInit 1062 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1062, EVP_EncryptInit(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncryptInit_ex 1068 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1068, EVP_EncryptInit_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncryptUpdate 106e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x106e, EVP_EncryptUpdate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncryptFinal_ex 1074 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1074, EVP_EncryptFinal_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncryptFinal 107a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x107a, EVP_EncryptFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecryptInit 1080 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1080, EVP_DecryptInit(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecryptInit_ex 1086 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1086, EVP_DecryptInit_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecryptUpdate 108c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x108c, EVP_DecryptUpdate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecryptFinal 1092 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1092, EVP_DecryptFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecryptFinal_ex 1098 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1098, EVP_DecryptFinal_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CipherInit 109e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x109e, EVP_CipherInit(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CipherInit_ex 10a4 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10a4, EVP_CipherInit_ex(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CipherUpdate 10aa 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10aa, EVP_CipherUpdate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CipherFinal 10b0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10b0, EVP_CipherFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CipherFinal_ex 10b6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10b6, EVP_CipherFinal_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_SignFinal 10bc ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10bc, EVP_SignFinal(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_VerifyFinal 10c2 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10c2, EVP_VerifyFinal(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_OpenInit 10c8 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10c8, EVP_OpenInit(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_OpenFinal 10ce a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10ce, EVP_OpenFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_SealInit 10d4 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10d4, EVP_SealInit(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_SealFinal 10da a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10da, EVP_SealFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncodeInit 10e0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10e0, EVP_EncodeInit(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncodeUpdate 10e6 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10e6, EVP_EncodeUpdate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncodeFinal 10ec a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10ec, EVP_EncodeFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncodeBlock 10f2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10f2, EVP_EncodeBlock(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecodeInit 10f8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10f8, EVP_DecodeInit(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecodeUpdate 10fe 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10fe, EVP_DecodeUpdate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecodeFinal 1104 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1104, EVP_DecodeFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecodeBlock 110a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x110a, EVP_DecodeBlock(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_init 1110 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1110, EVP_CIPHER_CTX_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_cleanup 1116 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1116, EVP_CIPHER_CTX_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_set_key_length 111c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x111c, EVP_CIPHER_CTX_set_key_length(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_set_padding 1122 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1122, EVP_CIPHER_CTX_set_padding(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_ctrl 1128 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1128, EVP_CIPHER_CTX_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_md 112e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x112e, BIO_f_md())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_base64 1134 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1134, BIO_f_base64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_cipher 113a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x113a, BIO_f_cipher())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_reliable 1140 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1140, BIO_f_reliable())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set_cipher 1146 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1146, BIO_set_cipher(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_md_null 114c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x114c, EVP_md_null())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_md2 1152 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1152, EVP_md2())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_md4 1158 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1158, EVP_md4())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_md5 115e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x115e, EVP_md5())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_sha 1164 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1164, EVP_sha())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_sha1 116a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x116a, EVP_sha1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_dss 1170 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1170, EVP_dss())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_dss1 1176 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1176, EVP_dss1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_mdc2 117c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x117c, EVP_mdc2())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_ripemd160 1182 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1182, EVP_ripemd160())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_enc_null 1188 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1188, EVP_enc_null())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ecb 118e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x118e, EVP_des_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede 1194 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1194, EVP_des_ede())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3 119a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x119a, EVP_des_ede3())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede_ecb 11a0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11a0, EVP_des_ede_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_ecb 11a6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11a6, EVP_des_ede3_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_cfb64 11ac 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11ac, EVP_des_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_cfb1 11b2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11b2, EVP_des_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_cfb8 11b8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11b8, EVP_des_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede_cfb64 11be 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11be, EVP_des_ede_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_cfb64 11c4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11c4, EVP_des_ede3_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_cfb1 11ca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11ca, EVP_des_ede3_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_cfb8 11d0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11d0, EVP_des_ede3_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ofb 11d6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11d6, EVP_des_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede_ofb 11dc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11dc, EVP_des_ede_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_ofb 11e2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11e2, EVP_des_ede3_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_cbc 11e8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11e8, EVP_des_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede_cbc 11ee 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11ee, EVP_des_ede_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_cbc 11f4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11f4, EVP_des_ede3_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_desx_cbc 11fa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11fa, EVP_desx_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc4 1200 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1200, EVP_rc4())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc4_40 1206 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1206, EVP_rc4_40())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_idea_ecb 120c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x120c, EVP_idea_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_idea_cfb64 1212 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1212, EVP_idea_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_idea_ofb 1218 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1218, EVP_idea_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_idea_cbc 121e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x121e, EVP_idea_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc2_ecb 1224 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1224, EVP_rc2_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc2_cbc 122a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x122a, EVP_rc2_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc2_40_cbc 1230 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1230, EVP_rc2_40_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc2_64_cbc 1236 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1236, EVP_rc2_64_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc2_cfb64 123c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x123c, EVP_rc2_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc2_ofb 1242 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1242, EVP_rc2_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_bf_ecb 1248 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1248, EVP_bf_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_bf_cbc 124e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x124e, EVP_bf_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_bf_cfb64 1254 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1254, EVP_bf_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_bf_ofb 125a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x125a, EVP_bf_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_cast5_ecb 1260 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1260, EVP_cast5_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_cast5_cbc 1266 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1266, EVP_cast5_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_cast5_cfb64 126c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x126c, EVP_cast5_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_cast5_ofb 1272 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1272, EVP_cast5_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc5_32_12_16_cbc 1278 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1278, EVP_rc5_32_12_16_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc5_32_12_16_ecb 127e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x127e, EVP_rc5_32_12_16_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc5_32_12_16_cfb64 1284 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1284, EVP_rc5_32_12_16_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc5_32_12_16_ofb 128a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x128a, EVP_rc5_32_12_16_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_ecb 1290 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1290, EVP_aes_128_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_cbc 1296 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1296, EVP_aes_128_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_cfb1 129c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x129c, EVP_aes_128_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_cfb8 12a2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12a2, EVP_aes_128_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_cfb128 12a8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12a8, EVP_aes_128_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_ofb 12ae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12ae, EVP_aes_128_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_ecb 12b4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12b4, EVP_aes_192_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_cbc 12ba 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12ba, EVP_aes_192_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_cfb1 12c0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12c0, EVP_aes_192_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_cfb8 12c6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12c6, EVP_aes_192_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_cfb128 12cc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12cc, EVP_aes_192_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_ofb 12d2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12d2, EVP_aes_192_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_ecb 12d8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12d8, EVP_aes_256_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_cbc 12de 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12de, EVP_aes_256_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_cfb1 12e4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12e4, EVP_aes_256_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_cfb8 12ea 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12ea, EVP_aes_256_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_cfb128 12f0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12f0, EVP_aes_256_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_ofb 12f6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12f6, EVP_aes_256_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_add_all_algorithms_noconf 12fc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12fc, OPENSSL_add_all_algorithms_noconf())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_add_all_algorithms_conf 1302 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1302, OPENSSL_add_all_algorithms_conf())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OpenSSL_add_all_ciphers 1308 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1308, OpenSSL_add_all_ciphers())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OpenSSL_add_all_digests 130e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x130e, OpenSSL_add_all_digests())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_add_cipher 1314 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1314, EVP_add_cipher(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_add_digest 131a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x131a, EVP_add_digest(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_get_cipherbyname 1320 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1320, EVP_get_cipherbyname(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_get_digestbyname 1326 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1326, EVP_get_digestbyname(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_cleanup 132c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x132c, EVP_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_decrypt 1332 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1332, EVP_PKEY_decrypt(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_encrypt 1338 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1338, EVP_PKEY_encrypt(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_type 133e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x133e, EVP_PKEY_type(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_bits 1344 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1344, EVP_PKEY_bits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_size 134a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x134a, EVP_PKEY_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_assign 1350 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1350, EVP_PKEY_assign(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_set1_RSA 1356 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1356, EVP_PKEY_set1_RSA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get1_RSA 135c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x135c, EVP_PKEY_get1_RSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_set1_DSA 1362 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1362, EVP_PKEY_set1_DSA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get1_DSA 1368 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1368, EVP_PKEY_get1_DSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_set1_DH 136e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x136e, EVP_PKEY_set1_DH(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get1_DH 1374 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1374, EVP_PKEY_get1_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_new 137a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x137a, EVP_PKEY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_free 1380 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1380, EVP_PKEY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PublicKey 1386 198004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1386, d2i_PublicKey(d0,a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PublicKey 138c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x138c, i2d_PublicKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PrivateKey 1392 198004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1392, d2i_PrivateKey(d0,a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_AutoPrivateKey 1398 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1398, d2i_AutoPrivateKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PrivateKey 139e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x139e, i2d_PrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_copy_parameters 13a4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13a4, EVP_PKEY_copy_parameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_missing_parameters 13aa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13aa, EVP_PKEY_missing_parameters(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_save_parameters 13b0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13b0, EVP_PKEY_save_parameters(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_cmp_parameters 13b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13b6, EVP_PKEY_cmp_parameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_type 13bc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13bc, EVP_CIPHER_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_param_to_asn1 13c2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13c2, EVP_CIPHER_param_to_asn1(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_asn1_to_param 13c8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13c8, EVP_CIPHER_asn1_to_param(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_set_asn1_iv 13ce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13ce, EVP_CIPHER_set_asn1_iv(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_get_asn1_iv 13d4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13d4, EVP_CIPHER_get_asn1_iv(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_PBE_keyivgen 13da 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13da, PKCS5_PBE_keyivgen(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_PBKDF2_HMAC_SHA1 13e0 a32190807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13e0, PKCS5_PBKDF2_HMAC_SHA1(a0,d0,a1,d1,d2,d3,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_v2_PBE_keyivgen 13e6 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13e6, PKCS5_v2_PBE_keyivgen(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_PBE_add 13ec 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13ec, PKCS5_PBE_add())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PBE_CipherInit 13f2 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13f2, EVP_PBE_CipherInit(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PBE_alg_add 13f8 a98004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13f8, EVP_PBE_alg_add(d0,a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PBE_cleanup 13fe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13fe, EVP_PBE_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_EVP_strings 1404 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1404, ERR_load_EVP_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_CTX_init 140a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x140a, HMAC_CTX_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_CTX_cleanup 1410 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1410, HMAC_CTX_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_Init 1416 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1416, HMAC_Init(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_Init_ex 141c ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x141c, HMAC_Init_ex(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_Update 1422 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1422, HMAC_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_Final 1428 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1428, HMAC_Final(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC 142e 2b1a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x142e, HMAC(a0,a1,d0,a2,d1,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_ENCDATA_new 1434 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1434, KRB5_ENCDATA_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_ENCDATA_free 143a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x143a, KRB5_ENCDATA_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_KRB5_ENCDATA 1440 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1440, d2i_KRB5_ENCDATA(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_KRB5_ENCDATA 1446 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1446, i2d_KRB5_ENCDATA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_ENCDATA_it 144c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x144c, KRB5_ENCDATA_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_PRINCNAME_new 1452 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1452, KRB5_PRINCNAME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_PRINCNAME_free 1458 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1458, KRB5_PRINCNAME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_KRB5_PRINCNAME 145e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x145e, d2i_KRB5_PRINCNAME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_KRB5_PRINCNAME 1464 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1464, i2d_KRB5_PRINCNAME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_PRINCNAME_it 146a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x146a, KRB5_PRINCNAME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_TKTBODY_new 1470 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1470, KRB5_TKTBODY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_TKTBODY_free 1476 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1476, KRB5_TKTBODY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_KRB5_TKTBODY 147c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x147c, d2i_KRB5_TKTBODY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_KRB5_TKTBODY 1482 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1482, i2d_KRB5_TKTBODY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_TKTBODY_it 1488 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1488, KRB5_TKTBODY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_APREQBODY_new 148e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x148e, KRB5_APREQBODY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_APREQBODY_free 1494 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1494, KRB5_APREQBODY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_KRB5_APREQBODY 149a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x149a, d2i_KRB5_APREQBODY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_KRB5_APREQBODY 14a0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14a0, i2d_KRB5_APREQBODY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_APREQBODY_it 14a6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14a6, KRB5_APREQBODY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_TICKET_new 14ac 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14ac, KRB5_TICKET_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_TICKET_free 14b2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14b2, KRB5_TICKET_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_KRB5_TICKET 14b8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14b8, d2i_KRB5_TICKET(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_KRB5_TICKET 14be 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14be, i2d_KRB5_TICKET(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_TICKET_it 14c4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14c4, KRB5_TICKET_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_APREQ_new 14ca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14ca, KRB5_APREQ_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_APREQ_free 14d0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14d0, KRB5_APREQ_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_KRB5_APREQ 14d6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14d6, d2i_KRB5_APREQ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_KRB5_APREQ 14dc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14dc, i2d_KRB5_APREQ(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_APREQ_it 14e2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14e2, KRB5_APREQ_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_CHECKSUM_new 14e8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14e8, KRB5_CHECKSUM_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_CHECKSUM_free 14ee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14ee, KRB5_CHECKSUM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_KRB5_CHECKSUM 14f4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14f4, d2i_KRB5_CHECKSUM(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_KRB5_CHECKSUM 14fa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14fa, i2d_KRB5_CHECKSUM(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_CHECKSUM_it 1500 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1500, KRB5_CHECKSUM_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_ENCKEY_new 1506 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1506, KRB5_ENCKEY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_ENCKEY_free 150c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x150c, KRB5_ENCKEY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_KRB5_ENCKEY 1512 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1512, d2i_KRB5_ENCKEY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_KRB5_ENCKEY 1518 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1518, i2d_KRB5_ENCKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_ENCKEY_it 151e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x151e, KRB5_ENCKEY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_AUTHDATA_new 1524 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1524, KRB5_AUTHDATA_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_AUTHDATA_free 152a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x152a, KRB5_AUTHDATA_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_KRB5_AUTHDATA 1530 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1530, d2i_KRB5_AUTHDATA(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_KRB5_AUTHDATA 1536 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1536, i2d_KRB5_AUTHDATA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_AUTHDATA_it 153c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x153c, KRB5_AUTHDATA_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_AUTHENTBODY_new 1542 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1542, KRB5_AUTHENTBODY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_AUTHENTBODY_free 1548 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1548, KRB5_AUTHENTBODY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_KRB5_AUTHENTBODY 154e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x154e, d2i_KRB5_AUTHENTBODY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_KRB5_AUTHENTBODY 1554 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1554, i2d_KRB5_AUTHENTBODY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_AUTHENTBODY_it 155a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x155a, KRB5_AUTHENTBODY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_AUTHENT_new 1560 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1560, KRB5_AUTHENT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_AUTHENT_free 1566 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1566, KRB5_AUTHENT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_KRB5_AUTHENT 156c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x156c, d2i_KRB5_AUTHENT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_KRB5_AUTHENT 1572 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1572, i2d_KRB5_AUTHENT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase KRB5_AUTHENT_it 1578 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1578, KRB5_AUTHENT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_new 157e 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x157e, lh_new(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_free 1584 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1584, lh_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_insert 158a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x158a, lh_insert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_delete 1590 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1590, lh_delete(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_retrieve 1596 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1596, lh_retrieve(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_doall 159c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x159c, lh_doall(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_doall_arg 15a2 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15a2, lh_doall_arg(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_strhash 15a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15a8, lh_strhash(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_num_items 15ae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15ae, lh_num_items(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_stats_bio 15b4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15b4, lh_stats_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_node_stats_bio 15ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15ba, lh_node_stats_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_node_usage_stats_bio 15c0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15c0, lh_node_usage_stats_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_init 15c6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15c6, OBJ_NAME_init())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_new_index 15cc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15cc, OBJ_NAME_new_index(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_get 15d2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15d2, OBJ_NAME_get(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_add 15d8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15d8, OBJ_NAME_add(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_remove 15de 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15de, OBJ_NAME_remove(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_cleanup 15e4 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15e4, OBJ_NAME_cleanup(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_do_all 15ea 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15ea, OBJ_NAME_do_all(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_do_all_sorted 15f0 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15f0, OBJ_NAME_do_all_sorted(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_dup 15f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15f6, OBJ_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_nid2obj 15fc 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15fc, OBJ_nid2obj(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_nid2ln 1602 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1602, OBJ_nid2ln(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_nid2sn 1608 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1608, OBJ_nid2sn(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_obj2nid 160e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x160e, OBJ_obj2nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_txt2obj 1614 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1614, OBJ_txt2obj(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_obj2txt 161a 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x161a, OBJ_obj2txt(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_txt2nid 1620 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1620, OBJ_txt2nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_ln2nid 1626 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1626, OBJ_ln2nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_sn2nid 162c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x162c, OBJ_sn2nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_cmp 1632 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1632, OBJ_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_new_nid 1638 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1638, OBJ_new_nid(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_add_object 163e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x163e, OBJ_add_object(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_create 1644 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1644, OBJ_create(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_cleanup 164a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x164a, OBJ_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_create_objects 1650 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1650, OBJ_create_objects(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_OBJ_strings 1656 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1656, ERR_load_OBJ_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_sendreq_bio 165c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x165c, OCSP_sendreq_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_cert_to_id 1662 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1662, OCSP_cert_to_id(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_cert_id_new 1668 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1668, OCSP_cert_id_new(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_add0_id 166e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x166e, OCSP_request_add0_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_add1_nonce 1674 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1674, OCSP_request_add1_nonce(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_basic_add1_nonce 167a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x167a, OCSP_basic_add1_nonce(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_check_nonce 1680 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1680, OCSP_check_nonce(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_copy_nonce 1686 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1686, OCSP_copy_nonce(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_set1_name 168c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x168c, OCSP_request_set1_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_add1_cert 1692 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1692, OCSP_request_add1_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_sign 1698 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1698, OCSP_request_sign(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_response_status 169e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x169e, OCSP_response_status(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_response_get1_basic 16a4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16a4, OCSP_response_get1_basic(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_resp_count 16aa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16aa, OCSP_resp_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_resp_get0 16b0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16b0, OCSP_resp_get0(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_resp_find 16b6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16b6, OCSP_resp_find(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_single_get0_status 16bc 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16bc, OCSP_single_get0_status(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_resp_find_status 16c2 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16c2, OCSP_resp_find_status(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_check_validity 16c8 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16c8, OCSP_check_validity(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_verify 16ce 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16ce, OCSP_request_verify(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_parse_url 16d4 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16d4, OCSP_parse_url(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_id_issuer_cmp 16da 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16da, OCSP_id_issuer_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_id_cmp 16e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16e0, OCSP_id_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_onereq_count 16e6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16e6, OCSP_request_onereq_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_onereq_get0 16ec 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16ec, OCSP_request_onereq_get0(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_onereq_get0_id 16f2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16f2, OCSP_onereq_get0_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_id_get0_info 16f8 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16f8, OCSP_id_get0_info(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_is_signed 16fe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16fe, OCSP_request_is_signed(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_response_create 1704 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1704, OCSP_response_create(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_basic_add1_status 170a 2ba109807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x170a, OCSP_basic_add1_status(a0,a1,d0,d1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_basic_add1_cert 1710 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1710, OCSP_basic_add1_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_basic_sign 1716 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1716, OCSP_basic_sign(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_crlID_new 171c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x171c, OCSP_crlID_new(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_accept_responses_new 1722 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1722, OCSP_accept_responses_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_archive_cutoff_new 1728 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1728, OCSP_archive_cutoff_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_url_svcloc_new 172e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x172e, OCSP_url_svcloc_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_get_ext_count 1734 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1734, OCSP_REQUEST_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_get_ext_by_NID 173a 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x173a, OCSP_REQUEST_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_get_ext_by_OBJ 1740 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1740, OCSP_REQUEST_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_get_ext_by_critical 1746 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1746, OCSP_REQUEST_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_get_ext 174c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x174c, OCSP_REQUEST_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_delete_ext 1752 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1752, OCSP_REQUEST_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_get1_ext_d2i 1758 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1758, OCSP_REQUEST_get1_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_add1_ext_i2d 175e 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x175e, OCSP_REQUEST_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_add_ext 1764 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1764, OCSP_REQUEST_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_get_ext_count 176a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x176a, OCSP_ONEREQ_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_get_ext_by_NID 1770 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1770, OCSP_ONEREQ_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_get_ext_by_OBJ 1776 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1776, OCSP_ONEREQ_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_get_ext_by_critical 177c 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x177c, OCSP_ONEREQ_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_get_ext 1782 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1782, OCSP_ONEREQ_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_delete_ext 1788 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1788, OCSP_ONEREQ_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_get1_ext_d2i 178e a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x178e, OCSP_ONEREQ_get1_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_add1_ext_i2d 1794 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1794, OCSP_ONEREQ_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_add_ext 179a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x179a, OCSP_ONEREQ_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_get_ext_count 17a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17a0, OCSP_BASICRESP_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_get_ext_by_NID 17a6 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17a6, OCSP_BASICRESP_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_get_ext_by_OBJ 17ac 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17ac, OCSP_BASICRESP_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_get_ext_by_critical 17b2 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17b2, OCSP_BASICRESP_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_get_ext 17b8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17b8, OCSP_BASICRESP_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_delete_ext 17be 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17be, OCSP_BASICRESP_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_get1_ext_d2i 17c4 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17c4, OCSP_BASICRESP_get1_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_add1_ext_i2d 17ca 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17ca, OCSP_BASICRESP_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_add_ext 17d0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17d0, OCSP_BASICRESP_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get_ext_count 17d6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17d6, OCSP_SINGLERESP_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get_ext_by_NID 17dc 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17dc, OCSP_SINGLERESP_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get_ext_by_OBJ 17e2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17e2, OCSP_SINGLERESP_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get_ext_by_critical 17e8 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17e8, OCSP_SINGLERESP_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get_ext 17ee 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17ee, OCSP_SINGLERESP_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_delete_ext 17f4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17f4, OCSP_SINGLERESP_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get1_ext_d2i 17fa a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17fa, OCSP_SINGLERESP_get1_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_add1_ext_i2d 1800 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1800, OCSP_SINGLERESP_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_add_ext 1806 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1806, OCSP_SINGLERESP_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_new 180c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x180c, OCSP_SINGLERESP_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_free 1812 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1812, OCSP_SINGLERESP_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_SINGLERESP 1818 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1818, d2i_OCSP_SINGLERESP(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_SINGLERESP 181e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x181e, i2d_OCSP_SINGLERESP(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_it 1824 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1824, OCSP_SINGLERESP_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTSTATUS_new 182a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x182a, OCSP_CERTSTATUS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTSTATUS_free 1830 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1830, OCSP_CERTSTATUS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_CERTSTATUS 1836 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1836, d2i_OCSP_CERTSTATUS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_CERTSTATUS 183c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x183c, i2d_OCSP_CERTSTATUS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTSTATUS_it 1842 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1842, OCSP_CERTSTATUS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REVOKEDINFO_new 1848 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1848, OCSP_REVOKEDINFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REVOKEDINFO_free 184e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x184e, OCSP_REVOKEDINFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_REVOKEDINFO 1854 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1854, d2i_OCSP_REVOKEDINFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_REVOKEDINFO 185a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x185a, i2d_OCSP_REVOKEDINFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REVOKEDINFO_it 1860 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1860, OCSP_REVOKEDINFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_new 1866 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1866, OCSP_BASICRESP_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_free 186c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x186c, OCSP_BASICRESP_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_BASICRESP 1872 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1872, d2i_OCSP_BASICRESP(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_BASICRESP 1878 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1878, i2d_OCSP_BASICRESP(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_it 187e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x187e, OCSP_BASICRESP_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPDATA_new 1884 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1884, OCSP_RESPDATA_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPDATA_free 188a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x188a, OCSP_RESPDATA_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_RESPDATA 1890 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1890, d2i_OCSP_RESPDATA(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_RESPDATA 1896 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1896, i2d_OCSP_RESPDATA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPDATA_it 189c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x189c, OCSP_RESPDATA_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPID_new 18a2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18a2, OCSP_RESPID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPID_free 18a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18a8, OCSP_RESPID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_RESPID 18ae 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18ae, d2i_OCSP_RESPID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_RESPID 18b4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18b4, i2d_OCSP_RESPID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPID_it 18ba 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18ba, OCSP_RESPID_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPONSE_new 18c0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18c0, OCSP_RESPONSE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPONSE_free 18c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18c6, OCSP_RESPONSE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_RESPONSE 18cc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18cc, d2i_OCSP_RESPONSE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_RESPONSE 18d2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18d2, i2d_OCSP_RESPONSE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPONSE_it 18d8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18d8, OCSP_RESPONSE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPBYTES_new 18de 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18de, OCSP_RESPBYTES_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPBYTES_free 18e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18e4, OCSP_RESPBYTES_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_RESPBYTES 18ea 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18ea, d2i_OCSP_RESPBYTES(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_RESPBYTES 18f0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18f0, i2d_OCSP_RESPBYTES(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPBYTES_it 18f6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18f6, OCSP_RESPBYTES_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_new 18fc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18fc, OCSP_ONEREQ_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_free 1902 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1902, OCSP_ONEREQ_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_ONEREQ 1908 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1908, d2i_OCSP_ONEREQ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_ONEREQ 190e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x190e, i2d_OCSP_ONEREQ(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_it 1914 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1914, OCSP_ONEREQ_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTID_new 191a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x191a, OCSP_CERTID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTID_free 1920 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1920, OCSP_CERTID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_CERTID 1926 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1926, d2i_OCSP_CERTID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_CERTID 192c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x192c, i2d_OCSP_CERTID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTID_it 1932 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1932, OCSP_CERTID_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_new 1938 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1938, OCSP_REQUEST_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_free 193e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x193e, OCSP_REQUEST_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_REQUEST 1944 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1944, d2i_OCSP_REQUEST(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_REQUEST 194a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x194a, i2d_OCSP_REQUEST(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_it 1950 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1950, OCSP_REQUEST_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SIGNATURE_new 1956 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1956, OCSP_SIGNATURE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SIGNATURE_free 195c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x195c, OCSP_SIGNATURE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_SIGNATURE 1962 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1962, d2i_OCSP_SIGNATURE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_SIGNATURE 1968 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1968, i2d_OCSP_SIGNATURE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SIGNATURE_it 196e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x196e, OCSP_SIGNATURE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQINFO_new 1974 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1974, OCSP_REQINFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQINFO_free 197a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x197a, OCSP_REQINFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_REQINFO 1980 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1980, d2i_OCSP_REQINFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_REQINFO 1986 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1986, i2d_OCSP_REQINFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQINFO_it 198c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x198c, OCSP_REQINFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CRLID_new 1992 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1992, OCSP_CRLID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CRLID_free 1998 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1998, OCSP_CRLID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_CRLID 199e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x199e, d2i_OCSP_CRLID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_CRLID 19a4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19a4, i2d_OCSP_CRLID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CRLID_it 19aa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19aa, OCSP_CRLID_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SERVICELOC_new 19b0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19b0, OCSP_SERVICELOC_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SERVICELOC_free 19b6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19b6, OCSP_SERVICELOC_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_SERVICELOC 19bc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19bc, d2i_OCSP_SERVICELOC(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_SERVICELOC 19c2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19c2, i2d_OCSP_SERVICELOC(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SERVICELOC_it 19c8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19c8, OCSP_SERVICELOC_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_response_status_str 19ce 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19ce, OCSP_response_status_str(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_cert_status_str 19d4 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19d4, OCSP_cert_status_str(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_crl_reason_str 19da 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19da, OCSP_crl_reason_str(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_print 19e0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19e0, OCSP_REQUEST_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPONSE_print 19e6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19e6, OCSP_RESPONSE_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_basic_verify 19ec 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19ec, OCSP_basic_verify(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_OCSP_strings 19f2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19f2, ERR_load_OCSP_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_get_EVP_CIPHER_INFO 19f8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19f8, PEM_get_EVP_CIPHER_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_do_header 19fe 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19fe, PEM_do_header(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio 1a04 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a04, PEM_read_bio(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio 1a0a 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a0a, PEM_write_bio(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_bytes_read_bio 1a10 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a10, PEM_bytes_read_bio(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_ASN1_read_bio 1a1c 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a1c, PEM_ASN1_read_bio(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_ASN1_write_bio 1a28 43210ba9809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a28, PEM_ASN1_write_bio(a0,a1,a2,a3,d0,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_X509_INFO_read_bio 1a34 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a34, PEM_X509_INFO_read_bio(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_X509_INFO_write_bio 1a3a 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a3a, PEM_X509_INFO_write_bio(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_SealInit 1a40 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a40, PEM_SealInit(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_SealUpdate 1a46 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a46, PEM_SealUpdate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_SealFinal 1a4c 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a4c, PEM_SealFinal(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_SignInit 1a52 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a52, PEM_SignInit(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_SignUpdate 1a58 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a58, PEM_SignUpdate(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_SignFinal 1a5e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a5e, PEM_SignFinal(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_def_callback 1a64 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a64, PEM_def_callback(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_proc_type 1a6a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a6a, PEM_proc_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_dek_info 1a76 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a76, PEM_dek_info(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_X509 1a7c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a7c, PEM_read_bio_X509(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_X509 1a82 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a82, PEM_write_bio_X509(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_X509_AUX 1a88 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a88, PEM_read_bio_X509_AUX(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_X509_AUX 1a8e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a8e, PEM_write_bio_X509_AUX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_X509_REQ 1a94 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a94, PEM_read_bio_X509_REQ(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_X509_REQ 1aa0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1aa0, PEM_write_bio_X509_REQ(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_X509_REQ_NEW 1aa6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1aa6, PEM_write_bio_X509_REQ_NEW(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_X509_CRL 1aac ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1aac, PEM_read_bio_X509_CRL(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_X509_CRL 1ab2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ab2, PEM_write_bio_X509_CRL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_PKCS7 1ab8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ab8, PEM_read_bio_PKCS7(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PKCS7 1abe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1abe, PEM_write_bio_PKCS7(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_NETSCAPE_CERT_SEQUENCE 1ac4 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ac4, PEM_read_bio_NETSCAPE_CERT_SEQUENCE(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_NETSCAPE_CERT_SEQUENCE 1aca 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1aca, PEM_write_bio_NETSCAPE_CERT_SEQUENCE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_PKCS8 1ad0 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ad0, PEM_read_bio_PKCS8(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PKCS8 1ad6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ad6, PEM_write_bio_PKCS8(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_PKCS8_PRIV_KEY_INFO 1adc ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1adc, PEM_read_bio_PKCS8_PRIV_KEY_INFO(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PKCS8_PRIV_KEY_INFO 1ae2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ae2, PEM_write_bio_PKCS8_PRIV_KEY_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_RSAPrivateKey 1ae8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ae8, PEM_read_bio_RSAPrivateKey(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_RSAPrivateKey 1aee 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1aee, PEM_write_bio_RSAPrivateKey(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_RSAPublicKey 1af4 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1af4, PEM_read_bio_RSAPublicKey(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_RSAPublicKey 1afa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1afa, PEM_write_bio_RSAPublicKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_RSA_PUBKEY 1b00 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b00, PEM_read_bio_RSA_PUBKEY(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_RSA_PUBKEY 1b06 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b06, PEM_write_bio_RSA_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_DSAPrivateKey 1b0c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b0c, PEM_read_bio_DSAPrivateKey(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_DSAPrivateKey 1b12 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b12, PEM_write_bio_DSAPrivateKey(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_DSA_PUBKEY 1b18 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b18, PEM_read_bio_DSA_PUBKEY(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_DSA_PUBKEY 1b1e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b1e, PEM_write_bio_DSA_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_DSAparams 1b24 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b24, PEM_read_bio_DSAparams(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_DSAparams 1b2a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b2a, PEM_write_bio_DSAparams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_DHparams 1b30 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b30, PEM_read_bio_DHparams(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_DHparams 1b36 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b36, PEM_write_bio_DHparams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_PrivateKey 1b3c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b3c, PEM_read_bio_PrivateKey(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PrivateKey 1b42 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b42, PEM_write_bio_PrivateKey(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_PUBKEY 1b48 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b48, PEM_read_bio_PUBKEY(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PUBKEY 1b4e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b4e, PEM_write_bio_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PKCS8PrivateKey_nid 1b54 2b1a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b54, PEM_write_bio_PKCS8PrivateKey_nid(a0,a1,d0,a2,d1,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PKCS8PrivateKey 1b5a 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b5a, PEM_write_bio_PKCS8PrivateKey(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS8PrivateKey_bio 1b60 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b60, i2d_PKCS8PrivateKey_bio(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS8PrivateKey_nid_bio 1b66 2b1a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b66, i2d_PKCS8PrivateKey_nid_bio(a0,a1,d0,a2,d1,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS8PrivateKey_bio 1b6c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b6c, d2i_PKCS8PrivateKey_bio(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_PEM_strings 1b72 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b72, ERR_load_PEM_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_x5092certbag 1b78 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b78, PKCS12_x5092certbag(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_x509crl2certbag 1b7e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b7e, PKCS12_x509crl2certbag(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_certbag2x509 1b84 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b84, PKCS12_certbag2x509(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_certbag2x509crl 1b8a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b8a, PKCS12_certbag2x509crl(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_item_pack_safebag 1b90 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b90, PKCS12_item_pack_safebag(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_MAKE_KEYBAG 1b96 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b96, PKCS12_MAKE_KEYBAG(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_decrypt 1b9c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b9c, PKCS8_decrypt(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_decrypt_skey 1ba2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ba2, PKCS12_decrypt_skey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_encrypt 1ba8 b32a198008
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ba8, PKCS8_encrypt(d0,a0,a1,d1,a2,d2,d3,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_MAKE_SHKEYBAG 1bae a32918007
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bae, PKCS12_MAKE_SHKEYBAG(d0,a0,d1,a1,d2,d3,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_pack_p7data 1bb4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bb4, PKCS12_pack_p7data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_unpack_p7data 1bba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bba, PKCS12_unpack_p7data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_pack_p7encdata 1bc0 a32918007
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bc0, PKCS12_pack_p7encdata(d0,a0,d1,a1,d2,d3,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_unpack_p7encdata 1bc6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bc6, PKCS12_unpack_p7encdata(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_pack_authsafes 1bcc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bcc, PKCS12_pack_authsafes(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_unpack_authsafes 1bd2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bd2, PKCS12_unpack_authsafes(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_localkeyid 1bd8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bd8, PKCS12_add_localkeyid(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_friendlyname_asc 1bde 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bde, PKCS12_add_friendlyname_asc(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_CSPName_asc 1be4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1be4, PKCS12_add_CSPName_asc(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_friendlyname_uni 1bea 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bea, PKCS12_add_friendlyname_uni(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_add_keyusage 1bf0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bf0, PKCS8_add_keyusage(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_get_attr_gen 1bf6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bf6, PKCS12_get_attr_gen(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_get_friendlyname 1bfc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bfc, PKCS12_get_friendlyname(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_pbe_crypt 1c02 32b1a09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c02, PKCS12_pbe_crypt(a0,a1,d0,a2,d1,a3,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_item_decrypt_d2i 1c08 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c08, PKCS12_item_decrypt_d2i(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_item_i2d_encrypt 1c0e 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c0e, PKCS12_item_i2d_encrypt(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_init 1c14 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c14, PKCS12_init(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_key_gen_asc 1c1a ba432190809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c1a, PKCS12_key_gen_asc(a0,d0,a1,d1,d2,d3,d4,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_key_gen_uni 1c20 ba432190809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c20, PKCS12_key_gen_uni(a0,d0,a1,d1,d2,d3,d4,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_PBE_keyivgen 1c26 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c26, PKCS12_PBE_keyivgen(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_gen_mac 1c2c ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c2c, PKCS12_gen_mac(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_verify_mac 1c32 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c32, PKCS12_verify_mac(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_set_mac 1c38 b21a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c38, PKCS12_set_mac(a0,a1,d0,a2,d1,d2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_setup_mac 1c3e a190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c3e, PKCS12_setup_mac(a0,d0,a1,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_asc2uni 1c44 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c44, OPENSSL_asc2uni(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_uni2asc 1c4a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c4a, OPENSSL_uni2asc(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_new 1c50 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c50, PKCS12_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_free 1c56 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c56, PKCS12_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS12 1c5c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c5c, d2i_PKCS12(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS12 1c62 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c62, i2d_PKCS12(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_it 1c68 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c68, PKCS12_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_MAC_DATA_new 1c6e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c6e, PKCS12_MAC_DATA_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_MAC_DATA_free 1c74 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c74, PKCS12_MAC_DATA_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS12_MAC_DATA 1c7a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c7a, d2i_PKCS12_MAC_DATA(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS12_MAC_DATA 1c80 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c80, i2d_PKCS12_MAC_DATA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_MAC_DATA_it 1c86 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c86, PKCS12_MAC_DATA_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_new 1c8c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c8c, PKCS12_SAFEBAG_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_free 1c92 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c92, PKCS12_SAFEBAG_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS12_SAFEBAG 1c98 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c98, d2i_PKCS12_SAFEBAG(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS12_SAFEBAG 1c9e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c9e, i2d_PKCS12_SAFEBAG(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_it 1ca4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ca4, PKCS12_SAFEBAG_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_BAGS_new 1caa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1caa, PKCS12_BAGS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_BAGS_free 1cb0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cb0, PKCS12_BAGS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS12_BAGS 1cb6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cb6, d2i_PKCS12_BAGS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS12_BAGS 1cbc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cbc, i2d_PKCS12_BAGS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_BAGS_it 1cc2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cc2, PKCS12_BAGS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAGS_it 1cc8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cc8, PKCS12_SAFEBAGS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_AUTHSAFES_it 1cce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cce, PKCS12_AUTHSAFES_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_PBE_add 1cd4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cd4, PKCS12_PBE_add())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_parse 1cda 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cda, PKCS12_parse(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_create 1ce0 543210ba98010
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ce0, PKCS12_create(a0,a1,a2,a3,d0,d1,d2,d3,d4,d5))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS12_bio 1ce6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ce6, i2d_PKCS12_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS12_bio 1cec 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cec, d2i_PKCS12_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_newpass 1cf2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cf2, PKCS12_newpass(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_PKCS12_strings 1cf8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cf8, ERR_load_PKCS12_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ISSUER_AND_SERIAL_digest 1cfe ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cfe, PKCS7_ISSUER_AND_SERIAL_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_dup 1d04 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d04, PKCS7_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_bio 1d0a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d0a, d2i_PKCS7_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_bio 1d10 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d10, i2d_PKCS7_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ISSUER_AND_SERIAL_new 1d16 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d16, PKCS7_ISSUER_AND_SERIAL_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ISSUER_AND_SERIAL_free 1d1c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d1c, PKCS7_ISSUER_AND_SERIAL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_ISSUER_AND_SERIAL 1d22 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d22, d2i_PKCS7_ISSUER_AND_SERIAL(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_ISSUER_AND_SERIAL 1d28 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d28, i2d_PKCS7_ISSUER_AND_SERIAL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ISSUER_AND_SERIAL_it 1d2e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d2e, PKCS7_ISSUER_AND_SERIAL_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNER_INFO_new 1d34 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d34, PKCS7_SIGNER_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNER_INFO_free 1d3a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d3a, PKCS7_SIGNER_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_SIGNER_INFO 1d40 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d40, d2i_PKCS7_SIGNER_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_SIGNER_INFO 1d46 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d46, i2d_PKCS7_SIGNER_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNER_INFO_it 1d4c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d4c, PKCS7_SIGNER_INFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_RECIP_INFO_new 1d52 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d52, PKCS7_RECIP_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_RECIP_INFO_free 1d58 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d58, PKCS7_RECIP_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_RECIP_INFO 1d5e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d5e, d2i_PKCS7_RECIP_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_RECIP_INFO 1d64 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d64, i2d_PKCS7_RECIP_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_RECIP_INFO_it 1d6a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d6a, PKCS7_RECIP_INFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNED_new 1d70 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d70, PKCS7_SIGNED_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNED_free 1d76 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d76, PKCS7_SIGNED_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_SIGNED 1d7c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d7c, d2i_PKCS7_SIGNED(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_SIGNED 1d82 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d82, i2d_PKCS7_SIGNED(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNED_it 1d88 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d88, PKCS7_SIGNED_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENC_CONTENT_new 1d8e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d8e, PKCS7_ENC_CONTENT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENC_CONTENT_free 1d94 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d94, PKCS7_ENC_CONTENT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_ENC_CONTENT 1d9a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d9a, d2i_PKCS7_ENC_CONTENT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_ENC_CONTENT 1da0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1da0, i2d_PKCS7_ENC_CONTENT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENC_CONTENT_it 1da6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1da6, PKCS7_ENC_CONTENT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENVELOPE_new 1dac 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dac, PKCS7_ENVELOPE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENVELOPE_free 1db2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1db2, PKCS7_ENVELOPE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_ENVELOPE 1db8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1db8, d2i_PKCS7_ENVELOPE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_ENVELOPE 1dbe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dbe, i2d_PKCS7_ENVELOPE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENVELOPE_it 1dc4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dc4, PKCS7_ENVELOPE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGN_ENVELOPE_new 1dca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dca, PKCS7_SIGN_ENVELOPE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGN_ENVELOPE_free 1dd0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dd0, PKCS7_SIGN_ENVELOPE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_SIGN_ENVELOPE 1dd6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dd6, d2i_PKCS7_SIGN_ENVELOPE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_SIGN_ENVELOPE 1ddc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ddc, i2d_PKCS7_SIGN_ENVELOPE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGN_ENVELOPE_it 1de2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1de2, PKCS7_SIGN_ENVELOPE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_DIGEST_new 1de8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1de8, PKCS7_DIGEST_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_DIGEST_free 1dee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dee, PKCS7_DIGEST_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_DIGEST 1df4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1df4, d2i_PKCS7_DIGEST(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_DIGEST 1dfa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dfa, i2d_PKCS7_DIGEST(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_DIGEST_it 1e00 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e00, PKCS7_DIGEST_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENCRYPT_new 1e06 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e06, PKCS7_ENCRYPT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENCRYPT_free 1e0c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e0c, PKCS7_ENCRYPT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_ENCRYPT 1e12 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e12, d2i_PKCS7_ENCRYPT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_ENCRYPT 1e18 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e18, i2d_PKCS7_ENCRYPT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENCRYPT_it 1e1e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e1e, PKCS7_ENCRYPT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_new 1e24 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e24, PKCS7_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_free 1e2a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e2a, PKCS7_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7 1e30 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e30, d2i_PKCS7(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7 1e36 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e36, i2d_PKCS7(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_it 1e3c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e3c, PKCS7_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ATTR_SIGN_it 1e42 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e42, PKCS7_ATTR_SIGN_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ATTR_VERIFY_it 1e48 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e48, PKCS7_ATTR_VERIFY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ctrl 1e4e 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e4e, PKCS7_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set_type 1e54 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e54, PKCS7_set_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set_content 1e5a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e5a, PKCS7_set_content(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNER_INFO_set 1e60 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e60, PKCS7_SIGNER_INFO_set(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_signer 1e66 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e66, PKCS7_add_signer(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_certificate 1e6c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e6c, PKCS7_add_certificate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_crl 1e72 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e72, PKCS7_add_crl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_content_new 1e78 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e78, PKCS7_content_new(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_dataVerify 1e7e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e7e, PKCS7_dataVerify(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_signatureVerify 1e84 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e84, PKCS7_signatureVerify(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_dataInit 1e8a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e8a, PKCS7_dataInit(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_dataFinal 1e90 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e90, PKCS7_dataFinal(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_dataDecode 1e96 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e96, PKCS7_dataDecode(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_signature 1e9c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e9c, PKCS7_add_signature(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_cert_from_signer_info 1ea2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ea2, PKCS7_cert_from_signer_info(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_get_signer_info 1ea8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ea8, PKCS7_get_signer_info(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_recipient 1eae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1eae, PKCS7_add_recipient(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_recipient_info 1eb4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1eb4, PKCS7_add_recipient_info(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_RECIP_INFO_set 1eba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1eba, PKCS7_RECIP_INFO_set(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set_cipher 1ec0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ec0, PKCS7_set_cipher(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_get_issuer_and_serial 1ec6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ec6, PKCS7_get_issuer_and_serial(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_digest_from_attributes 1ecc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ecc, PKCS7_digest_from_attributes(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_signed_attribute 1ed2 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ed2, PKCS7_add_signed_attribute(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_attribute 1ed8 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ed8, PKCS7_add_attribute(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_get_attribute 1ede 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ede, PKCS7_get_attribute(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_get_signed_attribute 1ee4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ee4, PKCS7_get_signed_attribute(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set_signed_attributes 1eea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1eea, PKCS7_set_signed_attributes(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set_attributes 1ef0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ef0, PKCS7_set_attributes(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_sign 1ef6 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ef6, PKCS7_sign(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_verify 1efc 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1efc, PKCS7_verify(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_get0_signers 1f02 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f02, PKCS7_get0_signers(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_encrypt 1f08 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f08, PKCS7_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_decrypt 1f0e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f0e, PKCS7_decrypt(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_attrib_smimecap 1f14 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f14, PKCS7_add_attrib_smimecap(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_get_smimecap 1f1a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f1a, PKCS7_get_smimecap(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_simple_smimecap 1f20 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f20, PKCS7_simple_smimecap(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_write_PKCS7 1f26 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f26, SMIME_write_PKCS7(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_read_PKCS7 1f2c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f2c, SMIME_read_PKCS7(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_crlf_copy 1f32 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f32, SMIME_crlf_copy(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_text 1f38 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f38, SMIME_text(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_PKCS7_strings 1f3e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f3e, ERR_load_PKCS7_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_set_rand_method 1f44 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f44, RAND_set_rand_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_get_rand_method 1f4a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f4a, RAND_get_rand_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_SSLeay 1f50 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f50, RAND_SSLeay())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_cleanup 1f56 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f56, RAND_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_bytes 1f5c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f5c, RAND_bytes(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_pseudo_bytes 1f62 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f62, RAND_pseudo_bytes(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_seed 1f68 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f68, RAND_seed(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_add 1f6e 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f6e, RAND_add(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_load_file 1f74 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f74, RAND_load_file(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_write_file 1f7a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f7a, RAND_write_file(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_file_name 1f80 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f80, RAND_file_name(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_status 1f86 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f86, RAND_status())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_query_egd_bytes 1f8c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f8c, RAND_query_egd_bytes(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_egd 1f92 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f92, RAND_egd(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_egd_bytes 1f98 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f98, RAND_egd_bytes(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_poll 1f9e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f9e, RAND_poll())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_RAND_strings 1fa4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fa4, ERR_load_RAND_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_msg_callback 1faa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1faa, SSL_CTX_set_msg_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_msg_callback 1fb0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fb0, SSL_set_msg_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sessions 1fb6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fb6, SSL_CTX_sessions(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_finished 1fbc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fbc, SSL_get_finished(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_peer_finished 1fc2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fc2, SSL_get_peer_finished(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_ssl 1fc8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fc8, BIO_f_ssl())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_ssl 1fce 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fce, BIO_new_ssl(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_ssl_connect 1fd4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fd4, BIO_new_ssl_connect(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_buffer_ssl_connect 1fda 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fda, BIO_new_buffer_ssl_connect(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ssl_copy_session_id 1fe0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fe0, BIO_ssl_copy_session_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ssl_shutdown 1fe6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fe6, BIO_ssl_shutdown(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_cipher_list 1fec 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fec, SSL_CTX_set_cipher_list(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_new 1ff2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ff2, SSL_CTX_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_free 1ff8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ff8, SSL_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_timeout 1ffe 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ffe, SSL_CTX_set_timeout(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_timeout 2004 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2004, SSL_CTX_get_timeout(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_cert_store 200a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x200a, SSL_CTX_get_cert_store(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_cert_store 2010 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2010, SSL_CTX_set_cert_store(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_want 2016 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2016, SSL_want(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_clear 201c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x201c, SSL_clear(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_flush_sessions 2022 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2022, SSL_CTX_flush_sessions(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_current_cipher 2028 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2028, SSL_get_current_cipher(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_bits 202e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x202e, SSL_CIPHER_get_bits(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_version 2034 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2034, SSL_CIPHER_get_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_name 203a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x203a, SSL_CIPHER_get_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_mac 2040 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2040, SSL_CIPHER_get_mac(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_encryption 2046 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2046, SSL_CIPHER_get_encryption(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_authentication 204c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x204c, SSL_CIPHER_get_authentication(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_key_exchange 2052 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2052, SSL_CIPHER_get_key_exchange(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_export 2058 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2058, SSL_CIPHER_get_export(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_fd 205e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x205e, SSL_get_fd(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_rfd 2064 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2064, SSL_get_rfd(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_wfd 206a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x206a, SSL_get_wfd(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_cipher_list 2070 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2070, SSL_get_cipher_list(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_shared_ciphers 2076 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2076, SSL_get_shared_ciphers(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_read_ahead 207c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x207c, SSL_get_read_ahead(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_pending 2082 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2082, SSL_pending(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_fd 2088 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2088, SSL_set_fd(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_rfd 208e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x208e, SSL_set_rfd(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_wfd 2094 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2094, SSL_set_wfd(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_bio 209a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x209a, SSL_set_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_rbio 20a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20a0, SSL_get_rbio(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_wbio 20a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20a6, SSL_get_wbio(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_cipher_list 20ac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20ac, SSL_set_cipher_list(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_read_ahead 20b2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20b2, SSL_set_read_ahead(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_verify_mode 20b8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20b8, SSL_get_verify_mode(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_verify_depth 20be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20be, SSL_get_verify_depth(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_verify_callback 20c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20c4, SSL_get_verify_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_verify 20ca 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20ca, SSL_set_verify(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_verify_depth 20d0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20d0, SSL_set_verify_depth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_RSAPrivateKey 20d6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20d6, SSL_use_RSAPrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_RSAPrivateKey_ASN1 20dc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20dc, SSL_use_RSAPrivateKey_ASN1(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_PrivateKey 20e2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20e2, SSL_use_PrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_PrivateKey_ASN1 20e8 198004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20e8, SSL_use_PrivateKey_ASN1(d0,a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_certificate 20ee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20ee, SSL_use_certificate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_certificate_ASN1 20f4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20f4, SSL_use_certificate_ASN1(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_RSAPrivateKey_file 20fa 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20fa, SSL_use_RSAPrivateKey_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_PrivateKey_file 2100 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2100, SSL_use_PrivateKey_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_certificate_file 2106 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2106, SSL_use_certificate_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_RSAPrivateKey_file 210c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x210c, SSL_CTX_use_RSAPrivateKey_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_PrivateKey_file 2112 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2112, SSL_CTX_use_PrivateKey_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_certificate_file 2118 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2118, SSL_CTX_use_certificate_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_certificate_chain_file 211e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x211e, SSL_CTX_use_certificate_chain_file(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_load_client_CA_file 2124 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2124, SSL_load_client_CA_file(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_add_file_cert_subjects_to_stack 212a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x212a, SSL_add_file_cert_subjects_to_stack(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_add_dir_cert_subjects_to_stack 2130 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2130, SSL_add_dir_cert_subjects_to_stack(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_load_error_strings 2136 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2136, SSL_load_error_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_state_string 213c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x213c, SSL_state_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_rstate_string 2142 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2142, SSL_rstate_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_state_string_long 2148 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2148, SSL_state_string_long(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_rstate_string_long 214e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x214e, SSL_rstate_string_long(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_time 2154 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2154, SSL_SESSION_get_time(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_set_time 215a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x215a, SSL_SESSION_set_time(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_timeout 2160 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2160, SSL_SESSION_get_timeout(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_set_timeout 2166 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2166, SSL_SESSION_set_timeout(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_copy_session_id 216c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x216c, SSL_copy_session_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_new 2172 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2172, SSL_SESSION_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_print 2178 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2178, SSL_SESSION_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_free 2184 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2184, SSL_SESSION_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_SSL_SESSION 218a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x218a, i2d_SSL_SESSION(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_session 2190 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2190, SSL_set_session(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_add_session 2196 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2196, SSL_CTX_add_session(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_remove_session 219c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x219c, SSL_CTX_remove_session(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_generate_session_id 21a2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21a2, SSL_CTX_set_generate_session_id(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_generate_session_id 21a8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21a8, SSL_set_generate_session_id(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_has_matching_session_id 21ae 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21ae, SSL_has_matching_session_id(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_SSL_SESSION 21b4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21b4, d2i_SSL_SESSION(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_peer_certificate 21ba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21ba, SSL_get_peer_certificate(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_peer_cert_chain 21c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21c0, SSL_get_peer_cert_chain(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_verify_mode 21c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21c6, SSL_CTX_get_verify_mode(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_verify_depth 21cc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21cc, SSL_CTX_get_verify_depth(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_verify_callback 21d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21d2, SSL_CTX_get_verify_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_verify 21d8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21d8, SSL_CTX_set_verify(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_verify_depth 21de 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21de, SSL_CTX_set_verify_depth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_cert_verify_callback 21e4 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21e4, SSL_CTX_set_cert_verify_callback(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_RSAPrivateKey 21ea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21ea, SSL_CTX_use_RSAPrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_RSAPrivateKey_ASN1 21f0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21f0, SSL_CTX_use_RSAPrivateKey_ASN1(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_PrivateKey 21f6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21f6, SSL_CTX_use_PrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_PrivateKey_ASN1 21fc 198004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21fc, SSL_CTX_use_PrivateKey_ASN1(d0,a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_certificate 2202 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2202, SSL_CTX_use_certificate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_certificate_ASN1 2208 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2208, SSL_CTX_use_certificate_ASN1(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_default_passwd_cb 220e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x220e, SSL_CTX_set_default_passwd_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_default_passwd_cb_userdata 2214 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2214, SSL_CTX_set_default_passwd_cb_userdata(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_check_private_key 221a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x221a, SSL_CTX_check_private_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_check_private_key 2220 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2220, SSL_check_private_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_session_id_context 2226 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2226, SSL_CTX_set_session_id_context(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_new 222c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x222c, SSL_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_session_id_context 2232 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2232, SSL_set_session_id_context(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_purpose 2238 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2238, SSL_CTX_set_purpose(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_purpose 223e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x223e, SSL_set_purpose(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_trust 2244 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2244, SSL_CTX_set_trust(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_trust 224a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x224a, SSL_set_trust(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_free 2250 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2250, SSL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_accept 2256 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2256, SSL_accept(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_connect 225c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x225c, SSL_connect(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_read 2262 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2262, SSL_read(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_peek 2268 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2268, SSL_peek(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_write 226e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x226e, SSL_write(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_ctrl 2274 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2274, SSL_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_callback_ctrl 227a 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x227a, SSL_callback_ctrl(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_ctrl 2280 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2280, SSL_CTX_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_callback_ctrl 2286 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2286, SSL_CTX_callback_ctrl(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_error 228c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x228c, SSL_get_error(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_version 2292 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2292, SSL_get_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_ssl_version 2298 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2298, SSL_CTX_set_ssl_version(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLv2_method 229e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x229e, SSLv2_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLv2_server_method 22a4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22a4, SSLv2_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLv2_client_method 22aa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22aa, SSLv2_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLv3_method 22b0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22b0, SSLv3_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLv3_server_method 22b6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22b6, SSLv3_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLv3_client_method 22bc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22bc, SSLv3_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLv23_method 22c2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22c2, SSLv23_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLv23_server_method 22c8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22c8, SSLv23_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLv23_client_method 22ce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22ce, SSLv23_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_method 22d4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22d4, TLSv1_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_server_method 22da 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22da, TLSv1_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_client_method 22e0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22e0, TLSv1_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_ciphers 22e6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22e6, SSL_get_ciphers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_do_handshake 22ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22ec, SSL_do_handshake(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_renegotiate 22f2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22f2, SSL_renegotiate(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_renegotiate_pending 22f8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22f8, SSL_renegotiate_pending(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_shutdown 22fe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22fe, SSL_shutdown(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_ssl_method 2304 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2304, SSL_get_ssl_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_ssl_method 230a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x230a, SSL_set_ssl_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_alert_type_string_long 2310 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2310, SSL_alert_type_string_long(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_alert_type_string 2316 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2316, SSL_alert_type_string(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_alert_desc_string_long 231c 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x231c, SSL_alert_desc_string_long(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_alert_desc_string 2322 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2322, SSL_alert_desc_string(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_client_CA_list 2328 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2328, SSL_set_client_CA_list(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_client_CA_list 232e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x232e, SSL_CTX_set_client_CA_list(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_client_CA_list 2334 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2334, SSL_get_client_CA_list(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_client_CA_list 233a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x233a, SSL_CTX_get_client_CA_list(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_add_client_CA 2340 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2340, SSL_add_client_CA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_add_client_CA 2346 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2346, SSL_CTX_add_client_CA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_connect_state 234c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x234c, SSL_set_connect_state(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_accept_state 2352 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2352, SSL_set_accept_state(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_default_timeout 2358 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2358, SSL_get_default_timeout(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_library_init 235e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x235e, SSL_library_init())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_description 2364 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2364, SSL_CIPHER_description(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_dup_CA_list 236a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x236a, SSL_dup_CA_list(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_dup 2370 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2370, SSL_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_certificate 2376 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2376, SSL_get_certificate(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_privatekey 237c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x237c, SSL_get_privatekey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_quiet_shutdown 2382 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2382, SSL_CTX_set_quiet_shutdown(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_quiet_shutdown 2388 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2388, SSL_CTX_get_quiet_shutdown(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_quiet_shutdown 238e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x238e, SSL_set_quiet_shutdown(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_quiet_shutdown 2394 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2394, SSL_get_quiet_shutdown(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_shutdown 239a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x239a, SSL_set_shutdown(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_shutdown 23a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23a0, SSL_get_shutdown(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_version 23a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23a6, SSL_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_default_verify_paths 23ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23ac, SSL_CTX_set_default_verify_paths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_load_verify_locations 23b2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23b2, SSL_CTX_load_verify_locations(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_session 23b8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23b8, SSL_get_session(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get1_session 23be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23be, SSL_get1_session(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_SSL_CTX 23c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23c4, SSL_get_SSL_CTX(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_info_callback 23ca 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23ca, SSL_set_info_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_info_callback 23d0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23d0, SSL_get_info_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_state 23d6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23d6, SSL_state(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_verify_result 23dc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23dc, SSL_set_verify_result(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_verify_result 23e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23e2, SSL_get_verify_result(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_ex_data 23e8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23e8, SSL_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_ex_data 23ee 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23ee, SSL_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_ex_new_index 23f4 ba98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23f4, SSL_get_ex_new_index(d0,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_set_ex_data 23fa 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23fa, SSL_SESSION_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_ex_data 2400 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2400, SSL_SESSION_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_ex_new_index 2406 ba98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2406, SSL_SESSION_get_ex_new_index(d0,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_ex_data 240c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x240c, SSL_CTX_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_ex_data 2412 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2412, SSL_CTX_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_ex_new_index 2418 ba98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2418, SSL_CTX_get_ex_new_index(d0,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_ex_data_X509_STORE_CTX_idx 241e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x241e, SSL_get_ex_data_X509_STORE_CTX_idx())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_tmp_rsa_callback 2424 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2424, SSL_CTX_set_tmp_rsa_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_tmp_rsa_callback 242a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x242a, SSL_set_tmp_rsa_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_tmp_dh_callback 2430 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2430, SSL_CTX_set_tmp_dh_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_tmp_dh_callback 2436 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2436, SSL_set_tmp_dh_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_COMP_add_compression_method 243c 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x243c, SSL_COMP_add_compression_method(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_SSL_strings 2442 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2442, ERR_load_SSL_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_num 2448 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2448, sk_num(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_value 244e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x244e, sk_value(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_set 2454 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2454, sk_set(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_new 245a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x245a, sk_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_new_null 2460 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2460, sk_new_null())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_free 2466 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2466, sk_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_pop_free 246c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x246c, sk_pop_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_insert 2472 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2472, sk_insert(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_delete 2478 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2478, sk_delete(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_delete_ptr 247e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x247e, sk_delete_ptr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_find 2484 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2484, sk_find(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_push 248a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x248a, sk_push(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_unshift 2490 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2490, sk_unshift(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_shift 2496 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2496, sk_shift(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_pop 249c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x249c, sk_pop(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_zero 24a2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24a2, sk_zero(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_set_cmp_func 24a8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24a8, sk_set_cmp_func(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_dup 24ae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24ae, sk_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_sort 24b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24b4, sk_sort(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase FIPS_mode 24ba 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24ba, FIPS_mode())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_is_sorted 24c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24c0, sk_is_sorted(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TXT_DB_read 24c6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24c6, TXT_DB_read(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TXT_DB_write 24cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24cc, TXT_DB_write(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TXT_DB_create_index 24d2 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24d2, TXT_DB_create_index(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TXT_DB_free 24d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24d8, TXT_DB_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TXT_DB_get_by_index 24de 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24de, TXT_DB_get_by_index(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TXT_DB_insert 24e4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24e4, TXT_DB_insert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_new 24ea 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24ea, UI_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_new_method 24f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24f0, UI_new_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_free 24f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24f6, UI_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_add_input_string 24fc 21a09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24fc, UI_add_input_string(a0,a1,d0,a2,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_dup_input_string 2502 21a09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2502, UI_dup_input_string(a0,a1,d0,a2,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_add_verify_string 2508 b21a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2508, UI_add_verify_string(a0,a1,d0,a2,d1,d2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_dup_verify_string 250e b21a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x250e, UI_dup_verify_string(a0,a1,d0,a2,d1,d2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_add_input_boolean 2514 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2514, UI_add_input_boolean(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_dup_input_boolean 251a 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x251a, UI_dup_input_boolean(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_add_info_string 2520 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2520, UI_add_info_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_dup_info_string 2526 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2526, UI_dup_info_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_add_error_string 252c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x252c, UI_add_error_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_dup_error_string 2532 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2532, UI_dup_error_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_construct_prompt 2538 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2538, UI_construct_prompt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_add_user_data 253e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x253e, UI_add_user_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get0_user_data 2544 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2544, UI_get0_user_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get0_result 254a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x254a, UI_get0_result(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_process 2550 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2550, UI_process(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_ctrl 2556 a910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2556, UI_ctrl(a0,d0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_ex_new_index 255c ba98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x255c, UI_get_ex_new_index(d0,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_set_ex_data 2562 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2562, UI_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_ex_data 2568 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2568, UI_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_set_default_method 256e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x256e, UI_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_default_method 2574 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2574, UI_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_method 257a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x257a, UI_get_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_set_method 2580 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2580, UI_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_OpenSSL 2586 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2586, UI_OpenSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_create_method 258c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x258c, UI_create_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_destroy_method 2592 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2592, UI_destroy_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_set_opener 2598 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2598, UI_method_set_opener(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_set_writer 259e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x259e, UI_method_set_writer(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_set_flusher 25a4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25a4, UI_method_set_flusher(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_set_reader 25aa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25aa, UI_method_set_reader(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_set_closer 25b0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25b0, UI_method_set_closer(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_get_opener 25b6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25b6, UI_method_get_opener(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_get_writer 25bc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25bc, UI_method_get_writer(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_get_flusher 25c2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25c2, UI_method_get_flusher(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_get_reader 25c8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25c8, UI_method_get_reader(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_get_closer 25ce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25ce, UI_method_get_closer(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_string_type 25d4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25d4, UI_get_string_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_input_flags 25da 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25da, UI_get_input_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get0_output_string 25e0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25e0, UI_get0_output_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get0_action_string 25e6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25e6, UI_get0_action_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get0_result_string 25ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25ec, UI_get0_result_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get0_test_string 25f2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25f2, UI_get0_test_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_result_minsize 25f8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25f8, UI_get_result_minsize(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_result_maxsize 25fe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25fe, UI_get_result_maxsize(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_set_result 2604 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2604, UI_set_result(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_UTIL_read_pw_string 260a 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x260a, UI_UTIL_read_pw_string(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_UTIL_read_pw 2610 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2610, UI_UTIL_read_pw(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_UI_strings 2616 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2616, ERR_load_UI_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_read_pw_string 261c 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x261c, _ossl_old_des_read_pw_string(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_read_pw 2622 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2622, _ossl_old_des_read_pw(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_verify_cert_error_string 2628 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2628, X509_verify_cert_error_string(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_verify 262e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x262e, X509_verify(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_verify 2634 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2634, X509_REQ_verify(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_verify 263a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x263a, X509_CRL_verify(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_verify 2640 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2640, NETSCAPE_SPKI_verify(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_b64_decode 2646 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2646, NETSCAPE_SPKI_b64_decode(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_b64_encode 264c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x264c, NETSCAPE_SPKI_b64_encode(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_get_pubkey 2652 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2652, NETSCAPE_SPKI_get_pubkey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_set_pubkey 2658 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2658, NETSCAPE_SPKI_set_pubkey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_print 265e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x265e, NETSCAPE_SPKI_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_signature_print 2664 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2664, X509_signature_print(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_sign 266a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x266a, X509_sign(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_sign 2670 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2670, X509_REQ_sign(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_sign 2676 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2676, X509_CRL_sign(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_sign 267c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x267c, NETSCAPE_SPKI_sign(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_pubkey_digest 2682 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2682, X509_pubkey_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_digest 2688 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2688, X509_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_digest 268e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x268e, X509_CRL_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_digest 2694 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2694, X509_REQ_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_digest 269a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x269a, X509_NAME_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_bio 26a0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26a0, d2i_X509_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_bio 26a6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26a6, i2d_X509_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_CRL_bio 26ac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26ac, d2i_X509_CRL_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_CRL_bio 26b2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26b2, i2d_X509_CRL_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_REQ_bio 26b8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26b8, d2i_X509_REQ_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_REQ_bio 26be 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26be, i2d_X509_REQ_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSAPrivateKey_bio 26c4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26c4, d2i_RSAPrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSAPrivateKey_bio 26ca 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26ca, i2d_RSAPrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSAPublicKey_bio 26d0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26d0, d2i_RSAPublicKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSAPublicKey_bio 26d6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26d6, i2d_RSAPublicKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSA_PUBKEY_bio 26dc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26dc, d2i_RSA_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSA_PUBKEY_bio 26e2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26e2, i2d_RSA_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSA_PUBKEY_bio 26e8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26e8, d2i_DSA_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSA_PUBKEY_bio 26ee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26ee, i2d_DSA_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSAPrivateKey_bio 26f4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26f4, d2i_DSAPrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSAPrivateKey_bio 26fa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26fa, i2d_DSAPrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS8_bio 2700 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2700, d2i_PKCS8_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS8_bio 2706 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2706, i2d_PKCS8_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS8_PRIV_KEY_INFO_bio 270c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x270c, d2i_PKCS8_PRIV_KEY_INFO_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS8_PRIV_KEY_INFO_bio 2712 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2712, i2d_PKCS8_PRIV_KEY_INFO_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS8PrivateKeyInfo_bio 2718 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2718, i2d_PKCS8PrivateKeyInfo_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PrivateKey_bio 271e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x271e, i2d_PrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PrivateKey_bio 2724 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2724, d2i_PrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PUBKEY_bio 272a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x272a, i2d_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PUBKEY_bio 2730 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2730, d2i_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_dup 2736 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2736, X509_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_dup 273c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x273c, X509_ATTRIBUTE_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_dup 2742 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2742, X509_EXTENSION_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_dup 2748 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2748, X509_CRL_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_dup 274e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x274e, X509_REQ_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_dup 2754 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2754, X509_ALGOR_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_dup 275a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x275a, X509_NAME_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_dup 2760 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2760, X509_NAME_ENTRY_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_cmp_time 2766 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2766, X509_cmp_time(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_cmp_current_time 276c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x276c, X509_cmp_current_time(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_time_adj 2772 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2772, X509_time_adj(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_gmtime_adj 2778 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2778, X509_gmtime_adj(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_default_cert_area 277e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x277e, X509_get_default_cert_area())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_default_cert_dir 2784 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2784, X509_get_default_cert_dir())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_default_cert_file 278a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x278a, X509_get_default_cert_file())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_default_cert_dir_env 2790 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2790, X509_get_default_cert_dir_env())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_default_cert_file_env 2796 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2796, X509_get_default_cert_file_env())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_default_private_dir 279c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x279c, X509_get_default_private_dir())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_to_X509_REQ 27a2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27a2, X509_to_X509_REQ(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_to_X509 27a8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27a8, X509_REQ_to_X509(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_new 27ae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27ae, X509_ALGOR_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_free 27b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27b4, X509_ALGOR_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_ALGOR 27ba 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27ba, d2i_X509_ALGOR(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_ALGOR 27c0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27c0, i2d_X509_ALGOR(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_it 27c6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27c6, X509_ALGOR_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VAL_new 27cc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27cc, X509_VAL_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VAL_free 27d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27d2, X509_VAL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_VAL 27d8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27d8, d2i_X509_VAL(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_VAL 27de 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27de, i2d_X509_VAL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VAL_it 27e4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27e4, X509_VAL_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_new 27ea 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27ea, X509_PUBKEY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_free 27f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27f0, X509_PUBKEY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_PUBKEY 27f6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27f6, d2i_X509_PUBKEY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_PUBKEY 27fc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27fc, i2d_X509_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_it 2802 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2802, X509_PUBKEY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_set 2808 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2808, X509_PUBKEY_set(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_get 280e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x280e, X509_PUBKEY_get(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_pubkey_parameters 2814 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2814, X509_get_pubkey_parameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PUBKEY 281a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x281a, i2d_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PUBKEY 2820 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2820, d2i_PUBKEY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSA_PUBKEY 2826 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2826, i2d_RSA_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSA_PUBKEY 282c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x282c, d2i_RSA_PUBKEY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSA_PUBKEY 2832 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2832, i2d_DSA_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSA_PUBKEY 2838 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2838, d2i_DSA_PUBKEY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_SIG_new 283e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x283e, X509_SIG_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_SIG_free 2844 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2844, X509_SIG_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_SIG 284a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x284a, d2i_X509_SIG(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_SIG 2850 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2850, i2d_X509_SIG(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_SIG_it 2856 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2856, X509_SIG_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_INFO_new 285c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x285c, X509_REQ_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_INFO_free 2862 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2862, X509_REQ_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_REQ_INFO 2868 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2868, d2i_X509_REQ_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_REQ_INFO 286e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x286e, i2d_X509_REQ_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_INFO_it 2874 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2874, X509_REQ_INFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_new 287a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x287a, X509_REQ_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_free 2880 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2880, X509_REQ_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_REQ 2886 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2886, d2i_X509_REQ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_REQ 288c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x288c, i2d_X509_REQ(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_it 2892 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2892, X509_REQ_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_new 2898 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2898, X509_ATTRIBUTE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_free 289e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x289e, X509_ATTRIBUTE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_ATTRIBUTE 28a4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28a4, d2i_X509_ATTRIBUTE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_ATTRIBUTE 28aa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28aa, i2d_X509_ATTRIBUTE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_it 28b0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28b0, X509_ATTRIBUTE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_create 28b6 81003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28b6, X509_ATTRIBUTE_create(d0,d1,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_new 28bc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28bc, X509_EXTENSION_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_free 28c2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28c2, X509_EXTENSION_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_EXTENSION 28c8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28c8, d2i_X509_EXTENSION(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_EXTENSION 28ce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28ce, i2d_X509_EXTENSION(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_it 28d4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28d4, X509_EXTENSION_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_new 28da 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28da, X509_NAME_ENTRY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_free 28e0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28e0, X509_NAME_ENTRY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_NAME_ENTRY 28e6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28e6, d2i_X509_NAME_ENTRY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_NAME_ENTRY 28ec 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28ec, i2d_X509_NAME_ENTRY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_it 28f2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28f2, X509_NAME_ENTRY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_new 28f8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28f8, X509_NAME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_free 28fe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28fe, X509_NAME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_NAME 2904 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2904, d2i_X509_NAME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_NAME 290a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x290a, i2d_X509_NAME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_it 2910 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2910, X509_NAME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_set 2916 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2916, X509_NAME_set(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CINF_new 291c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x291c, X509_CINF_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CINF_free 2922 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2922, X509_CINF_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_CINF 2928 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2928, d2i_X509_CINF(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_CINF 292e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x292e, i2d_X509_CINF(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CINF_it 2934 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2934, X509_CINF_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_new 293a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x293a, X509_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_free 2940 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2940, X509_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509 2946 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2946, d2i_X509(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509 294c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x294c, i2d_X509(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_it 2952 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2952, X509_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CERT_AUX_new 2958 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2958, X509_CERT_AUX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CERT_AUX_free 295e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x295e, X509_CERT_AUX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_CERT_AUX 2964 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2964, d2i_X509_CERT_AUX(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_CERT_AUX 296a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x296a, i2d_X509_CERT_AUX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CERT_AUX_it 2970 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2970, X509_CERT_AUX_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ex_new_index 2976 ba98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2976, X509_get_ex_new_index(d0,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_ex_data 297c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x297c, X509_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ex_data 2982 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2982, X509_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_AUX 2988 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2988, i2d_X509_AUX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_AUX 298e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x298e, d2i_X509_AUX(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_alias_set1 2994 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2994, X509_alias_set1(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_keyid_set1 299a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x299a, X509_keyid_set1(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_alias_get0 29a0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29a0, X509_alias_get0(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_set_default 29a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29a6, X509_TRUST_set_default(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_set 29ac 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29ac, X509_TRUST_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_add1_trust_object 29b2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29b2, X509_add1_trust_object(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_add1_reject_object 29b8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29b8, X509_add1_reject_object(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_trust_clear 29be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29be, X509_trust_clear(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_reject_clear 29c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29c4, X509_reject_clear(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_new 29ca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29ca, X509_REVOKED_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_free 29d0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29d0, X509_REVOKED_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_REVOKED 29d6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29d6, d2i_X509_REVOKED(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_REVOKED 29dc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29dc, i2d_X509_REVOKED(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_it 29e2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29e2, X509_REVOKED_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_INFO_new 29e8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29e8, X509_CRL_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_INFO_free 29ee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29ee, X509_CRL_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_CRL_INFO 29f4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29f4, d2i_X509_CRL_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_CRL_INFO 29fa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29fa, i2d_X509_CRL_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_INFO_it 2a00 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a00, X509_CRL_INFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_new 2a06 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a06, X509_CRL_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_free 2a0c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a0c, X509_CRL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_CRL 2a12 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a12, d2i_X509_CRL(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_CRL 2a18 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a18, i2d_X509_CRL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_it 2a1e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a1e, X509_CRL_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_add0_revoked 2a24 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a24, X509_CRL_add0_revoked(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PKEY_new 2a2a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a2a, X509_PKEY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PKEY_free 2a30 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a30, X509_PKEY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_PKEY 2a36 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a36, i2d_X509_PKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_PKEY 2a3c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a3c, d2i_X509_PKEY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_new 2a42 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a42, NETSCAPE_SPKI_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_free 2a48 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a48, NETSCAPE_SPKI_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_NETSCAPE_SPKI 2a4e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a4e, d2i_NETSCAPE_SPKI(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_NETSCAPE_SPKI 2a54 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a54, i2d_NETSCAPE_SPKI(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_it 2a5a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a5a, NETSCAPE_SPKI_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKAC_new 2a60 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a60, NETSCAPE_SPKAC_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKAC_free 2a66 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a66, NETSCAPE_SPKAC_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_NETSCAPE_SPKAC 2a6c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a6c, d2i_NETSCAPE_SPKAC(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_NETSCAPE_SPKAC 2a72 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a72, i2d_NETSCAPE_SPKAC(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKAC_it 2a78 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a78, NETSCAPE_SPKAC_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_CERT_SEQUENCE_new 2a7e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a7e, NETSCAPE_CERT_SEQUENCE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_CERT_SEQUENCE_free 2a84 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a84, NETSCAPE_CERT_SEQUENCE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_NETSCAPE_CERT_SEQUENCE 2a8a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a8a, d2i_NETSCAPE_CERT_SEQUENCE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_NETSCAPE_CERT_SEQUENCE 2a90 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a90, i2d_NETSCAPE_CERT_SEQUENCE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_CERT_SEQUENCE_it 2a96 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a96, NETSCAPE_CERT_SEQUENCE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_INFO_new 2a9c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a9c, X509_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_INFO_free 2aa2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2aa2, X509_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_oneline 2aa8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2aa8, X509_NAME_oneline(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_verify 2aae 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2aae, ASN1_verify(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_digest 2ab4 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ab4, ASN1_digest(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_sign 2aba 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2aba, ASN1_sign(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_digest 2ac0 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ac0, ASN1_item_digest(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_verify 2ac6 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ac6, ASN1_item_verify(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_sign 2acc 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2acc, ASN1_item_sign(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_version 2ad2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ad2, X509_set_version(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_serialNumber 2ad8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ad8, X509_set_serialNumber(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_serialNumber 2ade 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ade, X509_get_serialNumber(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_issuer_name 2ae4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ae4, X509_set_issuer_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_issuer_name 2aea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2aea, X509_get_issuer_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_subject_name 2af0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2af0, X509_set_subject_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_subject_name 2af6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2af6, X509_get_subject_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_notBefore 2afc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2afc, X509_set_notBefore(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_notAfter 2b02 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b02, X509_set_notAfter(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_pubkey 2b08 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b08, X509_set_pubkey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_pubkey 2b0e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b0e, X509_get_pubkey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get0_pubkey_bitstr 2b14 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b14, X509_get0_pubkey_bitstr(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_certificate_type 2b1a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b1a, X509_certificate_type(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_set_version 2b20 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b20, X509_REQ_set_version(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_set_subject_name 2b26 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b26, X509_REQ_set_subject_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_set_pubkey 2b2c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b2c, X509_REQ_set_pubkey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_pubkey 2b32 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b32, X509_REQ_get_pubkey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_extension_nid 2b38 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b38, X509_REQ_extension_nid(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_extension_nids 2b3e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b3e, X509_REQ_get_extension_nids())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_set_extension_nids 2b44 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b44, X509_REQ_set_extension_nids(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_extensions 2b4a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b4a, X509_REQ_get_extensions(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_add_extensions_nid 2b50 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b50, X509_REQ_add_extensions_nid(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_add_extensions 2b56 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b56, X509_REQ_add_extensions(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_attr_count 2b5c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b5c, X509_REQ_get_attr_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_attr_by_NID 2b62 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b62, X509_REQ_get_attr_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_attr_by_OBJ 2b68 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b68, X509_REQ_get_attr_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_attr 2b6e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b6e, X509_REQ_get_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_delete_attr 2b74 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b74, X509_REQ_delete_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_add1_attr 2b7a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b7a, X509_REQ_add1_attr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_add1_attr_by_OBJ 2b80 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b80, X509_REQ_add1_attr_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_add1_attr_by_NID 2b86 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b86, X509_REQ_add1_attr_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_add1_attr_by_txt 2b8c 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b8c, X509_REQ_add1_attr_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_set_version 2b92 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b92, X509_CRL_set_version(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_set_issuer_name 2b98 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b98, X509_CRL_set_issuer_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_set_lastUpdate 2b9e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b9e, X509_CRL_set_lastUpdate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_set_nextUpdate 2ba4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ba4, X509_CRL_set_nextUpdate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_sort 2baa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2baa, X509_CRL_sort(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_set_serialNumber 2bb0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bb0, X509_REVOKED_set_serialNumber(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_set_revocationDate 2bb6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bb6, X509_REVOKED_set_revocationDate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_private_key 2bbc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bbc, X509_check_private_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_issuer_and_serial_cmp 2bc2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bc2, X509_issuer_and_serial_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_issuer_and_serial_hash 2bc8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bc8, X509_issuer_and_serial_hash(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_issuer_name_cmp 2bce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bce, X509_issuer_name_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_issuer_name_hash 2bd4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bd4, X509_issuer_name_hash(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_subject_name_cmp 2bda 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bda, X509_subject_name_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_subject_name_hash 2be0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2be0, X509_subject_name_hash(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_cmp 2be6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2be6, X509_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_cmp 2bec 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bec, X509_NAME_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_hash 2bf2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bf2, X509_NAME_hash(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_cmp 2bf8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bf8, X509_CRL_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_print 2bfe 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bfe, X509_NAME_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_print_ex 2c04 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c04, X509_NAME_print_ex(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_print_ex 2c0a 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c0a, X509_print_ex(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_print 2c10 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c10, X509_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ocspid_print 2c16 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c16, X509_ocspid_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CERT_AUX_print 2c1c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c1c, X509_CERT_AUX_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_print 2c22 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c22, X509_CRL_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_print_ex 2c28 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c28, X509_REQ_print_ex(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_print 2c2e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c2e, X509_REQ_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_entry_count 2c34 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c34, X509_NAME_entry_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_get_text_by_NID 2c3a 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c3a, X509_NAME_get_text_by_NID(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_get_text_by_OBJ 2c40 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c40, X509_NAME_get_text_by_OBJ(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_get_index_by_NID 2c46 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c46, X509_NAME_get_index_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_get_index_by_OBJ 2c4c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c4c, X509_NAME_get_index_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_get_entry 2c52 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c52, X509_NAME_get_entry(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_delete_entry 2c58 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c58, X509_NAME_delete_entry(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_add_entry 2c5e 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c5e, X509_NAME_add_entry(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_add_entry_by_OBJ 2c64 321a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c64, X509_NAME_add_entry_by_OBJ(a0,a1,d0,a2,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_add_entry_by_NID 2c6a 432910807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c6a, X509_NAME_add_entry_by_NID(a0,d0,d1,a1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_create_by_txt 2c70 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c70, X509_NAME_ENTRY_create_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_create_by_NID 2c76 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c76, X509_NAME_ENTRY_create_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_add_entry_by_txt 2c7c 321a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c7c, X509_NAME_add_entry_by_txt(a0,a1,d0,a2,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_create_by_OBJ 2c82 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c82, X509_NAME_ENTRY_create_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_set_object 2c88 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c88, X509_NAME_ENTRY_set_object(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_set_data 2c8e 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c8e, X509_NAME_ENTRY_set_data(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_get_object 2c94 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c94, X509_NAME_ENTRY_get_object(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_get_data 2c9a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c9a, X509_NAME_ENTRY_get_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_get_ext_count 2ca0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ca0, X509v3_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_get_ext_by_NID 2ca6 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ca6, X509v3_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_get_ext_by_OBJ 2cac 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cac, X509v3_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_get_ext_by_critical 2cb2 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cb2, X509v3_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_get_ext 2cb8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cb8, X509v3_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_delete_ext 2cbe 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cbe, X509v3_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_add_ext 2cc4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cc4, X509v3_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ext_count 2cca 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cca, X509_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ext_by_NID 2cd0 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cd0, X509_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ext_by_OBJ 2cd6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cd6, X509_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ext_by_critical 2cdc 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cdc, X509_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ext 2ce2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ce2, X509_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_delete_ext 2ce8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ce8, X509_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_add_ext 2cee 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cee, X509_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ext_d2i 2cf4 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cf4, X509_get_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_add1_ext_i2d 2cfa 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cfa, X509_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_ext_count 2d00 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d00, X509_CRL_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_ext_by_NID 2d06 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d06, X509_CRL_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_ext_by_OBJ 2d0c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d0c, X509_CRL_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_ext_by_critical 2d12 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d12, X509_CRL_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_ext 2d18 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d18, X509_CRL_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_delete_ext 2d1e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d1e, X509_CRL_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_add_ext 2d24 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d24, X509_CRL_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_ext_d2i 2d2a a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d2a, X509_CRL_get_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_add1_ext_i2d 2d30 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d30, X509_CRL_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get_ext_count 2d36 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d36, X509_REVOKED_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get_ext_by_NID 2d3c 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d3c, X509_REVOKED_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get_ext_by_OBJ 2d42 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d42, X509_REVOKED_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get_ext_by_critical 2d48 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d48, X509_REVOKED_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get_ext 2d4e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d4e, X509_REVOKED_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_delete_ext 2d54 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d54, X509_REVOKED_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_add_ext 2d5a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d5a, X509_REVOKED_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get_ext_d2i 2d60 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d60, X509_REVOKED_get_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_add1_ext_i2d 2d66 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d66, X509_REVOKED_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_create_by_NID 2d6c 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d6c, X509_EXTENSION_create_by_NID(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_create_by_OBJ 2d72 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d72, X509_EXTENSION_create_by_OBJ(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_set_object 2d78 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d78, X509_EXTENSION_set_object(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_set_critical 2d7e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d7e, X509_EXTENSION_set_critical(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_set_data 2d84 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d84, X509_EXTENSION_set_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_get_object 2d8a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d8a, X509_EXTENSION_get_object(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_get_data 2d90 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d90, X509_EXTENSION_get_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_get_critical 2d96 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d96, X509_EXTENSION_get_critical(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_get_attr_count 2d9c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d9c, X509at_get_attr_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_get_attr_by_NID 2da2 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2da2, X509at_get_attr_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_get_attr_by_OBJ 2da8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2da8, X509at_get_attr_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_get_attr 2dae 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dae, X509at_get_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_delete_attr 2db4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2db4, X509at_delete_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_add1_attr 2dba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dba, X509at_add1_attr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_add1_attr_by_OBJ 2dc0 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dc0, X509at_add1_attr_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_add1_attr_by_NID 2dc6 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dc6, X509at_add1_attr_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_add1_attr_by_txt 2dcc 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dcc, X509at_add1_attr_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_create_by_NID 2dd2 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dd2, X509_ATTRIBUTE_create_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_create_by_OBJ 2dd8 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dd8, X509_ATTRIBUTE_create_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_create_by_txt 2dde 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dde, X509_ATTRIBUTE_create_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_set1_object 2de4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2de4, X509_ATTRIBUTE_set1_object(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_set1_data 2dea 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dea, X509_ATTRIBUTE_set1_data(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_get0_data 2df0 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2df0, X509_ATTRIBUTE_get0_data(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_count 2df6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2df6, X509_ATTRIBUTE_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_get0_object 2dfc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dfc, X509_ATTRIBUTE_get0_object(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_get0_type 2e02 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e02, X509_ATTRIBUTE_get0_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_verify_cert 2e08 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e08, X509_verify_cert(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_find_by_issuer_and_serial 2e0e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e0e, X509_find_by_issuer_and_serial(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_find_by_subject 2e14 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e14, X509_find_by_subject(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBEPARAM_new 2e1a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e1a, PBEPARAM_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBEPARAM_free 2e20 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e20, PBEPARAM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PBEPARAM 2e26 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e26, d2i_PBEPARAM(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PBEPARAM 2e2c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e2c, i2d_PBEPARAM(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBEPARAM_it 2e32 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e32, PBEPARAM_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBE2PARAM_new 2e38 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e38, PBE2PARAM_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBE2PARAM_free 2e3e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e3e, PBE2PARAM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PBE2PARAM 2e44 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e44, d2i_PBE2PARAM(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PBE2PARAM 2e4a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e4a, i2d_PBE2PARAM(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBE2PARAM_it 2e50 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e50, PBE2PARAM_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBKDF2PARAM_new 2e56 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e56, PBKDF2PARAM_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBKDF2PARAM_free 2e5c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e5c, PBKDF2PARAM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PBKDF2PARAM 2e62 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e62, d2i_PBKDF2PARAM(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PBKDF2PARAM 2e68 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e68, i2d_PBKDF2PARAM(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBKDF2PARAM_it 2e6e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e6e, PBKDF2PARAM_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_pbe_set 2e74 281004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e74, PKCS5_pbe_set(d0,d1,a0,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_pbe2_set 2e7a 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e7a, PKCS5_pbe2_set(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_PRIV_KEY_INFO_new 2e80 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e80, PKCS8_PRIV_KEY_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_PRIV_KEY_INFO_free 2e86 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e86, PKCS8_PRIV_KEY_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS8_PRIV_KEY_INFO 2e8c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e8c, d2i_PKCS8_PRIV_KEY_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS8_PRIV_KEY_INFO 2e92 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e92, i2d_PKCS8_PRIV_KEY_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_PRIV_KEY_INFO_it 2e98 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e98, PKCS8_PRIV_KEY_INFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKCS82PKEY 2e9e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e9e, EVP_PKCS82PKEY(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY2PKCS8 2ea4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ea4, EVP_PKEY2PKCS8(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY2PKCS8_broken 2eaa 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2eaa, EVP_PKEY2PKCS8_broken(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_set_broken 2eb0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2eb0, PKCS8_set_broken(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_trust 2eb6 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2eb6, X509_check_trust(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_get_count 2ebc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ebc, X509_TRUST_get_count())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_get0 2ec2 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ec2, X509_TRUST_get0(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_get_by_id 2ec8 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ec8, X509_TRUST_get_by_id(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_add 2ece a2981006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ece, X509_TRUST_add(d0,d1,a0,a1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_cleanup 2ed4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ed4, X509_TRUST_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_get_flags 2eda 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2eda, X509_TRUST_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_get0_name 2ee0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ee0, X509_TRUST_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_get_trust 2ee6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ee6, X509_TRUST_get_trust(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_X509_strings 2eec 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2eec, ERR_load_X509_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_OBJECT_idx_by_subject 2ef2 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ef2, X509_OBJECT_idx_by_subject(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_OBJECT_retrieve_by_subject 2ef8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ef8, X509_OBJECT_retrieve_by_subject(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_OBJECT_retrieve_match 2efe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2efe, X509_OBJECT_retrieve_match(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_OBJECT_up_ref_count 2f04 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f04, X509_OBJECT_up_ref_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_OBJECT_free_contents 2f0a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f0a, X509_OBJECT_free_contents(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_new 2f10 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f10, X509_STORE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_free 2f16 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f16, X509_STORE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_flags 2f1c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f1c, X509_STORE_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_purpose 2f22 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f22, X509_STORE_set_purpose(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_trust 2f28 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f28, X509_STORE_set_trust(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_new 2f2e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f2e, X509_STORE_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get1_issuer 2f34 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f34, X509_STORE_CTX_get1_issuer(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_free 2f3a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f3a, X509_STORE_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_init 2f40 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f40, X509_STORE_CTX_init(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_trusted_stack 2f46 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f46, X509_STORE_CTX_trusted_stack(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_cleanup 2f4c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f4c, X509_STORE_CTX_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_add_lookup 2f52 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f52, X509_STORE_add_lookup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_hash_dir 2f58 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f58, X509_LOOKUP_hash_dir())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_file 2f5e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f5e, X509_LOOKUP_file())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_add_cert 2f64 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f64, X509_STORE_add_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_add_crl 2f6a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f6a, X509_STORE_add_crl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_get_by_subject 2f70 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f70, X509_STORE_get_by_subject(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_ctrl 2f76 a190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f76, X509_LOOKUP_ctrl(a0,d0,a1,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_load_cert_file 2f7c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f7c, X509_load_cert_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_load_crl_file 2f82 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f82, X509_load_crl_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_load_cert_crl_file 2f88 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f88, X509_load_cert_crl_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_new 2f8e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f8e, X509_LOOKUP_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_free 2f94 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f94, X509_LOOKUP_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_init 2f9a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f9a, X509_LOOKUP_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_by_subject 2fa0 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fa0, X509_LOOKUP_by_subject(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_by_issuer_serial 2fa6 ba90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fa6, X509_LOOKUP_by_issuer_serial(a0,d0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_by_fingerprint 2fac a190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fac, X509_LOOKUP_by_fingerprint(a0,d0,a1,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_by_alias 2fb2 a190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fb2, X509_LOOKUP_by_alias(a0,d0,a1,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_shutdown 2fb8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fb8, X509_LOOKUP_shutdown(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_load_locations 2fbe a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fbe, X509_STORE_load_locations(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_default_paths 2fc4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fc4, X509_STORE_set_default_paths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_ex_new_index 2fca ba98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fca, X509_STORE_CTX_get_ex_new_index(d0,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_ex_data 2fd0 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fd0, X509_STORE_CTX_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_ex_data 2fd6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fd6, X509_STORE_CTX_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_error 2fdc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fdc, X509_STORE_CTX_get_error(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_error 2fe2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fe2, X509_STORE_CTX_set_error(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_error_depth 2fe8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fe8, X509_STORE_CTX_get_error_depth(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_current_cert 2fee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fee, X509_STORE_CTX_get_current_cert(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_chain 2ff4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ff4, X509_STORE_CTX_get_chain(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get1_chain 2ffa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ffa, X509_STORE_CTX_get1_chain(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_cert 3000 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3000, X509_STORE_CTX_set_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_chain 3006 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3006, X509_STORE_CTX_set_chain(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_purpose 300c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x300c, X509_STORE_CTX_set_purpose(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_trust 3012 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3012, X509_STORE_CTX_set_trust(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_purpose_inherit 3018 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3018, X509_STORE_CTX_purpose_inherit(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_flags 301e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x301e, X509_STORE_CTX_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_time 3024 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3024, X509_STORE_CTX_set_time(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_verify_cb 302a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x302a, X509_STORE_CTX_set_verify_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BASIC_CONSTRAINTS_new 3030 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3030, BASIC_CONSTRAINTS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BASIC_CONSTRAINTS_free 3036 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3036, BASIC_CONSTRAINTS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_BASIC_CONSTRAINTS 303c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x303c, d2i_BASIC_CONSTRAINTS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_BASIC_CONSTRAINTS 3042 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3042, i2d_BASIC_CONSTRAINTS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BASIC_CONSTRAINTS_it 3048 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3048, BASIC_CONSTRAINTS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_new 304e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x304e, SXNET_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_free 3054 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3054, SXNET_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_SXNET 305a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x305a, d2i_SXNET(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_SXNET 3060 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3060, i2d_SXNET(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_it 3066 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3066, SXNET_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNETID_new 306c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x306c, SXNETID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNETID_free 3072 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3072, SXNETID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_SXNETID 3078 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3078, d2i_SXNETID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_SXNETID 307e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x307e, i2d_SXNETID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNETID_it 3084 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3084, SXNETID_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_add_id_asc 308a 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x308a, SXNET_add_id_asc(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_add_id_ulong 3090 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3090, SXNET_add_id_ulong(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_add_id_INTEGER 3096 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3096, SXNET_add_id_INTEGER(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_get_id_asc 309c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x309c, SXNET_get_id_asc(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_get_id_ulong 30a2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30a2, SXNET_get_id_ulong(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_get_id_INTEGER 30a8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30a8, SXNET_get_id_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AUTHORITY_KEYID_new 30ae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30ae, AUTHORITY_KEYID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AUTHORITY_KEYID_free 30b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30b4, AUTHORITY_KEYID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_AUTHORITY_KEYID 30ba 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30ba, d2i_AUTHORITY_KEYID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_AUTHORITY_KEYID 30c0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30c0, i2d_AUTHORITY_KEYID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AUTHORITY_KEYID_it 30c6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30c6, AUTHORITY_KEYID_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKEY_USAGE_PERIOD_new 30cc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30cc, PKEY_USAGE_PERIOD_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKEY_USAGE_PERIOD_free 30d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30d2, PKEY_USAGE_PERIOD_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKEY_USAGE_PERIOD 30d8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30d8, d2i_PKEY_USAGE_PERIOD(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKEY_USAGE_PERIOD 30de 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30de, i2d_PKEY_USAGE_PERIOD(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKEY_USAGE_PERIOD_it 30e4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30e4, PKEY_USAGE_PERIOD_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_new 30ea 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30ea, GENERAL_NAME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_free 30f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30f0, GENERAL_NAME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_GENERAL_NAME 30f6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30f6, d2i_GENERAL_NAME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_GENERAL_NAME 30fc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30fc, i2d_GENERAL_NAME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_it 3102 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3102, GENERAL_NAME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2v_GENERAL_NAME 3108 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3108, i2v_GENERAL_NAME(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_print 310e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x310e, GENERAL_NAME_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAMES_new 3114 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3114, GENERAL_NAMES_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAMES_free 311a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x311a, GENERAL_NAMES_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_GENERAL_NAMES 3120 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3120, d2i_GENERAL_NAMES(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_GENERAL_NAMES 3126 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3126, i2d_GENERAL_NAMES(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAMES_it 312c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x312c, GENERAL_NAMES_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2v_GENERAL_NAMES 3132 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3132, i2v_GENERAL_NAMES(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v2i_GENERAL_NAMES 3138 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3138, v2i_GENERAL_NAMES(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OTHERNAME_new 313e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x313e, OTHERNAME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OTHERNAME_free 3144 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3144, OTHERNAME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OTHERNAME 314a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x314a, d2i_OTHERNAME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OTHERNAME 3150 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3150, i2d_OTHERNAME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OTHERNAME_it 3156 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3156, OTHERNAME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EDIPARTYNAME_new 315c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x315c, EDIPARTYNAME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EDIPARTYNAME_free 3162 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3162, EDIPARTYNAME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_EDIPARTYNAME 3168 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3168, d2i_EDIPARTYNAME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_EDIPARTYNAME 316e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x316e, i2d_EDIPARTYNAME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EDIPARTYNAME_it 3174 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3174, EDIPARTYNAME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2s_ASN1_OCTET_STRING 317a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x317a, i2s_ASN1_OCTET_STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase s2i_ASN1_OCTET_STRING 3180 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3180, s2i_ASN1_OCTET_STRING(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EXTENDED_KEY_USAGE_new 3186 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3186, EXTENDED_KEY_USAGE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EXTENDED_KEY_USAGE_free 318c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x318c, EXTENDED_KEY_USAGE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_EXTENDED_KEY_USAGE 3192 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3192, d2i_EXTENDED_KEY_USAGE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_EXTENDED_KEY_USAGE 3198 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3198, i2d_EXTENDED_KEY_USAGE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EXTENDED_KEY_USAGE_it 319e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x319e, EXTENDED_KEY_USAGE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2a_ACCESS_DESCRIPTION 31a4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31a4, i2a_ACCESS_DESCRIPTION(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CERTIFICATEPOLICIES_new 31aa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31aa, CERTIFICATEPOLICIES_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CERTIFICATEPOLICIES_free 31b0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31b0, CERTIFICATEPOLICIES_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_CERTIFICATEPOLICIES 31b6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31b6, d2i_CERTIFICATEPOLICIES(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_CERTIFICATEPOLICIES 31bc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31bc, i2d_CERTIFICATEPOLICIES(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CERTIFICATEPOLICIES_it 31c2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31c2, CERTIFICATEPOLICIES_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICYINFO_new 31c8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31c8, POLICYINFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICYINFO_free 31ce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31ce, POLICYINFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_POLICYINFO 31d4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31d4, d2i_POLICYINFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_POLICYINFO 31da 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31da, i2d_POLICYINFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICYINFO_it 31e0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31e0, POLICYINFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICYQUALINFO_new 31e6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31e6, POLICYQUALINFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICYQUALINFO_free 31ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31ec, POLICYQUALINFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_POLICYQUALINFO 31f2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31f2, d2i_POLICYQUALINFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_POLICYQUALINFO 31f8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31f8, i2d_POLICYQUALINFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICYQUALINFO_it 31fe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31fe, POLICYQUALINFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase USERNOTICE_new 3204 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3204, USERNOTICE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase USERNOTICE_free 320a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x320a, USERNOTICE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_USERNOTICE 3210 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3210, d2i_USERNOTICE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_USERNOTICE 3216 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3216, i2d_USERNOTICE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase USERNOTICE_it 321c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x321c, USERNOTICE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NOTICEREF_new 3222 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3222, NOTICEREF_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NOTICEREF_free 3228 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3228, NOTICEREF_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_NOTICEREF 322e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x322e, d2i_NOTICEREF(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_NOTICEREF 3234 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3234, i2d_NOTICEREF(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NOTICEREF_it 323a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x323a, NOTICEREF_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRL_DIST_POINTS_new 3240 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3240, CRL_DIST_POINTS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRL_DIST_POINTS_free 3246 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3246, CRL_DIST_POINTS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_CRL_DIST_POINTS 324c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x324c, d2i_CRL_DIST_POINTS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_CRL_DIST_POINTS 3252 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3252, i2d_CRL_DIST_POINTS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRL_DIST_POINTS_it 3258 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3258, CRL_DIST_POINTS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_new 325e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x325e, DIST_POINT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_free 3264 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3264, DIST_POINT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DIST_POINT 326a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x326a, d2i_DIST_POINT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DIST_POINT 3270 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3270, i2d_DIST_POINT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_it 3276 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3276, DIST_POINT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_NAME_new 327c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x327c, DIST_POINT_NAME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_NAME_free 3282 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3282, DIST_POINT_NAME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DIST_POINT_NAME 3288 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3288, d2i_DIST_POINT_NAME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DIST_POINT_NAME 328e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x328e, i2d_DIST_POINT_NAME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_NAME_it 3294 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3294, DIST_POINT_NAME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ACCESS_DESCRIPTION_new 329a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x329a, ACCESS_DESCRIPTION_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ACCESS_DESCRIPTION_free 32a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32a0, ACCESS_DESCRIPTION_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ACCESS_DESCRIPTION 32a6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32a6, d2i_ACCESS_DESCRIPTION(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ACCESS_DESCRIPTION 32ac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32ac, i2d_ACCESS_DESCRIPTION(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ACCESS_DESCRIPTION_it 32b2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32b2, ACCESS_DESCRIPTION_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AUTHORITY_INFO_ACCESS_new 32b8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32b8, AUTHORITY_INFO_ACCESS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AUTHORITY_INFO_ACCESS_free 32be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32be, AUTHORITY_INFO_ACCESS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_AUTHORITY_INFO_ACCESS 32c4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32c4, d2i_AUTHORITY_INFO_ACCESS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_AUTHORITY_INFO_ACCESS 32ca 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32ca, i2d_AUTHORITY_INFO_ACCESS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AUTHORITY_INFO_ACCESS_it 32d0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32d0, AUTHORITY_INFO_ACCESS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v2i_GENERAL_NAME 32d6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32d6, v2i_GENERAL_NAME(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_conf_free 32dc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32dc, X509V3_conf_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_nconf_nid 32e2 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32e2, X509V3_EXT_nconf_nid(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_nconf 32e8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32e8, X509V3_EXT_nconf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_add_nconf_sk 32ee ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32ee, X509V3_EXT_add_nconf_sk(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_add_nconf 32f4 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32f4, X509V3_EXT_add_nconf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_REQ_add_nconf 32fa ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32fa, X509V3_EXT_REQ_add_nconf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_CRL_add_nconf 3300 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3300, X509V3_EXT_CRL_add_nconf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_conf_nid 3306 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3306, X509V3_EXT_conf_nid(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_conf 330c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x330c, X509V3_EXT_conf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_add_conf 3312 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3312, X509V3_EXT_add_conf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_REQ_add_conf 3318 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3318, X509V3_EXT_REQ_add_conf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_CRL_add_conf 331e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x331e, X509V3_EXT_CRL_add_conf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add_value_bool_nf 3324 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3324, X509V3_add_value_bool_nf(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_get_value_bool 332a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x332a, X509V3_get_value_bool(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_get_value_int 3330 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3330, X509V3_get_value_int(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_set_nconf 3336 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3336, X509V3_set_nconf(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_set_conf_lhash 333c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x333c, X509V3_set_conf_lhash(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_get_string 3342 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3342, X509V3_get_string(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_get_section 3348 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3348, X509V3_get_section(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_string_free 334e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x334e, X509V3_string_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_section_free 3354 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3354, X509V3_section_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_set_ctx 335a 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x335a, X509V3_set_ctx(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add_value 3360 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3360, X509V3_add_value(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add_value_uchar 3366 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3366, X509V3_add_value_uchar(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add_value_bool 336c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x336c, X509V3_add_value_bool(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add_value_int 3372 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3372, X509V3_add_value_int(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2s_ASN1_INTEGER 3378 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3378, i2s_ASN1_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase s2i_ASN1_INTEGER 337e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x337e, s2i_ASN1_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2s_ASN1_ENUMERATED 3384 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3384, i2s_ASN1_ENUMERATED(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2s_ASN1_ENUMERATED_TABLE 338a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x338a, i2s_ASN1_ENUMERATED_TABLE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_add 3390 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3390, X509V3_EXT_add(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_add_list 3396 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3396, X509V3_EXT_add_list(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_add_alias 339c 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x339c, X509V3_EXT_add_alias(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_cleanup 33a2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33a2, X509V3_EXT_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_get 33a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33a8, X509V3_EXT_get(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_get_nid 33ae 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33ae, X509V3_EXT_get_nid(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add_standard_extensions 33b4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33b4, X509V3_add_standard_extensions())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_parse_list 33ba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33ba, X509V3_parse_list(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_d2i 33c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33c0, X509V3_EXT_d2i(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_get_d2i 33c6 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33c6, X509V3_get_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_i2d 33cc 81003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33cc, X509V3_EXT_i2d(d0,d1,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add1_i2d 33d2 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33d2, X509V3_add1_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase hex_to_string 33d8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33d8, hex_to_string(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase string_to_hex 33de 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33de, string_to_hex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase name_cmp 33e4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33e4, name_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_val_prn 33ea 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33ea, X509V3_EXT_val_prn(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_print 33f0 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33f0, X509V3_EXT_print(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_extensions_print 33f6 10a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33f6, X509V3_extensions_print(a0,a1,a2,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_purpose 33fc 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33fc, X509_check_purpose(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_supported_extension 3402 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3402, X509_supported_extension(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_set 3408 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3408, X509_PURPOSE_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_issued 340e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x340e, X509_check_issued(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get_count 3414 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3414, X509_PURPOSE_get_count())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get0 341a 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x341a, X509_PURPOSE_get0(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get_by_sname 3420 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3420, X509_PURPOSE_get_by_sname(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get_by_id 3426 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3426, X509_PURPOSE_get_by_id(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_add 342c ba9821007
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x342c, X509_PURPOSE_add(d0,d1,d2,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get0_name 3432 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3432, X509_PURPOSE_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get0_sname 3438 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3438, X509_PURPOSE_get0_sname(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get_trust 343e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x343e, X509_PURPOSE_get_trust(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_cleanup 3444 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3444, X509_PURPOSE_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get_id 344a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x344a, X509_PURPOSE_get_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get1_email 3450 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3450, X509_get1_email(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get1_email 3456 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3456, X509_REQ_get1_email(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_email_free 345c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x345c, X509_email_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_X509V3_strings 3462 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3462, ERR_load_X509V3_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_options 3468 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3468, AES_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_set_encrypt_key 346e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x346e, AES_set_encrypt_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_set_decrypt_key 3474 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3474, AES_set_decrypt_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_encrypt 347a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x347a, AES_encrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_decrypt 3480 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3480, AES_decrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_ecb_encrypt 3486 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3486, AES_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_cbc_encrypt 348c 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x348c, AES_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_cfb128_encrypt 3492 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3492, AES_cfb128_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_cfb1_encrypt 3498 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3498, AES_cfb1_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_cfb8_encrypt 349e 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x349e, AES_cfb8_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_ofb128_encrypt 34a4 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34a4, AES_ofb128_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_ctr128_encrypt 34aa b21a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34aa, AES_ctr128_encrypt(a0,a1,d0,a2,d1,d2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_set_key 34b0 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34b0, BF_set_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_encrypt 34b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34b6, BF_encrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_decrypt 34bc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34bc, BF_decrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_ecb_encrypt 34c2 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34c2, BF_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_cbc_encrypt 34c8 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34c8, BF_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_cfb64_encrypt 34ce 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34ce, BF_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_ofb64_encrypt 34d4 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34d4, BF_ofb64_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_options 34da 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34da, BF_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_set_key 34e0 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34e0, CAST_set_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_ecb_encrypt 34e6 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34e6, CAST_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_encrypt 34ec 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34ec, CAST_encrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_decrypt 34f2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34f2, CAST_decrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_cbc_encrypt 34f8 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34f8, CAST_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_cfb64_encrypt 34fe 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34fe, CAST_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_ofb64_encrypt 3504 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3504, CAST_ofb64_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ecb3_encrypt 350a 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x350a, DES_ecb3_encrypt(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_cbc_cksum 3510 ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3510, DES_cbc_cksum(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_cbc_encrypt 3516 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3516, DES_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ncbc_encrypt 351c 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x351c, DES_ncbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_xcbc_encrypt 3522 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3522, DES_xcbc_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_cfb_encrypt 3528 2ba109807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3528, DES_cfb_encrypt(a0,a1,d0,d1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ecb_encrypt 352e 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x352e, DES_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_encrypt1 3534 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3534, DES_encrypt1(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_encrypt2 353a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x353a, DES_encrypt2(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_encrypt3 3540 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3540, DES_encrypt3(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_decrypt3 3546 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3546, DES_decrypt3(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ede3_cbc_encrypt 354c 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x354c, DES_ede3_cbc_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ede3_cbcm_encrypt 3552 4321ba09809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3552, DES_ede3_cbcm_encrypt(a0,a1,d0,a2,a3,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ede3_cfb64_encrypt 3558 4321ba09809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3558, DES_ede3_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ede3_cfb_encrypt 355e 432ba109809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x355e, DES_ede3_cfb_encrypt(a0,a1,d0,d1,a2,a3,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ede3_ofb64_encrypt 3564 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3564, DES_ede3_ofb64_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_enc_read 356a a918005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x356a, DES_enc_read(d0,a0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_enc_write 3570 a918005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3570, DES_enc_write(d0,a0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_fcrypt 3576 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3576, DES_fcrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_crypt 357c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x357c, DES_crypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ofb_encrypt 3582 ba109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3582, DES_ofb_encrypt(a0,a1,d0,d1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_pcbc_encrypt 3588 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3588, DES_pcbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_quad_cksum 358e a109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x358e, DES_quad_cksum(a0,a1,d0,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_random_key 3594 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3594, DES_random_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_set_odd_parity 359a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x359a, DES_set_odd_parity(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_check_key_parity 35a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35a0, DES_check_key_parity(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_is_weak_key 35a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35a6, DES_is_weak_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_set_key 35ac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35ac, DES_set_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_key_sched 35b2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35b2, DES_key_sched(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_set_key_checked 35b8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35b8, DES_set_key_checked(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_set_key_unchecked 35be 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35be, DES_set_key_unchecked(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_string_to_key 35c4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35c4, DES_string_to_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_string_to_2keys 35ca a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35ca, DES_string_to_2keys(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_cfb64_encrypt 35d0 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35d0, DES_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ofb64_encrypt 35d6 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35d6, DES_ofb64_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_read_password 35dc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35dc, DES_read_password(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_read_2passwords 35e2 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35e2, DES_read_2passwords(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_options 35e8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35e8, _ossl_old_des_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_ecb3_encrypt 35ee 32109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35ee, _ossl_old_des_ecb3_encrypt(a0,a1,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_cbc_cksum 35f4 a109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35f4, _ossl_old_des_cbc_cksum(a0,a1,d0,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_cbc_encrypt 35fa 2a109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35fa, _ossl_old_des_cbc_encrypt(a0,a1,d0,d1,a2,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_ncbc_encrypt 3600 2a109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3600, _ossl_old_des_ncbc_encrypt(a0,a1,d0,d1,a2,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_xcbc_encrypt 3606 32ba109808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3606, _ossl_old_des_xcbc_encrypt(a0,a1,d0,d1,a2,a3,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_cfb_encrypt 360c 3a2109807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x360c, _ossl_old_des_cfb_encrypt(a0,a1,d0,d1,d2,a2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_ecb_encrypt 3612 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3612, _ossl_old_des_ecb_encrypt(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_encrypt 3618 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3618, _ossl_old_des_encrypt(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_encrypt2 361e 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x361e, _ossl_old_des_encrypt2(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_encrypt3 3624 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3624, _ossl_old_des_encrypt3(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_decrypt3 362a 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x362a, _ossl_old_des_decrypt3(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_ede3_cbc_encrypt 3630 4a32109808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3630, _ossl_old_des_ede3_cbc_encrypt(a0,a1,d0,d1,d2,d3,a2,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_ede3_cfb64_encrypt 3636 4ba32109809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3636, _ossl_old_des_ede3_cfb64_encrypt(a0,a1,d0,d1,d2,d3,a2,a3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_ede3_ofb64_encrypt 363c ba32109808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x363c, _ossl_old_des_ede3_ofb64_encrypt(a0,a1,d0,d1,d2,d3,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_enc_read 3642 9218005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3642, _ossl_old_des_enc_read(d0,a0,d1,d2,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_enc_write 3648 9218005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3648, _ossl_old_des_enc_write(d0,a0,d1,d2,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_fcrypt 364e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x364e, _ossl_old_des_fcrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_crypt 3654 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3654, _ossl_old_des_crypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_crypt 365a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x365a, _ossl_old_crypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_ofb_encrypt 3660 a2109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3660, _ossl_old_des_ofb_encrypt(a0,a1,d0,d1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_pcbc_encrypt 3666 2a109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3666, _ossl_old_des_pcbc_encrypt(a0,a1,d0,d1,a2,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_quad_cksum 366c a109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x366c, _ossl_old_des_quad_cksum(a0,a1,d0,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_random_seed 3672 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3672, _ossl_old_des_random_seed(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_random_key 3678 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3678, _ossl_old_des_random_key(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_read_password 367e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x367e, _ossl_old_des_read_password(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_read_2passwords 3684 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3684, _ossl_old_des_read_2passwords(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_set_odd_parity 368a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x368a, _ossl_old_des_set_odd_parity(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_is_weak_key 3690 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3690, _ossl_old_des_is_weak_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_set_key 3696 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3696, _ossl_old_des_set_key(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_key_sched 369c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x369c, _ossl_old_des_key_sched(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_string_to_key 36a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36a2, _ossl_old_des_string_to_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_string_to_2keys 36a8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36a8, _ossl_old_des_string_to_2keys(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_cfb64_encrypt 36ae 2ba109807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36ae, _ossl_old_des_cfb64_encrypt(a0,a1,d0,d1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_old_des_ofb64_encrypt 36b4 ba109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36b4, _ossl_old_des_ofb64_encrypt(a0,a1,d0,d1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _ossl_096_des_random_seed 36ba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36ba, _ossl_096_des_random_seed(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_OpenSSL 36c0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36c0, DH_OpenSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_set_default_method 36c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36c6, DH_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_get_default_method 36cc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36cc, DH_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_set_method 36d2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36d2, DH_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_new_method 36d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36d8, DH_new_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_new 36de 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36de, DH_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_free 36e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36e4, DH_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_up_ref 36ea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36ea, DH_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_size 36f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36f0, DH_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_get_ex_new_index 36f6 ba98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36f6, DH_get_ex_new_index(d0,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_set_ex_data 36fc 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36fc, DH_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_get_ex_data 3702 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3702, DH_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_generate_parameters 3708 981004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3708, DH_generate_parameters(d0,d1,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_check 370e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x370e, DH_check(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_generate_key 3714 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3714, DH_generate_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_compute_key 371a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x371a, DH_compute_key(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DHparams 3720 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3720, d2i_DHparams(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DHparams 3726 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3726, i2d_DHparams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DHparams_print 372c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x372c, DHparams_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_DH_strings 3732 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3732, ERR_load_DH_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_SIG_new 3738 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3738, DSA_SIG_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_SIG_free 373e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x373e, DSA_SIG_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSA_SIG 3744 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3744, i2d_DSA_SIG(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSA_SIG 374a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x374a, d2i_DSA_SIG(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_do_sign 3750 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3750, DSA_do_sign(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_do_verify 3756 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3756, DSA_do_verify(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_OpenSSL 375c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x375c, DSA_OpenSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_set_default_method 3762 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3762, DSA_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_get_default_method 3768 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3768, DSA_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_set_method 376e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x376e, DSA_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_new 3774 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3774, DSA_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_new_method 377a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x377a, DSA_new_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_free 3780 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3780, DSA_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_up_ref 3786 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3786, DSA_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_size 378c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x378c, DSA_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_sign_setup 3792 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3792, DSA_sign_setup(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_sign 3798 ba918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3798, DSA_sign(d0,a0,d1,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_verify 379e a2918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x379e, DSA_verify(d0,a0,d1,a1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_get_ex_new_index 37a4 ba98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37a4, DSA_get_ex_new_index(d0,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_set_ex_data 37aa 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37aa, DSA_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_get_ex_data 37b0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37b0, DSA_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSAPublicKey 37b6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37b6, d2i_DSAPublicKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSAPrivateKey 37bc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37bc, d2i_DSAPrivateKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSAparams 37c2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37c2, d2i_DSAparams(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_generate_parameters 37c8 2ba918007
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37c8, DSA_generate_parameters(d0,a0,d1,a1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_generate_key 37ce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37ce, DSA_generate_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSAPublicKey 37d4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37d4, i2d_DSAPublicKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSAPrivateKey 37da 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37da, i2d_DSAPrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSAparams 37e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37e0, i2d_DSAparams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSAparams_print 37e6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37e6, DSAparams_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_print 37ec 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37ec, DSA_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_dup_DH 37f2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37f2, DSA_dup_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_DSA_strings 37f8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37f8, ERR_load_DSA_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_options 37fe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37fe, idea_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_ecb_encrypt 3804 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3804, idea_ecb_encrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_set_encrypt_key 380a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x380a, idea_set_encrypt_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_set_decrypt_key 3810 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3810, idea_set_decrypt_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_cbc_encrypt 3816 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3816, idea_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_cfb64_encrypt 381c 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x381c, idea_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_ofb64_encrypt 3822 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3822, idea_ofb64_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_encrypt 3828 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3828, idea_encrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD2_options 382e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x382e, MD2_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD2_Init 3834 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3834, MD2_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD2_Update 383a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x383a, MD2_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD2_Final 3840 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3840, MD2_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD2 3846 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3846, MD2(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD4_Init 384c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x384c, MD4_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD4_Update 3852 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3852, MD4_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD4_Final 3858 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3858, MD4_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD4 385e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x385e, MD4(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD4_Transform 3864 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3864, MD4_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD5_Init 386a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x386a, MD5_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD5_Update 3870 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3870, MD5_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD5_Final 3876 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3876, MD5_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD5 387c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x387c, MD5(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD5_Transform 3882 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3882, MD5_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MDC2_Init 3888 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3888, MDC2_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MDC2_Update 388e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x388e, MDC2_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MDC2_Final 3894 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3894, MDC2_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MDC2 389a 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x389a, MDC2(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_set_key 38a0 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38a0, RC2_set_key(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_ecb_encrypt 38a6 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38a6, RC2_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_encrypt 38ac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38ac, RC2_encrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_decrypt 38b2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38b2, RC2_decrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_cbc_encrypt 38b8 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38b8, RC2_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_cfb64_encrypt 38be 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38be, RC2_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_ofb64_encrypt 38c4 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38c4, RC2_ofb64_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC4_options 38ca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38ca, RC4_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC4_set_key 38d0 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38d0, RC4_set_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC4 38d6 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38d6, RC4(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_set_key 38dc 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38dc, RC5_32_set_key(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_ecb_encrypt 38e2 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38e2, RC5_32_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_encrypt 38e8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38e8, RC5_32_encrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_decrypt 38ee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38ee, RC5_32_decrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_cbc_encrypt 38f4 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38f4, RC5_32_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_cfb64_encrypt 38fa 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38fa, RC5_32_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_ofb64_encrypt 3900 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3900, RC5_32_ofb64_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RIPEMD160_Init 3906 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3906, RIPEMD160_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RIPEMD160_Update 390c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x390c, RIPEMD160_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RIPEMD160_Final 3912 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3912, RIPEMD160_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RIPEMD160 3918 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3918, RIPEMD160(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RIPEMD160_Transform 391e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x391e, RIPEMD160_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_new 3924 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3924, RSA_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_new_method 392a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x392a, RSA_new_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_size 3930 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3930, RSA_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_generate_key 3936 981004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3936, RSA_generate_key(d0,d1,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_check_key 393c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x393c, RSA_check_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_public_encrypt 3942 1a98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3942, RSA_public_encrypt(d0,a0,a1,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_private_encrypt 3948 1a98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3948, RSA_private_encrypt(d0,a0,a1,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_public_decrypt 394e 1a98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x394e, RSA_public_decrypt(d0,a0,a1,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_private_decrypt 3954 1a98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3954, RSA_private_decrypt(d0,a0,a1,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_free 395a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x395a, RSA_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_up_ref 3960 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3960, RSA_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_flags 3966 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3966, RSA_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_set_default_method 396c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x396c, RSA_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_get_default_method 3972 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3972, RSA_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_get_method 3978 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3978, RSA_get_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_set_method 397e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x397e, RSA_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_memory_lock 3984 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3984, RSA_memory_lock(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_PKCS1_SSLeay 398a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x398a, RSA_PKCS1_SSLeay())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_null_method 3990 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3990, RSA_null_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSAPublicKey 3996 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3996, d2i_RSAPublicKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSAPublicKey 399c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x399c, i2d_RSAPublicKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSAPublicKey_it 39a2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39a2, RSAPublicKey_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSAPrivateKey 39a8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39a8, d2i_RSAPrivateKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSAPrivateKey 39ae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39ae, i2d_RSAPrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSAPrivateKey_it 39b4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39b4, RSAPrivateKey_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_print 39ba 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39ba, RSA_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSA_NET 39c0 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39c0, i2d_RSA_NET(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSA_NET 39c6 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39c6, d2i_RSA_NET(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_Netscape_RSA 39cc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39cc, i2d_Netscape_RSA(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_Netscape_RSA 39d2 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39d2, d2i_Netscape_RSA(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_sign 39d8 ba918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39d8, RSA_sign(d0,a0,d1,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_verify 39de a2918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39de, RSA_verify(d0,a0,d1,a1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_sign_ASN1_OCTET_STRING 39e4 ba918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39e4, RSA_sign_ASN1_OCTET_STRING(d0,a0,d1,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_verify_ASN1_OCTET_STRING 39ea a2918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39ea, RSA_verify_ASN1_OCTET_STRING(d0,a0,d1,a1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_blinding_on 39f0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39f0, RSA_blinding_on(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_blinding_off 39f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39f6, RSA_blinding_off(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_PKCS1_type_1 39fc 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39fc, RSA_padding_add_PKCS1_type_1(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_PKCS1_type_1 3a02 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a02, RSA_padding_check_PKCS1_type_1(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_PKCS1_type_2 3a08 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a08, RSA_padding_add_PKCS1_type_2(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_PKCS1_type_2 3a0e 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a0e, RSA_padding_check_PKCS1_type_2(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_PKCS1_OAEP 3a14 2a190806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a14, RSA_padding_add_PKCS1_OAEP(a0,d0,a1,d1,a2,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_PKCS1_OAEP 3a1a 3a2190807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a1a, RSA_padding_check_PKCS1_OAEP(a0,d0,a1,d1,d2,a2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_SSLv23 3a20 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a20, RSA_padding_add_SSLv23(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_SSLv23 3a26 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a26, RSA_padding_check_SSLv23(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_none 3a2c 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a2c, RSA_padding_add_none(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_none 3a32 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a32, RSA_padding_check_none(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_get_ex_new_index 3a38 ba98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a38, RSA_get_ex_new_index(d0,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_set_ex_data 3a3e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a3e, RSA_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_get_ex_data 3a44 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a44, RSA_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSAPublicKey_dup 3a4a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a4a, RSAPublicKey_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSAPrivateKey_dup 3a50 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a50, RSAPrivateKey_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_RSA_strings 3a56 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a56, ERR_load_RSA_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA_Init 3a5c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a5c, SHA_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA_Update 3a62 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a62, SHA_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA_Final 3a68 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a68, SHA_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA 3a6e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a6e, SHA(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA_Transform 3a74 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a74, SHA_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA1_Init 3a7a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a7a, SHA1_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA1_Update 3a80 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a80, SHA1_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA1_Final 3a86 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a86, SHA1_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA1 3a8c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a8c, SHA1(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA1_Transform 3a92 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a92, SHA1_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_CTX_set_flags 3aa4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3aa4, HMAC_CTX_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase private_RC4_set_key 3aaa 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3aaa, private_RC4_set_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_ca 3ab0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ab0, X509_check_ca(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PROXY_POLICY_new 3ab6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ab6, PROXY_POLICY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PROXY_POLICY_free 3abc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3abc, PROXY_POLICY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PROXY_POLICY 3ac2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ac2, d2i_PROXY_POLICY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PROXY_POLICY 3ac8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ac8, i2d_PROXY_POLICY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PROXY_POLICY_it 3ace 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ace, PROXY_POLICY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PROXY_CERT_INFO_EXTENSION_new 3ad4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ad4, PROXY_CERT_INFO_EXTENSION_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PROXY_CERT_INFO_EXTENSION_free 3ada 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ada, PROXY_CERT_INFO_EXTENSION_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PROXY_CERT_INFO_EXTENSION 3ae0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ae0, d2i_PROXY_CERT_INFO_EXTENSION(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PROXY_CERT_INFO_EXTENSION 3ae6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ae6, i2d_PROXY_CERT_INFO_EXTENSION(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PROXY_CERT_INFO_EXTENSION_it 3aec 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3aec, PROXY_CERT_INFO_EXTENSION_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp_mont_consttime 3af2 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3af2, BN_mod_exp_mont_consttime(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_MONT_CTX_set_locked 3af8 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3af8, BN_MONT_CTX_set_locked(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS1_MGF1 3afe a190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3afe, PKCS1_MGF1(a0,d0,a1,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_X931 3b04 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b04, RSA_padding_add_X931(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_X931 3b0a 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b0a, RSA_padding_check_X931(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_X931_hash_id 3b10 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b10, RSA_X931_hash_id(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_verify_PKCS1_PSS 3b16 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b16, RSA_verify_PKCS1_PSS(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_PKCS1_PSS 3b1c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b1c, RSA_padding_add_PKCS1_PSS(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_sha224 3b22 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b22, EVP_sha224())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_sha256 3b28 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b28, EVP_sha256())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_sha384 3b2e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b2e, EVP_sha384())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_sha512 3b34 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b34, EVP_sha512())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_add 3b3a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b3a, BN_GF2m_add(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_arr2poly 3b40 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b40, BN_GF2m_arr2poly(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod 3b46 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b46, BN_GF2m_mod(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_mul 3b4c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b4c, BN_GF2m_mod_mul(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_sqr 3b52 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b52, BN_GF2m_mod_sqr(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_inv 3b58 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b58, BN_GF2m_mod_inv(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_div 3b5e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b5e, BN_GF2m_mod_div(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_exp 3b64 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b64, BN_GF2m_mod_exp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_sqrt 3b6a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b6a, BN_GF2m_mod_sqrt(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_solve_quad 3b70 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b70, BN_GF2m_mod_solve_quad(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_generate_prime_ex 3b76 ba910806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b76, BN_generate_prime_ex(a0,d0,d1,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_prime_ex 3b7c a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b7c, BN_is_prime_ex(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_set_negative 3b82 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b82, BN_set_negative(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_degree 3b88 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b88, EC_GROUP_get_degree(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GF2m_simple_method 3b8e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b8e, EC_GF2m_simple_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_curve_GF2m 3b94 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b94, EC_GROUP_set_curve_GF2m(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_curve_GF2m 3b9a 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b9a, EC_GROUP_get_curve_GF2m(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_set_affine_coordinates_GF2m 3ba0 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ba0, EC_POINT_set_affine_coordinates_GF2m(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_get_affine_coordinates_GF2m 3ba6 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ba6, EC_POINT_get_affine_coordinates_GF2m(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_get_builtin_curves 3bac 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bac, EC_get_builtin_curves(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_new_by_curve_name 3bb2 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bb2, EC_GROUP_new_by_curve_name(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_check 3bb8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bb8, EC_GROUP_check(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_cleanup 3bbe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bbe, ENGINE_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_generate_parameters_ex 3bc4 2ba190807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bc4, DSA_generate_parameters_ex(a0,d0,a1,d1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_ecdsa 3bca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bca, EVP_ecdsa())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_new_by_curve_name 3bd0 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bd0, EC_KEY_new_by_curve_name(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_generate_key 3bd6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bd6, EC_KEY_generate_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_free 3bdc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bdc, EC_KEY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_SIG_free 3be2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3be2, ECDSA_SIG_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_do_sign 3be8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3be8, ECDSA_do_sign(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_do_verify 3bee a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bee, ECDSA_do_verify(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_new 3bf4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bf4, EC_KEY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_group 3bfa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bfa, EC_KEY_set_group(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get0_group 3c00 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c00, EC_KEY_get0_group(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_check_key 3c06 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c06, EC_KEY_check_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_size 3c0c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c0c, ECDSA_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_sign 3c12 ba918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c12, ECDSA_sign(d0,a0,d1,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_verify 3c18 a2918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c18, ECDSA_verify(d0,a0,d1,a1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ECDSA_SIG 3c1e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c1e, d2i_ECDSA_SIG(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ECDSA_SIG 3c24 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c24, i2d_ECDSA_SIG(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_generate_parameters_ex 3c2a 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c2a, DH_generate_parameters_ex(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_METHOD_get_field_type 3c30 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c30, EC_METHOD_get_field_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get0_public_key 3c36 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c36, EC_KEY_get0_public_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDH_compute_key 3c3c ba90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c3c, ECDH_compute_key(a0,d0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get0_private_key 3c42 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c42, EC_KEY_get0_private_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_first 3c48 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c48, ENGINE_get_first())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_id 3c4e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c4e, ENGINE_get_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_name 3c54 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c54, ENGINE_get_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_next 3c5a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c5a, ENGINE_get_next(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_free 3c60 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c60, ENGINE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_new 3c66 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c66, ENGINE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_id 3c6c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c6c, ENGINE_set_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_name 3c72 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c72, ENGINE_set_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_add 3c78 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c78, ENGINE_add(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_remove 3c7e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c7e, ENGINE_remove(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_builtin_engines 3c84 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c84, ENGINE_load_builtin_engines())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_ciphers 3c8a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c8a, ENGINE_register_all_ciphers())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_nid 3c90 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c90, EVP_CIPHER_nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_type 3c96 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c96, EVP_MD_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_digests 3c9c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c9c, ENGINE_register_all_digests())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_test_flags 3ca2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ca2, BIO_test_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_COMP_get_compression_methods 3ca8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ca8, SSL_COMP_get_compression_methods())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_generate_key_ex 3cae a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cae, RSA_generate_key_ex(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_free 3cb4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cb4, X509_VERIFY_PARAM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set1_param 3cba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cba, X509_STORE_set1_param(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_generate_nconf 3cc0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cc0, ASN1_generate_nconf(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_ECPKParameters 3cc6 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cc6, PEM_read_bio_ECPKParameters(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_dup 3ccc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ccc, EC_KEY_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set_callback 3cd2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cd2, BIO_set_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set_callback_arg 3cd8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cd8, BIO_set_callback_arg(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_set_flags 3cde 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cde, EVP_MD_CTX_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set_flags 3ce4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ce4, BIO_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_set_flags 3cea 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cea, EVP_CIPHER_CTX_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_iv_length 3cf0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cf0, EVP_CIPHER_iv_length(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_check_private_key 3cf6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cf6, X509_REQ_check_private_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_EC_PUBKEY 3cfc ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cfc, PEM_read_bio_EC_PUBKEY(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_ECPrivateKey 3d02 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d02, PEM_read_bio_ECPrivateKey(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_EC_PUBKEY 3d08 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d08, PEM_write_bio_EC_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_EC_PUBKEY_bio 3d0e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d0e, d2i_EC_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_asn1_flag 3d14 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d14, EC_KEY_set_asn1_flag(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_conv_form 3d1a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d1a, EC_KEY_set_conv_form(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_print 3d20 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d20, EC_KEY_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ECPrivateKey_bio 3d26 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d26, d2i_ECPrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_EC_PUBKEY_bio 3d2c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d2c, i2d_EC_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_ECPrivateKey 3d32 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d32, PEM_write_bio_ECPrivateKey(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_ECPKParameters 3d38 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d38, PEM_write_bio_ECPKParameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ECPrivateKey_bio 3d3e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d3e, i2d_ECPrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ECPKParameters 3d44 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d44, i2d_ECPKParameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_asn1_flag 3d4a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d4a, EC_GROUP_set_asn1_flag(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_point_conversion_form 3d50 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d50, EC_GROUP_set_point_conversion_form(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_point_conversion_form 3d56 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d56, EC_GROUP_get_point_conversion_form(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECPKParameters_print 3d5c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d5c, ECPKParameters_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_seed 3d62 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d62, EC_GROUP_set_seed(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ECPKParameters 3d68 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d68, d2i_ECPKParameters(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_point2bn 3d6e ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d6e, EC_POINT_point2bn(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get1_ocsp 3d74 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d74, X509_get1_ocsp(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_servername 3d7a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d7a, SSL_get_servername(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_SSL_CTX 3d80 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d80, SSL_set_SSL_CTX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_cookie_generate_cb 3d86 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d86, SSL_CTX_set_cookie_generate_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_cookie_verify_cb 3d8c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d8c, SSL_CTX_set_cookie_verify_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_info_callback 3d92 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d92, SSL_CTX_set_info_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_server_method 3d98 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d98, DTLSv1_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_dgram 3d9e 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d9e, BIO_new_dgram(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_servername_type 3da4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3da4, SSL_get_servername_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_current_compression 3daa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3daa, SSL_get_current_compression(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_current_expansion 3db0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3db0, SSL_get_current_expansion(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_COMP_get_name 3db6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3db6, SSL_COMP_get_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_by_id 3dbc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dbc, ENGINE_by_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_client_cert_engine 3dc2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dc2, SSL_CTX_set_client_cert_engine(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_client_method 3dc8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dc8, DTLSv1_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_method 3dce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dce, DTLSv1_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA256 3dd4 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dd4, SHA256(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA512 3dda 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dda, SHA512(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_ige_encrypt 3de0 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3de0, AES_ige_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_precompute_mult 3de6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3de6, EC_KEY_precompute_mult(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_private_key 3dec ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dec, ENGINE_load_private_key(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_public_key 3df2 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3df2, ENGINE_load_public_key(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_ctrl_cmd 3df8 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3df8, ENGINE_ctrl_cmd(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default 3dfe 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dfe, ENGINE_set_default(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_ctrl 3e04 a910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e04, ENGINE_ctrl(a0,d0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_complete 3e0a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e0a, ENGINE_register_all_complete())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_ctrl_cmd_string 3e10 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e10, ENGINE_ctrl_cmd_string(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_add0_policy 3e16 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e16, X509_VERIFY_PARAM_add0_policy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set_purpose 3e1c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e1c, X509_VERIFY_PARAM_set_purpose(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set_flags 3e22 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e22, X509_VERIFY_PARAM_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_new 3e28 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e28, X509_VERIFY_PARAM_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_POLICY_NODE_print 3e2e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e2e, X509_POLICY_NODE_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get0_policy_tree 3e34 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e34, X509_STORE_CTX_get0_policy_tree(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_explicit_policy 3e3a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e3a, X509_STORE_CTX_get_explicit_policy(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_tree_get0_policies 3e40 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e40, X509_policy_tree_get0_policies(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_tree_get0_user_policies 3e46 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e46, X509_policy_tree_get0_user_policies(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_callback_arg 3e4c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e4c, BIO_get_callback_arg(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_add1_attr_by_NID 3e52 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e52, EVP_PKEY_add1_attr_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_RSA 3e58 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e58, ENGINE_get_RSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_DSA 3e5e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e5e, ENGINE_get_DSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_DH 3e64 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e64, ENGINE_get_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_RAND 3e6a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e6a, ENGINE_get_RAND(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_ciphers 3e70 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e70, ENGINE_get_ciphers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_digests 3e76 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e76, ENGINE_get_digests(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_init 3e7c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e7c, ENGINE_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_finish 3e82 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e82, ENGINE_finish(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_sendreq_new 3e88 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e88, OCSP_sendreq_new(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_sendreq_nbio 3e8e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e8e, OCSP_sendreq_nbio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_free 3e94 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e94, OCSP_REQ_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_psk_identity_hint 3e9a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e9a, SSL_CTX_use_psk_identity_hint(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_psk_client_callback 3ea0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ea0, SSL_CTX_set_psk_client_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_psk_identity_hint 3ea6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ea6, SSL_get_psk_identity_hint(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_psk_server_callback 3eac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3eac, SSL_set_psk_server_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_psk_identity_hint 3eb2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3eb2, SSL_use_psk_identity_hint(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_psk_client_callback 3eb8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3eb8, SSL_set_psk_client_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_psk_server_callback 3ebe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ebe, SSL_CTX_set_psk_server_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_psk_identity 3ec4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ec4, SSL_get_psk_identity(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_session_ticket_ext 3eca 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3eca, SSL_set_session_ticket_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_session_secret_cb 3ed0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ed0, SSL_set_session_secret_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_session_ticket_ext_cb 3ed6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ed6, SSL_set_session_ticket_ext_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set1_param 3edc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3edc, SSL_set1_param(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set1_param 3ee2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ee2, SSL_CTX_set1_param(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_renegotiate_abbreviated 3ee8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ee8, SSL_renegotiate_abbreviated(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_1_method 3eee 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3eee, TLSv1_1_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_1_client_method 3ef4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ef4, TLSv1_1_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_1_server_method 3efa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3efa, TLSv1_1_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_client_pwd_callback 3f00 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f00, SSL_CTX_set_srp_client_pwd_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_srp_g 3f06 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f06, SSL_get_srp_g(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_username_callback 3f0c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f0c, SSL_CTX_set_srp_username_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_srp_userinfo 3f12 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f12, SSL_get_srp_userinfo(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_srp_server_param 3f18 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f18, SSL_set_srp_server_param(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_srp_server_param_pw 3f1e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f1e, SSL_set_srp_server_param_pw(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_srp_N 3f24 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f24, SSL_get_srp_N(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_srp_username 3f2a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f2a, SSL_get_srp_username(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_password 3f30 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f30, SSL_CTX_set_srp_password(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_strength 3f36 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f36, SSL_CTX_set_srp_strength(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_verify_param_callback 3f3c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f3c, SSL_CTX_set_srp_verify_param_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_cb_arg 3f42 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f42, SSL_CTX_set_srp_cb_arg(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_username 3f48 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f48, SSL_CTX_set_srp_username(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_SRP_CTX_init 3f4e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f4e, SSL_CTX_SRP_CTX_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_A_param 3f54 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f54, SRP_Calc_A_param(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_generate_server_master_secret 3f5a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f5a, SRP_generate_server_master_secret(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_SRP_CTX_free 3f60 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f60, SSL_CTX_SRP_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_generate_client_master_secret 3f66 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f66, SRP_generate_client_master_secret(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_srp_server_param_with_username 3f6c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f6c, SSL_srp_server_param_with_username(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SRP_CTX_free 3f72 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f72, SSL_SRP_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_debug 3f78 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f78, SSL_set_debug(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get0_peer 3f7e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f7e, SSL_SESSION_get0_peer(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_2_client_method 3f84 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f84, TLSv1_2_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_set1_id_context 3f8a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f8a, SSL_SESSION_set1_id_context(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_2_server_method 3f90 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f90, TLSv1_2_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_cache_hit 3f96 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f96, SSL_cache_hit(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_state 3f9c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f9c, SSL_set_state(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_id 3fa2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fa2, SSL_CIPHER_get_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_2_method 3fa8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fa8, TLSv1_2_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_export_keying_material 3fae 32b1a09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fae, SSL_export_keying_material(a0,a1,d0,a2,d1,a3,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_tlsext_use_srtp 3fb4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fb4, SSL_set_tlsext_use_srtp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_next_protos_advertised_cb 3fba a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fba, SSL_CTX_set_next_protos_advertised_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get0_next_proto_negotiated 3fc0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fc0, SSL_get0_next_proto_negotiated(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_selected_srtp_profile 3fc6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fc6, SSL_get_selected_srtp_profile(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_tlsext_use_srtp 3fcc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fcc, SSL_CTX_set_tlsext_use_srtp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_select_next_proto 3fd2 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fd2, SSL_select_next_proto(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_srtp_profiles 3fd8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fd8, SSL_get_srtp_profiles(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_next_proto_select_cb 3fde a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fde, SSL_CTX_set_next_proto_select_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_compress_id 3fe4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fe4, SSL_SESSION_get_compress_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_tmp_ecdh_callback 3fea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fea, SSL_CTX_set_tmp_ecdh_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_tmp_ecdh_callback 3ff0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ff0, SSL_set_tmp_ecdh_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SRP_CTX_init 3ff6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ff6, SSL_SRP_CTX_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_options 408c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x408c, DES_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_ENGINE_strings 414c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x414c, ERR_load_ENGINE_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_DSA 4152 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4152, ENGINE_set_DSA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_finish_function 4158 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4158, ENGINE_get_finish_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_default_RSA 415e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x415e, ENGINE_get_default_RSA())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_DH 4164 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4164, ENGINE_set_DH(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_init_function 416a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x416a, ENGINE_get_init_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_init_function 4170 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4170, ENGINE_set_init_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_DSA 4176 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4176, ENGINE_set_default_DSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_last 417c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x417c, ENGINE_get_last())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_prev 4182 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4182, ENGINE_get_prev(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_default_DH 4188 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4188, ENGINE_get_default_DH())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_finish_function 418e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x418e, ENGINE_set_finish_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_RSA 4194 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4194, ENGINE_set_RSA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_RAND 419a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x419a, ENGINE_set_default_RAND(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_default_DSA 41a0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41a0, ENGINE_get_default_DSA())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_RSA 41a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41a6, ENGINE_set_default_RSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_default_RAND 41ac 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41ac, ENGINE_get_default_RAND())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_RAND 41b2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41b2, ENGINE_set_RAND(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_DH 41b8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41b8, ENGINE_set_default_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_ctrl_function 41be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41be, ENGINE_get_ctrl_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_ctrl_function 41c4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41c4, ENGINE_set_ctrl_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_ciphers 41ca 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41ca, ENGINE_unregister_ciphers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_RSA 41d0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41d0, ENGINE_unregister_RSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_RAND 41d6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41d6, ENGINE_register_all_RAND())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_dynamic 41dc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41dc, ENGINE_load_dynamic())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_digest_engine 41e2 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41e2, ENGINE_get_digest_engine(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_DH 41e8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41e8, ENGINE_register_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_RAND 41ee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41ee, ENGINE_register_RAND(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_cryptodev 41f4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41f4, ENGINE_load_cryptodev())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_ciphers 41fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41fa, ENGINE_register_ciphers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_ubsec 4200 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4200, ENGINE_load_ubsec())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_openssl 4206 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4206, ENGINE_load_openssl())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_cmd_defns 420c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x420c, ENGINE_get_cmd_defns(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_load_privkey_function 4212 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4212, ENGINE_set_load_privkey_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_digests 4218 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4218, ENGINE_set_default_digests(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_RSA 421e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x421e, ENGINE_register_RSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_DSA 4224 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4224, ENGINE_unregister_DSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_ciphers 422a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x422a, ENGINE_set_ciphers(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_set_rand_engine 4230 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4230, RAND_set_rand_engine(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_digest 4236 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4236, ENGINE_get_digest(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_cipher 423c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x423c, ENGINE_get_cipher(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_cmd_is_executable 4242 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4242, ENGINE_cmd_is_executable(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_DSA 4248 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4248, ENGINE_register_DSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_load_pubkey_function 424e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x424e, ENGINE_set_load_pubkey_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_load_pubkey_function 4254 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4254, ENGINE_get_load_pubkey_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_RSA 425a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x425a, ENGINE_register_all_RSA())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_digests 4260 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4260, ENGINE_unregister_digests(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_ex_new_index 4266 ba98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4266, ENGINE_get_ex_new_index(d0,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_ex_data 426c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x426c, ENGINE_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_cmd_defns 4278 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4278, ENGINE_set_cmd_defns(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_digests 427e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x427e, ENGINE_register_digests(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_DH 4284 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4284, ENGINE_register_all_DH())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_flags 428a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x428a, ENGINE_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_DH 4290 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4290, ENGINE_unregister_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_DSA 4296 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4296, ENGINE_register_all_DSA())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_digests 429c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x429c, ENGINE_set_digests(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_complete 42a2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42a2, ENGINE_register_complete(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_ex_data 42a8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42a8, ENGINE_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_destroy_function 42ae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42ae, ENGINE_set_destroy_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_cipher_engine 42b4 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42b4, ENGINE_get_cipher_engine(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_cswift 42c0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42c0, ENGINE_load_cswift())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_ciphers 42c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42c6, ENGINE_set_default_ciphers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_RAND 42cc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42cc, ENGINE_unregister_RAND(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_nuron 42d2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42d2, ENGINE_load_nuron())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_table_flags 42d8 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42d8, ENGINE_set_table_flags(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_chil 42de 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42de, ENGINE_load_chil())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_destroy_function 42e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42e4, ENGINE_get_destroy_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_atalla 42f0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42f0, ENGINE_load_atalla())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_table_flags 42f6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42f6, ENGINE_get_table_flags())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_flags 42fc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42fc, ENGINE_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_load_privkey_function 4302 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4302, ENGINE_get_load_privkey_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_string 4308 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4308, ENGINE_set_default_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_add_conf_module 430e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x430e, ENGINE_add_conf_module())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_aep 4314 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4314, ENGINE_load_aep())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_sureware 431a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x431a, ENGINE_load_sureware())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_4758cca 4320 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4320, ENGINE_load_4758cca())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_up_ref 4326 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4326, ENGINE_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_STORE 432c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x432c, ENGINE_set_STORE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_ECDSA 4332 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4332, ENGINE_register_ECDSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_get_thread_id 4338 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4338, BN_BLINDING_get_thread_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_trinomial_basis 433e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x433e, EC_GROUP_get_trinomial_basis(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDH_get_default_method 4344 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4344, ECDH_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_ECDH 434a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x434a, ENGINE_register_ECDH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA512_Update 4350 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4350, SHA512_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ECPrivateKey 4356 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4356, i2d_ECPrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_exp_arr 435c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x435c, BN_GF2m_mod_exp_arr(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_mul_arr 4362 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4362, BN_GF2m_mod_mul_arr(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase o2i_ECPublicKey 4368 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4368, o2i_ECPublicKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_copy 436e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x436e, EC_KEY_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_check_discriminant 437a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x437a, EC_GROUP_check_discriminant(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2o_ECPublicKey 4380 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4380, i2o_ECPublicKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_new_curve_GF2m 4386 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4386, EC_GROUP_new_curve_GF2m(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_STORE 438c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x438c, ENGINE_unregister_STORE(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get1_EC_KEY 4392 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4392, EVP_PKEY_get1_EC_KEY(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_default_ECDH 4398 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4398, ENGINE_get_default_ECDH())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get_conv_form 439e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x439e, EC_KEY_get_conv_form(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_static_state 43a4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43a4, ENGINE_get_static_state())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_SIG_new 43aa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43aa, ECDSA_SIG_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_bn2point 43b0 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43b0, EC_POINT_bn2point(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get_key_method_data 43b6 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43b6, EC_KEY_get_key_method_data(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_sign_ex 43bc 32ba918008
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43bc, ECDSA_sign_ex(d0,a0,d1,a1,a2,a3,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_pentanomial_basis 43c2 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43c2, EC_GROUP_get_pentanomial_basis(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_sign_setup 43c8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43c8, ECDSA_sign_setup(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_solve_quad_arr 43ce ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43ce, BN_GF2m_mod_solve_quad_arr(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_up_ref 43d4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43d4, EC_KEY_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_EC_PUBKEY 43da a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43da, d2i_EC_PUBKEY(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_have_precompute_mult 43e0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43e0, EC_GROUP_have_precompute_mult(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_arr 43ec a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43ec, BN_GF2m_mod_arr(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDH_get_ex_data 43f2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43f2, ECDH_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_ECDH 43f8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43f8, ENGINE_unregister_ECDH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDH_OpenSSL 43fe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43fe, ECDH_OpenSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_dup 4404 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4404, EC_POINT_dup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_set1_EC_KEY 440a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x440a, EVP_PKEY_set1_EC_KEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_sqrt_arr 4410 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4410, BN_GF2m_mod_sqrt_arr(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_private_key 441c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x441c, EC_KEY_set_private_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_poly2arr 4422 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4422, BN_GF2m_poly2arr(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ECParameters 4428 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4428, i2d_ECParameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_ECDH 442e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x442e, ENGINE_set_ECDH(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA256_Init 4434 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4434, SHA256_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_get_ex_data 443a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x443a, ECDSA_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA224 4440 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4440, SHA224(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_seed_len 444c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x444c, EC_GROUP_get_seed_len(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_EC_PUBKEY 4452 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4452, i2d_EC_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_get_default_method 4458 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4458, ECDSA_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GFp_nist_method 445e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x445e, EC_GFp_nist_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_padlock 4464 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4464, ENGINE_load_padlock())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_curve_name 446a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x446a, EC_GROUP_set_curve_name(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_sqr_arr 4470 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4470, BN_GF2m_mod_sqr_arr(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_datagram 4476 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4476, BIO_s_datagram())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_ECDSA 447c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x447c, ENGINE_set_default_ECDSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDH_set_default_method 4482 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4482, ECDH_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA384_Update 4488 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4488, SHA384_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_insert_key_method_data 448e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x448e, EC_KEY_insert_key_method_data(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA224_Final 4494 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4494, SHA224_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA224_Update 449a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x449a, SHA224_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ECPrivateKey 44a0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44a0, d2i_ECPrivateKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_STORE 44a6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44a6, ENGINE_register_all_STORE())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA512_Final 44ac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44ac, SHA512_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_asn1_flag 44b2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44b2, EC_GROUP_get_asn1_flag(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDH_get_ex_new_index 44b8 ba98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44b8, ECDH_get_ex_new_index(d0,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get0_seed 44be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44be, EC_GROUP_get0_seed(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_div_arr 44c4 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44c4, BN_GF2m_mod_div_arr(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_ECDSA 44ca 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44ca, ENGINE_set_ECDSA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDH_set_method 44d6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44d6, ECDH_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDH_set_ex_data 44dc 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44dc, ECDH_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_OpenSSL 44e8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44e8, ECDSA_OpenSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get_enc_flags 44ee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44ee, EC_KEY_get_enc_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_set_default_method 44f4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44f4, ECDSA_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_set_compressed_coordinates_GF2m 44fa b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44fa, EC_POINT_set_compressed_coordinates_GF2m(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_cmp 4500 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4500, EC_GROUP_cmp(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA224_Init 4506 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4506, SHA224_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA512_Init 4512 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4512, SHA512_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_ECDSA_strings 4518 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4518, ERR_load_ECDSA_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_basis_type 451e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x451e, EC_GROUP_get_basis_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_ECDH 452a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x452a, ENGINE_register_all_ECDH())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_ECDSA 4536 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4536, ENGINE_register_all_ECDSA())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_dup 453c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x453c, EC_GROUP_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_default_ECDSA 4542 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4542, ENGINE_get_default_ECDSA())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA256_Transform 4548 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4548, SHA256_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_enc_flags 454e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x454e, EC_KEY_set_enc_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_point2hex 4554 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4554, EC_POINT_point2hex(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_STORE 455a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x455a, ENGINE_get_STORE(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_do_sign_ex 4560 ba90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4560, ECDSA_do_sign_ex(a0,d0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA512_Transform 456c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x456c, SHA512_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_public_key 4578 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4578, EC_KEY_set_public_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_STORE 4584 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4584, ENGINE_register_STORE(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_curve_name 4590 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4590, EC_GROUP_get_curve_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA256_Final 459c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x459c, SHA256_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_ECDH 45a2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45a2, ENGINE_get_ECDH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_ECDSA 45a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45a8, ENGINE_get_ECDSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_ECDH_strings 45ae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45ae, ERR_load_ECDH_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_set_method 45b4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45b4, ECDSA_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ECParameters 45ba 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45ba, d2i_ECParameters(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA384_Init 45c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45c0, SHA384_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_set_ex_data 45c6 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45c6, ECDSA_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA384_Final 45cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45cc, SHA384_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_get_ex_new_index 45d2 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45d2, ECDSA_get_ex_new_index(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA384 45d8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45d8, SHA384(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_ECDH 45e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45e4, ENGINE_set_default_ECDH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_hex2point 45ea ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45ea, EC_POINT_hex2point(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA256_Update 45f0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45f0, SHA256_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_inv_arr 45f6 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45f6, BN_GF2m_mod_inv_arr(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_ECDSA 45fc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45fc, ENGINE_unregister_ECDSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_set_thread_id 4602 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4602, BN_BLINDING_set_thread_id(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_check_pub_key 4608 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4608, DH_check_pub_key(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_cbc_encrypt 460e 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x460e, Camellia_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_cfb128_encrypt 4614 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4614, Camellia_cfb128_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_cfb1_encrypt 461a 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x461a, Camellia_cfb1_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_cfb8_encrypt 4620 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4620, Camellia_cfb8_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_ctr128_encrypt 4626 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4626, Camellia_ctr128_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_decrypt 462c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x462c, Camellia_decrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_ecb_encrypt 4632 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4632, Camellia_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_encrypt 4638 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4638, Camellia_encrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_ofb128_encrypt 463e 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x463e, Camellia_ofb128_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_set_key 4644 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4644, Camellia_set_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_cbc 464a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x464a, EVP_camellia_128_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_cfb128 4650 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4650, EVP_camellia_128_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_cfb1 4656 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4656, EVP_camellia_128_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_cfb8 465c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x465c, EVP_camellia_128_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_ecb 4662 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4662, EVP_camellia_128_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_ofb 4668 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4668, EVP_camellia_128_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_cbc 466e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x466e, EVP_camellia_192_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_cfb128 4674 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4674, EVP_camellia_192_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_cfb1 467a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x467a, EVP_camellia_192_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_cfb8 4680 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4680, EVP_camellia_192_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_ecb 4686 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4686, EVP_camellia_192_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_ofb 468c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x468c, EVP_camellia_192_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_cbc 4692 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4692, EVP_camellia_256_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_cfb128 4698 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4698, EVP_camellia_256_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_cfb1 469e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x469e, EVP_camellia_256_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_cfb8 46a4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46a4, EVP_camellia_256_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_ecb 46aa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46aa, EVP_camellia_256_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_ofb 46b0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46b0, EVP_camellia_256_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_bi_ige_encrypt 46b6 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46b6, AES_bi_ige_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_decrypt 46bc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46bc, SEED_decrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_encrypt 46c2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46c2, SEED_encrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_cbc_encrypt 46c8 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46c8, SEED_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_seed_ofb 46ce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46ce, EVP_seed_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_cfb128_encrypt 46d4 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46d4, SEED_cfb128_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_ofb128_encrypt 46da 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46da, SEED_ofb128_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_seed_cbc 46e0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46e0, EVP_seed_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_ecb_encrypt 46e6 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46e6, SEED_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_seed_ecb 46ec 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46ec, EVP_seed_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_set_key 46f2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46f2, SEED_set_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_seed_cfb128 46f8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46f8, EVP_seed_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_unwrap_key 46fe 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46fe, AES_unwrap_key(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_wrap_key 4704 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4704, AES_wrap_key(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ReceiptRequest_free 470a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x470a, CMS_ReceiptRequest_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add0_CertificateChoices 4716 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4716, CMS_add0_CertificateChoices(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_add1_attr_by_OBJ 471c 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x471c, CMS_unsigned_add1_attr_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_CMS_strings 4722 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4722, ERR_load_CMS_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_sign_receipt 4728 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4728, CMS_sign_receipt(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_CMS_ContentInfo 472e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x472e, i2d_CMS_ContentInfo(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_delete_attr 4734 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4734, CMS_signed_delete_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_CMS_bio 473a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x473a, d2i_CMS_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_get_attr_by_NID 4740 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4740, CMS_unsigned_get_attr_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_verify 4746 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4746, CMS_verify(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_read_CMS 474c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x474c, SMIME_read_CMS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_decrypt_set1_key 4752 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4752, CMS_decrypt_set1_key(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_get0_algs 4758 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4758, CMS_SignerInfo_get0_algs(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add1_cert 475e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x475e, CMS_add1_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_set_detached 4764 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4764, CMS_set_detached(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_encrypt 476a 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x476a, CMS_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_EnvelopedData_create 4770 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4770, CMS_EnvelopedData_create(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_uncompress 4776 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4776, CMS_uncompress(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add0_crl 477c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x477c, CMS_add0_crl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_verify_content 4782 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4782, CMS_SignerInfo_verify_content(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_get0_data_by_OBJ 4788 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4788, CMS_unsigned_get0_data_by_OBJ(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_CMS 478e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x478e, PEM_write_bio_CMS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_get_attr 4794 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4794, CMS_unsigned_get_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_ktri_cert_cmp 479a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x479a, CMS_RecipientInfo_ktri_cert_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_ktri_get0_algs 47a0 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47a0, CMS_RecipientInfo_ktri_get0_algs(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ContentInfo_free 47a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47a6, CMS_ContentInfo_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_final 47ac 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47ac, CMS_final(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add_simple_smimecap 47b2 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47b2, CMS_add_simple_smimecap(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_verify 47b8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47b8, CMS_SignerInfo_verify(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_data 47be 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47be, CMS_data(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_CMS_ReceiptRequest 47c4 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47c4, d2i_CMS_ReceiptRequest(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_compress 47ca 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47ca, CMS_compress(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_digest_create 47d0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47d0, CMS_digest_create(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_cert_cmp 47d6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47d6, CMS_SignerInfo_cert_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_sign 47dc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47dc, CMS_SignerInfo_sign(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_data_create 47e2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47e2, CMS_data_create(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_CMS_bio 47e8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47e8, i2d_CMS_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_EncryptedData_set1_key 47ee 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47ee, CMS_EncryptedData_set1_key(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_decrypt 47f4 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47f4, CMS_decrypt(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_delete_attr 47fa 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47fa, CMS_unsigned_delete_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_get_attr_count 4800 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4800, CMS_unsigned_get_attr_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add_smimecap 4806 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4806, CMS_add_smimecap(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_get_attr_by_OBJ 4812 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4812, CMS_signed_get_attr_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_CMS_ContentInfo 4818 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4818, d2i_CMS_ContentInfo(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add_standard_smimecap 481e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x481e, CMS_add_standard_smimecap(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ContentInfo_new 4824 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4824, CMS_ContentInfo_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_type 482a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x482a, CMS_RecipientInfo_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get0_type 4830 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4830, CMS_get0_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_is_detached 4836 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4836, CMS_is_detached(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_sign 483c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x483c, CMS_sign(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_add1_attr 4842 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4842, CMS_signed_add1_attr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_get_attr_by_OBJ 4848 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4848, CMS_unsigned_get_attr_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_write_CMS 484e 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x484e, SMIME_write_CMS(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_EncryptedData_decrypt 4854 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4854, CMS_EncryptedData_decrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get0_RecipientInfos 485a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x485a, CMS_get0_RecipientInfos(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add0_RevocationInfoChoice 4860 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4860, CMS_add0_RevocationInfoChoice(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_decrypt_set1_pkey 4866 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4866, CMS_decrypt_set1_pkey(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_set1_signer_cert 486c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x486c, CMS_SignerInfo_set1_signer_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get0_signers 4872 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4872, CMS_get0_signers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ReceiptRequest_get0_values 4878 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4878, CMS_ReceiptRequest_get0_values(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_get0_data_by_OBJ 487e 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x487e, CMS_signed_get0_data_by_OBJ(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get0_SignerInfos 4884 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4884, CMS_get0_SignerInfos(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add0_cert 488a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x488a, CMS_add0_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_EncryptedData_encrypt 4890 10a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4890, CMS_EncryptedData_encrypt(a0,a1,a2,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_digest_verify 4896 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4896, CMS_digest_verify(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_set1_signers_certs 489c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x489c, CMS_set1_signers_certs(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_get_attr 48a2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48a2, CMS_signed_get_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_set0_key 48a8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48a8, CMS_RecipientInfo_set0_key(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignedData_init 48ae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48ae, CMS_SignedData_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kekri_get0_id 48b4 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48b4, CMS_RecipientInfo_kekri_get0_id(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_verify_receipt 48ba 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48ba, CMS_verify_receipt(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_CMS 48c0 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48c0, PEM_read_bio_CMS(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get1_crls 48c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48c6, CMS_get1_crls(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add0_recipient_key 48cc 43b2a190809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48cc, CMS_add0_recipient_key(a0,d0,a1,d1,a2,d2,a3,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ReceiptRequest_new 48d2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48d2, CMS_ReceiptRequest_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get0_content 48d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48d8, CMS_get0_content(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get1_ReceiptRequest 48de 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48de, CMS_get1_ReceiptRequest(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_add1_attr_by_OBJ 48e4 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48e4, CMS_signed_add1_attr_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kekri_id_cmp 48ea 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48ea, CMS_RecipientInfo_kekri_id_cmp(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add1_ReceiptRequest 48f0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48f0, CMS_add1_ReceiptRequest(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_get0_signer_id 48f6 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48f6, CMS_SignerInfo_get0_signer_id(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_add1_attr_by_NID 48fc 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48fc, CMS_unsigned_add1_attr_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_add1_attr 4902 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4902, CMS_unsigned_add1_attr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_get_attr_by_NID 4908 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4908, CMS_signed_get_attr_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get1_certs 490e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x490e, CMS_get1_certs(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_add1_attr_by_NID 4914 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4914, CMS_signed_add1_attr_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_add1_attr_by_txt 491a 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x491a, CMS_unsigned_add1_attr_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_dataFinal 4920 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4920, CMS_dataFinal(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_ktri_get0_signer_id 4926 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4926, CMS_RecipientInfo_ktri_get0_signer_id(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_CMS_ReceiptRequest 492c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x492c, i2d_CMS_ReceiptRequest(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add1_recipient_cert 4932 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4932, CMS_add1_recipient_cert(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_dataInit 4938 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4938, CMS_dataInit(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_add1_attr_by_txt 493e 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x493e, CMS_signed_add1_attr_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_decrypt 4944 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4944, CMS_RecipientInfo_decrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_get_attr_count 494a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x494a, CMS_signed_get_attr_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get0_eContentType 4950 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4950, CMS_get0_eContentType(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_set1_eContentType 4956 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4956, CMS_set1_eContentType(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ReceiptRequest_create0 495c a910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x495c, CMS_ReceiptRequest_create0(a0,d0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add1_signer 4962 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4962, CMS_add1_signer(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_set0_pkey 4968 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4968, CMS_RecipientInfo_set0_pkey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_load_ssl_client_cert_function 496e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x496e, ENGINE_set_load_ssl_client_cert_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_ssl_client_cert_function 4974 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4974, ENGINE_get_ssl_client_cert_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_ssl_client_cert 497a 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x497a, ENGINE_load_ssl_client_cert(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_capi 4980 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4980, ENGINE_load_capi())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_pkey_meths 4986 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4986, ENGINE_register_pkey_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_asn1_meth_engine 498c 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x498c, ENGINE_get_pkey_asn1_meth_engine(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase WHIRLPOOL_Init 4992 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4992, WHIRLPOOL_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase WHIRLPOOL 4998 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4998, WHIRLPOOL(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_asn1_meth 499e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x499e, ENGINE_get_pkey_asn1_meth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_meth 49a4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49a4, ENGINE_get_pkey_meth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_CMS 49aa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49aa, BIO_new_CMS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_pkey_asn1_meths 49b0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49b0, ENGINE_set_default_pkey_asn1_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase WHIRLPOOL_BitUpdate 49b6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49b6, WHIRLPOOL_BitUpdate(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_CMS_bio_stream 49bc 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49bc, i2d_CMS_bio_stream(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_stream 49c2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49c2, CMS_stream(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_pkey_asn1_find_str 49c8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49c8, ENGINE_pkey_asn1_find_str(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_meths 49ce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49ce, ENGINE_get_pkey_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_pkey_asn1_meths 49d4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49d4, ENGINE_register_pkey_asn1_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_pkey_meths 49da 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49da, ENGINE_set_default_pkey_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_CTX_copy 49e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49e0, HMAC_CTX_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_asn1_meths 49e6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49e6, ENGINE_get_pkey_asn1_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_whirlpool 49ec 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49ec, EVP_whirlpool())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_pkey_meths 49f2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49f2, ENGINE_register_all_pkey_meths())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase WHIRLPOOL_Final 49f8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49f8, WHIRLPOOL_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_asn1_meth_str 49fe 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49fe, ENGINE_get_pkey_asn1_meth_str(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_pkey_asn1_meths 4a04 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a04, ENGINE_register_all_pkey_asn1_meths())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ContentInfo_print_ctx 4a0a a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a0a, CMS_ContentInfo_print_ctx(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add1_crl 4a10 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a10, CMS_add1_crl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_pkey_asn1_meths 4a16 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a16, ENGINE_set_pkey_asn1_meths(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_meth_engine 4a1c 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a1c, ENGINE_get_pkey_meth_engine(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase WHIRLPOOL_Update 4a22 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a22, WHIRLPOOL_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_CMS_stream 4a28 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a28, PEM_write_bio_CMS_stream(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_pkey_meths 4a2e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a2e, ENGINE_unregister_pkey_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_pkey_asn1_meths 4a34 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a34, ENGINE_unregister_pkey_asn1_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_pkey_meths 4a3a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a3a, ENGINE_set_pkey_meths(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSAparams_dup 4a40 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a40, DSAparams_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DHparams_dup 4a46 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a46, DHparams_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_issuer_name_hash_old 4a4c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a4c, X509_issuer_name_hash_old(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_subject_name_hash_old 4a52 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a52, X509_subject_name_hash_old(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_VBASE_get_by_user 4a58 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a58, SRP_VBASE_get_by_user(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_server_key 4a5e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a5e, SRP_Calc_server_key(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_create_verifier 4a64 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a64, SRP_create_verifier(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_create_verifier_BN 4a6a 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a6a, SRP_create_verifier_BN(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_u 4a70 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a70, SRP_Calc_u(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_VBASE_free 4a76 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a76, SRP_VBASE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_client_key 4a7c 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a7c, SRP_Calc_client_key(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_get_default_gN 4a82 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a82, SRP_get_default_gN(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_x 4a88 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a88, SRP_Calc_x(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_B 4a8e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a8e, SRP_Calc_B(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_VBASE_new 4a94 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a94, SRP_VBASE_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_check_known_gN_param 4a9a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a9a, SRP_check_known_gN_param(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_A 4aa0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4aa0, SRP_Calc_A(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Verify_A_mod_N 4aa6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4aa6, SRP_Verify_A_mod_N(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_VBASE_init 4aac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4aac, SRP_VBASE_init(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Verify_B_mod_N 4ab2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ab2, SRP_Verify_B_mod_N(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_public_key_affine_coordinates 4ab8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ab8, EC_KEY_set_public_key_affine_coordinates(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_ctr 4abe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4abe, EVP_aes_192_ctr())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_ctr 4ac4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ac4, EVP_aes_128_ctr())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_ctr 4aca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4aca, EVP_aes_256_ctr())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get_flags 4ad0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ad0, EC_KEY_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_xts 4ad6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ad6, EVP_aes_128_xts())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase private_AES_set_decrypt_key 4adc 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4adc, private_AES_set_decrypt_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_xts 4ae2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ae2, EVP_aes_256_xts())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_gcm 4ae8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ae8, EVP_aes_128_gcm())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_clear_flags 4aee 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4aee, EC_KEY_clear_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_flags 4af4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4af4, EC_KEY_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_ccm 4afa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4afa, EVP_aes_256_ccm())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase private_AES_set_encrypt_key 4b00 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b00, private_AES_set_encrypt_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_ccm 4b06 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b06, EVP_aes_128_ccm())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_gcm 4b0c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b0c, EVP_aes_192_gcm())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_gcm 4b12 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b12, EVP_aes_256_gcm())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_ccm 4b18 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b18, EVP_aes_192_ccm())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc4_hmac_md5 4b1e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b1e, EVP_rc4_hmac_md5())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_cbc_hmac_sha1 4b24 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b24, EVP_aes_128_cbc_hmac_sha1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_rdrand 4b2a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b2a, ENGINE_load_rdrand())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_cbc_hmac_sha1 4b36 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b36, EVP_aes_256_cbc_hmac_sha1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add0_recipient_password 4b3c a39210807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b3c, CMS_add0_recipient_password(a0,d0,d1,d2,a1,d3,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_decrypt_set1_password 4b42 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b42, CMS_decrypt_set1_password(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_set0_password 4b48 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b48, CMS_RecipientInfo_set0_password(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_sign_ctx 4b4e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b4e, X509_REQ_sign_ctx(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_sign_ctx 4b54 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b54, X509_CRL_sign_ctx(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_signature_dump 4b5a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b5a, X509_signature_dump(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_sign_ctx 4b60 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b60, X509_sign_ctx(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_sign_ctx 4b66 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b66, ASN1_item_sign_ctx(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_cpuid_setup 4b6c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b6c, OPENSSL_cpuid_setup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_remove_thread_state 4b72 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b72, ERR_remove_thread_state(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set0_crls 4b78 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b78, X509_STORE_CTX_set0_crls(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_id 4b7e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b7e, SSL_SESSION_get_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sess_set_new_cb 4b84 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b84, SSL_CTX_sess_set_new_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sess_get_get_cb 4b8a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b8a, SSL_CTX_sess_get_get_cb(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sess_set_get_cb 4b90 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b90, SSL_CTX_sess_set_get_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_info_callback 4b96 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b96, SSL_CTX_get_info_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_client_cert_cb 4b9c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b9c, SSL_CTX_set_client_cert_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sess_set_remove_cb 4ba2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ba2, SSL_CTX_sess_set_remove_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sess_get_new_cb 4ba8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ba8, SSL_CTX_sess_get_new_cb(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_client_cert_cb 4bae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bae, SSL_CTX_get_client_cert_cb(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sess_get_remove_cb 4bb4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bb4, SSL_CTX_sess_get_remove_cb(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_SSL_SESSION 4bba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bba, PEM_write_bio_SSL_SESSION(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_SSL_SESSION 4bc6 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bc6, PEM_read_bio_SSL_SESSION(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase FIPS_mode_set 4cb0 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4cb0, FIPS_mode_set(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_X931_generate_Xpq 4cb6 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4cb6, BN_X931_generate_Xpq(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get0_nist_prime_384 4cbc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4cbc, BN_get0_nist_prime_384())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_set_mark 4cc2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4cc2, ERR_set_mark())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_invert_ex 4cc8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4cc8, BN_BLINDING_invert_ex(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NAME_CONSTRAINTS_free 4cce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4cce, NAME_CONSTRAINTS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set0_param 4cd4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4cd4, X509_STORE_CTX_set0_param(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_CONSTRAINTS_free 4cda 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4cda, POLICY_CONSTRAINTS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nist_mod_192 4ce0 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ce0, BN_nist_mod_192(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_SUBTREE_free 4ce6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ce6, GENERAL_SUBTREE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_safe 4cec a109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4cec, PKCS12_add_safe(a0,a1,d0,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get0_nist_prime_192 4cf2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4cf2, BN_get0_nist_prime_192())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_keyid_get0 4cf8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4cf8, X509_keyid_get0(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase pitem_new 4cfe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4cfe, pitem_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_node_get0_parent 4d04 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d04, X509_policy_node_get0_parent(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_IPADDRESS 4d0a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d0a, a2i_IPADDRESS(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_depth 4d10 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d10, X509_STORE_CTX_set_depth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_inherit 4d16 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d16, X509_VERIFY_PARAM_inherit(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase pqueue_iterator 4d1c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d1c, pqueue_iterator(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set_depth 4d22 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d22, X509_VERIFY_PARAM_set_depth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_add1_attr_by_txt 4d28 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d28, EVP_PKEY_add1_attr_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_set_flags 4d2e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d2e, BN_BLINDING_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1_policies 4d34 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d34, X509_VERIFY_PARAM_set1_policies(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1_name 4d3a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d3a, X509_VERIFY_PARAM_set1_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_MAPPING_free 4d40 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d40, POLICY_MAPPING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase pqueue_print 4d46 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d46, pqueue_print(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_X509_CERT_PAIR 4d4c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d4c, PEM_write_bio_X509_CERT_PAIR(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_cmp 4d52 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d52, EVP_PKEY_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_level_node_count 4d58 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d58, X509_policy_level_node_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get_attr 4d5e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d5e, EVP_PKEY_get_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_SUBTREE_new 4d64 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d64, GENERAL_SUBTREE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_node_get0_qualifiers 4d6a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d6a, X509_policy_node_get0_qualifiers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase pqueue_find 4d70 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d70, pqueue_find(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase pqueue_peek 4d76 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d76, pqueue_peek(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_node_get0_policy 4d7c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d7c, X509_policy_node_get0_policy(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_safes 4d82 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d82, PKCS12_add_safes(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_convert_ex 4d88 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d88, BN_BLINDING_convert_ex(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_tree_free 4d8e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d8e, X509_policy_tree_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_ia32cap_loc 4d94 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d94, OPENSSL_ia32cap_loc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get0_nist_prime_224 4d9a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d9a, BN_get0_nist_prime_224())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GENCB_call 4da0 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4da0, BN_GENCB_call(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NAME_CONSTRAINTS_new 4da6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4da6, NAME_CONSTRAINTS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECParameters_print 4dac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4dac, ECParameters_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_memdup 4db2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4db2, BUF_memdup(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set_trust 4db8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4db8, X509_VERIFY_PARAM_set_trust(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get_attr_count 4dbe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4dbe, EVP_PKEY_get_attr_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get0_param 4dc4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4dc4, X509_STORE_CTX_get0_param(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_depth 4dd0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4dd0, X509_STORE_set_depth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_strndup 4dd6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4dd6, BUF_strndup(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_put_eoc 4ddc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ddc, ASN1_put_eoc(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_table_cleanup 4de2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4de2, X509_VERIFY_PARAM_table_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_setup_blinding 4de8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4de8, RSA_setup_blinding(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_find_ex 4dee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4dee, sk_find_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_CONSTRAINTS_new 4df4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4df4, POLICY_CONSTRAINTS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_get_depth 4dfa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4dfa, X509_VERIFY_PARAM_get_depth(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_ndef_i2d 4e00 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e00, ASN1_item_ndef_i2d(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_pop_to_mark 4e06 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e06, ERR_pop_to_mark())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_level_get0_node 4e0c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e0c, X509_policy_level_get0_node(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_NDEF 4e12 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e12, i2d_PKCS7_NDEF(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_generate_v3 4e18 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e18, ASN1_generate_v3(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_tree_level_count 4e1e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e1e, X509_policy_tree_level_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CERT_PAIR_free 4e24 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e24, X509_CERT_PAIR_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nist_mod_224 4e2a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e2a, BN_nist_mod_224(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_dgram_non_fatal_error 4e30 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e30, BIO_dgram_non_fatal_error(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v2i_ASN1_BIT_STRING 4e36 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e36, v2i_ASN1_BIT_STRING(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_default 4e3c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e3c, X509_STORE_CTX_set_default(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1 4e42 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e42, X509_VERIFY_PARAM_set1(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v2i_GENERAL_NAME_ex 4e48 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e48, v2i_GENERAL_NAME_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nist_mod_521 4e4e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e4e, BN_nist_mod_521(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_tree_get0_level 4e54 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e54, X509_policy_tree_get0_level(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_const_check_infinite_end 4e5a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e5a, ASN1_const_check_infinite_end(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_delete_attr 4e60 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e60, EVP_PKEY_delete_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get0_nist_prime_256 4e66 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e66, BN_get0_nist_prime_256())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2v_ASN1_BIT_STRING 4e6c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e6c, i2v_ASN1_BIT_STRING(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nist_mod_384 4e72 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e72, BN_nist_mod_384(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_CERT_PAIR 4e78 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e78, i2d_X509_CERT_PAIR(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase pqueue_pop 4e7e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e7e, pqueue_pop(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get_attr_by_OBJ 4e84 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e84, EVP_PKEY_get_attr_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_lookup 4e8a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e8a, X509_VERIFY_PARAM_lookup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CERT_PAIR_new 4e90 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e90, X509_CERT_PAIR_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_NAME_from_section 4e96 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e96, X509V3_NAME_from_section(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_add1_attr 4e9c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e9c, EVP_PKEY_add1_attr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_dump_indent_cb 4ea8 10a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ea8, BIO_dump_indent_cb(a0,a1,a2,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_CERT_PAIR 4eae 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4eae, d2i_X509_CERT_PAIR(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase asn1_const_Finish 4eb4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4eb4, asn1_const_Finish(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nist_mod_256 4eba ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4eba, BN_nist_mod_256(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_add0_table 4ec0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ec0, X509_VERIFY_PARAM_add0_table(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase pqueue_free 4ec6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ec6, pqueue_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_create_param 4ecc 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ecc, BN_BLINDING_create_param(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get0_nist_prime_521 4ed2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ed2, BN_get0_nist_prime_521())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_prime_fasttest_ex 4ed8 a190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ed8, BN_is_prime_fasttest_ex(a0,d0,a1,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_check 4ede 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ede, X509_policy_check(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get_attr_by_NID 4ee4 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ee4, EVP_PKEY_get_attr_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_get_flags 4eea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4eea, BN_BLINDING_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_cert 4ef0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ef0, PKCS12_add_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_rand_key 4ef6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ef6, EVP_CIPHER_CTX_rand_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_IPADDRESS_NC 4efc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4efc, a2i_IPADDRESS_NC(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set_digest 4f02 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f02, PKCS7_set_digest(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_MAPPING_new 4f08 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f08, POLICY_MAPPING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set0_type_other 4f0e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f0e, PKCS7_set0_type_other(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_X509_CERT_PAIR 4f14 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f14, PEM_read_bio_X509_CERT_PAIR(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase pqueue_next 4f1a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f1a, pqueue_next(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_add1_attr_by_OBJ 4f20 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f20, EVP_PKEY_add1_attr_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set_time 4f26 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f26, X509_VERIFY_PARAM_set_time(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase pqueue_new 4f2c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f2c, pqueue_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_key 4f32 a2109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f32, PKCS12_add_key(a0,a1,d0,d1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_merge 4f38 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f38, DSO_merge(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_dump_cb 4f3e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f3e, BIO_dump_cb(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase pqueue_insert 4f44 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f44, pqueue_insert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase pitem_free 4f4a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f4a, pitem_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc3526_prime_8192 4f50 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f50, get_rfc3526_prime_8192(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_clear_flags 4f56 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f56, X509_VERIFY_PARAM_clear_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc2409_prime_1024 4f5c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f5c, get_rfc2409_prime_1024(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc3526_prime_2048 4f62 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f62, get_rfc3526_prime_2048(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc3526_prime_6144 4f68 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f68, get_rfc3526_prime_6144(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc3526_prime_1536 4f6e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f6e, get_rfc3526_prime_1536(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc3526_prime_3072 4f74 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f74, get_rfc3526_prime_3072(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc3526_prime_4096 4f7a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f7a, get_rfc3526_prime_4096(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc2409_prime_768 4f80 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f80, get_rfc2409_prime_768(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_get_flags 4f86 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f86, X509_VERIFY_PARAM_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_new 4f8c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f8c, EVP_CIPHER_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_free 4f92 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f92, EVP_CIPHER_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_ipadd 4f98 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f98, a2i_ipadd(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_block_size 4f9e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f9e, EVP_CIPHER_block_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_set_app_data 4fa4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fa4, EVP_CIPHER_CTX_set_app_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_method_type 4faa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4faa, BIO_method_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_nid 4fb0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fb0, EVP_CIPHER_CTX_nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_key_length 4fb6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fb6, EVP_CIPHER_CTX_key_length(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_size 4fbc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fbc, EVP_MD_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_test_flags 4fc2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fc2, EVP_MD_CTX_test_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_clear_flags 4fc8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fc8, BIO_clear_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_pkey_type 4fce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fce, EVP_MD_pkey_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_clear_flags 4fd4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fd4, EVP_MD_CTX_clear_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_flags 4fda 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fda, EVP_CIPHER_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_callback 4fe0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fe0, BIO_get_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_key_length 4fe6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fe6, EVP_CIPHER_key_length(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_Cipher 4fec 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fec, EVP_Cipher(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_block_size 4ff2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ff2, EVP_CIPHER_CTX_block_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_cipher 4ff8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ff8, EVP_CIPHER_CTX_cipher(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_get_app_data 4ffe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ffe, EVP_CIPHER_CTX_get_app_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_block_size 5004 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5004, EVP_MD_block_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_flags 500a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x500a, EVP_CIPHER_CTX_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_md 5010 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5010, EVP_MD_CTX_md(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_method_name 5016 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5016, BIO_method_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_iv_length 501c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x501c, EVP_CIPHER_CTX_iv_length(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_memcmp 5022 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5022, CRYPTO_memcmp(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_consttime_swap 5028 198004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5028, BN_consttime_swap(d0,a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_EXTENSIONS 502e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x502e, i2d_X509_EXTENSIONS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_EXTENSIONS 5034 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5034, d2i_X509_EXTENSIONS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_get0 503a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x503a, X509_ALGOR_get0(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_set0 5040 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5040, X509_ALGOR_set0(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_get0_data_by_OBJ 5046 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5046, X509at_get0_data_by_OBJ(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_set1 504c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x504c, ASN1_TYPE_set1(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_set0 5052 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5052, ASN1_STRING_set0(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_ALGORS 5058 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5058, i2d_X509_ALGORS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_zlib_cleanup 505e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x505e, COMP_zlib_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_ALGORS 5064 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5064, d2i_X509_ALGORS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_read_ASN1 506a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x506a, SMIME_read_ASN1(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_isservice 5070 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5070, OPENSSL_isservice())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_clear_flags 5076 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5076, EVP_CIPHER_CTX_clear_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_X931_generate_prime_ex 507c 43210ba9809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x507c, BN_X931_generate_prime_ex(a0,a1,a2,a3,d0,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_test_flags 5082 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5082, EVP_CIPHER_CTX_test_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_add_alg_module 5088 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5088, EVP_add_alg_module())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_X931_derive_prime_ex 508e 4321b0a9809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x508e, BN_X931_derive_prime_ex(a0,a1,a2,d0,a3,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_init 5094 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5094, OPENSSL_init())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_strdup 509a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x509a, CRYPTO_strdup(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase pqueue_size 50a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50a0, pqueue_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_ACCURACY 50a6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50a6, i2d_TS_ACCURACY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_MSG_IMPRINT 50b2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50b2, i2d_TS_MSG_IMPRINT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_print_public 50b8 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50b8, EVP_PKEY_print_public(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_new 50be 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50be, EVP_PKEY_CTX_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_TST_INFO 50c4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50c4, i2d_TS_TST_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_find 50ca 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50ca, EVP_PKEY_asn1_find(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_beos 50d0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50d0, DSO_METHOD_beos())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_load_cert 50d6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50d6, TS_CONF_load_cert(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_ext 50dc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50dc, TS_REQ_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_sign_init 50e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50e2, EVP_PKEY_sign_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_print 50e8 ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50e8, ASN1_item_print(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_nonce 50ee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50ee, TS_TST_INFO_set_nonce(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_dup 50f4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50f4, TS_RESP_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_add0 50fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50fa, EVP_PKEY_asn1_add0(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add0_attrib_signing_time 5100 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5100, PKCS7_add0_attrib_signing_time(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_asn1_get_prefix 510c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x510c, BIO_asn1_get_prefix(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_time 5112 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5112, TS_TST_INFO_set_time(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_decrypt 5118 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5118, EVP_PKEY_meth_set_decrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_set_type_str 511e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x511e, EVP_PKEY_set_type_str(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get_keygen_info 5124 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5124, EVP_PKEY_CTX_get_keygen_info(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_set_policy_id 512a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x512a, TS_REQ_set_policy_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_set_status_info 5136 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5136, TS_RESP_set_status_info(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_keygen 513c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x513c, EVP_PKEY_keygen(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestSignInit 5142 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5142, EVP_DigestSignInit(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_set_millis 5148 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5148, TS_ACCURACY_set_millis(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_dup 514e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x514e, TS_REQ_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_dup 5154 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5154, GENERAL_NAME_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_get1_crls 515a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x515a, X509_STORE_get1_crls(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_new 5160 981004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5160, EVP_PKEY_asn1_new(d0,d1,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_NDEF 5166 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5166, BIO_new_NDEF(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_set_algo 516c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x516c, TS_MSG_IMPRINT_set_algo(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_TST_INFO_bio 5172 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5172, i2d_TS_TST_INFO_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_ordering 5178 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5178, TS_TST_INFO_set_ordering(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ext_by_OBJ 517e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x517e, TS_TST_INFO_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_set_pointer 5184 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5184, CRYPTO_THREADID_set_pointer(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_get_tsa_section 518a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x518a, TS_CONF_get_tsa_section(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_write_ASN1 5190 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5190, SMIME_write_ASN1(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_signer_key 5196 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5196, TS_RESP_CTX_set_signer_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_encrypt_old 519c a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x519c, EVP_PKEY_encrypt_old(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_encrypt_init 51a2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51a2, EVP_PKEY_encrypt_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_cpy 51a8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51a8, CRYPTO_THREADID_cpy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_get_cert_flags 51ae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51ae, ASN1_PCTX_get_cert_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ESS_SIGNING_CERT 51b4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51b4, i2d_ESS_SIGNING_CERT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_load_key 51ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51ba, TS_CONF_load_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_SEQUENCE_ANY 51c0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51c0, i2d_ASN1_SEQUENCE_ANY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_MSG_IMPRINT_bio 51c6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51c6, d2i_TS_MSG_IMPRINT_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_public 51cc 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51cc, EVP_PKEY_asn1_set_public(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase b2i_PublicKey_bio 51d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51d2, b2i_PublicKey_bio(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_asn1_set_prefix 51d8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51d8, BIO_asn1_set_prefix(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_new_mac_key 51de 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51de, EVP_PKEY_new_mac_key(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_cmp 51e4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51e4, CRYPTO_THREADID_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_ext_free 51ea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51ea, TS_REQ_ext_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_free 51f0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51f0, EVP_PKEY_asn1_set_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get0_asn1 51f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51f6, EVP_PKEY_get0_asn1(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_NETSCAPE_X509 51fc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51fc, d2i_NETSCAPE_X509(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_verify_recover_init 5202 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5202, EVP_PKEY_verify_recover_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_set_data 5208 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5208, EVP_PKEY_CTX_set_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_keygen_init 520e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x520e, EVP_PKEY_keygen_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_status_info 5214 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5214, TS_RESP_CTX_set_status_info(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_get_algo 521a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x521a, TS_MSG_IMPRINT_get_algo(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_print_bio 5220 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5220, TS_REQ_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_ctrl_str 5226 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5226, EVP_PKEY_CTX_ctrl_str(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get_default_digest_nid 522c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x522c, EVP_PKEY_get_default_digest_nid(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PKCS7_stream 5232 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5232, PEM_write_bio_PKCS7_stream(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_print_bio 5238 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5238, TS_MSG_IMPRINT_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_asc2bn 523e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x523e, BN_asc2bn(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_policy_id 5244 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5244, TS_REQ_get_policy_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_ACCURACY 524a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x524a, d2i_TS_ACCURACY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_global_lookup 5250 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5250, DSO_global_lookup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_tsa_name 5256 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5256, TS_CONF_set_tsa_name(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_SET_ANY 525c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x525c, i2d_ASN1_SET_ANY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_get_flags 5262 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5262, ASN1_PCTX_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ext_by_NID 5268 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5268, TS_TST_INFO_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_new 526e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x526e, TS_RESP_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_CERT_ID_dup 5274 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5274, ESS_CERT_ID_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_STATUS_INFO_dup 527a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x527a, TS_STATUS_INFO_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_delete_ext 5280 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5280, TS_REQ_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestVerifyFinal 5286 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5286, EVP_DigestVerifyFinal(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_print_params 528c a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x528c, EVP_PKEY_print_params(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_msg_imprint 5292 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5292, TS_REQ_get_msg_imprint(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_find_sigid_by_algs 5298 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5298, OBJ_find_sigid_by_algs(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_serial 529e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x529e, TS_TST_INFO_get_serial(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_nonce 52a4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52a4, TS_REQ_get_nonce(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_set0_param 52aa 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52aa, X509_PUBKEY_set0_param(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_set0_keygen_info 52b0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52b0, EVP_PKEY_CTX_set0_keygen_info(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_set_dpname 52b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52b6, DIST_POINT_set_dpname(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ISSUING_DIST_POINT 52bc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52bc, i2d_ISSUING_DIST_POINT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get_data 52c2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52c2, EVP_PKEY_CTX_get_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_STATUS_INFO_print_bio 52c8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52c8, TS_STATUS_INFO_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_derive_init 52ce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52ce, EVP_PKEY_derive_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_TST_INFO 52d4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52d4, d2i_TS_TST_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_add_alias 52da 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52da, EVP_PKEY_asn1_add_alias(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_RESP_bio 52e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52e0, d2i_TS_RESP_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OTHERNAME_cmp 52e6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52e6, OTHERNAME_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_set0_value 52ec 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52ec, GENERAL_NAME_set0_value(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_RECIP_INFO_get0_alg 52f2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52f2, PKCS7_RECIP_INFO_get0_alg(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_new 52f8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52f8, TS_RESP_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_set_tst_info 52fe a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52fe, TS_RESP_set_tst_info(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_final 5304 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5304, PKCS7_final(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_base_id 530a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x530a, EVP_PKEY_base_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_signer_cert 5310 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5310, TS_RESP_CTX_set_signer_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_set_msg_imprint 5316 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5316, TS_REQ_set_msg_imprint(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_ctrl 531c 93210806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x531c, EVP_PKEY_CTX_ctrl(a0,d0,d1,d2,d3,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_digests 5322 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5322, TS_CONF_set_digests(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_MSG_IMPRINT 5328 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5328, d2i_TS_MSG_IMPRINT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_ctrl 532e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x532e, EVP_PKEY_meth_set_ctrl(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_ext_by_NID 5334 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5334, TS_REQ_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_pbe_set0_algor 533a 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x533a, PKCS5_pbe_set0_algor(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_thread_id 5340 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5340, BN_BLINDING_thread_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_new 5346 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5346, TS_ACCURACY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_METHOD_free 534c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x534c, X509_CRL_METHOD_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_get_nm_flags 5352 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5352, ASN1_PCTX_get_nm_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_sign 5358 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5358, EVP_PKEY_meth_set_sign(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_current 535e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x535e, CRYPTO_THREADID_current(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_decrypt_init 5364 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5364, EVP_PKEY_decrypt_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_X509_free 536a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x536a, NETSCAPE_X509_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2b_PVK_bio 5370 ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5370, i2b_PVK_bio(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_print_private 5376 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5376, EVP_PKEY_print_private(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_get0_value 537c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x537c, GENERAL_NAME_get0_value(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase b2i_PVK_bio 5382 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5382, b2i_PVK_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_adj 5388 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5388, ASN1_UTCTIME_adj(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_new 538e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x538e, TS_TST_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_do_all_sorted 5394 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5394, EVP_MD_do_all_sorted(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_default_engine 539a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x539a, TS_CONF_set_default_engine(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_set_seconds 53a0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53a0, TS_ACCURACY_set_seconds(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_time 53a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53a6, TS_TST_INFO_get_time(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_pkey_get0 53ac 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53ac, PKCS8_pkey_get0(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_get0 53b2 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53b2, EVP_PKEY_asn1_get0(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_add_sigid 53b8 21003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53b8, OBJ_add_sigid(d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNER_INFO_sign 53be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53be, PKCS7_SIGNER_INFO_sign(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_paramgen_init 53c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53c4, EVP_PKEY_paramgen_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_sign 53ca 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53ca, EVP_PKEY_sign(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_sigid_free 53d0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53d0, OBJ_sigid_free())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_init 53d6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53d6, EVP_PKEY_meth_set_init(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ESS_ISSUER_SERIAL 53dc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53dc, d2i_ESS_ISSUER_SERIAL(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ISSUING_DIST_POINT_new 53e2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53e2, ISSUING_DIST_POINT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_adj 53e8 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53e8, ASN1_TIME_adj(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_OBJ_print_bio 53ee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53ee, TS_OBJ_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_verify_recover 53f4 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53f4, EVP_PKEY_meth_set_verify_recover(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_get_status_info 53fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53fa, TS_RESP_get_status_info(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_set_cb 5400 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5400, EVP_PKEY_CTX_set_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_to_TS_TST_INFO 5406 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5406, PKCS7_to_TS_TST_INFO(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_get_oid_flags 540c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x540c, ASN1_PCTX_get_oid_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_add_ext 5412 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5412, TS_TST_INFO_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_derive 5418 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5418, EVP_PKEY_meth_set_derive(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_MSG_IMPRINT_bio 5424 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5424, i2d_TS_MSG_IMPRINT_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_accuracy 542a 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x542a, TS_RESP_CTX_set_accuracy(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_set_nonce 5430 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5430, TS_REQ_set_nonce(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_CERT_ID_new 5436 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5436, ESS_CERT_ID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_ext_count 543c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x543c, TS_REQ_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_reverse 5442 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5442, BUF_reverse(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_print_bio 5448 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5448, TS_TST_INFO_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ISSUING_DIST_POINT 544e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x544e, d2i_ISSUING_DIST_POINT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2b_PrivateKey_bio 5454 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5454, i2b_PrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_RESP 545a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x545a, i2d_TS_RESP(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase b2i_PublicKey 5460 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5460, b2i_PublicKey(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_cleanup 5466 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5466, TS_VERIFY_CTX_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_STATUS_INFO_free 546c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x546c, TS_STATUS_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_verify_token 5472 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5472, TS_RESP_verify_token(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_bsearch_ex_ 5478 2a109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5478, OBJ_bsearch_ex_(a0,a1,d0,d1,a2,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_bn_print 547e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x547e, ASN1_bn_print(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_get_count 5484 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5484, EVP_PKEY_asn1_get_count())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_set_nm_flags 548a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x548a, ASN1_PCTX_set_nm_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestVerifyInit 5490 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5490, EVP_DigestVerifyInit(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_policy_id 5496 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5496, TS_TST_INFO_get_policy_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_cert_req 549c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x549c, TS_REQ_get_cert_req(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_set_meth_data 54a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54a2, X509_CRL_set_meth_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_pkey_set0 54a8 2ba109807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54a8, PKCS8_pkey_set0(a0,a1,d0,d1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_copy 54ae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54ae, ASN1_STRING_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_match 54ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54ba, X509_CRL_match(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_private 54c0 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54c0, EVP_PKEY_asn1_set_private(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ext_d2i 54c6 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54c6, TS_TST_INFO_get_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_add_policy 54cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54cc, TS_RESP_CTX_add_policy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_RESP 54d2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54d2, d2i_TS_RESP(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_load_certs 54d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54d8, TS_CONF_load_certs(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_msg_imprint 54de 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54de, TS_TST_INFO_get_msg_imprint(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_TS_strings 54e4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54e4, ERR_load_TS_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_version 54ea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54ea, TS_TST_INFO_get_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_dup 54f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54f0, EVP_PKEY_CTX_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_verify 54f6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54f6, EVP_PKEY_meth_set_verify(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2b_PublicKey_bio 54fc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54fc, i2b_PublicKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_certs 5502 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5502, TS_CONF_set_certs(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_get0_info 5508 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5508, EVP_PKEY_asn1_get0_info(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_free 550e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x550e, TS_VERIFY_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_ext_by_critical 5514 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5514, TS_REQ_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_serial_cb 551a 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x551a, TS_RESP_CTX_set_serial_cb(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_meth_data 5520 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5520, X509_CRL_get_meth_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_time_cb 5526 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5526, TS_RESP_CTX_set_time_cb(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_get_msg 552c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x552c, TS_MSG_IMPRINT_get_msg(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_ext_free 5532 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5532, TS_TST_INFO_ext_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_version 5538 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5538, TS_REQ_get_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_add_ext 553e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x553e, TS_REQ_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_set_app_data 5544 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5544, EVP_PKEY_CTX_set_app_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_bsearch_ 554a a109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x554a, OBJ_bsearch_(a0,a1,d0,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_verifyctx 5550 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5550, EVP_PKEY_meth_set_verifyctx(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_bio_stream 5556 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5556, i2d_PKCS7_bio_stream(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_set_numeric 555c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x555c, CRYPTO_THREADID_set_numeric(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_sign_add_signer 5562 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5562, PKCS7_sign_add_signer(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_TST_INFO_bio 5568 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5568, d2i_TS_TST_INFO_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ordering 556e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x556e, TS_TST_INFO_get_ordering(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_print_bio 5574 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5574, TS_RESP_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_exts 557a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x557a, TS_TST_INFO_get_exts(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_pbe2_set_iv 5580 2a190806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5580, PKCS5_pbe2_set_iv(a0,d0,a1,d1,a2,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase b2i_PrivateKey 5586 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5586, b2i_PrivateKey(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get_app_data 558c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x558c, EVP_PKEY_CTX_get_app_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_set_cert_req 5592 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5592, TS_REQ_set_cert_req(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_set_callback 5598 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5598, CRYPTO_THREADID_set_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_serial 559e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x559e, TS_CONF_set_serial(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_free 55a4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55a4, TS_TST_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_verify_response 55b0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55b0, TS_RESP_verify_response(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ESS_ISSUER_SERIAL 55b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55b6, i2d_ESS_ISSUER_SERIAL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_get_seconds 55bc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55bc, TS_ACCURACY_get_seconds(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_do_all 55c2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55c2, EVP_CIPHER_do_all(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase b2i_PrivateKey_bio 55c8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55c8, b2i_PrivateKey_bio(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTID_dup 55ce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55ce, OCSP_CERTID_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_get0_param 55d4 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55d4, X509_PUBKEY_get0_param(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_dup 55da 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55da, TS_MSG_IMPRINT_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_print_ctx 55e0 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55e0, PKCS7_print_ctx(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_REQ_bio 55e6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55e6, i2d_TS_REQ_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_param 55ec 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55ec, EVP_PKEY_asn1_set_param(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_encrypt 55f2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55f2, EVP_PKEY_meth_set_encrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_set_flags 55f8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55f8, ASN1_PCTX_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ESS_CERT_ID 55fe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55fe, i2d_ESS_CERT_ID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_new 5604 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5604, TS_VERIFY_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_extension_cb 560a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x560a, TS_RESP_CTX_set_extension_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_status_info_cond 5610 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5610, TS_RESP_CTX_set_status_info_cond(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_verify 5616 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5616, EVP_PKEY_verify(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_METHOD_new 561c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x561c, X509_CRL_METHOD_new(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestSignFinal 5622 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5622, EVP_DigestSignFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_def_policy 5628 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5628, TS_RESP_CTX_set_def_policy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_create_response 562e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x562e, TS_RESP_create_response(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNER_INFO_get0_algs 5634 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5634, PKCS7_SIGNER_INFO_get0_algs(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_nonce 563a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x563a, TS_TST_INFO_get_nonce(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_decrypt_old 5640 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5640, EVP_PKEY_decrypt_old(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_policy_id 5646 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5646, TS_TST_INFO_set_policy_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_ess_cert_id_chain 564c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x564c, TS_CONF_set_ess_cert_id_chain(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get0_pkey 5652 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5652, EVP_PKEY_CTX_get0_pkey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_REQ 5658 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5658, d2i_TS_REQ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_find_str 565e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x565e, EVP_PKEY_asn1_find_str(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_asn1 5664 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5664, BIO_f_asn1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_SIGNING_CERT_new 566a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x566a, ESS_SIGNING_CERT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PBE_find 5670 a981005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5670, EVP_PBE_find(d0,d1,a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get0_by_cert 5676 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5676, X509_CRL_get0_by_cert(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_derive 567c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x567c, EVP_PKEY_derive(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_REQ 5682 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5682, i2d_TS_REQ(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_delete_ext 5688 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5688, TS_TST_INFO_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_ISSUER_SERIAL_free 568e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x568e, ESS_ISSUER_SERIAL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_set_str_flags 5694 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5694, ASN1_PCTX_set_str_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_signer_key 569a 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x569a, TS_CONF_set_signer_key(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_get_millis 56a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56a0, TS_ACCURACY_get_millis(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_get_token 56a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56a6, TS_RESP_get_token(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_dup 56ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56ac, TS_ACCURACY_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_set_default_method 56b2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56b2, X509_CRL_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_hash 56b8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56b8, CRYPTO_THREADID_hash(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_free 56be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56be, TS_RESP_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ISSUING_DIST_POINT_free 56c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56c4, ISSUING_DIST_POINT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_ISSUER_SERIAL_new 56ca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56ca, ESS_ISSUER_SERIAL_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add1_attrib_digest 56d0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56d0, PKCS7_add1_attrib_digest(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_add_md 56d6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56d6, TS_RESP_CTX_add_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_dup 56dc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56dc, TS_TST_INFO_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_Parameters 56e2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56e2, PEM_write_bio_Parameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_accuracy 56e8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56e8, TS_TST_INFO_get_accuracy(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get0_by_serial 56ee a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56ee, X509_CRL_get0_by_serial(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_version 56f4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56f4, TS_TST_INFO_set_version(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_get_tst_info 56fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56fa, TS_RESP_CTX_get_tst_info(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_verify_signature 5700 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5700, TS_RESP_verify_signature(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_get_callback 5706 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5706, CRYPTO_THREADID_get_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_tsa 570c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x570c, TS_TST_INFO_get_tsa(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_STATUS_INFO_new 5712 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5712, TS_STATUS_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get_cb 5718 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5718, EVP_PKEY_CTX_get_cb(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_ext_d2i 571e 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x571e, TS_REQ_get_ext_d2i(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_set0_othername 5724 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5724, GENERAL_NAME_set0_othername(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ext_count 572a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x572a, TS_TST_INFO_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_get_request 5730 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5730, TS_RESP_CTX_get_request(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_NETSCAPE_X509 5736 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5736, i2d_NETSCAPE_X509(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_signctx 573c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x573c, EVP_PKEY_meth_set_signctx(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_copy 5742 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5742, EVP_PKEY_asn1_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_cmp 5748 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5748, ASN1_TYPE_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_do_all_sorted 574e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x574e, EVP_CIPHER_do_all_sorted(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_free 5754 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5754, EVP_PKEY_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_get1_certs 5760 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5760, X509_STORE_get1_certs(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get_operation 5766 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5766, EVP_PKEY_CTX_get_operation(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ESS_SIGNING_CERT 576c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x576c, d2i_ESS_SIGNING_CERT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_ordering 5772 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5772, TS_CONF_set_ordering(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PBE_alg_add_type 5778 8321005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5778, EVP_PBE_alg_add_type(d0,d1,d2,d3,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_set_version 577e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x577e, TS_REQ_set_version(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get0 5784 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5784, EVP_PKEY_get0(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_asn1_set_suffix 578a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x578a, BIO_asn1_set_suffix(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_STATUS_INFO 5790 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5790, i2d_TS_STATUS_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_do_all 5796 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5796, EVP_MD_do_all(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_accuracy 579c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x579c, TS_TST_INFO_set_accuracy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_attrib_content_type 57a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57a2, PKCS7_add_attrib_content_type(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_add0 57a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57a8, EVP_PKEY_meth_add0(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_tsa 57ae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57ae, TS_TST_INFO_set_tsa(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_new 57b4 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57b4, EVP_PKEY_meth_new(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_accuracy 57ba a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57ba, TS_CONF_set_accuracy(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_set_oid_flags 57c0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57c0, ASN1_PCTX_set_oid_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_SIGNING_CERT_dup 57c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57c6, ESS_SIGNING_CERT_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_REQ_bio 57cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57cc, d2i_TS_REQ_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_time_adj_ex 57d2 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57d2, X509_time_adj_ex(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_add_flags 57d8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57d8, TS_RESP_CTX_add_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_STATUS_INFO 57de 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57de, d2i_TS_STATUS_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_set_msg 57e4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57e4, TS_MSG_IMPRINT_set_msg(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_asn1_get_suffix 57ea a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57ea, BIO_asn1_get_suffix(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_free 57f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57f0, TS_REQ_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_free 57f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57f6, EVP_PKEY_meth_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_exts 57fc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57fc, TS_REQ_get_exts(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_clock_precision_digits 5802 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5802, TS_RESP_CTX_set_clock_precision_digits(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_add_failure_info 5808 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5808, TS_RESP_CTX_add_failure_info(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_RESP_bio 580e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x580e, i2d_TS_RESP_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get0_peerkey 5814 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5814, EVP_PKEY_CTX_get0_peerkey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_new 581a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x581a, TS_REQ_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_new 5820 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5820, TS_MSG_IMPRINT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_find 5826 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5826, EVP_PKEY_meth_find(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_id 582c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x582c, EVP_PKEY_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_serial 5832 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5832, TS_TST_INFO_set_serial(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_GENERAL_NAME 5838 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5838, a2i_GENERAL_NAME(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_crypto_device 583e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x583e, TS_CONF_set_crypto_device(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_verify_init 5844 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5844, EVP_PKEY_verify_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_policies 584a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x584a, TS_CONF_set_policies(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_new 5850 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5850, ASN1_PCTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_CERT_ID_free 5856 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5856, ESS_CERT_ID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_free 585c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x585c, TS_MSG_IMPRINT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_init 5862 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5862, TS_VERIFY_CTX_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_stream 5868 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5868, PKCS7_stream(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_certs 586e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x586e, TS_RESP_CTX_set_certs(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_def_policy 5874 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5874, TS_CONF_set_def_policy(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_adj 587a 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x587a, ASN1_GENERALIZEDTIME_adj(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_X509_new 5880 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5880, NETSCAPE_X509_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_free 5886 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5886, TS_ACCURACY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_get_tst_info 588c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x588c, TS_RESP_get_tst_info(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_derive_set_peer 5892 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5892, EVP_PKEY_derive_set_peer(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_Parameters 5898 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5898, PEM_read_bio_Parameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_clock_precision_digits 589e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x589e, TS_CONF_set_clock_precision_digits(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_ISSUER_SERIAL_dup 58a4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58a4, ESS_ISSUER_SERIAL_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_get_micros 58aa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58aa, TS_ACCURACY_get_micros(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_get_str_flags 58b0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58b0, ASN1_PCTX_get_str_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NAME_CONSTRAINTS_check 58b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58b6, NAME_CONSTRAINTS_check(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_check 58bc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58bc, ASN1_BIT_STRING_check(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_akid 58c2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58c2, X509_check_akid(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_free 58c8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58c8, ASN1_PCTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_ASN1_stream 58ce 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58ce, PEM_write_bio_ASN1_stream(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_bio_stream 58d4 b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58d4, i2d_ASN1_bio_stream(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_X509_ALGOR_print_bio 58da 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58da, TS_X509_ALGOR_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_cleanup 58e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58e0, EVP_PKEY_meth_set_cleanup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_free 58e6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58e6, EVP_PKEY_asn1_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_SIGNING_CERT_free 58ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58ec, ESS_SIGNING_CERT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_msg_imprint 58f2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58f2, TS_TST_INFO_set_msg_imprint(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_cmp 58f8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58f8, GENERAL_NAME_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_SET_ANY 58fe 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58fe, d2i_ASN1_SET_ANY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_SEQUENCE_ANY 590a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x590a, d2i_ASN1_SEQUENCE_ANY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_get0_otherName 5910 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5910, GENERAL_NAME_get0_otherName(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ESS_CERT_ID 5916 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5916, d2i_ESS_CERT_ID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_find_sigid_algs 591c 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x591c, OBJ_find_sigid_algs(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_keygen 5922 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5922, EVP_PKEY_meth_set_keygen(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_PBKDF2_HMAC 5928 b3a2190808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5928, PKCS5_PBKDF2_HMAC(a0,d0,a1,d1,d2,a2,d3,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_paramgen 592e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x592e, EVP_PKEY_paramgen(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_paramgen 5934 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5934, EVP_PKEY_meth_set_paramgen(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_PKCS7 593a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x593a, BIO_new_PKCS7(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_verify_recover 5940 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5940, EVP_PKEY_verify_recover(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ext_print_bio 5946 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5946, TS_ext_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ASN1_INTEGER_print_bio 594c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x594c, TS_ASN1_INTEGER_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase check_defer 5952 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5952, check_defer(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_pathbyaddr 5958 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5958, DSO_pathbyaddr(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_set_type 595e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x595e, EVP_PKEY_set_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_set_micros 5964 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5964, TS_ACCURACY_set_micros(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_to_TS_VERIFY_CTX 596a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x596a, TS_REQ_to_TS_VERIFY_CTX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_copy 5970 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5970, EVP_PKEY_meth_set_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_set_cert_flags 5976 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5976, ASN1_PCTX_set_cert_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ext 597c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x597c, TS_TST_INFO_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_ctrl 5982 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5982, EVP_PKEY_asn1_set_ctrl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ext_by_critical 5988 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5988, TS_TST_INFO_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_new_id 598e 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x598e, EVP_PKEY_CTX_new_id(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_ext_by_OBJ 5994 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5994, TS_REQ_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_signer_cert 599a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x599a, TS_CONF_set_signer_cert(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_hash_old 59a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59a0, X509_NAME_hash_old(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_set_string 59a6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59a6, ASN1_TIME_set_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_flags 59ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59ac, EVP_MD_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_free 59b2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59b2, TS_RESP_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_add1_header 59b8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59b8, OCSP_REQ_CTX_add1_header(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_set1_req 59be 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59be, OCSP_REQ_CTX_set1_req(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_verify_cb 59c4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59c4, X509_STORE_set_verify_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get0_current_crl 59ca 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59ca, X509_STORE_CTX_get0_current_crl(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get0_parent_ctx 59d0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59d0, X509_STORE_CTX_get0_parent_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get0_current_issuer 59d6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59d6, X509_STORE_CTX_get0_current_issuer(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_copy 59dc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59dc, EVP_CIPHER_CTX_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_get_prompt_constructor 59e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59e2, UI_method_get_prompt_constructor(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_set_prompt_constructor 59e8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59e8, UI_method_set_prompt_constructor(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_read_pw_string_min 59ee 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59ee, EVP_read_pw_string_min(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cts128_encrypt 59f4 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59f4, CRYPTO_cts128_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cts128_decrypt_block 59fa 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59fa, CRYPTO_cts128_decrypt_block(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cfb128_1_encrypt 5a00 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a00, CRYPTO_cfb128_1_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cbc128_encrypt 5a06 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a06, CRYPTO_cbc128_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ctr128_encrypt 5a0c 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a0c, CRYPTO_ctr128_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ofb128_encrypt 5a12 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a12, CRYPTO_ofb128_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cts128_decrypt 5a18 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a18, CRYPTO_cts128_decrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cts128_encrypt_block 5a1e 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a1e, CRYPTO_cts128_encrypt_block(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cbc128_decrypt 5a24 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a24, CRYPTO_cbc128_decrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cfb128_encrypt 5a2a 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a2a, CRYPTO_cfb128_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cfb128_8_encrypt 5a30 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a30, CRYPTO_cfb128_8_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_strcasecmp 5a36 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a36, OPENSSL_strcasecmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_memcmp 5a3c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a3c, OPENSSL_memcmp(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_strncasecmp 5a42 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a42, OPENSSL_strncasecmp(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_gmtime 5a48 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a48, OPENSSL_gmtime(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_gmtime_adj 5a4e 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a4e, OPENSSL_gmtime_adj(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get0_info 5a54 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a54, EVP_PKEY_meth_get0_info(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_copy 5a5a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a5a, EVP_PKEY_meth_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_PKCS1_PSS_mgf1 5a60 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a60, RSA_padding_add_PKCS1_PSS_mgf1(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_verify_PKCS1_PSS_mgf1 5a66 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a66, RSA_verify_PKCS1_PSS_mgf1(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_set_md 5a6c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a6c, X509_ALGOR_set_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_CTX_copy 5a72 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a72, CMAC_CTX_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_CTX_free 5a78 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a78, CMAC_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_CTX_get0_cipher_ctx 5a7e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a7e, CMAC_CTX_get0_cipher_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_CTX_cleanup 5a84 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a84, CMAC_CTX_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_Init 5a8a ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a8a, CMAC_Init(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_Update 5a90 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a90, CMAC_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_resume 5a96 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a96, CMAC_resume(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_CTX_new 5a9c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a9c, CMAC_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_Final 5aa2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5aa2, CMAC_Final(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ctr128_encrypt_ctr32 5aa8 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5aa8, CRYPTO_ctr128_encrypt_ctr32(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_release 5aae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5aae, CRYPTO_gcm128_release(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_decrypt_ccm64 5ab4 b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ab4, CRYPTO_ccm128_decrypt_ccm64(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_encrypt 5aba 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5aba, CRYPTO_ccm128_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_encrypt 5ac0 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ac0, CRYPTO_gcm128_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_xts128_encrypt 5ac6 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ac6, CRYPTO_xts128_encrypt(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_nistcts128_decrypt_block 5acc b1a09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5acc, CRYPTO_nistcts128_decrypt_block(a0,a1,d0,a2,d1,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_setiv 5ad2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ad2, CRYPTO_gcm128_setiv(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_nistcts128_encrypt 5ad8 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ad8, CRYPTO_nistcts128_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_tag 5ade 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ade, CRYPTO_gcm128_tag(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_encrypt_ccm64 5ae4 b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ae4, CRYPTO_ccm128_encrypt_ccm64(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_setiv 5aea 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5aea, CRYPTO_ccm128_setiv(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_nistcts128_encrypt_block 5af0 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5af0, CRYPTO_nistcts128_encrypt_block(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_aad 5af6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5af6, CRYPTO_gcm128_aad(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_init 5afc a910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5afc, CRYPTO_ccm128_init(a0,d0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_nistcts128_decrypt 5b02 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b02, CRYPTO_nistcts128_decrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_new 5b08 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b08, CRYPTO_gcm128_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_tag 5b0e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b0e, CRYPTO_ccm128_tag(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_decrypt 5b14 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b14, CRYPTO_ccm128_decrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_aad 5b1a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b1a, CRYPTO_ccm128_aad(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_init 5b20 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b20, CRYPTO_gcm128_init(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_decrypt 5b26 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b26, CRYPTO_gcm128_decrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_decrypt_ctr32 5b2c b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b2c, CRYPTO_gcm128_decrypt_ctr32(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_encrypt_ctr32 5b32 b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b32, CRYPTO_gcm128_encrypt_ctr32(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_finish 5b38 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b38, CRYPTO_gcm128_finish(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_pbkdf2_set 5b3e 3218005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b3e, PKCS5_pbkdf2_set(d0,a0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_PSS_PARAMS_new 5b44 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b44, RSA_PSS_PARAMS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSA_PSS_PARAMS 5b4a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b4a, d2i_RSA_PSS_PARAMS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_PSS_PARAMS_free 5b50 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b50, RSA_PSS_PARAMS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSA_PSS_PARAMS 5b56 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b56, i2d_RSA_PSS_PARAMS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_stderr 5b5c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b5c, OPENSSL_stderr())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLBase OPENSSL_showfatal 5b5c 9802
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLBase, 0x5b5c, OPENSSL_showfatal(a0,a1))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_MAPPING_it 5b62 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b62, POLICY_MAPPING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NAME_CONSTRAINTS_it 5b68 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b68, NAME_CONSTRAINTS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_NDEF_it 5b6e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b6e, ASN1_OCTET_STRING_NDEF_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CERT_PAIR_it 5b74 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b74, X509_CERT_PAIR_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_CONSTRAINTS_it 5b7a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b7a, POLICY_CONSTRAINTS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_MAPPINGS_it 5b80 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b80, POLICY_MAPPINGS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_SUBTREE_it 5b86 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b86, GENERAL_SUBTREE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSIONS_it 5b8c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b8c, X509_EXTENSIONS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGORS_it 5b92 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b92, X509_ALGORS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ContentInfo_it 5b98 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b98, CMS_ContentInfo_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ReceiptRequest_it 5b9e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b9e, CMS_ReceiptRequest_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SEQUENCE_ANY_it 5ba4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ba4, ASN1_SEQUENCE_ANY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SET_ANY_it 5baa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5baa, ASN1_SET_ANY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_X509_it 5bb0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bb0, NETSCAPE_X509_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ISSUING_DIST_POINT_it 5bb6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bb6, ISSUING_DIST_POINT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_PSS_PARAMS_it 5bbc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bbc, RSA_PSS_PARAMS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _shadow_DES_rw_mode 5bc2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bc2, _shadow_DES_rw_mode())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _shadow_DES_check_key 5bc8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bc8, _shadow_DES_check_key())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_gost 5bce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bce, ENGINE_load_gost())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_DHxparams 5bd4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bd4, PEM_write_bio_DHxparams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_cmp 5bda 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bda, X509_ALGOR_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_clear_free 5be0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5be0, ASN1_STRING_clear_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_diff 5be6 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5be6, ASN1_TIME_diff(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_hex_string 5bec 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bec, BIO_hex_string(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_strnlen 5bf2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bf2, BUF_strnlen(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientEncryptedKey_cert_cmp 5bf8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bf8, CMS_RecipientEncryptedKey_cert_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientEncryptedKey_get0_id 5bfe 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bfe, CMS_RecipientEncryptedKey_get0_id(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_encrypt 5c04 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c04, CMS_RecipientInfo_encrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_get0_pkey_ctx 5c0a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c0a, CMS_RecipientInfo_get0_pkey_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_decrypt 5c10 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c10, CMS_RecipientInfo_kari_decrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_get0_alg 5c16 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c16, CMS_RecipientInfo_kari_get0_alg(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_get0_ctx 5c1c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c1c, CMS_RecipientInfo_kari_get0_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_get0_orig_id 5c22 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c22, CMS_RecipientInfo_kari_get0_orig_id(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_get0_reks 5c28 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c28, CMS_RecipientInfo_kari_get0_reks(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_orig_id_cmp 5c2e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c2e, CMS_RecipientInfo_kari_orig_id_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_set0_pkey 5c34 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c34, CMS_RecipientInfo_kari_set0_pkey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SharedInfo_encode 5c3a 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c3a, CMS_SharedInfo_encode(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_get0_md_ctx 5c40 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c40, CMS_SignerInfo_get0_md_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_get0_pkey_ctx 5c46 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c46, CMS_SignerInfo_get0_pkey_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_get0_signature 5c4c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c4c, CMS_SignerInfo_get0_signature(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DHxparams 5c52 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c52, d2i_DHxparams(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DHxparams 5c58 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c58, i2d_DHxparams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_compute_key_padded 5c5e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c5e, DH_compute_key_padded(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_get_1024_160 5c64 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c64, DH_get_1024_160())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_get_2048_224 5c6a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c6a, DH_get_2048_224())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_get_2048_256 5c70 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c70, DH_get_2048_256())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_KDF_X9_42 5c76 32ba190808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c76, DH_KDF_X9_42(a0,d0,a1,d1,a2,a3,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_curve_nid2nist 5c7c 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c7c, EC_curve_nid2nist(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_curve_nist2nid 5c82 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c82, EC_curve_nist2nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_mont_data 5c88 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c88, EC_GROUP_get_mont_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDH_KDF_X9_62 5c8e 32a190807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c8e, ECDH_KDF_X9_62(a0,d0,a1,d1,a2,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_METHOD_free 5c94 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c94, ECDSA_METHOD_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_METHOD_get_app_data 5c9a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c9a, ECDSA_METHOD_get_app_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_METHOD_new 5ca0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ca0, ECDSA_METHOD_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_METHOD_set_app_data 5ca6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ca6, ECDSA_METHOD_set_app_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_METHOD_set_flags 5cac 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cac, ECDSA_METHOD_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_METHOD_set_name 5cb2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cb2, ECDSA_METHOD_set_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_METHOD_set_sign 5cb8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cb8, ECDSA_METHOD_set_sign(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_METHOD_set_sign_setup 5cbe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cbe, ECDSA_METHOD_set_sign_setup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_METHOD_set_verify 5cc4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cc4, ECDSA_METHOD_set_verify(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_cbc_hmac_sha256 5cca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cca, EVP_aes_128_cbc_hmac_sha256())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_wrap 5cd0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cd0, EVP_aes_128_wrap())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_wrap 5cd6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cd6, EVP_aes_192_wrap())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_cbc_hmac_sha256 5cdc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cdc, EVP_aes_256_cbc_hmac_sha256())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_wrap 5ce2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ce2, EVP_aes_256_wrap())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_wrap 5ce8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ce8, EVP_des_ede3_wrap())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_128_unwrap 5cee 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cee, CRYPTO_128_unwrap(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_128_wrap 5cf4 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cf4, CRYPTO_128_wrap(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_get0_mem_bio 5cfa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cfa, OCSP_REQ_CTX_get0_mem_bio(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_http 5d00 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d00, OCSP_REQ_CTX_http(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_i2d 5d06 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d06, OCSP_REQ_CTX_i2d(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_nbio 5d0c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d0c, OCSP_REQ_CTX_nbio(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_nbio_d2i 5d12 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d12, OCSP_REQ_CTX_nbio_d2i(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_new 5d18 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d18, OCSP_REQ_CTX_new(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_set_max_response_length 5d1e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d1e, OCSP_set_max_response_length(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSA_OAEP_PARAMS 5d24 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d24, d2i_RSA_OAEP_PARAMS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_OAEP_PARAMS_free 5d2a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d2a, RSA_OAEP_PARAMS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_OAEP_PARAMS_it 5d30 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d30, RSA_OAEP_PARAMS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_OAEP_PARAMS_new 5d36 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d36, RSA_OAEP_PARAMS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_PKCS1_OAEP_mgf1 5d3c 3b2a190808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d3c, RSA_padding_add_PKCS1_OAEP_mgf1(a0,d0,a1,d1,a2,d2,a3,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_PKCS1_OAEP_mgf1 5d42 4b3a2190809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d42, RSA_padding_check_PKCS1_OAEP_mgf1(a0,d0,a1,d1,d2,a2,d3,a3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_deep_copy 5d48 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d48, sk_deep_copy(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_re_X509_tbs 5d4e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d4e, i2d_re_X509_tbs(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_chain_check_suiteb 5d54 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d54, X509_chain_check_suiteb(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_chain_up_ref 5d5a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d5a, X509_chain_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_check_suiteb 5d60 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d60, X509_CRL_check_suiteb(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_diff 5d66 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d66, X509_CRL_diff(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_http_nbio 5d6c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d6c, X509_CRL_http_nbio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get0_signature 5d72 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d72, X509_get0_signature(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_signature_nid 5d78 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d78, X509_get_signature_nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_http_nbio 5d7e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d7e, X509_http_nbio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_dup 5d84 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d84, X509_REVOKED_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get0_store 5d8a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d8a, X509_STORE_CTX_get0_store(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_lookup_crls_cb 5d90 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d90, X509_STORE_set_lookup_crls_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_add1_host 5d96 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d96, X509_VERIFY_PARAM_add1_host(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_get0 5d9c 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d9c, X509_VERIFY_PARAM_get0(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_get0_name 5da2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5da2, X509_VERIFY_PARAM_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_get0_peername 5da8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5da8, X509_VERIFY_PARAM_get0_peername(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_get_count 5dae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dae, X509_VERIFY_PARAM_get_count())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1_email 5db4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5db4, X509_VERIFY_PARAM_set1_email(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1_host 5dba 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dba, X509_VERIFY_PARAM_set1_host(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1_ip 5dc0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dc0, X509_VERIFY_PARAM_set1_ip(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1_ip_asc 5dc6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dc6, X509_VERIFY_PARAM_set1_ip_asc(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set_hostflags 5dcc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dcc, X509_VERIFY_PARAM_set_hostflags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_email 5dd2 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dd2, X509_check_email(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_host 5dd8 a109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dd8, X509_check_host(a0,a1,d0,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_ip 5dde 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dde, X509_check_ip(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_ip_asc 5de4 19803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5de4, X509_check_ip_asc(a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_free 5dea 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dea, X509V3_EXT_free(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_item 5df0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5df0, EVP_PKEY_asn1_set_item(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLS_client_method 5df6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5df6, DTLS_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLS_method 5dfc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dfc, DTLS_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLS_server_method 5e02 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e02, DTLS_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_2_client_method 5e08 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e08, DTLSv1_2_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_2_method 5e0e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e0e, DTLSv1_2_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_2_server_method 5e14 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e14, DTLSv1_2_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_certs_clear 5e1a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e1a, SSL_certs_clear(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_find 5e20 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e20, SSL_CIPHER_find(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_COMP_free_compression_methods 5e26 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e26, SSL_COMP_free_compression_methods())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_cmd 5e2c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e2c, SSL_CONF_cmd(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_cmd_argv 5e32 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e32, SSL_CONF_cmd_argv(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_cmd_value_type 5e38 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e38, SSL_CONF_cmd_value_type(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_clear_flags 5e3e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e3e, SSL_CONF_CTX_clear_flags(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_finish 5e44 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e44, SSL_CONF_CTX_finish(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_free 5e4a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e4a, SSL_CONF_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_new 5e50 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e50, SSL_CONF_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_set1_prefix 5e56 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e56, SSL_CONF_CTX_set1_prefix(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_set_flags 5e5c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e5c, SSL_CONF_CTX_set_flags(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_set_ssl 5e62 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e62, SSL_CONF_CTX_set_ssl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_set_ssl_ctx 5e68 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e68, SSL_CONF_CTX_set_ssl_ctx(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_add_client_custom_ext 5e6e a39210807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e6e, SSL_CTX_add_client_custom_ext(a0,d0,d1,d2,a1,d3,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_add_server_custom_ext 5e74 a39210807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e74, SSL_CTX_add_server_custom_ext(a0,d0,d1,d2,a1,d3,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get0_certificate 5e7a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e7a, SSL_CTX_get0_certificate(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get0_param 5e80 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e80, SSL_CTX_get0_param(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get0_privatekey 5e86 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e86, SSL_CTX_get0_privatekey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_ssl_method 5e8c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e8c, SSL_CTX_get_ssl_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_alpn_protos 5e92 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e92, SSL_CTX_set_alpn_protos(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_alpn_select_cb 5e98 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e98, SSL_CTX_set_alpn_select_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_cert_cb 5e9e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e9e, SSL_CTX_set_cert_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_serverinfo 5ea4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ea4, SSL_CTX_use_serverinfo(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_serverinfo_file 5eaa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5eaa, SSL_CTX_use_serverinfo_file(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_extension_supported 5eb0 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5eb0, SSL_extension_supported(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get0_alpn_selected 5eb6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5eb6, SSL_get0_alpn_selected(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get0_param 5ebc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ebc, SSL_get0_param(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_is_server 5ec2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ec2, SSL_is_server(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_alpn_protos 5ec8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ec8, SSL_set_alpn_protos(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_cert_cb 5ece a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ece, SSL_set_cert_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_check_chain 5ed4 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ed4, SSL_check_chain(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_shared_sigalgs 5eda 21ba90807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5eda, SSL_get_shared_sigalgs(a0,d0,a1,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_sigalgs 5ee0 21ba90807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ee0, SSL_get_sigalgs(a0,d0,a1,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_AMISSL_PRAGMAS_H */
