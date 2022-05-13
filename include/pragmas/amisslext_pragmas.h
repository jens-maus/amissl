/* Automatically generated header (sfdc 1.12)! Do not edit! */
#ifndef PRAGMAS_AMISSLEXT_PRAGMAS_H
#define PRAGMAS_AMISSLEXT_PRAGMAS_H

/*
**   $VER: amisslext_pragmas.h $Id$ $Id$
**
**   Direct ROM interface (pragma) definitions.
**
**   Copyright (c) 2001 Amiga, Inc.
**       All Rights Reserved
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
 #pragma libcall AmiSSLExtBase OSSL_trace_enabled 1e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1e, OSSL_trace_enabled(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_trace_begin 24 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x24, OSSL_trace_begin(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_trace_end 2a 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2a, OSSL_trace_end(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_load 30 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x30, OSSL_PROVIDER_load(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_try_load 36 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x36, OSSL_PROVIDER_try_load(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_unload 3c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3c, OSSL_PROVIDER_unload(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_add_builtin 42 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x42, OSSL_PROVIDER_add_builtin(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_gettable_params 48 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x48, OSSL_PROVIDER_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_get_params 4e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4e, OSSL_PROVIDER_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_OSSL_CRMF_ENCRYPTEDVALUE 54 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x54, d2i_OSSL_CRMF_ENCRYPTEDVALUE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_OSSL_CRMF_ENCRYPTEDVALUE 5a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5a, i2d_OSSL_CRMF_ENCRYPTEDVALUE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_ENCRYPTEDVALUE_free 60 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x60, OSSL_CRMF_ENCRYPTEDVALUE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_ENCRYPTEDVALUE_new 66 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x66, OSSL_CRMF_ENCRYPTEDVALUE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_ENCRYPTEDVALUE_it 6c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6c, OSSL_CRMF_ENCRYPTEDVALUE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_OSSL_CRMF_MSG 72 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x72, d2i_OSSL_CRMF_MSG(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_OSSL_CRMF_MSG 78 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x78, i2d_OSSL_CRMF_MSG(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_dup 7e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7e, OSSL_CRMF_MSG_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_free 84 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x84, OSSL_CRMF_MSG_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_new 8a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8a, OSSL_CRMF_MSG_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_it 90 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x90, OSSL_CRMF_MSG_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_OSSL_CRMF_PBMPARAMETER 96 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x96, d2i_OSSL_CRMF_PBMPARAMETER(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_OSSL_CRMF_PBMPARAMETER 9c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9c, i2d_OSSL_CRMF_PBMPARAMETER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_PBMPARAMETER_free a2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa2, OSSL_CRMF_PBMPARAMETER_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_PBMPARAMETER_new a8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa8, OSSL_CRMF_PBMPARAMETER_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_PBMPARAMETER_it ae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xae, OSSL_CRMF_PBMPARAMETER_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_OSSL_CRMF_CERTID b4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb4, d2i_OSSL_CRMF_CERTID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_OSSL_CRMF_CERTID ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xba, i2d_OSSL_CRMF_CERTID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTID_dup c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc0, OSSL_CRMF_CERTID_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTID_free c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc6, OSSL_CRMF_CERTID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTID_new cc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcc, OSSL_CRMF_CERTID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTID_it d2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd2, OSSL_CRMF_CERTID_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_OSSL_CRMF_PKIPUBLICATIONINFO d8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd8, d2i_OSSL_CRMF_PKIPUBLICATIONINFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_OSSL_CRMF_PKIPUBLICATIONINFO de 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xde, i2d_OSSL_CRMF_PKIPUBLICATIONINFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_PKIPUBLICATIONINFO_free e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe4, OSSL_CRMF_PKIPUBLICATIONINFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_PKIPUBLICATIONINFO_new ea 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xea, OSSL_CRMF_PKIPUBLICATIONINFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_PKIPUBLICATIONINFO_it f0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf0, OSSL_CRMF_PKIPUBLICATIONINFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_OSSL_CRMF_SINGLEPUBINFO f6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf6, d2i_OSSL_CRMF_SINGLEPUBINFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_OSSL_CRMF_SINGLEPUBINFO fc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfc, i2d_OSSL_CRMF_SINGLEPUBINFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_SINGLEPUBINFO_free 102 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x102, OSSL_CRMF_SINGLEPUBINFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_SINGLEPUBINFO_new 108 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x108, OSSL_CRMF_SINGLEPUBINFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_SINGLEPUBINFO_it 10e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10e, OSSL_CRMF_SINGLEPUBINFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_OSSL_CRMF_CERTTEMPLATE 114 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x114, d2i_OSSL_CRMF_CERTTEMPLATE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_OSSL_CRMF_CERTTEMPLATE 11a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11a, i2d_OSSL_CRMF_CERTTEMPLATE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTTEMPLATE_free 120 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x120, OSSL_CRMF_CERTTEMPLATE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTTEMPLATE_new 126 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x126, OSSL_CRMF_CERTTEMPLATE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTTEMPLATE_it 12c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12c, OSSL_CRMF_CERTTEMPLATE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_OSSL_CRMF_MSGS 132 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x132, d2i_OSSL_CRMF_MSGS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_OSSL_CRMF_MSGS 138 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x138, i2d_OSSL_CRMF_MSGS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSGS_free 13e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13e, OSSL_CRMF_MSGS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSGS_new 144 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x144, OSSL_CRMF_MSGS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSGS_it 14a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14a, OSSL_CRMF_MSGS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_pbmp_new 150 3210805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x150, OSSL_CRMF_pbmp_new(a0,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_pbm_new 156 43210ba9809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x156, OSSL_CRMF_pbm_new(a0,a1,a2,a3,d0,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_get0_regCtrl_regToken 15c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15c, OSSL_CRMF_MSG_get0_regCtrl_regToken(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_set1_regCtrl_regToken 162 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x162, OSSL_CRMF_MSG_set1_regCtrl_regToken(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_get0_regCtrl_authenticator 168 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x168, OSSL_CRMF_MSG_get0_regCtrl_authenticator(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_set1_regCtrl_authenticator 16e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x16e, OSSL_CRMF_MSG_set1_regCtrl_authenticator(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo 174 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x174, OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_set0_SinglePubInfo 17a 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x17a, OSSL_CRMF_MSG_set0_SinglePubInfo(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo 180 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x180, OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_set_PKIPublicationInfo_action 186 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x186, OSSL_CRMF_MSG_set_PKIPublicationInfo_action(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo 18c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x18c, OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey 192 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x192, OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey 198 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x198, OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_get0_regCtrl_oldCertID 19e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x19e, OSSL_CRMF_MSG_get0_regCtrl_oldCertID(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_set1_regCtrl_oldCertID 1a4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1a4, OSSL_CRMF_MSG_set1_regCtrl_oldCertID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTID_gen 1aa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1aa, OSSL_CRMF_CERTID_gen(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_get0_regInfo_utf8Pairs 1b0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1b0, OSSL_CRMF_MSG_get0_regInfo_utf8Pairs(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_set1_regInfo_utf8Pairs 1b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1b6, OSSL_CRMF_MSG_set1_regInfo_utf8Pairs(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_get0_regInfo_certReq 1bc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1bc, OSSL_CRMF_MSG_get0_regInfo_certReq(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_set1_regInfo_certReq 1c2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1c2, OSSL_CRMF_MSG_set1_regInfo_certReq(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_set0_validity 1c8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1c8, OSSL_CRMF_MSG_set0_validity(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_set_certReqId 1ce 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1ce, OSSL_CRMF_MSG_set_certReqId(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_get_certReqId 1d4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1d4, OSSL_CRMF_MSG_get_certReqId(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_set0_extensions 1da 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1da, OSSL_CRMF_MSG_set0_extensions(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_push0_extension 1e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1e0, OSSL_CRMF_MSG_push0_extension(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_create_popo 1e6 1ba98006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1e6, OSSL_CRMF_MSG_create_popo(d0,a0,a1,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSGS_verify_popo 1ec a910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1ec, OSSL_CRMF_MSGS_verify_popo(a0,d0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_MSG_get0_tmpl 1f2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1f2, OSSL_CRMF_MSG_get0_tmpl(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTTEMPLATE_get0_serialNumber 1f8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1f8, OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTTEMPLATE_get0_subject 1fe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1fe, OSSL_CRMF_CERTTEMPLATE_get0_subject(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTTEMPLATE_get0_issuer 204 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x204, OSSL_CRMF_CERTTEMPLATE_get0_issuer(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTTEMPLATE_get0_extensions 20a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x20a, OSSL_CRMF_CERTTEMPLATE_get0_extensions(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTTEMPLATE_fill 210 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x210, OSSL_CRMF_CERTTEMPLATE_fill(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert 216 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x216, OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_locate 21c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x21c, OSSL_PARAM_locate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_int_amiga 222 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x222, OSSL_PARAM_construct_int_amiga(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_uint_amiga 228 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x228, OSSL_PARAM_construct_uint_amiga(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_long_amiga 22e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x22e, OSSL_PARAM_construct_long_amiga(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_ulong_amiga 234 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x234, OSSL_PARAM_construct_ulong_amiga(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_int32_amiga 23a ba903
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x23a, OSSL_PARAM_construct_int32_amiga(a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_uint32_amiga 240 ba903
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x240, OSSL_PARAM_construct_uint32_amiga(a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_int64_amiga 246 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x246, OSSL_PARAM_construct_int64_amiga(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_uint64_amiga 24c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x24c, OSSL_PARAM_construct_uint64_amiga(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_size_t_amiga 252 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x252, OSSL_PARAM_construct_size_t_amiga(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_BN_amiga 258 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x258, OSSL_PARAM_construct_BN_amiga(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_double_amiga 25e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x25e, OSSL_PARAM_construct_double_amiga(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_utf8_string_amiga 264 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x264, OSSL_PARAM_construct_utf8_string_amiga(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_utf8_ptr_amiga 26a 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x26a, OSSL_PARAM_construct_utf8_ptr_amiga(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_octet_string_amiga 270 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x270, OSSL_PARAM_construct_octet_string_amiga(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_octet_ptr_amiga 276 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x276, OSSL_PARAM_construct_octet_ptr_amiga(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_int 27c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x27c, OSSL_PARAM_get_int(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_uint 282 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x282, OSSL_PARAM_get_uint(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_long 288 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x288, OSSL_PARAM_get_long(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_ulong 28e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x28e, OSSL_PARAM_get_ulong(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_int32 294 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x294, OSSL_PARAM_get_int32(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_uint32 29a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x29a, OSSL_PARAM_get_uint32(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_int64 2a0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2a0, OSSL_PARAM_get_int64(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_uint64 2a6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2a6, OSSL_PARAM_get_uint64(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_size_t 2ac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2ac, OSSL_PARAM_get_size_t(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_int 2b2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2b2, OSSL_PARAM_set_int(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_uint 2b8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2b8, OSSL_PARAM_set_uint(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_long 2be 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2be, OSSL_PARAM_set_long(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_ulong 2c4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2c4, OSSL_PARAM_set_ulong(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_int32 2ca 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2ca, OSSL_PARAM_set_int32(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_uint32 2d0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2d0, OSSL_PARAM_set_uint32(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_int64 2d6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2d6, OSSL_PARAM_set_int64(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_uint64 2dc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2dc, OSSL_PARAM_set_uint64(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_size_t 2e2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2e2, OSSL_PARAM_set_size_t(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_double 2e8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2e8, OSSL_PARAM_get_double(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_double 2ee 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2ee, OSSL_PARAM_set_double(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_BN 2f4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2f4, OSSL_PARAM_get_BN(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_BN 2fa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x2fa, OSSL_PARAM_set_BN(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_utf8_string 300 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x300, OSSL_PARAM_get_utf8_string(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_utf8_string 306 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x306, OSSL_PARAM_set_utf8_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_octet_string 30c a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x30c, OSSL_PARAM_get_octet_string(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_octet_string 312 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x312, OSSL_PARAM_set_octet_string(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_utf8_ptr 318 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x318, OSSL_PARAM_get_utf8_ptr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_utf8_ptr 31e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x31e, OSSL_PARAM_set_utf8_ptr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_octet_ptr 324 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x324, OSSL_PARAM_get_octet_ptr(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_octet_ptr 32a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x32a, OSSL_PARAM_set_octet_ptr(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_set0_distinguishing_id 330 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x330, X509_set0_distinguishing_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_get0_distinguishing_id 336 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x336, X509_get0_distinguishing_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_up_ref 33c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x33c, EVP_MD_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_fetch 342 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x342, EVP_MD_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_set_default_properties 348 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x348, EVP_set_default_properties(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_end_amiga 34e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x34e, OSSL_PARAM_construct_end_amiga(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EC_GROUP_check_named_curve 354 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x354, EC_GROUP_check_named_curve(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_up_ref 35a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x35a, EVP_CIPHER_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_fetch 360 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x360, EVP_CIPHER_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_get_mode 366 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x366, EVP_CIPHER_get_mode(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OPENSSL_info 36c 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x36c, OPENSSL_info(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_CTX_new 372 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x372, EVP_KDF_CTX_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_CTX_kdf 378 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x378, EVP_KDF_CTX_kdf(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_KeyParams 37e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x37e, i2d_KeyParams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_KeyParams 384 198004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x384, d2i_KeyParams(d0,a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_KeyParams_bio 38a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x38a, i2d_KeyParams_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_KeyParams_bio 390 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x390, d2i_KeyParams_bio(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_PKISTATUS_it 396 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x396, OSSL_CMP_PKISTATUS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_OSSL_CMP_PKIHEADER 39c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x39c, d2i_OSSL_CMP_PKIHEADER(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_OSSL_CMP_PKIHEADER 3a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3a2, i2d_OSSL_CMP_PKIHEADER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_PKIHEADER_free 3a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3a8, OSSL_CMP_PKIHEADER_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_PKIHEADER_new 3ae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3ae, OSSL_CMP_PKIHEADER_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_PKIHEADER_it 3b4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3b4, OSSL_CMP_PKIHEADER_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_OSSL_CMP_MSG 3ba 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3ba, d2i_OSSL_CMP_MSG(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_OSSL_CMP_MSG 3c0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3c0, i2d_OSSL_CMP_MSG(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_MSG_it 3c6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3c6, OSSL_CMP_MSG_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_ITAV_create 3cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3cc, OSSL_CMP_ITAV_create(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_ITAV_set0 3d2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3d2, OSSL_CMP_ITAV_set0(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_ITAV_get0_type 3d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3d8, OSSL_CMP_ITAV_get0_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_ITAV_get0_value 3de 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3de, OSSL_CMP_ITAV_get0_value(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_ITAV_push0_stack_item 3e4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3e4, OSSL_CMP_ITAV_push0_stack_item(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_ITAV_free 3ea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3ea, OSSL_CMP_ITAV_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_MSG_free 3f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3f0, OSSL_CMP_MSG_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_CTX_set_params 3f6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3f6, EVP_MD_CTX_set_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_CTX_get_params 3fc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x3fc, EVP_MD_CTX_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BN_CTX_new_ex 402 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x402, BN_CTX_new_ex(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BN_CTX_secure_new_ex 408 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x408, BN_CTX_secure_new_ex(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OPENSSL_thread_stop_ex 40e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x40e, OPENSSL_thread_stop_ex(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_locate_const 414 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x414, OSSL_PARAM_locate_const(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_REQ_set0_distinguishing_id 41a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x41a, X509_REQ_set0_distinguishing_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_REQ_get0_distinguishing_id 420 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x420, X509_REQ_get0_distinguishing_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BN_rand_ex 426 93210806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x426, BN_rand_ex(a0,d0,d1,d2,d3,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BN_priv_rand_ex 42c 93210806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x42c, BN_priv_rand_ex(a0,d0,d1,d2,d3,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BN_rand_range_ex 432 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x432, BN_rand_range_ex(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BN_priv_rand_range_ex 438 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x438, BN_priv_rand_range_ex(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BN_generate_prime_ex2 43e 2ba910807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x43e, BN_generate_prime_ex2(a0,d0,d1,a1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYEXCH_free 444 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x444, EVP_KEYEXCH_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYEXCH_up_ref 44a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x44a, EVP_KEYEXCH_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYEXCH_fetch 450 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x450, EVP_KEYEXCH_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dh_pad 456 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x456, EVP_PKEY_CTX_set_dh_pad(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_params 45c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x45c, EVP_PKEY_CTX_set_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYMGMT_fetch 462 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x462, EVP_KEYMGMT_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYMGMT_up_ref 468 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x468, EVP_KEYMGMT_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYMGMT_free 46e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x46e, EVP_KEYMGMT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYMGMT_get0_provider 474 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x474, EVP_KEYMGMT_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_PUBKEY_dup 47a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x47a, X509_PUBKEY_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_get0_name 480 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x480, EVP_MD_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_get0_name 486 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x486, EVP_CIPHER_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_get0_provider 48c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x48c, EVP_MD_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_get0_provider 492 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x492, EVP_CIPHER_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_get0_name 498 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x498, OSSL_PROVIDER_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_do_all_provided 49e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x49e, EVP_CIPHER_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_do_all_provided 4a4 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4a4, EVP_MD_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYEXCH_get0_provider 4aa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4aa, EVP_KEYEXCH_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_available 4b0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4b0, OSSL_PROVIDER_available(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ERR_new 4b6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4b6, ERR_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ERR_set_debug 4bc 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4bc, ERR_set_debug(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ERR_vset_error 4c2 981004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4c2, ERR_vset_error(d0,d1,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLExtBase ERR_set_error 4c2 981004
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLExtBase, 0x4c2, ERR_set_error(d0,d1,a0,a1))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_self_signed 4c8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4c8, X509_self_signed(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OPENSSL_hexstr2buf_ex 4ce 1a90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4ce, OPENSSL_hexstr2buf_ex(a0,d0,a1,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OPENSSL_buf2hexstr_ex 4d4 21a90806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4d4, OPENSSL_buf2hexstr_ex(a0,d0,a1,a2,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_allocate_from_text 4da 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4da, OSSL_PARAM_allocate_from_text(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_gettable_params 4e0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4e0, EVP_MD_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_CTX_settable_params 4e6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4e6, EVP_MD_CTX_settable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_CTX_gettable_params 4ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4ec, EVP_MD_CTX_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_get_params 4f2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4f2, EVP_CIPHER_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_CTX_set_params 4f8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4f8, EVP_CIPHER_CTX_set_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_CTX_get_params 4fe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x4fe, EVP_CIPHER_CTX_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_gettable_params 504 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x504, EVP_CIPHER_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_settable_ctx_params 50a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x50a, EVP_CIPHER_settable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_gettable_ctx_params 510 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x510, EVP_CIPHER_gettable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_get_params 516 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x516, EVP_MD_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_fetch 51c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x51c, EVP_MAC_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_settable_ctx_params 522 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x522, EVP_MAC_settable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_CTX_set_params 528 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x528, EVP_MAC_CTX_set_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_CTX_get_params 52e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x52e, EVP_MAC_CTX_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_gettable_ctx_params 534 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x534, EVP_MAC_gettable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_free 53a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x53a, EVP_MAC_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_up_ref 540 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x540, EVP_MAC_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_get_params 546 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x546, EVP_MAC_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_gettable_params 54c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x54c, EVP_MAC_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_get0_provider 552 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x552, EVP_MAC_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_do_all_provided 558 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x558, EVP_MAC_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_get0_name 55e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x55e, EVP_MAC_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_free 564 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x564, EVP_MD_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_free 56a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x56a, EVP_CIPHER_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_up_ref 570 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x570, EVP_KDF_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_free 576 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x576, EVP_KDF_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_fetch 57c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x57c, EVP_KDF_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_CTX_dup 582 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x582, EVP_KDF_CTX_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_get0_provider 588 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x588, EVP_KDF_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_get_params 58e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x58e, EVP_KDF_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_CTX_get_params 594 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x594, EVP_KDF_CTX_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_CTX_set_params 59a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x59a, EVP_KDF_CTX_set_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_gettable_params 5a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5a0, EVP_KDF_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_gettable_ctx_params 5a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5a6, EVP_KDF_gettable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_settable_ctx_params 5ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5ac, EVP_KDF_settable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_do_all_provided 5b2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5b2, EVP_KDF_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_SIGNATURE_free 5b8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5b8, EVP_SIGNATURE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_SIGNATURE_up_ref 5be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5be, EVP_SIGNATURE_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_SIGNATURE_get0_provider 5c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5c4, EVP_SIGNATURE_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_SIGNATURE_fetch 5ca a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5ca, EVP_SIGNATURE_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_signature_md 5d0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5d0, EVP_PKEY_CTX_set_signature_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_signature_md 5d6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5d6, EVP_PKEY_CTX_get_signature_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_params 5dc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5dc, EVP_PKEY_CTX_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_gettable_params 5e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5e2, EVP_PKEY_CTX_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_settable_params 5e8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5e8, EVP_PKEY_CTX_settable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_CTX_get_tag_length 5ee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5ee, EVP_CIPHER_CTX_get_tag_length(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ERR_get_error_all 5f4 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5f4, ERR_get_error_all(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ERR_peek_error_func 5fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x5fa, ERR_peek_error_func(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ERR_peek_error_data 600 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x600, ERR_peek_error_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ERR_peek_error_all 606 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x606, ERR_peek_error_all(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ERR_peek_last_error_func 60c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x60c, ERR_peek_last_error_func(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ERR_peek_last_error_data 612 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x612, ERR_peek_last_error_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ERR_peek_last_error_all 618 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x618, ERR_peek_last_error_all(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_is_a 61e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x61e, EVP_CIPHER_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_is_a 624 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x624, EVP_MAC_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_settable_ctx_params 62a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x62a, EVP_MD_settable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_gettable_ctx_params 630 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x630, EVP_MD_gettable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_new 636 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x636, OSSL_CMP_CTX_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_free 63c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x63c, OSSL_CMP_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_reinit 642 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x642, OSSL_CMP_CTX_reinit(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set_option 648 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x648, OSSL_CMP_CTX_set_option(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get_option 64e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x64e, OSSL_CMP_CTX_get_option(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set_log_cb 654 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x654, OSSL_CMP_CTX_set_log_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_print_errors 65a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x65a, OSSL_CMP_CTX_print_errors(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_serverPath 660 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x660, OSSL_CMP_CTX_set1_serverPath(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_server 666 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x666, OSSL_CMP_CTX_set1_server(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set_serverPort 66c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x66c, OSSL_CMP_CTX_set_serverPort(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_proxy 672 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x672, OSSL_CMP_CTX_set1_proxy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_no_proxy 678 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x678, OSSL_CMP_CTX_set1_no_proxy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set_http_cb 67e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x67e, OSSL_CMP_CTX_set_http_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set_http_cb_arg 684 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x684, OSSL_CMP_CTX_set_http_cb_arg(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get_http_cb_arg 68a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x68a, OSSL_CMP_CTX_get_http_cb_arg(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set_transfer_cb 690 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x690, OSSL_CMP_CTX_set_transfer_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set_transfer_cb_arg 696 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x696, OSSL_CMP_CTX_set_transfer_cb_arg(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get_transfer_cb_arg 69c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x69c, OSSL_CMP_CTX_get_transfer_cb_arg(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_srvCert 6a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6a2, OSSL_CMP_CTX_set1_srvCert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_expected_sender 6a8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6a8, OSSL_CMP_CTX_set1_expected_sender(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set0_trustedStore 6ae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6ae, OSSL_CMP_CTX_set0_trustedStore(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get0_trustedStore 6b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6b4, OSSL_CMP_CTX_get0_trustedStore(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_untrusted 6ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6ba, OSSL_CMP_CTX_set1_untrusted(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get0_untrusted 6c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6c0, OSSL_CMP_CTX_get0_untrusted(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_cert 6c6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6c6, OSSL_CMP_CTX_set1_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_pkey 6cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6cc, OSSL_CMP_CTX_set1_pkey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_build_cert_chain 6d2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6d2, OSSL_CMP_CTX_build_cert_chain(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_referenceValue 6d8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6d8, OSSL_CMP_CTX_set1_referenceValue(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_secretValue 6de 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6de, OSSL_CMP_CTX_set1_secretValue(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_recipient 6e4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6e4, OSSL_CMP_CTX_set1_recipient(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_push0_geninfo_ITAV 6ea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6ea, OSSL_CMP_CTX_push0_geninfo_ITAV(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_extraCertsOut 6f0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6f0, OSSL_CMP_CTX_set1_extraCertsOut(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set0_newPkey 6f6 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6f6, OSSL_CMP_CTX_set0_newPkey(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get0_newPkey 6fc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x6fc, OSSL_CMP_CTX_get0_newPkey(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_issuer 702 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x702, OSSL_CMP_CTX_set1_issuer(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_subjectName 708 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x708, OSSL_CMP_CTX_set1_subjectName(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_push1_subjectAltName 70e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x70e, OSSL_CMP_CTX_push1_subjectAltName(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set0_reqExtensions 714 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x714, OSSL_CMP_CTX_set0_reqExtensions(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_reqExtensions_have_SAN 71a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x71a, OSSL_CMP_CTX_reqExtensions_have_SAN(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_push0_policy 720 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x720, OSSL_CMP_CTX_push0_policy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_oldCert 726 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x726, OSSL_CMP_CTX_set1_oldCert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_p10CSR 72c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x72c, OSSL_CMP_CTX_set1_p10CSR(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_push0_genm_ITAV 732 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x732, OSSL_CMP_CTX_push0_genm_ITAV(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set_certConf_cb 738 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x738, OSSL_CMP_CTX_set_certConf_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set_certConf_cb_arg 73e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x73e, OSSL_CMP_CTX_set_certConf_cb_arg(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get_certConf_cb_arg 744 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x744, OSSL_CMP_CTX_get_certConf_cb_arg(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get_status 74a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x74a, OSSL_CMP_CTX_get_status(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get0_statusString 750 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x750, OSSL_CMP_CTX_get0_statusString(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get_failInfoCode 756 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x756, OSSL_CMP_CTX_get_failInfoCode(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get0_newCert 75c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x75c, OSSL_CMP_CTX_get0_newCert(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get1_newChain 762 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x762, OSSL_CMP_CTX_get1_newChain(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get1_caPubs 768 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x768, OSSL_CMP_CTX_get1_caPubs(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_get1_extraCertsIn 76e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x76e, OSSL_CMP_CTX_get1_extraCertsIn(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_transactionID 774 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x774, OSSL_CMP_CTX_set1_transactionID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_set1_senderNonce 77a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x77a, OSSL_CMP_CTX_set1_senderNonce(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_log_open 780 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x780, OSSL_CMP_log_open())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_log_close 786 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x786, OSSL_CMP_log_close())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_print_to_bio 78c b10a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x78c, OSSL_CMP_print_to_bio(a0,a1,a2,d0,d1,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_print_errors_cb 792 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x792, OSSL_CMP_print_errors_cb(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTID_get0_issuer 798 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x798, OSSL_CRMF_CERTID_get0_issuer(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CRMF_CERTID_get0_serialNumber 79e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x79e, OSSL_CRMF_CERTID_get0_serialNumber(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_DigestSignUpdate 7a4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7a4, EVP_DigestSignUpdate(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_DigestVerifyUpdate 7aa 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7aa, EVP_DigestVerifyUpdate(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BN_check_prime 7b0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7b0, BN_check_prime(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYMGMT_is_a 7b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7b6, EVP_KEYMGMT_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYMGMT_do_all_provided 7bc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7bc, EVP_KEYMGMT_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYEXCH_is_a 7c2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7c2, EVP_KEYEXCH_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYEXCH_do_all_provided 7c8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7c8, EVP_KEYEXCH_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_is_a 7ce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7ce, EVP_KDF_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_is_a 7d4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7d4, EVP_MD_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_SIGNATURE_is_a 7da 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7da, EVP_SIGNATURE_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_SIGNATURE_do_all_provided 7e0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7e0, EVP_SIGNATURE_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_names_do_all 7e6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7e6, EVP_MD_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_names_do_all 7ec a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7ec, EVP_CIPHER_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_names_do_all 7f2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7f2, EVP_MAC_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYMGMT_names_do_all 7f8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7f8, EVP_KEYMGMT_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYEXCH_names_do_all 7fe a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x7fe, EVP_KEYEXCH_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_names_do_all 804 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x804, EVP_KDF_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_SIGNATURE_names_do_all 80a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x80a, EVP_SIGNATURE_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_snprint_PKIStatus 810 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x810, OSSL_CMP_CTX_snprint_PKIStatus(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_HDR_get0_transactionID 816 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x816, OSSL_CMP_HDR_get0_transactionID(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_HDR_get0_recipNonce 81c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x81c, OSSL_CMP_HDR_get0_recipNonce(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_LOOKUP_store 822 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x822, X509_LOOKUP_store())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_add_cert 828 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x828, X509_add_cert(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_add_certs 82e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x82e, X509_add_certs(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_STORE_load_file 834 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x834, X509_STORE_load_file(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_STORE_load_path 83a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x83a, X509_STORE_load_path(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_STORE_load_store 840 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x840, X509_STORE_load_store(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_fromdata 846 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x846, EVP_PKEY_fromdata(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_ASYM_CIPHER_free 84c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x84c, EVP_ASYM_CIPHER_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_ASYM_CIPHER_up_ref 852 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x852, EVP_ASYM_CIPHER_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_ASYM_CIPHER_get0_provider 858 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x858, EVP_ASYM_CIPHER_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_ASYM_CIPHER_fetch 85e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x85e, EVP_ASYM_CIPHER_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_ASYM_CIPHER_is_a 864 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x864, EVP_ASYM_CIPHER_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_ASYM_CIPHER_do_all_provided 86a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x86a, EVP_ASYM_CIPHER_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_ASYM_CIPHER_names_do_all 870 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x870, EVP_ASYM_CIPHER_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_padding 876 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x876, EVP_PKEY_CTX_set_rsa_padding(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_rsa_padding 87c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x87c, EVP_PKEY_CTX_get_rsa_padding(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_mgf1_md 882 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x882, EVP_PKEY_CTX_set_rsa_mgf1_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_mgf1_md_name 888 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x888, EVP_PKEY_CTX_set_rsa_mgf1_md_name(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_rsa_mgf1_md 88e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x88e, EVP_PKEY_CTX_get_rsa_mgf1_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_oaep_md 894 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x894, EVP_PKEY_CTX_set_rsa_oaep_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_oaep_md_name 89a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x89a, EVP_PKEY_CTX_set_rsa_oaep_md_name(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_rsa_oaep_md 8a0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8a0, EVP_PKEY_CTX_get_rsa_oaep_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set0_rsa_oaep_label 8a6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8a6, EVP_PKEY_CTX_set0_rsa_oaep_label(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get0_rsa_oaep_label 8ac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8ac, EVP_PKEY_CTX_get0_rsa_oaep_label(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_rsa_mgf1_md_name 8b2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8b2, EVP_PKEY_CTX_get_rsa_mgf1_md_name(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_rsa_oaep_md_name 8b8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8b8, EVP_PKEY_CTX_get_rsa_oaep_md_name(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_up_ref 8be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8be, OSSL_ENCODER_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_free 8c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8c4, OSSL_ENCODER_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_fetch 8ca a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8ca, OSSL_ENCODER_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_is_a 8d0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8d0, OSSL_ENCODER_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_get0_provider 8d6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8d6, OSSL_ENCODER_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_do_all_provided 8dc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8dc, OSSL_ENCODER_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_names_do_all 8e2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8e2, OSSL_ENCODER_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_settable_ctx_params 8e8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8e8, OSSL_ENCODER_settable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_new 8ee 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8ee, OSSL_ENCODER_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_set_params 8f4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8f4, OSSL_ENCODER_CTX_set_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_free 8fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x8fa, OSSL_ENCODER_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_get0_properties 900 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x900, OSSL_ENCODER_get0_properties(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_to_bio 906 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x906, OSSL_ENCODER_to_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_new_for_pkey 90c ba90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x90c, OSSL_ENCODER_CTX_new_for_pkey(a0,d0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_set_cipher 912 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x912, OSSL_ENCODER_CTX_set_cipher(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_set_passphrase 918 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x918, OSSL_ENCODER_CTX_set_passphrase(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_set_pem_password_cb 91e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x91e, OSSL_ENCODER_CTX_set_pem_password_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_set_passphrase_ui 924 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x924, OSSL_ENCODER_CTX_set_passphrase_ui(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PEM_read_bio_X509_PUBKEY 92a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x92a, PEM_read_bio_X509_PUBKEY(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PEM_write_bio_X509_PUBKEY 930 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x930, PEM_write_bio_X509_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_X509_PUBKEY_bio 936 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x936, d2i_X509_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_X509_PUBKEY_bio 93c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x93c, i2d_X509_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_cmp_timeframe 942 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x942, X509_cmp_timeframe(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_MSG_get0_header 948 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x948, OSSL_CMP_MSG_get0_header(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_MSG_get_bodytype 94e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x94e, OSSL_CMP_MSG_get_bodytype(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_MSG_update_transactionID 954 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x954, OSSL_CMP_MSG_update_transactionID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_setup_CRM 95a 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x95a, OSSL_CMP_CTX_setup_CRM(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BIO_f_prefix 960 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x960, BIO_f_prefix())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_new_from_name 966 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x966, EVP_PKEY_CTX_new_from_name(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_new_from_pkey 96c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x96c, EVP_PKEY_CTX_new_from_pkey(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_SELF_TEST_set_callback 972 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x972, OSSL_SELF_TEST_set_callback(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_SELF_TEST_get_callback 978 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x978, OSSL_SELF_TEST_get_callback(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ASN1_TIME_dup 97e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x97e, ASN1_TIME_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ASN1_UTCTIME_dup 984 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x984, ASN1_UTCTIME_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ASN1_GENERALIZEDTIME_dup 98a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x98a, ASN1_GENERALIZEDTIME_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase RAND_priv_bytes_ex 990 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x990, RAND_priv_bytes_ex(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase RAND_bytes_ex 996 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x996, RAND_bytes_ex(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get_default_digest_name 99c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x99c, EVP_PKEY_get_default_digest_name(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_decrypt_set1_pkey_and_peer 9a2 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9a2, CMS_decrypt_set1_pkey_and_peer(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_add1_recipient 9a8 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9a8, CMS_add1_recipient(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_RecipientInfo_kari_set0_pkey_and_peer 9ae a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9ae, CMS_RecipientInfo_kari_set0_pkey_and_peer(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS8_pkey_add1_attr 9b4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9b4, PKCS8_pkey_add1_attr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS8_pkey_add1_attr_by_OBJ 9ba 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9ba, PKCS8_pkey_add1_attr_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_private_check 9c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9c0, EVP_PKEY_private_check(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_pairwise_check 9c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9c6, EVP_PKEY_pairwise_check(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ASN1_item_verify_ctx 9cc 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9cc, ASN1_item_verify_ctx(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ASN1_item_sign_ex 9d2 543210ba98010
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9d2, ASN1_item_sign_ex(a0,a1,a2,a3,d0,d1,d2,d3,d4,d5))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ASN1_item_verify_ex 9d8 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9d8, ASN1_item_verify_ex(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BIO_socket_wait 9de 21003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9de, BIO_socket_wait(d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BIO_wait 9e4 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9e4, BIO_wait(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BIO_do_connect_retry 9ea 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9ea, BIO_do_connect_retry(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_parse_url 9f0 43210ba9809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9f0, OSSL_parse_url(a0,a1,a2,a3,d0,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_adapt_proxy 9f6 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9f6, OSSL_HTTP_adapt_proxy(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_REQ_CTX_get_resp_len 9fc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x9fc, OSSL_HTTP_REQ_CTX_get_resp_len(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_REQ_CTX_set_expected a02 2109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa02, OSSL_HTTP_REQ_CTX_set_expected(a0,a1,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_is_alive a08 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa08, OSSL_HTTP_is_alive(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_open a0e 6543210ba98011
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa0e, OSSL_HTTP_open(a0,a1,a2,a3,d0,d1,d2,d3,d4,d5,d6))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_proxy_connect a14 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa14, OSSL_HTTP_proxy_connect(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_set1_request a1a 543210ba98010
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa1a, OSSL_HTTP_set1_request(a0,a1,a2,a3,d0,d1,d2,d3,d4,d5))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_exchange a20 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa20, OSSL_HTTP_exchange(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_get_amiga_1 a26 0b21a9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa26, OSSL_HTTP_get_amiga_1(a0,a1,a2,d1,d2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_get_amiga_2 a2c 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa2c, OSSL_HTTP_get_amiga_2(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_transfer_amiga_1 a32 0b654321a98011
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa32, OSSL_HTTP_transfer_amiga_1(a0,a1,a2,d1,d2,d3,d4,d5,d6,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_transfer_amiga_2 a38 54321ba908010
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa38, OSSL_HTTP_transfer_amiga_2(a0,d0,a1,a2,a3,d1,d2,d3,d4,d5))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_HTTP_close a3e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa3e, OSSL_HTTP_close(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ASN1_item_i2d_mem_bio a44 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa44, ASN1_item_i2d_mem_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ERR_add_error_txt a4a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa4a, ERR_add_error_txt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ERR_add_error_mem_bio a50 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa50, ERR_add_error_mem_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_STORE_CTX_print_verify_cb a56 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa56, X509_STORE_CTX_print_verify_cb(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_STORE_get1_all_certs a5c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa5c, X509_STORE_get1_all_certs(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_validate_msg a62 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa62, OSSL_CMP_validate_msg(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_validate_cert_path a68 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa68, OSSL_CMP_validate_cert_path(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_ecdh_cofactor_mode a6e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa6e, EVP_PKEY_CTX_set_ecdh_cofactor_mode(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_ecdh_cofactor_mode a74 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa74, EVP_PKEY_CTX_get_ecdh_cofactor_mode(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_ecdh_kdf_type a7a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa7a, EVP_PKEY_CTX_set_ecdh_kdf_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_ecdh_kdf_type a80 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa80, EVP_PKEY_CTX_get_ecdh_kdf_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_ecdh_kdf_md a86 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa86, EVP_PKEY_CTX_set_ecdh_kdf_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_ecdh_kdf_md a8c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa8c, EVP_PKEY_CTX_get_ecdh_kdf_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_ecdh_kdf_outlen a92 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa92, EVP_PKEY_CTX_set_ecdh_kdf_outlen(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_ecdh_kdf_outlen a98 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa98, EVP_PKEY_CTX_get_ecdh_kdf_outlen(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set0_ecdh_kdf_ukm a9e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xa9e, EVP_PKEY_CTX_set0_ecdh_kdf_ukm(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get0_ecdh_kdf_ukm aa4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xaa4, EVP_PKEY_CTX_get0_ecdh_kdf_ukm(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_pss_saltlen aaa 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xaaa, EVP_PKEY_CTX_set_rsa_pss_saltlen(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_rsa_pss_saltlen ab0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xab0, EVP_PKEY_CTX_get_rsa_pss_saltlen(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_ISSUER_SIGN_TOOL ab6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xab6, d2i_ISSUER_SIGN_TOOL(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_ISSUER_SIGN_TOOL abc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xabc, i2d_ISSUER_SIGN_TOOL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ISSUER_SIGN_TOOL_free ac2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xac2, ISSUER_SIGN_TOOL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ISSUER_SIGN_TOOL_new ac8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xac8, ISSUER_SIGN_TOOL_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ISSUER_SIGN_TOOL_it ace 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xace, ISSUER_SIGN_TOOL_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_SELF_TEST_new ad4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xad4, OSSL_SELF_TEST_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_SELF_TEST_free ada 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xada, OSSL_SELF_TEST_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_SELF_TEST_onbegin ae0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xae0, OSSL_SELF_TEST_onbegin(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_SELF_TEST_oncorrupt_byte ae6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xae6, OSSL_SELF_TEST_oncorrupt_byte(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_SELF_TEST_onend aec 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xaec, OSSL_SELF_TEST_onend(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_set_default_search_path af2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xaf2, OSSL_PROVIDER_set_default_search_path(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_digest_sig af8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xaf8, X509_digest_sig(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_MSG_dup afe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xafe, OSSL_CMP_MSG_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_ITAV_dup b04 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb04, OSSL_CMP_ITAV_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_OSSL_CMP_PKISI b0a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb0a, d2i_OSSL_CMP_PKISI(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_OSSL_CMP_PKISI b10 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb10, i2d_OSSL_CMP_PKISI(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_PKISI_free b16 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb16, OSSL_CMP_PKISI_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_PKISI_new b1c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb1c, OSSL_CMP_PKISI_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_PKISI_it b22 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb22, OSSL_CMP_PKISI_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_PKISI_dup b28 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb28, OSSL_CMP_PKISI_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_snprint_PKIStatusInfo b2e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb2e, OSSL_CMP_snprint_PKIStatusInfo(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_STATUSINFO_new b34 81003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb34, OSSL_CMP_STATUSINFO_new(d0,d1,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_OSSL_CMP_MSG_bio b3a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb3a, d2i_OSSL_CMP_MSG_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2d_OSSL_CMP_MSG_bio b40 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb40, i2d_OSSL_CMP_MSG_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_SRV_process_request b46 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb46, OSSL_CMP_SRV_process_request(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_CTX_server_perform b4c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb4c, OSSL_CMP_CTX_server_perform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_SRV_CTX_new b52 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb52, OSSL_CMP_SRV_CTX_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_SRV_CTX_free b58 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb58, OSSL_CMP_SRV_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_SRV_CTX_init b5e 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb5e, OSSL_CMP_SRV_CTX_init(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_SRV_CTX_get0_cmp_ctx b64 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb64, OSSL_CMP_SRV_CTX_get0_cmp_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_SRV_CTX_get0_custom_ctx b6a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb6a, OSSL_CMP_SRV_CTX_get0_custom_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_SRV_CTX_set_send_unprotected_errors b70 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb70, OSSL_CMP_SRV_CTX_set_send_unprotected_errors(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_SRV_CTX_set_accept_unprotected b76 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb76, OSSL_CMP_SRV_CTX_set_accept_unprotected(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_SRV_CTX_set_accept_raverified b7c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb7c, OSSL_CMP_SRV_CTX_set_accept_raverified(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_SRV_CTX_set_grant_implicit_confirm b82 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb82, OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_exec_certreq b88 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb88, OSSL_CMP_exec_certreq(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_try_certreq b8e a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb8e, OSSL_CMP_try_certreq(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_certConf_cb b94 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb94, OSSL_CMP_certConf_cb(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_exec_RR_ses b9a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xb9a, OSSL_CMP_exec_RR_ses(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_exec_GENM_ses ba0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xba0, OSSL_CMP_exec_GENM_ses(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_MSG_http_perform ba6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xba6, OSSL_CMP_MSG_http_perform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_MSG_read bac a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbac, OSSL_CMP_MSG_read(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_CMP_MSG_write bb2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbb2, OSSL_CMP_MSG_write(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_Q_vkeygen bb8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbb8, EVP_PKEY_Q_vkeygen(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLExtBase EVP_PKEY_Q_keygen bb8 ba9804
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLExtBase, 0xbb8, EVP_PKEY_Q_keygen(a0,a1,a2,a3))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_generate bbe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbbe, EVP_PKEY_generate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_keygen_bits bc4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbc4, EVP_PKEY_CTX_set_rsa_keygen_bits(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_keygen_pubexp bca 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbca, EVP_PKEY_CTX_set_rsa_keygen_pubexp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set1_rsa_keygen_pubexp bd0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbd0, EVP_PKEY_CTX_set1_rsa_keygen_pubexp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_keygen_primes bd6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbd6, EVP_PKEY_CTX_set_rsa_keygen_primes(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase NCONF_new_ex bdc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbdc, NCONF_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CONF_modules_load_file_ex be2 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbe2, CONF_modules_load_file_ex(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_LIB_CTX_load_config be8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbe8, OSSL_LIB_CTX_load_config(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_to_param bee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbee, OSSL_PARAM_BLD_to_param(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_int bf4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbf4, OSSL_PARAM_BLD_push_int(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_uint bfa 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xbfa, OSSL_PARAM_BLD_push_uint(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_long c00 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc00, OSSL_PARAM_BLD_push_long(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_ulong c06 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc06, OSSL_PARAM_BLD_push_ulong(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_int32 c0c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc0c, OSSL_PARAM_BLD_push_int32(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_uint32 c12 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc12, OSSL_PARAM_BLD_push_uint32(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_int64 c18 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc18, OSSL_PARAM_BLD_push_int64(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_uint64 c1e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc1e, OSSL_PARAM_BLD_push_uint64(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_size_t c24 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc24, OSSL_PARAM_BLD_push_size_t(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_double c2a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc2a, OSSL_PARAM_BLD_push_double(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_BN c30 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc30, OSSL_PARAM_BLD_push_BN(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_BN_pad c36 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc36, OSSL_PARAM_BLD_push_BN_pad(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_utf8_string c3c 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc3c, OSSL_PARAM_BLD_push_utf8_string(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_utf8_ptr c42 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc42, OSSL_PARAM_BLD_push_utf8_ptr(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_octet_string c48 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc48, OSSL_PARAM_BLD_push_octet_string(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_octet_ptr c4e 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc4e, OSSL_PARAM_BLD_push_octet_ptr(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_new c54 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc54, OSSL_PARAM_BLD_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_free c5a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc5a, OSSL_PARAM_BLD_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_set_type_by_keymgmt c60 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc60, EVP_PKEY_set_type_by_keymgmt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OCSP_RESPID_set_by_key_ex c66 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc66, OCSP_RESPID_set_by_key_ex(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OCSP_RESPID_match_ex c6c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc6c, OCSP_RESPID_match_ex(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase SRP_create_verifier_ex c72 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc72, SRP_create_verifier_ex(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase SRP_create_verifier_BN_ex c78 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc78, SRP_create_verifier_BN_ex(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase SRP_Calc_B_ex c7e 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc7e, SRP_Calc_B_ex(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase SRP_Calc_u_ex c84 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc84, SRP_Calc_u_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase SRP_Calc_x_ex c8a 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc8a, SRP_Calc_x_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase SRP_Calc_client_key_ex c90 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc90, SRP_Calc_client_key_ex(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_gettable_params c96 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc96, EVP_PKEY_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get_int_param c9c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xc9c, EVP_PKEY_get_int_param(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get_size_t_param ca2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xca2, EVP_PKEY_get_size_t_param(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get_bn_param ca8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xca8, EVP_PKEY_get_bn_param(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get_utf8_string_param cae b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcae, EVP_PKEY_get_utf8_string_param(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get_octet_string_param cb4 b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcb4, EVP_PKEY_get_octet_string_param(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_is_a cba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcba, EVP_PKEY_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_can_sign cc0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcc0, EVP_PKEY_can_sign(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_STORE_CTX_new_ex cc6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcc6, X509_STORE_CTX_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_STORE_CTX_verify ccc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xccc, X509_STORE_CTX_verify(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CT_POLICY_EVAL_CTX_new_ex cd2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcd2, CT_POLICY_EVAL_CTX_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CTLOG_new_ex cd8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcd8, CTLOG_new_ex(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CTLOG_new_from_base64_ex cde 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcde, CTLOG_new_from_base64_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CTLOG_STORE_new_ex ce4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xce4, CTLOG_STORE_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_set_ex_data cea 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcea, EVP_PKEY_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get_ex_data cf0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcf0, EVP_PKEY_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_group_name cf6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcf6, EVP_PKEY_CTX_set_group_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_group_name cfc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xcfc, EVP_PKEY_CTX_get_group_name(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_ec_paramgen_curve_nid d02 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd02, EVP_PKEY_CTX_set_ec_paramgen_curve_nid(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_PrivateKey_ex d08 ba198006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd08, d2i_PrivateKey_ex(d0,a0,a1,d1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_AutoPrivateKey_ex d0e ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd0e, d2i_AutoPrivateKey_ex(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_PrivateKey_ex_bio d14 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd14, d2i_PrivateKey_ex_bio(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PEM_read_bio_PrivateKey_ex d1a 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd1a, PEM_read_bio_PrivateKey_ex(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dsa_paramgen_bits d20 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd20, EVP_PKEY_CTX_set_dsa_paramgen_bits(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dsa_paramgen_q_bits d26 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd26, EVP_PKEY_CTX_set_dsa_paramgen_q_bits(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dsa_paramgen_md_props d2c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd2c, EVP_PKEY_CTX_set_dsa_paramgen_md_props(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dsa_paramgen_gindex d32 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd32, EVP_PKEY_CTX_set_dsa_paramgen_gindex(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dsa_paramgen_type d38 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd38, EVP_PKEY_CTX_set_dsa_paramgen_type(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dsa_paramgen_seed d3e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd3e, EVP_PKEY_CTX_set_dsa_paramgen_seed(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dsa_paramgen_md d44 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd44, EVP_PKEY_CTX_set_dsa_paramgen_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dh_paramgen_type d4a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd4a, EVP_PKEY_CTX_set_dh_paramgen_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dh_paramgen_gindex d50 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd50, EVP_PKEY_CTX_set_dh_paramgen_gindex(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dh_paramgen_seed d56 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd56, EVP_PKEY_CTX_set_dh_paramgen_seed(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dh_paramgen_prime_len d5c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd5c, EVP_PKEY_CTX_set_dh_paramgen_prime_len(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dh_paramgen_subprime_len d62 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd62, EVP_PKEY_CTX_set_dh_paramgen_subprime_len(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dh_paramgen_generator d68 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd68, EVP_PKEY_CTX_set_dh_paramgen_generator(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dh_nid d6e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd6e, EVP_PKEY_CTX_set_dh_nid(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dh_rfc5114 d74 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd74, EVP_PKEY_CTX_set_dh_rfc5114(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dhx_rfc5114 d7a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd7a, EVP_PKEY_CTX_set_dhx_rfc5114(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_VERIFY_PARAM_get0_host d80 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd80, X509_VERIFY_PARAM_get0_host(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_VERIFY_PARAM_get0_email d86 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd86, X509_VERIFY_PARAM_get0_email(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_VERIFY_PARAM_get1_ip_asc d8c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd8c, X509_VERIFY_PARAM_get1_ip_asc(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_modified d92 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd92, OSSL_PARAM_modified(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_all_unmodified d98 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd98, OSSL_PARAM_set_all_unmodified(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_fetch d9e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xd9e, EVP_RAND_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_up_ref da4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xda4, EVP_RAND_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_free daa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdaa, EVP_RAND_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_get0_name db0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdb0, EVP_RAND_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_is_a db6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdb6, EVP_RAND_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_get0_provider dbc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdbc, EVP_RAND_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_get_params dc2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdc2, EVP_RAND_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_CTX_new dc8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdc8, EVP_RAND_CTX_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_CTX_free dce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdce, EVP_RAND_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_CTX_get0_rand dd4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdd4, EVP_RAND_CTX_get0_rand(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_CTX_get_params dda 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdda, EVP_RAND_CTX_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_CTX_set_params de0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xde0, EVP_RAND_CTX_set_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_gettable_params de6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xde6, EVP_RAND_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_gettable_ctx_params dec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdec, EVP_RAND_gettable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_settable_ctx_params df2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdf2, EVP_RAND_settable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_do_all_provided df8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdf8, EVP_RAND_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_names_do_all dfe a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xdfe, EVP_RAND_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_instantiate e04 a2910806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe04, EVP_RAND_instantiate(a0,d0,d1,a1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_uninstantiate e0a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe0a, EVP_RAND_uninstantiate(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_generate e10 3a2109807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe10, EVP_RAND_generate(a0,a1,d0,d1,d2,a2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_reseed e16 2a190806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe16, EVP_RAND_reseed(a0,d0,a1,d1,a2,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_nonce e1c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe1c, EVP_RAND_nonce(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_enable_locking e22 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe22, EVP_RAND_enable_locking(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_verify_zeroization e28 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe28, EVP_RAND_verify_zeroization(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_get_strength e2e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe2e, EVP_RAND_get_strength(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_get_state e34 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe34, EVP_RAND_get_state(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_default_properties_is_fips_enabled e3a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe3a, EVP_default_properties_is_fips_enabled(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_default_properties_enable_fips e40 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe40, EVP_default_properties_enable_fips(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_new_raw_private_key_ex e46 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe46, EVP_PKEY_new_raw_private_key_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_new_raw_public_key_ex e4c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe4c, EVP_PKEY_new_raw_public_key_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_BLD_push_time_t e52 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe52, OSSL_PARAM_BLD_push_time_t(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_construct_time_t_amiga e58 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe58, OSSL_PARAM_construct_time_t_amiga(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_time_t e5e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe5e, OSSL_PARAM_get_time_t(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_set_time_t e64 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe64, OSSL_PARAM_set_time_t(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_attach e6a 43210ba9809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe6a, OSSL_STORE_attach(a0,a1,a2,a3,d0,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_LOADER_set_attach e70 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe70, OSSL_STORE_LOADER_set_attach(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen e76 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe76, EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md e7c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe7c, EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name e82 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe82, EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_do_all e88 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe88, OSSL_PROVIDER_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EC_GROUP_get_field_type e8e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe8e, EC_GROUP_get_field_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_PUBKEY_eq e94 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe94, X509_PUBKEY_eq(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_eq e9a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xe9a, EVP_PKEY_eq(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_parameters_eq ea0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xea0, EVP_PKEY_parameters_eq(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_query_operation ea6 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xea6, OSSL_PROVIDER_query_operation(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_unquery_operation eac 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xeac, OSSL_PROVIDER_unquery_operation(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_get0_provider_ctx eb2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xeb2, OSSL_PROVIDER_get0_provider_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_get_capabilities eb8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xeb8, OSSL_PROVIDER_get_capabilities(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EC_GROUP_new_by_curve_name_ex ebe 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xebe, EC_GROUP_new_by_curve_name_ex(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EC_KEY_new_ex ec4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xec4, EC_KEY_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EC_KEY_new_by_curve_name_ex eca 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xeca, EC_KEY_new_by_curve_name_ex(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_LIB_CTX_set0_default ed0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xed0, OSSL_LIB_CTX_set0_default(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PEM_X509_INFO_read_bio_ex ed6 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xed6, PEM_X509_INFO_read_bio_ex(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_REQ_verify_ex edc ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xedc, X509_REQ_verify_ex(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_new_ex ee2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xee2, X509_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_LOOKUP_ctrl_ex ee8 2ba190807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xee8, X509_LOOKUP_ctrl_ex(a0,d0,a1,d1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_load_cert_file_ex eee ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xeee, X509_load_cert_file_ex(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_load_cert_crl_file_ex ef4 ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xef4, X509_load_cert_crl_file_ex(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_LOOKUP_by_subject_ex efa 1ba90806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xefa, X509_LOOKUP_by_subject_ex(a0,d0,a1,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_STORE_load_file_ex f00 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf00, X509_STORE_load_file_ex(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_STORE_load_store_ex f06 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf06, X509_STORE_load_store_ex(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_STORE_load_locations_ex f0c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf0c, X509_STORE_load_locations_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_STORE_set_default_paths_ex f12 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf12, X509_STORE_set_default_paths_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_build_chain f18 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf18, X509_build_chain(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509V3_set_issuer_pkey f1e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf1e, X509V3_set_issuer_pkey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2s_ASN1_UTF8STRING f24 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf24, i2s_ASN1_UTF8STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase s2i_ASN1_UTF8STRING f2a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf2a, s2i_ASN1_UTF8STRING(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_open_ex f30 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf30, OSSL_STORE_open_ex(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_fetch f36 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf36, OSSL_DECODER_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_up_ref f3c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf3c, OSSL_DECODER_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_free f42 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf42, OSSL_DECODER_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_get0_provider f48 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf48, OSSL_DECODER_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_get0_properties f4e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf4e, OSSL_DECODER_get0_properties(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_is_a f54 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf54, OSSL_DECODER_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_do_all_provided f5a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf5a, OSSL_DECODER_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_names_do_all f60 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf60, OSSL_DECODER_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_settable_ctx_params f66 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf66, OSSL_DECODER_settable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_new f6c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf6c, OSSL_DECODER_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_set_params f72 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf72, OSSL_DECODER_CTX_set_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_free f78 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf78, OSSL_DECODER_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_set_passphrase f7e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf7e, OSSL_DECODER_CTX_set_passphrase(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_set_pem_password_cb f84 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf84, OSSL_DECODER_CTX_set_pem_password_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_set_passphrase_ui f8a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf8a, OSSL_DECODER_CTX_set_passphrase_ui(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_from_bio f90 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf90, OSSL_DECODER_from_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_add_decoder f96 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf96, OSSL_DECODER_CTX_add_decoder(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_add_extra f9c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xf9c, OSSL_DECODER_CTX_add_extra(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_get_num_decoders fa2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfa2, OSSL_DECODER_CTX_get_num_decoders(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_set_input_type fa8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfa8, OSSL_DECODER_CTX_set_input_type(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_export fae ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfae, OSSL_DECODER_export(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_INSTANCE_get_decoder fb4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfb4, OSSL_DECODER_INSTANCE_get_decoder(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_INSTANCE_get_decoder_ctx fba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfba, OSSL_DECODER_INSTANCE_get_decoder_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_gettable_params fc0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfc0, OSSL_DECODER_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_get_params fc6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfc6, OSSL_DECODER_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_new_for_pkey fcc 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfcc, OSSL_DECODER_CTX_new_for_pkey(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_set_construct fd2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfd2, OSSL_DECODER_CTX_set_construct(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_set_construct_data fd8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfd8, OSSL_DECODER_CTX_set_construct_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_set_cleanup fde 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfde, OSSL_DECODER_CTX_set_cleanup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_get_construct fe4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfe4, OSSL_DECODER_CTX_get_construct(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_get_construct_data fea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xfea, OSSL_DECODER_CTX_get_construct_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_get_cleanup ff0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xff0, OSSL_DECODER_CTX_get_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase RAND_get0_primary ff6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xff6, RAND_get0_primary(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase RAND_get0_public ffc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0xffc, RAND_get0_public(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase RAND_get0_private 1002 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1002, RAND_get0_private(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_SAFEBAG_get0_bag_obj 1008 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1008, PKCS12_SAFEBAG_get0_bag_obj(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_SAFEBAG_get0_bag_type 100e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x100e, PKCS12_SAFEBAG_get0_bag_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_SAFEBAG_create_secret 1014 281004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1014, PKCS12_SAFEBAG_create_secret(d0,d1,a0,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_add1_attr_by_NID 101a 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x101a, PKCS12_add1_attr_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_add1_attr_by_txt 1020 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1020, PKCS12_add1_attr_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_add_secret 1026 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1026, PKCS12_add_secret(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase SMIME_write_ASN1_ex 102c 543b210a98010
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x102c, SMIME_write_ASN1_ex(a0,a1,a2,d0,d1,d2,a3,d3,d4,d5))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase SMIME_read_ASN1_ex 1032 21ba90807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1032, SMIME_read_ASN1_ex(a0,d0,a1,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_ContentInfo_new_ex 1038 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1038, CMS_ContentInfo_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase SMIME_read_CMS_ex 103e a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x103e, SMIME_read_CMS_ex(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_sign_ex 1044 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1044, CMS_sign_ex(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_data_create_ex 104a a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x104a, CMS_data_create_ex(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_digest_create_ex 1050 ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1050, CMS_digest_create_ex(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_EncryptedData_encrypt_ex 1056 2b10a9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1056, CMS_EncryptedData_encrypt_ex(a0,a1,a2,d0,d1,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_encrypt_ex 105c 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x105c, CMS_encrypt_ex(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_EnvelopedData_create_ex 1062 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1062, CMS_EnvelopedData_create_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_ReceiptRequest_create0_ex 1068 ba910806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1068, CMS_ReceiptRequest_create0_ex(a0,d0,d1,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_SignFinal_ex 106e 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x106e, EVP_SignFinal_ex(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_VerifyFinal_ex 1074 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1074, EVP_VerifyFinal_ex(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_DigestSignInit_ex 107a 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x107a, EVP_DigestSignInit_ex(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_DigestVerifyInit_ex 1080 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1080, EVP_DigestVerifyInit_ex(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS7_new_ex 1086 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1086, PKCS7_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS7_sign_ex 108c 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x108c, PKCS7_sign_ex(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS7_encrypt_ex 1092 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1092, PKCS7_encrypt_ex(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase SMIME_read_PKCS7_ex 1098 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1098, SMIME_read_PKCS7_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_self_test 109e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x109e, OSSL_PROVIDER_self_test(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_tls1_prf_md 10a4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10a4, EVP_PKEY_CTX_set_tls1_prf_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set1_tls1_prf_secret 10aa 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10aa, EVP_PKEY_CTX_set1_tls1_prf_secret(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_add1_tls1_prf_seed 10b0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10b0, EVP_PKEY_CTX_add1_tls1_prf_seed(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_hkdf_md 10b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10b6, EVP_PKEY_CTX_set_hkdf_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set1_hkdf_salt 10bc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10bc, EVP_PKEY_CTX_set1_hkdf_salt(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set1_hkdf_key 10c2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10c2, EVP_PKEY_CTX_set1_hkdf_key(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_add1_hkdf_info 10c8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10c8, EVP_PKEY_CTX_add1_hkdf_info(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_hkdf_mode 10ce 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10ce, EVP_PKEY_CTX_set_hkdf_mode(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set1_pbe_pass 10d4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10d4, EVP_PKEY_CTX_set1_pbe_pass(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set1_scrypt_salt 10da 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10da, EVP_PKEY_CTX_set1_scrypt_salt(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_scrypt_N 10e0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10e0, EVP_PKEY_CTX_set_scrypt_N(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_scrypt_r 10e6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10e6, EVP_PKEY_CTX_set_scrypt_r(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_scrypt_p 10ec 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10ec, EVP_PKEY_CTX_set_scrypt_p(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_scrypt_maxmem_bytes 10f2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10f2, EVP_PKEY_CTX_set_scrypt_maxmem_bytes(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dh_kdf_type 10f8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10f8, EVP_PKEY_CTX_set_dh_kdf_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_dh_kdf_type 10fe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x10fe, EVP_PKEY_CTX_get_dh_kdf_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set0_dh_kdf_oid 1104 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1104, EVP_PKEY_CTX_set0_dh_kdf_oid(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get0_dh_kdf_oid 110a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x110a, EVP_PKEY_CTX_get0_dh_kdf_oid(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dh_kdf_md 1110 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1110, EVP_PKEY_CTX_set_dh_kdf_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_dh_kdf_md 1116 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1116, EVP_PKEY_CTX_get_dh_kdf_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_dh_kdf_outlen 111c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x111c, EVP_PKEY_CTX_set_dh_kdf_outlen(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get_dh_kdf_outlen 1122 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1122, EVP_PKEY_CTX_get_dh_kdf_outlen(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set0_dh_kdf_ukm 1128 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1128, EVP_PKEY_CTX_set0_dh_kdf_ukm(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get0_dh_kdf_ukm 112e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x112e, EVP_PKEY_CTX_get0_dh_kdf_ukm(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_CTX_get_updated_iv 1134 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1134, EVP_CIPHER_CTX_get_updated_iv(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_CTX_get_original_iv 113a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x113a, EVP_CIPHER_CTX_get_original_iv(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYMGMT_gettable_params 1140 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1140, EVP_KEYMGMT_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYMGMT_settable_params 1146 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1146, EVP_KEYMGMT_settable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYMGMT_gen_settable_params 114c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x114c, EVP_KEYMGMT_gen_settable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_SIGNATURE_gettable_ctx_params 1152 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1152, EVP_SIGNATURE_gettable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_SIGNATURE_settable_ctx_params 1158 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1158, EVP_SIGNATURE_settable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYEXCH_gettable_ctx_params 115e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x115e, EVP_KEYEXCH_gettable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYEXCH_settable_ctx_params 1164 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1164, EVP_KEYEXCH_settable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase d2i_PUBKEY_ex 116a ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x116a, d2i_PUBKEY_ex(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_INFO_new_PUBKEY 1170 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1170, OSSL_STORE_INFO_new_PUBKEY(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_INFO_get0_PUBKEY 1176 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1176, OSSL_STORE_INFO_get0_PUBKEY(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_INFO_get1_PUBKEY 117c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x117c, OSSL_STORE_INFO_get1_PUBKEY(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PEM_read_bio_PUBKEY_ex 1182 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1182, PEM_read_bio_PUBKEY_ex(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PEM_read_bio_Parameters_ex 1188 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1188, PEM_read_bio_Parameters_ex(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EC_GROUP_new_from_params 118e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x118e, EC_GROUP_new_from_params(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_LOADER_set_open_ex 1194 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1194, OSSL_STORE_LOADER_set_open_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_LOADER_fetch 119a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x119a, OSSL_STORE_LOADER_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_LOADER_up_ref 11a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11a0, OSSL_STORE_LOADER_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_LOADER_get0_provider 11a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11a6, OSSL_STORE_LOADER_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_LOADER_get0_properties 11ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11ac, OSSL_STORE_LOADER_get0_properties(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_LOADER_is_a 11b2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11b2, OSSL_STORE_LOADER_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_LOADER_do_all_provided 11b8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11b8, OSSL_STORE_LOADER_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_LOADER_names_do_all 11be a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11be, OSSL_STORE_LOADER_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_utf8_string_ptr 11c4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11c4, OSSL_PARAM_get_utf8_string_ptr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_get_octet_string_ptr 11ca a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11ca, OSSL_PARAM_get_octet_string_ptr(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_set_passphrase_cb 11d0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11d0, OSSL_DECODER_CTX_set_passphrase_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_mac_key 11d6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11d6, EVP_PKEY_CTX_set_mac_key(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_INFO_new 11dc 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11dc, OSSL_STORE_INFO_new(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_INFO_get0_data 11e2 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11e2, OSSL_STORE_INFO_get0_data(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKCS82PKEY_ex 11e8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11e8, EVP_PKCS82PKEY_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set1_id 11ee 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11ee, EVP_PKEY_CTX_set1_id(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get1_id 11f4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11f4, EVP_PKEY_CTX_get1_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get1_id_len 11fa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x11fa, EVP_PKEY_CTX_get1_id_len(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_AuthEnvelopedData_create 1200 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1200, CMS_AuthEnvelopedData_create(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CMS_AuthEnvelopedData_create_ex 1206 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1206, CMS_AuthEnvelopedData_create_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_ec_param_enc 120c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x120c, EVP_PKEY_CTX_set_ec_param_enc(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get0_type_name 1212 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1212, EVP_PKEY_get0_type_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYMGMT_get0_name 1218 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1218, EVP_KEYMGMT_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEM_free 121e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x121e, EVP_KEM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEM_up_ref 1224 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1224, EVP_KEM_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEM_get0_provider 122a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x122a, EVP_KEM_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEM_fetch 1230 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1230, EVP_KEM_fetch(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEM_is_a 1236 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1236, EVP_KEM_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEM_do_all_provided 123c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x123c, EVP_KEM_do_all_provided(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEM_names_do_all 1242 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1242, EVP_KEM_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_encapsulate_init 1248 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1248, EVP_PKEY_encapsulate_init(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_encapsulate 124e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x124e, EVP_PKEY_encapsulate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_decapsulate_init 1254 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1254, EVP_PKEY_decapsulate_init(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_decapsulate 125a 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x125a, EVP_PKEY_decapsulate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_kem_op 1260 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1260, EVP_PKEY_CTX_set_kem_op(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_gettable_params 1266 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1266, OSSL_ENCODER_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_get_params 126c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x126c, OSSL_ENCODER_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_set_output_type 1272 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1272, OSSL_ENCODER_CTX_set_output_type(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_add_encoder 1278 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1278, OSSL_ENCODER_CTX_add_encoder(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_add_extra 127e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x127e, OSSL_ENCODER_CTX_add_extra(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_get_num_encoders 1284 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1284, OSSL_ENCODER_CTX_get_num_encoders(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_set_selection 128a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x128a, OSSL_ENCODER_CTX_set_selection(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_INSTANCE_get_encoder 1290 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1290, OSSL_ENCODER_INSTANCE_get_encoder(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_INSTANCE_get_encoder_ctx 1296 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1296, OSSL_ENCODER_INSTANCE_get_encoder_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_INSTANCE_get_output_type 129c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x129c, OSSL_ENCODER_INSTANCE_get_output_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_set_construct 12a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12a2, OSSL_ENCODER_CTX_set_construct(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_set_construct_data 12a8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12a8, OSSL_ENCODER_CTX_set_construct_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_set_cleanup 12ae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12ae, OSSL_ENCODER_CTX_set_cleanup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_set_passphrase_cb 12b4 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12b4, OSSL_ENCODER_CTX_set_passphrase_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_type_names_do_all 12ba a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12ba, EVP_PKEY_type_names_do_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_INSTANCE_get_input_type 12c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12c0, OSSL_DECODER_INSTANCE_get_input_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_ASYM_CIPHER_gettable_ctx_params 12c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12c6, EVP_ASYM_CIPHER_gettable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_ASYM_CIPHER_settable_ctx_params 12cc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12cc, EVP_ASYM_CIPHER_settable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEM_gettable_ctx_params 12d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12d2, EVP_KEM_gettable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEM_settable_ctx_params 12d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12d8, EVP_KEM_settable_ctx_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS7_type_is_other 12de 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12de, PKCS7_type_is_other(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS7_get_octet_string 12e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12e4, PKCS7_get_octet_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_from_data 12ea a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12ea, OSSL_DECODER_from_data(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_to_data 12f0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12f0, OSSL_ENCODER_to_data(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get0_libctx 12f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12f6, EVP_PKEY_CTX_get0_libctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get0_propq 12fc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x12fc, EVP_PKEY_CTX_get0_propq(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_set_selection 1302 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1302, OSSL_DECODER_CTX_set_selection(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_CTX_set_input_structure 1308 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1308, OSSL_DECODER_CTX_set_input_structure(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_INSTANCE_get_input_structure 130e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x130e, OSSL_DECODER_INSTANCE_get_input_structure(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_CTX_set_output_structure 1314 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1314, OSSL_ENCODER_CTX_set_output_structure(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_INSTANCE_get_output_structure 131a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x131a, OSSL_ENCODER_INSTANCE_get_output_structure(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PEM_write_bio_PrivateKey_ex 1320 43210ba9809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1320, PEM_write_bio_PrivateKey_ex(a0,a1,a2,a3,d0,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PEM_write_bio_PUBKEY_ex 1326 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1326, PEM_write_bio_PUBKEY_ex(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get_group_name 132c a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x132c, EVP_PKEY_get_group_name(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CRYPTO_atomic_or 1332 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1332, CRYPTO_atomic_or(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase CRYPTO_atomic_load 1338 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1338, CRYPTO_atomic_load(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_pss_keygen_md 133e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x133e, EVP_PKEY_CTX_set_rsa_pss_keygen_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_set_rsa_pss_keygen_md_name 1344 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1344, EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_settable_params 134a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x134a, EVP_PKEY_settable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_set_params 1350 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1350, EVP_PKEY_set_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_set_int_param 1356 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1356, EVP_PKEY_set_int_param(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_set_size_t_param 135c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x135c, EVP_PKEY_set_size_t_param(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_set_bn_param 1362 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1362, EVP_PKEY_set_bn_param(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_set_utf8_string_param 1368 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1368, EVP_PKEY_set_utf8_string_param(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_set_octet_string_param 136e 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x136e, EVP_PKEY_set_octet_string_param(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get_ec_point_conv_form 1374 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1374, EVP_PKEY_get_ec_point_conv_form(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get_field_type 137a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x137a, EVP_PKEY_get_field_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get_params 1380 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1380, EVP_PKEY_get_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_fromdata_init 1386 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1386, EVP_PKEY_fromdata_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_fromdata_settable 138c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x138c, EVP_PKEY_fromdata_settable(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_param_check_quick 1392 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1392, EVP_PKEY_param_check_quick(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_public_check_quick 1398 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1398, EVP_PKEY_public_check_quick(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_is_a 139e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x139e, EVP_PKEY_CTX_is_a(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_CTX_settable_params 13a4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13a4, EVP_CIPHER_CTX_settable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_CTX_gettable_params 13aa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13aa, EVP_CIPHER_CTX_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_CTX_gettable_params 13b0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13b0, EVP_KDF_CTX_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_CTX_settable_params 13b6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13b6, EVP_KDF_CTX_settable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_CTX_gettable_params 13bc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13bc, EVP_MAC_CTX_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_CTX_settable_params 13c2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13c2, EVP_MAC_CTX_settable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_CTX_gettable_params 13c8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13c8, EVP_RAND_CTX_gettable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_CTX_settable_params 13ce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13ce, EVP_RAND_CTX_settable_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase RAND_set_DRBG_type 13d4 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13d4, RAND_set_DRBG_type(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase RAND_set_seed_source_type 13da a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13da, RAND_set_seed_source_type(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BN_mod_exp_mont_consttime_x2 13e0 6543210ba98011
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13e0, BN_mod_exp_mont_consttime_x2(a0,a1,a2,a3,d0,d1,d2,d3,d4,d5,d6))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BIO_f_readbuffer 13e6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13e6, BIO_f_readbuffer())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ESS_check_signing_certs 13ec 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13ec, OSSL_ESS_check_signing_certs(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ESS_signing_cert_new_init 13f2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13f2, OSSL_ESS_signing_cert_new_init(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ESS_signing_cert_v2_new_init 13f8 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13f8, OSSL_ESS_signing_cert_v2_new_init(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ESS_SIGNING_CERT_it 13fe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x13fe, ESS_SIGNING_CERT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ESS_SIGNING_CERT_V2_it 1404 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1404, ESS_SIGNING_CERT_V2_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_Q_digest 140a 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x140a, EVP_Q_digest(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_DigestInit_ex2 1410 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1410, EVP_DigestInit_ex2(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_EncryptInit_ex2 1416 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1416, EVP_EncryptInit_ex2(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_DecryptInit_ex2 141c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x141c, EVP_DecryptInit_ex2(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CipherInit_ex2 1422 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1422, EVP_CipherInit_ex2(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_sign_init_ex 1428 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1428, EVP_PKEY_sign_init_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_verify_init_ex 142e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x142e, EVP_PKEY_verify_init_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_verify_recover_init_ex 1434 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1434, EVP_PKEY_verify_recover_init_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_encrypt_init_ex 143a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x143a, EVP_PKEY_encrypt_init_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_decrypt_init_ex 1440 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1440, EVP_PKEY_decrypt_init_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_derive_init_ex 1446 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1446, EVP_PKEY_derive_init_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase TS_RESP_CTX_new_ex 144c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x144c, TS_RESP_CTX_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_REQ_new_ex 1452 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1452, X509_REQ_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_dup 1458 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1458, EVP_PKEY_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase RSA_PSS_PARAMS_dup 145e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x145e, RSA_PSS_PARAMS_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_derive_set_peer_ex 1464 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1464, EVP_PKEY_derive_set_peer_ex(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_get0_name 146a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x146a, OSSL_DECODER_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_get0_name 1470 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1470, OSSL_ENCODER_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_DECODER_get0_description 1476 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1476, OSSL_DECODER_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_ENCODER_get0_description 147c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x147c, OSSL_ENCODER_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_STORE_LOADER_get0_description 1482 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1482, OSSL_STORE_LOADER_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_get0_description 1488 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1488, EVP_MD_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_get0_description 148e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x148e, EVP_CIPHER_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_get0_description 1494 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1494, EVP_MAC_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_RAND_get0_description 149a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x149a, EVP_RAND_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get0_description 14a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14a0, EVP_PKEY_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYMGMT_get0_description 14a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14a6, EVP_KEYMGMT_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_SIGNATURE_get0_description 14ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14ac, EVP_SIGNATURE_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_ASYM_CIPHER_get0_description 14b2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14b2, EVP_ASYM_CIPHER_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEM_get0_description 14b8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14b8, EVP_KEM_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYEXCH_get0_description 14be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14be, EVP_KEYEXCH_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KDF_get0_description 14c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14c4, EVP_KDF_get0_description(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OPENSSL_sk_find_all 14ca a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14ca, OPENSSL_sk_find_all(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_CRL_new_ex 14d0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14d0, X509_CRL_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_dup 14d6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14d6, OSSL_PARAM_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_merge 14dc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14dc, OSSL_PARAM_merge(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PARAM_free 14e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14e2, OSSL_PARAM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_todata 14e8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14e8, EVP_PKEY_todata(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_export 14ee a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14ee, EVP_PKEY_export(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_CTX_get0_md 14f4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14f4, EVP_MD_CTX_get0_md(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MD_CTX_get1_md 14fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x14fa, EVP_MD_CTX_get1_md(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_CTX_get0_cipher 1500 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1500, EVP_CIPHER_CTX_get0_cipher(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_CIPHER_CTX_get1_cipher 1506 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1506, EVP_CIPHER_CTX_get1_cipher(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_LIB_CTX_get0_global_default 150c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x150c, OSSL_LIB_CTX_get0_global_default())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_SIGNATURE_get0_name 1512 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1512, EVP_SIGNATURE_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_ASYM_CIPHER_get0_name 1518 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1518, EVP_ASYM_CIPHER_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEM_get0_name 151e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x151e, EVP_KEM_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_KEYEXCH_get0_name 1524 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1524, EVP_KEYEXCH_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS5_v2_PBE_keyivgen_ex 152a 4321ba09809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x152a, PKCS5_v2_PBE_keyivgen_ex(a0,a1,d0,a2,a3,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PBE_scrypt_amiga_1 1530 b6420a9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1530, EVP_PBE_scrypt_amiga_1(a0,a1,a2,d0,d2,d4,d6,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PBE_scrypt_amiga_2 1536 18003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1536, EVP_PBE_scrypt_amiga_2(d0,a0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PBE_scrypt_ex_amiga_2 153c a918005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x153c, EVP_PBE_scrypt_ex_amiga_2(d0,a0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS5_v2_scrypt_keyivgen_ex 1542 4321ba09809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1542, PKCS5_v2_scrypt_keyivgen_ex(a0,a1,d0,a2,a3,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PBE_CipherInit_ex 1548 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1548, EVP_PBE_CipherInit_ex(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PBE_find_ex 154e ba981006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x154e, EVP_PBE_find_ex(d0,d1,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_SAFEBAG_create_pkcs8_encrypt_ex 1554 4ba32918009
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1554, PKCS12_SAFEBAG_create_pkcs8_encrypt_ex(d0,a0,d1,a1,d2,d3,a2,a3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS8_decrypt_ex 155a ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x155a, PKCS8_decrypt_ex(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_decrypt_skey_ex 1560 ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1560, PKCS12_decrypt_skey_ex(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS8_encrypt_ex 1566 54b32a1980010
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1566, PKCS8_encrypt_ex(d0,a0,a1,d1,a2,d2,d3,a3,d4,d5))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS8_set0_pbe_ex 156c 1ba90806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x156c, PKCS8_set0_pbe_ex(a0,d0,a1,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_pack_p7encdata_ex 1572 4ba32918009
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1572, PKCS12_pack_p7encdata_ex(d0,a0,d1,a1,d2,d3,a2,a3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_pbe_crypt_ex 1578 5432b1a098010
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1578, PKCS12_pbe_crypt_ex(a0,a1,d0,a2,d1,a3,d2,d3,d4,d5))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_item_decrypt_d2i_ex 157e 321b0a9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x157e, PKCS12_item_decrypt_d2i_ex(a0,a1,a2,d0,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_item_i2d_encrypt_ex 1584 321b0a9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1584, PKCS12_item_i2d_encrypt_ex(a0,a1,a2,d0,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_init_ex 158a 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x158a, PKCS12_init_ex(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_key_gen_asc_ex 1590 65ba4321908011
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1590, PKCS12_key_gen_asc_ex(a0,d0,a1,d1,d2,d3,d4,a2,a3,d5,d6))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_key_gen_uni_ex 1596 65ba4321908011
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1596, PKCS12_key_gen_uni_ex(a0,d0,a1,d1,d2,d3,d4,a2,a3,d5,d6))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_key_gen_utf8_ex 159c 65ba4321908011
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x159c, PKCS12_key_gen_utf8_ex(a0,d0,a1,d1,d2,d3,d4,a2,a3,d5,d6))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_PBE_keyivgen_ex 15a2 4321ba09809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15a2, PKCS12_PBE_keyivgen_ex(a0,a1,d0,a2,a3,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_create_ex 15a8 76543210ba98012
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15a8, PKCS12_create_ex(a0,a1,a2,a3,d0,d1,d2,d3,d4,d5,d6,d7))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_add_key_ex 15ae 3ba2109808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15ae, PKCS12_add_key_ex(a0,a1,d0,d1,d2,a2,a3,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_add_safe_ex 15b4 2ba109807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15b4, PKCS12_add_safe_ex(a0,a1,d0,d1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS12_add_safes_ex 15ba a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15ba, PKCS12_add_safes_ex(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS5_pbe_set0_algor_ex 15c0 a2910806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15c0, PKCS5_pbe_set0_algor_ex(a0,d0,d1,a1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS5_pbe_set_ex 15c6 9281005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15c6, PKCS5_pbe_set_ex(d0,d1,a0,d2,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS5_pbe2_set_iv_ex 15cc b2a190807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15cc, PKCS5_pbe2_set_iv_ex(a0,d0,a1,d1,a2,d2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS5_pbkdf2_set_ex 15d2 93218006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15d2, PKCS5_pbkdf2_set_ex(d0,a0,d1,d2,d3,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BIO_new_from_core_bio 15d8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15d8, BIO_new_from_core_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BIO_new_ex 15de 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15de, BIO_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BIO_s_core 15e4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15e4, BIO_s_core())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BIO_get_line 15ea 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15ea, BIO_get_line(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_LIB_CTX_new_from_dispatch 15f0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15f0, OSSL_LIB_CTX_new_from_dispatch(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_LIB_CTX_new_child 15f6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15f6, OSSL_LIB_CTX_new_child(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OSSL_PROVIDER_get0_dispatch 15fc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x15fc, OSSL_PROVIDER_get0_dispatch(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase PKCS5_PBE_keyivgen_ex 1602 4321ba09809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1602, PKCS5_PBE_keyivgen_ex(a0,a1,d0,a2,a3,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_MAC_CTX_get_block_size 1608 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1608, EVP_MAC_CTX_get_block_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase BIO_debug_callback_ex 160e a432190808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x160e, BIO_debug_callback_ex(a0,d0,a1,d1,d2,d3,d4,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase b2i_PVK_bio_ex 1614 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1614, b2i_PVK_bio_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase i2b_PVK_bio_ex 161a 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x161a, i2b_PVK_bio_ex(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase NCONF_get0_libctx 1620 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1620, NCONF_get0_libctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase NCONF_get_section_names 1626 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1626, NCONF_get_section_names(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase X509_PUBKEY_new_ex 162c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x162c, X509_PUBKEY_new_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ASN1_item_new_ex 1632 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1632, ASN1_item_new_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ASN1_item_d2i_bio_ex 1638 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1638, ASN1_item_d2i_bio_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ASN1_item_d2i_ex 163e 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x163e, ASN1_item_d2i_ex(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase ASN1_TIME_print_ex 1644 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1644, ASN1_TIME_print_ex(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_get0_provider 164a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x164a, EVP_PKEY_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase EVP_PKEY_CTX_get0_provider 1650 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1650, EVP_PKEY_CTX_get0_provider(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OPENSSL_strcasecmp 1656 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x1656, OPENSSL_strcasecmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLExtBase OPENSSL_strncasecmp 165c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLExtBase, 0x165c, OPENSSL_strncasecmp(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_AMISSLEXT_PRAGMAS_H */
