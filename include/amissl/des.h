/* crypto/des/des.h */
/* Copyright (C) 1995-1997 Eric Young (eay@cryptsoft.com)
 * All rights reserved.
 *
 * This package is an SSL implementation written
 * by Eric Young (eay@cryptsoft.com).
 * The implementation was written so as to conform with Netscapes SSL.
 * 
 * This library is free for commercial and non-commercial use as long as
 * the following conditions are aheared to.  The following conditions
 * apply to all code found in this distribution, be it the RC4, RSA,
 * lhash, DES, etc., code; not just the SSL code.  The SSL documentation
 * included with this distribution is covered by the same copyright terms
 * except that the holder is Tim Hudson (tjh@cryptsoft.com).
 * 
 * Copyright remains Eric Young's, and as such any Copyright notices in
 * the code are not to be removed.
 * If this package is used in a product, Eric Young should be given attribution
 * as the author of the parts of the library used.
 * This can be in the form of a textual message at program startup or
 * in documentation (online or textual) provided with the package.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *    "This product includes cryptographic software written by
 *     Eric Young (eay@cryptsoft.com)"
 *    The word 'cryptographic' can be left out if the rouines from the library
 *    being used are not cryptographic related :-).
 * 4. If you include any Windows specific code (or a derivative thereof) from 
 *    the apps directory (application code) you must include an acknowledgement:
 *    "This product includes software written by Tim Hudson (tjh@cryptsoft.com)"
 * 
 * THIS SOFTWARE IS PROVIDED BY ERIC YOUNG ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * 
 * The licence and distribution terms for any publically available version or
 * derivative of this code cannot be changed.  i.e. this code cannot simply be
 * copied and put under another distribution licence
 * [including the GNU Public Licence.]
 */

#ifndef HEADER_NEW_DES_H
#define HEADER_NEW_DES_H

#include <amissl/amisslconf.h> /* DES_LONG */
#include <amissl/e_os2.h>	/* OPENSSL_EXTERN */

#ifdef  __cplusplus
extern "C" {
#endif

typedef unsigned char DES_cblock[8];
typedef /* const */ unsigned char const_DES_cblock[8];
/* With "const", gcc 2.8.1 on Solaris thinks that DES_cblock *
 * and const_DES_cblock * are incompatible pointer types. */

typedef struct DES_ks
    {
    union
	{
	DES_cblock cblock;
	/* make sure things are correct size on machines with
	 * 8 byte longs */
	DES_LONG deslong[2];
	} ks[16];
    } DES_key_schedule;

#ifndef OPENSSL_DISABLE_OLD_DES_SUPPORT
# ifndef OPENSSL_ENABLE_OLD_DES_SUPPORT
#  define OPENSSL_ENABLE_OLD_DES_SUPPORT
# endif
#endif

#ifdef OPENSSL_ENABLE_OLD_DES_SUPPORT
# include <amissl/des_old.h>
#endif

#define DES_KEY_SZ 	(sizeof(DES_cblock))
#define DES_SCHEDULE_SZ (sizeof(DES_key_schedule))

#define DES_ENCRYPT	1
#define DES_DECRYPT	0

#define DES_CBC_MODE	0
#define DES_PCBC_MODE	1

#define DES_ecb2_encrypt(i,o,k1,k2,e) \
	DES_ecb3_encrypt((i),(o),(k1),(k2),(k1),(e))

#define DES_ede2_cbc_encrypt(i,o,l,k1,k2,iv,e) \
	DES_ede3_cbc_encrypt((i),(o),(l),(k1),(k2),(k1),(iv),(e))

#define DES_ede2_cfb64_encrypt(i,o,l,k1,k2,iv,n,e) \
	DES_ede3_cfb64_encrypt((i),(o),(l),(k1),(k2),(k1),(iv),(n),(e))

#define DES_ede2_ofb64_encrypt(i,o,l,k1,k2,iv,n) \
	DES_ede3_ofb64_encrypt((i),(o),(l),(k1),(k2),(k1),(iv),(n))

OPENSSL_DECLARE_GLOBAL(int,DES_check_key);	/* defaults to false */
#define DES_check_key OPENSSL_GLOBAL_REF(DES_check_key)
OPENSSL_DECLARE_GLOBAL(int,DES_rw_mode);	/* defaults to DES_PCBC_MODE */
#define DES_rw_mode OPENSSL_GLOBAL_REF(DES_rw_mode)

#define DES_fixup_key_parity DES_set_odd_parity

#ifdef  __cplusplus
}
#endif

#endif
