/* crypto/crypto.h */
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

#ifndef HEADER_CRYPTO_H
#define HEADER_CRYPTO_H

#include <stdlib.h>

#include <amissl/stack.h>
#include <amissl/safestack.h>
#include <amissl/amisslv.h>

/* Resolve problems on some operating systems with symbol names that clash
   one way or another */
#include <amissl/symhacks.h>

#ifdef  __cplusplus
extern "C" {
#endif

/* Backward compatibility to SSLeay */
/* This is more to be used to check the correct DLL is being used
 * in the MS world. */
#define SSLEAY_VERSION_NUMBER	OPENSSL_VERSION_NUMBER
#define SSLEAY_VERSION		0
/* #define SSLEAY_OPTIONS	1 no longer supported */
#define SSLEAY_CFLAGS		2
#define SSLEAY_BUILT_ON		3
#define SSLEAY_PLATFORM		4

/* When changing the CRYPTO_LOCK_* list, be sure to maintin the text lock
 * names in cryptlib.c
 */

#define	CRYPTO_LOCK_ERR			1
#define	CRYPTO_LOCK_ERR_HASH		2
#define	CRYPTO_LOCK_X509		3
#define	CRYPTO_LOCK_X509_INFO		4
#define	CRYPTO_LOCK_X509_PKEY		5
#define CRYPTO_LOCK_X509_CRL		6
#define CRYPTO_LOCK_X509_REQ		7
#define CRYPTO_LOCK_DSA			8
#define CRYPTO_LOCK_RSA			9
#define CRYPTO_LOCK_EVP_PKEY		10
#define	CRYPTO_LOCK_X509_STORE		11
#define	CRYPTO_LOCK_SSL_CTX		12
#define	CRYPTO_LOCK_SSL_CERT		13
#define	CRYPTO_LOCK_SSL_SESSION		14
#define	CRYPTO_LOCK_SSL_SESS_CERT	15
#define	CRYPTO_LOCK_SSL			16
#define	CRYPTO_LOCK_RAND		17
#define	CRYPTO_LOCK_RAND2		18
#define	CRYPTO_LOCK_MALLOC		19
#define	CRYPTO_LOCK_BIO			20
#define	CRYPTO_LOCK_GETHOSTBYNAME	21
#define	CRYPTO_LOCK_GETSERVBYNAME	22
#define	CRYPTO_LOCK_READDIR		23
#define	CRYPTO_LOCK_RSA_BLINDING	24
#define	CRYPTO_LOCK_DH			25
#define	CRYPTO_LOCK_MALLOC2		26
#define	CRYPTO_LOCK_DSO			27
#define	CRYPTO_LOCK_DYNLOCK		28
#define	CRYPTO_NUM_LOCKS		29

#define CRYPTO_LOCK		1
#define CRYPTO_UNLOCK		2
#define CRYPTO_READ		4
#define CRYPTO_WRITE		8

#ifndef NO_LOCKING
#ifndef CRYPTO_w_lock
#define CRYPTO_w_lock(type)	\
	CRYPTO_lock(CRYPTO_LOCK|CRYPTO_WRITE,type,__FILE__,__LINE__)
#define CRYPTO_w_unlock(type)	\
	CRYPTO_lock(CRYPTO_UNLOCK|CRYPTO_WRITE,type,__FILE__,__LINE__)
#define CRYPTO_r_lock(type)	\
	CRYPTO_lock(CRYPTO_LOCK|CRYPTO_READ,type,__FILE__,__LINE__)
#define CRYPTO_r_unlock(type)	\
	CRYPTO_lock(CRYPTO_UNLOCK|CRYPTO_READ,type,__FILE__,__LINE__)
#define CRYPTO_add(addr,amount,type)	\
	CRYPTO_add_lock(addr,amount,type,__FILE__,__LINE__)
#endif
#else
#define CRYPTO_w_lock(a)
#define	CRYPTO_w_unlock(a)
#define CRYPTO_r_lock(a)
#define CRYPTO_r_unlock(a)
#define CRYPTO_add(a,b,c)	((*(a))+=(b))
#endif

/* Some applications as well as some parts of OpenSSL need to allocate
   and deallocate locks in a dynamic fashion.  The following typedef
   makes this possible in a type-safe manner.  */
/* struct CRYPTO_dynlock_value has to be defined by the application. */
typedef struct
	{
	int references;
	struct CRYPTO_dynlock_value *data;
	} CRYPTO_dynlock;


/* The following can be used to detect memory leaks in the SSLeay library.
 * It used, it turns on malloc checking */

#define CRYPTO_MEM_CHECK_OFF	0x0	/* an enume */
#define CRYPTO_MEM_CHECK_ON	0x1	/* a bit */
#define CRYPTO_MEM_CHECK_ENABLE	0x2	/* a bit */
#define CRYPTO_MEM_CHECK_DISABLE 0x3	/* an enume */

/* The following are bit values to turn on or off options connected to the
 * malloc checking functionality */

/* Adds time to the memory checking information */
#define V_CRYPTO_MDEBUG_TIME	0x1 /* a bit */
/* Adds thread number to the memory checking information */
#define V_CRYPTO_MDEBUG_THREAD	0x2 /* a bit */

#define V_CRYPTO_MDEBUG_ALL (V_CRYPTO_MDEBUG_TIME | V_CRYPTO_MDEBUG_THREAD)


/* predec of the BIO type */
typedef struct bio_st BIO_dummy;

typedef struct crypto_ex_data_st
	{
	STACK *sk;
	int dummy; /* gcc is screwing up this data structure :-( */
	} CRYPTO_EX_DATA;

/* Called when a new object is created */
typedef int CRYPTO_EX_new(void *parent, void *ptr, CRYPTO_EX_DATA *ad,
					int idx, long argl, void *argp);
/* Called when an object is free()ed */
typedef void CRYPTO_EX_free(void *parent, void *ptr, CRYPTO_EX_DATA *ad,
					int idx, long argl, void *argp);
/* Called when we need to dup an object */
typedef int CRYPTO_EX_dup(CRYPTO_EX_DATA *to, CRYPTO_EX_DATA *from, void *from_d, 
					int idx, long argl, void *argp);

/* This stuff is basically class callback functions
 * The current classes are SSL_CTX, SSL, SSL_SESSION, and a few more */

typedef struct crypto_ex_data_func_st
	{
	long argl;	/* Arbitary long */
	void *argp;	/* Arbitary void * */
	CRYPTO_EX_new *new_func;
	CRYPTO_EX_free *free_func;
	CRYPTO_EX_dup *dup_func;
	} CRYPTO_EX_DATA_FUNCS;

DECLARE_STACK_OF(CRYPTO_EX_DATA_FUNCS)

/* Per class, we have a STACK of CRYPTO_EX_DATA_FUNCS for each CRYPTO_EX_DATA
 * entry.
 */

#define CRYPTO_EX_INDEX_BIO		0
#define CRYPTO_EX_INDEX_SSL		1
#define CRYPTO_EX_INDEX_SSL_CTX		2
#define CRYPTO_EX_INDEX_SSL_SESSION	3
#define CRYPTO_EX_INDEX_X509_STORE	4
#define CRYPTO_EX_INDEX_X509_STORE_CTX	5


/* This is the default callbacks, but we can have others as well:
 * this is needed in Win32 where the application malloc and the
 * library malloc may not be the same.
 */
#define CRYPTO_malloc_init()	CRYPTO_set_mem_functions(\
	malloc, realloc, free)

#if defined CRYPTO_MDEBUG_ALL || defined CRYPTO_MDEBUG_TIME || defined CRYPTO_MDEBUG_THREAD
# ifndef CRYPTO_MDEBUG /* avoid duplicate #define */
#  define CRYPTO_MDEBUG
# endif
#endif

/* Set standard debugging functions (not done by default
 * unless CRYPTO_MDEBUG is defined) */
#define CRYPTO_malloc_debug_init()	do {\
	CRYPTO_set_mem_debug_functions(\
		CRYPTO_dbg_malloc,\
		CRYPTO_dbg_realloc,\
		CRYPTO_dbg_free,\
		CRYPTO_dbg_set_options,\
		CRYPTO_dbg_get_options);\
	} while(0)

/* for applications */
#define MemCheck_start() CRYPTO_mem_ctrl(CRYPTO_MEM_CHECK_ON)
#define MemCheck_stop()	CRYPTO_mem_ctrl(CRYPTO_MEM_CHECK_OFF)

/* for library-internal use */
#define MemCheck_on()	CRYPTO_mem_ctrl(CRYPTO_MEM_CHECK_ENABLE)
#define MemCheck_off()	CRYPTO_mem_ctrl(CRYPTO_MEM_CHECK_DISABLE)
#define is_MemCheck_on() CRYPTO_is_mem_check_on()

#define OPENSSL_malloc(num)	CRYPTO_malloc((int)num,__FILE__,__LINE__)
#define OPENSSL_realloc(addr,num) \
	CRYPTO_realloc((char *)addr,(int)num,__FILE__,__LINE__)
#define OPENSSL_remalloc(addr,num) \
	CRYPTO_remalloc((char **)addr,(int)num,__FILE__,__LINE__)
#define OPENSSL_freeFunc	CRYPTO_free
#define OPENSSL_free(addr)	CRYPTO_free(addr)

#define OPENSSL_malloc_locked(num) \
	CRYPTO_malloc_locked((int)num,__FILE__,__LINE__)
#define OPENSSL_free_locked(addr) CRYPTO_free_locked(addr)

#define CRYPTO_push_info(info) \
        CRYPTO_push_info_(info, __FILE__, __LINE__);

/* Error codes for the CRYPTO functions. */

/* Function codes. */
#define CRYPTO_F_CRYPTO_GET_EX_NEW_INDEX		 100
#define CRYPTO_F_CRYPTO_GET_NEW_DYNLOCKID		 103
#define CRYPTO_F_CRYPTO_GET_NEW_LOCKID			 101
#define CRYPTO_F_CRYPTO_SET_EX_DATA			 102

/* Reason codes. */
#define CRYPTO_R_NO_DYNLOCK_CREATE_CALLBACK		 100

#ifdef  __cplusplus
}
#endif
#endif
