/* OpenSSL was configured with the following options: */
#ifdef OPENSSL_ALGORITHM_DEFINES
   /* no ciphers excluded */
#endif
#ifdef OPENSSL_THREAD_DEFINES
# ifndef THREADS
#  define THREADS
# endif
#endif
#ifdef OPENSSL_OTHER_DEFINES
#endif

#undef I386_ONLY

#if defined(HEADER_CRYPTLIB_H) && !defined(OPENSSLDIR)
#define OPENSSLDIR "AmiSSL:"
#endif

#define OPENSSL_UNISTD <unistd.h>

#if defined(HEADER_IDEA_H) && !defined(IDEA_INT)
#define IDEA_INT unsigned int
#endif

#if defined(HEADER_MD2_H) && !defined(MD2_INT)
#define MD2_INT unsigned int
#endif

#if defined(HEADER_RC2_H) && !defined(RC2_INT)
/* I need to put in a mod for the alpha - eay */
#define RC2_INT unsigned int
#endif

#if defined(HEADER_RC4_H)
#if !defined(RC4_INT)
#define RC4_INT unsigned int
#endif
#endif

#if defined(HEADER_DES_H) && !defined(DES_LONG)
/* If this is set to 'unsigned int' on a DEC Alpha, this gives about a
 * %20 speed up (longs are 8 bytes, int's are 4). */
#ifndef DES_LONG
#define DES_LONG unsigned long
#endif
#endif

#if defined(HEADER_BN_H) && !defined(CONFIG_HEADER_BN_H)
#define CONFIG_HEADER_BN_H
#undef BN_LLONG

/* Should we define BN_DIV2W here? */

/* Only one for the following should be defined */
/* The prime number generation stuff may not work when
 * EIGHT_BIT but I don't care since I've only used this mode
 * for debuging the bignum libraries */
#undef SIXTY_FOUR_BIT_LONG
#undef SIXTY_FOUR_BIT
#define THIRTY_TWO_BIT
#undef SIXTEEN_BIT
#undef EIGHT_BIT
#endif

#if defined(HEADER_RC4_LOCL_H) && !defined(CONFIG_HEADER_RC4_LOCL_H)
#define CONFIG_HEADER_RC4_LOCL_H
/* if this is defined data[i] is used instead of *data, this is a %20
 * speedup on x86 */
#undef RC4_INDEX
#endif

#if defined(HEADER_BF_LOCL_H) && !defined(CONFIG_HEADER_BF_LOCL_H)
#define CONFIG_HEADER_BF_LOCL_H
#undef BF_PTR
#endif /* HEADER_BF_LOCL_H */

#if defined(HEADER_DES_LOCL_H) && !defined(CONFIG_HEADER_DES_LOCL_H)
#define CONFIG_HEADER_DES_LOCL_H
#ifndef DES_DEFAULT_OPTIONS
/* the following is tweaked from a config script, that is why it is a
 * protected undef/define */
#ifndef DES_PTR
#undef DES_PTR
#endif

/* Unroll the inner loop, this sometimes helps, sometimes hinders.
 * Very mucy CPU dependant */
#ifndef DES_UNROLL
#undef DES_UNROLL
#endif

#endif /* DES_DEFAULT_OPTIONS */
#endif /* HEADER_DES_LOCL_H */

#if (defined(HEADER_NEW_DES_H) || defined(HEADER_DES_H)) && !defined(DES_LONG)
/* If this is set to 'unsigned int' on a DEC Alpha, this gives about a
 * %20 speed up (longs are 8 bytes, int's are 4). */
#ifndef DES_LONG
#define DES_LONG unsigned long
#endif
#endif
