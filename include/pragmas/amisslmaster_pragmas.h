/* Automatically generated header (sfdc 1.10)! Do not edit! */
#ifndef PRAGMAS_AMISSLMASTER_PRAGMAS_H
#define PRAGMAS_AMISSLMASTER_PRAGMAS_H

/*
**   $VER: amisslmaster_pragmas.h $Id$ $Id$
**
**   Direct ROM interface (pragma) definitions.
**
**   Copyright © 2001 Amiga, Inc.
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
 #pragma libcall AmiSSLMasterBase InitAmiSSLMaster 1e 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLMasterBase, 0x1e, InitAmiSSLMaster(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLMasterBase OpenAmiSSL 24 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLMasterBase, 0x24, OpenAmiSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLMasterBase CloseAmiSSL 2a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLMasterBase, 0x2a, CloseAmiSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLMasterBase OpenAmiSSLCipher 30 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLMasterBase, 0x30, OpenAmiSSLCipher(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLMasterBase CloseAmiSSLCipher 36 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLMasterBase, 0x36, CloseAmiSSLCipher(a0))
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_AMISSLMASTER_PRAGMAS_H */
