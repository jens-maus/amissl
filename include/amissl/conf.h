/* crypto/conf/conf.h */
/* Copyright (C) 1995-1998 Eric Young (eay@cryptsoft.com)
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

#ifndef  HEADER_CONF_H
#define HEADER_CONF_H

#include <amissl/bio.h>
#include <amissl/lhash.h>
#include <amissl/stack.h>
#include <amissl/safestack.h>

#include <amissl/e_os.h>

#ifdef  __cplusplus
extern "C" {
#endif

typedef struct
	{
	char *section;
	char *name;
	char *value;
	} CONF_VALUE;

DECLARE_STACK_OF(CONF_VALUE)

struct conf_st;
typedef struct conf_st CONF;
struct conf_method_st;
typedef struct conf_method_st CONF_METHOD;

struct conf_method_st
	{
	const char *name;
	CONF *(*create)(CONF_METHOD *meth);
	int (*init)(CONF *conf);
	int (*destroy)(CONF *conf);
	int (*destroy_data)(CONF *conf);
	int (*load)(CONF *conf, BIO *bp, long *eline);
	int (*dump)(CONF *conf, BIO *bp);
	int (*is_number)(CONF *conf, char c);
	int (*to_int)(CONF *conf, char c);
	};

struct conf_st
	{
	CONF_METHOD *meth;
	void *meth_data;
	LHASH *data;
	};

/* Error codes for the CONF functions. */

/* Function codes. */
#define CONF_F_CONF_DUMP_FP				 104
#define CONF_F_CONF_LOAD				 100
#define CONF_F_CONF_LOAD_BIO				 102
#define CONF_F_CONF_LOAD_FP				 103
#define CONF_F_NCONF_DUMP_BIO				 105
#define CONF_F_NCONF_DUMP_FP				 106
#define CONF_F_NCONF_GET_NUMBER				 107
#define CONF_F_NCONF_GET_SECTION			 108
#define CONF_F_NCONF_GET_STRING				 109
#define CONF_F_NCONF_LOAD_BIO				 110
#define CONF_F_NCONF_NEW				 111
#define CONF_F_STR_COPY					 101

/* Reason codes. */
#define CONF_R_MISSING_CLOSE_SQUARE_BRACKET		 100
#define CONF_R_MISSING_EQUAL_SIGN			 101
#define CONF_R_NO_CLOSE_BRACE				 102
#define CONF_R_NO_CONF					 105
#define CONF_R_NO_CONF_OR_ENVIRONMENT_VARIABLE		 106
#define CONF_R_NO_SECTION				 107
#define CONF_R_UNABLE_TO_CREATE_NEW_SECTION		 103
#define CONF_R_VARIABLE_HAS_NO_VALUE			 104

#ifdef  __cplusplus
}
#endif
#endif
